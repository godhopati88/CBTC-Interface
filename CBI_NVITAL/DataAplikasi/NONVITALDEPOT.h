/*
 * File: NONVITALDEPOT.h
 *
 * Code generated for Simulink model 'NONVITALDEPOT'.
 *
 * Model version                  : 1.505
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Jun 24 22:52:46 2020
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

#ifndef RTW_HEADER_NONVITALDEPOT_h_
#define RTW_HEADER_NONVITALDEPOT_h_
#include <string.h>
#ifndef NONVITALDEPOT_COMMON_INCLUDES_
# define NONVITALDEPOT_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* NONVITALDEPOT_COMMON_INCLUDES_ */

#include "NONVITALDEPOT_types.h"

/* Shared type includes */
#include "model_reference_types.h"

/* Block signals and states (auto storage) for system '<S19>/DNV_TON' */
#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  real_T memory;                       /* '<S26>/memory' */
  real_T Switch;                       /* '<S26>/Switch' */
  real_T memory_PreviousInput;         /* '<S26>/memory' */
  boolean_T LogicalOperator1;          /* '<S23>/Logical Operator1' */
  boolean_T LogicalOperator2;          /* '<S23>/Logical Operator2' */
  boolean_T DelayInput1_DSTATE;        /* '<S24>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_c;      /* '<S25>/Delay Input1' */
} DW_DNV_TON_T;

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S35>/DNV_TOF' */
#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  real_T memory;                       /* '<S53>/memory' */
  real_T Switch;                       /* '<S53>/Switch' */
  real_T memory_PreviousInput;         /* '<S53>/memory' */
  boolean_T LogicalOperator1;          /* '<S50>/Logical Operator1' */
  boolean_T LogicalOperator3;          /* '<S50>/Logical Operator3' */
  boolean_T LogicalOperator4;          /* '<S50>/Logical Operator4' */
  boolean_T DelayInput1_DSTATE;        /* '<S51>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o;      /* '<S52>/Delay Input1' */
} DW_DNV_TOF_T;

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S84>/D_IND_POINT' */
#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND5;                      /* '<S89>/AND5' */
  boolean_T AND26;                     /* '<S89>/AND26' */
  boolean_T AND27;                     /* '<S89>/AND27' */
  boolean_T AND28;                     /* '<S89>/AND28' */
  boolean_T AND34;                     /* '<S89>/AND34' */
  boolean_T OR11;                      /* '<S89>/OR11' */
  boolean_T OR12;                      /* '<S89>/OR12' */
  boolean_T OR13;                      /* '<S89>/OR13' */
  boolean_T OR14;                      /* '<S89>/OR14' */
  boolean_T OR9;                       /* '<S89>/OR9' */
} DW_D_IND_POINT_T;

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S94>/INDIKASI SIGNAL' */
#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND3;                      /* '<S102>/AND3' */
  boolean_T AND6;                      /* '<S102>/AND6' */
} DW_D_SIG_IND_T;

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S110>/INDIKASI TRACK' */
#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T NOT2;                      /* '<S122>/NOT2' */
  boolean_T NOT5;                      /* '<S122>/NOT5' */
} DW_D_IND_TRACK_T;

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S136>/DNV_TON' */
#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  real_T memory;                       /* '<S147>/memory' */
  real_T Switch;                       /* '<S147>/Switch' */
  real_T memory_PreviousInput;         /* '<S147>/memory' */
  boolean_T Uk1;                       /* '<S145>/Delay Input1' */
  boolean_T Uk1_c;                     /* '<S146>/Delay Input1' */
  boolean_T LogicalOperator2;          /* '<S144>/Logical Operator2' */
  boolean_T DelayInput1_DSTATE;        /* '<S145>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_a;      /* '<S146>/Delay Input1' */
} DW_DNV_TON_n_T;

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S132>/INTERLOCKING POINT' */
#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  DW_DNV_TON_n_T DNV_TON_n;            /* '<S136>/DNV_TON' */
  DW_DNV_TOF_T DNV_TOF_c;              /* '<S136>/DNV_TOF' */
  boolean_T M8;                        /* '<S136>/M8' */
  boolean_T M9;                        /* '<S136>/M9' */
  boolean_T AND4;                      /* '<S136>/AND4' */
  boolean_T AND11;                     /* '<S136>/AND11' */
  boolean_T M11;                       /* '<S136>/M11' */
  boolean_T M10;                       /* '<S136>/M10' */
  boolean_T M7;                        /* '<S136>/M7' */
  boolean_T AND12;                     /* '<S136>/AND12' */
  boolean_T M6;                        /* '<S136>/M6' */
  boolean_T AND3;                      /* '<S136>/AND3' */
  boolean_T AND14;                     /* '<S136>/AND14' */
  boolean_T AND13;                     /* '<S136>/AND13' */
  boolean_T OR6;                       /* '<S136>/OR6' */
  boolean_T FixPtRelationalOperator;   /* '<S139>/FixPt Relational Operator' */
  boolean_T AND28;                     /* '<S136>/AND28' */
  boolean_T OR8;                       /* '<S136>/OR8' */
  boolean_T NOT18;                     /* '<S136>/NOT18' */
  boolean_T NOT21;                     /* '<S136>/NOT21' */
  boolean_T NOT19;                     /* '<S136>/NOT19' */
  boolean_T AND17;                     /* '<S136>/AND17' */
  boolean_T NOT20;                     /* '<S136>/NOT20' */
  boolean_T AND18;                     /* '<S136>/AND18' */
  boolean_T NOT14;                     /* '<S136>/NOT14' */
  boolean_T AND19;                     /* '<S136>/AND19' */
  boolean_T AND20;                     /* '<S136>/AND20' */
  boolean_T NOT24;                     /* '<S136>/NOT24' */
  boolean_T NOT25;                     /* '<S136>/NOT25' */
  boolean_T OR18;                      /* '<S136>/OR18' */
  boolean_T OR19;                      /* '<S136>/OR19' */
  boolean_T OR21;                      /* '<S136>/OR21' */
  boolean_T OR22;                      /* '<S136>/OR22' */
  boolean_T OR23;                      /* '<S136>/OR23' */
  boolean_T DelayInput1_DSTATE;        /* '<S139>/Delay Input1' */
  boolean_T M8_PreviousInput;          /* '<S136>/M8' */
  boolean_T M9_PreviousInput;          /* '<S136>/M9' */
  boolean_T M1_PreviousInput;          /* '<S136>/M1' */
  boolean_T M2_PreviousInput;          /* '<S136>/M2' */
  boolean_T M5_PreviousInput;          /* '<S136>/M5' */
  boolean_T M11_PreviousInput;         /* '<S136>/M11' */
  boolean_T M10_PreviousInput;         /* '<S136>/M10' */
  boolean_T M7_PreviousInput;          /* '<S136>/M7' */
  boolean_T M6_PreviousInput;          /* '<S136>/M6' */
  boolean_T M4_PreviousInput;          /* '<S136>/M4' */
  boolean_T M3_PreviousInput;          /* '<S136>/M3' */
} DW_D_IL_POINT_T;

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S200>/WARNING COMM 1 FAIL' */
#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND1;                      /* '<S205>/AND1' */
  boolean_T AND5;                      /* '<S205>/AND5' */
  boolean_T OR2;                       /* '<S205>/OR2' */
  boolean_T Memory2_PreviousInput;     /* '<S205>/Memory2' */
} DW_D_WAR_T;

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S217>/POINT PB CONTROL' */
#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND1;                      /* '<S221>/AND1' */
  boolean_T AND4;                      /* '<S221>/AND4' */
  boolean_T AND5;                      /* '<S221>/AND5' */
  boolean_T AND6;                      /* '<S221>/AND6' */
  boolean_T FixPtRelationalOperator;   /* '<S222>/FixPt Relational Operator' */
  boolean_T DelayInput1_DSTATE;        /* '<S222>/Delay Input1' */
} DW_D_SW_PB_T;

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S229>/ROUTE PB CONTROL' */
#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND2;                      /* '<S233>/AND2' */
  boolean_T AND3;                      /* '<S233>/AND3' */
} DW_D_R_PB_T;

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S214>/RUTE OTOMATIS' */
#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND5;                      /* '<S239>/AND5' */
  boolean_T M4_PreviousInput;          /* '<S239>/M4' */
} DW_D_R_AUTO_T;

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S240>/EMERGENCY ROUTE RELEASE' */
#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND1;                      /* '<S247>/AND1' */
} DW_D_RRLS_X_T;

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S254>/POINT FAIL' */
#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  DW_DNV_TON_T DNV_TON_n;              /* '<S258>/DNV_TON' */
  boolean_T AND10;                     /* '<S258>/AND10' */
  boolean_T AND11;                     /* '<S258>/AND11' */
  boolean_T M6;                        /* '<S258>/M6' */
  boolean_T M8;                        /* '<S258>/M8' */
  boolean_T AND12;                     /* '<S258>/AND12' */
  boolean_T M7;                        /* '<S258>/M7' */
  boolean_T AND20;                     /* '<S258>/AND20' */
  boolean_T AND21;                     /* '<S258>/AND21' */
  boolean_T AND22;                     /* '<S258>/AND22' */
  boolean_T AND23;                     /* '<S258>/AND23' */
  boolean_T AND27;                     /* '<S258>/AND27' */
  boolean_T AND5;                      /* '<S258>/AND5' */
  boolean_T AND8;                      /* '<S258>/AND8' */
  boolean_T OR16;                      /* '<S258>/OR16' */
  boolean_T OR18;                      /* '<S258>/OR18' */
  boolean_T OR8;                       /* '<S258>/OR8' */
  boolean_T OR9;                       /* '<S258>/OR9' */
  boolean_T M6_PreviousInput;          /* '<S258>/M6' */
  boolean_T M8_PreviousInput;          /* '<S258>/M8' */
  boolean_T M2_PreviousInput;          /* '<S258>/M2' */
  boolean_T M4_PreviousInput;          /* '<S258>/M4' */
  boolean_T M7_PreviousInput;          /* '<S258>/M7' */
  boolean_T M9_PreviousInput;          /* '<S258>/M9' */
  boolean_T M1_PreviousInput;          /* '<S258>/M1' */
  boolean_T M3_PreviousInput;          /* '<S258>/M3' */
  boolean_T M5_PreviousInput;          /* '<S258>/M5' */
} DW_D_POINT_FAIL_T;

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S302>/ROUTE REQUEST' */
#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T Memory1;                   /* '<S314>/Memory1' */
  boolean_T OR5;                       /* '<S314>/OR5' */
  boolean_T Memory1_PreviousInput;     /* '<S314>/Memory1' */
} DW_D_REQ_T;

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S326>/SIGNAL BLOCK' */
#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  DW_DNV_TOF_T DNV_TOF1;               /* '<S333>/DNV_TOF1' */
  boolean_T NOT5;                      /* '<S333>/NOT5' */
  boolean_T Memory;                    /* '<S333>/Memory' */
  boolean_T NOT1;                      /* '<S333>/NOT1' */
  boolean_T NOT4;                      /* '<S333>/NOT4' */
  boolean_T OR4;                       /* '<S333>/OR4' */
  boolean_T Memory_PreviousInput;      /* '<S333>/Memory' */
} DW_D_SIG_B_T;

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for model 'NONVITALDEPOT' */
#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  DW_D_SIG_B_T SIGNALBLOCK_n;          /* '<S332>/SIGNAL BLOCK' */
  DW_D_SIG_B_T SIGNALBLOCK_e;          /* '<S331>/SIGNAL BLOCK' */
  DW_D_SIG_B_T SIGNALBLOCK_cy;         /* '<S330>/SIGNAL BLOCK' */
  DW_D_SIG_B_T SIGNALBLOCK_d;          /* '<S329>/SIGNAL BLOCK' */
  DW_D_SIG_B_T SIGNALBLOCK_c;          /* '<S328>/SIGNAL BLOCK' */
  DW_D_SIG_B_T SIGNALBLOCK_a;          /* '<S327>/SIGNAL BLOCK' */
  DW_D_SIG_B_T SIGNALBLOCK;            /* '<S326>/SIGNAL BLOCK' */
  DW_D_REQ_T ROUTEREQUEST_mv;          /* '<S313>/ROUTE REQUEST' */
  DW_D_REQ_T ROUTEREQUEST_fz;          /* '<S312>/ROUTE REQUEST' */
  DW_D_REQ_T ROUTEREQUEST_k;           /* '<S311>/ROUTE REQUEST' */
  DW_D_REQ_T ROUTEREQUEST_f;           /* '<S310>/ROUTE REQUEST' */
  DW_D_REQ_T ROUTEREQUEST_m;           /* '<S309>/ROUTE REQUEST' */
  DW_D_REQ_T ROUTEREQUEST_ov;          /* '<S308>/ROUTE REQUEST' */
  DW_D_REQ_T ROUTEREQUEST_a;           /* '<S307>/ROUTE REQUEST' */
  DW_D_REQ_T ROUTEREQUEST_b;           /* '<S306>/ROUTE REQUEST' */
  DW_D_REQ_T ROUTEREQUEST_or;          /* '<S305>/ROUTE REQUEST' */
  DW_D_REQ_T ROUTEREQUEST_c;           /* '<S304>/ROUTE REQUEST' */
  DW_D_REQ_T ROUTEREQUEST_o;           /* '<S303>/ROUTE REQUEST' */
  DW_D_REQ_T ROUTEREQUEST;             /* '<S302>/ROUTE REQUEST' */
  DW_DNV_TOF_T DNV_TOF_h;              /* '<S284>/DNV_TOF' */
  DW_DNV_TOF_T DNV_TOF_fn;             /* '<S283>/DNV_TOF' */
  DW_DNV_TOF_T DNV_TOF_a;              /* '<S282>/DNV_TOF' */
  DW_D_POINT_FAIL_T POINTFAIL_c;       /* '<S257>/POINT FAIL' */
  DW_D_POINT_FAIL_T POINTFAIL_k;       /* '<S256>/POINT FAIL' */
  DW_D_POINT_FAIL_T POINTFAIL_e;       /* '<S255>/POINT FAIL' */
  DW_D_POINT_FAIL_T POINTFAIL;         /* '<S254>/POINT FAIL' */
  DW_D_RRLS_X_T EMERGENCYROUTERELEASE_a;/* '<S246>/EMERGENCY ROUTE RELEASE' */
  DW_D_RRLS_X_T EMERGENCYROUTERELEASE_k;/* '<S245>/EMERGENCY ROUTE RELEASE' */
  DW_D_RRLS_X_T EMERGENCYROUTERELEASE_m;/* '<S244>/EMERGENCY ROUTE RELEASE' */
  DW_D_RRLS_X_T EMERGENCYROUTERELEASE_p;/* '<S243>/EMERGENCY ROUTE RELEASE' */
  DW_D_RRLS_X_T EMERGENCYROUTERELEASE_d;/* '<S242>/EMERGENCY ROUTE RELEASE' */
  DW_D_RRLS_X_T EMERGENCYROUTERELEASE_o;/* '<S241>/EMERGENCY ROUTE RELEASE' */
  DW_D_RRLS_X_T EMERGENCYROUTERELEASE; /* '<S240>/EMERGENCY ROUTE RELEASE' */
  DW_D_R_AUTO_T RUTEOTOMATIS;          /* '<S214>/RUTE OTOMATIS' */
  DW_D_R_PB_T ROUTEPBCONTROL2_f;       /* '<S232>/ROUTE PB CONTROL 2' */
  DW_D_R_PB_T ROUTEPBCONTROL1_i;       /* '<S232>/ROUTE PB CONTROL 1' */
  DW_D_R_PB_T ROUTEPBCONTROL_p;        /* '<S231>/ROUTE PB CONTROL' */
  DW_D_R_PB_T ROUTEPBCONTROL2;         /* '<S230>/ROUTE PB CONTROL 2' */
  DW_D_R_PB_T ROUTEPBCONTROL1;         /* '<S230>/ROUTE PB CONTROL 1' */
  DW_D_R_PB_T ROUTEPBCONTROL;          /* '<S229>/ROUTE PB CONTROL' */
  DW_D_SW_PB_T POINTPBCONTROL_a;       /* '<S220>/POINT PB CONTROL' */
  DW_D_SW_PB_T POINTPBCONTROL_e;       /* '<S219>/POINT PB CONTROL' */
  DW_D_SW_PB_T POINTPBCONTROL_c;       /* '<S218>/POINT PB CONTROL' */
  DW_D_SW_PB_T POINTPBCONTROL;         /* '<S217>/POINT PB CONTROL' */
  DW_D_WAR_T TZBACK;                   /* '<S199>/TZB ACK' */
  DW_D_WAR_T TPRBANTU;                 /* '<S198>/TPR-BANTU' */
  DW_D_WAR_T WARNINGSYSTEM2FAIL;       /* '<S204>/WARNING SYSTEM 2 FAIL' */
  DW_D_WAR_T WARNINGSYSTEM1FAIL;       /* '<S203>/WARNING SYSTEM 1 FAIL' */
  DW_D_WAR_T WARNINGCOMM2FAIL;         /* '<S201>/WARNING COMM 2 FAIL' */
  DW_D_WAR_T WARNINGCOMM1FAIL;         /* '<S200>/WARNING COMM 1 FAIL' */
  DW_D_IL_POINT_T INTERLOCKINGPOINT_a; /* '<S135>/INTERLOCKING POINT' */
  DW_D_IL_POINT_T INTERLOCKINGPOINT_jl;/* '<S134>/INTERLOCKING POINT' */
  DW_D_IL_POINT_T INTERLOCKINGPOINT_j; /* '<S133>/INTERLOCKING POINT' */
  DW_D_IL_POINT_T INTERLOCKINGPOINT_ea;/* '<S132>/INTERLOCKING POINT' */
  DW_D_IND_TRACK_T INDIKASITRACK_b;    /* '<S119>/INDIKASI TRACK' */
  DW_D_IND_TRACK_T INDIKASITRACK_ow;   /* '<S118>/INDIKASI TRACK' */
  DW_D_IND_TRACK_T INDIKASITRACK_h;    /* '<S117>/INDIKASI TRACK' */
  DW_D_IND_TRACK_T INDIKASITRACK_d2;   /* '<S116>/INDIKASI TRACK' */
  DW_D_IND_TRACK_T INDIKASITRACK_d;    /* '<S115>/INDIKASI TRACK' */
  DW_D_IND_TRACK_T INDIKASITRACK_o;    /* '<S114>/INDIKASI TRACK' */
  DW_D_IND_TRACK_T INDIKASITRACK_g;    /* '<S113>/INDIKASI TRACK' */
  DW_D_IND_TRACK_T INDIKASITRACK_e;    /* '<S112>/INDIKASI TRACK' */
  DW_D_IND_TRACK_T INDIKASITRACK_k;    /* '<S111>/INDIKASI TRACK' */
  DW_D_IND_TRACK_T INDIKASITRACK;      /* '<S110>/INDIKASI TRACK' */
  DW_D_SIG_IND_T INDIKASISIGNAL_a;     /* '<S101>/INDIKASI SIGNAL' */
  DW_D_SIG_IND_T INDIKASISIGNAL_m;     /* '<S100>/INDIKASI SIGNAL' */
  DW_D_SIG_IND_T INDIKASISIGNAL_fj;    /* '<S99>/INDIKASI SIGNAL' */
  DW_D_SIG_IND_T INDIKASISIGNAL_j;     /* '<S98>/INDIKASI SIGNAL' */
  DW_D_SIG_IND_T INDIKASISIGNAL_c;     /* '<S97>/INDIKASI SIGNAL' */
  DW_D_SIG_IND_T INDIKASISIGNAL_l;     /* '<S96>/INDIKASI SIGNAL' */
  DW_D_SIG_IND_T INDIKASISIGNAL_f;     /* '<S95>/INDIKASI SIGNAL' */
  DW_D_SIG_IND_T INDIKASISIGNAL;       /* '<S94>/INDIKASI SIGNAL' */
  DW_D_IND_POINT_T INTERLOCKINGLOCK;   /* '<S88>/INTERLOCKING LOCK' */
  DW_D_IND_POINT_T D_IND_POINT_o;      /* '<S87>/D_IND_POINT' */
  DW_D_IND_POINT_T INTERLOCKINGPOINT_e;/* '<S86>/INTERLOCKING POINT' */
  DW_D_IND_POINT_T INTERLOCKINGPOINT;  /* '<S85>/INTERLOCKING POINT' */
  DW_D_IND_POINT_T D_IND_POINT_f;      /* '<S84>/D_IND_POINT' */
  DW_DNV_TOF_T DNV_TOF_pb;             /* '<S42>/DNV_TOF' */
  DW_DNV_TOF_T DNV_TOF_p;              /* '<S41>/DNV_TOF' */
  DW_DNV_TOF_T DNV_TOF_f;              /* '<S40>/DNV_TOF' */
  DW_DNV_TOF_T DNV_TOF_k;              /* '<S39>/DNV_TOF' */
  DW_DNV_TOF_T DNV_TOF_g;              /* '<S38>/DNV_TOF' */
  DW_DNV_TOF_T DNV_TOF_c;              /* '<S36>/DNV_TOF' */
  DW_DNV_TOF_T DNV_TOF_n;              /* '<S35>/DNV_TOF' */
  DW_DNV_TON_T DNV_TON2;               /* '<S19>/DNV_TON2' */
  DW_DNV_TON_T DNV_TON1;               /* '<S19>/DNV_TON1' */
  DW_DNV_TON_T DNV_TON_h;              /* '<S19>/DNV_TON' */
  int32_T clockTickCounter;            /* '<S3>/0.5S' */
  int32_T clockTickCounter_m;          /* '<S3>/1S' */
  boolean_T OR1;                       /* '<S18>/OR1' */
  boolean_T OR2;                       /* '<S18>/OR2' */
  boolean_T NOT3;                      /* '<S19>/NOT3' */
  boolean_T NOT2;                      /* '<S19>/NOT2' */
  boolean_T NOT1;                      /* '<S19>/NOT1' */
  boolean_T Memory1;                   /* '<S35>/Memory1' */
  boolean_T OR4;                       /* '<S35>/OR4' */
  boolean_T NOT8;                      /* '<S35>/NOT8' */
  boolean_T L12GRDO;                   /* '<S35>/L12-GR-DO' */
  boolean_T AND13;                     /* '<S35>/AND13' */
  boolean_T Memory1_c;                 /* '<S36>/Memory1' */
  boolean_T OR1_m;                     /* '<S36>/OR1' */
  boolean_T NOT8_l;                    /* '<S36>/NOT8' */
  boolean_T L14AGRDO;                  /* '<S36>/L14A-GR-DO' */
  boolean_T AND1;                      /* '<S36>/AND1' */
  boolean_T Memory1_l;                 /* '<S38>/Memory1' */
  boolean_T OR4_b;                     /* '<S38>/OR4' */
  boolean_T NOT8_b;                    /* '<S38>/NOT8' */
  boolean_T L32GRDO;                   /* '<S38>/L32-GR-DO' */
  boolean_T AND13_d;                   /* '<S38>/AND13' */
  boolean_T Memory1_o;                 /* '<S39>/Memory1' */
  boolean_T OR4_m;                     /* '<S39>/OR4' */
  boolean_T NOT8_p;                    /* '<S39>/NOT8' */
  boolean_T L34GRDO;                   /* '<S39>/L34-GR-DO' */
  boolean_T AND13_b;                   /* '<S39>/AND13' */
  boolean_T Memory1_oh;                /* '<S40>/Memory1' */
  boolean_T OR4_g;                     /* '<S40>/OR4' */
  boolean_T NOT8_pn;                   /* '<S40>/NOT8' */
  boolean_T L54GRDO;                   /* '<S40>/L54-GR-DO' */
  boolean_T AND13_n;                   /* '<S40>/AND13' */
  boolean_T Memory1_m;                 /* '<S41>/Memory1' */
  boolean_T OR4_p;                     /* '<S41>/OR4' */
  boolean_T NOT8_n;                    /* '<S41>/NOT8' */
  boolean_T L72GRDO;                   /* '<S41>/L72-GR-DO' */
  boolean_T AND13_d5;                  /* '<S41>/AND13' */
  boolean_T Memory1_d;                 /* '<S42>/Memory1' */
  boolean_T OR4_gc;                    /* '<S42>/OR4' */
  boolean_T NOT8_c;                    /* '<S42>/NOT8' */
  boolean_T L74GRDO;                   /* '<S42>/L74-GR-DO' */
  boolean_T AND13_m;                   /* '<S42>/AND13' */
  boolean_T W13AL;                     /* '<S132>/W13A-L' */
  boolean_T W13B73AL;                  /* '<S133>/W13B//73A-L' */
  boolean_T W54L;                      /* '<S134>/W54-L' */
  boolean_T W73BL;                     /* '<S135>/W73B-L' */
  boolean_T AND1_p;                    /* '<S282>/AND1' */
  boolean_T AND1_m;                    /* '<S283>/AND1' */
  boolean_T FixPtRelationalOperator;   /* '<S291>/FixPt Relational Operator' */
  boolean_T AND14;                     /* '<S284>/AND14' */
  boolean_T FixPtRelationalOperator_i; /* '<S297>/FixPt Relational Operator' */
  boolean_T VDR;                       /* '<S326>/VDR' */
  boolean_T L12GRDO_b;                 /* '<S326>/L12-GR-DO' */
  boolean_T VDR_e;                     /* '<S327>/VDR' */
  boolean_T L14AGRDO_c;                /* '<S327>/L14A-GR-DO' */
  boolean_T VDR_m;                     /* '<S328>/VDR' */
  boolean_T L32GRDO_j;                 /* '<S328>/L32-GR-DO' */
  boolean_T VDR_n;                     /* '<S329>/VDR' */
  boolean_T L34GRDO_i;                 /* '<S329>/L34-GR-DO' */
  boolean_T VDR_i;                     /* '<S330>/VDR' */
  boolean_T L54GRDO_p;                 /* '<S330>/L54-GR-DO' */
  boolean_T VDR_l;                     /* '<S331>/VDR' */
  boolean_T L72GRDO_m;                 /* '<S331>/L72-GR-DO' */
  boolean_T VDR_f;                     /* '<S332>/VDR' */
  boolean_T L74GRDO_m;                 /* '<S332>/L74-GR-DO' */
  boolean_T DelayInput1_DSTATE;        /* '<S291>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_p;      /* '<S297>/Delay Input1' */
  boolean_T Memory_PreviousInput;      /* '<S18>/Memory' */
  boolean_T Memory1_PreviousInput;     /* '<S18>/Memory1' */
  boolean_T Memory1_PreviousInput_j;   /* '<S35>/Memory1' */
  boolean_T Memory2_PreviousInput;     /* '<S35>/Memory2' */
  boolean_T Memory1_PreviousInput_o;   /* '<S36>/Memory1' */
  boolean_T Memory3_PreviousInput;     /* '<S36>/Memory3' */
  boolean_T Memory1_PreviousInput_a;   /* '<S38>/Memory1' */
  boolean_T Memory2_PreviousInput_e;   /* '<S38>/Memory2' */
  boolean_T Memory1_PreviousInput_os;  /* '<S39>/Memory1' */
  boolean_T Memory2_PreviousInput_p;   /* '<S39>/Memory2' */
  boolean_T Memory1_PreviousInput_d;   /* '<S40>/Memory1' */
  boolean_T Memory2_PreviousInput_k;   /* '<S40>/Memory2' */
  boolean_T Memory1_PreviousInput_g;   /* '<S41>/Memory1' */
  boolean_T Memory2_PreviousInput_g;   /* '<S41>/Memory2' */
  boolean_T Memory1_PreviousInput_l;   /* '<S42>/Memory1' */
  boolean_T Memory2_PreviousInput_kt;  /* '<S42>/Memory2' */
  boolean_T M_RS_ST2_14;               /* synthesized block */
  boolean_T M_DO_ST2_GR;               /* synthesized block */
  boolean_T M_RS_ST1_14;               /* synthesized block */
  boolean_T M_DO_ST1_GR;               /* synthesized block */
  boolean_T M_RS_14_ST2;               /* synthesized block */
  boolean_T M_RS_14_ST1;               /* synthesized block */
  boolean_T M_GV_AS;                   /* synthesized block */
  boolean_T M_CHK_V_NV;                /* synthesized block */
  boolean_T M_AS_S_L14B;               /* synthesized block */
  boolean_T M_RRLS_14A;                /* synthesized block */
  boolean_T M_CHK_NV_V;                /* synthesized block */
  boolean_T M_CTRL_RRLS_14A;           /* synthesized block */
  boolean_T DO_INDT_TE_MAIN;           /* synthesized block */
  boolean_T DO_INDT_RE_MAIN;           /* synthesized block */
  boolean_T DO_INDT_BE_MAIN;           /* synthesized block */
  boolean_T M_B_L74;                   /* synthesized block */
  boolean_T M_REQ_S_74_72;             /* synthesized block */
  boolean_T M_REQ_S_72_74;             /* synthesized block */
  boolean_T M_REQ_S_72_54;             /* synthesized block */
  boolean_T M_REQ_S_72_34;             /* synthesized block */
  boolean_T M_B_L72;                   /* synthesized block */
  boolean_T M_REQ_S_72_14;             /* synthesized block */
  boolean_T M_REQ_S_54_72;             /* synthesized block */
  boolean_T M_B_L54;                   /* synthesized block */
  boolean_T M_REQ_S_34_72;             /* synthesized block */
  boolean_T M_B_L34;                   /* synthesized block */
  boolean_T M_B_L32;                   /* synthesized block */
  boolean_T M_REQ_S_32_14;             /* synthesized block */
  boolean_T M_REQ_S_14_72;             /* synthesized block */
  boolean_T M_REQ_S_14_32;             /* synthesized block */
  boolean_T M_REQ_S_14_12;             /* synthesized block */
  boolean_T M_B_L14A;                  /* synthesized block */
  boolean_T M_B_L12;                   /* synthesized block */
  boolean_T M_REQ_S_12_14;             /* synthesized block */
  boolean_T DO_CT_TPR;                 /* synthesized block */
  boolean_T DO_CT_TBW;                 /* synthesized block */
  boolean_T DO_CT_TWT;                 /* synthesized block */
  boolean_T M_W73B_CTRL_TRAIL_Z;       /* synthesized block */
  boolean_T M_W54_CTRL_TRAIL_Z;        /* synthesized block */
  boolean_T M_W13B_73A_CTRL_TRAIL_Z;   /* synthesized block */
  boolean_T M_W13A_CTRL_TRAIL_Z;       /* synthesized block */
  boolean_T M_CTRL_RRLS_74;            /* synthesized block */
  boolean_T M_CTRL_RRLS_72;            /* synthesized block */
  boolean_T M_CTRL_RRLS_54;            /* synthesized block */
  boolean_T M_CTRL_RRLS_34;            /* synthesized block */
  boolean_T M_CTRL_RRLS_32;            /* synthesized block */
  boolean_T M_CTRL_RRLS_12;            /* synthesized block */
  boolean_T DI_PBR_TPR;                /* synthesized block */
  boolean_T M_CTRL_RRLS_14B;           /* synthesized block */
  boolean_T DI_PBG_OTOMATIS;           /* synthesized block */
  boolean_T DI_PBG_MANUAL;             /* synthesized block */
  boolean_T DO_INDAR_L14B;             /* synthesized block */
  boolean_T M_AR_L14B;                 /* synthesized block */
  boolean_T DI_PBX_72;                 /* synthesized block */
  boolean_T M_PBCTRL_74_72;            /* synthesized block */
  boolean_T DI_PBJ_74;                 /* synthesized block */
  boolean_T M_PBCTRL_54_72;            /* synthesized block */
  boolean_T DI_PBJ_54;                 /* synthesized block */
  boolean_T M_PBCTRL_34_72;            /* synthesized block */
  boolean_T DI_PBJ_34;                 /* synthesized block */
  boolean_T M_PBCTRL_14_72;            /* synthesized block */
  boolean_T M_PBCTRL_32_14;            /* synthesized block */
  boolean_T M_PBCTRL_12_14;            /* synthesized block */
  boolean_T DI_PBJ_32;                 /* synthesized block */
  boolean_T DI_PBJ_12;                 /* synthesized block */
  boolean_T DI_PBX_74;                 /* synthesized block */
  boolean_T DI_PBX_54;                 /* synthesized block */
  boolean_T DI_PBX_34;                 /* synthesized block */
  boolean_T M_PBCTRL_72_74;            /* synthesized block */
  boolean_T M_PBCTRL_72_54;            /* synthesized block */
  boolean_T M_PBCTRL_72_34;            /* synthesized block */
  boolean_T DI_PBJ_72;                 /* synthesized block */
  boolean_T M_PBCTRL_72_14;            /* synthesized block */
  boolean_T DI_PBJ_14B;                /* synthesized block */
  boolean_T DI_PBX_32;                 /* synthesized block */
  boolean_T DI_PBX_12;                 /* synthesized block */
  boolean_T M_PBCTRL_14_32;            /* synthesized block */
  boolean_T M_PBCTRL_14_12;            /* synthesized block */
  boolean_T DI_PBJ_14A;                /* synthesized block */
  boolean_T M_W73B_CTRL_SWRLS;         /* synthesized block */
  boolean_T DI_PBW_73B;                /* synthesized block */
  boolean_T M_W54_CTRL_SWRLS;          /* synthesized block */
  boolean_T DI_PBW_54;                 /* synthesized block */
  boolean_T M_W13B_73A_CTRL_SWRLS;     /* synthesized block */
  boolean_T DI_PBW_13B_73A;            /* synthesized block */
  boolean_T M_W13A_CTRL_SWRLS;         /* synthesized block */
  boolean_T DI_PBW_13A;                /* synthesized block */
  boolean_T DI_PBSW_TWT;               /* synthesized block */
  boolean_T DI_PBSW_TKW;               /* synthesized block */
  boolean_T DI_PBSW_TKGW;              /* synthesized block */
  boolean_T DI_PBSW_TBW;               /* synthesized block */
  boolean_T DI_PBSW_TBKW;              /* synthesized block */
  boolean_T M_NVCOMM_OK;               /* synthesized block */
  boolean_T M_CTRL_AA;                 /* synthesized block */
  boolean_T M_CBTC_TZB_IN;             /* synthesized block */
  boolean_T M_CBTC_TZB_F;              /* synthesized block */
  boolean_T DO_INDCBTC_TZB;            /* synthesized block */
  boolean_T DI_PBCBTC_TZB_ACK;         /* synthesized block */
  boolean_T M_CBTC_TZB_ACK_OK;         /* synthesized block */
  boolean_T DO_INDG_TPR_BANTU;         /* synthesized block */
  boolean_T DO_INDG_SYS2_FAIL;         /* synthesized block */
  boolean_T CBI_FAIL_SYSTEM2;          /* synthesized block */
  boolean_T DO_INDG_SYS1_FAIL;         /* synthesized block */
  boolean_T CBI_FAIL_SYSTEM1;          /* synthesized block */
  boolean_T M_W73B_F_ACK;              /* synthesized block */
  boolean_T M_W54_F_ACK;               /* synthesized block */
  boolean_T M_W13B_73A_F_ACK;          /* synthesized block */
  boolean_T M_W13A_F_ACK;              /* synthesized block */
  boolean_T DO_INDG_POINT;             /* synthesized block */
  boolean_T DO_INDG_COMM2_FAIL;        /* synthesized block */
  boolean_T CBI_FAIL_COMM2;            /* synthesized block */
  boolean_T DI_PBG_THB;                /* synthesized block */
  boolean_T DO_INDG_COMM1_FAIL;        /* synthesized block */
  boolean_T CBI_FAIL_COMM1;            /* synthesized block */
  boolean_T M_W73B_FAIL;               /* synthesized block */
  boolean_T M_W54_FAIL;                /* synthesized block */
  boolean_T M_W13B_73A_FAIL;           /* synthesized block */
  boolean_T M_W13A_FAIL;               /* synthesized block */
  boolean_T M_FAIL_COMM2_F;            /* synthesized block */
  boolean_T M_FAIL_COMM1_F;            /* synthesized block */
  boolean_T M_FAIL_SYSTEM2_F;          /* synthesized block */
  boolean_T M_FAIL_SYSTEM1_F;          /* synthesized block */
  boolean_T DO_INDG_BUZZ;              /* synthesized block */
  boolean_T M_B_74_72;                 /* synthesized block */
  boolean_T M_B_72_74;                 /* synthesized block */
  boolean_T M_B_72_54;                 /* synthesized block */
  boolean_T M_B_72_34;                 /* synthesized block */
  boolean_T M_B_72_14;                 /* synthesized block */
  boolean_T M_B_54_72;                 /* synthesized block */
  boolean_T M_W73B_TPZ;                /* synthesized block */
  boolean_T M_W54_TPZ;                 /* synthesized block */
  boolean_T M_B_34_72;                 /* synthesized block */
  boolean_T M_B_32_14;                 /* synthesized block */
  boolean_T M_B_14_72;                 /* synthesized block */
  boolean_T M_B_14_32;                 /* synthesized block */
  boolean_T M_B_14_12;                 /* synthesized block */
  boolean_T M_W13B_73A_TPZ;            /* synthesized block */
  boolean_T M_W13A_TPZ;                /* synthesized block */
  boolean_T M_B_12_14;                 /* synthesized block */
  boolean_T M_W73B_CTRL_TRAIL;         /* synthesized block */
  boolean_T M_W73B_RW_TE;              /* synthesized block */
  boolean_T M_W73B_CTRL_RST;           /* synthesized block */
  boolean_T M_W73B_R_REQ;              /* synthesized block */
  boolean_T M_W73B_R_BLOCK;            /* synthesized block */
  boolean_T M_W73B_R;                  /* synthesized block */
  boolean_T M_W73B_OOC_RD;             /* synthesized block */
  boolean_T M_W73B_NW_TE;              /* synthesized block */
  boolean_T M_W73B_N_REQ;              /* synthesized block */
  boolean_T M_W73B_N_BLOCK;            /* synthesized block */
  boolean_T M_W73B_N;                  /* synthesized block */
  boolean_T M_W73B_CTRL_CAL;           /* synthesized block */
  boolean_T M_W73B_BACK_TO_R;          /* synthesized block */
  boolean_T M_W73B_BACK_TO_N;          /* synthesized block */
  boolean_T M_W73B_CTRL_B;             /* synthesized block */
  boolean_T M_W54_CTRL_TRAIL;          /* synthesized block */
  boolean_T M_W54_RW_TE;               /* synthesized block */
  boolean_T M_W54_CTRL_RST;            /* synthesized block */
  boolean_T M_W54_R_REQ;               /* synthesized block */
  boolean_T M_W54_R_BLOCK;             /* synthesized block */
  boolean_T M_W54_R;                   /* synthesized block */
  boolean_T M_W54_OOC_RD;              /* synthesized block */
  boolean_T M_W54_NW_TE;               /* synthesized block */
  boolean_T M_W54_N_REQ;               /* synthesized block */
  boolean_T M_W54_N_BLOCK;             /* synthesized block */
  boolean_T M_W54_N;                   /* synthesized block */
  boolean_T M_W54_CTRL_CAL;            /* synthesized block */
  boolean_T M_W54_BACK_TO_R;           /* synthesized block */
  boolean_T M_W54_BACK_TO_N;           /* synthesized block */
  boolean_T M_W54_CTRL_B;              /* synthesized block */
  boolean_T M_W13B_73A_CTRL_TRAIL;     /* synthesized block */
  boolean_T M_W13B_73A_RW_TE;          /* synthesized block */
  boolean_T M_W13B_73A_CTRL_RST;       /* synthesized block */
  boolean_T M_W13B_73A_R_REQ;          /* synthesized block */
  boolean_T M_W13B_73A_R_BLOCK;        /* synthesized block */
  boolean_T M_W13B_73A_R;              /* synthesized block */
  boolean_T M_W13B_73A_OOC_RD;         /* synthesized block */
  boolean_T M_W13B_73A_NW_TE;          /* synthesized block */
  boolean_T M_W13B_73A_N_REQ;          /* synthesized block */
  boolean_T M_W13B_73A_N_BLOCK;        /* synthesized block */
  boolean_T M_W13B_73A_N;              /* synthesized block */
  boolean_T M_W13B_73A_CTRL_CAL;       /* synthesized block */
  boolean_T M_W13B_73A_BACK_TO_R;      /* synthesized block */
  boolean_T M_W13B_73A_BACK_TO_N;      /* synthesized block */
  boolean_T M_W13B_73A_CTRL_B;         /* synthesized block */
  boolean_T M_W73B_START;              /* synthesized block */
  boolean_T M_W54_START;               /* synthesized block */
  boolean_T M_W13B_73A_START;          /* synthesized block */
  boolean_T M_W13A_CTRL_TRAIL;         /* synthesized block */
  boolean_T M_W13A_START;              /* synthesized block */
  boolean_T M_W13A_RW_TE;              /* synthesized block */
  boolean_T M_W13A_CTRL_RST;           /* synthesized block */
  boolean_T M_W13A_R_REQ;              /* synthesized block */
  boolean_T M_W13A_R_BLOCK;            /* synthesized block */
  boolean_T M_W13A_R;                  /* synthesized block */
  boolean_T M_W13A_OOC_RD;             /* synthesized block */
  boolean_T M_W13A_NW_TE;              /* synthesized block */
  boolean_T M_W13A_N_REQ;              /* synthesized block */
  boolean_T M_W13A_N_BLOCK;            /* synthesized block */
  boolean_T M_W13A_N;                  /* synthesized block */
  boolean_T M_W13A_CTRL_CAL;           /* synthesized block */
  boolean_T M_W13A_BACK_TO_R;          /* synthesized block */
  boolean_T M_W13A_BACK_TO_N;          /* synthesized block */
  boolean_T M_W13A_CTRL_B;             /* synthesized block */
  boolean_T DO_FLE_OUT;                /* synthesized block */
  boolean_T DO_FE_OUT;                 /* synthesized block */
  boolean_T M_S_WS_21C;                /* synthesized block */
  boolean_T DO_FLE_IN;                 /* synthesized block */
  boolean_T DO_FE_IN;                  /* synthesized block */
  boolean_T M_TP_21C;                  /* synthesized block */
  boolean_T M_TP_74;                   /* synthesized block */
  boolean_T DO_INDT_TE_74;             /* synthesized block */
  boolean_T DO_INDT_RE_74;             /* synthesized block */
  boolean_T DO_INDT_TE_73B;            /* synthesized block */
  boolean_T DO_INDT_TE_73A;            /* synthesized block */
  boolean_T M_TP_72;                   /* synthesized block */
  boolean_T DO_INDT_TE_72;             /* synthesized block */
  boolean_T DO_INDT_RE_72;             /* synthesized block */
  boolean_T M_TP_54;                   /* synthesized block */
  boolean_T DO_INDT_TE_54;             /* synthesized block */
  boolean_T DO_INDT_RE_54;             /* synthesized block */
  boolean_T M_TP_34;                   /* synthesized block */
  boolean_T DO_INDT_TE_34;             /* synthesized block */
  boolean_T DO_INDT_RE_34;             /* synthesized block */
  boolean_T M_TP_32;                   /* synthesized block */
  boolean_T DO_INDT_TE_32;             /* synthesized block */
  boolean_T DO_INDT_RE_32;             /* synthesized block */
  boolean_T M_S_ES_21C;                /* synthesized block */
  boolean_T M_TP_14;                   /* synthesized block */
  boolean_T DO_INDT_TE_14;             /* synthesized block */
  boolean_T DO_INDT_RE_14;             /* synthesized block */
  boolean_T DO_INDT_TE_13;             /* synthesized block */
  boolean_T M_TP_12;                   /* synthesized block */
  boolean_T DO_INDT_TE_12;             /* synthesized block */
  boolean_T DO_INDT_RE_12;             /* synthesized block */
  boolean_T DO_INDJ_74_WGE;            /* synthesized block */
  boolean_T DO_INDJ_74_RGE;            /* synthesized block */
  boolean_T DO_INDJ_72_WGE;            /* synthesized block */
  boolean_T DO_INDJ_72_RGE;            /* synthesized block */
  boolean_T DO_INDJ_54_WGE;            /* synthesized block */
  boolean_T DO_INDJ_54_RGE;            /* synthesized block */
  boolean_T DO_INDJ_34_WGE;            /* synthesized block */
  boolean_T DO_INDJ_34_RGE;            /* synthesized block */
  boolean_T DO_INDJ_32_WGE;            /* synthesized block */
  boolean_T DO_INDJ_32_RGE;            /* synthesized block */
  boolean_T DO_INDJ_14B_WGE;           /* synthesized block */
  boolean_T DO_INDJ_14B_RGE;           /* synthesized block */
  boolean_T M_DO_L14B_GR;              /* synthesized block */
  boolean_T DO_INDJ_14A_WGE;           /* synthesized block */
  boolean_T DO_INDJ_14A_RGE;           /* synthesized block */
  boolean_T DO_INDJ_12_WGE;            /* synthesized block */
  boolean_T DO_INDJ_12_RGE;            /* synthesized block */
  boolean_T M_W73B_SWRLS;              /* synthesized block */
  boolean_T M_W73B_SWINIT;             /* synthesized block */
  boolean_T DO_INDSW_W73B_RWTE;        /* synthesized block */
  boolean_T M_W73B_RWP;                /* synthesized block */
  boolean_T M_W73B_RWC;                /* synthesized block */
  boolean_T DO_INDSW_W73B_RTE;         /* synthesized block */
  boolean_T DO_INDSW_W73B_RRE;         /* synthesized block */
  boolean_T M_W73B_OOC;                /* synthesized block */
  boolean_T M_W73B_NWZ;                /* synthesized block */
  boolean_T DO_INDSW_W73B_NWTE;        /* synthesized block */
  boolean_T DO_INDSW_W73B_NWRE;        /* synthesized block */
  boolean_T M_W73B_NWP;                /* synthesized block */
  boolean_T M_W73B_NWC;                /* synthesized block */
  boolean_T DO_INDSW_W73B_NTE;         /* synthesized block */
  boolean_T DO_INDSW_W73B_NRE;         /* synthesized block */
  boolean_T M_W73B_LS;                 /* synthesized block */
  boolean_T DO_INDSW_W73B_LE;          /* synthesized block */
  boolean_T M_W73B_L;                  /* synthesized block */
  boolean_T M_W73B_BLOCK;              /* synthesized block */
  boolean_T DO_INDSW_W73B_BE;          /* synthesized block */
  boolean_T DO_INDSW_W73B_RWE;         /* synthesized block */
  boolean_T DO_INDSW_W73B_NWE;         /* synthesized block */
  boolean_T DO_INDSW_W73A_RWTE;        /* synthesized block */
  boolean_T DO_INDSW_W73A_RWRE;        /* synthesized block */
  boolean_T DO_INDSW_W73A_RTE;         /* synthesized block */
  boolean_T DO_INDSW_W73A_RRE;         /* synthesized block */
  boolean_T DO_INDSW_W73A_NWTE;        /* synthesized block */
  boolean_T DO_INDSW_W73A_NTE;         /* synthesized block */
  boolean_T DO_INDSW_W73A_NRE;         /* synthesized block */
  boolean_T DO_INDSW_W73A_LE;          /* synthesized block */
  boolean_T DO_INDSW_W73A_BE;          /* synthesized block */
  boolean_T DO_INDSW_W73A_RWE;         /* synthesized block */
  boolean_T DO_INDT_RE_73A;            /* synthesized block */
  boolean_T DO_INDSW_W73A_NWE;         /* synthesized block */
  boolean_T M_W73B_RWZ;                /* synthesized block */
  boolean_T M_W54_SWRLS;               /* synthesized block */
  boolean_T M_W54_SWINIT;              /* synthesized block */
  boolean_T M_W54_RWZ;                 /* synthesized block */
  boolean_T DO_INDSW_W54_RWTE;         /* synthesized block */
  boolean_T DO_INDSW_W54_RWRE;         /* synthesized block */
  boolean_T M_W54_RWP;                 /* synthesized block */
  boolean_T M_W54_RWC;                 /* synthesized block */
  boolean_T DO_INDSW_W54_RTE;          /* synthesized block */
  boolean_T DO_INDSW_W54_RRE;          /* synthesized block */
  boolean_T M_W54_OOC;                 /* synthesized block */
  boolean_T M_W54_NWZ;                 /* synthesized block */
  boolean_T DO_INDSW_W54_NWTE;         /* synthesized block */
  boolean_T DO_INDSW_W54_NWRE;         /* synthesized block */
  boolean_T M_W54_NWP;                 /* synthesized block */
  boolean_T M_W54_NWC;                 /* synthesized block */
  boolean_T DO_INDSW_W54_NTE;          /* synthesized block */
  boolean_T DO_INDSW_W54_NRE;          /* synthesized block */
  boolean_T M_W54_LS;                  /* synthesized block */
  boolean_T DO_INDSW_W54_LE;           /* synthesized block */
  boolean_T M_W54_L;                   /* synthesized block */
  boolean_T M_W54_BLOCK;               /* synthesized block */
  boolean_T DO_INDSW_W54_BE;           /* synthesized block */
  boolean_T DO_INDSW_W54_RWE;          /* synthesized block */
  boolean_T DO_INDT_RE_73B;            /* synthesized block */
  boolean_T DO_INDSW_W73A_NWRE;        /* synthesized block */
  boolean_T DO_INDSW_W73B_RWRE;        /* synthesized block */
  boolean_T DO_INDSW_W54_NWE;          /* synthesized block */
  boolean_T M_S_WS_73B;                /* synthesized block */
  boolean_T M_S_ES_73B;                /* synthesized block */
  boolean_T M_S_WS_73A;                /* synthesized block */
  boolean_T M_S_ES_73A;                /* synthesized block */
  boolean_T M_W13B_73A_SWRLS;          /* synthesized block */
  boolean_T M_W13B_73A_SWINIT;         /* synthesized block */
  boolean_T M_W13B_73A_RWP;            /* synthesized block */
  boolean_T M_W13B_73A_RWC;            /* synthesized block */
  boolean_T M_W13B_73A_OOC;            /* synthesized block */
  boolean_T M_W13B_73A_NWP;            /* synthesized block */
  boolean_T M_W13B_73A_NWC;            /* synthesized block */
  boolean_T M_W13B_73A_LS;             /* synthesized block */
  boolean_T M_W13B_73A_L;              /* synthesized block */
  boolean_T M_W13B_73A_BLOCK;          /* synthesized block */
  boolean_T M_W13B_73A_RWZ;            /* synthesized block */
  boolean_T DO_INDSW_W13B_RWTE;        /* synthesized block */
  boolean_T DO_INDSW_W13B_RWRE;        /* synthesized block */
  boolean_T DO_INDSW_W13B_RTE;         /* synthesized block */
  boolean_T DO_INDSW_W13B_RRE;         /* synthesized block */
  boolean_T DO_INDSW_W13B_NWTE;        /* synthesized block */
  boolean_T DO_INDSW_W13B_NTE;         /* synthesized block */
  boolean_T DO_INDSW_W13B_NRE;         /* synthesized block */
  boolean_T DO_INDSW_W13B_LE;          /* synthesized block */
  boolean_T DO_INDSW_W13B_BE;          /* synthesized block */
  boolean_T DO_INDSW_W13B_RWE;         /* synthesized block */
  boolean_T DO_INDSW_W13B_NWE;         /* synthesized block */
  boolean_T M_W13B_73A_NWZ;            /* synthesized block */
  boolean_T M_W13A_SWRLS;              /* synthesized block */
  boolean_T M_W13A_SWINIT;             /* synthesized block */
  boolean_T M_W13A_RWZ;                /* synthesized block */
  boolean_T DO_INDSW_W13A_RWTE;        /* synthesized block */
  boolean_T M_W13A_RWP;                /* synthesized block */
  boolean_T M_W13A_RWC;                /* synthesized block */
  boolean_T DO_INDSW_W13A_RTE;         /* synthesized block */
  boolean_T DO_INDSW_W13A_RRE;         /* synthesized block */
  boolean_T M_W13A_OOC;                /* synthesized block */
  boolean_T M_W13A_NWZ;                /* synthesized block */
  boolean_T DO_INDSW_W13A_NWTE;        /* synthesized block */
  boolean_T DO_INDSW_W13A_NWRE;        /* synthesized block */
  boolean_T M_W13A_NWP;                /* synthesized block */
  boolean_T M_W13A_NWC;                /* synthesized block */
  boolean_T DO_INDSW_W13A_NTE;         /* synthesized block */
  boolean_T DO_INDSW_W13A_NRE;         /* synthesized block */
  boolean_T M_W13A_LS;                 /* synthesized block */
  boolean_T DO_INDSW_W13A_LE;          /* synthesized block */
  boolean_T M_W13A_L;                  /* synthesized block */
  boolean_T M_W13A_BLOCK;              /* synthesized block */
  boolean_T DO_INDSW_W13A_BE;          /* synthesized block */
  boolean_T DO_INDSW_W13A_RWRE;        /* synthesized block */
  boolean_T DO_INDSW_W13A_RWE;         /* synthesized block */
  boolean_T DO_INDT_RE_13;             /* synthesized block */
  boolean_T DO_INDSW_W13B_NWRE;        /* synthesized block */
  boolean_T DO_INDSW_W13A_NWE;         /* synthesized block */
  boolean_T M_S_WS_13;                 /* synthesized block */
  boolean_T M_S_ES_13;                 /* synthesized block */
  boolean_T M_RRLS_74;                 /* synthesized block */
  boolean_T DO_INDPB_X74;              /* synthesized block */
  boolean_T M_RRLS_72;                 /* synthesized block */
  boolean_T DO_INDPB_X72;              /* synthesized block */
  boolean_T M_RRLS_54;                 /* synthesized block */
  boolean_T DO_INDPB_X54;              /* synthesized block */
  boolean_T M_RRLS_34;                 /* synthesized block */
  boolean_T DO_INDPB_X34;              /* synthesized block */
  boolean_T DO_INDPB_X32;              /* synthesized block */
  boolean_T M_RRLS_32;                 /* synthesized block */
  boolean_T DO_INDPB_X12;              /* synthesized block */
  boolean_T M_RRLS_12;                 /* synthesized block */
  boolean_T M_RS_74_72;                /* synthesized block */
  boolean_T DO_INDPB_L74;              /* synthesized block */
  boolean_T M_RD_L74_GR;               /* synthesized block */
  boolean_T M_DO_L74_GR;               /* synthesized block */
  boolean_T M_CTRL_RST_74;             /* synthesized block */
  boolean_T M_RS_72_74;                /* synthesized block */
  boolean_T M_RS_72_54;                /* synthesized block */
  boolean_T M_RS_72_34;                /* synthesized block */
  boolean_T M_CTRL_RST_72;             /* synthesized block */
  boolean_T DO_INDPB_L72;              /* synthesized block */
  boolean_T M_RD_L72_GR;               /* synthesized block */
  boolean_T M_RS_54_72;                /* synthesized block */
  boolean_T DO_INDPB_L54;              /* synthesized block */
  boolean_T M_RD_L54_GR;               /* synthesized block */
  boolean_T M_DO_L54_GR;               /* synthesized block */
  boolean_T M_CTRL_RST_54;             /* synthesized block */
  boolean_T M_RS_34_72;                /* synthesized block */
  boolean_T DO_INDPB_L34;              /* synthesized block */
  boolean_T M_RD_L34_GR;               /* synthesized block */
  boolean_T M_DO_L34_GR;               /* synthesized block */
  boolean_T M_CTRL_RST_34;             /* synthesized block */
  boolean_T M_CTRL_RST_32;             /* synthesized block */
  boolean_T DO_INDPB_L32;              /* synthesized block */
  boolean_T M_RD_L32_GR;               /* synthesized block */
  boolean_T M_DO_L32_GR;               /* synthesized block */
  boolean_T M_RS_72_14;                /* synthesized block */
  boolean_T M_DO_L72_GR;               /* synthesized block */
  boolean_T M_RS_32_14;                /* synthesized block */
  boolean_T DO_INDPB_L14B;             /* synthesized block */
  boolean_T M_GV_FLASH_500;            /* synthesized block */
  boolean_T M_RRLS_14B;                /* synthesized block */
  boolean_T M_RS_14_72;                /* synthesized block */
  boolean_T M_RS_14_32;                /* synthesized block */
  boolean_T M_RS_14_12;                /* synthesized block */
  boolean_T M_CTRL_RST_14A;            /* synthesized block */
  boolean_T DO_INDPB_L14A;             /* synthesized block */
  boolean_T M_RD_L14A_GR;              /* synthesized block */
  boolean_T M_DO_L14A_GR;              /* synthesized block */
  boolean_T M_CTRL_RST_12;             /* synthesized block */
  boolean_T DO_INDPB_L12;              /* synthesized block */
  boolean_T M_RS_12_14;                /* synthesized block */
  boolean_T M_RD_L12_GR;               /* synthesized block */
  boolean_T M_DO_L12_GR;               /* synthesized block */
  boolean_T M_GV_FLASH_1000;           /* synthesized block */
  boolean_T M_TPBP_73B;                /* synthesized block */
  boolean_T M_TP_73B;                  /* synthesized block */
  boolean_T M_TPBP_73A;                /* synthesized block */
  boolean_T M_TP_73A;                  /* synthesized block */
  boolean_T M_TPBP_13;                 /* synthesized block */
  boolean_T M_TP_13;                   /* synthesized block */
  boolean_T M_VDR;                     /* synthesized block */
  boolean_T M_GV_RR_OK;                /* synthesized block */
  boolean_T M_CTRL_RR;                 /* synthesized block */
  boolean_T M_GV_RR;                   /* synthesized block */
  boolean_T DI_PBG_TPR_BANTU;          /* synthesized block */
  boolean_T M_AS_S_L74;                /* synthesized block */
  boolean_T M_AS_S_L72;                /* synthesized block */
  boolean_T M_AS_S_L54;                /* synthesized block */
  boolean_T M_AS_S_L34;                /* synthesized block */
  boolean_T M_AS_S_L32;                /* synthesized block */
  boolean_T M_AS_S_L14A;               /* synthesized block */
  boolean_T M_AS_S_L12;                /* synthesized block */
  boolean_T M_AS_DEP;                  /* synthesized block */
} DW_NONVITALDEPOT_f_T;

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_NONVITALDEPOT_T {
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

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_NONVITALDEPOT_T rtm;
} MdlrefDW_NONVITALDEPOT_T;

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

