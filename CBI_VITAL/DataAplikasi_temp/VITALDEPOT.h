/*
 * File: VITALDEPOT.h
 *
 * Code generated for Simulink model 'VITALDEPOT'.
 *
 * Model version                  : 1.322
 * Simulink Coder version         : 8.9 (R2015b) 13-Aug-2015
 * C/C++ source code generated on : Fri Jun 16 08:24:42 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-32 (Windows32)
 * Code generation objectives: Unspecified
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

/* Block signals for system '<S23>/DV_TON1' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  real_T memory;                       /* '<S30>/memory' */
  real_T Switch;                       /* '<S30>/Switch' */
  boolean_T LogicalOperator1;          /* '<S27>/Logical Operator1' */
  boolean_T LogicalOperator2;          /* '<S27>/Logical Operator2' */
} B_DV_TON_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block states (auto storage) for system '<S23>/DV_TON1' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  real_T memory_PreviousInput;         /* '<S30>/memory' */
  boolean_T DelayInput1_DSTATE;        /* '<S28>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_p;      /* '<S29>/Delay Input1' */
} DW_DV_TON_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S16>/APPROACH LOCK' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND4;                      /* '<S23>/AND4' */
  boolean_T AND1;                      /* '<S23>/AND1' */
  boolean_T AND11;                     /* '<S23>/AND11' */
  boolean_T AND7;                      /* '<S23>/AND7' */
  boolean_T AND2;                      /* '<S23>/AND2' */
  boolean_T AND3;                      /* '<S23>/AND3' */
  B_DV_TON_T DV_TON3;                  /* '<S23>/DV_TON3' */
  B_DV_TON_T DV_TON2;                  /* '<S23>/DV_TON2' */
  B_DV_TON_T DV_TON1;                  /* '<S23>/DV_TON1' */
} B_D_AS_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block states (auto storage) for system '<S16>/APPROACH LOCK' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T Memory3_PreviousInput;     /* '<S23>/Memory3' */
  boolean_T Memory4_PreviousInput;     /* '<S23>/Memory4' */
  boolean_T Memory7_PreviousInput;     /* '<S23>/Memory7' */
  boolean_T Memory8_PreviousInput;     /* '<S23>/Memory8' */
  boolean_T Memory5_PreviousInput;     /* '<S23>/Memory5' */
  boolean_T Memory6_PreviousInput;     /* '<S23>/Memory6' */
  DW_DV_TON_T DV_TON3;                 /* '<S23>/DV_TON3' */
  DW_DV_TON_T DV_TON2;                 /* '<S23>/DV_TON2' */
  DW_DV_TON_T DV_TON1;                 /* '<S23>/DV_TON1' */
} DW_D_AS_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S135>/EMERGENCY POINT RELEASE' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T OR3;                       /* '<S139>/OR3' */
  boolean_T AND11;                     /* '<S139>/AND11' */
  boolean_T AND5;                      /* '<S139>/AND5' */
  boolean_T AND8;                      /* '<S139>/AND8' */
  boolean_T TmpSignalConversionAtDV_TON1Out;/* '<S139>/DV_TON1' */
  boolean_T TmpSignalConversionAtDV_TON4Out;/* '<S139>/DV_TON4' */
  B_DV_TON_T DV_TON4;                  /* '<S139>/DV_TON4' */
  B_DV_TON_T DV_TON1;                  /* '<S139>/DV_TON1' */
} B_D_SWRLS_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block states (auto storage) for system '<S135>/EMERGENCY POINT RELEASE' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T Memory5_PreviousInput;     /* '<S139>/Memory5' */
  boolean_T Memory4_PreviousInput;     /* '<S139>/Memory4' */
  boolean_T Memory3_PreviousInput;     /* '<S139>/Memory3' */
  boolean_T Memory2_PreviousInput;     /* '<S139>/Memory2' */
  DW_DV_TON_T DV_TON4;                 /* '<S139>/DV_TON4' */
  DW_DV_TON_T DV_TON1;                 /* '<S139>/DV_TON1' */
} DW_D_SWRLS_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S190>/DV_TOF1' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  real_T memory;                       /* '<S196>/memory' */
  real_T Switch;                       /* '<S196>/Switch' */
  boolean_T LogicalOperator1;          /* '<S193>/Logical Operator1' */
  boolean_T LogicalOperator3;          /* '<S193>/Logical Operator3' */
  boolean_T LogicalOperator4;          /* '<S193>/Logical Operator4' */
} B_DV_TOF_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block states (auto storage) for system '<S190>/DV_TOF1' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  real_T memory_PreviousInput;         /* '<S196>/memory' */
  boolean_T DelayInput1_DSTATE;        /* '<S194>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o;      /* '<S195>/Delay Input1' */
} DW_DV_TOF_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S190>/DV_TON1' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  real_T memory;                       /* '<S200>/memory' */
  real_T Switch;                       /* '<S200>/Switch' */
  boolean_T Uk1;                       /* '<S198>/Delay Input1' */
  boolean_T Uk1_i;                     /* '<S199>/Delay Input1' */
  boolean_T LogicalOperator2;          /* '<S197>/Logical Operator2' */
} B_DV_TON_p_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block states (auto storage) for system '<S190>/DV_TON1' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  real_T memory_PreviousInput;         /* '<S200>/memory' */
  boolean_T DelayInput1_DSTATE;        /* '<S198>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_k;      /* '<S199>/Delay Input1' */
} DW_DV_TON_h_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S183>/EMERGENCY ROUTE RELEASE' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T Memory1;                   /* '<S190>/Memory1' */
  boolean_T AND1;                      /* '<S190>/AND1' */
  boolean_T AND6;                      /* '<S190>/AND6' */
  boolean_T TmpSignalConversionAtDV_TON1Out;/* '<S190>/DV_TON1' */
  B_DV_TON_p_T DV_TON1;                /* '<S190>/DV_TON1' */
  B_DV_TOF_T DV_TOF1;                  /* '<S190>/DV_TOF1' */
} B_D_RRLS_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block states (auto storage) for system '<S183>/EMERGENCY ROUTE RELEASE' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T Memory1_PreviousInput;     /* '<S190>/Memory1' */
  boolean_T Memory_PreviousInput;      /* '<S190>/Memory' */
  DW_DV_TON_h_T DV_TON1;               /* '<S190>/DV_TON1' */
  DW_DV_TOF_T DV_TOF1;                 /* '<S190>/DV_TOF1' */
} DW_D_RRLS_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S272>/AS_SR' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND1;                      /* '<S284>/AND1' */
} B_D_AS_SR_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S300>/D_RRLS1' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND1;                      /* '<S303>/AND1' */
} B_D_RRLS3_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S300>/D_RRLS5' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T RRLSTE;                    /* '<S304>/RRLS-TE' */
} B_D_RRLS1_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S300>/D_RRLS6' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND1;                      /* '<S305>/AND1' */
} B_D_RRLS2_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S301>/D_RRLS2' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND1;                      /* '<S308>/AND1' */
} B_D_RRLS_4_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S316>/POINT CONTROL' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T Memory2;                   /* '<S320>/Memory2' */
  boolean_T AND1;                      /* '<S320>/AND1' */
  boolean_T Memory1;                   /* '<S320>/Memory1' */
  boolean_T AND2;                      /* '<S320>/AND2' */
  boolean_T NOT9;                      /* '<S320>/NOT9' */
  boolean_T NOT10;                     /* '<S320>/NOT10' */
  boolean_T NOT11;                     /* '<S320>/NOT11' */
  boolean_T OR6;                       /* '<S320>/OR6' */
  boolean_T Memory3;                   /* '<S320>/Memory3' */
  boolean_T AND15;                     /* '<S320>/AND15' */
  boolean_T AND16;                     /* '<S320>/AND16' */
  boolean_T AND17;                     /* '<S320>/AND17' */
  boolean_T AND20;                     /* '<S320>/AND20' */
  boolean_T AND21;                     /* '<S320>/AND21' */
  boolean_T AND22;                     /* '<S320>/AND22' */
  boolean_T AND23;                     /* '<S320>/AND23' */
  boolean_T AND24;                     /* '<S320>/AND24' */
  boolean_T AND5;                      /* '<S320>/AND5' */
  boolean_T AND6;                      /* '<S320>/AND6' */
  boolean_T AND7;                      /* '<S320>/AND7' */
  boolean_T AND8;                      /* '<S320>/AND8' */
  B_DV_TON_T DV_TON1;                  /* '<S320>/DV_TON1' */
  B_DV_TON_T DV_TON_a;                 /* '<S320>/DV_TON' */
  B_DV_TOF_T DV_TOF1;                  /* '<S320>/DV_TOF1' */
  B_DV_TOF_T DV_TOF_e;                 /* '<S320>/DV_TOF' */
} B_D_SW_CTRL_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block states (auto storage) for system '<S316>/POINT CONTROL' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T Memory2_PreviousInput;     /* '<S320>/Memory2' */
  boolean_T Memory1_PreviousInput;     /* '<S320>/Memory1' */
  boolean_T Memory3_PreviousInput;     /* '<S320>/Memory3' */
  DW_DV_TON_T DV_TON1;                 /* '<S320>/DV_TON1' */
  DW_DV_TON_T DV_TON_a;                /* '<S320>/DV_TON' */
  DW_DV_TOF_T DV_TOF1;                 /* '<S320>/DV_TOF1' */
  DW_DV_TOF_T DV_TOF_e;                /* '<S320>/DV_TOF' */
} DW_D_SW_CTRL_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S404>/POINT LOCK' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND1;                      /* '<S408>/AND1' */
} B_D_SW_L_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S412>/ROUTE CHECK' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND2;                      /* '<S424>/AND2' */
} B_D_H_D_S_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S436>/ROUTE CONFLICT LOCK' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND1;                      /* '<S448>/AND1' */
} B_D_R_L_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S460>/ROUTE LOCK' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND3;                      /* '<S466>/AND3' */
} B_D_ES_WS_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block states (auto storage) for system '<S460>/ROUTE LOCK' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T Memory_PreviousInput;      /* '<S466>/Memory' */
  boolean_T Memory1_PreviousInput;     /* '<S466>/Memory1' */
} DW_D_ES_WS_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S472>/SIGNAL LIGHTING' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND19;                     /* '<S479>/AND19' */
} B_D_SIG_CTRL_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S15>/D_TP1' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  B_DV_TON_T DV_TON_d;                 /* '<S486>/DV_TON' */
} B_D_TP_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block states (auto storage) for system '<S15>/D_TP1' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  DW_DV_TON_T DV_TON_d;                /* '<S486>/DV_TON' */
} DW_D_TP_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals for model 'VITALDEPOT' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T W13AL;                     /* '<S316>/W13A-L' */
  boolean_T VDR;                       /* '<S316>/VDR' */
  boolean_T W13B73AL;                  /* '<S317>/W13B//73A-L' */
  boolean_T VDR_f;                     /* '<S317>/VDR' */
  boolean_T W54L;                      /* '<S318>/W54-L' */
  boolean_T VDR_e;                     /* '<S318>/VDR' */
  boolean_T W73BL;                     /* '<S319>/W73B-L' */
  boolean_T VDR_h;                     /* '<S319>/VDR' */
  boolean_T u3BTPRDI;                  /* '<S15>/73B-TPR-DI' */
  boolean_T u3ATPRDI;                  /* '<S15>/73A-TPR-DI' */
  boolean_T u2TPRDI;                   /* '<S15>/72-TPR-DI' */
  boolean_T u4TPRDI;                   /* '<S15>/54-TPR-DI' */
  boolean_T u4TPRDI_c;                 /* '<S15>/34-TPR-DI' */
  boolean_T u2TPRDI_i;                 /* '<S15>/32-TPR-DI' */
  boolean_T u4TPRDI_h;                 /* '<S15>/14-TPR-DI' */
  boolean_T u3TPRDI;                   /* '<S15>/13-TPR-DI' */
  boolean_T u4TPRDI_e;                 /* '<S15>/74-TPR-DI' */
  boolean_T u2TPRDI_b;                 /* '<S15>/12-TPR-DI' */
  B_D_TP_T D_TP9;                      /* '<S15>/D_TP9' */
  B_D_TP_T D_TP8;                      /* '<S15>/D_TP8' */
  B_D_TP_T D_TP7;                      /* '<S15>/D_TP7' */
  B_D_TP_T D_TP6;                      /* '<S15>/D_TP6' */
  B_D_TP_T D_TP5;                      /* '<S15>/D_TP5' */
  B_D_TP_T D_TP4;                      /* '<S15>/D_TP4' */
  B_D_TP_T D_TP3;                      /* '<S15>/D_TP3' */
  B_D_TP_T D_TP2;                      /* '<S15>/D_TP2' */
  B_D_TP_T D_TP10;                     /* '<S15>/D_TP10' */
  B_D_TP_T D_TP1;                      /* '<S15>/D_TP1' */
  B_D_SIG_CTRL_T SIGNALLIGHTING_k0;    /* '<S478>/SIGNAL LIGHTING' */
  B_D_SIG_CTRL_T SIGNALLIGHTING_e;     /* '<S477>/SIGNAL LIGHTING' */
  B_D_SIG_CTRL_T SIGNALLIGHTING_ae;    /* '<S476>/SIGNAL LIGHTING' */
  B_D_SIG_CTRL_T SIGNALLIGHTING_k;     /* '<S475>/SIGNAL LIGHTING' */
  B_D_SIG_CTRL_T SIGNALLIGHTING_o;     /* '<S474>/SIGNAL LIGHTING' */
  B_D_SIG_CTRL_T SIGNALLIGHTING_a;     /* '<S473>/SIGNAL LIGHTING' */
  B_D_SIG_CTRL_T SIGNALLIGHTING;       /* '<S472>/SIGNAL LIGHTING' */
  B_D_ES_WS_T ROUTELOCK_i;             /* '<S465>/ROUTE LOCK' */
  B_D_ES_WS_T ROUTELOCK_d;             /* '<S464>/ROUTE LOCK' */
  B_D_ES_WS_T ROUTELOCK_f;             /* '<S463>/ROUTE LOCK' */
  B_D_ES_WS_T ROUTELOCK_p;             /* '<S462>/ROUTE LOCK' */
  B_D_ES_WS_T ROUTELOCK_c;             /* '<S461>/ROUTE LOCK' */
  B_D_ES_WS_T ROUTELOCK;               /* '<S460>/ROUTE LOCK' */
  B_D_R_L_T ROUTECONFLICTLOCK_k2;      /* '<S447>/ROUTE CONFLICT LOCK' */
  B_D_R_L_T ROUTECONFLICTLOCK_l;       /* '<S446>/ROUTE CONFLICT LOCK' */
  B_D_R_L_T ROUTECONFLICTLOCK_e0;      /* '<S445>/ROUTE CONFLICT LOCK' */
  B_D_R_L_T ROUTECONFLICTLOCK_bp;      /* '<S444>/ROUTE CONFLICT LOCK' */
  B_D_R_L_T ROUTECONFLICTLOCK_d;       /* '<S443>/ROUTE CONFLICT LOCK' */
  B_D_R_L_T ROUTECONFLICTLOCK_c;       /* '<S442>/ROUTE CONFLICT LOCK' */
  B_D_R_L_T ROUTECONFLICTLOCK_b;       /* '<S441>/ROUTE CONFLICT LOCK' */
  B_D_R_L_T ROUTECONFLICTLOCK_k;       /* '<S440>/ROUTE CONFLICT LOCK' */
  B_D_R_L_T ROUTECONFLICTLOCK_h;       /* '<S439>/ROUTE CONFLICT LOCK' */
  B_D_R_L_T ROUTECONFLICTLOCK_e;       /* '<S438>/ROUTE CONFLICT LOCK' */
  B_D_R_L_T ROUTECONFLICTLOCK_m;       /* '<S437>/ROUTE CONFLICT LOCK' */
  B_D_R_L_T ROUTECONFLICTLOCK;         /* '<S436>/ROUTE CONFLICT LOCK' */
  B_D_H_D_S_T ROUTECHECK_a;            /* '<S423>/ROUTE CHECK' */
  B_D_H_D_S_T ROUTECHECK_g;            /* '<S422>/ROUTE CHECK' */
  B_D_H_D_S_T ROUTECHECK_k;            /* '<S421>/ROUTE CHECK' */
  B_D_H_D_S_T ROUTECHECK_b;            /* '<S420>/ROUTE CHECK' */
  B_D_H_D_S_T ROUTECHECK_i;            /* '<S419>/ROUTE CHECK' */
  B_D_H_D_S_T ROUTECHECK_m;            /* '<S418>/ROUTE CHECK' */
  B_D_H_D_S_T ROUTECHECK_o;            /* '<S417>/ROUTE CHECK' */
  B_D_H_D_S_T ROUTECHECK_p;            /* '<S416>/ROUTE CHECK' */
  B_D_H_D_S_T ROUTECHECK_h;            /* '<S415>/ROUTE CHECK' */
  B_D_H_D_S_T ROUTECHECK_l;            /* '<S414>/ROUTE CHECK' */
  B_D_H_D_S_T ROUTECHECK_f;            /* '<S413>/ROUTE CHECK' */
  B_D_H_D_S_T ROUTECHECK;              /* '<S412>/ROUTE CHECK' */
  B_D_SW_L_T POINTLOCK_l;              /* '<S407>/POINT LOCK' */
  B_D_SW_L_T POINTLOCK_c;              /* '<S406>/POINT LOCK' */
  B_D_SW_L_T POINTLOCK_p;              /* '<S405>/POINT LOCK' */
  B_D_SW_L_T POINTLOCK;                /* '<S404>/POINT LOCK' */
  B_D_SW_CTRL_T POINTCONTROL_d;        /* '<S319>/POINT CONTROL' */
  B_D_SW_CTRL_T POINTCONTROL_m;        /* '<S318>/POINT CONTROL' */
  B_D_SW_CTRL_T POINTCONTROL_b;        /* '<S317>/POINT CONTROL' */
  B_D_SW_CTRL_T POINTCONTROL;          /* '<S316>/POINT CONTROL' */
  B_D_RRLS2_T D_RRLS6_o;               /* '<S302>/D_RRLS6' */
  B_D_RRLS1_T D_RRLS5_m;               /* '<S302>/D_RRLS5' */
  B_D_RRLS3_T D_RRLS2_o;               /* '<S302>/D_RRLS2' */
  B_D_RRLS3_T D_RRLS1_g;               /* '<S302>/D_RRLS1' */
  B_D_RRLS_4_T D_RRLS8;                /* '<S301>/D_RRLS8' */
  B_D_RRLS2_T D_RRLS6_l;               /* '<S301>/D_RRLS6' */
  B_D_RRLS1_T D_RRLS5_j;               /* '<S301>/D_RRLS5' */
  B_D_RRLS_4_T D_RRLS2_m;              /* '<S301>/D_RRLS2' */
  B_D_RRLS3_T D_RRLS1_k;               /* '<S301>/D_RRLS1' */
  B_D_RRLS3_T D_RRLS7;                 /* '<S300>/D_RRLS7' */
  B_D_RRLS2_T D_RRLS6;                 /* '<S300>/D_RRLS6' */
  B_D_RRLS1_T D_RRLS5;                 /* '<S300>/D_RRLS5' */
  B_D_RRLS3_T D_RRLS1_j;               /* '<S300>/D_RRLS1' */
  B_D_AS_SR_T AS_SR_ec;                /* '<S283>/AS_SR' */
  B_D_AS_SR_T AS_SR_ip;                /* '<S282>/AS_SR' */
  B_D_AS_SR_T AS_SR_f;                 /* '<S281>/AS_SR' */
  B_D_AS_SR_T AS_SR_e4;                /* '<S280>/AS_SR' */
  B_D_AS_SR_T AS_SR_m;                 /* '<S279>/AS_SR' */
  B_D_AS_SR_T AS_SR_b;                 /* '<S278>/AS_SR' */
  B_D_AS_SR_T AS_SR_g;                 /* '<S277>/AS_SR' */
  B_D_AS_SR_T AS_SR_i;                 /* '<S276>/AS_SR' */
  B_D_AS_SR_T AS_SR_a;                 /* '<S275>/AS_SR' */
  B_D_AS_SR_T AS_SR_d;                 /* '<S274>/AS_SR' */
  B_D_AS_SR_T AS_SR_e;                 /* '<S273>/AS_SR' */
  B_D_AS_SR_T AS_SR;                   /* '<S272>/AS_SR' */
  B_D_RRLS_T EMERGENCYROUTERELEASE_ah; /* '<S189>/EMERGENCY ROUTE RELEASE' */
  B_D_RRLS_T EMERGENCYROUTERELEASE_j;  /* '<S188>/EMERGENCY ROUTE RELEASE' */
  B_D_RRLS_T EMERGENCYROUTERELEASE_c;  /* '<S187>/EMERGENCY ROUTE RELEASE' */
  B_D_RRLS_T EMERGENCYROUTERELEASE_k;  /* '<S186>/EMERGENCY ROUTE RELEASE' */
  B_D_RRLS_T EMERGENCYROUTERELEASE_a;  /* '<S185>/EMERGENCY ROUTE RELEASE' */
  B_D_RRLS_T EMERGENCYROUTERELEASE_g;  /* '<S184>/EMERGENCY ROUTE RELEASE' */
  B_D_RRLS_T EMERGENCYROUTERELEASE;    /* '<S183>/EMERGENCY ROUTE RELEASE' */
  B_D_SWRLS_T EMERGENCYPOINTRELEASE_b; /* '<S138>/EMERGENCY POINT RELEASE' */
  B_D_SWRLS_T EMERGENCYPOINTRELEASE_p; /* '<S137>/EMERGENCY POINT RELEASE' */
  B_D_SWRLS_T EMERGENCYPOINTRELEASE_l; /* '<S136>/EMERGENCY POINT RELEASE' */
  B_D_SWRLS_T EMERGENCYPOINTRELEASE;   /* '<S135>/EMERGENCY POINT RELEASE' */
  B_D_AS_T APPROACHLOCK_o;             /* '<S22>/APPROACH LOCK' */
  B_D_AS_T APPROACHLOCK_f;             /* '<S21>/APPROACH LOCK' */
  B_D_AS_T APPROACHLOCK_e;             /* '<S20>/APPROACH LOCK' */
  B_D_AS_T APPROACHLOCK_j;             /* '<S19>/APPROACH LOCK' */
  B_D_AS_T APPROACHLOCK_a;             /* '<S18>/APPROACH LOCK' */
  B_D_AS_T APPROACHLOCK_p;             /* '<S17>/APPROACH LOCK' */
  B_D_AS_T APPROACHLOCK;               /* '<S16>/APPROACH LOCK' */
} B_VITALDEPOT_c_T;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block states (auto storage) for model 'VITALDEPOT' */
#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  int32_T clockTickCounter;            /* '<S4>/0.5S' */
  int32_T clockTickCounter_b;          /* '<S4>/1S' */
  boolean_T M_RST_L74;                 /* synthesized block */
  boolean_T M_RST_L72;                 /* synthesized block */
  boolean_T M_RST_L54;                 /* synthesized block */
  boolean_T M_RST_L34;                 /* synthesized block */
  boolean_T M_RST_L32;                 /* synthesized block */
  boolean_T M_RST_L14A;                /* synthesized block */
  boolean_T M_RST_L12;                 /* synthesized block */
  boolean_T M_AS_S_L14B;               /* synthesized block */
  boolean_T M_RRLSPB_CTRL_L14A;        /* synthesized block */
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
  boolean_T M_SWRLS_DEP;               /* synthesized block */
  boolean_T M_RRLS_DEP;                /* synthesized block */
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
  boolean_T M_VDR;                     /* synthesized block */
  boolean_T M_RR;                      /* synthesized block */
  boolean_T M_AS_S_L12;                /* synthesized block */
  boolean_T DO_L12_GR;                 /* synthesized block */
  boolean_T M_TP_13;                   /* synthesized block */
  boolean_T M_TP_12;                   /* synthesized block */
  boolean_T M_GV_TRUE;                 /* synthesized block */
  boolean_T M_GV_FLASH_1000;           /* synthesized block */
  boolean_T M_GV_FLASH_500;            /* synthesized block */
  boolean_T M_GV_FALSE;                /* synthesized block */
  DW_D_TP_T D_TP9;                     /* '<S15>/D_TP9' */
  DW_D_TP_T D_TP8;                     /* '<S15>/D_TP8' */
  DW_D_TP_T D_TP7;                     /* '<S15>/D_TP7' */
  DW_D_TP_T D_TP6;                     /* '<S15>/D_TP6' */
  DW_D_TP_T D_TP5;                     /* '<S15>/D_TP5' */
  DW_D_TP_T D_TP4;                     /* '<S15>/D_TP4' */
  DW_D_TP_T D_TP3;                     /* '<S15>/D_TP3' */
  DW_D_TP_T D_TP2;                     /* '<S15>/D_TP2' */
  DW_D_TP_T D_TP10;                    /* '<S15>/D_TP10' */
  DW_D_TP_T D_TP1;                     /* '<S15>/D_TP1' */
  DW_D_ES_WS_T ROUTELOCK_i;            /* '<S465>/ROUTE LOCK' */
  DW_D_ES_WS_T ROUTELOCK_d;            /* '<S464>/ROUTE LOCK' */
  DW_D_ES_WS_T ROUTELOCK_f;            /* '<S463>/ROUTE LOCK' */
  DW_D_ES_WS_T ROUTELOCK_p;            /* '<S462>/ROUTE LOCK' */
  DW_D_ES_WS_T ROUTELOCK_c;            /* '<S461>/ROUTE LOCK' */
  DW_D_ES_WS_T ROUTELOCK;              /* '<S460>/ROUTE LOCK' */
  DW_D_SW_CTRL_T POINTCONTROL_d;       /* '<S319>/POINT CONTROL' */
  DW_D_SW_CTRL_T POINTCONTROL_m;       /* '<S318>/POINT CONTROL' */
  DW_D_SW_CTRL_T POINTCONTROL_b;       /* '<S317>/POINT CONTROL' */
  DW_D_SW_CTRL_T POINTCONTROL;         /* '<S316>/POINT CONTROL' */
  DW_D_RRLS_T EMERGENCYROUTERELEASE_ah;/* '<S189>/EMERGENCY ROUTE RELEASE' */
  DW_D_RRLS_T EMERGENCYROUTERELEASE_j; /* '<S188>/EMERGENCY ROUTE RELEASE' */
  DW_D_RRLS_T EMERGENCYROUTERELEASE_c; /* '<S187>/EMERGENCY ROUTE RELEASE' */
  DW_D_RRLS_T EMERGENCYROUTERELEASE_k; /* '<S186>/EMERGENCY ROUTE RELEASE' */
  DW_D_RRLS_T EMERGENCYROUTERELEASE_a; /* '<S185>/EMERGENCY ROUTE RELEASE' */
  DW_D_RRLS_T EMERGENCYROUTERELEASE_g; /* '<S184>/EMERGENCY ROUTE RELEASE' */
  DW_D_RRLS_T EMERGENCYROUTERELEASE;   /* '<S183>/EMERGENCY ROUTE RELEASE' */
  DW_D_SWRLS_T EMERGENCYPOINTRELEASE_b;/* '<S138>/EMERGENCY POINT RELEASE' */
  DW_D_SWRLS_T EMERGENCYPOINTRELEASE_p;/* '<S137>/EMERGENCY POINT RELEASE' */
  DW_D_SWRLS_T EMERGENCYPOINTRELEASE_l;/* '<S136>/EMERGENCY POINT RELEASE' */
  DW_D_SWRLS_T EMERGENCYPOINTRELEASE;  /* '<S135>/EMERGENCY POINT RELEASE' */
  DW_D_AS_T APPROACHLOCK_o;            /* '<S22>/APPROACH LOCK' */
  DW_D_AS_T APPROACHLOCK_f;            /* '<S21>/APPROACH LOCK' */
  DW_D_AS_T APPROACHLOCK_e;            /* '<S20>/APPROACH LOCK' */
  DW_D_AS_T APPROACHLOCK_j;            /* '<S19>/APPROACH LOCK' */
  DW_D_AS_T APPROACHLOCK_a;            /* '<S18>/APPROACH LOCK' */
  DW_D_AS_T APPROACHLOCK_p;            /* '<S17>/APPROACH LOCK' */
  DW_D_AS_T APPROACHLOCK;              /* '<S16>/APPROACH LOCK' */
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
extern void VITALDEPOT(const boolean_T rtu_FROMMAIN[6], const boolean_T
  rtu_SREQFROM[12], const boolean_T rtu_NREQFROM[4], const boolean_T
  rtu_RREQFROM[4], const boolean_T rtu_OOCFROM[4], const boolean_T
  rtu_RRLSPBCTRLFROM[8], const boolean_T rtu_SWRLSPBCTRLFROM[4], const boolean_T
  rtu_DEPVARFROM[12], const boolean_T rtu_RSTFROM[7], const boolean_T rtu_TPRDI
  [10], const boolean_T rtu_NWPDI[4], const boolean_T rtu_RWPDI[4], boolean_T
  rty_TOMAIN[4], boolean_T rty_TPTO[10], boolean_T rty_SESTO[3], boolean_T
  rty_SWSTO[3], boolean_T rty_NWCTO[4], boolean_T rty_NWPTO[4], boolean_T
  rty_NWZTO[4], boolean_T rty_NWTETO[4], boolean_T rty_RWCTO[4], boolean_T
  rty_RWPTO[4], boolean_T rty_RWZTO[4], boolean_T rty_RWTETO[4], boolean_T
  rty_LTO[4], boolean_T rty_LSTO[4], boolean_T rty_SWRLSTO[4], boolean_T
  rty_TPZTO[4], boolean_T rty_GRDOTO[8], boolean_T rty_SASTO[8], boolean_T
  rty_RRLSTO[8], boolean_T rty_GRDO[8], boolean_T rty_NWRDO[4], boolean_T
  rty_RWRDO[4], boolean_T rty_WLPRDO[4]);

