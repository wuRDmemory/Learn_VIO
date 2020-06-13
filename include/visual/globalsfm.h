#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

#include "opencv2/opencv.hpp"
#include "eigen3/Eigen/Core"
#include "eigen3/Eigen/Dense"
#include "opencv/cxeigen.hpp"

#include "feature.h"
#include "../inertial/preintegrate.h"

using namespace std;
using namespace cv;
using namespace Eigen;

class FrameStruct {
public:
    PreIntegrate* preintegrate_;
    Matrix3f      Rcw_;
    Vector3f      tcw_;
    set<int>      feature_ids_;
    double        t_;

public:
    FrameStruct() = delete;
    FrameStruct(Image_Type& image, double t): t_(t), preintegrate_(nullptr) {
        Rcw_.setIdentity();
        tcw_.setZero();

        for (auto& pir : image) {
            feature_ids_.insert(pir.first);
        }
    }
};

int computeRelativeRT(const vector<Point2f>& pts1, const vector<Point2f>& pts2, Matrix3f& Rcr, Vector3f& tcr);
int globalSFM(map<int, Feature*>& all_ftr, vector<FrameStruct>& frames, Matrix3f& Rcl, Vector3f& tcl, int l);