extern void NONVITALDEPOT_Init(void);
extern void NONVITALDEPOT_Start(void);
extern void NONVITALDEPOT_Update(void);
extern void NONVITALDEPOT(const boolean_T rtu_FROMMAIN[17], const boolean_T
  *rtu_VDRFROM, const boolean_T *rtu_VNVCHKFROM, const boolean_T rtu_TPFROM[10],
  const boolean_T rtu_SESFROM[3], const boolean_T rtu_SWSFROM[3], const
  boolean_T rtu_NWCFROM[4], const boolean_T rtu_NWPFROM[4], const boolean_T
  rtu_NWZFROM[4], const boolean_T rtu_NWTEFROM[4], const boolean_T rtu_RWCFROM[4],
  const boolean_T rtu_RWPFROM[4], const boolean_T rtu_RWZFROM[4], const
  boolean_T rtu_RWTEFROM[4], const boolean_T rtu_LFROM[4], const boolean_T
  rtu_LSFROM[4], const boolean_T rtu_SWRLSFROM[4], const boolean_T rtu_TPZFROM[4],
  const boolean_T rtu_GRDOFROM[8], const boolean_T rtu_SASFROM[8], const
  boolean_T rtu_RRLSFROM[8], const boolean_T *rtu_CBTCFROM, const boolean_T
  rtu_SYSTEMFROM[4], const boolean_T rtu_GLOBALPBDI[4], const boolean_T
  rtu_SWCTRLPBDI[5], const boolean_T *rtu_RCTRLPBDI, const boolean_T
  rtu_ROUTEPBDI[14], const boolean_T rtu_POINTPBDI[4], const boolean_T
  *rtu_CBTCPBDI, boolean_T rty_TOMAIN[6], boolean_T *rty_NVVCHKTO, boolean_T
  rty_SREQTO[12], boolean_T rty_NREQTO[4], boolean_T rty_RREQTO[4], boolean_T
  rty_OOCTO[4], boolean_T rty_RRLSPBCTRLTO[8], boolean_T rty_SWRLSPBCTRLTO[4],
  boolean_T rty_SWINITTO[4], boolean_T rty_RSTTO[7], boolean_T rty_RSTO[12],
  boolean_T *rty_CBTCTO, boolean_T rty_GLOBALINDDO[7], boolean_T
  rty_SIGNALINDDO[16], boolean_T rty_POINTINDDO[60], boolean_T rty_TRACKINDDO[20],
  boolean_T rty_BUTTONINDDO[15], boolean_T rty_CBTCINDDO[11]);

