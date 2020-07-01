/*
 * File: NONVITALMAIN.h
 *
 * Code generated for Simulink model 'NONVITALMAIN'.
 *
 * Model version                  : 1.592
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Jun 24 22:53:46 2020
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

#ifndef RTW_HEADER_NONVITALMAIN_h_
#define RTW_HEADER_NONVITALMAIN_h_
#include <string.h>
#ifndef NONVITALMAIN_COMMON_INCLUDES_
# define NONVITALMAIN_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* NONVITALMAIN_COMMON_INCLUDES_ */

#include "NONVITALMAIN_types.h"

/* Shared type includes */
#include "model_reference_types.h"

/* Block signals and states (auto storage) for system '<S19>/TON' */
#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

typedef struct {
  real_T memory;                       /* '<S31>/memory' */
  real_T Switch;                       /* '<S31>/Switch' */
  real_T memory_PreviousInput;         /* '<S31>/memory' */
  boolean_T LogicalOperator1;          /* '<S28>/Logical Operator1' */
  boolean_T LogicalOperator2;          /* '<S28>/Logical Operator2' */
  boolean_T DelayInput1_DSTATE;        /* '<S29>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_i;      /* '<S30>/Delay Input1' */
} DW_MNV_TON_T;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S60>/MNV_TOF2' */
#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

typedef struct {
  real_T memory;                       /* '<S78>/memory' */
  real_T Switch;                       /* '<S78>/Switch' */
  real_T memory_PreviousInput;         /* '<S78>/memory' */
  boolean_T LogicalOperator1;          /* '<S75>/Logical Operator1' */
  boolean_T LogicalOperator3;          /* '<S75>/Logical Operator3' */
  boolean_T LogicalOperator4;          /* '<S75>/Logical Operator4' */
  boolean_T DelayInput1_DSTATE;        /* '<S76>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_h;      /* '<S77>/Delay Input1' */
} DW_MNV_TOF_T;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S129>/INDIKASI POINT' */
#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND5;                      /* '<S138>/AND5' */
  boolean_T AND26;                     /* '<S138>/AND26' */
  boolean_T AND27;                     /* '<S138>/AND27' */
  boolean_T AND28;                     /* '<S138>/AND28' */
  boolean_T AND34;                     /* '<S138>/AND34' */
  boolean_T OR11;                      /* '<S138>/OR11' */
  boolean_T OR12;                      /* '<S138>/OR12' */
  boolean_T OR13;                      /* '<S138>/OR13' */
  boolean_T OR14;                      /* '<S138>/OR14' */
  boolean_T OR9;                       /* '<S138>/OR9' */
} DW_M_IND_POINT_T;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S147>/INDIKASI SIGNAL' */
#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND3;                      /* '<S155>/AND3' */
  boolean_T AND6;                      /* '<S155>/AND6' */
} DW_M_SIG_IND_2_T;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S153>/INDIKASI SIGNAL' */
#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND10;                     /* '<S161>/AND10' */
  boolean_T AND3;                      /* '<S161>/AND3' */
  boolean_T AND6;                      /* '<S161>/AND6' */
} DW_M_SIG_IND_T;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S163>/INDIKASI TRACK' */
#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T NOT2;                      /* '<S192>/NOT2' */
  boolean_T NOT5;                      /* '<S192>/NOT5' */
} DW_M_IND_TRACK_T;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S224>/MNV_TON1' */
#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

typedef struct {
  real_T memory;                       /* '<S235>/memory' */
  real_T Switch;                       /* '<S235>/Switch' */
  real_T memory_PreviousInput;         /* '<S235>/memory' */
  boolean_T Uk1;                       /* '<S233>/Delay Input1' */
  boolean_T Uk1_h;                     /* '<S234>/Delay Input1' */
  boolean_T LogicalOperator2;          /* '<S232>/Logical Operator2' */
  boolean_T DelayInput1_DSTATE;        /* '<S233>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_c;      /* '<S234>/Delay Input1' */
} DW_MNV_TON_f_T;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S219>/INTERLOCKING POINT' */
#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

typedef struct {
  DW_MNV_TON_f_T MNV_TON1;             /* '<S224>/MNV_TON1' */
  DW_MNV_TOF_T MNV_TOF1;               /* '<S224>/MNV_TOF1' */
  boolean_T M8;                        /* '<S224>/M8' */
  boolean_T M9;                        /* '<S224>/M9' */
  boolean_T AND4;                      /* '<S224>/AND4' */
  boolean_T AND11;                     /* '<S224>/AND11' */
  boolean_T M11;                       /* '<S224>/M11' */
  boolean_T M10;                       /* '<S224>/M10' */
  boolean_T M7;                        /* '<S224>/M7' */
  boolean_T AND12;                     /* '<S224>/AND12' */
  boolean_T M6;                        /* '<S224>/M6' */
  boolean_T AND3;                      /* '<S224>/AND3' */
  boolean_T AND14;                     /* '<S224>/AND14' */
  boolean_T AND13;                     /* '<S224>/AND13' */
  boolean_T OR6;                       /* '<S224>/OR6' */
  boolean_T FixPtRelationalOperator;   /* '<S225>/FixPt Relational Operator' */
  boolean_T AND28;                     /* '<S224>/AND28' */
  boolean_T OR8;                       /* '<S224>/OR8' */
  boolean_T NOT18;                     /* '<S224>/NOT18' */
  boolean_T NOT21;                     /* '<S224>/NOT21' */
  boolean_T NOT19;                     /* '<S224>/NOT19' */
  boolean_T AND17;                     /* '<S224>/AND17' */
  boolean_T NOT20;                     /* '<S224>/NOT20' */
  boolean_T AND18;                     /* '<S224>/AND18' */
  boolean_T NOT14;                     /* '<S224>/NOT14' */
  boolean_T AND19;                     /* '<S224>/AND19' */
  boolean_T AND20;                     /* '<S224>/AND20' */
  boolean_T NOT24;                     /* '<S224>/NOT24' */
  boolean_T NOT25;                     /* '<S224>/NOT25' */
  boolean_T OR18;                      /* '<S224>/OR18' */
  boolean_T OR19;                      /* '<S224>/OR19' */
  boolean_T OR21;                      /* '<S224>/OR21' */
  boolean_T OR22;                      /* '<S224>/OR22' */
  boolean_T OR23;                      /* '<S224>/OR23' */
  boolean_T DelayInput1_DSTATE;        /* '<S225>/Delay Input1' */
  boolean_T M8_PreviousInput;          /* '<S224>/M8' */
  boolean_T M9_PreviousInput;          /* '<S224>/M9' */
  boolean_T M1_PreviousInput;          /* '<S224>/M1' */
  boolean_T M2_PreviousInput;          /* '<S224>/M2' */
  boolean_T M5_PreviousInput;          /* '<S224>/M5' */
  boolean_T M11_PreviousInput;         /* '<S224>/M11' */
  boolean_T M10_PreviousInput;         /* '<S224>/M10' */
  boolean_T M7_PreviousInput;          /* '<S224>/M7' */
  boolean_T M6_PreviousInput;          /* '<S224>/M6' */
  boolean_T M4_PreviousInput;          /* '<S224>/M4' */
  boolean_T M3_PreviousInput;          /* '<S224>/M3' */
} DW_M_IL_POINT_T;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S310>/WARNING ED' */
#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND5;                      /* '<S326>/AND5' */
  boolean_T OR2;                       /* '<S326>/OR2' */
  boolean_T Memory2_PreviousInput;     /* '<S326>/Memory2' */
} DW_M_WAR_T;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S391>/POINT PB CONTROL' */
#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND1;                      /* '<S396>/AND1' */
  boolean_T AND4;                      /* '<S396>/AND4' */
  boolean_T AND5;                      /* '<S396>/AND5' */
  boolean_T AND6;                      /* '<S396>/AND6' */
  boolean_T FixPtRelationalOperator;   /* '<S397>/FixPt Relational Operator' */
  boolean_T DelayInput1_DSTATE;        /* '<S397>/Delay Input1' */
} DW_M_SW_PB_T;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S406>/ROUTE PB CONTROL' */
#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND2;                      /* '<S416>/AND2' */
  boolean_T AND3;                      /* '<S416>/AND3' */
} DW_M_R_PB_T;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S426>/RUTE OTOMATIS' */
#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND5;                      /* '<S434>/AND5' */
  boolean_T M4_PreviousInput;          /* '<S434>/M4' */
} DW_M_R_AUTO_T;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S442>/RRLS PB CONTROL' */
#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T AND1;                      /* '<S451>/AND1' */
} DW_M_RRLS_X_T;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S390>/VSB1' */
#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T LogicalOperator;           /* '<S478>/Logical Operator' */
  boolean_T AND1;                      /* '<S478>/AND1' */
  boolean_T DelayInput1_DSTATE;        /* '<S505>/Delay Input1' */
  boolean_T Memory_PreviousInput;      /* '<S478>/Memory' */
} DW_M_VSB_T;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S532>/POINT FAIL' */
#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

typedef struct {
  DW_MNV_TON_T MNV_TON1;               /* '<S537>/MNV_TON1' */
  boolean_T AND10;                     /* '<S537>/AND10' */
  boolean_T AND11;                     /* '<S537>/AND11' */
  boolean_T M6;                        /* '<S537>/M6' */
  boolean_T M8;                        /* '<S537>/M8' */
  boolean_T AND12;                     /* '<S537>/AND12' */
  boolean_T M7;                        /* '<S537>/M7' */
  boolean_T AND20;                     /* '<S537>/AND20' */
  boolean_T AND21;                     /* '<S537>/AND21' */
  boolean_T AND22;                     /* '<S537>/AND22' */
  boolean_T AND23;                     /* '<S537>/AND23' */
  boolean_T AND27;                     /* '<S537>/AND27' */
  boolean_T AND5;                      /* '<S537>/AND5' */
  boolean_T AND8;                      /* '<S537>/AND8' */
  boolean_T OR16;                      /* '<S537>/OR16' */
  boolean_T OR18;                      /* '<S537>/OR18' */
  boolean_T OR8;                       /* '<S537>/OR8' */
  boolean_T OR9;                       /* '<S537>/OR9' */
  boolean_T M6_PreviousInput;          /* '<S537>/M6' */
  boolean_T M8_PreviousInput;          /* '<S537>/M8' */
  boolean_T M2_PreviousInput;          /* '<S537>/M2' */
  boolean_T M4_PreviousInput;          /* '<S537>/M4' */
  boolean_T M7_PreviousInput;          /* '<S537>/M7' */
  boolean_T M9_PreviousInput;          /* '<S537>/M9' */
  boolean_T M1_PreviousInput;          /* '<S537>/M1' */
  boolean_T M3_PreviousInput;          /* '<S537>/M3' */
  boolean_T M5_PreviousInput;          /* '<S537>/M5' */
} DW_M_POINT_FAIL_T;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S620>/ROUTE REQUEST' */
#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T Memory1;                   /* '<S640>/Memory1' */
  boolean_T OR5;                       /* '<S640>/OR5' */
  boolean_T Memory1_PreviousInput;     /* '<S640>/Memory1' */
} DW_M_REQ_T;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for system '<S660>/SIGNAL BLOCK S' */
#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

typedef struct {
  DW_MNV_TOF_T MNV_TOF1;               /* '<S669>/MNV_TOF1' */
  boolean_T NOT5;                      /* '<S669>/NOT5' */
  boolean_T Memory;                    /* '<S669>/Memory' */
  boolean_T NOT1;                      /* '<S669>/NOT1' */
  boolean_T NOT4;                      /* '<S669>/NOT4' */
  boolean_T OR4;                       /* '<S669>/OR4' */
  boolean_T Memory_PreviousInput;      /* '<S669>/Memory' */
} DW_M_SIG_B_T;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

/* Block signals and states (auto storage) for model 'NONVITALMAIN' */
#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

