/*
 * File: NONVITALALL.h
 *
 * Code generated for Simulink model 'NONVITALALL'.
 *
 * Model version                  : 1.339
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Jun 24 22:55:04 2020
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

#ifndef RTW_HEADER_NONVITALALL_h_
#define RTW_HEADER_NONVITALALL_h_
#include <string.h>
#include <stddef.h>
#ifndef NONVITALALL_COMMON_INCLUDES_
# define NONVITALALL_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* NONVITALALL_COMMON_INCLUDES_ */

#include "NONVITALALL_types.h"

/* Shared type includes */
#include "model_reference_types.h"

/* Child system includes */
#define NONVITALMAIN_MDLREF_HIDE_CHILD_
#include "NONVITALMAIN.h"
#define NONVITALDEPOT_MDLREF_HIDE_CHILD_
#include "NONVITALDEPOT.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
# define rtmGetErrorStatusPointer(rtm) ((const char_T **)(&((rtm)->errorStatus)))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

/* Block signals and states (auto storage) for system '<Root>' */
typedef struct {
  boolean_T Memory[6];                 /* '<S1>/Memory' */
  boolean_T Switch3[331];              /* '<S4>/Switch3' */
  boolean_T TmpSignalConversionAtNONVITALDEPOTInport23[4];
  boolean_T NONVITALMAINLINE_o1[17];   /* '<S1>/NONVITAL MAINLINE' */
  boolean_T NONVITALMAINLINE_o4[16];   /* '<S1>/NONVITAL MAINLINE' */
  boolean_T NONVITALMAINLINE_o5[5];    /* '<S1>/NONVITAL MAINLINE' */
  boolean_T NONVITALMAINLINE_o6[5];    /* '<S1>/NONVITAL MAINLINE' */
  boolean_T NONVITALMAINLINE_o7[5];    /* '<S1>/NONVITAL MAINLINE' */
  boolean_T NONVITALMAINLINE_o8[8];    /* '<S1>/NONVITAL MAINLINE' */
  boolean_T NONVITALMAINLINE_o9[5];    /* '<S1>/NONVITAL MAINLINE' */
  boolean_T NONVITALMAINLINE_o10[5];   /* '<S1>/NONVITAL MAINLINE' */
  boolean_T NONVITALMAINLINE_o11[9];   /* '<S1>/NONVITAL MAINLINE' */
  boolean_T NONVITALMAINLINE_o12[8];   /* '<S1>/NONVITAL MAINLINE' */
  boolean_T NONVITALMAINLINE_o13[31];  /* '<S1>/NONVITAL MAINLINE' */
  boolean_T NONVITALMAINLINE_o14[7];   /* '<S1>/NONVITAL MAINLINE' */
  boolean_T NONVITALMAINLINE_o15[18];  /* '<S1>/NONVITAL MAINLINE' */
  boolean_T NONVITALMAINLINE_o16[144]; /* '<S1>/NONVITAL MAINLINE' */
  boolean_T NONVITALMAINLINE_o17[81];  /* '<S1>/NONVITAL MAINLINE' */
  boolean_T NONVITALMAINLINE_o18[20];  /* '<S1>/NONVITAL MAINLINE' */
  boolean_T NONVITALMAINLINE_o19[42];  /* '<S1>/NONVITAL MAINLINE' */
  boolean_T NONVITALDEPOT_o1[6];       /* '<S1>/NONVITAL DEPOT' */
  boolean_T NONVITALDEPOT_o3[12];      /* '<S1>/NONVITAL DEPOT' */
  boolean_T NONVITALDEPOT_o4[4];       /* '<S1>/NONVITAL DEPOT' */
  boolean_T NONVITALDEPOT_o5[4];       /* '<S1>/NONVITAL DEPOT' */
  boolean_T NONVITALDEPOT_o6[4];       /* '<S1>/NONVITAL DEPOT' */
  boolean_T NONVITALDEPOT_o7[8];       /* '<S1>/NONVITAL DEPOT' */
  boolean_T NONVITALDEPOT_o8[4];       /* '<S1>/NONVITAL DEPOT' */
  boolean_T NONVITALDEPOT_o9[4];       /* '<S1>/NONVITAL DEPOT' */
  boolean_T NONVITALDEPOT_o10[7];      /* '<S1>/NONVITAL DEPOT' */
  boolean_T NONVITALDEPOT_o11[12];     /* '<S1>/NONVITAL DEPOT' */
  boolean_T NONVITALDEPOT_o13[7];      /* '<S1>/NONVITAL DEPOT' */
  boolean_T NONVITALDEPOT_o14[16];     /* '<S1>/NONVITAL DEPOT' */
  boolean_T NONVITALDEPOT_o15[60];     /* '<S1>/NONVITAL DEPOT' */
  boolean_T NONVITALDEPOT_o16[20];     /* '<S1>/NONVITAL DEPOT' */
  boolean_T NONVITALDEPOT_o17[15];     /* '<S1>/NONVITAL DEPOT' */
  boolean_T NONVITALDEPOT_o18[11];     /* '<S1>/NONVITAL DEPOT' */
  boolean_T Memory_PreviousInput[6];   /* '<S1>/Memory' */
  boolean_T Memory1_PreviousInput[331];/* '<S4>/Memory1' */
  boolean_T Memory_PreviousInput_f[160];/* '<S5>/Memory' */
  boolean_T NONVITALMAINLINE_o2;       /* '<S1>/NONVITAL MAINLINE' */
  boolean_T NONVITALMAINLINE_o3;       /* '<S1>/NONVITAL MAINLINE' */
  boolean_T NONVITALDEPOT_o2;          /* '<S1>/NONVITAL DEPOT' */
  boolean_T NONVITALDEPOT_o12;         /* '<S1>/NONVITAL DEPOT' */
} DW_NONVITALALL_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  boolean_T DATAFROMV[331];            /* '<Root>/DATAFROMV' */
  boolean_T DATAFROMARS[40];           /* '<Root>/DATAFROMARS' */
  boolean_T MAINLINEDI[61];            /* '<Root>/MAINLINEDI' */
  boolean_T DEPOTDI[29];               /* '<Root>/DEPOTDI' */
  boolean_T NVCOMM[2];                 /* '<Root>/NV-COMM' */
} ExtU_NONVITALALL_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  boolean_T DATATOV[160];              /* '<Root>/DATATOV' */
  boolean_T DATATOARS[38];             /* '<Root>/DATATOARS' */
  boolean_T MAINLINEDO[312];           /* '<Root>/MAINLINEDO' */
  boolean_T DEPOTDO[129];              /* '<Root>/DEPOTDO' */
  boolean_T DATATOLOGM[710];           /* '<Root>/DATATOLOGM' */
  boolean_T DATATOLOGD[308];           /* '<Root>/DATATOLOGD' */
  real_T REVISI;                       /* '<Root>/REVISI' */
} ExtY_NONVITALALL_T;