/* Model reference registration function */
extern void VITALDEPOT_initialize(const char_T **rt_errorStatus, RTWSolverInfo
  *rt_solverInfo, const rtTimingBridge *timingBridge, int_T mdlref_TID0, int_T
  mdlref_TID1);

#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

extern void DV_TON_Init(DW_DV_TON_T *localDW);
extern void DV_TON_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T
  rtu_IN, B_DV_TON_T *localB, DW_DV_TON_T *localDW);
extern void DV_TON(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_IN,
                   B_DV_TON_T *localB, DW_DV_TON_T *localDW, real_T rtp_TIME);
extern void D_AS_Init(DW_D_AS_T *localDW);
extern void D_AS_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, B_D_AS_T
  *localB, DW_D_AS_T *localDW);
extern void D_AS(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_HRDR,
                 boolean_T rtu_ER, boolean_T rtu_GR, boolean_T rtu_TPF,
                 boolean_T rtu_TPB, boolean_T rtu_RR, boolean_T rtu_VDR,
                 B_D_AS_T *localB, DW_D_AS_T *localDW);
extern void D_SWRLS_Init(DW_D_SWRLS_T *localDW);
extern void D_SWRLS_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M,
  B_D_SWRLS_T *localB, DW_D_SWRLS_T *localDW);