/* Model reference registration function */
extern void NONVITALDEPOT_initialize(const char_T **rt_errorStatus,
  RTWSolverInfo *rt_solverInfo, const rtTimingBridge *timingBridge, int_T
  mdlref_TID0, int_T mdlref_TID1);

#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

extern void DNV_TON_Init(DW_DNV_TON_T *localDW);
extern void DNV_TON_Update(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M,
  boolean_T rtu_IN, DW_DNV_TON_T *localDW);
extern void DNV_TON(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M, boolean_T
                    rtu_IN, DW_DNV_TON_T *localDW, real_T rtp_TIME);
extern void DNV_TOF_Init(DW_DNV_TOF_T *localDW);
extern void DNV_TOF_Update(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M,
  boolean_T rtu_IN, DW_DNV_TOF_T *localDW);
extern void DNV_TOF(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M, boolean_T
                    rtu_IN, DW_DNV_TOF_T *localDW, real_T rtp_TIME);
extern void D_IND_POINT(boolean_T rtu_L, boolean_T rtu_SWRLS, boolean_T
  rtu_SWINIT, boolean_T rtu_BLOCK, boolean_T rtu_LS, boolean_T rtu_FLASH1S,
  boolean_T rtu_FLASH05S, boolean_T rtu_NWP, boolean_T rtu_RWP, boolean_T
  rtu_NWZ, boolean_T rtu_RWZ, boolean_T rtu_NWC, boolean_T rtu_RWC, boolean_T
  rtu_OOC, boolean_T rtu_TP, boolean_T rtu_ESWS, DW_D_IND_POINT_T *localDW);
