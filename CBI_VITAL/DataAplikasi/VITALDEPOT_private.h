/*
 * File: VITALDEPOT_private.h
 *
 * Code generated for Simulink model 'VITALDEPOT'.
 *
 * Model version                  : 1.368
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Nov 08 19:00:58 2017
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

#ifndef RTW_HEADER_VITALDEPOT_private_h_
#define RTW_HEADER_VITALDEPOT_private_h_
#include "rtwtypes.h"
#include "model_reference_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       ((rtmGetSimTimeStep((rtm))) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       ((rtmGetSimTimeStep((rtm))) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(sti, tid)      (VITALDEPOT_TimingBrdg->taskCounter[VITALDEPOT_GlobalTID[sti]] == 0)
#endif

/* Macros for accessing real-time model data structure */
#ifndef rtmGetClockTick0
# define rtmGetClockTick0()            ( *((VITALDEPOT_TimingBrdg->clockTick[VITALDEPOT_GlobalTID[0]])) )
#endif

#ifndef rtmGetClockTick1
# define rtmGetClockTick1()            ( *((VITALDEPOT_TimingBrdg->clockTick[VITALDEPOT_GlobalTID[1]])) )
#endif

#ifndef rtmGetClockTickH0
# define rtmGetClockTickH0()           ( *(VITALDEPOT_TimingBrdg->clockTickH[VITALDEPOT_GlobalTID[0]]) )
#endif

#ifndef rtmGetClockTickH1
# define rtmGetClockTickH1()           ( *(VITALDEPOT_TimingBrdg->clockTickH[VITALDEPOT_GlobalTID[1]]) )
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        (*((rtm)->errorStatus))
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   (*((rtm)->errorStatus) = (val))
#endif

#ifndef rtmGetErrorStatusPointer
# define rtmGetErrorStatusPointer(rtm) (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatusPointer
# define rtmSetErrorStatusPointer(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        (*((rtm)->Timing.simTimeStep))
#endif

#ifndef rtmGetSimTimeStepPointer
# define rtmGetSimTimeStepPointer(rtm) (rtm)->Timing.simTimeStep
#endif

#ifndef rtmSetSimTimeStepPointer
# define rtmSetSimTimeStepPointer(rtm, val) ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetT
# define rtmGetT()                     (*(VITALDEPOT_TimingBrdg->taskTime[0]))
#endif

extern int_T VITALDEPOT_GlobalTID[2];
extern const rtTimingBridge *VITALDEPOT_TimingBrdg;

#endif                                 /* RTW_HEADER_VITALDEPOT_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