extern void D_SWRLS(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T
                    rtu_SWRLSCTRL, boolean_T rtu_ESWS, boolean_T rtu_TP,
                    boolean_T rtu_SWRLS, boolean_T rtu_VDR, B_D_SWRLS_T *localB,
                    DW_D_SWRLS_T *localDW);
extern void DV_TOF_Init(DW_DV_TOF_T *localDW);
extern void DV_TOF_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T
  rtu_IN, B_DV_TOF_T *localB, DW_DV_TOF_T *localDW);
extern void DV_TOF(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_IN,
                   B_DV_TOF_T *localB, DW_DV_TOF_T *localDW, real_T rtp_TIME);
extern void VITALDEPOT_DV_TON_Init(DW_DV_TON_h_T *localDW);
extern void VITALDEPOT_DV_TON_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M,
  boolean_T rtu_IN, B_DV_TON_p_T *localB, DW_DV_TON_h_T *localDW);
extern void VITALDEPOT_DV_TON(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M,
  boolean_T rtu_IN, B_DV_TON_p_T *localB, DW_DV_TON_h_T *localDW, real_T
  rtp_TIME);
extern void D_RRLS_Init(DW_D_RRLS_T *localDW);
extern void D_RRLS_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, B_D_RRLS_T
  *localB, DW_D_RRLS_T *localDW);
