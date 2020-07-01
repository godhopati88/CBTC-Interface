/*
 * File: VITALDEPOT.h
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

#ifndef RTW_HEADER_VITALDEPOT_h_
#define RTW_HEADER_VITALDEPOT_h_
#include <string.h>
#ifndef VITALDEPOT_COMMON_INCLUDES_
# define VITALDEPOT_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* VITALDEPOT_COMMON_INCLUDES_ */

#include "VITALDEPOT_types.h"

/* Shared type includes */
#include "model_reference_types.h"

/* Block signals and states (auto storage) for system '<S22>/DV_TON' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  real_T memory;                       /* '<S27>/memory' */
  real_T Switch;                       /* '<S27>/Switch' */
  real_T memory_PreviousInput;         /* '<S27>/memory' */
  boolean_T LogicalOperator1;          /* '<S24>/Logical Operator1' */
  boolean_T LogicalOperator2;          /* '<S24>/Logical Operator2' */
  boolean_T DelayInput1_DSTATE;        /* '<S25>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_b;      /* '<S26>/Delay Input1' */
} DW_DV_TON_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S15>/APPROACH LOCK' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  DW_DV_TON_T DV_TON_c;                /* '<S22>/DV_TON' */
  boolean_T AND4;                      /* '<S22>/AND4' */
  boolean_T AND1;                      /* '<S22>/AND1' */
  boolean_T Memory3_PreviousInput;     /* '<S22>/Memory3' */
  boolean_T Memory4_PreviousInput;     /* '<S22>/Memory4' */
} DW_D_AS_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S64>/EMERGENCY POINT RELEASE' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  DW_DV_TON_T DV_TON4;                 /* '<S68>/DV_TON4' */
  DW_DV_TON_T DV_TON1;                 /* '<S68>/DV_TON1' */
  boolean_T OR3;                       /* '<S68>/OR3' */
  boolean_T AND11;                     /* '<S68>/AND11' */
  boolean_T AND5;                      /* '<S68>/AND5' */
  boolean_T AND8;                      /* '<S68>/AND8' */
  boolean_T TmpSignalConversionAtDV_TON1Out;/* '<S68>/DV_TON1' */
  boolean_T TmpSignalConversionAtDV_TON4Out;/* '<S68>/DV_TON4' */
  boolean_T Memory5_PreviousInput;     /* '<S68>/Memory5' */
  boolean_T Memory4_PreviousInput;     /* '<S68>/Memory4' */
  boolean_T Memory3_PreviousInput;     /* '<S68>/Memory3' */
  boolean_T Memory2_PreviousInput;     /* '<S68>/Memory2' */
} DW_D_SWRLS_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S119>/DV_TOF' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  real_T memory;                       /* '<S125>/memory' */
  real_T Switch;                       /* '<S125>/Switch' */
  real_T memory_PreviousInput;         /* '<S125>/memory' */
  boolean_T LogicalOperator1;          /* '<S122>/Logical Operator1' */
  boolean_T LogicalOperator3;          /* '<S122>/Logical Operator3' */
  boolean_T LogicalOperator4;          /* '<S122>/Logical Operator4' */
  boolean_T DelayInput1_DSTATE;        /* '<S123>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_p;      /* '<S124>/Delay Input1' */
} DW_DV_TOF_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S119>/DV_TON' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  real_T memory;                       /* '<S129>/memory' */
  real_T Switch;                       /* '<S129>/Switch' */
  real_T memory_PreviousInput;         /* '<S129>/memory' */
  boolean_T Uk1;                       /* '<S127>/Delay Input1' */
  boolean_T Uk1_n;                     /* '<S128>/Delay Input1' */
  boolean_T LogicalOperator2;          /* '<S126>/Logical Operator2' */
  boolean_T DelayInput1_DSTATE;        /* '<S127>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_f;      /* '<S128>/Delay Input1' */
} DW_DV_TON_b_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S112>/EMERGENCY ROUTE ' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  DW_DV_TON_b_T DV_TON_h;              /* '<S119>/DV_TON' */
  DW_DV_TOF_T DV_TOF_p;                /* '<S119>/DV_TOF' */
  boolean_T Memory1;                   /* '<S119>/Memory1' */
  boolean_T AND1;                      /* '<S119>/AND1' */
  boolean_T AND6;                      /* '<S119>/AND6' */
  boolean_T TmpSignalConversionAtDV_TONOutp;/* '<S119>/DV_TON' */
  boolean_T Memory1_PreviousInput;     /* '<S119>/Memory1' */
  boolean_T Memory_PreviousInput;      /* '<S119>/Memory' */
} DW_D_RRLS_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S201>/AS_SR' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND1;                      /* '<S213>/AND1' */
  boolean_T MEM1_PreviousInput;        /* '<S213>/MEM1' */
} DW_D_AS_SR_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S229>/D_RRLS1' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND1;                      /* '<S232>/AND1' */
} DW_D_RRLS3_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S229>/D_RRLS5' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T RRLSTE;                    /* '<S233>/RRLS-TE' */
} DW_D_RRLS1_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S229>/D_RRLS6' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND1;                      /* '<S234>/AND1' */
} DW_D_RRLS2_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S230>/D_RRLS2' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND1;                      /* '<S237>/AND1' */
} DW_D_RRLS_4_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S245>/POINT CONTROL' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  DW_DV_TON_T DV_TON1;                 /* '<S249>/DV_TON1' */
  DW_DV_TON_T DV_TON_a;                /* '<S249>/DV_TON' */
  DW_DV_TOF_T DV_TOF1;                 /* '<S249>/DV_TOF1' */
  DW_DV_TOF_T DV_TOF_e;                /* '<S249>/DV_TOF' */
  boolean_T Memory2;                   /* '<S249>/Memory2' */
  boolean_T AND1;                      /* '<S249>/AND1' */
  boolean_T Memory1;                   /* '<S249>/Memory1' */
  boolean_T AND2;                      /* '<S249>/AND2' */
  boolean_T NOT9;                      /* '<S249>/NOT9' */
  boolean_T NOT10;                     /* '<S249>/NOT10' */
  boolean_T NOT11;                     /* '<S249>/NOT11' */
  boolean_T OR6;                       /* '<S249>/OR6' */
  boolean_T Memory3;                   /* '<S249>/Memory3' */
  boolean_T AND15;                     /* '<S249>/AND15' */
  boolean_T AND16;                     /* '<S249>/AND16' */
  boolean_T AND17;                     /* '<S249>/AND17' */
  boolean_T AND20;                     /* '<S249>/AND20' */
  boolean_T AND21;                     /* '<S249>/AND21' */
  boolean_T AND22;                     /* '<S249>/AND22' */
  boolean_T AND23;                     /* '<S249>/AND23' */
  boolean_T AND24;                     /* '<S249>/AND24' */
  boolean_T AND5;                      /* '<S249>/AND5' */
  boolean_T AND6;                      /* '<S249>/AND6' */
  boolean_T AND7;                      /* '<S249>/AND7' */
  boolean_T AND8;                      /* '<S249>/AND8' */
  boolean_T Memory2_PreviousInput;     /* '<S249>/Memory2' */
  boolean_T Memory1_PreviousInput;     /* '<S249>/Memory1' */
  boolean_T Memory3_PreviousInput;     /* '<S249>/Memory3' */
} DW_D_SW_CTRL_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S333>/POINT LOCK' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T OR2;                       /* '<S337>/OR2' */
} DW_D_SW_L_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S341>/ROUTE CHECK' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND2;                      /* '<S353>/AND2' */
} DW_D_H_D_S_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S365>/ROUTE CONFLICT LOCK' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND1;                      /* '<S377>/AND1' */
} DW_D_R_L_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S389>/ROUTE LOCK' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND1;                      /* '<S395>/AND1' */
  boolean_T Memory_PreviousInput;      /* '<S395>/Memory' */
} DW_D_ES_WS_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S401>/SIGNAL LIGHTING' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND19;                     /* '<S408>/AND19' */
} DW_D_SIG_CTRL_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S14>/D_TP1' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  DW_DV_TON_T DV_TON_d;                /* '<S415>/DV_TON' */
} DW_D_TP_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S3>/COMMUNICATION CHECK' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  DW_DV_TON_T DV_TON1;                 /* '<S483>/DV_TON1' */
  DW_DV_TON_T DV_TON_e;                /* '<S483>/DV_TON' */
  boolean_T LogicalOperator;           /* '<S483>/Logical Operator' */
  boolean_T LogicalOperator4;          /* '<S483>/Logical Operator4' */
  boolean_T LogicalOperator3;          /* '<S483>/Logical Operator3' */
} DW_D_COMM_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for model 'VITALDEPOT' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  DW_D_COMM_T COMMUNICATIONCHECK;      /* '<S3>/COMMUNICATION CHECK' */
  DW_D_TP_T D_TP9;                     /* '<S14>/D_TP9' */
  DW_D_TP_T D_TP8;                     /* '<S14>/D_TP8' */
  DW_D_TP_T D_TP7;                     /* '<S14>/D_TP7' */
  DW_D_TP_T D_TP6;                     /* '<S14>/D_TP6' */
  DW_D_TP_T D_TP5;                     /* '<S14>/D_TP5' */
  DW_D_TP_T D_TP4;                     /* '<S14>/D_TP4' */
  DW_D_TP_T D_TP3;                     /* '<S14>/D_TP3' */
  DW_D_TP_T D_TP2;                     /* '<S14>/D_TP2' */
  DW_D_TP_T D_TP10;                    /* '<S14>/D_TP10' */
  DW_D_TP_T D_TP1;                     /* '<S14>/D_TP1' */
  DW_D_SIG_CTRL_T SIGNALLIGHTING_c3;   /* '<S407>/SIGNAL LIGHTING' */
  DW_D_SIG_CTRL_T SIGNALLIGHTING_p;    /* '<S406>/SIGNAL LIGHTING' */
  DW_D_SIG_CTRL_T SIGNALLIGHTING_cy;   /* '<S405>/SIGNAL LIGHTING' */
  DW_D_SIG_CTRL_T SIGNALLIGHTING_k;    /* '<S404>/SIGNAL LIGHTING' */
  DW_D_SIG_CTRL_T SIGNALLIGHTING_d;    /* '<S403>/SIGNAL LIGHTING' */
  DW_D_SIG_CTRL_T SIGNALLIGHTING_c;    /* '<S402>/SIGNAL LIGHTING' */
  DW_D_SIG_CTRL_T SIGNALLIGHTING;      /* '<S401>/SIGNAL LIGHTING' */
  DW_D_ES_WS_T ROUTELOCK_c;            /* '<S394>/ROUTE LOCK' */
  DW_D_ES_WS_T ROUTELOCK_n;            /* '<S393>/ROUTE LOCK' */
  DW_D_ES_WS_T ROUTELOCK_li;           /* '<S392>/ROUTE LOCK' */
  DW_D_ES_WS_T ROUTELOCK_l;            /* '<S391>/ROUTE LOCK' */
  DW_D_ES_WS_T ROUTELOCK_i;            /* '<S390>/ROUTE LOCK' */
  DW_D_ES_WS_T ROUTELOCK;              /* '<S389>/ROUTE LOCK' */
  DW_D_R_L_T ROUTECONFLICTLOCK_k;      /* '<S376>/ROUTE CONFLICT LOCK' */
  DW_D_R_L_T ROUTECONFLICTLOCK_b;      /* '<S375>/ROUTE CONFLICT LOCK' */
  DW_D_R_L_T ROUTECONFLICTLOCK_ow;     /* '<S374>/ROUTE CONFLICT LOCK' */
  DW_D_R_L_T ROUTECONFLICTLOCK_lr;     /* '<S373>/ROUTE CONFLICT LOCK' */
  DW_D_R_L_T ROUTECONFLICTLOCK_f;      /* '<S372>/ROUTE CONFLICT LOCK' */
  DW_D_R_L_T ROUTECONFLICTLOCK_o;      /* '<S371>/ROUTE CONFLICT LOCK' */
  DW_D_R_L_T ROUTECONFLICTLOCK_i;      /* '<S370>/ROUTE CONFLICT LOCK' */
  DW_D_R_L_T ROUTECONFLICTLOCK_h;      /* '<S369>/ROUTE CONFLICT LOCK' */
  DW_D_R_L_T ROUTECONFLICTLOCK_l;      /* '<S368>/ROUTE CONFLICT LOCK' */
  DW_D_R_L_T ROUTECONFLICTLOCK_e;      /* '<S367>/ROUTE CONFLICT LOCK' */
  DW_D_R_L_T ROUTECONFLICTLOCK_j;      /* '<S366>/ROUTE CONFLICT LOCK' */
  DW_D_R_L_T ROUTECONFLICTLOCK;        /* '<S365>/ROUTE CONFLICT LOCK' */
  DW_D_H_D_S_T ROUTECHECK_a;           /* '<S352>/ROUTE CHECK' */
  DW_D_H_D_S_T ROUTECHECK_g;           /* '<S351>/ROUTE CHECK' */
  DW_D_H_D_S_T ROUTECHECK_k;           /* '<S350>/ROUTE CHECK' */
  DW_D_H_D_S_T ROUTECHECK_b;           /* '<S349>/ROUTE CHECK' */
  DW_D_H_D_S_T ROUTECHECK_i;           /* '<S348>/ROUTE CHECK' */
  DW_D_H_D_S_T ROUTECHECK_m;           /* '<S347>/ROUTE CHECK' */
  DW_D_H_D_S_T ROUTECHECK_o;           /* '<S346>/ROUTE CHECK' */
  DW_D_H_D_S_T ROUTECHECK_p;           /* '<S345>/ROUTE CHECK' */
  DW_D_H_D_S_T ROUTECHECK_h;           /* '<S344>/ROUTE CHECK' */
  DW_D_H_D_S_T ROUTECHECK_l;           /* '<S343>/ROUTE CHECK' */
  DW_D_H_D_S_T ROUTECHECK_f;           /* '<S342>/ROUTE CHECK' */
  DW_D_H_D_S_T ROUTECHECK;             /* '<S341>/ROUTE CHECK' */
  DW_D_SW_L_T POINTLOCK_dt;            /* '<S336>/POINT LOCK' */
  DW_D_SW_L_T POINTLOCK_d;             /* '<S335>/POINT LOCK' */
  DW_D_SW_L_T POINTLOCK_e;             /* '<S334>/POINT LOCK' */
  DW_D_SW_L_T POINTLOCK;               /* '<S333>/POINT LOCK' */
  DW_D_SW_CTRL_T POINTCONTROL_d;       /* '<S248>/POINT CONTROL' */
  DW_D_SW_CTRL_T POINTCONTROL_m;       /* '<S247>/POINT CONTROL' */
  DW_D_SW_CTRL_T POINTCONTROL_b;       /* '<S246>/POINT CONTROL' */
  DW_D_SW_CTRL_T POINTCONTROL;         /* '<S245>/POINT CONTROL' */
  DW_D_RRLS2_T D_RRLS6_o;              /* '<S231>/D_RRLS6' */
  DW_D_RRLS1_T D_RRLS5_m;              /* '<S231>/D_RRLS5' */
  DW_D_RRLS3_T D_RRLS2_o;              /* '<S231>/D_RRLS2' */
  DW_D_RRLS3_T D_RRLS1_g;              /* '<S231>/D_RRLS1' */
  DW_D_RRLS_4_T D_RRLS8;               /* '<S230>/D_RRLS8' */
  DW_D_RRLS2_T D_RRLS6_l;              /* '<S230>/D_RRLS6' */
  DW_D_RRLS1_T D_RRLS5_j;              /* '<S230>/D_RRLS5' */
  DW_D_RRLS_4_T D_RRLS2_m;             /* '<S230>/D_RRLS2' */
  DW_D_RRLS3_T D_RRLS1_k;              /* '<S230>/D_RRLS1' */
  DW_D_RRLS3_T D_RRLS7;                /* '<S229>/D_RRLS7' */
  DW_D_RRLS2_T D_RRLS6;                /* '<S229>/D_RRLS6' */
  DW_D_RRLS1_T D_RRLS5;                /* '<S229>/D_RRLS5' */
  DW_D_RRLS3_T D_RRLS1_j;              /* '<S229>/D_RRLS1' */
  DW_D_AS_SR_T AS_SR_ec;               /* '<S212>/AS_SR' */
  DW_D_AS_SR_T AS_SR_ip;               /* '<S211>/AS_SR' */
  DW_D_AS_SR_T AS_SR_f;                /* '<S210>/AS_SR' */
  DW_D_AS_SR_T AS_SR_e4;               /* '<S209>/AS_SR' */
  DW_D_AS_SR_T AS_SR_m;                /* '<S208>/AS_SR' */
  DW_D_AS_SR_T AS_SR_b;                /* '<S207>/AS_SR' */
  DW_D_AS_SR_T AS_SR_g;                /* '<S206>/AS_SR' */
  DW_D_AS_SR_T AS_SR_i;                /* '<S205>/AS_SR' */
  DW_D_AS_SR_T AS_SR_a;                /* '<S204>/AS_SR' */
  DW_D_AS_SR_T AS_SR_d;                /* '<S203>/AS_SR' */
  DW_D_AS_SR_T AS_SR_e;                /* '<S202>/AS_SR' */
  DW_D_AS_SR_T AS_SR;                  /* '<S201>/AS_SR' */
  DW_D_RRLS_T EMERGENCYROUTE_i;        /* '<S118>/EMERGENCY ROUTE ' */
  DW_D_RRLS_T EMERGENCYROUTE_l;        /* '<S117>/EMERGENCY ROUTE ' */
  DW_D_RRLS_T EMERGENCYROUTE_e;        /* '<S116>/EMERGENCY ROUTE ' */
  DW_D_RRLS_T EMERGENCYROUTE_m;        /* '<S115>/EMERGENCY ROUTE ' */
  DW_D_RRLS_T EMERGENCYROUTE_o;        /* '<S114>/EMERGENCY ROUTE ' */
  DW_D_RRLS_T EMERGENCYROUTE_g;        /* '<S113>/EMERGENCY ROUTE ' */
  DW_D_RRLS_T EMERGENCYROUTE;          /* '<S112>/EMERGENCY ROUTE ' */
  DW_D_SWRLS_T EMERGENCYPOINTRELEASE_b;/* '<S67>/EMERGENCY POINT RELEASE' */
  DW_D_SWRLS_T EMERGENCYPOINTRELEASE_p;/* '<S66>/EMERGENCY POINT RELEASE' */
  DW_D_SWRLS_T EMERGENCYPOINTRELEASE_l;/* '<S65>/EMERGENCY POINT RELEASE' */
  DW_D_SWRLS_T EMERGENCYPOINTRELEASE;  /* '<S64>/EMERGENCY POINT RELEASE' */
  DW_D_AS_T APPROACHLOCK_a;            /* '<S21>/APPROACH LOCK' */
  DW_D_AS_T APPROACHLOCK_ou;           /* '<S20>/APPROACH LOCK' */
  DW_D_AS_T APPROACHLOCK_o;            /* '<S19>/APPROACH LOCK' */
  DW_D_AS_T APPROACHLOCK_e;            /* '<S18>/APPROACH LOCK' */
  DW_D_AS_T APPROACHLOCK_h;            /* '<S17>/APPROACH LOCK' */
  DW_D_AS_T APPROACHLOCK_f;            /* '<S16>/APPROACH LOCK' */
  DW_D_AS_T APPROACHLOCK;              /* '<S15>/APPROACH LOCK' */
  int32_T clockTickCounter;            /* '<S3>/0.5S' */
  int32_T clockTickCounter_i;          /* '<S3>/1S' */
  boolean_T W13AL;                     /* '<S245>/W13A-L' */
  boolean_T VDR;                       /* '<S245>/VDR' */
  boolean_T W13B73AL;                  /* '<S246>/W13B//73A-L' */
  boolean_T VDR_f;                     /* '<S246>/VDR' */
  boolean_T W54L;                      /* '<S247>/W54-L' */
  boolean_T VDR_e;                     /* '<S247>/VDR' */
  boolean_T W73BL;                     /* '<S248>/W73B-L' */
  boolean_T VDR_h;                     /* '<S248>/VDR' */
  boolean_T u3BTPRDI;                  /* '<S14>/73B-TPR-DI' */
  boolean_T u3ATPRDI;                  /* '<S14>/73A-TPR-DI' */
  boolean_T u2TPRDI;                   /* '<S14>/72-TPR-DI' */
  boolean_T u4TPRDI;                   /* '<S14>/54-TPR-DI' */
  boolean_T u4TPRDI_c;                 /* '<S14>/34-TPR-DI' */
  boolean_T u2TPRDI_i;                 /* '<S14>/32-TPR-DI' */
  boolean_T u4TPRDI_h;                 /* '<S14>/14-TPR-DI' */
  boolean_T u3TPRDI;                   /* '<S14>/13-TPR-DI' */
  boolean_T u4TPRDI_e;                 /* '<S14>/74-TPR-DI' */
  boolean_T u2TPRDI_b;                 /* '<S14>/12-TPR-DI' */
  boolean_T COMMCHECKIN;               /* '<S3>/COMM-CHECK-IN' */
  boolean_T M_GV_FLASH_500;            /* synthesized block */
  boolean_T M_GV_FLASH_1000;           /* synthesized block */
  boolean_T M_COMM_OK;                 /* synthesized block */
  boolean_T DI_SYS_2;                  /* synthesized block */
  boolean_T DI_SYS_1;                  /* synthesized block */
  boolean_T DI_COMM_2;                 /* synthesized block */
  boolean_T DI_COMM_1;                 /* synthesized block */
  boolean_T M_RST_L74;                 /* synthesized block */
  boolean_T M_RST_L72;                 /* synthesized block */
  boolean_T M_RST_L54;                 /* synthesized block */
  boolean_T M_RST_L34;                 /* synthesized block */
  boolean_T M_RST_L32;                 /* synthesized block */
  boolean_T M_RST_L14A;                /* synthesized block */
  boolean_T M_RST_L12;                 /* synthesized block */
  boolean_T M_CHK_V_NV;                /* synthesized block */
  boolean_T M_AS_S_L14B;               /* synthesized block */
  boolean_T M_CHK_NV_V;                /* synthesized block */
  boolean_T M_RRLSPB_CTRL_L14A;        /* synthesized block */
  boolean_T DO_VDR;                    /* synthesized block */
  boolean_T DO_L14B_GR;                /* synthesized block */
  boolean_T DI_TPR_74;                 /* synthesized block */
  boolean_T DI_TPR_73B;                /* synthesized block */
  boolean_T DI_TPR_73A;                /* synthesized block */
  boolean_T DI_TPR_72;                 /* synthesized block */
  boolean_T DI_TPR_54;                 /* synthesized block */
  boolean_T DI_TPR_34;                 /* synthesized block */
  boolean_T DI_TPR_32;                 /* synthesized block */
  boolean_T DI_TPR_14;                 /* synthesized block */
  boolean_T DI_TPR_13;                 /* synthesized block */
  boolean_T DI_TPR_12;                 /* synthesized block */
  boolean_T DO_WLPR_W73B;              /* synthesized block */
  boolean_T DO_RWR_W73B;               /* synthesized block */
  boolean_T DI_RWP_W73B;               /* synthesized block */
  boolean_T M_W73B_RWP;                /* synthesized block */
  boolean_T M_W73B_RWC;                /* synthesized block */
  boolean_T M_W73B_RW_TE;              /* synthesized block */
  boolean_T M_W73B_R_REQ;              /* synthesized block */
  boolean_T M_W73B_OOC;                /* synthesized block */
  boolean_T DO_NWR_W73B;               /* synthesized block */
  boolean_T DI_NWP_W73B;               /* synthesized block */
  boolean_T M_W73B_NWP;                /* synthesized block */
  boolean_T M_W73B_NWC;                /* synthesized block */
  boolean_T M_W73B_NW_TE;              /* synthesized block */
  boolean_T M_W73B_N_REQ;              /* synthesized block */
  boolean_T M_W73B_LS;                 /* synthesized block */
  boolean_T M_W73B_L;                  /* synthesized block */
  boolean_T DO_WLPR_W54;               /* synthesized block */
  boolean_T DO_RWR_W54;                /* synthesized block */
  boolean_T DI_RWP_W54;                /* synthesized block */
  boolean_T M_W54_RWP;                 /* synthesized block */
  boolean_T M_W54_RWC;                 /* synthesized block */
  boolean_T M_W54_RW_TE;               /* synthesized block */
  boolean_T M_W54_R_REQ;               /* synthesized block */
  boolean_T M_W54_OOC;                 /* synthesized block */
  boolean_T DO_NWR_W54;                /* synthesized block */
  boolean_T DI_NWP_W54;                /* synthesized block */
  boolean_T M_W54_NWP;                 /* synthesized block */
  boolean_T M_W54_NWC;                 /* synthesized block */
  boolean_T M_W54_NW_TE;               /* synthesized block */
  boolean_T M_W54_N_REQ;               /* synthesized block */
  boolean_T M_W54_LS;                  /* synthesized block */
  boolean_T M_W54_L;                   /* synthesized block */
  boolean_T DO_WLPR_W13B_73A;          /* synthesized block */
  boolean_T DO_RWR_W13B_73A;           /* synthesized block */
  boolean_T DI_RWP_W13B_73A;           /* synthesized block */
  boolean_T M_W13B_73A_RWP;            /* synthesized block */
  boolean_T M_W13B_73A_RWC;            /* synthesized block */
  boolean_T M_W13B_73A_RW_TE;          /* synthesized block */
  boolean_T M_W13B_73A_R_REQ;          /* synthesized block */
  boolean_T M_W13B_73A_OOC;            /* synthesized block */
  boolean_T DO_NWR_W13B_73A;           /* synthesized block */
  boolean_T DI_NWP_W13B_73A;           /* synthesized block */
  boolean_T M_W13B_73A_NWP;            /* synthesized block */
  boolean_T M_W13B_73A_NWC;            /* synthesized block */
  boolean_T M_W13B_73A_NW_TE;          /* synthesized block */
  boolean_T M_W13B_73A_N_REQ;          /* synthesized block */
  boolean_T M_W13B_73A_LS;             /* synthesized block */
  boolean_T M_W13B_73A_L;              /* synthesized block */
  boolean_T DO_WLPR_W13A;              /* synthesized block */
  boolean_T DO_RWR_W13A;               /* synthesized block */
  boolean_T DI_RWP_W13A;               /* synthesized block */
  boolean_T M_W13A_RWP;                /* synthesized block */
  boolean_T M_W13A_RWC;                /* synthesized block */
  boolean_T M_W13A_RW_TE;              /* synthesized block */
  boolean_T M_W13A_R_REQ;              /* synthesized block */
  boolean_T M_W13A_OOC;                /* synthesized block */
  boolean_T DO_NWR_W13A;               /* synthesized block */
  boolean_T DI_NWP_W13A;               /* synthesized block */
  boolean_T M_W13A_NWP;                /* synthesized block */
  boolean_T M_W13A_NWC;                /* synthesized block */
  boolean_T M_W13A_NW_TE;              /* synthesized block */
  boolean_T M_W13A_N_REQ;              /* synthesized block */
  boolean_T M_W13A_LS;                 /* synthesized block */
  boolean_T M_W13A_L;                  /* synthesized block */
  boolean_T M_RRLS_L14A;               /* synthesized block */
  boolean_T M_RLS_73B;                 /* synthesized block */
  boolean_T M_RLS_73A;                 /* synthesized block */
  boolean_T M_W13B_73A_RWZ;            /* synthesized block */
  boolean_T M_RLS_13;                  /* synthesized block */
  boolean_T M_R_S_74_72;               /* synthesized block */
  boolean_T M_R_S_54_72;               /* synthesized block */
  boolean_T M_R_S_34_72;               /* synthesized block */
  boolean_T M_RL_S_WS_73B;             /* synthesized block */
  boolean_T M_R_S_72_74;               /* synthesized block */
  boolean_T M_R_S_72_54;               /* synthesized block */
  boolean_T M_R_S_72_34;               /* synthesized block */
  boolean_T M_R_S_72_14;               /* synthesized block */
  boolean_T M_RL_S_ES_73A;             /* synthesized block */
  boolean_T M_R_S_14_72;               /* synthesized block */
  boolean_T M_R_S_14_32;               /* synthesized block */
  boolean_T M_R_S_14_12;               /* synthesized block */
  boolean_T M_RL_S_WS_13;              /* synthesized block */
  boolean_T M_R_S_32_14;               /* synthesized block */
  boolean_T M_R_S_12_14;               /* synthesized block */
  boolean_T M_RL_S_ES_13;              /* synthesized block */
  boolean_T M_L_S_74_72;               /* synthesized block */
  boolean_T M_AS_SR_S_74_72;           /* synthesized block */
  boolean_T M_RS_74_72;                /* synthesized block */
  boolean_T M_L_S_72_74;               /* synthesized block */
  boolean_T M_AS_SR_S_72_74;           /* synthesized block */
  boolean_T M_RS_72_74;                /* synthesized block */
  boolean_T M_L_S_72_54;               /* synthesized block */
  boolean_T M_AS_SR_S_72_54;           /* synthesized block */
  boolean_T M_RS_72_54;                /* synthesized block */
  boolean_T M_L_S_72_34;               /* synthesized block */
  boolean_T M_AS_SR_S_72_34;           /* synthesized block */
  boolean_T M_RS_72_34;                /* synthesized block */
  boolean_T M_L_S_72_14;               /* synthesized block */
  boolean_T M_AS_SR_S_72_14;           /* synthesized block */
  boolean_T M_RS_72_14;                /* synthesized block */
  boolean_T M_L_S_54_72;               /* synthesized block */
  boolean_T M_AS_SR_S_54_72;           /* synthesized block */
  boolean_T M_RS_54_72;                /* synthesized block */
  boolean_T M_L_S_34_72;               /* synthesized block */
  boolean_T M_AS_SR_S_34_72;           /* synthesized block */
  boolean_T M_RS_34_72;                /* synthesized block */
  boolean_T M_L_S_32_14;               /* synthesized block */
  boolean_T M_AS_SR_S_32_14;           /* synthesized block */
  boolean_T M_RS_32_14;                /* synthesized block */
  boolean_T M_L_S_14_72;               /* synthesized block */
  boolean_T M_AS_SR_S_14_72;           /* synthesized block */
  boolean_T M_RS_14_72;                /* synthesized block */
  boolean_T M_L_S_14_32;               /* synthesized block */
  boolean_T M_AS_SR_S_14_32;           /* synthesized block */
  boolean_T M_RS_14_32;                /* synthesized block */
  boolean_T M_L_S_14_12;               /* synthesized block */
  boolean_T M_AS_SR_S_14_12;           /* synthesized block */
  boolean_T M_RS_14_12;                /* synthesized block */
  boolean_T M_L_S_12_14;               /* synthesized block */
  boolean_T M_AS_SR_S_12_14;           /* synthesized block */
  boolean_T M_RS_12_14;                /* synthesized block */
  boolean_T M_RRLSPB_CTRL_X74;         /* synthesized block */
  boolean_T M_RRLSTE_X74;              /* synthesized block */
  boolean_T M_RRLS_X74;                /* synthesized block */
  boolean_T M_W73B_NWZ;                /* synthesized block */
  boolean_T M_REQ_S_72_74;             /* synthesized block */
  boolean_T M_RRLSPB_CTRL_X72;         /* synthesized block */
  boolean_T M_RRLSTE_X72;              /* synthesized block */
  boolean_T M_RRLS_X72;                /* synthesized block */
  boolean_T M_REQ_S_74_72;             /* synthesized block */
  boolean_T M_REQ_S_54_72;             /* synthesized block */
  boolean_T M_REQ_S_34_72;             /* synthesized block */
  boolean_T M_REQ_S_14_72;             /* synthesized block */
  boolean_T M_RRLSPB_CTRL_X54;         /* synthesized block */
  boolean_T M_RRLSTE_X54;              /* synthesized block */
  boolean_T M_RRLS_X54;                /* synthesized block */
  boolean_T M_W54_NWZ;                 /* synthesized block */
  boolean_T M_REQ_S_72_54;             /* synthesized block */
  boolean_T M_RRLSPB_CTRL_X34;         /* synthesized block */
  boolean_T M_RRLSTE_X34;              /* synthesized block */
  boolean_T M_RRLS_X34;                /* synthesized block */
  boolean_T M_W73B_RWZ;                /* synthesized block */
  boolean_T M_W54_RWZ;                 /* synthesized block */
  boolean_T M_REQ_S_72_34;             /* synthesized block */
  boolean_T M_RRLSPB_CTRL_X32;         /* synthesized block */
  boolean_T M_RRLSTE_X32;              /* synthesized block */
  boolean_T M_RRLS_X32;                /* synthesized block */
  boolean_T M_W13A_RWZ;                /* synthesized block */
  boolean_T M_REQ_S_14_32;             /* synthesized block */
  boolean_T M_RRLSPB_CTRL_X12;         /* synthesized block */
  boolean_T M_RRLSTE_X12;              /* synthesized block */
  boolean_T M_RRLS_X12;                /* synthesized block */
  boolean_T M_W13B_73A_NWZ;            /* synthesized block */
  boolean_T M_W13A_NWZ;                /* synthesized block */
  boolean_T M_REQ_S_14_12;             /* synthesized block */
  boolean_T M_RRLS;                    /* synthesized block */
  boolean_T M_REQ_S_72_14;             /* synthesized block */
  boolean_T M_REQ_S_32_14;             /* synthesized block */
  boolean_T M_RRLSPB_CTRL_L14B;        /* synthesized block */
  boolean_T M_RRLSTE_L14B;             /* synthesized block */
  boolean_T M_RRLS_L14B;               /* synthesized block */
  boolean_T M_REQ_S_12_14;             /* synthesized block */
  boolean_T M_W73B_TPZ;                /* synthesized block */
  boolean_T M_W73B_SWRLSPB_CTRL;       /* synthesized block */
  boolean_T M_W73B_SWRLS;              /* synthesized block */
  boolean_T M_W54_TPZ;                 /* synthesized block */
  boolean_T M_W54_SWRLSPB_CTRL;        /* synthesized block */
  boolean_T M_W54_SWRLS;               /* synthesized block */
  boolean_T M_S_WS_73B;                /* synthesized block */
  boolean_T M_S_ES_73B;                /* synthesized block */
  boolean_T M_W13B_73A_TPZ;            /* synthesized block */
  boolean_T M_W13B_73A_SWRLSPB_CTRL;   /* synthesized block */
  boolean_T M_W13B_73A_SWRLS;          /* synthesized block */
  boolean_T M_S_WS_73A;                /* synthesized block */
  boolean_T M_S_ES_73A;                /* synthesized block */
  boolean_T M_W13A_TPZ;                /* synthesized block */
  boolean_T M_W13A_SWRLSPB_CTRL;       /* synthesized block */
  boolean_T M_W13A_SWRLS;              /* synthesized block */
  boolean_T M_SWRLS;                   /* synthesized block */
  boolean_T M_S_WS_13;                 /* synthesized block */
  boolean_T M_S_ES_13;                 /* synthesized block */
  boolean_T M_AS_S_L74;                /* synthesized block */
  boolean_T DO_L74_GR;                 /* synthesized block */
  boolean_T M_TP_74;                   /* synthesized block */
  boolean_T M_AS_S_L72;                /* synthesized block */
  boolean_T DO_L72_GR;                 /* synthesized block */
  boolean_T M_TP_73A;                  /* synthesized block */
  boolean_T M_TP_72;                   /* synthesized block */
  boolean_T M_AS_S_L54;                /* synthesized block */
  boolean_T DO_L54_GR;                 /* synthesized block */
  boolean_T M_TP_54;                   /* synthesized block */
  boolean_T M_AS_S_L34;                /* synthesized block */
  boolean_T DO_L34_GR;                 /* synthesized block */
  boolean_T M_TP_73B;                  /* synthesized block */
  boolean_T M_TP_34;                   /* synthesized block */
  boolean_T M_AS_S_L32;                /* synthesized block */
  boolean_T DO_L32_GR;                 /* synthesized block */
  boolean_T M_TP_32;                   /* synthesized block */
  boolean_T M_AS_S_L14A;               /* synthesized block */
  boolean_T DO_L14A_GR;                /* synthesized block */
  boolean_T M_TP_14;                   /* synthesized block */
  boolean_T DI_VDR;                    /* synthesized block */
  boolean_T M_RR;                      /* synthesized block */
  boolean_T M_AS_S_L12;                /* synthesized block */
  boolean_T DO_L12_GR;                 /* synthesized block */
  boolean_T M_TP_13;                   /* synthesized block */
  boolean_T M_TP_12;                   /* synthesized block */
} DW_VITALDEPOT_f_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_VITALDEPOT_T {
  const char_T **errorStatus;
  RTWSolverInfo *solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize0;
    SimTimeStep *simTimeStep;
  } Timing;
};

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_VITALDEPOT_T rtm;
} MdlrefDW_VITALDEPOT_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