extern void D_SIG_IND(boolean_T rtu_VDR, boolean_T rtu_DRGR, boolean_T rtu_FLASH,
                      DW_D_SIG_IND_T *localDW);
extern void D_IND_TRACK(boolean_T rtu_TP, boolean_T rtu_ESWS, DW_D_IND_TRACK_T
  *localDW);
extern void NONVITALDEPOT_DNV_TON_Init(DW_DNV_TON_n_T *localDW);
extern void NONVITALDEPOT_DNV_TON_Update(RT_MODEL_NONVITALDEPOT_T * const
  NONVITALDEPOT_M, boolean_T rtu_IN, DW_DNV_TON_n_T *localDW);
extern void NONVITALDEPOT_DNV_TON(RT_MODEL_NONVITALDEPOT_T * const
  NONVITALDEPOT_M, boolean_T rtu_IN, DW_DNV_TON_n_T *localDW, real_T rtp_TIME);
extern void D_IL_POINT_Init(DW_D_IL_POINT_T *localDW);
extern void D_IL_POINT_Update(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M,
  DW_D_IL_POINT_T *localDW);
extern void D_IL_POINT(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M,
  boolean_T rtu_CALCTRL, boolean_T rtu_TRAILCTRL, boolean_T rtu_RSTCTRL,
  boolean_T rtu_BCTRL, boolean_T rtu_NWZ, boolean_T rtu_RWZ, boolean_T rtu_NWP,
  boolean_T rtu_RWP, boolean_T rtu_NWC, boolean_T rtu_RWC, boolean_T rtu_NWTE,
  boolean_T rtu_RWTE, boolean_T rtu_L, boolean_T rtu_OOC, boolean_T rtu_OOCRD,
  boolean_T rtu_RSN, boolean_T rtu_RSR, boolean_T rtu_START, DW_D_IL_POINT_T
  *localDW);
