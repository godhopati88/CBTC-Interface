/*
 * File: VITALALL_private.h
 *
 * Code generated for Simulink model 'VITALALL'.
 *
 * Model version                  : 1.442
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Nov 08 19:04:32 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-32 (Windows32)
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 *    4. Traceability
 * Validation result: Not run
 */

#ifndef RTW_HEADER_VITALALL_private_h_
#define RTW_HEADER_VITALALL_private_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "VITALALL.h"

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
                  boolean_T rtu_RRLS, DW_ROUTE_T *localDW);

#endif                                 /* RTW_HEADER_VITALALL_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