extern void D_RRLS(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_TAS,
                   boolean_T rtu_TREQ, boolean_T rtu_EAS, boolean_T rtu_EREQ,
                   boolean_T rtu_SAS, boolean_T rtu_SREQ, boolean_T rtu_ESWS,
                   boolean_T rtu_NWZRWZ, boolean_T rtu_RRLSCTRL, boolean_T
                   rtu_RRLS, boolean_T rtu_VDR, B_D_RRLS_T *localB, DW_D_RRLS_T *
                   localDW);
extern void D_AS_SR(boolean_T rtu_L, boolean_T rtu_RS, B_D_AS_SR_T *localB);
extern void D_RRLS3(boolean_T rtu_RRLSTE, boolean_T rtu_NWZRWZ1, boolean_T
                    rtu_NWZRWZ2, B_D_RRLS3_T *localB);
extern void D_RRLS1(boolean_T rtu_RRLSTE, B_D_RRLS1_T *localB);
extern void D_RRLS2(boolean_T rtu_RRLSTE, boolean_T rtu_NWZRWZ1, B_D_RRLS2_T
                    *localB);
extern void D_RRLS_4(boolean_T rtu_RRLSTE, boolean_T rtu_NWZRWZ1, boolean_T
                     rtu_NWZRWZ2, boolean_T rtu_NWZRWZ3, B_D_RRLS_4_T *localB);