extern void D_WAR(boolean_T rtu_WAR, boolean_T rtu_THB, DW_D_WAR_T *localDW,
                  boolean_T *rtd_M_GV_FLASH_500);
extern void D_SW_PB(boolean_T rtu_WPB, boolean_T rtu_WTP, boolean_T rtu_TBW,
                    boolean_T rtu_TKGW, boolean_T rtu_TBKW, boolean_T rtu_TWT,
                    boolean_T rtu_TKW, DW_D_SW_PB_T *localDW, boolean_T
                    *rtd_M_NVCOMM_OK, boolean_T *rtd_M_VDR);
extern void D_R_PB(boolean_T rtu_COMMON, boolean_T rtu_PB1, boolean_T rtu_PB2,
                   DW_D_R_PB_T *localDW, boolean_T *rtd_M_NVCOMM_OK, boolean_T
                   *rtd_M_VDR);
extern void D_R_AUTO(boolean_T rtu_AUTO, boolean_T rtu_MANUAL, boolean_T
                     rtu_SIGNAL, DW_D_R_AUTO_T *localDW, boolean_T
                     *rtd_M_NVCOMM_OK, boolean_T *rtd_M_VDR);
extern void D_RRLS_X(boolean_T rtu_TPR, boolean_T rtu_PB, boolean_T rtu_ESWS,
                     boolean_T rtu_RS, DW_D_RRLS_X_T *localDW, boolean_T
                     *rtd_M_NVCOMM_OK, boolean_T *rtd_M_VDR);
