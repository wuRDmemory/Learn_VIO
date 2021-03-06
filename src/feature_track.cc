#include "ros/ros.h"
#include "../include/feature_track.h"
#include "../include/util/config.h"
#include "../include/util/tick.h"

int image_id  =0;
int FeatureTrack::id = 0;

FeatureTrack::FeatureTrack() {
    ids_.clear();
    curr_pts_.clear();
    prev_pts_.clear();

    camera_ = NULL;
}

FeatureTrack::~FeatureTrack() {
    ROS_DEBUG("[feature track] Im deading...");
}

void FeatureTrack::readImage(const cv::Mat& image, double timestamp) {
    curr_image_ = image.clone();
    curr_timestamp_  = timestamp;

    if (!prev_pts_.empty()) {
        curr_pts_.clear();

        vector<uchar> status;
        vector<float> error;
        cv::calcOpticalFlowPyrLK(prev_image_, curr_image_, prev_pts_, curr_pts_, status, error, cv::Size(21, 21), 3);

        int track_num = 0;
        for (int i = 0; i < (int)status.size(); i++) {
            if  (status[i] && !isVisable(curr_pts_[i])) {
                status[i] = 0;
            }
            track_num += status[i];
        }
        
        reduceVector(prev_pts_,  status);
        reduceVector(curr_pts_,  status);
        reduceVector(ids_,       status);
        reduceVector(track_cnt_, status);

        ROS_DEBUG("[LK track] LK track %d done!", track_num);
    }

    // update track count
    for (int& n : track_cnt_)
        n++;
    
    // frequency control here
    if (PUB_THIS_FRAME) {
        // use fundamental matrix filte some oulier
        rejectWithF();

        // set the mask 
        setMask();
        
        // fetch new feature
        pts_new_.clear();
        int N = MAX_CNT - (int)curr_pts_.size();
        if (N > 0) {
            ROS_DEBUG("[read image] Begin fetch feature.");
            Tick tick;
            cv::goodFeaturesToTrack(curr_image_, pts_new_, N, 0.01, MIN_DIST, mask_);
            ROS_DEBUG("[read image] Fetch feature %d done! %lf s", (int)pts_new_.size(), tick.delta_time());
        }

        if (image_id < 20){   // test match
            cv::Mat image;
            cv::addWeighted(prev_image_, 0.5, curr_image_, 0.5, 0, image);
            cv::cvtColor(image, image, cv::COLOR_GRAY2BGR);

            for (int i = 0; i < curr_pts_.size(); i++) {
                int r = cv::theRNG().uniform(0, 255);
                int g = cv::theRNG().uniform(0, 255);
                int b = cv::theRNG().uniform(0, 255);

                cv::circle(image, prev_pts_[i], 2, cv::Scalar(r, g, b), 1);
                cv::circle(image, curr_pts_[i], 2, cv::Scalar(r, g, b), 1);
                cv::line(image, prev_pts_[i], curr_pts_[i], cv::Scalar(r, g, b), 1);

                cv::putText(image, to_string(ids_[i]), curr_pts_[i], cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255, 0, 0));
            }

            // string name = "/home/ubuntu/catkin_ws/src/learn_vio/images/image"+ to_string(image_id++)+".png";
            // cv::imwrite(name.c_str(), image);
        }
    } 
    else {
        pts_new_.clear();
    }

    // undistort curr point
    undistortPoints();

    prev_image_     = curr_image_.clone();
    prev_pts_       = curr_pts_;
    prev_id_pts_    = curr_id_pts_;
    prev_timestamp_ = curr_timestamp_;
}

bool FeatureTrack::isVisable(const cv::Point2f& pt) {
    const int b = 10;
    const int x = pt.x;
    const int y = pt.y;

    bool c1 = b < x && x < COL-10;
    bool c2 = b < y && y < ROW-10;
    
    return c1 && c2;
}

template<typename T>
void FeatureTrack::reduceVector(vector<T>& vec, vector<uchar>& status) {
    int j = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (status[i]) {
            vec[j] = vec[i];
            j++;     
        }
    }
    vec.resize(j);
}

