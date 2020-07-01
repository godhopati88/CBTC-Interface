/*
 * File: VITALALL.h
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

/* Block states (auto storage) for system '<S46>/ROUTE LOGIC' */
typedef struct {
  boolean_T Memory_PreviousInput;      /* '<S67>/Memory' */
  boolean_T Memory1_PreviousInput;     /* '<S67>/Memory1' */
} DW_ROUTE_T;

/* Block signals for system '<S50>/ROUTE LOGIC' */
typedef struct {
  boolean_T Memory;                    /* '<S71>/Memory' */
} B_ROUTE_g_T;

/* Block states (auto storage) for system '<S50>/ROUTE LOGIC' */
typedef struct {
  boolean_T Memory_PreviousInput;      /* '<S71>/Memory' */
  boolean_T Memory1_PreviousInput;     /* '<S71>/Memory1' */
} DW_ROUTE_k_T;

/* Block signals (auto storage) */
typedef struct {
  boolean_T Memory[4];                 /* '<S11>/Memory' */
  boolean_T AND;                       /* '<S22>/AND' */
  boolean_T TmpSignalConversionAtVITALMAINL[27];
  boolean_T TmpSignalConversionAtVITALMAI_a[5];
  boolean_T TmpSignalConversionAtVITALMAI_l[5];
  boolean_T VITALMAINLINE_o1[6];       /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o2;          /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o3;          /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o4[27];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o5[21];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o6[21];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o7[7];       /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o8[7];       /* '<S11>/VITAL MAINLINE' */
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
  boolean_T VITALMAINLINE_o24[2];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o25[8];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o26;         /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o27[8];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o28[2];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o29[5];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o30[5];      /* '<S11>/VITAL MAINLINE' */
  boolean_T VITALMAINLINE_o31[5];      /* '<S11>/VITAL MAINLINE' */
  boolean_T TmpSignalConversionAtVITALDEPOT[10];
  boolean_T TmpSignalConversionAtVITALDEP_b[4];
  boolean_T TmpSignalConversionAtVITALDEP_f[4];
  boolean_T VITALDEPOT_o1[4];          /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o2[10];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o3[3];          /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o4[3];          /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o5[4];          /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o6[4];          /* '<S11>/VITAL DEPOT' */
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
  boolean_T VITALDEPOT_o17[8];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o18[8];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o19[8];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o20[8];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o21[4];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o22[4];         /* '<S11>/VITAL DEPOT' */
  boolean_T VITALDEPOT_o23[4];         /* '<S11>/VITAL DEPOT' */
  B_ROUTE_g_T ROUTELOGIC_bp;           /* '<S65>/ROUTE LOGIC' */
  B_ROUTE_g_T ROUTELOGIC_d;            /* '<S60>/ROUTE LOGIC' */
  B_ROUTE_g_T ROUTELOGIC_b;            /* '<S57>/ROUTE LOGIC' */
  B_ROUTE_g_T ROUTELOGIC;              /* '<S55>/ROUTE LOGIC' */
  B_ROUTE_g_T ROUTELOGIC_i;            /* '<S54>/ROUTE LOGIC' */
  B_ROUTE_g_T ROUTELOGIC_c;            /* '<S50>/ROUTE LOGIC' */
} B_VITALALL_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  boolean_T Memory_PreviousInput[4];   /* '<S11>/Memory' */
  DW_ROUTE_k_T ROUTELOGIC_bp;          /* '<S65>/ROUTE LOGIC' */
  DW_ROUTE_T ROUTELOGIC_n;             /* '<S64>/ROUTE LOGIC' */
  DW_ROUTE_T ROUTELOGIC_bs;            /* '<S63>/ROUTE LOGIC' */
  DW_ROUTE_T ROUTELOGIC_ew;            /* '<S62>/ROUTE LOGIC' */
  DW_ROUTE_T ROUTELOGIC_o;             /* '<S61>/ROUTE LOGIC' */
  DW_ROUTE_k_T ROUTELOGIC_d;           /* '<S60>/ROUTE LOGIC' */
  DW_ROUTE_T ROUTELOGIC_jn;            /* '<S59>/ROUTE LOGIC' */
  DW_ROUTE_T ROUTELOGIC_j;             /* '<S58>/ROUTE LOGIC' */
  DW_ROUTE_k_T ROUTELOGIC_b;           /* '<S57>/ROUTE LOGIC' */
  DW_ROUTE_T ROUTELOGIC_l;             /* '<S56>/ROUTE LOGIC' */
  DW_ROUTE_k_T ROUTELOGIC;             /* '<S55>/ROUTE LOGIC' */
  DW_ROUTE_k_T ROUTELOGIC_i;           /* '<S54>/ROUTE LOGIC' */
  DW_ROUTE_T ROUTELOGIC_c4;            /* '<S53>/ROUTE LOGIC' */
  DW_ROUTE_T ROUTELOGIC_e;             /* '<S52>/ROUTE LOGIC' */
  DW_ROUTE_T ROUTELOGIC_h;             /* '<S51>/ROUTE LOGIC' */
  DW_ROUTE_k_T ROUTELOGIC_c;           /* '<S50>/ROUTE LOGIC' */
  DW_ROUTE_T ROUTELOGIC_bt;            /* '<S49>/ROUTE LOGIC' */
  DW_ROUTE_T ROUTELOGIC_f;             /* '<S48>/ROUTE LOGIC' */
  DW_ROUTE_T ROUTELOGIC_g;             /* '<S47>/ROUTE LOGIC' */
  DW_ROUTE_T ROUTELOGIC_k;             /* '<S46>/ROUTE LOGIC' */
} DW_VITALALL_T;