extern void VITALDEPOT_Init(void);
extern void VITALDEPOT_Start(void);
extern void VITALDEPOT_Update(void);
extern void VITALDEPOT(const boolean_T rtu_FROMMAIN[3], const boolean_T
  *rtu_NVVCHKFROM, const boolean_T rtu_SREQFROM[12], const boolean_T
  rtu_NREQFROM[4], const boolean_T rtu_RREQFROM[4], const boolean_T rtu_OOCFROM
  [4], const boolean_T rtu_RRLSPBCTRLFROM[8], const boolean_T
  rtu_SWRLSPBCTRLFROM[4], const boolean_T rtu_DEPVARFROM[12], const boolean_T
  rtu_RSTFROM[7], const boolean_T *rtu_VDRDI, const boolean_T rtu_TPRDI[10],
  const boolean_T rtu_NWPDI[4], const boolean_T rtu_RWPDI[4], const boolean_T
  rtu_SYSTEMFROM[4], boolean_T rty_TOMAIN[2], boolean_T *rty_VDRDITO, boolean_T *
  rty_VNVCHKTO, boolean_T rty_TPTO[10], boolean_T rty_SESTO[3], boolean_T
  rty_SWSTO[3], boolean_T rty_NWCTO[4], boolean_T rty_NWPTO[4], boolean_T
  rty_NWZTO[4], boolean_T rty_NWTETO[4], boolean_T rty_RWCTO[4], boolean_T
  rty_RWPTO[4], boolean_T rty_RWZTO[4], boolean_T rty_RWTETO[4], boolean_T
  rty_LTO[4], boolean_T rty_LSTO[4], boolean_T rty_SWRLSTO[4], boolean_T
  rty_TPZTO[4], boolean_T rty_GRDOTO[8], boolean_T rty_SASTO[8], boolean_T
  rty_RRLSTO[8], boolean_T *rty_VDRDO, boolean_T rty_GRDO[8], boolean_T
  rty_NWRDO[4], boolean_T rty_RWRDO[4], boolean_T rty_WLPRDO[4]);

