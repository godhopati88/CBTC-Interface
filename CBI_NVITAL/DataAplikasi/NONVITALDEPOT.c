/*
 * File: NONVITALDEPOT.c
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

#include "NONVITALDEPOT.h"
#include "NONVITALDEPOT_private.h"

int_T NONVITALDEPOT_GlobalTID[2];
const rtTimingBridge *NONVITALDEPOT_TimingBrdg;
MdlrefDW_NONVITALDEPOT_T NONVITALDEPOT_MdlrefDW;

/* Block states (auto storage) */
DW_NONVITALDEPOT_f_T NONVITALDEPOT_DW;

/*
 * System initialize for atomic system:
 *    '<S19>/DNV_TON'
 *    '<S19>/DNV_TON1'
 *    '<S19>/DNV_TON2'
 *    '<S258>/DNV_TON'
 *    '<S264>/DNV_TON'
 *    '<S270>/DNV_TON'
 *    '<S276>/DNV_TON'
 */
void DNV_TON_Init(DW_DNV_TON_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S20>/TON' */
  /* InitializeConditions for Memory: '<S26>/memory' */
  localDW->memory_PreviousInput = -1.0E+99;

  /* End of SystemInitialize for SubSystem: '<S20>/TON' */
}

/*
 * Outputs for atomic system:
 *    '<S19>/DNV_TON'
 *    '<S19>/DNV_TON1'
 *    '<S19>/DNV_TON2'
 *    '<S258>/DNV_TON'
 *    '<S264>/DNV_TON'
 *    '<S270>/DNV_TON'
 *    '<S276>/DNV_TON'
 */
void DNV_TON(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M, boolean_T rtu_IN,
             DW_DNV_TON_T *localDW, real_T rtp_TIME)
{
  real_T rtb_CLOCK;
  boolean_T LogicalOperator1;
  real_T memory;
  memory = localDW->memory;
  LogicalOperator1 = localDW->LogicalOperator1;

  /* Clock: '<S20>/CLOCK' */
  rtb_CLOCK = (*(NONVITALDEPOT_TimingBrdg->taskTime[NONVITALDEPOT_GlobalTID[0]]));

  /* Outputs for Atomic SubSystem: '<S20>/TON' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Logic: '<S23>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S24>/FixPt Relational Operator'
     *  RelationalOperator: '<S25>/FixPt Relational Operator'
     *  UnitDelay: '<S24>/Delay Input1'
     *  UnitDelay: '<S25>/Delay Input1'
     *
     * Block description for '<S24>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S25>/Delay Input1':
     *
     *  Store in Global RAM
     */
    LogicalOperator1 = (((int32_T)rtu_IN > (int32_T)
                         localDW->DelayInput1_DSTATE_c) || ((int32_T)rtu_IN <
      (int32_T)localDW->DelayInput1_DSTATE));

    /* Memory: '<S26>/memory' */
    memory = localDW->memory_PreviousInput;
  }

  /* Switch: '<S26>/Switch' */
  if (LogicalOperator1) {
    localDW->Switch = rtb_CLOCK;
  } else {
    localDW->Switch = memory;
  }

  /* End of Switch: '<S26>/Switch' */

  /* Logic: '<S23>/Logical Operator2' incorporates:
   *  Constant: '<S20>/TIME'
   *  RelationalOperator: '<S23>/Relational Operator'
   *  Sum: '<S23>/Sum'
   */
  localDW->LogicalOperator2 = ((rtb_CLOCK >= localDW->Switch + rtp_TIME) &&
    rtu_IN);

  /* End of Outputs for SubSystem: '<S20>/TON' */
  localDW->LogicalOperator1 = LogicalOperator1;
  localDW->memory = memory;
}

/*
 * Update for atomic system:
 *    '<S19>/DNV_TON'
 *    '<S19>/DNV_TON1'
 *    '<S19>/DNV_TON2'
 *    '<S258>/DNV_TON'
 *    '<S264>/DNV_TON'
 *    '<S270>/DNV_TON'
 *    '<S276>/DNV_TON'
 */
void DNV_TON_Update(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M, boolean_T
                    rtu_IN, DW_DNV_TON_T *localDW)
{
  /* Update for Atomic SubSystem: '<S20>/TON' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Update for UnitDelay: '<S24>/Delay Input1'
     *
     * Block description for '<S24>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE = rtu_IN;

    /* Update for UnitDelay: '<S25>/Delay Input1'
     *
     * Block description for '<S25>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE_c = rtu_IN;

    /* Update for Memory: '<S26>/memory' */
    localDW->memory_PreviousInput = localDW->Switch;
  }

  /* End of Update for SubSystem: '<S20>/TON' */
}

/*
 * System initialize for atomic system:
 *    '<S35>/DNV_TOF'
 *    '<S36>/DNV_TOF'
 *    '<S38>/DNV_TOF'
 *    '<S39>/DNV_TOF'
 *    '<S40>/DNV_TOF'
 *    '<S41>/DNV_TOF'
 *    '<S42>/DNV_TOF'
 *    '<S136>/DNV_TOF'
 *    '<S148>/DNV_TOF'
 *    '<S160>/DNV_TOF'
 *    ...
 */
void DNV_TOF_Init(DW_DNV_TOF_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S49>/TOF' */
  /* InitializeConditions for Memory: '<S53>/memory' */
  localDW->memory_PreviousInput = -1.0E+99;

  /* End of SystemInitialize for SubSystem: '<S49>/TOF' */
}

/*
 * Outputs for atomic system:
 *    '<S35>/DNV_TOF'
 *    '<S36>/DNV_TOF'
 *    '<S38>/DNV_TOF'
 *    '<S39>/DNV_TOF'
 *    '<S40>/DNV_TOF'
 *    '<S41>/DNV_TOF'
 *    '<S42>/DNV_TOF'
 *    '<S136>/DNV_TOF'
 *    '<S148>/DNV_TOF'
 *    '<S160>/DNV_TOF'
 *    ...
 */
void DNV_TOF(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M, boolean_T rtu_IN,
             DW_DNV_TOF_T *localDW, real_T rtp_TIME)
{
  real_T rtb_CLOCK;
  boolean_T LogicalOperator1;
  real_T memory;
  boolean_T LogicalOperator3;
  LogicalOperator3 = localDW->LogicalOperator3;
  memory = localDW->memory;
  LogicalOperator1 = localDW->LogicalOperator1;

  /* Clock: '<S49>/CLOCK' */
  rtb_CLOCK = (*(NONVITALDEPOT_TimingBrdg->taskTime[NONVITALDEPOT_GlobalTID[0]]));

  /* Outputs for Atomic SubSystem: '<S49>/TOF' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Logic: '<S50>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S51>/FixPt Relational Operator'
     *  RelationalOperator: '<S52>/FixPt Relational Operator'
     *  UnitDelay: '<S51>/Delay Input1'
     *  UnitDelay: '<S52>/Delay Input1'
     *
     * Block description for '<S51>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S52>/Delay Input1':
     *
     *  Store in Global RAM
     */
    LogicalOperator1 = (((int32_T)rtu_IN > (int32_T)
                         localDW->DelayInput1_DSTATE_o) || ((int32_T)rtu_IN <
      (int32_T)localDW->DelayInput1_DSTATE));

    /* Memory: '<S53>/memory' */
    memory = localDW->memory_PreviousInput;

    /* Logic: '<S50>/Logical Operator3' */
    LogicalOperator3 = !rtu_IN;
  }

  /* Switch: '<S53>/Switch' */
  if (LogicalOperator1) {
    localDW->Switch = rtb_CLOCK;
  } else {
    localDW->Switch = memory;
  }

  /* End of Switch: '<S53>/Switch' */

  /* Logic: '<S50>/Logical Operator4' incorporates:
   *  Constant: '<S49>/TIME'
   *  Logic: '<S50>/Logical Operator2'
   *  RelationalOperator: '<S50>/Relational Operator'
   *  Sum: '<S50>/Sum'
   */
  localDW->LogicalOperator4 = !((rtb_CLOCK >= localDW->Switch + rtp_TIME) &&
    LogicalOperator3);

  /* End of Outputs for SubSystem: '<S49>/TOF' */
  localDW->LogicalOperator1 = LogicalOperator1;
  localDW->memory = memory;
  localDW->LogicalOperator3 = LogicalOperator3;
}

/*
 * Update for atomic system:
 *    '<S35>/DNV_TOF'
 *    '<S36>/DNV_TOF'
 *    '<S38>/DNV_TOF'
 *    '<S39>/DNV_TOF'
 *    '<S40>/DNV_TOF'
 *    '<S41>/DNV_TOF'
 *    '<S42>/DNV_TOF'
 *    '<S136>/DNV_TOF'
 *    '<S148>/DNV_TOF'
 *    '<S160>/DNV_TOF'
 *    ...
 */
void DNV_TOF_Update(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M, boolean_T
                    rtu_IN, DW_DNV_TOF_T *localDW)
{
  /* Update for Atomic SubSystem: '<S49>/TOF' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Update for UnitDelay: '<S51>/Delay Input1'
     *
     * Block description for '<S51>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE = rtu_IN;

    /* Update for UnitDelay: '<S52>/Delay Input1'
     *
     * Block description for '<S52>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE_o = rtu_IN;

    /* Update for Memory: '<S53>/memory' */
    localDW->memory_PreviousInput = localDW->Switch;
  }

  /* End of Update for SubSystem: '<S49>/TOF' */
}

/*
 * Output and update for atomic system:
 *    '<S84>/D_IND_POINT'
 *    '<S85>/INTERLOCKING POINT'
 *    '<S86>/INTERLOCKING POINT'
 *    '<S87>/D_IND_POINT'
 *    '<S88>/INTERLOCKING LOCK'
 */
void D_IND_POINT(boolean_T rtu_L, boolean_T rtu_SWRLS, boolean_T rtu_SWINIT,
                 boolean_T rtu_BLOCK, boolean_T rtu_LS, boolean_T rtu_FLASH1S,
                 boolean_T rtu_FLASH05S, boolean_T rtu_NWP, boolean_T rtu_RWP,
                 boolean_T rtu_NWZ, boolean_T rtu_RWZ, boolean_T rtu_NWC,
                 boolean_T rtu_RWC, boolean_T rtu_OOC, boolean_T rtu_TP,
                 boolean_T rtu_ESWS, DW_D_IND_POINT_T *localDW)
{
  boolean_T rtb_NOT6;
  boolean_T rtb_NOT7_l;
  boolean_T rtb_NOT8_g;
  boolean_T rtb_NOT12;
  boolean_T rtb_NOT13;
  boolean_T rtb_NOT17;
  boolean_T rtb_NOT16_j;
  boolean_T rtb_AND11_k;

  /* Logic: '<S89>/AND5' incorporates:
   *  Logic: '<S89>/AND4'
   *  Logic: '<S89>/NOT1'
   *  Logic: '<S89>/NOT2'
   */
  localDW->AND5 = ((!rtu_L) && ((!rtu_SWRLS) || rtu_FLASH05S));

  /* Logic: '<S89>/NOT6' */
  rtb_NOT6 = !rtu_TP;

  /* Logic: '<S89>/NOT7' */
  rtb_NOT7_l = !rtu_NWP;

  /* Logic: '<S89>/NOT8' */
  rtb_NOT8_g = !rtu_RWP;

  /* Logic: '<S89>/NOT9' */
  rtb_NOT12 = !rtu_LS;

  /* Logic: '<S89>/NOT11' */
  rtb_NOT13 = !rtu_RWZ;

  /* Logic: '<S89>/NOT10' */
  rtb_NOT17 = !rtu_NWZ;

  /* Logic: '<S89>/OR28' incorporates:
   *  Logic: '<S89>/AND29'
   *  Logic: '<S89>/AND9'
   *  Logic: '<S89>/OR25'
   *  Logic: '<S89>/OR26'
   */
  rtb_NOT16_j = ((rtb_NOT7_l && rtb_NOT8_g && (rtb_NOT12 || rtb_NOT13)) ||
                 (rtu_NWP && (rtu_OOC || rtb_NOT17)));

  /* Logic: '<S89>/AND11' */
  rtb_AND11_k = (rtb_NOT6 && rtb_NOT16_j);

  /* Logic: '<S89>/OR10' incorporates:
   *  Logic: '<S89>/AND30'
   *  Logic: '<S89>/AND31'
   *  Logic: '<S89>/OR24'
   *  Logic: '<S89>/OR27'
   */
  rtb_NOT17 = (((rtb_NOT12 || rtb_NOT17) && rtb_NOT7_l && rtb_NOT8_g) ||
               (rtu_RWP && (rtu_OOC || rtb_NOT13)));

  /* Logic: '<S89>/AND13' */
  rtb_NOT6 = (rtb_NOT6 && rtb_NOT17);

  /* Logic: '<S89>/NOT13' */
  rtb_NOT13 = !rtu_OOC;

  /* Logic: '<S89>/NOT12' */
  rtb_NOT12 = !rtu_TP;

  /* Logic: '<S89>/AND18' */
  rtb_NOT8_g = (rtu_FLASH1S && rtb_NOT16_j);

  /* Logic: '<S89>/AND20' */
  rtb_NOT7_l = (rtu_FLASH1S && rtb_NOT17);

  /* Logic: '<S89>/NOT16' */
  rtb_NOT16_j = !rtu_TP;

  /* Logic: '<S89>/NOT17' */
  rtb_NOT17 = !rtu_ESWS;

  /* Logic: '<S89>/AND26' incorporates:
   *  Logic: '<S89>/OR1'
   */
  localDW->AND26 = (rtb_NOT16_j && (rtu_NWP || rtb_NOT17));

  /* Logic: '<S89>/AND27' */
  localDW->AND27 = (rtu_NWP && rtu_ESWS);

  /* Logic: '<S89>/AND28' */
  localDW->AND28 = (rtu_RWP && rtu_ESWS);

  /* Logic: '<S89>/AND34' incorporates:
   *  Logic: '<S89>/OR2'
   */
  localDW->AND34 = (rtb_NOT16_j && (rtu_RWP || rtb_NOT17));

  /* Logic: '<S89>/OR11' incorporates:
   *  Logic: '<S89>/AND14'
   */
  localDW->OR11 = (rtb_NOT8_g || (rtb_NOT13 && rtu_NWC));

  /* Logic: '<S89>/OR12' incorporates:
   *  Logic: '<S89>/AND15'
   *  Logic: '<S89>/AND19'
   */
  localDW->OR12 = ((rtu_FLASH1S && rtb_AND11_k) || (rtb_NOT12 && rtb_NOT13 &&
    rtu_NWC));

  /* Logic: '<S89>/OR13' incorporates:
   *  Logic: '<S89>/AND16'
   */
  localDW->OR13 = (rtb_NOT7_l || (rtb_NOT13 && rtu_RWC));

  /* Logic: '<S89>/OR14' incorporates:
   *  Logic: '<S89>/AND17'
   *  Logic: '<S89>/AND21'
   */
  localDW->OR14 = ((rtu_FLASH1S && rtb_NOT6) || (rtb_NOT12 && rtb_NOT13 &&
    rtu_RWC));

  /* Logic: '<S89>/OR9' incorporates:
   *  Logic: '<S89>/AND6'
   *  Logic: '<S89>/AND7'
   *  Logic: '<S89>/NOT4'
   */
  localDW->OR9 = ((rtu_BLOCK && rtu_SWINIT) || ((!rtu_SWINIT) && rtu_FLASH1S));
}

/*
 * Output and update for atomic system:
 *    '<S94>/INDIKASI SIGNAL'
 *    '<S95>/INDIKASI SIGNAL'
 *    '<S96>/INDIKASI SIGNAL'
 *    '<S97>/INDIKASI SIGNAL'
 *    '<S98>/INDIKASI SIGNAL'
 *    '<S99>/INDIKASI SIGNAL'
 *    '<S100>/INDIKASI SIGNAL'
 *    '<S101>/INDIKASI SIGNAL'
 */
void D_SIG_IND(boolean_T rtu_VDR, boolean_T rtu_DRGR, boolean_T rtu_FLASH,
               DW_D_SIG_IND_T *localDW)
{
  /* Logic: '<S102>/AND3' incorporates:
   *  Logic: '<S102>/AND1'
   *  Logic: '<S102>/AND2'
   *  Logic: '<S102>/NOT2'
   *  Logic: '<S102>/NOT4'
   */
  localDW->AND3 = ((rtu_VDR && (!rtu_DRGR)) || ((!rtu_VDR) && rtu_FLASH));

  /* Logic: '<S102>/AND6' */
  localDW->AND6 = (rtu_VDR && rtu_DRGR);
}

/*
 * Output and update for atomic system:
 *    '<S110>/INDIKASI TRACK'
 *    '<S111>/INDIKASI TRACK'
 *    '<S112>/INDIKASI TRACK'
 *    '<S113>/INDIKASI TRACK'
 *    '<S114>/INDIKASI TRACK'
 *    '<S115>/INDIKASI TRACK'
 *    '<S116>/INDIKASI TRACK'
 *    '<S117>/INDIKASI TRACK'
 *    '<S118>/INDIKASI TRACK'
 *    '<S119>/INDIKASI TRACK'
 */
void D_IND_TRACK(boolean_T rtu_TP, boolean_T rtu_ESWS, DW_D_IND_TRACK_T *localDW)
{
  /* Logic: '<S122>/NOT2' */
  localDW->NOT2 = !rtu_TP;

  /* Logic: '<S122>/NOT5' */
  localDW->NOT5 = !rtu_ESWS;
}

/*
 * System initialize for atomic system:
 *    '<S136>/DNV_TON'
 *    '<S148>/DNV_TON'
 *    '<S160>/DNV_TON'
 *    '<S172>/DNV_TON'
 */
void NONVITALDEPOT_DNV_TON_Init(DW_DNV_TON_n_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S138>/TON' */
  /* InitializeConditions for Memory: '<S147>/memory' */
  localDW->memory_PreviousInput = -1.0E+99;

  /* End of SystemInitialize for SubSystem: '<S138>/TON' */
}

/*
 * Outputs for atomic system:
 *    '<S136>/DNV_TON'
 *    '<S148>/DNV_TON'
 *    '<S160>/DNV_TON'
 *    '<S172>/DNV_TON'
 */
void NONVITALDEPOT_DNV_TON(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M,
  boolean_T rtu_IN, DW_DNV_TON_n_T *localDW, real_T rtp_TIME)
{
  real_T rtb_CLOCK;
  real_T memory;
  boolean_T Uk1;
  boolean_T Uk1_c;
  Uk1_c = localDW->Uk1_c;
  Uk1 = localDW->Uk1;
  memory = localDW->memory;

  /* Clock: '<S138>/CLOCK' */
  rtb_CLOCK = (*(NONVITALDEPOT_TimingBrdg->taskTime[NONVITALDEPOT_GlobalTID[0]]));

  /* Outputs for Atomic SubSystem: '<S138>/TON' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* UnitDelay: '<S145>/Delay Input1'
     *
     * Block description for '<S145>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Uk1 = localDW->DelayInput1_DSTATE;

    /* UnitDelay: '<S146>/Delay Input1'
     *
     * Block description for '<S146>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Uk1_c = localDW->DelayInput1_DSTATE_a;

    /* Memory: '<S147>/memory' */
    memory = localDW->memory_PreviousInput;
  }

  /* Switch: '<S147>/Switch' incorporates:
   *  Logic: '<S144>/Logical Operator1'
   *  RelationalOperator: '<S145>/FixPt Relational Operator'
   *  RelationalOperator: '<S146>/FixPt Relational Operator'
   */
  if (((int32_T)rtu_IN > (int32_T)Uk1_c) || ((int32_T)rtu_IN < (int32_T)Uk1)) {
    localDW->Switch = rtb_CLOCK;
  } else {
    localDW->Switch = memory;
  }

  /* End of Switch: '<S147>/Switch' */

  /* Logic: '<S144>/Logical Operator2' incorporates:
   *  Constant: '<S138>/TIME'
   *  RelationalOperator: '<S144>/Relational Operator'
   *  Sum: '<S144>/Sum'
   */
  localDW->LogicalOperator2 = ((rtb_CLOCK >= localDW->Switch + rtp_TIME) &&
    rtu_IN);

  /* End of Outputs for SubSystem: '<S138>/TON' */
  localDW->memory = memory;
  localDW->Uk1 = Uk1;
  localDW->Uk1_c = Uk1_c;
}

/*
 * Update for atomic system:
 *    '<S136>/DNV_TON'
 *    '<S148>/DNV_TON'
 *    '<S160>/DNV_TON'
 *    '<S172>/DNV_TON'
 */
void NONVITALDEPOT_DNV_TON_Update(RT_MODEL_NONVITALDEPOT_T * const
  NONVITALDEPOT_M, boolean_T rtu_IN, DW_DNV_TON_n_T *localDW)
{
  /* Update for Atomic SubSystem: '<S138>/TON' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Update for UnitDelay: '<S145>/Delay Input1'
     *
     * Block description for '<S145>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE = rtu_IN;

    /* Update for UnitDelay: '<S146>/Delay Input1'
     *
     * Block description for '<S146>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE_a = rtu_IN;

    /* Update for Memory: '<S147>/memory' */
    localDW->memory_PreviousInput = localDW->Switch;
  }

  /* End of Update for SubSystem: '<S138>/TON' */
}

/*
 * System initialize for atomic system:
 *    '<S132>/INTERLOCKING POINT'
 *    '<S133>/INTERLOCKING POINT'
 *    '<S134>/INTERLOCKING POINT'
 *    '<S135>/INTERLOCKING POINT'
 */
void D_IL_POINT_Init(DW_D_IL_POINT_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S136>/DNV_TOF' */
  DNV_TOF_Init(&localDW->DNV_TOF_c);

  /* End of SystemInitialize for SubSystem: '<S136>/DNV_TOF' */

  /* SystemInitialize for Atomic SubSystem: '<S136>/DNV_TON' */
  NONVITALDEPOT_DNV_TON_Init(&localDW->DNV_TON_n);

  /* End of SystemInitialize for SubSystem: '<S136>/DNV_TON' */
}

/*
 * Outputs for atomic system:
 *    '<S132>/INTERLOCKING POINT'
 *    '<S133>/INTERLOCKING POINT'
 *    '<S134>/INTERLOCKING POINT'
 *    '<S135>/INTERLOCKING POINT'
 */
void D_IL_POINT(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M, boolean_T
                rtu_CALCTRL, boolean_T rtu_TRAILCTRL, boolean_T rtu_RSTCTRL,
                boolean_T rtu_BCTRL, boolean_T rtu_NWZ, boolean_T rtu_RWZ,
                boolean_T rtu_NWP, boolean_T rtu_RWP, boolean_T rtu_NWC,
                boolean_T rtu_RWC, boolean_T rtu_NWTE, boolean_T rtu_RWTE,
                boolean_T rtu_L, boolean_T rtu_OOC, boolean_T rtu_OOCRD,
                boolean_T rtu_RSN, boolean_T rtu_RSR, boolean_T rtu_START,
                DW_D_IL_POINT_T *localDW)
{
  boolean_T rtb_NOT1_j;
  boolean_T rtb_AND1_i2;
  boolean_T rtb_AND6_a;
  boolean_T rtb_OR20;
  boolean_T rtb_NOT26;
  boolean_T rtb_AND23;
  boolean_T rtb_AND24;
  boolean_T rtb_AND26;
  boolean_T AND11;
  boolean_T AND14;
  boolean_T OR6;
  boolean_T OR21;
  boolean_T OR22;
  boolean_T M1_PreviousInput;
  boolean_T M2_PreviousInput;
  boolean_T AND12;
  boolean_T AND13;
  boolean_T AND28;
  boolean_T NOT18;
  boolean_T NOT21;
  boolean_T NOT19;
  boolean_T NOT20;
  boolean_T NOT14;
  boolean_T NOT24;
  boolean_T NOT25;
  NOT25 = localDW->NOT25;
  NOT24 = localDW->NOT24;
  NOT14 = localDW->NOT14;
  NOT20 = localDW->NOT20;
  NOT19 = localDW->NOT19;
  NOT21 = localDW->NOT21;
  NOT18 = localDW->NOT18;
  AND28 = localDW->AND28;
  AND13 = localDW->AND13;
  AND12 = localDW->AND12;

  /* Logic: '<S136>/OR3' */
  M2_PreviousInput = localDW->M2_PreviousInput;

  /* Logic: '<S136>/NOT6' */
  M1_PreviousInput = localDW->M1_PreviousInput;

  /* Logic: '<S136>/OR22' */
  OR22 = localDW->OR22;

  /* Logic: '<S136>/OR21' */
  OR21 = localDW->OR21;

  /* Logic: '<S136>/OR6' */
  OR6 = localDW->OR6;

  /* Logic: '<S136>/AND14' */
  AND14 = localDW->AND14;

  /* Logic: '<S136>/AND11' */
  AND11 = localDW->AND11;
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Logic: '<S136>/NOT1' */
    rtb_NOT1_j = !rtu_OOC;

    /* Logic: '<S136>/AND1' incorporates:
     *  Logic: '<S136>/NOT2'
     *  Logic: '<S136>/NOT3'
     *  Logic: '<S136>/NOT4'
     *  Logic: '<S136>/OR1'
     */
    rtb_AND1_i2 = ((!rtu_OOCRD) && ((!rtu_RSTCTRL) || (!rtb_NOT1_j)));

    /* Memory: '<S136>/M8' */
    localDW->M8 = localDW->M8_PreviousInput;

    /* Memory: '<S136>/M9' */
    localDW->M9 = localDW->M9_PreviousInput;

    /* Logic: '<S136>/AND6' incorporates:
     *  Logic: '<S136>/NOT7'
     *  Logic: '<S136>/NOT9'
     */
    rtb_AND6_a = (rtu_CALCTRL && (!rtu_START) && (!localDW->M8) && rtb_NOT1_j);

    /* Logic: '<S136>/AND4' incorporates:
     *  Logic: '<S136>/NOT6'
     *  Logic: '<S136>/OR3'
     */
    localDW->AND4 = (rtb_AND1_i2 && (!M1_PreviousInput) && (M2_PreviousInput ||
      rtu_RWTE));

    /* Logic: '<S136>/AND25' incorporates:
     *  Logic: '<S136>/OR4'
     */
    rtb_OR20 = (rtu_TRAILCTRL && (rtu_OOC || rtb_NOT1_j));

    /* Logic: '<S136>/AND11' incorporates:
     *  Logic: '<S136>/AND10'
     *  Logic: '<S136>/AND7'
     *  Logic: '<S136>/AND8'
     *  Logic: '<S136>/NOT10'
     *  Logic: '<S136>/NOT11'
     *  Logic: '<S136>/NOT16'
     *  Logic: '<S136>/OR11'
     *  Logic: '<S136>/OR12'
     *  Memory: '<S136>/M5'
     */
    AND11 = (((localDW->M9 && (rtb_AND6_a || localDW->AND4) && rtu_RWZ) ||
              (rtb_OR20 && rtu_NWP) || (rtu_CALCTRL && (!rtu_START) &&
               (!localDW->M8) && rtu_OOC && localDW->M9)) &&
             (!localDW->M5_PreviousInput));

    /* Memory: '<S136>/M11' */
    localDW->M11 = localDW->M11_PreviousInput;

    /* Memory: '<S136>/M10' */
    localDW->M10 = localDW->M10_PreviousInput;

    /* Memory: '<S136>/M7' */
    localDW->M7 = localDW->M7_PreviousInput;

    /* Logic: '<S136>/AND12' incorporates:
     *  Logic: '<S136>/NOT15'
     *  Logic: '<S136>/NOT23'
     *  Logic: '<S136>/OR10'
     *  Logic: '<S136>/OR14'
     */
    AND12 = ((!localDW->M11) && (localDW->M10 || (rtu_RSN || AND11)) &&
             (!localDW->M7));

    /* Memory: '<S136>/M6' */
    localDW->M6 = localDW->M6_PreviousInput;

    /* Logic: '<S136>/AND3' incorporates:
     *  Logic: '<S136>/NOT5'
     *  Logic: '<S136>/OR2'
     */
    localDW->AND3 = (rtb_AND1_i2 && (rtu_NWTE || M1_PreviousInput) &&
                     (!M2_PreviousInput));

    /* Logic: '<S136>/AND14' incorporates:
     *  Logic: '<S136>/AND5'
     *  Logic: '<S136>/AND9'
     *  Logic: '<S136>/NOT17'
     *  Logic: '<S136>/OR5'
     *  Logic: '<S136>/OR9'
     *  Memory: '<S136>/M4'
     */
    AND14 = ((!localDW->M4_PreviousInput) && ((localDW->M9 && (rtb_AND6_a ||
                localDW->AND3) && rtu_NWZ) || (rtb_OR20 && rtu_RWP)));

    /* Logic: '<S136>/AND13' incorporates:
     *  Logic: '<S136>/NOT12'
     *  Logic: '<S136>/NOT22'
     *  Logic: '<S136>/OR13'
     *  Logic: '<S136>/OR15'
     */
    AND13 = ((!localDW->M6) && (!localDW->M10) && (localDW->M11 || (rtu_RSR ||
               AND14)));

    /* Logic: '<S136>/OR6' */
    OR6 = (localDW->AND4 || localDW->AND3 || rtu_OOC);

    /* RelationalOperator: '<S139>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S139>/Delay Input1'
     *
     * Block description for '<S139>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->FixPtRelationalOperator = ((int32_T)OR6 > (int32_T)
      localDW->DelayInput1_DSTATE);
  }

  /* Outputs for Atomic SubSystem: '<S136>/DNV_TOF' */
  DNV_TOF(NONVITALDEPOT_M, localDW->FixPtRelationalOperator, &localDW->DNV_TOF_c,
          12.0);

  /* End of Outputs for SubSystem: '<S136>/DNV_TOF' */

  /* Outputs for Atomic SubSystem: '<S136>/DNV_TON' */
  NONVITALDEPOT_DNV_TON(NONVITALDEPOT_M, localDW->DNV_TOF_c.LogicalOperator4,
                        &localDW->DNV_TON_n, 11.0);

  /* End of Outputs for SubSystem: '<S136>/DNV_TON' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Logic: '<S136>/AND28' incorporates:
     *  Logic: '<S136>/OR7'
     *  Memory: '<S136>/M3'
     */
    AND28 = ((localDW->M6 || localDW->M7) && localDW->M3_PreviousInput);

    /* Logic: '<S136>/NOT18' */
    NOT18 = !rtu_NWC;

    /* Logic: '<S136>/NOT21' */
    NOT21 = !rtu_RWC;

    /* Logic: '<S136>/NOT19' */
    NOT19 = !localDW->AND3;
  }

  /* Logic: '<S136>/OR8' */
  localDW->OR8 = (localDW->DNV_TON_n.LogicalOperator2 || AND28);

  /* Logic: '<S136>/NOT13' */
  rtb_OR20 = !localDW->OR8;

  /* Logic: '<S136>/AND17' incorporates:
   *  Logic: '<S136>/AND15'
   *  Logic: '<S136>/OR16'
   */
  localDW->AND17 = (rtu_L && (AND12 || (localDW->M6 && rtb_OR20 && NOT18)) &&
                    NOT19);
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Logic: '<S136>/NOT20' */
    NOT20 = !localDW->AND4;

    /* Logic: '<S136>/NOT14' */
    NOT14 = !rtu_START;
  }

  /* Logic: '<S136>/AND18' incorporates:
   *  Logic: '<S136>/AND16'
   *  Logic: '<S136>/OR17'
   */
  localDW->AND18 = (rtu_L && NOT20 && (AND13 || (localDW->M7 && rtb_OR20 &&
    NOT21)));

  /* Logic: '<S136>/AND19' */
  localDW->AND19 = (NOT14 && rtb_OR20 && localDW->M6);

  /* Logic: '<S136>/AND20' */
  localDW->AND20 = (NOT14 && rtb_OR20 && localDW->M7);
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Logic: '<S136>/NOT24' */
    NOT24 = !rtu_NWC;

    /* Logic: '<S136>/NOT25' */
    NOT25 = !rtu_RWC;

    /* Logic: '<S136>/AND23' */
    rtb_AND23 = (rtu_BCTRL && localDW->M9 && rtu_NWC);

    /* Logic: '<S136>/AND24' */
    rtb_AND24 = (rtu_BCTRL && localDW->M9 && rtu_RWC);

    /* Logic: '<S136>/NOT26' */
    rtb_NOT26 = !rtu_OOCRD;

    /* Logic: '<S136>/OR20' incorporates:
     *  Logic: '<S136>/NOT27'
     *  Logic: '<S136>/NOT28'
     */
    rtb_OR20 = ((!rtu_RSTCTRL) || (!rtb_NOT1_j));

    /* Logic: '<S136>/AND26' */
    rtb_AND26 = (rtb_NOT26 && rtb_OR20 && localDW->M10);

    /* Logic: '<S136>/AND27' */
    rtb_NOT26 = (rtb_NOT26 && rtb_OR20 && localDW->M11);

    /* Logic: '<S136>/OR19' */
    localDW->OR19 = (rtu_NWC || rtu_RWC || localDW->M9);

    /* Logic: '<S136>/OR21' */
    OR21 = (rtb_AND23 || localDW->AND4 || rtb_AND26);

    /* Logic: '<S136>/OR22' */
    OR22 = (rtb_AND24 || localDW->AND3 || rtb_NOT26);

    /* Logic: '<S136>/OR23' */
    localDW->OR23 = (OR21 || OR22);
  }

  /* Logic: '<S136>/OR18' incorporates:
   *  Logic: '<S136>/AND21'
   *  Logic: '<S136>/AND22'
   */
  localDW->OR18 = ((localDW->AND19 && NOT24) || (localDW->AND20 && NOT25));

  /* Logic: '<S136>/AND11' */
  localDW->AND11 = AND11;

  /* Logic: '<S136>/AND14' */
  localDW->AND14 = AND14;

  /* Logic: '<S136>/OR6' */
  localDW->OR6 = OR6;

  /* Logic: '<S136>/OR21' */
  localDW->OR21 = OR21;

  /* Logic: '<S136>/OR22' */
  localDW->OR22 = OR22;
  localDW->AND12 = AND12;
  localDW->AND13 = AND13;
  localDW->AND28 = AND28;
  localDW->NOT18 = NOT18;
  localDW->NOT21 = NOT21;
  localDW->NOT19 = NOT19;
  localDW->NOT20 = NOT20;
  localDW->NOT14 = NOT14;
  localDW->NOT24 = NOT24;
  localDW->NOT25 = NOT25;
}

/*
 * Update for atomic system:
 *    '<S132>/INTERLOCKING POINT'
 *    '<S133>/INTERLOCKING POINT'
 *    '<S134>/INTERLOCKING POINT'
 *    '<S135>/INTERLOCKING POINT'
 */
void D_IL_POINT_Update(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M,
  DW_D_IL_POINT_T *localDW)
{
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Update for Memory: '<S136>/M8' */
    localDW->M8_PreviousInput = localDW->OR18;

    /* Update for Memory: '<S136>/M9' */
    localDW->M9_PreviousInput = localDW->OR19;

    /* Update for Memory: '<S136>/M1' */
    localDW->M1_PreviousInput = localDW->AND3;

    /* Update for Memory: '<S136>/M2' */
    localDW->M2_PreviousInput = localDW->AND4;

    /* Update for Memory: '<S136>/M5' */
    localDW->M5_PreviousInput = localDW->AND14;

    /* Update for Memory: '<S136>/M11' */
    localDW->M11_PreviousInput = localDW->OR22;

    /* Update for Memory: '<S136>/M10' */
    localDW->M10_PreviousInput = localDW->OR21;

    /* Update for Memory: '<S136>/M7' */
    localDW->M7_PreviousInput = localDW->AND18;

    /* Update for Memory: '<S136>/M6' */
    localDW->M6_PreviousInput = localDW->AND17;

    /* Update for Memory: '<S136>/M4' */
    localDW->M4_PreviousInput = localDW->AND11;

    /* Update for UnitDelay: '<S139>/Delay Input1'
     *
     * Block description for '<S139>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE = localDW->OR6;
  }

  /* Update for Atomic SubSystem: '<S136>/DNV_TOF' */
  DNV_TOF_Update(NONVITALDEPOT_M, localDW->FixPtRelationalOperator,
                 &localDW->DNV_TOF_c);

  /* End of Update for SubSystem: '<S136>/DNV_TOF' */

  /* Update for Atomic SubSystem: '<S136>/DNV_TON' */
  NONVITALDEPOT_DNV_TON_Update(NONVITALDEPOT_M,
    localDW->DNV_TOF_c.LogicalOperator4, &localDW->DNV_TON_n);

  /* End of Update for SubSystem: '<S136>/DNV_TON' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Update for Memory: '<S136>/M3' */
    localDW->M3_PreviousInput = localDW->OR8;
  }
}

/*
 * Output and update for atomic system:
 *    '<S200>/WARNING COMM 1 FAIL'
 *    '<S201>/WARNING COMM 2 FAIL'
 *    '<S203>/WARNING SYSTEM 1 FAIL'
 *    '<S204>/WARNING SYSTEM 2 FAIL'
 *    '<S198>/TPR-BANTU'
 *    '<S199>/TZB ACK'
 */
void D_WAR(boolean_T rtu_WAR, boolean_T rtu_THB, DW_D_WAR_T *localDW, boolean_T *
           rtd_M_GV_FLASH_500)
{
  boolean_T AND1;

  /* Logic: '<S205>/AND1' incorporates:
   *  Logic: '<S205>/NOT2'
   *  Logic: '<S205>/OR1'
   */
  AND1 = localDW->AND1;
  AND1 = ((AND1 || rtu_THB) && (!rtu_WAR));

  /* Logic: '<S205>/AND5' incorporates:
   *  Logic: '<S205>/NOT3'
   *  Logic: '<S205>/NOT5'
   */
  localDW->AND5 = ((!rtu_WAR) && (!AND1));

  /* Logic: '<S205>/OR2' incorporates:
   *  DataStoreRead: '<S205>/FLASH-0.5S-FROM'
   *  Logic: '<S205>/AND3'
   *  Logic: '<S205>/AND4'
   *  Logic: '<S205>/NOT1'
   */
  localDW->OR2 = (((!rtu_WAR) && AND1) || (localDW->AND5 && (*rtd_M_GV_FLASH_500)));

  /* Logic: '<S205>/AND1' */
  localDW->AND1 = AND1;
}

/*
 * Output and update for atomic system:
 *    '<S217>/POINT PB CONTROL'
 *    '<S218>/POINT PB CONTROL'
 *    '<S219>/POINT PB CONTROL'
 *    '<S220>/POINT PB CONTROL'
 */
void D_SW_PB(boolean_T rtu_WPB, boolean_T rtu_WTP, boolean_T rtu_TBW, boolean_T
             rtu_TKGW, boolean_T rtu_TBKW, boolean_T rtu_TWT, boolean_T rtu_TKW,
             DW_D_SW_PB_T *localDW, boolean_T *rtd_M_NVCOMM_OK, boolean_T
             *rtd_M_VDR)
{
  boolean_T rtb_AND7_ck;
  boolean_T DelayInput1_DSTATE;

  /* Update for UnitDelay: '<S222>/Delay Input1'
   *
   * Block description for '<S222>/Delay Input1':
   *
   *  Store in Global RAM
   */
  DelayInput1_DSTATE = localDW->DelayInput1_DSTATE;

  /* Logic: '<S221>/AND1' incorporates:
   *  DataStoreRead: '<S221>/COMM-OK1'
   *  DataStoreRead: '<S221>/COMM-OK2'
   *  Logic: '<S221>/NOT1'
   */
  localDW->AND1 = (rtu_TBW && rtu_WPB && (!rtu_WTP) && (*rtd_M_NVCOMM_OK) &&
                   (*rtd_M_VDR));

  /* Logic: '<S221>/AND4' incorporates:
   *  DataStoreRead: '<S221>/COMM-OK1'
   *  DataStoreRead: '<S221>/COMM-OK2'
   */
  localDW->AND4 = (rtu_TKGW && rtu_WPB && (*rtd_M_NVCOMM_OK) && (*rtd_M_VDR));

  /* Logic: '<S221>/AND5' incorporates:
   *  DataStoreRead: '<S221>/COMM-OK1'
   *  DataStoreRead: '<S221>/COMM-OK2'
   */
  localDW->AND5 = (rtu_TBKW && rtu_WPB && (*rtd_M_NVCOMM_OK) && (*rtd_M_VDR));

  /* Logic: '<S221>/AND6' incorporates:
   *  DataStoreRead: '<S221>/COMM-OK1'
   *  DataStoreRead: '<S221>/COMM-OK2'
   */
  localDW->AND6 = (rtu_TWT && rtu_WPB && (*rtd_M_NVCOMM_OK) && (*rtd_M_VDR));

  /* Logic: '<S221>/AND7' incorporates:
   *  DataStoreRead: '<S221>/COMM-OK1'
   */
  rtb_AND7_ck = (rtu_TKW && rtu_WPB && (*rtd_M_NVCOMM_OK));

  /* RelationalOperator: '<S222>/FixPt Relational Operator' */
  localDW->FixPtRelationalOperator = ((int32_T)rtb_AND7_ck > (int32_T)
    DelayInput1_DSTATE);

  /* Update for UnitDelay: '<S222>/Delay Input1'
   *
   * Block description for '<S222>/Delay Input1':
   *
   *  Store in Global RAM
   */
  DelayInput1_DSTATE = rtb_AND7_ck;
  localDW->DelayInput1_DSTATE = DelayInput1_DSTATE;
}

/*
 * Output and update for atomic system:
 *    '<S229>/ROUTE PB CONTROL'
 *    '<S230>/ROUTE PB CONTROL 1'
 *    '<S230>/ROUTE PB CONTROL 2'
 *    '<S231>/ROUTE PB CONTROL'
 *    '<S232>/ROUTE PB CONTROL 1'
 *    '<S232>/ROUTE PB CONTROL 2'
 */
void D_R_PB(boolean_T rtu_COMMON, boolean_T rtu_PB1, boolean_T rtu_PB2,
            DW_D_R_PB_T *localDW, boolean_T *rtd_M_NVCOMM_OK, boolean_T
            *rtd_M_VDR)
{
  /* Logic: '<S233>/AND2' incorporates:
   *  DataStoreRead: '<S233>/COMM-OK1'
   *  DataStoreRead: '<S233>/COMM-OK2'
   */
  localDW->AND2 = (rtu_COMMON && rtu_PB1 && (*rtd_M_NVCOMM_OK) && (*rtd_M_VDR));

  /* Logic: '<S233>/AND3' incorporates:
   *  DataStoreRead: '<S233>/COMM-OK1'
   *  DataStoreRead: '<S233>/COMM-OK2'
   */
  localDW->AND3 = (rtu_COMMON && rtu_PB2 && (*rtd_M_NVCOMM_OK) && (*rtd_M_VDR));
}

/* Output and update for atomic system: '<S214>/RUTE OTOMATIS' */
void D_R_AUTO(boolean_T rtu_AUTO, boolean_T rtu_MANUAL, boolean_T rtu_SIGNAL,
              DW_D_R_AUTO_T *localDW, boolean_T *rtd_M_NVCOMM_OK, boolean_T
              *rtd_M_VDR)
{
  /* Logic: '<S239>/AND5' incorporates:
   *  DataStoreRead: '<S239>/COMM-OK1'
   *  DataStoreRead: '<S239>/COMM-OK2'
   *  Logic: '<S239>/AND2'
   *  Logic: '<S239>/AND3'
   *  Logic: '<S239>/NOT1'
   *  Logic: '<S239>/OR2'
   *  Memory: '<S239>/M4'
   */
  localDW->AND5 = ((localDW->AND5 || (rtu_AUTO && rtu_SIGNAL &&
    (*rtd_M_NVCOMM_OK) && (*rtd_M_VDR))) && (!(rtu_MANUAL && rtu_SIGNAL &&
    (*rtd_M_NVCOMM_OK) && (*rtd_M_VDR))));
}

/*
 * Output and update for atomic system:
 *    '<S240>/EMERGENCY ROUTE RELEASE'
 *    '<S241>/EMERGENCY ROUTE RELEASE'
 *    '<S242>/EMERGENCY ROUTE RELEASE'
 *    '<S243>/EMERGENCY ROUTE RELEASE'
 *    '<S244>/EMERGENCY ROUTE RELEASE'
 *    '<S245>/EMERGENCY ROUTE RELEASE'
 *    '<S246>/EMERGENCY ROUTE RELEASE'
 */
void D_RRLS_X(boolean_T rtu_TPR, boolean_T rtu_PB, boolean_T rtu_ESWS, boolean_T
              rtu_RS, DW_D_RRLS_X_T *localDW, boolean_T *rtd_M_NVCOMM_OK,
              boolean_T *rtd_M_VDR)
{
  /* Logic: '<S247>/AND1' incorporates:
   *  DataStoreRead: '<S247>/COMM-OK1'
   *  DataStoreRead: '<S247>/COMM-OK2'
   *  Logic: '<S247>/NOT1'
   *  Logic: '<S247>/NOT2'
   */
  localDW->AND1 = (rtu_TPR && rtu_PB && (!rtu_ESWS) && (!rtu_RS) &&
                   (*rtd_M_NVCOMM_OK) && (*rtd_M_VDR));
}

/*
 * System initialize for atomic system:
 *    '<S254>/POINT FAIL'
 *    '<S255>/POINT FAIL'
 *    '<S256>/POINT FAIL'
 *    '<S257>/POINT FAIL'
 */
void D_POINT_FAIL_Init(DW_D_POINT_FAIL_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S258>/DNV_TON' */
  DNV_TON_Init(&localDW->DNV_TON_n);

  /* End of SystemInitialize for SubSystem: '<S258>/DNV_TON' */
}

/*
 * Outputs for atomic system:
 *    '<S254>/POINT FAIL'
 *    '<S255>/POINT FAIL'
 *    '<S256>/POINT FAIL'
 *    '<S257>/POINT FAIL'
 */
void D_POINT_FAIL(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M, boolean_T
                  rtu_AACTRL, boolean_T rtu_TRAILCTRL, boolean_T rtu_RSTCTRL,
                  boolean_T rtu_LS, boolean_T rtu_BACKTON, boolean_T rtu_BACKTOR,
                  boolean_T rtu_NWP, boolean_T rtu_RWP, boolean_T rtu_NWC,
                  boolean_T rtu_RWC, boolean_T rtu_NWTE, boolean_T rtu_RWTE,
                  boolean_T rtu_BLOCK, boolean_T rtu_NBLOCK, boolean_T
                  rtu_RBLOCK, DW_D_POINT_FAIL_T *localDW)
{
  boolean_T rtb_M4_o;
  boolean_T rtb_M5;
  boolean_T rtb_AND18_m;
  boolean_T rtb_AND19_g;
  boolean_T rtb_M3;
  boolean_T rtb_AND24;
  boolean_T rtb_AND25;
  boolean_T M1_PreviousInput;
  boolean_T M9_PreviousInput;
  boolean_T AND10;
  boolean_T AND12;
  AND12 = localDW->AND12;
  AND10 = localDW->AND10;

  /* Logic: '<S258>/OR9' */
  M9_PreviousInput = localDW->M9_PreviousInput;

  /* Logic: '<S258>/AND22' */
  M1_PreviousInput = localDW->M1_PreviousInput;
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Logic: '<S258>/NOT5' */
    rtb_M4_o = !rtu_NWP;

    /* Logic: '<S258>/NOT6' */
    rtb_M5 = !rtu_RWP;

    /* Logic: '<S258>/AND10' incorporates:
     *  Logic: '<S258>/AND6'
     *  Logic: '<S258>/AND7'
     *  Logic: '<S258>/OR20'
     */
    AND10 = (rtb_M4_o && rtb_M5 && ((rtu_NBLOCK && rtu_BACKTON && rtu_NWTE) ||
              (rtu_RBLOCK && rtu_BACKTOR && rtu_RWTE)));

    /* Logic: '<S258>/AND11' incorporates:
     *  Logic: '<S258>/NOT14'
     */
    localDW->AND11 = (rtb_M5 && rtb_M4_o && (!rtu_LS));

    /* Memory: '<S258>/M6' */
    localDW->M6 = localDW->M6_PreviousInput;

    /* Memory: '<S258>/M8' */
    localDW->M8 = localDW->M8_PreviousInput;

    /* Logic: '<S258>/AND12' incorporates:
     *  Logic: '<S258>/NOT17'
     */
    AND12 = ((!localDW->M6) && localDW->M8);

    /* Memory: '<S258>/M2' */
    rtb_M5 = localDW->M2_PreviousInput;

    /* Memory: '<S258>/M4' */
    rtb_M4_o = localDW->M4_PreviousInput;

    /* Logic: '<S258>/AND18' incorporates:
     *  Logic: '<S258>/NOT2'
     */
    rtb_AND18_m = (rtb_M5 && (!rtb_M4_o));

    /* Memory: '<S258>/M7' */
    localDW->M7 = localDW->M7_PreviousInput;

    /* Logic: '<S258>/AND19' incorporates:
     *  Logic: '<S258>/NOT3'
     */
    rtb_AND19_g = (localDW->M7 && (!M9_PreviousInput));

    /* Logic: '<S258>/AND4' incorporates:
     *  Logic: '<S258>/NOT1'
     *  Logic: '<S258>/NOT4'
     */
    rtb_M3 = ((!localDW->M7) && (!rtu_RSTCTRL));

    /* Logic: '<S258>/AND20' incorporates:
     *  Logic: '<S258>/OR7'
     */
    localDW->AND20 = (rtb_M3 && (rtu_NWTE || M1_PreviousInput));

    /* Logic: '<S258>/AND21' incorporates:
     *  Logic: '<S258>/OR13'
     */
    localDW->AND21 = (rtb_M3 && (rtu_RWTE || rtb_M5));

    /* Memory: '<S258>/M3' */
    rtb_M3 = localDW->M3_PreviousInput;

    /* Logic: '<S258>/AND22' incorporates:
     *  Logic: '<S258>/OR14'
     */
    localDW->AND22 = ((rtb_M3 || rtu_AACTRL) && M1_PreviousInput);

    /* Logic: '<S258>/AND23' incorporates:
     *  Logic: '<S258>/OR15'
     */
    localDW->AND23 = (rtb_M5 && (rtu_AACTRL || rtb_M4_o));

    /* Logic: '<S258>/AND24' */
    rtb_AND24 = (localDW->M7 && rtu_TRAILCTRL);

    /* Memory: '<S258>/M5' */
    rtb_M5 = localDW->M5_PreviousInput;

    /* Logic: '<S258>/AND25' incorporates:
     *  Logic: '<S258>/NOT13'
     */
    rtb_AND25 = ((!localDW->M6) && rtb_M5);

    /* Logic: '<S258>/AND27' incorporates:
     *  Logic: '<S258>/AND26'
     *  Logic: '<S258>/OR17'
     */
    localDW->AND27 = (localDW->M7 && rtb_M5 && (rtu_NWC || rtu_RWC));

    /* Logic: '<S258>/AND5' incorporates:
     *  Logic: '<S258>/NOT18'
     */
    localDW->AND5 = (localDW->M8 && (!rtu_BLOCK));

    /* Logic: '<S258>/AND8' incorporates:
     *  Logic: '<S258>/OR19'
     */
    localDW->AND8 = (localDW->M7 && (rtu_AACTRL || M9_PreviousInput));

    /* Logic: '<S258>/AND9' incorporates:
     *  Logic: '<S258>/NOT12'
     */
    rtb_M5 = (M1_PreviousInput && (!rtb_M3));
  }

  /* Outputs for Atomic SubSystem: '<S258>/DNV_TON' */
  DNV_TON(NONVITALDEPOT_M, localDW->AND11, &localDW->DNV_TON_n, 1.0);

  /* End of Outputs for SubSystem: '<S258>/DNV_TON' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Logic: '<S258>/OR16' */
    localDW->OR16 = (rtb_AND24 || rtb_AND25);

    /* Logic: '<S258>/OR8' */
    localDW->OR8 = (rtb_M5 || rtb_AND18_m || rtb_AND19_g);

    /* Logic: '<S258>/OR9' */
    localDW->OR9 = (rtb_M3 || rtb_M4_o || M9_PreviousInput);
  }

  /* Logic: '<S258>/OR18' */
  localDW->OR18 = (AND10 || localDW->DNV_TON_n.LogicalOperator2 || AND12);
  localDW->AND10 = AND10;
  localDW->AND12 = AND12;
}

/*
 * Update for atomic system:
 *    '<S254>/POINT FAIL'
 *    '<S255>/POINT FAIL'
 *    '<S256>/POINT FAIL'
 *    '<S257>/POINT FAIL'
 */
void D_POINT_FAIL_Update(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M,
  DW_D_POINT_FAIL_T *localDW)
{
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Update for Memory: '<S258>/M6' */
    localDW->M6_PreviousInput = localDW->AND27;

    /* Update for Memory: '<S258>/M8' */
    localDW->M8_PreviousInput = localDW->OR18;

    /* Update for Memory: '<S258>/M2' */
    localDW->M2_PreviousInput = localDW->AND21;

    /* Update for Memory: '<S258>/M4' */
    localDW->M4_PreviousInput = localDW->AND23;

    /* Update for Memory: '<S258>/M7' */
    localDW->M7_PreviousInput = localDW->AND5;

    /* Update for Memory: '<S258>/M9' */
    localDW->M9_PreviousInput = localDW->AND8;

    /* Update for Memory: '<S258>/M1' */
    localDW->M1_PreviousInput = localDW->AND20;

    /* Update for Memory: '<S258>/M3' */
    localDW->M3_PreviousInput = localDW->AND22;

    /* Update for Memory: '<S258>/M5' */
    localDW->M5_PreviousInput = localDW->OR16;
  }

  /* Update for Atomic SubSystem: '<S258>/DNV_TON' */
  DNV_TON_Update(NONVITALDEPOT_M, localDW->AND11, &localDW->DNV_TON_n);

  /* End of Update for SubSystem: '<S258>/DNV_TON' */
}

/*
 * Output and update for atomic system:
 *    '<S302>/ROUTE REQUEST'
 *    '<S303>/ROUTE REQUEST'
 *    '<S304>/ROUTE REQUEST'
 *    '<S305>/ROUTE REQUEST'
 *    '<S306>/ROUTE REQUEST'
 *    '<S307>/ROUTE REQUEST'
 *    '<S308>/ROUTE REQUEST'
 *    '<S309>/ROUTE REQUEST'
 *    '<S310>/ROUTE REQUEST'
 *    '<S311>/ROUTE REQUEST'
 *    ...
 */
void D_REQ(boolean_T rtu_RCTRL, boolean_T rtu_RSTCTRL, boolean_T rtu_RB,
           boolean_T rtu_TP, boolean_T rtu_TPBP, boolean_T rtu_JB, DW_D_REQ_T
           *localDW)
{
  boolean_T Memory1_PreviousInput;

  /* Memory: '<S314>/Memory1' */
  Memory1_PreviousInput = localDW->Memory1_PreviousInput;
  localDW->Memory1 = Memory1_PreviousInput;

  /* Logic: '<S314>/OR5' */
  localDW->OR5 = (Memory1_PreviousInput && rtu_JB);

  /* Logic: '<S314>/AND1' incorporates:
   *  Logic: '<S314>/NOT2'
   *  Logic: '<S314>/OR1'
   *  Logic: '<S314>/OR2'
   */
  Memory1_PreviousInput = ((Memory1_PreviousInput || rtu_RCTRL) && (!rtu_RSTCTRL)
    && (rtu_TP || rtu_TPBP) && rtu_RB);

  /* Memory: '<S314>/Memory1' */
  localDW->Memory1_PreviousInput = Memory1_PreviousInput;
}

/*
 * System initialize for atomic system:
 *    '<S326>/SIGNAL BLOCK'
 *    '<S327>/SIGNAL BLOCK'
 *    '<S328>/SIGNAL BLOCK'
 *    '<S329>/SIGNAL BLOCK'
 *    '<S330>/SIGNAL BLOCK'
 *    '<S331>/SIGNAL BLOCK'
 *    '<S332>/SIGNAL BLOCK'
 */
void D_SIG_B_Init(DW_D_SIG_B_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S333>/DNV_TOF1' */
  DNV_TOF_Init(&localDW->DNV_TOF1);

  /* End of SystemInitialize for SubSystem: '<S333>/DNV_TOF1' */
}

/*
 * Outputs for atomic system:
 *    '<S326>/SIGNAL BLOCK'
 *    '<S327>/SIGNAL BLOCK'
 *    '<S328>/SIGNAL BLOCK'
 *    '<S329>/SIGNAL BLOCK'
 *    '<S330>/SIGNAL BLOCK'
 *    '<S331>/SIGNAL BLOCK'
 *    '<S332>/SIGNAL BLOCK'
 */
void D_SIG_B(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M, boolean_T rtu_VDR,
             boolean_T rtu_RS, boolean_T rtu_DO, boolean_T rtu_RD, boolean_T
             rtu_TP, DW_D_SIG_B_T *localDW)
{
  boolean_T Memory;
  boolean_T NOT1;
  boolean_T NOT4;
  NOT4 = localDW->NOT4;
  NOT1 = localDW->NOT1;
  Memory = localDW->Memory;
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Logic: '<S333>/NOT5' */
    localDW->NOT5 = !rtu_RD;
  }

  /* Outputs for Atomic SubSystem: '<S333>/DNV_TOF1' */
  DNV_TOF(NONVITALDEPOT_M, localDW->NOT5, &localDW->DNV_TOF1, 0.1);

  /* End of Outputs for SubSystem: '<S333>/DNV_TOF1' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Memory: '<S333>/Memory' */
    Memory = localDW->Memory_PreviousInput;

    /* Logic: '<S333>/NOT1' */
    NOT1 = !rtu_RS;

    /* Logic: '<S333>/NOT4' */
    NOT4 = !rtu_TP;
  }

  /* Logic: '<S333>/OR4' incorporates:
   *  Logic: '<S333>/AND2'
   *  Logic: '<S333>/OR3'
   */
  localDW->OR4 = (NOT1 || NOT4 || ((rtu_DO || localDW->DNV_TOF1.LogicalOperator4)
    && rtu_VDR && Memory));
  localDW->Memory = Memory;
  localDW->NOT1 = NOT1;
  localDW->NOT4 = NOT4;
}

/*
 * Update for atomic system:
 *    '<S326>/SIGNAL BLOCK'
 *    '<S327>/SIGNAL BLOCK'
 *    '<S328>/SIGNAL BLOCK'
 *    '<S329>/SIGNAL BLOCK'
 *    '<S330>/SIGNAL BLOCK'
 *    '<S331>/SIGNAL BLOCK'
 *    '<S332>/SIGNAL BLOCK'
 */
void D_SIG_B_Update(RT_MODEL_NONVITALDEPOT_T * const NONVITALDEPOT_M,
                    DW_D_SIG_B_T *localDW)
{
  /* Update for Atomic SubSystem: '<S333>/DNV_TOF1' */
  DNV_TOF_Update(NONVITALDEPOT_M, localDW->NOT5, &localDW->DNV_TOF1);

  /* End of Update for SubSystem: '<S333>/DNV_TOF1' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Update for Memory: '<S333>/Memory' */
    localDW->Memory_PreviousInput = localDW->OR4;
  }
}

/* System initialize for referenced model: 'NONVITALDEPOT' */
void NONVITALDEPOT_Init(void)
{
  /* SystemInitialize for Atomic SubSystem: '<S19>/DNV_TON2' */
  DNV_TON_Init(&NONVITALDEPOT_DW.DNV_TON2);

  /* End of SystemInitialize for SubSystem: '<S19>/DNV_TON2' */

  /* SystemInitialize for Atomic SubSystem: '<S19>/DNV_TON1' */
  DNV_TON_Init(&NONVITALDEPOT_DW.DNV_TON1);

  /* End of SystemInitialize for SubSystem: '<S19>/DNV_TON1' */

  /* SystemInitialize for Atomic SubSystem: '<S19>/DNV_TON' */
  DNV_TON_Init(&NONVITALDEPOT_DW.DNV_TON_h);

  /* End of SystemInitialize for SubSystem: '<S19>/DNV_TON' */

  /* SystemInitialize for Atomic SubSystem: '<S35>/DNV_TOF' */
  DNV_TOF_Init(&NONVITALDEPOT_DW.DNV_TOF_n);

  /* End of SystemInitialize for SubSystem: '<S35>/DNV_TOF' */

  /* SystemInitialize for Atomic SubSystem: '<S36>/DNV_TOF' */
  DNV_TOF_Init(&NONVITALDEPOT_DW.DNV_TOF_c);

  /* End of SystemInitialize for SubSystem: '<S36>/DNV_TOF' */

  /* SystemInitialize for Atomic SubSystem: '<S38>/DNV_TOF' */
  DNV_TOF_Init(&NONVITALDEPOT_DW.DNV_TOF_g);

  /* End of SystemInitialize for SubSystem: '<S38>/DNV_TOF' */

  /* SystemInitialize for Atomic SubSystem: '<S39>/DNV_TOF' */
  DNV_TOF_Init(&NONVITALDEPOT_DW.DNV_TOF_k);

  /* End of SystemInitialize for SubSystem: '<S39>/DNV_TOF' */

  /* SystemInitialize for Atomic SubSystem: '<S40>/DNV_TOF' */
  DNV_TOF_Init(&NONVITALDEPOT_DW.DNV_TOF_f);

  /* End of SystemInitialize for SubSystem: '<S40>/DNV_TOF' */

  /* SystemInitialize for Atomic SubSystem: '<S41>/DNV_TOF' */
  DNV_TOF_Init(&NONVITALDEPOT_DW.DNV_TOF_p);

  /* End of SystemInitialize for SubSystem: '<S41>/DNV_TOF' */

  /* SystemInitialize for Atomic SubSystem: '<S42>/DNV_TOF' */
  DNV_TOF_Init(&NONVITALDEPOT_DW.DNV_TOF_pb);

  /* End of SystemInitialize for SubSystem: '<S42>/DNV_TOF' */

  /* SystemInitialize for Atomic SubSystem: '<S132>/INTERLOCKING POINT' */
  D_IL_POINT_Init(&NONVITALDEPOT_DW.INTERLOCKINGPOINT_ea);

  /* End of SystemInitialize for SubSystem: '<S132>/INTERLOCKING POINT' */

  /* SystemInitialize for Atomic SubSystem: '<S133>/INTERLOCKING POINT' */
  D_IL_POINT_Init(&NONVITALDEPOT_DW.INTERLOCKINGPOINT_j);

  /* End of SystemInitialize for SubSystem: '<S133>/INTERLOCKING POINT' */

  /* SystemInitialize for Atomic SubSystem: '<S134>/INTERLOCKING POINT' */
  D_IL_POINT_Init(&NONVITALDEPOT_DW.INTERLOCKINGPOINT_jl);

  /* End of SystemInitialize for SubSystem: '<S134>/INTERLOCKING POINT' */

  /* SystemInitialize for Atomic SubSystem: '<S135>/INTERLOCKING POINT' */
  D_IL_POINT_Init(&NONVITALDEPOT_DW.INTERLOCKINGPOINT_a);

  /* End of SystemInitialize for SubSystem: '<S135>/INTERLOCKING POINT' */

  /* SystemInitialize for Atomic SubSystem: '<S254>/POINT FAIL' */
  D_POINT_FAIL_Init(&NONVITALDEPOT_DW.POINTFAIL);

  /* End of SystemInitialize for SubSystem: '<S254>/POINT FAIL' */

  /* SystemInitialize for Atomic SubSystem: '<S255>/POINT FAIL' */
  D_POINT_FAIL_Init(&NONVITALDEPOT_DW.POINTFAIL_e);

  /* End of SystemInitialize for SubSystem: '<S255>/POINT FAIL' */

  /* SystemInitialize for Atomic SubSystem: '<S256>/POINT FAIL' */
  D_POINT_FAIL_Init(&NONVITALDEPOT_DW.POINTFAIL_k);

  /* End of SystemInitialize for SubSystem: '<S256>/POINT FAIL' */

  /* SystemInitialize for Atomic SubSystem: '<S257>/POINT FAIL' */
  D_POINT_FAIL_Init(&NONVITALDEPOT_DW.POINTFAIL_c);

  /* End of SystemInitialize for SubSystem: '<S257>/POINT FAIL' */

  /* SystemInitialize for Atomic SubSystem: '<S282>/DNV_TOF' */
  DNV_TOF_Init(&NONVITALDEPOT_DW.DNV_TOF_a);

  /* End of SystemInitialize for SubSystem: '<S282>/DNV_TOF' */

  /* SystemInitialize for Atomic SubSystem: '<S283>/DNV_TOF' */
  DNV_TOF_Init(&NONVITALDEPOT_DW.DNV_TOF_fn);

  /* End of SystemInitialize for SubSystem: '<S283>/DNV_TOF' */

  /* SystemInitialize for Atomic SubSystem: '<S284>/DNV_TOF' */
  DNV_TOF_Init(&NONVITALDEPOT_DW.DNV_TOF_h);

  /* End of SystemInitialize for SubSystem: '<S284>/DNV_TOF' */

  /* SystemInitialize for Atomic SubSystem: '<S326>/SIGNAL BLOCK' */
  D_SIG_B_Init(&NONVITALDEPOT_DW.SIGNALBLOCK);

  /* End of SystemInitialize for SubSystem: '<S326>/SIGNAL BLOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S327>/SIGNAL BLOCK' */
  D_SIG_B_Init(&NONVITALDEPOT_DW.SIGNALBLOCK_a);

  /* End of SystemInitialize for SubSystem: '<S327>/SIGNAL BLOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S328>/SIGNAL BLOCK' */
  D_SIG_B_Init(&NONVITALDEPOT_DW.SIGNALBLOCK_c);

  /* End of SystemInitialize for SubSystem: '<S328>/SIGNAL BLOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S329>/SIGNAL BLOCK' */
  D_SIG_B_Init(&NONVITALDEPOT_DW.SIGNALBLOCK_d);

  /* End of SystemInitialize for SubSystem: '<S329>/SIGNAL BLOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S330>/SIGNAL BLOCK' */
  D_SIG_B_Init(&NONVITALDEPOT_DW.SIGNALBLOCK_cy);

  /* End of SystemInitialize for SubSystem: '<S330>/SIGNAL BLOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S331>/SIGNAL BLOCK' */
  D_SIG_B_Init(&NONVITALDEPOT_DW.SIGNALBLOCK_e);

  /* End of SystemInitialize for SubSystem: '<S331>/SIGNAL BLOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S332>/SIGNAL BLOCK' */
  D_SIG_B_Init(&NONVITALDEPOT_DW.SIGNALBLOCK_n);

  /* End of SystemInitialize for SubSystem: '<S332>/SIGNAL BLOCK' */
}

/* Start for referenced model: 'NONVITALDEPOT' */
void NONVITALDEPOT_Start(void)
{
  /* Start for DiscretePulseGenerator: '<S3>/0.5S' */
  NONVITALDEPOT_DW.clockTickCounter = 0;

  /* Start for DiscretePulseGenerator: '<S3>/1S' */
  NONVITALDEPOT_DW.clockTickCounter_m = 0;
}

/* Outputs for referenced model: 'NONVITALDEPOT' */
void NONVITALDEPOT(const boolean_T rtu_FROMMAIN[17], const boolean_T
                   *rtu_VDRFROM, const boolean_T *rtu_VNVCHKFROM, const
                   boolean_T rtu_TPFROM[10], const boolean_T rtu_SESFROM[3],
                   const boolean_T rtu_SWSFROM[3], const boolean_T rtu_NWCFROM[4],
                   const boolean_T rtu_NWPFROM[4], const boolean_T rtu_NWZFROM[4],
                   const boolean_T rtu_NWTEFROM[4], const boolean_T rtu_RWCFROM
                   [4], const boolean_T rtu_RWPFROM[4], const boolean_T
                   rtu_RWZFROM[4], const boolean_T rtu_RWTEFROM[4], const
                   boolean_T rtu_LFROM[4], const boolean_T rtu_LSFROM[4], const
                   boolean_T rtu_SWRLSFROM[4], const boolean_T rtu_TPZFROM[4],
                   const boolean_T rtu_GRDOFROM[8], const boolean_T rtu_SASFROM
                   [8], const boolean_T rtu_RRLSFROM[8], const boolean_T
                   *rtu_CBTCFROM, const boolean_T rtu_SYSTEMFROM[4], const
                   boolean_T rtu_GLOBALPBDI[4], const boolean_T rtu_SWCTRLPBDI[5],
                   const boolean_T *rtu_RCTRLPBDI, const boolean_T
                   rtu_ROUTEPBDI[14], const boolean_T rtu_POINTPBDI[4], const
                   boolean_T *rtu_CBTCPBDI, boolean_T rty_TOMAIN[6], boolean_T
                   *rty_NVVCHKTO, boolean_T rty_SREQTO[12], boolean_T
                   rty_NREQTO[4], boolean_T rty_RREQTO[4], boolean_T rty_OOCTO[4],
                   boolean_T rty_RRLSPBCTRLTO[8], boolean_T rty_SWRLSPBCTRLTO[4],
                   boolean_T rty_SWINITTO[4], boolean_T rty_RSTTO[7], boolean_T
                   rty_RSTO[12], boolean_T *rty_CBTCTO, boolean_T
                   rty_GLOBALINDDO[7], boolean_T rty_SIGNALINDDO[16], boolean_T
                   rty_POINTINDDO[60], boolean_T rty_TRACKINDDO[20], boolean_T
                   rty_BUTTONINDDO[15], boolean_T rty_CBTCINDDO[11])
{
  RT_MODEL_NONVITALDEPOT_T *const NONVITALDEPOT_M = &(NONVITALDEPOT_MdlrefDW.rtm);

  /* local block i/o variables */
  boolean_T rtb_W13AL;
  boolean_T rtb_W13ASWRLS;
  boolean_T rtb_W13ASWINIT;
  boolean_T rtb_W13ABLOCK;
  boolean_T rtb_W13ALS;
  boolean_T rtb_FLASH1S;
  boolean_T rtb_FLASH05S_a;
  boolean_T rtb_W13ANWP;
  boolean_T rtb_W13ARWP;
  boolean_T rtb_W13ANWZ;
  boolean_T rtb_W13ARWZ;
  boolean_T rtb_W13ANWC;
  boolean_T rtb_W13ARWC;
  boolean_T rtb_W13AOOC;
  boolean_T rtb_u3ATP_a;
  boolean_T rtb_NOT1_a;
  boolean_T rtb_W13B73AL;
  boolean_T rtb_W13B73ASWRLS;
  boolean_T rtb_W13B73ASWINIT;
  boolean_T rtb_W13B73ABLOCK;
  boolean_T rtb_W13B73ALS;
  boolean_T rtb_FLASH1S_h;
  boolean_T rtb_FLASH05S_m;
  boolean_T rtb_W13B73ANWP;
  boolean_T rtb_W13B73ARWP;
  boolean_T rtb_W13B73ANWZ_i;
  boolean_T rtb_W13B23BRWZ;
  boolean_T rtb_W13B73ANWC;
  boolean_T rtb_W13B73ARWC;
  boolean_T rtb_W13B73AOOC;
  boolean_T rtb_u3TP_j;
  boolean_T rtb_NOT1_o;
  boolean_T rtb_W54L;
  boolean_T rtb_W54SWRLS;
  boolean_T rtb_W54SWINIT;
  boolean_T rtb_W54BLOCK;
  boolean_T rtb_W54LS;
  boolean_T rtb_FLASH1S_i;
  boolean_T rtb_FLASH05S_pc;
  boolean_T rtb_W54NWP;
  boolean_T rtb_W54RWP;
  boolean_T rtb_W54NWZ;
  boolean_T rtb_W54RWZ;
  boolean_T rtb_W54NWC;
  boolean_T rtb_W54RWC;
  boolean_T rtb_W54OOC;
  boolean_T rtb_u3BTP_d;
  boolean_T rtb_NOT1_l;
  boolean_T rtb_W13B73AL_p;
  boolean_T rtb_W13B73ASWRLS_j;
  boolean_T rtb_W13B73ASWINIT_f;
  boolean_T rtb_W13B73ABLOCK_k;
  boolean_T rtb_W13B73ALS_a;
  boolean_T rtb_FLASH1S_l;
  boolean_T rtb_FLASH05S_g;
  boolean_T rtb_W13B73ANWP_e;
  boolean_T rtb_W13B73ARWP_d;
  boolean_T rtb_W13B73ANWZ_p;
  boolean_T rtb_W13B23BRWZ_b;
  boolean_T rtb_W13B73ANWC_o;
  boolean_T rtb_W13B73ARWC_k;
  boolean_T rtb_W13B73AOOC_a;
  boolean_T rtb_u3ATP_c;
  boolean_T rtb_NOT1_of;
  boolean_T rtb_W73BL;
  boolean_T rtb_W73BSWRLS;
  boolean_T rtb_W73BSWINIT;
  boolean_T rtb_W73BBLOCK;
  boolean_T rtb_W73BLS;
  boolean_T rtb_FLASH1S_g;
  boolean_T rtb_FLASH05S_d;
  boolean_T rtb_W73BNWP;
  boolean_T rtb_W73BRWP;
  boolean_T rtb_W73BNWZ;
  boolean_T rtb_W73BRWZ_c;
  boolean_T rtb_W73BNWC;
  boolean_T rtb_W73BRWC;
  boolean_T rtb_W73BOOC;
  boolean_T rtb_u3BTP_o;
  boolean_T rtb_NOT1_k;
  boolean_T rtb_VDR_a;
  boolean_T rtb_L12GRDO_k;
  boolean_T rtb_FLASH_m;
  boolean_T rtb_VDR_j;
  boolean_T rtb_L14AGRDO_p;
  boolean_T rtb_FLASH_p;
  boolean_T rtb_VDR_jc;
  boolean_T rtb_L14BGRDO;
  boolean_T rtb_FLASH_i;
  boolean_T rtb_VDR_l;
  boolean_T rtb_L32GRDO;
  boolean_T rtb_FLASH_m0;
  boolean_T rtb_VDR_h;
  boolean_T rtb_L34GRDO_b;
  boolean_T rtb_FLASH_o;
  boolean_T rtb_VDR_e;
  boolean_T rtb_L54GRDO_k;
  boolean_T rtb_FLASH_j;
  boolean_T rtb_VDR_o;
  boolean_T rtb_L72GRDO_l;
  boolean_T rtb_FLASH_d;
  boolean_T rtb_VDR_d;
  boolean_T rtb_L74GRDO_p;
  boolean_T rtb_FLASH_f;
  boolean_T rtb_u2TP;
  boolean_T rtb_AND2_fc;
  boolean_T rtb_u3TP_i;
  boolean_T rtb_AND2_m;
  boolean_T rtb_u4TP;
  boolean_T rtb_AND2_gv;
  boolean_T rtb_u2TP_k;
  boolean_T rtb_AND2_p;
  boolean_T rtb_u4TP_j;
  boolean_T rtb_AND2_c;
  boolean_T rtb_u4TP_b;
  boolean_T rtb_AND2_ag;
  boolean_T rtb_u2TP_p;
  boolean_T rtb_u3ASWS_ld;
  boolean_T rtb_u3ATP_m;
  boolean_T rtb_AND2_mo;
  boolean_T rtb_u3BTP_c;
  boolean_T rtb_AND2_h;
  boolean_T rtb_u4TP_e;
  boolean_T rtb_AND2_i;
  boolean_T rtb_W13ACALCTRL;
  boolean_T rtb_W13ATRAILCTRL;
  boolean_T rtb_W13ARSTCTRL;
  boolean_T rtb_W13ABCTRL;
  boolean_T rtb_W13ANWZ_o;
  boolean_T rtb_W13ARWZ_l;
  boolean_T rtb_W13ANWP_b;
  boolean_T rtb_W13ARWP_h;
  boolean_T rtb_W13ANWC_m;
  boolean_T rtb_W13ARWC_c;
  boolean_T rtb_W13ANWTE;
  boolean_T rtb_W13ARWTE;
  boolean_T rtb_W13AOOC_i;
  boolean_T rtb_W13AOOCRD;
  boolean_T rtb_OR2;
  boolean_T rtb_OR3;
  boolean_T rtb_OR1;
  boolean_T rtb_W13B73ACALCTRL;
  boolean_T rtb_W13B73ATRAILCTRL;
  boolean_T rtb_W13B73ARSTCTRL;
  boolean_T rtb_W13B73ABCTRL;
  boolean_T rtb_W13B73ANWZ_k;
  boolean_T rtb_W13B73ARWZ_a;
  boolean_T rtb_W13B73ANWP_ew;
  boolean_T rtb_W13B73ARWP_h;
  boolean_T rtb_W13B73ANWC_or;
  boolean_T rtb_W13B73ARWC_j;
  boolean_T rtb_W13B73ANWTE;
  boolean_T rtb_W13B73ARWTE;
  boolean_T rtb_W13B73AOOC_f;
  boolean_T rtb_W13B73AOOCRD;
  boolean_T rtb_OR4_j;
  boolean_T rtb_OR2_e;
  boolean_T rtb_OR1_n;
  boolean_T rtb_W54CALCTRL;
  boolean_T rtb_W54TRAILCTRL;
  boolean_T rtb_W54RSTCTRL;
  boolean_T rtb_W54BCTRL;
  boolean_T rtb_W54NWZ_g;
  boolean_T rtb_W54RWZ_p;
  boolean_T rtb_W54NWP_m;
  boolean_T rtb_W54RWP_e;
  boolean_T rtb_W54NWC_c;
  boolean_T rtb_W54RWC_o;
  boolean_T rtb_W54NWTE;
  boolean_T rtb_W54RWTE;
  boolean_T rtb_W54OOC_d;
  boolean_T rtb_W54OOCRD;
  boolean_T rtb_OR2_m;
  boolean_T rtb_OR4_p;
  boolean_T rtb_OR1_i;
  boolean_T rtb_W73BCALCTRL;
  boolean_T rtb_W73BTRAILCTRL;
  boolean_T rtb_W73BRSTCTRL;
  boolean_T rtb_W73BBCTRL;
  boolean_T rtb_W73BNWZ_d;
  boolean_T rtb_W73BRWZ_b;
  boolean_T rtb_W73BNWP_j;
  boolean_T rtb_W73BRWP_a;
  boolean_T rtb_W73BNWC_j;
  boolean_T rtb_W73BRWC_a;
  boolean_T rtb_W73BNWTE;
  boolean_T rtb_W73BRWTE;
  boolean_T rtb_W73BOOC_d;
  boolean_T rtb_W73BOOCRD;
  boolean_T rtb_OR2_d;
  boolean_T rtb_OR3_gl;
  boolean_T rtb_OR1_j;
  boolean_T rtb_FAIL;
  boolean_T rtb_THB;
  boolean_T rtb_FAIL_e;
  boolean_T rtb_THB_e;
  boolean_T rtb_AND5;
  boolean_T rtb_THB_l;
  boolean_T rtb_AND5_a;
  boolean_T rtb_THB_b;
  boolean_T rtb_NOT2_o;
  boolean_T rtb_RROK;
  boolean_T rtb_LogicalOperator_g;
  boolean_T rtb_TZBACKPBDI;
  boolean_T rtb_W13APBDI;
  boolean_T rtb_u3TP_j3;
  boolean_T rtb_TBWPBDI;
  boolean_T rtb_TKGWPBDI;
  boolean_T rtb_TBKWPBDI;
  boolean_T rtb_TWTPBDI;
  boolean_T rtb_TKWPBDI;
  boolean_T rtb_W13B73APBDI;
  boolean_T rtb_AND1_os;
  boolean_T rtb_TBWPBDI_d;
  boolean_T rtb_TKGWPBDI_g;
  boolean_T rtb_TBKWPBDI_g;
  boolean_T rtb_TWTPBDI_o;
  boolean_T rtb_TKWPBDI_e;
  boolean_T rtb_W54PBDI;
  boolean_T rtb_u3BTP_n;
  boolean_T rtb_TBWPBDI_p;
  boolean_T rtb_TKGWPBDI_f;
  boolean_T rtb_TBKWPBDI_c;
  boolean_T rtb_TWTPBDI_e;
  boolean_T rtb_TKWPBDI_f;
  boolean_T rtb_W73BPBDI;
  boolean_T rtb_u3BTP_j;
  boolean_T rtb_TBWPBDI_f;
  boolean_T rtb_TKGWPBDI_a;
  boolean_T rtb_TBKWPBDI_p;
  boolean_T rtb_TWTPBDI_k;
  boolean_T rtb_TKWPBDI_o;
  boolean_T rtb_L14APBDI;
  boolean_T rtb_X12PBDI;
  boolean_T rtb_X32PBDI;
  boolean_T rtb_L72PBDI;
  boolean_T rtb_L14BPBDI;
  boolean_T rtb_X34PBDI;
  boolean_T rtb_X54PBDI1;
  boolean_T rtb_X74PBDI1;
  boolean_T rtb_L14BPBDI_o;
  boolean_T rtb_u2PBDI;
  boolean_T rtb_u2PBDI_f;
  boolean_T rtb_X72PBDI;
  boolean_T rtb_L14APBDI_j;
  boolean_T rtb_L34PBDI;
  boolean_T rtb_L54PBDI1;
  boolean_T rtb_L74PBDI1;
  boolean_T rtb_OTOMATISPBDI;
  boolean_T rtb_MANUALPBDI;
  boolean_T rtb_L14BPBDI_d;
  boolean_T rtb_TPRPBDI;
  boolean_T rtb_L14BPBDI_p;
  boolean_T rtb_u3SES_ji;
  boolean_T rtb_OR2_i;
  boolean_T rtb_TPRPBDI_e;
  boolean_T rtb_X12PBDI_f;
  boolean_T rtb_u0BSWS;
  boolean_T rtb_L14AX12RS_e;
  boolean_T rtb_TPRPBDI_g;
  boolean_T rtb_X32PBDI_b;
  boolean_T rtb_u0BSWS_e;
  boolean_T rtb_L14AX32RS_o;
  boolean_T rtb_TPRPBDI_l;
  boolean_T rtb_X34PBDI_a;
  boolean_T rtb_u3BSES_mm;
  boolean_T rtb_L72X34RS_b;
  boolean_T rtb_TPRPBDI_c;
  boolean_T rtb_X54PBDI;
  boolean_T rtb_u3BSES_o;
  boolean_T rtb_L72X54RS_a;
  boolean_T rtb_TPRPBDI_gk;
  boolean_T rtb_X72PBDI_k;
  boolean_T rtb_u3ASWS_o;
  boolean_T rtb_OR2_fn;
  boolean_T rtb_TPRPBDI_cw;
  boolean_T rtb_X74PBDI;
  boolean_T rtb_u3BSES_nq;
  boolean_T rtb_L72X74RS_o;
  boolean_T rtb_AACTRL;
  boolean_T rtb_W13ATRAILCTRL_g;
  boolean_T rtb_W13ARSTCTRL_e;
  boolean_T rtb_W13ALS_h;
  boolean_T rtb_W13ABACKTON;
  boolean_T rtb_W13ABACKTOR;
  boolean_T rtb_W13ANWP_a;
  boolean_T rtb_W13ARWP_p;
  boolean_T rtb_W13ANWC_f;
  boolean_T rtb_W13ARWC_p;
  boolean_T rtb_W13ANWTE_l;
  boolean_T rtb_W13ARWTE_c;
  boolean_T rtb_W13ABLOCK_a;
  boolean_T rtb_W13ANBLOCK;
  boolean_T rtb_W13ARBLOCK;
  boolean_T rtb_AACTRL_m;
  boolean_T rtb_W13B73ATRAILCTRL_a;
  boolean_T rtb_W13B73ARSTCTRL_p;
  boolean_T rtb_W13B73ALS_o;
  boolean_T rtb_W13B73ABACKTON;
  boolean_T rtb_W13B73ABACKTOR;
  boolean_T rtb_W13B73ANWP_h;
  boolean_T rtb_W13B73ARWP_dl;
  boolean_T rtb_W13B73ANWC_i;
  boolean_T rtb_W13B73ARWC_kw;
  boolean_T rtb_W13B73ANWTE_g;
  boolean_T rtb_W13B73ARWTE_k;
  boolean_T rtb_W13B73ABLOCK_b;
  boolean_T rtb_W13B73ANBLOCK;
  boolean_T rtb_W13B73ARBLOCK;
  boolean_T rtb_AACTRL_i;
  boolean_T rtb_W54TRAILCTRL_d;
  boolean_T rtb_W54RSTCTRL_i;
  boolean_T rtb_W54LS_d;
  boolean_T rtb_W54BACKTON;
  boolean_T rtb_W54BACKTOR;
  boolean_T rtb_W54NWP_i;
  boolean_T rtb_W54RWP_d;
  boolean_T rtb_W54NWC_o;
  boolean_T rtb_W54RWC_n;
  boolean_T rtb_W54NWTE_c;
  boolean_T rtb_W54RWTE_b;
  boolean_T rtb_W54BLOCK_n;
  boolean_T rtb_W54NBLOCK;
  boolean_T rtb_W54RBLOCK;
  boolean_T rtb_AACTRL_b;
  boolean_T rtb_W73BTRAILCTRL_e;
  boolean_T rtb_W73BRSTCTRL_m;
  boolean_T rtb_W73BLS_h;
  boolean_T rtb_W73BBACKTON;
  boolean_T rtb_W73BBACKTOR;
  boolean_T rtb_W73BNWP_k;
  boolean_T rtb_W73BRWP_b;
  boolean_T rtb_W73BNWC_i;
  boolean_T rtb_W73BRWC_p;
  boolean_T rtb_W73BNWTE_j;
  boolean_T rtb_W73BRWTE_e;
  boolean_T rtb_W73BBLOCK_l;
  boolean_T rtb_W73BNBLOCK;
  boolean_T rtb_W73BRBLOCK;
  boolean_T rtb_L12L14BCTRL;
  boolean_T rtb_L12RSTCTRL_l;
  boolean_T rtb_L12L14BB;
  boolean_T rtb_u3TP_m;
  boolean_T rtb_u3TPBP;
  boolean_T rtb_L12SB;
  boolean_T rtb_L14AX12CTRL;
  boolean_T rtb_L14ARSTCTRL_a;
  boolean_T rtb_L14AX12B;
  boolean_T rtb_u3TP_o;
  boolean_T rtb_u3TPBP_m;
  boolean_T rtb_L14ASB;
  boolean_T rtb_L14AX32CTRL;
  boolean_T rtb_L14ARSTCTRL_p;
  boolean_T rtb_L14AX32B;
  boolean_T rtb_u3TP_cd;
  boolean_T rtb_u3TPBP_l;
  boolean_T rtb_L14ASB_m;
  boolean_T rtb_L14AX72CTRL;
  boolean_T rtb_L14ARSTCTRL_i;
  boolean_T rtb_L14AX72B;
  boolean_T rtb_u3TP_l;
  boolean_T rtb_u3TPBP_d;
  boolean_T rtb_L14ASB_o;
  boolean_T rtb_L32L14BCTRL;
  boolean_T rtb_L32RSTCTRL_d;
  boolean_T rtb_L32L14BB;
  boolean_T rtb_u3TP_e;
  boolean_T rtb_u3TPBP_b;
  boolean_T rtb_L32SB;
  boolean_T rtb_L34AX72CTRL;
  boolean_T rtb_L34RSTCTRL;
  boolean_T rtb_L34X72B;
  boolean_T rtb_u3BTP_nh;
  boolean_T rtb_u3BTPBP;
  boolean_T rtb_L34SB;
  boolean_T rtb_L54AX72CTRL;
  boolean_T rtb_L54RSTCTRL;
  boolean_T rtb_L54X72B;
  boolean_T rtb_u3BTP_e;
  boolean_T rtb_u3BTPBP_p;
  boolean_T rtb_L54SB;
  boolean_T rtb_L72L14BCTRL;
  boolean_T rtb_L72RSTCTRL_d;
  boolean_T rtb_L72L14BB;
  boolean_T rtb_u3ATP_l;
  boolean_T rtb_u3ATPBP;
  boolean_T rtb_L72SB;
  boolean_T rtb_L72X34CTRL;
  boolean_T rtb_L72RSTCTRL_h;
  boolean_T rtb_L72X34B;
  boolean_T rtb_u3ATP_mo;
  boolean_T rtb_u3ATPBP_a;
  boolean_T rtb_L72SB_m;
  boolean_T rtb_L72X54CTRL;
  boolean_T rtb_L72RSTCTRL_n;
  boolean_T rtb_L72X54B;
  boolean_T rtb_u3ATP_k2;
  boolean_T rtb_u3ATPBP_c;
  boolean_T rtb_L72SB_d;
  boolean_T rtb_L72X74CTRL;
  boolean_T rtb_L72RSTCTRL_i;
  boolean_T rtb_L72X74B;
  boolean_T rtb_u3ATP_b;
  boolean_T rtb_u3ATPBP_p;
  boolean_T rtb_L72SB_l;
  boolean_T rtb_L74AX72CTRL;
  boolean_T rtb_L74RSTCTRL;
  boolean_T rtb_L74X72B;
  boolean_T rtb_u3BTP_k;
  boolean_T rtb_u3BTPBP_l;
  boolean_T rtb_L74SB;
  boolean_T rtb_L12L14BRS_l;
  boolean_T rtb_L12GRRD;
  boolean_T rtb_u2TP_l;
  boolean_T rtb_AND1_br;
  boolean_T rtb_L14AGRRD;
  boolean_T rtb_u4TP_bj;
  boolean_T rtb_L32L14BRS_gl;
  boolean_T rtb_L32GRRD;
  boolean_T rtb_u2TP_j;
  boolean_T rtb_L34X72RS_a;
  boolean_T rtb_L34GRRD;
  boolean_T rtb_u4TP_ei;
  boolean_T rtb_L54X72RS_h;
  boolean_T rtb_L54GRRD;
  boolean_T rtb_u4TP_b3;
  boolean_T rtb_AND1_ms;
  boolean_T rtb_L72GRRD;
  boolean_T rtb_u2TP_n;
  boolean_T rtb_L74X72RS_n;
  boolean_T rtb_L74GRRD;
  boolean_T rtb_u4TP_g;
  boolean_T rtb_u4APBDI;
  boolean_T rtb_u4ARRLS;
  boolean_T rtb_u4BPBDI;
  boolean_T rtb_ASDEP;
  boolean_T rtb_L14BAROK;
  boolean_T rtb_L14BGRDO_f;
  boolean_T rtb_L12L14BSREQ;
  boolean_T rtb_L14AX12SREQ;
  boolean_T rtb_L14AX32SREQ;
  boolean_T rtb_L14AX72SREQ;
  boolean_T rtb_L32L14BSREQ;
  boolean_T rtb_L34X72SREQ;
  boolean_T rtb_L54X72SREQ;
  boolean_T rtb_L72L14BSREQ;
  boolean_T rtb_L72X34SREQ;
  boolean_T rtb_L72X54SREQ;
  boolean_T rtb_L72X74SREQ;
  boolean_T rtb_L74X72SREQ;
  boolean_T rtb_W13ANREQ_g;
  boolean_T rtb_W13B73ANREQ_m;
  boolean_T rtb_W54NREQ_k;
  boolean_T rtb_W73BNREQ;
  boolean_T rtb_W13ARREQ_g;
  boolean_T rtb_W13B73ARREQ_d;
  boolean_T rtb_W54RREQ_i;
  boolean_T rtb_W73BRREQ;
  boolean_T rtb_W13AOOC_oz;
  boolean_T rtb_W13B73AOOC_jt;
  boolean_T rtb_W54OOC_g;
  boolean_T rtb_W73BOOC_g0;
  boolean_T rtb_L14ARRLSPBCTRL;
  boolean_T rtb_L14BRRLSPBCTRL;
  boolean_T rtb_X12RRLSPBCTRL;
  boolean_T rtb_X32RRLSPBCTRL;
  boolean_T rtb_X34RRLSPBCTRL;
  boolean_T rtb_X54RRLSPBCTRL;
  boolean_T rtb_X72RRLSPBCTRL;
  boolean_T rtb_X74RRLSPBCTRL;
  boolean_T rtb_W13ASWRLSPBCTRL;
  boolean_T rtb_W13B73ASWRLSPBCTRL;
  boolean_T rtb_W54SWRLSPBCTRL;
  boolean_T rtb_W73BSWRLSPBCTRL;
  boolean_T rtb_W13ASWINIT_d;
  boolean_T rtb_W13B73ASWINIT_l4;
  boolean_T rtb_W54SWINIT_i;
  boolean_T rtb_W73BSWINIT_p;
  boolean_T rtb_L12RSTCTRL_g;
  boolean_T rtb_L14ARSTCTRL_g;
  boolean_T rtb_L32RSTCTRL_n;
  boolean_T rtb_L34RSTCTRL_j;
  boolean_T rtb_L54RSTCTRL_b;
  boolean_T rtb_L72RSTCTRL_kn;
  boolean_T rtb_L74RSTCTRL_h;
  boolean_T rtb_L12L14BRS_gz;
  boolean_T rtb_L14AX12RS_j;
  boolean_T rtb_L14AX32RS_ne;
  boolean_T rtb_L14AX72RS_ng;
  boolean_T rtb_L32L14BRS_gj;
  boolean_T rtb_L34X72RS_p;
  boolean_T rtb_L54X72RS_j;
  boolean_T rtb_L72L14BRS_p;
  boolean_T rtb_L72L34BRS;
  boolean_T rtb_L72L54BRS;
  boolean_T rtb_L72L74BRS;
  boolean_T rtb_L74X72RS_d;
  boolean_T rtb_BUZZERDO;
  boolean_T rtb_COMM1FAILDO;
  boolean_T rtb_COMM2FAILDO;
  boolean_T rtb_POINTFAILDO;
  boolean_T rtb_SISTEM1FAILDO;
  boolean_T rtb_SISTEM2FAILDO;
  boolean_T rtb_TPRBANTUDO;
  boolean_T rtb_L12RGEDO;
  boolean_T rtb_L12WGEDO;
  boolean_T rtb_L14ARGEDO;
  boolean_T rtb_L14AWGEDO;
  boolean_T rtb_L14BRGEDO;
  boolean_T rtb_L14BWGEDO;
  boolean_T rtb_L32RGEDO;
  boolean_T rtb_L32WGEDO;
  boolean_T rtb_L34RGEDO;
  boolean_T rtb_L34WGEDO;
  boolean_T rtb_L54RGEDO;
  boolean_T rtb_L54WGEDO;
  boolean_T rtb_L72RGEDO;
  boolean_T rtb_L72WGEDO;
  boolean_T rtb_L74RGEDO;
  boolean_T rtb_L74WGEDO;
  boolean_T rtb_W13ABEDO;
  boolean_T rtb_W13ALEDO;
  boolean_T rtb_W13ANREDO;
  boolean_T rtb_W13ANTEDO;
  boolean_T rtb_W13ANWEDO;
  boolean_T rtb_W13ANWREDO;
  boolean_T rtb_W13ANWTEDO;
  boolean_T rtb_W13ARREDO;
  boolean_T rtb_W13ARTEDO;
  boolean_T rtb_W13ARWEDO;
  boolean_T rtb_W13ARWREDO;
  boolean_T rtb_W13ARWTEDO;
  boolean_T rtb_W13BBEDO;
  boolean_T rtb_W13BLEDO;
  boolean_T rtb_W13BNREDO;
  boolean_T rtb_W13BNTEDO;
  boolean_T rtb_W13BNWEDO;
  boolean_T rtb_W13BNWREDO;
  boolean_T rtb_W13BNWTEDO;
  boolean_T rtb_W13BRREDO;
  boolean_T rtb_W13BRTEDO;
  boolean_T rtb_W13BRWEDO;
  boolean_T rtb_W13BRWREDO;
  boolean_T rtb_W13BRWTEDO;
  boolean_T rtb_W54BEDO;
  boolean_T rtb_W54LEDO;
  boolean_T rtb_W54NREDO;
  boolean_T rtb_W54NTEDO;
  boolean_T rtb_W54NWEDO;
  boolean_T rtb_W54NWREDO;
  boolean_T rtb_W54NWTEDO;
  boolean_T rtb_W54RREDO;
  boolean_T rtb_W54RTEDO;
  boolean_T rtb_W54RWEDO;
  boolean_T rtb_W54RWREDO;
  boolean_T rtb_W54RWTEDO;
  boolean_T rtb_W73ABEDO;
  boolean_T rtb_W73ALEDO;
  boolean_T rtb_W73ANREDO;
  boolean_T rtb_W73ANTEDO;
  boolean_T rtb_W73ANWEDO;
  boolean_T rtb_W73ANWREDO;
  boolean_T rtb_W73ANWTEDO;
  boolean_T rtb_W73ARREDO;
  boolean_T rtb_W73ARTEDO;
  boolean_T rtb_W73ARWEDO;
  boolean_T rtb_W73ARWREDO;
  boolean_T rtb_W73ARWTEDO;
  boolean_T rtb_W73BBEDO;
  boolean_T rtb_W73BLEDO;
  boolean_T rtb_W73BNREDO;
  boolean_T rtb_W73BNTEDO;
  boolean_T rtb_W73BNWEDO;
  boolean_T rtb_W73BNWREDO;
  boolean_T rtb_W73BNWTEDO;
  boolean_T rtb_W73BRREDO;
  boolean_T rtb_W73BRTEDO;
  boolean_T rtb_W73BRWEDO;
  boolean_T rtb_W73BRWREDO;
  boolean_T rtb_W73BRWTEDO;
  boolean_T rtb_u2REDO;
  boolean_T rtb_u2TEDO;
  boolean_T rtb_u3REDO;
  boolean_T rtb_u3TEDO;
  boolean_T rtb_u4REDO;
  boolean_T rtb_u4TEDO;
  boolean_T rtb_u2REDO_j;
  boolean_T rtb_u2TEDO_n3;
  boolean_T rtb_u4REDO_b;
  boolean_T rtb_u4TEDO_f0;
  boolean_T rtb_u4REDO_md;
  boolean_T rtb_u4TEDO_g;
  boolean_T rtb_u2REDO_g;
  boolean_T rtb_u2TEDO_f;
  boolean_T rtb_u3AREDO;
  boolean_T rtb_u3ATEDO;
  boolean_T rtb_u3BREDO;
  boolean_T rtb_u3BTEDO;
  boolean_T rtb_u4REDO_i;
  boolean_T rtb_u4TEDO_o;
  boolean_T rtb_L12PBEDO;
  boolean_T rtb_L14APBEDO;
  boolean_T rtb_L14BPBEDO;
  boolean_T rtb_L32PBEDO;
  boolean_T rtb_L34PBEDO;
  boolean_T rtb_L54PBEDO;
  boolean_T rtb_L72PBEDO;
  boolean_T rtb_L74PBEDO;
  boolean_T rtb_X12PBEDO;
  boolean_T rtb_X32PBEDO;
  boolean_T rtb_X34PBEDO;
  boolean_T rtb_X54PBEDO;
  boolean_T rtb_X72PBEDO;
  boolean_T rtb_X73PBEDO;
  boolean_T rtb_X73PBEDO1;
  boolean_T rtb_INFEDO;
  boolean_T rtb_INFLEDO;
  boolean_T rtb_MAINBEDO;
  boolean_T rtb_MAINREDO;
  boolean_T rtb_MAINTEDO;
  boolean_T rtb_OUTFEDO;
  boolean_T rtb_OUTFLEDO;
  boolean_T rtb_TBWCTDO;
  boolean_T rtb_TPRCTDO;
  boolean_T rtb_TWTCTDO;
  boolean_T rtb_TZBINDDO;
  boolean_T rtb_TPRPBDI_b;
  int32_T clockTickCounter;
  int32_T clockTickCounter_m;
  boolean_T Memory_PreviousInput;
  boolean_T AND1_m;
  boolean_T AND14;
  boolean_T M_S_ES_21C;
  boolean_T M_S_WS_21C;
  boolean_T M_TP_21C;
  boolean_T M_GV_FLASH_1000;
  boolean_T M_CHK_V_NV;
  boolean_T M_TP_12;
  boolean_T M_TP_13;
  boolean_T M_TP_14;
  boolean_T M_TP_32;
  boolean_T M_TP_34;
  boolean_T M_TP_54;
  boolean_T M_TP_72;
  boolean_T M_TP_73A;
  boolean_T M_TP_73B;
  boolean_T M_TP_74;
  boolean_T M_S_ES_13;
  boolean_T M_S_ES_73A;
  boolean_T M_S_ES_73B;
  boolean_T M_S_WS_13;
  boolean_T M_S_WS_73A;
  boolean_T M_S_WS_73B;
  boolean_T M_W13A_NWC;
  boolean_T M_W13B_73A_NWC;
  boolean_T M_W54_NWC;
  boolean_T M_W73B_NWC;
  boolean_T M_W13A_NWP;
  boolean_T M_W13B_73A_NWP;
  boolean_T M_W54_NWP;
  boolean_T M_W73B_NWP;
  boolean_T M_W13A_NWZ;
  boolean_T M_W13B_73A_NWZ;
  boolean_T M_W54_NWZ;
  boolean_T M_W73B_NWZ;
  boolean_T M_W13A_NW_TE;
  boolean_T M_W13B_73A_NW_TE;
  boolean_T M_W54_NW_TE;
  boolean_T M_W73B_NW_TE;
  boolean_T M_W13A_RWC;
  boolean_T M_W13B_73A_RWC;
  boolean_T M_W54_RWC;
  boolean_T M_W73B_RWC;
  boolean_T M_W13A_RWP;
  boolean_T M_W13B_73A_RWP;
  boolean_T M_W54_RWP;
  boolean_T M_W73B_RWP;
  boolean_T M_W13A_RWZ;
  boolean_T M_W13B_73A_RWZ;
  boolean_T M_W54_RWZ;
  boolean_T M_W73B_RWZ;
  boolean_T M_W13A_RW_TE;
  boolean_T M_W13B_73A_RW_TE;
  boolean_T M_W54_RW_TE;
  boolean_T M_W73B_RW_TE;
  boolean_T M_W13A_L;
  boolean_T M_W13B_73A_L;
  boolean_T M_W54_L;
  boolean_T M_W73B_L;
  boolean_T M_W13A_LS;
  boolean_T M_W13B_73A_LS;
  boolean_T M_W54_LS;
  boolean_T M_W73B_LS;
  boolean_T M_W13A_SWRLS;
  boolean_T M_W13B_73A_SWRLS;
  boolean_T M_W54_SWRLS;
  boolean_T M_W73B_SWRLS;
  boolean_T M_W13A_TPZ;
  boolean_T M_W13B_73A_TPZ;
  boolean_T M_W54_TPZ;
  boolean_T M_W73B_TPZ;
  boolean_T M_DO_L12_GR;
  boolean_T M_DO_L14A_GR;
  boolean_T M_DO_L14B_GR;
  boolean_T M_DO_L32_GR;
  boolean_T M_DO_L34_GR;
  boolean_T M_DO_L54_GR;
  boolean_T M_DO_L72_GR;
  boolean_T M_DO_L74_GR;
  boolean_T M_AS_S_L12;
  boolean_T M_AS_S_L14A;
  boolean_T M_AS_S_L32;
  boolean_T M_AS_S_L34;
  boolean_T M_AS_S_L54;
  boolean_T M_AS_S_L72;
  boolean_T M_AS_S_L74;
  boolean_T M_RRLS_14B;
  boolean_T M_RRLS_12;
  boolean_T M_RRLS_32;
  boolean_T M_RRLS_34;
  boolean_T M_RRLS_54;
  boolean_T M_RRLS_72;
  boolean_T M_RRLS_74;
  boolean_T M_CBTC_TZB_IN;
  boolean_T CBI_FAIL_COMM1;
  boolean_T CBI_FAIL_COMM2;
  boolean_T CBI_FAIL_SYSTEM1;
  boolean_T CBI_FAIL_SYSTEM2;
  boolean_T DI_PBG_MANUAL;
  boolean_T DI_PBG_OTOMATIS;
  boolean_T DI_PBG_THB;
  boolean_T DI_PBSW_TBKW;
  boolean_T DI_PBSW_TBW;
  boolean_T DI_PBSW_TKGW;
  boolean_T DI_PBSW_TKW;
  boolean_T DI_PBSW_TWT;
  boolean_T DI_PBR_TPR;
  boolean_T DI_PBJ_12;
  boolean_T DI_PBJ_14A;
  boolean_T DI_PBJ_14B;
  boolean_T DI_PBJ_32;
  boolean_T DI_PBJ_34;
  boolean_T DI_PBJ_54;
  boolean_T DI_PBJ_72;
  boolean_T DI_PBJ_74;
  boolean_T DI_PBX_12;
  boolean_T DI_PBX_32;
  boolean_T DI_PBX_34;
  boolean_T DI_PBX_54;
  boolean_T DI_PBX_72;
  boolean_T DI_PBX_74;
  boolean_T DI_PBW_13A;
  boolean_T DI_PBW_13B_73A;
  boolean_T DI_PBW_54;
  boolean_T DI_PBW_73B;
  boolean_T DI_PBCBTC_TZB_ACK;
  boolean_T M_AS_DEP;
  boolean_T M_AR_L14B;
  boolean_T M_CHK_NV_V;
  boolean_T M_REQ_S_12_14;
  boolean_T M_REQ_S_14_12;
  boolean_T M_REQ_S_14_32;
  boolean_T M_REQ_S_14_72;
  boolean_T M_REQ_S_32_14;
  boolean_T M_REQ_S_34_72;
  boolean_T M_REQ_S_54_72;
  boolean_T M_REQ_S_72_14;
  boolean_T M_REQ_S_72_34;
  boolean_T M_REQ_S_72_54;
  boolean_T M_REQ_S_72_74;
  boolean_T M_REQ_S_74_72;
  boolean_T M_W13A_N_REQ;
  boolean_T M_W13B_73A_N_REQ;
  boolean_T M_W54_N_REQ;
  boolean_T M_W73B_N_REQ;
  boolean_T M_W13A_R_REQ;
  boolean_T M_W13B_73A_R_REQ;
  boolean_T M_W54_R_REQ;
  boolean_T M_W73B_R_REQ;
  boolean_T M_W13A_OOC;
  boolean_T M_W13B_73A_OOC;
  boolean_T M_W54_OOC;
  boolean_T M_W73B_OOC;
  boolean_T M_CTRL_RRLS_14B;
  boolean_T M_CTRL_RRLS_12;
  boolean_T M_CTRL_RRLS_32;
  boolean_T M_CTRL_RRLS_34;
  boolean_T M_CTRL_RRLS_54;
  boolean_T M_CTRL_RRLS_72;
  boolean_T M_CTRL_RRLS_74;
  boolean_T M_W13A_CTRL_SWRLS;
  boolean_T M_W13B_73A_CTRL_SWRLS;
  boolean_T M_W54_CTRL_SWRLS;
  boolean_T M_W73B_CTRL_SWRLS;
  boolean_T M_W13A_SWINIT;
  boolean_T M_W13B_73A_SWINIT;
  boolean_T M_W54_SWINIT;
  boolean_T M_W73B_SWINIT;
  boolean_T M_CTRL_RST_12;
  boolean_T M_CTRL_RST_14A;
  boolean_T M_CTRL_RST_32;
  boolean_T M_CTRL_RST_34;
  boolean_T M_CTRL_RST_54;
  boolean_T M_CTRL_RST_72;
  boolean_T M_CTRL_RST_74;
  boolean_T M_RS_12_14;
  boolean_T M_RS_14_12;
  boolean_T M_RS_14_32;
  boolean_T M_RS_14_72;
  boolean_T M_RS_32_14;
  boolean_T M_RS_34_72;
  boolean_T M_RS_54_72;
  boolean_T M_RS_72_14;
  boolean_T M_RS_72_34;
  boolean_T M_RS_72_54;
  boolean_T M_RS_72_74;
  boolean_T M_RS_74_72;
  boolean_T M_CBTC_TZB_ACK_OK;
  boolean_T DO_INDG_BUZZ;
  boolean_T DO_INDG_COMM1_FAIL;
  boolean_T DO_INDG_COMM2_FAIL;
  boolean_T DO_INDG_POINT;
  boolean_T DO_INDG_SYS1_FAIL;
  boolean_T DO_INDG_SYS2_FAIL;
  boolean_T DO_INDG_TPR_BANTU;
  boolean_T DO_INDJ_12_RGE;
  boolean_T DO_INDJ_12_WGE;
  boolean_T DO_INDJ_14A_RGE;
  boolean_T DO_INDJ_14A_WGE;
  boolean_T DO_INDJ_14B_RGE;
  boolean_T DO_INDJ_14B_WGE;
  boolean_T DO_INDJ_32_RGE;
  boolean_T DO_INDJ_32_WGE;
  boolean_T DO_INDJ_34_RGE;
  boolean_T DO_INDJ_34_WGE;
  boolean_T DO_INDJ_54_RGE;
  boolean_T DO_INDJ_54_WGE;
  boolean_T DO_INDJ_72_RGE;
  boolean_T DO_INDJ_72_WGE;
  boolean_T DO_INDJ_74_RGE;
  boolean_T DO_INDJ_74_WGE;
  boolean_T DO_INDSW_W13A_BE;
  boolean_T DO_INDSW_W13A_LE;
  boolean_T DO_INDSW_W13A_NRE;
  boolean_T DO_INDSW_W13A_NTE;
  boolean_T DO_INDSW_W13A_NWE;
  boolean_T DO_INDSW_W13A_NWRE;
  boolean_T DO_INDSW_W13A_NWTE;
  boolean_T DO_INDSW_W13A_RRE;
  boolean_T DO_INDSW_W13A_RTE;
  boolean_T DO_INDSW_W13A_RWE;
  boolean_T DO_INDSW_W13A_RWRE;
  boolean_T DO_INDSW_W13A_RWTE;
  boolean_T DO_INDSW_W13B_BE;
  boolean_T DO_INDSW_W13B_LE;
  boolean_T DO_INDSW_W13B_NRE;
  boolean_T DO_INDSW_W13B_NTE;
  boolean_T DO_INDSW_W13B_NWE;
  boolean_T DO_INDSW_W13B_NWRE;
  boolean_T DO_INDSW_W13B_NWTE;
  boolean_T DO_INDSW_W13B_RRE;
  boolean_T DO_INDSW_W13B_RTE;
  boolean_T DO_INDSW_W13B_RWE;
  boolean_T DO_INDSW_W13B_RWRE;
  boolean_T DO_INDSW_W13B_RWTE;
  boolean_T DO_INDSW_W54_BE;
  boolean_T DO_INDSW_W54_LE;
  boolean_T DO_INDSW_W54_NRE;
  boolean_T DO_INDSW_W54_NTE;
  boolean_T DO_INDSW_W54_NWE;
  boolean_T DO_INDSW_W54_NWRE;
  boolean_T DO_INDSW_W54_NWTE;
  boolean_T DO_INDSW_W54_RRE;
  boolean_T DO_INDSW_W54_RTE;
  boolean_T DO_INDSW_W54_RWE;
  boolean_T DO_INDSW_W54_RWRE;
  boolean_T DO_INDSW_W54_RWTE;
  boolean_T DO_INDSW_W73A_BE;
  boolean_T DO_INDSW_W73A_LE;
  boolean_T DO_INDSW_W73A_NRE;
  boolean_T DO_INDSW_W73A_NTE;
  boolean_T DO_INDSW_W73A_NWE;
  boolean_T DO_INDSW_W73A_NWRE;
  boolean_T DO_INDSW_W73A_NWTE;
  boolean_T DO_INDSW_W73A_RRE;
  boolean_T DO_INDSW_W73A_RTE;
  boolean_T DO_INDSW_W73A_RWE;
  boolean_T DO_INDSW_W73A_RWRE;
  boolean_T DO_INDSW_W73A_RWTE;
  boolean_T DO_INDSW_W73B_BE;
  boolean_T DO_INDSW_W73B_LE;
  boolean_T DO_INDSW_W73B_NRE;
  boolean_T DO_INDSW_W73B_NTE;
  boolean_T DO_INDSW_W73B_NWE;
  boolean_T DO_INDSW_W73B_NWRE;
  boolean_T DO_INDSW_W73B_NWTE;
  boolean_T DO_INDSW_W73B_RRE;
  boolean_T DO_INDSW_W73B_RTE;
  boolean_T DO_INDSW_W73B_RWE;
  boolean_T DO_INDSW_W73B_RWRE;
  boolean_T DO_INDSW_W73B_RWTE;
  boolean_T DO_INDT_RE_12;
  boolean_T DO_INDT_TE_12;
  boolean_T DO_INDT_RE_13;
  boolean_T DO_INDT_TE_13;
  boolean_T DO_INDT_RE_14;
  boolean_T DO_INDT_TE_14;
  boolean_T DO_INDT_RE_32;
  boolean_T DO_INDT_TE_32;
  boolean_T DO_INDT_RE_34;
  boolean_T DO_INDT_TE_34;
  boolean_T DO_INDT_RE_54;
  boolean_T DO_INDT_TE_54;
  boolean_T DO_INDT_RE_72;
  boolean_T DO_INDT_TE_72;
  boolean_T DO_INDT_RE_73A;
  boolean_T DO_INDT_TE_73A;
  boolean_T DO_INDT_RE_73B;
  boolean_T DO_INDT_TE_73B;
  boolean_T DO_INDT_RE_74;
  boolean_T DO_INDT_TE_74;
  boolean_T DO_INDPB_L12;
  boolean_T DO_INDPB_L14A;
  boolean_T DO_INDPB_L14B;
  boolean_T DO_INDPB_L32;
  boolean_T DO_INDPB_L34;
  boolean_T DO_INDPB_L54;
  boolean_T DO_INDPB_L72;
  boolean_T DO_INDPB_L74;
  boolean_T DO_INDPB_X12;
  boolean_T DO_INDPB_X32;
  boolean_T DO_INDPB_X34;
  boolean_T DO_INDPB_X54;
  boolean_T DO_INDPB_X72;
  boolean_T DO_INDPB_X74;
  boolean_T DO_INDAR_L14B;
  boolean_T DO_FE_IN;
  boolean_T DO_FLE_IN;
  boolean_T DO_FE_OUT;
  boolean_T DO_FLE_OUT;
  boolean_T DO_CT_TBW;
  boolean_T DO_CT_TPR;
  boolean_T DO_CT_TWT;
  boolean_T DO_INDCBTC_TZB;
  boolean_T M_GV_RR;
  boolean_T M_GV_RR_OK;
  boolean_T M_TPBP_73B;
  boolean_T M_TPBP_73A;
  boolean_T M_TPBP_13;
  boolean_T M_RD_L12_GR;
  boolean_T OR4;
  boolean_T NOT8;
  boolean_T M_RD_L14A_GR;
  boolean_T OR1_m;
  boolean_T NOT8_l;
  boolean_T M_RD_L32_GR;
  boolean_T OR4_b;
  boolean_T NOT8_b;
  boolean_T M_RD_L34_GR;
  boolean_T OR4_m;
  boolean_T NOT8_p;
  boolean_T M_RD_L54_GR;
  boolean_T OR4_g;
  boolean_T NOT8_pn;
  boolean_T M_RD_L72_GR;
  boolean_T OR4_p;
  boolean_T NOT8_n;
  boolean_T M_RD_L74_GR;
  boolean_T OR4_gc;
  boolean_T NOT8_c;
  boolean_T M_W13A_BLOCK;
  boolean_T M_W13B_73A_BLOCK;
  boolean_T M_W54_BLOCK;
  boolean_T M_W73B_BLOCK;
  boolean_T M_W13A_CTRL_CAL;
  boolean_T M_W13A_CTRL_TRAIL;
  boolean_T M_W13A_CTRL_RST;
  boolean_T M_W13A_CTRL_B;
  boolean_T M_W13A_OOC_RD;
  boolean_T M_W13A_BACK_TO_N;
  boolean_T M_W13A_BACK_TO_R;
  boolean_T M_W13A_N;
  boolean_T M_W13A_N_BLOCK;
  boolean_T M_W13A_R;
  boolean_T M_W13A_R_BLOCK;
  boolean_T M_W13A_START;
  boolean_T M_W13B_73A_CTRL_CAL;
  boolean_T M_W13B_73A_CTRL_TRAIL;
  boolean_T M_W13B_73A_CTRL_RST;
  boolean_T M_W13B_73A_CTRL_B;
  boolean_T M_W13B_73A_OOC_RD;
  boolean_T M_W13B_73A_BACK_TO_N;
  boolean_T M_W13B_73A_BACK_TO_R;
  boolean_T M_W13B_73A_N;
  boolean_T M_W13B_73A_N_BLOCK;
  boolean_T M_W13B_73A_R;
  boolean_T M_W13B_73A_R_BLOCK;
  boolean_T M_W13B_73A_START;
  boolean_T M_W54_CTRL_CAL;
  boolean_T M_W54_CTRL_TRAIL;
  boolean_T M_W54_CTRL_RST;
  boolean_T M_W54_CTRL_B;
  boolean_T M_W54_OOC_RD;
  boolean_T M_W54_BACK_TO_N;
  boolean_T M_W54_BACK_TO_R;
  boolean_T M_W54_N;
  boolean_T M_W54_N_BLOCK;
  boolean_T M_W54_R;
  boolean_T M_W54_R_BLOCK;
  boolean_T M_W54_START;
  boolean_T M_W73B_CTRL_CAL;
  boolean_T M_W73B_CTRL_TRAIL;
  boolean_T M_W73B_CTRL_RST;
  boolean_T M_W73B_CTRL_B;
  boolean_T M_W73B_OOC_RD;
  boolean_T M_W73B_BACK_TO_N;
  boolean_T M_W73B_BACK_TO_R;
  boolean_T M_W73B_N_BLOCK;
  boolean_T M_W73B_R_BLOCK;
  boolean_T M_W73B_START;
  boolean_T M_B_12_14;
  boolean_T M_B_14_12;
  boolean_T M_B_14_32;
  boolean_T M_B_14_72;
  boolean_T M_B_32_14;
  boolean_T M_B_34_72;
  boolean_T M_B_54_72;
  boolean_T M_B_72_14;
  boolean_T M_B_72_34;
  boolean_T M_B_72_54;
  boolean_T M_B_72_74;
  boolean_T M_B_74_72;
  boolean_T M_FAIL_COMM1_F;
  boolean_T M_FAIL_COMM2_F;
  boolean_T M_FAIL_SYSTEM1_F;
  boolean_T M_FAIL_SYSTEM2_F;
  boolean_T M_CTRL_AA;
  boolean_T M_PBCTRL_14_12;
  boolean_T M_PBCTRL_14_32;
  boolean_T M_PBCTRL_72_14;
  boolean_T M_PBCTRL_72_34;
  boolean_T M_PBCTRL_72_54;
  boolean_T M_PBCTRL_72_74;
  boolean_T M_PBCTRL_12_14;
  boolean_T M_PBCTRL_32_14;
  boolean_T M_PBCTRL_14_72;
  boolean_T M_PBCTRL_34_72;
  boolean_T M_PBCTRL_54_72;
  boolean_T M_PBCTRL_74_72;
  boolean_T M_W13A_F_ACK;
  boolean_T M_W13A_FAIL;
  boolean_T M_W13A_CTRL_TRAIL_Z;
  boolean_T M_W13B_73A_F_ACK;
  boolean_T M_W13B_73A_FAIL;
  boolean_T M_W13B_73A_CTRL_TRAIL_Z;
  boolean_T M_W54_F_ACK;
  boolean_T M_W54_FAIL;
  boolean_T M_W54_CTRL_TRAIL_Z;
  boolean_T M_W73B_F_ACK;
  boolean_T M_W73B_FAIL;
  boolean_T M_B_L12;
  boolean_T M_B_L14A;
  boolean_T M_B_L32;
  boolean_T M_B_L34;
  boolean_T M_B_L54;
  boolean_T M_B_L72;
  int32_T clockTickCounter_0;
  int32_T clockTickCounter_m_0;

  /* DiscretePulseGenerator: '<S3>/1S' */
  clockTickCounter_m_0 = NONVITALDEPOT_DW.clockTickCounter_m;

  /* DiscretePulseGenerator: '<S3>/0.5S' */
  clockTickCounter_0 = NONVITALDEPOT_DW.clockTickCounter;
  M_B_L72 = NONVITALDEPOT_DW.M_B_L72;
  M_B_L54 = NONVITALDEPOT_DW.M_B_L54;
  M_B_L34 = NONVITALDEPOT_DW.M_B_L34;
  M_B_L32 = NONVITALDEPOT_DW.M_B_L32;
  M_B_L14A = NONVITALDEPOT_DW.M_B_L14A;
  M_B_L12 = NONVITALDEPOT_DW.M_B_L12;
  M_W73B_FAIL = NONVITALDEPOT_DW.M_W73B_FAIL;
  M_W73B_F_ACK = NONVITALDEPOT_DW.M_W73B_F_ACK;
  M_W54_CTRL_TRAIL_Z = NONVITALDEPOT_DW.M_W54_CTRL_TRAIL_Z;
  M_W54_FAIL = NONVITALDEPOT_DW.M_W54_FAIL;
  M_W54_F_ACK = NONVITALDEPOT_DW.M_W54_F_ACK;
  M_W13B_73A_CTRL_TRAIL_Z = NONVITALDEPOT_DW.M_W13B_73A_CTRL_TRAIL_Z;
  M_W13B_73A_FAIL = NONVITALDEPOT_DW.M_W13B_73A_FAIL;
  M_W13B_73A_F_ACK = NONVITALDEPOT_DW.M_W13B_73A_F_ACK;
  M_W13A_CTRL_TRAIL_Z = NONVITALDEPOT_DW.M_W13A_CTRL_TRAIL_Z;
  M_W13A_FAIL = NONVITALDEPOT_DW.M_W13A_FAIL;
  M_W13A_F_ACK = NONVITALDEPOT_DW.M_W13A_F_ACK;
  M_PBCTRL_74_72 = NONVITALDEPOT_DW.M_PBCTRL_74_72;
  M_PBCTRL_54_72 = NONVITALDEPOT_DW.M_PBCTRL_54_72;
  M_PBCTRL_34_72 = NONVITALDEPOT_DW.M_PBCTRL_34_72;
  M_PBCTRL_14_72 = NONVITALDEPOT_DW.M_PBCTRL_14_72;
  M_PBCTRL_32_14 = NONVITALDEPOT_DW.M_PBCTRL_32_14;
  M_PBCTRL_12_14 = NONVITALDEPOT_DW.M_PBCTRL_12_14;
  M_PBCTRL_72_74 = NONVITALDEPOT_DW.M_PBCTRL_72_74;
  M_PBCTRL_72_54 = NONVITALDEPOT_DW.M_PBCTRL_72_54;
  M_PBCTRL_72_34 = NONVITALDEPOT_DW.M_PBCTRL_72_34;
  M_PBCTRL_72_14 = NONVITALDEPOT_DW.M_PBCTRL_72_14;
  M_PBCTRL_14_32 = NONVITALDEPOT_DW.M_PBCTRL_14_32;
  M_PBCTRL_14_12 = NONVITALDEPOT_DW.M_PBCTRL_14_12;
  M_CTRL_AA = NONVITALDEPOT_DW.M_CTRL_AA;
  M_FAIL_SYSTEM2_F = NONVITALDEPOT_DW.M_FAIL_SYSTEM2_F;
  M_FAIL_SYSTEM1_F = NONVITALDEPOT_DW.M_FAIL_SYSTEM1_F;
  M_FAIL_COMM2_F = NONVITALDEPOT_DW.M_FAIL_COMM2_F;
  M_FAIL_COMM1_F = NONVITALDEPOT_DW.M_FAIL_COMM1_F;
  M_B_74_72 = NONVITALDEPOT_DW.M_B_74_72;
  M_B_72_74 = NONVITALDEPOT_DW.M_B_72_74;
  M_B_72_54 = NONVITALDEPOT_DW.M_B_72_54;
  M_B_72_34 = NONVITALDEPOT_DW.M_B_72_34;
  M_B_72_14 = NONVITALDEPOT_DW.M_B_72_14;
  M_B_54_72 = NONVITALDEPOT_DW.M_B_54_72;
  M_B_34_72 = NONVITALDEPOT_DW.M_B_34_72;
  M_B_32_14 = NONVITALDEPOT_DW.M_B_32_14;
  M_B_14_72 = NONVITALDEPOT_DW.M_B_14_72;
  M_B_14_32 = NONVITALDEPOT_DW.M_B_14_32;
  M_B_14_12 = NONVITALDEPOT_DW.M_B_14_12;
  M_B_12_14 = NONVITALDEPOT_DW.M_B_12_14;
  M_W73B_START = NONVITALDEPOT_DW.M_W73B_START;
  M_W73B_R_BLOCK = NONVITALDEPOT_DW.M_W73B_R_BLOCK;
  M_W73B_N_BLOCK = NONVITALDEPOT_DW.M_W73B_N_BLOCK;
  M_W73B_BACK_TO_R = NONVITALDEPOT_DW.M_W73B_BACK_TO_R;
  M_W73B_BACK_TO_N = NONVITALDEPOT_DW.M_W73B_BACK_TO_N;
  M_W73B_OOC_RD = NONVITALDEPOT_DW.M_W73B_OOC_RD;
  M_W73B_CTRL_B = NONVITALDEPOT_DW.M_W73B_CTRL_B;
  M_W73B_CTRL_RST = NONVITALDEPOT_DW.M_W73B_CTRL_RST;
  M_W73B_CTRL_TRAIL = NONVITALDEPOT_DW.M_W73B_CTRL_TRAIL;
  M_W73B_CTRL_CAL = NONVITALDEPOT_DW.M_W73B_CTRL_CAL;
  M_W54_START = NONVITALDEPOT_DW.M_W54_START;
  M_W54_R_BLOCK = NONVITALDEPOT_DW.M_W54_R_BLOCK;
  M_W54_R = NONVITALDEPOT_DW.M_W54_R;
  M_W54_N_BLOCK = NONVITALDEPOT_DW.M_W54_N_BLOCK;
  M_W54_N = NONVITALDEPOT_DW.M_W54_N;
  M_W54_BACK_TO_R = NONVITALDEPOT_DW.M_W54_BACK_TO_R;
  M_W54_BACK_TO_N = NONVITALDEPOT_DW.M_W54_BACK_TO_N;
  M_W54_OOC_RD = NONVITALDEPOT_DW.M_W54_OOC_RD;
  M_W54_CTRL_B = NONVITALDEPOT_DW.M_W54_CTRL_B;
  M_W54_CTRL_RST = NONVITALDEPOT_DW.M_W54_CTRL_RST;
  M_W54_CTRL_TRAIL = NONVITALDEPOT_DW.M_W54_CTRL_TRAIL;
  M_W54_CTRL_CAL = NONVITALDEPOT_DW.M_W54_CTRL_CAL;
  M_W13B_73A_START = NONVITALDEPOT_DW.M_W13B_73A_START;
  M_W13B_73A_R_BLOCK = NONVITALDEPOT_DW.M_W13B_73A_R_BLOCK;
  M_W13B_73A_R = NONVITALDEPOT_DW.M_W13B_73A_R;
  M_W13B_73A_N_BLOCK = NONVITALDEPOT_DW.M_W13B_73A_N_BLOCK;
  M_W13B_73A_N = NONVITALDEPOT_DW.M_W13B_73A_N;
  M_W13B_73A_BACK_TO_R = NONVITALDEPOT_DW.M_W13B_73A_BACK_TO_R;
  M_W13B_73A_BACK_TO_N = NONVITALDEPOT_DW.M_W13B_73A_BACK_TO_N;
  M_W13B_73A_OOC_RD = NONVITALDEPOT_DW.M_W13B_73A_OOC_RD;
  M_W13B_73A_CTRL_B = NONVITALDEPOT_DW.M_W13B_73A_CTRL_B;
  M_W13B_73A_CTRL_RST = NONVITALDEPOT_DW.M_W13B_73A_CTRL_RST;
  M_W13B_73A_CTRL_TRAIL = NONVITALDEPOT_DW.M_W13B_73A_CTRL_TRAIL;
  M_W13B_73A_CTRL_CAL = NONVITALDEPOT_DW.M_W13B_73A_CTRL_CAL;
  M_W13A_START = NONVITALDEPOT_DW.M_W13A_START;
  M_W13A_R_BLOCK = NONVITALDEPOT_DW.M_W13A_R_BLOCK;
  M_W13A_R = NONVITALDEPOT_DW.M_W13A_R;
  M_W13A_N_BLOCK = NONVITALDEPOT_DW.M_W13A_N_BLOCK;
  M_W13A_N = NONVITALDEPOT_DW.M_W13A_N;
  M_W13A_BACK_TO_R = NONVITALDEPOT_DW.M_W13A_BACK_TO_R;
  M_W13A_BACK_TO_N = NONVITALDEPOT_DW.M_W13A_BACK_TO_N;
  M_W13A_OOC_RD = NONVITALDEPOT_DW.M_W13A_OOC_RD;
  M_W13A_CTRL_B = NONVITALDEPOT_DW.M_W13A_CTRL_B;
  M_W13A_CTRL_RST = NONVITALDEPOT_DW.M_W13A_CTRL_RST;
  M_W13A_CTRL_TRAIL = NONVITALDEPOT_DW.M_W13A_CTRL_TRAIL;
  M_W13A_CTRL_CAL = NONVITALDEPOT_DW.M_W13A_CTRL_CAL;
  M_W73B_BLOCK = NONVITALDEPOT_DW.M_W73B_BLOCK;
  M_W54_BLOCK = NONVITALDEPOT_DW.M_W54_BLOCK;
  M_W13B_73A_BLOCK = NONVITALDEPOT_DW.M_W13B_73A_BLOCK;
  M_W13A_BLOCK = NONVITALDEPOT_DW.M_W13A_BLOCK;
  NOT8_c = NONVITALDEPOT_DW.NOT8_c;
  OR4_gc = NONVITALDEPOT_DW.OR4_gc;
  M_RD_L74_GR = NONVITALDEPOT_DW.M_RD_L74_GR;
  NOT8_n = NONVITALDEPOT_DW.NOT8_n;
  OR4_p = NONVITALDEPOT_DW.OR4_p;
  M_RD_L72_GR = NONVITALDEPOT_DW.M_RD_L72_GR;
  NOT8_pn = NONVITALDEPOT_DW.NOT8_pn;
  OR4_g = NONVITALDEPOT_DW.OR4_g;
  M_RD_L54_GR = NONVITALDEPOT_DW.M_RD_L54_GR;
  NOT8_p = NONVITALDEPOT_DW.NOT8_p;
  OR4_m = NONVITALDEPOT_DW.OR4_m;
  M_RD_L34_GR = NONVITALDEPOT_DW.M_RD_L34_GR;
  NOT8_b = NONVITALDEPOT_DW.NOT8_b;
  OR4_b = NONVITALDEPOT_DW.OR4_b;
  M_RD_L32_GR = NONVITALDEPOT_DW.M_RD_L32_GR;
  NOT8_l = NONVITALDEPOT_DW.NOT8_l;
  OR1_m = NONVITALDEPOT_DW.OR1_m;
  M_RD_L14A_GR = NONVITALDEPOT_DW.M_RD_L14A_GR;
  NOT8 = NONVITALDEPOT_DW.NOT8;
  OR4 = NONVITALDEPOT_DW.OR4;
  M_RD_L12_GR = NONVITALDEPOT_DW.M_RD_L12_GR;
  M_TPBP_13 = NONVITALDEPOT_DW.M_TPBP_13;
  M_TPBP_73A = NONVITALDEPOT_DW.M_TPBP_73A;
  M_TPBP_73B = NONVITALDEPOT_DW.M_TPBP_73B;
  M_GV_RR_OK = NONVITALDEPOT_DW.M_GV_RR_OK;
  M_GV_RR = NONVITALDEPOT_DW.M_GV_RR;
  DO_INDCBTC_TZB = NONVITALDEPOT_DW.DO_INDCBTC_TZB;
  DO_CT_TWT = NONVITALDEPOT_DW.DO_CT_TWT;
  DO_CT_TPR = NONVITALDEPOT_DW.DO_CT_TPR;
  DO_CT_TBW = NONVITALDEPOT_DW.DO_CT_TBW;
  DO_FLE_OUT = NONVITALDEPOT_DW.DO_FLE_OUT;
  DO_FE_OUT = NONVITALDEPOT_DW.DO_FE_OUT;
  DO_FLE_IN = NONVITALDEPOT_DW.DO_FLE_IN;
  DO_FE_IN = NONVITALDEPOT_DW.DO_FE_IN;
  DO_INDAR_L14B = NONVITALDEPOT_DW.DO_INDAR_L14B;
  DO_INDPB_X74 = NONVITALDEPOT_DW.DO_INDPB_X74;
  DO_INDPB_X72 = NONVITALDEPOT_DW.DO_INDPB_X72;
  DO_INDPB_X54 = NONVITALDEPOT_DW.DO_INDPB_X54;
  DO_INDPB_X34 = NONVITALDEPOT_DW.DO_INDPB_X34;
  DO_INDPB_X32 = NONVITALDEPOT_DW.DO_INDPB_X32;
  DO_INDPB_X12 = NONVITALDEPOT_DW.DO_INDPB_X12;
  DO_INDPB_L74 = NONVITALDEPOT_DW.DO_INDPB_L74;
  DO_INDPB_L72 = NONVITALDEPOT_DW.DO_INDPB_L72;
  DO_INDPB_L54 = NONVITALDEPOT_DW.DO_INDPB_L54;
  DO_INDPB_L34 = NONVITALDEPOT_DW.DO_INDPB_L34;
  DO_INDPB_L32 = NONVITALDEPOT_DW.DO_INDPB_L32;
  DO_INDPB_L14B = NONVITALDEPOT_DW.DO_INDPB_L14B;
  DO_INDPB_L14A = NONVITALDEPOT_DW.DO_INDPB_L14A;
  DO_INDPB_L12 = NONVITALDEPOT_DW.DO_INDPB_L12;
  DO_INDT_TE_74 = NONVITALDEPOT_DW.DO_INDT_TE_74;
  DO_INDT_RE_74 = NONVITALDEPOT_DW.DO_INDT_RE_74;
  DO_INDT_TE_73B = NONVITALDEPOT_DW.DO_INDT_TE_73B;
  DO_INDT_RE_73B = NONVITALDEPOT_DW.DO_INDT_RE_73B;
  DO_INDT_TE_73A = NONVITALDEPOT_DW.DO_INDT_TE_73A;
  DO_INDT_RE_73A = NONVITALDEPOT_DW.DO_INDT_RE_73A;
  DO_INDT_TE_72 = NONVITALDEPOT_DW.DO_INDT_TE_72;
  DO_INDT_RE_72 = NONVITALDEPOT_DW.DO_INDT_RE_72;
  DO_INDT_TE_54 = NONVITALDEPOT_DW.DO_INDT_TE_54;
  DO_INDT_RE_54 = NONVITALDEPOT_DW.DO_INDT_RE_54;
  DO_INDT_TE_34 = NONVITALDEPOT_DW.DO_INDT_TE_34;
  DO_INDT_RE_34 = NONVITALDEPOT_DW.DO_INDT_RE_34;
  DO_INDT_TE_32 = NONVITALDEPOT_DW.DO_INDT_TE_32;
  DO_INDT_RE_32 = NONVITALDEPOT_DW.DO_INDT_RE_32;
  DO_INDT_TE_14 = NONVITALDEPOT_DW.DO_INDT_TE_14;
  DO_INDT_RE_14 = NONVITALDEPOT_DW.DO_INDT_RE_14;
  DO_INDT_TE_13 = NONVITALDEPOT_DW.DO_INDT_TE_13;
  DO_INDT_RE_13 = NONVITALDEPOT_DW.DO_INDT_RE_13;
  DO_INDT_TE_12 = NONVITALDEPOT_DW.DO_INDT_TE_12;
  DO_INDT_RE_12 = NONVITALDEPOT_DW.DO_INDT_RE_12;
  DO_INDSW_W73B_RWTE = NONVITALDEPOT_DW.DO_INDSW_W73B_RWTE;
  DO_INDSW_W73B_RWRE = NONVITALDEPOT_DW.DO_INDSW_W73B_RWRE;
  DO_INDSW_W73B_RWE = NONVITALDEPOT_DW.DO_INDSW_W73B_RWE;
  DO_INDSW_W73B_RTE = NONVITALDEPOT_DW.DO_INDSW_W73B_RTE;
  DO_INDSW_W73B_RRE = NONVITALDEPOT_DW.DO_INDSW_W73B_RRE;
  DO_INDSW_W73B_NWTE = NONVITALDEPOT_DW.DO_INDSW_W73B_NWTE;
  DO_INDSW_W73B_NWRE = NONVITALDEPOT_DW.DO_INDSW_W73B_NWRE;
  DO_INDSW_W73B_NWE = NONVITALDEPOT_DW.DO_INDSW_W73B_NWE;
  DO_INDSW_W73B_NTE = NONVITALDEPOT_DW.DO_INDSW_W73B_NTE;
  DO_INDSW_W73B_NRE = NONVITALDEPOT_DW.DO_INDSW_W73B_NRE;
  DO_INDSW_W73B_LE = NONVITALDEPOT_DW.DO_INDSW_W73B_LE;
  DO_INDSW_W73B_BE = NONVITALDEPOT_DW.DO_INDSW_W73B_BE;
  DO_INDSW_W73A_RWTE = NONVITALDEPOT_DW.DO_INDSW_W73A_RWTE;
  DO_INDSW_W73A_RWRE = NONVITALDEPOT_DW.DO_INDSW_W73A_RWRE;
  DO_INDSW_W73A_RWE = NONVITALDEPOT_DW.DO_INDSW_W73A_RWE;
  DO_INDSW_W73A_RTE = NONVITALDEPOT_DW.DO_INDSW_W73A_RTE;
  DO_INDSW_W73A_RRE = NONVITALDEPOT_DW.DO_INDSW_W73A_RRE;
  DO_INDSW_W73A_NWTE = NONVITALDEPOT_DW.DO_INDSW_W73A_NWTE;
  DO_INDSW_W73A_NWRE = NONVITALDEPOT_DW.DO_INDSW_W73A_NWRE;
  DO_INDSW_W73A_NWE = NONVITALDEPOT_DW.DO_INDSW_W73A_NWE;
  DO_INDSW_W73A_NTE = NONVITALDEPOT_DW.DO_INDSW_W73A_NTE;
  DO_INDSW_W73A_NRE = NONVITALDEPOT_DW.DO_INDSW_W73A_NRE;
  DO_INDSW_W73A_LE = NONVITALDEPOT_DW.DO_INDSW_W73A_LE;
  DO_INDSW_W73A_BE = NONVITALDEPOT_DW.DO_INDSW_W73A_BE;
  DO_INDSW_W54_RWTE = NONVITALDEPOT_DW.DO_INDSW_W54_RWTE;
  DO_INDSW_W54_RWRE = NONVITALDEPOT_DW.DO_INDSW_W54_RWRE;
  DO_INDSW_W54_RWE = NONVITALDEPOT_DW.DO_INDSW_W54_RWE;
  DO_INDSW_W54_RTE = NONVITALDEPOT_DW.DO_INDSW_W54_RTE;
  DO_INDSW_W54_RRE = NONVITALDEPOT_DW.DO_INDSW_W54_RRE;
  DO_INDSW_W54_NWTE = NONVITALDEPOT_DW.DO_INDSW_W54_NWTE;
  DO_INDSW_W54_NWRE = NONVITALDEPOT_DW.DO_INDSW_W54_NWRE;
  DO_INDSW_W54_NWE = NONVITALDEPOT_DW.DO_INDSW_W54_NWE;
  DO_INDSW_W54_NTE = NONVITALDEPOT_DW.DO_INDSW_W54_NTE;
  DO_INDSW_W54_NRE = NONVITALDEPOT_DW.DO_INDSW_W54_NRE;
  DO_INDSW_W54_LE = NONVITALDEPOT_DW.DO_INDSW_W54_LE;
  DO_INDSW_W54_BE = NONVITALDEPOT_DW.DO_INDSW_W54_BE;
  DO_INDSW_W13B_RWTE = NONVITALDEPOT_DW.DO_INDSW_W13B_RWTE;
  DO_INDSW_W13B_RWRE = NONVITALDEPOT_DW.DO_INDSW_W13B_RWRE;
  DO_INDSW_W13B_RWE = NONVITALDEPOT_DW.DO_INDSW_W13B_RWE;
  DO_INDSW_W13B_RTE = NONVITALDEPOT_DW.DO_INDSW_W13B_RTE;
  DO_INDSW_W13B_RRE = NONVITALDEPOT_DW.DO_INDSW_W13B_RRE;
  DO_INDSW_W13B_NWTE = NONVITALDEPOT_DW.DO_INDSW_W13B_NWTE;
  DO_INDSW_W13B_NWRE = NONVITALDEPOT_DW.DO_INDSW_W13B_NWRE;
  DO_INDSW_W13B_NWE = NONVITALDEPOT_DW.DO_INDSW_W13B_NWE;
  DO_INDSW_W13B_NTE = NONVITALDEPOT_DW.DO_INDSW_W13B_NTE;
  DO_INDSW_W13B_NRE = NONVITALDEPOT_DW.DO_INDSW_W13B_NRE;
  DO_INDSW_W13B_LE = NONVITALDEPOT_DW.DO_INDSW_W13B_LE;
  DO_INDSW_W13B_BE = NONVITALDEPOT_DW.DO_INDSW_W13B_BE;
  DO_INDSW_W13A_RWTE = NONVITALDEPOT_DW.DO_INDSW_W13A_RWTE;
  DO_INDSW_W13A_RWRE = NONVITALDEPOT_DW.DO_INDSW_W13A_RWRE;
  DO_INDSW_W13A_RWE = NONVITALDEPOT_DW.DO_INDSW_W13A_RWE;
  DO_INDSW_W13A_RTE = NONVITALDEPOT_DW.DO_INDSW_W13A_RTE;
  DO_INDSW_W13A_RRE = NONVITALDEPOT_DW.DO_INDSW_W13A_RRE;
  DO_INDSW_W13A_NWTE = NONVITALDEPOT_DW.DO_INDSW_W13A_NWTE;
  DO_INDSW_W13A_NWRE = NONVITALDEPOT_DW.DO_INDSW_W13A_NWRE;
  DO_INDSW_W13A_NWE = NONVITALDEPOT_DW.DO_INDSW_W13A_NWE;
  DO_INDSW_W13A_NTE = NONVITALDEPOT_DW.DO_INDSW_W13A_NTE;
  DO_INDSW_W13A_NRE = NONVITALDEPOT_DW.DO_INDSW_W13A_NRE;
  DO_INDSW_W13A_LE = NONVITALDEPOT_DW.DO_INDSW_W13A_LE;
  DO_INDSW_W13A_BE = NONVITALDEPOT_DW.DO_INDSW_W13A_BE;
  DO_INDJ_74_WGE = NONVITALDEPOT_DW.DO_INDJ_74_WGE;
  DO_INDJ_74_RGE = NONVITALDEPOT_DW.DO_INDJ_74_RGE;
  DO_INDJ_72_WGE = NONVITALDEPOT_DW.DO_INDJ_72_WGE;
  DO_INDJ_72_RGE = NONVITALDEPOT_DW.DO_INDJ_72_RGE;
  DO_INDJ_54_WGE = NONVITALDEPOT_DW.DO_INDJ_54_WGE;
  DO_INDJ_54_RGE = NONVITALDEPOT_DW.DO_INDJ_54_RGE;
  DO_INDJ_34_WGE = NONVITALDEPOT_DW.DO_INDJ_34_WGE;
  DO_INDJ_34_RGE = NONVITALDEPOT_DW.DO_INDJ_34_RGE;
  DO_INDJ_32_WGE = NONVITALDEPOT_DW.DO_INDJ_32_WGE;
  DO_INDJ_32_RGE = NONVITALDEPOT_DW.DO_INDJ_32_RGE;
  DO_INDJ_14B_WGE = NONVITALDEPOT_DW.DO_INDJ_14B_WGE;
  DO_INDJ_14B_RGE = NONVITALDEPOT_DW.DO_INDJ_14B_RGE;
  DO_INDJ_14A_WGE = NONVITALDEPOT_DW.DO_INDJ_14A_WGE;
  DO_INDJ_14A_RGE = NONVITALDEPOT_DW.DO_INDJ_14A_RGE;
  DO_INDJ_12_WGE = NONVITALDEPOT_DW.DO_INDJ_12_WGE;
  DO_INDJ_12_RGE = NONVITALDEPOT_DW.DO_INDJ_12_RGE;
  DO_INDG_TPR_BANTU = NONVITALDEPOT_DW.DO_INDG_TPR_BANTU;
  DO_INDG_SYS2_FAIL = NONVITALDEPOT_DW.DO_INDG_SYS2_FAIL;
  DO_INDG_SYS1_FAIL = NONVITALDEPOT_DW.DO_INDG_SYS1_FAIL;
  DO_INDG_POINT = NONVITALDEPOT_DW.DO_INDG_POINT;
  DO_INDG_COMM2_FAIL = NONVITALDEPOT_DW.DO_INDG_COMM2_FAIL;
  DO_INDG_COMM1_FAIL = NONVITALDEPOT_DW.DO_INDG_COMM1_FAIL;
  DO_INDG_BUZZ = NONVITALDEPOT_DW.DO_INDG_BUZZ;
  M_CBTC_TZB_ACK_OK = NONVITALDEPOT_DW.M_CBTC_TZB_ACK_OK;
  M_RS_74_72 = NONVITALDEPOT_DW.M_RS_74_72;
  M_RS_72_74 = NONVITALDEPOT_DW.M_RS_72_74;
  M_RS_72_54 = NONVITALDEPOT_DW.M_RS_72_54;
  M_RS_72_34 = NONVITALDEPOT_DW.M_RS_72_34;
  M_RS_72_14 = NONVITALDEPOT_DW.M_RS_72_14;
  M_RS_54_72 = NONVITALDEPOT_DW.M_RS_54_72;
  M_RS_34_72 = NONVITALDEPOT_DW.M_RS_34_72;
  M_RS_32_14 = NONVITALDEPOT_DW.M_RS_32_14;
  M_RS_14_72 = NONVITALDEPOT_DW.M_RS_14_72;
  M_RS_14_32 = NONVITALDEPOT_DW.M_RS_14_32;
  M_RS_14_12 = NONVITALDEPOT_DW.M_RS_14_12;
  M_RS_12_14 = NONVITALDEPOT_DW.M_RS_12_14;
  M_CTRL_RST_74 = NONVITALDEPOT_DW.M_CTRL_RST_74;
  M_CTRL_RST_72 = NONVITALDEPOT_DW.M_CTRL_RST_72;
  M_CTRL_RST_54 = NONVITALDEPOT_DW.M_CTRL_RST_54;
  M_CTRL_RST_34 = NONVITALDEPOT_DW.M_CTRL_RST_34;
  M_CTRL_RST_32 = NONVITALDEPOT_DW.M_CTRL_RST_32;
  M_CTRL_RST_14A = NONVITALDEPOT_DW.M_CTRL_RST_14A;
  M_CTRL_RST_12 = NONVITALDEPOT_DW.M_CTRL_RST_12;
  M_W73B_SWINIT = NONVITALDEPOT_DW.M_W73B_SWINIT;
  M_W54_SWINIT = NONVITALDEPOT_DW.M_W54_SWINIT;
  M_W13B_73A_SWINIT = NONVITALDEPOT_DW.M_W13B_73A_SWINIT;
  M_W13A_SWINIT = NONVITALDEPOT_DW.M_W13A_SWINIT;
  M_W73B_CTRL_SWRLS = NONVITALDEPOT_DW.M_W73B_CTRL_SWRLS;
  M_W54_CTRL_SWRLS = NONVITALDEPOT_DW.M_W54_CTRL_SWRLS;
  M_W13B_73A_CTRL_SWRLS = NONVITALDEPOT_DW.M_W13B_73A_CTRL_SWRLS;
  M_W13A_CTRL_SWRLS = NONVITALDEPOT_DW.M_W13A_CTRL_SWRLS;
  M_CTRL_RRLS_74 = NONVITALDEPOT_DW.M_CTRL_RRLS_74;
  M_CTRL_RRLS_72 = NONVITALDEPOT_DW.M_CTRL_RRLS_72;
  M_CTRL_RRLS_54 = NONVITALDEPOT_DW.M_CTRL_RRLS_54;
  M_CTRL_RRLS_34 = NONVITALDEPOT_DW.M_CTRL_RRLS_34;
  M_CTRL_RRLS_32 = NONVITALDEPOT_DW.M_CTRL_RRLS_32;
  M_CTRL_RRLS_12 = NONVITALDEPOT_DW.M_CTRL_RRLS_12;
  M_CTRL_RRLS_14B = NONVITALDEPOT_DW.M_CTRL_RRLS_14B;
  M_W73B_OOC = NONVITALDEPOT_DW.M_W73B_OOC;
  M_W54_OOC = NONVITALDEPOT_DW.M_W54_OOC;
  M_W13B_73A_OOC = NONVITALDEPOT_DW.M_W13B_73A_OOC;
  M_W13A_OOC = NONVITALDEPOT_DW.M_W13A_OOC;
  M_W73B_R_REQ = NONVITALDEPOT_DW.M_W73B_R_REQ;
  M_W54_R_REQ = NONVITALDEPOT_DW.M_W54_R_REQ;
  M_W13B_73A_R_REQ = NONVITALDEPOT_DW.M_W13B_73A_R_REQ;
  M_W13A_R_REQ = NONVITALDEPOT_DW.M_W13A_R_REQ;
  M_W73B_N_REQ = NONVITALDEPOT_DW.M_W73B_N_REQ;
  M_W54_N_REQ = NONVITALDEPOT_DW.M_W54_N_REQ;
  M_W13B_73A_N_REQ = NONVITALDEPOT_DW.M_W13B_73A_N_REQ;
  M_W13A_N_REQ = NONVITALDEPOT_DW.M_W13A_N_REQ;
  M_REQ_S_74_72 = NONVITALDEPOT_DW.M_REQ_S_74_72;
  M_REQ_S_72_74 = NONVITALDEPOT_DW.M_REQ_S_72_74;
  M_REQ_S_72_54 = NONVITALDEPOT_DW.M_REQ_S_72_54;
  M_REQ_S_72_34 = NONVITALDEPOT_DW.M_REQ_S_72_34;
  M_REQ_S_72_14 = NONVITALDEPOT_DW.M_REQ_S_72_14;
  M_REQ_S_54_72 = NONVITALDEPOT_DW.M_REQ_S_54_72;
  M_REQ_S_34_72 = NONVITALDEPOT_DW.M_REQ_S_34_72;
  M_REQ_S_32_14 = NONVITALDEPOT_DW.M_REQ_S_32_14;
  M_REQ_S_14_72 = NONVITALDEPOT_DW.M_REQ_S_14_72;
  M_REQ_S_14_32 = NONVITALDEPOT_DW.M_REQ_S_14_32;
  M_REQ_S_14_12 = NONVITALDEPOT_DW.M_REQ_S_14_12;
  M_REQ_S_12_14 = NONVITALDEPOT_DW.M_REQ_S_12_14;
  M_CHK_NV_V = NONVITALDEPOT_DW.M_CHK_NV_V;
  M_AR_L14B = NONVITALDEPOT_DW.M_AR_L14B;
  M_AS_DEP = NONVITALDEPOT_DW.M_AS_DEP;
  DI_PBCBTC_TZB_ACK = NONVITALDEPOT_DW.DI_PBCBTC_TZB_ACK;
  DI_PBW_73B = NONVITALDEPOT_DW.DI_PBW_73B;
  DI_PBW_54 = NONVITALDEPOT_DW.DI_PBW_54;
  DI_PBW_13B_73A = NONVITALDEPOT_DW.DI_PBW_13B_73A;
  DI_PBW_13A = NONVITALDEPOT_DW.DI_PBW_13A;
  DI_PBX_74 = NONVITALDEPOT_DW.DI_PBX_74;
  DI_PBX_72 = NONVITALDEPOT_DW.DI_PBX_72;
  DI_PBX_54 = NONVITALDEPOT_DW.DI_PBX_54;
  DI_PBX_34 = NONVITALDEPOT_DW.DI_PBX_34;
  DI_PBX_32 = NONVITALDEPOT_DW.DI_PBX_32;
  DI_PBX_12 = NONVITALDEPOT_DW.DI_PBX_12;
  DI_PBJ_74 = NONVITALDEPOT_DW.DI_PBJ_74;
  DI_PBJ_72 = NONVITALDEPOT_DW.DI_PBJ_72;
  DI_PBJ_54 = NONVITALDEPOT_DW.DI_PBJ_54;
  DI_PBJ_34 = NONVITALDEPOT_DW.DI_PBJ_34;
  DI_PBJ_32 = NONVITALDEPOT_DW.DI_PBJ_32;
  DI_PBJ_14B = NONVITALDEPOT_DW.DI_PBJ_14B;
  DI_PBJ_14A = NONVITALDEPOT_DW.DI_PBJ_14A;
  DI_PBJ_12 = NONVITALDEPOT_DW.DI_PBJ_12;
  DI_PBR_TPR = NONVITALDEPOT_DW.DI_PBR_TPR;
  DI_PBSW_TWT = NONVITALDEPOT_DW.DI_PBSW_TWT;
  DI_PBSW_TKW = NONVITALDEPOT_DW.DI_PBSW_TKW;
  DI_PBSW_TKGW = NONVITALDEPOT_DW.DI_PBSW_TKGW;
  DI_PBSW_TBW = NONVITALDEPOT_DW.DI_PBSW_TBW;
  DI_PBSW_TBKW = NONVITALDEPOT_DW.DI_PBSW_TBKW;
  DI_PBG_THB = NONVITALDEPOT_DW.DI_PBG_THB;
  DI_PBG_OTOMATIS = NONVITALDEPOT_DW.DI_PBG_OTOMATIS;
  DI_PBG_MANUAL = NONVITALDEPOT_DW.DI_PBG_MANUAL;
  CBI_FAIL_SYSTEM2 = NONVITALDEPOT_DW.CBI_FAIL_SYSTEM2;
  CBI_FAIL_SYSTEM1 = NONVITALDEPOT_DW.CBI_FAIL_SYSTEM1;
  CBI_FAIL_COMM2 = NONVITALDEPOT_DW.CBI_FAIL_COMM2;
  CBI_FAIL_COMM1 = NONVITALDEPOT_DW.CBI_FAIL_COMM1;
  M_CBTC_TZB_IN = NONVITALDEPOT_DW.M_CBTC_TZB_IN;
  M_RRLS_74 = NONVITALDEPOT_DW.M_RRLS_74;
  M_RRLS_72 = NONVITALDEPOT_DW.M_RRLS_72;
  M_RRLS_54 = NONVITALDEPOT_DW.M_RRLS_54;
  M_RRLS_34 = NONVITALDEPOT_DW.M_RRLS_34;
  M_RRLS_32 = NONVITALDEPOT_DW.M_RRLS_32;
  M_RRLS_12 = NONVITALDEPOT_DW.M_RRLS_12;
  M_RRLS_14B = NONVITALDEPOT_DW.M_RRLS_14B;
  M_AS_S_L74 = NONVITALDEPOT_DW.M_AS_S_L74;
  M_AS_S_L72 = NONVITALDEPOT_DW.M_AS_S_L72;
  M_AS_S_L54 = NONVITALDEPOT_DW.M_AS_S_L54;
  M_AS_S_L34 = NONVITALDEPOT_DW.M_AS_S_L34;
  M_AS_S_L32 = NONVITALDEPOT_DW.M_AS_S_L32;
  M_AS_S_L14A = NONVITALDEPOT_DW.M_AS_S_L14A;
  M_AS_S_L12 = NONVITALDEPOT_DW.M_AS_S_L12;
  M_DO_L74_GR = NONVITALDEPOT_DW.M_DO_L74_GR;
  M_DO_L72_GR = NONVITALDEPOT_DW.M_DO_L72_GR;
  M_DO_L54_GR = NONVITALDEPOT_DW.M_DO_L54_GR;
  M_DO_L34_GR = NONVITALDEPOT_DW.M_DO_L34_GR;
  M_DO_L32_GR = NONVITALDEPOT_DW.M_DO_L32_GR;
  M_DO_L14B_GR = NONVITALDEPOT_DW.M_DO_L14B_GR;
  M_DO_L14A_GR = NONVITALDEPOT_DW.M_DO_L14A_GR;
  M_DO_L12_GR = NONVITALDEPOT_DW.M_DO_L12_GR;
  M_W73B_TPZ = NONVITALDEPOT_DW.M_W73B_TPZ;
  M_W54_TPZ = NONVITALDEPOT_DW.M_W54_TPZ;
  M_W13B_73A_TPZ = NONVITALDEPOT_DW.M_W13B_73A_TPZ;
  M_W13A_TPZ = NONVITALDEPOT_DW.M_W13A_TPZ;
  M_W73B_SWRLS = NONVITALDEPOT_DW.M_W73B_SWRLS;
  M_W54_SWRLS = NONVITALDEPOT_DW.M_W54_SWRLS;
  M_W13B_73A_SWRLS = NONVITALDEPOT_DW.M_W13B_73A_SWRLS;
  M_W13A_SWRLS = NONVITALDEPOT_DW.M_W13A_SWRLS;
  M_W73B_LS = NONVITALDEPOT_DW.M_W73B_LS;
  M_W54_LS = NONVITALDEPOT_DW.M_W54_LS;
  M_W13B_73A_LS = NONVITALDEPOT_DW.M_W13B_73A_LS;
  M_W13A_LS = NONVITALDEPOT_DW.M_W13A_LS;
  M_W73B_L = NONVITALDEPOT_DW.M_W73B_L;
  M_W54_L = NONVITALDEPOT_DW.M_W54_L;
  M_W13B_73A_L = NONVITALDEPOT_DW.M_W13B_73A_L;
  M_W13A_L = NONVITALDEPOT_DW.M_W13A_L;
  M_W73B_RW_TE = NONVITALDEPOT_DW.M_W73B_RW_TE;
  M_W54_RW_TE = NONVITALDEPOT_DW.M_W54_RW_TE;
  M_W13B_73A_RW_TE = NONVITALDEPOT_DW.M_W13B_73A_RW_TE;
  M_W13A_RW_TE = NONVITALDEPOT_DW.M_W13A_RW_TE;
  M_W73B_RWZ = NONVITALDEPOT_DW.M_W73B_RWZ;
  M_W54_RWZ = NONVITALDEPOT_DW.M_W54_RWZ;
  M_W13B_73A_RWZ = NONVITALDEPOT_DW.M_W13B_73A_RWZ;
  M_W13A_RWZ = NONVITALDEPOT_DW.M_W13A_RWZ;
  M_W73B_RWP = NONVITALDEPOT_DW.M_W73B_RWP;
  M_W54_RWP = NONVITALDEPOT_DW.M_W54_RWP;
  M_W13B_73A_RWP = NONVITALDEPOT_DW.M_W13B_73A_RWP;
  M_W13A_RWP = NONVITALDEPOT_DW.M_W13A_RWP;
  M_W73B_RWC = NONVITALDEPOT_DW.M_W73B_RWC;
  M_W54_RWC = NONVITALDEPOT_DW.M_W54_RWC;
  M_W13B_73A_RWC = NONVITALDEPOT_DW.M_W13B_73A_RWC;
  M_W13A_RWC = NONVITALDEPOT_DW.M_W13A_RWC;
  M_W73B_NW_TE = NONVITALDEPOT_DW.M_W73B_NW_TE;
  M_W54_NW_TE = NONVITALDEPOT_DW.M_W54_NW_TE;
  M_W13B_73A_NW_TE = NONVITALDEPOT_DW.M_W13B_73A_NW_TE;
  M_W13A_NW_TE = NONVITALDEPOT_DW.M_W13A_NW_TE;
  M_W73B_NWZ = NONVITALDEPOT_DW.M_W73B_NWZ;
  M_W54_NWZ = NONVITALDEPOT_DW.M_W54_NWZ;
  M_W13B_73A_NWZ = NONVITALDEPOT_DW.M_W13B_73A_NWZ;
  M_W13A_NWZ = NONVITALDEPOT_DW.M_W13A_NWZ;
  M_W73B_NWP = NONVITALDEPOT_DW.M_W73B_NWP;
  M_W54_NWP = NONVITALDEPOT_DW.M_W54_NWP;
  M_W13B_73A_NWP = NONVITALDEPOT_DW.M_W13B_73A_NWP;
  M_W13A_NWP = NONVITALDEPOT_DW.M_W13A_NWP;
  M_W73B_NWC = NONVITALDEPOT_DW.M_W73B_NWC;
  M_W54_NWC = NONVITALDEPOT_DW.M_W54_NWC;
  M_W13B_73A_NWC = NONVITALDEPOT_DW.M_W13B_73A_NWC;
  M_W13A_NWC = NONVITALDEPOT_DW.M_W13A_NWC;
  M_S_WS_73B = NONVITALDEPOT_DW.M_S_WS_73B;
  M_S_WS_73A = NONVITALDEPOT_DW.M_S_WS_73A;
  M_S_WS_13 = NONVITALDEPOT_DW.M_S_WS_13;
  M_S_ES_73B = NONVITALDEPOT_DW.M_S_ES_73B;
  M_S_ES_73A = NONVITALDEPOT_DW.M_S_ES_73A;
  M_S_ES_13 = NONVITALDEPOT_DW.M_S_ES_13;
  M_TP_74 = NONVITALDEPOT_DW.M_TP_74;
  M_TP_73B = NONVITALDEPOT_DW.M_TP_73B;
  M_TP_73A = NONVITALDEPOT_DW.M_TP_73A;
  M_TP_72 = NONVITALDEPOT_DW.M_TP_72;
  M_TP_54 = NONVITALDEPOT_DW.M_TP_54;
  M_TP_34 = NONVITALDEPOT_DW.M_TP_34;
  M_TP_32 = NONVITALDEPOT_DW.M_TP_32;
  M_TP_14 = NONVITALDEPOT_DW.M_TP_14;
  M_TP_13 = NONVITALDEPOT_DW.M_TP_13;
  M_TP_12 = NONVITALDEPOT_DW.M_TP_12;
  M_CHK_V_NV = NONVITALDEPOT_DW.M_CHK_V_NV;
  M_GV_FLASH_1000 = NONVITALDEPOT_DW.M_GV_FLASH_1000;
  M_TP_21C = NONVITALDEPOT_DW.M_TP_21C;
  M_S_WS_21C = NONVITALDEPOT_DW.M_S_WS_21C;
  M_S_ES_21C = NONVITALDEPOT_DW.M_S_ES_21C;

  /* Logic: '<S284>/AND14' */
  AND14 = NONVITALDEPOT_DW.AND14;

  /* Logic: '<S283>/AND1' */
  AND1_m = NONVITALDEPOT_DW.AND1_m;

  /* DataStoreWrite: '<S18>/RR' */
  Memory_PreviousInput = NONVITALDEPOT_DW.Memory_PreviousInput;
  clockTickCounter_m = clockTickCounter_m_0;
  clockTickCounter = clockTickCounter_0;
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S381>/14A-RRLSPB-CTRL' */
    NONVITALDEPOT_DW.M_CTRL_RRLS_14A = rtu_FROMMAIN[10];

    /* DataStoreWrite: '<S381>/21C-S-ES' */
    M_S_ES_21C = rtu_FROMMAIN[12];

    /* DataStoreWrite: '<S381>/21C-S-WS' */
    M_S_WS_21C = rtu_FROMMAIN[13];

    /* DataStoreWrite: '<S381>/21C-TP' */
    M_TP_21C = rtu_FROMMAIN[11];

    /* DataStoreWrite: '<S381>/AS' */
    NONVITALDEPOT_DW.M_GV_AS = rtu_FROMMAIN[9];

    /* DataStoreWrite: '<S381>/FLASH-0.5S' */
    NONVITALDEPOT_DW.M_GV_FLASH_500 = rtu_FROMMAIN[2];

    /* DataStoreWrite: '<S381>/FLASH-1S' */
    M_GV_FLASH_1000 = rtu_FROMMAIN[1];

    /* DataStoreWrite: '<S381>/L14B-ST1-RS' */
    NONVITALDEPOT_DW.M_RS_14_ST1 = rtu_FROMMAIN[5];

    /* DataStoreWrite: '<S381>/L14B-ST2-RS' */
    NONVITALDEPOT_DW.M_RS_14_ST2 = rtu_FROMMAIN[6];

    /* DataStoreWrite: '<S381>/MAIN-BE-DO' */
    NONVITALDEPOT_DW.DO_INDT_BE_MAIN = rtu_FROMMAIN[16];

    /* DataStoreWrite: '<S381>/MAIN-RE-DO' */
    NONVITALDEPOT_DW.DO_INDT_RE_MAIN = rtu_FROMMAIN[15];

    /* DataStoreWrite: '<S381>/MAIN-TE-DO' */
    NONVITALDEPOT_DW.DO_INDT_TE_MAIN = rtu_FROMMAIN[14];

    /* DataStoreWrite: '<S381>/ST1-GR-DO' */
    NONVITALDEPOT_DW.M_DO_ST1_GR = rtu_FROMMAIN[7];

    /* DataStoreWrite: '<S381>/ST1-L14A-RS' */
    NONVITALDEPOT_DW.M_RS_ST1_14 = rtu_FROMMAIN[3];

    /* DataStoreWrite: '<S381>/ST2-GR-DO' */
    NONVITALDEPOT_DW.M_DO_ST2_GR = rtu_FROMMAIN[8];

    /* DataStoreWrite: '<S381>/ST2-L14A-RS' */
    NONVITALDEPOT_DW.M_RS_ST2_14 = rtu_FROMMAIN[4];

    /* DataStoreWrite: '<S380>/VDR' */
    NONVITALDEPOT_DW.M_VDR = *rtu_VDRFROM;

    /* DataStoreWrite: '<S380>/V-NV-CHK' */
    M_CHK_V_NV = *rtu_VNVCHKFROM;

    /* DataStoreWrite: '<S380>/12-TP' */
    M_TP_12 = rtu_TPFROM[0];

    /* DataStoreWrite: '<S380>/13-TP' */
    M_TP_13 = rtu_TPFROM[1];

    /* DataStoreWrite: '<S380>/14-TP' */
    M_TP_14 = rtu_TPFROM[2];

    /* DataStoreWrite: '<S380>/32-TP' */
    M_TP_32 = rtu_TPFROM[3];

    /* DataStoreWrite: '<S380>/34-TP' */
    M_TP_34 = rtu_TPFROM[4];

    /* DataStoreWrite: '<S380>/54-TP' */
    M_TP_54 = rtu_TPFROM[5];

    /* DataStoreWrite: '<S380>/72-TP' */
    M_TP_72 = rtu_TPFROM[6];

    /* DataStoreWrite: '<S380>/73A-TP' */
    M_TP_73A = rtu_TPFROM[7];

    /* DataStoreWrite: '<S380>/73B-TP' */
    M_TP_73B = rtu_TPFROM[8];

    /* DataStoreWrite: '<S380>/74-TP' */
    M_TP_74 = rtu_TPFROM[9];

    /* DataStoreWrite: '<S380>/13-S-ES' */
    M_S_ES_13 = rtu_SESFROM[0];

    /* DataStoreWrite: '<S380>/73A-S-ES' */
    M_S_ES_73A = rtu_SESFROM[1];

    /* DataStoreWrite: '<S380>/73B-S-ES' */
    M_S_ES_73B = rtu_SESFROM[2];

    /* DataStoreWrite: '<S380>/13-S-WS' */
    M_S_WS_13 = rtu_SWSFROM[0];

    /* DataStoreWrite: '<S380>/73A-S-WS' */
    M_S_WS_73A = rtu_SWSFROM[1];

    /* DataStoreWrite: '<S380>/73B-S-WS' */
    M_S_WS_73B = rtu_SWSFROM[2];

    /* DataStoreWrite: '<S380>/W13A-NWC' */
    M_W13A_NWC = rtu_NWCFROM[0];

    /* DataStoreWrite: '<S380>/W13B//73A-NWC' */
    M_W13B_73A_NWC = rtu_NWCFROM[1];

    /* DataStoreWrite: '<S380>/W54-NWC' */
    M_W54_NWC = rtu_NWCFROM[2];

    /* DataStoreWrite: '<S380>/W73B-NWC' */
    M_W73B_NWC = rtu_NWCFROM[3];

    /* DataStoreWrite: '<S380>/W13A-NWP' */
    M_W13A_NWP = rtu_NWPFROM[0];

    /* DataStoreWrite: '<S380>/W13B//73A-NWP' */
    M_W13B_73A_NWP = rtu_NWPFROM[1];

    /* DataStoreWrite: '<S380>/W54-NWP' */
    M_W54_NWP = rtu_NWPFROM[2];

    /* DataStoreWrite: '<S380>/W73B-NWP' */
    M_W73B_NWP = rtu_NWPFROM[3];

    /* DataStoreWrite: '<S380>/W13A-NWZ' */
    M_W13A_NWZ = rtu_NWZFROM[0];

    /* DataStoreWrite: '<S380>/W13B//73A-NWZ' */
    M_W13B_73A_NWZ = rtu_NWZFROM[1];

    /* DataStoreWrite: '<S380>/W54-NWZ' */
    M_W54_NWZ = rtu_NWZFROM[2];

    /* DataStoreWrite: '<S380>/W73B-NWZ' */
    M_W73B_NWZ = rtu_NWZFROM[3];

    /* DataStoreWrite: '<S380>/W13A-NW-TE' */
    M_W13A_NW_TE = rtu_NWTEFROM[0];

    /* DataStoreWrite: '<S380>/W13B//73A-NW-TE' */
    M_W13B_73A_NW_TE = rtu_NWTEFROM[1];

    /* DataStoreWrite: '<S380>/W54-NW-TE' */
    M_W54_NW_TE = rtu_NWTEFROM[2];

    /* DataStoreWrite: '<S380>/W73B-NW-TE' */
    M_W73B_NW_TE = rtu_NWTEFROM[3];

    /* DataStoreWrite: '<S380>/W13A-RWC' */
    M_W13A_RWC = rtu_RWCFROM[0];

    /* DataStoreWrite: '<S380>/W13B//73A-RWC' */
    M_W13B_73A_RWC = rtu_RWCFROM[1];

    /* DataStoreWrite: '<S380>/W54-RWC' */
    M_W54_RWC = rtu_RWCFROM[2];

    /* DataStoreWrite: '<S380>/W73B-RWC' */
    M_W73B_RWC = rtu_RWCFROM[3];

    /* DataStoreWrite: '<S380>/W13A-RWP' */
    M_W13A_RWP = rtu_RWPFROM[0];

    /* DataStoreWrite: '<S380>/W13B//73A-RWP' */
    M_W13B_73A_RWP = rtu_RWPFROM[1];

    /* DataStoreWrite: '<S380>/W54-RWP' */
    M_W54_RWP = rtu_RWPFROM[2];

    /* DataStoreWrite: '<S380>/W73B-RWP' */
    M_W73B_RWP = rtu_RWPFROM[3];

    /* DataStoreWrite: '<S380>/W13A-RWZ' */
    M_W13A_RWZ = rtu_RWZFROM[0];

    /* DataStoreWrite: '<S380>/W13B//73A-RWZ' */
    M_W13B_73A_RWZ = rtu_RWZFROM[1];

    /* DataStoreWrite: '<S380>/W54-RWZ' */
    M_W54_RWZ = rtu_RWZFROM[2];

    /* DataStoreWrite: '<S380>/W73B-RWZ' */
    M_W73B_RWZ = rtu_RWZFROM[3];

    /* DataStoreWrite: '<S380>/W13A-RW-TE' */
    M_W13A_RW_TE = rtu_RWTEFROM[0];

    /* DataStoreWrite: '<S380>/W13B//73A-RW-TE' */
    M_W13B_73A_RW_TE = rtu_RWTEFROM[1];

    /* DataStoreWrite: '<S380>/W54-RW-TE' */
    M_W54_RW_TE = rtu_RWTEFROM[2];

    /* DataStoreWrite: '<S380>/W73B-RW-TE' */
    M_W73B_RW_TE = rtu_RWTEFROM[3];

    /* DataStoreWrite: '<S380>/W13A-L' */
    M_W13A_L = rtu_LFROM[0];

    /* DataStoreWrite: '<S380>/W13B//73A-L' */
    M_W13B_73A_L = rtu_LFROM[1];

    /* DataStoreWrite: '<S380>/W54-L' */
    M_W54_L = rtu_LFROM[2];

    /* DataStoreWrite: '<S380>/W73B-L' */
    M_W73B_L = rtu_LFROM[3];

    /* DataStoreWrite: '<S380>/W13A-LS' */
    M_W13A_LS = rtu_LSFROM[0];

    /* DataStoreWrite: '<S380>/W13B//73A-LS' */
    M_W13B_73A_LS = rtu_LSFROM[1];

    /* DataStoreWrite: '<S380>/W54-LS' */
    M_W54_LS = rtu_LSFROM[2];

    /* DataStoreWrite: '<S380>/W73B-LS' */
    M_W73B_LS = rtu_LSFROM[3];

    /* DataStoreWrite: '<S380>/W13A-SWRLS' */
    M_W13A_SWRLS = rtu_SWRLSFROM[0];

    /* DataStoreWrite: '<S380>/W13B//73A-SWRLS' */
    M_W13B_73A_SWRLS = rtu_SWRLSFROM[1];

    /* DataStoreWrite: '<S380>/W54-SWRLS' */
    M_W54_SWRLS = rtu_SWRLSFROM[2];

    /* DataStoreWrite: '<S380>/W73B-SWRLS' */
    M_W73B_SWRLS = rtu_SWRLSFROM[3];

    /* DataStoreWrite: '<S380>/W13A-TPZ' */
    M_W13A_TPZ = rtu_TPZFROM[0];

    /* DataStoreWrite: '<S380>/W13B//73A-TPZ' */
    M_W13B_73A_TPZ = rtu_TPZFROM[1];

    /* DataStoreWrite: '<S380>/W54-TPZ' */
    M_W54_TPZ = rtu_TPZFROM[2];

    /* DataStoreWrite: '<S380>/W73B-TPZ' */
    M_W73B_TPZ = rtu_TPZFROM[3];

    /* DataStoreWrite: '<S380>/L12-GR-DO' */
    M_DO_L12_GR = rtu_GRDOFROM[0];

    /* DataStoreWrite: '<S380>/L14A-GR-DO' */
    M_DO_L14A_GR = rtu_GRDOFROM[3];

    /* DataStoreWrite: '<S380>/L14B-GR-DO' */
    M_DO_L14B_GR = rtu_GRDOFROM[7];

    /* DataStoreWrite: '<S380>/L32-GR-DO' */
    M_DO_L32_GR = rtu_GRDOFROM[1];

    /* DataStoreWrite: '<S380>/L34-GR-DO' */
    M_DO_L34_GR = rtu_GRDOFROM[4];

    /* DataStoreWrite: '<S380>/L54-GR-DO' */
    M_DO_L54_GR = rtu_GRDOFROM[5];

    /* DataStoreWrite: '<S380>/L72-GR-DO' */
    M_DO_L72_GR = rtu_GRDOFROM[2];

    /* DataStoreWrite: '<S380>/L74-GR-DO' */
    M_DO_L74_GR = rtu_GRDOFROM[6];

    /* DataStoreWrite: '<S380>/L12-S-AS' */
    M_AS_S_L12 = rtu_SASFROM[0];

    /* DataStoreWrite: '<S380>/L14A-S-AS' */
    M_AS_S_L14A = rtu_SASFROM[3];

    /* DataStoreWrite: '<S380>/L14B-S-AS' */
    NONVITALDEPOT_DW.M_AS_S_L14B = rtu_SASFROM[7];

    /* DataStoreWrite: '<S380>/L32-S-AS' */
    M_AS_S_L32 = rtu_SASFROM[1];

    /* DataStoreWrite: '<S380>/L34-S-AS' */
    M_AS_S_L34 = rtu_SASFROM[4];

    /* DataStoreWrite: '<S380>/L54-S-AS' */
    M_AS_S_L54 = rtu_SASFROM[5];

    /* DataStoreWrite: '<S380>/L72-S-AS' */
    M_AS_S_L72 = rtu_SASFROM[2];

    /* DataStoreWrite: '<S380>/L74-S-AS' */
    M_AS_S_L74 = rtu_SASFROM[6];

    /* DataStoreWrite: '<S380>/L14A-RRLS' */
    NONVITALDEPOT_DW.M_RRLS_14A = rtu_RRLSFROM[6];

    /* DataStoreWrite: '<S380>/L14B-RRLS' */
    M_RRLS_14B = rtu_RRLSFROM[7];

    /* DataStoreWrite: '<S380>/X12-RRLS' */
    M_RRLS_12 = rtu_RRLSFROM[0];

    /* DataStoreWrite: '<S380>/X32-RRLS' */
    M_RRLS_32 = rtu_RRLSFROM[1];

    /* DataStoreWrite: '<S380>/X34-RRLS' */
    M_RRLS_34 = rtu_RRLSFROM[3];

    /* DataStoreWrite: '<S380>/X54-RRLS' */
    M_RRLS_54 = rtu_RRLSFROM[4];

    /* DataStoreWrite: '<S380>/X72-RRLS' */
    M_RRLS_72 = rtu_RRLSFROM[2];

    /* DataStoreWrite: '<S380>/X74-RRLS' */
    M_RRLS_74 = rtu_RRLSFROM[5];

    /* DataStoreWrite: '<S375>/TZB-IN-FROM' */
    M_CBTC_TZB_IN = *rtu_CBTCFROM;

    /* DataStoreWrite: '<S382>/COMM-1-FAIL' */
    CBI_FAIL_COMM1 = rtu_SYSTEMFROM[2];

    /* DataStoreWrite: '<S382>/COMM-2-FAIL' */
    CBI_FAIL_COMM2 = rtu_SYSTEMFROM[3];

    /* DataStoreWrite: '<S382>/SYSTEM-1-FAIL' */
    CBI_FAIL_SYSTEM1 = rtu_SYSTEMFROM[0];

    /* DataStoreWrite: '<S382>/SYSTEM-2-FAIL' */
    CBI_FAIL_SYSTEM2 = rtu_SYSTEMFROM[1];

    /* DataStoreWrite: '<S376>/MANUAL-PB-DI' */
    DI_PBG_MANUAL = rtu_GLOBALPBDI[1];

    /* DataStoreWrite: '<S376>/OTOMATIS-PB-DI' */
    DI_PBG_OTOMATIS = rtu_GLOBALPBDI[0];

    /* DataStoreWrite: '<S376>/THB-PB' */
    DI_PBG_THB = rtu_GLOBALPBDI[2];

    /* DataStoreWrite: '<S376>/TPR-BANTU-PB' */
    NONVITALDEPOT_DW.DI_PBG_TPR_BANTU = rtu_GLOBALPBDI[3];

    /* DataStoreWrite: '<S376>/TBKW-PB' */
    DI_PBSW_TBKW = rtu_SWCTRLPBDI[3];

    /* DataStoreWrite: '<S376>/TBW-PB' */
    DI_PBSW_TBW = rtu_SWCTRLPBDI[2];

    /* DataStoreWrite: '<S376>/TKGW-PB' */
    DI_PBSW_TKGW = rtu_SWCTRLPBDI[4];

    /* DataStoreWrite: '<S376>/TKW-PB' */
    DI_PBSW_TKW = rtu_SWCTRLPBDI[1];

    /* DataStoreWrite: '<S376>/TWT-PB' */
    DI_PBSW_TWT = rtu_SWCTRLPBDI[0];

    /* DataStoreWrite: '<S376>/TPR-PB' */
    DI_PBR_TPR = *rtu_RCTRLPBDI;

    /* DataStoreWrite: '<S376>/L12-PB' */
    DI_PBJ_12 = rtu_ROUTEPBDI[0];

    /* DataStoreWrite: '<S376>/L14A-PB' */
    DI_PBJ_14A = rtu_ROUTEPBDI[6];

    /* DataStoreWrite: '<S376>/L14B-PB' */
    DI_PBJ_14B = rtu_ROUTEPBDI[7];

    /* DataStoreWrite: '<S376>/L32-PB' */
    DI_PBJ_32 = rtu_ROUTEPBDI[1];

    /* DataStoreWrite: '<S376>/L34-PB' */
    DI_PBJ_34 = rtu_ROUTEPBDI[3];

    /* DataStoreWrite: '<S376>/L54-PB' */
    DI_PBJ_54 = rtu_ROUTEPBDI[4];

    /* DataStoreWrite: '<S376>/L72-PB' */
    DI_PBJ_72 = rtu_ROUTEPBDI[2];

    /* DataStoreWrite: '<S376>/L74-PB' */
    DI_PBJ_74 = rtu_ROUTEPBDI[5];

    /* DataStoreWrite: '<S376>/X12-PB' */
    DI_PBX_12 = rtu_ROUTEPBDI[8];

    /* DataStoreWrite: '<S376>/X32-PB' */
    DI_PBX_32 = rtu_ROUTEPBDI[9];

    /* DataStoreWrite: '<S376>/X34-PB' */
    DI_PBX_34 = rtu_ROUTEPBDI[11];

    /* DataStoreWrite: '<S376>/X54-PB' */
    DI_PBX_54 = rtu_ROUTEPBDI[12];

    /* DataStoreWrite: '<S376>/X72-PB' */
    DI_PBX_72 = rtu_ROUTEPBDI[10];

    /* DataStoreWrite: '<S376>/X74-PB' */
    DI_PBX_74 = rtu_ROUTEPBDI[13];

    /* DataStoreWrite: '<S376>/W13A-PB' */
    DI_PBW_13A = rtu_POINTPBDI[0];

    /* DataStoreWrite: '<S376>/W13B//73A-PB' */
    DI_PBW_13B_73A = rtu_POINTPBDI[1];

    /* DataStoreWrite: '<S376>/W54-PB' */
    DI_PBW_54 = rtu_POINTPBDI[2];

    /* DataStoreWrite: '<S376>/W73B-PB' */
    DI_PBW_73B = rtu_POINTPBDI[3];

    /* DataStoreWrite: '<S376>/TZB-ACK-PB-DI' */
    DI_PBCBTC_TZB_ACK = *rtu_CBTCPBDI;

    /* DataStoreRead: '<S379>/14A-PB-DI' incorporates:
     *  DataStoreWrite: '<S376>/L14A-PB'
     */
    rtb_u4APBDI = rtu_ROUTEPBDI[6];

    /* DataStoreRead: '<S379>/14A-RRLS' incorporates:
     *  DataStoreWrite: '<S380>/L14A-RRLS'
     */
    rtb_u4ARRLS = rtu_RRLSFROM[6];

    /* DataStoreRead: '<S379>/14B-PB-DI' incorporates:
     *  DataStoreWrite: '<S376>/L14B-PB'
     */
    rtb_u4BPBDI = rtu_ROUTEPBDI[7];

    /* DataStoreRead: '<S379>/AS-DEP' */
    rtb_ASDEP = M_AS_DEP;

    /* DataStoreRead: '<S379>/L14B-AR-OK' */
    rtb_L14BAROK = M_AR_L14B;

    /* DataStoreRead: '<S379>/L14B-GR-DO' incorporates:
     *  DataStoreWrite: '<S380>/L14B-GR-DO'
     */
    rtb_L14BGRDO_f = rtu_GRDOFROM[7];

    /* DataStoreRead: '<S378>/NV-V-CHK' */
    *rty_NVVCHKTO = M_CHK_NV_V;

    /* DataStoreRead: '<S378>/L12-L14B-S-REQ' */
    rtb_L12L14BSREQ = M_REQ_S_12_14;

    /* DataStoreRead: '<S378>/L14A-X12-S-REQ' */
    rtb_L14AX12SREQ = M_REQ_S_14_12;

    /* DataStoreRead: '<S378>/L14A-X32-S-REQ' */
    rtb_L14AX32SREQ = M_REQ_S_14_32;

    /* DataStoreRead: '<S378>/L14A-X72-S-REQ' */
    rtb_L14AX72SREQ = M_REQ_S_14_72;

    /* DataStoreRead: '<S378>/L32-L14B-S-REQ' */
    rtb_L32L14BSREQ = M_REQ_S_32_14;

    /* DataStoreRead: '<S378>/L34-X72-S-REQ' */
    rtb_L34X72SREQ = M_REQ_S_34_72;

    /* DataStoreRead: '<S378>/L54-X72-S-REQ' */
    rtb_L54X72SREQ = M_REQ_S_54_72;

    /* DataStoreRead: '<S378>/L72-L14B-S-REQ' */
    rtb_L72L14BSREQ = M_REQ_S_72_14;

    /* DataStoreRead: '<S378>/L72-X34-S-REQ' */
    rtb_L72X34SREQ = M_REQ_S_72_34;

    /* DataStoreRead: '<S378>/L72-X54-S-REQ' */
    rtb_L72X54SREQ = M_REQ_S_72_54;

    /* DataStoreRead: '<S378>/L72-X74-S-REQ' */
    rtb_L72X74SREQ = M_REQ_S_72_74;

    /* DataStoreRead: '<S378>/L74-X72-S-REQ' */
    rtb_L74X72SREQ = M_REQ_S_74_72;

    /* DataStoreRead: '<S378>/W13A-N-REQ' */
    rtb_W13ANREQ_g = M_W13A_N_REQ;

    /* DataStoreRead: '<S378>/W13B//73A-N-REQ' */
    rtb_W13B73ANREQ_m = M_W13B_73A_N_REQ;

    /* DataStoreRead: '<S378>/W54-N-REQ' */
    rtb_W54NREQ_k = M_W54_N_REQ;

    /* DataStoreRead: '<S378>/W73B-N-REQ' */
    rtb_W73BNREQ = M_W73B_N_REQ;

    /* DataStoreRead: '<S378>/W13A-R-REQ' */
    rtb_W13ARREQ_g = M_W13A_R_REQ;

    /* DataStoreRead: '<S378>/W13B//73A-R-REQ' */
    rtb_W13B73ARREQ_d = M_W13B_73A_R_REQ;

    /* DataStoreRead: '<S378>/W54-R-REQ' */
    rtb_W54RREQ_i = M_W54_R_REQ;

    /* DataStoreRead: '<S378>/W73B-R-REQ' */
    rtb_W73BRREQ = M_W73B_R_REQ;

    /* DataStoreRead: '<S378>/W13A-OOC' */
    rtb_W13AOOC_oz = M_W13A_OOC;

    /* DataStoreRead: '<S378>/W13B//73A-OOC' */
    rtb_W13B73AOOC_jt = M_W13B_73A_OOC;

    /* DataStoreRead: '<S378>/W54-OOC' */
    rtb_W54OOC_g = M_W54_OOC;

    /* DataStoreRead: '<S378>/W73B-OOC' */
    rtb_W73BOOC_g0 = M_W73B_OOC;

    /* DataStoreRead: '<S378>/L14A-RRLSPB-CTRL' incorporates:
     *  DataStoreWrite: '<S381>/14A-RRLSPB-CTRL'
     */
    rtb_L14ARRLSPBCTRL = rtu_FROMMAIN[10];

    /* DataStoreRead: '<S378>/L14B-RRLSPB-CTRL' */
    rtb_L14BRRLSPBCTRL = M_CTRL_RRLS_14B;

    /* DataStoreRead: '<S378>/X12-RRLSPB-CTRL' */
    rtb_X12RRLSPBCTRL = M_CTRL_RRLS_12;

    /* DataStoreRead: '<S378>/X32-RRLSPB-CTRL' */
    rtb_X32RRLSPBCTRL = M_CTRL_RRLS_32;

    /* DataStoreRead: '<S378>/X34-RRLSPB-CTRL' */
    rtb_X34RRLSPBCTRL = M_CTRL_RRLS_34;

    /* DataStoreRead: '<S378>/X54-RRLSPB-CTRL' */
    rtb_X54RRLSPBCTRL = M_CTRL_RRLS_54;

    /* DataStoreRead: '<S378>/X72-RRLSPB-CTRL' */
    rtb_X72RRLSPBCTRL = M_CTRL_RRLS_72;

    /* DataStoreRead: '<S378>/X74-RRLSPB-CTRL' */
    rtb_X74RRLSPBCTRL = M_CTRL_RRLS_74;

    /* DataStoreRead: '<S378>/W13A-SWRLSPB-CTRL' */
    rtb_W13ASWRLSPBCTRL = M_W13A_CTRL_SWRLS;

    /* DataStoreRead: '<S378>/W13B//73A-SWRLSPB-CTRL' */
    rtb_W13B73ASWRLSPBCTRL = M_W13B_73A_CTRL_SWRLS;

    /* DataStoreRead: '<S378>/W54-SWRLSPB-CTRL' */
    rtb_W54SWRLSPBCTRL = M_W54_CTRL_SWRLS;

    /* DataStoreRead: '<S378>/W73B-SWRLSPB-CTRL' */
    rtb_W73BSWRLSPBCTRL = M_W73B_CTRL_SWRLS;

    /* DataStoreRead: '<S378>/W13A-SWINIT' */
    rtb_W13ASWINIT_d = M_W13A_SWINIT;

    /* DataStoreRead: '<S378>/W13B//73A-SWINIT' */
    rtb_W13B73ASWINIT_l4 = M_W13B_73A_SWINIT;

    /* DataStoreRead: '<S378>/W54-SWINIT' */
    rtb_W54SWINIT_i = M_W54_SWINIT;

    /* DataStoreRead: '<S378>/W73B-SWINIT' */
    rtb_W73BSWINIT_p = M_W73B_SWINIT;

    /* DataStoreRead: '<S378>/L12-RST-CTRL' */
    rtb_L12RSTCTRL_g = M_CTRL_RST_12;

    /* DataStoreRead: '<S378>/L14A-RST-CTRL' */
    rtb_L14ARSTCTRL_g = M_CTRL_RST_14A;

    /* DataStoreRead: '<S378>/L32-RST-CTRL' */
    rtb_L32RSTCTRL_n = M_CTRL_RST_32;

    /* DataStoreRead: '<S378>/L34-RST-CTRL' */
    rtb_L34RSTCTRL_j = M_CTRL_RST_34;

    /* DataStoreRead: '<S378>/L54-RST-CTRL' */
    rtb_L54RSTCTRL_b = M_CTRL_RST_54;

    /* DataStoreRead: '<S378>/L72-RST-CTRL' */
    rtb_L72RSTCTRL_kn = M_CTRL_RST_72;

    /* DataStoreRead: '<S378>/L74-RST-CTRL' */
    rtb_L74RSTCTRL_h = M_CTRL_RST_74;

    /* DataStoreRead: '<S378>/L12-L14B-RS' */
    rtb_L12L14BRS_gz = M_RS_12_14;

    /* DataStoreRead: '<S378>/L14A-X12-RS' */
    rtb_L14AX12RS_j = M_RS_14_12;

    /* DataStoreRead: '<S378>/L14A-X32-RS' */
    rtb_L14AX32RS_ne = M_RS_14_32;

    /* DataStoreRead: '<S378>/L14A-X72-RS' */
    rtb_L14AX72RS_ng = M_RS_14_72;

    /* DataStoreRead: '<S378>/L32-L14B-RS' */
    rtb_L32L14BRS_gj = M_RS_32_14;

    /* DataStoreRead: '<S378>/L34-X72-RS' */
    rtb_L34X72RS_p = M_RS_34_72;

    /* DataStoreRead: '<S378>/L54-X72-RS' */
    rtb_L54X72RS_j = M_RS_54_72;

    /* DataStoreRead: '<S378>/L72-L14B-RS' */
    rtb_L72L14BRS_p = M_RS_72_14;

    /* DataStoreRead: '<S378>/L72-L34B-RS' */
    rtb_L72L34BRS = M_RS_72_34;

    /* DataStoreRead: '<S378>/L72-L54B-RS' */
    rtb_L72L54BRS = M_RS_72_54;

    /* DataStoreRead: '<S378>/L72-L74B-RS' */
    rtb_L72L74BRS = M_RS_72_74;

    /* DataStoreRead: '<S378>/L74-X72-RS' */
    rtb_L74X72RS_d = M_RS_74_72;

    /* DataStoreRead: '<S378>/TZB-ACK-OK' */
    *rty_CBTCTO = M_CBTC_TZB_ACK_OK;

    /* DataStoreRead: '<S377>/BUZZER-DO' */
    rtb_BUZZERDO = DO_INDG_BUZZ;

    /* DataStoreRead: '<S377>/COMM-1-FAIL-DO' */
    rtb_COMM1FAILDO = DO_INDG_COMM1_FAIL;

    /* DataStoreRead: '<S377>/COMM-2-FAIL-DO' */
    rtb_COMM2FAILDO = DO_INDG_COMM2_FAIL;

    /* DataStoreRead: '<S377>/POINT-FAIL-DO' */
    rtb_POINTFAILDO = DO_INDG_POINT;

    /* DataStoreRead: '<S377>/SISTEM-1-FAIL-DO' */
    rtb_SISTEM1FAILDO = DO_INDG_SYS1_FAIL;

    /* DataStoreRead: '<S377>/SISTEM-2-FAIL-DO' */
    rtb_SISTEM2FAILDO = DO_INDG_SYS2_FAIL;

    /* DataStoreRead: '<S377>/TPR-BANTU-DO' */
    rtb_TPRBANTUDO = DO_INDG_TPR_BANTU;

    /* DataStoreRead: '<S377>/L12-RGE-DO' */
    rtb_L12RGEDO = DO_INDJ_12_RGE;

    /* DataStoreRead: '<S377>/L12-WGE-DO' */
    rtb_L12WGEDO = DO_INDJ_12_WGE;

    /* DataStoreRead: '<S377>/L14A-RGE-DO' */
    rtb_L14ARGEDO = DO_INDJ_14A_RGE;

    /* DataStoreRead: '<S377>/L14A-WGE-DO' */
    rtb_L14AWGEDO = DO_INDJ_14A_WGE;

    /* DataStoreRead: '<S377>/L14B-RGE-DO' */
    rtb_L14BRGEDO = DO_INDJ_14B_RGE;

    /* DataStoreRead: '<S377>/L14B-WGE-DO' */
    rtb_L14BWGEDO = DO_INDJ_14B_WGE;

    /* DataStoreRead: '<S377>/L32-RGE-DO' */
    rtb_L32RGEDO = DO_INDJ_32_RGE;

    /* DataStoreRead: '<S377>/L32-WGE-DO' */
    rtb_L32WGEDO = DO_INDJ_32_WGE;

    /* DataStoreRead: '<S377>/L34-RGE-DO' */
    rtb_L34RGEDO = DO_INDJ_34_RGE;

    /* DataStoreRead: '<S377>/L34-WGE-DO' */
    rtb_L34WGEDO = DO_INDJ_34_WGE;

    /* DataStoreRead: '<S377>/L54-RGE-DO' */
    rtb_L54RGEDO = DO_INDJ_54_RGE;

    /* DataStoreRead: '<S377>/L54-WGE-DO' */
    rtb_L54WGEDO = DO_INDJ_54_WGE;

    /* DataStoreRead: '<S377>/L72-RGE-DO' */
    rtb_L72RGEDO = DO_INDJ_72_RGE;

    /* DataStoreRead: '<S377>/L72-WGE-DO' */
    rtb_L72WGEDO = DO_INDJ_72_WGE;

    /* DataStoreRead: '<S377>/L74-RGE-DO' */
    rtb_L74RGEDO = DO_INDJ_74_RGE;

    /* DataStoreRead: '<S377>/L74-WGE-DO' */
    rtb_L74WGEDO = DO_INDJ_74_WGE;

    /* DataStoreRead: '<S377>/W13A-BE-DO' */
    rtb_W13ABEDO = DO_INDSW_W13A_BE;

    /* DataStoreRead: '<S377>/W13A-LE-DO' */
    rtb_W13ALEDO = DO_INDSW_W13A_LE;

    /* DataStoreRead: '<S377>/W13A-NRE-DO' */
    rtb_W13ANREDO = DO_INDSW_W13A_NRE;

    /* DataStoreRead: '<S377>/W13A-NTE-DO' */
    rtb_W13ANTEDO = DO_INDSW_W13A_NTE;

    /* DataStoreRead: '<S377>/W13A-NWE-DO' */
    rtb_W13ANWEDO = DO_INDSW_W13A_NWE;

    /* DataStoreRead: '<S377>/W13A-NWRE-DO' */
    rtb_W13ANWREDO = DO_INDSW_W13A_NWRE;

    /* DataStoreRead: '<S377>/W13A-NWTE-DO' */
    rtb_W13ANWTEDO = DO_INDSW_W13A_NWTE;

    /* DataStoreRead: '<S377>/W13A-RRE-DO' */
    rtb_W13ARREDO = DO_INDSW_W13A_RRE;

    /* DataStoreRead: '<S377>/W13A-RTE-DO' */
    rtb_W13ARTEDO = DO_INDSW_W13A_RTE;

    /* DataStoreRead: '<S377>/W13A-RWE-DO' */
    rtb_W13ARWEDO = DO_INDSW_W13A_RWE;

    /* DataStoreRead: '<S377>/W13A-RWRE-DO' */
    rtb_W13ARWREDO = DO_INDSW_W13A_RWRE;

    /* DataStoreRead: '<S377>/W13A-RWTE-DO' */
    rtb_W13ARWTEDO = DO_INDSW_W13A_RWTE;

    /* DataStoreRead: '<S377>/W13B-BE-DO' */
    rtb_W13BBEDO = DO_INDSW_W13B_BE;

    /* DataStoreRead: '<S377>/W13B-LE-DO' */
    rtb_W13BLEDO = DO_INDSW_W13B_LE;

    /* DataStoreRead: '<S377>/W13B-NRE-DO' */
    rtb_W13BNREDO = DO_INDSW_W13B_NRE;

    /* DataStoreRead: '<S377>/W13B-NTE-DO' */
    rtb_W13BNTEDO = DO_INDSW_W13B_NTE;

    /* DataStoreRead: '<S377>/W13B-NWE-DO' */
    rtb_W13BNWEDO = DO_INDSW_W13B_NWE;

    /* DataStoreRead: '<S377>/W13B-NWRE-DO' */
    rtb_W13BNWREDO = DO_INDSW_W13B_NWRE;

    /* DataStoreRead: '<S377>/W13B-NWTE-DO' */
    rtb_W13BNWTEDO = DO_INDSW_W13B_NWTE;

    /* DataStoreRead: '<S377>/W13B-RRE-DO' */
    rtb_W13BRREDO = DO_INDSW_W13B_RRE;

    /* DataStoreRead: '<S377>/W13B-RTE-DO' */
    rtb_W13BRTEDO = DO_INDSW_W13B_RTE;

    /* DataStoreRead: '<S377>/W13B-RWE-DO' */
    rtb_W13BRWEDO = DO_INDSW_W13B_RWE;

    /* DataStoreRead: '<S377>/W13B-RWRE-DO' */
    rtb_W13BRWREDO = DO_INDSW_W13B_RWRE;

    /* DataStoreRead: '<S377>/W13B-RWTE-DO' */
    rtb_W13BRWTEDO = DO_INDSW_W13B_RWTE;

    /* DataStoreRead: '<S377>/W54-BE-DO' */
    rtb_W54BEDO = DO_INDSW_W54_BE;

    /* DataStoreRead: '<S377>/W54-LE-DO' */
    rtb_W54LEDO = DO_INDSW_W54_LE;

    /* DataStoreRead: '<S377>/W54-NRE-DO' */
    rtb_W54NREDO = DO_INDSW_W54_NRE;

    /* DataStoreRead: '<S377>/W54-NTE-DO' */
    rtb_W54NTEDO = DO_INDSW_W54_NTE;

    /* DataStoreRead: '<S377>/W54-NWE-DO' */
    rtb_W54NWEDO = DO_INDSW_W54_NWE;

    /* DataStoreRead: '<S377>/W54-NWRE-DO' */
    rtb_W54NWREDO = DO_INDSW_W54_NWRE;

    /* DataStoreRead: '<S377>/W54-NWTE-DO' */
    rtb_W54NWTEDO = DO_INDSW_W54_NWTE;

    /* DataStoreRead: '<S377>/W54-RRE-DO' */
    rtb_W54RREDO = DO_INDSW_W54_RRE;

    /* DataStoreRead: '<S377>/W54-RTE-DO' */
    rtb_W54RTEDO = DO_INDSW_W54_RTE;

    /* DataStoreRead: '<S377>/W54-RWE-DO' */
    rtb_W54RWEDO = DO_INDSW_W54_RWE;

    /* DataStoreRead: '<S377>/W54-RWRE-DO' */
    rtb_W54RWREDO = DO_INDSW_W54_RWRE;

    /* DataStoreRead: '<S377>/W54-RWTE-DO' */
    rtb_W54RWTEDO = DO_INDSW_W54_RWTE;

    /* DataStoreRead: '<S377>/W73A-BE-DO' */
    rtb_W73ABEDO = DO_INDSW_W73A_BE;

    /* DataStoreRead: '<S377>/W73A-LE-DO' */
    rtb_W73ALEDO = DO_INDSW_W73A_LE;

    /* DataStoreRead: '<S377>/W73A-NRE-DO' */
    rtb_W73ANREDO = DO_INDSW_W73A_NRE;

    /* DataStoreRead: '<S377>/W73A-NTE-DO' */
    rtb_W73ANTEDO = DO_INDSW_W73A_NTE;

    /* DataStoreRead: '<S377>/W73A-NWE-DO' */
    rtb_W73ANWEDO = DO_INDSW_W73A_NWE;

    /* DataStoreRead: '<S377>/W73A-NWRE-DO' */
    rtb_W73ANWREDO = DO_INDSW_W73A_NWRE;

    /* DataStoreRead: '<S377>/W73A-NWTE-DO' */
    rtb_W73ANWTEDO = DO_INDSW_W73A_NWTE;

    /* DataStoreRead: '<S377>/W73A-RRE-DO' */
    rtb_W73ARREDO = DO_INDSW_W73A_RRE;

    /* DataStoreRead: '<S377>/W73A-RTE-DO' */
    rtb_W73ARTEDO = DO_INDSW_W73A_RTE;

    /* DataStoreRead: '<S377>/W73A-RWE-DO' */
    rtb_W73ARWEDO = DO_INDSW_W73A_RWE;

    /* DataStoreRead: '<S377>/W73A-RWRE-DO' */
    rtb_W73ARWREDO = DO_INDSW_W73A_RWRE;

    /* DataStoreRead: '<S377>/W73A-RWTE-DO' */
    rtb_W73ARWTEDO = DO_INDSW_W73A_RWTE;

    /* DataStoreRead: '<S377>/W73B-BE-DO' */
    rtb_W73BBEDO = DO_INDSW_W73B_BE;

    /* DataStoreRead: '<S377>/W73B-LE-DO' */
    rtb_W73BLEDO = DO_INDSW_W73B_LE;

    /* DataStoreRead: '<S377>/W73B-NRE-DO' */
    rtb_W73BNREDO = DO_INDSW_W73B_NRE;

    /* DataStoreRead: '<S377>/W73B-NTE-DO' */
    rtb_W73BNTEDO = DO_INDSW_W73B_NTE;

    /* DataStoreRead: '<S377>/W73B-NWE-DO' */
    rtb_W73BNWEDO = DO_INDSW_W73B_NWE;

    /* DataStoreRead: '<S377>/W73B-NWRE-DO' */
    rtb_W73BNWREDO = DO_INDSW_W73B_NWRE;

    /* DataStoreRead: '<S377>/W73B-NWTE-DO' */
    rtb_W73BNWTEDO = DO_INDSW_W73B_NWTE;

    /* DataStoreRead: '<S377>/W73B-RRE-DO' */
    rtb_W73BRREDO = DO_INDSW_W73B_RRE;

    /* DataStoreRead: '<S377>/W73B-RTE-DO' */
    rtb_W73BRTEDO = DO_INDSW_W73B_RTE;

    /* DataStoreRead: '<S377>/W73B-RWE-DO' */
    rtb_W73BRWEDO = DO_INDSW_W73B_RWE;

    /* DataStoreRead: '<S377>/W73B-RWRE-DO' */
    rtb_W73BRWREDO = DO_INDSW_W73B_RWRE;

    /* DataStoreRead: '<S377>/W73B-RWTE-DO' */
    rtb_W73BRWTEDO = DO_INDSW_W73B_RWTE;

    /* DataStoreRead: '<S377>/12-RE-DO' */
    rtb_u2REDO = DO_INDT_RE_12;

    /* DataStoreRead: '<S377>/12-TE-DO' */
    rtb_u2TEDO = DO_INDT_TE_12;

    /* DataStoreRead: '<S377>/13-RE-DO' */
    rtb_u3REDO = DO_INDT_RE_13;

    /* DataStoreRead: '<S377>/13-TE-DO' */
    rtb_u3TEDO = DO_INDT_TE_13;

    /* DataStoreRead: '<S377>/14-RE-DO' */
    rtb_u4REDO = DO_INDT_RE_14;

    /* DataStoreRead: '<S377>/14-TE-DO' */
    rtb_u4TEDO = DO_INDT_TE_14;

    /* DataStoreRead: '<S377>/32-RE-DO' */
    rtb_u2REDO_j = DO_INDT_RE_32;

    /* DataStoreRead: '<S377>/32-TE-DO' */
    rtb_u2TEDO_n3 = DO_INDT_TE_32;

    /* DataStoreRead: '<S377>/34-RE-DO' */
    rtb_u4REDO_b = DO_INDT_RE_34;

    /* DataStoreRead: '<S377>/34-TE-DO' */
    rtb_u4TEDO_f0 = DO_INDT_TE_34;

    /* DataStoreRead: '<S377>/54-RE-DO' */
    rtb_u4REDO_md = DO_INDT_RE_54;

    /* DataStoreRead: '<S377>/54-TE-DO' */
    rtb_u4TEDO_g = DO_INDT_TE_54;

    /* DataStoreRead: '<S377>/72-RE-DO' */
    rtb_u2REDO_g = DO_INDT_RE_72;

    /* DataStoreRead: '<S377>/72-TE-DO' */
    rtb_u2TEDO_f = DO_INDT_TE_72;

    /* DataStoreRead: '<S377>/73A-RE-DO' */
    rtb_u3AREDO = DO_INDT_RE_73A;

    /* DataStoreRead: '<S377>/73A-TE-DO' */
    rtb_u3ATEDO = DO_INDT_TE_73A;

    /* DataStoreRead: '<S377>/73B-RE-DO' */
    rtb_u3BREDO = DO_INDT_RE_73B;

    /* DataStoreRead: '<S377>/73B-TE-DO' */
    rtb_u3BTEDO = DO_INDT_TE_73B;

    /* DataStoreRead: '<S377>/74-RE-DO' */
    rtb_u4REDO_i = DO_INDT_RE_74;

    /* DataStoreRead: '<S377>/74-TE-DO' */
    rtb_u4TEDO_o = DO_INDT_TE_74;

    /* DataStoreRead: '<S377>/L12-PBE-DO' */
    rtb_L12PBEDO = DO_INDPB_L12;

    /* DataStoreRead: '<S377>/L14A-PBE-DO' */
    rtb_L14APBEDO = DO_INDPB_L14A;

    /* DataStoreRead: '<S377>/L14B-PBE-DO' */
    rtb_L14BPBEDO = DO_INDPB_L14B;

    /* DataStoreRead: '<S377>/L32-PBE-DO' */
    rtb_L32PBEDO = DO_INDPB_L32;

    /* DataStoreRead: '<S377>/L34-PBE-DO' */
    rtb_L34PBEDO = DO_INDPB_L34;

    /* DataStoreRead: '<S377>/L54-PBE-DO' */
    rtb_L54PBEDO = DO_INDPB_L54;

    /* DataStoreRead: '<S377>/L72-PBE-DO' */
    rtb_L72PBEDO = DO_INDPB_L72;

    /* DataStoreRead: '<S377>/L74-PBE-DO' */
    rtb_L74PBEDO = DO_INDPB_L74;

    /* DataStoreRead: '<S377>/X12-PBE-DO' */
    rtb_X12PBEDO = DO_INDPB_X12;

    /* DataStoreRead: '<S377>/X32-PBE-DO' */
    rtb_X32PBEDO = DO_INDPB_X32;

    /* DataStoreRead: '<S377>/X34-PBE-DO' */
    rtb_X34PBEDO = DO_INDPB_X34;

    /* DataStoreRead: '<S377>/X54-PBE-DO' */
    rtb_X54PBEDO = DO_INDPB_X54;

    /* DataStoreRead: '<S377>/X72-PBE-DO' */
    rtb_X72PBEDO = DO_INDPB_X72;

    /* DataStoreRead: '<S377>/X73-PBE-DO' */
    rtb_X73PBEDO = DO_INDPB_X74;

    /* DataStoreRead: '<S377>/X73-PBE-DO1' */
    rtb_X73PBEDO1 = DO_INDAR_L14B;

    /* DataStoreRead: '<S377>/IN-FE-DO' */
    rtb_INFEDO = DO_FE_IN;

    /* DataStoreRead: '<S377>/IN-FLE-DO' */
    rtb_INFLEDO = DO_FLE_IN;

    /* DataStoreRead: '<S377>/MAIN-BE-DO' incorporates:
     *  DataStoreWrite: '<S381>/MAIN-BE-DO'
     */
    rtb_MAINBEDO = rtu_FROMMAIN[16];

    /* DataStoreRead: '<S377>/MAIN-RE-DO' incorporates:
     *  DataStoreWrite: '<S381>/MAIN-RE-DO'
     */
    rtb_MAINREDO = rtu_FROMMAIN[15];

    /* DataStoreRead: '<S377>/MAIN-TE-DO' incorporates:
     *  DataStoreWrite: '<S381>/MAIN-TE-DO'
     */
    rtb_MAINTEDO = rtu_FROMMAIN[14];

    /* DataStoreRead: '<S377>/OUT-FE-DO' */
    rtb_OUTFEDO = DO_FE_OUT;

    /* DataStoreRead: '<S377>/OUT-FLE-DO' */
    rtb_OUTFLEDO = DO_FLE_OUT;

    /* DataStoreRead: '<S377>/TBW-CT-DO' */
    rtb_TBWCTDO = DO_CT_TBW;

    /* DataStoreRead: '<S377>/TPR-CT-DO' */
    rtb_TPRCTDO = DO_CT_TPR;

    /* DataStoreRead: '<S377>/TWT-CT-DO' */
    rtb_TWTCTDO = DO_CT_TWT;

    /* DataStoreRead: '<S377>/TZB-IND-DO' */
    rtb_TZBINDDO = DO_INDCBTC_TZB;

    /* DataStoreWrite: '<S17>/AS-DEP' incorporates:
     *  DataStoreWrite: '<S380>/L12-S-AS'
     *  DataStoreWrite: '<S380>/L14A-S-AS'
     *  DataStoreWrite: '<S380>/L32-S-AS'
     *  DataStoreWrite: '<S380>/L34-S-AS'
     *  DataStoreWrite: '<S380>/L54-S-AS'
     *  DataStoreWrite: '<S380>/L72-S-AS'
     *  DataStoreWrite: '<S380>/L74-S-AS'
     *  Logic: '<S17>/AND1'
     */
    M_AS_DEP = (rtu_SASFROM[0] && rtu_SASFROM[1] && rtu_SASFROM[2] &&
                rtu_SASFROM[4] && rtu_SASFROM[5] && rtu_SASFROM[6] &&
                rtu_SASFROM[3]);

    /* DataStoreWrite: '<S18>/RR' */
    M_GV_RR = Memory_PreviousInput;

    /* Memory: '<S18>/Memory1' */
    rtb_TPRPBDI_b = NONVITALDEPOT_DW.Memory1_PreviousInput;

    /* DataStoreWrite: '<S18>/RR-OK' */
    M_GV_RR_OK = rtb_TPRPBDI_b;

    /* DataStoreWrite: '<S18>/RR-CTRL-TO' incorporates:
     *  DataStoreWrite: '<S376>/TPR-BANTU-PB'
     */
    NONVITALDEPOT_DW.M_CTRL_RR = rtu_GLOBALPBDI[3];

    /* Logic: '<S18>/OR1' incorporates:
     *  DataStoreRead: '<S18>/VDR'
     *  DataStoreWrite: '<S376>/TPR-BANTU-PB'
     *  Logic: '<S18>/AND1'
     */
    NONVITALDEPOT_DW.OR1 = ((rtu_GLOBALPBDI[3] && NONVITALDEPOT_DW.M_VDR) ||
      Memory_PreviousInput);

    /* Logic: '<S18>/OR2' */
    NONVITALDEPOT_DW.OR2 = (M_AS_DEP || rtb_TPRPBDI_b);

    /* Logic: '<S19>/NOT3' incorporates:
     *  DataStoreWrite: '<S380>/73B-TP'
     */
    NONVITALDEPOT_DW.NOT3 = !rtu_TPFROM[8];
  }

  /* Outputs for Atomic SubSystem: '<S19>/DNV_TON2' */
  DNV_TON(NONVITALDEPOT_M, NONVITALDEPOT_DW.NOT3, &NONVITALDEPOT_DW.DNV_TON2,
          0.5);

  /* End of Outputs for SubSystem: '<S19>/DNV_TON2' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S19>/73B-TPBP' incorporates:
     *  SignalConversion: '<S19>/TmpSignal ConversionAtDNV_TON2Outport1'
     */
    M_TPBP_73B = NONVITALDEPOT_DW.DNV_TON2.LogicalOperator2;

    /* Logic: '<S19>/NOT2' */
    NONVITALDEPOT_DW.NOT2 = !M_TP_73A;
  }

  /* Outputs for Atomic SubSystem: '<S19>/DNV_TON1' */
  DNV_TON(NONVITALDEPOT_M, NONVITALDEPOT_DW.NOT2, &NONVITALDEPOT_DW.DNV_TON1,
          0.5);

  /* End of Outputs for SubSystem: '<S19>/DNV_TON1' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S19>/73A-TPBP' incorporates:
     *  SignalConversion: '<S19>/TmpSignal ConversionAtDNV_TON1Outport1'
     */
    M_TPBP_73A = NONVITALDEPOT_DW.DNV_TON1.LogicalOperator2;

    /* Logic: '<S19>/NOT1' */
    NONVITALDEPOT_DW.NOT1 = !M_TP_13;
  }

  /* Outputs for Atomic SubSystem: '<S19>/DNV_TON' */
  DNV_TON(NONVITALDEPOT_M, NONVITALDEPOT_DW.NOT1, &NONVITALDEPOT_DW.DNV_TON_h,
          0.5);

  /* End of Outputs for SubSystem: '<S19>/DNV_TON' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S19>/13-TPBP' incorporates:
     *  SignalConversion: '<S19>/TmpSignal ConversionAtDNV_TONOutport1'
     */
    M_TPBP_13 = NONVITALDEPOT_DW.DNV_TON_h.LogicalOperator2;

    /* Memory: '<S35>/Memory1' */
    NONVITALDEPOT_DW.Memory1 = NONVITALDEPOT_DW.Memory1_PreviousInput_j;

    /* DataStoreWrite: '<S35>/L12-GR-RD' */
    M_RD_L12_GR = NONVITALDEPOT_DW.Memory1;

    /* Logic: '<S35>/OR4' incorporates:
     *  Memory: '<S35>/Memory2'
     */
    OR4 = (NONVITALDEPOT_DW.Memory2_PreviousInput || M_CTRL_RST_12);

    /* Logic: '<S35>/NOT8' */
    NOT8 = !M_AS_S_L12;

    /* DataStoreRead: '<S35>/L12-GR-DO' */
    NONVITALDEPOT_DW.L12GRDO = M_DO_L12_GR;
  }

  /* Outputs for Atomic SubSystem: '<S35>/DNV_TOF' */
  DNV_TOF(NONVITALDEPOT_M, NONVITALDEPOT_DW.Memory1, &NONVITALDEPOT_DW.DNV_TOF_n,
          0.5);

  /* End of Outputs for SubSystem: '<S35>/DNV_TOF' */

  /* Logic: '<S35>/AND13' incorporates:
   *  Logic: '<S35>/AND4'
   *  Logic: '<S35>/NOT16'
   *  Logic: '<S35>/OR10'
   */
  NONVITALDEPOT_DW.AND13 = (OR4 && (NOT8 && (NONVITALDEPOT_DW.L12GRDO ||
    (!NONVITALDEPOT_DW.DNV_TOF_n.LogicalOperator4))));
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S35>/L12-PBE-DO' incorporates:
     *  Logic: '<S35>/AND5'
     *  Logic: '<S35>/AND7'
     *  Logic: '<S35>/NOT11'
     *  Logic: '<S35>/OR6'
     */
    DO_INDPB_L12 = ((NONVITALDEPOT_DW.AND13 && M_GV_FLASH_1000) || (M_RS_12_14 &&
      (!NONVITALDEPOT_DW.L12GRDO)));

    /* Memory: '<S36>/Memory1' */
    NONVITALDEPOT_DW.Memory1_c = NONVITALDEPOT_DW.Memory1_PreviousInput_o;

    /* DataStoreWrite: '<S36>/L14A-GR-RD' */
    M_RD_L14A_GR = NONVITALDEPOT_DW.Memory1_c;

    /* Logic: '<S36>/OR1' incorporates:
     *  Memory: '<S36>/Memory3'
     */
    OR1_m = (NONVITALDEPOT_DW.Memory3_PreviousInput || M_CTRL_RST_14A);

    /* Logic: '<S36>/NOT8' */
    NOT8_l = !M_AS_S_L14A;

    /* DataStoreRead: '<S36>/L14A-GR-DO' */
    NONVITALDEPOT_DW.L14AGRDO = M_DO_L14A_GR;
  }

  /* Outputs for Atomic SubSystem: '<S36>/DNV_TOF' */
  DNV_TOF(NONVITALDEPOT_M, NONVITALDEPOT_DW.Memory1_c,
          &NONVITALDEPOT_DW.DNV_TOF_c, 0.5);

  /* End of Outputs for SubSystem: '<S36>/DNV_TOF' */

  /* Logic: '<S36>/AND1' incorporates:
   *  Logic: '<S36>/AND7'
   *  Logic: '<S36>/NOT1'
   *  Logic: '<S36>/OR10'
   */
  NONVITALDEPOT_DW.AND1 = (OR1_m && (NOT8_l && (NONVITALDEPOT_DW.L14AGRDO ||
    (!NONVITALDEPOT_DW.DNV_TOF_c.LogicalOperator4))));
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S36>/L14A-PBE-DO' incorporates:
     *  Logic: '<S36>/AND2'
     *  Logic: '<S36>/AND8'
     *  Logic: '<S36>/AND9'
     *  Logic: '<S36>/NOT11'
     *  Logic: '<S36>/OR2'
     */
    DO_INDPB_L14A = ((NONVITALDEPOT_DW.AND1 && M_GV_FLASH_1000) || ((M_RS_14_12 ||
      M_RS_14_32 || M_RS_14_72) && (!NONVITALDEPOT_DW.L14AGRDO)));

    /* DataStoreWrite: '<S37>/L14B-PBE-DO' incorporates:
     *  DataStoreRead: '<S37>/FLASH-0.5S'
     *  Logic: '<S37>/AND14'
     *  Logic: '<S37>/AND16'
     *  Logic: '<S37>/AND3'
     *  Logic: '<S37>/NOT10'
     *  Logic: '<S37>/NOT2'
     *  Logic: '<S37>/NOT3'
     *  Logic: '<S37>/NOT4'
     *  Logic: '<S37>/OR5'
     *  Logic: '<S37>/OR6'
     *  Logic: '<S37>/OR7'
     *  Logic: '<S37>/OR9'
     */
    DO_INDPB_L14B = ((((M_RS_12_14 && (!M_DO_L12_GR)) || (M_RS_32_14 &&
      (!M_DO_L32_GR)) || (M_RS_72_14 && (!M_DO_L72_GR))) && (!M_RRLS_14B)) ||
                     (M_RRLS_14B && NONVITALDEPOT_DW.M_GV_FLASH_500));

    /* Memory: '<S38>/Memory1' */
    NONVITALDEPOT_DW.Memory1_l = NONVITALDEPOT_DW.Memory1_PreviousInput_a;

    /* DataStoreWrite: '<S38>/L32-GR-RD' */
    M_RD_L32_GR = NONVITALDEPOT_DW.Memory1_l;

    /* Logic: '<S38>/OR4' incorporates:
     *  Memory: '<S38>/Memory2'
     */
    OR4_b = (NONVITALDEPOT_DW.Memory2_PreviousInput_e || M_CTRL_RST_32);

    /* Logic: '<S38>/NOT8' */
    NOT8_b = !M_AS_S_L32;

    /* DataStoreRead: '<S38>/L32-GR-DO' */
    NONVITALDEPOT_DW.L32GRDO = M_DO_L32_GR;
  }

  /* Outputs for Atomic SubSystem: '<S38>/DNV_TOF' */
  DNV_TOF(NONVITALDEPOT_M, NONVITALDEPOT_DW.Memory1_l,
          &NONVITALDEPOT_DW.DNV_TOF_g, 0.5);

  /* End of Outputs for SubSystem: '<S38>/DNV_TOF' */

  /* Logic: '<S38>/AND13' incorporates:
   *  Logic: '<S38>/AND4'
   *  Logic: '<S38>/NOT16'
   *  Logic: '<S38>/OR10'
   */
  NONVITALDEPOT_DW.AND13_d = (OR4_b && (NOT8_b && (NONVITALDEPOT_DW.L32GRDO || (
    !NONVITALDEPOT_DW.DNV_TOF_g.LogicalOperator4))));
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S38>/L32-PBE-DO' incorporates:
     *  Logic: '<S38>/AND5'
     *  Logic: '<S38>/AND7'
     *  Logic: '<S38>/NOT11'
     *  Logic: '<S38>/OR6'
     */
    DO_INDPB_L32 = ((NONVITALDEPOT_DW.AND13_d && M_GV_FLASH_1000) || (M_RS_32_14
      && (!NONVITALDEPOT_DW.L32GRDO)));

    /* Memory: '<S39>/Memory1' */
    NONVITALDEPOT_DW.Memory1_o = NONVITALDEPOT_DW.Memory1_PreviousInput_os;

    /* DataStoreWrite: '<S39>/L34-GR-RD' */
    M_RD_L34_GR = NONVITALDEPOT_DW.Memory1_o;

    /* Logic: '<S39>/OR4' incorporates:
     *  Memory: '<S39>/Memory2'
     */
    OR4_m = (NONVITALDEPOT_DW.Memory2_PreviousInput_p || M_CTRL_RST_34);

    /* Logic: '<S39>/NOT8' */
    NOT8_p = !M_AS_S_L34;

    /* DataStoreRead: '<S39>/L34-GR-DO' */
    NONVITALDEPOT_DW.L34GRDO = M_DO_L34_GR;
  }

  /* Outputs for Atomic SubSystem: '<S39>/DNV_TOF' */
  DNV_TOF(NONVITALDEPOT_M, NONVITALDEPOT_DW.Memory1_o,
          &NONVITALDEPOT_DW.DNV_TOF_k, 0.5);

  /* End of Outputs for SubSystem: '<S39>/DNV_TOF' */

  /* Logic: '<S39>/AND13' incorporates:
   *  Logic: '<S39>/AND4'
   *  Logic: '<S39>/NOT16'
   *  Logic: '<S39>/OR10'
   */
  NONVITALDEPOT_DW.AND13_b = (OR4_m && (NOT8_p && (NONVITALDEPOT_DW.L34GRDO || (
    !NONVITALDEPOT_DW.DNV_TOF_k.LogicalOperator4))));
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S39>/L34-PBE-DO' incorporates:
     *  Logic: '<S39>/AND5'
     *  Logic: '<S39>/AND7'
     *  Logic: '<S39>/NOT11'
     *  Logic: '<S39>/OR6'
     */
    DO_INDPB_L34 = ((NONVITALDEPOT_DW.AND13_b && M_GV_FLASH_1000) || (M_RS_34_72
      && (!NONVITALDEPOT_DW.L34GRDO)));

    /* Memory: '<S40>/Memory1' */
    NONVITALDEPOT_DW.Memory1_oh = NONVITALDEPOT_DW.Memory1_PreviousInput_d;

    /* DataStoreWrite: '<S40>/L54-GR-RD' */
    M_RD_L54_GR = NONVITALDEPOT_DW.Memory1_oh;

    /* Logic: '<S40>/OR4' incorporates:
     *  Memory: '<S40>/Memory2'
     */
    OR4_g = (NONVITALDEPOT_DW.Memory2_PreviousInput_k || M_CTRL_RST_54);

    /* Logic: '<S40>/NOT8' */
    NOT8_pn = !M_AS_S_L54;

    /* DataStoreRead: '<S40>/L54-GR-DO' */
    NONVITALDEPOT_DW.L54GRDO = M_DO_L54_GR;
  }

  /* Outputs for Atomic SubSystem: '<S40>/DNV_TOF' */
  DNV_TOF(NONVITALDEPOT_M, NONVITALDEPOT_DW.Memory1_oh,
          &NONVITALDEPOT_DW.DNV_TOF_f, 0.5);

  /* End of Outputs for SubSystem: '<S40>/DNV_TOF' */

  /* Logic: '<S40>/AND13' incorporates:
   *  Logic: '<S40>/AND4'
   *  Logic: '<S40>/NOT16'
   *  Logic: '<S40>/OR10'
   */
  NONVITALDEPOT_DW.AND13_n = (OR4_g && (NOT8_pn && (NONVITALDEPOT_DW.L54GRDO ||
    (!NONVITALDEPOT_DW.DNV_TOF_f.LogicalOperator4))));
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S40>/L54-PBE-DO' incorporates:
     *  Logic: '<S40>/AND5'
     *  Logic: '<S40>/AND7'
     *  Logic: '<S40>/NOT11'
     *  Logic: '<S40>/OR6'
     */
    DO_INDPB_L54 = ((NONVITALDEPOT_DW.AND13_n && M_GV_FLASH_1000) || (M_RS_54_72
      && (!NONVITALDEPOT_DW.L54GRDO)));

    /* Memory: '<S41>/Memory1' */
    NONVITALDEPOT_DW.Memory1_m = NONVITALDEPOT_DW.Memory1_PreviousInput_g;

    /* DataStoreWrite: '<S41>/L72-GR-RD' */
    M_RD_L72_GR = NONVITALDEPOT_DW.Memory1_m;

    /* Logic: '<S41>/OR4' incorporates:
     *  Memory: '<S41>/Memory2'
     */
    OR4_p = (NONVITALDEPOT_DW.Memory2_PreviousInput_g || M_CTRL_RST_72);

    /* Logic: '<S41>/NOT8' */
    NOT8_n = !M_AS_S_L72;

    /* DataStoreRead: '<S41>/L72-GR-DO' */
    NONVITALDEPOT_DW.L72GRDO = M_DO_L72_GR;
  }

  /* Outputs for Atomic SubSystem: '<S41>/DNV_TOF' */
  DNV_TOF(NONVITALDEPOT_M, NONVITALDEPOT_DW.Memory1_m,
          &NONVITALDEPOT_DW.DNV_TOF_p, 0.5);

  /* End of Outputs for SubSystem: '<S41>/DNV_TOF' */

  /* Logic: '<S41>/AND13' incorporates:
   *  Logic: '<S41>/AND4'
   *  Logic: '<S41>/NOT16'
   *  Logic: '<S41>/OR10'
   */
  NONVITALDEPOT_DW.AND13_d5 = (OR4_p && (NOT8_n && (NONVITALDEPOT_DW.L72GRDO ||
    (!NONVITALDEPOT_DW.DNV_TOF_p.LogicalOperator4))));
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S41>/L72-PBE-DO' incorporates:
     *  Logic: '<S41>/AND2'
     *  Logic: '<S41>/AND5'
     *  Logic: '<S41>/AND7'
     *  Logic: '<S41>/NOT11'
     *  Logic: '<S41>/OR6'
     */
    DO_INDPB_L72 = ((NONVITALDEPOT_DW.AND13_d5 && M_GV_FLASH_1000) ||
                    ((M_RS_72_14 || M_RS_72_34 || M_RS_72_54 || M_RS_72_74) && (
      !NONVITALDEPOT_DW.L72GRDO)));

    /* Memory: '<S42>/Memory1' */
    NONVITALDEPOT_DW.Memory1_d = NONVITALDEPOT_DW.Memory1_PreviousInput_l;

    /* DataStoreWrite: '<S42>/L74-GR-RD' */
    M_RD_L74_GR = NONVITALDEPOT_DW.Memory1_d;

    /* Logic: '<S42>/OR4' incorporates:
     *  Memory: '<S42>/Memory2'
     */
    OR4_gc = (NONVITALDEPOT_DW.Memory2_PreviousInput_kt || M_CTRL_RST_74);

    /* Logic: '<S42>/NOT8' */
    NOT8_c = !M_AS_S_L74;

    /* DataStoreRead: '<S42>/L74-GR-DO' */
    NONVITALDEPOT_DW.L74GRDO = M_DO_L74_GR;
  }

  /* Outputs for Atomic SubSystem: '<S42>/DNV_TOF' */
  DNV_TOF(NONVITALDEPOT_M, NONVITALDEPOT_DW.Memory1_d,
          &NONVITALDEPOT_DW.DNV_TOF_pb, 0.5);

  /* End of Outputs for SubSystem: '<S42>/DNV_TOF' */

  /* Logic: '<S42>/AND13' incorporates:
   *  Logic: '<S42>/AND4'
   *  Logic: '<S42>/NOT16'
   *  Logic: '<S42>/OR10'
   */
  NONVITALDEPOT_DW.AND13_m = (OR4_gc && (NOT8_c && (NONVITALDEPOT_DW.L74GRDO ||
    (!NONVITALDEPOT_DW.DNV_TOF_pb.LogicalOperator4))));
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S42>/L74-PBE-DO' incorporates:
     *  Logic: '<S42>/AND5'
     *  Logic: '<S42>/AND7'
     *  Logic: '<S42>/NOT11'
     *  Logic: '<S42>/OR6'
     */
    DO_INDPB_L74 = ((NONVITALDEPOT_DW.AND13_m && M_GV_FLASH_1000) || (M_RS_74_72
      && (!NONVITALDEPOT_DW.L74GRDO)));

    /* DataStoreWrite: '<S43>/X12-PBE-DO' incorporates:
     *  DataStoreRead: '<S43>/FLASH-0.5S'
     *  Logic: '<S43>/AND14'
     *  Logic: '<S43>/AND16'
     *  Logic: '<S43>/NOT10'
     *  Logic: '<S43>/NOT4'
     *  Logic: '<S43>/OR4'
     *  Logic: '<S43>/OR9'
     */
    DO_INDPB_X12 = ((M_RS_14_12 && (!M_DO_L14A_GR) && (!M_RRLS_12)) ||
                    (M_RRLS_12 && NONVITALDEPOT_DW.M_GV_FLASH_500));

    /* DataStoreWrite: '<S44>/X32-PBE-DO' incorporates:
     *  DataStoreRead: '<S44>/FLASH-0.5S'
     *  Logic: '<S44>/AND14'
     *  Logic: '<S44>/AND16'
     *  Logic: '<S44>/NOT10'
     *  Logic: '<S44>/NOT4'
     *  Logic: '<S44>/OR4'
     *  Logic: '<S44>/OR9'
     */
    DO_INDPB_X32 = ((M_RS_14_32 && (!M_DO_L14A_GR) && (!M_RRLS_32)) ||
                    (M_RRLS_32 && NONVITALDEPOT_DW.M_GV_FLASH_500));

    /* DataStoreWrite: '<S45>/X34-PBE-DO' incorporates:
     *  DataStoreRead: '<S45>/FLASH-0.5S'
     *  Logic: '<S45>/AND14'
     *  Logic: '<S45>/AND16'
     *  Logic: '<S45>/NOT10'
     *  Logic: '<S45>/NOT4'
     *  Logic: '<S45>/OR4'
     *  Logic: '<S45>/OR9'
     */
    DO_INDPB_X34 = ((M_RS_72_34 && (!M_DO_L72_GR) && (!M_RRLS_34)) || (M_RRLS_34
      && NONVITALDEPOT_DW.M_GV_FLASH_500));

    /* DataStoreWrite: '<S46>/X54-PBE-DO' incorporates:
     *  DataStoreRead: '<S46>/FLASH-0.5S'
     *  Logic: '<S46>/AND14'
     *  Logic: '<S46>/AND16'
     *  Logic: '<S46>/NOT10'
     *  Logic: '<S46>/NOT4'
     *  Logic: '<S46>/OR4'
     *  Logic: '<S46>/OR9'
     */
    DO_INDPB_X54 = ((M_RS_72_54 && (!M_DO_L72_GR) && (!M_RRLS_54)) || (M_RRLS_54
      && NONVITALDEPOT_DW.M_GV_FLASH_500));

    /* DataStoreWrite: '<S47>/X72-PBE-DO' incorporates:
     *  DataStoreRead: '<S47>/FLASH-0.5S'
     *  Logic: '<S47>/AND14'
     *  Logic: '<S47>/AND16'
     *  Logic: '<S47>/AND3'
     *  Logic: '<S47>/NOT1'
     *  Logic: '<S47>/NOT10'
     *  Logic: '<S47>/NOT2'
     *  Logic: '<S47>/NOT3'
     *  Logic: '<S47>/NOT4'
     *  Logic: '<S47>/OR5'
     *  Logic: '<S47>/OR6'
     *  Logic: '<S47>/OR7'
     *  Logic: '<S47>/OR8'
     *  Logic: '<S47>/OR9'
     */
    DO_INDPB_X72 = ((((M_RS_14_72 && (!M_DO_L14A_GR)) || (M_RS_34_72 &&
      (!M_DO_L34_GR)) || (M_RS_54_72 && (!M_DO_L54_GR)) || (M_RS_74_72 &&
      (!M_DO_L74_GR))) && (!M_RRLS_72)) || (M_RRLS_72 &&
      NONVITALDEPOT_DW.M_GV_FLASH_500));

    /* DataStoreWrite: '<S48>/X74-PBE-DO' incorporates:
     *  DataStoreRead: '<S48>/FLASH-0.5S'
     *  Logic: '<S48>/AND14'
     *  Logic: '<S48>/AND16'
     *  Logic: '<S48>/NOT10'
     *  Logic: '<S48>/NOT4'
     *  Logic: '<S48>/OR4'
     *  Logic: '<S48>/OR9'
     */
    DO_INDPB_X74 = ((M_RS_72_74 && (!M_DO_L72_GR) && (!M_RRLS_74)) || (M_RRLS_74
      && NONVITALDEPOT_DW.M_GV_FLASH_500));

    /* DataStoreRead: '<S84>/W13A-L' */
    rtb_W13AL = M_W13A_L;

    /* DataStoreRead: '<S84>/W13A-SWRLS' */
    rtb_W13ASWRLS = M_W13A_SWRLS;

    /* DataStoreRead: '<S84>/W13A-SWINIT' */
    rtb_W13ASWINIT = M_W13A_SWINIT;

    /* DataStoreRead: '<S84>/W13A-BLOCK' */
    rtb_W13ABLOCK = M_W13A_BLOCK;

    /* DataStoreRead: '<S84>/W13A-LS' */
    rtb_W13ALS = M_W13A_LS;

    /* DataStoreRead: '<S84>/FLASH-1S' */
    rtb_FLASH1S = M_GV_FLASH_1000;

    /* DataStoreRead: '<S84>/FLASH-0.5S' */
    rtb_FLASH05S_a = NONVITALDEPOT_DW.M_GV_FLASH_500;

    /* DataStoreRead: '<S84>/W13A-NWP' */
    rtb_W13ANWP = M_W13A_NWP;

    /* DataStoreRead: '<S84>/W13A-RWP' */
    rtb_W13ARWP = M_W13A_RWP;

    /* DataStoreRead: '<S84>/W13A-NWZ' */
    rtb_W13ANWZ = M_W13A_NWZ;

    /* DataStoreRead: '<S84>/W13A-RWZ' */
    rtb_W13ARWZ = M_W13A_RWZ;

    /* DataStoreRead: '<S84>/W13A-NWC' */
    rtb_W13ANWC = M_W13A_NWC;

    /* DataStoreRead: '<S84>/W13A-RWC' */
    rtb_W13ARWC = M_W13A_RWC;

    /* DataStoreRead: '<S84>/W13A-OOC' */
    rtb_W13AOOC = M_W13A_OOC;

    /* DataStoreRead: '<S84>/13A-TP' */
    rtb_u3ATP_a = M_TP_13;

    /* Logic: '<S84>/NOT1' incorporates:
     *  Logic: '<S84>/AND1'
     */
    rtb_NOT1_a = !(M_S_ES_13 && M_S_WS_13);

    /* Outputs for Atomic SubSystem: '<S84>/D_IND_POINT' */
    D_IND_POINT(rtb_W13AL, rtb_W13ASWRLS, rtb_W13ASWINIT, rtb_W13ABLOCK,
                rtb_W13ALS, rtb_FLASH1S, rtb_FLASH05S_a, rtb_W13ANWP,
                rtb_W13ARWP, rtb_W13ANWZ, rtb_W13ARWZ, rtb_W13ANWC, rtb_W13ARWC,
                rtb_W13AOOC, rtb_u3ATP_a, rtb_NOT1_a,
                &NONVITALDEPOT_DW.D_IND_POINT_f);

    /* End of Outputs for SubSystem: '<S84>/D_IND_POINT' */

    /* DataStoreWrite: '<S84>/W13A-BE-DO' */
    DO_INDSW_W13A_BE = NONVITALDEPOT_DW.D_IND_POINT_f.OR9;

    /* DataStoreWrite: '<S84>/W13A-LE-DO' */
    DO_INDSW_W13A_LE = NONVITALDEPOT_DW.D_IND_POINT_f.AND5;

    /* Logic: '<S84>/Logical Operator4' incorporates:
     *  Logic: '<S84>/Logical Operator6'
     */
    rtb_TPRPBDI_b = (M_W13B_73A_NWZ || (!rtb_NOT1_a));

    /* DataStoreWrite: '<S84>/W13A-NRE-DO' incorporates:
     *  Logic: '<S84>/Logical Operator1'
     */
    DO_INDSW_W13A_NRE = (NONVITALDEPOT_DW.D_IND_POINT_f.AND27 && rtb_TPRPBDI_b);

    /* DataStoreWrite: '<S84>/W13A-NTE-DO' incorporates:
     *  Logic: '<S84>/Logical Operator'
     */
    DO_INDSW_W13A_NTE = (NONVITALDEPOT_DW.D_IND_POINT_f.AND26 && rtb_TPRPBDI_b);

    /* DataStoreWrite: '<S84>/W13A-NWE-DO' */
    DO_INDSW_W13A_NWE = NONVITALDEPOT_DW.D_IND_POINT_f.OR11;

    /* DataStoreWrite: '<S84>/W13A-NWTE-DO' incorporates:
     *  Logic: '<S84>/Logical Operator7'
     */
    DO_INDSW_W13A_NWTE = (NONVITALDEPOT_DW.D_IND_POINT_f.OR12 && rtb_TPRPBDI_b);

    /* DataStoreWrite: '<S84>/W13A-RRE-DO' incorporates:
     *  Logic: '<S84>/Logical Operator3'
     */
    DO_INDSW_W13A_RRE = (NONVITALDEPOT_DW.D_IND_POINT_f.AND28 && rtb_TPRPBDI_b);

    /* DataStoreWrite: '<S84>/W13A-RTE-DO' incorporates:
     *  Logic: '<S84>/Logical Operator2'
     */
    DO_INDSW_W13A_RTE = (NONVITALDEPOT_DW.D_IND_POINT_f.AND34 && rtb_TPRPBDI_b);

    /* DataStoreWrite: '<S84>/W13A-RWE-DO' */
    DO_INDSW_W13A_RWE = NONVITALDEPOT_DW.D_IND_POINT_f.OR13;

    /* DataStoreWrite: '<S84>/W13A-RWTE-DO' incorporates:
     *  Logic: '<S84>/Logical Operator5'
     */
    DO_INDSW_W13A_RWTE = (NONVITALDEPOT_DW.D_IND_POINT_f.OR14 && rtb_TPRPBDI_b);

    /* DataStoreWrite: '<S84>/W11A-RWRE-DO' incorporates:
     *  DataStoreWrite: '<S84>/W13A-RWE-DO'
     *  Logic: '<S84>/AND3'
     */
    DO_INDSW_W13A_RWRE = (NONVITALDEPOT_DW.D_IND_POINT_f.OR13 &&
                          DO_INDSW_W13B_NWRE && DO_INDT_RE_13);

    /* DataStoreWrite: '<S84>/W13A-NWRE-DO' incorporates:
     *  DataStoreWrite: '<S84>/W13A-NWE-DO'
     *  Logic: '<S84>/AND2'
     */
    DO_INDSW_W13A_NWRE = (NONVITALDEPOT_DW.D_IND_POINT_f.OR11 &&
                          DO_INDSW_W13B_NWRE && DO_INDT_RE_13);

    /* DataStoreRead: '<S85>/W13B//73A-L' */
    rtb_W13B73AL = M_W13B_73A_L;

    /* DataStoreRead: '<S85>/W13B//73A-SWRLS' */
    rtb_W13B73ASWRLS = M_W13B_73A_SWRLS;

    /* DataStoreRead: '<S85>/W13B//73A-SWINIT' */
    rtb_W13B73ASWINIT = M_W13B_73A_SWINIT;

    /* DataStoreRead: '<S85>/W13B//73A-BLOCK' */
    rtb_W13B73ABLOCK = M_W13B_73A_BLOCK;

    /* DataStoreRead: '<S85>/W13B//73A-LS' */
    rtb_W13B73ALS = M_W13B_73A_LS;

    /* DataStoreRead: '<S85>/FLASH-1S' */
    rtb_FLASH1S_h = M_GV_FLASH_1000;

    /* DataStoreRead: '<S85>/FLASH-0.5S' */
    rtb_FLASH05S_m = NONVITALDEPOT_DW.M_GV_FLASH_500;

    /* DataStoreRead: '<S85>/W13B//73A-NWP' */
    rtb_W13B73ANWP = M_W13B_73A_NWP;

    /* DataStoreRead: '<S85>/W13B//73A-RWP' */
    rtb_W13B73ARWP = M_W13B_73A_RWP;

    /* DataStoreRead: '<S85>/W13B//73A-NWZ' */
    rtb_W13B73ANWZ_i = M_W13B_73A_NWZ;

    /* DataStoreRead: '<S85>/W13B//23B-RWZ' */
    rtb_W13B23BRWZ = M_W13B_73A_RWZ;

    /* DataStoreRead: '<S85>/W13B//73A-NWC' */
    rtb_W13B73ANWC = M_W13B_73A_NWC;

    /* DataStoreRead: '<S85>/W13B//73A-RWC' */
    rtb_W13B73ARWC = M_W13B_73A_RWC;

    /* DataStoreRead: '<S85>/W13B//73A-OOC' */
    rtb_W13B73AOOC = M_W13B_73A_OOC;

    /* DataStoreRead: '<S85>/13-TP' */
    rtb_u3TP_j = M_TP_13;

    /* Logic: '<S85>/NOT1' incorporates:
     *  Logic: '<S85>/AND1'
     */
    rtb_NOT1_o = !(M_S_ES_13 && M_S_WS_13);

    /* Outputs for Atomic SubSystem: '<S85>/INTERLOCKING POINT' */
    D_IND_POINT(rtb_W13B73AL, rtb_W13B73ASWRLS, rtb_W13B73ASWINIT,
                rtb_W13B73ABLOCK, rtb_W13B73ALS, rtb_FLASH1S_h, rtb_FLASH05S_m,
                rtb_W13B73ANWP, rtb_W13B73ARWP, rtb_W13B73ANWZ_i, rtb_W13B23BRWZ,
                rtb_W13B73ANWC, rtb_W13B73ARWC, rtb_W13B73AOOC, rtb_u3TP_j,
                rtb_NOT1_o, &NONVITALDEPOT_DW.INTERLOCKINGPOINT);

    /* End of Outputs for SubSystem: '<S85>/INTERLOCKING POINT' */

    /* DataStoreWrite: '<S85>/W13B-BE-DO' */
    DO_INDSW_W13B_BE = NONVITALDEPOT_DW.INTERLOCKINGPOINT.OR9;

    /* DataStoreWrite: '<S85>/W13B-LE-DO' */
    DO_INDSW_W13B_LE = NONVITALDEPOT_DW.INTERLOCKINGPOINT.AND5;

    /* DataStoreWrite: '<S85>/W13B-NRE-DO' */
    DO_INDSW_W13B_NRE = NONVITALDEPOT_DW.INTERLOCKINGPOINT.AND27;

    /* DataStoreWrite: '<S85>/W13B-NTE-DO' */
    DO_INDSW_W13B_NTE = NONVITALDEPOT_DW.INTERLOCKINGPOINT.AND26;

    /* DataStoreWrite: '<S85>/W13B-NWE-DO' */
    DO_INDSW_W13B_NWE = NONVITALDEPOT_DW.INTERLOCKINGPOINT.OR11;

    /* DataStoreWrite: '<S85>/W13B-NWTE-DO' */
    DO_INDSW_W13B_NWTE = NONVITALDEPOT_DW.INTERLOCKINGPOINT.OR12;

    /* DataStoreWrite: '<S85>/W13B-RRE-DO' */
    DO_INDSW_W13B_RRE = NONVITALDEPOT_DW.INTERLOCKINGPOINT.AND28;

    /* DataStoreWrite: '<S85>/W13B-RTE-DO' */
    DO_INDSW_W13B_RTE = NONVITALDEPOT_DW.INTERLOCKINGPOINT.AND34;

    /* DataStoreWrite: '<S85>/W13B-RWE-DO' */
    DO_INDSW_W13B_RWE = NONVITALDEPOT_DW.INTERLOCKINGPOINT.OR13;

    /* DataStoreWrite: '<S85>/W13B-RWTE-DO' */
    DO_INDSW_W13B_RWTE = NONVITALDEPOT_DW.INTERLOCKINGPOINT.OR14;

    /* DataStoreWrite: '<S85>/W13B-NWRE-DO' incorporates:
     *  DataStoreWrite: '<S85>/W13B-NWE-DO'
     *  Logic: '<S85>/AND2'
     */
    DO_INDSW_W13B_NWRE = (NONVITALDEPOT_DW.INTERLOCKINGPOINT.OR11 &&
                          DO_INDT_RE_13);

    /* DataStoreWrite: '<S85>/W13B-RWRE-DO' incorporates:
     *  DataStoreWrite: '<S85>/W13B-RWE-DO'
     *  Logic: '<S85>/AND3'
     */
    DO_INDSW_W13B_RWRE = (NONVITALDEPOT_DW.INTERLOCKINGPOINT.OR13 &&
                          DO_INDT_RE_13);

    /* DataStoreRead: '<S86>/W54-L' */
    rtb_W54L = M_W54_L;

    /* DataStoreRead: '<S86>/W54-SWRLS' */
    rtb_W54SWRLS = M_W54_SWRLS;

    /* DataStoreRead: '<S86>/W54-SWINIT' */
    rtb_W54SWINIT = M_W54_SWINIT;

    /* DataStoreRead: '<S86>/W54-BLOCK' */
    rtb_W54BLOCK = M_W54_BLOCK;

    /* DataStoreRead: '<S86>/W54-LS' */
    rtb_W54LS = M_W54_LS;

    /* DataStoreRead: '<S86>/FLASH-1S' */
    rtb_FLASH1S_i = M_GV_FLASH_1000;

    /* DataStoreRead: '<S86>/FLASH-0.5S' */
    rtb_FLASH05S_pc = NONVITALDEPOT_DW.M_GV_FLASH_500;

    /* DataStoreRead: '<S86>/W54-NWP' */
    rtb_W54NWP = M_W54_NWP;

    /* DataStoreRead: '<S86>/W54-RWP' */
    rtb_W54RWP = M_W54_RWP;

    /* DataStoreRead: '<S86>/W54-NWZ' */
    rtb_W54NWZ = M_W54_NWZ;

    /* DataStoreRead: '<S86>/W54-RWZ' */
    rtb_W54RWZ = M_W54_RWZ;

    /* DataStoreRead: '<S86>/W54-NWC' */
    rtb_W54NWC = M_W54_NWC;

    /* DataStoreRead: '<S86>/W54-RWC' */
    rtb_W54RWC = M_W54_RWC;

    /* DataStoreRead: '<S86>/W54-OOC' */
    rtb_W54OOC = M_W54_OOC;

    /* DataStoreRead: '<S86>/73B-TP' */
    rtb_u3BTP_d = M_TP_73B;

    /* Logic: '<S86>/NOT1' incorporates:
     *  Logic: '<S86>/AND1'
     */
    rtb_NOT1_l = !(M_S_ES_73B && M_S_WS_73B);

    /* Outputs for Atomic SubSystem: '<S86>/INTERLOCKING POINT' */
    D_IND_POINT(rtb_W54L, rtb_W54SWRLS, rtb_W54SWINIT, rtb_W54BLOCK, rtb_W54LS,
                rtb_FLASH1S_i, rtb_FLASH05S_pc, rtb_W54NWP, rtb_W54RWP,
                rtb_W54NWZ, rtb_W54RWZ, rtb_W54NWC, rtb_W54RWC, rtb_W54OOC,
                rtb_u3BTP_d, rtb_NOT1_l, &NONVITALDEPOT_DW.INTERLOCKINGPOINT_e);

    /* End of Outputs for SubSystem: '<S86>/INTERLOCKING POINT' */

    /* DataStoreWrite: '<S86>/W54-BE-DO' */
    DO_INDSW_W54_BE = NONVITALDEPOT_DW.INTERLOCKINGPOINT_e.OR9;

    /* DataStoreWrite: '<S86>/W54-LE-DO' */
    DO_INDSW_W54_LE = NONVITALDEPOT_DW.INTERLOCKINGPOINT_e.AND5;

    /* Logic: '<S86>/Logical Operator4' incorporates:
     *  Logic: '<S86>/AND4'
     *  Logic: '<S86>/Logical Operator6'
     *  Logic: '<S86>/Logical Operator8'
     */
    rtb_TPRPBDI_b = ((M_W73B_RWZ && M_W13B_73A_NWZ) || ((!rtb_NOT1_l) &&
      M_S_ES_73A && M_S_WS_73A));

    /* DataStoreWrite: '<S86>/W54-NRE-DO' incorporates:
     *  Logic: '<S86>/Logical Operator1'
     */
    DO_INDSW_W54_NRE = (NONVITALDEPOT_DW.INTERLOCKINGPOINT_e.AND27 &&
                        rtb_TPRPBDI_b);

    /* DataStoreWrite: '<S86>/W54-NTE-DO' incorporates:
     *  Logic: '<S86>/Logical Operator'
     */
    DO_INDSW_W54_NTE = (NONVITALDEPOT_DW.INTERLOCKINGPOINT_e.AND26 &&
                        rtb_TPRPBDI_b);

    /* DataStoreWrite: '<S86>/W54-NWE-DO' */
    DO_INDSW_W54_NWE = NONVITALDEPOT_DW.INTERLOCKINGPOINT_e.OR11;

    /* DataStoreWrite: '<S86>/W54-NWTE-DO' incorporates:
     *  Logic: '<S86>/Logical Operator7'
     */
    DO_INDSW_W54_NWTE = (NONVITALDEPOT_DW.INTERLOCKINGPOINT_e.OR12 &&
                         rtb_TPRPBDI_b);

    /* DataStoreWrite: '<S86>/W54-RRE-DO' incorporates:
     *  Logic: '<S86>/Logical Operator3'
     */
    DO_INDSW_W54_RRE = (NONVITALDEPOT_DW.INTERLOCKINGPOINT_e.AND28 &&
                        rtb_TPRPBDI_b);

    /* DataStoreWrite: '<S86>/W54-RTE-DO' incorporates:
     *  Logic: '<S86>/Logical Operator2'
     */
    DO_INDSW_W54_RTE = (NONVITALDEPOT_DW.INTERLOCKINGPOINT_e.AND34 &&
                        rtb_TPRPBDI_b);

    /* DataStoreWrite: '<S86>/W54-RWE-DO' */
    DO_INDSW_W54_RWE = NONVITALDEPOT_DW.INTERLOCKINGPOINT_e.OR13;

    /* DataStoreWrite: '<S86>/W54-RWTE-DO' incorporates:
     *  Logic: '<S86>/Logical Operator5'
     */
    DO_INDSW_W54_RWTE = (NONVITALDEPOT_DW.INTERLOCKINGPOINT_e.OR14 &&
                         rtb_TPRPBDI_b);

    /* DataStoreWrite: '<S86>/W54-NWRE-DO' incorporates:
     *  DataStoreWrite: '<S86>/W54-NWE-DO'
     *  Logic: '<S86>/AND2'
     */
    DO_INDSW_W54_NWRE = (NONVITALDEPOT_DW.INTERLOCKINGPOINT_e.OR11 &&
                         DO_INDSW_W73B_RWRE && DO_INDSW_W73A_NWRE &&
                         DO_INDT_RE_73B);

    /* DataStoreWrite: '<S86>/W54-RWRE-DO' incorporates:
     *  DataStoreWrite: '<S86>/W54-RWE-DO'
     *  Logic: '<S86>/AND3'
     */
    DO_INDSW_W54_RWRE = (NONVITALDEPOT_DW.INTERLOCKINGPOINT_e.OR13 &&
                         DO_INDSW_W73B_RWRE && DO_INDSW_W73A_NWRE &&
                         DO_INDT_RE_73B);

    /* DataStoreRead: '<S87>/W13B//73A-L' */
    rtb_W13B73AL_p = M_W13B_73A_L;

    /* DataStoreRead: '<S87>/W13B//73A-SWRLS' */
    rtb_W13B73ASWRLS_j = M_W13B_73A_SWRLS;

    /* DataStoreRead: '<S87>/W13B//73A-SWINIT' */
    rtb_W13B73ASWINIT_f = M_W13B_73A_SWINIT;

    /* DataStoreRead: '<S87>/W13B//73A-BLOCK' */
    rtb_W13B73ABLOCK_k = M_W13B_73A_BLOCK;

    /* DataStoreRead: '<S87>/W13B//73A-LS' */
    rtb_W13B73ALS_a = M_W13B_73A_LS;

    /* DataStoreRead: '<S87>/FLASH-1S' */
    rtb_FLASH1S_l = M_GV_FLASH_1000;

    /* DataStoreRead: '<S87>/FLASH-0.5S' */
    rtb_FLASH05S_g = NONVITALDEPOT_DW.M_GV_FLASH_500;

    /* DataStoreRead: '<S87>/W13B//73A-NWP' */
    rtb_W13B73ANWP_e = M_W13B_73A_NWP;

    /* DataStoreRead: '<S87>/W13B//73A-RWP' */
    rtb_W13B73ARWP_d = M_W13B_73A_RWP;

    /* DataStoreRead: '<S87>/W13B//73A-NWZ' */
    rtb_W13B73ANWZ_p = M_W13B_73A_NWZ;

    /* DataStoreRead: '<S87>/W13B//23B-RWZ' */
    rtb_W13B23BRWZ_b = M_W13B_73A_RWZ;

    /* DataStoreRead: '<S87>/W13B//73A-NWC' */
    rtb_W13B73ANWC_o = M_W13B_73A_NWC;

    /* DataStoreRead: '<S87>/W13B//73A-RWC' */
    rtb_W13B73ARWC_k = M_W13B_73A_RWC;

    /* DataStoreRead: '<S87>/W13B//73A-OOC' */
    rtb_W13B73AOOC_a = M_W13B_73A_OOC;

    /* DataStoreRead: '<S87>/73A-TP' */
    rtb_u3ATP_c = M_TP_73A;

    /* Logic: '<S87>/NOT1' incorporates:
     *  Logic: '<S87>/AND1'
     */
    rtb_NOT1_of = !(M_S_ES_73A && M_S_WS_73A);

    /* Outputs for Atomic SubSystem: '<S87>/D_IND_POINT' */
    D_IND_POINT(rtb_W13B73AL_p, rtb_W13B73ASWRLS_j, rtb_W13B73ASWINIT_f,
                rtb_W13B73ABLOCK_k, rtb_W13B73ALS_a, rtb_FLASH1S_l,
                rtb_FLASH05S_g, rtb_W13B73ANWP_e, rtb_W13B73ARWP_d,
                rtb_W13B73ANWZ_p, rtb_W13B23BRWZ_b, rtb_W13B73ANWC_o,
                rtb_W13B73ARWC_k, rtb_W13B73AOOC_a, rtb_u3ATP_c, rtb_NOT1_of,
                &NONVITALDEPOT_DW.D_IND_POINT_o);

    /* End of Outputs for SubSystem: '<S87>/D_IND_POINT' */

    /* DataStoreWrite: '<S87>/W73A-BE-DO' */
    DO_INDSW_W73A_BE = NONVITALDEPOT_DW.D_IND_POINT_o.OR9;

    /* DataStoreWrite: '<S87>/W73A-LE-DO' */
    DO_INDSW_W73A_LE = NONVITALDEPOT_DW.D_IND_POINT_o.AND5;

    /* DataStoreWrite: '<S87>/W73A-NRE-DO' */
    DO_INDSW_W73A_NRE = NONVITALDEPOT_DW.D_IND_POINT_o.AND27;

    /* DataStoreWrite: '<S87>/W73A-NTE-DO' */
    DO_INDSW_W73A_NTE = NONVITALDEPOT_DW.D_IND_POINT_o.AND26;

    /* DataStoreWrite: '<S87>/W73A-NWE-DO' */
    DO_INDSW_W73A_NWE = NONVITALDEPOT_DW.D_IND_POINT_o.OR11;

    /* DataStoreWrite: '<S87>/W73A-NWTE-DO' */
    DO_INDSW_W73A_NWTE = NONVITALDEPOT_DW.D_IND_POINT_o.OR12;

    /* DataStoreWrite: '<S87>/W73A-RRE-DO' */
    DO_INDSW_W73A_RRE = NONVITALDEPOT_DW.D_IND_POINT_o.AND28;

    /* DataStoreWrite: '<S87>/W73A-RTE-DO' */
    DO_INDSW_W73A_RTE = NONVITALDEPOT_DW.D_IND_POINT_o.AND34;

    /* DataStoreWrite: '<S87>/W73A-RWE-DO' */
    DO_INDSW_W73A_RWE = NONVITALDEPOT_DW.D_IND_POINT_o.OR13;

    /* DataStoreWrite: '<S87>/W73A-RWTE-DO' */
    DO_INDSW_W73A_RWTE = NONVITALDEPOT_DW.D_IND_POINT_o.OR14;

    /* DataStoreWrite: '<S87>/W73A-NWRE-DO' incorporates:
     *  DataStoreWrite: '<S87>/W73A-NWE-DO'
     *  Logic: '<S87>/AND2'
     */
    DO_INDSW_W73A_NWRE = (NONVITALDEPOT_DW.D_IND_POINT_o.OR11 && DO_INDT_RE_73A);

    /* DataStoreWrite: '<S87>/W73A-RWRE-DO' incorporates:
     *  DataStoreWrite: '<S87>/W73A-RWE-DO'
     *  Logic: '<S87>/AND3'
     */
    DO_INDSW_W73A_RWRE = (NONVITALDEPOT_DW.D_IND_POINT_o.OR13 && DO_INDT_RE_73A);

    /* DataStoreRead: '<S88>/W73B-L' */
    rtb_W73BL = M_W73B_L;

    /* DataStoreRead: '<S88>/W73B-SWRLS' */
    rtb_W73BSWRLS = M_W73B_SWRLS;

    /* DataStoreRead: '<S88>/W73B-SWINIT' */
    rtb_W73BSWINIT = M_W73B_SWINIT;

    /* DataStoreRead: '<S88>/W73B-BLOCK' */
    rtb_W73BBLOCK = M_W73B_BLOCK;

    /* DataStoreRead: '<S88>/W73B-LS' */
    rtb_W73BLS = M_W73B_LS;

    /* DataStoreRead: '<S88>/FLASH-1S' */
    rtb_FLASH1S_g = M_GV_FLASH_1000;

    /* DataStoreRead: '<S88>/FLASH-0.5S' */
    rtb_FLASH05S_d = NONVITALDEPOT_DW.M_GV_FLASH_500;

    /* DataStoreRead: '<S88>/W73B-NWP' */
    rtb_W73BNWP = M_W73B_NWP;

    /* DataStoreRead: '<S88>/W73B-RWP' */
    rtb_W73BRWP = M_W73B_RWP;

    /* DataStoreRead: '<S88>/W73B-NWZ' */
    rtb_W73BNWZ = M_W73B_NWZ;

    /* DataStoreRead: '<S88>/W73B-RWZ' */
    rtb_W73BRWZ_c = M_W73B_RWZ;

    /* DataStoreRead: '<S88>/W73B-NWC' */
    rtb_W73BNWC = M_W73B_NWC;

    /* DataStoreRead: '<S88>/W73B-RWC' */
    rtb_W73BRWC = M_W73B_RWC;

    /* DataStoreRead: '<S88>/W73B-OOC' */
    rtb_W73BOOC = M_W73B_OOC;

    /* DataStoreRead: '<S88>/73B-TP' */
    rtb_u3BTP_o = M_TP_73B;

    /* Logic: '<S88>/NOT1' incorporates:
     *  Logic: '<S88>/AND1'
     */
    rtb_NOT1_k = !(M_S_ES_73B && M_S_WS_73B);

    /* Outputs for Atomic SubSystem: '<S88>/INTERLOCKING LOCK' */
    D_IND_POINT(rtb_W73BL, rtb_W73BSWRLS, rtb_W73BSWINIT, rtb_W73BBLOCK,
                rtb_W73BLS, rtb_FLASH1S_g, rtb_FLASH05S_d, rtb_W73BNWP,
                rtb_W73BRWP, rtb_W73BNWZ, rtb_W73BRWZ_c, rtb_W73BNWC,
                rtb_W73BRWC, rtb_W73BOOC, rtb_u3BTP_o, rtb_NOT1_k,
                &NONVITALDEPOT_DW.INTERLOCKINGLOCK);

    /* End of Outputs for SubSystem: '<S88>/INTERLOCKING LOCK' */

    /* DataStoreWrite: '<S88>/W73B-BE-DO' */
    DO_INDSW_W73B_BE = NONVITALDEPOT_DW.INTERLOCKINGLOCK.OR9;

    /* DataStoreWrite: '<S88>/W73B-LE-DO' */
    DO_INDSW_W73B_LE = NONVITALDEPOT_DW.INTERLOCKINGLOCK.AND5;

    /* Logic: '<S88>/Logical Operator4' incorporates:
     *  Logic: '<S88>/AND4'
     *  Logic: '<S88>/Logical Operator6'
     */
    rtb_TPRPBDI_b = (M_W13B_73A_NWZ || ((!rtb_NOT1_k) && M_S_ES_73A &&
      M_S_WS_73A));

    /* DataStoreWrite: '<S88>/W73B-NRE-DO' incorporates:
     *  Logic: '<S88>/Logical Operator1'
     */
    DO_INDSW_W73B_NRE = (NONVITALDEPOT_DW.INTERLOCKINGLOCK.AND27 &&
                         rtb_TPRPBDI_b);

    /* DataStoreWrite: '<S88>/W73B-NTE-DO' incorporates:
     *  Logic: '<S88>/Logical Operator'
     */
    DO_INDSW_W73B_NTE = (NONVITALDEPOT_DW.INTERLOCKINGLOCK.AND26 &&
                         rtb_TPRPBDI_b);

    /* DataStoreWrite: '<S88>/W73B-NWE-DO' */
    DO_INDSW_W73B_NWE = NONVITALDEPOT_DW.INTERLOCKINGLOCK.OR11;

    /* DataStoreWrite: '<S88>/W73B-NWTE-DO' incorporates:
     *  Logic: '<S88>/Logical Operator7'
     */
    DO_INDSW_W73B_NWTE = (NONVITALDEPOT_DW.INTERLOCKINGLOCK.OR12 &&
                          rtb_TPRPBDI_b);

    /* DataStoreWrite: '<S88>/W73B-RRE-DO' incorporates:
     *  Logic: '<S88>/Logical Operator3'
     */
    DO_INDSW_W73B_RRE = (NONVITALDEPOT_DW.INTERLOCKINGLOCK.AND28 &&
                         rtb_TPRPBDI_b);

    /* DataStoreWrite: '<S88>/W73B-RTE-DO' incorporates:
     *  Logic: '<S88>/Logical Operator2'
     */
    DO_INDSW_W73B_RTE = (NONVITALDEPOT_DW.INTERLOCKINGLOCK.AND34 &&
                         rtb_TPRPBDI_b);

    /* DataStoreWrite: '<S88>/W73B-RWE-DO' */
    DO_INDSW_W73B_RWE = NONVITALDEPOT_DW.INTERLOCKINGLOCK.OR13;

    /* DataStoreWrite: '<S88>/W73B-RWTE-DO' incorporates:
     *  Logic: '<S88>/Logical Operator5'
     */
    DO_INDSW_W73B_RWTE = (NONVITALDEPOT_DW.INTERLOCKINGLOCK.OR14 &&
                          rtb_TPRPBDI_b);

    /* DataStoreWrite: '<S88>/W73B-NWRE-DO' incorporates:
     *  DataStoreWrite: '<S88>/W73B-NWE-DO'
     *  Logic: '<S88>/AND2'
     */
    DO_INDSW_W73B_NWRE = (NONVITALDEPOT_DW.INTERLOCKINGLOCK.OR11 &&
                          DO_INDSW_W73A_NWRE && DO_INDT_RE_73B);

    /* DataStoreWrite: '<S88>/W73B-RWRE-DO' incorporates:
     *  DataStoreWrite: '<S88>/W73B-RWE-DO'
     *  Logic: '<S88>/AND3'
     */
    DO_INDSW_W73B_RWRE = (NONVITALDEPOT_DW.INTERLOCKINGLOCK.OR13 &&
                          DO_INDSW_W73A_NWRE && DO_INDT_RE_73B);

    /* DataStoreRead: '<S94>/VDR' */
    rtb_VDR_a = NONVITALDEPOT_DW.M_VDR;

    /* DataStoreRead: '<S94>/L12-GR-DO' */
    rtb_L12GRDO_k = M_DO_L12_GR;

    /* DataStoreRead: '<S94>/FLASH' */
    rtb_FLASH_m = NONVITALDEPOT_DW.M_GV_FLASH_500;

    /* Outputs for Atomic SubSystem: '<S94>/INDIKASI SIGNAL' */
    D_SIG_IND(rtb_VDR_a, rtb_L12GRDO_k, rtb_FLASH_m,
              &NONVITALDEPOT_DW.INDIKASISIGNAL);

    /* End of Outputs for SubSystem: '<S94>/INDIKASI SIGNAL' */

    /* DataStoreWrite: '<S94>/L12-RGE-DO' */
    DO_INDJ_12_RGE = NONVITALDEPOT_DW.INDIKASISIGNAL.AND3;

    /* DataStoreWrite: '<S94>/L12-WGE-DO' */
    DO_INDJ_12_WGE = NONVITALDEPOT_DW.INDIKASISIGNAL.AND6;

    /* DataStoreRead: '<S95>/VDR' */
    rtb_VDR_j = NONVITALDEPOT_DW.M_VDR;

    /* DataStoreRead: '<S95>/L14A-GR-DO' */
    rtb_L14AGRDO_p = M_DO_L14A_GR;

    /* DataStoreRead: '<S95>/FLASH' */
    rtb_FLASH_p = NONVITALDEPOT_DW.M_GV_FLASH_500;

    /* Outputs for Atomic SubSystem: '<S95>/INDIKASI SIGNAL' */
    D_SIG_IND(rtb_VDR_j, rtb_L14AGRDO_p, rtb_FLASH_p,
              &NONVITALDEPOT_DW.INDIKASISIGNAL_f);

    /* End of Outputs for SubSystem: '<S95>/INDIKASI SIGNAL' */

    /* DataStoreWrite: '<S95>/L14A-RGE-DO' */
    DO_INDJ_14A_RGE = NONVITALDEPOT_DW.INDIKASISIGNAL_f.AND3;

    /* DataStoreWrite: '<S95>/L14A-WGE-DO' */
    DO_INDJ_14A_WGE = NONVITALDEPOT_DW.INDIKASISIGNAL_f.AND6;

    /* DataStoreRead: '<S96>/VDR' */
    rtb_VDR_jc = NONVITALDEPOT_DW.M_VDR;

    /* DataStoreRead: '<S96>/L14B-GR-DO' */
    rtb_L14BGRDO = M_DO_L14B_GR;

    /* DataStoreRead: '<S96>/FLASH' */
    rtb_FLASH_i = NONVITALDEPOT_DW.M_GV_FLASH_500;

    /* Outputs for Atomic SubSystem: '<S96>/INDIKASI SIGNAL' */
    D_SIG_IND(rtb_VDR_jc, rtb_L14BGRDO, rtb_FLASH_i,
              &NONVITALDEPOT_DW.INDIKASISIGNAL_l);

    /* End of Outputs for SubSystem: '<S96>/INDIKASI SIGNAL' */

    /* DataStoreWrite: '<S96>/L14B-RGE-DO' */
    DO_INDJ_14B_RGE = NONVITALDEPOT_DW.INDIKASISIGNAL_l.AND3;

    /* DataStoreWrite: '<S96>/L14B-WGE-DO' */
    DO_INDJ_14B_WGE = NONVITALDEPOT_DW.INDIKASISIGNAL_l.AND6;

    /* DataStoreRead: '<S97>/VDR' */
    rtb_VDR_l = NONVITALDEPOT_DW.M_VDR;

    /* DataStoreRead: '<S97>/L32-GR-DO' */
    rtb_L32GRDO = M_DO_L32_GR;

    /* DataStoreRead: '<S97>/FLASH' */
    rtb_FLASH_m0 = NONVITALDEPOT_DW.M_GV_FLASH_500;

    /* Outputs for Atomic SubSystem: '<S97>/INDIKASI SIGNAL' */
    D_SIG_IND(rtb_VDR_l, rtb_L32GRDO, rtb_FLASH_m0,
              &NONVITALDEPOT_DW.INDIKASISIGNAL_c);

    /* End of Outputs for SubSystem: '<S97>/INDIKASI SIGNAL' */

    /* DataStoreWrite: '<S97>/L32-RGE-DO' */
    DO_INDJ_32_RGE = NONVITALDEPOT_DW.INDIKASISIGNAL_c.AND3;

    /* DataStoreWrite: '<S97>/L32-WGE-DO' */
    DO_INDJ_32_WGE = NONVITALDEPOT_DW.INDIKASISIGNAL_c.AND6;

    /* DataStoreRead: '<S98>/VDR' */
    rtb_VDR_h = NONVITALDEPOT_DW.M_VDR;

    /* DataStoreRead: '<S98>/L34-GR-DO' */
    rtb_L34GRDO_b = M_DO_L34_GR;

    /* DataStoreRead: '<S98>/FLASH' */
    rtb_FLASH_o = NONVITALDEPOT_DW.M_GV_FLASH_500;

    /* Outputs for Atomic SubSystem: '<S98>/INDIKASI SIGNAL' */
    D_SIG_IND(rtb_VDR_h, rtb_L34GRDO_b, rtb_FLASH_o,
              &NONVITALDEPOT_DW.INDIKASISIGNAL_j);

    /* End of Outputs for SubSystem: '<S98>/INDIKASI SIGNAL' */

    /* DataStoreWrite: '<S98>/L34-RGE-DO' */
    DO_INDJ_34_RGE = NONVITALDEPOT_DW.INDIKASISIGNAL_j.AND3;

    /* DataStoreWrite: '<S98>/L34-WGE-DO' */
    DO_INDJ_34_WGE = NONVITALDEPOT_DW.INDIKASISIGNAL_j.AND6;

    /* DataStoreRead: '<S99>/VDR' */
    rtb_VDR_e = NONVITALDEPOT_DW.M_VDR;

    /* DataStoreRead: '<S99>/L54-GR-DO' */
    rtb_L54GRDO_k = M_DO_L54_GR;

    /* DataStoreRead: '<S99>/FLASH' */
    rtb_FLASH_j = NONVITALDEPOT_DW.M_GV_FLASH_500;

    /* Outputs for Atomic SubSystem: '<S99>/INDIKASI SIGNAL' */
    D_SIG_IND(rtb_VDR_e, rtb_L54GRDO_k, rtb_FLASH_j,
              &NONVITALDEPOT_DW.INDIKASISIGNAL_fj);

    /* End of Outputs for SubSystem: '<S99>/INDIKASI SIGNAL' */

    /* DataStoreWrite: '<S99>/L54-RGE-DO' */
    DO_INDJ_54_RGE = NONVITALDEPOT_DW.INDIKASISIGNAL_fj.AND3;

    /* DataStoreWrite: '<S99>/L54-WGE-DO' */
    DO_INDJ_54_WGE = NONVITALDEPOT_DW.INDIKASISIGNAL_fj.AND6;

    /* DataStoreRead: '<S100>/VDR' */
    rtb_VDR_o = NONVITALDEPOT_DW.M_VDR;

    /* DataStoreRead: '<S100>/L72-GR-DO' */
    rtb_L72GRDO_l = M_DO_L72_GR;

    /* DataStoreRead: '<S100>/FLASH' */
    rtb_FLASH_d = NONVITALDEPOT_DW.M_GV_FLASH_500;

    /* Outputs for Atomic SubSystem: '<S100>/INDIKASI SIGNAL' */
    D_SIG_IND(rtb_VDR_o, rtb_L72GRDO_l, rtb_FLASH_d,
              &NONVITALDEPOT_DW.INDIKASISIGNAL_m);

    /* End of Outputs for SubSystem: '<S100>/INDIKASI SIGNAL' */

    /* DataStoreWrite: '<S100>/L72-RGE-DO' */
    DO_INDJ_72_RGE = NONVITALDEPOT_DW.INDIKASISIGNAL_m.AND3;

    /* DataStoreWrite: '<S100>/L72-WGE-DO' */
    DO_INDJ_72_WGE = NONVITALDEPOT_DW.INDIKASISIGNAL_m.AND6;

    /* DataStoreRead: '<S101>/VDR' */
    rtb_VDR_d = NONVITALDEPOT_DW.M_VDR;

    /* DataStoreRead: '<S101>/L74-GR-DO' */
    rtb_L74GRDO_p = M_DO_L74_GR;

    /* DataStoreRead: '<S101>/FLASH' */
    rtb_FLASH_f = NONVITALDEPOT_DW.M_GV_FLASH_500;

    /* Outputs for Atomic SubSystem: '<S101>/INDIKASI SIGNAL' */
    D_SIG_IND(rtb_VDR_d, rtb_L74GRDO_p, rtb_FLASH_f,
              &NONVITALDEPOT_DW.INDIKASISIGNAL_a);

    /* End of Outputs for SubSystem: '<S101>/INDIKASI SIGNAL' */

    /* DataStoreWrite: '<S101>/L74-RGE-DO' */
    DO_INDJ_74_RGE = NONVITALDEPOT_DW.INDIKASISIGNAL_a.AND3;

    /* DataStoreWrite: '<S101>/L74-WGE-DO' */
    DO_INDJ_74_WGE = NONVITALDEPOT_DW.INDIKASISIGNAL_a.AND6;

    /* DataStoreRead: '<S110>/12-TP' */
    rtb_u2TP = M_TP_12;

    /* Logic: '<S110>/AND2' */
    rtb_AND2_fc = (M_S_WS_13 || M_W13B_73A_RWZ || M_W13A_RWZ);

    /* Outputs for Atomic SubSystem: '<S110>/INDIKASI TRACK' */
    D_IND_TRACK(rtb_u2TP, rtb_AND2_fc, &NONVITALDEPOT_DW.INDIKASITRACK);

    /* End of Outputs for SubSystem: '<S110>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S110>/12-RE-DO' */
    DO_INDT_RE_12 = NONVITALDEPOT_DW.INDIKASITRACK.NOT5;

    /* DataStoreWrite: '<S110>/12-TE-DO' */
    DO_INDT_TE_12 = NONVITALDEPOT_DW.INDIKASITRACK.NOT2;

    /* DataStoreRead: '<S111>/13-TP' */
    rtb_u3TP_i = M_TP_13;

    /* Logic: '<S111>/AND2' */
    rtb_AND2_m = (M_S_ES_13 && M_S_WS_13);

    /* Outputs for Atomic SubSystem: '<S111>/INDIKASI TRACK' */
    D_IND_TRACK(rtb_u3TP_i, rtb_AND2_m, &NONVITALDEPOT_DW.INDIKASITRACK_k);

    /* End of Outputs for SubSystem: '<S111>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S111>/13-RE-DO' */
    DO_INDT_RE_13 = NONVITALDEPOT_DW.INDIKASITRACK_k.NOT5;

    /* DataStoreWrite: '<S111>/13-TE-DO' */
    DO_INDT_TE_13 = NONVITALDEPOT_DW.INDIKASITRACK_k.NOT2;

    /* DataStoreRead: '<S112>/14-TP' */
    rtb_u4TP = M_TP_14;

    /* Logic: '<S112>/AND2' */
    rtb_AND2_gv = (M_S_ES_13 && M_S_ES_21C);

    /* Outputs for Atomic SubSystem: '<S112>/INDIKASI TRACK' */
    D_IND_TRACK(rtb_u4TP, rtb_AND2_gv, &NONVITALDEPOT_DW.INDIKASITRACK_e);

    /* End of Outputs for SubSystem: '<S112>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S112>/14-RE-DO' */
    DO_INDT_RE_14 = NONVITALDEPOT_DW.INDIKASITRACK_e.NOT5;

    /* DataStoreWrite: '<S112>/14-TE-DO' */
    DO_INDT_TE_14 = NONVITALDEPOT_DW.INDIKASITRACK_e.NOT2;

    /* DataStoreRead: '<S113>/32-TP' */
    rtb_u2TP_k = M_TP_32;

    /* Logic: '<S113>/AND2' */
    rtb_AND2_p = (M_S_WS_13 || M_W13B_73A_RWZ || M_W13A_NWZ);

    /* Outputs for Atomic SubSystem: '<S113>/INDIKASI TRACK' */
    D_IND_TRACK(rtb_u2TP_k, rtb_AND2_p, &NONVITALDEPOT_DW.INDIKASITRACK_g);

    /* End of Outputs for SubSystem: '<S113>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S113>/32-RE-DO' */
    DO_INDT_RE_32 = NONVITALDEPOT_DW.INDIKASITRACK_g.NOT5;

    /* DataStoreWrite: '<S113>/32-TE-DO' */
    DO_INDT_TE_32 = NONVITALDEPOT_DW.INDIKASITRACK_g.NOT2;

    /* DataStoreRead: '<S114>/34-TP' */
    rtb_u4TP_j = M_TP_34;

    /* Logic: '<S114>/AND2' */
    rtb_AND2_c = (M_S_ES_73B || M_W73B_NWZ || M_W54_RWZ);

    /* Outputs for Atomic SubSystem: '<S114>/INDIKASI TRACK' */
    D_IND_TRACK(rtb_u4TP_j, rtb_AND2_c, &NONVITALDEPOT_DW.INDIKASITRACK_o);

    /* End of Outputs for SubSystem: '<S114>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S114>/34-RE-DO' */
    DO_INDT_RE_34 = NONVITALDEPOT_DW.INDIKASITRACK_o.NOT5;

    /* DataStoreWrite: '<S114>/34-TE-DO' */
    DO_INDT_TE_34 = NONVITALDEPOT_DW.INDIKASITRACK_o.NOT2;

    /* DataStoreRead: '<S115>/54-TP' */
    rtb_u4TP_b = M_TP_54;

    /* Logic: '<S115>/AND2' */
    rtb_AND2_ag = (M_S_ES_73B || M_W73B_NWZ || M_W54_NWZ);

    /* Outputs for Atomic SubSystem: '<S115>/INDIKASI TRACK' */
    D_IND_TRACK(rtb_u4TP_b, rtb_AND2_ag, &NONVITALDEPOT_DW.INDIKASITRACK_d);

    /* End of Outputs for SubSystem: '<S115>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S115>/54-RE-DO' */
    DO_INDT_RE_54 = NONVITALDEPOT_DW.INDIKASITRACK_d.NOT5;

    /* DataStoreWrite: '<S115>/54-TE-DO' */
    DO_INDT_TE_54 = NONVITALDEPOT_DW.INDIKASITRACK_d.NOT2;

    /* DataStoreRead: '<S116>/72-TP' */
    rtb_u2TP_p = M_TP_72;

    /* DataStoreRead: '<S116>/73A-S-WS' */
    rtb_u3ASWS_ld = M_S_WS_73A;

    /* Outputs for Atomic SubSystem: '<S116>/INDIKASI TRACK' */
    D_IND_TRACK(rtb_u2TP_p, rtb_u3ASWS_ld, &NONVITALDEPOT_DW.INDIKASITRACK_d2);

    /* End of Outputs for SubSystem: '<S116>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S116>/72-RE-DO' */
    DO_INDT_RE_72 = NONVITALDEPOT_DW.INDIKASITRACK_d2.NOT5;

    /* DataStoreWrite: '<S116>/72-TE-DO' */
    DO_INDT_TE_72 = NONVITALDEPOT_DW.INDIKASITRACK_d2.NOT2;

    /* DataStoreRead: '<S117>/73A-TP' */
    rtb_u3ATP_m = M_TP_73A;

    /* Logic: '<S117>/AND2' */
    rtb_AND2_mo = (M_S_ES_73A && M_S_WS_73A);

    /* Outputs for Atomic SubSystem: '<S117>/INDIKASI TRACK' */
    D_IND_TRACK(rtb_u3ATP_m, rtb_AND2_mo, &NONVITALDEPOT_DW.INDIKASITRACK_h);

    /* End of Outputs for SubSystem: '<S117>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S117>/73A-RE-DO' */
    DO_INDT_RE_73A = NONVITALDEPOT_DW.INDIKASITRACK_h.NOT5;

    /* DataStoreWrite: '<S117>/73A-TE-DO' */
    DO_INDT_TE_73A = NONVITALDEPOT_DW.INDIKASITRACK_h.NOT2;

    /* DataStoreRead: '<S118>/73B-TP' */
    rtb_u3BTP_c = M_TP_73B;

    /* Logic: '<S118>/AND2' */
    rtb_AND2_h = (M_S_ES_73B && M_S_WS_73B);

    /* Outputs for Atomic SubSystem: '<S118>/INDIKASI TRACK' */
    D_IND_TRACK(rtb_u3BTP_c, rtb_AND2_h, &NONVITALDEPOT_DW.INDIKASITRACK_ow);

    /* End of Outputs for SubSystem: '<S118>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S118>/73B-RE-DO' */
    DO_INDT_RE_73B = NONVITALDEPOT_DW.INDIKASITRACK_ow.NOT5;

    /* DataStoreWrite: '<S118>/73B-TE-DO' */
    DO_INDT_TE_73B = NONVITALDEPOT_DW.INDIKASITRACK_ow.NOT2;

    /* DataStoreRead: '<S119>/74-TP' */
    rtb_u4TP_e = M_TP_74;

    /* Logic: '<S119>/AND2' */
    rtb_AND2_i = (M_S_ES_73B || M_W73B_RWZ);

    /* Outputs for Atomic SubSystem: '<S119>/INDIKASI TRACK' */
    D_IND_TRACK(rtb_u4TP_e, rtb_AND2_i, &NONVITALDEPOT_DW.INDIKASITRACK_b);

    /* End of Outputs for SubSystem: '<S119>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S119>/74-RE-DO' */
    DO_INDT_RE_74 = NONVITALDEPOT_DW.INDIKASITRACK_b.NOT5;

    /* DataStoreWrite: '<S119>/74-TE-DO' */
    DO_INDT_TE_74 = NONVITALDEPOT_DW.INDIKASITRACK_b.NOT2;

    /* Logic: '<S120>/NOT5' */
    rtb_TPRPBDI_b = !M_S_ES_21C;

    /* DataStoreWrite: '<S120>/FROM-MAIN-FE-DO' */
    DO_FE_IN = rtb_TPRPBDI_b;

    /* DataStoreWrite: '<S120>/FROM-MAIN-FLE-DO' incorporates:
     *  Logic: '<S120>/NOT1'
     *  Logic: '<S120>/NOT2'
     */
    DO_FLE_IN = (rtb_TPRPBDI_b && (!M_TP_21C));

    /* Logic: '<S121>/NOT5' */
    rtb_TPRPBDI_b = !M_S_WS_21C;

    /* DataStoreWrite: '<S121>/TO-MAIN-FE-DO' */
    DO_FE_OUT = rtb_TPRPBDI_b;

    /* DataStoreWrite: '<S121>/TO-MAIN-FLE-DO' incorporates:
     *  Logic: '<S121>/NOT1'
     *  Logic: '<S121>/NOT2'
     */
    DO_FLE_OUT = (rtb_TPRPBDI_b && (!M_TP_21C));

    /* DataStoreRead: '<S132>/W13A-CAL-CTRL' */
    rtb_W13ACALCTRL = M_W13A_CTRL_CAL;

    /* DataStoreRead: '<S132>/W13A-TRAIL-CTRL' */
    rtb_W13ATRAILCTRL = M_W13A_CTRL_TRAIL;

    /* DataStoreRead: '<S132>/W13A-RST-CTRL' */
    rtb_W13ARSTCTRL = M_W13A_CTRL_RST;

    /* DataStoreRead: '<S132>/W13A-B-CTRL' */
    rtb_W13ABCTRL = M_W13A_CTRL_B;

    /* DataStoreRead: '<S132>/W13A-NWZ' */
    rtb_W13ANWZ_o = M_W13A_NWZ;

    /* DataStoreRead: '<S132>/W13A-RWZ' */
    rtb_W13ARWZ_l = M_W13A_RWZ;

    /* DataStoreRead: '<S132>/W13A-NWP' */
    rtb_W13ANWP_b = M_W13A_NWP;

    /* DataStoreRead: '<S132>/W13A-RWP' */
    rtb_W13ARWP_h = M_W13A_RWP;

    /* DataStoreRead: '<S132>/W13A-NWC' */
    rtb_W13ANWC_m = M_W13A_NWC;

    /* DataStoreRead: '<S132>/W13A-RWC' */
    rtb_W13ARWC_c = M_W13A_RWC;

    /* DataStoreRead: '<S132>/W13A-NW-TE' */
    rtb_W13ANWTE = M_W13A_NW_TE;

    /* DataStoreRead: '<S132>/W13A-RW-TE' */
    rtb_W13ARWTE = M_W13A_RW_TE;

    /* DataStoreRead: '<S132>/W13A-L' */
    NONVITALDEPOT_DW.W13AL = M_W13A_L;

    /* DataStoreRead: '<S132>/W13A-OOC' */
    rtb_W13AOOC_i = M_W13A_OOC;

    /* DataStoreRead: '<S132>/W13A-OOC-RD' */
    rtb_W13AOOCRD = M_W13A_OOC_RD;

    /* Logic: '<S132>/OR2' */
    rtb_OR2 = (M_RS_12_14 || M_RS_14_12);

    /* Logic: '<S132>/OR3' */
    rtb_OR3 = (M_RS_32_14 || M_RS_14_32);

    /* Logic: '<S132>/OR1' */
    rtb_OR1 = (M_W13B_73A_START || M_W54_START || M_W73B_START);
  }

  /* Outputs for Atomic SubSystem: '<S132>/INTERLOCKING POINT' */
  D_IL_POINT(NONVITALDEPOT_M, rtb_W13ACALCTRL, rtb_W13ATRAILCTRL,
             rtb_W13ARSTCTRL, rtb_W13ABCTRL, rtb_W13ANWZ_o, rtb_W13ARWZ_l,
             rtb_W13ANWP_b, rtb_W13ARWP_h, rtb_W13ANWC_m, rtb_W13ARWC_c,
             rtb_W13ANWTE, rtb_W13ARWTE, NONVITALDEPOT_DW.W13AL, rtb_W13AOOC_i,
             rtb_W13AOOCRD, rtb_OR2, rtb_OR3, rtb_OR1,
             &NONVITALDEPOT_DW.INTERLOCKINGPOINT_ea);

  /* End of Outputs for SubSystem: '<S132>/INTERLOCKING POINT' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S132>/W13A-BACK-TO-N' */
    M_W13A_BACK_TO_N = NONVITALDEPOT_DW.INTERLOCKINGPOINT_ea.AND4;

    /* DataStoreWrite: '<S132>/W13A-BACK-TO-R' */
    M_W13A_BACK_TO_R = NONVITALDEPOT_DW.INTERLOCKINGPOINT_ea.AND3;

    /* DataStoreWrite: '<S132>/W13A-BLOCK' */
    M_W13A_BLOCK = NONVITALDEPOT_DW.INTERLOCKINGPOINT_ea.OR23;

    /* DataStoreWrite: '<S132>/W13A-N' */
    M_W13A_N = NONVITALDEPOT_DW.INTERLOCKINGPOINT_ea.M6;

    /* DataStoreWrite: '<S132>/W13A-N-BLOCK' */
    M_W13A_N_BLOCK = NONVITALDEPOT_DW.INTERLOCKINGPOINT_ea.M10;

    /* DataStoreWrite: '<S132>/W13A-N-REQ' */
    M_W13A_N_REQ = NONVITALDEPOT_DW.INTERLOCKINGPOINT_ea.AND19;

    /* DataStoreWrite: '<S132>/W13A-R' */
    M_W13A_R = NONVITALDEPOT_DW.INTERLOCKINGPOINT_ea.M7;

    /* DataStoreWrite: '<S132>/W13A-R-BLOCK' */
    M_W13A_R_BLOCK = NONVITALDEPOT_DW.INTERLOCKINGPOINT_ea.M11;

    /* DataStoreWrite: '<S132>/W13A-R-REQ' */
    M_W13A_R_REQ = NONVITALDEPOT_DW.INTERLOCKINGPOINT_ea.AND20;

    /* DataStoreWrite: '<S132>/W13A-START' */
    M_W13A_START = NONVITALDEPOT_DW.INTERLOCKINGPOINT_ea.M8;

    /* DataStoreWrite: '<S132>/W13A-SWINIT' */
    M_W13A_SWINIT = NONVITALDEPOT_DW.INTERLOCKINGPOINT_ea.M9;

    /* DataStoreRead: '<S133>/W13B//73A-CAL-CTRL' */
    rtb_W13B73ACALCTRL = M_W13B_73A_CTRL_CAL;

    /* DataStoreRead: '<S133>/W13B//73A-TRAIL-CTRL' */
    rtb_W13B73ATRAILCTRL = M_W13B_73A_CTRL_TRAIL;

    /* DataStoreRead: '<S133>/W13B//73A-RST-CTRL' */
    rtb_W13B73ARSTCTRL = M_W13B_73A_CTRL_RST;

    /* DataStoreRead: '<S133>/W13B//73A-B-CTRL' */
    rtb_W13B73ABCTRL = M_W13B_73A_CTRL_B;

    /* DataStoreRead: '<S133>/W13B//73A-NWZ' */
    rtb_W13B73ANWZ_k = M_W13B_73A_NWZ;

    /* DataStoreRead: '<S133>/W13B//73A-RWZ' */
    rtb_W13B73ARWZ_a = M_W13B_73A_RWZ;

    /* DataStoreRead: '<S133>/W13B//73A-NWP' */
    rtb_W13B73ANWP_ew = M_W13B_73A_NWP;

    /* DataStoreRead: '<S133>/W13B//73A-RWP' */
    rtb_W13B73ARWP_h = M_W13B_73A_RWP;

    /* DataStoreRead: '<S133>/W13B//73A-NWC' */
    rtb_W13B73ANWC_or = M_W13B_73A_NWC;

    /* DataStoreRead: '<S133>/W13B//73A-RWC' */
    rtb_W13B73ARWC_j = M_W13B_73A_RWC;

    /* DataStoreRead: '<S133>/W13B//73A-NW-TE' */
    rtb_W13B73ANWTE = M_W13B_73A_NW_TE;

    /* DataStoreRead: '<S133>/W13B//73A-RW-TE' */
    rtb_W13B73ARWTE = M_W13B_73A_RW_TE;

    /* DataStoreRead: '<S133>/W13B//73A-L' */
    NONVITALDEPOT_DW.W13B73AL = M_W13B_73A_L;

    /* DataStoreRead: '<S133>/W13B//73A-OOC' */
    rtb_W13B73AOOC_f = M_W13B_73A_OOC;

    /* DataStoreRead: '<S133>/W13B//73A-OOC-RD' */
    rtb_W13B73AOOCRD = M_W13B_73A_OOC_RD;

    /* Logic: '<S133>/OR4' */
    rtb_OR4_j = (M_RS_12_14 || M_RS_32_14 || M_RS_14_12 || M_RS_14_32 ||
                 M_RS_72_74 || M_RS_72_54 || M_RS_72_34 || M_RS_34_72 ||
                 M_RS_54_72 || M_RS_74_72);

    /* Logic: '<S133>/OR2' */
    rtb_OR2_e = (M_RS_72_14 || M_RS_14_72);

    /* Logic: '<S133>/OR1' incorporates:
     *  DataStoreWrite: '<S132>/W13A-START'
     */
    rtb_OR1_n = (NONVITALDEPOT_DW.INTERLOCKINGPOINT_ea.M8 || M_W54_START ||
                 M_W73B_START);
  }

  /* Outputs for Atomic SubSystem: '<S133>/INTERLOCKING POINT' */
  D_IL_POINT(NONVITALDEPOT_M, rtb_W13B73ACALCTRL, rtb_W13B73ATRAILCTRL,
             rtb_W13B73ARSTCTRL, rtb_W13B73ABCTRL, rtb_W13B73ANWZ_k,
             rtb_W13B73ARWZ_a, rtb_W13B73ANWP_ew, rtb_W13B73ARWP_h,
             rtb_W13B73ANWC_or, rtb_W13B73ARWC_j, rtb_W13B73ANWTE,
             rtb_W13B73ARWTE, NONVITALDEPOT_DW.W13B73AL, rtb_W13B73AOOC_f,
             rtb_W13B73AOOCRD, rtb_OR4_j, rtb_OR2_e, rtb_OR1_n,
             &NONVITALDEPOT_DW.INTERLOCKINGPOINT_j);

  /* End of Outputs for SubSystem: '<S133>/INTERLOCKING POINT' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S133>/W13B//73A-BACK-TO-N' */
    M_W13B_73A_BACK_TO_N = NONVITALDEPOT_DW.INTERLOCKINGPOINT_j.AND4;

    /* DataStoreWrite: '<S133>/W13B//73A-BACK-TO-R' */
    M_W13B_73A_BACK_TO_R = NONVITALDEPOT_DW.INTERLOCKINGPOINT_j.AND3;

    /* DataStoreWrite: '<S133>/W13B//73A-BLOCK' */
    M_W13B_73A_BLOCK = NONVITALDEPOT_DW.INTERLOCKINGPOINT_j.OR23;

    /* DataStoreWrite: '<S133>/W13B//73A-N' */
    M_W13B_73A_N = NONVITALDEPOT_DW.INTERLOCKINGPOINT_j.M6;

    /* DataStoreWrite: '<S133>/W13B//73A-N-BLOCK' */
    M_W13B_73A_N_BLOCK = NONVITALDEPOT_DW.INTERLOCKINGPOINT_j.M10;

    /* Logic: '<S133>/OR10' */
    rtb_TPRPBDI_b = (M_W13A_N_REQ || M_W13A_R_REQ);

    /* DataStoreWrite: '<S133>/W13B//73A-N-REQ' incorporates:
     *  Logic: '<S133>/OR6'
     *  Logic: '<S133>/OR8'
     */
    M_W13B_73A_N_REQ = (NONVITALDEPOT_DW.INTERLOCKINGPOINT_j.AND19 &&
                        (!rtb_TPRPBDI_b));

    /* DataStoreWrite: '<S133>/W13B//73A-R' */
    M_W13B_73A_R = NONVITALDEPOT_DW.INTERLOCKINGPOINT_j.M7;

    /* DataStoreWrite: '<S133>/W13B//73A-R-BLOCK' */
    M_W13B_73A_R_BLOCK = NONVITALDEPOT_DW.INTERLOCKINGPOINT_j.M11;

    /* DataStoreWrite: '<S133>/W13B//73A-R-REQ' incorporates:
     *  Logic: '<S133>/OR7'
     *  Logic: '<S133>/OR9'
     */
    M_W13B_73A_R_REQ = (NONVITALDEPOT_DW.INTERLOCKINGPOINT_j.AND20 &&
                        (!rtb_TPRPBDI_b));

    /* DataStoreWrite: '<S133>/W13B//73A-START' */
    M_W13B_73A_START = NONVITALDEPOT_DW.INTERLOCKINGPOINT_j.M8;

    /* DataStoreWrite: '<S133>/W13B//73A-SWINIT' */
    M_W13B_73A_SWINIT = NONVITALDEPOT_DW.INTERLOCKINGPOINT_j.M9;

    /* DataStoreRead: '<S134>/W54-CAL-CTRL' */
    rtb_W54CALCTRL = M_W54_CTRL_CAL;

    /* DataStoreRead: '<S134>/W54-TRAIL-CTRL' */
    rtb_W54TRAILCTRL = M_W54_CTRL_TRAIL;

    /* DataStoreRead: '<S134>/W54-RST-CTRL' */
    rtb_W54RSTCTRL = M_W54_CTRL_RST;

    /* DataStoreRead: '<S134>/W54-B-CTRL' */
    rtb_W54BCTRL = M_W54_CTRL_B;

    /* DataStoreRead: '<S134>/W54-NWZ' */
    rtb_W54NWZ_g = M_W54_NWZ;

    /* DataStoreRead: '<S134>/W54-RWZ' */
    rtb_W54RWZ_p = M_W54_RWZ;

    /* DataStoreRead: '<S134>/W54-NWP' */
    rtb_W54NWP_m = M_W54_NWP;

    /* DataStoreRead: '<S134>/W54-RWP' */
    rtb_W54RWP_e = M_W54_RWP;

    /* DataStoreRead: '<S134>/W54-NWC' */
    rtb_W54NWC_c = M_W54_NWC;

    /* DataStoreRead: '<S134>/W54-RWC' */
    rtb_W54RWC_o = M_W54_RWC;

    /* DataStoreRead: '<S134>/W54-NW-TE' */
    rtb_W54NWTE = M_W54_NW_TE;

    /* DataStoreRead: '<S134>/W54-RW-TE' */
    rtb_W54RWTE = M_W54_RW_TE;

    /* DataStoreRead: '<S134>/W54-L' */
    NONVITALDEPOT_DW.W54L = M_W54_L;

    /* DataStoreRead: '<S134>/W54-OOC' */
    rtb_W54OOC_d = M_W54_OOC;

    /* DataStoreRead: '<S134>/W54-OOC-RD' */
    rtb_W54OOCRD = M_W54_OOC_RD;

    /* Logic: '<S134>/OR2' */
    rtb_OR2_m = (M_RS_72_34 || M_RS_34_72);

    /* Logic: '<S134>/OR4' */
    rtb_OR4_p = (M_RS_72_54 || M_RS_54_72);

    /* Logic: '<S134>/OR1' incorporates:
     *  DataStoreWrite: '<S133>/W13B//73A-START'
     */
    rtb_OR1_i = (M_W13A_START || NONVITALDEPOT_DW.INTERLOCKINGPOINT_j.M8 ||
                 M_W73B_START);
  }

  /* Outputs for Atomic SubSystem: '<S134>/INTERLOCKING POINT' */
  D_IL_POINT(NONVITALDEPOT_M, rtb_W54CALCTRL, rtb_W54TRAILCTRL, rtb_W54RSTCTRL,
             rtb_W54BCTRL, rtb_W54NWZ_g, rtb_W54RWZ_p, rtb_W54NWP_m,
             rtb_W54RWP_e, rtb_W54NWC_c, rtb_W54RWC_o, rtb_W54NWTE, rtb_W54RWTE,
             NONVITALDEPOT_DW.W54L, rtb_W54OOC_d, rtb_W54OOCRD, rtb_OR2_m,
             rtb_OR4_p, rtb_OR1_i, &NONVITALDEPOT_DW.INTERLOCKINGPOINT_jl);

  /* End of Outputs for SubSystem: '<S134>/INTERLOCKING POINT' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S134>/W54-BACK-TO-N' */
    M_W54_BACK_TO_N = NONVITALDEPOT_DW.INTERLOCKINGPOINT_jl.AND4;

    /* DataStoreWrite: '<S134>/W54-BACK-TO-R' */
    M_W54_BACK_TO_R = NONVITALDEPOT_DW.INTERLOCKINGPOINT_jl.AND3;

    /* DataStoreWrite: '<S134>/W54-BLOCK' */
    M_W54_BLOCK = NONVITALDEPOT_DW.INTERLOCKINGPOINT_jl.OR23;

    /* DataStoreWrite: '<S134>/W54-N' */
    M_W54_N = NONVITALDEPOT_DW.INTERLOCKINGPOINT_jl.M6;

    /* DataStoreWrite: '<S134>/W54-N-BLOCK' */
    M_W54_N_BLOCK = NONVITALDEPOT_DW.INTERLOCKINGPOINT_jl.M10;

    /* Logic: '<S134>/OR10' incorporates:
     *  Logic: '<S134>/OR3'
     *  Logic: '<S134>/OR5'
     */
    rtb_TPRPBDI_b = (M_W13A_N_REQ || M_W13B_73A_N_REQ || (M_W13A_R_REQ ||
      M_W13B_73A_R_REQ));

    /* DataStoreWrite: '<S134>/W54-N-REQ' incorporates:
     *  Logic: '<S134>/OR6'
     *  Logic: '<S134>/OR8'
     */
    M_W54_N_REQ = (NONVITALDEPOT_DW.INTERLOCKINGPOINT_jl.AND19 &&
                   (!rtb_TPRPBDI_b));

    /* DataStoreWrite: '<S134>/W54-R' */
    M_W54_R = NONVITALDEPOT_DW.INTERLOCKINGPOINT_jl.M7;

    /* DataStoreWrite: '<S134>/W54-R-BLOCK' */
    M_W54_R_BLOCK = NONVITALDEPOT_DW.INTERLOCKINGPOINT_jl.M11;

    /* DataStoreWrite: '<S134>/W54-R-REQ' incorporates:
     *  Logic: '<S134>/OR7'
     *  Logic: '<S134>/OR9'
     */
    M_W54_R_REQ = (NONVITALDEPOT_DW.INTERLOCKINGPOINT_jl.AND20 &&
                   (!rtb_TPRPBDI_b));

    /* DataStoreWrite: '<S134>/W54-START' */
    M_W54_START = NONVITALDEPOT_DW.INTERLOCKINGPOINT_jl.M8;

    /* DataStoreWrite: '<S134>/W54-SWINIT' */
    M_W54_SWINIT = NONVITALDEPOT_DW.INTERLOCKINGPOINT_jl.M9;

    /* DataStoreRead: '<S135>/W73B-CAL-CTRL' */
    rtb_W73BCALCTRL = M_W73B_CTRL_CAL;

    /* DataStoreRead: '<S135>/W73B-TRAIL-CTRL' */
    rtb_W73BTRAILCTRL = M_W73B_CTRL_TRAIL;

    /* DataStoreRead: '<S135>/W73B-RST-CTRL' */
    rtb_W73BRSTCTRL = M_W73B_CTRL_RST;

    /* DataStoreRead: '<S135>/W73B-B-CTRL' */
    rtb_W73BBCTRL = M_W73B_CTRL_B;

    /* DataStoreRead: '<S135>/W73B-NWZ' */
    rtb_W73BNWZ_d = M_W73B_NWZ;

    /* DataStoreRead: '<S135>/W73B-RWZ' */
    rtb_W73BRWZ_b = M_W73B_RWZ;

    /* DataStoreRead: '<S135>/W73B-NWP' */
    rtb_W73BNWP_j = M_W73B_NWP;

    /* DataStoreRead: '<S135>/W73B-RWP' */
    rtb_W73BRWP_a = M_W73B_RWP;

    /* DataStoreRead: '<S135>/W73B-NWC' */
    rtb_W73BNWC_j = M_W73B_NWC;

    /* DataStoreRead: '<S135>/W73B-RWC' */
    rtb_W73BRWC_a = M_W73B_RWC;

    /* DataStoreRead: '<S135>/W73B-NW-TE' */
    rtb_W73BNWTE = M_W73B_NW_TE;

    /* DataStoreRead: '<S135>/W73B-RW-TE' */
    rtb_W73BRWTE = M_W73B_RW_TE;

    /* DataStoreRead: '<S135>/W73B-L' */
    NONVITALDEPOT_DW.W73BL = M_W73B_L;

    /* DataStoreRead: '<S135>/W73B-OOC' */
    rtb_W73BOOC_d = M_W73B_OOC;

    /* DataStoreRead: '<S135>/W73B-OOC-RD' */
    rtb_W73BOOCRD = M_W73B_OOC_RD;

    /* Logic: '<S135>/OR2' */
    rtb_OR2_d = (M_RS_72_74 || M_RS_74_72);

    /* Logic: '<S135>/OR3' */
    rtb_OR3_gl = (M_RS_72_34 || M_RS_72_54 || M_RS_34_72 || M_RS_54_72);

    /* Logic: '<S135>/OR1' incorporates:
     *  DataStoreWrite: '<S134>/W54-START'
     */
    rtb_OR1_j = (M_W13A_START || M_W13B_73A_START ||
                 NONVITALDEPOT_DW.INTERLOCKINGPOINT_jl.M8);
  }

  /* Outputs for Atomic SubSystem: '<S135>/INTERLOCKING POINT' */
  D_IL_POINT(NONVITALDEPOT_M, rtb_W73BCALCTRL, rtb_W73BTRAILCTRL,
             rtb_W73BRSTCTRL, rtb_W73BBCTRL, rtb_W73BNWZ_d, rtb_W73BRWZ_b,
             rtb_W73BNWP_j, rtb_W73BRWP_a, rtb_W73BNWC_j, rtb_W73BRWC_a,
             rtb_W73BNWTE, rtb_W73BRWTE, NONVITALDEPOT_DW.W73BL, rtb_W73BOOC_d,
             rtb_W73BOOCRD, rtb_OR2_d, rtb_OR3_gl, rtb_OR1_j,
             &NONVITALDEPOT_DW.INTERLOCKINGPOINT_a);

  /* End of Outputs for SubSystem: '<S135>/INTERLOCKING POINT' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S135>/W73B-BACK-TO-N' */
    M_W73B_BACK_TO_N = NONVITALDEPOT_DW.INTERLOCKINGPOINT_a.AND4;

    /* DataStoreWrite: '<S135>/W73B-BACK-TO-R' */
    M_W73B_BACK_TO_R = NONVITALDEPOT_DW.INTERLOCKINGPOINT_a.AND3;

    /* DataStoreWrite: '<S135>/W73B-BLOCK' */
    M_W73B_BLOCK = NONVITALDEPOT_DW.INTERLOCKINGPOINT_a.OR23;

    /* DataStoreWrite: '<S135>/W73B-N' */
    NONVITALDEPOT_DW.M_W73B_N = NONVITALDEPOT_DW.INTERLOCKINGPOINT_a.M6;

    /* DataStoreWrite: '<S135>/W73B-N-BLOCK' */
    M_W73B_N_BLOCK = NONVITALDEPOT_DW.INTERLOCKINGPOINT_a.M10;

    /* Logic: '<S135>/OR10' incorporates:
     *  Logic: '<S135>/OR4'
     *  Logic: '<S135>/OR5'
     */
    rtb_TPRPBDI_b = (M_W13A_N_REQ || M_W13B_73A_N_REQ || M_W54_N_REQ ||
                     (M_W13A_R_REQ || M_W13B_73A_R_REQ || M_W54_R_REQ));

    /* DataStoreWrite: '<S135>/W73B-N-REQ' incorporates:
     *  Logic: '<S135>/OR6'
     *  Logic: '<S135>/OR8'
     */
    M_W73B_N_REQ = (NONVITALDEPOT_DW.INTERLOCKINGPOINT_a.AND19 &&
                    (!rtb_TPRPBDI_b));

    /* DataStoreWrite: '<S135>/W73B-R' */
    NONVITALDEPOT_DW.M_W73B_R = NONVITALDEPOT_DW.INTERLOCKINGPOINT_a.M7;

    /* DataStoreWrite: '<S135>/W73B-R-BLOCK' */
    M_W73B_R_BLOCK = NONVITALDEPOT_DW.INTERLOCKINGPOINT_a.M11;

    /* DataStoreWrite: '<S135>/W73B-R-REQ' incorporates:
     *  Logic: '<S135>/OR7'
     *  Logic: '<S135>/OR9'
     */
    M_W73B_R_REQ = (NONVITALDEPOT_DW.INTERLOCKINGPOINT_a.AND20 &&
                    (!rtb_TPRPBDI_b));

    /* DataStoreWrite: '<S135>/W73B-START' */
    M_W73B_START = NONVITALDEPOT_DW.INTERLOCKINGPOINT_a.M8;

    /* DataStoreWrite: '<S135>/W73B-SWINIT' */
    M_W73B_SWINIT = NONVITALDEPOT_DW.INTERLOCKINGPOINT_a.M9;

    /* DataStoreWrite: '<S184>/L12-L14B-B' incorporates:
     *  Logic: '<S184>/AND1'
     *  Logic: '<S184>/AND2'
     *  Logic: '<S184>/AND3'
     *  Logic: '<S184>/NOT10'
     *  Logic: '<S184>/NOT11'
     *  Logic: '<S184>/NOT7'
     *  Logic: '<S184>/NOT8'
     *  Logic: '<S184>/NOT9'
     *  Logic: '<S184>/OR1'
     *  Logic: '<S184>/OR2'
     *  Logic: '<S184>/OR3'
     *  Logic: '<S184>/OR4'
     *  Logic: '<S184>/OR5'
     *  Logic: '<S184>/OR6'
     */
    M_B_12_14 = (M_S_WS_13 && (!(M_W13A_SWRLS || M_W13B_73A_SWRLS)) &&
                 (!(M_W13A_TPZ || M_W13B_73A_TPZ)) && (!(M_W13A_R ||
      M_W13B_73A_R)) && ((M_W13A_L || M_W13A_NWZ) && (M_W13B_73A_L ||
      M_W13B_73A_NWZ)) && (!(M_W13A_OOC || M_W13B_73A_OOC)) && (M_W13A_SWINIT &&
      M_W13B_73A_SWINIT) && (!M_RRLS_14B) && M_TP_13);

    /* DataStoreWrite: '<S185>/L14A-X12-B' incorporates:
     *  Logic: '<S185>/AND1'
     *  Logic: '<S185>/AND2'
     *  Logic: '<S185>/AND3'
     *  Logic: '<S185>/NOT10'
     *  Logic: '<S185>/NOT11'
     *  Logic: '<S185>/NOT7'
     *  Logic: '<S185>/NOT8'
     *  Logic: '<S185>/NOT9'
     *  Logic: '<S185>/OR1'
     *  Logic: '<S185>/OR2'
     *  Logic: '<S185>/OR3'
     *  Logic: '<S185>/OR4'
     *  Logic: '<S185>/OR5'
     *  Logic: '<S185>/OR6'
     */
    M_B_14_12 = (M_S_ES_13 && (!(M_W13A_SWRLS || M_W13B_73A_SWRLS)) &&
                 (!(M_W13A_TPZ || M_W13B_73A_TPZ)) && (!(M_W13A_R ||
      M_W13B_73A_R)) && ((M_W13A_L || M_W13A_NWZ) && (M_W13B_73A_L ||
      M_W13B_73A_NWZ)) && (!(M_W13A_OOC || M_W13B_73A_OOC)) && (M_W13A_SWINIT &&
      M_W13B_73A_SWINIT) && (!M_RRLS_12) && M_TP_13);

    /* DataStoreWrite: '<S186>/L14A-X32-B' incorporates:
     *  Logic: '<S186>/AND1'
     *  Logic: '<S186>/AND2'
     *  Logic: '<S186>/AND3'
     *  Logic: '<S186>/NOT10'
     *  Logic: '<S186>/NOT11'
     *  Logic: '<S186>/NOT7'
     *  Logic: '<S186>/NOT8'
     *  Logic: '<S186>/NOT9'
     *  Logic: '<S186>/OR1'
     *  Logic: '<S186>/OR2'
     *  Logic: '<S186>/OR3'
     *  Logic: '<S186>/OR4'
     *  Logic: '<S186>/OR5'
     *  Logic: '<S186>/OR6'
     */
    M_B_14_32 = (M_S_ES_13 && (!(M_W13A_SWRLS || M_W13B_73A_SWRLS)) &&
                 (!(M_W13A_TPZ || M_W13B_73A_TPZ)) && (!(M_W13A_N ||
      M_W13B_73A_R)) && ((M_W13A_L || M_W13A_RWZ) && (M_W13B_73A_L ||
      M_W13B_73A_NWZ)) && (!(M_W13A_OOC || M_W13B_73A_OOC)) && (M_W13A_SWINIT &&
      M_W13B_73A_SWINIT) && (!M_RRLS_32) && M_TP_13);

    /* DataStoreWrite: '<S187>/L14A-X72-B' incorporates:
     *  Logic: '<S187>/AND1'
     *  Logic: '<S187>/NOT10'
     *  Logic: '<S187>/NOT11'
     *  Logic: '<S187>/NOT7'
     *  Logic: '<S187>/NOT8'
     *  Logic: '<S187>/NOT9'
     *  Logic: '<S187>/OR5'
     */
    M_B_14_72 = (M_S_ES_13 && (!M_W13B_73A_SWRLS) && (!M_W13B_73A_TPZ) &&
                 (!M_W13B_73A_N) && (M_W13B_73A_L || M_W13B_73A_RWZ) &&
                 (!M_W13B_73A_OOC) && M_W13B_73A_SWINIT && (!M_RRLS_72) &&
                 M_TP_13);

    /* DataStoreWrite: '<S188>/L32-L14B-B' incorporates:
     *  Logic: '<S188>/AND1'
     *  Logic: '<S188>/AND2'
     *  Logic: '<S188>/AND3'
     *  Logic: '<S188>/NOT10'
     *  Logic: '<S188>/NOT11'
     *  Logic: '<S188>/NOT7'
     *  Logic: '<S188>/NOT8'
     *  Logic: '<S188>/NOT9'
     *  Logic: '<S188>/OR1'
     *  Logic: '<S188>/OR2'
     *  Logic: '<S188>/OR3'
     *  Logic: '<S188>/OR4'
     *  Logic: '<S188>/OR5'
     *  Logic: '<S188>/OR6'
     */
    M_B_32_14 = (M_S_WS_13 && (!(M_W13A_SWRLS || M_W13B_73A_SWRLS)) &&
                 (!(M_W13A_TPZ || M_W13B_73A_TPZ)) && (!(M_W13A_N ||
      M_W13B_73A_R)) && ((M_W13A_L || M_W13A_RWZ) && (M_W13B_73A_L ||
      M_W13B_73A_NWZ)) && (!(M_W13A_OOC || M_W13B_73A_OOC)) && (M_W13A_SWINIT &&
      M_W13B_73A_SWINIT) && (!M_RRLS_14B) && M_TP_13);

    /* DataStoreWrite: '<S189>/L34-X72-B' incorporates:
     *  DataStoreWrite: '<S135>/W73B-N'
     *  Logic: '<S189>/AND1'
     *  Logic: '<S189>/AND2'
     *  Logic: '<S189>/AND3'
     *  Logic: '<S189>/NOT10'
     *  Logic: '<S189>/NOT11'
     *  Logic: '<S189>/NOT7'
     *  Logic: '<S189>/NOT8'
     *  Logic: '<S189>/NOT9'
     *  Logic: '<S189>/OR1'
     *  Logic: '<S189>/OR2'
     *  Logic: '<S189>/OR3'
     *  Logic: '<S189>/OR4'
     *  Logic: '<S189>/OR5'
     *  Logic: '<S189>/OR6'
     *  Logic: '<S189>/OR7'
     */
    M_B_34_72 = (M_S_ES_73B && (!(M_W13B_73A_SWRLS || M_W73B_SWRLS ||
      M_W54_SWRLS)) && (!(M_W13B_73A_TPZ || M_W73B_TPZ || M_W54_TPZ)) &&
                 (!(M_W13B_73A_R || NONVITALDEPOT_DW.INTERLOCKINGPOINT_a.M6 ||
                    M_W54_R)) && ((M_W13B_73A_L || M_W13B_73A_NWZ) && (M_W73B_L ||
      M_W73B_RWZ) && (M_W54_L || M_W54_NWZ)) && (!(M_W13A_OOC || M_W13B_73A_OOC ||
      M_W54_OOC)) && (M_W13A_SWINIT && M_W13B_73A_SWINIT && M_W54_SWINIT) &&
                 (!M_RRLS_72) && M_TP_73B);

    /* DataStoreWrite: '<S190>/L54-X72-B' incorporates:
     *  DataStoreWrite: '<S135>/W73B-N'
     *  Logic: '<S190>/AND1'
     *  Logic: '<S190>/AND2'
     *  Logic: '<S190>/AND3'
     *  Logic: '<S190>/NOT10'
     *  Logic: '<S190>/NOT11'
     *  Logic: '<S190>/NOT7'
     *  Logic: '<S190>/NOT8'
     *  Logic: '<S190>/NOT9'
     *  Logic: '<S190>/OR1'
     *  Logic: '<S190>/OR2'
     *  Logic: '<S190>/OR3'
     *  Logic: '<S190>/OR4'
     *  Logic: '<S190>/OR5'
     *  Logic: '<S190>/OR6'
     *  Logic: '<S190>/OR7'
     */
    M_B_54_72 = (M_S_ES_73B && (!(M_W13B_73A_SWRLS || M_W73B_SWRLS ||
      M_W54_SWRLS)) && (!(M_W13B_73A_TPZ || M_W73B_TPZ || M_W54_TPZ)) &&
                 (!(M_W13B_73A_R || NONVITALDEPOT_DW.INTERLOCKINGPOINT_a.M6 ||
                    M_W54_N)) && ((M_W13B_73A_L || M_W13B_73A_NWZ) && (M_W73B_L ||
      M_W73B_RWZ) && (M_W54_L || M_W54_RWZ)) && (!(M_W13A_OOC || M_W13B_73A_OOC ||
      M_W54_OOC)) && (M_W13A_SWINIT && M_W13B_73A_SWINIT && M_W54_SWINIT) &&
                 (!M_RRLS_72) && M_TP_73B);

    /* DataStoreWrite: '<S191>/L72-L14B-B' incorporates:
     *  Logic: '<S191>/AND1'
     *  Logic: '<S191>/NOT10'
     *  Logic: '<S191>/NOT11'
     *  Logic: '<S191>/NOT7'
     *  Logic: '<S191>/NOT8'
     *  Logic: '<S191>/NOT9'
     *  Logic: '<S191>/OR5'
     */
    M_B_72_14 = (M_S_WS_73A && (!M_W13B_73A_SWRLS) && (!M_W13B_73A_TPZ) &&
                 (!M_W13B_73A_N) && (M_W13B_73A_L || M_W13B_73A_RWZ) &&
                 (!M_W13B_73A_OOC) && M_W13B_73A_SWINIT && (!M_RRLS_14B) &&
                 M_TP_73A);

    /* DataStoreWrite: '<S192>/L72-X34-B' incorporates:
     *  DataStoreWrite: '<S135>/W73B-N'
     *  Logic: '<S192>/AND1'
     *  Logic: '<S192>/AND2'
     *  Logic: '<S192>/AND3'
     *  Logic: '<S192>/NOT10'
     *  Logic: '<S192>/NOT11'
     *  Logic: '<S192>/NOT7'
     *  Logic: '<S192>/NOT8'
     *  Logic: '<S192>/NOT9'
     *  Logic: '<S192>/OR1'
     *  Logic: '<S192>/OR2'
     *  Logic: '<S192>/OR3'
     *  Logic: '<S192>/OR4'
     *  Logic: '<S192>/OR5'
     *  Logic: '<S192>/OR6'
     *  Logic: '<S192>/OR7'
     */
    M_B_72_34 = (M_S_WS_73A && (!(M_W13B_73A_SWRLS || M_W73B_SWRLS ||
      M_W54_SWRLS)) && (!(M_W13B_73A_TPZ || M_W73B_TPZ || M_W54_TPZ)) &&
                 (!(M_W13B_73A_R || NONVITALDEPOT_DW.INTERLOCKINGPOINT_a.M6 ||
                    M_W54_R)) && ((M_W13B_73A_L || M_W13B_73A_NWZ) && (M_W73B_L ||
      M_W73B_RWZ) && (M_W54_L || M_W54_NWZ)) && (!(M_W13A_OOC || M_W13B_73A_OOC ||
      M_W54_OOC)) && (M_W13A_SWINIT && M_W13B_73A_SWINIT && M_W54_SWINIT) &&
                 (!M_RRLS_34) && M_TP_73A);

    /* DataStoreWrite: '<S193>/L72-X54-B' incorporates:
     *  DataStoreWrite: '<S135>/W73B-N'
     *  Logic: '<S193>/AND1'
     *  Logic: '<S193>/AND2'
     *  Logic: '<S193>/AND3'
     *  Logic: '<S193>/NOT10'
     *  Logic: '<S193>/NOT11'
     *  Logic: '<S193>/NOT7'
     *  Logic: '<S193>/NOT8'
     *  Logic: '<S193>/NOT9'
     *  Logic: '<S193>/OR1'
     *  Logic: '<S193>/OR2'
     *  Logic: '<S193>/OR3'
     *  Logic: '<S193>/OR4'
     *  Logic: '<S193>/OR5'
     *  Logic: '<S193>/OR6'
     *  Logic: '<S193>/OR7'
     */
    M_B_72_54 = (M_S_WS_73A && (!(M_W13B_73A_SWRLS || M_W73B_SWRLS ||
      M_W54_SWRLS)) && (!(M_W13B_73A_TPZ || M_W73B_TPZ || M_W54_TPZ)) &&
                 (!(M_W13B_73A_R || NONVITALDEPOT_DW.INTERLOCKINGPOINT_a.M6 ||
                    M_W54_N)) && ((M_W13B_73A_L || M_W13B_73A_NWZ) && (M_W73B_L ||
      M_W73B_RWZ) && (M_W54_L || M_W54_RWZ)) && (!(M_W13A_OOC || M_W13B_73A_OOC ||
      M_W54_OOC)) && (M_W13A_SWINIT && M_W13B_73A_SWINIT && M_W54_SWINIT) &&
                 (!M_RRLS_54) && M_TP_73A);

    /* DataStoreWrite: '<S194>/L72-X74-B' incorporates:
     *  DataStoreWrite: '<S135>/W73B-R'
     *  Logic: '<S194>/AND1'
     *  Logic: '<S194>/AND2'
     *  Logic: '<S194>/AND3'
     *  Logic: '<S194>/NOT10'
     *  Logic: '<S194>/NOT11'
     *  Logic: '<S194>/NOT7'
     *  Logic: '<S194>/NOT8'
     *  Logic: '<S194>/NOT9'
     *  Logic: '<S194>/OR1'
     *  Logic: '<S194>/OR2'
     *  Logic: '<S194>/OR3'
     *  Logic: '<S194>/OR4'
     *  Logic: '<S194>/OR5'
     *  Logic: '<S194>/OR6'
     */
    M_B_72_74 = (M_S_WS_73A && (!(M_W13B_73A_SWRLS || M_W73B_SWRLS)) &&
                 (!(M_W13B_73A_TPZ || M_W73B_TPZ)) && (!(M_W13B_73A_R ||
      NONVITALDEPOT_DW.INTERLOCKINGPOINT_a.M7)) && ((M_W13B_73A_L ||
      M_W13B_73A_NWZ) && (M_W73B_L || M_W73B_NWZ)) && (!(M_W13A_OOC ||
      M_W13B_73A_OOC)) && (M_W13A_SWINIT && M_W13B_73A_SWINIT) && (!M_RRLS_74) &&
                 M_TP_73A);

    /* DataStoreWrite: '<S195>/L74-X72-B' incorporates:
     *  DataStoreWrite: '<S135>/W73B-R'
     *  Logic: '<S195>/AND1'
     *  Logic: '<S195>/AND2'
     *  Logic: '<S195>/AND3'
     *  Logic: '<S195>/NOT10'
     *  Logic: '<S195>/NOT11'
     *  Logic: '<S195>/NOT7'
     *  Logic: '<S195>/NOT8'
     *  Logic: '<S195>/NOT9'
     *  Logic: '<S195>/OR1'
     *  Logic: '<S195>/OR2'
     *  Logic: '<S195>/OR3'
     *  Logic: '<S195>/OR4'
     *  Logic: '<S195>/OR5'
     *  Logic: '<S195>/OR6'
     */
    M_B_74_72 = (M_S_ES_73B && (!(M_W13B_73A_SWRLS || M_W73B_SWRLS)) &&
                 (!(M_W13B_73A_TPZ || M_W73B_TPZ)) && (!(M_W13B_73A_R ||
      NONVITALDEPOT_DW.INTERLOCKINGPOINT_a.M7)) && ((M_W13B_73A_L ||
      M_W13B_73A_NWZ) && (M_W73B_L || M_W73B_NWZ)) && (!(M_W13A_OOC ||
      M_W13B_73A_OOC)) && (M_W13A_SWINIT && M_W13B_73A_SWINIT) && (!M_RRLS_72) &&
                 M_TP_73B);

    /* DataStoreWrite: '<S196>/BUZZER' incorporates:
     *  Logic: '<S196>/Logical Operator1'
     */
    DO_INDG_BUZZ = (M_FAIL_SYSTEM1_F || M_FAIL_SYSTEM2_F || M_FAIL_COMM1_F ||
                    M_FAIL_COMM2_F || M_W13A_FAIL || M_W13B_73A_FAIL ||
                    M_W54_FAIL || M_W73B_FAIL);

    /* DataStoreRead: '<S200>/FAIL' */
    rtb_FAIL = CBI_FAIL_COMM1;

    /* DataStoreRead: '<S200>/THB' */
    rtb_THB = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S200>/WARNING COMM 1 FAIL' */
    D_WAR(rtb_FAIL, rtb_THB, &NONVITALDEPOT_DW.WARNINGCOMM1FAIL,
          &NONVITALDEPOT_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S200>/WARNING COMM 1 FAIL' */

    /* DataStoreWrite: '<S200>/FAIL-DO' */
    DO_INDG_COMM1_FAIL = NONVITALDEPOT_DW.WARNINGCOMM1FAIL.OR2;

    /* DataStoreWrite: '<S200>/FAIL-F' */
    M_FAIL_COMM1_F = NONVITALDEPOT_DW.WARNINGCOMM1FAIL.AND5;

    /* DataStoreRead: '<S201>/FAIL' */
    rtb_FAIL_e = CBI_FAIL_COMM2;

    /* DataStoreRead: '<S201>/THB' */
    rtb_THB_e = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S201>/WARNING COMM 2 FAIL' */
    D_WAR(rtb_FAIL_e, rtb_THB_e, &NONVITALDEPOT_DW.WARNINGCOMM2FAIL,
          &NONVITALDEPOT_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S201>/WARNING COMM 2 FAIL' */

    /* DataStoreWrite: '<S201>/FAIL-DO' */
    DO_INDG_COMM2_FAIL = NONVITALDEPOT_DW.WARNINGCOMM2FAIL.OR2;

    /* DataStoreWrite: '<S201>/FAIL-F' */
    M_FAIL_COMM2_F = NONVITALDEPOT_DW.WARNINGCOMM2FAIL.AND5;

    /* DataStoreWrite: '<S202>/POINT-FAIL' incorporates:
     *  DataStoreRead: '<S202>/FLASH-500MS'
     *  Logic: '<S202>/AND1'
     *  Logic: '<S202>/AND2'
     *  Logic: '<S202>/AND3'
     *  Logic: '<S202>/AND4'
     */
    DO_INDG_POINT = ((M_W13A_FAIL && M_W13B_73A_FAIL && M_W54_FAIL &&
                      M_W73B_FAIL && NONVITALDEPOT_DW.M_GV_FLASH_500) ||
                     (M_W13A_F_ACK && M_W13B_73A_F_ACK && M_W54_F_ACK &&
                      M_W73B_F_ACK));

    /* Logic: '<S203>/AND5' incorporates:
     *  DataStoreRead: '<S203>/VDR'
     */
    rtb_AND5 = (CBI_FAIL_SYSTEM1 && NONVITALDEPOT_DW.M_VDR);

    /* DataStoreRead: '<S203>/THB' */
    rtb_THB_l = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S203>/WARNING SYSTEM 1 FAIL' */
    D_WAR(rtb_AND5, rtb_THB_l, &NONVITALDEPOT_DW.WARNINGSYSTEM1FAIL,
          &NONVITALDEPOT_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S203>/WARNING SYSTEM 1 FAIL' */

    /* DataStoreWrite: '<S203>/FAIL-DO' */
    DO_INDG_SYS1_FAIL = NONVITALDEPOT_DW.WARNINGSYSTEM1FAIL.OR2;

    /* DataStoreWrite: '<S203>/FAIL-F' */
    M_FAIL_SYSTEM1_F = NONVITALDEPOT_DW.WARNINGSYSTEM1FAIL.AND5;

    /* Logic: '<S204>/AND5' incorporates:
     *  DataStoreRead: '<S204>/VDR'
     */
    rtb_AND5_a = (CBI_FAIL_SYSTEM2 && NONVITALDEPOT_DW.M_VDR);

    /* DataStoreRead: '<S204>/THB' */
    rtb_THB_b = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S204>/WARNING SYSTEM 2 FAIL' */
    D_WAR(rtb_AND5_a, rtb_THB_b, &NONVITALDEPOT_DW.WARNINGSYSTEM2FAIL,
          &NONVITALDEPOT_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S204>/WARNING SYSTEM 2 FAIL' */

    /* DataStoreWrite: '<S204>/FAIL-DO' */
    DO_INDG_SYS2_FAIL = NONVITALDEPOT_DW.WARNINGSYSTEM2FAIL.OR2;

    /* DataStoreWrite: '<S204>/FAIL-F' */
    M_FAIL_SYSTEM2_F = NONVITALDEPOT_DW.WARNINGSYSTEM2FAIL.AND5;

    /* Logic: '<S198>/NOT2' */
    rtb_NOT2_o = !M_GV_RR;

    /* DataStoreRead: '<S198>/RR-OK' */
    rtb_RROK = M_GV_RR_OK;

    /* Outputs for Atomic SubSystem: '<S198>/TPR-BANTU' */
    D_WAR(rtb_NOT2_o, rtb_RROK, &NONVITALDEPOT_DW.TPRBANTU,
          &NONVITALDEPOT_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S198>/TPR-BANTU' */

    /* DataStoreWrite: '<S198>/PSD-DO' incorporates:
     *  Logic: '<S198>/NOT1'
     */
    DO_INDG_TPR_BANTU = !NONVITALDEPOT_DW.TPRBANTU.OR2;

    /* Logic: '<S199>/Logical Operator' */
    rtb_LogicalOperator_g = !M_CBTC_TZB_IN;

    /* DataStoreRead: '<S199>/TZB-ACK-PB-DI' */
    rtb_TZBACKPBDI = DI_PBCBTC_TZB_ACK;

    /* Outputs for Atomic SubSystem: '<S199>/TZB ACK' */
    D_WAR(rtb_LogicalOperator_g, rtb_TZBACKPBDI, &NONVITALDEPOT_DW.TZBACK,
          &NONVITALDEPOT_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S199>/TZB ACK' */

    /* DataStoreWrite: '<S199>/TZB-ACK-OK' */
    M_CBTC_TZB_ACK_OK = NONVITALDEPOT_DW.TZBACK.AND1;

    /* DataStoreWrite: '<S199>/TZB-IND-DO' */
    DO_INDCBTC_TZB = NONVITALDEPOT_DW.TZBACK.OR2;

    /* DataStoreWrite: '<S199>/TZB-IND-F' */
    NONVITALDEPOT_DW.M_CBTC_TZB_F = NONVITALDEPOT_DW.TZBACK.AND5;

    /* DataStoreWrite: '<S211>/AA-CTRL' */
    M_CTRL_AA = DI_PBG_THB;

    /* DataStoreRead: '<S217>/W13A-PB-DI' */
    rtb_W13APBDI = DI_PBW_13A;

    /* DataStoreRead: '<S217>/13-TP' */
    rtb_u3TP_j3 = M_TP_13;

    /* DataStoreRead: '<S217>/TBW-PB-DI' */
    rtb_TBWPBDI = DI_PBSW_TBW;

    /* DataStoreRead: '<S217>/TKGW-PB-DI' */
    rtb_TKGWPBDI = DI_PBSW_TKGW;

    /* DataStoreRead: '<S217>/TBKW-PB-DI' */
    rtb_TBKWPBDI = DI_PBSW_TBKW;

    /* DataStoreRead: '<S217>/TWT-PB-DI' */
    rtb_TWTPBDI = DI_PBSW_TWT;

    /* DataStoreRead: '<S217>/TKW-PB-DI' */
    rtb_TKWPBDI = DI_PBSW_TKW;

    /* Outputs for Atomic SubSystem: '<S217>/POINT PB CONTROL' */
    D_SW_PB(rtb_W13APBDI, rtb_u3TP_j3, rtb_TBWPBDI, rtb_TKGWPBDI, rtb_TBKWPBDI,
            rtb_TWTPBDI, rtb_TKWPBDI, &NONVITALDEPOT_DW.POINTPBCONTROL,
            &NONVITALDEPOT_DW.M_NVCOMM_OK, &NONVITALDEPOT_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S217>/POINT PB CONTROL' */

    /* DataStoreWrite: '<S217>/W13A-B-CTRL' */
    M_W13A_CTRL_B = NONVITALDEPOT_DW.POINTPBCONTROL.AND4;

    /* DataStoreWrite: '<S217>/W13A-CAL-CTRL' */
    M_W13A_CTRL_CAL = NONVITALDEPOT_DW.POINTPBCONTROL.FixPtRelationalOperator;

    /* DataStoreWrite: '<S217>/W13A-RST-CTRL' */
    M_W13A_CTRL_RST = NONVITALDEPOT_DW.POINTPBCONTROL.AND5;

    /* DataStoreWrite: '<S217>/W13A-SWRLSPB-CTRL' */
    M_W13A_CTRL_SWRLS = NONVITALDEPOT_DW.POINTPBCONTROL.AND1;

    /* DataStoreWrite: '<S217>/W13A-TRAIL-CTRL' */
    M_W13A_CTRL_TRAIL = NONVITALDEPOT_DW.POINTPBCONTROL.AND6;

    /* DataStoreRead: '<S218>/W13B//73A-PB-DI' */
    rtb_W13B73APBDI = DI_PBW_13B_73A;

    /* Logic: '<S218>/AND1' */
    rtb_AND1_os = (M_TP_13 && M_TP_73A);

    /* DataStoreRead: '<S218>/TBW-PB-DI' */
    rtb_TBWPBDI_d = DI_PBSW_TBW;

    /* DataStoreRead: '<S218>/TKGW-PB-DI' */
    rtb_TKGWPBDI_g = DI_PBSW_TKGW;

    /* DataStoreRead: '<S218>/TBKW-PB-DI' */
    rtb_TBKWPBDI_g = DI_PBSW_TBKW;

    /* DataStoreRead: '<S218>/TWT-PB-DI' */
    rtb_TWTPBDI_o = DI_PBSW_TWT;

    /* DataStoreRead: '<S218>/TKW-PB-DI' */
    rtb_TKWPBDI_e = DI_PBSW_TKW;

    /* Outputs for Atomic SubSystem: '<S218>/POINT PB CONTROL' */
    D_SW_PB(rtb_W13B73APBDI, rtb_AND1_os, rtb_TBWPBDI_d, rtb_TKGWPBDI_g,
            rtb_TBKWPBDI_g, rtb_TWTPBDI_o, rtb_TKWPBDI_e,
            &NONVITALDEPOT_DW.POINTPBCONTROL_c, &NONVITALDEPOT_DW.M_NVCOMM_OK,
            &NONVITALDEPOT_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S218>/POINT PB CONTROL' */

    /* DataStoreWrite: '<S218>/W13B//73A-B-CTRL' */
    M_W13B_73A_CTRL_B = NONVITALDEPOT_DW.POINTPBCONTROL_c.AND4;

    /* DataStoreWrite: '<S218>/W13B//73A-CAL-CTRL' */
    M_W13B_73A_CTRL_CAL =
      NONVITALDEPOT_DW.POINTPBCONTROL_c.FixPtRelationalOperator;

    /* DataStoreWrite: '<S218>/W13B//73A-RST-CTRL' */
    M_W13B_73A_CTRL_RST = NONVITALDEPOT_DW.POINTPBCONTROL_c.AND5;

    /* DataStoreWrite: '<S218>/W13B//73A-SWRLSPB-CTRL' */
    M_W13B_73A_CTRL_SWRLS = NONVITALDEPOT_DW.POINTPBCONTROL_c.AND1;

    /* DataStoreWrite: '<S218>/W13B//73A-TRAIL-CTRL' */
    M_W13B_73A_CTRL_TRAIL = NONVITALDEPOT_DW.POINTPBCONTROL_c.AND6;

    /* DataStoreRead: '<S219>/W54-PB-DI' */
    rtb_W54PBDI = DI_PBW_54;

    /* DataStoreRead: '<S219>/73B-TP' */
    rtb_u3BTP_n = M_TP_73B;

    /* DataStoreRead: '<S219>/TBW-PB-DI' */
    rtb_TBWPBDI_p = DI_PBSW_TBW;

    /* DataStoreRead: '<S219>/TKGW-PB-DI' */
    rtb_TKGWPBDI_f = DI_PBSW_TKGW;

    /* DataStoreRead: '<S219>/TBKW-PB-DI' */
    rtb_TBKWPBDI_c = DI_PBSW_TBKW;

    /* DataStoreRead: '<S219>/TWT-PB-DI' */
    rtb_TWTPBDI_e = DI_PBSW_TWT;

    /* DataStoreRead: '<S219>/TKW-PB-DI' */
    rtb_TKWPBDI_f = DI_PBSW_TKW;

    /* Outputs for Atomic SubSystem: '<S219>/POINT PB CONTROL' */
    D_SW_PB(rtb_W54PBDI, rtb_u3BTP_n, rtb_TBWPBDI_p, rtb_TKGWPBDI_f,
            rtb_TBKWPBDI_c, rtb_TWTPBDI_e, rtb_TKWPBDI_f,
            &NONVITALDEPOT_DW.POINTPBCONTROL_e, &NONVITALDEPOT_DW.M_NVCOMM_OK,
            &NONVITALDEPOT_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S219>/POINT PB CONTROL' */

    /* DataStoreWrite: '<S219>/W54-B-CTRL' */
    M_W54_CTRL_B = NONVITALDEPOT_DW.POINTPBCONTROL_e.AND4;

    /* DataStoreWrite: '<S219>/W54-CAL-CTRL' */
    M_W54_CTRL_CAL = NONVITALDEPOT_DW.POINTPBCONTROL_e.FixPtRelationalOperator;

    /* DataStoreWrite: '<S219>/W54-RST-CTRL' */
    M_W54_CTRL_RST = NONVITALDEPOT_DW.POINTPBCONTROL_e.AND5;

    /* DataStoreWrite: '<S219>/W54-SWRLSPB-CTRL' */
    M_W54_CTRL_SWRLS = NONVITALDEPOT_DW.POINTPBCONTROL_e.AND1;

    /* DataStoreWrite: '<S219>/W54-TRAIL-CTRL' */
    M_W54_CTRL_TRAIL = NONVITALDEPOT_DW.POINTPBCONTROL_e.AND6;

    /* DataStoreRead: '<S220>/W73B-PB-DI' */
    rtb_W73BPBDI = DI_PBW_73B;

    /* DataStoreRead: '<S220>/73B-TP' */
    rtb_u3BTP_j = M_TP_73B;

    /* DataStoreRead: '<S220>/TBW-PB-DI' */
    rtb_TBWPBDI_f = DI_PBSW_TBW;

    /* DataStoreRead: '<S220>/TKGW-PB-DI' */
    rtb_TKGWPBDI_a = DI_PBSW_TKGW;

    /* DataStoreRead: '<S220>/TBKW-PB-DI' */
    rtb_TBKWPBDI_p = DI_PBSW_TBKW;

    /* DataStoreRead: '<S220>/TWT-PB-DI' */
    rtb_TWTPBDI_k = DI_PBSW_TWT;

    /* DataStoreRead: '<S220>/TKW-PB-DI' */
    rtb_TKWPBDI_o = DI_PBSW_TKW;

    /* Outputs for Atomic SubSystem: '<S220>/POINT PB CONTROL' */
    D_SW_PB(rtb_W73BPBDI, rtb_u3BTP_j, rtb_TBWPBDI_f, rtb_TKGWPBDI_a,
            rtb_TBKWPBDI_p, rtb_TWTPBDI_k, rtb_TKWPBDI_o,
            &NONVITALDEPOT_DW.POINTPBCONTROL_a, &NONVITALDEPOT_DW.M_NVCOMM_OK,
            &NONVITALDEPOT_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S220>/POINT PB CONTROL' */

    /* DataStoreWrite: '<S220>/W73B-B-CTRL' */
    M_W73B_CTRL_B = NONVITALDEPOT_DW.POINTPBCONTROL_a.AND4;

    /* DataStoreWrite: '<S220>/W73B-CAL-CTRL' */
    M_W73B_CTRL_CAL = NONVITALDEPOT_DW.POINTPBCONTROL_a.FixPtRelationalOperator;

    /* DataStoreWrite: '<S220>/W73B-RST-CTRL' */
    M_W73B_CTRL_RST = NONVITALDEPOT_DW.POINTPBCONTROL_a.AND5;

    /* DataStoreWrite: '<S220>/W73B-SWRLSPB-CTRL' */
    M_W73B_CTRL_SWRLS = NONVITALDEPOT_DW.POINTPBCONTROL_a.AND1;

    /* DataStoreWrite: '<S220>/W73B-TRAIL-CTRL' */
    M_W73B_CTRL_TRAIL = NONVITALDEPOT_DW.POINTPBCONTROL_a.AND6;

    /* DataStoreRead: '<S229>/L14A-PB-DI' */
    rtb_L14APBDI = DI_PBJ_14A;

    /* DataStoreRead: '<S229>/X12-PB-DI' */
    rtb_X12PBDI = DI_PBX_12;

    /* DataStoreRead: '<S229>/X32-PB-DI' */
    rtb_X32PBDI = DI_PBX_32;

    /* Outputs for Atomic SubSystem: '<S229>/ROUTE PB CONTROL' */
    D_R_PB(rtb_L14APBDI, rtb_X12PBDI, rtb_X32PBDI,
           &NONVITALDEPOT_DW.ROUTEPBCONTROL, &NONVITALDEPOT_DW.M_NVCOMM_OK,
           &NONVITALDEPOT_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S229>/ROUTE PB CONTROL' */

    /* DataStoreWrite: '<S229>/L14A-X12-PB-CTRL' */
    M_PBCTRL_14_12 = NONVITALDEPOT_DW.ROUTEPBCONTROL.AND2;

    /* DataStoreWrite: '<S229>/L14A-X32-PB-CTRL' */
    M_PBCTRL_14_32 = NONVITALDEPOT_DW.ROUTEPBCONTROL.AND3;

    /* DataStoreRead: '<S230>/L72-PB-DI' */
    rtb_L72PBDI = DI_PBJ_72;

    /* DataStoreRead: '<S230>/L14B-PB-DI' */
    rtb_L14BPBDI = DI_PBJ_14B;

    /* DataStoreRead: '<S230>/X34-PB-DI' */
    rtb_X34PBDI = DI_PBX_34;

    /* Outputs for Atomic SubSystem: '<S230>/ROUTE PB CONTROL 1' */
    D_R_PB(rtb_L72PBDI, rtb_L14BPBDI, rtb_X34PBDI,
           &NONVITALDEPOT_DW.ROUTEPBCONTROL1, &NONVITALDEPOT_DW.M_NVCOMM_OK,
           &NONVITALDEPOT_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S230>/ROUTE PB CONTROL 1' */

    /* DataStoreWrite: '<S230>/L72-L14B-PB-CTRL' */
    M_PBCTRL_72_14 = NONVITALDEPOT_DW.ROUTEPBCONTROL1.AND2;

    /* DataStoreWrite: '<S230>/L72-X34-PB-CTRL' */
    M_PBCTRL_72_34 = NONVITALDEPOT_DW.ROUTEPBCONTROL1.AND3;

    /* DataStoreRead: '<S230>/X54-PB-DI1' */
    rtb_X54PBDI1 = DI_PBX_54;

    /* DataStoreRead: '<S230>/X74-PB-DI1' */
    rtb_X74PBDI1 = DI_PBX_74;

    /* Outputs for Atomic SubSystem: '<S230>/ROUTE PB CONTROL 2' */
    D_R_PB(rtb_L72PBDI, rtb_X54PBDI1, rtb_X74PBDI1,
           &NONVITALDEPOT_DW.ROUTEPBCONTROL2, &NONVITALDEPOT_DW.M_NVCOMM_OK,
           &NONVITALDEPOT_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S230>/ROUTE PB CONTROL 2' */

    /* DataStoreWrite: '<S230>/L72-X54-PB-CTRL' */
    M_PBCTRL_72_54 = NONVITALDEPOT_DW.ROUTEPBCONTROL2.AND2;

    /* DataStoreWrite: '<S230>/L72-X74-PB-CTRL' */
    M_PBCTRL_72_74 = NONVITALDEPOT_DW.ROUTEPBCONTROL2.AND3;

    /* DataStoreRead: '<S231>/L14B-PB-DI' */
    rtb_L14BPBDI_o = DI_PBJ_14B;

    /* DataStoreRead: '<S231>/12-PB-DI' */
    rtb_u2PBDI = DI_PBJ_12;

    /* DataStoreRead: '<S231>/32-PB-DI' */
    rtb_u2PBDI_f = DI_PBJ_32;

    /* Outputs for Atomic SubSystem: '<S231>/ROUTE PB CONTROL' */
    D_R_PB(rtb_L14BPBDI_o, rtb_u2PBDI, rtb_u2PBDI_f,
           &NONVITALDEPOT_DW.ROUTEPBCONTROL_p, &NONVITALDEPOT_DW.M_NVCOMM_OK,
           &NONVITALDEPOT_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S231>/ROUTE PB CONTROL' */

    /* DataStoreWrite: '<S231>/L12-L14B-PB-CTRL' */
    M_PBCTRL_12_14 = NONVITALDEPOT_DW.ROUTEPBCONTROL_p.AND2;

    /* DataStoreWrite: '<S231>/L32-L14B-PB-CTRL' */
    M_PBCTRL_32_14 = NONVITALDEPOT_DW.ROUTEPBCONTROL_p.AND3;

    /* DataStoreRead: '<S232>/X72-PB-DI' */
    rtb_X72PBDI = DI_PBX_72;

    /* DataStoreRead: '<S232>/L14A-PB-DI' */
    rtb_L14APBDI_j = DI_PBJ_14A;

    /* DataStoreRead: '<S232>/L34-PB-DI' */
    rtb_L34PBDI = DI_PBJ_34;

    /* Outputs for Atomic SubSystem: '<S232>/ROUTE PB CONTROL 1' */
    D_R_PB(rtb_X72PBDI, rtb_L14APBDI_j, rtb_L34PBDI,
           &NONVITALDEPOT_DW.ROUTEPBCONTROL1_i, &NONVITALDEPOT_DW.M_NVCOMM_OK,
           &NONVITALDEPOT_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S232>/ROUTE PB CONTROL 1' */

    /* DataStoreWrite: '<S232>/L14-X72-PB-CTRL' */
    M_PBCTRL_14_72 = NONVITALDEPOT_DW.ROUTEPBCONTROL1_i.AND2;

    /* DataStoreWrite: '<S232>/L34-X72-PB-CTRL' */
    M_PBCTRL_34_72 = NONVITALDEPOT_DW.ROUTEPBCONTROL1_i.AND3;

    /* DataStoreRead: '<S232>/L54-PB-DI1' */
    rtb_L54PBDI1 = DI_PBJ_54;

    /* DataStoreRead: '<S232>/L74-PB-DI1' */
    rtb_L74PBDI1 = DI_PBJ_74;

    /* Outputs for Atomic SubSystem: '<S232>/ROUTE PB CONTROL 2' */
    D_R_PB(rtb_X72PBDI, rtb_L54PBDI1, rtb_L74PBDI1,
           &NONVITALDEPOT_DW.ROUTEPBCONTROL2_f, &NONVITALDEPOT_DW.M_NVCOMM_OK,
           &NONVITALDEPOT_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S232>/ROUTE PB CONTROL 2' */

    /* DataStoreWrite: '<S232>/L54-X72-PB-CTRL' */
    M_PBCTRL_54_72 = NONVITALDEPOT_DW.ROUTEPBCONTROL2_f.AND2;

    /* DataStoreWrite: '<S232>/L74-X72-PB-CTRL' */
    M_PBCTRL_74_72 = NONVITALDEPOT_DW.ROUTEPBCONTROL2_f.AND3;

    /* DataStoreRead: '<S214>/OTOMATIS-PB-DI' */
    rtb_OTOMATISPBDI = DI_PBG_OTOMATIS;

    /* DataStoreRead: '<S214>/MANUAL-PB-DI' */
    rtb_MANUALPBDI = DI_PBG_MANUAL;

    /* DataStoreRead: '<S214>/L14B-PB-DI' */
    rtb_L14BPBDI_d = DI_PBJ_14B;

    /* Outputs for Atomic SubSystem: '<S214>/RUTE OTOMATIS' */
    D_R_AUTO(rtb_OTOMATISPBDI, rtb_MANUALPBDI, rtb_L14BPBDI_d,
             &NONVITALDEPOT_DW.RUTEOTOMATIS, &NONVITALDEPOT_DW.M_NVCOMM_OK,
             &NONVITALDEPOT_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S214>/RUTE OTOMATIS' */

    /* DataStoreWrite: '<S214>/L14B-AR-OK' */
    M_AR_L14B = NONVITALDEPOT_DW.RUTEOTOMATIS.AND5;

    /* DataStoreWrite: '<S214>/L14B-ARE-DO' */
    DO_INDAR_L14B = NONVITALDEPOT_DW.RUTEOTOMATIS.AND5;

    /* DataStoreRead: '<S240>/TPR-PB-DI' */
    rtb_TPRPBDI = DI_PBR_TPR;

    /* DataStoreRead: '<S240>/L14B-PB-DI' */
    rtb_L14BPBDI_p = DI_PBJ_14B;

    /* DataStoreRead: '<S240>/13-S-ES' */
    rtb_u3SES_ji = M_S_ES_13;

    /* Logic: '<S240>/OR2' */
    rtb_OR2_i = (M_RS_12_14 && M_RS_32_14 && M_RS_72_14);

    /* Outputs for Atomic SubSystem: '<S240>/EMERGENCY ROUTE RELEASE' */
    D_RRLS_X(rtb_TPRPBDI, rtb_L14BPBDI_p, rtb_u3SES_ji, rtb_OR2_i,
             &NONVITALDEPOT_DW.EMERGENCYROUTERELEASE,
             &NONVITALDEPOT_DW.M_NVCOMM_OK, &NONVITALDEPOT_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S240>/EMERGENCY ROUTE RELEASE' */

    /* DataStoreWrite: '<S240>/L14B-RRLSPB-CTRL' */
    M_CTRL_RRLS_14B = NONVITALDEPOT_DW.EMERGENCYROUTERELEASE.AND1;

    /* DataStoreRead: '<S241>/TPR-PB-DI' */
    rtb_TPRPBDI_e = DI_PBR_TPR;

    /* DataStoreRead: '<S241>/X12-PB-DI' */
    rtb_X12PBDI_f = DI_PBX_12;

    /* DataStoreRead: '<S241>/10B-S-WS' */
    rtb_u0BSWS = M_S_WS_13;

    /* DataStoreRead: '<S241>/L14A-X12-RS' */
    rtb_L14AX12RS_e = M_RS_14_12;

    /* Outputs for Atomic SubSystem: '<S241>/EMERGENCY ROUTE RELEASE' */
    D_RRLS_X(rtb_TPRPBDI_e, rtb_X12PBDI_f, rtb_u0BSWS, rtb_L14AX12RS_e,
             &NONVITALDEPOT_DW.EMERGENCYROUTERELEASE_o,
             &NONVITALDEPOT_DW.M_NVCOMM_OK, &NONVITALDEPOT_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S241>/EMERGENCY ROUTE RELEASE' */

    /* DataStoreWrite: '<S241>/X12-RRLSPB-CTRL' */
    M_CTRL_RRLS_12 = NONVITALDEPOT_DW.EMERGENCYROUTERELEASE_o.AND1;

    /* DataStoreRead: '<S242>/TPR-PB-DI' */
    rtb_TPRPBDI_g = DI_PBR_TPR;

    /* DataStoreRead: '<S242>/X32-PB-DI' */
    rtb_X32PBDI_b = DI_PBX_32;

    /* DataStoreRead: '<S242>/10B-S-WS' */
    rtb_u0BSWS_e = M_S_WS_13;

    /* DataStoreRead: '<S242>/L14A-X32-RS' */
    rtb_L14AX32RS_o = M_RS_14_32;

    /* Outputs for Atomic SubSystem: '<S242>/EMERGENCY ROUTE RELEASE' */
    D_RRLS_X(rtb_TPRPBDI_g, rtb_X32PBDI_b, rtb_u0BSWS_e, rtb_L14AX32RS_o,
             &NONVITALDEPOT_DW.EMERGENCYROUTERELEASE_d,
             &NONVITALDEPOT_DW.M_NVCOMM_OK, &NONVITALDEPOT_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S242>/EMERGENCY ROUTE RELEASE' */

    /* DataStoreWrite: '<S242>/X32-RRLSPB-CTRL' */
    M_CTRL_RRLS_32 = NONVITALDEPOT_DW.EMERGENCYROUTERELEASE_d.AND1;

    /* DataStoreRead: '<S243>/TPR-PB-DI' */
    rtb_TPRPBDI_l = DI_PBR_TPR;

    /* DataStoreRead: '<S243>/X34-PB-DI' */
    rtb_X34PBDI_a = DI_PBX_34;

    /* DataStoreRead: '<S243>/73B-S-ES' */
    rtb_u3BSES_mm = M_S_ES_73B;

    /* DataStoreRead: '<S243>/L72-X34-RS' */
    rtb_L72X34RS_b = M_RS_72_34;

    /* Outputs for Atomic SubSystem: '<S243>/EMERGENCY ROUTE RELEASE' */
    D_RRLS_X(rtb_TPRPBDI_l, rtb_X34PBDI_a, rtb_u3BSES_mm, rtb_L72X34RS_b,
             &NONVITALDEPOT_DW.EMERGENCYROUTERELEASE_p,
             &NONVITALDEPOT_DW.M_NVCOMM_OK, &NONVITALDEPOT_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S243>/EMERGENCY ROUTE RELEASE' */

    /* DataStoreWrite: '<S243>/X34-RRLSPB-CTRL' */
    M_CTRL_RRLS_34 = NONVITALDEPOT_DW.EMERGENCYROUTERELEASE_p.AND1;

    /* DataStoreRead: '<S244>/TPR-PB-DI' */
    rtb_TPRPBDI_c = DI_PBR_TPR;

    /* DataStoreRead: '<S244>/X54-PB-DI' */
    rtb_X54PBDI = DI_PBX_54;

    /* DataStoreRead: '<S244>/73B-S-ES' */
    rtb_u3BSES_o = M_S_ES_73B;

    /* DataStoreRead: '<S244>/L72-X54-RS' */
    rtb_L72X54RS_a = M_RS_72_54;

    /* Outputs for Atomic SubSystem: '<S244>/EMERGENCY ROUTE RELEASE' */
    D_RRLS_X(rtb_TPRPBDI_c, rtb_X54PBDI, rtb_u3BSES_o, rtb_L72X54RS_a,
             &NONVITALDEPOT_DW.EMERGENCYROUTERELEASE_m,
             &NONVITALDEPOT_DW.M_NVCOMM_OK, &NONVITALDEPOT_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S244>/EMERGENCY ROUTE RELEASE' */

    /* DataStoreWrite: '<S244>/X54-RRLSPB-CTRL' */
    M_CTRL_RRLS_54 = NONVITALDEPOT_DW.EMERGENCYROUTERELEASE_m.AND1;

    /* DataStoreRead: '<S245>/TPR-PB-DI' */
    rtb_TPRPBDI_gk = DI_PBR_TPR;

    /* DataStoreRead: '<S245>/X72-PB-DI' */
    rtb_X72PBDI_k = DI_PBX_72;

    /* DataStoreRead: '<S245>/73A-S-WS' */
    rtb_u3ASWS_o = M_S_WS_73A;

    /* Logic: '<S245>/OR2' */
    rtb_OR2_fn = (M_RS_14_72 && M_RS_34_72 && M_RS_54_72 && M_RS_74_72);

    /* Outputs for Atomic SubSystem: '<S245>/EMERGENCY ROUTE RELEASE' */
    D_RRLS_X(rtb_TPRPBDI_gk, rtb_X72PBDI_k, rtb_u3ASWS_o, rtb_OR2_fn,
             &NONVITALDEPOT_DW.EMERGENCYROUTERELEASE_k,
             &NONVITALDEPOT_DW.M_NVCOMM_OK, &NONVITALDEPOT_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S245>/EMERGENCY ROUTE RELEASE' */

    /* DataStoreWrite: '<S245>/X72-RRLSPB-CTRL' */
    M_CTRL_RRLS_72 = NONVITALDEPOT_DW.EMERGENCYROUTERELEASE_k.AND1;

    /* DataStoreRead: '<S246>/TPR-PB-DI' */
    rtb_TPRPBDI_cw = DI_PBR_TPR;

    /* DataStoreRead: '<S246>/X74-PB-DI' */
    rtb_X74PBDI = DI_PBX_74;

    /* DataStoreRead: '<S246>/73B-S-ES' */
    rtb_u3BSES_nq = M_S_ES_73B;

    /* DataStoreRead: '<S246>/L72-X74-RS' */
    rtb_L72X74RS_o = M_RS_72_74;

    /* Outputs for Atomic SubSystem: '<S246>/EMERGENCY ROUTE RELEASE' */
    D_RRLS_X(rtb_TPRPBDI_cw, rtb_X74PBDI, rtb_u3BSES_nq, rtb_L72X74RS_o,
             &NONVITALDEPOT_DW.EMERGENCYROUTERELEASE_a,
             &NONVITALDEPOT_DW.M_NVCOMM_OK, &NONVITALDEPOT_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S246>/EMERGENCY ROUTE RELEASE' */

    /* DataStoreWrite: '<S246>/X74-RRLSPB-CTRL' */
    M_CTRL_RRLS_74 = NONVITALDEPOT_DW.EMERGENCYROUTERELEASE_a.AND1;

    /* DataStoreWrite: '<S216>/L12-RST-CTRL' incorporates:
     *  DataStoreRead: '<S216>/COMM-OK'
     *  DataStoreRead: '<S216>/VDR'
     *  Logic: '<S216>/AND4'
     */
    M_CTRL_RST_12 = (DI_PBR_TPR && DI_PBJ_12 && NONVITALDEPOT_DW.M_NVCOMM_OK &&
                     NONVITALDEPOT_DW.M_VDR);

    /* DataStoreWrite: '<S216>/L14A-RST-CTRL' incorporates:
     *  DataStoreRead: '<S216>/COMM-OK'
     *  DataStoreRead: '<S216>/VDR'
     *  Logic: '<S216>/AND3'
     */
    M_CTRL_RST_14A = (DI_PBR_TPR && DI_PBJ_14A && NONVITALDEPOT_DW.M_NVCOMM_OK &&
                      NONVITALDEPOT_DW.M_VDR);

    /* DataStoreWrite: '<S216>/L32-RST-CTRL' incorporates:
     *  DataStoreRead: '<S216>/COMM-OK'
     *  DataStoreRead: '<S216>/VDR'
     *  Logic: '<S216>/AND5'
     */
    M_CTRL_RST_32 = (DI_PBR_TPR && DI_PBJ_32 && NONVITALDEPOT_DW.M_NVCOMM_OK &&
                     NONVITALDEPOT_DW.M_VDR);

    /* DataStoreWrite: '<S216>/L34-RST-CTRL' incorporates:
     *  DataStoreRead: '<S216>/COMM-OK'
     *  DataStoreRead: '<S216>/VDR'
     *  Logic: '<S216>/AND7'
     */
    M_CTRL_RST_34 = (DI_PBR_TPR && DI_PBJ_34 && NONVITALDEPOT_DW.M_NVCOMM_OK &&
                     NONVITALDEPOT_DW.M_VDR);

    /* DataStoreWrite: '<S216>/L54-RST-CTRL' incorporates:
     *  DataStoreRead: '<S216>/COMM-OK'
     *  DataStoreRead: '<S216>/VDR'
     *  Logic: '<S216>/AND8'
     */
    M_CTRL_RST_54 = (DI_PBR_TPR && DI_PBJ_54 && NONVITALDEPOT_DW.M_NVCOMM_OK &&
                     NONVITALDEPOT_DW.M_VDR);

    /* DataStoreWrite: '<S216>/L72-RST-CTRL' incorporates:
     *  DataStoreRead: '<S216>/COMM-OK'
     *  DataStoreRead: '<S216>/VDR'
     *  Logic: '<S216>/AND6'
     */
    M_CTRL_RST_72 = (DI_PBR_TPR && DI_PBJ_72 && NONVITALDEPOT_DW.M_NVCOMM_OK &&
                     NONVITALDEPOT_DW.M_VDR);

    /* DataStoreWrite: '<S216>/L74-RST-CTRL' incorporates:
     *  DataStoreRead: '<S216>/COMM-OK'
     *  DataStoreRead: '<S216>/VDR'
     *  Logic: '<S216>/AND9'
     */
    M_CTRL_RST_74 = (DI_PBR_TPR && DI_PBJ_74 && NONVITALDEPOT_DW.M_NVCOMM_OK &&
                     NONVITALDEPOT_DW.M_VDR);

    /* DataStoreRead: '<S254>/AA-CTRL' */
    rtb_AACTRL = DI_PBG_THB;

    /* DataStoreRead: '<S254>/W13A-TRAIL-CTRL' */
    rtb_W13ATRAILCTRL_g = M_W13A_CTRL_TRAIL;

    /* DataStoreRead: '<S254>/W13A-RST-CTRL' */
    rtb_W13ARSTCTRL_e = M_W13A_CTRL_RST;

    /* DataStoreRead: '<S254>/W13A-LS' */
    rtb_W13ALS_h = M_W13A_LS;

    /* DataStoreRead: '<S254>/W13A-BACK-TO-N' */
    rtb_W13ABACKTON = M_W13A_BACK_TO_N;

    /* DataStoreRead: '<S254>/W13A-BACK-TO-R' */
    rtb_W13ABACKTOR = M_W13A_BACK_TO_R;

    /* DataStoreRead: '<S254>/W13A-NWP' */
    rtb_W13ANWP_a = M_W13A_NWP;

    /* DataStoreRead: '<S254>/W13A-RWP' */
    rtb_W13ARWP_p = M_W13A_RWP;

    /* DataStoreRead: '<S254>/W13A-NWC' */
    rtb_W13ANWC_f = M_W13A_NWC;

    /* DataStoreRead: '<S254>/W13A-RWC' */
    rtb_W13ARWC_p = M_W13A_RWC;

    /* DataStoreRead: '<S254>/W13A-NW-TE' */
    rtb_W13ANWTE_l = M_W13A_NW_TE;

    /* DataStoreRead: '<S254>/W13A-RW-TE' */
    rtb_W13ARWTE_c = M_W13A_RW_TE;

    /* DataStoreRead: '<S254>/W13A-BLOCK' */
    rtb_W13ABLOCK_a = M_W13A_BLOCK;

    /* DataStoreRead: '<S254>/W13A-N-BLOCK' */
    rtb_W13ANBLOCK = M_W13A_N_BLOCK;

    /* DataStoreRead: '<S254>/W13A-R-BLOCK' */
    rtb_W13ARBLOCK = M_W13A_R_BLOCK;
  }

  /* Outputs for Atomic SubSystem: '<S254>/POINT FAIL' */
  D_POINT_FAIL(NONVITALDEPOT_M, rtb_AACTRL, rtb_W13ATRAILCTRL_g,
               rtb_W13ARSTCTRL_e, rtb_W13ALS_h, rtb_W13ABACKTON, rtb_W13ABACKTOR,
               rtb_W13ANWP_a, rtb_W13ARWP_p, rtb_W13ANWC_f, rtb_W13ARWC_p,
               rtb_W13ANWTE_l, rtb_W13ARWTE_c, rtb_W13ABLOCK_a, rtb_W13ANBLOCK,
               rtb_W13ARBLOCK, &NONVITALDEPOT_DW.POINTFAIL);

  /* End of Outputs for SubSystem: '<S254>/POINT FAIL' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S254>/W13A-F-ACK' */
    M_W13A_F_ACK = NONVITALDEPOT_DW.POINTFAIL.OR9;

    /* DataStoreWrite: '<S254>/W13A-FAIL' */
    M_W13A_FAIL = NONVITALDEPOT_DW.POINTFAIL.OR8;

    /* DataStoreWrite: '<S254>/W13A-OOC' */
    M_W13A_OOC = NONVITALDEPOT_DW.POINTFAIL.M7;

    /* DataStoreWrite: '<S254>/W13A-OOC-RD' */
    M_W13A_OOC_RD = NONVITALDEPOT_DW.POINTFAIL.M8;

    /* DataStoreWrite: '<S254>/W13A-TRAIL-CTRL-Z' */
    M_W13A_CTRL_TRAIL_Z = NONVITALDEPOT_DW.POINTFAIL.M6;

    /* DataStoreRead: '<S255>/AA-CTRL' */
    rtb_AACTRL_m = M_CTRL_AA;

    /* DataStoreRead: '<S255>/W13B//73A-TRAIL-CTRL' */
    rtb_W13B73ATRAILCTRL_a = M_W13B_73A_CTRL_TRAIL;

    /* DataStoreRead: '<S255>/W13B//73A-RST-CTRL' */
    rtb_W13B73ARSTCTRL_p = M_W13B_73A_CTRL_RST;

    /* DataStoreRead: '<S255>/W13B//73A-LS' */
    rtb_W13B73ALS_o = M_W13B_73A_LS;

    /* DataStoreRead: '<S255>/W13B//73A-BACK-TO-N' */
    rtb_W13B73ABACKTON = M_W13B_73A_BACK_TO_N;

    /* DataStoreRead: '<S255>/W13B//73A-BACK-TO-R' */
    rtb_W13B73ABACKTOR = M_W13B_73A_BACK_TO_R;

    /* DataStoreRead: '<S255>/W13B//73A-NWP' */
    rtb_W13B73ANWP_h = M_W13B_73A_NWP;

    /* DataStoreRead: '<S255>/W13B//73A-RWP' */
    rtb_W13B73ARWP_dl = M_W13B_73A_RWP;

    /* DataStoreRead: '<S255>/W13B//73A-NWC' */
    rtb_W13B73ANWC_i = M_W13B_73A_NWC;

    /* DataStoreRead: '<S255>/W13B//73A-RWC' */
    rtb_W13B73ARWC_kw = M_W13B_73A_RWC;

    /* DataStoreRead: '<S255>/W13B//73A-NW-TE' */
    rtb_W13B73ANWTE_g = M_W13B_73A_NW_TE;

    /* DataStoreRead: '<S255>/W13B//73A-RW-TE' */
    rtb_W13B73ARWTE_k = M_W13B_73A_RW_TE;

    /* DataStoreRead: '<S255>/W13B//73A-BLOCK' */
    rtb_W13B73ABLOCK_b = M_W13B_73A_BLOCK;

    /* DataStoreRead: '<S255>/W13B//73A-N-BLOCK' */
    rtb_W13B73ANBLOCK = M_W13B_73A_N_BLOCK;

    /* DataStoreRead: '<S255>/W13B//73A-R-BLOCK' */
    rtb_W13B73ARBLOCK = M_W13B_73A_R_BLOCK;
  }

  /* Outputs for Atomic SubSystem: '<S255>/POINT FAIL' */
  D_POINT_FAIL(NONVITALDEPOT_M, rtb_AACTRL_m, rtb_W13B73ATRAILCTRL_a,
               rtb_W13B73ARSTCTRL_p, rtb_W13B73ALS_o, rtb_W13B73ABACKTON,
               rtb_W13B73ABACKTOR, rtb_W13B73ANWP_h, rtb_W13B73ARWP_dl,
               rtb_W13B73ANWC_i, rtb_W13B73ARWC_kw, rtb_W13B73ANWTE_g,
               rtb_W13B73ARWTE_k, rtb_W13B73ABLOCK_b, rtb_W13B73ANBLOCK,
               rtb_W13B73ARBLOCK, &NONVITALDEPOT_DW.POINTFAIL_e);

  /* End of Outputs for SubSystem: '<S255>/POINT FAIL' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S255>/W13B//73A-F-ACK' */
    M_W13B_73A_F_ACK = NONVITALDEPOT_DW.POINTFAIL_e.OR9;

    /* DataStoreWrite: '<S255>/W13B//73A-FAIL' */
    M_W13B_73A_FAIL = NONVITALDEPOT_DW.POINTFAIL_e.OR8;

    /* DataStoreWrite: '<S255>/W13B//73A-OOC' */
    M_W13B_73A_OOC = NONVITALDEPOT_DW.POINTFAIL_e.M7;

    /* DataStoreWrite: '<S255>/W13B//73A-OOC-RD' */
    M_W13B_73A_OOC_RD = NONVITALDEPOT_DW.POINTFAIL_e.M8;

    /* DataStoreWrite: '<S255>/W13B//73A-TRAIL-CTRL-Z' */
    M_W13B_73A_CTRL_TRAIL_Z = NONVITALDEPOT_DW.POINTFAIL_e.M6;

    /* DataStoreRead: '<S256>/AA-CTRL' */
    rtb_AACTRL_i = M_CTRL_AA;

    /* DataStoreRead: '<S256>/W54-TRAIL-CTRL' */
    rtb_W54TRAILCTRL_d = M_W54_CTRL_TRAIL;

    /* DataStoreRead: '<S256>/W54-RST-CTRL' */
    rtb_W54RSTCTRL_i = M_W54_CTRL_RST;

    /* DataStoreRead: '<S256>/W54-LS' */
    rtb_W54LS_d = M_W54_LS;

    /* DataStoreRead: '<S256>/W54-BACK-TO-N' */
    rtb_W54BACKTON = M_W54_BACK_TO_N;

    /* DataStoreRead: '<S256>/W54-BACK-TO-R' */
    rtb_W54BACKTOR = M_W54_BACK_TO_R;

    /* DataStoreRead: '<S256>/W54-NWP' */
    rtb_W54NWP_i = M_W54_NWP;

    /* DataStoreRead: '<S256>/W54-RWP' */
    rtb_W54RWP_d = M_W54_RWP;

    /* DataStoreRead: '<S256>/W54-NWC' */
    rtb_W54NWC_o = M_W54_NWC;

    /* DataStoreRead: '<S256>/W54-RWC' */
    rtb_W54RWC_n = M_W54_RWC;

    /* DataStoreRead: '<S256>/W54-NW-TE' */
    rtb_W54NWTE_c = M_W54_NW_TE;

    /* DataStoreRead: '<S256>/W54-RW-TE' */
    rtb_W54RWTE_b = M_W54_RW_TE;

    /* DataStoreRead: '<S256>/W54-BLOCK' */
    rtb_W54BLOCK_n = M_W54_BLOCK;

    /* DataStoreRead: '<S256>/W54-N-BLOCK' */
    rtb_W54NBLOCK = M_W54_N_BLOCK;

    /* DataStoreRead: '<S256>/W54-R-BLOCK' */
    rtb_W54RBLOCK = M_W54_R_BLOCK;
  }

  /* Outputs for Atomic SubSystem: '<S256>/POINT FAIL' */
  D_POINT_FAIL(NONVITALDEPOT_M, rtb_AACTRL_i, rtb_W54TRAILCTRL_d,
               rtb_W54RSTCTRL_i, rtb_W54LS_d, rtb_W54BACKTON, rtb_W54BACKTOR,
               rtb_W54NWP_i, rtb_W54RWP_d, rtb_W54NWC_o, rtb_W54RWC_n,
               rtb_W54NWTE_c, rtb_W54RWTE_b, rtb_W54BLOCK_n, rtb_W54NBLOCK,
               rtb_W54RBLOCK, &NONVITALDEPOT_DW.POINTFAIL_k);

  /* End of Outputs for SubSystem: '<S256>/POINT FAIL' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S256>/W54-F-ACK' */
    M_W54_F_ACK = NONVITALDEPOT_DW.POINTFAIL_k.OR9;

    /* DataStoreWrite: '<S256>/W54-FAIL' */
    M_W54_FAIL = NONVITALDEPOT_DW.POINTFAIL_k.OR8;

    /* DataStoreWrite: '<S256>/W54-OOC' */
    M_W54_OOC = NONVITALDEPOT_DW.POINTFAIL_k.M7;

    /* DataStoreWrite: '<S256>/W54-OOC-RD' */
    M_W54_OOC_RD = NONVITALDEPOT_DW.POINTFAIL_k.M8;

    /* DataStoreWrite: '<S256>/W54-TRAIL-CTRL-Z' */
    M_W54_CTRL_TRAIL_Z = NONVITALDEPOT_DW.POINTFAIL_k.M6;

    /* DataStoreRead: '<S257>/AA-CTRL' */
    rtb_AACTRL_b = M_CTRL_AA;

    /* DataStoreRead: '<S257>/W73B-TRAIL-CTRL' */
    rtb_W73BTRAILCTRL_e = M_W73B_CTRL_TRAIL;

    /* DataStoreRead: '<S257>/W73B-RST-CTRL' */
    rtb_W73BRSTCTRL_m = M_W73B_CTRL_RST;

    /* DataStoreRead: '<S257>/W73B-LS' */
    rtb_W73BLS_h = M_W73B_LS;

    /* DataStoreRead: '<S257>/W73B-BACK-TO-N' */
    rtb_W73BBACKTON = M_W73B_BACK_TO_N;

    /* DataStoreRead: '<S257>/W73B-BACK-TO-R' */
    rtb_W73BBACKTOR = M_W73B_BACK_TO_R;

    /* DataStoreRead: '<S257>/W73B-NWP' */
    rtb_W73BNWP_k = M_W73B_NWP;

    /* DataStoreRead: '<S257>/W73B-RWP' */
    rtb_W73BRWP_b = M_W73B_RWP;

    /* DataStoreRead: '<S257>/W73B-NWC' */
    rtb_W73BNWC_i = M_W73B_NWC;

    /* DataStoreRead: '<S257>/W73B-RWC' */
    rtb_W73BRWC_p = M_W73B_RWC;

    /* DataStoreRead: '<S257>/W73B-NW-TE' */
    rtb_W73BNWTE_j = M_W73B_NW_TE;

    /* DataStoreRead: '<S257>/W73B-RW-TE' */
    rtb_W73BRWTE_e = M_W73B_RW_TE;

    /* DataStoreRead: '<S257>/W73B-BLOCK' */
    rtb_W73BBLOCK_l = M_W73B_BLOCK;

    /* DataStoreRead: '<S257>/W73B-N-BLOCK' */
    rtb_W73BNBLOCK = M_W73B_N_BLOCK;

    /* DataStoreRead: '<S257>/W73B-R-BLOCK' */
    rtb_W73BRBLOCK = M_W73B_R_BLOCK;
  }

  /* Outputs for Atomic SubSystem: '<S257>/POINT FAIL' */
  D_POINT_FAIL(NONVITALDEPOT_M, rtb_AACTRL_b, rtb_W73BTRAILCTRL_e,
               rtb_W73BRSTCTRL_m, rtb_W73BLS_h, rtb_W73BBACKTON, rtb_W73BBACKTOR,
               rtb_W73BNWP_k, rtb_W73BRWP_b, rtb_W73BNWC_i, rtb_W73BRWC_p,
               rtb_W73BNWTE_j, rtb_W73BRWTE_e, rtb_W73BBLOCK_l, rtb_W73BNBLOCK,
               rtb_W73BRBLOCK, &NONVITALDEPOT_DW.POINTFAIL_c);

  /* End of Outputs for SubSystem: '<S257>/POINT FAIL' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S257>/W73B-F-ACK' */
    M_W73B_F_ACK = NONVITALDEPOT_DW.POINTFAIL_c.OR9;

    /* DataStoreWrite: '<S257>/W73B-FAIL' */
    M_W73B_FAIL = NONVITALDEPOT_DW.POINTFAIL_c.OR8;

    /* DataStoreWrite: '<S257>/W73B-OOC' */
    M_W73B_OOC = NONVITALDEPOT_DW.POINTFAIL_c.M7;

    /* DataStoreWrite: '<S257>/W73B-OOC-RD' */
    M_W73B_OOC_RD = NONVITALDEPOT_DW.POINTFAIL_c.M8;

    /* DataStoreWrite: '<S257>/W73B-TRAIL-CTRL-Z' */
    NONVITALDEPOT_DW.M_W73B_CTRL_TRAIL_Z = NONVITALDEPOT_DW.POINTFAIL_c.M6;

    /* Logic: '<S282>/AND1' incorporates:
     *  DataStoreWrite: '<S257>/W73B-TRAIL-CTRL-Z'
     */
    NONVITALDEPOT_DW.AND1_p = (M_W13A_CTRL_TRAIL_Z || M_W13B_73A_CTRL_TRAIL_Z ||
      M_W54_CTRL_TRAIL_Z || NONVITALDEPOT_DW.POINTFAIL_c.M6);
  }

  /* Outputs for Atomic SubSystem: '<S282>/DNV_TOF' */
  DNV_TOF(NONVITALDEPOT_M, NONVITALDEPOT_DW.AND1_p, &NONVITALDEPOT_DW.DNV_TOF_a,
          1.0);

  /* End of Outputs for SubSystem: '<S282>/DNV_TOF' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S282>/TWT-CT-DO' incorporates:
     *  SignalConversion: '<S282>/TmpSignal ConversionAtDNV_TOFOutport1'
     */
    DO_CT_TWT = NONVITALDEPOT_DW.DNV_TOF_a.LogicalOperator4;

    /* Logic: '<S283>/AND1' */
    AND1_m = (M_W13A_SWRLS || M_W13B_73A_SWRLS || M_W54_SWRLS || M_W73B_SWRLS);

    /* RelationalOperator: '<S291>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S291>/Delay Input1'
     *
     * Block description for '<S291>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALDEPOT_DW.FixPtRelationalOperator = ((int32_T)AND1_m > (int32_T)
      NONVITALDEPOT_DW.DelayInput1_DSTATE);
  }

  /* Outputs for Atomic SubSystem: '<S283>/DNV_TOF' */
  DNV_TOF(NONVITALDEPOT_M, NONVITALDEPOT_DW.FixPtRelationalOperator,
          &NONVITALDEPOT_DW.DNV_TOF_fn, 1.0);

  /* End of Outputs for SubSystem: '<S283>/DNV_TOF' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S283>/TBW-CT-DO' incorporates:
     *  SignalConversion: '<S283>/TmpSignal ConversionAtDNV_TOFOutport1'
     */
    DO_CT_TBW = NONVITALDEPOT_DW.DNV_TOF_fn.LogicalOperator4;

    /* Logic: '<S284>/AND14' incorporates:
     *  Logic: '<S284>/AND1'
     *  Logic: '<S284>/AND10'
     *  Logic: '<S284>/AND11'
     *  Logic: '<S284>/AND13'
     *  Logic: '<S284>/AND2'
     *  Logic: '<S284>/AND7'
     *  Logic: '<S284>/AND8'
     *  Logic: '<S284>/AND9'
     */
    AND14 = ((M_CTRL_RST_12 && M_DO_L12_GR) || (M_CTRL_RST_32 && M_DO_L32_GR) ||
             (M_CTRL_RST_72 && M_DO_L72_GR) || (M_CTRL_RST_34 && M_DO_L34_GR) ||
             (M_CTRL_RST_54 && M_DO_L54_GR) || (M_CTRL_RST_74 && M_DO_L74_GR) ||
             (M_CTRL_RST_14A && M_DO_L14A_GR) || M_RRLS_12 || M_RRLS_32 ||
             M_RRLS_72 || M_RRLS_34 || M_RRLS_54 || M_RRLS_74 || M_RRLS_14B);

    /* RelationalOperator: '<S297>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S297>/Delay Input1'
     *
     * Block description for '<S297>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALDEPOT_DW.FixPtRelationalOperator_i = ((int32_T)AND14 > (int32_T)
      NONVITALDEPOT_DW.DelayInput1_DSTATE_p);
  }

  /* Outputs for Atomic SubSystem: '<S284>/DNV_TOF' */
  DNV_TOF(NONVITALDEPOT_M, NONVITALDEPOT_DW.FixPtRelationalOperator_i,
          &NONVITALDEPOT_DW.DNV_TOF_h, 1.0);

  /* End of Outputs for SubSystem: '<S284>/DNV_TOF' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S284>/TPR-CT-DO' incorporates:
     *  SignalConversion: '<S284>/TmpSignal ConversionAtDNV_TOFOutport1'
     */
    DO_CT_TPR = NONVITALDEPOT_DW.DNV_TOF_h.LogicalOperator4;

    /* DataStoreRead: '<S302>/L12-L14B-CTRL' */
    rtb_L12L14BCTRL = M_PBCTRL_12_14;

    /* DataStoreRead: '<S302>/L12-RST-CTRL' */
    rtb_L12RSTCTRL_l = M_CTRL_RST_12;

    /* DataStoreRead: '<S302>/L12-L14B-B' */
    rtb_L12L14BB = M_B_12_14;

    /* DataStoreRead: '<S302>/13-TP' */
    rtb_u3TP_m = M_TP_13;

    /* DataStoreRead: '<S302>/13-TPBP' */
    rtb_u3TPBP = M_TPBP_13;

    /* DataStoreRead: '<S302>/L12-S-B' */
    rtb_L12SB = M_B_L12;

    /* Outputs for Atomic SubSystem: '<S302>/ROUTE REQUEST' */
    D_REQ(rtb_L12L14BCTRL, rtb_L12RSTCTRL_l, rtb_L12L14BB, rtb_u3TP_m,
          rtb_u3TPBP, rtb_L12SB, &NONVITALDEPOT_DW.ROUTEREQUEST);

    /* End of Outputs for SubSystem: '<S302>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S302>/L12-L14B-RS' */
    M_RS_12_14 = NONVITALDEPOT_DW.ROUTEREQUEST.Memory1;

    /* DataStoreWrite: '<S302>/L12-L14B-S-REQ' */
    M_REQ_S_12_14 = NONVITALDEPOT_DW.ROUTEREQUEST.OR5;

    /* DataStoreRead: '<S303>/L14A-X12-CTRL' */
    rtb_L14AX12CTRL = M_PBCTRL_14_12;

    /* DataStoreRead: '<S303>/L14A-RST-CTRL' */
    rtb_L14ARSTCTRL_a = M_CTRL_RST_14A;

    /* DataStoreRead: '<S303>/L14A-X12-B' */
    rtb_L14AX12B = M_B_14_12;

    /* DataStoreRead: '<S303>/13-TP' */
    rtb_u3TP_o = M_TP_13;

    /* DataStoreRead: '<S303>/13-TPBP' */
    rtb_u3TPBP_m = M_TPBP_13;

    /* DataStoreRead: '<S303>/L14A-S-B' */
    rtb_L14ASB = M_B_L14A;

    /* Outputs for Atomic SubSystem: '<S303>/ROUTE REQUEST' */
    D_REQ(rtb_L14AX12CTRL, rtb_L14ARSTCTRL_a, rtb_L14AX12B, rtb_u3TP_o,
          rtb_u3TPBP_m, rtb_L14ASB, &NONVITALDEPOT_DW.ROUTEREQUEST_o);

    /* End of Outputs for SubSystem: '<S303>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S303>/L14A-X12-RS' */
    M_RS_14_12 = NONVITALDEPOT_DW.ROUTEREQUEST_o.Memory1;

    /* DataStoreWrite: '<S303>/L14A-X12-S-REQ' */
    M_REQ_S_14_12 = NONVITALDEPOT_DW.ROUTEREQUEST_o.OR5;

    /* DataStoreRead: '<S304>/L14A-X32-CTRL' */
    rtb_L14AX32CTRL = M_PBCTRL_14_32;

    /* DataStoreRead: '<S304>/L14A-RST-CTRL' */
    rtb_L14ARSTCTRL_p = M_CTRL_RST_14A;

    /* DataStoreRead: '<S304>/L14A-X32-B' */
    rtb_L14AX32B = M_B_14_32;

    /* DataStoreRead: '<S304>/13-TP' */
    rtb_u3TP_cd = M_TP_13;

    /* DataStoreRead: '<S304>/13-TPBP' */
    rtb_u3TPBP_l = M_TPBP_13;

    /* DataStoreRead: '<S304>/L14A-S-B' */
    rtb_L14ASB_m = M_B_L14A;

    /* Outputs for Atomic SubSystem: '<S304>/ROUTE REQUEST' */
    D_REQ(rtb_L14AX32CTRL, rtb_L14ARSTCTRL_p, rtb_L14AX32B, rtb_u3TP_cd,
          rtb_u3TPBP_l, rtb_L14ASB_m, &NONVITALDEPOT_DW.ROUTEREQUEST_c);

    /* End of Outputs for SubSystem: '<S304>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S304>/L14A-X32-RS' */
    M_RS_14_32 = NONVITALDEPOT_DW.ROUTEREQUEST_c.Memory1;

    /* DataStoreWrite: '<S304>/L14A-X32-S-REQ' */
    M_REQ_S_14_32 = NONVITALDEPOT_DW.ROUTEREQUEST_c.OR5;

    /* DataStoreRead: '<S305>/L14A-X72-CTRL' */
    rtb_L14AX72CTRL = M_PBCTRL_14_72;

    /* DataStoreRead: '<S305>/L14A-RST-CTRL' */
    rtb_L14ARSTCTRL_i = M_CTRL_RST_14A;

    /* DataStoreRead: '<S305>/L14A-X72-B' */
    rtb_L14AX72B = M_B_14_72;

    /* DataStoreRead: '<S305>/13-TP' */
    rtb_u3TP_l = M_TP_13;

    /* DataStoreRead: '<S305>/13-TPBP' */
    rtb_u3TPBP_d = M_TPBP_13;

    /* DataStoreRead: '<S305>/L14A-S-B' */
    rtb_L14ASB_o = M_B_L14A;

    /* Outputs for Atomic SubSystem: '<S305>/ROUTE REQUEST' */
    D_REQ(rtb_L14AX72CTRL, rtb_L14ARSTCTRL_i, rtb_L14AX72B, rtb_u3TP_l,
          rtb_u3TPBP_d, rtb_L14ASB_o, &NONVITALDEPOT_DW.ROUTEREQUEST_or);

    /* End of Outputs for SubSystem: '<S305>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S305>/L14A-X72-RS' */
    M_RS_14_72 = NONVITALDEPOT_DW.ROUTEREQUEST_or.Memory1;

    /* DataStoreWrite: '<S305>/L14A-X72-S-REQ' */
    M_REQ_S_14_72 = NONVITALDEPOT_DW.ROUTEREQUEST_or.OR5;

    /* DataStoreRead: '<S306>/L32-L14B-CTRL' */
    rtb_L32L14BCTRL = M_PBCTRL_32_14;

    /* DataStoreRead: '<S306>/L32-RST-CTRL' */
    rtb_L32RSTCTRL_d = M_CTRL_RST_32;

    /* DataStoreRead: '<S306>/L32-L14B-B' */
    rtb_L32L14BB = M_B_32_14;

    /* DataStoreRead: '<S306>/13-TP' */
    rtb_u3TP_e = M_TP_13;

    /* DataStoreRead: '<S306>/13-TPBP' */
    rtb_u3TPBP_b = M_TPBP_13;

    /* DataStoreRead: '<S306>/L32-S-B' */
    rtb_L32SB = M_B_L32;

    /* Outputs for Atomic SubSystem: '<S306>/ROUTE REQUEST' */
    D_REQ(rtb_L32L14BCTRL, rtb_L32RSTCTRL_d, rtb_L32L14BB, rtb_u3TP_e,
          rtb_u3TPBP_b, rtb_L32SB, &NONVITALDEPOT_DW.ROUTEREQUEST_b);

    /* End of Outputs for SubSystem: '<S306>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S306>/L32-L14B-RS' */
    M_RS_32_14 = NONVITALDEPOT_DW.ROUTEREQUEST_b.Memory1;

    /* DataStoreWrite: '<S306>/L32-L14B-S-REQ' */
    M_REQ_S_32_14 = NONVITALDEPOT_DW.ROUTEREQUEST_b.OR5;

    /* DataStoreRead: '<S307>/L34A-X72-CTRL' */
    rtb_L34AX72CTRL = M_PBCTRL_34_72;

    /* DataStoreRead: '<S307>/L34-RST-CTRL' */
    rtb_L34RSTCTRL = M_CTRL_RST_34;

    /* DataStoreRead: '<S307>/L34-X72-B' */
    rtb_L34X72B = M_B_34_72;

    /* DataStoreRead: '<S307>/73B-TP' */
    rtb_u3BTP_nh = M_TP_73B;

    /* DataStoreRead: '<S307>/73B-TPBP' */
    rtb_u3BTPBP = M_TPBP_73B;

    /* DataStoreRead: '<S307>/L34-S-B' */
    rtb_L34SB = M_B_L34;

    /* Outputs for Atomic SubSystem: '<S307>/ROUTE REQUEST' */
    D_REQ(rtb_L34AX72CTRL, rtb_L34RSTCTRL, rtb_L34X72B, rtb_u3BTP_nh,
          rtb_u3BTPBP, rtb_L34SB, &NONVITALDEPOT_DW.ROUTEREQUEST_a);

    /* End of Outputs for SubSystem: '<S307>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S307>/L34-X72-RS' */
    M_RS_34_72 = NONVITALDEPOT_DW.ROUTEREQUEST_a.Memory1;

    /* DataStoreWrite: '<S307>/L34-X72-S-REQ' */
    M_REQ_S_34_72 = NONVITALDEPOT_DW.ROUTEREQUEST_a.OR5;

    /* DataStoreRead: '<S308>/L54A-X72-CTRL' */
    rtb_L54AX72CTRL = M_PBCTRL_54_72;

    /* DataStoreRead: '<S308>/L54-RST-CTRL' */
    rtb_L54RSTCTRL = M_CTRL_RST_54;

    /* DataStoreRead: '<S308>/L54-X72-B' */
    rtb_L54X72B = M_B_54_72;

    /* DataStoreRead: '<S308>/73B-TP' */
    rtb_u3BTP_e = M_TP_73B;

    /* DataStoreRead: '<S308>/73B-TPBP' */
    rtb_u3BTPBP_p = M_TPBP_73B;

    /* DataStoreRead: '<S308>/L54-S-B' */
    rtb_L54SB = M_B_L54;

    /* Outputs for Atomic SubSystem: '<S308>/ROUTE REQUEST' */
    D_REQ(rtb_L54AX72CTRL, rtb_L54RSTCTRL, rtb_L54X72B, rtb_u3BTP_e,
          rtb_u3BTPBP_p, rtb_L54SB, &NONVITALDEPOT_DW.ROUTEREQUEST_ov);

    /* End of Outputs for SubSystem: '<S308>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S308>/L54-X72-RS' */
    M_RS_54_72 = NONVITALDEPOT_DW.ROUTEREQUEST_ov.Memory1;

    /* DataStoreWrite: '<S308>/L54-X72-S-REQ' */
    M_REQ_S_54_72 = NONVITALDEPOT_DW.ROUTEREQUEST_ov.OR5;

    /* DataStoreRead: '<S309>/L72-L14B-CTRL' */
    rtb_L72L14BCTRL = M_PBCTRL_72_14;

    /* DataStoreRead: '<S309>/L72-RST-CTRL' */
    rtb_L72RSTCTRL_d = M_CTRL_RST_72;

    /* DataStoreRead: '<S309>/L72-L14B-B' */
    rtb_L72L14BB = M_B_72_14;

    /* DataStoreRead: '<S309>/73A-TP' */
    rtb_u3ATP_l = M_TP_73A;

    /* DataStoreRead: '<S309>/73A-TPBP' */
    rtb_u3ATPBP = M_TPBP_73A;

    /* DataStoreRead: '<S309>/L72-S-B' */
    rtb_L72SB = M_B_L72;

    /* Outputs for Atomic SubSystem: '<S309>/ROUTE REQUEST' */
    D_REQ(rtb_L72L14BCTRL, rtb_L72RSTCTRL_d, rtb_L72L14BB, rtb_u3ATP_l,
          rtb_u3ATPBP, rtb_L72SB, &NONVITALDEPOT_DW.ROUTEREQUEST_m);

    /* End of Outputs for SubSystem: '<S309>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S309>/L72-L14B-RS' */
    M_RS_72_14 = NONVITALDEPOT_DW.ROUTEREQUEST_m.Memory1;

    /* DataStoreWrite: '<S309>/L72-L14B-S-REQ' */
    M_REQ_S_72_14 = NONVITALDEPOT_DW.ROUTEREQUEST_m.OR5;

    /* DataStoreRead: '<S310>/L72-X34-CTRL' */
    rtb_L72X34CTRL = M_PBCTRL_72_34;

    /* DataStoreRead: '<S310>/L72-RST-CTRL' */
    rtb_L72RSTCTRL_h = M_CTRL_RST_72;

    /* DataStoreRead: '<S310>/L72-X34-B' */
    rtb_L72X34B = M_B_72_34;

    /* DataStoreRead: '<S310>/73A-TP' */
    rtb_u3ATP_mo = M_TP_73A;

    /* DataStoreRead: '<S310>/73A-TPBP' */
    rtb_u3ATPBP_a = M_TPBP_73A;

    /* DataStoreRead: '<S310>/L72-S-B' */
    rtb_L72SB_m = M_B_L72;

    /* Outputs for Atomic SubSystem: '<S310>/ROUTE REQUEST' */
    D_REQ(rtb_L72X34CTRL, rtb_L72RSTCTRL_h, rtb_L72X34B, rtb_u3ATP_mo,
          rtb_u3ATPBP_a, rtb_L72SB_m, &NONVITALDEPOT_DW.ROUTEREQUEST_f);

    /* End of Outputs for SubSystem: '<S310>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S310>/L72-X34-RS' */
    M_RS_72_34 = NONVITALDEPOT_DW.ROUTEREQUEST_f.Memory1;

    /* DataStoreWrite: '<S310>/L72-X34-S-REQ' */
    M_REQ_S_72_34 = NONVITALDEPOT_DW.ROUTEREQUEST_f.OR5;

    /* DataStoreRead: '<S311>/L72-X54-CTRL' */
    rtb_L72X54CTRL = M_PBCTRL_72_54;

    /* DataStoreRead: '<S311>/L72-RST-CTRL' */
    rtb_L72RSTCTRL_n = M_CTRL_RST_72;

    /* DataStoreRead: '<S311>/L72-X54-B' */
    rtb_L72X54B = M_B_72_54;

    /* DataStoreRead: '<S311>/73A-TP' */
    rtb_u3ATP_k2 = M_TP_73A;

    /* DataStoreRead: '<S311>/73A-TPBP' */
    rtb_u3ATPBP_c = M_TPBP_73A;

    /* DataStoreRead: '<S311>/L72-S-B' */
    rtb_L72SB_d = M_B_L72;

    /* Outputs for Atomic SubSystem: '<S311>/ROUTE REQUEST' */
    D_REQ(rtb_L72X54CTRL, rtb_L72RSTCTRL_n, rtb_L72X54B, rtb_u3ATP_k2,
          rtb_u3ATPBP_c, rtb_L72SB_d, &NONVITALDEPOT_DW.ROUTEREQUEST_k);

    /* End of Outputs for SubSystem: '<S311>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S311>/L72-X54-RS' */
    M_RS_72_54 = NONVITALDEPOT_DW.ROUTEREQUEST_k.Memory1;

    /* DataStoreWrite: '<S311>/L72-X54-S-REQ' */
    M_REQ_S_72_54 = NONVITALDEPOT_DW.ROUTEREQUEST_k.OR5;

    /* DataStoreRead: '<S312>/L72-X74-CTRL' */
    rtb_L72X74CTRL = M_PBCTRL_72_74;

    /* DataStoreRead: '<S312>/L72-RST-CTRL' */
    rtb_L72RSTCTRL_i = M_CTRL_RST_72;

    /* DataStoreRead: '<S312>/L72-X74-B' */
    rtb_L72X74B = M_B_72_74;

    /* DataStoreRead: '<S312>/73A-TP' */
    rtb_u3ATP_b = M_TP_73A;

    /* DataStoreRead: '<S312>/73A-TPBP' */
    rtb_u3ATPBP_p = M_TPBP_73A;

    /* DataStoreRead: '<S312>/L72-S-B' */
    rtb_L72SB_l = M_B_L72;

    /* Outputs for Atomic SubSystem: '<S312>/ROUTE REQUEST' */
    D_REQ(rtb_L72X74CTRL, rtb_L72RSTCTRL_i, rtb_L72X74B, rtb_u3ATP_b,
          rtb_u3ATPBP_p, rtb_L72SB_l, &NONVITALDEPOT_DW.ROUTEREQUEST_fz);

    /* End of Outputs for SubSystem: '<S312>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S312>/L72-X74-RS' */
    M_RS_72_74 = NONVITALDEPOT_DW.ROUTEREQUEST_fz.Memory1;

    /* DataStoreWrite: '<S312>/L72-X74-S-REQ' */
    M_REQ_S_72_74 = NONVITALDEPOT_DW.ROUTEREQUEST_fz.OR5;

    /* DataStoreRead: '<S313>/L74A-X72-CTRL' */
    rtb_L74AX72CTRL = M_PBCTRL_74_72;

    /* DataStoreRead: '<S313>/L74-RST-CTRL' */
    rtb_L74RSTCTRL = M_CTRL_RST_74;

    /* DataStoreRead: '<S313>/L74-X72-B' */
    rtb_L74X72B = M_B_74_72;

    /* DataStoreRead: '<S313>/73B-TP' */
    rtb_u3BTP_k = M_TP_73B;

    /* DataStoreRead: '<S313>/73B-TPBP' */
    rtb_u3BTPBP_l = M_TPBP_73B;

    /* DataStoreRead: '<S313>/L74-S-B' */
    rtb_L74SB = M_B_L54;

    /* Outputs for Atomic SubSystem: '<S313>/ROUTE REQUEST' */
    D_REQ(rtb_L74AX72CTRL, rtb_L74RSTCTRL, rtb_L74X72B, rtb_u3BTP_k,
          rtb_u3BTPBP_l, rtb_L74SB, &NONVITALDEPOT_DW.ROUTEREQUEST_mv);

    /* End of Outputs for SubSystem: '<S313>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S313>/L74-X72-RS' */
    M_RS_74_72 = NONVITALDEPOT_DW.ROUTEREQUEST_mv.Memory1;

    /* DataStoreWrite: '<S313>/L74-X72-S-REQ' */
    M_REQ_S_74_72 = NONVITALDEPOT_DW.ROUTEREQUEST_mv.OR5;

    /* DataStoreRead: '<S326>/VDR' */
    NONVITALDEPOT_DW.VDR = NONVITALDEPOT_DW.M_VDR;

    /* DataStoreRead: '<S326>/L12-L14B-RS' */
    rtb_L12L14BRS_l = M_RS_12_14;

    /* DataStoreRead: '<S326>/L12-GR-DO' */
    NONVITALDEPOT_DW.L12GRDO_b = M_DO_L12_GR;

    /* DataStoreRead: '<S326>/L12-GR-RD' */
    rtb_L12GRRD = M_RD_L12_GR;

    /* DataStoreRead: '<S326>/12-TP' */
    rtb_u2TP_l = M_TP_12;
  }

  /* Outputs for Atomic SubSystem: '<S326>/SIGNAL BLOCK' */
  D_SIG_B(NONVITALDEPOT_M, NONVITALDEPOT_DW.VDR, rtb_L12L14BRS_l,
          NONVITALDEPOT_DW.L12GRDO_b, rtb_L12GRRD, rtb_u2TP_l,
          &NONVITALDEPOT_DW.SIGNALBLOCK);

  /* End of Outputs for SubSystem: '<S326>/SIGNAL BLOCK' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S326>/L12-S-B' incorporates:
     *  SignalConversion: '<S326>/TmpSignal ConversionAtSIGNAL BLOCKOutport1'
     */
    M_B_L12 = NONVITALDEPOT_DW.SIGNALBLOCK.OR4;

    /* DataStoreRead: '<S327>/VDR' */
    NONVITALDEPOT_DW.VDR_e = NONVITALDEPOT_DW.M_VDR;

    /* Logic: '<S327>/AND1' */
    rtb_AND1_br = (M_RS_14_12 && M_RS_14_32 && M_RS_14_72);

    /* DataStoreRead: '<S327>/L14A-GR-DO' */
    NONVITALDEPOT_DW.L14AGRDO_c = M_DO_L14A_GR;

    /* DataStoreRead: '<S327>/L14A-GR-RD' */
    rtb_L14AGRRD = M_RD_L14A_GR;

    /* DataStoreRead: '<S327>/14-TP' */
    rtb_u4TP_bj = M_TP_14;
  }

  /* Outputs for Atomic SubSystem: '<S327>/SIGNAL BLOCK' */
  D_SIG_B(NONVITALDEPOT_M, NONVITALDEPOT_DW.VDR_e, rtb_AND1_br,
          NONVITALDEPOT_DW.L14AGRDO_c, rtb_L14AGRRD, rtb_u4TP_bj,
          &NONVITALDEPOT_DW.SIGNALBLOCK_a);

  /* End of Outputs for SubSystem: '<S327>/SIGNAL BLOCK' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S327>/L14A-S-B' incorporates:
     *  SignalConversion: '<S327>/TmpSignal ConversionAtSIGNAL BLOCKOutport1'
     */
    M_B_L14A = NONVITALDEPOT_DW.SIGNALBLOCK_a.OR4;

    /* DataStoreRead: '<S328>/VDR' */
    NONVITALDEPOT_DW.VDR_m = NONVITALDEPOT_DW.M_VDR;

    /* DataStoreRead: '<S328>/L32-L14B-RS' */
    rtb_L32L14BRS_gl = M_RS_32_14;

    /* DataStoreRead: '<S328>/L32-GR-DO' */
    NONVITALDEPOT_DW.L32GRDO_j = M_DO_L32_GR;

    /* DataStoreRead: '<S328>/L32-GR-RD' */
    rtb_L32GRRD = M_RD_L32_GR;

    /* DataStoreRead: '<S328>/32-TP' */
    rtb_u2TP_j = M_TP_32;
  }

  /* Outputs for Atomic SubSystem: '<S328>/SIGNAL BLOCK' */
  D_SIG_B(NONVITALDEPOT_M, NONVITALDEPOT_DW.VDR_m, rtb_L32L14BRS_gl,
          NONVITALDEPOT_DW.L32GRDO_j, rtb_L32GRRD, rtb_u2TP_j,
          &NONVITALDEPOT_DW.SIGNALBLOCK_c);

  /* End of Outputs for SubSystem: '<S328>/SIGNAL BLOCK' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S328>/L32-S-B' incorporates:
     *  SignalConversion: '<S328>/TmpSignal ConversionAtSIGNAL BLOCKOutport1'
     */
    M_B_L32 = NONVITALDEPOT_DW.SIGNALBLOCK_c.OR4;

    /* DataStoreRead: '<S329>/VDR' */
    NONVITALDEPOT_DW.VDR_n = NONVITALDEPOT_DW.M_VDR;

    /* DataStoreRead: '<S329>/L34-X72-RS' */
    rtb_L34X72RS_a = M_RS_34_72;

    /* DataStoreRead: '<S329>/L34-GR-DO' */
    NONVITALDEPOT_DW.L34GRDO_i = M_DO_L34_GR;

    /* DataStoreRead: '<S329>/L34-GR-RD' */
    rtb_L34GRRD = M_RD_L34_GR;

    /* DataStoreRead: '<S329>/34-TP' */
    rtb_u4TP_ei = M_TP_34;
  }

  /* Outputs for Atomic SubSystem: '<S329>/SIGNAL BLOCK' */
  D_SIG_B(NONVITALDEPOT_M, NONVITALDEPOT_DW.VDR_n, rtb_L34X72RS_a,
          NONVITALDEPOT_DW.L34GRDO_i, rtb_L34GRRD, rtb_u4TP_ei,
          &NONVITALDEPOT_DW.SIGNALBLOCK_d);

  /* End of Outputs for SubSystem: '<S329>/SIGNAL BLOCK' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S329>/L34-S-B' incorporates:
     *  SignalConversion: '<S329>/TmpSignal ConversionAtSIGNAL BLOCKOutport1'
     */
    M_B_L34 = NONVITALDEPOT_DW.SIGNALBLOCK_d.OR4;

    /* DataStoreRead: '<S330>/VDR' */
    NONVITALDEPOT_DW.VDR_i = NONVITALDEPOT_DW.M_VDR;

    /* DataStoreRead: '<S330>/L54-X72-RS' */
    rtb_L54X72RS_h = M_RS_54_72;

    /* DataStoreRead: '<S330>/L54-GR-DO' */
    NONVITALDEPOT_DW.L54GRDO_p = M_DO_L54_GR;

    /* DataStoreRead: '<S330>/L54-GR-RD' */
    rtb_L54GRRD = M_RD_L54_GR;

    /* DataStoreRead: '<S330>/54-TP' */
    rtb_u4TP_b3 = M_TP_54;
  }

  /* Outputs for Atomic SubSystem: '<S330>/SIGNAL BLOCK' */
  D_SIG_B(NONVITALDEPOT_M, NONVITALDEPOT_DW.VDR_i, rtb_L54X72RS_h,
          NONVITALDEPOT_DW.L54GRDO_p, rtb_L54GRRD, rtb_u4TP_b3,
          &NONVITALDEPOT_DW.SIGNALBLOCK_cy);

  /* End of Outputs for SubSystem: '<S330>/SIGNAL BLOCK' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S330>/L54-S-B' incorporates:
     *  SignalConversion: '<S330>/TmpSignal ConversionAtSIGNAL BLOCKOutport1'
     */
    M_B_L54 = NONVITALDEPOT_DW.SIGNALBLOCK_cy.OR4;

    /* DataStoreRead: '<S331>/VDR' */
    NONVITALDEPOT_DW.VDR_l = NONVITALDEPOT_DW.M_VDR;

    /* Logic: '<S331>/AND1' */
    rtb_AND1_ms = (M_RS_72_14 && M_RS_72_34 && M_RS_72_54 && M_RS_72_74);

    /* DataStoreRead: '<S331>/L72-GR-DO' */
    NONVITALDEPOT_DW.L72GRDO_m = M_DO_L72_GR;

    /* DataStoreRead: '<S331>/L72-GR-RD' */
    rtb_L72GRRD = M_RD_L72_GR;

    /* DataStoreRead: '<S331>/72-TP' */
    rtb_u2TP_n = M_TP_72;
  }

  /* Outputs for Atomic SubSystem: '<S331>/SIGNAL BLOCK' */
  D_SIG_B(NONVITALDEPOT_M, NONVITALDEPOT_DW.VDR_l, rtb_AND1_ms,
          NONVITALDEPOT_DW.L72GRDO_m, rtb_L72GRRD, rtb_u2TP_n,
          &NONVITALDEPOT_DW.SIGNALBLOCK_e);

  /* End of Outputs for SubSystem: '<S331>/SIGNAL BLOCK' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S331>/L72-S-B' incorporates:
     *  SignalConversion: '<S331>/TmpSignal ConversionAtSIGNAL BLOCKOutport1'
     */
    M_B_L72 = NONVITALDEPOT_DW.SIGNALBLOCK_e.OR4;

    /* DataStoreRead: '<S332>/VDR' */
    NONVITALDEPOT_DW.VDR_f = NONVITALDEPOT_DW.M_VDR;

    /* DataStoreRead: '<S332>/L74-X72-RS' */
    rtb_L74X72RS_n = M_RS_74_72;

    /* DataStoreRead: '<S332>/L74-GR-DO' */
    NONVITALDEPOT_DW.L74GRDO_m = M_DO_L74_GR;

    /* DataStoreRead: '<S332>/L74-GR-RD' */
    rtb_L74GRRD = M_RD_L74_GR;

    /* DataStoreRead: '<S332>/74-TP' */
    rtb_u4TP_g = M_TP_74;
  }

  /* Outputs for Atomic SubSystem: '<S332>/SIGNAL BLOCK' */
  D_SIG_B(NONVITALDEPOT_M, NONVITALDEPOT_DW.VDR_f, rtb_L74X72RS_n,
          NONVITALDEPOT_DW.L74GRDO_m, rtb_L74GRRD, rtb_u4TP_g,
          &NONVITALDEPOT_DW.SIGNALBLOCK_n);

  /* End of Outputs for SubSystem: '<S332>/SIGNAL BLOCK' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* DataStoreWrite: '<S332>/L74-S-B' incorporates:
     *  SignalConversion: '<S332>/TmpSignal ConversionAtSIGNAL BLOCKOutport1'
     */
    NONVITALDEPOT_DW.M_B_L74 = NONVITALDEPOT_DW.SIGNALBLOCK_n.OR4;

    /* DiscretePulseGenerator: '<S3>/0.5S' */
    if (clockTickCounter_0 >= 19) {
      clockTickCounter = 0;
    } else {
      clockTickCounter = clockTickCounter_0 + 1;
    }

    /* DataStoreWrite: '<S3>/FLASH-0.5S' incorporates:
     *  DiscretePulseGenerator: '<S3>/0.5S'
     */
    NONVITALDEPOT_DW.M_GV_FLASH_500 = ((clockTickCounter_0 < 10) &&
      (clockTickCounter_0 >= 0));

    /* DiscretePulseGenerator: '<S3>/1S' */
    if (clockTickCounter_m_0 >= 39) {
      clockTickCounter_m = 0;
    } else {
      clockTickCounter_m = clockTickCounter_m_0 + 1;
    }

    /* DataStoreWrite: '<S3>/FLASH-1S' incorporates:
     *  DiscretePulseGenerator: '<S3>/1S'
     */
    M_GV_FLASH_1000 = ((clockTickCounter_m_0 < 20) && (clockTickCounter_m_0 >= 0));

    /* DataStoreWrite: '<S3>/COMM-CHECK-OUT' */
    M_CHK_NV_V = M_CHK_V_NV;

    /* DataStoreWrite: '<S3>/COMM-OK' incorporates:
     *  Logic: '<S3>/Logical Operator'
     */
    NONVITALDEPOT_DW.M_NVCOMM_OK = (CBI_FAIL_COMM1 || CBI_FAIL_COMM2);

    /* SignalConversion: '<Root>/TmpSignal ConversionAtBUTTON-IND-DOInport1' */
    rty_BUTTONINDDO[0] = rtb_L12PBEDO;
    rty_BUTTONINDDO[1] = rtb_L32PBEDO;
    rty_BUTTONINDDO[2] = rtb_L72PBEDO;
    rty_BUTTONINDDO[3] = rtb_L34PBEDO;
    rty_BUTTONINDDO[4] = rtb_L54PBEDO;
    rty_BUTTONINDDO[5] = rtb_L74PBEDO;
    rty_BUTTONINDDO[6] = rtb_L14APBEDO;
    rty_BUTTONINDDO[7] = rtb_L14BPBEDO;
    rty_BUTTONINDDO[8] = rtb_X12PBEDO;
    rty_BUTTONINDDO[9] = rtb_X32PBEDO;
    rty_BUTTONINDDO[10] = rtb_X72PBEDO;
    rty_BUTTONINDDO[11] = rtb_X34PBEDO;
    rty_BUTTONINDDO[12] = rtb_X54PBEDO;
    rty_BUTTONINDDO[13] = rtb_X73PBEDO;
    rty_BUTTONINDDO[14] = rtb_X73PBEDO1;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtCBTC-IND-DOInport1' */
    rty_CBTCINDDO[0] = rtb_TZBINDDO;
    rty_CBTCINDDO[1] = rtb_INFEDO;
    rty_CBTCINDDO[2] = rtb_INFLEDO;
    rty_CBTCINDDO[3] = rtb_OUTFEDO;
    rty_CBTCINDDO[4] = rtb_OUTFLEDO;
    rty_CBTCINDDO[5] = rtb_MAINTEDO;
    rty_CBTCINDDO[6] = rtb_MAINREDO;
    rty_CBTCINDDO[7] = rtb_MAINBEDO;
    rty_CBTCINDDO[8] = rtb_TWTCTDO;
    rty_CBTCINDDO[9] = rtb_TBWCTDO;
    rty_CBTCINDDO[10] = rtb_TPRCTDO;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtGLOBAL-IND-DOInport1' */
    rty_GLOBALINDDO[0] = rtb_SISTEM1FAILDO;
    rty_GLOBALINDDO[1] = rtb_SISTEM2FAILDO;
    rty_GLOBALINDDO[2] = rtb_COMM1FAILDO;
    rty_GLOBALINDDO[3] = rtb_COMM2FAILDO;
    rty_GLOBALINDDO[4] = rtb_BUZZERDO;
    rty_GLOBALINDDO[5] = rtb_TPRBANTUDO;
    rty_GLOBALINDDO[6] = rtb_POINTFAILDO;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtN-REQ-TOInport1' */
    rty_NREQTO[0] = rtb_W13ANREQ_g;
    rty_NREQTO[1] = rtb_W13B73ANREQ_m;
    rty_NREQTO[2] = rtb_W54NREQ_k;
    rty_NREQTO[3] = rtb_W73BNREQ;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtOOC-TOInport1' */
    rty_OOCTO[0] = rtb_W13AOOC_oz;
    rty_OOCTO[1] = rtb_W13B73AOOC_jt;
    rty_OOCTO[2] = rtb_W54OOC_g;
    rty_OOCTO[3] = rtb_W73BOOC_g0;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtPOINT-IND-DOInport1' */
    rty_POINTINDDO[0] = rtb_W13ABEDO;
    rty_POINTINDDO[1] = rtb_W13BBEDO;
    rty_POINTINDDO[2] = rtb_W54BEDO;
    rty_POINTINDDO[3] = rtb_W73ABEDO;
    rty_POINTINDDO[4] = rtb_W73BBEDO;
    rty_POINTINDDO[5] = rtb_W13ALEDO;
    rty_POINTINDDO[6] = rtb_W13BLEDO;
    rty_POINTINDDO[7] = rtb_W54LEDO;
    rty_POINTINDDO[8] = rtb_W73ALEDO;
    rty_POINTINDDO[9] = rtb_W73BLEDO;
    rty_POINTINDDO[10] = rtb_W13ANWEDO;
    rty_POINTINDDO[11] = rtb_W13BNWEDO;
    rty_POINTINDDO[12] = rtb_W54NWEDO;
    rty_POINTINDDO[13] = rtb_W73ANWEDO;
    rty_POINTINDDO[14] = rtb_W73BNWEDO;
    rty_POINTINDDO[15] = rtb_W13ANWTEDO;
    rty_POINTINDDO[16] = rtb_W13BNWTEDO;
    rty_POINTINDDO[17] = rtb_W54NWTEDO;
    rty_POINTINDDO[18] = rtb_W73ANWTEDO;
    rty_POINTINDDO[19] = rtb_W73BNWTEDO;
    rty_POINTINDDO[20] = rtb_W13ANWREDO;
    rty_POINTINDDO[21] = rtb_W13BNWREDO;
    rty_POINTINDDO[22] = rtb_W54NWREDO;
    rty_POINTINDDO[23] = rtb_W73ANWREDO;
    rty_POINTINDDO[24] = rtb_W73BNWREDO;
    rty_POINTINDDO[25] = rtb_W13ARWEDO;
    rty_POINTINDDO[26] = rtb_W13BRWEDO;
    rty_POINTINDDO[27] = rtb_W54RWEDO;
    rty_POINTINDDO[28] = rtb_W73ARWEDO;
    rty_POINTINDDO[29] = rtb_W73BRWEDO;
    rty_POINTINDDO[30] = rtb_W13ARWTEDO;
    rty_POINTINDDO[31] = rtb_W13BRWTEDO;
    rty_POINTINDDO[32] = rtb_W54RWTEDO;
    rty_POINTINDDO[33] = rtb_W73ARWTEDO;
    rty_POINTINDDO[34] = rtb_W73BRWTEDO;
    rty_POINTINDDO[35] = rtb_W13ARWREDO;
    rty_POINTINDDO[36] = rtb_W13BRWREDO;
    rty_POINTINDDO[37] = rtb_W54RWREDO;
    rty_POINTINDDO[38] = rtb_W73ARWREDO;
    rty_POINTINDDO[39] = rtb_W73BRWREDO;
    rty_POINTINDDO[40] = rtb_W13ANTEDO;
    rty_POINTINDDO[41] = rtb_W13BNTEDO;
    rty_POINTINDDO[42] = rtb_W54NTEDO;
    rty_POINTINDDO[43] = rtb_W73ANTEDO;
    rty_POINTINDDO[44] = rtb_W73BNTEDO;
    rty_POINTINDDO[45] = rtb_W13ANREDO;
    rty_POINTINDDO[46] = rtb_W13BNREDO;
    rty_POINTINDDO[47] = rtb_W54NREDO;
    rty_POINTINDDO[48] = rtb_W73ANREDO;
    rty_POINTINDDO[49] = rtb_W73BNREDO;
    rty_POINTINDDO[50] = rtb_W13ARTEDO;
    rty_POINTINDDO[51] = rtb_W13BRTEDO;
    rty_POINTINDDO[52] = rtb_W54RTEDO;
    rty_POINTINDDO[53] = rtb_W73ARTEDO;
    rty_POINTINDDO[54] = rtb_W73BRTEDO;
    rty_POINTINDDO[55] = rtb_W13ARREDO;
    rty_POINTINDDO[56] = rtb_W13BRREDO;
    rty_POINTINDDO[57] = rtb_W54RREDO;
    rty_POINTINDDO[58] = rtb_W73ARREDO;
    rty_POINTINDDO[59] = rtb_W73BRREDO;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtR-REQ-TOInport1' */
    rty_RREQTO[0] = rtb_W13ARREQ_g;
    rty_RREQTO[1] = rtb_W13B73ARREQ_d;
    rty_RREQTO[2] = rtb_W54RREQ_i;
    rty_RREQTO[3] = rtb_W73BRREQ;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtRRLSPB-CTRL-TOInport1' */
    rty_RRLSPBCTRLTO[0] = rtb_X12RRLSPBCTRL;
    rty_RRLSPBCTRLTO[1] = rtb_X32RRLSPBCTRL;
    rty_RRLSPBCTRLTO[2] = rtb_X72RRLSPBCTRL;
    rty_RRLSPBCTRLTO[3] = rtb_X34RRLSPBCTRL;
    rty_RRLSPBCTRLTO[4] = rtb_X54RRLSPBCTRL;
    rty_RRLSPBCTRLTO[5] = rtb_X74RRLSPBCTRL;
    rty_RRLSPBCTRLTO[6] = rtb_L14ARRLSPBCTRL;
    rty_RRLSPBCTRLTO[7] = rtb_L14BRRLSPBCTRL;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtRS-TOInport1' */
    rty_RSTO[0] = rtb_L12L14BRS_gz;
    rty_RSTO[1] = rtb_L32L14BRS_gj;
    rty_RSTO[2] = rtb_L72L14BRS_p;
    rty_RSTO[3] = rtb_L72L34BRS;
    rty_RSTO[4] = rtb_L72L54BRS;
    rty_RSTO[5] = rtb_L72L74BRS;
    rty_RSTO[6] = rtb_L14AX12RS_j;
    rty_RSTO[7] = rtb_L14AX32RS_ne;
    rty_RSTO[8] = rtb_L14AX72RS_ng;
    rty_RSTO[9] = rtb_L34X72RS_p;
    rty_RSTO[10] = rtb_L54X72RS_j;
    rty_RSTO[11] = rtb_L74X72RS_d;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtRST-TOInport1' */
    rty_RSTTO[0] = rtb_L12RSTCTRL_g;
    rty_RSTTO[1] = rtb_L32RSTCTRL_n;
    rty_RSTTO[2] = rtb_L72RSTCTRL_kn;
    rty_RSTTO[3] = rtb_L34RSTCTRL_j;
    rty_RSTTO[4] = rtb_L54RSTCTRL_b;
    rty_RSTTO[5] = rtb_L74RSTCTRL_h;
    rty_RSTTO[6] = rtb_L14ARSTCTRL_g;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtS-REQ-TOInport1' */
    rty_SREQTO[0] = rtb_L12L14BSREQ;
    rty_SREQTO[1] = rtb_L32L14BSREQ;
    rty_SREQTO[2] = rtb_L72L14BSREQ;
    rty_SREQTO[3] = rtb_L72X34SREQ;
    rty_SREQTO[4] = rtb_L72X54SREQ;
    rty_SREQTO[5] = rtb_L72X74SREQ;
    rty_SREQTO[6] = rtb_L14AX12SREQ;
    rty_SREQTO[7] = rtb_L14AX32SREQ;
    rty_SREQTO[8] = rtb_L14AX72SREQ;
    rty_SREQTO[9] = rtb_L34X72SREQ;
    rty_SREQTO[10] = rtb_L54X72SREQ;
    rty_SREQTO[11] = rtb_L74X72SREQ;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtSIGNAL-IND-DOInport1' */
    rty_SIGNALINDDO[0] = rtb_L12WGEDO;
    rty_SIGNALINDDO[1] = rtb_L32WGEDO;
    rty_SIGNALINDDO[2] = rtb_L72WGEDO;
    rty_SIGNALINDDO[3] = rtb_L34WGEDO;
    rty_SIGNALINDDO[4] = rtb_L54WGEDO;
    rty_SIGNALINDDO[5] = rtb_L74WGEDO;
    rty_SIGNALINDDO[6] = rtb_L14AWGEDO;
    rty_SIGNALINDDO[7] = rtb_L14BWGEDO;
    rty_SIGNALINDDO[8] = rtb_L12RGEDO;
    rty_SIGNALINDDO[9] = rtb_L32RGEDO;
    rty_SIGNALINDDO[10] = rtb_L72RGEDO;
    rty_SIGNALINDDO[11] = rtb_L34RGEDO;
    rty_SIGNALINDDO[12] = rtb_L54RGEDO;
    rty_SIGNALINDDO[13] = rtb_L74RGEDO;
    rty_SIGNALINDDO[14] = rtb_L14ARGEDO;
    rty_SIGNALINDDO[15] = rtb_L14BRGEDO;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtSWINIT-TOInport1' */
    rty_SWINITTO[0] = rtb_W13ASWINIT_d;
    rty_SWINITTO[1] = rtb_W13B73ASWINIT_l4;
    rty_SWINITTO[2] = rtb_W54SWINIT_i;
    rty_SWINITTO[3] = rtb_W73BSWINIT_p;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtSWRLSPB-CTRL-TOInport1' */
    rty_SWRLSPBCTRLTO[0] = rtb_W13ASWRLSPBCTRL;
    rty_SWRLSPBCTRLTO[1] = rtb_W13B73ASWRLSPBCTRL;
    rty_SWRLSPBCTRLTO[2] = rtb_W54SWRLSPBCTRL;
    rty_SWRLSPBCTRLTO[3] = rtb_W73BSWRLSPBCTRL;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtTO-MAINInport1' */
    rty_TOMAIN[0] = rtb_L14BGRDO_f;
    rty_TOMAIN[1] = rtb_u4BPBDI;
    rty_TOMAIN[2] = rtb_u4APBDI;
    rty_TOMAIN[3] = rtb_u4ARRLS;
    rty_TOMAIN[4] = rtb_ASDEP;
    rty_TOMAIN[5] = rtb_L14BAROK;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtTRACK-IND-DOInport1' */
    rty_TRACKINDDO[0] = rtb_u2REDO;
    rty_TRACKINDDO[1] = rtb_u3REDO;
    rty_TRACKINDDO[2] = rtb_u4REDO;
    rty_TRACKINDDO[3] = rtb_u2REDO_j;
    rty_TRACKINDDO[4] = rtb_u4REDO_b;
    rty_TRACKINDDO[5] = rtb_u4REDO_md;
    rty_TRACKINDDO[6] = rtb_u2REDO_g;
    rty_TRACKINDDO[7] = rtb_u3AREDO;
    rty_TRACKINDDO[8] = rtb_u3BREDO;
    rty_TRACKINDDO[9] = rtb_u4REDO_i;
    rty_TRACKINDDO[10] = rtb_u2TEDO;
    rty_TRACKINDDO[11] = rtb_u3TEDO;
    rty_TRACKINDDO[12] = rtb_u4TEDO;
    rty_TRACKINDDO[13] = rtb_u2TEDO_n3;
    rty_TRACKINDDO[14] = rtb_u4TEDO_f0;
    rty_TRACKINDDO[15] = rtb_u4TEDO_g;
    rty_TRACKINDDO[16] = rtb_u2TEDO_f;
    rty_TRACKINDDO[17] = rtb_u3ATEDO;
    rty_TRACKINDDO[18] = rtb_u3BTEDO;
    rty_TRACKINDDO[19] = rtb_u4TEDO_o;
  }

  clockTickCounter_0 = clockTickCounter;
  clockTickCounter_m_0 = clockTickCounter_m;

  /* Logic: '<S283>/AND1' */
  NONVITALDEPOT_DW.AND1_m = AND1_m;

  /* Logic: '<S284>/AND14' */
  NONVITALDEPOT_DW.AND14 = AND14;
  NONVITALDEPOT_DW.M_S_ES_21C = M_S_ES_21C;
  NONVITALDEPOT_DW.M_S_WS_21C = M_S_WS_21C;
  NONVITALDEPOT_DW.M_TP_21C = M_TP_21C;
  NONVITALDEPOT_DW.M_GV_FLASH_1000 = M_GV_FLASH_1000;
  NONVITALDEPOT_DW.M_CHK_V_NV = M_CHK_V_NV;
  NONVITALDEPOT_DW.M_TP_12 = M_TP_12;
  NONVITALDEPOT_DW.M_TP_13 = M_TP_13;
  NONVITALDEPOT_DW.M_TP_14 = M_TP_14;
  NONVITALDEPOT_DW.M_TP_32 = M_TP_32;
  NONVITALDEPOT_DW.M_TP_34 = M_TP_34;
  NONVITALDEPOT_DW.M_TP_54 = M_TP_54;
  NONVITALDEPOT_DW.M_TP_72 = M_TP_72;
  NONVITALDEPOT_DW.M_TP_73A = M_TP_73A;
  NONVITALDEPOT_DW.M_TP_73B = M_TP_73B;
  NONVITALDEPOT_DW.M_TP_74 = M_TP_74;
  NONVITALDEPOT_DW.M_S_ES_13 = M_S_ES_13;
  NONVITALDEPOT_DW.M_S_ES_73A = M_S_ES_73A;
  NONVITALDEPOT_DW.M_S_ES_73B = M_S_ES_73B;
  NONVITALDEPOT_DW.M_S_WS_13 = M_S_WS_13;
  NONVITALDEPOT_DW.M_S_WS_73A = M_S_WS_73A;
  NONVITALDEPOT_DW.M_S_WS_73B = M_S_WS_73B;
  NONVITALDEPOT_DW.M_W13A_NWC = M_W13A_NWC;
  NONVITALDEPOT_DW.M_W13B_73A_NWC = M_W13B_73A_NWC;
  NONVITALDEPOT_DW.M_W54_NWC = M_W54_NWC;
  NONVITALDEPOT_DW.M_W73B_NWC = M_W73B_NWC;
  NONVITALDEPOT_DW.M_W13A_NWP = M_W13A_NWP;
  NONVITALDEPOT_DW.M_W13B_73A_NWP = M_W13B_73A_NWP;
  NONVITALDEPOT_DW.M_W54_NWP = M_W54_NWP;
  NONVITALDEPOT_DW.M_W73B_NWP = M_W73B_NWP;
  NONVITALDEPOT_DW.M_W13A_NWZ = M_W13A_NWZ;
  NONVITALDEPOT_DW.M_W13B_73A_NWZ = M_W13B_73A_NWZ;
  NONVITALDEPOT_DW.M_W54_NWZ = M_W54_NWZ;
  NONVITALDEPOT_DW.M_W73B_NWZ = M_W73B_NWZ;
  NONVITALDEPOT_DW.M_W13A_NW_TE = M_W13A_NW_TE;
  NONVITALDEPOT_DW.M_W13B_73A_NW_TE = M_W13B_73A_NW_TE;
  NONVITALDEPOT_DW.M_W54_NW_TE = M_W54_NW_TE;
  NONVITALDEPOT_DW.M_W73B_NW_TE = M_W73B_NW_TE;
  NONVITALDEPOT_DW.M_W13A_RWC = M_W13A_RWC;
  NONVITALDEPOT_DW.M_W13B_73A_RWC = M_W13B_73A_RWC;
  NONVITALDEPOT_DW.M_W54_RWC = M_W54_RWC;
  NONVITALDEPOT_DW.M_W73B_RWC = M_W73B_RWC;
  NONVITALDEPOT_DW.M_W13A_RWP = M_W13A_RWP;
  NONVITALDEPOT_DW.M_W13B_73A_RWP = M_W13B_73A_RWP;
  NONVITALDEPOT_DW.M_W54_RWP = M_W54_RWP;
  NONVITALDEPOT_DW.M_W73B_RWP = M_W73B_RWP;
  NONVITALDEPOT_DW.M_W13A_RWZ = M_W13A_RWZ;
  NONVITALDEPOT_DW.M_W13B_73A_RWZ = M_W13B_73A_RWZ;
  NONVITALDEPOT_DW.M_W54_RWZ = M_W54_RWZ;
  NONVITALDEPOT_DW.M_W73B_RWZ = M_W73B_RWZ;
  NONVITALDEPOT_DW.M_W13A_RW_TE = M_W13A_RW_TE;
  NONVITALDEPOT_DW.M_W13B_73A_RW_TE = M_W13B_73A_RW_TE;
  NONVITALDEPOT_DW.M_W54_RW_TE = M_W54_RW_TE;
  NONVITALDEPOT_DW.M_W73B_RW_TE = M_W73B_RW_TE;
  NONVITALDEPOT_DW.M_W13A_L = M_W13A_L;
  NONVITALDEPOT_DW.M_W13B_73A_L = M_W13B_73A_L;
  NONVITALDEPOT_DW.M_W54_L = M_W54_L;
  NONVITALDEPOT_DW.M_W73B_L = M_W73B_L;
  NONVITALDEPOT_DW.M_W13A_LS = M_W13A_LS;
  NONVITALDEPOT_DW.M_W13B_73A_LS = M_W13B_73A_LS;
  NONVITALDEPOT_DW.M_W54_LS = M_W54_LS;
  NONVITALDEPOT_DW.M_W73B_LS = M_W73B_LS;
  NONVITALDEPOT_DW.M_W13A_SWRLS = M_W13A_SWRLS;
  NONVITALDEPOT_DW.M_W13B_73A_SWRLS = M_W13B_73A_SWRLS;
  NONVITALDEPOT_DW.M_W54_SWRLS = M_W54_SWRLS;
  NONVITALDEPOT_DW.M_W73B_SWRLS = M_W73B_SWRLS;
  NONVITALDEPOT_DW.M_W13A_TPZ = M_W13A_TPZ;
  NONVITALDEPOT_DW.M_W13B_73A_TPZ = M_W13B_73A_TPZ;
  NONVITALDEPOT_DW.M_W54_TPZ = M_W54_TPZ;
  NONVITALDEPOT_DW.M_W73B_TPZ = M_W73B_TPZ;
  NONVITALDEPOT_DW.M_DO_L12_GR = M_DO_L12_GR;
  NONVITALDEPOT_DW.M_DO_L14A_GR = M_DO_L14A_GR;
  NONVITALDEPOT_DW.M_DO_L14B_GR = M_DO_L14B_GR;
  NONVITALDEPOT_DW.M_DO_L32_GR = M_DO_L32_GR;
  NONVITALDEPOT_DW.M_DO_L34_GR = M_DO_L34_GR;
  NONVITALDEPOT_DW.M_DO_L54_GR = M_DO_L54_GR;
  NONVITALDEPOT_DW.M_DO_L72_GR = M_DO_L72_GR;
  NONVITALDEPOT_DW.M_DO_L74_GR = M_DO_L74_GR;
  NONVITALDEPOT_DW.M_AS_S_L12 = M_AS_S_L12;
  NONVITALDEPOT_DW.M_AS_S_L14A = M_AS_S_L14A;
  NONVITALDEPOT_DW.M_AS_S_L32 = M_AS_S_L32;
  NONVITALDEPOT_DW.M_AS_S_L34 = M_AS_S_L34;
  NONVITALDEPOT_DW.M_AS_S_L54 = M_AS_S_L54;
  NONVITALDEPOT_DW.M_AS_S_L72 = M_AS_S_L72;
  NONVITALDEPOT_DW.M_AS_S_L74 = M_AS_S_L74;
  NONVITALDEPOT_DW.M_RRLS_14B = M_RRLS_14B;
  NONVITALDEPOT_DW.M_RRLS_12 = M_RRLS_12;
  NONVITALDEPOT_DW.M_RRLS_32 = M_RRLS_32;
  NONVITALDEPOT_DW.M_RRLS_34 = M_RRLS_34;
  NONVITALDEPOT_DW.M_RRLS_54 = M_RRLS_54;
  NONVITALDEPOT_DW.M_RRLS_72 = M_RRLS_72;
  NONVITALDEPOT_DW.M_RRLS_74 = M_RRLS_74;
  NONVITALDEPOT_DW.M_CBTC_TZB_IN = M_CBTC_TZB_IN;
  NONVITALDEPOT_DW.CBI_FAIL_COMM1 = CBI_FAIL_COMM1;
  NONVITALDEPOT_DW.CBI_FAIL_COMM2 = CBI_FAIL_COMM2;
  NONVITALDEPOT_DW.CBI_FAIL_SYSTEM1 = CBI_FAIL_SYSTEM1;
  NONVITALDEPOT_DW.CBI_FAIL_SYSTEM2 = CBI_FAIL_SYSTEM2;
  NONVITALDEPOT_DW.DI_PBG_MANUAL = DI_PBG_MANUAL;
  NONVITALDEPOT_DW.DI_PBG_OTOMATIS = DI_PBG_OTOMATIS;
  NONVITALDEPOT_DW.DI_PBG_THB = DI_PBG_THB;
  NONVITALDEPOT_DW.DI_PBSW_TBKW = DI_PBSW_TBKW;
  NONVITALDEPOT_DW.DI_PBSW_TBW = DI_PBSW_TBW;
  NONVITALDEPOT_DW.DI_PBSW_TKGW = DI_PBSW_TKGW;
  NONVITALDEPOT_DW.DI_PBSW_TKW = DI_PBSW_TKW;
  NONVITALDEPOT_DW.DI_PBSW_TWT = DI_PBSW_TWT;
  NONVITALDEPOT_DW.DI_PBR_TPR = DI_PBR_TPR;
  NONVITALDEPOT_DW.DI_PBJ_12 = DI_PBJ_12;
  NONVITALDEPOT_DW.DI_PBJ_14A = DI_PBJ_14A;
  NONVITALDEPOT_DW.DI_PBJ_14B = DI_PBJ_14B;
  NONVITALDEPOT_DW.DI_PBJ_32 = DI_PBJ_32;
  NONVITALDEPOT_DW.DI_PBJ_34 = DI_PBJ_34;
  NONVITALDEPOT_DW.DI_PBJ_54 = DI_PBJ_54;
  NONVITALDEPOT_DW.DI_PBJ_72 = DI_PBJ_72;
  NONVITALDEPOT_DW.DI_PBJ_74 = DI_PBJ_74;
  NONVITALDEPOT_DW.DI_PBX_12 = DI_PBX_12;
  NONVITALDEPOT_DW.DI_PBX_32 = DI_PBX_32;
  NONVITALDEPOT_DW.DI_PBX_34 = DI_PBX_34;
  NONVITALDEPOT_DW.DI_PBX_54 = DI_PBX_54;
  NONVITALDEPOT_DW.DI_PBX_72 = DI_PBX_72;
  NONVITALDEPOT_DW.DI_PBX_74 = DI_PBX_74;
  NONVITALDEPOT_DW.DI_PBW_13A = DI_PBW_13A;
  NONVITALDEPOT_DW.DI_PBW_13B_73A = DI_PBW_13B_73A;
  NONVITALDEPOT_DW.DI_PBW_54 = DI_PBW_54;
  NONVITALDEPOT_DW.DI_PBW_73B = DI_PBW_73B;
  NONVITALDEPOT_DW.DI_PBCBTC_TZB_ACK = DI_PBCBTC_TZB_ACK;
  NONVITALDEPOT_DW.M_AS_DEP = M_AS_DEP;
  NONVITALDEPOT_DW.M_AR_L14B = M_AR_L14B;
  NONVITALDEPOT_DW.M_CHK_NV_V = M_CHK_NV_V;
  NONVITALDEPOT_DW.M_REQ_S_12_14 = M_REQ_S_12_14;
  NONVITALDEPOT_DW.M_REQ_S_14_12 = M_REQ_S_14_12;
  NONVITALDEPOT_DW.M_REQ_S_14_32 = M_REQ_S_14_32;
  NONVITALDEPOT_DW.M_REQ_S_14_72 = M_REQ_S_14_72;
  NONVITALDEPOT_DW.M_REQ_S_32_14 = M_REQ_S_32_14;
  NONVITALDEPOT_DW.M_REQ_S_34_72 = M_REQ_S_34_72;
  NONVITALDEPOT_DW.M_REQ_S_54_72 = M_REQ_S_54_72;
  NONVITALDEPOT_DW.M_REQ_S_72_14 = M_REQ_S_72_14;
  NONVITALDEPOT_DW.M_REQ_S_72_34 = M_REQ_S_72_34;
  NONVITALDEPOT_DW.M_REQ_S_72_54 = M_REQ_S_72_54;
  NONVITALDEPOT_DW.M_REQ_S_72_74 = M_REQ_S_72_74;
  NONVITALDEPOT_DW.M_REQ_S_74_72 = M_REQ_S_74_72;
  NONVITALDEPOT_DW.M_W13A_N_REQ = M_W13A_N_REQ;
  NONVITALDEPOT_DW.M_W13B_73A_N_REQ = M_W13B_73A_N_REQ;
  NONVITALDEPOT_DW.M_W54_N_REQ = M_W54_N_REQ;
  NONVITALDEPOT_DW.M_W73B_N_REQ = M_W73B_N_REQ;
  NONVITALDEPOT_DW.M_W13A_R_REQ = M_W13A_R_REQ;
  NONVITALDEPOT_DW.M_W13B_73A_R_REQ = M_W13B_73A_R_REQ;
  NONVITALDEPOT_DW.M_W54_R_REQ = M_W54_R_REQ;
  NONVITALDEPOT_DW.M_W73B_R_REQ = M_W73B_R_REQ;
  NONVITALDEPOT_DW.M_W13A_OOC = M_W13A_OOC;
  NONVITALDEPOT_DW.M_W13B_73A_OOC = M_W13B_73A_OOC;
  NONVITALDEPOT_DW.M_W54_OOC = M_W54_OOC;
  NONVITALDEPOT_DW.M_W73B_OOC = M_W73B_OOC;
  NONVITALDEPOT_DW.M_CTRL_RRLS_14B = M_CTRL_RRLS_14B;
  NONVITALDEPOT_DW.M_CTRL_RRLS_12 = M_CTRL_RRLS_12;
  NONVITALDEPOT_DW.M_CTRL_RRLS_32 = M_CTRL_RRLS_32;
  NONVITALDEPOT_DW.M_CTRL_RRLS_34 = M_CTRL_RRLS_34;
  NONVITALDEPOT_DW.M_CTRL_RRLS_54 = M_CTRL_RRLS_54;
  NONVITALDEPOT_DW.M_CTRL_RRLS_72 = M_CTRL_RRLS_72;
  NONVITALDEPOT_DW.M_CTRL_RRLS_74 = M_CTRL_RRLS_74;
  NONVITALDEPOT_DW.M_W13A_CTRL_SWRLS = M_W13A_CTRL_SWRLS;
  NONVITALDEPOT_DW.M_W13B_73A_CTRL_SWRLS = M_W13B_73A_CTRL_SWRLS;
  NONVITALDEPOT_DW.M_W54_CTRL_SWRLS = M_W54_CTRL_SWRLS;
  NONVITALDEPOT_DW.M_W73B_CTRL_SWRLS = M_W73B_CTRL_SWRLS;
  NONVITALDEPOT_DW.M_W13A_SWINIT = M_W13A_SWINIT;
  NONVITALDEPOT_DW.M_W13B_73A_SWINIT = M_W13B_73A_SWINIT;
  NONVITALDEPOT_DW.M_W54_SWINIT = M_W54_SWINIT;
  NONVITALDEPOT_DW.M_W73B_SWINIT = M_W73B_SWINIT;
  NONVITALDEPOT_DW.M_CTRL_RST_12 = M_CTRL_RST_12;
  NONVITALDEPOT_DW.M_CTRL_RST_14A = M_CTRL_RST_14A;
  NONVITALDEPOT_DW.M_CTRL_RST_32 = M_CTRL_RST_32;
  NONVITALDEPOT_DW.M_CTRL_RST_34 = M_CTRL_RST_34;
  NONVITALDEPOT_DW.M_CTRL_RST_54 = M_CTRL_RST_54;
  NONVITALDEPOT_DW.M_CTRL_RST_72 = M_CTRL_RST_72;
  NONVITALDEPOT_DW.M_CTRL_RST_74 = M_CTRL_RST_74;
  NONVITALDEPOT_DW.M_RS_12_14 = M_RS_12_14;
  NONVITALDEPOT_DW.M_RS_14_12 = M_RS_14_12;
  NONVITALDEPOT_DW.M_RS_14_32 = M_RS_14_32;
  NONVITALDEPOT_DW.M_RS_14_72 = M_RS_14_72;
  NONVITALDEPOT_DW.M_RS_32_14 = M_RS_32_14;
  NONVITALDEPOT_DW.M_RS_34_72 = M_RS_34_72;
  NONVITALDEPOT_DW.M_RS_54_72 = M_RS_54_72;
  NONVITALDEPOT_DW.M_RS_72_14 = M_RS_72_14;
  NONVITALDEPOT_DW.M_RS_72_34 = M_RS_72_34;
  NONVITALDEPOT_DW.M_RS_72_54 = M_RS_72_54;
  NONVITALDEPOT_DW.M_RS_72_74 = M_RS_72_74;
  NONVITALDEPOT_DW.M_RS_74_72 = M_RS_74_72;
  NONVITALDEPOT_DW.M_CBTC_TZB_ACK_OK = M_CBTC_TZB_ACK_OK;
  NONVITALDEPOT_DW.DO_INDG_BUZZ = DO_INDG_BUZZ;
  NONVITALDEPOT_DW.DO_INDG_COMM1_FAIL = DO_INDG_COMM1_FAIL;
  NONVITALDEPOT_DW.DO_INDG_COMM2_FAIL = DO_INDG_COMM2_FAIL;
  NONVITALDEPOT_DW.DO_INDG_POINT = DO_INDG_POINT;
  NONVITALDEPOT_DW.DO_INDG_SYS1_FAIL = DO_INDG_SYS1_FAIL;
  NONVITALDEPOT_DW.DO_INDG_SYS2_FAIL = DO_INDG_SYS2_FAIL;
  NONVITALDEPOT_DW.DO_INDG_TPR_BANTU = DO_INDG_TPR_BANTU;
  NONVITALDEPOT_DW.DO_INDJ_12_RGE = DO_INDJ_12_RGE;
  NONVITALDEPOT_DW.DO_INDJ_12_WGE = DO_INDJ_12_WGE;
  NONVITALDEPOT_DW.DO_INDJ_14A_RGE = DO_INDJ_14A_RGE;
  NONVITALDEPOT_DW.DO_INDJ_14A_WGE = DO_INDJ_14A_WGE;
  NONVITALDEPOT_DW.DO_INDJ_14B_RGE = DO_INDJ_14B_RGE;
  NONVITALDEPOT_DW.DO_INDJ_14B_WGE = DO_INDJ_14B_WGE;
  NONVITALDEPOT_DW.DO_INDJ_32_RGE = DO_INDJ_32_RGE;
  NONVITALDEPOT_DW.DO_INDJ_32_WGE = DO_INDJ_32_WGE;
  NONVITALDEPOT_DW.DO_INDJ_34_RGE = DO_INDJ_34_RGE;
  NONVITALDEPOT_DW.DO_INDJ_34_WGE = DO_INDJ_34_WGE;
  NONVITALDEPOT_DW.DO_INDJ_54_RGE = DO_INDJ_54_RGE;
  NONVITALDEPOT_DW.DO_INDJ_54_WGE = DO_INDJ_54_WGE;
  NONVITALDEPOT_DW.DO_INDJ_72_RGE = DO_INDJ_72_RGE;
  NONVITALDEPOT_DW.DO_INDJ_72_WGE = DO_INDJ_72_WGE;
  NONVITALDEPOT_DW.DO_INDJ_74_RGE = DO_INDJ_74_RGE;
  NONVITALDEPOT_DW.DO_INDJ_74_WGE = DO_INDJ_74_WGE;
  NONVITALDEPOT_DW.DO_INDSW_W13A_BE = DO_INDSW_W13A_BE;
  NONVITALDEPOT_DW.DO_INDSW_W13A_LE = DO_INDSW_W13A_LE;
  NONVITALDEPOT_DW.DO_INDSW_W13A_NRE = DO_INDSW_W13A_NRE;
  NONVITALDEPOT_DW.DO_INDSW_W13A_NTE = DO_INDSW_W13A_NTE;
  NONVITALDEPOT_DW.DO_INDSW_W13A_NWE = DO_INDSW_W13A_NWE;
  NONVITALDEPOT_DW.DO_INDSW_W13A_NWRE = DO_INDSW_W13A_NWRE;
  NONVITALDEPOT_DW.DO_INDSW_W13A_NWTE = DO_INDSW_W13A_NWTE;
  NONVITALDEPOT_DW.DO_INDSW_W13A_RRE = DO_INDSW_W13A_RRE;
  NONVITALDEPOT_DW.DO_INDSW_W13A_RTE = DO_INDSW_W13A_RTE;
  NONVITALDEPOT_DW.DO_INDSW_W13A_RWE = DO_INDSW_W13A_RWE;
  NONVITALDEPOT_DW.DO_INDSW_W13A_RWRE = DO_INDSW_W13A_RWRE;
  NONVITALDEPOT_DW.DO_INDSW_W13A_RWTE = DO_INDSW_W13A_RWTE;
  NONVITALDEPOT_DW.DO_INDSW_W13B_BE = DO_INDSW_W13B_BE;
  NONVITALDEPOT_DW.DO_INDSW_W13B_LE = DO_INDSW_W13B_LE;
  NONVITALDEPOT_DW.DO_INDSW_W13B_NRE = DO_INDSW_W13B_NRE;
  NONVITALDEPOT_DW.DO_INDSW_W13B_NTE = DO_INDSW_W13B_NTE;
  NONVITALDEPOT_DW.DO_INDSW_W13B_NWE = DO_INDSW_W13B_NWE;
  NONVITALDEPOT_DW.DO_INDSW_W13B_NWRE = DO_INDSW_W13B_NWRE;
  NONVITALDEPOT_DW.DO_INDSW_W13B_NWTE = DO_INDSW_W13B_NWTE;
  NONVITALDEPOT_DW.DO_INDSW_W13B_RRE = DO_INDSW_W13B_RRE;
  NONVITALDEPOT_DW.DO_INDSW_W13B_RTE = DO_INDSW_W13B_RTE;
  NONVITALDEPOT_DW.DO_INDSW_W13B_RWE = DO_INDSW_W13B_RWE;
  NONVITALDEPOT_DW.DO_INDSW_W13B_RWRE = DO_INDSW_W13B_RWRE;
  NONVITALDEPOT_DW.DO_INDSW_W13B_RWTE = DO_INDSW_W13B_RWTE;
  NONVITALDEPOT_DW.DO_INDSW_W54_BE = DO_INDSW_W54_BE;
  NONVITALDEPOT_DW.DO_INDSW_W54_LE = DO_INDSW_W54_LE;
  NONVITALDEPOT_DW.DO_INDSW_W54_NRE = DO_INDSW_W54_NRE;
  NONVITALDEPOT_DW.DO_INDSW_W54_NTE = DO_INDSW_W54_NTE;
  NONVITALDEPOT_DW.DO_INDSW_W54_NWE = DO_INDSW_W54_NWE;
  NONVITALDEPOT_DW.DO_INDSW_W54_NWRE = DO_INDSW_W54_NWRE;
  NONVITALDEPOT_DW.DO_INDSW_W54_NWTE = DO_INDSW_W54_NWTE;
  NONVITALDEPOT_DW.DO_INDSW_W54_RRE = DO_INDSW_W54_RRE;
  NONVITALDEPOT_DW.DO_INDSW_W54_RTE = DO_INDSW_W54_RTE;
  NONVITALDEPOT_DW.DO_INDSW_W54_RWE = DO_INDSW_W54_RWE;
  NONVITALDEPOT_DW.DO_INDSW_W54_RWRE = DO_INDSW_W54_RWRE;
  NONVITALDEPOT_DW.DO_INDSW_W54_RWTE = DO_INDSW_W54_RWTE;
  NONVITALDEPOT_DW.DO_INDSW_W73A_BE = DO_INDSW_W73A_BE;
  NONVITALDEPOT_DW.DO_INDSW_W73A_LE = DO_INDSW_W73A_LE;
  NONVITALDEPOT_DW.DO_INDSW_W73A_NRE = DO_INDSW_W73A_NRE;
  NONVITALDEPOT_DW.DO_INDSW_W73A_NTE = DO_INDSW_W73A_NTE;
  NONVITALDEPOT_DW.DO_INDSW_W73A_NWE = DO_INDSW_W73A_NWE;
  NONVITALDEPOT_DW.DO_INDSW_W73A_NWRE = DO_INDSW_W73A_NWRE;
  NONVITALDEPOT_DW.DO_INDSW_W73A_NWTE = DO_INDSW_W73A_NWTE;
  NONVITALDEPOT_DW.DO_INDSW_W73A_RRE = DO_INDSW_W73A_RRE;
  NONVITALDEPOT_DW.DO_INDSW_W73A_RTE = DO_INDSW_W73A_RTE;
  NONVITALDEPOT_DW.DO_INDSW_W73A_RWE = DO_INDSW_W73A_RWE;
  NONVITALDEPOT_DW.DO_INDSW_W73A_RWRE = DO_INDSW_W73A_RWRE;
  NONVITALDEPOT_DW.DO_INDSW_W73A_RWTE = DO_INDSW_W73A_RWTE;
  NONVITALDEPOT_DW.DO_INDSW_W73B_BE = DO_INDSW_W73B_BE;
  NONVITALDEPOT_DW.DO_INDSW_W73B_LE = DO_INDSW_W73B_LE;
  NONVITALDEPOT_DW.DO_INDSW_W73B_NRE = DO_INDSW_W73B_NRE;
  NONVITALDEPOT_DW.DO_INDSW_W73B_NTE = DO_INDSW_W73B_NTE;
  NONVITALDEPOT_DW.DO_INDSW_W73B_NWE = DO_INDSW_W73B_NWE;
  NONVITALDEPOT_DW.DO_INDSW_W73B_NWRE = DO_INDSW_W73B_NWRE;
  NONVITALDEPOT_DW.DO_INDSW_W73B_NWTE = DO_INDSW_W73B_NWTE;
  NONVITALDEPOT_DW.DO_INDSW_W73B_RRE = DO_INDSW_W73B_RRE;
  NONVITALDEPOT_DW.DO_INDSW_W73B_RTE = DO_INDSW_W73B_RTE;
  NONVITALDEPOT_DW.DO_INDSW_W73B_RWE = DO_INDSW_W73B_RWE;
  NONVITALDEPOT_DW.DO_INDSW_W73B_RWRE = DO_INDSW_W73B_RWRE;
  NONVITALDEPOT_DW.DO_INDSW_W73B_RWTE = DO_INDSW_W73B_RWTE;
  NONVITALDEPOT_DW.DO_INDT_RE_12 = DO_INDT_RE_12;
  NONVITALDEPOT_DW.DO_INDT_TE_12 = DO_INDT_TE_12;
  NONVITALDEPOT_DW.DO_INDT_RE_13 = DO_INDT_RE_13;
  NONVITALDEPOT_DW.DO_INDT_TE_13 = DO_INDT_TE_13;
  NONVITALDEPOT_DW.DO_INDT_RE_14 = DO_INDT_RE_14;
  NONVITALDEPOT_DW.DO_INDT_TE_14 = DO_INDT_TE_14;
  NONVITALDEPOT_DW.DO_INDT_RE_32 = DO_INDT_RE_32;
  NONVITALDEPOT_DW.DO_INDT_TE_32 = DO_INDT_TE_32;
  NONVITALDEPOT_DW.DO_INDT_RE_34 = DO_INDT_RE_34;
  NONVITALDEPOT_DW.DO_INDT_TE_34 = DO_INDT_TE_34;
  NONVITALDEPOT_DW.DO_INDT_RE_54 = DO_INDT_RE_54;
  NONVITALDEPOT_DW.DO_INDT_TE_54 = DO_INDT_TE_54;
  NONVITALDEPOT_DW.DO_INDT_RE_72 = DO_INDT_RE_72;
  NONVITALDEPOT_DW.DO_INDT_TE_72 = DO_INDT_TE_72;
  NONVITALDEPOT_DW.DO_INDT_RE_73A = DO_INDT_RE_73A;
  NONVITALDEPOT_DW.DO_INDT_TE_73A = DO_INDT_TE_73A;
  NONVITALDEPOT_DW.DO_INDT_RE_73B = DO_INDT_RE_73B;
  NONVITALDEPOT_DW.DO_INDT_TE_73B = DO_INDT_TE_73B;
  NONVITALDEPOT_DW.DO_INDT_RE_74 = DO_INDT_RE_74;
  NONVITALDEPOT_DW.DO_INDT_TE_74 = DO_INDT_TE_74;
  NONVITALDEPOT_DW.DO_INDPB_L12 = DO_INDPB_L12;
  NONVITALDEPOT_DW.DO_INDPB_L14A = DO_INDPB_L14A;
  NONVITALDEPOT_DW.DO_INDPB_L14B = DO_INDPB_L14B;
  NONVITALDEPOT_DW.DO_INDPB_L32 = DO_INDPB_L32;
  NONVITALDEPOT_DW.DO_INDPB_L34 = DO_INDPB_L34;
  NONVITALDEPOT_DW.DO_INDPB_L54 = DO_INDPB_L54;
  NONVITALDEPOT_DW.DO_INDPB_L72 = DO_INDPB_L72;
  NONVITALDEPOT_DW.DO_INDPB_L74 = DO_INDPB_L74;
  NONVITALDEPOT_DW.DO_INDPB_X12 = DO_INDPB_X12;
  NONVITALDEPOT_DW.DO_INDPB_X32 = DO_INDPB_X32;
  NONVITALDEPOT_DW.DO_INDPB_X34 = DO_INDPB_X34;
  NONVITALDEPOT_DW.DO_INDPB_X54 = DO_INDPB_X54;
  NONVITALDEPOT_DW.DO_INDPB_X72 = DO_INDPB_X72;
  NONVITALDEPOT_DW.DO_INDPB_X74 = DO_INDPB_X74;
  NONVITALDEPOT_DW.DO_INDAR_L14B = DO_INDAR_L14B;
  NONVITALDEPOT_DW.DO_FE_IN = DO_FE_IN;
  NONVITALDEPOT_DW.DO_FLE_IN = DO_FLE_IN;
  NONVITALDEPOT_DW.DO_FE_OUT = DO_FE_OUT;
  NONVITALDEPOT_DW.DO_FLE_OUT = DO_FLE_OUT;
  NONVITALDEPOT_DW.DO_CT_TBW = DO_CT_TBW;
  NONVITALDEPOT_DW.DO_CT_TPR = DO_CT_TPR;
  NONVITALDEPOT_DW.DO_CT_TWT = DO_CT_TWT;
  NONVITALDEPOT_DW.DO_INDCBTC_TZB = DO_INDCBTC_TZB;
  NONVITALDEPOT_DW.M_GV_RR = M_GV_RR;
  NONVITALDEPOT_DW.M_GV_RR_OK = M_GV_RR_OK;
  NONVITALDEPOT_DW.M_TPBP_73B = M_TPBP_73B;
  NONVITALDEPOT_DW.M_TPBP_73A = M_TPBP_73A;
  NONVITALDEPOT_DW.M_TPBP_13 = M_TPBP_13;
  NONVITALDEPOT_DW.M_RD_L12_GR = M_RD_L12_GR;
  NONVITALDEPOT_DW.OR4 = OR4;
  NONVITALDEPOT_DW.NOT8 = NOT8;
  NONVITALDEPOT_DW.M_RD_L14A_GR = M_RD_L14A_GR;
  NONVITALDEPOT_DW.OR1_m = OR1_m;
  NONVITALDEPOT_DW.NOT8_l = NOT8_l;
  NONVITALDEPOT_DW.M_RD_L32_GR = M_RD_L32_GR;
  NONVITALDEPOT_DW.OR4_b = OR4_b;
  NONVITALDEPOT_DW.NOT8_b = NOT8_b;
  NONVITALDEPOT_DW.M_RD_L34_GR = M_RD_L34_GR;
  NONVITALDEPOT_DW.OR4_m = OR4_m;
  NONVITALDEPOT_DW.NOT8_p = NOT8_p;
  NONVITALDEPOT_DW.M_RD_L54_GR = M_RD_L54_GR;
  NONVITALDEPOT_DW.OR4_g = OR4_g;
  NONVITALDEPOT_DW.NOT8_pn = NOT8_pn;
  NONVITALDEPOT_DW.M_RD_L72_GR = M_RD_L72_GR;
  NONVITALDEPOT_DW.OR4_p = OR4_p;
  NONVITALDEPOT_DW.NOT8_n = NOT8_n;
  NONVITALDEPOT_DW.M_RD_L74_GR = M_RD_L74_GR;
  NONVITALDEPOT_DW.OR4_gc = OR4_gc;
  NONVITALDEPOT_DW.NOT8_c = NOT8_c;
  NONVITALDEPOT_DW.M_W13A_BLOCK = M_W13A_BLOCK;
  NONVITALDEPOT_DW.M_W13B_73A_BLOCK = M_W13B_73A_BLOCK;
  NONVITALDEPOT_DW.M_W54_BLOCK = M_W54_BLOCK;
  NONVITALDEPOT_DW.M_W73B_BLOCK = M_W73B_BLOCK;
  NONVITALDEPOT_DW.M_W13A_CTRL_CAL = M_W13A_CTRL_CAL;
  NONVITALDEPOT_DW.M_W13A_CTRL_TRAIL = M_W13A_CTRL_TRAIL;
  NONVITALDEPOT_DW.M_W13A_CTRL_RST = M_W13A_CTRL_RST;
  NONVITALDEPOT_DW.M_W13A_CTRL_B = M_W13A_CTRL_B;
  NONVITALDEPOT_DW.M_W13A_OOC_RD = M_W13A_OOC_RD;
  NONVITALDEPOT_DW.M_W13A_BACK_TO_N = M_W13A_BACK_TO_N;
  NONVITALDEPOT_DW.M_W13A_BACK_TO_R = M_W13A_BACK_TO_R;
  NONVITALDEPOT_DW.M_W13A_N = M_W13A_N;
  NONVITALDEPOT_DW.M_W13A_N_BLOCK = M_W13A_N_BLOCK;
  NONVITALDEPOT_DW.M_W13A_R = M_W13A_R;
  NONVITALDEPOT_DW.M_W13A_R_BLOCK = M_W13A_R_BLOCK;
  NONVITALDEPOT_DW.M_W13A_START = M_W13A_START;
  NONVITALDEPOT_DW.M_W13B_73A_CTRL_CAL = M_W13B_73A_CTRL_CAL;
  NONVITALDEPOT_DW.M_W13B_73A_CTRL_TRAIL = M_W13B_73A_CTRL_TRAIL;
  NONVITALDEPOT_DW.M_W13B_73A_CTRL_RST = M_W13B_73A_CTRL_RST;
  NONVITALDEPOT_DW.M_W13B_73A_CTRL_B = M_W13B_73A_CTRL_B;
  NONVITALDEPOT_DW.M_W13B_73A_OOC_RD = M_W13B_73A_OOC_RD;
  NONVITALDEPOT_DW.M_W13B_73A_BACK_TO_N = M_W13B_73A_BACK_TO_N;
  NONVITALDEPOT_DW.M_W13B_73A_BACK_TO_R = M_W13B_73A_BACK_TO_R;
  NONVITALDEPOT_DW.M_W13B_73A_N = M_W13B_73A_N;
  NONVITALDEPOT_DW.M_W13B_73A_N_BLOCK = M_W13B_73A_N_BLOCK;
  NONVITALDEPOT_DW.M_W13B_73A_R = M_W13B_73A_R;
  NONVITALDEPOT_DW.M_W13B_73A_R_BLOCK = M_W13B_73A_R_BLOCK;
  NONVITALDEPOT_DW.M_W13B_73A_START = M_W13B_73A_START;
  NONVITALDEPOT_DW.M_W54_CTRL_CAL = M_W54_CTRL_CAL;
  NONVITALDEPOT_DW.M_W54_CTRL_TRAIL = M_W54_CTRL_TRAIL;
  NONVITALDEPOT_DW.M_W54_CTRL_RST = M_W54_CTRL_RST;
  NONVITALDEPOT_DW.M_W54_CTRL_B = M_W54_CTRL_B;
  NONVITALDEPOT_DW.M_W54_OOC_RD = M_W54_OOC_RD;
  NONVITALDEPOT_DW.M_W54_BACK_TO_N = M_W54_BACK_TO_N;
  NONVITALDEPOT_DW.M_W54_BACK_TO_R = M_W54_BACK_TO_R;
  NONVITALDEPOT_DW.M_W54_N = M_W54_N;
  NONVITALDEPOT_DW.M_W54_N_BLOCK = M_W54_N_BLOCK;
  NONVITALDEPOT_DW.M_W54_R = M_W54_R;
  NONVITALDEPOT_DW.M_W54_R_BLOCK = M_W54_R_BLOCK;
  NONVITALDEPOT_DW.M_W54_START = M_W54_START;
  NONVITALDEPOT_DW.M_W73B_CTRL_CAL = M_W73B_CTRL_CAL;
  NONVITALDEPOT_DW.M_W73B_CTRL_TRAIL = M_W73B_CTRL_TRAIL;
  NONVITALDEPOT_DW.M_W73B_CTRL_RST = M_W73B_CTRL_RST;
  NONVITALDEPOT_DW.M_W73B_CTRL_B = M_W73B_CTRL_B;
  NONVITALDEPOT_DW.M_W73B_OOC_RD = M_W73B_OOC_RD;
  NONVITALDEPOT_DW.M_W73B_BACK_TO_N = M_W73B_BACK_TO_N;
  NONVITALDEPOT_DW.M_W73B_BACK_TO_R = M_W73B_BACK_TO_R;
  NONVITALDEPOT_DW.M_W73B_N_BLOCK = M_W73B_N_BLOCK;
  NONVITALDEPOT_DW.M_W73B_R_BLOCK = M_W73B_R_BLOCK;
  NONVITALDEPOT_DW.M_W73B_START = M_W73B_START;
  NONVITALDEPOT_DW.M_B_12_14 = M_B_12_14;
  NONVITALDEPOT_DW.M_B_14_12 = M_B_14_12;
  NONVITALDEPOT_DW.M_B_14_32 = M_B_14_32;
  NONVITALDEPOT_DW.M_B_14_72 = M_B_14_72;
  NONVITALDEPOT_DW.M_B_32_14 = M_B_32_14;
  NONVITALDEPOT_DW.M_B_34_72 = M_B_34_72;
  NONVITALDEPOT_DW.M_B_54_72 = M_B_54_72;
  NONVITALDEPOT_DW.M_B_72_14 = M_B_72_14;
  NONVITALDEPOT_DW.M_B_72_34 = M_B_72_34;
  NONVITALDEPOT_DW.M_B_72_54 = M_B_72_54;
  NONVITALDEPOT_DW.M_B_72_74 = M_B_72_74;
  NONVITALDEPOT_DW.M_B_74_72 = M_B_74_72;
  NONVITALDEPOT_DW.M_FAIL_COMM1_F = M_FAIL_COMM1_F;
  NONVITALDEPOT_DW.M_FAIL_COMM2_F = M_FAIL_COMM2_F;
  NONVITALDEPOT_DW.M_FAIL_SYSTEM1_F = M_FAIL_SYSTEM1_F;
  NONVITALDEPOT_DW.M_FAIL_SYSTEM2_F = M_FAIL_SYSTEM2_F;
  NONVITALDEPOT_DW.M_CTRL_AA = M_CTRL_AA;
  NONVITALDEPOT_DW.M_PBCTRL_14_12 = M_PBCTRL_14_12;
  NONVITALDEPOT_DW.M_PBCTRL_14_32 = M_PBCTRL_14_32;
  NONVITALDEPOT_DW.M_PBCTRL_72_14 = M_PBCTRL_72_14;
  NONVITALDEPOT_DW.M_PBCTRL_72_34 = M_PBCTRL_72_34;
  NONVITALDEPOT_DW.M_PBCTRL_72_54 = M_PBCTRL_72_54;
  NONVITALDEPOT_DW.M_PBCTRL_72_74 = M_PBCTRL_72_74;
  NONVITALDEPOT_DW.M_PBCTRL_12_14 = M_PBCTRL_12_14;
  NONVITALDEPOT_DW.M_PBCTRL_32_14 = M_PBCTRL_32_14;
  NONVITALDEPOT_DW.M_PBCTRL_14_72 = M_PBCTRL_14_72;
  NONVITALDEPOT_DW.M_PBCTRL_34_72 = M_PBCTRL_34_72;
  NONVITALDEPOT_DW.M_PBCTRL_54_72 = M_PBCTRL_54_72;
  NONVITALDEPOT_DW.M_PBCTRL_74_72 = M_PBCTRL_74_72;
  NONVITALDEPOT_DW.M_W13A_F_ACK = M_W13A_F_ACK;
  NONVITALDEPOT_DW.M_W13A_FAIL = M_W13A_FAIL;
  NONVITALDEPOT_DW.M_W13A_CTRL_TRAIL_Z = M_W13A_CTRL_TRAIL_Z;
  NONVITALDEPOT_DW.M_W13B_73A_F_ACK = M_W13B_73A_F_ACK;
  NONVITALDEPOT_DW.M_W13B_73A_FAIL = M_W13B_73A_FAIL;
  NONVITALDEPOT_DW.M_W13B_73A_CTRL_TRAIL_Z = M_W13B_73A_CTRL_TRAIL_Z;
  NONVITALDEPOT_DW.M_W54_F_ACK = M_W54_F_ACK;
  NONVITALDEPOT_DW.M_W54_FAIL = M_W54_FAIL;
  NONVITALDEPOT_DW.M_W54_CTRL_TRAIL_Z = M_W54_CTRL_TRAIL_Z;
  NONVITALDEPOT_DW.M_W73B_F_ACK = M_W73B_F_ACK;
  NONVITALDEPOT_DW.M_W73B_FAIL = M_W73B_FAIL;
  NONVITALDEPOT_DW.M_B_L12 = M_B_L12;
  NONVITALDEPOT_DW.M_B_L14A = M_B_L14A;
  NONVITALDEPOT_DW.M_B_L32 = M_B_L32;
  NONVITALDEPOT_DW.M_B_L34 = M_B_L34;
  NONVITALDEPOT_DW.M_B_L54 = M_B_L54;
  NONVITALDEPOT_DW.M_B_L72 = M_B_L72;

  /* DiscretePulseGenerator: '<S3>/0.5S' */
  NONVITALDEPOT_DW.clockTickCounter = clockTickCounter_0;

  /* DiscretePulseGenerator: '<S3>/1S' */
  NONVITALDEPOT_DW.clockTickCounter_m = clockTickCounter_m_0;
}

/* Update for referenced model: 'NONVITALDEPOT' */
void NONVITALDEPOT_Update(void)
{
  RT_MODEL_NONVITALDEPOT_T *const NONVITALDEPOT_M = &(NONVITALDEPOT_MdlrefDW.rtm);
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Update for Memory: '<S18>/Memory' */
    NONVITALDEPOT_DW.Memory_PreviousInput = NONVITALDEPOT_DW.OR1;

    /* Update for Memory: '<S18>/Memory1' */
    NONVITALDEPOT_DW.Memory1_PreviousInput = NONVITALDEPOT_DW.OR2;
  }

  /* Update for Atomic SubSystem: '<S19>/DNV_TON2' */
  DNV_TON_Update(NONVITALDEPOT_M, NONVITALDEPOT_DW.NOT3,
                 &NONVITALDEPOT_DW.DNV_TON2);

  /* End of Update for SubSystem: '<S19>/DNV_TON2' */

  /* Update for Atomic SubSystem: '<S19>/DNV_TON1' */
  DNV_TON_Update(NONVITALDEPOT_M, NONVITALDEPOT_DW.NOT2,
                 &NONVITALDEPOT_DW.DNV_TON1);

  /* End of Update for SubSystem: '<S19>/DNV_TON1' */

  /* Update for Atomic SubSystem: '<S19>/DNV_TON' */
  DNV_TON_Update(NONVITALDEPOT_M, NONVITALDEPOT_DW.NOT1,
                 &NONVITALDEPOT_DW.DNV_TON_h);

  /* End of Update for SubSystem: '<S19>/DNV_TON' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Update for Memory: '<S35>/Memory1' */
    NONVITALDEPOT_DW.Memory1_PreviousInput_j = NONVITALDEPOT_DW.L12GRDO;

    /* Update for Memory: '<S35>/Memory2' */
    NONVITALDEPOT_DW.Memory2_PreviousInput = NONVITALDEPOT_DW.AND13;
  }

  /* Update for Atomic SubSystem: '<S35>/DNV_TOF' */
  DNV_TOF_Update(NONVITALDEPOT_M, NONVITALDEPOT_DW.Memory1,
                 &NONVITALDEPOT_DW.DNV_TOF_n);

  /* End of Update for SubSystem: '<S35>/DNV_TOF' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Update for Memory: '<S36>/Memory1' */
    NONVITALDEPOT_DW.Memory1_PreviousInput_o = NONVITALDEPOT_DW.L14AGRDO;

    /* Update for Memory: '<S36>/Memory3' */
    NONVITALDEPOT_DW.Memory3_PreviousInput = NONVITALDEPOT_DW.AND1;
  }

  /* Update for Atomic SubSystem: '<S36>/DNV_TOF' */
  DNV_TOF_Update(NONVITALDEPOT_M, NONVITALDEPOT_DW.Memory1_c,
                 &NONVITALDEPOT_DW.DNV_TOF_c);

  /* End of Update for SubSystem: '<S36>/DNV_TOF' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Update for Memory: '<S38>/Memory1' */
    NONVITALDEPOT_DW.Memory1_PreviousInput_a = NONVITALDEPOT_DW.L32GRDO;

    /* Update for Memory: '<S38>/Memory2' */
    NONVITALDEPOT_DW.Memory2_PreviousInput_e = NONVITALDEPOT_DW.AND13_d;
  }

  /* Update for Atomic SubSystem: '<S38>/DNV_TOF' */
  DNV_TOF_Update(NONVITALDEPOT_M, NONVITALDEPOT_DW.Memory1_l,
                 &NONVITALDEPOT_DW.DNV_TOF_g);

  /* End of Update for SubSystem: '<S38>/DNV_TOF' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Update for Memory: '<S39>/Memory1' */
    NONVITALDEPOT_DW.Memory1_PreviousInput_os = NONVITALDEPOT_DW.L34GRDO;

    /* Update for Memory: '<S39>/Memory2' */
    NONVITALDEPOT_DW.Memory2_PreviousInput_p = NONVITALDEPOT_DW.AND13_b;
  }

  /* Update for Atomic SubSystem: '<S39>/DNV_TOF' */
  DNV_TOF_Update(NONVITALDEPOT_M, NONVITALDEPOT_DW.Memory1_o,
                 &NONVITALDEPOT_DW.DNV_TOF_k);

  /* End of Update for SubSystem: '<S39>/DNV_TOF' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Update for Memory: '<S40>/Memory1' */
    NONVITALDEPOT_DW.Memory1_PreviousInput_d = NONVITALDEPOT_DW.L54GRDO;

    /* Update for Memory: '<S40>/Memory2' */
    NONVITALDEPOT_DW.Memory2_PreviousInput_k = NONVITALDEPOT_DW.AND13_n;
  }

  /* Update for Atomic SubSystem: '<S40>/DNV_TOF' */
  DNV_TOF_Update(NONVITALDEPOT_M, NONVITALDEPOT_DW.Memory1_oh,
                 &NONVITALDEPOT_DW.DNV_TOF_f);

  /* End of Update for SubSystem: '<S40>/DNV_TOF' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Update for Memory: '<S41>/Memory1' */
    NONVITALDEPOT_DW.Memory1_PreviousInput_g = NONVITALDEPOT_DW.L72GRDO;

    /* Update for Memory: '<S41>/Memory2' */
    NONVITALDEPOT_DW.Memory2_PreviousInput_g = NONVITALDEPOT_DW.AND13_d5;
  }

  /* Update for Atomic SubSystem: '<S41>/DNV_TOF' */
  DNV_TOF_Update(NONVITALDEPOT_M, NONVITALDEPOT_DW.Memory1_m,
                 &NONVITALDEPOT_DW.DNV_TOF_p);

  /* End of Update for SubSystem: '<S41>/DNV_TOF' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Update for Memory: '<S42>/Memory1' */
    NONVITALDEPOT_DW.Memory1_PreviousInput_l = NONVITALDEPOT_DW.L74GRDO;

    /* Update for Memory: '<S42>/Memory2' */
    NONVITALDEPOT_DW.Memory2_PreviousInput_kt = NONVITALDEPOT_DW.AND13_m;
  }

  /* Update for Atomic SubSystem: '<S42>/DNV_TOF' */
  DNV_TOF_Update(NONVITALDEPOT_M, NONVITALDEPOT_DW.Memory1_d,
                 &NONVITALDEPOT_DW.DNV_TOF_pb);

  /* End of Update for SubSystem: '<S42>/DNV_TOF' */

  /* Update for Atomic SubSystem: '<S132>/INTERLOCKING POINT' */
  D_IL_POINT_Update(NONVITALDEPOT_M, &NONVITALDEPOT_DW.INTERLOCKINGPOINT_ea);

  /* End of Update for SubSystem: '<S132>/INTERLOCKING POINT' */

  /* Update for Atomic SubSystem: '<S133>/INTERLOCKING POINT' */
  D_IL_POINT_Update(NONVITALDEPOT_M, &NONVITALDEPOT_DW.INTERLOCKINGPOINT_j);

  /* End of Update for SubSystem: '<S133>/INTERLOCKING POINT' */

  /* Update for Atomic SubSystem: '<S134>/INTERLOCKING POINT' */
  D_IL_POINT_Update(NONVITALDEPOT_M, &NONVITALDEPOT_DW.INTERLOCKINGPOINT_jl);

  /* End of Update for SubSystem: '<S134>/INTERLOCKING POINT' */

  /* Update for Atomic SubSystem: '<S135>/INTERLOCKING POINT' */
  D_IL_POINT_Update(NONVITALDEPOT_M, &NONVITALDEPOT_DW.INTERLOCKINGPOINT_a);

  /* End of Update for SubSystem: '<S135>/INTERLOCKING POINT' */

  /* Update for Atomic SubSystem: '<S254>/POINT FAIL' */
  D_POINT_FAIL_Update(NONVITALDEPOT_M, &NONVITALDEPOT_DW.POINTFAIL);

  /* End of Update for SubSystem: '<S254>/POINT FAIL' */

  /* Update for Atomic SubSystem: '<S255>/POINT FAIL' */
  D_POINT_FAIL_Update(NONVITALDEPOT_M, &NONVITALDEPOT_DW.POINTFAIL_e);

  /* End of Update for SubSystem: '<S255>/POINT FAIL' */

  /* Update for Atomic SubSystem: '<S256>/POINT FAIL' */
  D_POINT_FAIL_Update(NONVITALDEPOT_M, &NONVITALDEPOT_DW.POINTFAIL_k);

  /* End of Update for SubSystem: '<S256>/POINT FAIL' */

  /* Update for Atomic SubSystem: '<S257>/POINT FAIL' */
  D_POINT_FAIL_Update(NONVITALDEPOT_M, &NONVITALDEPOT_DW.POINTFAIL_c);

  /* End of Update for SubSystem: '<S257>/POINT FAIL' */

  /* Update for Atomic SubSystem: '<S282>/DNV_TOF' */
  DNV_TOF_Update(NONVITALDEPOT_M, NONVITALDEPOT_DW.AND1_p,
                 &NONVITALDEPOT_DW.DNV_TOF_a);

  /* End of Update for SubSystem: '<S282>/DNV_TOF' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Update for UnitDelay: '<S291>/Delay Input1'
     *
     * Block description for '<S291>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALDEPOT_DW.DelayInput1_DSTATE = NONVITALDEPOT_DW.AND1_m;
  }

  /* Update for Atomic SubSystem: '<S283>/DNV_TOF' */
  DNV_TOF_Update(NONVITALDEPOT_M, NONVITALDEPOT_DW.FixPtRelationalOperator,
                 &NONVITALDEPOT_DW.DNV_TOF_fn);

  /* End of Update for SubSystem: '<S283>/DNV_TOF' */
  if (rtmIsMajorTimeStep(NONVITALDEPOT_M)) {
    /* Update for UnitDelay: '<S297>/Delay Input1'
     *
     * Block description for '<S297>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALDEPOT_DW.DelayInput1_DSTATE_p = NONVITALDEPOT_DW.AND14;
  }

  /* Update for Atomic SubSystem: '<S284>/DNV_TOF' */
  DNV_TOF_Update(NONVITALDEPOT_M, NONVITALDEPOT_DW.FixPtRelationalOperator_i,
                 &NONVITALDEPOT_DW.DNV_TOF_h);

  /* End of Update for SubSystem: '<S284>/DNV_TOF' */

  /* Update for Atomic SubSystem: '<S326>/SIGNAL BLOCK' */
  D_SIG_B_Update(NONVITALDEPOT_M, &NONVITALDEPOT_DW.SIGNALBLOCK);

  /* End of Update for SubSystem: '<S326>/SIGNAL BLOCK' */

  /* Update for Atomic SubSystem: '<S327>/SIGNAL BLOCK' */
  D_SIG_B_Update(NONVITALDEPOT_M, &NONVITALDEPOT_DW.SIGNALBLOCK_a);

  /* End of Update for SubSystem: '<S327>/SIGNAL BLOCK' */

  /* Update for Atomic SubSystem: '<S328>/SIGNAL BLOCK' */
  D_SIG_B_Update(NONVITALDEPOT_M, &NONVITALDEPOT_DW.SIGNALBLOCK_c);

  /* End of Update for SubSystem: '<S328>/SIGNAL BLOCK' */

  /* Update for Atomic SubSystem: '<S329>/SIGNAL BLOCK' */
  D_SIG_B_Update(NONVITALDEPOT_M, &NONVITALDEPOT_DW.SIGNALBLOCK_d);

  /* End of Update for SubSystem: '<S329>/SIGNAL BLOCK' */

  /* Update for Atomic SubSystem: '<S330>/SIGNAL BLOCK' */
  D_SIG_B_Update(NONVITALDEPOT_M, &NONVITALDEPOT_DW.SIGNALBLOCK_cy);

  /* End of Update for SubSystem: '<S330>/SIGNAL BLOCK' */

  /* Update for Atomic SubSystem: '<S331>/SIGNAL BLOCK' */
  D_SIG_B_Update(NONVITALDEPOT_M, &NONVITALDEPOT_DW.SIGNALBLOCK_e);

  /* End of Update for SubSystem: '<S331>/SIGNAL BLOCK' */

  /* Update for Atomic SubSystem: '<S332>/SIGNAL BLOCK' */
  D_SIG_B_Update(NONVITALDEPOT_M, &NONVITALDEPOT_DW.SIGNALBLOCK_n);

  /* End of Update for SubSystem: '<S332>/SIGNAL BLOCK' */
}

/* Model initialize function */
void NONVITALDEPOT_initialize(const char_T **rt_errorStatus, RTWSolverInfo
  *rt_solverInfo, const rtTimingBridge *timingBridge, int_T mdlref_TID0, int_T
  mdlref_TID1)
{
  RT_MODEL_NONVITALDEPOT_T *const NONVITALDEPOT_M = &(NONVITALDEPOT_MdlrefDW.rtm);

  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)NONVITALDEPOT_M, 0,
                sizeof(RT_MODEL_NONVITALDEPOT_T));

  /* setup the global timing engine */
  NONVITALDEPOT_GlobalTID[0] = mdlref_TID0;
  NONVITALDEPOT_GlobalTID[1] = mdlref_TID1;
  NONVITALDEPOT_TimingBrdg = timingBridge;

  /* initialize error status */
  rtmSetErrorStatusPointer(NONVITALDEPOT_M, rt_errorStatus);

  /* initialize RTWSolverInfo */
  NONVITALDEPOT_M->solverInfo = (rt_solverInfo);

  /* Set the Timing fields to the appropriate data in the RTWSolverInfo */
  rtmSetSimTimeStepPointer(NONVITALDEPOT_M, rtsiGetSimTimeStepPtr
    (NONVITALDEPOT_M->solverInfo));
  NONVITALDEPOT_M->Timing.stepSize0 = (rtsiGetStepSize
    (NONVITALDEPOT_M->solverInfo));

  /* states (dwork) */
  (void) memset((void *)&NONVITALDEPOT_DW, 0,
                sizeof(DW_NONVITALDEPOT_f_T));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