extern void D_SW_CTRL_Init(DW_D_SW_CTRL_T *localDW);
extern void D_SW_CTRL_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M,
  B_D_SW_CTRL_T *localB, DW_D_SW_CTRL_T *localDW);
extern void D_SW_CTRL(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T
                      rtu_NWPDI, boolean_T rtu_RWPDI, boolean_T rtu_OOC,
                      boolean_T rtu_L, boolean_T rtu_NREQ, boolean_T rtu_RREQ,
                      boolean_T rtu_TP, boolean_T rtu_TPZ, boolean_T rtu_VDR,
                      B_D_SW_CTRL_T *localB, DW_D_SW_CTRL_T *localDW);
extern void D_SW_L(boolean_T rtu_TES, boolean_T rtu_EES, boolean_T rtu_SES,
                   boolean_T rtu_TWS, boolean_T rtu_EWS, boolean_T rtu_SWS,
                   boolean_T rtu_TELAS, boolean_T rtu_TWLAS, boolean_T rtu_TP,
                   boolean_T rtu_TPZ, B_D_SW_L_T *localB);
extern void D_H_D_S(boolean_T rtu_REQ, boolean_T rtu_L, B_D_H_D_S_T *localB);
extern void D_R_L(boolean_T rtu_ESWS, boolean_T rtu_NWCRWC, boolean_T rtu_GRDRDO,
                  B_D_R_L_T *localB);
extern void D_ES_WS(boolean_T rtu_TRL, boolean_T rtu_TESWSB, boolean_T
                    rtu_TNWZRWZ, boolean_T rtu_ERL, boolean_T rtu_EESWSB,
                    boolean_T rtu_ENWZRWZ, boolean_T rtu_SRL, boolean_T
                    rtu_SESWSB, boolean_T rtu_SNWZRWZ, boolean_T rtu_TP,
                    boolean_T rtu_RLS, B_D_ES_WS_T *localB, DW_D_ES_WS_T
                    *localDW);
extern void D_SIG_CTRL(boolean_T rtu_S, boolean_T rtu_TP, B_D_SIG_CTRL_T *localB);
extern void D_TP_Init(DW_D_TP_T *localDW);
extern void D_TP_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T
  rtu_TPR, B_D_TP_T *localB, DW_D_TP_T *localDW);
extern void D_TP(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_TPR,
                 B_D_TP_T *localB, DW_D_TP_T *localDW);

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

extern MdlrefDW_VITALDEPOT_T VITALDEPOT_MdlrefDW;

#endif                                 /*VITALDEPOT_MDLREF_HIDE_CHILD_*/

#ifndef VITALDEPOT_MDLREF_HIDE_CHILD_