typedef struct {
  DW_M_SIG_B_T SIGNALBLOCKT_j;         /* '<S668>/SIGNAL BLOCK T' */
  DW_M_SIG_B_T SIGNALBLOCKS_e;         /* '<S668>/SIGNAL BLOCK S' */
  DW_M_SIG_B_T SIGNALBLOCKT_ir;        /* '<S667>/SIGNAL BLOCK T' */
  DW_M_SIG_B_T SIGNALBLOCKS_c;         /* '<S667>/SIGNAL BLOCK S' */
  DW_M_SIG_B_T SIGNALBLOCKT_f;         /* '<S666>/SIGNAL BLOCK T' */
  DW_M_SIG_B_T SIGNALBLOCKT_m;         /* '<S665>/SIGNAL BLOCK T' */
  DW_M_SIG_B_T SIGNALBLOCKT_i;         /* '<S664>/SIGNAL BLOCK T' */
  DW_M_SIG_B_T SIGNALBLOCKT_b;         /* '<S663>/SIGNAL BLOCK T' */
  DW_M_SIG_B_T SIGNALBLOCKT_p;         /* '<S662>/SIGNAL BLOCK T' */
  DW_M_SIG_B_T SIGNALBLOCKT;           /* '<S661>/SIGNAL BLOCK T' */
  DW_M_SIG_B_T SIGNALBLOCKS;           /* '<S660>/SIGNAL BLOCK S' */
  DW_M_REQ_T ROUTEREQUEST_i5;          /* '<S639>/ROUTE REQUEST' */
  DW_M_REQ_T ROUTEREQUEST_b;           /* '<S638>/ROUTE REQUEST' */
  DW_M_REQ_T ROUTEREQUEST_c5;          /* '<S637>/ROUTE REQUEST' */
  DW_M_REQ_T ROUTEREQUEST_h;           /* '<S636>/ROUTE REQUEST' */
  DW_M_REQ_T ROUTEREQUEST_p2;          /* '<S635>/ROUTE REQUEST' */
  DW_M_REQ_T ROUTEREQUEST_fl;          /* '<S634>/ROUTE REQUEST' */
  DW_M_REQ_T ROUTEREQUEST_ij;          /* '<S633>/ROUTE REQUEST' */
  DW_M_REQ_T ROUTEREQUEST_dh;          /* '<S632>/ROUTE REQUEST' */
  DW_M_REQ_T ROUTEREQUEST_n;           /* '<S631>/ROUTE REQUEST' */
  DW_M_REQ_T ROUTEREQUEST_o;           /* '<S630>/ROUTE REQUEST' */
  DW_M_REQ_T ROUTEREQUEST_g;           /* '<S629>/ROUTE REQUEST' */
  DW_M_REQ_T ROUTEREQUEST_c;           /* '<S628>/ROUTE REQUEST' */
  DW_M_REQ_T ROUTEREQUEST_lk;          /* '<S627>/ROUTE REQUEST' */
  DW_M_REQ_T ROUTEREQUEST_l;           /* '<S626>/ROUTE REQUEST' */
  DW_M_REQ_T ROUTEREQUEST_f;           /* '<S625>/ROUTE REQUEST' */
  DW_M_REQ_T ROUTEREQUEST_d;           /* '<S624>/ROUTE REQUEST' */
  DW_M_REQ_T ROUTEREQUEST_m;           /* '<S623>/ROUTE REQUEST' */
  DW_M_REQ_T ROUTEREQUEST_i;           /* '<S622>/ROUTE REQUEST' */
  DW_M_REQ_T ROUTEREQUEST_p;           /* '<S621>/ROUTE REQUEST' */
  DW_M_REQ_T ROUTEREQUEST;             /* '<S620>/ROUTE REQUEST' */
  DW_MNV_TOF_T MNV_TOF_n;              /* '<S570>/MNV_TOF' */
  DW_MNV_TOF_T MNV_TOF_m;              /* '<S569>/MNV_TOF' */
  DW_MNV_TOF_T MNV_TOF_h;              /* '<S568>/MNV_TOF' */
  DW_MNV_TOF_T MNV_TOF_e;              /* '<S567>/MNV_TOF' */
  DW_M_POINT_FAIL_T POINTFAIL_p;       /* '<S536>/POINT FAIL' */
  DW_M_POINT_FAIL_T POINTFAIL_m;       /* '<S535>/POINT FAIL' */
  DW_M_POINT_FAIL_T POINTFAIL_a;       /* '<S534>/POINT FAIL' */
  DW_M_POINT_FAIL_T POINTFAIL_n;       /* '<S533>/POINT FAIL' */
  DW_M_POINT_FAIL_T POINTFAIL;         /* '<S532>/POINT FAIL' */
  DW_M_VSB_T VSB9;                     /* '<S390>/VSB9' */
  DW_M_VSB_T VSB8;                     /* '<S390>/VSB8' */
  DW_M_VSB_T VSB7;                     /* '<S390>/VSB7' */
  DW_M_VSB_T VSB6;                     /* '<S390>/VSB6' */
  DW_M_VSB_T VSB5;                     /* '<S390>/VSB5' */
  DW_M_VSB_T VSB4;                     /* '<S390>/VSB4' */
  DW_M_VSB_T VSB3;                     /* '<S390>/VSB3' */
  DW_M_VSB_T VSB27;                    /* '<S390>/VSB27' */
  DW_M_VSB_T VSB26;                    /* '<S390>/VSB26' */
  DW_M_VSB_T VSB25;                    /* '<S390>/VSB25' */
  DW_M_VSB_T VSB24;                    /* '<S390>/VSB24' */
  DW_M_VSB_T VSB23;                    /* '<S390>/VSB23' */
  DW_M_VSB_T VSB22;                    /* '<S390>/VSB22' */
  DW_M_VSB_T VSB21;                    /* '<S390>/VSB21' */
  DW_M_VSB_T VSB20;                    /* '<S390>/VSB20' */
  DW_M_VSB_T VSB2;                     /* '<S390>/VSB2' */
  DW_M_VSB_T VSB19;                    /* '<S390>/VSB19' */
  DW_M_VSB_T VSB18;                    /* '<S390>/VSB18' */
  DW_M_VSB_T VSB17;                    /* '<S390>/VSB17' */
  DW_M_VSB_T VSB16;                    /* '<S390>/VSB16' */
  DW_M_VSB_T VSB15;                    /* '<S390>/VSB15' */
  DW_M_VSB_T VSB14;                    /* '<S390>/VSB14' */
  DW_M_VSB_T VSB13;                    /* '<S390>/VSB13' */
  DW_M_VSB_T VSB12;                    /* '<S390>/VSB12' */
  DW_M_VSB_T VSB11;                    /* '<S390>/VSB11' */
  DW_M_VSB_T VSB10;                    /* '<S390>/VSB10' */
  DW_M_VSB_T VSB1;                     /* '<S390>/VSB1' */
  DW_M_RRLS_X_T RRLSPBCONTROL_n;       /* '<S450>/RRLS PB CONTROL' */
  DW_M_RRLS_X_T RRLSPBCONTROL_ep;      /* '<S449>/RRLS PB CONTROL' */
  DW_M_RRLS_X_T RRLSPBCONTROL_hv;      /* '<S448>/RRLS PB CONTROL' */
  DW_M_RRLS_X_T RRLSPBCONTROL_e;       /* '<S447>/RRLS PB CONTROL' */
  DW_M_RRLS_X_T RRLSPBCONTROL_f;       /* '<S446>/RRLS PB CONTROL' */
  DW_M_RRLS_X_T RRLSPBCONTROL_l;       /* '<S445>/RRLS PB CONTROL' */
  DW_M_RRLS_X_T RRLSPBCONTROL_j;       /* '<S444>/RRLS PB CONTROL' */
  DW_M_RRLS_X_T RRLSPBCONTROL_h;       /* '<S443>/RRLS PB CONTROL' */
  DW_M_RRLS_X_T RRLSPBCONTROL;         /* '<S442>/RRLS PB CONTROL' */
  DW_M_R_AUTO_T RUTEOTOMATIS_m;        /* '<S433>/RUTE OTOMATIS' */
  DW_M_R_AUTO_T RUTEOTOMATIS_ec;       /* '<S432>/RUTE OTOMATIS' */
  DW_M_R_AUTO_T RUTEOTOMATIS_h;        /* '<S431>/RUTE OTOMATIS' */
  DW_M_R_AUTO_T RUTEOTOMATIS_j;        /* '<S430>/RUTE OTOMATIS' */
  DW_M_R_AUTO_T RUTEOTOMATIS_e0;       /* '<S429>/RUTE OTOMATIS' */
  DW_M_R_AUTO_T RUTEOTOMATIS_e;        /* '<S428>/RUTE OTOMATIS' */
  DW_M_R_AUTO_T RUTEOTOMATIS_f;        /* '<S427>/RUTE OTOMATIS' */
  DW_M_R_AUTO_T RUTEOTOMATIS;          /* '<S426>/RUTE OTOMATIS' */
  DW_M_R_PB_T ROUTEPBCONTROL_d;        /* '<S415>/ROUTE PB CONTROL' */
  DW_M_R_PB_T ROUTEPBCONTROL_i;        /* '<S414>/ROUTE PB CONTROL' */
  DW_M_R_PB_T ROUTEPBCONTROL_fl;       /* '<S413>/ROUTE PB CONTROL' */
  DW_M_R_PB_T ROUTEPBCONTROL_j;        /* '<S412>/ROUTE PB CONTROL' */
  DW_M_R_PB_T ROUTEPBCONTROL_f;        /* '<S411>/ROUTE PB CONTROL' */
  DW_M_R_PB_T ROUTEPBCONTROL_ax;       /* '<S410>/ROUTE PB CONTROL' */
  DW_M_R_PB_T ROUTEPBCONTROL_og;       /* '<S409>/ROUTE PB CONTROL' */
  DW_M_R_PB_T ROUTEPBCONTROL_a;        /* '<S408>/ROUTE PB CONTROL' */
  DW_M_R_PB_T ROUTEPBCONTROL_o;        /* '<S407>/ROUTE PB CONTROL' */
  DW_M_R_PB_T ROUTEPBCONTROL;          /* '<S406>/ROUTE PB CONTROL' */
  DW_M_SW_PB_T POINTPBCONTROL_n;       /* '<S395>/POINT PB CONTROL' */
  DW_M_SW_PB_T POINTPBCONTROL_e;       /* '<S394>/POINT PB CONTROL' */
  DW_M_SW_PB_T POINTPBCONTROL_p;       /* '<S393>/POINT PB CONTROL' */
  DW_M_SW_PB_T POINTPBCONTROL_l;       /* '<S392>/POINT PB CONTROL' */
  DW_M_SW_PB_T POINTPBCONTROL;         /* '<S391>/POINT PB CONTROL' */
  DW_M_WAR_T TPRBANTU;                 /* '<S309>/TPR-BANTU' */
  DW_M_WAR_T WARNINGPSD_p;             /* '<S374>/WARNING PSD' */
  DW_M_WAR_T WARNINGPSD_o;             /* '<S373>/WARNING PSD' */
  DW_M_WAR_T WARNINGPSD_a;             /* '<S372>/WARNING PSD' */
  DW_M_WAR_T WARNINGPSD_n;             /* '<S371>/WARNING PSD' */
  DW_M_WAR_T WARNINGPSD_bo;            /* '<S370>/WARNING PSD' */
  DW_M_WAR_T WARNINGPSD_b;             /* '<S369>/WARNING PSD' */
  DW_M_WAR_T WARNINGPSD_k;             /* '<S368>/WARNING PSD' */
  DW_M_WAR_T WARNINGPSD;               /* '<S367>/WARNING PSD' */
  DW_M_WAR_T WARNINGSYSTEM2FAIL;       /* '<S362>/WARNING SYSTEM 2 FAIL' */
  DW_M_WAR_T WARNINGSYSTEM1FAIL;       /* '<S361>/WARNING SYSTEM 1 FAIL' */
  DW_M_WAR_T WARNINGCOMM2FAIL;         /* '<S359>/WARNING COMM 2 FAIL' */
  DW_M_WAR_T WARNINGCOMM1FAIL;         /* '<S358>/WARNING COMM 1 FAIL' */
  DW_M_WAR_T WARNINGESB_f;             /* '<S349>/WARNING ESB' */
  DW_M_WAR_T WARNINGESB_h;             /* '<S348>/WARNING ESB' */
  DW_M_WAR_T WARNINGESB_p;             /* '<S347>/WARNING ESB' */
  DW_M_WAR_T WARNINGESB_bu;            /* '<S346>/WARNING ESB' */
  DW_M_WAR_T WARNINGESB_g;             /* '<S345>/WARNING ESB' */
  DW_M_WAR_T WARNINGESB_b;             /* '<S344>/WARNING ESB' */
  DW_M_WAR_T WARNINGESB_m;             /* '<S343>/WARNING ESB' */
  DW_M_WAR_T WARNINGESB;               /* '<S342>/WARNING ESB' */
  DW_M_WAR_T WARNINGED_b;              /* '<S325>/WARNING ED' */
  DW_M_WAR_T WARNINGED_l;              /* '<S324>/WARNING ED' */
  DW_M_WAR_T WARNINGED_pr;             /* '<S323>/WARNING ED' */
  DW_M_WAR_T WARNINGED_ds;             /* '<S322>/WARNING ED' */
  DW_M_WAR_T WARNINGED_m;              /* '<S321>/WARNING ED' */
  DW_M_WAR_T WARNINGED_i;              /* '<S320>/WARNING ED' */
  DW_M_WAR_T WARNINGED_d;              /* '<S319>/WARNING ED' */
  DW_M_WAR_T WARNINGED_ph;             /* '<S318>/WARNING ED' */
  DW_M_WAR_T WARNINGED_o;              /* '<S317>/WARNING ED' */
  DW_M_WAR_T WARNINGED_h;              /* '<S316>/WARNING ED' */
  DW_M_WAR_T WARNINGED_a;              /* '<S315>/WARNING ED' */
  DW_M_WAR_T WARNINGED_cg;             /* '<S314>/WARNING ED' */
  DW_M_WAR_T WARNINGED_p;              /* '<S313>/WARNING ED' */
  DW_M_WAR_T WARNINGED_n;              /* '<S312>/WARNING ED' */
  DW_M_WAR_T WARNINGED_c;              /* '<S311>/WARNING ED' */
  DW_M_WAR_T WARNINGED;                /* '<S310>/WARNING ED' */
  DW_M_IL_POINT_T INTERLOCKINGPOINT_i; /* '<S223>/INTERLOCKING POINT' */
  DW_M_IL_POINT_T INTERLOCKINGPOINT_a; /* '<S222>/INTERLOCKING POINT' */
  DW_M_IL_POINT_T INTERLOCKINGPOINT_e; /* '<S221>/INTERLOCKING POINT' */
  DW_M_IL_POINT_T INTERLOCKINGPOINT_f; /* '<S220>/INTERLOCKING POINT' */
  DW_M_IL_POINT_T INTERLOCKINGPOINT;   /* '<S219>/INTERLOCKING POINT' */
  DW_M_IND_TRACK_T INDIKASITRACK_h0;   /* '<S189>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_jb;   /* '<S188>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_db;   /* '<S187>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_n0;   /* '<S186>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_o;    /* '<S185>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_ej;   /* '<S184>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_i;    /* '<S183>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_bx;   /* '<S182>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_k;    /* '<S181>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_fo;   /* '<S180>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_p;    /* '<S179>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_bc;   /* '<S178>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_ck;   /* '<S177>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_jw;   /* '<S176>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_fc;   /* '<S175>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_fn;   /* '<S174>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_c;    /* '<S173>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_nt;   /* '<S172>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_f;    /* '<S171>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_n;    /* '<S170>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_e;    /* '<S169>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_j;    /* '<S168>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_g;    /* '<S167>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_b;    /* '<S166>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_h;    /* '<S165>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK_d;    /* '<S164>/INDIKASI TRACK' */
  DW_M_IND_TRACK_T INDIKASITRACK;      /* '<S163>/INDIKASI TRACK' */
  DW_M_SIG_IND_T INDIKASISIGNAL_f;     /* '<S154>/INDIKASI SIGNAL' */
  DW_M_SIG_IND_T INDIKASISIGNAL_d;     /* '<S153>/INDIKASI SIGNAL' */
  DW_M_SIG_IND_2_T INDIKASISIGNAL_a;   /* '<S152>/INDIKASI SIGNAL' */
  DW_M_SIG_IND_2_T INDIKASISIGNAL_c;   /* '<S151>/INDIKASI SIGNAL' */
  DW_M_SIG_IND_2_T INDIKASISIGNAL_ni;  /* '<S150>/INDIKASI SIGNAL' */
  DW_M_SIG_IND_2_T INDIKASISIGNAL_b;   /* '<S149>/INDIKASI SIGNAL' */
  DW_M_SIG_IND_2_T INDIKASISIGNAL_n;   /* '<S148>/INDIKASI SIGNAL' */
  DW_M_SIG_IND_2_T INDIKASISIGNAL;     /* '<S147>/INDIKASI SIGNAL' */
  DW_M_IND_POINT_T INDIKASIPOINT_n;    /* '<S137>/INDIKASI POINT' */
  DW_M_IND_POINT_T INDIKASIPOINT_a;    /* '<S136>/INDIKASI POINT' */
  DW_M_IND_POINT_T INDIKASIPOINT_h;    /* '<S135>/INDIKASI POINT' */
  DW_M_IND_POINT_T INDIKASIPOINT_cu;   /* '<S134>/INDIKASI POINT' */
  DW_M_IND_POINT_T INDIKASIPOINT_c;    /* '<S133>/INDIKASI POINT' */
  DW_M_IND_POINT_T INDIKASIPOINT_l;    /* '<S132>/INDIKASI POINT' */
  DW_M_IND_POINT_T INDIKASIPOINT_g;    /* '<S131>/INDIKASI POINT' */
  DW_M_IND_POINT_T INDIKASIPOINT_k;    /* '<S130>/INDIKASI POINT' */
  DW_M_IND_POINT_T INDIKASIPOINT;      /* '<S129>/INDIKASI POINT' */
  DW_MNV_TOF_T MNV_TOF2_o;             /* '<S68>/MNV_TOF2' */
  DW_MNV_TOF_T MNV_TOF1_js;            /* '<S68>/MNV_TOF1' */
  DW_MNV_TOF_T MNV_TOF2_h;             /* '<S67>/MNV_TOF2' */
  DW_MNV_TOF_T MNV_TOF1_lg;            /* '<S67>/MNV_TOF1' */
  DW_MNV_TOF_T MNV_TOF1_k;             /* '<S66>/MNV_TOF1' */
  DW_MNV_TOF_T MNV_TOF1_ll;            /* '<S65>/MNV_TOF1' */
  DW_MNV_TOF_T MNV_TOF1_j;             /* '<S64>/MNV_TOF1' */
  DW_MNV_TOF_T MNV_TOF1_l;             /* '<S63>/MNV_TOF1' */
  DW_MNV_TOF_T MNV_TOF1_b;             /* '<S62>/MNV_TOF1' */
  DW_MNV_TOF_T MNV_TOF1;               /* '<S61>/MNV_TOF1' */
  DW_MNV_TOF_T MNV_TOF2;               /* '<S60>/MNV_TOF2' */
  DW_MNV_TON_T TON7;                   /* '<S19>/TON7' */
  DW_MNV_TON_T TON6;                   /* '<S19>/TON6' */
  DW_MNV_TON_T TON5;                   /* '<S19>/TON5' */
  DW_MNV_TON_T TON4;                   /* '<S19>/TON4' */
  DW_MNV_TON_T TON3;                   /* '<S19>/TON3' */
  DW_MNV_TON_T TON2;                   /* '<S19>/TON2' */
  DW_MNV_TON_T TON1;                   /* '<S19>/TON1' */
  DW_MNV_TON_T TON;                    /* '<S19>/TON' */
  int32_T clockTickCounter;            /* '<S3>/0.5S' */
  int32_T clockTickCounter_f;          /* '<S3>/1S' */
  boolean_T OR1;                       /* '<S18>/OR1' */
  boolean_T OR2;                       /* '<S18>/OR2' */
  boolean_T NOT8;                      /* '<S19>/NOT8' */
  boolean_T NOT7;                      /* '<S19>/NOT7' */
  boolean_T NOT6;                      /* '<S19>/NOT6' */
  boolean_T NOT5;                      /* '<S19>/NOT5' */
  boolean_T NOT4;                      /* '<S19>/NOT4' */
  boolean_T NOT3;                      /* '<S19>/NOT3' */
  boolean_T NOT2;                      /* '<S19>/NOT2' */
  boolean_T NOT1;                      /* '<S19>/NOT1' */
  boolean_T Memory1;                   /* '<S60>/Memory1' */
  boolean_T OR4;                       /* '<S60>/OR4' */
  boolean_T NOT8_f;                    /* '<S60>/NOT8' */
  boolean_T DEPGRDO;                   /* '<S60>/DEP-GR-DO' */
  boolean_T AND13;                     /* '<S60>/AND13' */
  boolean_T Memory;                    /* '<S61>/Memory' */
  boolean_T OR3;                       /* '<S61>/OR3' */
  boolean_T NOT7_i;                    /* '<S61>/NOT7' */
  boolean_T J12ADRDO;                  /* '<S61>/J12A-DR-DO' */
  boolean_T AND13_c;                   /* '<S61>/AND13' */
  boolean_T Memory_m;                  /* '<S62>/Memory' */
  boolean_T OR5;                       /* '<S62>/OR5' */
  boolean_T NOT7_p;                    /* '<S62>/NOT7' */
  boolean_T J12BDRDO;                  /* '<S62>/J12B-DR-DO' */
  boolean_T AND13_g;                   /* '<S62>/AND13' */
  boolean_T Memory_c;                  /* '<S63>/Memory' */
  boolean_T OR3_f;                     /* '<S63>/OR3' */
  boolean_T NOT7_m;                    /* '<S63>/NOT7' */
  boolean_T J14DRDO;                   /* '<S63>/J14-DR-DO' */
  boolean_T AND13_k;                   /* '<S63>/AND13' */
  boolean_T Memory_n;                  /* '<S64>/Memory' */
  boolean_T OR5_j;                     /* '<S64>/OR5' */
  boolean_T NOT7_a;                    /* '<S64>/NOT7' */
  boolean_T J22ADRDO;                  /* '<S64>/J22A-DR-DO' */
  boolean_T AND13_ch;                  /* '<S64>/AND13' */
  boolean_T Memory_i;                  /* '<S65>/Memory' */
  boolean_T OR5_m;                     /* '<S65>/OR5' */
  boolean_T NOT7_l;                    /* '<S65>/NOT7' */
  boolean_T J22BDRDO;                  /* '<S65>/J22B-DR-DO' */
  boolean_T AND13_ga;                  /* '<S65>/AND13' */
  boolean_T Memory_o;                  /* '<S66>/Memory' */
  boolean_T OR3_c;                     /* '<S66>/OR3' */
  boolean_T NOT7_n;                    /* '<S66>/NOT7' */
  boolean_T J24DRDO;                   /* '<S66>/J24-DR-DO' */
  boolean_T AND13_o;                   /* '<S66>/AND13' */
  boolean_T Memory_e;                  /* '<S67>/Memory' */
  boolean_T Memory1_m;                 /* '<S67>/Memory1' */
  boolean_T OR3_g;                     /* '<S67>/OR3' */
  boolean_T NOT7_j;                    /* '<S67>/NOT7' */
  boolean_T JL10DRDO;                  /* '<S67>/JL10-DR-DO' */
  boolean_T NOT8_n;                    /* '<S67>/NOT8' */
  boolean_T JL10GRDO;                  /* '<S67>/JL10-GR-DO' */
  boolean_T AND13_n;                   /* '<S67>/AND13' */
  boolean_T Memory_l;                  /* '<S68>/Memory' */
  boolean_T Memory1_e;                 /* '<S68>/Memory1' */
  boolean_T OR3_o;                     /* '<S68>/OR3' */
  boolean_T NOT7_ix;                   /* '<S68>/NOT7' */
  boolean_T JL20DRDO;                  /* '<S68>/JL20-DR-DO' */
  boolean_T NOT8_o;                    /* '<S68>/NOT8' */
  boolean_T JL20GRDO;                  /* '<S68>/JL20-GR-DO' */
  boolean_T AND13_or;                  /* '<S68>/AND13' */
  boolean_T W11A21AL;                  /* '<S219>/W11A//21A-L' */
  boolean_T W11B21BL;                  /* '<S220>/W11B//21B-L' */
  boolean_T W13A23AL;                  /* '<S221>/W13A//23A-L' */
  boolean_T W13B23BL;                  /* '<S222>/W13B//23B-L' */
  boolean_T W21CL;                     /* '<S223>/W21C-L' */
  boolean_T AND1;                      /* '<S567>/AND1' */
  boolean_T AND1_j;                    /* '<S568>/AND1' */
  boolean_T FixPtRelationalOperator;   /* '<S576>/FixPt Relational Operator' */
  boolean_T VSB15_g;                   /* '<S569>/VSB15' */
  boolean_T VSB21_d;                   /* '<S569>/VSB21' */
  boolean_T VSB22_p;                   /* '<S569>/VSB22' */
  boolean_T VSB23_k;                   /* '<S569>/VSB23' */
  boolean_T VSB1_j;                    /* '<S569>/VSB1' */
  boolean_T VSB2_e;                    /* '<S569>/VSB2' */
  boolean_T VSB3_p;                    /* '<S569>/VSB3' */
  boolean_T VSB4_d;                    /* '<S569>/VSB4' */
  boolean_T VSB5_k;                    /* '<S569>/VSB5' */
  boolean_T VSB6_p;                    /* '<S569>/VSB6' */
  boolean_T VSB7_g;                    /* '<S569>/VSB7' */
  boolean_T VSB8_i;                    /* '<S569>/VSB8' */
  boolean_T VSB9_n;                    /* '<S569>/VSB9' */
  boolean_T VSB10_l;                   /* '<S569>/VSB10' */
  boolean_T VSB11_b;                   /* '<S569>/VSB11' */
  boolean_T VSB12_p;                   /* '<S569>/VSB12' */
  boolean_T VSB13_c;                   /* '<S569>/VSB13' */
  boolean_T VSB14_l;                   /* '<S569>/VSB14' */
  boolean_T VSB25_n;                   /* '<S569>/VSB25' */
  boolean_T VSB26_c;                   /* '<S569>/VSB26' */
  boolean_T VSB27_o;                   /* '<S569>/VSB27' */
  boolean_T VSB28;                     /* '<S569>/VSB28' */
  boolean_T VSB16_h;                   /* '<S569>/VSB16' */
  boolean_T VSB17_i;                   /* '<S569>/VSB17' */
  boolean_T VSB18_i;                   /* '<S569>/VSB18' */
  boolean_T VSB19_f;                   /* '<S569>/VSB19' */
  boolean_T VSB20_c;                   /* '<S569>/VSB20' */
  boolean_T AND1_k;                    /* '<S569>/AND1' */
  boolean_T AND14;                     /* '<S570>/AND14' */
  boolean_T FixPtRelationalOperator_e; /* '<S614>/FixPt Relational Operator' */
  boolean_T VDR;                       /* '<S660>/VDR' */
  boolean_T DEPGRDO_p;                 /* '<S660>/DEP-GR-DO' */
  boolean_T VDR_c;                     /* '<S661>/VDR' */
  boolean_T J12ADRDO_c;                /* '<S661>/J12A-DR-DO' */
  boolean_T VDR_o;                     /* '<S662>/VDR' */
  boolean_T J12BDRDO_l;                /* '<S662>/J12B-DR-DO' */
  boolean_T VDR_g;                     /* '<S663>/VDR' */
  boolean_T J14DRDO_a;                 /* '<S663>/J14-DR-DO' */
  boolean_T VDR_a;                     /* '<S664>/VDR' */
  boolean_T J22ADRDO_l;                /* '<S664>/J22A-DR-DO' */
  boolean_T VDR_j;                     /* '<S665>/VDR' */
  boolean_T J22BDRDO_f;                /* '<S665>/J22B-DR-DO' */
  boolean_T VDR_n;                     /* '<S666>/VDR' */
  boolean_T J24DRDO_a;                 /* '<S666>/J24-DR-DO' */
  boolean_T VDR_cc;                    /* '<S667>/VDR' */
  boolean_T JL10DRDO_h;                /* '<S667>/JL10-DR-DO' */
  boolean_T JL10GRDO_c;                /* '<S667>/JL10-GR-DO' */
  boolean_T VDR_nc;                    /* '<S668>/VDR' */
  boolean_T JL20DRDO_d;                /* '<S668>/JL20-DR-DO' */
  boolean_T JL20GRDO_p;                /* '<S668>/JL20-GR-DO' */
  boolean_T DelayInput1_DSTATE;        /* '<S576>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_n;      /* '<S588>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_h;      /* '<S589>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_k;      /* '<S595>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_a;      /* '<S596>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_m;      /* '<S582>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_c;      /* '<S583>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_e;      /* '<S594>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_f;      /* '<S602>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_j;      /* '<S603>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_p;      /* '<S604>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ej;     /* '<S605>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_fa;     /* '<S606>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o;      /* '<S607>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_m5;     /* '<S608>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_l;      /* '<S584>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_kj;     /* '<S585>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_cd;     /* '<S586>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_a1;     /* '<S587>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_d;      /* '<S597>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_n5;     /* '<S598>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_lv;     /* '<S599>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_jk;     /* '<S600>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_i;      /* '<S601>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_io;     /* '<S590>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_hs;     /* '<S591>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_b;      /* '<S592>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_lc;     /* '<S593>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_kg;     /* '<S614>/Delay Input1' */
  boolean_T Memory_PreviousInput;      /* '<S18>/Memory' */
  boolean_T Memory1_PreviousInput;     /* '<S18>/Memory1' */
  boolean_T Memory1_PreviousInput_e;   /* '<S60>/Memory1' */
  boolean_T Memory2_PreviousInput;     /* '<S60>/Memory2' */
  boolean_T Memory_PreviousInput_a;    /* '<S61>/Memory' */
  boolean_T Memory2_PreviousInput_b;   /* '<S61>/Memory2' */
  boolean_T Memory_PreviousInput_j;    /* '<S62>/Memory' */
  boolean_T Memory2_PreviousInput_n;   /* '<S62>/Memory2' */
  boolean_T Memory_PreviousInput_p;    /* '<S63>/Memory' */
  boolean_T Memory2_PreviousInput_a;   /* '<S63>/Memory2' */
  boolean_T Memory_PreviousInput_k;    /* '<S64>/Memory' */
  boolean_T Memory2_PreviousInput_f;   /* '<S64>/Memory2' */
  boolean_T Memory_PreviousInput_ay;   /* '<S65>/Memory' */
  boolean_T Memory2_PreviousInput_e;   /* '<S65>/Memory2' */
  boolean_T Memory_PreviousInput_kg;   /* '<S66>/Memory' */
  boolean_T Memory2_PreviousInput_c;   /* '<S66>/Memory2' */
  boolean_T Memory_PreviousInput_b;    /* '<S67>/Memory' */
  boolean_T Memory1_PreviousInput_l;   /* '<S67>/Memory1' */
  boolean_T Memory2_PreviousInput_p;   /* '<S67>/Memory2' */
  boolean_T Memory_PreviousInput_pj;   /* '<S68>/Memory' */
  boolean_T Memory1_PreviousInput_i;   /* '<S68>/Memory1' */
  boolean_T Memory2_PreviousInput_af;  /* '<S68>/Memory2' */
  boolean_T M_CHK_V_NV;                /* synthesized block */
  boolean_T M_R_S_DEP_20;              /* synthesized block */
  boolean_T M_CHK_NV_V;                /* synthesized block */
  boolean_T DI_PBCBTC_TSB_TIB;         /* synthesized block */
  boolean_T DI_PBCBTC_TSB_T3;          /* synthesized block */
  boolean_T DI_PBCBTC_TSB_T2;          /* synthesized block */
  boolean_T DI_PBCBTC_TSB_T1;          /* synthesized block */
  boolean_T M_DI_PBX_DEP;              /* synthesized block */
  boolean_T M_DI_PBJ_DEP;              /* synthesized block */
  boolean_T M_AS_DEP;                  /* synthesized block */
  boolean_T M_R_D_20_22;               /* synthesized block */
  boolean_T M_R_D_20_12;               /* synthesized block */
  boolean_T M_R_D_10_22;               /* synthesized block */
  boolean_T M_R_D_10_12;               /* synthesized block */
  boolean_T M_R_S_10_DEP;              /* synthesized block */
  boolean_T M_R_D_24_22;               /* synthesized block */
  boolean_T M_R_D_24_12;               /* synthesized block */
  boolean_T M_R_H_22_24;               /* synthesized block */
  boolean_T M_R_H_22_14;               /* synthesized block */
  boolean_T M_R_H_22_20;               /* synthesized block */
  boolean_T M_R_H_22_10;               /* synthesized block */
  boolean_T M_R_D_14_22;               /* synthesized block */
  boolean_T M_R_D_14_12;               /* synthesized block */
  boolean_T M_R_H_12_24;               /* synthesized block */
  boolean_T M_R_H_12_14;               /* synthesized block */
  boolean_T M_R_H_12_20;               /* synthesized block */
  boolean_T M_R_H_12_10;               /* synthesized block */
  boolean_T M_R_S_20_DEP;              /* synthesized block */
  boolean_T M_R_S_DEP_10;              /* synthesized block */
  boolean_T M_REQ_T_20_22;             /* synthesized block */
  boolean_T R2022PBCTRL;               /* synthesized block */
  boolean_T M_REQ_T_20_12;             /* synthesized block */
  boolean_T R2012PBCTRL;               /* synthesized block */
  boolean_T M_B_JL20_D;                /* synthesized block */
  boolean_T M_B_JL20_S;                /* synthesized block */
  boolean_T M_REQ_S_20_DEP;            /* synthesized block */
  boolean_T R20DEPPBCTRL;              /* synthesized block */
  boolean_T M_REQ_T_10_22;             /* synthesized block */
  boolean_T R1022PBCTRL;               /* synthesized block */
  boolean_T M_REQ_T_10_12;             /* synthesized block */
  boolean_T R1012PBCTRL;               /* synthesized block */
  boolean_T M_B_JL10_D;                /* synthesized block */
  boolean_T M_B_JL10_S;                /* synthesized block */
  boolean_T M_REQ_S_10_DEP;            /* synthesized block */
  boolean_T R10DEPPBCTRL;              /* synthesized block */
  boolean_T M_REQ_T_24_22;             /* synthesized block */
  boolean_T R2422PBCTRL;               /* synthesized block */
  boolean_T M_REQ_T_24_12;             /* synthesized block */
  boolean_T R2412PBCTRL;               /* synthesized block */
  boolean_T M_B_J24_D;                 /* synthesized block */
  boolean_T M_REQ_T_22_24;             /* synthesized block */
  boolean_T R2224PBCTRL;               /* synthesized block */
  boolean_T M_REQ_T_22_14;             /* synthesized block */
  boolean_T R2214PBCTRL;               /* synthesized block */
  boolean_T M_B_J22B_H;                /* synthesized block */
  boolean_T M_REQ_T_22_20;             /* synthesized block */
  boolean_T R2220PBCTRL;               /* synthesized block */
  boolean_T M_REQ_T_22_10;             /* synthesized block */
  boolean_T R2210PBCTRL;               /* synthesized block */
  boolean_T M_B_J22A_H;                /* synthesized block */
  boolean_T M_REQ_T_14_22;             /* synthesized block */
  boolean_T R1422PBCTRL;               /* synthesized block */
  boolean_T M_REQ_T_14_12;             /* synthesized block */
  boolean_T R1412PBCTRL;               /* synthesized block */
  boolean_T M_B_J14_D;                 /* synthesized block */
  boolean_T M_REQ_T_12_24;             /* synthesized block */
  boolean_T R1224PBCTRL;               /* synthesized block */
  boolean_T M_REQ_T_12_14;             /* synthesized block */
  boolean_T R1214PBCTRL;               /* synthesized block */
  boolean_T M_B_J12B_H;                /* synthesized block */
  boolean_T M_REQ_T_12_20;             /* synthesized block */
  boolean_T R1220PBCTRL;               /* synthesized block */
  boolean_T M_REQ_T_12_10;             /* synthesized block */
  boolean_T R1210PBCTRL;               /* synthesized block */
  boolean_T M_B_J12A_H;                /* synthesized block */
  boolean_T M_REQ_S_DEP_20;            /* synthesized block */
  boolean_T RDEP20PBCTRL;              /* synthesized block */
  boolean_T M_REQ_S_DEP_10;            /* synthesized block */
  boolean_T RDEP10PBCTRL;              /* synthesized block */
  boolean_T M_B_DEP;                   /* synthesized block */
  boolean_T DO_CT_TPR;                 /* synthesized block */
  boolean_T DO_CT_WZ;                  /* synthesized block */
  boolean_T DO_CT_TBW;                 /* synthesized block */
  boolean_T DO_CT_TWT;                 /* synthesized block */
  boolean_T M_W21C_CTRL_TRAIL_Z;       /* synthesized block */
  boolean_T M_W13B_23B_CTRL_TRAIL_Z;   /* synthesized block */
  boolean_T M_W13A_23A_CTRL_TRAIL_Z;   /* synthesized block */
  boolean_T M_W11B_21B_CTRL_TRAIL_Z;   /* synthesized block */
  boolean_T M_W11A_21A_CTRL_TRAIL_Z;   /* synthesized block */
  boolean_T DI_PBCBTC_WZ;              /* synthesized block */
  boolean_T VSB9_c;                    /* synthesized block */
  boolean_T M_CTRL_VSB9;               /* synthesized block */
  boolean_T VSB8_i_m;                  /* synthesized block */
  boolean_T M_CTRL_VSB8;               /* synthesized block */
  boolean_T VSB7_f;                    /* synthesized block */
  boolean_T M_CTRL_VSB7;               /* synthesized block */
  boolean_T VSB6_h;                    /* synthesized block */
  boolean_T M_CTRL_VSB6;               /* synthesized block */
  boolean_T VSB5_n;                    /* synthesized block */
  boolean_T M_CTRL_VSB5;               /* synthesized block */
  boolean_T VSB4_g;                    /* synthesized block */
  boolean_T M_CTRL_VSB4;               /* synthesized block */
  boolean_T VSB3_l;                    /* synthesized block */
  boolean_T M_CTRL_VSB3;               /* synthesized block */
  boolean_T VSB27_p;                   /* synthesized block */
  boolean_T M_CTRL_VSB27;              /* synthesized block */
  boolean_T VSB26_l;                   /* synthesized block */
  boolean_T M_CTRL_VSB26;              /* synthesized block */
  boolean_T VSB25_k;                   /* synthesized block */
  boolean_T M_CTRL_VSB25;              /* synthesized block */
  boolean_T VSB24_a;                   /* synthesized block */
  boolean_T M_CTRL_VSB24;              /* synthesized block */
  boolean_T VSB23_i;                   /* synthesized block */
  boolean_T M_CTRL_VSB23;              /* synthesized block */
  boolean_T VSB22_c;                   /* synthesized block */
  boolean_T M_CTRL_VSB22;              /* synthesized block */
  boolean_T VSB21_p;                   /* synthesized block */
  boolean_T M_CTRL_VSB21;              /* synthesized block */
  boolean_T VSB20_c_c;                 /* synthesized block */
  boolean_T M_CTRL_VSB20;              /* synthesized block */
  boolean_T VSB2_e_k;                  /* synthesized block */
  boolean_T M_CTRL_VSB2;               /* synthesized block */
  boolean_T VSB19_d;                   /* synthesized block */
  boolean_T M_CTRL_VSB19;              /* synthesized block */
  boolean_T VSB18_j;                   /* synthesized block */
  boolean_T M_CTRL_VSB18;              /* synthesized block */
  boolean_T VSB17_c;                   /* synthesized block */
  boolean_T M_CTRL_VSB17;              /* synthesized block */
  boolean_T VSB16_h_c;                 /* synthesized block */
  boolean_T M_CTRL_VSB16;              /* synthesized block */
  boolean_T VSB15_h;                   /* synthesized block */
  boolean_T M_CTRL_VSB15;              /* synthesized block */
  boolean_T VSB14_o;                   /* synthesized block */
  boolean_T M_CTRL_VSB14;              /* synthesized block */
  boolean_T VSB13_d;                   /* synthesized block */
  boolean_T M_CTRL_VSB13;              /* synthesized block */
  boolean_T VSB12_l;                   /* synthesized block */
  boolean_T M_CTRL_VSB12;              /* synthesized block */
  boolean_T VSB11_c;                   /* synthesized block */
  boolean_T M_CTRL_VSB11;              /* synthesized block */
  boolean_T VSB10_j;                   /* synthesized block */
  boolean_T M_CTRL_VSB10;              /* synthesized block */
  boolean_T VSB1_g;                    /* synthesized block */
  boolean_T M_CTRL_VSB1;               /* synthesized block */
  boolean_T DO_INDT_BE_24B;            /* synthesized block */
  boolean_T DO_INDT_BE_24A;            /* synthesized block */
  boolean_T DO_INDT_BE_22E;            /* synthesized block */
  boolean_T DO_INDT_BE_22D;            /* synthesized block */
  boolean_T DO_INDT_BE_22C;            /* synthesized block */
  boolean_T DO_INDT_BE_22B;            /* synthesized block */
  boolean_T DO_INDT_BE_22A;            /* synthesized block */
  boolean_T DO_INDT_BE_20B;            /* synthesized block */
  boolean_T DO_INDT_BE_20A;            /* synthesized block */
  boolean_T DO_INDT_BE_14B;            /* synthesized block */
  boolean_T DO_INDT_BE_14A;            /* synthesized block */
  boolean_T DO_INDT_BE_12E;            /* synthesized block */
  boolean_T DO_INDT_BE_12D;            /* synthesized block */
  boolean_T DO_INDT_BE_12C;            /* synthesized block */
  boolean_T DO_INDT_BE_12B;            /* synthesized block */
  boolean_T DO_INDT_BE_12A;            /* synthesized block */
  boolean_T DO_INDT_BE_10B;            /* synthesized block */
  boolean_T DO_INDT_BE_10A;            /* synthesized block */
  boolean_T M_CTRL_RRLS_24;            /* synthesized block */
  boolean_T R2224PBRST;                /* synthesized block */
  boolean_T R1224PBRST;                /* synthesized block */
  boolean_T M_CTRL_RRLS_20;            /* synthesized block */
  boolean_T R2220PBRST;                /* synthesized block */
  boolean_T R1220PBRST;                /* synthesized block */
  boolean_T RDEP20PBRST;               /* synthesized block */
  boolean_T M_CTRL_RRLS_14;            /* synthesized block */
  boolean_T R2214PBRST;                /* synthesized block */
  boolean_T R1214PBRST;                /* synthesized block */
  boolean_T M_CTRL_RRLS_10;            /* synthesized block */
  boolean_T R2210PBRST;                /* synthesized block */
  boolean_T R1210PBRST;                /* synthesized block */
  boolean_T RDEP10PBRST;               /* synthesized block */
  boolean_T M_AR_DEP;                  /* synthesized block */
  boolean_T R2022PBRST;                /* synthesized block */
  boolean_T R1022PBRST;                /* synthesized block */
  boolean_T M_CTRL_RRLS_22B;           /* synthesized block */
  boolean_T R2422PBRST;                /* synthesized block */
  boolean_T M_CTRL_RRLS_22A;           /* synthesized block */
  boolean_T R1422PBRST;                /* synthesized block */
  boolean_T R2012PBRST;                /* synthesized block */
  boolean_T R1012PBRST;                /* synthesized block */
  boolean_T M_CTRL_RRLS_12B;           /* synthesized block */
  boolean_T R2412PBRST;                /* synthesized block */
  boolean_T R1412PBRST;                /* synthesized block */
  boolean_T M_CTRL_RRLS_12A;           /* synthesized block */
  boolean_T DI_PBR_TPR;                /* synthesized block */
  boolean_T R20DEPPBRST;               /* synthesized block */
  boolean_T R10DEPPBRST;               /* synthesized block */
  boolean_T M_CTRL_RRLS_DEP;           /* synthesized block */
  boolean_T DO_INDAR_JL20;             /* synthesized block */
  boolean_T M_AR_JL20;                 /* synthesized block */
  boolean_T DO_INDAR_JL10;             /* synthesized block */
  boolean_T M_AR_JL10;                 /* synthesized block */
  boolean_T DO_INDAR_J24;              /* synthesized block */
  boolean_T M_AR_J24;                  /* synthesized block */
  boolean_T DO_INDAR_J22B;             /* synthesized block */
  boolean_T M_AR_J22B;                 /* synthesized block */
  boolean_T DO_INDAR_J22A;             /* synthesized block */
  boolean_T M_AR_J22A;                 /* synthesized block */
  boolean_T DO_INDAR_J14;              /* synthesized block */
  boolean_T M_AR_J14;                  /* synthesized block */
  boolean_T DO_INDAR_J12B;             /* synthesized block */
  boolean_T M_AR_J12B;                 /* synthesized block */
  boolean_T DI_PBG_OTOMATIS;           /* synthesized block */
  boolean_T DI_PBG_MANUAL;             /* synthesized block */
  boolean_T DO_INDAR_J12A;             /* synthesized block */
  boolean_T M_AR_J12A;                 /* synthesized block */
  boolean_T DI_GO_TO_DEPOT;            /* synthesized block */
  boolean_T M_PBCTRL_20_DEP;           /* synthesized block */
  boolean_T M_PBCTRL_10_DEP;           /* synthesized block */
  boolean_T DI_PBX_24;                 /* synthesized block */
  boolean_T M_PBCTRL_22_24;            /* synthesized block */
  boolean_T M_PBCTRL_12_24;            /* synthesized block */
  boolean_T M_PBCTRL_22_20;            /* synthesized block */
  boolean_T M_PBCTRL_12_20;            /* synthesized block */
  boolean_T DI_PBX_14;                 /* synthesized block */
  boolean_T M_PBCTRL_22_14;            /* synthesized block */
  boolean_T M_PBCTRL_12_14;            /* synthesized block */
  boolean_T M_PBCTRL_22_10;            /* synthesized block */
  boolean_T M_PBCTRL_12_10;            /* synthesized block */
  boolean_T DI_PBX_20;                 /* synthesized block */
  boolean_T DI_PBX_10;                 /* synthesized block */
  boolean_T M_PBCTRL_DEP_20;           /* synthesized block */
  boolean_T M_PBCTRL_DEP_10;           /* synthesized block */
  boolean_T DI_GO_FROM_DEPOT;          /* synthesized block */
  boolean_T DI_PBJ_24;                 /* synthesized block */
  boolean_T M_PBCTRL_24_22;            /* synthesized block */
  boolean_T M_PBCTRL_24_12;            /* synthesized block */
  boolean_T DI_PBJ_20;                 /* synthesized block */
  boolean_T M_PBCTRL_20_22;            /* synthesized block */
  boolean_T M_PBCTRL_20_12;            /* synthesized block */
  boolean_T DI_PBJ_14;                 /* synthesized block */
  boolean_T DI_PBJ_22A;                /* synthesized block */
  boolean_T M_PBCTRL_14_22;            /* synthesized block */
  boolean_T M_PBCTRL_14_12;            /* synthesized block */
  boolean_T DI_PBJ_12A;                /* synthesized block */
  boolean_T DI_PBJ_10;                 /* synthesized block */
  boolean_T M_PBCTRL_10_22;            /* synthesized block */
  boolean_T M_PBCTRL_10_12;            /* synthesized block */
  boolean_T DI_PBJ_22B;                /* synthesized block */
  boolean_T DI_PBJ_12B;                /* synthesized block */
  boolean_T M_W21C_CTRL_SWRLS;         /* synthesized block */
  boolean_T DI_PBW_21C;                /* synthesized block */
  boolean_T M_W13B_23B_CTRL_SWRLS;     /* synthesized block */
  boolean_T DI_PBW_13B_23B;            /* synthesized block */
  boolean_T M_W13A_23A_CTRL_SWRLS;     /* synthesized block */
  boolean_T DI_PBW_13A_23A;            /* synthesized block */
  boolean_T M_W11B_21B_CTRL_SWRLS;     /* synthesized block */
  boolean_T DI_PBW_11B_21B;            /* synthesized block */
  boolean_T M_W11A_21A_CTRL_SWRLS;     /* synthesized block */
  boolean_T DI_PBW_11A_21A;            /* synthesized block */
  boolean_T DI_PBSW_TWT;               /* synthesized block */
  boolean_T DI_PBSW_TKW;               /* synthesized block */
  boolean_T DI_PBSW_TKGW;              /* synthesized block */
  boolean_T DI_PBSW_TBW;               /* synthesized block */
  boolean_T DI_PBSW_TBKW;              /* synthesized block */
  boolean_T M_NVCOMM_OK;               /* synthesized block */
  boolean_T M_CTRL_AA;                 /* synthesized block */
  boolean_T DO_INDG_TPR_BANTU;         /* synthesized block */
  boolean_T DO_CBTC_TIB_PSD2;          /* synthesized block */
  boolean_T M_CBTC_TIB_PSD2;           /* synthesized block */
  boolean_T DO_CBTC_T3_PSD2;           /* synthesized block */
  boolean_T M_CBTC_T3_PSD2;            /* synthesized block */
  boolean_T DO_CBTC_T2_PSD2;           /* synthesized block */
  boolean_T M_CBTC_T2_PSD2;            /* synthesized block */
  boolean_T DO_CBTC_T1_PSD2;           /* synthesized block */
  boolean_T M_CBTC_T1_PSD2;            /* synthesized block */
  boolean_T DO_CBTC_TIB_PSD1;          /* synthesized block */
  boolean_T M_CBTC_TIB_PSD1;           /* synthesized block */
  boolean_T DO_CBTC_T3_PSD1;           /* synthesized block */
  boolean_T M_CBTC_T3_PSD1;            /* synthesized block */
  boolean_T DO_CBTC_T2_PSD1;           /* synthesized block */
  boolean_T M_CBTC_T2_PSD1;            /* synthesized block */
  boolean_T DO_CBTC_T1_PSD1;           /* synthesized block */
  boolean_T M_CBTC_T1_PSD1;            /* synthesized block */
  boolean_T DO_INDG_SYS2_FAIL;         /* synthesized block */
  boolean_T CBI_FAIL_SYSTEM2;          /* synthesized block */
  boolean_T DO_INDG_SYS1_FAIL;         /* synthesized block */
  boolean_T CBI_FAIL_SYSTEM1;          /* synthesized block */
  boolean_T M_W21C_F_ACK;              /* synthesized block */
  boolean_T M_W13B_23B_F_ACK;          /* synthesized block */
  boolean_T M_W13A_23A_F_ACK;          /* synthesized block */
  boolean_T M_W11B_21B_F_ACK;          /* synthesized block */
  boolean_T M_W11A_21A_F_ACK;          /* synthesized block */
  boolean_T DO_INDG_POINT;             /* synthesized block */
  boolean_T DO_INDG_COMM2_FAIL;        /* synthesized block */
  boolean_T CBI_FAIL_COMM2;            /* synthesized block */
  boolean_T DO_INDG_COMM1_FAIL;        /* synthesized block */
  boolean_T CBI_FAIL_COMM1;            /* synthesized block */
  boolean_T DO_CBTC_TIB_ESB2;          /* synthesized block */
  boolean_T M_CBTC_TIB_ESB2;           /* synthesized block */
  boolean_T DO_CBTC_T3_ESB2;           /* synthesized block */
  boolean_T M_CBTC_T3_ESB2;            /* synthesized block */
  boolean_T DO_CBTC_T2_ESB2;           /* synthesized block */
  boolean_T M_CBTC_T2_ESB2;            /* synthesized block */
  boolean_T DO_CBTC_T1_ESB2;           /* synthesized block */
  boolean_T M_CBTC_T1_ESB2;            /* synthesized block */
  boolean_T DO_CBTC_TIB_ESB1;          /* synthesized block */
  boolean_T M_CBTC_TIB_ESB1;           /* synthesized block */
  boolean_T DO_CBTC_T3_ESB1;           /* synthesized block */
  boolean_T M_CBTC_T3_ESB1;            /* synthesized block */
  boolean_T DO_CBTC_T2_ESB1;           /* synthesized block */
  boolean_T M_CBTC_T2_ESB1;            /* synthesized block */
  boolean_T DO_CBTC_T1_ESB1;           /* synthesized block */
  boolean_T M_CBTC_T1_ESB1;            /* synthesized block */
  boolean_T DO_CBTC_TIB_ED4;           /* synthesized block */
  boolean_T M_CBTC_TIB_ED4;            /* synthesized block */
  boolean_T DO_CBTC_T3_ED4;            /* synthesized block */
  boolean_T M_CBTC_T3_ED4;             /* synthesized block */
  boolean_T DO_CBTC_T2_ED4;            /* synthesized block */
  boolean_T M_CBTC_T2_ED4;             /* synthesized block */
  boolean_T DO_CBTC_T1_ED4;            /* synthesized block */
  boolean_T M_CBTC_T1_ED4;             /* synthesized block */
  boolean_T DO_CBTC_TIB_ED3;           /* synthesized block */
  boolean_T M_CBTC_TIB_ED3;            /* synthesized block */
  boolean_T DO_CBTC_T3_ED3;            /* synthesized block */
  boolean_T M_CBTC_T3_ED3;             /* synthesized block */
  boolean_T DO_CBTC_T2_ED3;            /* synthesized block */
  boolean_T M_CBTC_T2_ED3;             /* synthesized block */
  boolean_T DO_CBTC_T1_ED3;            /* synthesized block */
  boolean_T M_CBTC_T1_ED3;             /* synthesized block */
  boolean_T DO_CBTC_TIB_ED2;           /* synthesized block */
  boolean_T M_CBTC_TIB_ED2;            /* synthesized block */
  boolean_T DO_CBTC_T3_ED2;            /* synthesized block */
  boolean_T M_CBTC_T3_ED2;             /* synthesized block */
  boolean_T DO_CBTC_T2_ED2;            /* synthesized block */
  boolean_T M_CBTC_T2_ED2;             /* synthesized block */
  boolean_T DO_CBTC_T1_ED2;            /* synthesized block */
  boolean_T M_CBTC_T1_ED2;             /* synthesized block */
  boolean_T DO_CBTC_TIB_ED1;           /* synthesized block */
  boolean_T M_CBTC_TIB_ED1;            /* synthesized block */
  boolean_T DO_CBTC_T3_ED1;            /* synthesized block */
  boolean_T M_CBTC_T3_ED1;             /* synthesized block */
  boolean_T DO_CBTC_T2_ED1;            /* synthesized block */
  boolean_T M_CBTC_T2_ED1;             /* synthesized block */
  boolean_T DI_PBG_THB;                /* synthesized block */
  boolean_T DO_CBTC_T1_ED1;            /* synthesized block */
  boolean_T M_CBTC_T1_ED1;             /* synthesized block */
  boolean_T M_W13B_23B_FAIL;           /* synthesized block */
  boolean_T M_W13A_23A_FAIL;           /* synthesized block */
  boolean_T M_W21C_FAIL;               /* synthesized block */
  boolean_T M_W11B_21B_FAIL;           /* synthesized block */
  boolean_T M_W11A_21A_FAIL;           /* synthesized block */
  boolean_T M_CBTC_T3_F_PSD2;          /* synthesized block */
  boolean_T M_CBTC_T3_F_PSD1;          /* synthesized block */
  boolean_T M_FAIL_COMM2_F;            /* synthesized block */
  boolean_T M_CBTC_T3_F_ESB2;          /* synthesized block */
  boolean_T M_CBTC_T3_F_ESB1;          /* synthesized block */
  boolean_T M_CBTC_T3_F_ED4;           /* synthesized block */
  boolean_T M_CBTC_T3_F_ED3;           /* synthesized block */
  boolean_T M_CBTC_T3_F_ED2;           /* synthesized block */
  boolean_T M_CBTC_T3_F_ED1;           /* synthesized block */
  boolean_T M_CBTC_T2_F_PSD2;          /* synthesized block */
  boolean_T M_CBTC_T2_F_PSD1;          /* synthesized block */
  boolean_T M_CBTC_T2_F_ESB2;          /* synthesized block */
  boolean_T M_CBTC_T2_F_ESB1;          /* synthesized block */
  boolean_T M_FAIL_COMM1_F;            /* synthesized block */
  boolean_T M_CBTC_T2_F_ED4;           /* synthesized block */
  boolean_T M_CBTC_T2_F_ED3;           /* synthesized block */
  boolean_T M_CBTC_T2_F_ED2;           /* synthesized block */
  boolean_T M_CBTC_T2_F_ED1;           /* synthesized block */
  boolean_T M_CBTC_TIB_F_PSD2;         /* synthesized block */
  boolean_T M_CBTC_TIB_F_PSD1;         /* synthesized block */
  boolean_T M_CBTC_TIB_F_ESB2;         /* synthesized block */
  boolean_T M_CBTC_TIB_F_ESB1;         /* synthesized block */
  boolean_T M_CBTC_TIB_F_ED4;          /* synthesized block */
  boolean_T M_CBTC_TIB_F_ED3;          /* synthesized block */
  boolean_T M_FAIL_SYSTEM2_F;          /* synthesized block */
  boolean_T M_CBTC_TIB_F_ED2;          /* synthesized block */
  boolean_T M_CBTC_TIB_F_ED1;          /* synthesized block */
  boolean_T M_CBTC_T1_F_PSD2;          /* synthesized block */
  boolean_T M_CBTC_T1_F_PSD1;          /* synthesized block */
  boolean_T M_CBTC_T1_F_ESB2;          /* synthesized block */
  boolean_T M_CBTC_T1_F_ESB1;          /* synthesized block */
  boolean_T M_CBTC_T1_F_ED4;           /* synthesized block */
  boolean_T M_CBTC_T1_F_ED3;           /* synthesized block */
  boolean_T M_CBTC_T1_F_ED2;           /* synthesized block */
  boolean_T M_CBTC_T1_F_ED1;           /* synthesized block */
  boolean_T M_FAIL_SYSTEM1_F;          /* synthesized block */
  boolean_T DO_INDG_BUZZ;              /* synthesized block */
  boolean_T M_B_20_22;                 /* synthesized block */
  boolean_T M_B_20_12;                 /* synthesized block */
  boolean_T M_B_20_DEP;                /* synthesized block */
  boolean_T M_B_10_22;                 /* synthesized block */
  boolean_T M_B_10_12;                 /* synthesized block */
  boolean_T M_B_10_DEP;                /* synthesized block */
  boolean_T M_B_24_22;                 /* synthesized block */
  boolean_T M_B_24_12;                 /* synthesized block */
  boolean_T M_B_22_24;                 /* synthesized block */
  boolean_T M_B_22_14;                 /* synthesized block */
  boolean_T M_B_22_20;                 /* synthesized block */
  boolean_T M_B_22_10;                 /* synthesized block */
  boolean_T M_B_14_22;                 /* synthesized block */
  boolean_T M_B_14_12;                 /* synthesized block */
  boolean_T M_B_12_24;                 /* synthesized block */
  boolean_T M_W13B_23B_TPZ;            /* synthesized block */
  boolean_T M_W13A_23A_TPZ;            /* synthesized block */
  boolean_T M_B_12_14;                 /* synthesized block */
  boolean_T M_B_12_20;                 /* synthesized block */
  boolean_T M_B_12_10;                 /* synthesized block */
  boolean_T M_B_DEP_20;                /* synthesized block */
  boolean_T M_W21C_TPZ;                /* synthesized block */
  boolean_T M_W11B_21B_TPZ;            /* synthesized block */
  boolean_T M_W11A_21A_TPZ;            /* synthesized block */
  boolean_T M_B_DEP_10;                /* synthesized block */
  boolean_T M_W21C_CTRL_TRAIL;         /* synthesized block */
  boolean_T M_W21C_RW_TE;              /* synthesized block */
  boolean_T M_W21C_CTRL_RST;           /* synthesized block */
  boolean_T M_W21C_R_BLOCK;            /* synthesized block */
  boolean_T M_W21C_R;                  /* synthesized block */
  boolean_T M_W21C_OOC_RD;             /* synthesized block */
  boolean_T M_W21C_NW_TE;              /* synthesized block */
  boolean_T M_W21C_N_BLOCK;            /* synthesized block */
  boolean_T M_W21C_N;                  /* synthesized block */
  boolean_T M_W21C_CTRL_CAL;           /* synthesized block */
  boolean_T M_W21C_BACK_TO_R;          /* synthesized block */
  boolean_T M_W21C_BACK_TO_N;          /* synthesized block */
  boolean_T M_W21C_CTRL_B;             /* synthesized block */
  boolean_T M_W13B_23B_CTRL_TRAIL;     /* synthesized block */
  boolean_T M_W13B_23B_RW_TE;          /* synthesized block */
  boolean_T M_W13B_23B_CTRL_RST;       /* synthesized block */
  boolean_T M_W13B_23B_R_REQ;          /* synthesized block */
  boolean_T M_W13B_23B_R_BLOCK;        /* synthesized block */
  boolean_T M_W13B_23B_R;              /* synthesized block */
  boolean_T M_W13B_23B_OOC_RD;         /* synthesized block */
  boolean_T M_W13B_23B_NW_TE;          /* synthesized block */
  boolean_T M_W13B_23B_N_REQ;          /* synthesized block */
  boolean_T M_W13B_23B_N_BLOCK;        /* synthesized block */
  boolean_T M_W13B_23B_N;              /* synthesized block */
  boolean_T M_W13B_23B_CTRL_CAL;       /* synthesized block */
  boolean_T M_W13B_23B_BACK_TO_R;      /* synthesized block */
  boolean_T M_W13B_23B_BACK_TO_N;      /* synthesized block */
  boolean_T M_W13B_23B_CTRL_B;         /* synthesized block */
  boolean_T M_W21C_R_REQ;              /* synthesized block */
  boolean_T M_W21C_N_REQ;              /* synthesized block */
  boolean_T M_W13A_23A_CTRL_TRAIL;     /* synthesized block */
  boolean_T M_W13A_23A_RW_TE;          /* synthesized block */
  boolean_T M_W13A_23A_CTRL_RST;       /* synthesized block */
  boolean_T M_W13A_23A_R_REQ;          /* synthesized block */
  boolean_T M_W13A_23A_R_BLOCK;        /* synthesized block */
  boolean_T M_W13A_23A_R;              /* synthesized block */
  boolean_T M_W13A_23A_OOC_RD;         /* synthesized block */
  boolean_T M_W13A_23A_NW_TE;          /* synthesized block */
  boolean_T M_W13A_23A_N_REQ;          /* synthesized block */
  boolean_T M_W13A_23A_N_BLOCK;        /* synthesized block */
  boolean_T M_W13A_23A_N;              /* synthesized block */
  boolean_T M_W13A_23A_CTRL_CAL;       /* synthesized block */
  boolean_T M_W13A_23A_BACK_TO_R;      /* synthesized block */
  boolean_T M_W13A_23A_BACK_TO_N;      /* synthesized block */
  boolean_T M_W13A_23A_CTRL_B;         /* synthesized block */
  boolean_T M_W11B_21B_CTRL_TRAIL;     /* synthesized block */
  boolean_T M_W11B_21B_RW_TE;          /* synthesized block */
  boolean_T M_W11B_21B_CTRL_RST;       /* synthesized block */
  boolean_T M_W11B_21B_R_REQ;          /* synthesized block */
  boolean_T M_W11B_21B_R_BLOCK;        /* synthesized block */
  boolean_T M_W11B_21B_R;              /* synthesized block */
  boolean_T M_W11B_21B_OOC_RD;         /* synthesized block */
  boolean_T M_W11B_21B_NW_TE;          /* synthesized block */
  boolean_T M_W11B_21B_N_REQ;          /* synthesized block */
  boolean_T M_W11B_21B_N_BLOCK;        /* synthesized block */
  boolean_T M_W11B_21B_N;              /* synthesized block */
  boolean_T M_W11B_21B_CTRL_CAL;       /* synthesized block */
  boolean_T M_W11B_21B_BACK_TO_R;      /* synthesized block */
  boolean_T M_W11B_21B_BACK_TO_N;      /* synthesized block */
  boolean_T M_W11B_21B_CTRL_B;         /* synthesized block */
  boolean_T M_W21C_START;              /* synthesized block */
  boolean_T M_W13B_23B_START;          /* synthesized block */
  boolean_T M_W13A_23A_START;          /* synthesized block */
  boolean_T M_W11B_21B_START;          /* synthesized block */
  boolean_T M_W11A_21A_CTRL_TRAIL;     /* synthesized block */
  boolean_T M_W11A_21A_START;          /* synthesized block */
  boolean_T M_W11A_21A_RW_TE;          /* synthesized block */
  boolean_T M_W11A_21A_CTRL_RST;       /* synthesized block */
  boolean_T M_W11A_21A_R_REQ;          /* synthesized block */
  boolean_T M_W11A_21A_R_BLOCK;        /* synthesized block */
  boolean_T M_W11A_21A_R;              /* synthesized block */
  boolean_T M_W11A_21A_OOC_RD;         /* synthesized block */
  boolean_T M_W11A_21A_NW_TE;          /* synthesized block */
  boolean_T M_W11A_21A_N_REQ;          /* synthesized block */
  boolean_T M_W11A_21A_N_BLOCK;        /* synthesized block */
  boolean_T M_W11A_21A_N;              /* synthesized block */
  boolean_T M_W11A_21A_CTRL_CAL;       /* synthesized block */
  boolean_T M_W11A_21A_BACK_TO_R;      /* synthesized block */
  boolean_T M_W11A_21A_BACK_TO_N;      /* synthesized block */
  boolean_T M_W11A_21A_CTRL_B;         /* synthesized block */
  boolean_T DO_FLE_FROM_DEP;           /* synthesized block */
  boolean_T DO_FE_FROM_DEP;            /* synthesized block */
  boolean_T DO_FLE_TO_DEP;             /* synthesized block */
  boolean_T DO_FE_TO_DEP;              /* synthesized block */
  boolean_T M_TP_24B;                  /* synthesized block */
  boolean_T DO_INDT_TE_24B;            /* synthesized block */
  boolean_T M_T_ES_24B;                /* synthesized block */
  boolean_T DO_INDT_RE_24B;            /* synthesized block */
  boolean_T DO_INDT_TE_24A;            /* synthesized block */
  boolean_T M_T_WS_24A;                /* synthesized block */
  boolean_T M_T_ES_24A;                /* synthesized block */
  boolean_T DO_INDT_RE_24A;            /* synthesized block */
  boolean_T DO_INDT_TE_23B;            /* synthesized block */
  boolean_T DO_INDT_TE_23A;            /* synthesized block */
  boolean_T M_TP_22E;                  /* synthesized block */
  boolean_T DO_INDT_TE_22E;            /* synthesized block */
  boolean_T M_T_WS_22E;                /* synthesized block */
  boolean_T M_T_ES_22E;                /* synthesized block */
  boolean_T DO_INDT_RE_22E;            /* synthesized block */
  boolean_T M_TP_22D;                  /* synthesized block */
  boolean_T DO_INDT_TE_22D;            /* synthesized block */
  boolean_T M_T_WS_22D;                /* synthesized block */
  boolean_T M_T_ES_22D;                /* synthesized block */
  boolean_T DO_INDT_RE_22D;            /* synthesized block */
  boolean_T M_TP_22C;                  /* synthesized block */
  boolean_T DO_INDT_TE_22C;            /* synthesized block */
  boolean_T M_T_WS_22C;                /* synthesized block */
  boolean_T M_T_ES_22C;                /* synthesized block */
  boolean_T DO_INDT_RE_22C;            /* synthesized block */
  boolean_T M_TP_22B;                  /* synthesized block */
  boolean_T DO_INDT_TE_22B;            /* synthesized block */
  boolean_T M_T_WS_22B;                /* synthesized block */
  boolean_T M_T_ES_22B;                /* synthesized block */
  boolean_T DO_INDT_RE_22B;            /* synthesized block */
  boolean_T M_TP_22A;                  /* synthesized block */
  boolean_T DO_INDT_TE_22A;            /* synthesized block */
  boolean_T M_T_WS_22A;                /* synthesized block */
  boolean_T M_T_ES_22A;                /* synthesized block */
  boolean_T DO_INDT_RE_22A;            /* synthesized block */
  boolean_T DO_INDT_TE_21C;            /* synthesized block */
  boolean_T DO_INDT_TE_21B;            /* synthesized block */
  boolean_T DO_INDT_TE_21A;            /* synthesized block */
  boolean_T DO_INDT_TE_20B;            /* synthesized block */
  boolean_T M_T_WS_20B;                /* synthesized block */
  boolean_T M_T_ES_20B;                /* synthesized block */
  boolean_T M_S_WS_20B;                /* synthesized block */
  boolean_T M_S_ES_20B;                /* synthesized block */
  boolean_T DO_INDT_RE_20B;            /* synthesized block */
  boolean_T M_TP_20A;                  /* synthesized block */
  boolean_T DO_INDT_TE_20A;            /* synthesized block */
  boolean_T M_T_WS_20A;                /* synthesized block */
  boolean_T M_S_WS_20A;                /* synthesized block */
  boolean_T DO_INDT_RE_20A;            /* synthesized block */
  boolean_T M_TP_14B;                  /* synthesized block */
  boolean_T DO_INDT_TE_14B;            /* synthesized block */
  boolean_T M_T_ES_14B;                /* synthesized block */
  boolean_T DO_INDT_RE_14B;            /* synthesized block */
  boolean_T DO_INDT_TE_14A;            /* synthesized block */
  boolean_T M_T_WS_14A;                /* synthesized block */
  boolean_T M_T_ES_14A;                /* synthesized block */
  boolean_T DO_INDT_RE_14A;            /* synthesized block */
  boolean_T DO_INDT_TE_13B;            /* synthesized block */
  boolean_T DO_INDT_TE_13A;            /* synthesized block */
  boolean_T M_TP_12E;                  /* synthesized block */
  boolean_T DO_INDT_TE_12E;            /* synthesized block */
  boolean_T M_T_WS_12E;                /* synthesized block */
  boolean_T M_T_ES_12E;                /* synthesized block */
  boolean_T DO_INDT_RE_12E;            /* synthesized block */
  boolean_T M_TP_12D;                  /* synthesized block */
  boolean_T DO_INDT_TE_12D;            /* synthesized block */
  boolean_T M_T_WS_12D;                /* synthesized block */
  boolean_T M_T_ES_12D;                /* synthesized block */
  boolean_T DO_INDT_RE_12D;            /* synthesized block */
  boolean_T M_TP_12C;                  /* synthesized block */
  boolean_T DO_INDT_TE_12C;            /* synthesized block */
  boolean_T M_T_WS_12C;                /* synthesized block */
  boolean_T M_T_ES_12C;                /* synthesized block */
  boolean_T DO_INDT_RE_12C;            /* synthesized block */
  boolean_T M_TP_12B;                  /* synthesized block */
  boolean_T DO_INDT_TE_12B;            /* synthesized block */
  boolean_T M_T_WS_12B;                /* synthesized block */
  boolean_T M_T_ES_12B;                /* synthesized block */
  boolean_T DO_INDT_RE_12B;            /* synthesized block */
  boolean_T M_TP_12A;                  /* synthesized block */
  boolean_T DO_INDT_TE_12A;            /* synthesized block */
  boolean_T M_T_WS_12A;                /* synthesized block */
  boolean_T M_T_ES_12A;                /* synthesized block */
  boolean_T DO_INDT_RE_12A;            /* synthesized block */
  boolean_T DO_INDT_TE_11B;            /* synthesized block */
  boolean_T DO_INDT_TE_11A;            /* synthesized block */
  boolean_T DO_INDT_TE_10B;            /* synthesized block */
  boolean_T M_T_WS_10B;                /* synthesized block */
  boolean_T M_T_ES_10B;                /* synthesized block */
  boolean_T M_S_WS_10B;                /* synthesized block */
  boolean_T M_S_ES_10B;                /* synthesized block */
  boolean_T DO_INDT_RE_10B;            /* synthesized block */
  boolean_T M_TP_10A;                  /* synthesized block */
  boolean_T DO_INDT_TE_10A;            /* synthesized block */
  boolean_T M_T_WS_10A;                /* synthesized block */
  boolean_T M_S_WS_10A;                /* synthesized block */
  boolean_T DO_INDT_RE_10A;            /* synthesized block */
  boolean_T DO_INDJ_20_WGE;            /* synthesized block */
  boolean_T DO_INDJ_20_RGE;            /* synthesized block */
  boolean_T DO_INDJ_20_CGE;            /* synthesized block */
  boolean_T DO_INDJ_10_WGE;            /* synthesized block */
  boolean_T DO_INDJ_10_RGE;            /* synthesized block */
  boolean_T DO_INDJ_10_CGE;            /* synthesized block */
  boolean_T DO_INDJ_24_RGE;            /* synthesized block */
  boolean_T DO_INDJ_24_CGE;            /* synthesized block */
  boolean_T DO_INDJ_22B_RGE;           /* synthesized block */
  boolean_T DO_INDJ_22B_CGE;           /* synthesized block */
  boolean_T DO_INDJ_22A_RGE;           /* synthesized block */
  boolean_T DO_INDJ_22A_CGE;           /* synthesized block */
  boolean_T DO_INDJ_14_RGE;            /* synthesized block */
  boolean_T DO_INDJ_14_CGE;            /* synthesized block */
  boolean_T DO_INDJ_12B_RGE;           /* synthesized block */
  boolean_T DO_INDJ_12B_CGE;           /* synthesized block */
  boolean_T DO_INDJ_12A_RGE;           /* synthesized block */
  boolean_T DO_INDJ_12A_CGE;           /* synthesized block */
  boolean_T DO_INDSW_W23B_RWTE;        /* synthesized block */
  boolean_T DO_INDSW_W23B_RWRE;        /* synthesized block */
  boolean_T DO_INDSW_W23B_RWBE;        /* synthesized block */
  boolean_T DO_INDSW_W23B_RTE;         /* synthesized block */
  boolean_T DO_INDSW_W23B_RRE;         /* synthesized block */
  boolean_T DO_INDSW_W23B_RBE;         /* synthesized block */
  boolean_T DO_INDSW_W23B_NWTE;        /* synthesized block */
  boolean_T DO_INDSW_W23B_NWRE;        /* synthesized block */
  boolean_T DO_INDSW_W23B_NWBE;        /* synthesized block */
  boolean_T DO_INDSW_W23B_NTE;         /* synthesized block */
  boolean_T DO_INDSW_W23B_NRE;         /* synthesized block */
  boolean_T DO_INDSW_W23B_NBE;         /* synthesized block */
  boolean_T DO_INDSW_W23B_LE;          /* synthesized block */
  boolean_T DO_INDSW_W23B_BE;          /* synthesized block */
  boolean_T DO_INDSW_W23B_RWE;         /* synthesized block */
  boolean_T DO_INDT_RE_23B;            /* synthesized block */
  boolean_T DO_INDSW_W23B_NWE;         /* synthesized block */
  boolean_T DO_INDT_BE_23B;            /* synthesized block */
  boolean_T M_TP_23B;                  /* synthesized block */
  boolean_T M_T_WS_23B;                /* synthesized block */
  boolean_T M_T_ES_23B;                /* synthesized block */
  boolean_T DO_INDSW_W23A_RWTE;        /* synthesized block */
  boolean_T DO_INDSW_W23A_RWRE;        /* synthesized block */
  boolean_T DO_INDSW_W23A_RWBE;        /* synthesized block */
  boolean_T DO_INDSW_W23A_RTE;         /* synthesized block */
  boolean_T DO_INDSW_W23A_RRE;         /* synthesized block */
  boolean_T DO_INDSW_W23A_RBE;         /* synthesized block */
  boolean_T DO_INDSW_W23A_NWTE;        /* synthesized block */
  boolean_T DO_INDSW_W23A_NWRE;        /* synthesized block */
  boolean_T DO_INDSW_W23A_NWBE;        /* synthesized block */
  boolean_T DO_INDSW_W23A_NTE;         /* synthesized block */
  boolean_T DO_INDSW_W23A_NRE;         /* synthesized block */
  boolean_T DO_INDSW_W23A_NBE;         /* synthesized block */
  boolean_T DO_INDSW_W23A_LE;          /* synthesized block */
  boolean_T DO_INDSW_W23A_BE;          /* synthesized block */
  boolean_T DO_INDSW_W23A_RWE;         /* synthesized block */
  boolean_T DO_INDT_RE_23A;            /* synthesized block */
  boolean_T DO_INDSW_W23A_NWE;         /* synthesized block */
  boolean_T DO_INDT_BE_23A;            /* synthesized block */
  boolean_T M_T_WS_23A;                /* synthesized block */
  boolean_T M_T_ES_23A;                /* synthesized block */
  boolean_T M_W21C_SWRLS;              /* synthesized block */
  boolean_T M_W21C_SWINIT;             /* synthesized block */
  boolean_T M_W21C_RWZ;                /* synthesized block */
  boolean_T DO_INDSW_W21C_RWTE;        /* synthesized block */
  boolean_T DO_INDSW_W21C_RWRE;        /* synthesized block */
  boolean_T M_W21C_RWP;                /* synthesized block */
  boolean_T M_W21C_RWC;                /* synthesized block */
  boolean_T DO_INDSW_W21C_RWBE;        /* synthesized block */
  boolean_T DO_INDSW_W21C_RTE;         /* synthesized block */
  boolean_T DO_INDSW_W21C_RRE;         /* synthesized block */
  boolean_T DO_INDSW_W21C_RBE;         /* synthesized block */
  boolean_T M_W21C_OOC;                /* synthesized block */
  boolean_T M_W21C_NWZ;                /* synthesized block */
  boolean_T DO_INDSW_W21C_NWTE;        /* synthesized block */
  boolean_T DO_INDSW_W21C_NWRE;        /* synthesized block */
  boolean_T M_W21C_NWP;                /* synthesized block */
  boolean_T M_W21C_NWC;                /* synthesized block */
  boolean_T DO_INDSW_W21C_NWBE;        /* synthesized block */
  boolean_T DO_INDSW_W21C_NTE;         /* synthesized block */
  boolean_T DO_INDSW_W21C_NRE;         /* synthesized block */
  boolean_T DO_INDSW_W21C_NBE;         /* synthesized block */
  boolean_T M_W21C_LS;                 /* synthesized block */
  boolean_T DO_INDSW_W21C_LE;          /* synthesized block */
  boolean_T M_W21C_L;                  /* synthesized block */
  boolean_T M_W21C_BLOCK;              /* synthesized block */
  boolean_T DO_INDSW_W21C_BE;          /* synthesized block */
  boolean_T DO_INDSW_W21C_RWE;         /* synthesized block */
  boolean_T DO_INDT_RE_21C;            /* synthesized block */
  boolean_T DO_INDSW_W21C_NWE;         /* synthesized block */
  boolean_T DO_INDT_BE_21C;            /* synthesized block */
  boolean_T M_T_WS_21C;                /* synthesized block */
  boolean_T M_T_ES_21C;                /* synthesized block */
  boolean_T M_S_WS_21C;                /* synthesized block */
  boolean_T M_S_ES_21C;                /* synthesized block */
  boolean_T DO_INDSW_W21B_RWTE;        /* synthesized block */
  boolean_T DO_INDSW_W21B_RWRE;        /* synthesized block */
  boolean_T DO_INDSW_W21B_RWBE;        /* synthesized block */
  boolean_T DO_INDSW_W21B_RTE;         /* synthesized block */
  boolean_T DO_INDSW_W21B_RRE;         /* synthesized block */
  boolean_T DO_INDSW_W21B_RBE;         /* synthesized block */
  boolean_T DO_INDSW_W21B_NWTE;        /* synthesized block */
  boolean_T DO_INDSW_W21B_NWRE;        /* synthesized block */
  boolean_T DO_INDSW_W21B_NWBE;        /* synthesized block */
  boolean_T DO_INDSW_W21B_NTE;         /* synthesized block */
  boolean_T DO_INDSW_W21B_NRE;         /* synthesized block */
  boolean_T DO_INDSW_W21B_NBE;         /* synthesized block */
  boolean_T DO_INDSW_W21B_LE;          /* synthesized block */
  boolean_T DO_INDSW_W21B_BE;          /* synthesized block */
  boolean_T DO_INDSW_W21B_RWE;         /* synthesized block */
  boolean_T DO_INDT_RE_21B;            /* synthesized block */
  boolean_T DO_INDSW_W21B_NWE;         /* synthesized block */
  boolean_T DO_INDT_BE_21B;            /* synthesized block */
  boolean_T M_TP_21B;                  /* synthesized block */
  boolean_T M_T_WS_21B;                /* synthesized block */
  boolean_T M_T_ES_21B;                /* synthesized block */
  boolean_T M_S_WS_21B;                /* synthesized block */
  boolean_T M_S_ES_21B;                /* synthesized block */
  boolean_T DO_INDSW_W21A_RWTE;        /* synthesized block */
  boolean_T DO_INDSW_W21A_RWRE;        /* synthesized block */
  boolean_T DO_INDSW_W21A_RWBE;        /* synthesized block */
  boolean_T DO_INDSW_W21A_RTE;         /* synthesized block */
  boolean_T DO_INDSW_W21A_RRE;         /* synthesized block */
  boolean_T DO_INDSW_W21A_RBE;         /* synthesized block */
  boolean_T DO_INDSW_W21A_NWTE;        /* synthesized block */
  boolean_T DO_INDSW_W21A_NWRE;        /* synthesized block */
  boolean_T DO_INDSW_W21A_NWBE;        /* synthesized block */
  boolean_T DO_INDSW_W21A_NTE;         /* synthesized block */
  boolean_T DO_INDSW_W21A_NRE;         /* synthesized block */
  boolean_T DO_INDSW_W21A_NBE;         /* synthesized block */
  boolean_T DO_INDSW_W21A_LE;          /* synthesized block */
  boolean_T DO_INDSW_W21A_BE;          /* synthesized block */
  boolean_T DO_INDSW_W21A_RWE;         /* synthesized block */
  boolean_T DO_INDT_RE_21A;            /* synthesized block */
  boolean_T DO_INDSW_W21A_NWE;         /* synthesized block */
  boolean_T DO_INDT_BE_21A;            /* synthesized block */
  boolean_T M_TP_21A;                  /* synthesized block */
  boolean_T M_T_WS_21A;                /* synthesized block */
  boolean_T M_T_ES_21A;                /* synthesized block */
  boolean_T M_S_WS_21A;                /* synthesized block */
  boolean_T M_S_ES_21A;                /* synthesized block */
  boolean_T M_W13B_23B_SWRLS;          /* synthesized block */
  boolean_T M_W13B_23B_SWINIT;         /* synthesized block */
  boolean_T M_W13B_23B_RWZ;            /* synthesized block */
  boolean_T M_W13B_23B_RWP;            /* synthesized block */
  boolean_T M_W13B_23B_RWC;            /* synthesized block */
  boolean_T M_W13B_23B_OOC;            /* synthesized block */
  boolean_T M_W13B_23B_NWZ;            /* synthesized block */
  boolean_T M_W13B_23B_NWP;            /* synthesized block */
  boolean_T M_W13B_23B_NWC;            /* synthesized block */
  boolean_T M_W13B_23B_LS;             /* synthesized block */
  boolean_T M_W13B_23B_L;              /* synthesized block */
  boolean_T M_W13B_23B_BLOCK;          /* synthesized block */
  boolean_T DO_INDSW_W13B_RWTE;        /* synthesized block */
  boolean_T DO_INDSW_W13B_RWRE;        /* synthesized block */
  boolean_T DO_INDSW_W13B_RWBE;        /* synthesized block */
  boolean_T DO_INDSW_W13B_RTE;         /* synthesized block */
  boolean_T DO_INDSW_W13B_RRE;         /* synthesized block */
  boolean_T DO_INDSW_W13B_RBE;         /* synthesized block */
  boolean_T DO_INDSW_W13B_NWTE;        /* synthesized block */
  boolean_T DO_INDSW_W13B_NWRE;        /* synthesized block */
  boolean_T DO_INDSW_W13B_NWBE;        /* synthesized block */
  boolean_T DO_INDSW_W13B_NTE;         /* synthesized block */
  boolean_T DO_INDSW_W13B_NRE;         /* synthesized block */
  boolean_T DO_INDSW_W13B_NBE;         /* synthesized block */
  boolean_T DO_INDSW_W13B_LE;          /* synthesized block */
  boolean_T DO_INDSW_W13B_BE;          /* synthesized block */
  boolean_T DO_INDSW_W13B_RWE;         /* synthesized block */
  boolean_T DO_INDT_RE_13B;            /* synthesized block */
  boolean_T DO_INDSW_W13B_NWE;         /* synthesized block */
  boolean_T DO_INDT_BE_13B;            /* synthesized block */
  boolean_T M_TP_13B;                  /* synthesized block */
  boolean_T M_T_WS_13B;                /* synthesized block */
  boolean_T M_T_ES_13B;                /* synthesized block */
  boolean_T M_W13A_23A_SWRLS;          /* synthesized block */
  boolean_T M_W13A_23A_SWINIT;         /* synthesized block */
  boolean_T M_W13A_23A_RWZ;            /* synthesized block */
  boolean_T M_W13A_23A_RWP;            /* synthesized block */
  boolean_T M_W13A_23A_RWC;            /* synthesized block */
  boolean_T M_W13A_23A_OOC;            /* synthesized block */
  boolean_T M_W13A_23A_NWZ;            /* synthesized block */
  boolean_T M_W13A_23A_NWP;            /* synthesized block */
  boolean_T M_W13A_23A_NWC;            /* synthesized block */
  boolean_T M_W13A_23A_LS;             /* synthesized block */
  boolean_T M_W13A_23A_L;              /* synthesized block */
  boolean_T M_W13A_23A_BLOCK;          /* synthesized block */
  boolean_T DO_INDSW_W13A_RWTE;        /* synthesized block */
  boolean_T DO_INDSW_W13A_RWRE;        /* synthesized block */
  boolean_T DO_INDSW_W13A_RWBE;        /* synthesized block */
  boolean_T DO_INDSW_W13A_RTE;         /* synthesized block */
  boolean_T DO_INDSW_W13A_RRE;         /* synthesized block */
  boolean_T DO_INDSW_W13A_RBE;         /* synthesized block */
  boolean_T DO_INDSW_W13A_NWTE;        /* synthesized block */
  boolean_T DO_INDSW_W13A_NWRE;        /* synthesized block */
  boolean_T DO_INDSW_W13A_NWBE;        /* synthesized block */
  boolean_T DO_INDSW_W13A_NTE;         /* synthesized block */
  boolean_T DO_INDSW_W13A_NRE;         /* synthesized block */
  boolean_T DO_INDSW_W13A_NBE;         /* synthesized block */
  boolean_T DO_INDSW_W13A_LE;          /* synthesized block */
  boolean_T DO_INDSW_W13A_BE;          /* synthesized block */
  boolean_T DO_INDSW_W13A_RWE;         /* synthesized block */
  boolean_T DO_INDT_RE_13A;            /* synthesized block */
  boolean_T DO_INDSW_W13A_NWE;         /* synthesized block */
  boolean_T DO_INDT_BE_13A;            /* synthesized block */
  boolean_T M_T_WS_13A;                /* synthesized block */
  boolean_T M_T_ES_13A;                /* synthesized block */
  boolean_T M_W11B_21B_SWRLS;          /* synthesized block */
  boolean_T M_W11B_21B_SWINIT;         /* synthesized block */
  boolean_T M_W11B_21B_RWZ;            /* synthesized block */
  boolean_T M_W11B_21B_RWP;            /* synthesized block */
  boolean_T M_W11B_21B_RWC;            /* synthesized block */
  boolean_T M_W11B_21B_OOC;            /* synthesized block */
  boolean_T M_W11B_21B_NWZ;            /* synthesized block */
  boolean_T M_W11B_21B_NWP;            /* synthesized block */
  boolean_T M_W11B_21B_NWC;            /* synthesized block */
  boolean_T M_W11B_21B_LS;             /* synthesized block */
  boolean_T M_W11B_21B_L;              /* synthesized block */
  boolean_T M_W11B_21B_BLOCK;          /* synthesized block */
  boolean_T DO_INDSW_W11B_RWTE;        /* synthesized block */
  boolean_T DO_INDSW_W11B_RWRE;        /* synthesized block */
  boolean_T DO_INDSW_W11B_RWBE;        /* synthesized block */
  boolean_T DO_INDSW_W11B_RTE;         /* synthesized block */
  boolean_T DO_INDSW_W11B_RRE;         /* synthesized block */
  boolean_T DO_INDSW_W11B_RBE;         /* synthesized block */
  boolean_T DO_INDSW_W11B_NWTE;        /* synthesized block */
  boolean_T DO_INDSW_W11B_NWRE;        /* synthesized block */
  boolean_T DO_INDSW_W11B_NWBE;        /* synthesized block */
  boolean_T DO_INDSW_W11B_NTE;         /* synthesized block */
  boolean_T DO_INDSW_W11B_NRE;         /* synthesized block */
  boolean_T DO_INDSW_W11B_NBE;         /* synthesized block */
  boolean_T DO_INDSW_W11B_LE;          /* synthesized block */
  boolean_T DO_INDSW_W11B_BE;          /* synthesized block */
  boolean_T DO_INDSW_W11B_RWE;         /* synthesized block */
  boolean_T DO_INDT_RE_11B;            /* synthesized block */
  boolean_T DO_INDSW_W11B_NWE;         /* synthesized block */
  boolean_T DO_INDT_BE_11B;            /* synthesized block */
  boolean_T M_T_WS_11B;                /* synthesized block */
  boolean_T M_T_ES_11B;                /* synthesized block */
  boolean_T M_S_WS_11B;                /* synthesized block */
  boolean_T M_S_ES_11B;                /* synthesized block */
  boolean_T M_W11A_21A_SWRLS;          /* synthesized block */
  boolean_T M_W11A_21A_SWINIT;         /* synthesized block */
  boolean_T M_W11A_21A_RWZ;            /* synthesized block */
  boolean_T M_W11A_21A_RWP;            /* synthesized block */
  boolean_T M_W11A_21A_RWC;            /* synthesized block */
  boolean_T M_W11A_21A_OOC;            /* synthesized block */
  boolean_T M_W11A_21A_NWZ;            /* synthesized block */
  boolean_T M_W11A_21A_NWP;            /* synthesized block */
  boolean_T M_W11A_21A_NWC;            /* synthesized block */
  boolean_T M_W11A_21A_LS;             /* synthesized block */
  boolean_T M_W11A_21A_L;              /* synthesized block */
  boolean_T M_W11A_21A_BLOCK;          /* synthesized block */
  boolean_T DO_INDSW_W11A_RWTE;        /* synthesized block */
  boolean_T DO_INDSW_W11A_RWRE;        /* synthesized block */
  boolean_T DO_INDSW_W11A_RWBE;        /* synthesized block */
  boolean_T DO_INDSW_W11A_RTE;         /* synthesized block */
  boolean_T DO_INDSW_W11A_RRE;         /* synthesized block */
  boolean_T DO_INDSW_W11A_RBE;         /* synthesized block */
  boolean_T DO_INDSW_W11A_NWTE;        /* synthesized block */
  boolean_T DO_INDSW_W11A_NWRE;        /* synthesized block */
  boolean_T DO_INDSW_W11A_NWBE;        /* synthesized block */
  boolean_T DO_INDSW_W11A_NTE;         /* synthesized block */
  boolean_T DO_INDSW_W11A_NRE;         /* synthesized block */
  boolean_T DO_INDSW_W11A_NBE;         /* synthesized block */
  boolean_T DO_INDSW_W11A_LE;          /* synthesized block */
  boolean_T DO_INDSW_W11A_BE;          /* synthesized block */
  boolean_T DO_INDSW_W11A_RWE;         /* synthesized block */
  boolean_T DO_INDT_RE_11A;            /* synthesized block */
  boolean_T DO_INDSW_W11A_NWE;         /* synthesized block */
  boolean_T DO_INDT_BE_11A;            /* synthesized block */
  boolean_T M_TP_11A;                  /* synthesized block */
  boolean_T M_T_WS_11A;                /* synthesized block */
  boolean_T M_T_ES_11A;                /* synthesized block */
  boolean_T M_S_WS_11A;                /* synthesized block */
  boolean_T M_S_ES_11A;                /* synthesized block */
  boolean_T M_RRLS_X24;                /* synthesized block */
  boolean_T DO_INDPB_X24;              /* synthesized block */
  boolean_T M_RRLS_X20;                /* synthesized block */
  boolean_T DO_INDPB_X20;              /* synthesized block */
  boolean_T M_RRLS_X14;                /* synthesized block */
  boolean_T DO_INDPB_X14;              /* synthesized block */
  boolean_T M_RRLS_X10;                /* synthesized block */
  boolean_T DO_INDPB_X10;              /* synthesized block */
  boolean_T DO_PBE_TO_DEP;             /* synthesized block */
  boolean_T M_RRLS_DEP;                /* synthesized block */
  boolean_T M_CTRL_RST_20;             /* synthesized block */
  boolean_T DO_INDPB_JL20;             /* synthesized block */
  boolean_T M_RD_JL20_GR;              /* synthesized block */
  boolean_T M_DO_JL20_GR;              /* synthesized block */
  boolean_T M_RD_JL20_DR;              /* synthesized block */
  boolean_T M_RS_20_DEP;               /* synthesized block */
  boolean_T M_CTRL_RST_10;             /* synthesized block */
  boolean_T DO_INDPB_JL10;             /* synthesized block */
  boolean_T M_RD_JL10_GR;              /* synthesized block */
  boolean_T M_DO_JL10_GR;              /* synthesized block */
  boolean_T M_RD_JL10_DR;              /* synthesized block */
  boolean_T M_RS_10_DEP;               /* synthesized block */
  boolean_T M_CTRL_RST_24;             /* synthesized block */
  boolean_T DO_INDPB_J24;              /* synthesized block */
  boolean_T M_RD_J24_DR;               /* synthesized block */
  boolean_T M_RS_20_22;                /* synthesized block */
  boolean_T M_RS_10_22;                /* synthesized block */
  boolean_T M_RS_22_24;                /* synthesized block */
  boolean_T M_RS_22_14;                /* synthesized block */
  boolean_T M_CTRL_RST_22B;            /* synthesized block */
  boolean_T M_RRLS_J22B;               /* synthesized block */
  boolean_T DO_INDPB_J22B;             /* synthesized block */
  boolean_T M_RD_J22B_DR;              /* synthesized block */
  boolean_T M_DO_J22B_DR;              /* synthesized block */
  boolean_T M_RS_24_22;                /* synthesized block */
  boolean_T M_RS_22_20;                /* synthesized block */
  boolean_T M_RS_22_10;                /* synthesized block */
  boolean_T M_CTRL_RST_22A;            /* synthesized block */
  boolean_T M_RRLS_J22A;               /* synthesized block */
  boolean_T DO_INDPB_J22A;             /* synthesized block */
  boolean_T M_RD_J22A_DR;              /* synthesized block */
  boolean_T M_DO_J22A_DR;              /* synthesized block */
  boolean_T M_CTRL_RST_14;             /* synthesized block */
  boolean_T DO_INDPB_J14;              /* synthesized block */
  boolean_T M_RS_14_22;                /* synthesized block */
  boolean_T M_RD_J14_DR;               /* synthesized block */
  boolean_T M_RS_20_12;                /* synthesized block */
  boolean_T M_DO_JL20_DR;              /* synthesized block */
  boolean_T M_RS_10_12;                /* synthesized block */
  boolean_T M_DO_JL10_DR;              /* synthesized block */
  boolean_T M_RS_12_24;                /* synthesized block */
  boolean_T M_RS_12_14;                /* synthesized block */
  boolean_T M_CTRL_RST_12B;            /* synthesized block */
  boolean_T M_RRLS_J12B;               /* synthesized block */
  boolean_T DO_INDPB_J12B;             /* synthesized block */
  boolean_T M_RD_J12B_DR;              /* synthesized block */
  boolean_T M_DO_J12B_DR;              /* synthesized block */
  boolean_T M_RS_24_12;                /* synthesized block */
  boolean_T M_DO_J24_DR;               /* synthesized block */
  boolean_T M_RS_14_12;                /* synthesized block */
  boolean_T M_DO_J14_DR;               /* synthesized block */
  boolean_T M_RS_12_20;                /* synthesized block */
  boolean_T M_RS_12_10;                /* synthesized block */
  boolean_T M_CTRL_RST_12A;            /* synthesized block */
  boolean_T M_RRLS_J12A;               /* synthesized block */
  boolean_T DO_INDPB_J12A;             /* synthesized block */
  boolean_T M_RD_J12A_DR;              /* synthesized block */
  boolean_T M_DO_J12A_DR;              /* synthesized block */
  boolean_T M_GV_FLASH_500;            /* synthesized block */
  boolean_T DO_PBE_FROM_DEP;           /* synthesized block */
  boolean_T M_GV_FLASH_1000;           /* synthesized block */
  boolean_T M_CTRL_RST_DEP;            /* synthesized block */
  boolean_T M_RD_DEP_GR;               /* synthesized block */
  boolean_T M_DO_DEP_GR;               /* synthesized block */
  boolean_T M_RS_DEP_10;               /* synthesized block */
  boolean_T M_RS_DEP_20;               /* synthesized block */
  boolean_T M_TPBP_24A;                /* synthesized block */
  boolean_T M_TP_24A;                  /* synthesized block */
  boolean_T M_TPBP_23A;                /* synthesized block */
  boolean_T M_TP_23A;                  /* synthesized block */
  boolean_T M_TPBP_21C;                /* synthesized block */
  boolean_T M_TP_21C;                  /* synthesized block */
  boolean_T M_TPBP_20B;                /* synthesized block */
  boolean_T M_TP_20B;                  /* synthesized block */
  boolean_T M_TPBP_14A;                /* synthesized block */
  boolean_T M_TP_14A;                  /* synthesized block */
  boolean_T M_TPBP_13A;                /* synthesized block */
  boolean_T M_TP_13A;                  /* synthesized block */
  boolean_T M_TPBP_11B;                /* synthesized block */
  boolean_T M_TP_11B;                  /* synthesized block */
  boolean_T M_TPBP_10B;                /* synthesized block */
  boolean_T M_TP_10B;                  /* synthesized block */
  boolean_T M_VDR;                     /* synthesized block */
  boolean_T DI_PBG_TPR_BANTU;          /* synthesized block */
  boolean_T M_GV_RR_OK;                /* synthesized block */
  boolean_T M_CTRL_RR;                 /* synthesized block */
  boolean_T M_GV_RR;                   /* synthesized block */
  boolean_T M_AS_T_JL20;               /* synthesized block */
  boolean_T M_AS_S_JL20;               /* synthesized block */
  boolean_T M_AS_T_JL10;               /* synthesized block */
  boolean_T M_AS_S_JL10;               /* synthesized block */
  boolean_T M_AS_T_J24;                /* synthesized block */
  boolean_T M_AS_T_J22B;               /* synthesized block */
  boolean_T M_AS_T_J22A;               /* synthesized block */
  boolean_T M_AS_T_J14;                /* synthesized block */
  boolean_T M_AS_T_J12B;               /* synthesized block */
  boolean_T M_AS_T_J12A;               /* synthesized block */
  boolean_T M_AS_S_DEP;                /* synthesized block */
  boolean_T M_GV_AS;                   /* synthesized block */
} DW_NONVITALMAIN_f_T;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_NONVITALMAIN_T {
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

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_NONVITALMAIN_T rtm;
} MdlrefDW_NONVITALMAIN_T;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