extern void D_POINT_FAIL_Init(DW_D_POINT_FAIL_T *localDW);
extern void D_POINT_FAIL_Update(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M,
  DW_D_POINT_FAIL_T *localDW);
extern void D_POINT_FAIL(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M,
  boolean_T rtu_AACTRL, boolean_T rtu_TRAILCTRL, boolean_T rtu_RSTCTRL,
  boolean_T rtu_LS, boolean_T rtu_BACKTON, boolean_T rtu_BACKTOR, boolean_T
  rtu_NWP, boolean_T rtu_RWP, boolean_T rtu_NWC, boolean_T rtu_RWC, boolean_T
  rtu_NWTE, boolean_T rtu_RWTE, boolean_T rtu_BLOCK, boolean_T rtu_NBLOCK,
  boolean_T rtu_RBLOCK, DW_D_POINT_FAIL_T *localDW);
extern void D_REQ(boolean_T rtu_RCTRL, boolean_T rtu_RSTCTRL, boolean_T rtu_RB,
                  boolean_T rtu_TP, boolean_T rtu_TPBP, boolean_T rtu_JB,
                  DW_D_REQ_T *localDW);
extern void D_SIG_B_Init(DW_D_SIG_B_T *localDW);
extern void D_SIG_B_Update(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M,
  DW_D_SIG_B_T *localDW);
extern void D_SIG_B(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M, boolean_T
                    rtu_VDR, boolean_T rtu_RS, boolean_T rtu_DO, boolean_T
                    rtu_RD, boolean_T rtu_TP, DW_D_SIG_B_T *localDW);

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

extern MdlrefDW_NONVITALDEPOT_T NONVITALDEPOT_MdlrefDW;

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

#ifndef NONVITALDEPOT_MDLREF_HIDE_CHILD_

/* Block states (auto storage) */
extern DW_NONVITALDEPOT_f_T NONVITALDEPOT_DW;