/* Block signals (auto storage) */
extern B_VITALDEPOT_c_T VITALDEPOT_B;

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
 * '<S1>'   : 'VITALDEPOT/GLOBAL VARIABLE'
 * '<S2>'   : 'VITALDEPOT/LOGIC'
 * '<S3>'   : 'VITALDEPOT/MAPPING'
 * '<S4>'   : 'VITALDEPOT/GLOBAL VARIABLE/GLOBAL-VAR'
 * '<S5>'   : 'VITALDEPOT/LOGIC/APPROACH LOCK'
 * '<S6>'   : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE'
 * '<S7>'   : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE '
 * '<S8>'   : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE'
 * '<S9>'   : 'VITALDEPOT/LOGIC/POINT CONTROL'
 * '<S10>'  : 'VITALDEPOT/LOGIC/POINT LOCK'
 * '<S11>'  : 'VITALDEPOT/LOGIC/ROUTE CHECK'
 * '<S12>'  : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK'
 * '<S13>'  : 'VITALDEPOT/LOGIC/ROUTE LOCK'
 * '<S14>'  : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING'
 * '<S15>'  : 'VITALDEPOT/LOGIC/TRACK TIMER'
 * '<S16>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12'
 * '<S17>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A'
 * '<S18>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32'
 * '<S19>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34'
 * '<S20>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54'
 * '<S21>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72'
 * '<S22>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74'
 * '<S23>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK'
 * '<S24>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON1'
 * '<S25>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON2'
 * '<S26>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON3'
 * '<S27>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON1/TON'
 * '<S28>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON1/TON/Detect Decrease'
 * '<S29>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON1/TON/Detect Increase'
 * '<S30>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON1/TON/S//H'
 * '<S31>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON2/TON'
 * '<S32>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON2/TON/Detect Decrease'
 * '<S33>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON2/TON/Detect Increase'
 * '<S34>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON2/TON/S//H'
 * '<S35>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON3/TON'
 * '<S36>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON3/TON/Detect Decrease'
 * '<S37>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON3/TON/Detect Increase'
 * '<S38>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L12/APPROACH LOCK/DV_TON3/TON/S//H'
 * '<S39>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK'
 * '<S40>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON1'
 * '<S41>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON2'
 * '<S42>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON3'
 * '<S43>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON1/TON'
 * '<S44>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON1/TON/Detect Decrease'
 * '<S45>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON1/TON/Detect Increase'
 * '<S46>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON1/TON/S//H'
 * '<S47>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON2/TON'
 * '<S48>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON2/TON/Detect Decrease'
 * '<S49>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON2/TON/Detect Increase'
 * '<S50>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON2/TON/S//H'
 * '<S51>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON3/TON'
 * '<S52>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON3/TON/Detect Decrease'
 * '<S53>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON3/TON/Detect Increase'
 * '<S54>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L14A/APPROACH LOCK/DV_TON3/TON/S//H'
 * '<S55>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK'
 * '<S56>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON1'
 * '<S57>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON2'
 * '<S58>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON3'
 * '<S59>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON1/TON'
 * '<S60>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON1/TON/Detect Decrease'
 * '<S61>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON1/TON/Detect Increase'
 * '<S62>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON1/TON/S//H'
 * '<S63>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON2/TON'
 * '<S64>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON2/TON/Detect Decrease'
 * '<S65>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON2/TON/Detect Increase'
 * '<S66>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON2/TON/S//H'
 * '<S67>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON3/TON'
 * '<S68>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON3/TON/Detect Decrease'
 * '<S69>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON3/TON/Detect Increase'
 * '<S70>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L32/APPROACH LOCK/DV_TON3/TON/S//H'
 * '<S71>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK'
 * '<S72>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON1'
 * '<S73>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON2'
 * '<S74>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON3'
 * '<S75>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON1/TON'
 * '<S76>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON1/TON/Detect Decrease'
 * '<S77>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON1/TON/Detect Increase'
 * '<S78>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON1/TON/S//H'
 * '<S79>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON2/TON'
 * '<S80>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON2/TON/Detect Decrease'
 * '<S81>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON2/TON/Detect Increase'
 * '<S82>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON2/TON/S//H'
 * '<S83>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON3/TON'
 * '<S84>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON3/TON/Detect Decrease'
 * '<S85>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON3/TON/Detect Increase'
 * '<S86>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L34/APPROACH LOCK/DV_TON3/TON/S//H'
 * '<S87>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK'
 * '<S88>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON1'
 * '<S89>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON2'
 * '<S90>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON3'
 * '<S91>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON1/TON'
 * '<S92>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON1/TON/Detect Decrease'
 * '<S93>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON1/TON/Detect Increase'
 * '<S94>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON1/TON/S//H'
 * '<S95>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON2/TON'
 * '<S96>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON2/TON/Detect Decrease'
 * '<S97>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON2/TON/Detect Increase'
 * '<S98>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON2/TON/S//H'
 * '<S99>'  : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON3/TON'
 * '<S100>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON3/TON/Detect Decrease'
 * '<S101>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON3/TON/Detect Increase'
 * '<S102>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L54/APPROACH LOCK/DV_TON3/TON/S//H'
 * '<S103>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK'
 * '<S104>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON1'
 * '<S105>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON2'
 * '<S106>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON3'
 * '<S107>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON1/TON'
 * '<S108>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON1/TON/Detect Decrease'
 * '<S109>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON1/TON/Detect Increase'
 * '<S110>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON1/TON/S//H'
 * '<S111>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON2/TON'
 * '<S112>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON2/TON/Detect Decrease'
 * '<S113>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON2/TON/Detect Increase'
 * '<S114>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON2/TON/S//H'
 * '<S115>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON3/TON'
 * '<S116>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON3/TON/Detect Decrease'
 * '<S117>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON3/TON/Detect Increase'
 * '<S118>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L72/APPROACH LOCK/DV_TON3/TON/S//H'
 * '<S119>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK'
 * '<S120>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON1'
 * '<S121>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON2'
 * '<S122>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON3'
 * '<S123>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON1/TON'
 * '<S124>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON1/TON/Detect Decrease'
 * '<S125>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON1/TON/Detect Increase'
 * '<S126>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON1/TON/S//H'
 * '<S127>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON2/TON'
 * '<S128>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON2/TON/Detect Decrease'
 * '<S129>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON2/TON/Detect Increase'
 * '<S130>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON2/TON/S//H'
 * '<S131>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON3/TON'
 * '<S132>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON3/TON/Detect Decrease'
 * '<S133>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON3/TON/Detect Increase'
 * '<S134>' : 'VITALDEPOT/LOGIC/APPROACH LOCK/L74/APPROACH LOCK/DV_TON3/TON/S//H'
 * '<S135>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A'
 * '<S136>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A'
 * '<S137>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54'
 * '<S138>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B'
 * '<S139>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE'
 * '<S140>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON1'
 * '<S141>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON4'
 * '<S142>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON1/TON'
 * '<S143>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON1/TON/Detect Decrease'
 * '<S144>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON1/TON/Detect Increase'
 * '<S145>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON1/TON/S//H'
 * '<S146>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON4/TON'
 * '<S147>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON4/TON/Detect Decrease'
 * '<S148>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON4/TON/Detect Increase'
 * '<S149>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13A/EMERGENCY POINT RELEASE/DV_TON4/TON/S//H'
 * '<S150>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE'
 * '<S151>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON1'
 * '<S152>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON4'
 * '<S153>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON1/TON'
 * '<S154>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON1/TON/Detect Decrease'
 * '<S155>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON1/TON/Detect Increase'
 * '<S156>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON1/TON/S//H'
 * '<S157>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON4/TON'
 * '<S158>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON4/TON/Detect Decrease'
 * '<S159>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON4/TON/Detect Increase'
 * '<S160>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W13B//73A/EMERGENCY POINT RELEASE/DV_TON4/TON/S//H'
 * '<S161>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE'
 * '<S162>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON1'
 * '<S163>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON4'
 * '<S164>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON1/TON'
 * '<S165>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON1/TON/Detect Decrease'
 * '<S166>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON1/TON/Detect Increase'
 * '<S167>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON1/TON/S//H'
 * '<S168>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON4/TON'
 * '<S169>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON4/TON/Detect Decrease'
 * '<S170>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON4/TON/Detect Increase'
 * '<S171>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W54/EMERGENCY POINT RELEASE/DV_TON4/TON/S//H'
 * '<S172>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE'
 * '<S173>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON1'
 * '<S174>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON4'
 * '<S175>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON1/TON'
 * '<S176>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON1/TON/Detect Decrease'
 * '<S177>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON1/TON/Detect Increase'
 * '<S178>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON1/TON/S//H'
 * '<S179>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON4/TON'
 * '<S180>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON4/TON/Detect Decrease'
 * '<S181>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON4/TON/Detect Increase'
 * '<S182>' : 'VITALDEPOT/LOGIC/EMERGENCY POINT RELEASE/W73B/EMERGENCY POINT RELEASE/DV_TON4/TON/S//H'
 * '<S183>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B'
 * '<S184>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12'
 * '<S185>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32'
 * '<S186>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34'
 * '<S187>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54'
 * '<S188>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72'
 * '<S189>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74'
 * '<S190>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE RELEASE'
 * '<S191>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE RELEASE/DV_TOF1'
 * '<S192>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE RELEASE/DV_TON1'
 * '<S193>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF'
 * '<S194>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/Detect Decrease'
 * '<S195>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/Detect Increase'
 * '<S196>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/S//H'
 * '<S197>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE RELEASE/DV_TON1/TON'
 * '<S198>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE RELEASE/DV_TON1/TON/Detect Decrease'
 * '<S199>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE RELEASE/DV_TON1/TON/Detect Increase'
 * '<S200>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /L14B/EMERGENCY ROUTE RELEASE/DV_TON1/TON/S//H'
 * '<S201>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE RELEASE'
 * '<S202>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE RELEASE/DV_TOF1'
 * '<S203>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE RELEASE/DV_TON1'
 * '<S204>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF'
 * '<S205>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/Detect Decrease'
 * '<S206>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/Detect Increase'
 * '<S207>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/S//H'
 * '<S208>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE RELEASE/DV_TON1/TON'
 * '<S209>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE RELEASE/DV_TON1/TON/Detect Decrease'
 * '<S210>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE RELEASE/DV_TON1/TON/Detect Increase'
 * '<S211>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X12/EMERGENCY ROUTE RELEASE/DV_TON1/TON/S//H'
 * '<S212>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE RELEASE'
 * '<S213>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE RELEASE/DV_TOF1'
 * '<S214>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE RELEASE/DV_TON1'
 * '<S215>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF'
 * '<S216>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/Detect Decrease'
 * '<S217>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/Detect Increase'
 * '<S218>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/S//H'
 * '<S219>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE RELEASE/DV_TON1/TON'
 * '<S220>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE RELEASE/DV_TON1/TON/Detect Decrease'
 * '<S221>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE RELEASE/DV_TON1/TON/Detect Increase'
 * '<S222>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X32/EMERGENCY ROUTE RELEASE/DV_TON1/TON/S//H'
 * '<S223>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE RELEASE'
 * '<S224>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE RELEASE/DV_TOF1'
 * '<S225>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE RELEASE/DV_TON1'
 * '<S226>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF'
 * '<S227>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/Detect Decrease'
 * '<S228>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/Detect Increase'
 * '<S229>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/S//H'
 * '<S230>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE RELEASE/DV_TON1/TON'
 * '<S231>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE RELEASE/DV_TON1/TON/Detect Decrease'
 * '<S232>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE RELEASE/DV_TON1/TON/Detect Increase'
 * '<S233>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X34/EMERGENCY ROUTE RELEASE/DV_TON1/TON/S//H'
 * '<S234>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE RELEASE'
 * '<S235>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE RELEASE/DV_TOF1'
 * '<S236>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE RELEASE/DV_TON1'
 * '<S237>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF'
 * '<S238>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/Detect Decrease'
 * '<S239>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/Detect Increase'
 * '<S240>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/S//H'
 * '<S241>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE RELEASE/DV_TON1/TON'
 * '<S242>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE RELEASE/DV_TON1/TON/Detect Decrease'
 * '<S243>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE RELEASE/DV_TON1/TON/Detect Increase'
 * '<S244>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X54/EMERGENCY ROUTE RELEASE/DV_TON1/TON/S//H'
 * '<S245>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE RELEASE'
 * '<S246>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE RELEASE/DV_TOF1'
 * '<S247>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE RELEASE/DV_TON1'
 * '<S248>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF'
 * '<S249>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/Detect Decrease'
 * '<S250>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/Detect Increase'
 * '<S251>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/S//H'
 * '<S252>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE RELEASE/DV_TON1/TON'
 * '<S253>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE RELEASE/DV_TON1/TON/Detect Decrease'
 * '<S254>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE RELEASE/DV_TON1/TON/Detect Increase'
 * '<S255>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X72/EMERGENCY ROUTE RELEASE/DV_TON1/TON/S//H'
 * '<S256>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE RELEASE'
 * '<S257>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE RELEASE/DV_TOF1'
 * '<S258>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE RELEASE/DV_TON1'
 * '<S259>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF'
 * '<S260>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/Detect Decrease'
 * '<S261>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/Detect Increase'
 * '<S262>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE RELEASE/DV_TOF1/TOF/S//H'
 * '<S263>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE RELEASE/DV_TON1/TON'
 * '<S264>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE RELEASE/DV_TON1/TON/Detect Decrease'
 * '<S265>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE RELEASE/DV_TON1/TON/Detect Increase'
 * '<S266>' : 'VITALDEPOT/LOGIC/EMERGENCY ROUTE RELEASE /X74/EMERGENCY ROUTE RELEASE/DV_TON1/TON/S//H'
 * '<S267>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR'
 * '<S268>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RL'
 * '<S269>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS'
 * '<S270>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RRLS'
 * '<S271>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/SWRLS'
 * '<S272>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L12-L14B'
 * '<S273>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L14A-X12'
 * '<S274>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L14A-X32'
 * '<S275>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L14A-X72'
 * '<S276>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L32-L14B'
 * '<S277>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L34-X72'
 * '<S278>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L54-X72'
 * '<S279>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L72-L14B'
 * '<S280>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L72-X34'
 * '<S281>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L72-X54'
 * '<S282>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L72-X74'
 * '<S283>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L74-X72'
 * '<S284>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L12-L14B/AS_SR'
 * '<S285>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L14A-X12/AS_SR'
 * '<S286>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L14A-X32/AS_SR'
 * '<S287>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L14A-X72/AS_SR'
 * '<S288>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L32-L14B/AS_SR'
 * '<S289>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L34-X72/AS_SR'
 * '<S290>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L54-X72/AS_SR'
 * '<S291>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L72-L14B/AS_SR'
 * '<S292>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L72-X34/AS_SR'
 * '<S293>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L72-X54/AS_SR'
 * '<S294>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L72-X74/AS_SR'
 * '<S295>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/AS-SR/L74-X72/AS_SR'
 * '<S296>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RL/13-S-ES-RL'
 * '<S297>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RL/13-S-WS-RL'
 * '<S298>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RL/73A-S-ES-RL'
 * '<S299>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RL/73B-S-WS-RL'
 * '<S300>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/13-RLS'
 * '<S301>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73A-RLS'
 * '<S302>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73B-RLS'
 * '<S303>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/13-RLS/D_RRLS1'
 * '<S304>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/13-RLS/D_RRLS5'
 * '<S305>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/13-RLS/D_RRLS6'
 * '<S306>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/13-RLS/D_RRLS7'
 * '<S307>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73A-RLS/D_RRLS1'
 * '<S308>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73A-RLS/D_RRLS2'
 * '<S309>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73A-RLS/D_RRLS5'
 * '<S310>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73A-RLS/D_RRLS6'
 * '<S311>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73A-RLS/D_RRLS8'
 * '<S312>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73B-RLS/D_RRLS1'
 * '<S313>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73B-RLS/D_RRLS2'
 * '<S314>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73B-RLS/D_RRLS5'
 * '<S315>' : 'VITALDEPOT/LOGIC/GLOBAL VARIABLE/RLS/73B-RLS/D_RRLS6'
 * '<S316>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A'
 * '<S317>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A'
 * '<S318>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54'
 * '<S319>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B'
 * '<S320>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL'
 * '<S321>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF'
 * '<S322>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF1'
 * '<S323>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON'
 * '<S324>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON1'
 * '<S325>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF/TOF'
 * '<S326>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF/TOF/Detect Decrease'
 * '<S327>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF/TOF/Detect Increase'
 * '<S328>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF/TOF/S//H'
 * '<S329>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF1/TOF'
 * '<S330>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF1/TOF/Detect Decrease'
 * '<S331>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF1/TOF/Detect Increase'
 * '<S332>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TOF1/TOF/S//H'
 * '<S333>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON/TON'
 * '<S334>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON/TON/Detect Decrease'
 * '<S335>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON/TON/Detect Increase'
 * '<S336>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON/TON/S//H'
 * '<S337>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON1/TON'
 * '<S338>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON1/TON/Detect Decrease'
 * '<S339>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON1/TON/Detect Increase'
 * '<S340>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13A/POINT CONTROL/DV_TON1/TON/S//H'
 * '<S341>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL'
 * '<S342>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF'
 * '<S343>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF1'
 * '<S344>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON'
 * '<S345>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON1'
 * '<S346>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF/TOF'
 * '<S347>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF/TOF/Detect Decrease'
 * '<S348>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF/TOF/Detect Increase'
 * '<S349>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF/TOF/S//H'
 * '<S350>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF1/TOF'
 * '<S351>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF1/TOF/Detect Decrease'
 * '<S352>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF1/TOF/Detect Increase'
 * '<S353>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TOF1/TOF/S//H'
 * '<S354>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON/TON'
 * '<S355>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON/TON/Detect Decrease'
 * '<S356>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON/TON/Detect Increase'
 * '<S357>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON/TON/S//H'
 * '<S358>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON1/TON'
 * '<S359>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON1/TON/Detect Decrease'
 * '<S360>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON1/TON/Detect Increase'
 * '<S361>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W13B//73A/POINT CONTROL/DV_TON1/TON/S//H'
 * '<S362>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL'
 * '<S363>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF'
 * '<S364>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF1'
 * '<S365>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON'
 * '<S366>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON1'
 * '<S367>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF/TOF'
 * '<S368>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF/TOF/Detect Decrease'
 * '<S369>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF/TOF/Detect Increase'
 * '<S370>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF/TOF/S//H'
 * '<S371>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF1/TOF'
 * '<S372>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF1/TOF/Detect Decrease'
 * '<S373>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF1/TOF/Detect Increase'
 * '<S374>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TOF1/TOF/S//H'
 * '<S375>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON/TON'
 * '<S376>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON/TON/Detect Decrease'
 * '<S377>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON/TON/Detect Increase'
 * '<S378>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON/TON/S//H'
 * '<S379>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON1/TON'
 * '<S380>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON1/TON/Detect Decrease'
 * '<S381>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON1/TON/Detect Increase'
 * '<S382>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W54/POINT CONTROL/DV_TON1/TON/S//H'
 * '<S383>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL'
 * '<S384>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF'
 * '<S385>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF1'
 * '<S386>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON'
 * '<S387>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON1'
 * '<S388>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF/TOF'
 * '<S389>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF/TOF/Detect Decrease'
 * '<S390>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF/TOF/Detect Increase'
 * '<S391>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF/TOF/S//H'
 * '<S392>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF1/TOF'
 * '<S393>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF1/TOF/Detect Decrease'
 * '<S394>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF1/TOF/Detect Increase'
 * '<S395>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TOF1/TOF/S//H'
 * '<S396>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON/TON'
 * '<S397>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON/TON/Detect Decrease'
 * '<S398>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON/TON/Detect Increase'
 * '<S399>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON/TON/S//H'
 * '<S400>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON1/TON'
 * '<S401>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON1/TON/Detect Decrease'
 * '<S402>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON1/TON/Detect Increase'
 * '<S403>' : 'VITALDEPOT/LOGIC/POINT CONTROL/W73B/POINT CONTROL/DV_TON1/TON/S//H'
 * '<S404>' : 'VITALDEPOT/LOGIC/POINT LOCK/W13A'
 * '<S405>' : 'VITALDEPOT/LOGIC/POINT LOCK/W13B//73A'
 * '<S406>' : 'VITALDEPOT/LOGIC/POINT LOCK/W54'
 * '<S407>' : 'VITALDEPOT/LOGIC/POINT LOCK/W73B'
 * '<S408>' : 'VITALDEPOT/LOGIC/POINT LOCK/W13A/POINT LOCK'
 * '<S409>' : 'VITALDEPOT/LOGIC/POINT LOCK/W13B//73A/POINT LOCK'
 * '<S410>' : 'VITALDEPOT/LOGIC/POINT LOCK/W54/POINT LOCK'
 * '<S411>' : 'VITALDEPOT/LOGIC/POINT LOCK/W73B/POINT LOCK'
 * '<S412>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L12-L14B'
 * '<S413>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L14A-X12'
 * '<S414>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L14A-X32'
 * '<S415>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L14A-X72'
 * '<S416>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L32-L14B'
 * '<S417>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L34-X72'
 * '<S418>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L54-X72'
 * '<S419>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L72-L14B'
 * '<S420>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L72-X34'
 * '<S421>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L72-X54'
 * '<S422>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L72-X74'
 * '<S423>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L74-X72'
 * '<S424>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L12-L14B/ROUTE CHECK'
 * '<S425>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L14A-X12/ROUTE CHECK'
 * '<S426>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L14A-X32/ROUTE CHECK'
 * '<S427>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L14A-X72/ROUTE CHECK'
 * '<S428>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L32-L14B/ROUTE CHECK'
 * '<S429>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L34-X72/ROUTE CHECK'
 * '<S430>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L54-X72/ROUTE CHECK'
 * '<S431>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L72-L14B/ROUTE CHECK'
 * '<S432>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L72-X34/ROUTE CHECK'
 * '<S433>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L72-X54/ROUTE CHECK'
 * '<S434>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L72-X74/ROUTE CHECK'
 * '<S435>' : 'VITALDEPOT/LOGIC/ROUTE CHECK/L74-X72/ROUTE CHECK'
 * '<S436>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L12-L14B'
 * '<S437>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L14A-X12'
 * '<S438>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L14A-X32'
 * '<S439>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L14A-X72'
 * '<S440>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L32-L14B'
 * '<S441>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L34-X72'
 * '<S442>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L54-X72'
 * '<S443>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L72-L14B'
 * '<S444>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L72-L54'
 * '<S445>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L72-L74'
 * '<S446>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L72-X34'
 * '<S447>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L74-X72'
 * '<S448>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L12-L14B/ROUTE CONFLICT LOCK'
 * '<S449>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L14A-X12/ROUTE CONFLICT LOCK'
 * '<S450>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L14A-X32/ROUTE CONFLICT LOCK'
 * '<S451>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L14A-X72/ROUTE CONFLICT LOCK'
 * '<S452>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L32-L14B/ROUTE CONFLICT LOCK'
 * '<S453>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L34-X72/ROUTE CONFLICT LOCK'
 * '<S454>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L54-X72/ROUTE CONFLICT LOCK'
 * '<S455>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L72-L14B/ROUTE CONFLICT LOCK'
 * '<S456>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L72-L54/ROUTE CONFLICT LOCK'
 * '<S457>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L72-L74/ROUTE CONFLICT LOCK'
 * '<S458>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L72-X34/ROUTE CONFLICT LOCK'
 * '<S459>' : 'VITALDEPOT/LOGIC/ROUTE CONFLICT LOCK/L74-X72/ROUTE CONFLICT LOCK'
 * '<S460>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/13-ES'
 * '<S461>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/13-WS'
 * '<S462>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/73A-ES'
 * '<S463>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/73A-WS'
 * '<S464>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/73B-ES'
 * '<S465>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/73B-WS'
 * '<S466>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/13-ES/ROUTE LOCK'
 * '<S467>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/13-WS/ROUTE LOCK'
 * '<S468>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/73A-ES/ROUTE LOCK'
 * '<S469>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/73A-WS/ROUTE LOCK'
 * '<S470>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/73B-ES/ROUTE LOCK'
 * '<S471>' : 'VITALDEPOT/LOGIC/ROUTE LOCK/73B-WS/ROUTE LOCK'
 * '<S472>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L12'
 * '<S473>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L14A'
 * '<S474>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L32'
 * '<S475>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L34'
 * '<S476>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L54'
 * '<S477>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L72'
 * '<S478>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L74'
 * '<S479>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L12/SIGNAL LIGHTING'
 * '<S480>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L14A/SIGNAL LIGHTING'
 * '<S481>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L32/SIGNAL LIGHTING'
 * '<S482>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L34/SIGNAL LIGHTING'
 * '<S483>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L54/SIGNAL LIGHTING'
 * '<S484>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L72/SIGNAL LIGHTING'
 * '<S485>' : 'VITALDEPOT/LOGIC/SIGNAL LIGHTING/L74/SIGNAL LIGHTING'
 * '<S486>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP1'
 * '<S487>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP10'
 * '<S488>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP2'
 * '<S489>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP3'
 * '<S490>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP4'
 * '<S491>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP5'
 * '<S492>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP6'
 * '<S493>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP7'
 * '<S494>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP8'
 * '<S495>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP9'
 * '<S496>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP1/DV_TON'
 * '<S497>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP1/DV_TON/TON'
 * '<S498>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP1/DV_TON/TON/Detect Decrease'
 * '<S499>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP1/DV_TON/TON/Detect Increase'
 * '<S500>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP1/DV_TON/TON/S//H'
 * '<S501>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP10/DV_TON'
 * '<S502>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP10/DV_TON/TON'
 * '<S503>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP10/DV_TON/TON/Detect Decrease'
 * '<S504>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP10/DV_TON/TON/Detect Increase'
 * '<S505>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP10/DV_TON/TON/S//H'
 * '<S506>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP2/DV_TON'
 * '<S507>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP2/DV_TON/TON'
 * '<S508>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP2/DV_TON/TON/Detect Decrease'
 * '<S509>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP2/DV_TON/TON/Detect Increase'
 * '<S510>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP2/DV_TON/TON/S//H'
 * '<S511>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP3/DV_TON'
 * '<S512>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP3/DV_TON/TON'
 * '<S513>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP3/DV_TON/TON/Detect Decrease'
 * '<S514>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP3/DV_TON/TON/Detect Increase'
 * '<S515>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP3/DV_TON/TON/S//H'
 * '<S516>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP4/DV_TON'
 * '<S517>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP4/DV_TON/TON'
 * '<S518>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP4/DV_TON/TON/Detect Decrease'
 * '<S519>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP4/DV_TON/TON/Detect Increase'
 * '<S520>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP4/DV_TON/TON/S//H'
 * '<S521>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP5/DV_TON'
 * '<S522>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP5/DV_TON/TON'
 * '<S523>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP5/DV_TON/TON/Detect Decrease'
 * '<S524>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP5/DV_TON/TON/Detect Increase'
 * '<S525>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP5/DV_TON/TON/S//H'
 * '<S526>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP6/DV_TON'
 * '<S527>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP6/DV_TON/TON'
 * '<S528>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP6/DV_TON/TON/Detect Decrease'
 * '<S529>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP6/DV_TON/TON/Detect Increase'
 * '<S530>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP6/DV_TON/TON/S//H'
 * '<S531>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP7/DV_TON'
 * '<S532>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP7/DV_TON/TON'
 * '<S533>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP7/DV_TON/TON/Detect Decrease'
 * '<S534>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP7/DV_TON/TON/Detect Increase'
 * '<S535>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP7/DV_TON/TON/S//H'
 * '<S536>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP8/DV_TON'
 * '<S537>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP8/DV_TON/TON'
 * '<S538>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP8/DV_TON/TON/Detect Decrease'
 * '<S539>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP8/DV_TON/TON/Detect Increase'
 * '<S540>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP8/DV_TON/TON/S//H'
 * '<S541>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP9/DV_TON'
 * '<S542>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP9/DV_TON/TON'
 * '<S543>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP9/DV_TON/TON/Detect Decrease'
 * '<S544>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP9/DV_TON/TON/Detect Increase'
 * '<S545>' : 'VITALDEPOT/LOGIC/TRACK TIMER/D_TP9/DV_TON/TON/S//H'
 * '<S546>' : 'VITALDEPOT/MAPPING/DEPDI'
 * '<S547>' : 'VITALDEPOT/MAPPING/DEPDO'
 * '<S548>' : 'VITALDEPOT/MAPPING/DEPNVTODEPV'
 * '<S549>' : 'VITALDEPOT/MAPPING/DEPTOMAIN'
 * '<S550>' : 'VITALDEPOT/MAPPING/DEPVTODEPNV'
 * '<S551>' : 'VITALDEPOT/MAPPING/MAINTODEP'
 * '<S552>' : 'VITALDEPOT/MAPPING/OTHERFROM'
 */
#endif                                 /* RTW_HEADER_VITALDEPOT_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