extern void NONVITALMAIN_Init(void);
extern void NONVITALMAIN_Start(void);
extern void NONVITALMAIN_Update(void);
extern void NONVITALMAIN(const boolean_T rtu_FROMDEP[6], const boolean_T
  *rtu_VDRFROM, const boolean_T *rtu_VNVCHKFROM, const boolean_T rtu_TPFROM[27],
  const boolean_T rtu_TESFROM[25], const boolean_T rtu_TWSFROM[25], const
  boolean_T rtu_SESFROM[7], const boolean_T rtu_SWSFROM[9], const boolean_T
  rtu_NWCFROM[5], const boolean_T rtu_NWPFROM[5], const boolean_T rtu_NWZFROM[5],
  const boolean_T rtu_NWTEFROM[5], const boolean_T rtu_RWCFROM[5], const
  boolean_T rtu_RWPFROM[5], const boolean_T rtu_RWZFROM[5], const boolean_T
  rtu_RWTEFROM[5], const boolean_T rtu_LFROM[5], const boolean_T rtu_LSFROM[5],
  const boolean_T rtu_SWRLSFROM[5], const boolean_T rtu_TPZFROM[5], const
  boolean_T rtu_DRDOFROM[8], const boolean_T rtu_GRDOFROM[2], const boolean_T
  rtu_TASFROM[8], const boolean_T rtu_SASFROM[3], const boolean_T rtu_RRLSFROM[8],
  const boolean_T rtu_HDSFROM[20], const boolean_T rtu_CBTCFROM[32], const
  boolean_T rtu_SYSTEMFROM[4], const boolean_T rtu_FROMATS[40], const boolean_T
  rtu_GLOBALPBDI[4], const boolean_T rtu_SWCTRLPBDI[5], const boolean_T
  *rtu_RCTRLPBDI, const boolean_T rtu_ROUTEPBDI[12], const boolean_T
  rtu_POINTPBDI[5], const boolean_T rtu_CBTCPBDI[34], boolean_T rty_TODEP[17],
  boolean_T *rty_NVVCHKTO, boolean_T *rty_RRTO, boolean_T rty_TREQTO[16],
  boolean_T rty_NREQTO[5], boolean_T rty_RREQTO[5], boolean_T rty_OOCTO[5],
  boolean_T rty_RRLSPBTO[8], boolean_T rty_SWRLSPBTO[5], boolean_T rty_SWINITTO
  [5], boolean_T rty_RSTTO[9], boolean_T rty_DEPVARTO[8], boolean_T rty_CBTCTO
  [31], boolean_T rty_GLOBALINDDO[7], boolean_T rty_SIGNALINDDO[18], boolean_T
  rty_POINTINDDO[144], boolean_T rty_TRACKINDDO[81], boolean_T rty_BUTTONINDDO
  [20], boolean_T rty_CBTCINDDO[42], boolean_T rty_TOARS[38]);