/* Model reference registration function */
extern void VITALDEPOT_initialize(const char_T **rt_errorStatus, RTWSolverInfo
  *rt_solverInfo, const rtTimingBridge *timingBridge, int_T mdlref_TID0, int_T
  mdlref_TID1);

#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

extern void DV_TON_Init(DW_DV_TON_T *localDW);
extern void DV_TON_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T
  rtu_IN, DW_DV_TON_T *localDW);
extern void DV_TON(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_IN,
                   DW_DV_TON_T *localDW, real_T rtp_TIME);
extern void D_AS_Init(DW_D_AS_T *localDW);
extern void D_AS_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, DW_D_AS_T
  *localDW);
extern void D_AS(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_DRGR,
                 boolean_T rtu_TPF, boolean_T rtu_TPB, boolean_T rtu_RR,
                 boolean_T rtu_VDR, DW_D_AS_T *localDW);
extern void D_SWRLS_Init(DW_D_SWRLS_T *localDW);
extern void D_SWRLS_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M,
  DW_D_SWRLS_T *localDW);
extern void D_SWRLS(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T
                    rtu_SWRLSCTRL, boolean_T rtu_ESWS, boolean_T rtu_TP,
                    boolean_T rtu_SWRLS, boolean_T rtu_VDR, DW_D_SWRLS_T
                    *localDW);
