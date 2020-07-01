/*
 * File: VITALALL_private.h
 *
 * Code generated for Simulink model 'VITALALL'.
 *
 * Model version                  : 1.384
 * Simulink Coder version         : 8.9 (R2015b) 13-Aug-2015
 * C/C++ source code generated on : Fri Jun 16 08:26:37 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-32 (Windows32)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_VITALALL_private_h_
#define RTW_HEADER_VITALALL_private_h_
#include "rtwtypes.h"
#include "model_reference_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

extern rtTimingBridge VITALALL_TimingBrdg;
extern void ROUTE(boolean_T rtu_SIG, boolean_T rtu_PM1, boolean_T rtu_PM2,
                  boolean_T rtu_PM3, boolean_T rtu_L, boolean_T rtu_RST,
                  boolean_T rtu_RRLS, boolean_T rtu_TP, ConstB_ROUTE_T *localC,
                  DW_ROUTE_T *localDW);
extern void VITALALL_ROUTE(boolean_T rtu_SIG, boolean_T rtu_PM1, boolean_T
  rtu_PM2, boolean_T rtu_PM3, boolean_T rtu_L, boolean_T rtu_RST, boolean_T
  rtu_RRLS, boolean_T rtu_TP, boolean_T rtu_FINISH, B_ROUTE_g_T *localB,
  DW_ROUTE_k_T *localDW);

#endif                                 /* RTW_HEADER_VITALALL_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