/* Model reference registration function */
extern void NONVITALMAIN_initialize(const char_T **rt_errorStatus, RTWSolverInfo
  *rt_solverInfo, const rtTimingBridge *timingBridge, int_T mdlref_TID0, int_T
  mdlref_TID1);

#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

extern void MNV_TON_Init(DW_MNV_TON_T *localDW);
extern void MNV_TON_Update(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M,
  boolean_T rtu_IN, DW_MNV_TON_T *localDW);
extern void MNV_TON(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M, boolean_T
                    rtu_IN, DW_MNV_TON_T *localDW, real_T rtp_TIME);
extern void MNV_TOF_Init(DW_MNV_TOF_T *localDW);
extern void MNV_TOF_Update(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M,
  boolean_T rtu_IN, DW_MNV_TOF_T *localDW);
extern void MNV_TOF(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M, boolean_T
                    rtu_IN, DW_MNV_TOF_T *localDW, real_T rtp_TIME);
extern void M_IND_POINT(boolean_T rtu_L, boolean_T rtu_SWRLS, boolean_T
  rtu_SWINIT, boolean_T rtu_BLOCK, boolean_T rtu_LS, boolean_T rtu_FLASH1S,
  boolean_T rtu_FLASH05S, boolean_T rtu_NWP, boolean_T rtu_RWP, boolean_T
  rtu_NWZ, boolean_T rtu_RWZ, boolean_T rtu_NWC, boolean_T rtu_RWC, boolean_T
  rtu_OOC, boolean_T rtu_TP, boolean_T rtu_ESWS, DW_M_IND_POINT_T *localDW);