extern void DV_TOF_Init(DW_DV_TOF_T *localDW);
extern void DV_TOF_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T
  rtu_IN, DW_DV_TOF_T *localDW);
extern void DV_TOF(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_IN,
                   DW_DV_TOF_T *localDW, real_T rtp_TIME);
extern void VITALDEPOT_DV_TON_Init(DW_DV_TON_b_T *localDW);
extern void VITALDEPOT_DV_TON_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M,
  boolean_T rtu_IN, DW_DV_TON_b_T *localDW);
extern void VITALDEPOT_DV_TON(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M,
  boolean_T rtu_IN, DW_DV_TON_b_T *localDW, real_T rtp_TIME);
extern void D_RRLS_Init(DW_D_RRLS_T *localDW);
extern void D_RRLS_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M,
  DW_D_RRLS_T *localDW);
extern void D_RRLS(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_AS,
                   boolean_T rtu_REQ, boolean_T rtu_ESWS, boolean_T rtu_RRLSCTRL,
                   boolean_T rtu_RRLS, boolean_T rtu_VDR, DW_D_RRLS_T *localDW);
extern void D_AS_SR(boolean_T rtu_L, boolean_T rtu_RS, DW_D_AS_SR_T *localDW);
extern void D_RRLS3(boolean_T rtu_RRLSTE, boolean_T rtu_NWZRWZ1, boolean_T
                    rtu_NWZRWZ2, DW_D_RRLS3_T *localDW);
