#pragma once

#include <iostream>
#include <vector>

#include "eigen3/Eigen/Core"
#include "eigen3/Eigen/Dense"

#include "ceres/ceres.h"
#include "ceres/sized_cost_function.h"

#include "preintegrate.h"
#include "config.h"

using namespace std;
using namespace Eigen;

FILE* fp_;

class Inertial_Factor : public ceres::SizedCostFunction<15, 7, 9, 7, 9>
{
private:
    PreIntegrate* pre_inte_;
    int i_;
    int j_;

public:
    Inertial_Factor() = delete;
    Inertial_Factor(int i, int j, PreIntegrate* pre_inte) {
        pre_inte_ = pre_inte;
        i_ = i;
        j_ = j;

        // fp_ = fopen("./inertial_factor.txt", "w");
        // fclose(fp_);
    }

    virtual bool Evaluate(double const* const* parameters, double* residuals, double** jacobians) const {
        
        Eigen::Vector3d    pwi(parameters[0][0], parameters[0][1], parameters[0][2]);
        Eigen::Quaterniond qwi(parameters[0][6], parameters[0][3], parameters[0][4], parameters[0][5]);
        Eigen::Vector3d    vwi(parameters[1][0], parameters[1][1], parameters[1][2]);
        Eigen::Vector3d    bai(parameters[1][3], parameters[1][4], parameters[1][5]);
        Eigen::Vector3d    bgi(parameters[1][6], parameters[1][7], parameters[1][8]);
        
        Eigen::Vector3d    pwj(parameters[2][0], parameters[2][1], parameters[2][2]);
        Eigen::Quaterniond qwj(parameters[2][6], parameters[2][3], parameters[2][4], parameters[2][5]);
        Eigen::Vector3d    vwj(parameters[3][0], parameters[3][1], parameters[3][2]);
        Eigen::Vector3d    baj(parameters[3][3], parameters[3][4], parameters[3][5]);
        Eigen::Vector3d    bgj(parameters[3][6], parameters[3][7], parameters[3][8]);

        Map<Matrix<double, 15, 1>> residual(residuals);
        residual = pre_inte_->evaluate(qwi, pwi, vwi, bai, bgi, 
                                       qwj, pwj, vwj, baj, bgj);
        
        // half of information matrix
        Matrix<double, 15, 15> info = Eigen::LLT<Matrix<double, 15, 15>>(pre_inte_->covariance_.inverse()).matrixL().transpose();

        // fp_ = fopen("./inertial_factor.txt", "a");
        // fprintf(fp_, "%d->%d: %lf\n", i_, j_, pre_inte_->sum_dt_);
        // fprintf(fp_, "%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n", bai(0), bai(1), bai(2), bgi(0), bgi(1), bgi(2));
        // fprintf(fp_, "%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n", baj(0), baj(1), baj(2), bgj(0), bgj(1), bgj(2));
        // fprintf(fp_, "%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n\n", 
        //         residual(0),  residual(1),  residual(2), 
        //         residual(3),  residual(4),  residual(5), 
        //         residual(6),  residual(7),  residual(8), 
        //         residual(9),  residual(10), residual(11), 
        //         residual(12), residual(13), residual(14));
        
        // fclose(fp_);

        residual = info*residual;


        if (jacobians) {
            Matrix3d I = Matrix3d::Identity();

            // for jacobian
            double   dt   = pre_inte_->sum_dt_;
            Vector3d bg   = pre_inte_->gyro_bias_;
            Matrix3d Jqbg = pre_inte_->Jacobian_.block<3, 3>(J_OR, J_OBW);
            Matrix3d Jpba = pre_inte_->Jacobian_.block<3, 3>(J_OP, J_OBA);
            Matrix3d Jpbg = pre_inte_->Jacobian_.block<3, 3>(J_OP, J_OBW);
            Matrix3d Jvba = pre_inte_->Jacobian_.block<3, 3>(J_OV, J_OBA);
            Matrix3d Jvbg = pre_inte_->Jacobian_.block<3, 3>(J_OV, J_OBW);
            Quaterniond delta_qij = pre_inte_->delta_q_;

            if (jacobians[0]) {
                Map<Matrix<double, 15, 7, RowMajor>> Jaco(jacobians[0]);
                Jaco.setZero();
                
                Quaterniond corr_delta_qij = delta_qij*vec2quat<double>(Jqbg*(bgi-bg));

                Jaco.block<3, 3>(J_OP, J_OP) = -qwi.toRotationMatrix().transpose();
                Jaco.block<3, 3>(J_OP, J_OR) = symmetricMatrix(qwi.inverse()*(pwj - pwi - vwi*dt + 0.5*Gw*dt*dt));

                Jaco.block<3, 3>(J_OR, J_OR) = -(quatLeftMult(qwj.inverse()*qwi)*quatRightMult(corr_delta_qij)).bottomRightCorner<3, 3>();
                Jaco.block<3, 3>(J_OV, J_OR) = symmetricMatrix(qwi.inverse()*(vwj - vwi + Gw*dt));

                Jaco = info * Jaco;
            }

            if (jacobians[1]) {
                Map<Matrix<double, 15, 9, RowMajor>> Jaco(jacobians[1]);
                Jaco.setZero();

                Jaco.block<3, 3>(J_OP, J_OV-J_OV)  = -qwi.toRotationMatrix().transpose()*dt;
                Jaco.block<3, 3>(J_OP, J_OBA-J_OV) = -Jpba;
                Jaco.block<3, 3>(J_OP, J_OBW-J_OV) = -Jpbg;

                Jaco.block<3, 3>(J_OR, J_OBW-J_OV) = -(quatLeftMult(qwj.inverse()*qwi*delta_qij)).bottomRightCorner<3, 3>()*Jqbg;

                Jaco.block<3, 3>(J_OV, J_OV-J_OV)  = -qwi.toRotationMatrix().transpose();
                Jaco.block<3, 3>(J_OV, J_OBA-J_OV) = -Jvba;
                Jaco.block<3, 3>(J_OV, J_OBW-J_OV) = -Jvbg;

                Jaco.block<3, 3>(J_OBA, J_OBA-J_OV) = -I;
                Jaco.block<3, 3>(J_OBW, J_OBW-J_OV) = -I;

                Jaco = info * Jaco;
            }

            if (jacobians[2]) {
                Map<Matrix<double, 15, 7, RowMajor>> Jaco(jacobians[2]);
                Jaco.setZero();
                
                Quaterniond corr_delta_qij = delta_qij*vec2quat<double>(Jqbg*(bgi-bg));

                Jaco.block<3, 3>(J_OP, J_OP) = qwi.toRotationMatrix().transpose();

                Jaco.block<3, 3>(J_OR, J_OR) = (quatLeftMult(corr_delta_qij.inverse()*qwi.inverse()*qwj)).bottomRightCorner<3, 3>();
                
                Jaco = info * Jaco;
            }

            if (jacobians[3]) {
                Map<Matrix<double, 15, 9, RowMajor>> Jaco(jacobians[3]);
                Jaco.setZero();

                Jaco.block<3, 3>(J_OV, J_OV-J_OV) = qwi.toRotationMatrix().transpose();

                Jaco.block<3, 3>(J_OBA, J_OBA-J_OV) = I;
                Jaco.block<3, 3>(J_OBW, J_OBW-J_OV) = I;

                Jaco = info * Jaco;
            }
        }

        return true;
    }
};