extern void M_SIG_IND_2(boolean_T rtu_VDR, boolean_T rtu_DRGR, boolean_T
  rtu_FLASH, DW_M_SIG_IND_2_T *localDW);
extern void M_SIG_IND(boolean_T rtu_VDR, boolean_T rtu_DR, boolean_T rtu_GR,
                      boolean_T rtu_FLASH, DW_M_SIG_IND_T *localDW);
extern void M_IND_TRACK(boolean_T rtu_TP, boolean_T rtu_ESWS, DW_M_IND_TRACK_T
  *localDW);
extern void NONVITALMAIN_MNV_TON_Init(DW_MNV_TON_f_T *localDW);
extern void NONVITALMAIN_MNV_TON_Update(RT_MODEL_NONVITALMAIN_T * const
  NONVITALMAIN_M, boolean_T rtu_IN, DW_MNV_TON_f_T *localDW);
extern void NONVITALMAIN_MNV_TON(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M,
  boolean_T rtu_IN, DW_MNV_TON_f_T *localDW, real_T rtp_TIME);
extern void M_IL_POINT_Init(DW_M_IL_POINT_T *localDW);
extern void M_IL_POINT_Update(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M,
  DW_M_IL_POINT_T *localDW);
extern void M_IL_POINT(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M, boolean_T
  rtu_CALCTRL, boolean_T rtu_TRAILCTRL, boolean_T rtu_RSTCTRL, boolean_T
  rtu_BCTRL, boolean_T rtu_NWZ, boolean_T rtu_RWZ, boolean_T rtu_NWP, boolean_T
  rtu_RWP, boolean_T rtu_NWC, boolean_T rtu_RWC, boolean_T rtu_NWTE, boolean_T
  rtu_RWTE, boolean_T rtu_L, boolean_T rtu_OOC, boolean_T rtu_OOCRD, boolean_T
  rtu_RSN, boolean_T rtu_RSR, boolean_T rtu_START, DW_M_IL_POINT_T *localDW);