extern void D_RRLS1(boolean_T rtu_RRLSTE, DW_D_RRLS1_T *localDW);
extern void D_RRLS2(boolean_T rtu_RRLSTE, boolean_T rtu_NWZRWZ1, DW_D_RRLS2_T
                    *localDW);
extern void D_RRLS_4(boolean_T rtu_RRLSTE, boolean_T rtu_NWZRWZ1, boolean_T
                     rtu_NWZRWZ2, boolean_T rtu_NWZRWZ3, DW_D_RRLS_4_T *localDW);
extern void D_SW_CTRL_Init(DW_D_SW_CTRL_T *localDW);
extern void D_SW_CTRL_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M,
  DW_D_SW_CTRL_T *localDW);
extern void D_SW_CTRL(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T
                      rtu_NWPDI, boolean_T rtu_RWPDI, boolean_T rtu_OOC,
                      boolean_T rtu_L, boolean_T rtu_NREQ, boolean_T rtu_RREQ,
                      boolean_T rtu_TP, boolean_T rtu_TPZ, boolean_T rtu_VDR,
                      DW_D_SW_CTRL_T *localDW);
extern void D_SW_L(boolean_T rtu_ESWS, boolean_T rtu_TP, boolean_T rtu_TPZ,
                   DW_D_SW_L_T *localDW);
extern void D_H_D_S(boolean_T rtu_REQ, boolean_T rtu_L, DW_D_H_D_S_T *localDW);
extern void D_R_L(boolean_T rtu_ESWS, boolean_T rtu_NWCRWC, boolean_T rtu_GRDRDO,
                  boolean_T rtu_TP, DW_D_R_L_T *localDW);
extern void D_ES_WS(boolean_T rtu_RLESWSB, boolean_T rtu_TP, boolean_T rtu_RLS,
                    DW_D_ES_WS_T *localDW);
extern void D_SIG_CTRL(boolean_T rtu_S, boolean_T rtu_TP, DW_D_SIG_CTRL_T
  *localDW);
extern void D_TP_Init(DW_D_TP_T *localDW);
extern void D_TP_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T
  rtu_TPR, DW_D_TP_T *localDW);
extern void D_TP(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_TPR,
                 DW_D_TP_T *localDW);