void FeatureTrack::rejectWithF() {
    if (curr_pts_.size() > 8)  {
        ROS_DEBUG("[reject] FM ransac begin!!!");
        Tick tick;
        
        // convert point in image to normalized plane
        vector<cv::Point2f> un_prev_pts(prev_pts_.size());
        vector<cv::Point2f> un_curr_pts(curr_pts_.size());

        Vector3f Pc;
        for (int i = 0; i < curr_pts_.size(); i++) {

            Pc = camera_->cam2world(prev_pts_[i].x, prev_pts_[i].y);
            Pc.x() = FOCAL_LENGTH * Pc.x() / Pc.z() + COL / 2.0;
            Pc.y() = FOCAL_LENGTH * Pc.y() / Pc.z() + ROW / 2.0;
            un_prev_pts[i] = cv::Point2f(Pc.x(), Pc.y());

            Pc = camera_->cam2world(curr_pts_[i].x, curr_pts_[i].y);
            Pc.x() = FOCAL_LENGTH * Pc.x() / Pc.z() + COL / 2.0;
            Pc.y() = FOCAL_LENGTH * Pc.y() / Pc.z() + ROW / 2.0;
            un_curr_pts[i] = cv::Point2f(Pc.x(), Pc.y());
        }
        vector<uchar> status;
        cv::findFundamentalMat(un_prev_pts, un_curr_pts, cv::FM_RANSAC, F_THRESHOLD, 0.99, status);

        int size_a = curr_pts_.size();
        reduceVector(prev_pts_,    status);
        reduceVector(curr_pts_,    status);
        reduceVector(ids_,         status);
        reduceVector(track_cnt_,   status);

        ROS_DEBUG("[reject] FM ransac: %d -> %lu: %f", size_a, curr_pts_.size(), 1.0 * curr_pts_.size() / size_a);
        ROS_DEBUG("[reject] FM ransac costs: %lf ms", tick.delta_time());
    }
}

void FeatureTrack:: setMask() {
    if (FISHEYE) {
        mask_ = fisheye_mask_.clone();
    }
    else {
        mask_ = cv::Mat(ROW, COL, CV_8U, cv::Scalar::all(255));
    }

    Tick tick;
    ROS_DEBUG("[set mask] Begin build mask");

    // track status
    // vector<pair<int, pair<pair<cv::Point2f, cv::Point2f>, int> > > cnt_pts_id;
    vector<pair<int, pair<pair<cv::Point2f, cv::Point2f>, int> > > cnt_pts_id;
    cnt_pts_id.reserve(curr_pts_.size());

    for (unsigned int i = 0; i < curr_pts_.size(); i++) {
        cnt_pts_id.emplace_back(track_cnt_[i], make_pair(make_pair(prev_pts_[i], curr_pts_[i]), ids_[i]));
    }

    sort(cnt_pts_id.begin(), cnt_pts_id.end(), [](pair<int, pair<pair<cv::Point2f, cv::Point2f>, int> > &a, pair<int, pair<pair<cv::Point2f, cv::Point2f>, int> > &b)
         {
            return a.first > b.first;
         });

    prev_pts_.clear();
    curr_pts_.clear();
    ids_.clear();
    track_cnt_.clear();

    for (auto &it : cnt_pts_id)
    {
        if (mask_.at<uchar>(it.second.first.second) == 255)
        {
            prev_pts_.push_back(it.second.first.first);
            curr_pts_.push_back(it.second.first.second);
            ids_.push_back(it.second.second);
            track_cnt_.push_back(it.first);
            cv::circle(mask_, it.second.first.second, MIN_DIST, 0, -1);
        }
    }
    
    ROS_DEBUG("[set mask] build mask done! %lf ms", tick.delta_time());

}

void FeatureTrack::undistortPoints() {
    curr_un_pts_.clear();
    curr_id_pts_.clear();
    
    ROS_DEBUG("[undistort] Begin undistort point");
    Tick tick;

    Vector3f Pc;
    for (int i = 0; i < curr_pts_.size(); i++) {
        cv::Point2f& pc = curr_pts_[i];
        Pc = camera_->cam2world(pc.x, pc.y);
        curr_un_pts_.emplace_back(Pc.x(), Pc.y());
        curr_id_pts_.insert(make_pair(ids_[i], cv::Point2f(Pc.x(), Pc.y())));
    }

    pts_velocity_.clear();
    if (!prev_id_pts_.empty()) {
        float dt = curr_timestamp_ - prev_timestamp_;
        
        for (int i = 0; i < curr_un_pts_.size(); i++) {
            int id = ids_[i];

            if (id == -1) continue;

            auto it = prev_id_pts_.find(id);
            if (it != prev_id_pts_.end()) {
                cv::Point2f d = curr_un_pts_[i] - it->second;
                pts_velocity_.push_back(d/dt);
            }
            else {
                pts_velocity_.emplace_back(0, 0);
            }
        }
    }
    else {
        for (int i = 0; i < curr_un_pts_.size(); i++) {
            pts_velocity_.emplace_back(0, 0);
        }
    }

    ROS_DEBUG("[undistort] Undistort point done! %lf s", tick.delta_time());
}

void FeatureTrack::addPoints() {
    for (int i = 0; i < pts_new_.size(); i++) {
        ids_.push_back(id++);
        track_cnt_.push_back(1);
        prev_pts_.push_back(pts_new_[i]);
    }
    pts_new_.clear();
}