extern void M_WAR(boolean_T rtu_WAR, boolean_T rtu_THB, DW_M_WAR_T *localDW,
                  boolean_T *rtd_M_GV_FLASH_500);
extern void M_SW_PB(boolean_T rtu_WPB, boolean_T rtu_WTP, boolean_T rtu_TBW,
                    boolean_T rtu_TKGW, boolean_T rtu_TBKW, boolean_T rtu_TWT,
                    boolean_T rtu_TKW, DW_M_SW_PB_T *localDW, boolean_T
                    *rtd_M_NVCOMM_OK, boolean_T *rtd_M_VDR);
extern void M_R_PB(boolean_T rtu_COMMON, boolean_T rtu_PB1, boolean_T rtu_PB2,
                   DW_M_R_PB_T *localDW, boolean_T *rtd_M_NVCOMM_OK, boolean_T
                   *rtd_M_VDR);
extern void M_R_AUTO(boolean_T rtu_AUTO, boolean_T rtu_MANUAL, boolean_T
                     rtu_SIGNAL, DW_M_R_AUTO_T *localDW, boolean_T
                     *rtd_M_NVCOMM_OK, boolean_T *rtd_M_VDR);
extern void M_RRLS_X(boolean_T rtu_TPR, boolean_T rtu_PB, boolean_T rtu_AUTO,
                     boolean_T rtu_ESWS, boolean_T rtu_RS, DW_M_RRLS_X_T
                     *localDW, boolean_T *rtd_M_NVCOMM_OK, boolean_T *rtd_M_VDR);
extern void M_VSB(boolean_T rtu_WZ, boolean_T rtu_VSB, DW_M_VSB_T *localDW);
extern void M_POINT_FAIL_Init(DW_M_POINT_FAIL_T *localDW);
extern void M_POINT_FAIL_Update(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M,
  DW_M_POINT_FAIL_T *localDW);
extern void M_POINT_FAIL(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M,
  boolean_T rtu_AACTRL, boolean_T rtu_TRAILCTRL, boolean_T rtu_RSTCTRL,
  boolean_T rtu_LS, boolean_T rtu_BACKTON, boolean_T rtu_BACKTOR, boolean_T
  rtu_NWP, boolean_T rtu_RWP, boolean_T rtu_NWC, boolean_T rtu_RWC, boolean_T
  rtu_NWTE, boolean_T rtu_RWTE, boolean_T rtu_BLOCK, boolean_T rtu_NBLOCK,
  boolean_T rtu_RBLOCK, DW_M_POINT_FAIL_T *localDW);
extern void M_REQ(boolean_T rtu_AUTOOK, boolean_T rtu_RCTRL, boolean_T rtu_RARS,
                  boolean_T rtu_RSTCTRL, boolean_T rtu_RB, boolean_T rtu_TP,
                  boolean_T rtu_TPBP, boolean_T rtu_JB, DW_M_REQ_T *localDW);
extern void M_SIG_B_Init(DW_M_SIG_B_T *localDW);
extern void M_SIG_B_Update(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M,
  DW_M_SIG_B_T *localDW);
extern void M_SIG_B(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M, boolean_T
                    rtu_VDR, boolean_T rtu_RS, boolean_T rtu_DO, boolean_T
                    rtu_RD, boolean_T rtu_TP, DW_M_SIG_B_T *localDW);

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

extern MdlrefDW_NONVITALMAIN_T NONVITALMAIN_MdlrefDW;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

#ifndef NONVITALMAIN_MDLREF_HIDE_CHILD_

/* Block states (auto storage) */
extern DW_NONVITALMAIN_f_T NONVITALMAIN_DW;

