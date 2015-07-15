//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: SLAM.h
//
// MATLAB Coder version            : 2.8
// C/C++ source code generated on  : 15-Jul-2015 17:00:42
//
#ifndef __SLAM_H__
#define __SLAM_H__

// Include Files
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "SLAM_types.h"

// Function Declarations
extern void SLAM(double updateVect[32], const double z_all_l[64], const double
                 z_all_r[64], double dt, const double processNoise[4], const
                 double IMU_measurements[9], const double imNoise[4], double
                 numPointsPerAnchor, double numAnchors, emxArray_real_T *h_u_apo,
                 emxArray_real_T *xt_out, emxArray_real_T *P_apo_out, double
                 b_map[96]);
extern void SLAM_free();
extern void SLAM_init();
extern void initialized_not_empty_init();

#endif

//
// File trailer for SLAM.h
//
// [EOF]
//