/* Real-time Model Data Structure */
struct tag_RTM_NONVITALALL_T {
  const char_T * volatile errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block signals and states (auto storage) */
extern DW_NONVITALALL_T NONVITALALL_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_NONVITALALL_T NONVITALALL_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_NONVITALALL_T NONVITALALL_Y;

/* Model entry point functions */
extern void NONVITALALL_initialize(void);
extern void NONVITALALL_step(void);

/* Real-time Model object */
extern RT_MODEL_NONVITALALL_T *const NONVITALALL_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'NONVITALALL'
 * '<S1>'   : 'NONVITALALL/NONVITAL'
 * '<S2>'   : 'NONVITALALL/NONVITAL/MAPPING'
 * '<S3>'   : 'NONVITALALL/NONVITAL/MAPPING/Subsystem'
 * '<S4>'   : 'NONVITALALL/NONVITAL/MAPPING/Subsystem1'
 * '<S5>'   : 'NONVITALALL/NONVITAL/MAPPING/Subsystem2'
 * '<S6>'   : 'NONVITALALL/NONVITAL/MAPPING/Subsystem3'
 * '<S7>'   : 'NONVITALALL/NONVITAL/MAPPING/Subsystem4'
 * '<S8>'   : 'NONVITALALL/NONVITAL/MAPPING/Subsystem5'
 */

/*-
 * Requirements for '<Root>': NONVITALALL
 */
#endif                                 /* RTW_HEADER_NONVITALALL_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