/* Invariant block signals for system '<S46>/ROUTE LOGIC' */
typedef struct {
  const boolean_T NOT4;                /* '<S67>/NOT4' */
} ConstB_ROUTE_T;

/* Invariant block signals (auto storage) */
typedef struct {
  ConstB_ROUTE_T ROUTELOGIC_n;         /* '<S64>/ROUTE LOGIC' */
  ConstB_ROUTE_T ROUTELOGIC_bs;        /* '<S63>/ROUTE LOGIC' */
  ConstB_ROUTE_T ROUTELOGIC_ew;        /* '<S62>/ROUTE LOGIC' */
  ConstB_ROUTE_T ROUTELOGIC_o;         /* '<S61>/ROUTE LOGIC' */
  ConstB_ROUTE_T ROUTELOGIC_jn;        /* '<S59>/ROUTE LOGIC' */
  ConstB_ROUTE_T ROUTELOGIC_j;         /* '<S58>/ROUTE LOGIC' */
  ConstB_ROUTE_T ROUTELOGIC_l;         /* '<S56>/ROUTE LOGIC' */
  ConstB_ROUTE_T ROUTELOGIC_c4;        /* '<S53>/ROUTE LOGIC' */
  ConstB_ROUTE_T ROUTELOGIC_e;         /* '<S52>/ROUTE LOGIC' */
  ConstB_ROUTE_T ROUTELOGIC_h;         /* '<S51>/ROUTE LOGIC' */
  ConstB_ROUTE_T ROUTELOGIC_bt;        /* '<S49>/ROUTE LOGIC' */
  ConstB_ROUTE_T ROUTELOGIC_f;         /* '<S48>/ROUTE LOGIC' */
  ConstB_ROUTE_T ROUTELOGIC_g;         /* '<S47>/ROUTE LOGIC' */
  ConstB_ROUTE_T ROUTELOGIC_k;         /* '<S46>/ROUTE LOGIC' */
} ConstB_VITALALL_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  boolean_T DATAFROMNV[150];           /* '<Root>/DATAFROMNV' */
  boolean_T DATAFROMZC[49];            /* '<Root>/DATAFROMZC' */
  boolean_T INT1[16];                  /* '<Root>/INT1' */
  boolean_T INTIB[32];                 /* '<Root>/INTIB' */
  boolean_T INT2[16];                  /* '<Root>/INT2' */
  boolean_T INT3[32];                  /* '<Root>/INT3' */
  boolean_T INDEP[80];                 /* '<Root>/INDEP' */
  boolean_T CBISYSTEM[4];              /* '<Root>/CBISYSTEM' */
} ExtU_VITALALL_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  boolean_T DATATONV[298];             /* '<Root>/DATATONV' */
  boolean_T DATATOZC[87];              /* '<Root>/DATATOZC' */
  boolean_T OUTT1[8];                  /* '<Root>/OUTT1' */
  boolean_T OUTTIB[32];                /* '<Root>/OUTTIB' */
  boolean_T OUTT2[8];                  /* '<Root>/OUTT2' */
  boolean_T OUTT3[24];                 /* '<Root>/OUTT3' */
  boolean_T OUTDEP[40];                /* '<Root>/OUTDEP' */
  boolean_T SIMULATION[46];            /* '<Root>/SIMULATION' */
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
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block signals (auto storage) */
extern B_VITALALL_T VITALALL_B;