#endif                                 /*NONVITALDEPOT_MDLREF_HIDE_CHILD_*/

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
 * '<Root>' : 'NONVITALDEPOT'
 * '<S1>'   : 'NONVITALDEPOT/LOGIC'
 * '<S2>'   : 'NONVITALDEPOT/MAPPING'
 * '<S3>'   : 'NONVITALDEPOT/SYSTEM DATA'
 * '<S4>'   : 'NONVITALDEPOT/LOGIC/GLOBAL VARIABLE'
 * '<S5>'   : 'NONVITALDEPOT/LOGIC/INDIKASI PB'
 * '<S6>'   : 'NONVITALDEPOT/LOGIC/INDIKASI POINT'
 * '<S7>'   : 'NONVITALDEPOT/LOGIC/INDIKASI SIGNAL'
 * '<S8>'   : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK'
 * '<S9>'   : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT'
 * '<S10>'  : 'NONVITALDEPOT/LOGIC/INTERLOCKING ROUTE'
 * '<S11>'  : 'NONVITALDEPOT/LOGIC/LAMPTEST & INDIKASI WARNING'
 * '<S12>'  : 'NONVITALDEPOT/LOGIC/PB CONTROL'
 * '<S13>'  : 'NONVITALDEPOT/LOGIC/POINT FAIL'
 * '<S14>'  : 'NONVITALDEPOT/LOGIC/POINT FAIL1'
 * '<S15>'  : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST'
 * '<S16>'  : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK'
 * '<S17>'  : 'NONVITALDEPOT/LOGIC/GLOBAL VARIABLE/AS'
 * '<S18>'  : 'NONVITALDEPOT/LOGIC/GLOBAL VARIABLE/RR'
 * '<S19>'  : 'NONVITALDEPOT/LOGIC/GLOBAL VARIABLE/TPBP'
 * '<S20>'  : 'NONVITALDEPOT/LOGIC/GLOBAL VARIABLE/TPBP/DNV_TON'
 * '<S21>'  : 'NONVITALDEPOT/LOGIC/GLOBAL VARIABLE/TPBP/DNV_TON1'
 * '<S22>'  : 'NONVITALDEPOT/LOGIC/GLOBAL VARIABLE/TPBP/DNV_TON2'
 * '<S23>'  : 'NONVITALDEPOT/LOGIC/GLOBAL VARIABLE/TPBP/DNV_TON/TON'
 * '<S24>'  : 'NONVITALDEPOT/LOGIC/GLOBAL VARIABLE/TPBP/DNV_TON/TON/Detect Decrease'
 * '<S25>'  : 'NONVITALDEPOT/LOGIC/GLOBAL VARIABLE/TPBP/DNV_TON/TON/Detect Increase'
 * '<S26>'  : 'NONVITALDEPOT/LOGIC/GLOBAL VARIABLE/TPBP/DNV_TON/TON/S//H'
 * '<S27>'  : 'NONVITALDEPOT/LOGIC/GLOBAL VARIABLE/TPBP/DNV_TON1/TON'
 * '<S28>'  : 'NONVITALDEPOT/LOGIC/GLOBAL VARIABLE/TPBP/DNV_TON1/TON/Detect Decrease'
 * '<S29>'  : 'NONVITALDEPOT/LOGIC/GLOBAL VARIABLE/TPBP/DNV_TON1/TON/Detect Increase'
 * '<S30>'  : 'NONVITALDEPOT/LOGIC/GLOBAL VARIABLE/TPBP/DNV_TON1/TON/S//H'
 * '<S31>'  : 'NONVITALDEPOT/LOGIC/GLOBAL VARIABLE/TPBP/DNV_TON2/TON'
 * '<S32>'  : 'NONVITALDEPOT/LOGIC/GLOBAL VARIABLE/TPBP/DNV_TON2/TON/Detect Decrease'
 * '<S33>'  : 'NONVITALDEPOT/LOGIC/GLOBAL VARIABLE/TPBP/DNV_TON2/TON/Detect Increase'
 * '<S34>'  : 'NONVITALDEPOT/LOGIC/GLOBAL VARIABLE/TPBP/DNV_TON2/TON/S//H'
 * '<S35>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L12'
 * '<S36>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L14A'
 * '<S37>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L14B'
 * '<S38>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L32'
 * '<S39>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L34'
 * '<S40>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L54'
 * '<S41>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L72'
 * '<S42>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L74'
 * '<S43>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/X12'
 * '<S44>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/X32'
 * '<S45>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/X34'
 * '<S46>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/X54'
 * '<S47>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/X72'
 * '<S48>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/X74'
 * '<S49>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L12/DNV_TOF'
 * '<S50>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L12/DNV_TOF/TOF'
 * '<S51>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L12/DNV_TOF/TOF/Detect Decrease'
 * '<S52>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L12/DNV_TOF/TOF/Detect Increase'
 * '<S53>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L12/DNV_TOF/TOF/S//H'
 * '<S54>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L14A/DNV_TOF'
 * '<S55>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L14A/DNV_TOF/TOF'
 * '<S56>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L14A/DNV_TOF/TOF/Detect Decrease'
 * '<S57>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L14A/DNV_TOF/TOF/Detect Increase'
 * '<S58>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L14A/DNV_TOF/TOF/S//H'
 * '<S59>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L32/DNV_TOF'
 * '<S60>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L32/DNV_TOF/TOF'
 * '<S61>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L32/DNV_TOF/TOF/Detect Decrease'
 * '<S62>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L32/DNV_TOF/TOF/Detect Increase'
 * '<S63>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L32/DNV_TOF/TOF/S//H'
 * '<S64>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L34/DNV_TOF'
 * '<S65>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L34/DNV_TOF/TOF'
 * '<S66>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L34/DNV_TOF/TOF/Detect Decrease'
 * '<S67>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L34/DNV_TOF/TOF/Detect Increase'
 * '<S68>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L34/DNV_TOF/TOF/S//H'
 * '<S69>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L54/DNV_TOF'
 * '<S70>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L54/DNV_TOF/TOF'
 * '<S71>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L54/DNV_TOF/TOF/Detect Decrease'
 * '<S72>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L54/DNV_TOF/TOF/Detect Increase'
 * '<S73>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L54/DNV_TOF/TOF/S//H'
 * '<S74>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L72/DNV_TOF'
 * '<S75>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L72/DNV_TOF/TOF'
 * '<S76>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L72/DNV_TOF/TOF/Detect Decrease'
 * '<S77>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L72/DNV_TOF/TOF/Detect Increase'
 * '<S78>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L72/DNV_TOF/TOF/S//H'
 * '<S79>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L74/DNV_TOF'
 * '<S80>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L74/DNV_TOF/TOF'
 * '<S81>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L74/DNV_TOF/TOF/Detect Decrease'
 * '<S82>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L74/DNV_TOF/TOF/Detect Increase'
 * '<S83>'  : 'NONVITALDEPOT/LOGIC/INDIKASI PB/L74/DNV_TOF/TOF/S//H'
 * '<S84>'  : 'NONVITALDEPOT/LOGIC/INDIKASI POINT/W13A'
 * '<S85>'  : 'NONVITALDEPOT/LOGIC/INDIKASI POINT/W13B'
 * '<S86>'  : 'NONVITALDEPOT/LOGIC/INDIKASI POINT/W54'
 * '<S87>'  : 'NONVITALDEPOT/LOGIC/INDIKASI POINT/W73A'
 * '<S88>'  : 'NONVITALDEPOT/LOGIC/INDIKASI POINT/W73B'
 * '<S89>'  : 'NONVITALDEPOT/LOGIC/INDIKASI POINT/W13A/D_IND_POINT'
 * '<S90>'  : 'NONVITALDEPOT/LOGIC/INDIKASI POINT/W13B/INTERLOCKING POINT'
 * '<S91>'  : 'NONVITALDEPOT/LOGIC/INDIKASI POINT/W54/INTERLOCKING POINT'
 * '<S92>'  : 'NONVITALDEPOT/LOGIC/INDIKASI POINT/W73A/D_IND_POINT'
 * '<S93>'  : 'NONVITALDEPOT/LOGIC/INDIKASI POINT/W73B/INTERLOCKING LOCK'
 * '<S94>'  : 'NONVITALDEPOT/LOGIC/INDIKASI SIGNAL/L12'
 * '<S95>'  : 'NONVITALDEPOT/LOGIC/INDIKASI SIGNAL/L14A'
 * '<S96>'  : 'NONVITALDEPOT/LOGIC/INDIKASI SIGNAL/L14B'
 * '<S97>'  : 'NONVITALDEPOT/LOGIC/INDIKASI SIGNAL/L32'
 * '<S98>'  : 'NONVITALDEPOT/LOGIC/INDIKASI SIGNAL/L34'
 * '<S99>'  : 'NONVITALDEPOT/LOGIC/INDIKASI SIGNAL/L54'
 * '<S100>' : 'NONVITALDEPOT/LOGIC/INDIKASI SIGNAL/L72'
 * '<S101>' : 'NONVITALDEPOT/LOGIC/INDIKASI SIGNAL/L74'
 * '<S102>' : 'NONVITALDEPOT/LOGIC/INDIKASI SIGNAL/L12/INDIKASI SIGNAL'
 * '<S103>' : 'NONVITALDEPOT/LOGIC/INDIKASI SIGNAL/L14A/INDIKASI SIGNAL'
 * '<S104>' : 'NONVITALDEPOT/LOGIC/INDIKASI SIGNAL/L14B/INDIKASI SIGNAL'
 * '<S105>' : 'NONVITALDEPOT/LOGIC/INDIKASI SIGNAL/L32/INDIKASI SIGNAL'
 * '<S106>' : 'NONVITALDEPOT/LOGIC/INDIKASI SIGNAL/L34/INDIKASI SIGNAL'
 * '<S107>' : 'NONVITALDEPOT/LOGIC/INDIKASI SIGNAL/L54/INDIKASI SIGNAL'
 * '<S108>' : 'NONVITALDEPOT/LOGIC/INDIKASI SIGNAL/L72/INDIKASI SIGNAL'
 * '<S109>' : 'NONVITALDEPOT/LOGIC/INDIKASI SIGNAL/L74/INDIKASI SIGNAL'
 * '<S110>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/12'
 * '<S111>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/13'
 * '<S112>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/14'
 * '<S113>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/32'
 * '<S114>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/34'
 * '<S115>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/54'
 * '<S116>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/72'
 * '<S117>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/73A'
 * '<S118>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/73B'
 * '<S119>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/74'
 * '<S120>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/IN INDICATOR'
 * '<S121>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/OUT INDICATOR'
 * '<S122>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/12/INDIKASI TRACK'
 * '<S123>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/13/INDIKASI TRACK'
 * '<S124>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/14/INDIKASI TRACK'
 * '<S125>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/32/INDIKASI TRACK'
 * '<S126>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/34/INDIKASI TRACK'
 * '<S127>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/54/INDIKASI TRACK'
 * '<S128>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/72/INDIKASI TRACK'
 * '<S129>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/73A/INDIKASI TRACK'
 * '<S130>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/73B/INDIKASI TRACK'
 * '<S131>' : 'NONVITALDEPOT/LOGIC/INDIKASI TRACK/74/INDIKASI TRACK'
 * '<S132>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13A'
 * '<S133>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13B//73A'
 * '<S134>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W54'
 * '<S135>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W73B'
 * '<S136>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13A/INTERLOCKING POINT'
 * '<S137>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13A/INTERLOCKING POINT/DNV_TOF'
 * '<S138>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13A/INTERLOCKING POINT/DNV_TON'
 * '<S139>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13A/INTERLOCKING POINT/Detect Increase'
 * '<S140>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13A/INTERLOCKING POINT/DNV_TOF/TOF'
 * '<S141>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13A/INTERLOCKING POINT/DNV_TOF/TOF/Detect Decrease'
 * '<S142>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13A/INTERLOCKING POINT/DNV_TOF/TOF/Detect Increase'
 * '<S143>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13A/INTERLOCKING POINT/DNV_TOF/TOF/S//H'
 * '<S144>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13A/INTERLOCKING POINT/DNV_TON/TON'
 * '<S145>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13A/INTERLOCKING POINT/DNV_TON/TON/Detect Decrease'
 * '<S146>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13A/INTERLOCKING POINT/DNV_TON/TON/Detect Increase'
 * '<S147>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13A/INTERLOCKING POINT/DNV_TON/TON/S//H'
 * '<S148>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13B//73A/INTERLOCKING POINT'
 * '<S149>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13B//73A/INTERLOCKING POINT/DNV_TOF'
 * '<S150>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13B//73A/INTERLOCKING POINT/DNV_TON'
 * '<S151>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13B//73A/INTERLOCKING POINT/Detect Increase'
 * '<S152>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13B//73A/INTERLOCKING POINT/DNV_TOF/TOF'
 * '<S153>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13B//73A/INTERLOCKING POINT/DNV_TOF/TOF/Detect Decrease'
 * '<S154>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13B//73A/INTERLOCKING POINT/DNV_TOF/TOF/Detect Increase'
 * '<S155>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13B//73A/INTERLOCKING POINT/DNV_TOF/TOF/S//H'
 * '<S156>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13B//73A/INTERLOCKING POINT/DNV_TON/TON'
 * '<S157>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13B//73A/INTERLOCKING POINT/DNV_TON/TON/Detect Decrease'
 * '<S158>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13B//73A/INTERLOCKING POINT/DNV_TON/TON/Detect Increase'
 * '<S159>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W13B//73A/INTERLOCKING POINT/DNV_TON/TON/S//H'
 * '<S160>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W54/INTERLOCKING POINT'
 * '<S161>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W54/INTERLOCKING POINT/DNV_TOF'
 * '<S162>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W54/INTERLOCKING POINT/DNV_TON'
 * '<S163>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W54/INTERLOCKING POINT/Detect Increase'
 * '<S164>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W54/INTERLOCKING POINT/DNV_TOF/TOF'
 * '<S165>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W54/INTERLOCKING POINT/DNV_TOF/TOF/Detect Decrease'
 * '<S166>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W54/INTERLOCKING POINT/DNV_TOF/TOF/Detect Increase'
 * '<S167>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W54/INTERLOCKING POINT/DNV_TOF/TOF/S//H'
 * '<S168>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W54/INTERLOCKING POINT/DNV_TON/TON'
 * '<S169>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W54/INTERLOCKING POINT/DNV_TON/TON/Detect Decrease'
 * '<S170>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W54/INTERLOCKING POINT/DNV_TON/TON/Detect Increase'
 * '<S171>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W54/INTERLOCKING POINT/DNV_TON/TON/S//H'
 * '<S172>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W73B/INTERLOCKING POINT'
 * '<S173>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W73B/INTERLOCKING POINT/DNV_TOF'
 * '<S174>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W73B/INTERLOCKING POINT/DNV_TON'
 * '<S175>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W73B/INTERLOCKING POINT/Detect Increase'
 * '<S176>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W73B/INTERLOCKING POINT/DNV_TOF/TOF'
 * '<S177>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W73B/INTERLOCKING POINT/DNV_TOF/TOF/Detect Decrease'
 * '<S178>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W73B/INTERLOCKING POINT/DNV_TOF/TOF/Detect Increase'
 * '<S179>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W73B/INTERLOCKING POINT/DNV_TOF/TOF/S//H'
 * '<S180>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W73B/INTERLOCKING POINT/DNV_TON/TON'
 * '<S181>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W73B/INTERLOCKING POINT/DNV_TON/TON/Detect Decrease'
 * '<S182>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W73B/INTERLOCKING POINT/DNV_TON/TON/Detect Increase'
 * '<S183>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING POINT/W73B/INTERLOCKING POINT/DNV_TON/TON/S//H'
 * '<S184>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING ROUTE/L12-L14B'
 * '<S185>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING ROUTE/L14A-X12'
 * '<S186>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING ROUTE/L14A-X32'
 * '<S187>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING ROUTE/L14A-X72'
 * '<S188>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING ROUTE/L32-L14B'
 * '<S189>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING ROUTE/L34-X72'
 * '<S190>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING ROUTE/L54-X72'
 * '<S191>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING ROUTE/L72-L14B'
 * '<S192>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING ROUTE/L72-X34'
 * '<S193>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING ROUTE/L72-X54'
 * '<S194>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING ROUTE/L72-X74'
 * '<S195>' : 'NONVITALDEPOT/LOGIC/INTERLOCKING ROUTE/L74-X72'
 * '<S196>' : 'NONVITALDEPOT/LOGIC/LAMPTEST & INDIKASI WARNING/BUZZER'
 * '<S197>' : 'NONVITALDEPOT/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL'
 * '<S198>' : 'NONVITALDEPOT/LOGIC/LAMPTEST & INDIKASI WARNING/PSD1'
 * '<S199>' : 'NONVITALDEPOT/LOGIC/LAMPTEST & INDIKASI WARNING/TZB'
 * '<S200>' : 'NONVITALDEPOT/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL/COMM-1-FAIL'
 * '<S201>' : 'NONVITALDEPOT/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL/COMM-2-FAIL'
 * '<S202>' : 'NONVITALDEPOT/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL/COMM-2-FAIL1'
 * '<S203>' : 'NONVITALDEPOT/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL/SYSTEM-1-FAIL'
 * '<S204>' : 'NONVITALDEPOT/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL/SYSTEM-2-FAIL'
 * '<S205>' : 'NONVITALDEPOT/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL/COMM-1-FAIL/WARNING COMM 1 FAIL'
 * '<S206>' : 'NONVITALDEPOT/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL/COMM-2-FAIL/WARNING COMM 2 FAIL'
 * '<S207>' : 'NONVITALDEPOT/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL/SYSTEM-1-FAIL/WARNING SYSTEM 1 FAIL'
 * '<S208>' : 'NONVITALDEPOT/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL/SYSTEM-2-FAIL/WARNING SYSTEM 2 FAIL'
 * '<S209>' : 'NONVITALDEPOT/LOGIC/LAMPTEST & INDIKASI WARNING/PSD1/TPR-BANTU'
 * '<S210>' : 'NONVITALDEPOT/LOGIC/LAMPTEST & INDIKASI WARNING/TZB/TZB ACK'
 * '<S211>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/GLOBAL'
 * '<S212>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/POINT'
 * '<S213>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/ROUTE'
 * '<S214>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/ROUTE MODE'
 * '<S215>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/RRLS'
 * '<S216>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/TPR'
 * '<S217>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/POINT/W13A'
 * '<S218>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/POINT/W13B//73A'
 * '<S219>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/POINT/W54'
 * '<S220>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/POINT/W73B'
 * '<S221>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/POINT/W13A/POINT PB CONTROL'
 * '<S222>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/POINT/W13A/POINT PB CONTROL/Detect Increase'
 * '<S223>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/POINT/W13B//73A/POINT PB CONTROL'
 * '<S224>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/POINT/W13B//73A/POINT PB CONTROL/Detect Increase'
 * '<S225>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/POINT/W54/POINT PB CONTROL'
 * '<S226>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/POINT/W54/POINT PB CONTROL/Detect Increase'
 * '<S227>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/POINT/W73B/POINT PB CONTROL'
 * '<S228>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/POINT/W73B/POINT PB CONTROL/Detect Increase'
 * '<S229>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/ROUTE/FROM 14'
 * '<S230>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/ROUTE/FROM 72'
 * '<S231>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/ROUTE/TO 14'
 * '<S232>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/ROUTE/TO 72'
 * '<S233>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/ROUTE/FROM 14/ROUTE PB CONTROL'
 * '<S234>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/ROUTE/FROM 72/ROUTE PB CONTROL 1'
 * '<S235>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/ROUTE/FROM 72/ROUTE PB CONTROL 2'
 * '<S236>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/ROUTE/TO 14/ROUTE PB CONTROL'
 * '<S237>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/ROUTE/TO 72/ROUTE PB CONTROL 1'
 * '<S238>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/ROUTE/TO 72/ROUTE PB CONTROL 2'
 * '<S239>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/ROUTE MODE/RUTE OTOMATIS'
 * '<S240>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/RRLS/L14B'
 * '<S241>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/RRLS/X12'
 * '<S242>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/RRLS/X32'
 * '<S243>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/RRLS/X34'
 * '<S244>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/RRLS/X54'
 * '<S245>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/RRLS/X72'
 * '<S246>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/RRLS/X74'
 * '<S247>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/RRLS/L14B/EMERGENCY ROUTE RELEASE'
 * '<S248>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/RRLS/X12/EMERGENCY ROUTE RELEASE'
 * '<S249>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/RRLS/X32/EMERGENCY ROUTE RELEASE'
 * '<S250>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/RRLS/X34/EMERGENCY ROUTE RELEASE'
 * '<S251>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/RRLS/X54/EMERGENCY ROUTE RELEASE'
 * '<S252>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/RRLS/X72/EMERGENCY ROUTE RELEASE'
 * '<S253>' : 'NONVITALDEPOT/LOGIC/PB CONTROL/RRLS/X74/EMERGENCY ROUTE RELEASE'
 * '<S254>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W13A'
 * '<S255>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W13B//73A'
 * '<S256>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W54'
 * '<S257>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W73B'
 * '<S258>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W13A/POINT FAIL'
 * '<S259>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W13A/POINT FAIL/DNV_TON'
 * '<S260>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W13A/POINT FAIL/DNV_TON/TON'
 * '<S261>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W13A/POINT FAIL/DNV_TON/TON/Detect Decrease'
 * '<S262>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W13A/POINT FAIL/DNV_TON/TON/Detect Increase'
 * '<S263>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W13A/POINT FAIL/DNV_TON/TON/S//H'
 * '<S264>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W13B//73A/POINT FAIL'
 * '<S265>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W13B//73A/POINT FAIL/DNV_TON'
 * '<S266>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W13B//73A/POINT FAIL/DNV_TON/TON'
 * '<S267>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W13B//73A/POINT FAIL/DNV_TON/TON/Detect Decrease'
 * '<S268>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W13B//73A/POINT FAIL/DNV_TON/TON/Detect Increase'
 * '<S269>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W13B//73A/POINT FAIL/DNV_TON/TON/S//H'
 * '<S270>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W54/POINT FAIL'
 * '<S271>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W54/POINT FAIL/DNV_TON'
 * '<S272>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W54/POINT FAIL/DNV_TON/TON'
 * '<S273>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W54/POINT FAIL/DNV_TON/TON/Detect Decrease'
 * '<S274>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W54/POINT FAIL/DNV_TON/TON/Detect Increase'
 * '<S275>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W54/POINT FAIL/DNV_TON/TON/S//H'
 * '<S276>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W73B/POINT FAIL'
 * '<S277>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W73B/POINT FAIL/DNV_TON'
 * '<S278>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W73B/POINT FAIL/DNV_TON/TON'
 * '<S279>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W73B/POINT FAIL/DNV_TON/TON/Detect Decrease'
 * '<S280>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W73B/POINT FAIL/DNV_TON/TON/Detect Increase'
 * '<S281>' : 'NONVITALDEPOT/LOGIC/POINT FAIL/W73B/POINT FAIL/DNV_TON/TON/S//H'
 * '<S282>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W11A//21A'
 * '<S283>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W11B//21B'
 * '<S284>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W21C'
 * '<S285>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W11A//21A/DNV_TOF'
 * '<S286>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W11A//21A/DNV_TOF/TOF'
 * '<S287>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W11A//21A/DNV_TOF/TOF/Detect Decrease'
 * '<S288>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W11A//21A/DNV_TOF/TOF/Detect Increase'
 * '<S289>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W11A//21A/DNV_TOF/TOF/S//H'
 * '<S290>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W11B//21B/DNV_TOF'
 * '<S291>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W11B//21B/Detect Increase'
 * '<S292>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W11B//21B/DNV_TOF/TOF'
 * '<S293>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W11B//21B/DNV_TOF/TOF/Detect Decrease'
 * '<S294>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W11B//21B/DNV_TOF/TOF/Detect Increase'
 * '<S295>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W11B//21B/DNV_TOF/TOF/S//H'
 * '<S296>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W21C/DNV_TOF'
 * '<S297>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W21C/Detect Increase'
 * '<S298>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W21C/DNV_TOF/TOF'
 * '<S299>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W21C/DNV_TOF/TOF/Detect Decrease'
 * '<S300>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W21C/DNV_TOF/TOF/Detect Increase'
 * '<S301>' : 'NONVITALDEPOT/LOGIC/POINT FAIL1/W21C/DNV_TOF/TOF/S//H'
 * '<S302>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L12-L14B'
 * '<S303>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L14A-X12'
 * '<S304>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L14A-X32'
 * '<S305>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L14A-X72'
 * '<S306>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L32-L14B'
 * '<S307>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L34-X72'
 * '<S308>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L54-X72'
 * '<S309>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L72-L14B'
 * '<S310>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L72-X34'
 * '<S311>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L72-X54'
 * '<S312>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L72-X74'
 * '<S313>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L74-X72'
 * '<S314>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L12-L14B/ROUTE REQUEST'
 * '<S315>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L14A-X12/ROUTE REQUEST'
 * '<S316>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L14A-X32/ROUTE REQUEST'
 * '<S317>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L14A-X72/ROUTE REQUEST'
 * '<S318>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L32-L14B/ROUTE REQUEST'
 * '<S319>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L34-X72/ROUTE REQUEST'
 * '<S320>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L54-X72/ROUTE REQUEST'
 * '<S321>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L72-L14B/ROUTE REQUEST'
 * '<S322>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L72-X34/ROUTE REQUEST'
 * '<S323>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L72-X54/ROUTE REQUEST'
 * '<S324>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L72-X74/ROUTE REQUEST'
 * '<S325>' : 'NONVITALDEPOT/LOGIC/ROUTE REQUEST/L74-X72/ROUTE REQUEST'
 * '<S326>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L12'
 * '<S327>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L14A'
 * '<S328>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L32'
 * '<S329>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L34'
 * '<S330>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L54'
 * '<S331>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L72'
 * '<S332>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L74'
 * '<S333>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L12/SIGNAL BLOCK'
 * '<S334>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L12/SIGNAL BLOCK/DNV_TOF1'
 * '<S335>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L12/SIGNAL BLOCK/DNV_TOF1/TOF'
 * '<S336>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L12/SIGNAL BLOCK/DNV_TOF1/TOF/Detect Decrease'
 * '<S337>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L12/SIGNAL BLOCK/DNV_TOF1/TOF/Detect Increase'
 * '<S338>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L12/SIGNAL BLOCK/DNV_TOF1/TOF/S//H'
 * '<S339>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L14A/SIGNAL BLOCK'
 * '<S340>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L14A/SIGNAL BLOCK/DNV_TOF1'
 * '<S341>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L14A/SIGNAL BLOCK/DNV_TOF1/TOF'
 * '<S342>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L14A/SIGNAL BLOCK/DNV_TOF1/TOF/Detect Decrease'
 * '<S343>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L14A/SIGNAL BLOCK/DNV_TOF1/TOF/Detect Increase'
 * '<S344>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L14A/SIGNAL BLOCK/DNV_TOF1/TOF/S//H'
 * '<S345>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L32/SIGNAL BLOCK'
 * '<S346>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L32/SIGNAL BLOCK/DNV_TOF1'
 * '<S347>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L32/SIGNAL BLOCK/DNV_TOF1/TOF'
 * '<S348>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L32/SIGNAL BLOCK/DNV_TOF1/TOF/Detect Decrease'
 * '<S349>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L32/SIGNAL BLOCK/DNV_TOF1/TOF/Detect Increase'
 * '<S350>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L32/SIGNAL BLOCK/DNV_TOF1/TOF/S//H'
 * '<S351>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L34/SIGNAL BLOCK'
 * '<S352>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L34/SIGNAL BLOCK/DNV_TOF1'
 * '<S353>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L34/SIGNAL BLOCK/DNV_TOF1/TOF'
 * '<S354>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L34/SIGNAL BLOCK/DNV_TOF1/TOF/Detect Decrease'
 * '<S355>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L34/SIGNAL BLOCK/DNV_TOF1/TOF/Detect Increase'
 * '<S356>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L34/SIGNAL BLOCK/DNV_TOF1/TOF/S//H'
 * '<S357>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L54/SIGNAL BLOCK'
 * '<S358>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L54/SIGNAL BLOCK/DNV_TOF1'
 * '<S359>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L54/SIGNAL BLOCK/DNV_TOF1/TOF'
 * '<S360>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L54/SIGNAL BLOCK/DNV_TOF1/TOF/Detect Decrease'
 * '<S361>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L54/SIGNAL BLOCK/DNV_TOF1/TOF/Detect Increase'
 * '<S362>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L54/SIGNAL BLOCK/DNV_TOF1/TOF/S//H'
 * '<S363>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L72/SIGNAL BLOCK'
 * '<S364>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L72/SIGNAL BLOCK/DNV_TOF1'
 * '<S365>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L72/SIGNAL BLOCK/DNV_TOF1/TOF'
 * '<S366>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L72/SIGNAL BLOCK/DNV_TOF1/TOF/Detect Decrease'
 * '<S367>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L72/SIGNAL BLOCK/DNV_TOF1/TOF/Detect Increase'
 * '<S368>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L72/SIGNAL BLOCK/DNV_TOF1/TOF/S//H'
 * '<S369>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L74/SIGNAL BLOCK'
 * '<S370>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L74/SIGNAL BLOCK/DNV_TOF1'
 * '<S371>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L74/SIGNAL BLOCK/DNV_TOF1/TOF'
 * '<S372>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L74/SIGNAL BLOCK/DNV_TOF1/TOF/Detect Decrease'
 * '<S373>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L74/SIGNAL BLOCK/DNV_TOF1/TOF/Detect Increase'
 * '<S374>' : 'NONVITALDEPOT/LOGIC/SIGNAL BLOCK/L74/SIGNAL BLOCK/DNV_TOF1/TOF/S//H'
 * '<S375>' : 'NONVITALDEPOT/MAPPING/CBTCFROM'
 * '<S376>' : 'NONVITALDEPOT/MAPPING/DEPDI'
 * '<S377>' : 'NONVITALDEPOT/MAPPING/DEPDO'
 * '<S378>' : 'NONVITALDEPOT/MAPPING/DEPNVTODEPV'
 * '<S379>' : 'NONVITALDEPOT/MAPPING/DEPTOMAIN'
 * '<S380>' : 'NONVITALDEPOT/MAPPING/DEPVTODEPNV'
 * '<S381>' : 'NONVITALDEPOT/MAPPING/MAINTODEP'
 * '<S382>' : 'NONVITALDEPOT/MAPPING/SYSTEMFROM'
 */

/*-
 * Requirements for '<Root>': NONVITALDEPOT
 */
#endif                                 /* RTW_HEADER_NONVITALDEPOT_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
