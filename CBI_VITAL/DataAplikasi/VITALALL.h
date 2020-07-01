/*
 * File: VITALALL.h
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

#ifndef RTW_HEADER_VITALALL_h_
#define RTW_HEADER_VITALALL_h_
#include <string.h>
#include <stddef.h>
#ifndef VITALALL_COMMON_INCLUDES_
# define VITALALL_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* VITALALL_COMMON_INCLUDES_ */

#include "VITALALL_types.h"

/* Shared type includes */
#include "model_reference_types.h"

/* Child system includes */
#define VITALMAIN_MDLREF_HIDE_CHILD_
#include "VITALMAIN.h"
#define VITALDEPOT_MDLREF_HIDE_CHILD_
#include "VITALDEPOT.h"

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

/* Block signals and states (auto storage) for system '<S47>/ROUTE' */
typedef struct {
  boolean_T Memory;                    /* '<S68>/Memory' */
  boolean_T Memory_PreviousInput;      /* '<S68>/Memory' */
} DW_ROUTE_T;

/* Block signals and states (auto storage) for system '<Root>' */
typedef struct {
  DW_ROUTE_T ROUTE1_b;                 /* '<S66>/ROUTE1' */
  DW_ROUTE_T ROUTE_g;                  /* '<S65>/ROUTE' */
  DW_ROUTE_T ROUTE_h3;                 /* '<S64>/ROUTE' */
  DW_ROUTE_T ROUTE_f0;                 /* '<S63>/ROUTE' */
  DW_ROUTE_T ROUTE_i;                  /* '<S62>/ROUTE' */
  DW_ROUTE_T ROUTE1_d;                 /* '<S61>/ROUTE1' */
  DW_ROUTE_T ROUTE_aw;                 /* '<S60>/ROUTE' */
  DW_ROUTE_T ROUTE_j;                  /* '<S59>/ROUTE' */
  DW_ROUTE_T ROUTE1_j;                 /* '<S58>/ROUTE1' */
  DW_ROUTE_T ROUTE_f;                  /* '<S57>/ROUTE' */
  DW_ROUTE_T ROUTE1;                   /* '<S56>/ROUTE1' */
  DW_ROUTE_T ROUTE_k;                  /* '<S55>/ROUTE' */
  DW_ROUTE_T ROUTE_a;                  /* '<S54>/ROUTE' */
  DW_ROUTE_T ROUTE_e;                  /* '<S53>/ROUTE' */
  DW_ROUTE_T ROUTE_p;                  /* '<S52>/ROUTE' */
  DW_ROUTE_T ROUTE_b;                  /* '<S51>/ROUTE' */
  DW_ROUTE_T ROUTE_h;                  /* '<S50>/ROUTE' */
  DW_ROUTE_T ROUTE_dj;                 /* '<S49>/ROUTE' */
  DW_ROUTE_T ROUTE_d;                  /* '<S48>/ROUTE' */
  DW_ROUTE_T ROUTE_n;                  /* '<S47>/ROUTE' */
  boolean_T Memory[2];                 /* '<S11>/Memory' */
  boolean_T TmpSignalConversionAtVITALMAINL[27];
  boolean_T TmpSignalConversionAtVITALMAI_a[5];
  boolean_T TmpSignalConversionAtVITALMAI_l[5];
  boolean_T VITALMAINLINE_o1[3];       /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o4[27];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o5[25];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o6[25];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o7[7];       /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o8[9];       /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o9[5];       /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o10[5];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o11[5];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o12[5];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o13[5];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o14[5];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o15[5];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o16[5];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o17[5];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o18[5];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o19[5];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o20[5];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o21[8];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o22[2];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o23[8];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o24[3];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o25[8];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o27[8];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o28[2];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o29[5];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o30[5];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o31[5];      /* '<S11>/VITAL MAINLINE' */
  boolean_T TmpSignalConversionAtVITALDEPOT[10];
  boolean_T TmpSignalConversionAtVITALDEP_c[4];
  boolean_T TmpSignalConversionAtVITALDEP_p[4];
  boolean_T VITALDEPOT_o1[2];          /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o4[10];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o5[3];          /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o6[3];          /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o7[4];          /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o8[4];          /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o9[4];          /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o10[4];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o11[4];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o12[4];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o13[4];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o14[4];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o15[4];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o16[4];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o17[4];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o18[4];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o19[8];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o20[8];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o21[8];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o23[8];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o24[4];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o25[4];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o26[4];         /* '<S11>/VITAL DEPOT' */
  boolean_T Memory_PreviousInput[2];   /* '<S11>/Memory' */
  boolean_T AND;                       /* '<S22>/AND' */
  boolean_T VITALMAINLINE_o2;          /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o3;          /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o26;         /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALDEPOT_o2;             /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o3;             /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o22;            /* '<S11>/VITAL DEPOT' */
} DW_VITALALL_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  boolean_T DATAFROMNV[151];           /* '<Root>/DATAFROMNV' */
  boolean_T DATAFROMZC[43];            /* '<Root>/DATAFROMZC' */
  boolean_T INT1[16];                  /* '<Root>/INT1' */
  boolean_T INTIB[32];                 /* '<Root>/INTIB' */
  boolean_T INT2[16];                  /* '<Root>/INT2' */
  boolean_T INT3[32];                  /* '<Root>/INT3' */
  boolean_T INDEP[80];                 /* '<Root>/INDEP' */
  boolean_T CBISYSTEM[4];              /* '<Root>/CBISYSTEM' */
} ExtU_VITALALL_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  boolean_T DATATONV[311];             /* '<Root>/DATATONV' */
  boolean_T DATATOZC[171];             /* '<Root>/DATATOZC' */
  boolean_T OUTT1[8];                  /* '<Root>/OUTT1' */
  boolean_T OUTTIB[32];                /* '<Root>/OUTTIB' */
  boolean_T OUTT2[8];                  /* '<Root>/OUTT2' */
  boolean_T OUTT3[24];                 /* '<Root>/OUTT3' */
  boolean_T OUTDEP[40];                /* '<Root>/OUTDEP' */
  boolean_T SIMULATION[47];            /* '<Root>/SIMULATION' */
} ExtY_VITALALL_T;