extern void D_COMM_Init(DW_D_COMM_T *localDW);
extern void D_COMM_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T
  rtu_WATCHDOG, DW_D_COMM_T *localDW);
extern void D_COMM(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T
                   rtu_WATCHDOG, boolean_T rtu_COMM1, boolean_T rtu_COMM2,
                   DW_D_COMM_T *localDW);

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

extern MdlrefDW_VITALDEPOT_T VITALDEPOT_MdlrefDW;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

/* Block states (auto storage) */
extern DW_VITALDEPOT_f_T VITALDEPOT_DW;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

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
 * '<Root>' : 'VITALDEPOT'
 * '<S1>'   : 'VITALDEPOT/LOGIC'
 * '<S2>'   : 'VITALDEPOT/MAPPING'
 * '<S3>'   : 'VITALDEPOT/SYSTEM DATA'
 * '<S4>'   : 'VITALDEPOT/LOGIC/APPROACH LOCK'
 * '<S5>'   : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE'
 * '<S6>'   : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE '
 * '<S7>'   : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE'
 * '<S8>'   : 'VITALDEPOT/LOGIC/POINT CONTROL'
 * '<S9>'   : 'VITALDEPOT/LOGIC/POINT LOCK'
 * '<S10>'  : 'VITALDEPOT/LOGIC/ROUTE CHECK'
 * '<S11>'  : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK'
 * '<S12>'  : 'VITALDEPOT/LOGIC/ROUTE LOCK'
 * '<S13>'  : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING'
 * '<S14>'  : 'VITALDEPOT/LOGIC/TRACK TIMER'
 * '<S15>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12'
 * '<S16>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A'
 * '<S17>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32'
 * '<S18>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34'
 * '<S19>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54'
 * '<S20>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72'
 * '<S21>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74'
 * '<S22>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK'
 * '<S23>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON'
 * '<S24>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON/TON'
 * '<S25>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON/TON/Detect Decrease'
 * '<S26>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON/TON/Detect Increase'
 * '<S27>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON/TON/S//H'
 * '<S28>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK'
 * '<S29>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON'
 * '<S30>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON/TON'
 * '<S31>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON/TON/Detect Decrease'
 * '<S32>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON/TON/Detect Increase'
 * '<S33>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON/TON/S//H'
 * '<S34>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK'
 * '<S35>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON'
 * '<S36>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON/TON'
 * '<S37>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON/TON/Detect Decrease'
 * '<S38>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON/TON/Detect Increase'
 * '<S39>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON/TON/S//H'
 * '<S40>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK'
 * '<S41>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON'
 * '<S42>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON/TON'
 * '<S43>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON/TON/Detect Decrease'
 * '<S44>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON/TON/Detect Increase'
 * '<S45>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON/TON/S//H'
 * '<S46>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK'
 * '<S47>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON'
 * '<S48>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON/TON'
 * '<S49>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON/TON/Detect Decrease'
 * '<S50>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON/TON/Detect Increase'
 * '<S51>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON/TON/S//H'
 * '<S52>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK'
 * '<S53>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON'
 * '<S54>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON/TON'
 * '<S55>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON/TON/Detect Decrease'
 * '<S56>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON/TON/Detect Increase'
 * '<S57>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON/TON/S//H'
 * '<S58>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK'
 * '<S59>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON'
 * '<S60>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON/TON'
 * '<S61>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON/TON/Detect Decrease'
 * '<S62>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON/TON/Detect Increase'
 * '<S63>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON/TON/S//H'
 * '<S64>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A'
 * '<S65>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A'
 * '<S66>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54'
 * '<S67>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B'
 * '<S68>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE'
 * '<S69>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON1'
 * '<S70>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON4'
 * '<S71>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON1/TON'
 * '<S72>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON1/TON/Detect Decrease'
 * '<S73>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON1/TON/Detect Increase'
 * '<S74>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON1/TON/S//H'
 * '<S75>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON4/TON'
 * '<S76>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON4/TON/Detect Decrease'
 * '<S77>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON4/TON/Detect Increase'
 * '<S78>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON4/TON/S//H'
 * '<S79>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE'
 * '<S80>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON1'
 * '<S81>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON4'
 * '<S82>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON1/TON'
 * '<S83>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON1/TON/Detect Decrease'
 * '<S84>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON1/TON/Detect Increase'
 * '<S85>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON1/TON/S//H'
 * '<S86>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON4/TON'
 * '<S87>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON4/TON/Detect Decrease'
 * '<S88>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON4/TON/Detect Increase'
 * '<S89>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON4/TON/S//H'
 * '<S90>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE'
 * '<S91>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON1'
 * '<S92>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON4'
 * '<S93>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON1/TON'
 * '<S94>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON1/TON/Detect Decrease'
 * '<S95>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON1/TON/Detect Increase'
 * '<S96>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON1/TON/S//H'
 * '<S97>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON4/TON'
 * '<S98>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON4/TON/Detect Decrease'
 * '<S99>'  : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON4/TON/Detect Increase'
 * '<S100>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON4/TON/S//H'
 * '<S101>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE'
 * '<S102>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON1'
 * '<S103>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON4'
 * '<S104>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON1/TON'
 * '<S105>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON1/TON/Detect Decrease'
 * '<S106>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON1/TON/Detect Increase'
 * '<S107>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON1/TON/S//H'
 * '<S108>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON4/TON'
 * '<S109>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON4/TON/Detect Decrease'
 * '<S110>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON4/TON/Detect Increase'
 * '<S111>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON4/TON/S//H'
 * '<S112>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B'
 * '<S113>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12'
 * '<S114>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32'
 * '<S115>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34'
 * '<S116>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54'
 * '<S117>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72'
 * '<S118>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74'
 * '<S119>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE '
 * '<S120>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE /DV_TOF'
 * '<S121>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE /DV_TON'
 * '<S122>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE /DV_TOF/TOF'
 * '<S123>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE /DV_TOF/TOF/Detect Decrease'
 * '<S124>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE /DV_TOF/TOF/Detect Increase'
 * '<S125>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE /DV_TOF/TOF/S//H'
 * '<S126>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE /DV_TON/TON'
 * '<S127>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE /DV_TON/TON/Detect Decrease'
 * '<S128>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE /DV_TON/TON/Detect Increase'
 * '<S129>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE /DV_TON/TON/S//H'
 * '<S130>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE '
 * '<S131>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE /DV_TOF'
 * '<S132>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE /DV_TON'
 * '<S133>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE /DV_TOF/TOF'
 * '<S134>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE /DV_TOF/TOF/Detect Decrease'
 * '<S135>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE /DV_TOF/TOF/Detect Increase'
 * '<S136>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE /DV_TOF/TOF/S//H'
 * '<S137>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE /DV_TON/TON'
 * '<S138>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE /DV_TON/TON/Detect Decrease'
 * '<S139>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE /DV_TON/TON/Detect Increase'
 * '<S140>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE /DV_TON/TON/S//H'
 * '<S141>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE '
 * '<S142>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE /DV_TOF'
 * '<S143>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE /DV_TON'
 * '<S144>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE /DV_TOF/TOF'
 * '<S145>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE /DV_TOF/TOF/Detect Decrease'
 * '<S146>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE /DV_TOF/TOF/Detect Increase'
 * '<S147>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE /DV_TOF/TOF/S//H'
 * '<S148>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE /DV_TON/TON'
 * '<S149>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE /DV_TON/TON/Detect Decrease'
 * '<S150>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE /DV_TON/TON/Detect Increase'
 * '<S151>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE /DV_TON/TON/S//H'
 * '<S152>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE '
 * '<S153>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE /DV_TOF'
 * '<S154>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE /DV_TON'
 * '<S155>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE /DV_TOF/TOF'
 * '<S156>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE /DV_TOF/TOF/Detect Decrease'
 * '<S157>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE /DV_TOF/TOF/Detect Increase'
 * '<S158>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE /DV_TOF/TOF/S//H'
 * '<S159>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE /DV_TON/TON'
 * '<S160>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE /DV_TON/TON/Detect Decrease'
 * '<S161>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE /DV_TON/TON/Detect Increase'
 * '<S162>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE /DV_TON/TON/S//H'
 * '<S163>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE '
 * '<S164>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE /DV_TOF'
 * '<S165>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE /DV_TON'
 * '<S166>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE /DV_TOF/TOF'
 * '<S167>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE /DV_TOF/TOF/Detect Decrease'
 * '<S168>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE /DV_TOF/TOF/Detect Increase'
 * '<S169>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE /DV_TOF/TOF/S//H'
 * '<S170>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE /DV_TON/TON'
 * '<S171>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE /DV_TON/TON/Detect Decrease'
 * '<S172>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE /DV_TON/TON/Detect Increase'
 * '<S173>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE /DV_TON/TON/S//H'
 * '<S174>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE '
 * '<S175>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE /DV_TOF'
 * '<S176>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE /DV_TON'
 * '<S177>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE /DV_TOF/TOF'
 * '<S178>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE /DV_TOF/TOF/Detect Decrease'
 * '<S179>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE /DV_TOF/TOF/Detect Increase'
 * '<S180>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE /DV_TOF/TOF/S//H'
 * '<S181>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE /DV_TON/TON'
 * '<S182>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE /DV_TON/TON/Detect Decrease'
 * '<S183>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE /DV_TON/TON/Detect Increase'
 * '<S184>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE /DV_TON/TON/S//H'
 * '<S185>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE '
 * '<S186>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE /DV_TOF'
 * '<S187>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE /DV_TON'
 * '<S188>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE /DV_TOF/TOF'
 * '<S189>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE /DV_TOF/TOF/Detect Decrease'
 * '<S190>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE /DV_TOF/TOF/Detect Increase'
 * '<S191>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE /DV_TOF/TOF/S//H'
 * '<S192>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE /DV_TON/TON'
 * '<S193>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE /DV_TON/TON/Detect Decrease'
 * '<S194>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE /DV_TON/TON/Detect Increase'
 * '<S195>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE /DV_TON/TON/S//H'
 * '<S196>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR'
 * '<S197>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RL'
 * '<S198>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS'
 * '<S199>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RRLS'
 * '<S200>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/SWRLS'
 * '<S201>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L12-L14B'
 * '<S202>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L14A-X12'
 * '<S203>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L14A-X32'
 * '<S204>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L14A-X72'
 * '<S205>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L32-L14B'
 * '<S206>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L34-X72'
 * '<S207>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L54-X72'
 * '<S208>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L72-L14B'
 * '<S209>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L72-X34'
 * '<S210>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L72-X54'
 * '<S211>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L72-X74'
 * '<S212>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L74-X72'
 * '<S213>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L12-L14B/AS_SR'
 * '<S214>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L14A-X12/AS_SR'
 * '<S215>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L14A-X32/AS_SR'
 * '<S216>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L14A-X72/AS_SR'
 * '<S217>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L32-L14B/AS_SR'
 * '<S218>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L34-X72/AS_SR'
 * '<S219>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L54-X72/AS_SR'
 * '<S220>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L72-L14B/AS_SR'
 * '<S221>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L72-X34/AS_SR'
 * '<S222>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L72-X54/AS_SR'
 * '<S223>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L72-X74/AS_SR'
 * '<S224>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L74-X72/AS_SR'
 * '<S225>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RL/13-S-ES-RL'
 * '<S226>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RL/13-S-WS-RL'
 * '<S227>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RL/73A-S-ES-RL'
 * '<S228>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RL/73B-S-WS-RL'
 * '<S229>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/13-RLS'
 * '<S230>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73A-RLS'
 * '<S231>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73B-RLS'
 * '<S232>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/13-RLS/D_RRLS1'
 * '<S233>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/13-RLS/D_RRLS5'
 * '<S234>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/13-RLS/D_RRLS6'
 * '<S235>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/13-RLS/D_RRLS7'
 * '<S236>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73A-RLS/D_RRLS1'
 * '<S237>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73A-RLS/D_RRLS2'
 * '<S238>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73A-RLS/D_RRLS5'
 * '<S239>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73A-RLS/D_RRLS6'
 * '<S240>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73A-RLS/D_RRLS8'
 * '<S241>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73B-RLS/D_RRLS1'
 * '<S242>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73B-RLS/D_RRLS2'
 * '<S243>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73B-RLS/D_RRLS5'
 * '<S244>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73B-RLS/D_RRLS6'
 * '<S245>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A'
 * '<S246>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A'
 * '<S247>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54'
 * '<S248>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B'
 * '<S249>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL'
 * '<S250>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF'
 * '<S251>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF1'
 * '<S252>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON'
 * '<S253>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON1'
 * '<S254>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF/TOF'
 * '<S255>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF/TOF/Detect Decrease'
 * '<S256>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF/TOF/Detect Increase'
 * '<S257>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF/TOF/S//H'
 * '<S258>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF1/TOF'
 * '<S259>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF1/TOF/Detect Decrease'
 * '<S260>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF1/TOF/Detect Increase'
 * '<S261>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF1/TOF/S//H'
 * '<S262>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON/TON'
 * '<S263>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON/TON/Detect Decrease'
 * '<S264>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON/TON/Detect Increase'
 * '<S265>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON/TON/S//H'
 * '<S266>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON1/TON'
 * '<S267>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON1/TON/Detect Decrease'
 * '<S268>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON1/TON/Detect Increase'
 * '<S269>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON1/TON/S//H'
 * '<S270>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL'
 * '<S271>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF'
 * '<S272>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF1'
 * '<S273>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON'
 * '<S274>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON1'
 * '<S275>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF/TOF'
 * '<S276>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF/TOF/Detect Decrease'
 * '<S277>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF/TOF/Detect Increase'
 * '<S278>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF/TOF/S//H'
 * '<S279>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF1/TOF'
 * '<S280>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF1/TOF/Detect Decrease'
 * '<S281>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF1/TOF/Detect Increase'
 * '<S282>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF1/TOF/S//H'
 * '<S283>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON/TON'
 * '<S284>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON/TON/Detect Decrease'
 * '<S285>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON/TON/Detect Increase'
 * '<S286>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON/TON/S//H'
 * '<S287>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON1/TON'
 * '<S288>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON1/TON/Detect Decrease'
 * '<S289>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON1/TON/Detect Increase'
 * '<S290>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON1/TON/S//H'
 * '<S291>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL'
 * '<S292>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF'
 * '<S293>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF1'
 * '<S294>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON'
 * '<S295>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON1'
 * '<S296>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF/TOF'
 * '<S297>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF/TOF/Detect Decrease'
 * '<S298>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF/TOF/Detect Increase'
 * '<S299>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF/TOF/S//H'
 * '<S300>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF1/TOF'
 * '<S301>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF1/TOF/Detect Decrease'
 * '<S302>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF1/TOF/Detect Increase'
 * '<S303>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF1/TOF/S//H'
 * '<S304>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON/TON'
 * '<S305>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON/TON/Detect Decrease'
 * '<S306>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON/TON/Detect Increase'
 * '<S307>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON/TON/S//H'
 * '<S308>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON1/TON'
 * '<S309>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON1/TON/Detect Decrease'
 * '<S310>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON1/TON/Detect Increase'
 * '<S311>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON1/TON/S//H'
 * '<S312>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL'
 * '<S313>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF'
 * '<S314>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF1'
 * '<S315>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON'
 * '<S316>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON1'
 * '<S317>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF/TOF'
 * '<S318>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF/TOF/Detect Decrease'
 * '<S319>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF/TOF/Detect Increase'
 * '<S320>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF/TOF/S//H'
 * '<S321>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF1/TOF'
 * '<S322>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF1/TOF/Detect Decrease'
 * '<S323>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF1/TOF/Detect Increase'
 * '<S324>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF1/TOF/S//H'
 * '<S325>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON/TON'
 * '<S326>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON/TON/Detect Decrease'
 * '<S327>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON/TON/Detect Increase'
 * '<S328>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON/TON/S//H'
 * '<S329>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON1/TON'
 * '<S330>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON1/TON/Detect Decrease'
 * '<S331>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON1/TON/Detect Increase'
 * '<S332>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON1/TON/S//H'
 * '<S333>' : 'VITALDEPOT/LOGIC/POINT LOCK/W13A'
 * '<S334>' : 'VITALDEPOT/LOGIC/POINT LOCK/W13B//73A'
 * '<S335>' : 'VITALDEPOT/LOGIC/POINT LOCK/W54'
 * '<S336>' : 'VITALDEPOT/LOGIC/POINT LOCK/W73B'
 * '<S337>' : 'VITALDEPOT/LOGIC/POINT LOCK/W13A/POINT LOCK'
 * '<S338>' : 'VITALDEPOT/LOGIC/POINT LOCK/W13B//73A/POINT LOCK'
 * '<S339>' : 'VITALDEPOT/LOGIC/POINT LOCK/W54/POINT LOCK'
 * '<S340>' : 'VITALDEPOT/LOGIC/POINT LOCK/W73B/POINT LOCK'
 * '<S341>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L12-L14B'
 * '<S342>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L14A-X12'
 * '<S343>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L14A-X32'
 * '<S344>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L14A-X72'
 * '<S345>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L32-L14B'
 * '<S346>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L34-X72'
 * '<S347>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L54-X72'
 * '<S348>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L72-L14B'
 * '<S349>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L72-X34'
 * '<S350>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L72-X54'
 * '<S351>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L72-X74'
 * '<S352>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L74-X72'
 * '<S353>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L12-L14B/ROUTE CHECK'
 * '<S354>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L14A-X12/ROUTE CHECK'
 * '<S355>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L14A-X32/ROUTE CHECK'
 * '<S356>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L14A-X72/ROUTE CHECK'
 * '<S357>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L32-L14B/ROUTE CHECK'
 * '<S358>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L34-X72/ROUTE CHECK'
 * '<S359>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L54-X72/ROUTE CHECK'
 * '<S360>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L72-L14B/ROUTE CHECK'
 * '<S361>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L72-X34/ROUTE CHECK'
 * '<S362>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L72-X54/ROUTE CHECK'
 * '<S363>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L72-X74/ROUTE CHECK'
 * '<S364>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L74-X72/ROUTE CHECK'
 * '<S365>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L12-L14B'
 * '<S366>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L14A-X12'
 * '<S367>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L14A-X32'
 * '<S368>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L14A-X72'
 * '<S369>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L32-L14B'
 * '<S370>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L34-X72'
 * '<S371>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L54-X72'
 * '<S372>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L72-L14B'
 * '<S373>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L72-L54'
 * '<S374>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L72-L74'
 * '<S375>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L72-X34'
 * '<S376>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L74-X72'
 * '<S377>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L12-L14B/ROUTE CONFLICT LOCK'
 * '<S378>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L14A-X12/ROUTE CONFLICT LOCK'
 * '<S379>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L14A-X32/ROUTE CONFLICT LOCK'
 * '<S380>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L14A-X72/ROUTE CONFLICT LOCK'
 * '<S381>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L32-L14B/ROUTE CONFLICT LOCK'
 * '<S382>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L34-X72/ROUTE CONFLICT LOCK'
 * '<S383>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L54-X72/ROUTE CONFLICT LOCK'
 * '<S384>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L72-L14B/ROUTE CONFLICT LOCK'
 * '<S385>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L72-L54/ROUTE CONFLICT LOCK'
 * '<S386>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L72-L74/ROUTE CONFLICT LOCK'
 * '<S387>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L72-X34/ROUTE CONFLICT LOCK'
 * '<S388>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L74-X72/ROUTE CONFLICT LOCK'
 * '<S389>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/13-ES'
 * '<S390>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/13-WS'
 * '<S391>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/73A-ES'
 * '<S392>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/73A-WS'
 * '<S393>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/73B-ES'
 * '<S394>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/73B-WS'
 * '<S395>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/13-ES/ROUTE LOCK'
 * '<S396>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/13-WS/ROUTE LOCK'
 * '<S397>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/73A-ES/ROUTE LOCK'
 * '<S398>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/73A-WS/ROUTE LOCK'
 * '<S399>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/73B-ES/ROUTE LOCK'
 * '<S400>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/73B-WS/ROUTE LOCK'
 * '<S401>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L12'
 * '<S402>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L14A'
 * '<S403>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L32'
 * '<S404>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L34'
 * '<S405>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L54'
 * '<S406>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L72'
 * '<S407>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L74'
 * '<S408>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L12/SIGNAL LIGHTING'
 * '<S409>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L14A/SIGNAL LIGHTING'
 * '<S410>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L32/SIGNAL LIGHTING'
 * '<S411>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L34/SIGNAL LIGHTING'
 * '<S412>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L54/SIGNAL LIGHTING'
 * '<S413>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L72/SIGNAL LIGHTING'
 * '<S414>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L74/SIGNAL LIGHTING'
 * '<S415>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP1'
 * '<S416>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP10'
 * '<S417>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP2'
 * '<S418>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP3'
 * '<S419>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP4'
 * '<S420>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP5'
 * '<S421>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP6'
 * '<S422>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP7'
 * '<S423>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP8'
 * '<S424>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP9'
 * '<S425>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP1/DV_TON'
 * '<S426>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP1/DV_TON/TON'
 * '<S427>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP1/DV_TON/TON/Detect Decrease'
 * '<S428>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP1/DV_TON/TON/Detect Increase'
 * '<S429>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP1/DV_TON/TON/S//H'
 * '<S430>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP10/DV_TON'
 * '<S431>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP10/DV_TON/TON'
 * '<S432>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP10/DV_TON/TON/Detect Decrease'
 * '<S433>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP10/DV_TON/TON/Detect Increase'
 * '<S434>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP10/DV_TON/TON/S//H'
 * '<S435>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP2/DV_TON'
 * '<S436>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP2/DV_TON/TON'
 * '<S437>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP2/DV_TON/TON/Detect Decrease'
 * '<S438>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP2/DV_TON/TON/Detect Increase'
 * '<S439>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP2/DV_TON/TON/S//H'
 * '<S440>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP3/DV_TON'
 * '<S441>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP3/DV_TON/TON'
 * '<S442>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP3/DV_TON/TON/Detect Decrease'
 * '<S443>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP3/DV_TON/TON/Detect Increase'
 * '<S444>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP3/DV_TON/TON/S//H'
 * '<S445>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP4/DV_TON'
 * '<S446>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP4/DV_TON/TON'
 * '<S447>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP4/DV_TON/TON/Detect Decrease'
 * '<S448>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP4/DV_TON/TON/Detect Increase'
 * '<S449>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP4/DV_TON/TON/S//H'
 * '<S450>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP5/DV_TON'
 * '<S451>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP5/DV_TON/TON'
 * '<S452>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP5/DV_TON/TON/Detect Decrease'
 * '<S453>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP5/DV_TON/TON/Detect Increase'
 * '<S454>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP5/DV_TON/TON/S//H'
 * '<S455>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP6/DV_TON'
 * '<S456>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP6/DV_TON/TON'
 * '<S457>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP6/DV_TON/TON/Detect Decrease'
 * '<S458>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP6/DV_TON/TON/Detect Increase'
 * '<S459>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP6/DV_TON/TON/S//H'
 * '<S460>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP7/DV_TON'
 * '<S461>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP7/DV_TON/TON'
 * '<S462>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP7/DV_TON/TON/Detect Decrease'
 * '<S463>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP7/DV_TON/TON/Detect Increase'
 * '<S464>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP7/DV_TON/TON/S//H'
 * '<S465>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP8/DV_TON'
 * '<S466>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP8/DV_TON/TON'
 * '<S467>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP8/DV_TON/TON/Detect Decrease'
 * '<S468>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP8/DV_TON/TON/Detect Increase'
 * '<S469>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP8/DV_TON/TON/S//H'
 * '<S470>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP9/DV_TON'
 * '<S471>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP9/DV_TON/TON'
 * '<S472>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP9/DV_TON/TON/Detect Decrease'
 * '<S473>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP9/DV_TON/TON/Detect Increase'
 * '<S474>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP9/DV_TON/TON/S//H'
 * '<S475>' : 'VITALDEPOT/MAPPING/DEPDI'
 * '<S476>' : 'VITALDEPOT/MAPPING/DEPDO'
 * '<S477>' : 'VITALDEPOT/MAPPING/DEPNVTODEPV'
 * '<S478>' : 'VITALDEPOT/MAPPING/DEPTOMAIN'
 * '<S479>' : 'VITALDEPOT/MAPPING/DEPVTODEPNV'
 * '<S480>' : 'VITALDEPOT/MAPPING/MAINTODEP'
 * '<S481>' : 'VITALDEPOT/MAPPING/OTHERFROM'
 * '<S482>' : 'VITALDEPOT/MAPPING/OTHERFROM1'
 * '<S483>' : 'VITALDEPOT/SYSTEM DATA/COMMUNICATION CHECK'
 * '<S484>' : 'VITALDEPOT/SYSTEM DATA/COMMUNICATION CHECK/DV_TON'
 * '<S485>' : 'VITALDEPOT/SYSTEM DATA/COMMUNICATION CHECK/DV_TON1'
 * '<S486>' : 'VITALDEPOT/SYSTEM DATA/COMMUNICATION CHECK/DV_TON/TON'
 * '<S487>' : 'VITALDEPOT/SYSTEM DATA/COMMUNICATION CHECK/DV_TON/TON/Detect Decrease'
 * '<S488>' : 'VITALDEPOT/SYSTEM DATA/COMMUNICATION CHECK/DV_TON/TON/Detect Increase'
 * '<S489>' : 'VITALDEPOT/SYSTEM DATA/COMMUNICATION CHECK/DV_TON/TON/S//H'
 * '<S490>' : 'VITALDEPOT/SYSTEM DATA/COMMUNICATION CHECK/DV_TON1/TON'
 * '<S491>' : 'VITALDEPOT/SYSTEM DATA/COMMUNICATION CHECK/DV_TON1/TON/Detect Decrease'
 * '<S492>' : 'VITALDEPOT/SYSTEM DATA/COMMUNICATION CHECK/DV_TON1/TON/Detect Increase'
 * '<S493>' : 'VITALDEPOT/SYSTEM DATA/COMMUNICATION CHECK/DV_TON1/TON/S//H'
 */

/*-
 * Requirements for '<Root>': VITALDEPOT
 */
#endif                                 /* RTW_HEADER_VITALDEPOT_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