#endif                                 /*NONVITALMAIN_MDLREF_HIDE_CHILD_*/

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
 * '<Root>' : 'NONVITALMAIN'
 * '<S1>'   : 'NONVITALMAIN/LOGIC'
 * '<S2>'   : 'NONVITALMAIN/MAPPING'
 * '<S3>'   : 'NONVITALMAIN/SYSTEM DATA'
 * '<S4>'   : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE'
 * '<S5>'   : 'NONVITALMAIN/LOGIC/INDIKASI PB'
 * '<S6>'   : 'NONVITALMAIN/LOGIC/INDIKASI POINT'
 * '<S7>'   : 'NONVITALMAIN/LOGIC/INDIKASI SIGNAL'
 * '<S8>'   : 'NONVITALMAIN/LOGIC/INDIKASI TRACK'
 * '<S9>'   : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT'
 * '<S10>'  : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE'
 * '<S11>'  : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING'
 * '<S12>'  : 'NONVITALMAIN/LOGIC/PB CONTROL'
 * '<S13>'  : 'NONVITALMAIN/LOGIC/POINT FAIL'
 * '<S14>'  : 'NONVITALMAIN/LOGIC/POINT FAIL1'
 * '<S15>'  : 'NONVITALMAIN/LOGIC/ROUTE REQUEST'
 * '<S16>'  : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK'
 * '<S17>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/AS'
 * '<S18>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/RR'
 * '<S19>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP'
 * '<S20>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON'
 * '<S21>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON1'
 * '<S22>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON2'
 * '<S23>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON3'
 * '<S24>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON4'
 * '<S25>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON5'
 * '<S26>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON6'
 * '<S27>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON7'
 * '<S28>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON/TON'
 * '<S29>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON/TON/Detect Decrease'
 * '<S30>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON/TON/Detect Increase'
 * '<S31>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON/TON/S//H'
 * '<S32>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON1/TON'
 * '<S33>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON1/TON/Detect Decrease'
 * '<S34>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON1/TON/Detect Increase'
 * '<S35>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON1/TON/S//H'
 * '<S36>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON2/TON'
 * '<S37>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON2/TON/Detect Decrease'
 * '<S38>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON2/TON/Detect Increase'
 * '<S39>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON2/TON/S//H'
 * '<S40>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON3/TON'
 * '<S41>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON3/TON/Detect Decrease'
 * '<S42>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON3/TON/Detect Increase'
 * '<S43>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON3/TON/S//H'
 * '<S44>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON4/TON'
 * '<S45>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON4/TON/Detect Decrease'
 * '<S46>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON4/TON/Detect Increase'
 * '<S47>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON4/TON/S//H'
 * '<S48>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON5/TON'
 * '<S49>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON5/TON/Detect Decrease'
 * '<S50>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON5/TON/Detect Increase'
 * '<S51>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON5/TON/S//H'
 * '<S52>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON6/TON'
 * '<S53>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON6/TON/Detect Decrease'
 * '<S54>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON6/TON/Detect Increase'
 * '<S55>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON6/TON/S//H'
 * '<S56>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON7/TON'
 * '<S57>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON7/TON/Detect Decrease'
 * '<S58>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON7/TON/Detect Increase'
 * '<S59>'  : 'NONVITALMAIN/LOGIC/GLOBAL VARIABLE/TPBP/TON7/TON/S//H'
 * '<S60>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/FROM DEPOT'
 * '<S61>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J12A'
 * '<S62>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J12B'
 * '<S63>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J14'
 * '<S64>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J22A'
 * '<S65>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J22B'
 * '<S66>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J24'
 * '<S67>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL10'
 * '<S68>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL20'
 * '<S69>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/TO DEPOT'
 * '<S70>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/X10'
 * '<S71>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/X14'
 * '<S72>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/X20'
 * '<S73>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/X24'
 * '<S74>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/FROM DEPOT/MNV_TOF2'
 * '<S75>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/FROM DEPOT/MNV_TOF2/TOF'
 * '<S76>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/FROM DEPOT/MNV_TOF2/TOF/Detect Decrease'
 * '<S77>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/FROM DEPOT/MNV_TOF2/TOF/Detect Increase'
 * '<S78>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/FROM DEPOT/MNV_TOF2/TOF/S//H'
 * '<S79>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J12A/MNV_TOF1'
 * '<S80>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J12A/MNV_TOF1/TOF'
 * '<S81>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J12A/MNV_TOF1/TOF/Detect Decrease'
 * '<S82>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J12A/MNV_TOF1/TOF/Detect Increase'
 * '<S83>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J12A/MNV_TOF1/TOF/S//H'
 * '<S84>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J12B/MNV_TOF1'
 * '<S85>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J12B/MNV_TOF1/TOF'
 * '<S86>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J12B/MNV_TOF1/TOF/Detect Decrease'
 * '<S87>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J12B/MNV_TOF1/TOF/Detect Increase'
 * '<S88>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J12B/MNV_TOF1/TOF/S//H'
 * '<S89>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J14/MNV_TOF1'
 * '<S90>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J14/MNV_TOF1/TOF'
 * '<S91>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J14/MNV_TOF1/TOF/Detect Decrease'
 * '<S92>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J14/MNV_TOF1/TOF/Detect Increase'
 * '<S93>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J14/MNV_TOF1/TOF/S//H'
 * '<S94>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J22A/MNV_TOF1'
 * '<S95>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J22A/MNV_TOF1/TOF'
 * '<S96>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J22A/MNV_TOF1/TOF/Detect Decrease'
 * '<S97>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J22A/MNV_TOF1/TOF/Detect Increase'
 * '<S98>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J22A/MNV_TOF1/TOF/S//H'
 * '<S99>'  : 'NONVITALMAIN/LOGIC/INDIKASI PB/J22B/MNV_TOF1'
 * '<S100>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/J22B/MNV_TOF1/TOF'
 * '<S101>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/J22B/MNV_TOF1/TOF/Detect Decrease'
 * '<S102>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/J22B/MNV_TOF1/TOF/Detect Increase'
 * '<S103>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/J22B/MNV_TOF1/TOF/S//H'
 * '<S104>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/J24/MNV_TOF1'
 * '<S105>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/J24/MNV_TOF1/TOF'
 * '<S106>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/J24/MNV_TOF1/TOF/Detect Decrease'
 * '<S107>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/J24/MNV_TOF1/TOF/Detect Increase'
 * '<S108>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/J24/MNV_TOF1/TOF/S//H'
 * '<S109>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL10/MNV_TOF1'
 * '<S110>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL10/MNV_TOF2'
 * '<S111>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL10/MNV_TOF1/TOF'
 * '<S112>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL10/MNV_TOF1/TOF/Detect Decrease'
 * '<S113>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL10/MNV_TOF1/TOF/Detect Increase'
 * '<S114>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL10/MNV_TOF1/TOF/S//H'
 * '<S115>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL10/MNV_TOF2/TOF'
 * '<S116>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL10/MNV_TOF2/TOF/Detect Decrease'
 * '<S117>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL10/MNV_TOF2/TOF/Detect Increase'
 * '<S118>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL10/MNV_TOF2/TOF/S//H'
 * '<S119>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL20/MNV_TOF1'
 * '<S120>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL20/MNV_TOF2'
 * '<S121>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL20/MNV_TOF1/TOF'
 * '<S122>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL20/MNV_TOF1/TOF/Detect Decrease'
 * '<S123>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL20/MNV_TOF1/TOF/Detect Increase'
 * '<S124>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL20/MNV_TOF1/TOF/S//H'
 * '<S125>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL20/MNV_TOF2/TOF'
 * '<S126>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL20/MNV_TOF2/TOF/Detect Decrease'
 * '<S127>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL20/MNV_TOF2/TOF/Detect Increase'
 * '<S128>' : 'NONVITALMAIN/LOGIC/INDIKASI PB/JL20/MNV_TOF2/TOF/S//H'
 * '<S129>' : 'NONVITALMAIN/LOGIC/INDIKASI POINT/W11A'
 * '<S130>' : 'NONVITALMAIN/LOGIC/INDIKASI POINT/W11B'
 * '<S131>' : 'NONVITALMAIN/LOGIC/INDIKASI POINT/W13A'
 * '<S132>' : 'NONVITALMAIN/LOGIC/INDIKASI POINT/W13B'
 * '<S133>' : 'NONVITALMAIN/LOGIC/INDIKASI POINT/W21A'
 * '<S134>' : 'NONVITALMAIN/LOGIC/INDIKASI POINT/W21B'
 * '<S135>' : 'NONVITALMAIN/LOGIC/INDIKASI POINT/W21C'
 * '<S136>' : 'NONVITALMAIN/LOGIC/INDIKASI POINT/W23A'
 * '<S137>' : 'NONVITALMAIN/LOGIC/INDIKASI POINT/W23B'
 * '<S138>' : 'NONVITALMAIN/LOGIC/INDIKASI POINT/W11A/INDIKASI POINT'
 * '<S139>' : 'NONVITALMAIN/LOGIC/INDIKASI POINT/W11B/INDIKASI POINT'
 * '<S140>' : 'NONVITALMAIN/LOGIC/INDIKASI POINT/W13A/INDIKASI POINT'
 * '<S141>' : 'NONVITALMAIN/LOGIC/INDIKASI POINT/W13B/INDIKASI POINT'
 * '<S142>' : 'NONVITALMAIN/LOGIC/INDIKASI POINT/W21A/INDIKASI POINT'
 * '<S143>' : 'NONVITALMAIN/LOGIC/INDIKASI POINT/W21B/INDIKASI POINT'
 * '<S144>' : 'NONVITALMAIN/LOGIC/INDIKASI POINT/W21C/INDIKASI POINT'
 * '<S145>' : 'NONVITALMAIN/LOGIC/INDIKASI POINT/W23A/INDIKASI POINT'
 * '<S146>' : 'NONVITALMAIN/LOGIC/INDIKASI POINT/W23B/INDIKASI POINT'
 * '<S147>' : 'NONVITALMAIN/LOGIC/INDIKASI SIGNAL/J12A'
 * '<S148>' : 'NONVITALMAIN/LOGIC/INDIKASI SIGNAL/J12B'
 * '<S149>' : 'NONVITALMAIN/LOGIC/INDIKASI SIGNAL/J14'
 * '<S150>' : 'NONVITALMAIN/LOGIC/INDIKASI SIGNAL/J22A'
 * '<S151>' : 'NONVITALMAIN/LOGIC/INDIKASI SIGNAL/J22B'
 * '<S152>' : 'NONVITALMAIN/LOGIC/INDIKASI SIGNAL/J24'
 * '<S153>' : 'NONVITALMAIN/LOGIC/INDIKASI SIGNAL/JL10'
 * '<S154>' : 'NONVITALMAIN/LOGIC/INDIKASI SIGNAL/JL20'
 * '<S155>' : 'NONVITALMAIN/LOGIC/INDIKASI SIGNAL/J12A/INDIKASI SIGNAL'
 * '<S156>' : 'NONVITALMAIN/LOGIC/INDIKASI SIGNAL/J12B/INDIKASI SIGNAL'
 * '<S157>' : 'NONVITALMAIN/LOGIC/INDIKASI SIGNAL/J14/INDIKASI SIGNAL'
 * '<S158>' : 'NONVITALMAIN/LOGIC/INDIKASI SIGNAL/J22A/INDIKASI SIGNAL'
 * '<S159>' : 'NONVITALMAIN/LOGIC/INDIKASI SIGNAL/J22B/INDIKASI SIGNAL'
 * '<S160>' : 'NONVITALMAIN/LOGIC/INDIKASI SIGNAL/J24/INDIKASI SIGNAL'
 * '<S161>' : 'NONVITALMAIN/LOGIC/INDIKASI SIGNAL/JL10/INDIKASI SIGNAL'
 * '<S162>' : 'NONVITALMAIN/LOGIC/INDIKASI SIGNAL/JL20/INDIKASI SIGNAL'
 * '<S163>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/10A'
 * '<S164>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/10B'
 * '<S165>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/11A'
 * '<S166>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/11B'
 * '<S167>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/12A'
 * '<S168>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/12B'
 * '<S169>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/12C'
 * '<S170>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/12D'
 * '<S171>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/12E'
 * '<S172>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/13A'
 * '<S173>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/13B'
 * '<S174>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/14A'
 * '<S175>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/14B'
 * '<S176>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/20A'
 * '<S177>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/20B'
 * '<S178>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/21A'
 * '<S179>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/21B'
 * '<S180>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/21C'
 * '<S181>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/22A'
 * '<S182>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/22B'
 * '<S183>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/22C'
 * '<S184>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/22D'
 * '<S185>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/22E'
 * '<S186>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/23A'
 * '<S187>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/23B'
 * '<S188>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/24A'
 * '<S189>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/24B'
 * '<S190>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/IN INDICATOR'
 * '<S191>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/OUT INDICATOR'
 * '<S192>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/10A/INDIKASI TRACK'
 * '<S193>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/10B/INDIKASI TRACK'
 * '<S194>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/11A/INDIKASI TRACK'
 * '<S195>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/11B/INDIKASI TRACK'
 * '<S196>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/12A/INDIKASI TRACK'
 * '<S197>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/12B/INDIKASI TRACK'
 * '<S198>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/12C/INDIKASI TRACK'
 * '<S199>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/12D/INDIKASI TRACK'
 * '<S200>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/12E/INDIKASI TRACK'
 * '<S201>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/13A/INDIKASI TRACK'
 * '<S202>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/13B/INDIKASI TRACK'
 * '<S203>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/14A/INDIKASI TRACK'
 * '<S204>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/14B/INDIKASI TRACK'
 * '<S205>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/20A/INDIKASI TRACK'
 * '<S206>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/20B/INDIKASI TRACK'
 * '<S207>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/21A/INDIKASI TRACK'
 * '<S208>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/21B/INDIKASI TRACK'
 * '<S209>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/21C/INDIKASI TRACK'
 * '<S210>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/22A/INDIKASI TRACK'
 * '<S211>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/22B/INDIKASI TRACK'
 * '<S212>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/22C/INDIKASI TRACK'
 * '<S213>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/22D/INDIKASI TRACK'
 * '<S214>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/22E/INDIKASI TRACK'
 * '<S215>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/23A/INDIKASI TRACK'
 * '<S216>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/23B/INDIKASI TRACK'
 * '<S217>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/24A/INDIKASI TRACK'
 * '<S218>' : 'NONVITALMAIN/LOGIC/INDIKASI TRACK/24B/INDIKASI TRACK'
 * '<S219>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11A//21A'
 * '<S220>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11B//21B'
 * '<S221>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13A//23A'
 * '<S222>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13B//23B'
 * '<S223>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W21C'
 * '<S224>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11A//21A/INTERLOCKING POINT'
 * '<S225>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11A//21A/INTERLOCKING POINT/Detect Increase'
 * '<S226>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11A//21A/INTERLOCKING POINT/MNV_TOF1'
 * '<S227>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11A//21A/INTERLOCKING POINT/MNV_TON1'
 * '<S228>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11A//21A/INTERLOCKING POINT/MNV_TOF1/TOF'
 * '<S229>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11A//21A/INTERLOCKING POINT/MNV_TOF1/TOF/Detect Decrease'
 * '<S230>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11A//21A/INTERLOCKING POINT/MNV_TOF1/TOF/Detect Increase'
 * '<S231>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11A//21A/INTERLOCKING POINT/MNV_TOF1/TOF/S//H'
 * '<S232>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11A//21A/INTERLOCKING POINT/MNV_TON1/TON'
 * '<S233>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11A//21A/INTERLOCKING POINT/MNV_TON1/TON/Detect Decrease'
 * '<S234>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11A//21A/INTERLOCKING POINT/MNV_TON1/TON/Detect Increase'
 * '<S235>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11A//21A/INTERLOCKING POINT/MNV_TON1/TON/S//H'
 * '<S236>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11B//21B/INTERLOCKING POINT'
 * '<S237>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11B//21B/INTERLOCKING POINT/Detect Increase'
 * '<S238>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11B//21B/INTERLOCKING POINT/MNV_TOF1'
 * '<S239>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11B//21B/INTERLOCKING POINT/MNV_TON1'
 * '<S240>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11B//21B/INTERLOCKING POINT/MNV_TOF1/TOF'
 * '<S241>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11B//21B/INTERLOCKING POINT/MNV_TOF1/TOF/Detect Decrease'
 * '<S242>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11B//21B/INTERLOCKING POINT/MNV_TOF1/TOF/Detect Increase'
 * '<S243>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11B//21B/INTERLOCKING POINT/MNV_TOF1/TOF/S//H'
 * '<S244>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11B//21B/INTERLOCKING POINT/MNV_TON1/TON'
 * '<S245>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11B//21B/INTERLOCKING POINT/MNV_TON1/TON/Detect Decrease'
 * '<S246>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11B//21B/INTERLOCKING POINT/MNV_TON1/TON/Detect Increase'
 * '<S247>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W11B//21B/INTERLOCKING POINT/MNV_TON1/TON/S//H'
 * '<S248>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13A//23A/INTERLOCKING POINT'
 * '<S249>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13A//23A/INTERLOCKING POINT/Detect Increase'
 * '<S250>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13A//23A/INTERLOCKING POINT/MNV_TOF1'
 * '<S251>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13A//23A/INTERLOCKING POINT/MNV_TON1'
 * '<S252>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13A//23A/INTERLOCKING POINT/MNV_TOF1/TOF'
 * '<S253>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13A//23A/INTERLOCKING POINT/MNV_TOF1/TOF/Detect Decrease'
 * '<S254>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13A//23A/INTERLOCKING POINT/MNV_TOF1/TOF/Detect Increase'
 * '<S255>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13A//23A/INTERLOCKING POINT/MNV_TOF1/TOF/S//H'
 * '<S256>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13A//23A/INTERLOCKING POINT/MNV_TON1/TON'
 * '<S257>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13A//23A/INTERLOCKING POINT/MNV_TON1/TON/Detect Decrease'
 * '<S258>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13A//23A/INTERLOCKING POINT/MNV_TON1/TON/Detect Increase'
 * '<S259>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13A//23A/INTERLOCKING POINT/MNV_TON1/TON/S//H'
 * '<S260>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13B//23B/INTERLOCKING POINT'
 * '<S261>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13B//23B/INTERLOCKING POINT/Detect Increase'
 * '<S262>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13B//23B/INTERLOCKING POINT/MNV_TOF1'
 * '<S263>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13B//23B/INTERLOCKING POINT/MNV_TON1'
 * '<S264>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13B//23B/INTERLOCKING POINT/MNV_TOF1/TOF'
 * '<S265>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13B//23B/INTERLOCKING POINT/MNV_TOF1/TOF/Detect Decrease'
 * '<S266>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13B//23B/INTERLOCKING POINT/MNV_TOF1/TOF/Detect Increase'
 * '<S267>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13B//23B/INTERLOCKING POINT/MNV_TOF1/TOF/S//H'
 * '<S268>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13B//23B/INTERLOCKING POINT/MNV_TON1/TON'
 * '<S269>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13B//23B/INTERLOCKING POINT/MNV_TON1/TON/Detect Decrease'
 * '<S270>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13B//23B/INTERLOCKING POINT/MNV_TON1/TON/Detect Increase'
 * '<S271>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W13B//23B/INTERLOCKING POINT/MNV_TON1/TON/S//H'
 * '<S272>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W21C/INTERLOCKING POINT'
 * '<S273>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W21C/INTERLOCKING POINT/Detect Increase'
 * '<S274>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W21C/INTERLOCKING POINT/MNV_TOF1'
 * '<S275>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W21C/INTERLOCKING POINT/MNV_TON1'
 * '<S276>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W21C/INTERLOCKING POINT/MNV_TOF1/TOF'
 * '<S277>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W21C/INTERLOCKING POINT/MNV_TOF1/TOF/Detect Decrease'
 * '<S278>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W21C/INTERLOCKING POINT/MNV_TOF1/TOF/Detect Increase'
 * '<S279>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W21C/INTERLOCKING POINT/MNV_TOF1/TOF/S//H'
 * '<S280>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W21C/INTERLOCKING POINT/MNV_TON1/TON'
 * '<S281>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W21C/INTERLOCKING POINT/MNV_TON1/TON/Detect Decrease'
 * '<S282>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W21C/INTERLOCKING POINT/MNV_TON1/TON/Detect Increase'
 * '<S283>' : 'NONVITALMAIN/LOGIC/INTERLOCKING POINT/W21C/INTERLOCKING POINT/MNV_TON1/TON/S//H'
 * '<S284>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/DEP-X10'
 * '<S285>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/DEP-X20'
 * '<S286>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/J12A-X10'
 * '<S287>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/J12A-X20'
 * '<S288>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/J12B-X14'
 * '<S289>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/J12B-X24'
 * '<S290>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/J14-J12A'
 * '<S291>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/J14-J22A'
 * '<S292>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/J22A-X10'
 * '<S293>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/J22A-X20'
 * '<S294>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/J22B-X14'
 * '<S295>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/J22B-X24'
 * '<S296>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/J24-J12A'
 * '<S297>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/J24-J22A'
 * '<S298>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/JL10-DEP'
 * '<S299>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/JL10-J12B'
 * '<S300>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/JL10-J22B'
 * '<S301>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/JL20-DEP'
 * '<S302>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/JL20-J12B'
 * '<S303>' : 'NONVITALMAIN/LOGIC/INTERLOCKING ROUTE/JL20-J22B'
 * '<S304>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/BUZZER'
 * '<S305>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED'
 * '<S306>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ESB'
 * '<S307>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL'
 * '<S308>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/PSD'
 * '<S309>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/PSD1'
 * '<S310>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED1-T1'
 * '<S311>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED1-T2'
 * '<S312>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED1-T3'
 * '<S313>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED1-TIB'
 * '<S314>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED2-T1'
 * '<S315>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED2-T2'
 * '<S316>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED2-T3'
 * '<S317>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED2-TIB'
 * '<S318>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED3-T1'
 * '<S319>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED3-T2'
 * '<S320>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED3-T3'
 * '<S321>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED3-TIB'
 * '<S322>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED4-T1'
 * '<S323>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED4-T2'
 * '<S324>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED4-T3'
 * '<S325>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED4-TIB'
 * '<S326>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED1-T1/WARNING ED'
 * '<S327>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED1-T2/WARNING ED'
 * '<S328>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED1-T3/WARNING ED'
 * '<S329>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED1-TIB/WARNING ED'
 * '<S330>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED2-T1/WARNING ED'
 * '<S331>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED2-T2/WARNING ED'
 * '<S332>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED2-T3/WARNING ED'
 * '<S333>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED2-TIB/WARNING ED'
 * '<S334>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED3-T1/WARNING ED'
 * '<S335>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED3-T2/WARNING ED'
 * '<S336>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED3-T3/WARNING ED'
 * '<S337>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED3-TIB/WARNING ED'
 * '<S338>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED4-T1/WARNING ED'
 * '<S339>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED4-T2/WARNING ED'
 * '<S340>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED4-T3/WARNING ED'
 * '<S341>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ED/ED4-TIB/WARNING ED'
 * '<S342>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ESB/ESB1-T1'
 * '<S343>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ESB/ESB1-T2'
 * '<S344>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ESB/ESB1-T3'
 * '<S345>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ESB/ESB1-TIB'
 * '<S346>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ESB/ESB2-T1'
 * '<S347>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ESB/ESB2-T2'
 * '<S348>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ESB/ESB2-T3'
 * '<S349>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ESB/ESB2-TIB'
 * '<S350>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ESB/ESB1-T1/WARNING ESB'
 * '<S351>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ESB/ESB1-T2/WARNING ESB'
 * '<S352>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ESB/ESB1-T3/WARNING ESB'
 * '<S353>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ESB/ESB1-TIB/WARNING ESB'
 * '<S354>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ESB/ESB2-T1/WARNING ESB'
 * '<S355>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ESB/ESB2-T2/WARNING ESB'
 * '<S356>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ESB/ESB2-T3/WARNING ESB'
 * '<S357>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/ESB/ESB2-TIB/WARNING ESB'
 * '<S358>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL/COMM-1-FAIL'
 * '<S359>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL/COMM-2-FAIL'
 * '<S360>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL/COMM-2-FAIL1'
 * '<S361>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL/SYSTEM-1-FAIL'
 * '<S362>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL/SYSTEM-2-FAIL'
 * '<S363>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL/COMM-1-FAIL/WARNING COMM 1 FAIL'
 * '<S364>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL/COMM-2-FAIL/WARNING COMM 2 FAIL'
 * '<S365>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL/SYSTEM-1-FAIL/WARNING SYSTEM 1 FAIL'
 * '<S366>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/FAIL/SYSTEM-2-FAIL/WARNING SYSTEM 2 FAIL'
 * '<S367>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/PSD/PSD1-T1'
 * '<S368>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/PSD/PSD1-T2'
 * '<S369>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/PSD/PSD1-T3'
 * '<S370>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/PSD/PSD1-TIB'
 * '<S371>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/PSD/PSD2-T1'
 * '<S372>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/PSD/PSD2-T2'
 * '<S373>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/PSD/PSD2-T3'
 * '<S374>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/PSD/PSD2-TIB'
 * '<S375>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/PSD/PSD1-T1/WARNING PSD'
 * '<S376>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/PSD/PSD1-T2/WARNING PSD'
 * '<S377>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/PSD/PSD1-T3/WARNING PSD'
 * '<S378>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/PSD/PSD1-TIB/WARNING PSD'
 * '<S379>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/PSD/PSD2-T1/WARNING PSD'
 * '<S380>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/PSD/PSD2-T2/WARNING PSD'
 * '<S381>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/PSD/PSD2-T3/WARNING PSD'
 * '<S382>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/PSD/PSD2-TIB/WARNING PSD'
 * '<S383>' : 'NONVITALMAIN/LOGIC/LAMPTEST & INDIKASI WARNING/PSD1/TPR-BANTU'
 * '<S384>' : 'NONVITALMAIN/LOGIC/PB CONTROL/GLOBAL'
 * '<S385>' : 'NONVITALMAIN/LOGIC/PB CONTROL/POINT'
 * '<S386>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE'
 * '<S387>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE MODE'
 * '<S388>' : 'NONVITALMAIN/LOGIC/PB CONTROL/RRLS'
 * '<S389>' : 'NONVITALMAIN/LOGIC/PB CONTROL/TPR'
 * '<S390>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE'
 * '<S391>' : 'NONVITALMAIN/LOGIC/PB CONTROL/POINT/W11A//21A'
 * '<S392>' : 'NONVITALMAIN/LOGIC/PB CONTROL/POINT/W11B//21B'
 * '<S393>' : 'NONVITALMAIN/LOGIC/PB CONTROL/POINT/W13A//23A'
 * '<S394>' : 'NONVITALMAIN/LOGIC/PB CONTROL/POINT/W13B//23B'
 * '<S395>' : 'NONVITALMAIN/LOGIC/PB CONTROL/POINT/W21C'
 * '<S396>' : 'NONVITALMAIN/LOGIC/PB CONTROL/POINT/W11A//21A/POINT PB CONTROL'
 * '<S397>' : 'NONVITALMAIN/LOGIC/PB CONTROL/POINT/W11A//21A/POINT PB CONTROL/Detect Increase'
 * '<S398>' : 'NONVITALMAIN/LOGIC/PB CONTROL/POINT/W11B//21B/POINT PB CONTROL'
 * '<S399>' : 'NONVITALMAIN/LOGIC/PB CONTROL/POINT/W11B//21B/POINT PB CONTROL/Detect Increase'
 * '<S400>' : 'NONVITALMAIN/LOGIC/PB CONTROL/POINT/W13A//23A/POINT PB CONTROL'
 * '<S401>' : 'NONVITALMAIN/LOGIC/PB CONTROL/POINT/W13A//23A/POINT PB CONTROL/Detect Increase'
 * '<S402>' : 'NONVITALMAIN/LOGIC/PB CONTROL/POINT/W13B//23B/POINT PB CONTROL'
 * '<S403>' : 'NONVITALMAIN/LOGIC/PB CONTROL/POINT/W13B//23B/POINT PB CONTROL/Detect Increase'
 * '<S404>' : 'NONVITALMAIN/LOGIC/PB CONTROL/POINT/W21C/POINT PB CONTROL'
 * '<S405>' : 'NONVITALMAIN/LOGIC/PB CONTROL/POINT/W21C/POINT PB CONTROL/Detect Increase'
 * '<S406>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/FROM 10'
 * '<S407>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/FROM 14'
 * '<S408>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/FROM 20'
 * '<S409>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/FROM 24'
 * '<S410>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/FROM DEP'
 * '<S411>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/TO 10'
 * '<S412>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/TO 14'
 * '<S413>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/TO 20'
 * '<S414>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/TO 24'
 * '<S415>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/TO DEP'
 * '<S416>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/FROM 10/ROUTE PB CONTROL'
 * '<S417>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/FROM 14/ROUTE PB CONTROL'
 * '<S418>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/FROM 20/ROUTE PB CONTROL'
 * '<S419>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/FROM 24/ROUTE PB CONTROL'
 * '<S420>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/FROM DEP/ROUTE PB CONTROL'
 * '<S421>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/TO 10/ROUTE PB CONTROL'
 * '<S422>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/TO 14/ROUTE PB CONTROL'
 * '<S423>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/TO 20/ROUTE PB CONTROL'
 * '<S424>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/TO 24/ROUTE PB CONTROL'
 * '<S425>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE/TO DEP/ROUTE PB CONTROL'
 * '<S426>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE MODE/J12A'
 * '<S427>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE MODE/J12B'
 * '<S428>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE MODE/J14'
 * '<S429>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE MODE/J22A'
 * '<S430>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE MODE/J22B'
 * '<S431>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE MODE/J24'
 * '<S432>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE MODE/JL10'
 * '<S433>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE MODE/JL20'
 * '<S434>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE MODE/J12A/RUTE OTOMATIS'
 * '<S435>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE MODE/J12B/RUTE OTOMATIS'
 * '<S436>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE MODE/J14/RUTE OTOMATIS'
 * '<S437>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE MODE/J22A/RUTE OTOMATIS'
 * '<S438>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE MODE/J22B/RUTE OTOMATIS'
 * '<S439>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE MODE/J24/RUTE OTOMATIS'
 * '<S440>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE MODE/JL10/RUTE OTOMATIS'
 * '<S441>' : 'NONVITALMAIN/LOGIC/PB CONTROL/ROUTE MODE/JL20/RUTE OTOMATIS'
 * '<S442>' : 'NONVITALMAIN/LOGIC/PB CONTROL/RRLS/DEP'
 * '<S443>' : 'NONVITALMAIN/LOGIC/PB CONTROL/RRLS/J12A'
 * '<S444>' : 'NONVITALMAIN/LOGIC/PB CONTROL/RRLS/J12B'
 * '<S445>' : 'NONVITALMAIN/LOGIC/PB CONTROL/RRLS/J22A'
 * '<S446>' : 'NONVITALMAIN/LOGIC/PB CONTROL/RRLS/J22B'
 * '<S447>' : 'NONVITALMAIN/LOGIC/PB CONTROL/RRLS/X10'
 * '<S448>' : 'NONVITALMAIN/LOGIC/PB CONTROL/RRLS/X14'
 * '<S449>' : 'NONVITALMAIN/LOGIC/PB CONTROL/RRLS/X20'
 * '<S450>' : 'NONVITALMAIN/LOGIC/PB CONTROL/RRLS/X24'
 * '<S451>' : 'NONVITALMAIN/LOGIC/PB CONTROL/RRLS/DEP/RRLS PB CONTROL'
 * '<S452>' : 'NONVITALMAIN/LOGIC/PB CONTROL/RRLS/J12A/RRLS PB CONTROL'
 * '<S453>' : 'NONVITALMAIN/LOGIC/PB CONTROL/RRLS/J12B/RRLS PB CONTROL'
 * '<S454>' : 'NONVITALMAIN/LOGIC/PB CONTROL/RRLS/J22A/RRLS PB CONTROL'
 * '<S455>' : 'NONVITALMAIN/LOGIC/PB CONTROL/RRLS/J22B/RRLS PB CONTROL'
 * '<S456>' : 'NONVITALMAIN/LOGIC/PB CONTROL/RRLS/X10/RRLS PB CONTROL'
 * '<S457>' : 'NONVITALMAIN/LOGIC/PB CONTROL/RRLS/X14/RRLS PB CONTROL'
 * '<S458>' : 'NONVITALMAIN/LOGIC/PB CONTROL/RRLS/X20/RRLS PB CONTROL'
 * '<S459>' : 'NONVITALMAIN/LOGIC/PB CONTROL/RRLS/X24/RRLS PB CONTROL'
 * '<S460>' : 'NONVITALMAIN/LOGIC/PB CONTROL/TPR/X1'
 * '<S461>' : 'NONVITALMAIN/LOGIC/PB CONTROL/TPR/X10'
 * '<S462>' : 'NONVITALMAIN/LOGIC/PB CONTROL/TPR/X2'
 * '<S463>' : 'NONVITALMAIN/LOGIC/PB CONTROL/TPR/X3'
 * '<S464>' : 'NONVITALMAIN/LOGIC/PB CONTROL/TPR/X4'
 * '<S465>' : 'NONVITALMAIN/LOGIC/PB CONTROL/TPR/X5'
 * '<S466>' : 'NONVITALMAIN/LOGIC/PB CONTROL/TPR/X6'
 * '<S467>' : 'NONVITALMAIN/LOGIC/PB CONTROL/TPR/X7'
 * '<S468>' : 'NONVITALMAIN/LOGIC/PB CONTROL/TPR/X8'
 * '<S469>' : 'NONVITALMAIN/LOGIC/PB CONTROL/TPR/X1/Subsystem'
 * '<S470>' : 'NONVITALMAIN/LOGIC/PB CONTROL/TPR/X10/Subsystem'
 * '<S471>' : 'NONVITALMAIN/LOGIC/PB CONTROL/TPR/X2/Subsystem'
 * '<S472>' : 'NONVITALMAIN/LOGIC/PB CONTROL/TPR/X3/Subsystem'
 * '<S473>' : 'NONVITALMAIN/LOGIC/PB CONTROL/TPR/X4/Subsystem'
 * '<S474>' : 'NONVITALMAIN/LOGIC/PB CONTROL/TPR/X5/Subsystem'
 * '<S475>' : 'NONVITALMAIN/LOGIC/PB CONTROL/TPR/X6/Subsystem'
 * '<S476>' : 'NONVITALMAIN/LOGIC/PB CONTROL/TPR/X7/Subsystem'
 * '<S477>' : 'NONVITALMAIN/LOGIC/PB CONTROL/TPR/X8/Subsystem'
 * '<S478>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB1'
 * '<S479>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB10'
 * '<S480>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB11'
 * '<S481>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB12'
 * '<S482>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB13'
 * '<S483>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB14'
 * '<S484>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB15'
 * '<S485>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB16'
 * '<S486>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB17'
 * '<S487>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB18'
 * '<S488>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB19'
 * '<S489>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB2'
 * '<S490>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB20'
 * '<S491>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB21'
 * '<S492>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB22'
 * '<S493>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB23'
 * '<S494>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB24'
 * '<S495>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB25'
 * '<S496>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB26'
 * '<S497>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB27'
 * '<S498>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB3'
 * '<S499>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB4'
 * '<S500>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB5'
 * '<S501>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB6'
 * '<S502>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB7'
 * '<S503>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB8'
 * '<S504>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB9'
 * '<S505>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB1/Detect Increase'
 * '<S506>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB10/Detect Increase'
 * '<S507>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB11/Detect Increase'
 * '<S508>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB12/Detect Increase'
 * '<S509>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB13/Detect Increase'
 * '<S510>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB14/Detect Increase'
 * '<S511>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB15/Detect Increase'
 * '<S512>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB16/Detect Increase'
 * '<S513>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB17/Detect Increase'
 * '<S514>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB18/Detect Increase'
 * '<S515>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB19/Detect Increase'
 * '<S516>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB2/Detect Increase'
 * '<S517>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB20/Detect Increase'
 * '<S518>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB21/Detect Increase'
 * '<S519>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB22/Detect Increase'
 * '<S520>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB23/Detect Increase'
 * '<S521>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB24/Detect Increase'
 * '<S522>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB25/Detect Increase'
 * '<S523>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB26/Detect Increase'
 * '<S524>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB27/Detect Increase'
 * '<S525>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB3/Detect Increase'
 * '<S526>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB4/Detect Increase'
 * '<S527>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB5/Detect Increase'
 * '<S528>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB6/Detect Increase'
 * '<S529>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB7/Detect Increase'
 * '<S530>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB8/Detect Increase'
 * '<S531>' : 'NONVITALMAIN/LOGIC/PB CONTROL/WORK ZONE/VSB9/Detect Increase'
 * '<S532>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W11A//21A'
 * '<S533>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W11B//21B'
 * '<S534>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W13A//23A'
 * '<S535>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W13B//23B'
 * '<S536>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W21C'
 * '<S537>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W11A//21A/POINT FAIL'
 * '<S538>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W11A//21A/POINT FAIL/MNV_TON1'
 * '<S539>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W11A//21A/POINT FAIL/MNV_TON1/TON'
 * '<S540>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W11A//21A/POINT FAIL/MNV_TON1/TON/Detect Decrease'
 * '<S541>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W11A//21A/POINT FAIL/MNV_TON1/TON/Detect Increase'
 * '<S542>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W11A//21A/POINT FAIL/MNV_TON1/TON/S//H'
 * '<S543>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W11B//21B/POINT FAIL'
 * '<S544>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W11B//21B/POINT FAIL/MNV_TON1'
 * '<S545>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W11B//21B/POINT FAIL/MNV_TON1/TON'
 * '<S546>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W11B//21B/POINT FAIL/MNV_TON1/TON/Detect Decrease'
 * '<S547>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W11B//21B/POINT FAIL/MNV_TON1/TON/Detect Increase'
 * '<S548>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W11B//21B/POINT FAIL/MNV_TON1/TON/S//H'
 * '<S549>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W13A//23A/POINT FAIL'
 * '<S550>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W13A//23A/POINT FAIL/MNV_TON1'
 * '<S551>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W13A//23A/POINT FAIL/MNV_TON1/TON'
 * '<S552>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W13A//23A/POINT FAIL/MNV_TON1/TON/Detect Decrease'
 * '<S553>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W13A//23A/POINT FAIL/MNV_TON1/TON/Detect Increase'
 * '<S554>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W13A//23A/POINT FAIL/MNV_TON1/TON/S//H'
 * '<S555>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W13B//23B/POINT FAIL'
 * '<S556>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W13B//23B/POINT FAIL/MNV_TON1'
 * '<S557>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W13B//23B/POINT FAIL/MNV_TON1/TON'
 * '<S558>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W13B//23B/POINT FAIL/MNV_TON1/TON/Detect Decrease'
 * '<S559>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W13B//23B/POINT FAIL/MNV_TON1/TON/Detect Increase'
 * '<S560>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W13B//23B/POINT FAIL/MNV_TON1/TON/S//H'
 * '<S561>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W21C/POINT FAIL'
 * '<S562>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W21C/POINT FAIL/MNV_TON1'
 * '<S563>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W21C/POINT FAIL/MNV_TON1/TON'
 * '<S564>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W21C/POINT FAIL/MNV_TON1/TON/Detect Decrease'
 * '<S565>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W21C/POINT FAIL/MNV_TON1/TON/Detect Increase'
 * '<S566>' : 'NONVITALMAIN/LOGIC/POINT FAIL/W21C/POINT FAIL/MNV_TON1/TON/S//H'
 * '<S567>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W11A//21A'
 * '<S568>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W11B//21B'
 * '<S569>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A'
 * '<S570>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W21C'
 * '<S571>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W11A//21A/MNV_TOF'
 * '<S572>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W11A//21A/MNV_TOF/TOF'
 * '<S573>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W11A//21A/MNV_TOF/TOF/Detect Decrease'
 * '<S574>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W11A//21A/MNV_TOF/TOF/Detect Increase'
 * '<S575>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W11A//21A/MNV_TOF/TOF/S//H'
 * '<S576>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W11B//21B/Detect Increase'
 * '<S577>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W11B//21B/MNV_TOF'
 * '<S578>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W11B//21B/MNV_TOF/TOF'
 * '<S579>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W11B//21B/MNV_TOF/TOF/Detect Decrease'
 * '<S580>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W11B//21B/MNV_TOF/TOF/Detect Increase'
 * '<S581>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W11B//21B/MNV_TOF/TOF/S//H'
 * '<S582>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change'
 * '<S583>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change1'
 * '<S584>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change10'
 * '<S585>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change11'
 * '<S586>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change12'
 * '<S587>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change13'
 * '<S588>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change14'
 * '<S589>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change15'
 * '<S590>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change16'
 * '<S591>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change17'
 * '<S592>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change18'
 * '<S593>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change19'
 * '<S594>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change2'
 * '<S595>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change20'
 * '<S596>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change21'
 * '<S597>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change23'
 * '<S598>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change24'
 * '<S599>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change25'
 * '<S600>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change26'
 * '<S601>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change27'
 * '<S602>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change3'
 * '<S603>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change4'
 * '<S604>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change5'
 * '<S605>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change6'
 * '<S606>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change7'
 * '<S607>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change8'
 * '<S608>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/Detect Change9'
 * '<S609>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/MNV_TOF'
 * '<S610>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/MNV_TOF/TOF'
 * '<S611>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/MNV_TOF/TOF/Detect Decrease'
 * '<S612>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/MNV_TOF/TOF/Detect Increase'
 * '<S613>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W13A//23A/MNV_TOF/TOF/S//H'
 * '<S614>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W21C/Detect Increase'
 * '<S615>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W21C/MNV_TOF'
 * '<S616>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W21C/MNV_TOF/TOF'
 * '<S617>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W21C/MNV_TOF/TOF/Detect Decrease'
 * '<S618>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W21C/MNV_TOF/TOF/Detect Increase'
 * '<S619>' : 'NONVITALMAIN/LOGIC/POINT FAIL1/W21C/MNV_TOF/TOF/S//H'
 * '<S620>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/DEP-X10'
 * '<S621>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/DEP-X20'
 * '<S622>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J12A-X10'
 * '<S623>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J12A-X20'
 * '<S624>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J12B-X14'
 * '<S625>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J12B-X24'
 * '<S626>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J14-J12A'
 * '<S627>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J14-J22A'
 * '<S628>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J22A-X10'
 * '<S629>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J22A-X20'
 * '<S630>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J22B-X14'
 * '<S631>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J22B-X24'
 * '<S632>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J24-J12A'
 * '<S633>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J24-J22A'
 * '<S634>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/JL10-DEP'
 * '<S635>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/JL10-J12B'
 * '<S636>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/JL10-J22B'
 * '<S637>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/JL20-DEP'
 * '<S638>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/JL20-J12B'
 * '<S639>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/JL20-J22B'
 * '<S640>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/DEP-X10/ROUTE REQUEST'
 * '<S641>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/DEP-X20/ROUTE REQUEST'
 * '<S642>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J12A-X10/ROUTE REQUEST'
 * '<S643>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J12A-X20/ROUTE REQUEST'
 * '<S644>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J12B-X14/ROUTE REQUEST'
 * '<S645>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J12B-X24/ROUTE REQUEST'
 * '<S646>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J14-J12A/ROUTE REQUEST'
 * '<S647>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J14-J22A/ROUTE REQUEST'
 * '<S648>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J22A-X10/ROUTE REQUEST'
 * '<S649>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J22A-X20/ROUTE REQUEST'
 * '<S650>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J22B-X14/ROUTE REQUEST'
 * '<S651>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J22B-X24/ROUTE REQUEST'
 * '<S652>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J24-J12A/ROUTE REQUEST'
 * '<S653>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/J24-J22A/ROUTE REQUEST'
 * '<S654>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/JL10-DEP/ROUTE REQUEST'
 * '<S655>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/JL10-J12B/ROUTE REQUEST'
 * '<S656>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/JL10-J22B/ROUTE REQUEST'
 * '<S657>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/JL20-DEP/ROUTE REQUEST'
 * '<S658>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/JL20-J12B/ROUTE REQUEST'
 * '<S659>' : 'NONVITALMAIN/LOGIC/ROUTE REQUEST/JL20-J22B/ROUTE REQUEST'
 * '<S660>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/DEP'
 * '<S661>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J12A'
 * '<S662>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J12B'
 * '<S663>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J14'
 * '<S664>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J22A'
 * '<S665>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J22B'
 * '<S666>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J24'
 * '<S667>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL10'
 * '<S668>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL20'
 * '<S669>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/DEP/SIGNAL BLOCK S'
 * '<S670>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/DEP/SIGNAL BLOCK S/MNV_TOF1'
 * '<S671>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/DEP/SIGNAL BLOCK S/MNV_TOF1/TOF'
 * '<S672>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/DEP/SIGNAL BLOCK S/MNV_TOF1/TOF/Detect Decrease'
 * '<S673>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/DEP/SIGNAL BLOCK S/MNV_TOF1/TOF/Detect Increase'
 * '<S674>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/DEP/SIGNAL BLOCK S/MNV_TOF1/TOF/S//H'
 * '<S675>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J12A/SIGNAL BLOCK T'
 * '<S676>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J12A/SIGNAL BLOCK T/MNV_TOF1'
 * '<S677>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J12A/SIGNAL BLOCK T/MNV_TOF1/TOF'
 * '<S678>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J12A/SIGNAL BLOCK T/MNV_TOF1/TOF/Detect Decrease'
 * '<S679>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J12A/SIGNAL BLOCK T/MNV_TOF1/TOF/Detect Increase'
 * '<S680>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J12A/SIGNAL BLOCK T/MNV_TOF1/TOF/S//H'
 * '<S681>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J12B/SIGNAL BLOCK T'
 * '<S682>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J12B/SIGNAL BLOCK T/MNV_TOF1'
 * '<S683>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J12B/SIGNAL BLOCK T/MNV_TOF1/TOF'
 * '<S684>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J12B/SIGNAL BLOCK T/MNV_TOF1/TOF/Detect Decrease'
 * '<S685>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J12B/SIGNAL BLOCK T/MNV_TOF1/TOF/Detect Increase'
 * '<S686>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J12B/SIGNAL BLOCK T/MNV_TOF1/TOF/S//H'
 * '<S687>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J14/SIGNAL BLOCK T'
 * '<S688>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J14/SIGNAL BLOCK T/MNV_TOF1'
 * '<S689>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J14/SIGNAL BLOCK T/MNV_TOF1/TOF'
 * '<S690>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J14/SIGNAL BLOCK T/MNV_TOF1/TOF/Detect Decrease'
 * '<S691>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J14/SIGNAL BLOCK T/MNV_TOF1/TOF/Detect Increase'
 * '<S692>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J14/SIGNAL BLOCK T/MNV_TOF1/TOF/S//H'
 * '<S693>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J22A/SIGNAL BLOCK T'
 * '<S694>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J22A/SIGNAL BLOCK T/MNV_TOF1'
 * '<S695>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J22A/SIGNAL BLOCK T/MNV_TOF1/TOF'
 * '<S696>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J22A/SIGNAL BLOCK T/MNV_TOF1/TOF/Detect Decrease'
 * '<S697>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J22A/SIGNAL BLOCK T/MNV_TOF1/TOF/Detect Increase'
 * '<S698>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J22A/SIGNAL BLOCK T/MNV_TOF1/TOF/S//H'
 * '<S699>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J22B/SIGNAL BLOCK T'
 * '<S700>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J22B/SIGNAL BLOCK T/MNV_TOF1'
 * '<S701>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J22B/SIGNAL BLOCK T/MNV_TOF1/TOF'
 * '<S702>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J22B/SIGNAL BLOCK T/MNV_TOF1/TOF/Detect Decrease'
 * '<S703>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J22B/SIGNAL BLOCK T/MNV_TOF1/TOF/Detect Increase'
 * '<S704>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J22B/SIGNAL BLOCK T/MNV_TOF1/TOF/S//H'
 * '<S705>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J24/SIGNAL BLOCK T'
 * '<S706>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J24/SIGNAL BLOCK T/MNV_TOF1'
 * '<S707>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J24/SIGNAL BLOCK T/MNV_TOF1/TOF'
 * '<S708>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J24/SIGNAL BLOCK T/MNV_TOF1/TOF/Detect Decrease'
 * '<S709>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J24/SIGNAL BLOCK T/MNV_TOF1/TOF/Detect Increase'
 * '<S710>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/J24/SIGNAL BLOCK T/MNV_TOF1/TOF/S//H'
 * '<S711>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL10/SIGNAL BLOCK S'
 * '<S712>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL10/SIGNAL BLOCK T'
 * '<S713>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL10/SIGNAL BLOCK S/MNV_TOF1'
 * '<S714>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL10/SIGNAL BLOCK S/MNV_TOF1/TOF'
 * '<S715>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL10/SIGNAL BLOCK S/MNV_TOF1/TOF/Detect Decrease'
 * '<S716>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL10/SIGNAL BLOCK S/MNV_TOF1/TOF/Detect Increase'
 * '<S717>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL10/SIGNAL BLOCK S/MNV_TOF1/TOF/S//H'
 * '<S718>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL10/SIGNAL BLOCK T/MNV_TOF1'
 * '<S719>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL10/SIGNAL BLOCK T/MNV_TOF1/TOF'
 * '<S720>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL10/SIGNAL BLOCK T/MNV_TOF1/TOF/Detect Decrease'
 * '<S721>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL10/SIGNAL BLOCK T/MNV_TOF1/TOF/Detect Increase'
 * '<S722>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL10/SIGNAL BLOCK T/MNV_TOF1/TOF/S//H'
 * '<S723>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL20/SIGNAL BLOCK S'
 * '<S724>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL20/SIGNAL BLOCK T'
 * '<S725>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL20/SIGNAL BLOCK S/MNV_TOF1'
 * '<S726>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL20/SIGNAL BLOCK S/MNV_TOF1/TOF'
 * '<S727>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL20/SIGNAL BLOCK S/MNV_TOF1/TOF/Detect Decrease'
 * '<S728>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL20/SIGNAL BLOCK S/MNV_TOF1/TOF/Detect Increase'
 * '<S729>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL20/SIGNAL BLOCK S/MNV_TOF1/TOF/S//H'
 * '<S730>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL20/SIGNAL BLOCK T/MNV_TOF1'
 * '<S731>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL20/SIGNAL BLOCK T/MNV_TOF1/TOF'
 * '<S732>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL20/SIGNAL BLOCK T/MNV_TOF1/TOF/Detect Decrease'
 * '<S733>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL20/SIGNAL BLOCK T/MNV_TOF1/TOF/Detect Increase'
 * '<S734>' : 'NONVITALMAIN/LOGIC/SIGNAL BLOCK/JL20/SIGNAL BLOCK T/MNV_TOF1/TOF/S//H'
 * '<S735>' : 'NONVITALMAIN/MAPPING/CBTCFROM'
 * '<S736>' : 'NONVITALMAIN/MAPPING/CBTCTO1'
 * '<S737>' : 'NONVITALMAIN/MAPPING/DEPTOMAIN'
 * '<S738>' : 'NONVITALMAIN/MAPPING/FROMATS'
 * '<S739>' : 'NONVITALMAIN/MAPPING/MAINDI'
 * '<S740>' : 'NONVITALMAIN/MAPPING/MAINDO'
 * '<S741>' : 'NONVITALMAIN/MAPPING/MAINNVTOMAINV'
 * '<S742>' : 'NONVITALMAIN/MAPPING/MAINTODEP'
 * '<S743>' : 'NONVITALMAIN/MAPPING/MAINVTOMAINNV'
 * '<S744>' : 'NONVITALMAIN/MAPPING/SYSTEMFROM'
 */

/*-
 * Requirements for '<Root>': NONVITALMAIN
 */
#endif                                 /* RTW_HEADER_NONVITALMAIN_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