/* Real-time Model Data Structure */
struct tag_RTM_VITALALL_T {
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
extern DW_VITALALL_T VITALALL_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_VITALALL_T VITALALL_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_VITALALL_T VITALALL_Y;

/* Model entry point functions */
extern void VITALALL_initialize(void);
extern void VITALALL_step(void);

/* Real-time Model object */
extern RT_MODEL_VITALALL_T *const VITALALL_M;

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
 * '<Root>' : 'VITALALL'
 * '<S1>'   : 'VITALALL/VITAL'
 * '<S2>'   : 'VITALALL/VITAL/DATA MAPPING'
 * '<S3>'   : 'VITALALL/VITAL/DATA TO//FROM NV + SIM'
 * '<S4>'   : 'VITALALL/VITAL/DATA TO//FROM ZC'
 * '<S5>'   : 'VITALALL/VITAL/GLOBAL VARIABLE'
 * '<S6>'   : 'VITALALL/VITAL/I//O DEPOT'
 * '<S7>'   : 'VITALALL/VITAL/I//O TERMIINAL 1'
 * '<S8>'   : 'VITALALL/VITAL/I//O TERMIINAL 2'
 * '<S9>'   : 'VITALALL/VITAL/I//O TERMIINAL 3'
 * '<S10>'  : 'VITALALL/VITAL/I//O TERMIINAL IB'
 * '<S11>'  : 'VITALALL/VITAL/INTERLOCKING'
 * '<S12>'  : 'VITALALL/VITAL/ZONE CONTROLLER'
 * '<S13>'  : 'VITALALL/VITAL/DATA MAPPING/DATA TO//FROM NV'
 * '<S14>'  : 'VITALALL/VITAL/DATA MAPPING/ED-DI'
 * '<S15>'  : 'VITALALL/VITAL/DATA MAPPING/ESB-DI'
 * '<S16>'  : 'VITALALL/VITAL/DATA MAPPING/NWP-DI'
 * '<S17>'  : 'VITALALL/VITAL/DATA MAPPING/NWR-DO'
 * '<S18>'  : 'VITALALL/VITAL/DATA MAPPING/PSD-DI'
 * '<S19>'  : 'VITALALL/VITAL/DATA MAPPING/RWP-DI'
 * '<S20>'  : 'VITALALL/VITAL/DATA MAPPING/RWR-DO'
 * '<S21>'  : 'VITALALL/VITAL/DATA MAPPING/TPR-DI'
 * '<S22>'  : 'VITALALL/VITAL/DATA MAPPING/VDR-DI'
 * '<S23>'  : 'VITALALL/VITAL/DATA MAPPING/VDR-DO'
 * '<S24>'  : 'VITALALL/VITAL/DATA MAPPING/WLPR-DO'
 * '<S25>'  : 'VITALALL/VITAL/DATA TO//FROM ZC/DATA FROM ZC'
 * '<S26>'  : 'VITALALL/VITAL/DATA TO//FROM ZC/DATA FROM ZC1'
 * '<S27>'  : 'VITALALL/VITAL/DATA TO//FROM ZC/Subsystem'
 * '<S28>'  : 'VITALALL/VITAL/I//O DEPOT/INPUT DEPOT'
 * '<S29>'  : 'VITALALL/VITAL/I//O DEPOT/OUTPUT DEPOT'
 * '<S30>'  : 'VITALALL/VITAL/I//O TERMIINAL 1/INPUT TERMINAL 1'
 * '<S31>'  : 'VITALALL/VITAL/I//O TERMIINAL 1/OUTPUT TERMINAL 1'
 * '<S32>'  : 'VITALALL/VITAL/I//O TERMIINAL 2/INPUT TERMINAL 2'
 * '<S33>'  : 'VITALALL/VITAL/I//O TERMIINAL 2/OUTPUT TERMINAL 2'
 * '<S34>'  : 'VITALALL/VITAL/I//O TERMIINAL 3/INPUT TERMINAL 3'
 * '<S35>'  : 'VITALALL/VITAL/I//O TERMIINAL 3/OUTPUT TERMINAL 3'
 * '<S36>'  : 'VITALALL/VITAL/I//O TERMIINAL IB/INPUT TERMINAL IB'
 * '<S37>'  : 'VITALALL/VITAL/I//O TERMIINAL IB/OUTPUT TERMINAL IB'
 * '<S38>'  : 'VITALALL/VITAL/INTERLOCKING/MAPPING'
 * '<S39>'  : 'VITALALL/VITAL/ZONE CONTROLLER/POINT MACHINE'
 * '<S40>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE'
 * '<S41>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/ES//WS'
 * '<S42>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC'
 * '<S43>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/POINT MACHINE'
 * '<S44>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/RRLS'
 * '<S45>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/RST'
 * '<S46>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/SIGNAL'
 * '<S47>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/10-12'
 * '<S48>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/10-22'
 * '<S49>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/10-DEP'
 * '<S50>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/12-10'
 * '<S51>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/12-14'
 * '<S52>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/12-20'
 * '<S53>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/12-24'
 * '<S54>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/14-12'
 * '<S55>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/14-22'
 * '<S56>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/20-12'
 * '<S57>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/20-22'
 * '<S58>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/20-DEP'
 * '<S59>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/22-10'
 * '<S60>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/22-14'
 * '<S61>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/22-20'
 * '<S62>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/22-24'
 * '<S63>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/24-12'
 * '<S64>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/24-22'
 * '<S65>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/DEP-10'
 * '<S66>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/DEP-20'
 * '<S67>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/MAPPING'
 * '<S68>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/10-12/ROUTE'
 * '<S69>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/10-22/ROUTE'
 * '<S70>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/10-DEP/ROUTE'
 * '<S71>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/12-10/ROUTE'
 * '<S72>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/12-14/ROUTE'
 * '<S73>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/12-20/ROUTE'
 * '<S74>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/12-24/ROUTE'
 * '<S75>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/14-12/ROUTE'
 * '<S76>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/14-22/ROUTE'
 * '<S77>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/20-12/ROUTE1'
 * '<S78>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/20-22/ROUTE'
 * '<S79>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/20-DEP/ROUTE1'
 * '<S80>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/22-10/ROUTE'
 * '<S81>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/22-14/ROUTE'
 * '<S82>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/22-20/ROUTE1'
 * '<S83>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/22-24/ROUTE'
 * '<S84>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/24-12/ROUTE'
 * '<S85>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/24-22/ROUTE'
 * '<S86>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/DEP-10/ROUTE'
 * '<S87>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/DEP-20/ROUTE1'
 */

/*-
 * Requirements for '<Root>': VITALALL
 */
#endif                                 /* RTW_HEADER_VITALALL_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