/* Block states (auto storage) */
extern DW_VITALALL_T VITALALL_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_VITALALL_T VITALALL_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_VITALALL_T VITALALL_Y;
extern const ConstB_VITALALL_T VITALALL_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void VITALALL_initialize(void);
extern void VITALALL_step(void);
extern void VITALALL_terminate(void);

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
 * '<S26>'  : 'VITALALL/VITAL/DATA TO//FROM ZC/Subsystem'
 * '<S27>'  : 'VITALALL/VITAL/I//O DEPOT/INPUT DEPOT'
 * '<S28>'  : 'VITALALL/VITAL/I//O DEPOT/OUTPUT DEPOT'
 * '<S29>'  : 'VITALALL/VITAL/I//O TERMIINAL 1/INPUT TERMINAL 1'
 * '<S30>'  : 'VITALALL/VITAL/I//O TERMIINAL 1/OUTPUT TERMINAL 1'
 * '<S31>'  : 'VITALALL/VITAL/I//O TERMIINAL 2/INPUT TERMINAL 2'
 * '<S32>'  : 'VITALALL/VITAL/I//O TERMIINAL 2/OUTPUT TERMINAL 2'
 * '<S33>'  : 'VITALALL/VITAL/I//O TERMIINAL 3/INPUT TERMINAL 3'
 * '<S34>'  : 'VITALALL/VITAL/I//O TERMIINAL 3/OUTPUT TERMINAL 3'
 * '<S35>'  : 'VITALALL/VITAL/I//O TERMIINAL IB/INPUT TERMINAL IB'
 * '<S36>'  : 'VITALALL/VITAL/I//O TERMIINAL IB/OUTPUT TERMINAL IB'
 * '<S37>'  : 'VITALALL/VITAL/INTERLOCKING/MAPPING'
 * '<S38>'  : 'VITALALL/VITAL/ZONE CONTROLLER/POINT MACHINE'
 * '<S39>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE'
 * '<S40>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/ES//WS'
 * '<S41>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC'
 * '<S42>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/POINT MACHINE'
 * '<S43>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/RRLS'
 * '<S44>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/RST'
 * '<S45>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/SIGNAL'
 * '<S46>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/10-12'
 * '<S47>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/10-22'
 * '<S48>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/10-DEP'
 * '<S49>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/12-10'
 * '<S50>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/12-14'
 * '<S51>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/12-20'
 * '<S52>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/12-24'
 * '<S53>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/14-12'
 * '<S54>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/14-22'
 * '<S55>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/20-12'
 * '<S56>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/20-22'
 * '<S57>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/20-DEP'
 * '<S58>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/22-10'
 * '<S59>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/22-14'
 * '<S60>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/22-20'
 * '<S61>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/22-24'
 * '<S62>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/24-12'
 * '<S63>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/24-22'
 * '<S64>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/DEP-10'
 * '<S65>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/DEP-20'
 * '<S66>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/MAPPING'
 * '<S67>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/10-12/ROUTE LOGIC'
 * '<S68>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/10-22/ROUTE LOGIC'
 * '<S69>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/10-DEP/ROUTE LOGIC'
 * '<S70>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/12-10/ROUTE LOGIC'
 * '<S71>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/12-14/ROUTE LOGIC'
 * '<S72>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/12-20/ROUTE LOGIC'
 * '<S73>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/12-24/ROUTE LOGIC'
 * '<S74>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/14-12/ROUTE LOGIC'
 * '<S75>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/14-22/ROUTE LOGIC'
 * '<S76>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/20-12/ROUTE LOGIC'
 * '<S77>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/20-22/ROUTE LOGIC'
 * '<S78>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/20-DEP/ROUTE LOGIC'
 * '<S79>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/22-10/ROUTE LOGIC'
 * '<S80>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/22-14/ROUTE LOGIC'
 * '<S81>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/22-20/ROUTE LOGIC'
 * '<S82>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/22-24/ROUTE LOGIC'
 * '<S83>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/24-12/ROUTE LOGIC'
 * '<S84>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/24-22/ROUTE LOGIC'
 * '<S85>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/DEP-10/ROUTE LOGIC'
 * '<S86>'  : 'VITALALL/VITAL/ZONE CONTROLLER/ROUTE/LOGIC/DEP-20/ROUTE LOGIC'
 */
#endif                                 /* RTW_HEADER_VITALALL_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
