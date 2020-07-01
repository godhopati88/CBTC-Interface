/*
 * File: NONVITALMAIN.c
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

#include "NONVITALMAIN.h"
#include "NONVITALMAIN_private.h"

int_T NONVITALMAIN_GlobalTID[2];
const rtTimingBridge *NONVITALMAIN_TimingBrdg;
MdlrefDW_NONVITALMAIN_T NONVITALMAIN_MdlrefDW;

/* Block states (auto storage) */
DW_NONVITALMAIN_f_T NONVITALMAIN_DW;

/*
 * System initialize for atomic system:
 *    '<S19>/TON'
 *    '<S19>/TON1'
 *    '<S19>/TON2'
 *    '<S19>/TON3'
 *    '<S19>/TON4'
 *    '<S19>/TON5'
 *    '<S19>/TON6'
 *    '<S19>/TON7'
 *    '<S537>/MNV_TON1'
 *    '<S543>/MNV_TON1'
 *    ...
 */
void MNV_TON_Init(DW_MNV_TON_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S20>/TON' */
  /* InitializeConditions for Memory: '<S31>/memory' */
  localDW->memory_PreviousInput = -1.0E+99;

  /* End of SystemInitialize for SubSystem: '<S20>/TON' */
}

/*
 * Outputs for atomic system:
 *    '<S19>/TON'
 *    '<S19>/TON1'
 *    '<S19>/TON2'
 *    '<S19>/TON3'
 *    '<S19>/TON4'
 *    '<S19>/TON5'
 *    '<S19>/TON6'
 *    '<S19>/TON7'
 *    '<S537>/MNV_TON1'
 *    '<S543>/MNV_TON1'
 *    ...
 */
void MNV_TON(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M, boolean_T rtu_IN,
             DW_MNV_TON_T *localDW, real_T rtp_TIME)
{
  real_T rtb_CLOCK;
  boolean_T LogicalOperator1;
  real_T memory;
  memory = localDW->memory;
  LogicalOperator1 = localDW->LogicalOperator1;

  /* Clock: '<S20>/CLOCK' */
  rtb_CLOCK = (*(NONVITALMAIN_TimingBrdg->taskTime[NONVITALMAIN_GlobalTID[0]]));

  /* Outputs for Atomic SubSystem: '<S20>/TON' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Logic: '<S28>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S29>/FixPt Relational Operator'
     *  RelationalOperator: '<S30>/FixPt Relational Operator'
     *  UnitDelay: '<S29>/Delay Input1'
     *  UnitDelay: '<S30>/Delay Input1'
     *
     * Block description for '<S29>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S30>/Delay Input1':
     *
     *  Store in Global RAM
     */
    LogicalOperator1 = (((int32_T)rtu_IN > (int32_T)
                         localDW->DelayInput1_DSTATE_i) || ((int32_T)rtu_IN <
      (int32_T)localDW->DelayInput1_DSTATE));

    /* Memory: '<S31>/memory' */
    memory = localDW->memory_PreviousInput;
  }

  /* Switch: '<S31>/Switch' */
  if (LogicalOperator1) {
    localDW->Switch = rtb_CLOCK;
  } else {
    localDW->Switch = memory;
  }

  /* End of Switch: '<S31>/Switch' */

  /* Logic: '<S28>/Logical Operator2' incorporates:
   *  Constant: '<S20>/TIME'
   *  RelationalOperator: '<S28>/Relational Operator'
   *  Sum: '<S28>/Sum'
   */
  localDW->LogicalOperator2 = ((rtb_CLOCK >= localDW->Switch + rtp_TIME) &&
    rtu_IN);

  /* End of Outputs for SubSystem: '<S20>/TON' */
  localDW->LogicalOperator1 = LogicalOperator1;
  localDW->memory = memory;
}

/*
 * Update for atomic system:
 *    '<S19>/TON'
 *    '<S19>/TON1'
 *    '<S19>/TON2'
 *    '<S19>/TON3'
 *    '<S19>/TON4'
 *    '<S19>/TON5'
 *    '<S19>/TON6'
 *    '<S19>/TON7'
 *    '<S537>/MNV_TON1'
 *    '<S543>/MNV_TON1'
 *    ...
 */
void MNV_TON_Update(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M, boolean_T
                    rtu_IN, DW_MNV_TON_T *localDW)
{
  /* Update for Atomic SubSystem: '<S20>/TON' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for UnitDelay: '<S29>/Delay Input1'
     *
     * Block description for '<S29>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE = rtu_IN;

    /* Update for UnitDelay: '<S30>/Delay Input1'
     *
     * Block description for '<S30>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE_i = rtu_IN;

    /* Update for Memory: '<S31>/memory' */
    localDW->memory_PreviousInput = localDW->Switch;
  }

  /* End of Update for SubSystem: '<S20>/TON' */
}

/*
 * System initialize for atomic system:
 *    '<S60>/MNV_TOF2'
 *    '<S61>/MNV_TOF1'
 *    '<S62>/MNV_TOF1'
 *    '<S63>/MNV_TOF1'
 *    '<S64>/MNV_TOF1'
 *    '<S65>/MNV_TOF1'
 *    '<S66>/MNV_TOF1'
 *    '<S67>/MNV_TOF1'
 *    '<S67>/MNV_TOF2'
 *    '<S68>/MNV_TOF1'
 *    ...
 */
void MNV_TOF_Init(DW_MNV_TOF_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S74>/TOF' */
  /* InitializeConditions for Memory: '<S78>/memory' */
  localDW->memory_PreviousInput = -1.0E+99;

  /* End of SystemInitialize for SubSystem: '<S74>/TOF' */
}

/*
 * Outputs for atomic system:
 *    '<S60>/MNV_TOF2'
 *    '<S61>/MNV_TOF1'
 *    '<S62>/MNV_TOF1'
 *    '<S63>/MNV_TOF1'
 *    '<S64>/MNV_TOF1'
 *    '<S65>/MNV_TOF1'
 *    '<S66>/MNV_TOF1'
 *    '<S67>/MNV_TOF1'
 *    '<S67>/MNV_TOF2'
 *    '<S68>/MNV_TOF1'
 *    ...
 */
void MNV_TOF(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M, boolean_T rtu_IN,
             DW_MNV_TOF_T *localDW, real_T rtp_TIME)
{
  real_T rtb_CLOCK;
  boolean_T LogicalOperator1;
  real_T memory;
  boolean_T LogicalOperator3;
  LogicalOperator3 = localDW->LogicalOperator3;
  memory = localDW->memory;
  LogicalOperator1 = localDW->LogicalOperator1;

  /* Clock: '<S74>/CLOCK' */
  rtb_CLOCK = (*(NONVITALMAIN_TimingBrdg->taskTime[NONVITALMAIN_GlobalTID[0]]));

  /* Outputs for Atomic SubSystem: '<S74>/TOF' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Logic: '<S75>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S76>/FixPt Relational Operator'
     *  RelationalOperator: '<S77>/FixPt Relational Operator'
     *  UnitDelay: '<S76>/Delay Input1'
     *  UnitDelay: '<S77>/Delay Input1'
     *
     * Block description for '<S76>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S77>/Delay Input1':
     *
     *  Store in Global RAM
     */
    LogicalOperator1 = (((int32_T)rtu_IN > (int32_T)
                         localDW->DelayInput1_DSTATE_h) || ((int32_T)rtu_IN <
      (int32_T)localDW->DelayInput1_DSTATE));

    /* Memory: '<S78>/memory' */
    memory = localDW->memory_PreviousInput;

    /* Logic: '<S75>/Logical Operator3' */
    LogicalOperator3 = !rtu_IN;
  }

  /* Switch: '<S78>/Switch' */
  if (LogicalOperator1) {
    localDW->Switch = rtb_CLOCK;
  } else {
    localDW->Switch = memory;
  }

  /* End of Switch: '<S78>/Switch' */

  /* Logic: '<S75>/Logical Operator4' incorporates:
   *  Constant: '<S74>/TIME'
   *  Logic: '<S75>/Logical Operator2'
   *  RelationalOperator: '<S75>/Relational Operator'
   *  Sum: '<S75>/Sum'
   */
  localDW->LogicalOperator4 = !((rtb_CLOCK >= localDW->Switch + rtp_TIME) &&
    LogicalOperator3);

  /* End of Outputs for SubSystem: '<S74>/TOF' */
  localDW->LogicalOperator1 = LogicalOperator1;
  localDW->memory = memory;
  localDW->LogicalOperator3 = LogicalOperator3;
}

/*
 * Update for atomic system:
 *    '<S60>/MNV_TOF2'
 *    '<S61>/MNV_TOF1'
 *    '<S62>/MNV_TOF1'
 *    '<S63>/MNV_TOF1'
 *    '<S64>/MNV_TOF1'
 *    '<S65>/MNV_TOF1'
 *    '<S66>/MNV_TOF1'
 *    '<S67>/MNV_TOF1'
 *    '<S67>/MNV_TOF2'
 *    '<S68>/MNV_TOF1'
 *    ...
 */
void MNV_TOF_Update(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M, boolean_T
                    rtu_IN, DW_MNV_TOF_T *localDW)
{
  /* Update for Atomic SubSystem: '<S74>/TOF' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for UnitDelay: '<S76>/Delay Input1'
     *
     * Block description for '<S76>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE = rtu_IN;

    /* Update for UnitDelay: '<S77>/Delay Input1'
     *
     * Block description for '<S77>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE_h = rtu_IN;

    /* Update for Memory: '<S78>/memory' */
    localDW->memory_PreviousInput = localDW->Switch;
  }

  /* End of Update for SubSystem: '<S74>/TOF' */
}

/*
 * Output and update for atomic system:
 *    '<S129>/INDIKASI POINT'
 *    '<S130>/INDIKASI POINT'
 *    '<S131>/INDIKASI POINT'
 *    '<S132>/INDIKASI POINT'
 *    '<S133>/INDIKASI POINT'
 *    '<S134>/INDIKASI POINT'
 *    '<S135>/INDIKASI POINT'
 *    '<S136>/INDIKASI POINT'
 *    '<S137>/INDIKASI POINT'
 */
void M_IND_POINT(boolean_T rtu_L, boolean_T rtu_SWRLS, boolean_T rtu_SWINIT,
                 boolean_T rtu_BLOCK, boolean_T rtu_LS, boolean_T rtu_FLASH1S,
                 boolean_T rtu_FLASH05S, boolean_T rtu_NWP, boolean_T rtu_RWP,
                 boolean_T rtu_NWZ, boolean_T rtu_RWZ, boolean_T rtu_NWC,
                 boolean_T rtu_RWC, boolean_T rtu_OOC, boolean_T rtu_TP,
                 boolean_T rtu_ESWS, DW_M_IND_POINT_T *localDW)
{
  boolean_T rtb_NOT6;
  boolean_T rtb_NOT7_c;
  boolean_T rtb_NOT8_j;
  boolean_T rtb_NOT12;
  boolean_T rtb_NOT13;
  boolean_T rtb_NOT17_m;
  boolean_T rtb_NOT16_cw;
  boolean_T rtb_AND11_a;

  /* Logic: '<S138>/AND5' incorporates:
   *  Logic: '<S138>/AND4'
   *  Logic: '<S138>/NOT1'
   *  Logic: '<S138>/NOT2'
   */
  localDW->AND5 = ((!rtu_L) && ((!rtu_SWRLS) || rtu_FLASH05S));

  /* Logic: '<S138>/NOT6' */
  rtb_NOT6 = !rtu_TP;

  /* Logic: '<S138>/NOT7' */
  rtb_NOT7_c = !rtu_NWP;

  /* Logic: '<S138>/NOT8' */
  rtb_NOT8_j = !rtu_RWP;

  /* Logic: '<S138>/NOT9' */
  rtb_NOT12 = !rtu_LS;

  /* Logic: '<S138>/NOT11' */
  rtb_NOT13 = !rtu_RWZ;

  /* Logic: '<S138>/NOT10' */
  rtb_NOT17_m = !rtu_NWZ;

  /* Logic: '<S138>/OR28' incorporates:
   *  Logic: '<S138>/AND29'
   *  Logic: '<S138>/AND9'
   *  Logic: '<S138>/OR25'
   *  Logic: '<S138>/OR26'
   */
  rtb_NOT16_cw = ((rtb_NOT7_c && rtb_NOT8_j && (rtb_NOT12 || rtb_NOT13)) ||
                  (rtu_NWP && (rtu_OOC || rtb_NOT17_m)));

  /* Logic: '<S138>/AND11' */
  rtb_AND11_a = (rtb_NOT6 && rtb_NOT16_cw);

  /* Logic: '<S138>/OR10' incorporates:
   *  Logic: '<S138>/AND30'
   *  Logic: '<S138>/AND31'
   *  Logic: '<S138>/OR24'
   *  Logic: '<S138>/OR27'
   */
  rtb_NOT17_m = (((rtb_NOT12 || rtb_NOT17_m) && rtb_NOT7_c && rtb_NOT8_j) ||
                 (rtu_RWP && (rtu_OOC || rtb_NOT13)));

  /* Logic: '<S138>/AND13' */
  rtb_NOT6 = (rtb_NOT6 && rtb_NOT17_m);

  /* Logic: '<S138>/NOT13' */
  rtb_NOT13 = !rtu_OOC;

  /* Logic: '<S138>/NOT12' */
  rtb_NOT12 = !rtu_TP;

  /* Logic: '<S138>/AND18' */
  rtb_NOT8_j = (rtu_FLASH1S && rtb_NOT16_cw);

  /* Logic: '<S138>/AND20' */
  rtb_NOT7_c = (rtu_FLASH1S && rtb_NOT17_m);

  /* Logic: '<S138>/NOT16' */
  rtb_NOT16_cw = !rtu_TP;

  /* Logic: '<S138>/NOT17' */
  rtb_NOT17_m = !rtu_ESWS;

  /* Logic: '<S138>/AND26' incorporates:
   *  Logic: '<S138>/OR1'
   */
  localDW->AND26 = (rtb_NOT16_cw && (rtu_NWP || rtb_NOT17_m));

  /* Logic: '<S138>/AND27' */
  localDW->AND27 = (rtu_NWP && rtu_ESWS);

  /* Logic: '<S138>/AND28' */
  localDW->AND28 = (rtu_RWP && rtu_ESWS);

  /* Logic: '<S138>/AND34' incorporates:
   *  Logic: '<S138>/OR2'
   */
  localDW->AND34 = (rtb_NOT16_cw && (rtu_RWP || rtb_NOT17_m));

  /* Logic: '<S138>/OR11' incorporates:
   *  Logic: '<S138>/AND14'
   */
  localDW->OR11 = (rtb_NOT8_j || (rtb_NOT13 && rtu_NWC));

  /* Logic: '<S138>/OR12' incorporates:
   *  Logic: '<S138>/AND15'
   *  Logic: '<S138>/AND19'
   */
  localDW->OR12 = ((rtu_FLASH1S && rtb_AND11_a) || (rtb_NOT12 && rtb_NOT13 &&
    rtu_NWC));

  /* Logic: '<S138>/OR13' incorporates:
   *  Logic: '<S138>/AND16'
   */
  localDW->OR13 = (rtb_NOT7_c || (rtb_NOT13 && rtu_RWC));

  /* Logic: '<S138>/OR14' incorporates:
   *  Logic: '<S138>/AND17'
   *  Logic: '<S138>/AND21'
   */
  localDW->OR14 = ((rtu_FLASH1S && rtb_NOT6) || (rtb_NOT12 && rtb_NOT13 &&
    rtu_RWC));

  /* Logic: '<S138>/OR9' incorporates:
   *  Logic: '<S138>/AND6'
   *  Logic: '<S138>/AND7'
   *  Logic: '<S138>/NOT4'
   */
  localDW->OR9 = ((rtu_BLOCK && rtu_SWINIT) || ((!rtu_SWINIT) && rtu_FLASH1S));
}

/*
 * Output and update for atomic system:
 *    '<S147>/INDIKASI SIGNAL'
 *    '<S148>/INDIKASI SIGNAL'
 *    '<S149>/INDIKASI SIGNAL'
 *    '<S150>/INDIKASI SIGNAL'
 *    '<S151>/INDIKASI SIGNAL'
 *    '<S152>/INDIKASI SIGNAL'
 */
void M_SIG_IND_2(boolean_T rtu_VDR, boolean_T rtu_DRGR, boolean_T rtu_FLASH,
                 DW_M_SIG_IND_2_T *localDW)
{
  /* Logic: '<S155>/AND3' incorporates:
   *  Logic: '<S155>/AND1'
   *  Logic: '<S155>/AND2'
   *  Logic: '<S155>/NOT2'
   *  Logic: '<S155>/NOT4'
   */
  localDW->AND3 = ((rtu_VDR && (!rtu_DRGR)) || ((!rtu_VDR) && rtu_FLASH));

  /* Logic: '<S155>/AND6' */
  localDW->AND6 = (rtu_VDR && rtu_DRGR);
}

/*
 * Output and update for atomic system:
 *    '<S153>/INDIKASI SIGNAL'
 *    '<S154>/INDIKASI SIGNAL'
 */
void M_SIG_IND(boolean_T rtu_VDR, boolean_T rtu_DR, boolean_T rtu_GR, boolean_T
               rtu_FLASH, DW_M_SIG_IND_T *localDW)
{
  /* Logic: '<S161>/AND10' */
  localDW->AND10 = (rtu_VDR && rtu_GR);

  /* Logic: '<S161>/AND3' incorporates:
   *  Logic: '<S161>/AND1'
   *  Logic: '<S161>/AND2'
   *  Logic: '<S161>/NOT1'
   *  Logic: '<S161>/NOT2'
   *  Logic: '<S161>/NOT4'
   */
  localDW->AND3 = ((rtu_VDR && (!rtu_DR) && (!rtu_GR)) || ((!rtu_VDR) &&
    rtu_FLASH));

  /* Logic: '<S161>/AND6' */
  localDW->AND6 = (rtu_VDR && rtu_DR);
}

/*
 * Output and update for atomic system:
 *    '<S163>/INDIKASI TRACK'
 *    '<S164>/INDIKASI TRACK'
 *    '<S165>/INDIKASI TRACK'
 *    '<S166>/INDIKASI TRACK'
 *    '<S167>/INDIKASI TRACK'
 *    '<S168>/INDIKASI TRACK'
 *    '<S169>/INDIKASI TRACK'
 *    '<S170>/INDIKASI TRACK'
 *    '<S171>/INDIKASI TRACK'
 *    '<S172>/INDIKASI TRACK'
 *    ...
 */
void M_IND_TRACK(boolean_T rtu_TP, boolean_T rtu_ESWS, DW_M_IND_TRACK_T *localDW)
{
  /* Logic: '<S192>/NOT2' */
  localDW->NOT2 = !rtu_TP;

  /* Logic: '<S192>/NOT5' */
  localDW->NOT5 = !rtu_ESWS;
}

/*
 * System initialize for atomic system:
 *    '<S224>/MNV_TON1'
 *    '<S236>/MNV_TON1'
 *    '<S248>/MNV_TON1'
 *    '<S260>/MNV_TON1'
 *    '<S272>/MNV_TON1'
 */
void NONVITALMAIN_MNV_TON_Init(DW_MNV_TON_f_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S227>/TON' */
  /* InitializeConditions for Memory: '<S235>/memory' */
  localDW->memory_PreviousInput = -1.0E+99;

  /* End of SystemInitialize for SubSystem: '<S227>/TON' */
}

/*
 * Outputs for atomic system:
 *    '<S224>/MNV_TON1'
 *    '<S236>/MNV_TON1'
 *    '<S248>/MNV_TON1'
 *    '<S260>/MNV_TON1'
 *    '<S272>/MNV_TON1'
 */
void NONVITALMAIN_MNV_TON(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M,
  boolean_T rtu_IN, DW_MNV_TON_f_T *localDW, real_T rtp_TIME)
{
  real_T rtb_CLOCK;
  real_T memory;
  boolean_T Uk1;
  boolean_T Uk1_h;
  Uk1_h = localDW->Uk1_h;
  Uk1 = localDW->Uk1;
  memory = localDW->memory;

  /* Clock: '<S227>/CLOCK' */
  rtb_CLOCK = (*(NONVITALMAIN_TimingBrdg->taskTime[NONVITALMAIN_GlobalTID[0]]));

  /* Outputs for Atomic SubSystem: '<S227>/TON' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* UnitDelay: '<S233>/Delay Input1'
     *
     * Block description for '<S233>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Uk1 = localDW->DelayInput1_DSTATE;

    /* UnitDelay: '<S234>/Delay Input1'
     *
     * Block description for '<S234>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Uk1_h = localDW->DelayInput1_DSTATE_c;

    /* Memory: '<S235>/memory' */
    memory = localDW->memory_PreviousInput;
  }

  /* Switch: '<S235>/Switch' incorporates:
   *  Logic: '<S232>/Logical Operator1'
   *  RelationalOperator: '<S233>/FixPt Relational Operator'
   *  RelationalOperator: '<S234>/FixPt Relational Operator'
   */
  if (((int32_T)rtu_IN > (int32_T)Uk1_h) || ((int32_T)rtu_IN < (int32_T)Uk1)) {
    localDW->Switch = rtb_CLOCK;
  } else {
    localDW->Switch = memory;
  }

  /* End of Switch: '<S235>/Switch' */

  /* Logic: '<S232>/Logical Operator2' incorporates:
   *  Constant: '<S227>/TIME'
   *  RelationalOperator: '<S232>/Relational Operator'
   *  Sum: '<S232>/Sum'
   */
  localDW->LogicalOperator2 = ((rtb_CLOCK >= localDW->Switch + rtp_TIME) &&
    rtu_IN);

  /* End of Outputs for SubSystem: '<S227>/TON' */
  localDW->memory = memory;
  localDW->Uk1 = Uk1;
  localDW->Uk1_h = Uk1_h;
}

/*
 * Update for atomic system:
 *    '<S224>/MNV_TON1'
 *    '<S236>/MNV_TON1'
 *    '<S248>/MNV_TON1'
 *    '<S260>/MNV_TON1'
 *    '<S272>/MNV_TON1'
 */
void NONVITALMAIN_MNV_TON_Update(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M,
  boolean_T rtu_IN, DW_MNV_TON_f_T *localDW)
{
  /* Update for Atomic SubSystem: '<S227>/TON' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for UnitDelay: '<S233>/Delay Input1'
     *
     * Block description for '<S233>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE = rtu_IN;

    /* Update for UnitDelay: '<S234>/Delay Input1'
     *
     * Block description for '<S234>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE_c = rtu_IN;

    /* Update for Memory: '<S235>/memory' */
    localDW->memory_PreviousInput = localDW->Switch;
  }

  /* End of Update for SubSystem: '<S227>/TON' */
}

/*
 * System initialize for atomic system:
 *    '<S219>/INTERLOCKING POINT'
 *    '<S220>/INTERLOCKING POINT'
 *    '<S221>/INTERLOCKING POINT'
 *    '<S222>/INTERLOCKING POINT'
 *    '<S223>/INTERLOCKING POINT'
 */
void M_IL_POINT_Init(DW_M_IL_POINT_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S224>/MNV_TOF1' */
  MNV_TOF_Init(&localDW->MNV_TOF1);

  /* End of SystemInitialize for SubSystem: '<S224>/MNV_TOF1' */

  /* SystemInitialize for Atomic SubSystem: '<S224>/MNV_TON1' */
  NONVITALMAIN_MNV_TON_Init(&localDW->MNV_TON1);

  /* End of SystemInitialize for SubSystem: '<S224>/MNV_TON1' */
}

/*
 * Outputs for atomic system:
 *    '<S219>/INTERLOCKING POINT'
 *    '<S220>/INTERLOCKING POINT'
 *    '<S221>/INTERLOCKING POINT'
 *    '<S222>/INTERLOCKING POINT'
 *    '<S223>/INTERLOCKING POINT'
 */
void M_IL_POINT(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M, boolean_T
                rtu_CALCTRL, boolean_T rtu_TRAILCTRL, boolean_T rtu_RSTCTRL,
                boolean_T rtu_BCTRL, boolean_T rtu_NWZ, boolean_T rtu_RWZ,
                boolean_T rtu_NWP, boolean_T rtu_RWP, boolean_T rtu_NWC,
                boolean_T rtu_RWC, boolean_T rtu_NWTE, boolean_T rtu_RWTE,
                boolean_T rtu_L, boolean_T rtu_OOC, boolean_T rtu_OOCRD,
                boolean_T rtu_RSN, boolean_T rtu_RSR, boolean_T rtu_START,
                DW_M_IL_POINT_T *localDW)
{
  boolean_T rtb_NOT1_kw;
  boolean_T rtb_AND1_je;
  boolean_T rtb_AND6_ic;
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

  /* Logic: '<S224>/OR3' */
  M2_PreviousInput = localDW->M2_PreviousInput;

  /* Logic: '<S224>/NOT6' */
  M1_PreviousInput = localDW->M1_PreviousInput;

  /* Logic: '<S224>/OR22' */
  OR22 = localDW->OR22;

  /* Logic: '<S224>/OR21' */
  OR21 = localDW->OR21;

  /* Logic: '<S224>/OR6' */
  OR6 = localDW->OR6;

  /* Logic: '<S224>/AND14' */
  AND14 = localDW->AND14;

  /* Logic: '<S224>/AND11' */
  AND11 = localDW->AND11;
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Logic: '<S224>/NOT1' */
    rtb_NOT1_kw = !rtu_OOC;

    /* Logic: '<S224>/AND1' incorporates:
     *  Logic: '<S224>/NOT2'
     *  Logic: '<S224>/NOT3'
     *  Logic: '<S224>/NOT4'
     *  Logic: '<S224>/OR1'
     */
    rtb_AND1_je = ((!rtu_OOCRD) && ((!rtu_RSTCTRL) || (!rtb_NOT1_kw)));

    /* Memory: '<S224>/M8' */
    localDW->M8 = localDW->M8_PreviousInput;

    /* Memory: '<S224>/M9' */
    localDW->M9 = localDW->M9_PreviousInput;

    /* Logic: '<S224>/AND6' incorporates:
     *  Logic: '<S224>/NOT7'
     *  Logic: '<S224>/NOT9'
     */
    rtb_AND6_ic = (rtu_CALCTRL && (!rtu_START) && (!localDW->M8) && rtb_NOT1_kw);

    /* Logic: '<S224>/AND4' incorporates:
     *  Logic: '<S224>/NOT6'
     *  Logic: '<S224>/OR3'
     */
    localDW->AND4 = (rtb_AND1_je && (!M1_PreviousInput) && (M2_PreviousInput ||
      rtu_RWTE));

    /* Logic: '<S224>/AND25' incorporates:
     *  Logic: '<S224>/OR4'
     */
    rtb_OR20 = (rtu_TRAILCTRL && (rtu_OOC || rtb_NOT1_kw));

    /* Logic: '<S224>/AND11' incorporates:
     *  Logic: '<S224>/AND10'
     *  Logic: '<S224>/AND7'
     *  Logic: '<S224>/AND8'
     *  Logic: '<S224>/NOT10'
     *  Logic: '<S224>/NOT11'
     *  Logic: '<S224>/NOT16'
     *  Logic: '<S224>/OR11'
     *  Logic: '<S224>/OR12'
     *  Memory: '<S224>/M5'
     */
    AND11 = (((localDW->M9 && (rtb_AND6_ic || localDW->AND4) && rtu_RWZ) ||
              (rtb_OR20 && rtu_NWP) || (rtu_CALCTRL && (!rtu_START) &&
               (!localDW->M8) && rtu_OOC && localDW->M9)) &&
             (!localDW->M5_PreviousInput));

    /* Memory: '<S224>/M11' */
    localDW->M11 = localDW->M11_PreviousInput;

    /* Memory: '<S224>/M10' */
    localDW->M10 = localDW->M10_PreviousInput;

    /* Memory: '<S224>/M7' */
    localDW->M7 = localDW->M7_PreviousInput;

    /* Logic: '<S224>/AND12' incorporates:
     *  Logic: '<S224>/NOT15'
     *  Logic: '<S224>/NOT23'
     *  Logic: '<S224>/OR10'
     *  Logic: '<S224>/OR14'
     */
    AND12 = ((!localDW->M11) && (localDW->M10 || (rtu_RSN || AND11)) &&
             (!localDW->M7));

    /* Memory: '<S224>/M6' */
    localDW->M6 = localDW->M6_PreviousInput;

    /* Logic: '<S224>/AND3' incorporates:
     *  Logic: '<S224>/NOT5'
     *  Logic: '<S224>/OR2'
     */
    localDW->AND3 = (rtb_AND1_je && (rtu_NWTE || M1_PreviousInput) &&
                     (!M2_PreviousInput));

    /* Logic: '<S224>/AND14' incorporates:
     *  Logic: '<S224>/AND5'
     *  Logic: '<S224>/AND9'
     *  Logic: '<S224>/NOT17'
     *  Logic: '<S224>/OR5'
     *  Logic: '<S224>/OR9'
     *  Memory: '<S224>/M4'
     */
    AND14 = ((!localDW->M4_PreviousInput) && ((localDW->M9 && (rtb_AND6_ic ||
                localDW->AND3) && rtu_NWZ) || (rtb_OR20 && rtu_RWP)));

    /* Logic: '<S224>/AND13' incorporates:
     *  Logic: '<S224>/NOT12'
     *  Logic: '<S224>/NOT22'
     *  Logic: '<S224>/OR13'
     *  Logic: '<S224>/OR15'
     */
    AND13 = ((!localDW->M6) && (!localDW->M10) && (localDW->M11 || (rtu_RSR ||
               AND14)));

    /* Logic: '<S224>/OR6' */
    OR6 = (localDW->AND4 || localDW->AND3 || rtu_OOC);

    /* RelationalOperator: '<S225>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S225>/Delay Input1'
     *
     * Block description for '<S225>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->FixPtRelationalOperator = ((int32_T)OR6 > (int32_T)
      localDW->DelayInput1_DSTATE);
  }

  /* Outputs for Atomic SubSystem: '<S224>/MNV_TOF1' */
  MNV_TOF(NONVITALMAIN_M, localDW->FixPtRelationalOperator, &localDW->MNV_TOF1,
          12.0);

  /* End of Outputs for SubSystem: '<S224>/MNV_TOF1' */

  /* Outputs for Atomic SubSystem: '<S224>/MNV_TON1' */
  NONVITALMAIN_MNV_TON(NONVITALMAIN_M, localDW->MNV_TOF1.LogicalOperator4,
                       &localDW->MNV_TON1, 11.0);

  /* End of Outputs for SubSystem: '<S224>/MNV_TON1' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Logic: '<S224>/AND28' incorporates:
     *  Logic: '<S224>/OR7'
     *  Memory: '<S224>/M3'
     */
    AND28 = ((localDW->M6 || localDW->M7) && localDW->M3_PreviousInput);

    /* Logic: '<S224>/NOT18' */
    NOT18 = !rtu_NWC;

    /* Logic: '<S224>/NOT21' */
    NOT21 = !rtu_RWC;

    /* Logic: '<S224>/NOT19' */
    NOT19 = !localDW->AND3;
  }

  /* Logic: '<S224>/OR8' */
  localDW->OR8 = (localDW->MNV_TON1.LogicalOperator2 || AND28);

  /* Logic: '<S224>/NOT13' */
  rtb_OR20 = !localDW->OR8;

  /* Logic: '<S224>/AND17' incorporates:
   *  Logic: '<S224>/AND15'
   *  Logic: '<S224>/OR16'
   */
  localDW->AND17 = (rtu_L && (AND12 || (localDW->M6 && rtb_OR20 && NOT18)) &&
                    NOT19);
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Logic: '<S224>/NOT20' */
    NOT20 = !localDW->AND4;

    /* Logic: '<S224>/NOT14' */
    NOT14 = !rtu_START;
  }

  /* Logic: '<S224>/AND18' incorporates:
   *  Logic: '<S224>/AND16'
   *  Logic: '<S224>/OR17'
   */
  localDW->AND18 = (rtu_L && NOT20 && (AND13 || (localDW->M7 && rtb_OR20 &&
    NOT21)));

  /* Logic: '<S224>/AND19' */
  localDW->AND19 = (NOT14 && rtb_OR20 && localDW->M6);

  /* Logic: '<S224>/AND20' */
  localDW->AND20 = (NOT14 && rtb_OR20 && localDW->M7);
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Logic: '<S224>/NOT24' */
    NOT24 = !rtu_NWC;

    /* Logic: '<S224>/NOT25' */
    NOT25 = !rtu_RWC;

    /* Logic: '<S224>/AND23' */
    rtb_AND23 = (rtu_BCTRL && localDW->M9 && rtu_NWC);

    /* Logic: '<S224>/AND24' */
    rtb_AND24 = (rtu_BCTRL && localDW->M9 && rtu_RWC);

    /* Logic: '<S224>/NOT26' */
    rtb_NOT26 = !rtu_OOCRD;

    /* Logic: '<S224>/OR20' incorporates:
     *  Logic: '<S224>/NOT27'
     *  Logic: '<S224>/NOT28'
     */
    rtb_OR20 = ((!rtu_RSTCTRL) || (!rtb_NOT1_kw));

    /* Logic: '<S224>/AND26' */
    rtb_AND26 = (rtb_NOT26 && rtb_OR20 && localDW->M10);

    /* Logic: '<S224>/AND27' */
    rtb_NOT26 = (rtb_NOT26 && rtb_OR20 && localDW->M11);

    /* Logic: '<S224>/OR19' */
    localDW->OR19 = (rtu_NWC || rtu_RWC || localDW->M9);

    /* Logic: '<S224>/OR21' */
    OR21 = (rtb_AND23 || localDW->AND4 || rtb_AND26);

    /* Logic: '<S224>/OR22' */
    OR22 = (rtb_AND24 || localDW->AND3 || rtb_NOT26);

    /* Logic: '<S224>/OR23' */
    localDW->OR23 = (OR21 || OR22);
  }

  /* Logic: '<S224>/OR18' incorporates:
   *  Logic: '<S224>/AND21'
   *  Logic: '<S224>/AND22'
   */
  localDW->OR18 = ((localDW->AND19 && NOT24) || (localDW->AND20 && NOT25));

  /* Logic: '<S224>/AND11' */
  localDW->AND11 = AND11;

  /* Logic: '<S224>/AND14' */
  localDW->AND14 = AND14;

  /* Logic: '<S224>/OR6' */
  localDW->OR6 = OR6;

  /* Logic: '<S224>/OR21' */
  localDW->OR21 = OR21;

  /* Logic: '<S224>/OR22' */
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
 *    '<S219>/INTERLOCKING POINT'
 *    '<S220>/INTERLOCKING POINT'
 *    '<S221>/INTERLOCKING POINT'
 *    '<S222>/INTERLOCKING POINT'
 *    '<S223>/INTERLOCKING POINT'
 */
void M_IL_POINT_Update(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M,
  DW_M_IL_POINT_T *localDW)
{
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for Memory: '<S224>/M8' */
    localDW->M8_PreviousInput = localDW->OR18;

    /* Update for Memory: '<S224>/M9' */
    localDW->M9_PreviousInput = localDW->OR19;

    /* Update for Memory: '<S224>/M1' */
    localDW->M1_PreviousInput = localDW->AND3;

    /* Update for Memory: '<S224>/M2' */
    localDW->M2_PreviousInput = localDW->AND4;

    /* Update for Memory: '<S224>/M5' */
    localDW->M5_PreviousInput = localDW->AND14;

    /* Update for Memory: '<S224>/M11' */
    localDW->M11_PreviousInput = localDW->OR22;

    /* Update for Memory: '<S224>/M10' */
    localDW->M10_PreviousInput = localDW->OR21;

    /* Update for Memory: '<S224>/M7' */
    localDW->M7_PreviousInput = localDW->AND18;

    /* Update for Memory: '<S224>/M6' */
    localDW->M6_PreviousInput = localDW->AND17;

    /* Update for Memory: '<S224>/M4' */
    localDW->M4_PreviousInput = localDW->AND11;

    /* Update for UnitDelay: '<S225>/Delay Input1'
     *
     * Block description for '<S225>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE = localDW->OR6;
  }

  /* Update for Atomic SubSystem: '<S224>/MNV_TOF1' */
  MNV_TOF_Update(NONVITALMAIN_M, localDW->FixPtRelationalOperator,
                 &localDW->MNV_TOF1);

  /* End of Update for SubSystem: '<S224>/MNV_TOF1' */

  /* Update for Atomic SubSystem: '<S224>/MNV_TON1' */
  NONVITALMAIN_MNV_TON_Update(NONVITALMAIN_M, localDW->MNV_TOF1.LogicalOperator4,
    &localDW->MNV_TON1);

  /* End of Update for SubSystem: '<S224>/MNV_TON1' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for Memory: '<S224>/M3' */
    localDW->M3_PreviousInput = localDW->OR8;
  }
}

/*
 * Output and update for atomic system:
 *    '<S310>/WARNING ED'
 *    '<S311>/WARNING ED'
 *    '<S312>/WARNING ED'
 *    '<S313>/WARNING ED'
 *    '<S314>/WARNING ED'
 *    '<S315>/WARNING ED'
 *    '<S316>/WARNING ED'
 *    '<S317>/WARNING ED'
 *    '<S318>/WARNING ED'
 *    '<S319>/WARNING ED'
 *    ...
 */
void M_WAR(boolean_T rtu_WAR, boolean_T rtu_THB, DW_M_WAR_T *localDW, boolean_T *
           rtd_M_GV_FLASH_500)
{
  boolean_T Memory2_PreviousInput;

  /* Logic: '<S326>/AND1' incorporates:
   *  Logic: '<S326>/NOT2'
   *  Logic: '<S326>/OR1'
   */
  Memory2_PreviousInput = localDW->Memory2_PreviousInput;
  Memory2_PreviousInput = ((Memory2_PreviousInput || rtu_THB) && (!rtu_WAR));

  /* Logic: '<S326>/AND5' incorporates:
   *  Logic: '<S326>/NOT3'
   *  Logic: '<S326>/NOT5'
   */
  localDW->AND5 = ((!rtu_WAR) && (!Memory2_PreviousInput));

  /* Logic: '<S326>/OR2' incorporates:
   *  DataStoreRead: '<S326>/FLASH-0.5S-FROM'
   *  Logic: '<S326>/AND3'
   *  Logic: '<S326>/AND4'
   *  Logic: '<S326>/NOT1'
   */
  localDW->OR2 = (((!rtu_WAR) && Memory2_PreviousInput) || (localDW->AND5 &&
    (*rtd_M_GV_FLASH_500)));

  /* Logic: '<S326>/AND1' */
  localDW->Memory2_PreviousInput = Memory2_PreviousInput;
}

/*
 * Output and update for atomic system:
 *    '<S391>/POINT PB CONTROL'
 *    '<S392>/POINT PB CONTROL'
 *    '<S393>/POINT PB CONTROL'
 *    '<S394>/POINT PB CONTROL'
 *    '<S395>/POINT PB CONTROL'
 */
void M_SW_PB(boolean_T rtu_WPB, boolean_T rtu_WTP, boolean_T rtu_TBW, boolean_T
             rtu_TKGW, boolean_T rtu_TBKW, boolean_T rtu_TWT, boolean_T rtu_TKW,
             DW_M_SW_PB_T *localDW, boolean_T *rtd_M_NVCOMM_OK, boolean_T
             *rtd_M_VDR)
{
  boolean_T rtb_AND7_f;
  boolean_T DelayInput1_DSTATE;

  /* Update for UnitDelay: '<S397>/Delay Input1'
   *
   * Block description for '<S397>/Delay Input1':
   *
   *  Store in Global RAM
   */
  DelayInput1_DSTATE = localDW->DelayInput1_DSTATE;

  /* Logic: '<S396>/AND1' incorporates:
   *  DataStoreRead: '<S396>/COMM-OK1'
   *  DataStoreRead: '<S396>/COMM-OK2'
   *  Logic: '<S396>/NOT1'
   */
  localDW->AND1 = (rtu_TBW && rtu_WPB && (!rtu_WTP) && (*rtd_M_NVCOMM_OK) &&
                   (*rtd_M_VDR));

  /* Logic: '<S396>/AND4' incorporates:
   *  DataStoreRead: '<S396>/COMM-OK1'
   *  DataStoreRead: '<S396>/COMM-OK2'
   */
  localDW->AND4 = (rtu_TKGW && rtu_WPB && (*rtd_M_NVCOMM_OK) && (*rtd_M_VDR));

  /* Logic: '<S396>/AND5' incorporates:
   *  DataStoreRead: '<S396>/COMM-OK1'
   *  DataStoreRead: '<S396>/COMM-OK2'
   */
  localDW->AND5 = (rtu_TBKW && rtu_WPB && (*rtd_M_NVCOMM_OK) && (*rtd_M_VDR));

  /* Logic: '<S396>/AND6' incorporates:
   *  DataStoreRead: '<S396>/COMM-OK1'
   *  DataStoreRead: '<S396>/COMM-OK2'
   */
  localDW->AND6 = (rtu_TWT && rtu_WPB && (*rtd_M_NVCOMM_OK) && (*rtd_M_VDR));

  /* Logic: '<S396>/AND7' incorporates:
   *  DataStoreRead: '<S396>/COMM-OK1'
   */
  rtb_AND7_f = (rtu_TKW && rtu_WPB && (*rtd_M_NVCOMM_OK));

  /* RelationalOperator: '<S397>/FixPt Relational Operator' */
  localDW->FixPtRelationalOperator = ((int32_T)rtb_AND7_f > (int32_T)
    DelayInput1_DSTATE);

  /* Update for UnitDelay: '<S397>/Delay Input1'
   *
   * Block description for '<S397>/Delay Input1':
   *
   *  Store in Global RAM
   */
  DelayInput1_DSTATE = rtb_AND7_f;
  localDW->DelayInput1_DSTATE = DelayInput1_DSTATE;
}

/*
 * Output and update for atomic system:
 *    '<S406>/ROUTE PB CONTROL'
 *    '<S407>/ROUTE PB CONTROL'
 *    '<S408>/ROUTE PB CONTROL'
 *    '<S409>/ROUTE PB CONTROL'
 *    '<S410>/ROUTE PB CONTROL'
 *    '<S411>/ROUTE PB CONTROL'
 *    '<S412>/ROUTE PB CONTROL'
 *    '<S413>/ROUTE PB CONTROL'
 *    '<S414>/ROUTE PB CONTROL'
 *    '<S415>/ROUTE PB CONTROL'
 */
void M_R_PB(boolean_T rtu_COMMON, boolean_T rtu_PB1, boolean_T rtu_PB2,
            DW_M_R_PB_T *localDW, boolean_T *rtd_M_NVCOMM_OK, boolean_T
            *rtd_M_VDR)
{
  /* Logic: '<S416>/AND2' incorporates:
   *  DataStoreRead: '<S416>/COMM-OK1'
   *  DataStoreRead: '<S416>/COMM-OK2'
   */
  localDW->AND2 = (rtu_COMMON && rtu_PB1 && (*rtd_M_NVCOMM_OK) && (*rtd_M_VDR));

  /* Logic: '<S416>/AND3' incorporates:
   *  DataStoreRead: '<S416>/COMM-OK1'
   *  DataStoreRead: '<S416>/COMM-OK2'
   */
  localDW->AND3 = (rtu_COMMON && rtu_PB2 && (*rtd_M_NVCOMM_OK) && (*rtd_M_VDR));
}

/*
 * Output and update for atomic system:
 *    '<S426>/RUTE OTOMATIS'
 *    '<S427>/RUTE OTOMATIS'
 *    '<S428>/RUTE OTOMATIS'
 *    '<S429>/RUTE OTOMATIS'
 *    '<S430>/RUTE OTOMATIS'
 *    '<S431>/RUTE OTOMATIS'
 *    '<S432>/RUTE OTOMATIS'
 *    '<S433>/RUTE OTOMATIS'
 */
void M_R_AUTO(boolean_T rtu_AUTO, boolean_T rtu_MANUAL, boolean_T rtu_SIGNAL,
              DW_M_R_AUTO_T *localDW, boolean_T *rtd_M_NVCOMM_OK, boolean_T
              *rtd_M_VDR)
{
  /* Logic: '<S434>/AND5' incorporates:
   *  DataStoreRead: '<S434>/COMM-OK1'
   *  DataStoreRead: '<S434>/COMM-OK2'
   *  Logic: '<S434>/AND2'
   *  Logic: '<S434>/AND3'
   *  Logic: '<S434>/NOT1'
   *  Logic: '<S434>/OR2'
   *  Memory: '<S434>/M4'
   */
  localDW->AND5 = ((localDW->AND5 || (rtu_AUTO && rtu_SIGNAL &&
    (*rtd_M_NVCOMM_OK) && (*rtd_M_VDR))) && (!(rtu_MANUAL && rtu_SIGNAL &&
    (*rtd_M_NVCOMM_OK) && (*rtd_M_VDR))));
}

/*
 * Output and update for atomic system:
 *    '<S442>/RRLS PB CONTROL'
 *    '<S443>/RRLS PB CONTROL'
 *    '<S444>/RRLS PB CONTROL'
 *    '<S445>/RRLS PB CONTROL'
 *    '<S446>/RRLS PB CONTROL'
 *    '<S447>/RRLS PB CONTROL'
 *    '<S448>/RRLS PB CONTROL'
 *    '<S449>/RRLS PB CONTROL'
 *    '<S450>/RRLS PB CONTROL'
 */
void M_RRLS_X(boolean_T rtu_TPR, boolean_T rtu_PB, boolean_T rtu_AUTO, boolean_T
              rtu_ESWS, boolean_T rtu_RS, DW_M_RRLS_X_T *localDW, boolean_T
              *rtd_M_NVCOMM_OK, boolean_T *rtd_M_VDR)
{
  /* Logic: '<S451>/AND1' incorporates:
   *  DataStoreRead: '<S451>/COMM-OK1'
   *  DataStoreRead: '<S451>/COMM-OK2'
   *  Logic: '<S451>/NOT1'
   *  Logic: '<S451>/NOT2'
   *  Logic: '<S451>/NOT6'
   */
  localDW->AND1 = (rtu_TPR && (rtu_AUTO || rtu_PB) && (!rtu_ESWS) && (!rtu_RS) &&
                   (*rtd_M_NVCOMM_OK) && (*rtd_M_VDR));
}

/*
 * Output and update for atomic system:
 *    '<S390>/VSB1'
 *    '<S390>/VSB10'
 *    '<S390>/VSB11'
 *    '<S390>/VSB12'
 *    '<S390>/VSB13'
 *    '<S390>/VSB14'
 *    '<S390>/VSB15'
 *    '<S390>/VSB16'
 *    '<S390>/VSB17'
 *    '<S390>/VSB18'
 *    ...
 */
void M_VSB(boolean_T rtu_WZ, boolean_T rtu_VSB, DW_M_VSB_T *localDW)
{
  boolean_T rtb_AND2_k4;
  boolean_T DelayInput1_DSTATE;

  /* Update for UnitDelay: '<S505>/Delay Input1'
   *
   * Block description for '<S505>/Delay Input1':
   *
   *  Store in Global RAM
   */
  DelayInput1_DSTATE = localDW->DelayInput1_DSTATE;

  /* Logic: '<S478>/AND2' */
  rtb_AND2_k4 = (rtu_WZ && rtu_VSB);

  /* Logic: '<S478>/Logical Operator' incorporates:
   *  Memory: '<S478>/Memory'
   *  RelationalOperator: '<S505>/FixPt Relational Operator'
   */
  localDW->LogicalOperator = ((int32_T)rtb_AND2_k4 > (int32_T)DelayInput1_DSTATE)
    ^ localDW->LogicalOperator;

  /* Logic: '<S478>/AND1' */
  localDW->AND1 = !localDW->LogicalOperator;

  /* Update for UnitDelay: '<S505>/Delay Input1'
   *
   * Block description for '<S505>/Delay Input1':
   *
   *  Store in Global RAM
   */
  DelayInput1_DSTATE = rtb_AND2_k4;
  localDW->DelayInput1_DSTATE = DelayInput1_DSTATE;
}

/*
 * System initialize for atomic system:
 *    '<S532>/POINT FAIL'
 *    '<S533>/POINT FAIL'
 *    '<S534>/POINT FAIL'
 *    '<S535>/POINT FAIL'
 *    '<S536>/POINT FAIL'
 */
void M_POINT_FAIL_Init(DW_M_POINT_FAIL_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S537>/MNV_TON1' */
  MNV_TON_Init(&localDW->MNV_TON1);

  /* End of SystemInitialize for SubSystem: '<S537>/MNV_TON1' */
}

/*
 * Outputs for atomic system:
 *    '<S532>/POINT FAIL'
 *    '<S533>/POINT FAIL'
 *    '<S534>/POINT FAIL'
 *    '<S535>/POINT FAIL'
 *    '<S536>/POINT FAIL'
 */
void M_POINT_FAIL(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M, boolean_T
                  rtu_AACTRL, boolean_T rtu_TRAILCTRL, boolean_T rtu_RSTCTRL,
                  boolean_T rtu_LS, boolean_T rtu_BACKTON, boolean_T rtu_BACKTOR,
                  boolean_T rtu_NWP, boolean_T rtu_RWP, boolean_T rtu_NWC,
                  boolean_T rtu_RWC, boolean_T rtu_NWTE, boolean_T rtu_RWTE,
                  boolean_T rtu_BLOCK, boolean_T rtu_NBLOCK, boolean_T
                  rtu_RBLOCK, DW_M_POINT_FAIL_T *localDW)
{
  boolean_T rtb_M4_l;
  boolean_T rtb_M5;
  boolean_T rtb_AND18_o;
  boolean_T rtb_AND19_m;
  boolean_T rtb_M3;
  boolean_T rtb_AND24;
  boolean_T rtb_AND25;
  boolean_T M1_PreviousInput;
  boolean_T M9_PreviousInput;
  boolean_T AND10;
  boolean_T AND12;
  AND12 = localDW->AND12;
  AND10 = localDW->AND10;

  /* Logic: '<S537>/OR9' */
  M9_PreviousInput = localDW->M9_PreviousInput;

  /* Logic: '<S537>/AND22' */
  M1_PreviousInput = localDW->M1_PreviousInput;
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Logic: '<S537>/NOT5' */
    rtb_M4_l = !rtu_NWP;

    /* Logic: '<S537>/NOT6' */
    rtb_M5 = !rtu_RWP;

    /* Logic: '<S537>/AND10' incorporates:
     *  Logic: '<S537>/AND6'
     *  Logic: '<S537>/AND7'
     *  Logic: '<S537>/OR20'
     */
    AND10 = (rtb_M4_l && rtb_M5 && ((rtu_NBLOCK && rtu_BACKTON && rtu_NWTE) ||
              (rtu_RBLOCK && rtu_BACKTOR && rtu_RWTE)));

    /* Logic: '<S537>/AND11' incorporates:
     *  Logic: '<S537>/NOT14'
     */
    localDW->AND11 = (rtb_M5 && rtb_M4_l && (!rtu_LS));

    /* Memory: '<S537>/M6' */
    localDW->M6 = localDW->M6_PreviousInput;

    /* Memory: '<S537>/M8' */
    localDW->M8 = localDW->M8_PreviousInput;

    /* Logic: '<S537>/AND12' incorporates:
     *  Logic: '<S537>/NOT17'
     */
    AND12 = ((!localDW->M6) && localDW->M8);

    /* Memory: '<S537>/M2' */
    rtb_M5 = localDW->M2_PreviousInput;

    /* Memory: '<S537>/M4' */
    rtb_M4_l = localDW->M4_PreviousInput;

    /* Logic: '<S537>/AND18' incorporates:
     *  Logic: '<S537>/NOT2'
     */
    rtb_AND18_o = (rtb_M5 && (!rtb_M4_l));

    /* Memory: '<S537>/M7' */
    localDW->M7 = localDW->M7_PreviousInput;

    /* Logic: '<S537>/AND19' incorporates:
     *  Logic: '<S537>/NOT3'
     */
    rtb_AND19_m = (localDW->M7 && (!M9_PreviousInput));

    /* Logic: '<S537>/AND4' incorporates:
     *  Logic: '<S537>/NOT1'
     *  Logic: '<S537>/NOT4'
     */
    rtb_M3 = ((!localDW->M7) && (!rtu_RSTCTRL));

    /* Logic: '<S537>/AND20' incorporates:
     *  Logic: '<S537>/OR7'
     */
    localDW->AND20 = (rtb_M3 && (rtu_NWTE || M1_PreviousInput));

    /* Logic: '<S537>/AND21' incorporates:
     *  Logic: '<S537>/OR13'
     */
    localDW->AND21 = (rtb_M3 && (rtu_RWTE || rtb_M5));

    /* Memory: '<S537>/M3' */
    rtb_M3 = localDW->M3_PreviousInput;

    /* Logic: '<S537>/AND22' incorporates:
     *  Logic: '<S537>/OR14'
     */
    localDW->AND22 = ((rtb_M3 || rtu_AACTRL) && M1_PreviousInput);

    /* Logic: '<S537>/AND23' incorporates:
     *  Logic: '<S537>/OR15'
     */
    localDW->AND23 = (rtb_M5 && (rtu_AACTRL || rtb_M4_l));

    /* Logic: '<S537>/AND24' */
    rtb_AND24 = (localDW->M7 && rtu_TRAILCTRL);

    /* Memory: '<S537>/M5' */
    rtb_M5 = localDW->M5_PreviousInput;

    /* Logic: '<S537>/AND25' incorporates:
     *  Logic: '<S537>/NOT13'
     */
    rtb_AND25 = ((!localDW->M6) && rtb_M5);

    /* Logic: '<S537>/AND27' incorporates:
     *  Logic: '<S537>/AND26'
     *  Logic: '<S537>/OR17'
     */
    localDW->AND27 = (localDW->M7 && rtb_M5 && (rtu_NWC || rtu_RWC));

    /* Logic: '<S537>/AND5' incorporates:
     *  Logic: '<S537>/NOT18'
     */
    localDW->AND5 = (localDW->M8 && (!rtu_BLOCK));

    /* Logic: '<S537>/AND8' incorporates:
     *  Logic: '<S537>/OR19'
     */
    localDW->AND8 = (localDW->M7 && (rtu_AACTRL || M9_PreviousInput));

    /* Logic: '<S537>/AND9' incorporates:
     *  Logic: '<S537>/NOT12'
     */
    rtb_M5 = (M1_PreviousInput && (!rtb_M3));
  }

  /* Outputs for Atomic SubSystem: '<S537>/MNV_TON1' */
  MNV_TON(NONVITALMAIN_M, localDW->AND11, &localDW->MNV_TON1, 1.0);

  /* End of Outputs for SubSystem: '<S537>/MNV_TON1' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Logic: '<S537>/OR16' */
    localDW->OR16 = (rtb_AND24 || rtb_AND25);

    /* Logic: '<S537>/OR8' */
    localDW->OR8 = (rtb_M5 || rtb_AND18_o || rtb_AND19_m);

    /* Logic: '<S537>/OR9' */
    localDW->OR9 = (rtb_M3 || rtb_M4_l || M9_PreviousInput);
  }

  /* Logic: '<S537>/OR18' */
  localDW->OR18 = (AND10 || localDW->MNV_TON1.LogicalOperator2 || AND12);
  localDW->AND10 = AND10;
  localDW->AND12 = AND12;
}

/*
 * Update for atomic system:
 *    '<S532>/POINT FAIL'
 *    '<S533>/POINT FAIL'
 *    '<S534>/POINT FAIL'
 *    '<S535>/POINT FAIL'
 *    '<S536>/POINT FAIL'
 */
void M_POINT_FAIL_Update(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M,
  DW_M_POINT_FAIL_T *localDW)
{
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for Memory: '<S537>/M6' */
    localDW->M6_PreviousInput = localDW->AND27;

    /* Update for Memory: '<S537>/M8' */
    localDW->M8_PreviousInput = localDW->OR18;

    /* Update for Memory: '<S537>/M2' */
    localDW->M2_PreviousInput = localDW->AND21;

    /* Update for Memory: '<S537>/M4' */
    localDW->M4_PreviousInput = localDW->AND23;

    /* Update for Memory: '<S537>/M7' */
    localDW->M7_PreviousInput = localDW->AND5;

    /* Update for Memory: '<S537>/M9' */
    localDW->M9_PreviousInput = localDW->AND8;

    /* Update for Memory: '<S537>/M1' */
    localDW->M1_PreviousInput = localDW->AND20;

    /* Update for Memory: '<S537>/M3' */
    localDW->M3_PreviousInput = localDW->AND22;

    /* Update for Memory: '<S537>/M5' */
    localDW->M5_PreviousInput = localDW->OR16;
  }

  /* Update for Atomic SubSystem: '<S537>/MNV_TON1' */
  MNV_TON_Update(NONVITALMAIN_M, localDW->AND11, &localDW->MNV_TON1);

  /* End of Update for SubSystem: '<S537>/MNV_TON1' */
}

/*
 * Output and update for atomic system:
 *    '<S620>/ROUTE REQUEST'
 *    '<S621>/ROUTE REQUEST'
 *    '<S622>/ROUTE REQUEST'
 *    '<S623>/ROUTE REQUEST'
 *    '<S624>/ROUTE REQUEST'
 *    '<S625>/ROUTE REQUEST'
 *    '<S626>/ROUTE REQUEST'
 *    '<S627>/ROUTE REQUEST'
 *    '<S628>/ROUTE REQUEST'
 *    '<S629>/ROUTE REQUEST'
 *    ...
 */
void M_REQ(boolean_T rtu_AUTOOK, boolean_T rtu_RCTRL, boolean_T rtu_RARS,
           boolean_T rtu_RSTCTRL, boolean_T rtu_RB, boolean_T rtu_TP, boolean_T
           rtu_TPBP, boolean_T rtu_JB, DW_M_REQ_T *localDW)
{
  boolean_T Memory1_PreviousInput;

  /* Memory: '<S640>/Memory1' */
  Memory1_PreviousInput = localDW->Memory1_PreviousInput;
  localDW->Memory1 = Memory1_PreviousInput;

  /* Logic: '<S640>/OR5' */
  localDW->OR5 = (Memory1_PreviousInput && rtu_JB);

  /* Logic: '<S640>/AND1' incorporates:
   *  Logic: '<S640>/AND2'
   *  Logic: '<S640>/AND3'
   *  Logic: '<S640>/NOT1'
   *  Logic: '<S640>/NOT2'
   *  Logic: '<S640>/OR1'
   *  Logic: '<S640>/OR2'
   *  Logic: '<S640>/OR3'
   */
  Memory1_PreviousInput = ((Memory1_PreviousInput || (((!rtu_AUTOOK) &&
    rtu_RCTRL) || (rtu_AUTOOK && rtu_RARS))) && (!rtu_RSTCTRL) && (rtu_TP ||
    rtu_TPBP) && rtu_RB);

  /* Memory: '<S640>/Memory1' */
  localDW->Memory1_PreviousInput = Memory1_PreviousInput;
}

/*
 * System initialize for atomic system:
 *    '<S660>/SIGNAL BLOCK S'
 *    '<S661>/SIGNAL BLOCK T'
 *    '<S662>/SIGNAL BLOCK T'
 *    '<S663>/SIGNAL BLOCK T'
 *    '<S664>/SIGNAL BLOCK T'
 *    '<S665>/SIGNAL BLOCK T'
 *    '<S666>/SIGNAL BLOCK T'
 *    '<S667>/SIGNAL BLOCK S'
 *    '<S667>/SIGNAL BLOCK T'
 *    '<S668>/SIGNAL BLOCK S'
 *    '<S668>/SIGNAL BLOCK T'
 */
void M_SIG_B_Init(DW_M_SIG_B_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S669>/MNV_TOF1' */
  MNV_TOF_Init(&localDW->MNV_TOF1);

  /* End of SystemInitialize for SubSystem: '<S669>/MNV_TOF1' */
}

/*
 * Outputs for atomic system:
 *    '<S660>/SIGNAL BLOCK S'
 *    '<S661>/SIGNAL BLOCK T'
 *    '<S662>/SIGNAL BLOCK T'
 *    '<S663>/SIGNAL BLOCK T'
 *    '<S664>/SIGNAL BLOCK T'
 *    '<S665>/SIGNAL BLOCK T'
 *    '<S666>/SIGNAL BLOCK T'
 *    '<S667>/SIGNAL BLOCK S'
 *    '<S667>/SIGNAL BLOCK T'
 *    '<S668>/SIGNAL BLOCK S'
 *    '<S668>/SIGNAL BLOCK T'
 */
void M_SIG_B(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M, boolean_T rtu_VDR,
             boolean_T rtu_RS, boolean_T rtu_DO, boolean_T rtu_RD, boolean_T
             rtu_TP, DW_M_SIG_B_T *localDW)
{
  boolean_T Memory;
  boolean_T NOT1;
  boolean_T NOT4;
  NOT4 = localDW->NOT4;
  NOT1 = localDW->NOT1;
  Memory = localDW->Memory;
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Logic: '<S669>/NOT5' */
    localDW->NOT5 = !rtu_RD;
  }

  /* Outputs for Atomic SubSystem: '<S669>/MNV_TOF1' */
  MNV_TOF(NONVITALMAIN_M, localDW->NOT5, &localDW->MNV_TOF1, 0.1);

  /* End of Outputs for SubSystem: '<S669>/MNV_TOF1' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Memory: '<S669>/Memory' */
    Memory = localDW->Memory_PreviousInput;

    /* Logic: '<S669>/NOT1' */
    NOT1 = !rtu_RS;

    /* Logic: '<S669>/NOT4' */
    NOT4 = !rtu_TP;
  }

  /* Logic: '<S669>/OR4' incorporates:
   *  Logic: '<S669>/AND2'
   *  Logic: '<S669>/OR3'
   */
  localDW->OR4 = (NOT1 || NOT4 || ((rtu_DO || localDW->MNV_TOF1.LogicalOperator4)
    && rtu_VDR && Memory));
  localDW->Memory = Memory;
  localDW->NOT1 = NOT1;
  localDW->NOT4 = NOT4;
}

/*
 * Update for atomic system:
 *    '<S660>/SIGNAL BLOCK S'
 *    '<S661>/SIGNAL BLOCK T'
 *    '<S662>/SIGNAL BLOCK T'
 *    '<S663>/SIGNAL BLOCK T'
 *    '<S664>/SIGNAL BLOCK T'
 *    '<S665>/SIGNAL BLOCK T'
 *    '<S666>/SIGNAL BLOCK T'
 *    '<S667>/SIGNAL BLOCK S'
 *    '<S667>/SIGNAL BLOCK T'
 *    '<S668>/SIGNAL BLOCK S'
 *    '<S668>/SIGNAL BLOCK T'
 */
void M_SIG_B_Update(RT_MODEL_NONVITALMAIN_T * const NONVITALMAIN_M, DW_M_SIG_B_T
                    *localDW)
{
  /* Update for Atomic SubSystem: '<S669>/MNV_TOF1' */
  MNV_TOF_Update(NONVITALMAIN_M, localDW->NOT5, &localDW->MNV_TOF1);

  /* End of Update for SubSystem: '<S669>/MNV_TOF1' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for Memory: '<S669>/Memory' */
    localDW->Memory_PreviousInput = localDW->OR4;
  }
}

/* System initialize for referenced model: 'NONVITALMAIN' */
void NONVITALMAIN_Init(void)
{
  /* SystemInitialize for Atomic SubSystem: '<S19>/TON7' */
  MNV_TON_Init(&NONVITALMAIN_DW.TON7);

  /* End of SystemInitialize for SubSystem: '<S19>/TON7' */

  /* SystemInitialize for Atomic SubSystem: '<S19>/TON6' */
  MNV_TON_Init(&NONVITALMAIN_DW.TON6);

  /* End of SystemInitialize for SubSystem: '<S19>/TON6' */

  /* SystemInitialize for Atomic SubSystem: '<S19>/TON5' */
  MNV_TON_Init(&NONVITALMAIN_DW.TON5);

  /* End of SystemInitialize for SubSystem: '<S19>/TON5' */

  /* SystemInitialize for Atomic SubSystem: '<S19>/TON4' */
  MNV_TON_Init(&NONVITALMAIN_DW.TON4);

  /* End of SystemInitialize for SubSystem: '<S19>/TON4' */

  /* SystemInitialize for Atomic SubSystem: '<S19>/TON3' */
  MNV_TON_Init(&NONVITALMAIN_DW.TON3);

  /* End of SystemInitialize for SubSystem: '<S19>/TON3' */

  /* SystemInitialize for Atomic SubSystem: '<S19>/TON2' */
  MNV_TON_Init(&NONVITALMAIN_DW.TON2);

  /* End of SystemInitialize for SubSystem: '<S19>/TON2' */

  /* SystemInitialize for Atomic SubSystem: '<S19>/TON1' */
  MNV_TON_Init(&NONVITALMAIN_DW.TON1);

  /* End of SystemInitialize for SubSystem: '<S19>/TON1' */

  /* SystemInitialize for Atomic SubSystem: '<S19>/TON' */
  MNV_TON_Init(&NONVITALMAIN_DW.TON);

  /* End of SystemInitialize for SubSystem: '<S19>/TON' */

  /* SystemInitialize for Atomic SubSystem: '<S60>/MNV_TOF2' */
  MNV_TOF_Init(&NONVITALMAIN_DW.MNV_TOF2);

  /* End of SystemInitialize for SubSystem: '<S60>/MNV_TOF2' */

  /* SystemInitialize for Atomic SubSystem: '<S61>/MNV_TOF1' */
  MNV_TOF_Init(&NONVITALMAIN_DW.MNV_TOF1);

  /* End of SystemInitialize for SubSystem: '<S61>/MNV_TOF1' */

  /* SystemInitialize for Atomic SubSystem: '<S62>/MNV_TOF1' */
  MNV_TOF_Init(&NONVITALMAIN_DW.MNV_TOF1_b);

  /* End of SystemInitialize for SubSystem: '<S62>/MNV_TOF1' */

  /* SystemInitialize for Atomic SubSystem: '<S63>/MNV_TOF1' */
  MNV_TOF_Init(&NONVITALMAIN_DW.MNV_TOF1_l);

  /* End of SystemInitialize for SubSystem: '<S63>/MNV_TOF1' */

  /* SystemInitialize for Atomic SubSystem: '<S64>/MNV_TOF1' */
  MNV_TOF_Init(&NONVITALMAIN_DW.MNV_TOF1_j);

  /* End of SystemInitialize for SubSystem: '<S64>/MNV_TOF1' */

  /* SystemInitialize for Atomic SubSystem: '<S65>/MNV_TOF1' */
  MNV_TOF_Init(&NONVITALMAIN_DW.MNV_TOF1_ll);

  /* End of SystemInitialize for SubSystem: '<S65>/MNV_TOF1' */

  /* SystemInitialize for Atomic SubSystem: '<S66>/MNV_TOF1' */
  MNV_TOF_Init(&NONVITALMAIN_DW.MNV_TOF1_k);

  /* End of SystemInitialize for SubSystem: '<S66>/MNV_TOF1' */

  /* SystemInitialize for Atomic SubSystem: '<S67>/MNV_TOF1' */
  MNV_TOF_Init(&NONVITALMAIN_DW.MNV_TOF1_lg);

  /* End of SystemInitialize for SubSystem: '<S67>/MNV_TOF1' */

  /* SystemInitialize for Atomic SubSystem: '<S67>/MNV_TOF2' */
  MNV_TOF_Init(&NONVITALMAIN_DW.MNV_TOF2_h);

  /* End of SystemInitialize for SubSystem: '<S67>/MNV_TOF2' */

  /* SystemInitialize for Atomic SubSystem: '<S68>/MNV_TOF1' */
  MNV_TOF_Init(&NONVITALMAIN_DW.MNV_TOF1_js);

  /* End of SystemInitialize for SubSystem: '<S68>/MNV_TOF1' */

  /* SystemInitialize for Atomic SubSystem: '<S68>/MNV_TOF2' */
  MNV_TOF_Init(&NONVITALMAIN_DW.MNV_TOF2_o);

  /* End of SystemInitialize for SubSystem: '<S68>/MNV_TOF2' */

  /* SystemInitialize for Atomic SubSystem: '<S219>/INTERLOCKING POINT' */
  M_IL_POINT_Init(&NONVITALMAIN_DW.INTERLOCKINGPOINT);

  /* End of SystemInitialize for SubSystem: '<S219>/INTERLOCKING POINT' */

  /* SystemInitialize for Atomic SubSystem: '<S220>/INTERLOCKING POINT' */
  M_IL_POINT_Init(&NONVITALMAIN_DW.INTERLOCKINGPOINT_f);

  /* End of SystemInitialize for SubSystem: '<S220>/INTERLOCKING POINT' */

  /* SystemInitialize for Atomic SubSystem: '<S221>/INTERLOCKING POINT' */
  M_IL_POINT_Init(&NONVITALMAIN_DW.INTERLOCKINGPOINT_e);

  /* End of SystemInitialize for SubSystem: '<S221>/INTERLOCKING POINT' */

  /* SystemInitialize for Atomic SubSystem: '<S222>/INTERLOCKING POINT' */
  M_IL_POINT_Init(&NONVITALMAIN_DW.INTERLOCKINGPOINT_a);

  /* End of SystemInitialize for SubSystem: '<S222>/INTERLOCKING POINT' */

  /* SystemInitialize for Atomic SubSystem: '<S223>/INTERLOCKING POINT' */
  M_IL_POINT_Init(&NONVITALMAIN_DW.INTERLOCKINGPOINT_i);

  /* End of SystemInitialize for SubSystem: '<S223>/INTERLOCKING POINT' */

  /* SystemInitialize for Atomic SubSystem: '<S532>/POINT FAIL' */
  M_POINT_FAIL_Init(&NONVITALMAIN_DW.POINTFAIL);

  /* End of SystemInitialize for SubSystem: '<S532>/POINT FAIL' */

  /* SystemInitialize for Atomic SubSystem: '<S533>/POINT FAIL' */
  M_POINT_FAIL_Init(&NONVITALMAIN_DW.POINTFAIL_n);

  /* End of SystemInitialize for SubSystem: '<S533>/POINT FAIL' */

  /* SystemInitialize for Atomic SubSystem: '<S534>/POINT FAIL' */
  M_POINT_FAIL_Init(&NONVITALMAIN_DW.POINTFAIL_a);

  /* End of SystemInitialize for SubSystem: '<S534>/POINT FAIL' */

  /* SystemInitialize for Atomic SubSystem: '<S535>/POINT FAIL' */
  M_POINT_FAIL_Init(&NONVITALMAIN_DW.POINTFAIL_m);

  /* End of SystemInitialize for SubSystem: '<S535>/POINT FAIL' */

  /* SystemInitialize for Atomic SubSystem: '<S536>/POINT FAIL' */
  M_POINT_FAIL_Init(&NONVITALMAIN_DW.POINTFAIL_p);

  /* End of SystemInitialize for SubSystem: '<S536>/POINT FAIL' */

  /* SystemInitialize for Atomic SubSystem: '<S567>/MNV_TOF' */
  MNV_TOF_Init(&NONVITALMAIN_DW.MNV_TOF_e);

  /* End of SystemInitialize for SubSystem: '<S567>/MNV_TOF' */

  /* SystemInitialize for Atomic SubSystem: '<S568>/MNV_TOF' */
  MNV_TOF_Init(&NONVITALMAIN_DW.MNV_TOF_h);

  /* End of SystemInitialize for SubSystem: '<S568>/MNV_TOF' */

  /* SystemInitialize for Atomic SubSystem: '<S569>/MNV_TOF' */
  MNV_TOF_Init(&NONVITALMAIN_DW.MNV_TOF_m);

  /* End of SystemInitialize for SubSystem: '<S569>/MNV_TOF' */

  /* SystemInitialize for Atomic SubSystem: '<S570>/MNV_TOF' */
  MNV_TOF_Init(&NONVITALMAIN_DW.MNV_TOF_n);

  /* End of SystemInitialize for SubSystem: '<S570>/MNV_TOF' */

  /* SystemInitialize for Atomic SubSystem: '<S660>/SIGNAL BLOCK S' */
  M_SIG_B_Init(&NONVITALMAIN_DW.SIGNALBLOCKS);

  /* End of SystemInitialize for SubSystem: '<S660>/SIGNAL BLOCK S' */

  /* SystemInitialize for Atomic SubSystem: '<S661>/SIGNAL BLOCK T' */
  M_SIG_B_Init(&NONVITALMAIN_DW.SIGNALBLOCKT);

  /* End of SystemInitialize for SubSystem: '<S661>/SIGNAL BLOCK T' */

  /* SystemInitialize for Atomic SubSystem: '<S662>/SIGNAL BLOCK T' */
  M_SIG_B_Init(&NONVITALMAIN_DW.SIGNALBLOCKT_p);

  /* End of SystemInitialize for SubSystem: '<S662>/SIGNAL BLOCK T' */

  /* SystemInitialize for Atomic SubSystem: '<S663>/SIGNAL BLOCK T' */
  M_SIG_B_Init(&NONVITALMAIN_DW.SIGNALBLOCKT_b);

  /* End of SystemInitialize for SubSystem: '<S663>/SIGNAL BLOCK T' */

  /* SystemInitialize for Atomic SubSystem: '<S664>/SIGNAL BLOCK T' */
  M_SIG_B_Init(&NONVITALMAIN_DW.SIGNALBLOCKT_i);

  /* End of SystemInitialize for SubSystem: '<S664>/SIGNAL BLOCK T' */

  /* SystemInitialize for Atomic SubSystem: '<S665>/SIGNAL BLOCK T' */
  M_SIG_B_Init(&NONVITALMAIN_DW.SIGNALBLOCKT_m);

  /* End of SystemInitialize for SubSystem: '<S665>/SIGNAL BLOCK T' */

  /* SystemInitialize for Atomic SubSystem: '<S666>/SIGNAL BLOCK T' */
  M_SIG_B_Init(&NONVITALMAIN_DW.SIGNALBLOCKT_f);

  /* End of SystemInitialize for SubSystem: '<S666>/SIGNAL BLOCK T' */

  /* SystemInitialize for Atomic SubSystem: '<S667>/SIGNAL BLOCK T' */
  M_SIG_B_Init(&NONVITALMAIN_DW.SIGNALBLOCKT_ir);

  /* End of SystemInitialize for SubSystem: '<S667>/SIGNAL BLOCK T' */

  /* SystemInitialize for Atomic SubSystem: '<S667>/SIGNAL BLOCK S' */
  M_SIG_B_Init(&NONVITALMAIN_DW.SIGNALBLOCKS_c);

  /* End of SystemInitialize for SubSystem: '<S667>/SIGNAL BLOCK S' */

  /* SystemInitialize for Atomic SubSystem: '<S668>/SIGNAL BLOCK T' */
  M_SIG_B_Init(&NONVITALMAIN_DW.SIGNALBLOCKT_j);

  /* End of SystemInitialize for SubSystem: '<S668>/SIGNAL BLOCK T' */

  /* SystemInitialize for Atomic SubSystem: '<S668>/SIGNAL BLOCK S' */
  M_SIG_B_Init(&NONVITALMAIN_DW.SIGNALBLOCKS_e);

  /* End of SystemInitialize for SubSystem: '<S668>/SIGNAL BLOCK S' */
}

/* Start for referenced model: 'NONVITALMAIN' */
void NONVITALMAIN_Start(void)
{
  /* Start for DiscretePulseGenerator: '<S3>/0.5S' */
  NONVITALMAIN_DW.clockTickCounter = 0;

  /* Start for DiscretePulseGenerator: '<S3>/1S' */
  NONVITALMAIN_DW.clockTickCounter_f = 0;
}

/* Outputs for referenced model: 'NONVITALMAIN' */
void NONVITALMAIN(const boolean_T rtu_FROMDEP[6], const boolean_T *rtu_VDRFROM,
                  const boolean_T *rtu_VNVCHKFROM, const boolean_T rtu_TPFROM[27],
                  const boolean_T rtu_TESFROM[25], const boolean_T rtu_TWSFROM
                  [25], const boolean_T rtu_SESFROM[7], const boolean_T
                  rtu_SWSFROM[9], const boolean_T rtu_NWCFROM[5], const
                  boolean_T rtu_NWPFROM[5], const boolean_T rtu_NWZFROM[5],
                  const boolean_T rtu_NWTEFROM[5], const boolean_T rtu_RWCFROM[5],
                  const boolean_T rtu_RWPFROM[5], const boolean_T rtu_RWZFROM[5],
                  const boolean_T rtu_RWTEFROM[5], const boolean_T rtu_LFROM[5],
                  const boolean_T rtu_LSFROM[5], const boolean_T rtu_SWRLSFROM[5],
                  const boolean_T rtu_TPZFROM[5], const boolean_T rtu_DRDOFROM[8],
                  const boolean_T rtu_GRDOFROM[2], const boolean_T rtu_TASFROM[8],
                  const boolean_T rtu_SASFROM[3], const boolean_T rtu_RRLSFROM[8],
                  const boolean_T rtu_HDSFROM[20], const boolean_T rtu_CBTCFROM
                  [32], const boolean_T rtu_SYSTEMFROM[4], const boolean_T
                  rtu_FROMATS[40], const boolean_T rtu_GLOBALPBDI[4], const
                  boolean_T rtu_SWCTRLPBDI[5], const boolean_T *rtu_RCTRLPBDI,
                  const boolean_T rtu_ROUTEPBDI[12], const boolean_T
                  rtu_POINTPBDI[5], const boolean_T rtu_CBTCPBDI[34], boolean_T
                  rty_TODEP[17], boolean_T *rty_NVVCHKTO, boolean_T *rty_RRTO,
                  boolean_T rty_TREQTO[16], boolean_T rty_NREQTO[5], boolean_T
                  rty_RREQTO[5], boolean_T rty_OOCTO[5], boolean_T rty_RRLSPBTO
                  [8], boolean_T rty_SWRLSPBTO[5], boolean_T rty_SWINITTO[5],
                  boolean_T rty_RSTTO[9], boolean_T rty_DEPVARTO[8], boolean_T
                  rty_CBTCTO[31], boolean_T rty_GLOBALINDDO[7], boolean_T
                  rty_SIGNALINDDO[18], boolean_T rty_POINTINDDO[144], boolean_T
                  rty_TRACKINDDO[81], boolean_T rty_BUTTONINDDO[20], boolean_T
                  rty_CBTCINDDO[42], boolean_T rty_TOARS[38])
{
  RT_MODEL_NONVITALMAIN_T *const NONVITALMAIN_M = &(NONVITALMAIN_MdlrefDW.rtm);

  /* local block i/o variables */
  boolean_T rtb_W11A21AL;
  boolean_T rtb_W11A21ASWRLS;
  boolean_T rtb_W11A21ASWINIT;
  boolean_T rtb_W11A21ABLOCK;
  boolean_T rtb_W11A21ALS;
  boolean_T rtb_FLASH1S;
  boolean_T rtb_FLASH05S_nd;
  boolean_T rtb_W11A21ANWP;
  boolean_T rtb_W11A21ARWP;
  boolean_T rtb_W11A21ANWZ;
  boolean_T rtb_W11A21ARWZ;
  boolean_T rtb_W11A21ANWC;
  boolean_T rtb_W11A21ARWC;
  boolean_T rtb_W11A21AOOC;
  boolean_T rtb_u1ATP;
  boolean_T rtb_NOT1_o;
  boolean_T rtb_W11B21BL;
  boolean_T rtb_W11B21BSWRLS;
  boolean_T rtb_W11B21BSWINIT;
  boolean_T rtb_W11B21BBLOCK;
  boolean_T rtb_W11B21BLS;
  boolean_T rtb_FLASH1S_l;
  boolean_T rtb_FLASH05S_m;
  boolean_T rtb_W11B21BNWP;
  boolean_T rtb_W11B21BRWP;
  boolean_T rtb_W11B21BNWZ;
  boolean_T rtb_W11B21BRWZ;
  boolean_T rtb_W11B21BNWC;
  boolean_T rtb_W11B21BRWC;
  boolean_T rtb_W11B21BOOC;
  boolean_T rtb_u1BTP_n;
  boolean_T rtb_NOT1_h;
  boolean_T rtb_W13A23AL;
  boolean_T rtb_W13A23ASWRLS;
  boolean_T rtb_W13A23ASWINIT;
  boolean_T rtb_W13A23ABLOCK;
  boolean_T rtb_W13A23ALS;
  boolean_T rtb_FLASH1S_d;
  boolean_T rtb_FLASH05S_d;
  boolean_T rtb_W13A23ANWP;
  boolean_T rtb_W13A23ARWP;
  boolean_T rtb_W13A23ANWZ;
  boolean_T rtb_W13A23ARWZ;
  boolean_T rtb_W13A23ANWC;
  boolean_T rtb_W13A23ARWC;
  boolean_T rtb_W13A23AOOC;
  boolean_T rtb_u3ATP_j;
  boolean_T rtb_NOT1_l;
  boolean_T rtb_W13B23BL;
  boolean_T rtb_W13B23BSWRLS;
  boolean_T rtb_W13B23BSWINIT;
  boolean_T rtb_W13B23BBLOCK;
  boolean_T rtb_W13B23BLS;
  boolean_T rtb_FLASH1S_n;
  boolean_T rtb_FLASH05S_p;
  boolean_T rtb_W13B23BNWP;
  boolean_T rtb_W13B23BRWP;
  boolean_T rtb_W13B23BNWZ;
  boolean_T rtb_W13B23BRWZ;
  boolean_T rtb_W13B23BNWC;
  boolean_T rtb_W13B23BRWC;
  boolean_T rtb_W13B23BOOC;
  boolean_T rtb_u3BTP;
  boolean_T rtb_NOT1_b;
  boolean_T rtb_W11A21AL_c;
  boolean_T rtb_W11A21ASWRLS_a;
  boolean_T rtb_W11A21ASWINIT_p;
  boolean_T rtb_W11A21ABLOCK_j;
  boolean_T rtb_W11A21ALS_n;
  boolean_T rtb_FLASH1S_m;
  boolean_T rtb_FLASH05S_eu;
  boolean_T rtb_W11A21ANWP_k;
  boolean_T rtb_W11A21ARWP_j;
  boolean_T rtb_W11A21ANWZ_b;
  boolean_T rtb_W11A21ARWZ_h;
  boolean_T rtb_W11A21ANWC_g;
  boolean_T rtb_W11A21ARWC_l;
  boolean_T rtb_W11A21AOOC_e;
  boolean_T rtb_u1ATP_b;
  boolean_T rtb_NOT1_j;
  boolean_T rtb_W11B21BL_e;
  boolean_T rtb_W11B21BSWRLS_c;
  boolean_T rtb_W11B21BSWINIT_g;
  boolean_T rtb_W11B21BBLOCK_i;
  boolean_T rtb_W11B21BLS_j;
  boolean_T rtb_FLASH1S_h;
  boolean_T rtb_FLASH05S_ba;
  boolean_T rtb_W11B21BNWP_p;
  boolean_T rtb_W11B21BRWP_k;
  boolean_T rtb_W11B21BNWZ_n;
  boolean_T rtb_W11B21BRWZ_j;
  boolean_T rtb_W11B21BNWC_a;
  boolean_T rtb_W11B21BRWC_c;
  boolean_T rtb_W11B21BOOC_n;
  boolean_T rtb_u1BTP_g;
  boolean_T rtb_NOT1_g;
  boolean_T rtb_W21CL;
  boolean_T rtb_W21CSWRLS;
  boolean_T rtb_W21CSWINIT;
  boolean_T rtb_W21CBLOCK;
  boolean_T rtb_W21CLS;
  boolean_T rtb_FLASH1S_nt;
  boolean_T rtb_FLASH05S_k;
  boolean_T rtb_W21CNWP;
  boolean_T rtb_W21CRWP;
  boolean_T rtb_W21CNWZ;
  boolean_T rtb_W21CRWZ;
  boolean_T rtb_W21CNWC;
  boolean_T rtb_W21CRWC;
  boolean_T rtb_W21COOC;
  boolean_T rtb_u1CTP_j;
  boolean_T rtb_NOT1_i;
  boolean_T rtb_W13A23AL_j;
  boolean_T rtb_W13A23ASWRLS_b;
  boolean_T rtb_W13A23ASWINIT_h;
  boolean_T rtb_W13A23ABLOCK_n;
  boolean_T rtb_W13A23ALS_h;
  boolean_T rtb_FLASH1S_a;
  boolean_T rtb_FLASH05S_mu;
  boolean_T rtb_W13A23ANWP_o;
  boolean_T rtb_W13A23ARWP_i;
  boolean_T rtb_W13A23ANWZ_a;
  boolean_T rtb_W13A23ARWZ_m;
  boolean_T rtb_W13A23ANWC_p;
  boolean_T rtb_W13A23ARWC_g;
  boolean_T rtb_W13A23AOOC_c;
  boolean_T rtb_u3ATP_m;
  boolean_T rtb_NOT1_hl;
  boolean_T rtb_W13B23BL_b;
  boolean_T rtb_W13B23BSWRLS_p;
  boolean_T rtb_W13B23BSWINIT_p;
  boolean_T rtb_W13B23BBLOCK_g;
  boolean_T rtb_W13B23BLS_f;
  boolean_T rtb_FLASH1S_k;
  boolean_T rtb_FLASH05S_i;
  boolean_T rtb_W13B23BNWP_c;
  boolean_T rtb_W13B23BRWP_e;
  boolean_T rtb_W13B23BNWZ_d;
  boolean_T rtb_W13B23BRWZ_f;
  boolean_T rtb_W13B23BNWC_f;
  boolean_T rtb_W13B23BRWC_d;
  boolean_T rtb_W13B23BOOC_n;
  boolean_T rtb_u3BTP_b;
  boolean_T rtb_NOT1_bf;
  boolean_T rtb_VDR_h;
  boolean_T rtb_J12ADRDO_mk;
  boolean_T rtb_FLASH;
  boolean_T rtb_VDR_g;
  boolean_T rtb_J12BDRDO_n;
  boolean_T rtb_FLASH_n;
  boolean_T rtb_VDR_c;
  boolean_T rtb_J14DRDO_l;
  boolean_T rtb_FLASH_g;
  boolean_T rtb_VDR_j;
  boolean_T rtb_J22ADRDO_m;
  boolean_T rtb_FLASH_b;
  boolean_T rtb_VDR_l;
  boolean_T rtb_J22BDRDO_a;
  boolean_T rtb_FLASH_a;
  boolean_T rtb_VDR_b;
  boolean_T rtb_J24DRDO_m;
  boolean_T rtb_FLASH_k;
  boolean_T rtb_VDR_ll;
  boolean_T rtb_JL10DRDO_j;
  boolean_T rtb_JL10GRDO_h;
  boolean_T rtb_FLASH_bn;
  boolean_T rtb_VDR_jd;
  boolean_T rtb_JL20DRDO_kc;
  boolean_T rtb_JL20GRDO_g;
  boolean_T rtb_FLASH_e;
  boolean_T rtb_u0ATP;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_u0BTP_b;
  boolean_T rtb_LogicalOperator_h;
  boolean_T rtb_u1ATP_o;
  boolean_T rtb_LogicalOperator_m;
  boolean_T rtb_u1BTP_m;
  boolean_T rtb_LogicalOperator_d;
  boolean_T rtb_u2ATP;
  boolean_T rtb_LogicalOperator_dk;
  boolean_T rtb_u2BTP;
  boolean_T rtb_LogicalOperator_p;
  boolean_T rtb_u2CTP;
  boolean_T rtb_LogicalOperator_pd;
  boolean_T rtb_u2DTP;
  boolean_T rtb_LogicalOperator_c;
  boolean_T rtb_u2ETP;
  boolean_T rtb_LogicalOperator_pdf;
  boolean_T rtb_u3ATP_o;
  boolean_T rtb_LogicalOperator_b;
  boolean_T rtb_u3BTP_a;
  boolean_T rtb_LogicalOperator_f;
  boolean_T rtb_u4ATP_k;
  boolean_T rtb_LogicalOperator_o;
  boolean_T rtb_u4BTP;
  boolean_T rtb_u4BTES;
  boolean_T rtb_u0ATP_c;
  boolean_T rtb_LogicalOperator_mp;
  boolean_T rtb_u0BTP_n;
  boolean_T rtb_LogicalOperator_l;
  boolean_T rtb_u1ATP_e;
  boolean_T rtb_LogicalOperator_ph;
  boolean_T rtb_u1BTP_b;
  boolean_T rtb_LogicalOperator_lk;
  boolean_T rtb_u1CTP_f;
  boolean_T rtb_LogicalOperator_k;
  boolean_T rtb_u2ATP_n;
  boolean_T rtb_LogicalOperator_i;
  boolean_T rtb_u2BTP_d;
  boolean_T rtb_LogicalOperator_l1;
  boolean_T rtb_u2CTP_g;
  boolean_T rtb_LogicalOperator_g;
  boolean_T rtb_u2DTP_f;
  boolean_T rtb_LogicalOperator_ov;
  boolean_T rtb_u2ETP_f;
  boolean_T rtb_LogicalOperator_lw;
  boolean_T rtb_u3ATP_b;
  boolean_T rtb_LogicalOperator_ml;
  boolean_T rtb_u3BTP_o;
  boolean_T rtb_LogicalOperator_m5;
  boolean_T rtb_u4ATP_o;
  boolean_T rtb_LogicalOperator_j;
  boolean_T rtb_u4BTP_l;
  boolean_T rtb_u4BTES_o;
  boolean_T rtb_W11A21ACALCTRL;
  boolean_T rtb_W11A21ATRAILCTRL;
  boolean_T rtb_W11A21ARSTCTRL;
  boolean_T rtb_W11A21ABCTRL;
  boolean_T rtb_W11A21ANWZ_h;
  boolean_T rtb_W11A21ARWZ_d;
  boolean_T rtb_W11A21ANWP_j;
  boolean_T rtb_W11A21ARWP_g;
  boolean_T rtb_W11A21ANWC_e;
  boolean_T rtb_W11A21ARWC_b;
  boolean_T rtb_W11A21ANWTE;
  boolean_T rtb_W11A21ARWTE;
  boolean_T rtb_W11A21AOOC_d;
  boolean_T rtb_W11A21AOOCRD;
  boolean_T rtb_OR2_n;
  boolean_T rtb_OR3_b;
  boolean_T rtb_OR1_l;
  boolean_T rtb_W11B21BCALCTRL;
  boolean_T rtb_W11B21BTRAILCTRL;
  boolean_T rtb_W11B21BRSTCTRL;
  boolean_T rtb_W11B21BBCTRL;
  boolean_T rtb_W11B21BNWZ_g;
  boolean_T rtb_W11B21BRWZ_d;
  boolean_T rtb_W11B21BNWP_pt;
  boolean_T rtb_W11B21BRWP_o;
  boolean_T rtb_W11B21BNWC_b;
  boolean_T rtb_W11B21BRWC_n;
  boolean_T rtb_W11B21BNWTE;
  boolean_T rtb_W11B21BRWTE;
  boolean_T rtb_W11B21BOOC_b;
  boolean_T rtb_W11B21BOOCRD;
  boolean_T rtb_OR2_a;
  boolean_T rtb_OR3_l;
  boolean_T rtb_OR1_h;
  boolean_T rtb_W13A23ACALCTRL;
  boolean_T rtb_W13A23ATRAILCTRL;
  boolean_T rtb_W13A23ARSTCTRL;
  boolean_T rtb_W13A23ABCTRL;
  boolean_T rtb_W13A23ANWZ_p;
  boolean_T rtb_W13A23ARWZ_e;
  boolean_T rtb_W13A23ANWP_j;
  boolean_T rtb_W13A23ARWP_n;
  boolean_T rtb_W13A23ANWC_k;
  boolean_T rtb_W13A23ARWC_k;
  boolean_T rtb_W13A23ANWTE;
  boolean_T rtb_W13A23ARWTE;
  boolean_T rtb_W13A23AOOC_e;
  boolean_T rtb_W13A23AOOCRD;
  boolean_T rtb_OR2_m;
  boolean_T rtb_OR3_lm;
  boolean_T rtb_OR1_b;
  boolean_T rtb_W13B23BCALCTRL;
  boolean_T rtb_W13B23BTRAILCTRL;
  boolean_T rtb_W13B23BRSTCTRL;
  boolean_T rtb_W13B23BBCTRL;
  boolean_T rtb_W13B23BNWZ_l;
  boolean_T rtb_W13B23BRWZ_fy;
  boolean_T rtb_W13B23BNWP_m;
  boolean_T rtb_W13B23BRWP_g;
  boolean_T rtb_W13B23BNWC_a;
  boolean_T rtb_W13B23BRWC_b;
  boolean_T rtb_W13B23BNWTE;
  boolean_T rtb_W13B23BRWTE;
  boolean_T rtb_W13B23BOOC_m;
  boolean_T rtb_W13B23BOOCRD;
  boolean_T rtb_OR2_d;
  boolean_T rtb_OR3_o;
  boolean_T rtb_OR1_i;
  boolean_T rtb_W21CCALCTRL;
  boolean_T rtb_W21CTRAILCTRL;
  boolean_T rtb_W21CRSTCTRL;
  boolean_T rtb_W21CBCTRL;
  boolean_T rtb_W21CNWZ_f;
  boolean_T rtb_W21CRWZ_j;
  boolean_T rtb_W21CNWP_f;
  boolean_T rtb_W21CRWP_p;
  boolean_T rtb_W21CNWC_o;
  boolean_T rtb_W21CRWC_e;
  boolean_T rtb_W21CNWTE;
  boolean_T rtb_W21CRWTE;
  boolean_T rtb_W21COOC_k;
  boolean_T rtb_W21COOCRD;
  boolean_T rtb_OR4_ak;
  boolean_T rtb_OR2_ng;
  boolean_T rtb_OR1_f;
  boolean_T rtb_EDDI;
  boolean_T rtb_THB;
  boolean_T rtb_EDDI_o;
  boolean_T rtb_THB_e;
  boolean_T rtb_EDDI_a;
  boolean_T rtb_THB_e1;
  boolean_T rtb_EDDI_b;
  boolean_T rtb_THB_k;
  boolean_T rtb_EDDI_i;
  boolean_T rtb_THB_f;
  boolean_T rtb_EDDI_j;
  boolean_T rtb_THB_n;
  boolean_T rtb_EDDI_d;
  boolean_T rtb_THB_p;
  boolean_T rtb_EDDI_e;
  boolean_T rtb_THB_f2;
  boolean_T rtb_EDDI_l;
  boolean_T rtb_THB_j;
  boolean_T rtb_EDDI_g;
  boolean_T rtb_THB_g;
  boolean_T rtb_EDDI_bx;
  boolean_T rtb_THB_m;
  boolean_T rtb_EDDI_i4;
  boolean_T rtb_THB_o;
  boolean_T rtb_EDDI_jc;
  boolean_T rtb_THB_ji;
  boolean_T rtb_EDDI_ik;
  boolean_T rtb_THB_a;
  boolean_T rtb_EDDI_bxn;
  boolean_T rtb_THB_a5;
  boolean_T rtb_EDDI_p;
  boolean_T rtb_THB_e3;
  boolean_T rtb_ESBDI;
  boolean_T rtb_THB_fq;
  boolean_T rtb_ESBDI_e;
  boolean_T rtb_THB_ja;
  boolean_T rtb_ESBDI_o;
  boolean_T rtb_THB_oh;
  boolean_T rtb_ESBDI_k;
  boolean_T rtb_THB_jp;
  boolean_T rtb_ESBDI_l;
  boolean_T rtb_THB_fi;
  boolean_T rtb_ESBDI_f;
  boolean_T rtb_THB_ku;
  boolean_T rtb_ESBDI_i;
  boolean_T rtb_THB_l;
  boolean_T rtb_ESBDI_g;
  boolean_T rtb_THB_l2;
  boolean_T rtb_FAIL;
  boolean_T rtb_THB_ge;
  boolean_T rtb_FAIL_c;
  boolean_T rtb_THB_e2;
  boolean_T rtb_AND1_nt;
  boolean_T rtb_THB_o1;
  boolean_T rtb_AND1_iww;
  boolean_T rtb_THB_ap;
  boolean_T rtb_PSDDI;
  boolean_T rtb_THB_ej;
  boolean_T rtb_PSDDI_n;
  boolean_T rtb_THB_fv;
  boolean_T rtb_PSDDI_o;
  boolean_T rtb_THB_ei;
  boolean_T rtb_PSDDI_a;
  boolean_T rtb_THB_c;
  boolean_T rtb_PSDDI_b;
  boolean_T rtb_THB_py;
  boolean_T rtb_PSDDI_l;
  boolean_T rtb_THB_og;
  boolean_T rtb_PSDDI_k;
  boolean_T rtb_THB_i;
  boolean_T rtb_PSDDI_lu;
  boolean_T rtb_THB_o2;
  boolean_T rtb_NOT2_f;
  boolean_T rtb_RROK;
  boolean_T rtb_W11A21APBDI;
  boolean_T rtb_AND1_n1;
  boolean_T rtb_TBWPBDI;
  boolean_T rtb_TKGWPBDI;
  boolean_T rtb_TBKWPBDI;
  boolean_T rtb_TWTPBDI;
  boolean_T rtb_TKWPBDI;
  boolean_T rtb_W11B21BPBDI;
  boolean_T rtb_AND1_ml;
  boolean_T rtb_TBWPBDI_o;
  boolean_T rtb_TKGWPBDI_a;
  boolean_T rtb_TBKWPBDI_h;
  boolean_T rtb_TWTPBDI_b;
  boolean_T rtb_TKWPBDI_f;
  boolean_T rtb_W13A23APBDI;
  boolean_T rtb_AND1_g;
  boolean_T rtb_TBWPBDI_o0;
  boolean_T rtb_TKGWPBDI_c;
  boolean_T rtb_TBKWPBDI_n;
  boolean_T rtb_TWTPBDI_c;
  boolean_T rtb_TKWPBDI_e;
  boolean_T rtb_W13B23BPBDI;
  boolean_T rtb_AND1_l3;
  boolean_T rtb_TBWPBDI_m;
  boolean_T rtb_TKGWPBDI_g;
  boolean_T rtb_TBKWPBDI_f;
  boolean_T rtb_TWTPBDI_o;
  boolean_T rtb_TKWPBDI_l;
  boolean_T rtb_W11A21APBDI_i;
  boolean_T rtb_u1ATP_ne;
  boolean_T rtb_TBWPBDI_e;
  boolean_T rtb_TKGWPBDI_cp;
  boolean_T rtb_TBKWPBDI_e;
  boolean_T rtb_TWTPBDI_h;
  boolean_T rtb_TKWPBDI_b;
  boolean_T rtb_JL10PBDI;
  boolean_T rtb_J12BPBDI;
  boolean_T rtb_J22BPBDI;
  boolean_T rtb_JL10PBDI_k;
  boolean_T rtb_J12APBDI;
  boolean_T rtb_J22APBDI;
  boolean_T rtb_JL20PBDI;
  boolean_T rtb_J12BPBDI_c;
  boolean_T rtb_J22BPBDI_m;
  boolean_T rtb_J24PBDI;
  boolean_T rtb_J12APBDI_b;
  boolean_T rtb_J22APBDI_i;
  boolean_T rtb_DEPTOSTPBDI;
  boolean_T rtb_X10PBDI;
  boolean_T rtb_X20PBDI;
  boolean_T rtb_X10PBDI_m;
  boolean_T rtb_J12APBDI_g;
  boolean_T rtb_J22APBDI_a;
  boolean_T rtb_X14PBDI;
  boolean_T rtb_J12BPBDI_i;
  boolean_T rtb_J22BPBDI_c;
  boolean_T rtb_JL10PBDI_h;
  boolean_T rtb_J12APBDI_bs;
  boolean_T rtb_J22APBDI_b;
  boolean_T rtb_X24PBDI;
  boolean_T rtb_J12BPBDI_h;
  boolean_T rtb_J22BPBDI_p;
  boolean_T rtb_STTODEPPBDI;
  boolean_T rtb_JL10PBDI_a;
  boolean_T rtb_JL20PBDI_g;
  boolean_T rtb_OTOMATISPBDI;
  boolean_T rtb_MANUALPBDI;
  boolean_T rtb_J12APBDI_i;
  boolean_T rtb_OTOMATISPBDI_p;
  boolean_T rtb_MANUALPBDI_d;
  boolean_T rtb_J12BPBDI_l;
  boolean_T rtb_OTOMATISPBDI_d;
  boolean_T rtb_MANUALPBDI_b;
  boolean_T rtb_J14PBDI;
  boolean_T rtb_OTOMATISPBDI_b;
  boolean_T rtb_MANUALPBDI_k;
  boolean_T rtb_J22APBDI_f;
  boolean_T rtb_OTOMATISPBDI_h;
  boolean_T rtb_MANUALPBDI_a;
  boolean_T rtb_J22BPBDI_n;
  boolean_T rtb_OTOMATISPBDI_g;
  boolean_T rtb_MANUALPBDI_dz;
  boolean_T rtb_J24PBDI_l;
  boolean_T rtb_OTOMATISPBDI_j;
  boolean_T rtb_MANUALPBDI_f;
  boolean_T rtb_JL10PBDI_g;
  boolean_T rtb_OTOMATISPBDI_m;
  boolean_T rtb_MANUALPBDI_n;
  boolean_T rtb_JL20PBDI_m;
  boolean_T rtb_TPRPBDI;
  boolean_T rtb_STTODEPPBDI_o;
  boolean_T rtb_OR6_ib;
  boolean_T rtb_u1CSWS_k;
  boolean_T rtb_OR2_e;
  boolean_T rtb_TPRPBDI_n;
  boolean_T rtb_J12APBDI_p;
  boolean_T rtb_OR6_ac;
  boolean_T rtb_u2ATWS_j;
  boolean_T rtb_OR2_l;
  boolean_T rtb_TPRPBDI_h;
  boolean_T rtb_J12BPBDI_hj;
  boolean_T rtb_OR6_o;
  boolean_T rtb_u2ETES_n;
  boolean_T rtb_OR2_li;
  boolean_T rtb_TPRPBDI_i;
  boolean_T rtb_J22APBDI_l;
  boolean_T rtb_OR6_h;
  boolean_T rtb_u2ATWS_k;
  boolean_T rtb_OR2_as;
  boolean_T rtb_TPRPBDI_f;
  boolean_T rtb_J22BPBDI_a;
  boolean_T rtb_OR6_b3;
  boolean_T rtb_u2ETES_k;
  boolean_T rtb_OR2_i5;
  boolean_T rtb_TPRPBDI_k;
  boolean_T rtb_X10PBDI_f;
  boolean_T rtb_OR6_bd;
  boolean_T rtb_OR1_il;
  boolean_T rtb_OR2_c;
  boolean_T rtb_TPRPBDI_p;
  boolean_T rtb_X14PBDI_j;
  boolean_T rtb_OR6_h3;
  boolean_T rtb_u4BTES_a;
  boolean_T rtb_OR2_b3;
  boolean_T rtb_TPRPBDI_nr;
  boolean_T rtb_X20PBDI_j;
  boolean_T rtb_OR6_ibr;
  boolean_T rtb_OR1_oc;
  boolean_T rtb_OR2_h0;
  boolean_T rtb_TPRPBDI_c;
  boolean_T rtb_X24PBDI_g;
  boolean_T rtb_OR6_mo;
  boolean_T rtb_u4BTES_op;
  boolean_T rtb_OR2_ma;
  boolean_T rtb_WZPBDI;
  boolean_T rtb_VSB15PBDI;
  boolean_T rtb_VSB16PBDI;
  boolean_T rtb_VSB17PBDI;
  boolean_T rtb_VSB18PBDI;
  boolean_T rtb_VSB19PBDI;
  boolean_T rtb_VSB20PBDI;
  boolean_T rtb_VSB21PBDI;
  boolean_T rtb_VSB22PBDI;
  boolean_T rtb_VSB23PBDI;
  boolean_T rtb_VSB24PBDI;
  boolean_T rtb_VSB25PBDI;
  boolean_T rtb_VSB26PBDI;
  boolean_T rtb_VSB27PBDI;
  boolean_T rtb_VSB1PBDI;
  boolean_T rtb_VSB2PBDI;
  boolean_T rtb_VSB3PBDI;
  boolean_T rtb_VSB4PBDI;
  boolean_T rtb_VSB5PBDI;
  boolean_T rtb_VSB6PBDI;
  boolean_T rtb_VSB7PBDI;
  boolean_T rtb_VSB8PBDI;
  boolean_T rtb_VSB9PBDI;
  boolean_T rtb_VSB10PBDI;
  boolean_T rtb_VSB11PBDI;
  boolean_T rtb_VSB12PBDI;
  boolean_T rtb_VSB13PBDI;
  boolean_T rtb_VSB14PBDI;
  boolean_T rtb_AACTRL;
  boolean_T rtb_W11A21ATRAILCTRL_n;
  boolean_T rtb_W11A21ARSTCTRL_k;
  boolean_T rtb_W11A21ALS_h;
  boolean_T rtb_W11A21ABACKTON;
  boolean_T rtb_W11A21ABACKTOR;
  boolean_T rtb_W11A21ANWP_h;
  boolean_T rtb_W11A21ARWP_h;
  boolean_T rtb_W11A21ANWC_h;
  boolean_T rtb_W11A21ARWC_la;
  boolean_T rtb_W11A21ANWTE_m;
  boolean_T rtb_W11A21ARWTE_j;
  boolean_T rtb_W11A21ABLOCK_p;
  boolean_T rtb_W11A21ANBLOCK;
  boolean_T rtb_W11A21ARBLOCK;
  boolean_T rtb_AACTRL_m;
  boolean_T rtb_W11B21BTRAILCTRL_k;
  boolean_T rtb_W11B21BRSTCTRL_g;
  boolean_T rtb_W11B21BLS_n;
  boolean_T rtb_W11B21BBACKTON;
  boolean_T rtb_W11B21BBACKTOR;
  boolean_T rtb_W11B21BNWP_a;
  boolean_T rtb_W11B21BRWP_h;
  boolean_T rtb_W11B21BNWC_l;
  boolean_T rtb_W11B21BRWC_e;
  boolean_T rtb_W11B21BNWTE_k;
  boolean_T rtb_W11B21BRWTE_a;
  boolean_T rtb_W11B21BBLOCK_a;
  boolean_T rtb_W11B21BNBLOCK;
  boolean_T rtb_W11B21BRBLOCK;
  boolean_T rtb_AACTRL_b;
  boolean_T rtb_W13A23ATRAILCTRL_k;
  boolean_T rtb_W13A23ARSTCTRL_f;
  boolean_T rtb_W13A23ALS_j;
  boolean_T rtb_W13A23ABACKTON;
  boolean_T rtb_W13A23ABACKTOR;
  boolean_T rtb_W13A23ANWP_a;
  boolean_T rtb_W13A23ARWP_k;
  boolean_T rtb_W13A23ANWC_b;
  boolean_T rtb_W13A23ARWC_h;
  boolean_T rtb_W13A23ANWTE_d;
  boolean_T rtb_W13A23ARWTE_l;
  boolean_T rtb_W13A23ABLOCK_h;
  boolean_T rtb_W13A23ANBLOCK;
  boolean_T rtb_W13A23ARBLOCK;
  boolean_T rtb_AACTRL_l;
  boolean_T rtb_W13B23BTRAILCTRL_e;
  boolean_T rtb_W13B23BRSTCTRL_a;
  boolean_T rtb_W13B23BLS_b;
  boolean_T rtb_W13B23BBACKTON;
  boolean_T rtb_W13B23BBACKTOR;
  boolean_T rtb_W13B23BNWP_k;
  boolean_T rtb_W13B23BRWP_h;
  boolean_T rtb_W13B23BNWC_i;
  boolean_T rtb_W13B23BRWC_l;
  boolean_T rtb_W13B23BNWTE_b;
  boolean_T rtb_W13B23BRWTE_p;
  boolean_T rtb_W13B23BBLOCK_f;
  boolean_T rtb_W13B23BNBLOCK;
  boolean_T rtb_W13B23BRBLOCK;
  boolean_T rtb_AACTRL_p;
  boolean_T rtb_W21CTRAILCTRL_e;
  boolean_T rtb_W21CRSTCTRL_g;
  boolean_T rtb_W21CLS_i;
  boolean_T rtb_W21CBACKTON;
  boolean_T rtb_W21CBACKTOR;
  boolean_T rtb_W21CNWP_e;
  boolean_T rtb_W21CRWP_c;
  boolean_T rtb_W21CNWC_d;
  boolean_T rtb_W21CRWC_m;
  boolean_T rtb_W21CNWTE_e;
  boolean_T rtb_W21CRWTE_f;
  boolean_T rtb_W21CBLOCK_j;
  boolean_T rtb_W21CNBLOCK;
  boolean_T rtb_W21CRBLOCK;
  boolean_T rtb_DEPAROK_o;
  boolean_T rtb_DEPX10CTRL;
  boolean_T rtb_DEPX10ARS;
  boolean_T rtb_DEPRSTCTRL_a;
  boolean_T rtb_DEPX10B;
  boolean_T rtb_u1CTP_g;
  boolean_T rtb_u1CTPBP;
  boolean_T rtb_DEPSB;
  boolean_T rtb_DEPAROK_h;
  boolean_T rtb_DEPX20CTRL;
  boolean_T rtb_DEPX20ARS;
  boolean_T rtb_DEPRSTCTRL_b;
  boolean_T rtb_DEPX20B;
  boolean_T rtb_u1CTP_jk;
  boolean_T rtb_u1CTPBP_d;
  boolean_T rtb_DEPSB_c;
  boolean_T rtb_J12AAROK_a;
  boolean_T rtb_J12AX10CTRL;
  boolean_T rtb_J12AX10ARS;
  boolean_T rtb_J12ARSTCTRL_o;
  boolean_T rtb_J12AX10B;
  boolean_T rtb_u1BTP_lu;
  boolean_T rtb_u1BTPBP;
  boolean_T rtb_J12AHB;
  boolean_T rtb_J12AAROK_ag;
  boolean_T rtb_J12AX20CTRL;
  boolean_T rtb_J12AX20ARS;
  boolean_T rtb_J12ARSTCTRL_j;
  boolean_T rtb_J12AX20B;
  boolean_T rtb_u1BTP_hr;
  boolean_T rtb_u1BTPBP_f;
  boolean_T rtb_J12AHB_g;
  boolean_T rtb_J12BAROK_n;
  boolean_T rtb_J12BX14CTRL;
  boolean_T rtb_J12BX14ARS;
  boolean_T rtb_J12BRSTCTRL_o;
  boolean_T rtb_J12BX14B;
  boolean_T rtb_u3ATP_jh;
  boolean_T rtb_u3ATPBP;
  boolean_T rtb_J12BHB;
  boolean_T rtb_JL20AROK_g;
  boolean_T rtb_J12BX24CTRL;
  boolean_T rtb_J12BX24ARS;
  boolean_T rtb_J12BRSTCTRL_m;
  boolean_T rtb_J12BX24B;
  boolean_T rtb_u3ATP_nj;
  boolean_T rtb_u3ATPBP_g;
  boolean_T rtb_J12BHB_i;
  boolean_T rtb_J14AROK_d;
  boolean_T rtb_J14J12ACTRL;
  boolean_T rtb_J14J12AARS;
  boolean_T rtb_J14RSTCTRL_j;
  boolean_T rtb_J14J12AB;
  boolean_T rtb_u4ATP_d;
  boolean_T rtb_u4ATPBP;
  boolean_T rtb_J14DB;
  boolean_T rtb_J14AROK_n;
  boolean_T rtb_J14J22ACTRL;
  boolean_T rtb_J14J22AARS;
  boolean_T rtb_J14RSTCTRL_o;
  boolean_T rtb_J14J22AB;
  boolean_T rtb_u4ATP_j;
  boolean_T rtb_u4ATPBP_c;
  boolean_T rtb_J14DB_f;
  boolean_T rtb_J22AAROK_c;
  boolean_T rtb_J22AX10CTRL;
  boolean_T rtb_J22AX10ARS;
  boolean_T rtb_J22ARSTCTRL_d;
  boolean_T rtb_J22AX10B;
  boolean_T rtb_u1CTP_jv;
  boolean_T rtb_u1CTPBP_p;
  boolean_T rtb_J22AHB;
  boolean_T rtb_J22AAROK_cl;
  boolean_T rtb_J22AX20CTRL;
  boolean_T rtb_J22AX20ARS;
  boolean_T rtb_J22ARSTCTRL_dj;
  boolean_T rtb_J22AX20B;
  boolean_T rtb_u1CTP_f1;
  boolean_T rtb_u1CTPBP_l;
  boolean_T rtb_J22AHB_b;
  boolean_T rtb_J22BAROK_i;
  boolean_T rtb_J22BX14CTRL;
  boolean_T rtb_J22BX14ARS;
  boolean_T rtb_J22BRSTCTRL_f;
  boolean_T rtb_J22BX14B;
  boolean_T rtb_u3ATP_i;
  boolean_T rtb_u3ATPBP_l;
  boolean_T rtb_J22BHB;
  boolean_T rtb_J22BAROK_l;
  boolean_T rtb_J22BX24CTRL;
  boolean_T rtb_J22BX24ARS;
  boolean_T rtb_J22BRSTCTRL_p;
  boolean_T rtb_J22BX24B;
  boolean_T rtb_u3ATP_c0;
  boolean_T rtb_u3ATPBP_o;
  boolean_T rtb_J22BHB_m;
  boolean_T rtb_J24AROK_d;
  boolean_T rtb_J24J12ACTRL;
  boolean_T rtb_J24J12AARS;
  boolean_T rtb_J24RSTCTRL_g;
  boolean_T rtb_J24J12AB;
  boolean_T rtb_u4ATP_jk;
  boolean_T rtb_u4ATPBP_d;
  boolean_T rtb_J24DB;
  boolean_T rtb_J24AROK_j;
  boolean_T rtb_J24J22ACTRL;
  boolean_T rtb_J24J22AARS;
  boolean_T rtb_J24RSTCTRL_o;
  boolean_T rtb_J24J22AB;
  boolean_T rtb_u4ATP_a;
  boolean_T rtb_u4ATPBP_n;
  boolean_T rtb_J24DB_j;
  boolean_T rtb_JL10AROK_ls;
  boolean_T rtb_JL10DEPCTRL;
  boolean_T rtb_JL10DEPARS;
  boolean_T rtb_JL10RSTCTRL_d;
  boolean_T rtb_JL10DEPB;
  boolean_T rtb_u0BTP_e;
  boolean_T rtb_u0BTPBP;
  boolean_T rtb_JL10SB;
  boolean_T rtb_JL10AROK_a;
  boolean_T rtb_JL10J12BCTRL;
  boolean_T rtb_JL10J12BARS;
  boolean_T rtb_JL10RSTCTRL_f;
  boolean_T rtb_JL10J12BB;
  boolean_T rtb_u0BTP_c;
  boolean_T rtb_u0BTPBP_h;
  boolean_T rtb_JL10DB;
  boolean_T rtb_JL10AROK_n;
  boolean_T rtb_JL10J22BCTRL;
  boolean_T rtb_JL10J22BARS;
  boolean_T rtb_JL10RSTCTRL_k;
  boolean_T rtb_JL10J22BB;
  boolean_T rtb_u0BTP_ct;
  boolean_T rtb_u0BTPBP_hi;
  boolean_T rtb_JL10DB_f;
  boolean_T rtb_JL20AROK_e;
  boolean_T rtb_JL20DEPCTRL;
  boolean_T rtb_JL20DEPARS;
  boolean_T rtb_JL20RSTCTRL_k;
  boolean_T rtb_JL20DEPB;
  boolean_T rtb_u0BTP_k;
  boolean_T rtb_u0BTPBP_l;
  boolean_T rtb_JL20SB;
  boolean_T rtb_JL20AROK_ge;
  boolean_T rtb_JL20J12BCTRL;
  boolean_T rtb_JL20J12BARS;
  boolean_T rtb_JL20RSTCTRL_h;
  boolean_T rtb_JL20J12BB;
  boolean_T rtb_u0BTP_n5;
  boolean_T rtb_u0BTPBP_p;
  boolean_T rtb_JL20DB;
  boolean_T rtb_JL20AROK_o;
  boolean_T rtb_JL20J22BCTRL;
  boolean_T rtb_JL20J22BARS;
  boolean_T rtb_JL20RSTCTRL_hd;
  boolean_T rtb_JL20J22BB;
  boolean_T rtb_u0BTP_by;
  boolean_T rtb_u0BTPBP_o;
  boolean_T rtb_JL20DB_h;
  boolean_T rtb_AND1_lq;
  boolean_T rtb_DEPGRRD;
  boolean_T rtb_u1CTP_cg;
  boolean_T rtb_AND1_my;
  boolean_T rtb_J12ADRRD;
  boolean_T rtb_u1BTP_o;
  boolean_T rtb_AND1_lp;
  boolean_T rtb_J12BDRRD;
  boolean_T rtb_u3ATP_fl;
  boolean_T rtb_AND1_n5;
  boolean_T rtb_J14DRRD;
  boolean_T rtb_u4ATP_o0;
  boolean_T rtb_AND1_as;
  boolean_T rtb_J22ADRRD;
  boolean_T rtb_u1CTP_ed;
  boolean_T rtb_AND1_nj;
  boolean_T rtb_J22BDRRD;
  boolean_T rtb_u3ATP_dh;
  boolean_T rtb_AND1_e25;
  boolean_T rtb_J24DRRD;
  boolean_T rtb_u4ATP_c;
  boolean_T rtb_AND1_iy;
  boolean_T rtb_JL10DRRD;
  boolean_T rtb_u0BTP_f;
  boolean_T rtb_JL10DEPRS_mm;
  boolean_T rtb_JL10GRRD;
  boolean_T rtb_AND1_ph;
  boolean_T rtb_JL20DRRD;
  boolean_T rtb_u0BTP_cy;
  boolean_T rtb_JL20DEPRS_o;
  boolean_T rtb_JL20GRRD;
  boolean_T rtb_u1CSES_b;
  boolean_T rtb_u1CSWS_hl;
  boolean_T rtb_u1CTP_cw;
  boolean_T rtb_AS_m;
  boolean_T rtb_DEPRRLS_f;
  boolean_T rtb_DEPX10RS_k;
  boolean_T rtb_DEPX20RS_f;
  boolean_T rtb_FLASH05S_f1;
  boolean_T rtb_FLASH1S_p;
  boolean_T rtb_JL10DEPRS_d;
  boolean_T rtb_JL10GRDO_by;
  boolean_T rtb_JL20DEPRS_gl;
  boolean_T rtb_JL20GRDO_a;
  boolean_T rtb_VDR_de;
  boolean_T rtb_W21CNBEDO;
  boolean_T rtb_W21CNREDO;
  boolean_T rtb_W21CNTEDO;
  boolean_T rtb_J12AX10TREQ;
  boolean_T rtb_J12AX20TREQ;
  boolean_T rtb_J12BX14TREQ;
  boolean_T rtb_J12BX24TREQ;
  boolean_T rtb_J14J12ATREQ;
  boolean_T rtb_J14J22ATREQ;
  boolean_T rtb_J22AX10TREQ;
  boolean_T rtb_J22AX20TREQ;
  boolean_T rtb_J22BX14TREQ;
  boolean_T rtb_J22BX24TREQ;
  boolean_T rtb_J24J12ATREQ;
  boolean_T rtb_J24J22ATREQ;
  boolean_T rtb_JL10J12BTREQ;
  boolean_T rtb_JL10J22BTREQ;
  boolean_T rtb_JL20J12BTREQ;
  boolean_T rtb_JL20J22BTREQ;
  boolean_T rtb_W11A21ANREQ_c;
  boolean_T rtb_W11B21BNREQ_ka;
  boolean_T rtb_W13A23ANREQ_h;
  boolean_T rtb_W13B23BNREQ;
  boolean_T rtb_W21CNREQ_m;
  boolean_T rtb_W11A21ARREQ_i;
  boolean_T rtb_W11B21BRREQ_n;
  boolean_T rtb_W13A23ARREQ_k;
  boolean_T rtb_W13B23BRREQ;
  boolean_T rtb_W21CRREQ_f;
  boolean_T rtb_W11A21AOOC_bp;
  boolean_T rtb_W11B21BOOC_c;
  boolean_T rtb_W13A23AROOC;
  boolean_T rtb_W13B23BROOC;
  boolean_T rtb_W21CROOC;
  boolean_T rtb_J12ARRLSPBCTRL;
  boolean_T rtb_J12BRRLSPBCTRL;
  boolean_T rtb_J22ARRLSPBCTRL;
  boolean_T rtb_J22BRRLSPBCTRL;
  boolean_T rtb_X10RRLSPBCTRL;
  boolean_T rtb_X14RRLSPBCTRL;
  boolean_T rtb_X20RRLSPBCTRL;
  boolean_T rtb_X24RRLSPBCTRL;
  boolean_T rtb_W11A21ASWRLSPBCTRL;
  boolean_T rtb_W11B21BSWRLSPBCTRL;
  boolean_T rtb_W13A23ASWRLSPBCTRL;
  boolean_T rtb_W13B23BSWRLSPBCTRL;
  boolean_T rtb_W21CSWRLSPBCTRL;
  boolean_T rtb_W11A21ASWINIT_g;
  boolean_T rtb_W11B21BSWINIT_ae;
  boolean_T rtb_W13A23ASWINIT_cd;
  boolean_T rtb_W13B23BSWINIT_k;
  boolean_T rtb_W21CSWINIT_j;
  boolean_T rtb_DEPRSTCTRL_p;
  boolean_T rtb_J12ARSTCTRL_f;
  boolean_T rtb_J12BRSTCTRL_p;
  boolean_T rtb_J14RSTCTRL_d;
  boolean_T rtb_J22ARSTCTRL_f;
  boolean_T rtb_J22BRSTCTRL_pg;
  boolean_T rtb_J24RSTCTRL_m;
  boolean_T rtb_JL10RSTCTRL_g;
  boolean_T rtb_JL20RSTCTRL_m;
  boolean_T rtb_DEPX10SREQ;
  boolean_T rtb_DEPX20SREQ;
  boolean_T rtb_JL10DEPSREQ;
  boolean_T rtb_JL20DEPSREQ;
  boolean_T rtb_T1TSBPBDI;
  boolean_T rtb_T2TSBPBDI;
  boolean_T rtb_T3TSBPBDI;
  boolean_T rtb_TIBTSBPBDI;
  boolean_T rtb_VSB1;
  boolean_T rtb_VSB10;
  boolean_T rtb_VSB11;
  boolean_T rtb_VSB12;
  boolean_T rtb_VSB13;
  boolean_T rtb_VSB14;
  boolean_T rtb_VSB15;
  boolean_T rtb_VSB16;
  boolean_T rtb_VSB17;
  boolean_T rtb_VSB18;
  boolean_T rtb_VSB19;
  boolean_T rtb_VSB2;
  boolean_T rtb_VSB20;
  boolean_T rtb_VSB21;
  boolean_T rtb_VSB22;
  boolean_T rtb_VSB23;
  boolean_T rtb_VSB24;
  boolean_T rtb_VSB25;
  boolean_T rtb_VSB26;
  boolean_T rtb_VSB27;
  boolean_T rtb_VSB3;
  boolean_T rtb_VSB4;
  boolean_T rtb_VSB5;
  boolean_T rtb_VSB6;
  boolean_T rtb_VSB7;
  boolean_T rtb_VSB8;
  boolean_T rtb_VSB9;
  boolean_T rtb_BUZZERDO;
  boolean_T rtb_COMM1FAILDO;
  boolean_T rtb_COMM2FAILDO;
  boolean_T rtb_POINTFAILDO;
  boolean_T rtb_SISTEM1FAILDO;
  boolean_T rtb_SISTEM2FAILDO;
  boolean_T rtb_TPRBANTUDO;
  boolean_T rtb_J12ACGEDO;
  boolean_T rtb_J12ARGEDO;
  boolean_T rtb_J12BCGEDO;
  boolean_T rtb_J12BRGEDO;
  boolean_T rtb_J14CGEDO;
  boolean_T rtb_J14RGEDO;
  boolean_T rtb_J22ACGEDO;
  boolean_T rtb_J22ARGEDO;
  boolean_T rtb_J22BCGEDO;
  boolean_T rtb_J22BRGEDO;
  boolean_T rtb_J24CGEDO;
  boolean_T rtb_J24RGEDO;
  boolean_T rtb_JL10CGEDO;
  boolean_T rtb_JL10RGEDO;
  boolean_T rtb_JL10WGEDO;
  boolean_T rtb_JL20CGEDO;
  boolean_T rtb_JL20RGEDO;
  boolean_T rtb_JL20WGEDO;
  boolean_T rtb_W11ABEDO;
  boolean_T rtb_W11ALEDO;
  boolean_T rtb_W11ANBEDO;
  boolean_T rtb_W11ANREDO;
  boolean_T rtb_W11ANTEDO;
  boolean_T rtb_W11ANWBEDO;
  boolean_T rtb_W11ANWREDO;
  boolean_T rtb_W11ANWTEDO;
  boolean_T rtb_W11ARBEDO;
  boolean_T rtb_W11ARREDO;
  boolean_T rtb_W11ARTEDO;
  boolean_T rtb_W11ARWBEDO;
  boolean_T rtb_W11ARWREDO;
  boolean_T rtb_W11ARWTEDO;
  boolean_T rtb_W11BBEDO;
  boolean_T rtb_W11BLEDO;
  boolean_T rtb_W11BNBEDO;
  boolean_T rtb_W11BNREDO;
  boolean_T rtb_W11BNTEDO;
  boolean_T rtb_W11BNWBEDO;
  boolean_T rtb_W11BNWREDO;
  boolean_T rtb_W11BNWTEDO;
  boolean_T rtb_W11BRBEDO;
  boolean_T rtb_W11BRREDO;
  boolean_T rtb_W11BRTEDO;
  boolean_T rtb_W11BRWBEDO;
  boolean_T rtb_W11BRWREDO;
  boolean_T rtb_W11BRWTEDO;
  boolean_T rtb_W13ABEDO;
  boolean_T rtb_W13ALEDO;
  boolean_T rtb_W13ANBEDO;
  boolean_T rtb_W13ANREDO;
  boolean_T rtb_W13ANTEDO;
  boolean_T rtb_W13ANWBEDO;
  boolean_T rtb_W13ANWREDO;
  boolean_T rtb_W13ANWTEDO;
  boolean_T rtb_W13ARBEDO;
  boolean_T rtb_W13ARREDO;
  boolean_T rtb_W13ARTEDO;
  boolean_T rtb_W13ARWBEDO;
  boolean_T rtb_W13ARWREDO;
  boolean_T rtb_W13ARWTEDO;
  boolean_T rtb_W13BBEDO;
  boolean_T rtb_W13BLEDO;
  boolean_T rtb_W13BNBEDO;
  boolean_T rtb_W13BNREDO;
  boolean_T rtb_W13BNTEDO;
  boolean_T rtb_W13BNWBEDO;
  boolean_T rtb_W13BNWREDO;
  boolean_T rtb_W13BNWTEDO;
  boolean_T rtb_W13BRBEDO;
  boolean_T rtb_W13BRREDO;
  boolean_T rtb_W13BRTEDO;
  boolean_T rtb_W13BRWBEDO;
  boolean_T rtb_W13BRWREDO;
  boolean_T rtb_W13BRWTEDO;
  boolean_T rtb_W21ABEDO;
  boolean_T rtb_W21ALEDO;
  boolean_T rtb_W21ANBEDO;
  boolean_T rtb_W21ANREDO;
  boolean_T rtb_W21ANTEDO;
  boolean_T rtb_W21ANWBEDO;
  boolean_T rtb_W21ANWREDO;
  boolean_T rtb_W21ANWTEDO;
  boolean_T rtb_W21ARBEDO;
  boolean_T rtb_W21ARREDO;
  boolean_T rtb_W21ARTEDO;
  boolean_T rtb_W21ARWBEDO;
  boolean_T rtb_W21ARWREDO;
  boolean_T rtb_W21ARWTEDO;
  boolean_T rtb_W21BBEDO;
  boolean_T rtb_W21BLEDO;
  boolean_T rtb_W21BNBEDO;
  boolean_T rtb_W21BNREDO;
  boolean_T rtb_W21BNTEDO;
  boolean_T rtb_W21BNWBEDO;
  boolean_T rtb_W21BNWREDO;
  boolean_T rtb_W21BNWTEDO;
  boolean_T rtb_W21BRBEDO;
  boolean_T rtb_W21BRREDO;
  boolean_T rtb_W21BRTEDO;
  boolean_T rtb_W21BRWBEDO;
  boolean_T rtb_W21BRWREDO;
  boolean_T rtb_W21BRWTEDO;
  boolean_T rtb_W21CBEDO;
  boolean_T rtb_W21CLEDO;
  boolean_T rtb_W21CNWBEDO;
  boolean_T rtb_W21CNWREDO;
  boolean_T rtb_W21CNWTEDO;
  boolean_T rtb_W21CRBEDO;
  boolean_T rtb_W21CRREDO;
  boolean_T rtb_W21CRTEDO;
  boolean_T rtb_W21CRWBEDO;
  boolean_T rtb_W21CRWREDO;
  boolean_T rtb_W21CRWTEDO;
  boolean_T rtb_W23ABEDO;
  boolean_T rtb_W23ALEDO;
  boolean_T rtb_W23ANBEDO;
  boolean_T rtb_W23ANREDO;
  boolean_T rtb_W23ANTEDO;
  boolean_T rtb_W23ANWBEDO;
  boolean_T rtb_W23ANWREDO;
  boolean_T rtb_W23ANWTEDO;
  boolean_T rtb_W23ARBEDO;
  boolean_T rtb_W23ARREDO;
  boolean_T rtb_W23ARTEDO;
  boolean_T rtb_W23ARWBEDO;
  boolean_T rtb_W23ARWREDO;
  boolean_T rtb_W23ARWTEDO;
  boolean_T rtb_W23BBEDO;
  boolean_T rtb_W23BLEDO;
  boolean_T rtb_W23BNBEDO;
  boolean_T rtb_W23BNREDO;
  boolean_T rtb_W23BNTEDO;
  boolean_T rtb_W23BNWBEDO;
  boolean_T rtb_W23BNWREDO;
  boolean_T rtb_W23BNWTEDO;
  boolean_T rtb_W23BRBEDO;
  boolean_T rtb_W23BRREDO;
  boolean_T rtb_W23BRTEDO;
  boolean_T rtb_W23BRWBEDO;
  boolean_T rtb_W23BRWREDO;
  boolean_T rtb_W23BRWTEDO;
  boolean_T rtb_u0ABEDO;
  boolean_T rtb_u0AREDO;
  boolean_T rtb_u0ATEDO;
  boolean_T rtb_u0BBEDO;
  boolean_T rtb_u0BREDO;
  boolean_T rtb_u0BTEDO;
  boolean_T rtb_u1ABEDO;
  boolean_T rtb_u1AREDO;
  boolean_T rtb_u1ATEDO;
  boolean_T rtb_u1BBEDO;
  boolean_T rtb_u1BREDO;
  boolean_T rtb_u1BTEDO;
  boolean_T rtb_u2ABEDO;
  boolean_T rtb_u2AREDO;
  boolean_T rtb_u2ATEDO;
  boolean_T rtb_u2BBEDO;
  boolean_T rtb_u2BREDO;
  boolean_T rtb_u2BTEDO;
  boolean_T rtb_u2CBEDO;
  boolean_T rtb_u2CREDO;
  boolean_T rtb_u2CTEDO;
  boolean_T rtb_u2DBEDO;
  boolean_T rtb_u2DREDO;
  boolean_T rtb_u2DTEDO;
  boolean_T rtb_u2EBEDO;
  boolean_T rtb_u2EREDO;
  boolean_T rtb_u2ETEDO;
  boolean_T rtb_u3ABEDO;
  boolean_T rtb_u3AREDO;
  boolean_T rtb_u3ATEDO;
  boolean_T rtb_u3BBEDO;
  boolean_T rtb_u3BREDO;
  boolean_T rtb_u3BTEDO;
  boolean_T rtb_u4ABEDO;
  boolean_T rtb_u4AREDO;
  boolean_T rtb_u4ATEDO;
  boolean_T rtb_u4BBEDO;
  boolean_T rtb_u4BREDO;
  boolean_T rtb_u4BTEDO;
  boolean_T rtb_u0ABEDO_a;
  boolean_T rtb_u0AREDO_m;
  boolean_T rtb_u0ATEDO_j;
  boolean_T rtb_u0BBEDO_m;
  boolean_T rtb_u0BREDO_l;
  boolean_T rtb_u0BTEDO_j;
  boolean_T rtb_u1ABEDO_p;
  boolean_T rtb_u1AREDO_h;
  boolean_T rtb_u1ATEDO_b;
  boolean_T rtb_u1BBEDO_b;
  boolean_T rtb_u1BREDO_n;
  boolean_T rtb_u1BTEDO_p;
  boolean_T rtb_u1CBEDO;
  boolean_T rtb_u1CREDO;
  boolean_T rtb_u1CTEDO;
  boolean_T rtb_u2ABEDO_h;
  boolean_T rtb_u2AREDO_f;
  boolean_T rtb_u2ATEDO_l;
  boolean_T rtb_u2BBEDO_a;
  boolean_T rtb_u2BREDO_l;
  boolean_T rtb_u2BTEDO_n;
  boolean_T rtb_u2CBEDO_o;
  boolean_T rtb_u2CREDO_n;
  boolean_T rtb_u2CTEDO_h;
  boolean_T rtb_u2DBEDO_b;
  boolean_T rtb_u2DREDO_j;
  boolean_T rtb_u2DTEDO_j;
  boolean_T rtb_u2EBEDO_o;
  boolean_T rtb_u2EREDO_b;
  boolean_T rtb_u2ETEDO_g;
  boolean_T rtb_u3ABEDO_l;
  boolean_T rtb_u3AREDO_p;
  boolean_T rtb_u3ATEDO_p;
  boolean_T rtb_u3BBEDO_p;
  boolean_T rtb_u3BREDO_e;
  boolean_T rtb_u3BTEDO_g;
  boolean_T rtb_u4ABEDO_n;
  boolean_T rtb_u4AREDO_e;
  boolean_T rtb_u4ATEDO_d;
  boolean_T rtb_u4BBEDO_d;
  boolean_T rtb_u4BREDO_e;
  boolean_T rtb_u4BTEDO_k;
  boolean_T rtb_J12AAREDO;
  boolean_T rtb_J12APBEDO;
  boolean_T rtb_J12BAREDO;
  boolean_T rtb_J12BPBEDO;
  boolean_T rtb_J14AREDO;
  boolean_T rtb_J14PBEDO;
  boolean_T rtb_J22AAREDO;
  boolean_T rtb_J22APBEDO;
  boolean_T rtb_J22BAREDO;
  boolean_T rtb_J22BPBEDO;
  boolean_T rtb_J24AREDO;
  boolean_T rtb_J24PBEDO;
  boolean_T rtb_JL10AREDO;
  boolean_T rtb_JL10PBEDO;
  boolean_T rtb_JL20AREDO;
  boolean_T rtb_JL20PBEDO;
  boolean_T rtb_X10PBEDO;
  boolean_T rtb_X14PBEDO;
  boolean_T rtb_X20PBEDO;
  boolean_T rtb_X24PBEDO;
  boolean_T rtb_FROMDEPFEDO;
  boolean_T rtb_FROMDEPFLEDO;
  boolean_T rtb_FROMDEPPBEDO;
  boolean_T rtb_T1ED1;
  boolean_T rtb_T1ED2;
  boolean_T rtb_T1ED3;
  boolean_T rtb_T1ED4;
  boolean_T rtb_T1ESB1;
  boolean_T rtb_T1ESB2;
  boolean_T rtb_T1PSD1;
  boolean_T rtb_T1PSD2;
  boolean_T rtb_T2ED1;
  boolean_T rtb_T2ED2;
  boolean_T rtb_T2ED3;
  boolean_T rtb_T2ED4;
  boolean_T rtb_T2ESB1;
  boolean_T rtb_T2ESB2;
  boolean_T rtb_T2PSD1;
  boolean_T rtb_T2PSD2;
  boolean_T rtb_T3ED1;
  boolean_T rtb_T3ED2;
  boolean_T rtb_T3ED3;
  boolean_T rtb_T3ED4;
  boolean_T rtb_T3ESB1;
  boolean_T rtb_T3ESB2;
  boolean_T rtb_T3PSD1;
  boolean_T rtb_T3PSD2;
  boolean_T rtb_TBWCTDO;
  boolean_T rtb_TIBED1;
  boolean_T rtb_TIBED2;
  boolean_T rtb_TIBED3;
  boolean_T rtb_TIBED4;
  boolean_T rtb_TIBESB1;
  boolean_T rtb_TIBESB2;
  boolean_T rtb_TIBPSD1;
  boolean_T rtb_TIBPSD2;
  boolean_T rtb_TODEPFEDO;
  boolean_T rtb_TODEPFLEDO;
  boolean_T rtb_TODEPPBEDO;
  boolean_T rtb_TPRCTDO;
  boolean_T rtb_TWTCTDO;
  boolean_T rtb_WZCTDO;
  boolean_T rtb_DEPRSTCTRL1;
  boolean_T rtb_DEPRSTCTRL2;
  boolean_T rtb_DEPX10S;
  boolean_T rtb_DEPX20S;
  boolean_T rtb_J12ARSTCTRL1;
  boolean_T rtb_J12AX10H;
  boolean_T rtb_J12AX20H;
  boolean_T rtb_J12BRSTCTRL1;
  boolean_T rtb_J12BX14H;
  boolean_T rtb_J12BX24H;
  boolean_T rtb_J14J12AD;
  boolean_T rtb_J14J22AD;
  boolean_T rtb_J14RSTCTRL1;
  boolean_T rtb_J22ARSTCTRL1;
  boolean_T rtb_J22AX10H;
  boolean_T rtb_J22AX20H;
  boolean_T rtb_J22BRSTCTRL1;
  boolean_T rtb_J22BX14H;
  boolean_T rtb_J22BX24H;
  boolean_T rtb_J24J12AD;
  boolean_T rtb_J24J22AD;
  boolean_T rtb_J24RSTCTRL1;
  boolean_T rtb_JL10DEPS;
  boolean_T rtb_JL10J12BD;
  boolean_T rtb_JL10J22BD;
  boolean_T rtb_JL20DEPS;
  boolean_T rtb_JL20J12BD;
  boolean_T rtb_JL20J22BD;
  boolean_T rtb_JL20RSTCTRL1;
  boolean_T rtb_RE;
  boolean_T rtb_RWE;
  boolean_T DO_INDSW_W11A_NWE;
  boolean_T DO_INDSW_W11A_RWE;
  boolean_T DO_INDSW_W11B_NWE;
  boolean_T DO_INDSW_W11B_RWE;
  boolean_T DO_INDSW_W13A_NWE;
  boolean_T DO_INDSW_W13A_RWE;
  boolean_T DO_INDSW_W13B_NWE;
  boolean_T DO_INDSW_W13B_RWE;
  boolean_T DO_INDSW_W21A_NWE;
  boolean_T DO_INDSW_W21A_RWE;
  boolean_T DO_INDSW_W21B_NWE;
  boolean_T DO_INDSW_W21B_RWE;
  boolean_T DO_INDSW_W21C_NWE;
  boolean_T DO_INDSW_W21C_RWE;
  boolean_T DO_INDSW_W23A_NWE;
  boolean_T DO_INDSW_W23A_RWE;
  boolean_T DO_INDSW_W23B_NWE;
  int32_T clockTickCounter;
  int32_T clockTickCounter_f;
  boolean_T Memory1_PreviousInput;
  boolean_T AND1_j;
  boolean_T AND14;
  boolean_T R1224PBRST;
  boolean_T DO_INDSW_W11A_NWE_0;
  boolean_T DO_INDSW_W11B_NWE_0;
  boolean_T DO_INDSW_W13A_NWE_0;
  boolean_T DO_INDSW_W13B_NWE_0;
  boolean_T DO_INDSW_W21A_NWE_0;
  boolean_T DO_INDSW_W21B_NWE_0;
  boolean_T DO_INDSW_W21C_NWE_0;
  boolean_T DO_INDSW_W23A_NWE_0;
  boolean_T DO_INDSW_W23B_NWE_0;
  boolean_T DO_INDSW_W11A_RWE_0;
  boolean_T DO_INDSW_W11B_RWE_0;
  boolean_T DO_INDSW_W13A_RWE_0;
  boolean_T DO_INDSW_W13B_RWE_0;
  boolean_T DO_INDSW_W21A_RWE_0;
  boolean_T DO_INDSW_W21B_RWE_0;
  boolean_T DO_INDSW_W21C_RWE_0;
  boolean_T DO_INDSW_W23A_RWE_0;
  boolean_T DO_INDSW_W23B_RWE;
  boolean_T M_AR_DEP;
  boolean_T M_DO_DEP_GR;
  boolean_T M_RRLS_DEP;
  boolean_T M_CHK_V_NV;
  boolean_T M_TP_10A;
  boolean_T M_TP_10B;
  boolean_T M_TP_11A;
  boolean_T M_TP_11B;
  boolean_T M_TP_12A;
  boolean_T M_TP_12B;
  boolean_T M_TP_12C;
  boolean_T M_TP_12D;
  boolean_T M_TP_12E;
  boolean_T M_TP_13A;
  boolean_T M_TP_13B;
  boolean_T M_TP_14A;
  boolean_T M_TP_14B;
  boolean_T M_TP_20A;
  boolean_T M_TP_20B;
  boolean_T M_TP_21A;
  boolean_T M_TP_21B;
  boolean_T M_TP_21C;
  boolean_T M_TP_22A;
  boolean_T M_TP_22B;
  boolean_T M_TP_22C;
  boolean_T M_TP_22D;
  boolean_T M_TP_22E;
  boolean_T M_TP_23A;
  boolean_T M_TP_23B;
  boolean_T M_TP_24A;
  boolean_T M_TP_24B;
  boolean_T M_T_ES_10B;
  boolean_T M_T_ES_11A;
  boolean_T M_T_ES_11B;
  boolean_T M_T_ES_12A;
  boolean_T M_T_ES_12B;
  boolean_T M_T_ES_12C;
  boolean_T M_T_ES_12D;
  boolean_T M_T_ES_12E;
  boolean_T M_T_ES_13A;
  boolean_T M_T_ES_13B;
  boolean_T M_T_ES_14A;
  boolean_T M_T_ES_14B;
  boolean_T M_T_ES_20B;
  boolean_T M_T_ES_21A;
  boolean_T M_T_ES_21B;
  boolean_T M_T_ES_21C;
  boolean_T M_T_ES_22A;
  boolean_T M_T_ES_22B;
  boolean_T M_T_ES_22C;
  boolean_T M_T_ES_22D;
  boolean_T M_T_ES_22E;
  boolean_T M_T_ES_23A;
  boolean_T M_T_ES_23B;
  boolean_T M_T_ES_24A;
  boolean_T M_T_ES_24B;
  boolean_T M_T_WS_10A;
  boolean_T M_T_WS_10B;
  boolean_T M_T_WS_11A;
  boolean_T M_T_WS_11B;
  boolean_T M_T_WS_12A;
  boolean_T M_T_WS_12B;
  boolean_T M_T_WS_12C;
  boolean_T M_T_WS_12D;
  boolean_T M_T_WS_12E;
  boolean_T M_T_WS_13A;
  boolean_T M_T_WS_13B;
  boolean_T M_T_WS_14A;
  boolean_T M_T_WS_20A;
  boolean_T M_T_WS_20B;
  boolean_T M_T_WS_21A;
  boolean_T M_T_WS_21B;
  boolean_T M_T_WS_21C;
  boolean_T M_T_WS_22A;
  boolean_T M_T_WS_22B;
  boolean_T M_T_WS_22C;
  boolean_T M_T_WS_22D;
  boolean_T M_T_WS_22E;
  boolean_T M_T_WS_23A;
  boolean_T M_T_WS_23B;
  boolean_T M_T_WS_24A;
  boolean_T M_S_ES_10B;
  boolean_T M_S_ES_11A;
  boolean_T M_S_ES_11B;
  boolean_T M_S_ES_20B;
  boolean_T M_S_ES_21A;
  boolean_T M_S_ES_21B;
  boolean_T M_S_ES_21C;
  boolean_T M_S_WS_10A;
  boolean_T M_S_WS_10B;
  boolean_T M_S_WS_11A;
  boolean_T M_S_WS_11B;
  boolean_T M_S_WS_20A;
  boolean_T M_S_WS_20B;
  boolean_T M_S_WS_21A;
  boolean_T M_S_WS_21B;
  boolean_T M_S_WS_21C;
  boolean_T M_W11A_21A_NWC;
  boolean_T M_W11B_21B_NWC;
  boolean_T M_W13A_23A_NWC;
  boolean_T M_W13B_23B_NWC;
  boolean_T M_W21C_NWC;
  boolean_T M_W11A_21A_NWP;
  boolean_T M_W11B_21B_NWP;
  boolean_T M_W13A_23A_NWP;
  boolean_T M_W13B_23B_NWP;
  boolean_T M_W21C_NWP;
  boolean_T M_W11A_21A_NWZ;
  boolean_T M_W11B_21B_NWZ;
  boolean_T M_W13A_23A_NWZ;
  boolean_T M_W13B_23B_NWZ;
  boolean_T M_W21C_NWZ;
  boolean_T M_W11A_21A_NW_TE;
  boolean_T M_W11B_21B_NW_TE;
  boolean_T M_W13A_23A_NW_TE;
  boolean_T M_W13B_23B_NW_TE;
  boolean_T M_W21C_NW_TE;
  boolean_T M_W11A_21A_RWC;
  boolean_T M_W11B_21B_RWC;
  boolean_T M_W13A_23A_RWC;
  boolean_T M_W13B_23B_RWC;
  boolean_T M_W21C_RWC;
  boolean_T M_W11A_21A_RWP;
  boolean_T M_W11B_21B_RWP;
  boolean_T M_W13A_23A_RWP;
  boolean_T M_W13B_23B_RWP;
  boolean_T M_W21C_RWP;
  boolean_T M_W11A_21A_RWZ;
  boolean_T M_W11B_21B_RWZ;
  boolean_T M_W13A_23A_RWZ;
  boolean_T M_W13B_23B_RWZ;
  boolean_T M_W21C_RWZ;
  boolean_T M_W11A_21A_RW_TE;
  boolean_T M_W11B_21B_RW_TE;
  boolean_T M_W13A_23A_RW_TE;
  boolean_T M_W13B_23B_RW_TE;
  boolean_T M_W21C_RW_TE;
  boolean_T M_W11A_21A_L;
  boolean_T M_W11B_21B_L;
  boolean_T M_W13A_23A_L;
  boolean_T M_W13B_23B_L;
  boolean_T M_W21C_L;
  boolean_T M_W11A_21A_LS;
  boolean_T M_W11B_21B_LS;
  boolean_T M_W13A_23A_LS;
  boolean_T M_W13B_23B_LS;
  boolean_T M_W21C_LS;
  boolean_T M_W11A_21A_SWRLS;
  boolean_T M_W11B_21B_SWRLS;
  boolean_T M_W13A_23A_SWRLS;
  boolean_T M_W13B_23B_SWRLS;
  boolean_T M_W21C_SWRLS;
  boolean_T M_W11A_21A_TPZ;
  boolean_T M_W11B_21B_TPZ;
  boolean_T M_W13A_23A_TPZ;
  boolean_T M_W13B_23B_TPZ;
  boolean_T M_W21C_TPZ;
  boolean_T M_DO_J12A_DR;
  boolean_T M_DO_J12B_DR;
  boolean_T M_DO_J14_DR;
  boolean_T M_DO_J22A_DR;
  boolean_T M_DO_J22B_DR;
  boolean_T M_DO_J24_DR;
  boolean_T M_DO_JL10_DR;
  boolean_T M_DO_JL20_DR;
  boolean_T M_DO_JL10_GR;
  boolean_T M_DO_JL20_GR;
  boolean_T M_AS_T_J12A;
  boolean_T M_AS_T_J12B;
  boolean_T M_AS_T_J14;
  boolean_T M_AS_T_J22A;
  boolean_T M_AS_T_J22B;
  boolean_T M_AS_T_J24;
  boolean_T M_AS_T_JL10;
  boolean_T M_AS_T_JL20;
  boolean_T M_AS_S_DEP;
  boolean_T M_AS_S_JL10;
  boolean_T M_AS_S_JL20;
  boolean_T M_RRLS_J12A;
  boolean_T M_RRLS_J12B;
  boolean_T M_RRLS_J22A;
  boolean_T M_RRLS_J22B;
  boolean_T M_RRLS_X10;
  boolean_T M_RRLS_X14;
  boolean_T M_RRLS_X20;
  boolean_T M_RRLS_X24;
  boolean_T M_CBTC_T1_ED1;
  boolean_T M_CBTC_T2_ED2;
  boolean_T M_CBTC_T2_ED3;
  boolean_T M_CBTC_T2_ED4;
  boolean_T M_CBTC_T3_ED1;
  boolean_T M_CBTC_T3_ED2;
  boolean_T M_CBTC_T3_ED3;
  boolean_T M_CBTC_T3_ED4;
  boolean_T M_CBTC_T1_ED2;
  boolean_T M_CBTC_T1_ED3;
  boolean_T M_CBTC_T1_ED4;
  boolean_T M_CBTC_TIB_ED1;
  boolean_T M_CBTC_TIB_ED2;
  boolean_T M_CBTC_TIB_ED3;
  boolean_T M_CBTC_TIB_ED4;
  boolean_T M_CBTC_T2_ED1;
  boolean_T M_CBTC_T1_ESB1;
  boolean_T M_CBTC_T1_ESB2;
  boolean_T M_CBTC_TIB_ESB1;
  boolean_T M_CBTC_TIB_ESB2;
  boolean_T M_CBTC_T2_ESB1;
  boolean_T M_CBTC_T2_ESB2;
  boolean_T M_CBTC_T3_ESB1;
  boolean_T M_CBTC_T3_ESB2;
  boolean_T M_CBTC_T1_PSD1;
  boolean_T M_CBTC_T1_PSD2;
  boolean_T M_CBTC_TIB_PSD1;
  boolean_T M_CBTC_TIB_PSD2;
  boolean_T M_CBTC_T2_PSD1;
  boolean_T M_CBTC_T2_PSD2;
  boolean_T M_CBTC_T3_PSD1;
  boolean_T M_CBTC_T3_PSD2;
  boolean_T CBI_FAIL_COMM1;
  boolean_T CBI_FAIL_COMM2;
  boolean_T CBI_FAIL_SYSTEM1;
  boolean_T CBI_FAIL_SYSTEM2;
  boolean_T R1012PBRST;
  boolean_T R2022PBRST;
  boolean_T R1012PBCTRL;
  boolean_T R1022PBCTRL;
  boolean_T R10DEPPBCTRL;
  boolean_T R10DEPPBRST;
  boolean_T R2210PBRST;
  boolean_T R2214PBRST;
  boolean_T R1210PBCTRL;
  boolean_T R1214PBCTRL;
  boolean_T R1220PBCTRL;
  boolean_T R2220PBRST;
  boolean_T R2224PBRST;
  boolean_T R1412PBCTRL;
  boolean_T R1422PBCTRL;
  boolean_T R2412PBRST;
  boolean_T R2422PBRST;
  boolean_T R1022PBRST;
  boolean_T R2012PBCTRL;
  boolean_T R2022PBCTRL;
  boolean_T R20DEPPBCTRL;
  boolean_T R20DEPPBRST;
  boolean_T R2210PBCTRL;
  boolean_T R2214PBCTRL;
  boolean_T R2220PBCTRL;
  boolean_T R2224PBCTRL;
  boolean_T R2412PBCTRL;
  boolean_T R2422PBCTRL;
  boolean_T R1210PBRST;
  boolean_T R1214PBRST;
  boolean_T R1220PBRST;
  boolean_T R1224PBCTRL;
  boolean_T R1412PBRST;
  boolean_T R1422PBRST;
  boolean_T R2012PBRST;
  boolean_T RDEP10PBRST;
  boolean_T RDEP10PBCTRL;
  boolean_T RDEP20PBRST;
  boolean_T RDEP20PBCTRL;
  boolean_T DI_PBG_MANUAL;
  boolean_T DI_PBG_OTOMATIS;
  boolean_T DI_PBG_THB;
  boolean_T DI_PBSW_TBKW;
  boolean_T DI_PBSW_TBW;
  boolean_T DI_PBSW_TKGW;
  boolean_T DI_PBSW_TKW;
  boolean_T DI_PBSW_TWT;
  boolean_T DI_PBR_TPR;
  boolean_T DI_PBJ_12A;
  boolean_T DI_PBJ_12B;
  boolean_T DI_PBJ_14;
  boolean_T DI_PBJ_22A;
  boolean_T DI_PBJ_22B;
  boolean_T DI_PBJ_24;
  boolean_T DI_PBJ_10;
  boolean_T DI_PBJ_20;
  boolean_T DI_PBX_10;
  boolean_T DI_PBX_14;
  boolean_T DI_PBX_20;
  boolean_T DI_PBX_24;
  boolean_T DI_PBW_11A_21A;
  boolean_T DI_PBW_11B_21B;
  boolean_T DI_PBW_13A_23A;
  boolean_T DI_PBW_13B_23B;
  boolean_T DI_PBW_21C;
  boolean_T DI_GO_FROM_DEPOT;
  boolean_T DI_GO_TO_DEPOT;
  boolean_T VSB1_g;
  boolean_T VSB10_j;
  boolean_T VSB11_c;
  boolean_T VSB12_l;
  boolean_T VSB13_d;
  boolean_T VSB14_o;
  boolean_T VSB15_h;
  boolean_T VSB16_h;
  boolean_T VSB17_c;
  boolean_T VSB18_j;
  boolean_T VSB19_d;
  boolean_T VSB2_e;
  boolean_T VSB20_c;
  boolean_T VSB21_p;
  boolean_T VSB22_c;
  boolean_T VSB23_i;
  boolean_T VSB24_a;
  boolean_T VSB25_k;
  boolean_T VSB26_l;
  boolean_T VSB27_p;
  boolean_T VSB3_l;
  boolean_T VSB4_g;
  boolean_T VSB5_n;
  boolean_T VSB6_h;
  boolean_T VSB7_f;
  boolean_T VSB8_i;
  boolean_T VSB9_c;
  boolean_T DI_PBCBTC_WZ;
  boolean_T M_GV_AS;
  boolean_T M_CTRL_RRLS_DEP;
  boolean_T M_RS_DEP_10;
  boolean_T M_RS_DEP_20;
  boolean_T M_GV_FLASH_1000;
  boolean_T M_RS_10_DEP;
  boolean_T M_RS_20_DEP;
  boolean_T DO_INDSW_W21C_NBE;
  boolean_T DO_INDSW_W21C_NRE;
  boolean_T DO_INDSW_W21C_NTE;
  boolean_T M_CHK_NV_V;
  boolean_T M_GV_RR;
  boolean_T M_REQ_T_12_10;
  boolean_T M_REQ_T_12_20;
  boolean_T M_REQ_T_12_14;
  boolean_T M_REQ_T_12_24;
  boolean_T M_REQ_T_14_12;
  boolean_T M_REQ_T_14_22;
  boolean_T M_REQ_T_22_10;
  boolean_T M_REQ_T_22_20;
  boolean_T M_REQ_T_22_14;
  boolean_T M_REQ_T_22_24;
  boolean_T M_REQ_T_24_12;
  boolean_T M_REQ_T_24_22;
  boolean_T M_REQ_T_10_12;
  boolean_T M_REQ_T_10_22;
  boolean_T M_REQ_T_20_12;
  boolean_T M_REQ_T_20_22;
  boolean_T M_W11A_21A_N_REQ;
  boolean_T M_W11B_21B_N_REQ;
  boolean_T M_W13A_23A_N_REQ;
  boolean_T M_W13B_23B_N_REQ;
  boolean_T M_W21C_N_REQ;
  boolean_T M_W11A_21A_R_REQ;
  boolean_T M_W11B_21B_R_REQ;
  boolean_T M_W13A_23A_R_REQ;
  boolean_T M_W13B_23B_R_REQ;
  boolean_T M_W21C_R_REQ;
  boolean_T M_W11A_21A_OOC;
  boolean_T M_W11B_21B_OOC;
  boolean_T M_W13A_23A_OOC;
  boolean_T M_W13B_23B_OOC;
  boolean_T M_W21C_OOC;
  boolean_T M_CTRL_RRLS_12A;
  boolean_T M_CTRL_RRLS_12B;
  boolean_T M_CTRL_RRLS_22A;
  boolean_T M_CTRL_RRLS_22B;
  boolean_T M_CTRL_RRLS_10;
  boolean_T M_CTRL_RRLS_14;
  boolean_T M_CTRL_RRLS_20;
  boolean_T M_CTRL_RRLS_24;
  boolean_T M_W11A_21A_CTRL_SWRLS;
  boolean_T M_W11B_21B_CTRL_SWRLS;
  boolean_T M_W13A_23A_CTRL_SWRLS;
  boolean_T M_W13B_23B_CTRL_SWRLS;
  boolean_T M_W21C_CTRL_SWRLS;
  boolean_T M_W11A_21A_SWINIT;
  boolean_T M_W11B_21B_SWINIT;
  boolean_T M_W13A_23A_SWINIT;
  boolean_T M_W13B_23B_SWINIT;
  boolean_T M_W21C_SWINIT;
  boolean_T M_CTRL_RST_DEP;
  boolean_T M_CTRL_RST_12A;
  boolean_T M_CTRL_RST_12B;
  boolean_T M_CTRL_RST_14;
  boolean_T M_CTRL_RST_22A;
  boolean_T M_CTRL_RST_22B;
  boolean_T M_CTRL_RST_24;
  boolean_T M_CTRL_RST_10;
  boolean_T M_CTRL_RST_20;
  boolean_T M_REQ_S_DEP_10;
  boolean_T M_REQ_S_DEP_20;
  boolean_T M_REQ_S_10_DEP;
  boolean_T M_REQ_S_20_DEP;
  boolean_T M_CTRL_VSB1;
  boolean_T M_CTRL_VSB10;
  boolean_T M_CTRL_VSB11;
  boolean_T M_CTRL_VSB12;
  boolean_T M_CTRL_VSB13;
  boolean_T M_CTRL_VSB14;
  boolean_T M_CTRL_VSB15;
  boolean_T M_CTRL_VSB16;
  boolean_T M_CTRL_VSB17;
  boolean_T M_CTRL_VSB18;
  boolean_T M_CTRL_VSB19;
  boolean_T M_CTRL_VSB2;
  boolean_T M_CTRL_VSB20;
  boolean_T M_CTRL_VSB21;
  boolean_T M_CTRL_VSB22;
  boolean_T M_CTRL_VSB23;
  boolean_T M_CTRL_VSB24;
  boolean_T M_CTRL_VSB25;
  boolean_T M_CTRL_VSB26;
  boolean_T M_CTRL_VSB27;
  boolean_T M_CTRL_VSB3;
  boolean_T M_CTRL_VSB4;
  boolean_T M_CTRL_VSB5;
  boolean_T M_CTRL_VSB6;
  boolean_T M_CTRL_VSB7;
  boolean_T M_CTRL_VSB8;
  boolean_T M_CTRL_VSB9;
  boolean_T DO_INDG_BUZZ;
  boolean_T DO_INDG_COMM1_FAIL;
  boolean_T DO_INDG_COMM2_FAIL;
  boolean_T DO_INDG_POINT;
  boolean_T DO_INDG_SYS1_FAIL;
  boolean_T DO_INDG_SYS2_FAIL;
  boolean_T DO_INDG_TPR_BANTU;
  boolean_T DO_INDJ_12A_CGE;
  boolean_T DO_INDJ_12A_RGE;
  boolean_T DO_INDJ_12B_CGE;
  boolean_T DO_INDJ_12B_RGE;
  boolean_T DO_INDJ_14_CGE;
  boolean_T DO_INDJ_14_RGE;
  boolean_T DO_INDJ_22A_CGE;
  boolean_T DO_INDJ_22A_RGE;
  boolean_T DO_INDJ_22B_CGE;
  boolean_T DO_INDJ_22B_RGE;
  boolean_T DO_INDJ_24_CGE;
  boolean_T DO_INDJ_24_RGE;
  boolean_T DO_INDJ_10_CGE;
  boolean_T DO_INDJ_10_RGE;
  boolean_T DO_INDJ_10_WGE;
  boolean_T DO_INDJ_20_CGE;
  boolean_T DO_INDJ_20_RGE;
  boolean_T DO_INDJ_20_WGE;
  boolean_T DO_INDSW_W11A_BE;
  boolean_T DO_INDSW_W11A_LE;
  boolean_T DO_INDSW_W11A_NBE;
  boolean_T DO_INDSW_W11A_NRE;
  boolean_T DO_INDSW_W11A_NTE;
  boolean_T DO_INDSW_W11A_NWBE;
  boolean_T DO_INDSW_W11A_NWRE;
  boolean_T DO_INDSW_W11A_NWTE;
  boolean_T DO_INDSW_W11A_RBE;
  boolean_T DO_INDSW_W11A_RRE;
  boolean_T DO_INDSW_W11A_RTE;
  boolean_T DO_INDSW_W11A_RWBE;
  boolean_T DO_INDSW_W11A_RWRE;
  boolean_T DO_INDSW_W11A_RWTE;
  boolean_T DO_INDSW_W11B_BE;
  boolean_T DO_INDSW_W11B_LE;
  boolean_T DO_INDSW_W11B_NBE;
  boolean_T DO_INDSW_W11B_NRE;
  boolean_T DO_INDSW_W11B_NTE;
  boolean_T DO_INDSW_W11B_NWBE;
  boolean_T DO_INDSW_W11B_NWRE;
  boolean_T DO_INDSW_W11B_NWTE;
  boolean_T DO_INDSW_W11B_RBE;
  boolean_T DO_INDSW_W11B_RRE;
  boolean_T DO_INDSW_W11B_RTE;
  boolean_T DO_INDSW_W11B_RWBE;
  boolean_T DO_INDSW_W11B_RWRE;
  boolean_T DO_INDSW_W11B_RWTE;
  boolean_T DO_INDSW_W13A_BE;
  boolean_T DO_INDSW_W13A_LE;
  boolean_T DO_INDSW_W13A_NBE;
  boolean_T DO_INDSW_W13A_NRE;
  boolean_T DO_INDSW_W13A_NTE;
  boolean_T DO_INDSW_W13A_NWBE;
  boolean_T DO_INDSW_W13A_NWRE;
  boolean_T DO_INDSW_W13A_NWTE;
  boolean_T DO_INDSW_W13A_RBE;
  boolean_T DO_INDSW_W13A_RRE;
  boolean_T DO_INDSW_W13A_RTE;
  boolean_T DO_INDSW_W13A_RWBE;
  boolean_T DO_INDSW_W13A_RWRE;
  boolean_T DO_INDSW_W13A_RWTE;
  boolean_T DO_INDSW_W13B_BE;
  boolean_T DO_INDSW_W13B_LE;
  boolean_T DO_INDSW_W13B_NBE;
  boolean_T DO_INDSW_W13B_NRE;
  boolean_T DO_INDSW_W13B_NTE;
  boolean_T DO_INDSW_W13B_NWBE;
  boolean_T DO_INDSW_W13B_NWRE;
  boolean_T DO_INDSW_W13B_NWTE;
  boolean_T DO_INDSW_W13B_RBE;
  boolean_T DO_INDSW_W13B_RRE;
  boolean_T DO_INDSW_W13B_RTE;
  boolean_T DO_INDSW_W13B_RWBE;
  boolean_T DO_INDSW_W13B_RWRE;
  boolean_T DO_INDSW_W13B_RWTE;
  boolean_T DO_INDSW_W21A_BE;
  boolean_T DO_INDSW_W21A_LE;
  boolean_T DO_INDSW_W21A_NBE;
  boolean_T DO_INDSW_W21A_NRE;
  boolean_T DO_INDSW_W21A_NTE;
  boolean_T DO_INDSW_W21A_NWBE;
  boolean_T DO_INDSW_W21A_NWRE;
  boolean_T DO_INDSW_W21A_NWTE;
  boolean_T DO_INDSW_W21A_RBE;
  boolean_T DO_INDSW_W21A_RRE;
  boolean_T DO_INDSW_W21A_RTE;
  boolean_T DO_INDSW_W21A_RWBE;
  boolean_T DO_INDSW_W21A_RWRE;
  boolean_T DO_INDSW_W21A_RWTE;
  boolean_T DO_INDSW_W21B_BE;
  boolean_T DO_INDSW_W21B_LE;
  boolean_T DO_INDSW_W21B_NBE;
  boolean_T DO_INDSW_W21B_NRE;
  boolean_T DO_INDSW_W21B_NTE;
  boolean_T DO_INDSW_W21B_NWBE;
  boolean_T DO_INDSW_W21B_NWRE;
  boolean_T DO_INDSW_W21B_NWTE;
  boolean_T DO_INDSW_W21B_RBE;
  boolean_T DO_INDSW_W21B_RRE;
  boolean_T DO_INDSW_W21B_RTE;
  boolean_T DO_INDSW_W21B_RWBE;
  boolean_T DO_INDSW_W21B_RWRE;
  boolean_T DO_INDSW_W21B_RWTE;
  boolean_T DO_INDSW_W21C_BE;
  boolean_T DO_INDSW_W21C_LE;
  boolean_T DO_INDSW_W21C_NWBE;
  boolean_T DO_INDSW_W21C_NWRE;
  boolean_T DO_INDSW_W21C_NWTE;
  boolean_T DO_INDSW_W21C_RBE;
  boolean_T DO_INDSW_W21C_RRE;
  boolean_T DO_INDSW_W21C_RTE;
  boolean_T DO_INDSW_W21C_RWBE;
  boolean_T DO_INDSW_W21C_RWRE;
  boolean_T DO_INDSW_W21C_RWTE;
  boolean_T DO_INDSW_W23A_BE;
  boolean_T DO_INDSW_W23A_LE;
  boolean_T DO_INDSW_W23A_NBE;
  boolean_T DO_INDSW_W23A_NRE;
  boolean_T DO_INDSW_W23A_NTE;
  boolean_T DO_INDSW_W23A_NWBE;
  boolean_T DO_INDSW_W23A_NWRE;
  boolean_T DO_INDSW_W23A_NWTE;
  boolean_T DO_INDSW_W23A_RBE;
  boolean_T DO_INDSW_W23A_RRE;
  boolean_T DO_INDSW_W23A_RTE;
  boolean_T DO_INDSW_W23A_RWBE;
  boolean_T DO_INDSW_W23A_RWRE;
  boolean_T DO_INDSW_W23A_RWTE;
  boolean_T DO_INDSW_W23B_BE;
  boolean_T DO_INDSW_W23B_LE;
  boolean_T DO_INDSW_W23B_NBE;
  boolean_T DO_INDSW_W23B_NRE;
  boolean_T DO_INDSW_W23B_NTE;
  boolean_T DO_INDSW_W23B_NWBE;
  boolean_T DO_INDSW_W23B_NWRE;
  boolean_T DO_INDSW_W23B_NWTE;
  boolean_T DO_INDSW_W23B_RBE;
  boolean_T DO_INDSW_W23B_RRE;
  boolean_T DO_INDSW_W23B_RTE;
  boolean_T DO_INDSW_W23B_RWBE;
  boolean_T DO_INDSW_W23B_RWRE;
  boolean_T DO_INDSW_W23B_RWTE;
  boolean_T DO_INDT_BE_10A;
  boolean_T DO_INDT_RE_10A;
  boolean_T DO_INDT_TE_10A;
  boolean_T DO_INDT_BE_10B;
  boolean_T DO_INDT_RE_10B;
  boolean_T DO_INDT_TE_10B;
  boolean_T DO_INDT_BE_11A;
  boolean_T DO_INDT_RE_11A;
  boolean_T DO_INDT_TE_11A;
  boolean_T DO_INDT_BE_11B;
  boolean_T DO_INDT_RE_11B;
  boolean_T DO_INDT_TE_11B;
  boolean_T DO_INDT_BE_12A;
  boolean_T DO_INDT_RE_12A;
  boolean_T DO_INDT_TE_12A;
  boolean_T DO_INDT_BE_12B;
  boolean_T DO_INDT_RE_12B;
  boolean_T DO_INDT_TE_12B;
  boolean_T DO_INDT_BE_12C;
  boolean_T DO_INDT_RE_12C;
  boolean_T DO_INDT_TE_12C;
  boolean_T DO_INDT_BE_12D;
  boolean_T DO_INDT_RE_12D;
  boolean_T DO_INDT_TE_12D;
  boolean_T DO_INDT_BE_12E;
  boolean_T DO_INDT_RE_12E;
  boolean_T DO_INDT_TE_12E;
  boolean_T DO_INDT_BE_13A;
  boolean_T DO_INDT_RE_13A;
  boolean_T DO_INDT_TE_13A;
  boolean_T DO_INDT_BE_13B;
  boolean_T DO_INDT_RE_13B;
  boolean_T DO_INDT_TE_13B;
  boolean_T DO_INDT_BE_14A;
  boolean_T DO_INDT_RE_14A;
  boolean_T DO_INDT_TE_14A;
  boolean_T DO_INDT_BE_14B;
  boolean_T DO_INDT_RE_14B;
  boolean_T DO_INDT_TE_14B;
  boolean_T DO_INDT_BE_20A;
  boolean_T DO_INDT_RE_20A;
  boolean_T DO_INDT_TE_20A;
  boolean_T DO_INDT_BE_20B;
  boolean_T DO_INDT_RE_20B;
  boolean_T DO_INDT_TE_20B;
  boolean_T DO_INDT_BE_21A;
  boolean_T DO_INDT_RE_21A;
  boolean_T DO_INDT_TE_21A;
  boolean_T DO_INDT_BE_21B;
  boolean_T DO_INDT_RE_21B;
  boolean_T DO_INDT_TE_21B;
  boolean_T DO_INDT_BE_21C;
  boolean_T DO_INDT_RE_21C;
  boolean_T DO_INDT_TE_21C;
  boolean_T DO_INDT_BE_22A;
  boolean_T DO_INDT_RE_22A;
  boolean_T DO_INDT_TE_22A;
  boolean_T DO_INDT_BE_22B;
  boolean_T DO_INDT_RE_22B;
  boolean_T DO_INDT_TE_22B;
  boolean_T DO_INDT_BE_22C;
  boolean_T DO_INDT_RE_22C;
  boolean_T DO_INDT_TE_22C;
  boolean_T DO_INDT_BE_22D;
  boolean_T DO_INDT_RE_22D;
  boolean_T DO_INDT_TE_22D;
  boolean_T DO_INDT_BE_22E;
  boolean_T DO_INDT_RE_22E;
  boolean_T DO_INDT_TE_22E;
  boolean_T DO_INDT_BE_23A;
  boolean_T DO_INDT_RE_23A;
  boolean_T DO_INDT_TE_23A;
  boolean_T DO_INDT_BE_23B;
  boolean_T DO_INDT_RE_23B;
  boolean_T DO_INDT_TE_23B;
  boolean_T DO_INDT_BE_24A;
  boolean_T DO_INDT_RE_24A;
  boolean_T DO_INDT_TE_24A;
  boolean_T DO_INDT_BE_24B;
  boolean_T DO_INDT_RE_24B;
  boolean_T DO_INDT_TE_24B;
  boolean_T DO_INDAR_J12A;
  boolean_T DO_INDPB_J12A;
  boolean_T DO_INDAR_J12B;
  boolean_T DO_INDPB_J12B;
  boolean_T DO_INDAR_J14;
  boolean_T DO_INDPB_J14;
  boolean_T DO_INDAR_J22A;
  boolean_T DO_INDPB_J22A;
  boolean_T DO_INDAR_J22B;
  boolean_T DO_INDPB_J22B;
  boolean_T DO_INDAR_J24;
  boolean_T DO_INDPB_J24;
  boolean_T DO_INDAR_JL10;
  boolean_T DO_INDPB_JL10;
  boolean_T DO_INDAR_JL20;
  boolean_T DO_INDPB_JL20;
  boolean_T DO_INDPB_X10;
  boolean_T DO_INDPB_X14;
  boolean_T DO_INDPB_X20;
  boolean_T DO_INDPB_X24;
  boolean_T DO_FE_FROM_DEP;
  boolean_T DO_FLE_FROM_DEP;
  boolean_T DO_PBE_FROM_DEP;
  boolean_T DO_CBTC_T1_ED1;
  boolean_T DO_CBTC_T1_ED2;
  boolean_T DO_CBTC_T1_ED3;
  boolean_T DO_CBTC_T1_ED4;
  boolean_T DO_CBTC_T1_PSD1;
  boolean_T DO_CBTC_T1_PSD2;
  boolean_T DO_CBTC_T1_ESB1;
  boolean_T DO_CBTC_T1_ESB2;
  boolean_T DO_CBTC_T2_ED1;
  boolean_T DO_CBTC_T2_ED2;
  boolean_T DO_CBTC_T2_ED3;
  boolean_T DO_CBTC_T2_ED4;
  boolean_T DO_CBTC_T2_PSD1;
  boolean_T DO_CBTC_T2_PSD2;
  boolean_T DO_CBTC_T2_ESB1;
  boolean_T DO_CBTC_T2_ESB2;
  boolean_T DO_CBTC_T3_ED1;
  boolean_T DO_CBTC_T3_ED2;
  boolean_T DO_CBTC_T3_ED3;
  boolean_T DO_CBTC_T3_ED4;
  boolean_T DO_CBTC_T3_PSD1;
  boolean_T DO_CBTC_T3_PSD2;
  boolean_T DO_CBTC_T3_ESB1;
  boolean_T DO_CBTC_T3_ESB2;
  boolean_T DO_CT_TBW;
  boolean_T DO_CBTC_TIB_ED1;
  boolean_T DO_CBTC_TIB_ED2;
  boolean_T DO_CBTC_TIB_ED3;
  boolean_T DO_CBTC_TIB_ED4;
  boolean_T DO_CBTC_TIB_PSD1;
  boolean_T DO_CBTC_TIB_PSD2;
  boolean_T DO_CBTC_TIB_ESB1;
  boolean_T DO_CBTC_TIB_ESB2;
  boolean_T DO_FE_TO_DEP;
  boolean_T DO_FLE_TO_DEP;
  boolean_T DO_PBE_TO_DEP;
  boolean_T DO_CT_TPR;
  boolean_T DO_CT_TWT;
  boolean_T DO_CT_WZ;
  boolean_T M_GV_RR_OK;
  boolean_T M_TPBP_24A;
  boolean_T M_TPBP_23A;
  boolean_T M_TPBP_21C;
  boolean_T M_TPBP_20B;
  boolean_T M_TPBP_14A;
  boolean_T M_TPBP_13A;
  boolean_T M_TPBP_11B;
  boolean_T M_TPBP_10B;
  boolean_T M_RD_DEP_GR;
  boolean_T OR4;
  boolean_T NOT8_f;
  boolean_T M_RD_J12A_DR;
  boolean_T OR3;
  boolean_T NOT7_i;
  boolean_T M_RD_J12B_DR;
  boolean_T OR5;
  boolean_T NOT7_p;
  boolean_T M_RD_J14_DR;
  boolean_T OR3_f;
  boolean_T NOT7_m;
  boolean_T M_RD_J22A_DR;
  boolean_T OR5_j;
  boolean_T NOT7_a;
  boolean_T M_RD_J22B_DR;
  boolean_T OR5_m;
  boolean_T NOT7_l;
  boolean_T M_RD_J24_DR;
  boolean_T OR3_c;
  boolean_T NOT7_n;
  boolean_T M_RD_JL10_DR;
  boolean_T M_RD_JL10_GR;
  boolean_T OR3_g;
  boolean_T NOT7_j;
  boolean_T NOT8_n;
  boolean_T M_RD_JL20_DR;
  boolean_T M_RD_JL20_GR;
  boolean_T OR3_o;
  boolean_T NOT7_ix;
  boolean_T NOT8_o;
  boolean_T M_W11A_21A_BLOCK;
  boolean_T M_W11B_21B_BLOCK;
  boolean_T M_W13A_23A_BLOCK;
  boolean_T M_W13B_23B_BLOCK;
  boolean_T M_W21C_BLOCK;
  boolean_T M_W11A_21A_CTRL_CAL;
  boolean_T M_W11A_21A_CTRL_TRAIL;
  boolean_T M_W11A_21A_CTRL_RST;
  boolean_T M_W11A_21A_CTRL_B;
  boolean_T M_W11A_21A_OOC_RD;
  boolean_T M_W11A_21A_BACK_TO_N;
  boolean_T M_W11A_21A_BACK_TO_R;
  boolean_T M_W11A_21A_N;
  boolean_T M_W11A_21A_N_BLOCK;
  boolean_T M_W11A_21A_R;
  boolean_T M_W11A_21A_R_BLOCK;
  boolean_T M_W11A_21A_START;
  boolean_T M_W11B_21B_CTRL_CAL;
  boolean_T M_W11B_21B_CTRL_TRAIL;
  boolean_T M_W11B_21B_CTRL_RST;
  boolean_T M_W11B_21B_CTRL_B;
  boolean_T M_W11B_21B_OOC_RD;
  boolean_T M_W11B_21B_BACK_TO_N;
  boolean_T M_W11B_21B_BACK_TO_R;
  boolean_T M_W11B_21B_N;
  boolean_T M_W11B_21B_N_BLOCK;
  boolean_T M_W11B_21B_R;
  boolean_T M_W11B_21B_R_BLOCK;
  boolean_T M_W11B_21B_START;
  boolean_T M_W13A_23A_CTRL_CAL;
  boolean_T M_W13A_23A_CTRL_TRAIL;
  boolean_T M_W13A_23A_CTRL_RST;
  boolean_T M_W13A_23A_CTRL_B;
  boolean_T M_W13A_23A_OOC_RD;
  boolean_T M_W13A_23A_BACK_TO_N;
  boolean_T M_W13A_23A_BACK_TO_R;
  boolean_T M_W13A_23A_N;
  boolean_T M_W13A_23A_N_BLOCK;
  boolean_T M_W13A_23A_R;
  boolean_T M_W13A_23A_R_BLOCK;
  boolean_T M_W13A_23A_START;
  boolean_T M_W13B_23B_CTRL_CAL;
  boolean_T M_W13B_23B_CTRL_TRAIL;
  boolean_T M_W13B_23B_CTRL_RST;
  boolean_T M_W13B_23B_CTRL_B;
  boolean_T M_W13B_23B_OOC_RD;
  boolean_T M_W13B_23B_BACK_TO_N;
  boolean_T M_W13B_23B_BACK_TO_R;
  boolean_T M_W13B_23B_N;
  boolean_T M_W13B_23B_N_BLOCK;
  boolean_T M_W13B_23B_R;
  boolean_T M_W13B_23B_R_BLOCK;
  boolean_T M_W13B_23B_START;
  boolean_T M_W21C_CTRL_CAL;
  boolean_T M_W21C_CTRL_TRAIL;
  boolean_T M_W21C_CTRL_RST;
  boolean_T M_W21C_CTRL_B;
  boolean_T M_W21C_OOC_RD;
  boolean_T M_W21C_BACK_TO_N;
  boolean_T M_W21C_BACK_TO_R;
  boolean_T M_W21C_N_BLOCK;
  boolean_T M_W21C_R_BLOCK;
  boolean_T M_W21C_START;
  boolean_T M_B_DEP_10;
  boolean_T M_B_DEP_20;
  boolean_T M_B_12_10;
  boolean_T M_B_12_20;
  boolean_T M_B_12_14;
  boolean_T M_B_12_24;
  boolean_T M_B_14_12;
  boolean_T M_B_14_22;
  boolean_T M_B_22_10;
  boolean_T M_B_22_20;
  boolean_T M_B_22_14;
  boolean_T M_B_22_24;
  boolean_T M_B_24_12;
  boolean_T M_B_24_22;
  boolean_T M_B_10_DEP;
  boolean_T M_B_10_12;
  boolean_T M_B_10_22;
  boolean_T M_B_20_DEP;
  boolean_T M_B_20_12;
  boolean_T M_B_20_22;
  boolean_T M_CBTC_T1_F_ED1;
  boolean_T M_CBTC_T2_F_ED1;
  boolean_T M_CBTC_T3_F_ED1;
  boolean_T M_CBTC_TIB_F_ED1;
  boolean_T M_CBTC_T1_F_ED2;
  boolean_T M_CBTC_T2_F_ED2;
  boolean_T M_CBTC_T3_F_ED2;
  boolean_T M_CBTC_TIB_F_ED2;
  boolean_T M_CBTC_T1_F_ED3;
  boolean_T M_CBTC_T2_F_ED3;
  boolean_T M_CBTC_T3_F_ED3;
  boolean_T M_CBTC_TIB_F_ED3;
  boolean_T M_CBTC_T1_F_ED4;
  boolean_T M_CBTC_T2_F_ED4;
  boolean_T M_CBTC_T3_F_ED4;
  boolean_T M_CBTC_TIB_F_ED4;
  boolean_T M_CBTC_T1_F_ESB1;
  boolean_T M_CBTC_T2_F_ESB1;
  boolean_T M_CBTC_T3_F_ESB1;
  boolean_T M_CBTC_TIB_F_ESB1;
  boolean_T M_CBTC_T1_F_ESB2;
  boolean_T M_CBTC_T2_F_ESB2;
  boolean_T M_CBTC_T3_F_ESB2;
  boolean_T M_CBTC_TIB_F_ESB2;
  boolean_T M_FAIL_COMM1_F;
  boolean_T M_FAIL_COMM2_F;
  boolean_T M_FAIL_SYSTEM1_F;
  boolean_T M_FAIL_SYSTEM2_F;
  boolean_T M_CBTC_T1_F_PSD1;
  boolean_T M_CBTC_T2_F_PSD1;
  boolean_T M_CBTC_T3_F_PSD1;
  boolean_T M_CBTC_TIB_F_PSD1;
  boolean_T M_CBTC_T1_F_PSD2;
  boolean_T M_CBTC_T2_F_PSD2;
  boolean_T M_CBTC_T3_F_PSD2;
  boolean_T M_CBTC_TIB_F_PSD2;
  boolean_T M_CTRL_AA;
  boolean_T M_PBCTRL_10_12;
  boolean_T M_PBCTRL_10_22;
  boolean_T M_PBCTRL_14_12;
  boolean_T M_PBCTRL_14_22;
  boolean_T M_PBCTRL_20_12;
  boolean_T M_PBCTRL_20_22;
  boolean_T M_PBCTRL_24_12;
  boolean_T M_PBCTRL_24_22;
  boolean_T M_PBCTRL_DEP_10;
  boolean_T M_PBCTRL_DEP_20;
  boolean_T M_PBCTRL_12_10;
  boolean_T M_PBCTRL_22_10;
  boolean_T M_PBCTRL_12_14;
  boolean_T M_PBCTRL_22_14;
  boolean_T M_PBCTRL_12_20;
  boolean_T M_PBCTRL_22_20;
  boolean_T M_PBCTRL_12_24;
  boolean_T M_PBCTRL_22_24;
  boolean_T M_PBCTRL_10_DEP;
  boolean_T M_PBCTRL_20_DEP;
  boolean_T M_AR_J12A;
  boolean_T M_AR_J12B;
  boolean_T M_AR_J14;
  boolean_T M_AR_J22A;
  boolean_T M_AR_J22B;
  boolean_T M_AR_J24;
  boolean_T M_AR_JL10;
  boolean_T M_AR_JL20;
  boolean_T M_W11A_21A_F_ACK;
  boolean_T M_W11A_21A_FAIL;
  boolean_T M_W11A_21A_CTRL_TRAIL_Z;
  boolean_T M_W11B_21B_F_ACK;
  boolean_T M_W11B_21B_FAIL;
  boolean_T M_W11B_21B_CTRL_TRAIL_Z;
  boolean_T M_W13A_23A_F_ACK;
  boolean_T M_W13A_23A_FAIL;
  boolean_T M_W13A_23A_CTRL_TRAIL_Z;
  boolean_T M_W13B_23B_F_ACK;
  boolean_T M_W13B_23B_FAIL;
  boolean_T M_W13B_23B_CTRL_TRAIL_Z;
  boolean_T M_W21C_F_ACK;
  boolean_T M_W21C_FAIL;
  boolean_T M_B_DEP;
  boolean_T M_B_J12A_H;
  boolean_T M_RS_12_10;
  boolean_T M_RS_12_20;
  boolean_T M_B_J12B_H;
  boolean_T M_RS_12_14;
  boolean_T M_RS_12_24;
  boolean_T M_B_J14_D;
  boolean_T M_RS_14_12;
  boolean_T M_RS_14_22;
  boolean_T M_B_J22A_H;
  boolean_T M_RS_22_10;
  boolean_T M_RS_22_20;
  boolean_T M_B_J22B_H;
  boolean_T M_RS_22_14;
  boolean_T M_RS_22_24;
  boolean_T M_B_J24_D;
  boolean_T M_RS_24_12;
  boolean_T M_RS_24_22;
  boolean_T M_B_JL10_S;
  boolean_T M_B_JL10_D;
  boolean_T M_RS_10_12;
  boolean_T M_RS_10_22;
  boolean_T M_B_JL20_S;
  boolean_T M_B_JL20_D;
  boolean_T M_RS_20_12;
  boolean_T M_RS_20_22;
  int32_T clockTickCounter_0;
  int32_T clockTickCounter_f_0;

  /* DiscretePulseGenerator: '<S3>/1S' */
  clockTickCounter_f_0 = NONVITALMAIN_DW.clockTickCounter_f;

  /* DiscretePulseGenerator: '<S3>/0.5S' */
  clockTickCounter_0 = NONVITALMAIN_DW.clockTickCounter;
  M_RS_20_22 = NONVITALMAIN_DW.M_RS_20_22;
  M_RS_20_12 = NONVITALMAIN_DW.M_RS_20_12;
  M_B_JL20_D = NONVITALMAIN_DW.M_B_JL20_D;
  M_B_JL20_S = NONVITALMAIN_DW.M_B_JL20_S;
  M_RS_10_22 = NONVITALMAIN_DW.M_RS_10_22;
  M_RS_10_12 = NONVITALMAIN_DW.M_RS_10_12;
  M_B_JL10_D = NONVITALMAIN_DW.M_B_JL10_D;
  M_B_JL10_S = NONVITALMAIN_DW.M_B_JL10_S;
  M_RS_24_22 = NONVITALMAIN_DW.M_RS_24_22;
  M_RS_24_12 = NONVITALMAIN_DW.M_RS_24_12;
  M_B_J24_D = NONVITALMAIN_DW.M_B_J24_D;
  M_RS_22_24 = NONVITALMAIN_DW.M_RS_22_24;
  M_RS_22_14 = NONVITALMAIN_DW.M_RS_22_14;
  M_B_J22B_H = NONVITALMAIN_DW.M_B_J22B_H;
  M_RS_22_20 = NONVITALMAIN_DW.M_RS_22_20;
  M_RS_22_10 = NONVITALMAIN_DW.M_RS_22_10;
  M_B_J22A_H = NONVITALMAIN_DW.M_B_J22A_H;
  M_RS_14_22 = NONVITALMAIN_DW.M_RS_14_22;
  M_RS_14_12 = NONVITALMAIN_DW.M_RS_14_12;
  M_B_J14_D = NONVITALMAIN_DW.M_B_J14_D;
  M_RS_12_24 = NONVITALMAIN_DW.M_RS_12_24;
  M_RS_12_14 = NONVITALMAIN_DW.M_RS_12_14;
  M_B_J12B_H = NONVITALMAIN_DW.M_B_J12B_H;
  M_RS_12_20 = NONVITALMAIN_DW.M_RS_12_20;
  M_RS_12_10 = NONVITALMAIN_DW.M_RS_12_10;
  M_B_J12A_H = NONVITALMAIN_DW.M_B_J12A_H;
  M_B_DEP = NONVITALMAIN_DW.M_B_DEP;
  M_W21C_FAIL = NONVITALMAIN_DW.M_W21C_FAIL;
  M_W21C_F_ACK = NONVITALMAIN_DW.M_W21C_F_ACK;
  M_W13B_23B_CTRL_TRAIL_Z = NONVITALMAIN_DW.M_W13B_23B_CTRL_TRAIL_Z;
  M_W13B_23B_FAIL = NONVITALMAIN_DW.M_W13B_23B_FAIL;
  M_W13B_23B_F_ACK = NONVITALMAIN_DW.M_W13B_23B_F_ACK;
  M_W13A_23A_CTRL_TRAIL_Z = NONVITALMAIN_DW.M_W13A_23A_CTRL_TRAIL_Z;
  M_W13A_23A_FAIL = NONVITALMAIN_DW.M_W13A_23A_FAIL;
  M_W13A_23A_F_ACK = NONVITALMAIN_DW.M_W13A_23A_F_ACK;
  M_W11B_21B_CTRL_TRAIL_Z = NONVITALMAIN_DW.M_W11B_21B_CTRL_TRAIL_Z;
  M_W11B_21B_FAIL = NONVITALMAIN_DW.M_W11B_21B_FAIL;
  M_W11B_21B_F_ACK = NONVITALMAIN_DW.M_W11B_21B_F_ACK;
  M_W11A_21A_CTRL_TRAIL_Z = NONVITALMAIN_DW.M_W11A_21A_CTRL_TRAIL_Z;
  M_W11A_21A_FAIL = NONVITALMAIN_DW.M_W11A_21A_FAIL;
  M_W11A_21A_F_ACK = NONVITALMAIN_DW.M_W11A_21A_F_ACK;
  M_AR_JL20 = NONVITALMAIN_DW.M_AR_JL20;
  M_AR_JL10 = NONVITALMAIN_DW.M_AR_JL10;
  M_AR_J24 = NONVITALMAIN_DW.M_AR_J24;
  M_AR_J22B = NONVITALMAIN_DW.M_AR_J22B;
  M_AR_J22A = NONVITALMAIN_DW.M_AR_J22A;
  M_AR_J14 = NONVITALMAIN_DW.M_AR_J14;
  M_AR_J12B = NONVITALMAIN_DW.M_AR_J12B;
  M_AR_J12A = NONVITALMAIN_DW.M_AR_J12A;
  M_PBCTRL_20_DEP = NONVITALMAIN_DW.M_PBCTRL_20_DEP;
  M_PBCTRL_10_DEP = NONVITALMAIN_DW.M_PBCTRL_10_DEP;
  M_PBCTRL_22_24 = NONVITALMAIN_DW.M_PBCTRL_22_24;
  M_PBCTRL_12_24 = NONVITALMAIN_DW.M_PBCTRL_12_24;
  M_PBCTRL_22_20 = NONVITALMAIN_DW.M_PBCTRL_22_20;
  M_PBCTRL_12_20 = NONVITALMAIN_DW.M_PBCTRL_12_20;
  M_PBCTRL_22_14 = NONVITALMAIN_DW.M_PBCTRL_22_14;
  M_PBCTRL_12_14 = NONVITALMAIN_DW.M_PBCTRL_12_14;
  M_PBCTRL_22_10 = NONVITALMAIN_DW.M_PBCTRL_22_10;
  M_PBCTRL_12_10 = NONVITALMAIN_DW.M_PBCTRL_12_10;
  M_PBCTRL_DEP_20 = NONVITALMAIN_DW.M_PBCTRL_DEP_20;
  M_PBCTRL_DEP_10 = NONVITALMAIN_DW.M_PBCTRL_DEP_10;
  M_PBCTRL_24_22 = NONVITALMAIN_DW.M_PBCTRL_24_22;
  M_PBCTRL_24_12 = NONVITALMAIN_DW.M_PBCTRL_24_12;
  M_PBCTRL_20_22 = NONVITALMAIN_DW.M_PBCTRL_20_22;
  M_PBCTRL_20_12 = NONVITALMAIN_DW.M_PBCTRL_20_12;
  M_PBCTRL_14_22 = NONVITALMAIN_DW.M_PBCTRL_14_22;
  M_PBCTRL_14_12 = NONVITALMAIN_DW.M_PBCTRL_14_12;
  M_PBCTRL_10_22 = NONVITALMAIN_DW.M_PBCTRL_10_22;
  M_PBCTRL_10_12 = NONVITALMAIN_DW.M_PBCTRL_10_12;
  M_CTRL_AA = NONVITALMAIN_DW.M_CTRL_AA;
  M_CBTC_TIB_F_PSD2 = NONVITALMAIN_DW.M_CBTC_TIB_F_PSD2;
  M_CBTC_T3_F_PSD2 = NONVITALMAIN_DW.M_CBTC_T3_F_PSD2;
  M_CBTC_T2_F_PSD2 = NONVITALMAIN_DW.M_CBTC_T2_F_PSD2;
  M_CBTC_T1_F_PSD2 = NONVITALMAIN_DW.M_CBTC_T1_F_PSD2;
  M_CBTC_TIB_F_PSD1 = NONVITALMAIN_DW.M_CBTC_TIB_F_PSD1;
  M_CBTC_T3_F_PSD1 = NONVITALMAIN_DW.M_CBTC_T3_F_PSD1;
  M_CBTC_T2_F_PSD1 = NONVITALMAIN_DW.M_CBTC_T2_F_PSD1;
  M_CBTC_T1_F_PSD1 = NONVITALMAIN_DW.M_CBTC_T1_F_PSD1;
  M_FAIL_SYSTEM2_F = NONVITALMAIN_DW.M_FAIL_SYSTEM2_F;
  M_FAIL_SYSTEM1_F = NONVITALMAIN_DW.M_FAIL_SYSTEM1_F;
  M_FAIL_COMM2_F = NONVITALMAIN_DW.M_FAIL_COMM2_F;
  M_FAIL_COMM1_F = NONVITALMAIN_DW.M_FAIL_COMM1_F;
  M_CBTC_TIB_F_ESB2 = NONVITALMAIN_DW.M_CBTC_TIB_F_ESB2;
  M_CBTC_T3_F_ESB2 = NONVITALMAIN_DW.M_CBTC_T3_F_ESB2;
  M_CBTC_T2_F_ESB2 = NONVITALMAIN_DW.M_CBTC_T2_F_ESB2;
  M_CBTC_T1_F_ESB2 = NONVITALMAIN_DW.M_CBTC_T1_F_ESB2;
  M_CBTC_TIB_F_ESB1 = NONVITALMAIN_DW.M_CBTC_TIB_F_ESB1;
  M_CBTC_T3_F_ESB1 = NONVITALMAIN_DW.M_CBTC_T3_F_ESB1;
  M_CBTC_T2_F_ESB1 = NONVITALMAIN_DW.M_CBTC_T2_F_ESB1;
  M_CBTC_T1_F_ESB1 = NONVITALMAIN_DW.M_CBTC_T1_F_ESB1;
  M_CBTC_TIB_F_ED4 = NONVITALMAIN_DW.M_CBTC_TIB_F_ED4;
  M_CBTC_T3_F_ED4 = NONVITALMAIN_DW.M_CBTC_T3_F_ED4;
  M_CBTC_T2_F_ED4 = NONVITALMAIN_DW.M_CBTC_T2_F_ED4;
  M_CBTC_T1_F_ED4 = NONVITALMAIN_DW.M_CBTC_T1_F_ED4;
  M_CBTC_TIB_F_ED3 = NONVITALMAIN_DW.M_CBTC_TIB_F_ED3;
  M_CBTC_T3_F_ED3 = NONVITALMAIN_DW.M_CBTC_T3_F_ED3;
  M_CBTC_T2_F_ED3 = NONVITALMAIN_DW.M_CBTC_T2_F_ED3;
  M_CBTC_T1_F_ED3 = NONVITALMAIN_DW.M_CBTC_T1_F_ED3;
  M_CBTC_TIB_F_ED2 = NONVITALMAIN_DW.M_CBTC_TIB_F_ED2;
  M_CBTC_T3_F_ED2 = NONVITALMAIN_DW.M_CBTC_T3_F_ED2;
  M_CBTC_T2_F_ED2 = NONVITALMAIN_DW.M_CBTC_T2_F_ED2;
  M_CBTC_T1_F_ED2 = NONVITALMAIN_DW.M_CBTC_T1_F_ED2;
  M_CBTC_TIB_F_ED1 = NONVITALMAIN_DW.M_CBTC_TIB_F_ED1;
  M_CBTC_T3_F_ED1 = NONVITALMAIN_DW.M_CBTC_T3_F_ED1;
  M_CBTC_T2_F_ED1 = NONVITALMAIN_DW.M_CBTC_T2_F_ED1;
  M_CBTC_T1_F_ED1 = NONVITALMAIN_DW.M_CBTC_T1_F_ED1;
  M_B_20_22 = NONVITALMAIN_DW.M_B_20_22;
  M_B_20_12 = NONVITALMAIN_DW.M_B_20_12;
  M_B_20_DEP = NONVITALMAIN_DW.M_B_20_DEP;
  M_B_10_22 = NONVITALMAIN_DW.M_B_10_22;
  M_B_10_12 = NONVITALMAIN_DW.M_B_10_12;
  M_B_10_DEP = NONVITALMAIN_DW.M_B_10_DEP;
  M_B_24_22 = NONVITALMAIN_DW.M_B_24_22;
  M_B_24_12 = NONVITALMAIN_DW.M_B_24_12;
  M_B_22_24 = NONVITALMAIN_DW.M_B_22_24;
  M_B_22_14 = NONVITALMAIN_DW.M_B_22_14;
  M_B_22_20 = NONVITALMAIN_DW.M_B_22_20;
  M_B_22_10 = NONVITALMAIN_DW.M_B_22_10;
  M_B_14_22 = NONVITALMAIN_DW.M_B_14_22;
  M_B_14_12 = NONVITALMAIN_DW.M_B_14_12;
  M_B_12_24 = NONVITALMAIN_DW.M_B_12_24;
  M_B_12_14 = NONVITALMAIN_DW.M_B_12_14;
  M_B_12_20 = NONVITALMAIN_DW.M_B_12_20;
  M_B_12_10 = NONVITALMAIN_DW.M_B_12_10;
  M_B_DEP_20 = NONVITALMAIN_DW.M_B_DEP_20;
  M_B_DEP_10 = NONVITALMAIN_DW.M_B_DEP_10;
  M_W21C_START = NONVITALMAIN_DW.M_W21C_START;
  M_W21C_R_BLOCK = NONVITALMAIN_DW.M_W21C_R_BLOCK;
  M_W21C_N_BLOCK = NONVITALMAIN_DW.M_W21C_N_BLOCK;
  M_W21C_BACK_TO_R = NONVITALMAIN_DW.M_W21C_BACK_TO_R;
  M_W21C_BACK_TO_N = NONVITALMAIN_DW.M_W21C_BACK_TO_N;
  M_W21C_OOC_RD = NONVITALMAIN_DW.M_W21C_OOC_RD;
  M_W21C_CTRL_B = NONVITALMAIN_DW.M_W21C_CTRL_B;
  M_W21C_CTRL_RST = NONVITALMAIN_DW.M_W21C_CTRL_RST;
  M_W21C_CTRL_TRAIL = NONVITALMAIN_DW.M_W21C_CTRL_TRAIL;
  M_W21C_CTRL_CAL = NONVITALMAIN_DW.M_W21C_CTRL_CAL;
  M_W13B_23B_START = NONVITALMAIN_DW.M_W13B_23B_START;
  M_W13B_23B_R_BLOCK = NONVITALMAIN_DW.M_W13B_23B_R_BLOCK;
  M_W13B_23B_R = NONVITALMAIN_DW.M_W13B_23B_R;
  M_W13B_23B_N_BLOCK = NONVITALMAIN_DW.M_W13B_23B_N_BLOCK;
  M_W13B_23B_N = NONVITALMAIN_DW.M_W13B_23B_N;
  M_W13B_23B_BACK_TO_R = NONVITALMAIN_DW.M_W13B_23B_BACK_TO_R;
  M_W13B_23B_BACK_TO_N = NONVITALMAIN_DW.M_W13B_23B_BACK_TO_N;
  M_W13B_23B_OOC_RD = NONVITALMAIN_DW.M_W13B_23B_OOC_RD;
  M_W13B_23B_CTRL_B = NONVITALMAIN_DW.M_W13B_23B_CTRL_B;
  M_W13B_23B_CTRL_RST = NONVITALMAIN_DW.M_W13B_23B_CTRL_RST;
  M_W13B_23B_CTRL_TRAIL = NONVITALMAIN_DW.M_W13B_23B_CTRL_TRAIL;
  M_W13B_23B_CTRL_CAL = NONVITALMAIN_DW.M_W13B_23B_CTRL_CAL;
  M_W13A_23A_START = NONVITALMAIN_DW.M_W13A_23A_START;
  M_W13A_23A_R_BLOCK = NONVITALMAIN_DW.M_W13A_23A_R_BLOCK;
  M_W13A_23A_R = NONVITALMAIN_DW.M_W13A_23A_R;
  M_W13A_23A_N_BLOCK = NONVITALMAIN_DW.M_W13A_23A_N_BLOCK;
  M_W13A_23A_N = NONVITALMAIN_DW.M_W13A_23A_N;
  M_W13A_23A_BACK_TO_R = NONVITALMAIN_DW.M_W13A_23A_BACK_TO_R;
  M_W13A_23A_BACK_TO_N = NONVITALMAIN_DW.M_W13A_23A_BACK_TO_N;
  M_W13A_23A_OOC_RD = NONVITALMAIN_DW.M_W13A_23A_OOC_RD;
  M_W13A_23A_CTRL_B = NONVITALMAIN_DW.M_W13A_23A_CTRL_B;
  M_W13A_23A_CTRL_RST = NONVITALMAIN_DW.M_W13A_23A_CTRL_RST;
  M_W13A_23A_CTRL_TRAIL = NONVITALMAIN_DW.M_W13A_23A_CTRL_TRAIL;
  M_W13A_23A_CTRL_CAL = NONVITALMAIN_DW.M_W13A_23A_CTRL_CAL;
  M_W11B_21B_START = NONVITALMAIN_DW.M_W11B_21B_START;
  M_W11B_21B_R_BLOCK = NONVITALMAIN_DW.M_W11B_21B_R_BLOCK;
  M_W11B_21B_R = NONVITALMAIN_DW.M_W11B_21B_R;
  M_W11B_21B_N_BLOCK = NONVITALMAIN_DW.M_W11B_21B_N_BLOCK;
  M_W11B_21B_N = NONVITALMAIN_DW.M_W11B_21B_N;
  M_W11B_21B_BACK_TO_R = NONVITALMAIN_DW.M_W11B_21B_BACK_TO_R;
  M_W11B_21B_BACK_TO_N = NONVITALMAIN_DW.M_W11B_21B_BACK_TO_N;
  M_W11B_21B_OOC_RD = NONVITALMAIN_DW.M_W11B_21B_OOC_RD;
  M_W11B_21B_CTRL_B = NONVITALMAIN_DW.M_W11B_21B_CTRL_B;
  M_W11B_21B_CTRL_RST = NONVITALMAIN_DW.M_W11B_21B_CTRL_RST;
  M_W11B_21B_CTRL_TRAIL = NONVITALMAIN_DW.M_W11B_21B_CTRL_TRAIL;
  M_W11B_21B_CTRL_CAL = NONVITALMAIN_DW.M_W11B_21B_CTRL_CAL;
  M_W11A_21A_START = NONVITALMAIN_DW.M_W11A_21A_START;
  M_W11A_21A_R_BLOCK = NONVITALMAIN_DW.M_W11A_21A_R_BLOCK;
  M_W11A_21A_R = NONVITALMAIN_DW.M_W11A_21A_R;
  M_W11A_21A_N_BLOCK = NONVITALMAIN_DW.M_W11A_21A_N_BLOCK;
  M_W11A_21A_N = NONVITALMAIN_DW.M_W11A_21A_N;
  M_W11A_21A_BACK_TO_R = NONVITALMAIN_DW.M_W11A_21A_BACK_TO_R;
  M_W11A_21A_BACK_TO_N = NONVITALMAIN_DW.M_W11A_21A_BACK_TO_N;
  M_W11A_21A_OOC_RD = NONVITALMAIN_DW.M_W11A_21A_OOC_RD;
  M_W11A_21A_CTRL_B = NONVITALMAIN_DW.M_W11A_21A_CTRL_B;
  M_W11A_21A_CTRL_RST = NONVITALMAIN_DW.M_W11A_21A_CTRL_RST;
  M_W11A_21A_CTRL_TRAIL = NONVITALMAIN_DW.M_W11A_21A_CTRL_TRAIL;
  M_W11A_21A_CTRL_CAL = NONVITALMAIN_DW.M_W11A_21A_CTRL_CAL;
  M_W21C_BLOCK = NONVITALMAIN_DW.M_W21C_BLOCK;
  M_W13B_23B_BLOCK = NONVITALMAIN_DW.M_W13B_23B_BLOCK;
  M_W13A_23A_BLOCK = NONVITALMAIN_DW.M_W13A_23A_BLOCK;
  M_W11B_21B_BLOCK = NONVITALMAIN_DW.M_W11B_21B_BLOCK;
  M_W11A_21A_BLOCK = NONVITALMAIN_DW.M_W11A_21A_BLOCK;
  NOT8_o = NONVITALMAIN_DW.NOT8_o;
  NOT7_ix = NONVITALMAIN_DW.NOT7_ix;
  OR3_o = NONVITALMAIN_DW.OR3_o;
  M_RD_JL20_GR = NONVITALMAIN_DW.M_RD_JL20_GR;
  M_RD_JL20_DR = NONVITALMAIN_DW.M_RD_JL20_DR;
  NOT8_n = NONVITALMAIN_DW.NOT8_n;
  NOT7_j = NONVITALMAIN_DW.NOT7_j;
  OR3_g = NONVITALMAIN_DW.OR3_g;
  M_RD_JL10_GR = NONVITALMAIN_DW.M_RD_JL10_GR;
  M_RD_JL10_DR = NONVITALMAIN_DW.M_RD_JL10_DR;
  NOT7_n = NONVITALMAIN_DW.NOT7_n;
  OR3_c = NONVITALMAIN_DW.OR3_c;
  M_RD_J24_DR = NONVITALMAIN_DW.M_RD_J24_DR;
  NOT7_l = NONVITALMAIN_DW.NOT7_l;
  OR5_m = NONVITALMAIN_DW.OR5_m;
  M_RD_J22B_DR = NONVITALMAIN_DW.M_RD_J22B_DR;
  NOT7_a = NONVITALMAIN_DW.NOT7_a;
  OR5_j = NONVITALMAIN_DW.OR5_j;
  M_RD_J22A_DR = NONVITALMAIN_DW.M_RD_J22A_DR;
  NOT7_m = NONVITALMAIN_DW.NOT7_m;
  OR3_f = NONVITALMAIN_DW.OR3_f;
  M_RD_J14_DR = NONVITALMAIN_DW.M_RD_J14_DR;
  NOT7_p = NONVITALMAIN_DW.NOT7_p;
  OR5 = NONVITALMAIN_DW.OR5;
  M_RD_J12B_DR = NONVITALMAIN_DW.M_RD_J12B_DR;
  NOT7_i = NONVITALMAIN_DW.NOT7_i;
  OR3 = NONVITALMAIN_DW.OR3;
  M_RD_J12A_DR = NONVITALMAIN_DW.M_RD_J12A_DR;
  NOT8_f = NONVITALMAIN_DW.NOT8_f;
  OR4 = NONVITALMAIN_DW.OR4;
  M_RD_DEP_GR = NONVITALMAIN_DW.M_RD_DEP_GR;
  M_TPBP_10B = NONVITALMAIN_DW.M_TPBP_10B;
  M_TPBP_11B = NONVITALMAIN_DW.M_TPBP_11B;
  M_TPBP_13A = NONVITALMAIN_DW.M_TPBP_13A;
  M_TPBP_14A = NONVITALMAIN_DW.M_TPBP_14A;
  M_TPBP_20B = NONVITALMAIN_DW.M_TPBP_20B;
  M_TPBP_21C = NONVITALMAIN_DW.M_TPBP_21C;
  M_TPBP_23A = NONVITALMAIN_DW.M_TPBP_23A;
  M_TPBP_24A = NONVITALMAIN_DW.M_TPBP_24A;
  M_GV_RR_OK = NONVITALMAIN_DW.M_GV_RR_OK;
  DO_CT_WZ = NONVITALMAIN_DW.DO_CT_WZ;
  DO_CT_TWT = NONVITALMAIN_DW.DO_CT_TWT;
  DO_CT_TPR = NONVITALMAIN_DW.DO_CT_TPR;
  DO_PBE_TO_DEP = NONVITALMAIN_DW.DO_PBE_TO_DEP;
  DO_FLE_TO_DEP = NONVITALMAIN_DW.DO_FLE_TO_DEP;
  DO_FE_TO_DEP = NONVITALMAIN_DW.DO_FE_TO_DEP;
  DO_CBTC_TIB_ESB2 = NONVITALMAIN_DW.DO_CBTC_TIB_ESB2;
  DO_CBTC_TIB_ESB1 = NONVITALMAIN_DW.DO_CBTC_TIB_ESB1;
  DO_CBTC_TIB_PSD2 = NONVITALMAIN_DW.DO_CBTC_TIB_PSD2;
  DO_CBTC_TIB_PSD1 = NONVITALMAIN_DW.DO_CBTC_TIB_PSD1;
  DO_CBTC_TIB_ED4 = NONVITALMAIN_DW.DO_CBTC_TIB_ED4;
  DO_CBTC_TIB_ED3 = NONVITALMAIN_DW.DO_CBTC_TIB_ED3;
  DO_CBTC_TIB_ED2 = NONVITALMAIN_DW.DO_CBTC_TIB_ED2;
  DO_CBTC_TIB_ED1 = NONVITALMAIN_DW.DO_CBTC_TIB_ED1;
  DO_CT_TBW = NONVITALMAIN_DW.DO_CT_TBW;
  DO_CBTC_T3_ESB2 = NONVITALMAIN_DW.DO_CBTC_T3_ESB2;
  DO_CBTC_T3_ESB1 = NONVITALMAIN_DW.DO_CBTC_T3_ESB1;
  DO_CBTC_T3_PSD2 = NONVITALMAIN_DW.DO_CBTC_T3_PSD2;
  DO_CBTC_T3_PSD1 = NONVITALMAIN_DW.DO_CBTC_T3_PSD1;
  DO_CBTC_T3_ED4 = NONVITALMAIN_DW.DO_CBTC_T3_ED4;
  DO_CBTC_T3_ED3 = NONVITALMAIN_DW.DO_CBTC_T3_ED3;
  DO_CBTC_T3_ED2 = NONVITALMAIN_DW.DO_CBTC_T3_ED2;
  DO_CBTC_T3_ED1 = NONVITALMAIN_DW.DO_CBTC_T3_ED1;
  DO_CBTC_T2_ESB2 = NONVITALMAIN_DW.DO_CBTC_T2_ESB2;
  DO_CBTC_T2_ESB1 = NONVITALMAIN_DW.DO_CBTC_T2_ESB1;
  DO_CBTC_T2_PSD2 = NONVITALMAIN_DW.DO_CBTC_T2_PSD2;
  DO_CBTC_T2_PSD1 = NONVITALMAIN_DW.DO_CBTC_T2_PSD1;
  DO_CBTC_T2_ED4 = NONVITALMAIN_DW.DO_CBTC_T2_ED4;
  DO_CBTC_T2_ED3 = NONVITALMAIN_DW.DO_CBTC_T2_ED3;
  DO_CBTC_T2_ED2 = NONVITALMAIN_DW.DO_CBTC_T2_ED2;
  DO_CBTC_T2_ED1 = NONVITALMAIN_DW.DO_CBTC_T2_ED1;
  DO_CBTC_T1_ESB2 = NONVITALMAIN_DW.DO_CBTC_T1_ESB2;
  DO_CBTC_T1_ESB1 = NONVITALMAIN_DW.DO_CBTC_T1_ESB1;
  DO_CBTC_T1_PSD2 = NONVITALMAIN_DW.DO_CBTC_T1_PSD2;
  DO_CBTC_T1_PSD1 = NONVITALMAIN_DW.DO_CBTC_T1_PSD1;
  DO_CBTC_T1_ED4 = NONVITALMAIN_DW.DO_CBTC_T1_ED4;
  DO_CBTC_T1_ED3 = NONVITALMAIN_DW.DO_CBTC_T1_ED3;
  DO_CBTC_T1_ED2 = NONVITALMAIN_DW.DO_CBTC_T1_ED2;
  DO_CBTC_T1_ED1 = NONVITALMAIN_DW.DO_CBTC_T1_ED1;
  DO_PBE_FROM_DEP = NONVITALMAIN_DW.DO_PBE_FROM_DEP;
  DO_FLE_FROM_DEP = NONVITALMAIN_DW.DO_FLE_FROM_DEP;
  DO_FE_FROM_DEP = NONVITALMAIN_DW.DO_FE_FROM_DEP;
  DO_INDPB_X24 = NONVITALMAIN_DW.DO_INDPB_X24;
  DO_INDPB_X20 = NONVITALMAIN_DW.DO_INDPB_X20;
  DO_INDPB_X14 = NONVITALMAIN_DW.DO_INDPB_X14;
  DO_INDPB_X10 = NONVITALMAIN_DW.DO_INDPB_X10;
  DO_INDPB_JL20 = NONVITALMAIN_DW.DO_INDPB_JL20;
  DO_INDAR_JL20 = NONVITALMAIN_DW.DO_INDAR_JL20;
  DO_INDPB_JL10 = NONVITALMAIN_DW.DO_INDPB_JL10;
  DO_INDAR_JL10 = NONVITALMAIN_DW.DO_INDAR_JL10;
  DO_INDPB_J24 = NONVITALMAIN_DW.DO_INDPB_J24;
  DO_INDAR_J24 = NONVITALMAIN_DW.DO_INDAR_J24;
  DO_INDPB_J22B = NONVITALMAIN_DW.DO_INDPB_J22B;
  DO_INDAR_J22B = NONVITALMAIN_DW.DO_INDAR_J22B;
  DO_INDPB_J22A = NONVITALMAIN_DW.DO_INDPB_J22A;
  DO_INDAR_J22A = NONVITALMAIN_DW.DO_INDAR_J22A;
  DO_INDPB_J14 = NONVITALMAIN_DW.DO_INDPB_J14;
  DO_INDAR_J14 = NONVITALMAIN_DW.DO_INDAR_J14;
  DO_INDPB_J12B = NONVITALMAIN_DW.DO_INDPB_J12B;
  DO_INDAR_J12B = NONVITALMAIN_DW.DO_INDAR_J12B;
  DO_INDPB_J12A = NONVITALMAIN_DW.DO_INDPB_J12A;
  DO_INDAR_J12A = NONVITALMAIN_DW.DO_INDAR_J12A;
  DO_INDT_TE_24B = NONVITALMAIN_DW.DO_INDT_TE_24B;
  DO_INDT_RE_24B = NONVITALMAIN_DW.DO_INDT_RE_24B;
  DO_INDT_BE_24B = NONVITALMAIN_DW.DO_INDT_BE_24B;
  DO_INDT_TE_24A = NONVITALMAIN_DW.DO_INDT_TE_24A;
  DO_INDT_RE_24A = NONVITALMAIN_DW.DO_INDT_RE_24A;
  DO_INDT_BE_24A = NONVITALMAIN_DW.DO_INDT_BE_24A;
  DO_INDT_TE_23B = NONVITALMAIN_DW.DO_INDT_TE_23B;
  DO_INDT_RE_23B = NONVITALMAIN_DW.DO_INDT_RE_23B;
  DO_INDT_BE_23B = NONVITALMAIN_DW.DO_INDT_BE_23B;
  DO_INDT_TE_23A = NONVITALMAIN_DW.DO_INDT_TE_23A;
  DO_INDT_RE_23A = NONVITALMAIN_DW.DO_INDT_RE_23A;
  DO_INDT_BE_23A = NONVITALMAIN_DW.DO_INDT_BE_23A;
  DO_INDT_TE_22E = NONVITALMAIN_DW.DO_INDT_TE_22E;
  DO_INDT_RE_22E = NONVITALMAIN_DW.DO_INDT_RE_22E;
  DO_INDT_BE_22E = NONVITALMAIN_DW.DO_INDT_BE_22E;
  DO_INDT_TE_22D = NONVITALMAIN_DW.DO_INDT_TE_22D;
  DO_INDT_RE_22D = NONVITALMAIN_DW.DO_INDT_RE_22D;
  DO_INDT_BE_22D = NONVITALMAIN_DW.DO_INDT_BE_22D;
  DO_INDT_TE_22C = NONVITALMAIN_DW.DO_INDT_TE_22C;
  DO_INDT_RE_22C = NONVITALMAIN_DW.DO_INDT_RE_22C;
  DO_INDT_BE_22C = NONVITALMAIN_DW.DO_INDT_BE_22C;
  DO_INDT_TE_22B = NONVITALMAIN_DW.DO_INDT_TE_22B;
  DO_INDT_RE_22B = NONVITALMAIN_DW.DO_INDT_RE_22B;
  DO_INDT_BE_22B = NONVITALMAIN_DW.DO_INDT_BE_22B;
  DO_INDT_TE_22A = NONVITALMAIN_DW.DO_INDT_TE_22A;
  DO_INDT_RE_22A = NONVITALMAIN_DW.DO_INDT_RE_22A;
  DO_INDT_BE_22A = NONVITALMAIN_DW.DO_INDT_BE_22A;
  DO_INDT_TE_21C = NONVITALMAIN_DW.DO_INDT_TE_21C;
  DO_INDT_RE_21C = NONVITALMAIN_DW.DO_INDT_RE_21C;
  DO_INDT_BE_21C = NONVITALMAIN_DW.DO_INDT_BE_21C;
  DO_INDT_TE_21B = NONVITALMAIN_DW.DO_INDT_TE_21B;
  DO_INDT_RE_21B = NONVITALMAIN_DW.DO_INDT_RE_21B;
  DO_INDT_BE_21B = NONVITALMAIN_DW.DO_INDT_BE_21B;
  DO_INDT_TE_21A = NONVITALMAIN_DW.DO_INDT_TE_21A;
  DO_INDT_RE_21A = NONVITALMAIN_DW.DO_INDT_RE_21A;
  DO_INDT_BE_21A = NONVITALMAIN_DW.DO_INDT_BE_21A;
  DO_INDT_TE_20B = NONVITALMAIN_DW.DO_INDT_TE_20B;
  DO_INDT_RE_20B = NONVITALMAIN_DW.DO_INDT_RE_20B;
  DO_INDT_BE_20B = NONVITALMAIN_DW.DO_INDT_BE_20B;
  DO_INDT_TE_20A = NONVITALMAIN_DW.DO_INDT_TE_20A;
  DO_INDT_RE_20A = NONVITALMAIN_DW.DO_INDT_RE_20A;
  DO_INDT_BE_20A = NONVITALMAIN_DW.DO_INDT_BE_20A;
  DO_INDT_TE_14B = NONVITALMAIN_DW.DO_INDT_TE_14B;
  DO_INDT_RE_14B = NONVITALMAIN_DW.DO_INDT_RE_14B;
  DO_INDT_BE_14B = NONVITALMAIN_DW.DO_INDT_BE_14B;
  DO_INDT_TE_14A = NONVITALMAIN_DW.DO_INDT_TE_14A;
  DO_INDT_RE_14A = NONVITALMAIN_DW.DO_INDT_RE_14A;
  DO_INDT_BE_14A = NONVITALMAIN_DW.DO_INDT_BE_14A;
  DO_INDT_TE_13B = NONVITALMAIN_DW.DO_INDT_TE_13B;
  DO_INDT_RE_13B = NONVITALMAIN_DW.DO_INDT_RE_13B;
  DO_INDT_BE_13B = NONVITALMAIN_DW.DO_INDT_BE_13B;
  DO_INDT_TE_13A = NONVITALMAIN_DW.DO_INDT_TE_13A;
  DO_INDT_RE_13A = NONVITALMAIN_DW.DO_INDT_RE_13A;
  DO_INDT_BE_13A = NONVITALMAIN_DW.DO_INDT_BE_13A;
  DO_INDT_TE_12E = NONVITALMAIN_DW.DO_INDT_TE_12E;
  DO_INDT_RE_12E = NONVITALMAIN_DW.DO_INDT_RE_12E;
  DO_INDT_BE_12E = NONVITALMAIN_DW.DO_INDT_BE_12E;
  DO_INDT_TE_12D = NONVITALMAIN_DW.DO_INDT_TE_12D;
  DO_INDT_RE_12D = NONVITALMAIN_DW.DO_INDT_RE_12D;
  DO_INDT_BE_12D = NONVITALMAIN_DW.DO_INDT_BE_12D;
  DO_INDT_TE_12C = NONVITALMAIN_DW.DO_INDT_TE_12C;
  DO_INDT_RE_12C = NONVITALMAIN_DW.DO_INDT_RE_12C;
  DO_INDT_BE_12C = NONVITALMAIN_DW.DO_INDT_BE_12C;
  DO_INDT_TE_12B = NONVITALMAIN_DW.DO_INDT_TE_12B;
  DO_INDT_RE_12B = NONVITALMAIN_DW.DO_INDT_RE_12B;
  DO_INDT_BE_12B = NONVITALMAIN_DW.DO_INDT_BE_12B;
  DO_INDT_TE_12A = NONVITALMAIN_DW.DO_INDT_TE_12A;
  DO_INDT_RE_12A = NONVITALMAIN_DW.DO_INDT_RE_12A;
  DO_INDT_BE_12A = NONVITALMAIN_DW.DO_INDT_BE_12A;
  DO_INDT_TE_11B = NONVITALMAIN_DW.DO_INDT_TE_11B;
  DO_INDT_RE_11B = NONVITALMAIN_DW.DO_INDT_RE_11B;
  DO_INDT_BE_11B = NONVITALMAIN_DW.DO_INDT_BE_11B;
  DO_INDT_TE_11A = NONVITALMAIN_DW.DO_INDT_TE_11A;
  DO_INDT_RE_11A = NONVITALMAIN_DW.DO_INDT_RE_11A;
  DO_INDT_BE_11A = NONVITALMAIN_DW.DO_INDT_BE_11A;
  DO_INDT_TE_10B = NONVITALMAIN_DW.DO_INDT_TE_10B;
  DO_INDT_RE_10B = NONVITALMAIN_DW.DO_INDT_RE_10B;
  DO_INDT_BE_10B = NONVITALMAIN_DW.DO_INDT_BE_10B;
  DO_INDT_TE_10A = NONVITALMAIN_DW.DO_INDT_TE_10A;
  DO_INDT_RE_10A = NONVITALMAIN_DW.DO_INDT_RE_10A;
  DO_INDT_BE_10A = NONVITALMAIN_DW.DO_INDT_BE_10A;
  DO_INDSW_W23B_RWTE = NONVITALMAIN_DW.DO_INDSW_W23B_RWTE;
  DO_INDSW_W23B_RWRE = NONVITALMAIN_DW.DO_INDSW_W23B_RWRE;
  DO_INDSW_W23B_RWBE = NONVITALMAIN_DW.DO_INDSW_W23B_RWBE;
  DO_INDSW_W23B_RTE = NONVITALMAIN_DW.DO_INDSW_W23B_RTE;
  DO_INDSW_W23B_RRE = NONVITALMAIN_DW.DO_INDSW_W23B_RRE;
  DO_INDSW_W23B_RBE = NONVITALMAIN_DW.DO_INDSW_W23B_RBE;
  DO_INDSW_W23B_NWTE = NONVITALMAIN_DW.DO_INDSW_W23B_NWTE;
  DO_INDSW_W23B_NWRE = NONVITALMAIN_DW.DO_INDSW_W23B_NWRE;
  DO_INDSW_W23B_NWBE = NONVITALMAIN_DW.DO_INDSW_W23B_NWBE;
  DO_INDSW_W23B_NTE = NONVITALMAIN_DW.DO_INDSW_W23B_NTE;
  DO_INDSW_W23B_NRE = NONVITALMAIN_DW.DO_INDSW_W23B_NRE;
  DO_INDSW_W23B_NBE = NONVITALMAIN_DW.DO_INDSW_W23B_NBE;
  DO_INDSW_W23B_LE = NONVITALMAIN_DW.DO_INDSW_W23B_LE;
  DO_INDSW_W23B_BE = NONVITALMAIN_DW.DO_INDSW_W23B_BE;
  DO_INDSW_W23A_RWTE = NONVITALMAIN_DW.DO_INDSW_W23A_RWTE;
  DO_INDSW_W23A_RWRE = NONVITALMAIN_DW.DO_INDSW_W23A_RWRE;
  DO_INDSW_W23A_RWBE = NONVITALMAIN_DW.DO_INDSW_W23A_RWBE;
  DO_INDSW_W23A_RTE = NONVITALMAIN_DW.DO_INDSW_W23A_RTE;
  DO_INDSW_W23A_RRE = NONVITALMAIN_DW.DO_INDSW_W23A_RRE;
  DO_INDSW_W23A_RBE = NONVITALMAIN_DW.DO_INDSW_W23A_RBE;
  DO_INDSW_W23A_NWTE = NONVITALMAIN_DW.DO_INDSW_W23A_NWTE;
  DO_INDSW_W23A_NWRE = NONVITALMAIN_DW.DO_INDSW_W23A_NWRE;
  DO_INDSW_W23A_NWBE = NONVITALMAIN_DW.DO_INDSW_W23A_NWBE;
  DO_INDSW_W23A_NTE = NONVITALMAIN_DW.DO_INDSW_W23A_NTE;
  DO_INDSW_W23A_NRE = NONVITALMAIN_DW.DO_INDSW_W23A_NRE;
  DO_INDSW_W23A_NBE = NONVITALMAIN_DW.DO_INDSW_W23A_NBE;
  DO_INDSW_W23A_LE = NONVITALMAIN_DW.DO_INDSW_W23A_LE;
  DO_INDSW_W23A_BE = NONVITALMAIN_DW.DO_INDSW_W23A_BE;
  DO_INDSW_W21C_RWTE = NONVITALMAIN_DW.DO_INDSW_W21C_RWTE;
  DO_INDSW_W21C_RWRE = NONVITALMAIN_DW.DO_INDSW_W21C_RWRE;
  DO_INDSW_W21C_RWBE = NONVITALMAIN_DW.DO_INDSW_W21C_RWBE;
  DO_INDSW_W21C_RTE = NONVITALMAIN_DW.DO_INDSW_W21C_RTE;
  DO_INDSW_W21C_RRE = NONVITALMAIN_DW.DO_INDSW_W21C_RRE;
  DO_INDSW_W21C_RBE = NONVITALMAIN_DW.DO_INDSW_W21C_RBE;
  DO_INDSW_W21C_NWTE = NONVITALMAIN_DW.DO_INDSW_W21C_NWTE;
  DO_INDSW_W21C_NWRE = NONVITALMAIN_DW.DO_INDSW_W21C_NWRE;
  DO_INDSW_W21C_NWBE = NONVITALMAIN_DW.DO_INDSW_W21C_NWBE;
  DO_INDSW_W21C_LE = NONVITALMAIN_DW.DO_INDSW_W21C_LE;
  DO_INDSW_W21C_BE = NONVITALMAIN_DW.DO_INDSW_W21C_BE;
  DO_INDSW_W21B_RWTE = NONVITALMAIN_DW.DO_INDSW_W21B_RWTE;
  DO_INDSW_W21B_RWRE = NONVITALMAIN_DW.DO_INDSW_W21B_RWRE;
  DO_INDSW_W21B_RWBE = NONVITALMAIN_DW.DO_INDSW_W21B_RWBE;
  DO_INDSW_W21B_RTE = NONVITALMAIN_DW.DO_INDSW_W21B_RTE;
  DO_INDSW_W21B_RRE = NONVITALMAIN_DW.DO_INDSW_W21B_RRE;
  DO_INDSW_W21B_RBE = NONVITALMAIN_DW.DO_INDSW_W21B_RBE;
  DO_INDSW_W21B_NWTE = NONVITALMAIN_DW.DO_INDSW_W21B_NWTE;
  DO_INDSW_W21B_NWRE = NONVITALMAIN_DW.DO_INDSW_W21B_NWRE;
  DO_INDSW_W21B_NWBE = NONVITALMAIN_DW.DO_INDSW_W21B_NWBE;
  DO_INDSW_W21B_NTE = NONVITALMAIN_DW.DO_INDSW_W21B_NTE;
  DO_INDSW_W21B_NRE = NONVITALMAIN_DW.DO_INDSW_W21B_NRE;
  DO_INDSW_W21B_NBE = NONVITALMAIN_DW.DO_INDSW_W21B_NBE;
  DO_INDSW_W21B_LE = NONVITALMAIN_DW.DO_INDSW_W21B_LE;
  DO_INDSW_W21B_BE = NONVITALMAIN_DW.DO_INDSW_W21B_BE;
  DO_INDSW_W21A_RWTE = NONVITALMAIN_DW.DO_INDSW_W21A_RWTE;
  DO_INDSW_W21A_RWRE = NONVITALMAIN_DW.DO_INDSW_W21A_RWRE;
  DO_INDSW_W21A_RWBE = NONVITALMAIN_DW.DO_INDSW_W21A_RWBE;
  DO_INDSW_W21A_RTE = NONVITALMAIN_DW.DO_INDSW_W21A_RTE;
  DO_INDSW_W21A_RRE = NONVITALMAIN_DW.DO_INDSW_W21A_RRE;
  DO_INDSW_W21A_RBE = NONVITALMAIN_DW.DO_INDSW_W21A_RBE;
  DO_INDSW_W21A_NWTE = NONVITALMAIN_DW.DO_INDSW_W21A_NWTE;
  DO_INDSW_W21A_NWRE = NONVITALMAIN_DW.DO_INDSW_W21A_NWRE;
  DO_INDSW_W21A_NWBE = NONVITALMAIN_DW.DO_INDSW_W21A_NWBE;
  DO_INDSW_W21A_NTE = NONVITALMAIN_DW.DO_INDSW_W21A_NTE;
  DO_INDSW_W21A_NRE = NONVITALMAIN_DW.DO_INDSW_W21A_NRE;
  DO_INDSW_W21A_NBE = NONVITALMAIN_DW.DO_INDSW_W21A_NBE;
  DO_INDSW_W21A_LE = NONVITALMAIN_DW.DO_INDSW_W21A_LE;
  DO_INDSW_W21A_BE = NONVITALMAIN_DW.DO_INDSW_W21A_BE;
  DO_INDSW_W13B_RWTE = NONVITALMAIN_DW.DO_INDSW_W13B_RWTE;
  DO_INDSW_W13B_RWRE = NONVITALMAIN_DW.DO_INDSW_W13B_RWRE;
  DO_INDSW_W13B_RWBE = NONVITALMAIN_DW.DO_INDSW_W13B_RWBE;
  DO_INDSW_W13B_RTE = NONVITALMAIN_DW.DO_INDSW_W13B_RTE;
  DO_INDSW_W13B_RRE = NONVITALMAIN_DW.DO_INDSW_W13B_RRE;
  DO_INDSW_W13B_RBE = NONVITALMAIN_DW.DO_INDSW_W13B_RBE;
  DO_INDSW_W13B_NWTE = NONVITALMAIN_DW.DO_INDSW_W13B_NWTE;
  DO_INDSW_W13B_NWRE = NONVITALMAIN_DW.DO_INDSW_W13B_NWRE;
  DO_INDSW_W13B_NWBE = NONVITALMAIN_DW.DO_INDSW_W13B_NWBE;
  DO_INDSW_W13B_NTE = NONVITALMAIN_DW.DO_INDSW_W13B_NTE;
  DO_INDSW_W13B_NRE = NONVITALMAIN_DW.DO_INDSW_W13B_NRE;
  DO_INDSW_W13B_NBE = NONVITALMAIN_DW.DO_INDSW_W13B_NBE;
  DO_INDSW_W13B_LE = NONVITALMAIN_DW.DO_INDSW_W13B_LE;
  DO_INDSW_W13B_BE = NONVITALMAIN_DW.DO_INDSW_W13B_BE;
  DO_INDSW_W13A_RWTE = NONVITALMAIN_DW.DO_INDSW_W13A_RWTE;
  DO_INDSW_W13A_RWRE = NONVITALMAIN_DW.DO_INDSW_W13A_RWRE;
  DO_INDSW_W13A_RWBE = NONVITALMAIN_DW.DO_INDSW_W13A_RWBE;
  DO_INDSW_W13A_RTE = NONVITALMAIN_DW.DO_INDSW_W13A_RTE;
  DO_INDSW_W13A_RRE = NONVITALMAIN_DW.DO_INDSW_W13A_RRE;
  DO_INDSW_W13A_RBE = NONVITALMAIN_DW.DO_INDSW_W13A_RBE;
  DO_INDSW_W13A_NWTE = NONVITALMAIN_DW.DO_INDSW_W13A_NWTE;
  DO_INDSW_W13A_NWRE = NONVITALMAIN_DW.DO_INDSW_W13A_NWRE;
  DO_INDSW_W13A_NWBE = NONVITALMAIN_DW.DO_INDSW_W13A_NWBE;
  DO_INDSW_W13A_NTE = NONVITALMAIN_DW.DO_INDSW_W13A_NTE;
  DO_INDSW_W13A_NRE = NONVITALMAIN_DW.DO_INDSW_W13A_NRE;
  DO_INDSW_W13A_NBE = NONVITALMAIN_DW.DO_INDSW_W13A_NBE;
  DO_INDSW_W13A_LE = NONVITALMAIN_DW.DO_INDSW_W13A_LE;
  DO_INDSW_W13A_BE = NONVITALMAIN_DW.DO_INDSW_W13A_BE;
  DO_INDSW_W11B_RWTE = NONVITALMAIN_DW.DO_INDSW_W11B_RWTE;
  DO_INDSW_W11B_RWRE = NONVITALMAIN_DW.DO_INDSW_W11B_RWRE;
  DO_INDSW_W11B_RWBE = NONVITALMAIN_DW.DO_INDSW_W11B_RWBE;
  DO_INDSW_W11B_RTE = NONVITALMAIN_DW.DO_INDSW_W11B_RTE;
  DO_INDSW_W11B_RRE = NONVITALMAIN_DW.DO_INDSW_W11B_RRE;
  DO_INDSW_W11B_RBE = NONVITALMAIN_DW.DO_INDSW_W11B_RBE;
  DO_INDSW_W11B_NWTE = NONVITALMAIN_DW.DO_INDSW_W11B_NWTE;
  DO_INDSW_W11B_NWRE = NONVITALMAIN_DW.DO_INDSW_W11B_NWRE;
  DO_INDSW_W11B_NWBE = NONVITALMAIN_DW.DO_INDSW_W11B_NWBE;
  DO_INDSW_W11B_NTE = NONVITALMAIN_DW.DO_INDSW_W11B_NTE;
  DO_INDSW_W11B_NRE = NONVITALMAIN_DW.DO_INDSW_W11B_NRE;
  DO_INDSW_W11B_NBE = NONVITALMAIN_DW.DO_INDSW_W11B_NBE;
  DO_INDSW_W11B_LE = NONVITALMAIN_DW.DO_INDSW_W11B_LE;
  DO_INDSW_W11B_BE = NONVITALMAIN_DW.DO_INDSW_W11B_BE;
  DO_INDSW_W11A_RWTE = NONVITALMAIN_DW.DO_INDSW_W11A_RWTE;
  DO_INDSW_W11A_RWRE = NONVITALMAIN_DW.DO_INDSW_W11A_RWRE;
  DO_INDSW_W11A_RWBE = NONVITALMAIN_DW.DO_INDSW_W11A_RWBE;
  DO_INDSW_W11A_RTE = NONVITALMAIN_DW.DO_INDSW_W11A_RTE;
  DO_INDSW_W11A_RRE = NONVITALMAIN_DW.DO_INDSW_W11A_RRE;
  DO_INDSW_W11A_RBE = NONVITALMAIN_DW.DO_INDSW_W11A_RBE;
  DO_INDSW_W11A_NWTE = NONVITALMAIN_DW.DO_INDSW_W11A_NWTE;
  DO_INDSW_W11A_NWRE = NONVITALMAIN_DW.DO_INDSW_W11A_NWRE;
  DO_INDSW_W11A_NWBE = NONVITALMAIN_DW.DO_INDSW_W11A_NWBE;
  DO_INDSW_W11A_NTE = NONVITALMAIN_DW.DO_INDSW_W11A_NTE;
  DO_INDSW_W11A_NRE = NONVITALMAIN_DW.DO_INDSW_W11A_NRE;
  DO_INDSW_W11A_NBE = NONVITALMAIN_DW.DO_INDSW_W11A_NBE;
  DO_INDSW_W11A_LE = NONVITALMAIN_DW.DO_INDSW_W11A_LE;
  DO_INDSW_W11A_BE = NONVITALMAIN_DW.DO_INDSW_W11A_BE;
  DO_INDJ_20_WGE = NONVITALMAIN_DW.DO_INDJ_20_WGE;
  DO_INDJ_20_RGE = NONVITALMAIN_DW.DO_INDJ_20_RGE;
  DO_INDJ_20_CGE = NONVITALMAIN_DW.DO_INDJ_20_CGE;
  DO_INDJ_10_WGE = NONVITALMAIN_DW.DO_INDJ_10_WGE;
  DO_INDJ_10_RGE = NONVITALMAIN_DW.DO_INDJ_10_RGE;
  DO_INDJ_10_CGE = NONVITALMAIN_DW.DO_INDJ_10_CGE;
  DO_INDJ_24_RGE = NONVITALMAIN_DW.DO_INDJ_24_RGE;
  DO_INDJ_24_CGE = NONVITALMAIN_DW.DO_INDJ_24_CGE;
  DO_INDJ_22B_RGE = NONVITALMAIN_DW.DO_INDJ_22B_RGE;
  DO_INDJ_22B_CGE = NONVITALMAIN_DW.DO_INDJ_22B_CGE;
  DO_INDJ_22A_RGE = NONVITALMAIN_DW.DO_INDJ_22A_RGE;
  DO_INDJ_22A_CGE = NONVITALMAIN_DW.DO_INDJ_22A_CGE;
  DO_INDJ_14_RGE = NONVITALMAIN_DW.DO_INDJ_14_RGE;
  DO_INDJ_14_CGE = NONVITALMAIN_DW.DO_INDJ_14_CGE;
  DO_INDJ_12B_RGE = NONVITALMAIN_DW.DO_INDJ_12B_RGE;
  DO_INDJ_12B_CGE = NONVITALMAIN_DW.DO_INDJ_12B_CGE;
  DO_INDJ_12A_RGE = NONVITALMAIN_DW.DO_INDJ_12A_RGE;
  DO_INDJ_12A_CGE = NONVITALMAIN_DW.DO_INDJ_12A_CGE;
  DO_INDG_TPR_BANTU = NONVITALMAIN_DW.DO_INDG_TPR_BANTU;
  DO_INDG_SYS2_FAIL = NONVITALMAIN_DW.DO_INDG_SYS2_FAIL;
  DO_INDG_SYS1_FAIL = NONVITALMAIN_DW.DO_INDG_SYS1_FAIL;
  DO_INDG_POINT = NONVITALMAIN_DW.DO_INDG_POINT;
  DO_INDG_COMM2_FAIL = NONVITALMAIN_DW.DO_INDG_COMM2_FAIL;
  DO_INDG_COMM1_FAIL = NONVITALMAIN_DW.DO_INDG_COMM1_FAIL;
  DO_INDG_BUZZ = NONVITALMAIN_DW.DO_INDG_BUZZ;
  M_CTRL_VSB9 = NONVITALMAIN_DW.M_CTRL_VSB9;
  M_CTRL_VSB8 = NONVITALMAIN_DW.M_CTRL_VSB8;
  M_CTRL_VSB7 = NONVITALMAIN_DW.M_CTRL_VSB7;
  M_CTRL_VSB6 = NONVITALMAIN_DW.M_CTRL_VSB6;
  M_CTRL_VSB5 = NONVITALMAIN_DW.M_CTRL_VSB5;
  M_CTRL_VSB4 = NONVITALMAIN_DW.M_CTRL_VSB4;
  M_CTRL_VSB3 = NONVITALMAIN_DW.M_CTRL_VSB3;
  M_CTRL_VSB27 = NONVITALMAIN_DW.M_CTRL_VSB27;
  M_CTRL_VSB26 = NONVITALMAIN_DW.M_CTRL_VSB26;
  M_CTRL_VSB25 = NONVITALMAIN_DW.M_CTRL_VSB25;
  M_CTRL_VSB24 = NONVITALMAIN_DW.M_CTRL_VSB24;
  M_CTRL_VSB23 = NONVITALMAIN_DW.M_CTRL_VSB23;
  M_CTRL_VSB22 = NONVITALMAIN_DW.M_CTRL_VSB22;
  M_CTRL_VSB21 = NONVITALMAIN_DW.M_CTRL_VSB21;
  M_CTRL_VSB20 = NONVITALMAIN_DW.M_CTRL_VSB20;
  M_CTRL_VSB2 = NONVITALMAIN_DW.M_CTRL_VSB2;
  M_CTRL_VSB19 = NONVITALMAIN_DW.M_CTRL_VSB19;
  M_CTRL_VSB18 = NONVITALMAIN_DW.M_CTRL_VSB18;
  M_CTRL_VSB17 = NONVITALMAIN_DW.M_CTRL_VSB17;
  M_CTRL_VSB16 = NONVITALMAIN_DW.M_CTRL_VSB16;
  M_CTRL_VSB15 = NONVITALMAIN_DW.M_CTRL_VSB15;
  M_CTRL_VSB14 = NONVITALMAIN_DW.M_CTRL_VSB14;
  M_CTRL_VSB13 = NONVITALMAIN_DW.M_CTRL_VSB13;
  M_CTRL_VSB12 = NONVITALMAIN_DW.M_CTRL_VSB12;
  M_CTRL_VSB11 = NONVITALMAIN_DW.M_CTRL_VSB11;
  M_CTRL_VSB10 = NONVITALMAIN_DW.M_CTRL_VSB10;
  M_CTRL_VSB1 = NONVITALMAIN_DW.M_CTRL_VSB1;
  M_REQ_S_20_DEP = NONVITALMAIN_DW.M_REQ_S_20_DEP;
  M_REQ_S_10_DEP = NONVITALMAIN_DW.M_REQ_S_10_DEP;
  M_REQ_S_DEP_20 = NONVITALMAIN_DW.M_REQ_S_DEP_20;
  M_REQ_S_DEP_10 = NONVITALMAIN_DW.M_REQ_S_DEP_10;
  M_CTRL_RST_20 = NONVITALMAIN_DW.M_CTRL_RST_20;
  M_CTRL_RST_10 = NONVITALMAIN_DW.M_CTRL_RST_10;
  M_CTRL_RST_24 = NONVITALMAIN_DW.M_CTRL_RST_24;
  M_CTRL_RST_22B = NONVITALMAIN_DW.M_CTRL_RST_22B;
  M_CTRL_RST_22A = NONVITALMAIN_DW.M_CTRL_RST_22A;
  M_CTRL_RST_14 = NONVITALMAIN_DW.M_CTRL_RST_14;
  M_CTRL_RST_12B = NONVITALMAIN_DW.M_CTRL_RST_12B;
  M_CTRL_RST_12A = NONVITALMAIN_DW.M_CTRL_RST_12A;
  M_CTRL_RST_DEP = NONVITALMAIN_DW.M_CTRL_RST_DEP;
  M_W21C_SWINIT = NONVITALMAIN_DW.M_W21C_SWINIT;
  M_W13B_23B_SWINIT = NONVITALMAIN_DW.M_W13B_23B_SWINIT;
  M_W13A_23A_SWINIT = NONVITALMAIN_DW.M_W13A_23A_SWINIT;
  M_W11B_21B_SWINIT = NONVITALMAIN_DW.M_W11B_21B_SWINIT;
  M_W11A_21A_SWINIT = NONVITALMAIN_DW.M_W11A_21A_SWINIT;
  M_W21C_CTRL_SWRLS = NONVITALMAIN_DW.M_W21C_CTRL_SWRLS;
  M_W13B_23B_CTRL_SWRLS = NONVITALMAIN_DW.M_W13B_23B_CTRL_SWRLS;
  M_W13A_23A_CTRL_SWRLS = NONVITALMAIN_DW.M_W13A_23A_CTRL_SWRLS;
  M_W11B_21B_CTRL_SWRLS = NONVITALMAIN_DW.M_W11B_21B_CTRL_SWRLS;
  M_W11A_21A_CTRL_SWRLS = NONVITALMAIN_DW.M_W11A_21A_CTRL_SWRLS;
  M_CTRL_RRLS_24 = NONVITALMAIN_DW.M_CTRL_RRLS_24;
  M_CTRL_RRLS_20 = NONVITALMAIN_DW.M_CTRL_RRLS_20;
  M_CTRL_RRLS_14 = NONVITALMAIN_DW.M_CTRL_RRLS_14;
  M_CTRL_RRLS_10 = NONVITALMAIN_DW.M_CTRL_RRLS_10;
  M_CTRL_RRLS_22B = NONVITALMAIN_DW.M_CTRL_RRLS_22B;
  M_CTRL_RRLS_22A = NONVITALMAIN_DW.M_CTRL_RRLS_22A;
  M_CTRL_RRLS_12B = NONVITALMAIN_DW.M_CTRL_RRLS_12B;
  M_CTRL_RRLS_12A = NONVITALMAIN_DW.M_CTRL_RRLS_12A;
  M_W21C_OOC = NONVITALMAIN_DW.M_W21C_OOC;
  M_W13B_23B_OOC = NONVITALMAIN_DW.M_W13B_23B_OOC;
  M_W13A_23A_OOC = NONVITALMAIN_DW.M_W13A_23A_OOC;
  M_W11B_21B_OOC = NONVITALMAIN_DW.M_W11B_21B_OOC;
  M_W11A_21A_OOC = NONVITALMAIN_DW.M_W11A_21A_OOC;
  M_W21C_R_REQ = NONVITALMAIN_DW.M_W21C_R_REQ;
  M_W13B_23B_R_REQ = NONVITALMAIN_DW.M_W13B_23B_R_REQ;
  M_W13A_23A_R_REQ = NONVITALMAIN_DW.M_W13A_23A_R_REQ;
  M_W11B_21B_R_REQ = NONVITALMAIN_DW.M_W11B_21B_R_REQ;
  M_W11A_21A_R_REQ = NONVITALMAIN_DW.M_W11A_21A_R_REQ;
  M_W21C_N_REQ = NONVITALMAIN_DW.M_W21C_N_REQ;
  M_W13B_23B_N_REQ = NONVITALMAIN_DW.M_W13B_23B_N_REQ;
  M_W13A_23A_N_REQ = NONVITALMAIN_DW.M_W13A_23A_N_REQ;
  M_W11B_21B_N_REQ = NONVITALMAIN_DW.M_W11B_21B_N_REQ;
  M_W11A_21A_N_REQ = NONVITALMAIN_DW.M_W11A_21A_N_REQ;
  M_REQ_T_20_22 = NONVITALMAIN_DW.M_REQ_T_20_22;
  M_REQ_T_20_12 = NONVITALMAIN_DW.M_REQ_T_20_12;
  M_REQ_T_10_22 = NONVITALMAIN_DW.M_REQ_T_10_22;
  M_REQ_T_10_12 = NONVITALMAIN_DW.M_REQ_T_10_12;
  M_REQ_T_24_22 = NONVITALMAIN_DW.M_REQ_T_24_22;
  M_REQ_T_24_12 = NONVITALMAIN_DW.M_REQ_T_24_12;
  M_REQ_T_22_24 = NONVITALMAIN_DW.M_REQ_T_22_24;
  M_REQ_T_22_14 = NONVITALMAIN_DW.M_REQ_T_22_14;
  M_REQ_T_22_20 = NONVITALMAIN_DW.M_REQ_T_22_20;
  M_REQ_T_22_10 = NONVITALMAIN_DW.M_REQ_T_22_10;
  M_REQ_T_14_22 = NONVITALMAIN_DW.M_REQ_T_14_22;
  M_REQ_T_14_12 = NONVITALMAIN_DW.M_REQ_T_14_12;
  M_REQ_T_12_24 = NONVITALMAIN_DW.M_REQ_T_12_24;
  M_REQ_T_12_14 = NONVITALMAIN_DW.M_REQ_T_12_14;
  M_REQ_T_12_20 = NONVITALMAIN_DW.M_REQ_T_12_20;
  M_REQ_T_12_10 = NONVITALMAIN_DW.M_REQ_T_12_10;
  M_GV_RR = NONVITALMAIN_DW.M_GV_RR;
  M_CHK_NV_V = NONVITALMAIN_DW.M_CHK_NV_V;
  DO_INDSW_W21C_NTE = NONVITALMAIN_DW.DO_INDSW_W21C_NTE;
  DO_INDSW_W21C_NRE = NONVITALMAIN_DW.DO_INDSW_W21C_NRE;
  DO_INDSW_W21C_NBE = NONVITALMAIN_DW.DO_INDSW_W21C_NBE;
  M_RS_20_DEP = NONVITALMAIN_DW.M_RS_20_DEP;
  M_RS_10_DEP = NONVITALMAIN_DW.M_RS_10_DEP;
  M_GV_FLASH_1000 = NONVITALMAIN_DW.M_GV_FLASH_1000;
  M_RS_DEP_20 = NONVITALMAIN_DW.M_RS_DEP_20;
  M_RS_DEP_10 = NONVITALMAIN_DW.M_RS_DEP_10;
  M_CTRL_RRLS_DEP = NONVITALMAIN_DW.M_CTRL_RRLS_DEP;
  M_GV_AS = NONVITALMAIN_DW.M_GV_AS;
  DI_PBCBTC_WZ = NONVITALMAIN_DW.DI_PBCBTC_WZ;
  VSB9_c = NONVITALMAIN_DW.VSB9_c;
  VSB8_i = NONVITALMAIN_DW.VSB8_i_m;
  VSB7_f = NONVITALMAIN_DW.VSB7_f;
  VSB6_h = NONVITALMAIN_DW.VSB6_h;
  VSB5_n = NONVITALMAIN_DW.VSB5_n;
  VSB4_g = NONVITALMAIN_DW.VSB4_g;
  VSB3_l = NONVITALMAIN_DW.VSB3_l;
  VSB27_p = NONVITALMAIN_DW.VSB27_p;
  VSB26_l = NONVITALMAIN_DW.VSB26_l;
  VSB25_k = NONVITALMAIN_DW.VSB25_k;
  VSB24_a = NONVITALMAIN_DW.VSB24_a;
  VSB23_i = NONVITALMAIN_DW.VSB23_i;
  VSB22_c = NONVITALMAIN_DW.VSB22_c;
  VSB21_p = NONVITALMAIN_DW.VSB21_p;
  VSB20_c = NONVITALMAIN_DW.VSB20_c_c;
  VSB2_e = NONVITALMAIN_DW.VSB2_e_k;
  VSB19_d = NONVITALMAIN_DW.VSB19_d;
  VSB18_j = NONVITALMAIN_DW.VSB18_j;
  VSB17_c = NONVITALMAIN_DW.VSB17_c;
  VSB16_h = NONVITALMAIN_DW.VSB16_h_c;
  VSB15_h = NONVITALMAIN_DW.VSB15_h;
  VSB14_o = NONVITALMAIN_DW.VSB14_o;
  VSB13_d = NONVITALMAIN_DW.VSB13_d;
  VSB12_l = NONVITALMAIN_DW.VSB12_l;
  VSB11_c = NONVITALMAIN_DW.VSB11_c;
  VSB10_j = NONVITALMAIN_DW.VSB10_j;
  VSB1_g = NONVITALMAIN_DW.VSB1_g;
  DI_GO_TO_DEPOT = NONVITALMAIN_DW.DI_GO_TO_DEPOT;
  DI_GO_FROM_DEPOT = NONVITALMAIN_DW.DI_GO_FROM_DEPOT;
  DI_PBW_21C = NONVITALMAIN_DW.DI_PBW_21C;
  DI_PBW_13B_23B = NONVITALMAIN_DW.DI_PBW_13B_23B;
  DI_PBW_13A_23A = NONVITALMAIN_DW.DI_PBW_13A_23A;
  DI_PBW_11B_21B = NONVITALMAIN_DW.DI_PBW_11B_21B;
  DI_PBW_11A_21A = NONVITALMAIN_DW.DI_PBW_11A_21A;
  DI_PBX_24 = NONVITALMAIN_DW.DI_PBX_24;
  DI_PBX_20 = NONVITALMAIN_DW.DI_PBX_20;
  DI_PBX_14 = NONVITALMAIN_DW.DI_PBX_14;
  DI_PBX_10 = NONVITALMAIN_DW.DI_PBX_10;
  DI_PBJ_20 = NONVITALMAIN_DW.DI_PBJ_20;
  DI_PBJ_10 = NONVITALMAIN_DW.DI_PBJ_10;
  DI_PBJ_24 = NONVITALMAIN_DW.DI_PBJ_24;
  DI_PBJ_22B = NONVITALMAIN_DW.DI_PBJ_22B;
  DI_PBJ_22A = NONVITALMAIN_DW.DI_PBJ_22A;
  DI_PBJ_14 = NONVITALMAIN_DW.DI_PBJ_14;
  DI_PBJ_12B = NONVITALMAIN_DW.DI_PBJ_12B;
  DI_PBJ_12A = NONVITALMAIN_DW.DI_PBJ_12A;
  DI_PBR_TPR = NONVITALMAIN_DW.DI_PBR_TPR;
  DI_PBSW_TWT = NONVITALMAIN_DW.DI_PBSW_TWT;
  DI_PBSW_TKW = NONVITALMAIN_DW.DI_PBSW_TKW;
  DI_PBSW_TKGW = NONVITALMAIN_DW.DI_PBSW_TKGW;
  DI_PBSW_TBW = NONVITALMAIN_DW.DI_PBSW_TBW;
  DI_PBSW_TBKW = NONVITALMAIN_DW.DI_PBSW_TBKW;
  DI_PBG_THB = NONVITALMAIN_DW.DI_PBG_THB;
  DI_PBG_OTOMATIS = NONVITALMAIN_DW.DI_PBG_OTOMATIS;
  DI_PBG_MANUAL = NONVITALMAIN_DW.DI_PBG_MANUAL;
  RDEP20PBCTRL = NONVITALMAIN_DW.RDEP20PBCTRL;
  RDEP20PBRST = NONVITALMAIN_DW.RDEP20PBRST;
  RDEP10PBCTRL = NONVITALMAIN_DW.RDEP10PBCTRL;
  RDEP10PBRST = NONVITALMAIN_DW.RDEP10PBRST;
  R2012PBRST = NONVITALMAIN_DW.R2012PBRST;
  R1422PBRST = NONVITALMAIN_DW.R1422PBRST;
  R1412PBRST = NONVITALMAIN_DW.R1412PBRST;
  R1224PBCTRL = NONVITALMAIN_DW.R1224PBCTRL;
  R1220PBRST = NONVITALMAIN_DW.R1220PBRST;
  R1214PBRST = NONVITALMAIN_DW.R1214PBRST;
  R1210PBRST = NONVITALMAIN_DW.R1210PBRST;
  R2422PBCTRL = NONVITALMAIN_DW.R2422PBCTRL;
  R2412PBCTRL = NONVITALMAIN_DW.R2412PBCTRL;
  R2224PBCTRL = NONVITALMAIN_DW.R2224PBCTRL;
  R2220PBCTRL = NONVITALMAIN_DW.R2220PBCTRL;
  R2214PBCTRL = NONVITALMAIN_DW.R2214PBCTRL;
  R2210PBCTRL = NONVITALMAIN_DW.R2210PBCTRL;
  R20DEPPBRST = NONVITALMAIN_DW.R20DEPPBRST;
  R20DEPPBCTRL = NONVITALMAIN_DW.R20DEPPBCTRL;
  R2022PBCTRL = NONVITALMAIN_DW.R2022PBCTRL;
  R2012PBCTRL = NONVITALMAIN_DW.R2012PBCTRL;
  R1022PBRST = NONVITALMAIN_DW.R1022PBRST;
  R2422PBRST = NONVITALMAIN_DW.R2422PBRST;
  R2412PBRST = NONVITALMAIN_DW.R2412PBRST;
  R1422PBCTRL = NONVITALMAIN_DW.R1422PBCTRL;
  R1412PBCTRL = NONVITALMAIN_DW.R1412PBCTRL;
  R2224PBRST = NONVITALMAIN_DW.R2224PBRST;
  R2220PBRST = NONVITALMAIN_DW.R2220PBRST;
  R1220PBCTRL = NONVITALMAIN_DW.R1220PBCTRL;
  R1214PBCTRL = NONVITALMAIN_DW.R1214PBCTRL;
  R1210PBCTRL = NONVITALMAIN_DW.R1210PBCTRL;
  R2214PBRST = NONVITALMAIN_DW.R2214PBRST;
  R2210PBRST = NONVITALMAIN_DW.R2210PBRST;
  R10DEPPBRST = NONVITALMAIN_DW.R10DEPPBRST;
  R10DEPPBCTRL = NONVITALMAIN_DW.R10DEPPBCTRL;
  R1022PBCTRL = NONVITALMAIN_DW.R1022PBCTRL;
  R1012PBCTRL = NONVITALMAIN_DW.R1012PBCTRL;
  R2022PBRST = NONVITALMAIN_DW.R2022PBRST;
  R1012PBRST = NONVITALMAIN_DW.R1012PBRST;
  CBI_FAIL_SYSTEM2 = NONVITALMAIN_DW.CBI_FAIL_SYSTEM2;
  CBI_FAIL_SYSTEM1 = NONVITALMAIN_DW.CBI_FAIL_SYSTEM1;
  CBI_FAIL_COMM2 = NONVITALMAIN_DW.CBI_FAIL_COMM2;
  CBI_FAIL_COMM1 = NONVITALMAIN_DW.CBI_FAIL_COMM1;
  M_CBTC_T3_PSD2 = NONVITALMAIN_DW.M_CBTC_T3_PSD2;
  M_CBTC_T3_PSD1 = NONVITALMAIN_DW.M_CBTC_T3_PSD1;
  M_CBTC_T2_PSD2 = NONVITALMAIN_DW.M_CBTC_T2_PSD2;
  M_CBTC_T2_PSD1 = NONVITALMAIN_DW.M_CBTC_T2_PSD1;
  M_CBTC_TIB_PSD2 = NONVITALMAIN_DW.M_CBTC_TIB_PSD2;
  M_CBTC_TIB_PSD1 = NONVITALMAIN_DW.M_CBTC_TIB_PSD1;
  M_CBTC_T1_PSD2 = NONVITALMAIN_DW.M_CBTC_T1_PSD2;
  M_CBTC_T1_PSD1 = NONVITALMAIN_DW.M_CBTC_T1_PSD1;
  M_CBTC_T3_ESB2 = NONVITALMAIN_DW.M_CBTC_T3_ESB2;
  M_CBTC_T3_ESB1 = NONVITALMAIN_DW.M_CBTC_T3_ESB1;
  M_CBTC_T2_ESB2 = NONVITALMAIN_DW.M_CBTC_T2_ESB2;
  M_CBTC_T2_ESB1 = NONVITALMAIN_DW.M_CBTC_T2_ESB1;
  M_CBTC_TIB_ESB2 = NONVITALMAIN_DW.M_CBTC_TIB_ESB2;
  M_CBTC_TIB_ESB1 = NONVITALMAIN_DW.M_CBTC_TIB_ESB1;
  M_CBTC_T1_ESB2 = NONVITALMAIN_DW.M_CBTC_T1_ESB2;
  M_CBTC_T1_ESB1 = NONVITALMAIN_DW.M_CBTC_T1_ESB1;
  M_CBTC_T2_ED1 = NONVITALMAIN_DW.M_CBTC_T2_ED1;
  M_CBTC_TIB_ED4 = NONVITALMAIN_DW.M_CBTC_TIB_ED4;
  M_CBTC_TIB_ED3 = NONVITALMAIN_DW.M_CBTC_TIB_ED3;
  M_CBTC_TIB_ED2 = NONVITALMAIN_DW.M_CBTC_TIB_ED2;
  M_CBTC_TIB_ED1 = NONVITALMAIN_DW.M_CBTC_TIB_ED1;
  M_CBTC_T1_ED4 = NONVITALMAIN_DW.M_CBTC_T1_ED4;
  M_CBTC_T1_ED3 = NONVITALMAIN_DW.M_CBTC_T1_ED3;
  M_CBTC_T1_ED2 = NONVITALMAIN_DW.M_CBTC_T1_ED2;
  M_CBTC_T3_ED4 = NONVITALMAIN_DW.M_CBTC_T3_ED4;
  M_CBTC_T3_ED3 = NONVITALMAIN_DW.M_CBTC_T3_ED3;
  M_CBTC_T3_ED2 = NONVITALMAIN_DW.M_CBTC_T3_ED2;
  M_CBTC_T3_ED1 = NONVITALMAIN_DW.M_CBTC_T3_ED1;
  M_CBTC_T2_ED4 = NONVITALMAIN_DW.M_CBTC_T2_ED4;
  M_CBTC_T2_ED3 = NONVITALMAIN_DW.M_CBTC_T2_ED3;
  M_CBTC_T2_ED2 = NONVITALMAIN_DW.M_CBTC_T2_ED2;
  M_CBTC_T1_ED1 = NONVITALMAIN_DW.M_CBTC_T1_ED1;
  M_RRLS_X24 = NONVITALMAIN_DW.M_RRLS_X24;
  M_RRLS_X20 = NONVITALMAIN_DW.M_RRLS_X20;
  M_RRLS_X14 = NONVITALMAIN_DW.M_RRLS_X14;
  M_RRLS_X10 = NONVITALMAIN_DW.M_RRLS_X10;
  M_RRLS_J22B = NONVITALMAIN_DW.M_RRLS_J22B;
  M_RRLS_J22A = NONVITALMAIN_DW.M_RRLS_J22A;
  M_RRLS_J12B = NONVITALMAIN_DW.M_RRLS_J12B;
  M_RRLS_J12A = NONVITALMAIN_DW.M_RRLS_J12A;
  M_AS_S_JL20 = NONVITALMAIN_DW.M_AS_S_JL20;
  M_AS_S_JL10 = NONVITALMAIN_DW.M_AS_S_JL10;
  M_AS_S_DEP = NONVITALMAIN_DW.M_AS_S_DEP;
  M_AS_T_JL20 = NONVITALMAIN_DW.M_AS_T_JL20;
  M_AS_T_JL10 = NONVITALMAIN_DW.M_AS_T_JL10;
  M_AS_T_J24 = NONVITALMAIN_DW.M_AS_T_J24;
  M_AS_T_J22B = NONVITALMAIN_DW.M_AS_T_J22B;
  M_AS_T_J22A = NONVITALMAIN_DW.M_AS_T_J22A;
  M_AS_T_J14 = NONVITALMAIN_DW.M_AS_T_J14;
  M_AS_T_J12B = NONVITALMAIN_DW.M_AS_T_J12B;
  M_AS_T_J12A = NONVITALMAIN_DW.M_AS_T_J12A;
  M_DO_JL20_GR = NONVITALMAIN_DW.M_DO_JL20_GR;
  M_DO_JL10_GR = NONVITALMAIN_DW.M_DO_JL10_GR;
  M_DO_JL20_DR = NONVITALMAIN_DW.M_DO_JL20_DR;
  M_DO_JL10_DR = NONVITALMAIN_DW.M_DO_JL10_DR;
  M_DO_J24_DR = NONVITALMAIN_DW.M_DO_J24_DR;
  M_DO_J22B_DR = NONVITALMAIN_DW.M_DO_J22B_DR;
  M_DO_J22A_DR = NONVITALMAIN_DW.M_DO_J22A_DR;
  M_DO_J14_DR = NONVITALMAIN_DW.M_DO_J14_DR;
  M_DO_J12B_DR = NONVITALMAIN_DW.M_DO_J12B_DR;
  M_DO_J12A_DR = NONVITALMAIN_DW.M_DO_J12A_DR;
  M_W21C_TPZ = NONVITALMAIN_DW.M_W21C_TPZ;
  M_W13B_23B_TPZ = NONVITALMAIN_DW.M_W13B_23B_TPZ;
  M_W13A_23A_TPZ = NONVITALMAIN_DW.M_W13A_23A_TPZ;
  M_W11B_21B_TPZ = NONVITALMAIN_DW.M_W11B_21B_TPZ;
  M_W11A_21A_TPZ = NONVITALMAIN_DW.M_W11A_21A_TPZ;
  M_W21C_SWRLS = NONVITALMAIN_DW.M_W21C_SWRLS;
  M_W13B_23B_SWRLS = NONVITALMAIN_DW.M_W13B_23B_SWRLS;
  M_W13A_23A_SWRLS = NONVITALMAIN_DW.M_W13A_23A_SWRLS;
  M_W11B_21B_SWRLS = NONVITALMAIN_DW.M_W11B_21B_SWRLS;
  M_W11A_21A_SWRLS = NONVITALMAIN_DW.M_W11A_21A_SWRLS;
  M_W21C_LS = NONVITALMAIN_DW.M_W21C_LS;
  M_W13B_23B_LS = NONVITALMAIN_DW.M_W13B_23B_LS;
  M_W13A_23A_LS = NONVITALMAIN_DW.M_W13A_23A_LS;
  M_W11B_21B_LS = NONVITALMAIN_DW.M_W11B_21B_LS;
  M_W11A_21A_LS = NONVITALMAIN_DW.M_W11A_21A_LS;
  M_W21C_L = NONVITALMAIN_DW.M_W21C_L;
  M_W13B_23B_L = NONVITALMAIN_DW.M_W13B_23B_L;
  M_W13A_23A_L = NONVITALMAIN_DW.M_W13A_23A_L;
  M_W11B_21B_L = NONVITALMAIN_DW.M_W11B_21B_L;
  M_W11A_21A_L = NONVITALMAIN_DW.M_W11A_21A_L;
  M_W21C_RW_TE = NONVITALMAIN_DW.M_W21C_RW_TE;
  M_W13B_23B_RW_TE = NONVITALMAIN_DW.M_W13B_23B_RW_TE;
  M_W13A_23A_RW_TE = NONVITALMAIN_DW.M_W13A_23A_RW_TE;
  M_W11B_21B_RW_TE = NONVITALMAIN_DW.M_W11B_21B_RW_TE;
  M_W11A_21A_RW_TE = NONVITALMAIN_DW.M_W11A_21A_RW_TE;
  M_W21C_RWZ = NONVITALMAIN_DW.M_W21C_RWZ;
  M_W13B_23B_RWZ = NONVITALMAIN_DW.M_W13B_23B_RWZ;
  M_W13A_23A_RWZ = NONVITALMAIN_DW.M_W13A_23A_RWZ;
  M_W11B_21B_RWZ = NONVITALMAIN_DW.M_W11B_21B_RWZ;
  M_W11A_21A_RWZ = NONVITALMAIN_DW.M_W11A_21A_RWZ;
  M_W21C_RWP = NONVITALMAIN_DW.M_W21C_RWP;
  M_W13B_23B_RWP = NONVITALMAIN_DW.M_W13B_23B_RWP;
  M_W13A_23A_RWP = NONVITALMAIN_DW.M_W13A_23A_RWP;
  M_W11B_21B_RWP = NONVITALMAIN_DW.M_W11B_21B_RWP;
  M_W11A_21A_RWP = NONVITALMAIN_DW.M_W11A_21A_RWP;
  M_W21C_RWC = NONVITALMAIN_DW.M_W21C_RWC;
  M_W13B_23B_RWC = NONVITALMAIN_DW.M_W13B_23B_RWC;
  M_W13A_23A_RWC = NONVITALMAIN_DW.M_W13A_23A_RWC;
  M_W11B_21B_RWC = NONVITALMAIN_DW.M_W11B_21B_RWC;
  M_W11A_21A_RWC = NONVITALMAIN_DW.M_W11A_21A_RWC;
  M_W21C_NW_TE = NONVITALMAIN_DW.M_W21C_NW_TE;
  M_W13B_23B_NW_TE = NONVITALMAIN_DW.M_W13B_23B_NW_TE;
  M_W13A_23A_NW_TE = NONVITALMAIN_DW.M_W13A_23A_NW_TE;
  M_W11B_21B_NW_TE = NONVITALMAIN_DW.M_W11B_21B_NW_TE;
  M_W11A_21A_NW_TE = NONVITALMAIN_DW.M_W11A_21A_NW_TE;
  M_W21C_NWZ = NONVITALMAIN_DW.M_W21C_NWZ;
  M_W13B_23B_NWZ = NONVITALMAIN_DW.M_W13B_23B_NWZ;
  M_W13A_23A_NWZ = NONVITALMAIN_DW.M_W13A_23A_NWZ;
  M_W11B_21B_NWZ = NONVITALMAIN_DW.M_W11B_21B_NWZ;
  M_W11A_21A_NWZ = NONVITALMAIN_DW.M_W11A_21A_NWZ;
  M_W21C_NWP = NONVITALMAIN_DW.M_W21C_NWP;
  M_W13B_23B_NWP = NONVITALMAIN_DW.M_W13B_23B_NWP;
  M_W13A_23A_NWP = NONVITALMAIN_DW.M_W13A_23A_NWP;
  M_W11B_21B_NWP = NONVITALMAIN_DW.M_W11B_21B_NWP;
  M_W11A_21A_NWP = NONVITALMAIN_DW.M_W11A_21A_NWP;
  M_W21C_NWC = NONVITALMAIN_DW.M_W21C_NWC;
  M_W13B_23B_NWC = NONVITALMAIN_DW.M_W13B_23B_NWC;
  M_W13A_23A_NWC = NONVITALMAIN_DW.M_W13A_23A_NWC;
  M_W11B_21B_NWC = NONVITALMAIN_DW.M_W11B_21B_NWC;
  M_W11A_21A_NWC = NONVITALMAIN_DW.M_W11A_21A_NWC;
  M_S_WS_21C = NONVITALMAIN_DW.M_S_WS_21C;
  M_S_WS_21B = NONVITALMAIN_DW.M_S_WS_21B;
  M_S_WS_21A = NONVITALMAIN_DW.M_S_WS_21A;
  M_S_WS_20B = NONVITALMAIN_DW.M_S_WS_20B;
  M_S_WS_20A = NONVITALMAIN_DW.M_S_WS_20A;
  M_S_WS_11B = NONVITALMAIN_DW.M_S_WS_11B;
  M_S_WS_11A = NONVITALMAIN_DW.M_S_WS_11A;
  M_S_WS_10B = NONVITALMAIN_DW.M_S_WS_10B;
  M_S_WS_10A = NONVITALMAIN_DW.M_S_WS_10A;
  M_S_ES_21C = NONVITALMAIN_DW.M_S_ES_21C;
  M_S_ES_21B = NONVITALMAIN_DW.M_S_ES_21B;
  M_S_ES_21A = NONVITALMAIN_DW.M_S_ES_21A;
  M_S_ES_20B = NONVITALMAIN_DW.M_S_ES_20B;
  M_S_ES_11B = NONVITALMAIN_DW.M_S_ES_11B;
  M_S_ES_11A = NONVITALMAIN_DW.M_S_ES_11A;
  M_S_ES_10B = NONVITALMAIN_DW.M_S_ES_10B;
  M_T_WS_24A = NONVITALMAIN_DW.M_T_WS_24A;
  M_T_WS_23B = NONVITALMAIN_DW.M_T_WS_23B;
  M_T_WS_23A = NONVITALMAIN_DW.M_T_WS_23A;
  M_T_WS_22E = NONVITALMAIN_DW.M_T_WS_22E;
  M_T_WS_22D = NONVITALMAIN_DW.M_T_WS_22D;
  M_T_WS_22C = NONVITALMAIN_DW.M_T_WS_22C;
  M_T_WS_22B = NONVITALMAIN_DW.M_T_WS_22B;
  M_T_WS_22A = NONVITALMAIN_DW.M_T_WS_22A;
  M_T_WS_21C = NONVITALMAIN_DW.M_T_WS_21C;
  M_T_WS_21B = NONVITALMAIN_DW.M_T_WS_21B;
  M_T_WS_21A = NONVITALMAIN_DW.M_T_WS_21A;
  M_T_WS_20B = NONVITALMAIN_DW.M_T_WS_20B;
  M_T_WS_20A = NONVITALMAIN_DW.M_T_WS_20A;
  M_T_WS_14A = NONVITALMAIN_DW.M_T_WS_14A;
  M_T_WS_13B = NONVITALMAIN_DW.M_T_WS_13B;
  M_T_WS_13A = NONVITALMAIN_DW.M_T_WS_13A;
  M_T_WS_12E = NONVITALMAIN_DW.M_T_WS_12E;
  M_T_WS_12D = NONVITALMAIN_DW.M_T_WS_12D;
  M_T_WS_12C = NONVITALMAIN_DW.M_T_WS_12C;
  M_T_WS_12B = NONVITALMAIN_DW.M_T_WS_12B;
  M_T_WS_12A = NONVITALMAIN_DW.M_T_WS_12A;
  M_T_WS_11B = NONVITALMAIN_DW.M_T_WS_11B;
  M_T_WS_11A = NONVITALMAIN_DW.M_T_WS_11A;
  M_T_WS_10B = NONVITALMAIN_DW.M_T_WS_10B;
  M_T_WS_10A = NONVITALMAIN_DW.M_T_WS_10A;
  M_T_ES_24B = NONVITALMAIN_DW.M_T_ES_24B;
  M_T_ES_24A = NONVITALMAIN_DW.M_T_ES_24A;
  M_T_ES_23B = NONVITALMAIN_DW.M_T_ES_23B;
  M_T_ES_23A = NONVITALMAIN_DW.M_T_ES_23A;
  M_T_ES_22E = NONVITALMAIN_DW.M_T_ES_22E;
  M_T_ES_22D = NONVITALMAIN_DW.M_T_ES_22D;
  M_T_ES_22C = NONVITALMAIN_DW.M_T_ES_22C;
  M_T_ES_22B = NONVITALMAIN_DW.M_T_ES_22B;
  M_T_ES_22A = NONVITALMAIN_DW.M_T_ES_22A;
  M_T_ES_21C = NONVITALMAIN_DW.M_T_ES_21C;
  M_T_ES_21B = NONVITALMAIN_DW.M_T_ES_21B;
  M_T_ES_21A = NONVITALMAIN_DW.M_T_ES_21A;
  M_T_ES_20B = NONVITALMAIN_DW.M_T_ES_20B;
  M_T_ES_14B = NONVITALMAIN_DW.M_T_ES_14B;
  M_T_ES_14A = NONVITALMAIN_DW.M_T_ES_14A;
  M_T_ES_13B = NONVITALMAIN_DW.M_T_ES_13B;
  M_T_ES_13A = NONVITALMAIN_DW.M_T_ES_13A;
  M_T_ES_12E = NONVITALMAIN_DW.M_T_ES_12E;
  M_T_ES_12D = NONVITALMAIN_DW.M_T_ES_12D;
  M_T_ES_12C = NONVITALMAIN_DW.M_T_ES_12C;
  M_T_ES_12B = NONVITALMAIN_DW.M_T_ES_12B;
  M_T_ES_12A = NONVITALMAIN_DW.M_T_ES_12A;
  M_T_ES_11B = NONVITALMAIN_DW.M_T_ES_11B;
  M_T_ES_11A = NONVITALMAIN_DW.M_T_ES_11A;
  M_T_ES_10B = NONVITALMAIN_DW.M_T_ES_10B;
  M_TP_24B = NONVITALMAIN_DW.M_TP_24B;
  M_TP_24A = NONVITALMAIN_DW.M_TP_24A;
  M_TP_23B = NONVITALMAIN_DW.M_TP_23B;
  M_TP_23A = NONVITALMAIN_DW.M_TP_23A;
  M_TP_22E = NONVITALMAIN_DW.M_TP_22E;
  M_TP_22D = NONVITALMAIN_DW.M_TP_22D;
  M_TP_22C = NONVITALMAIN_DW.M_TP_22C;
  M_TP_22B = NONVITALMAIN_DW.M_TP_22B;
  M_TP_22A = NONVITALMAIN_DW.M_TP_22A;
  M_TP_21C = NONVITALMAIN_DW.M_TP_21C;
  M_TP_21B = NONVITALMAIN_DW.M_TP_21B;
  M_TP_21A = NONVITALMAIN_DW.M_TP_21A;
  M_TP_20B = NONVITALMAIN_DW.M_TP_20B;
  M_TP_20A = NONVITALMAIN_DW.M_TP_20A;
  M_TP_14B = NONVITALMAIN_DW.M_TP_14B;
  M_TP_14A = NONVITALMAIN_DW.M_TP_14A;
  M_TP_13B = NONVITALMAIN_DW.M_TP_13B;
  M_TP_13A = NONVITALMAIN_DW.M_TP_13A;
  M_TP_12E = NONVITALMAIN_DW.M_TP_12E;
  M_TP_12D = NONVITALMAIN_DW.M_TP_12D;
  M_TP_12C = NONVITALMAIN_DW.M_TP_12C;
  M_TP_12B = NONVITALMAIN_DW.M_TP_12B;
  M_TP_12A = NONVITALMAIN_DW.M_TP_12A;
  M_TP_11B = NONVITALMAIN_DW.M_TP_11B;
  M_TP_11A = NONVITALMAIN_DW.M_TP_11A;
  M_TP_10B = NONVITALMAIN_DW.M_TP_10B;
  M_TP_10A = NONVITALMAIN_DW.M_TP_10A;
  M_CHK_V_NV = NONVITALMAIN_DW.M_CHK_V_NV;
  M_RRLS_DEP = NONVITALMAIN_DW.M_RRLS_DEP;
  M_DO_DEP_GR = NONVITALMAIN_DW.M_DO_DEP_GR;
  M_AR_DEP = NONVITALMAIN_DW.M_AR_DEP;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtPOINT-IND-DOInport1' */
  DO_INDSW_W23B_RWE = NONVITALMAIN_DW.DO_INDSW_W23B_RWE;
  DO_INDSW_W23A_RWE_0 = NONVITALMAIN_DW.DO_INDSW_W23A_RWE;
  DO_INDSW_W21C_RWE_0 = NONVITALMAIN_DW.DO_INDSW_W21C_RWE;
  DO_INDSW_W21B_RWE_0 = NONVITALMAIN_DW.DO_INDSW_W21B_RWE;
  DO_INDSW_W21A_RWE_0 = NONVITALMAIN_DW.DO_INDSW_W21A_RWE;
  DO_INDSW_W13B_RWE_0 = NONVITALMAIN_DW.DO_INDSW_W13B_RWE;
  DO_INDSW_W13A_RWE_0 = NONVITALMAIN_DW.DO_INDSW_W13A_RWE;
  DO_INDSW_W11B_RWE_0 = NONVITALMAIN_DW.DO_INDSW_W11B_RWE;
  DO_INDSW_W11A_RWE_0 = NONVITALMAIN_DW.DO_INDSW_W11A_RWE;
  DO_INDSW_W23B_NWE_0 = NONVITALMAIN_DW.DO_INDSW_W23B_NWE;
  DO_INDSW_W23A_NWE_0 = NONVITALMAIN_DW.DO_INDSW_W23A_NWE;
  DO_INDSW_W21C_NWE_0 = NONVITALMAIN_DW.DO_INDSW_W21C_NWE;
  DO_INDSW_W21B_NWE_0 = NONVITALMAIN_DW.DO_INDSW_W21B_NWE;
  DO_INDSW_W21A_NWE_0 = NONVITALMAIN_DW.DO_INDSW_W21A_NWE;
  DO_INDSW_W13B_NWE_0 = NONVITALMAIN_DW.DO_INDSW_W13B_NWE;
  DO_INDSW_W13A_NWE_0 = NONVITALMAIN_DW.DO_INDSW_W13A_NWE;
  DO_INDSW_W11B_NWE_0 = NONVITALMAIN_DW.DO_INDSW_W11B_NWE;
  DO_INDSW_W11A_NWE_0 = NONVITALMAIN_DW.DO_INDSW_W11A_NWE;

  /* DataStoreRead: '<S450>/J12B-X24-RST' */
  R1224PBRST = NONVITALMAIN_DW.R1224PBRST;

  /* Logic: '<S570>/AND14' */
  AND14 = NONVITALMAIN_DW.AND14;

  /* Logic: '<S568>/AND1' */
  AND1_j = NONVITALMAIN_DW.AND1_j;

  /* DataStoreWrite: '<S18>/RR-OK' */
  Memory1_PreviousInput = NONVITALMAIN_DW.Memory1_PreviousInput;
  clockTickCounter_f = clockTickCounter_f_0;
  clockTickCounter = clockTickCounter_0;
  rtb_RWE = DO_INDSW_W23B_RWE;
  DO_INDSW_W23B_NWE = DO_INDSW_W23B_NWE_0;
  DO_INDSW_W23A_RWE = DO_INDSW_W23A_RWE_0;
  DO_INDSW_W23A_NWE = DO_INDSW_W23A_NWE_0;
  DO_INDSW_W21C_RWE = DO_INDSW_W21C_RWE_0;
  DO_INDSW_W21C_NWE = DO_INDSW_W21C_NWE_0;
  DO_INDSW_W21B_RWE = DO_INDSW_W21B_RWE_0;
  DO_INDSW_W21B_NWE = DO_INDSW_W21B_NWE_0;
  DO_INDSW_W21A_RWE = DO_INDSW_W21A_RWE_0;
  DO_INDSW_W21A_NWE = DO_INDSW_W21A_NWE_0;
  DO_INDSW_W13B_RWE = DO_INDSW_W13B_RWE_0;
  DO_INDSW_W13B_NWE = DO_INDSW_W13B_NWE_0;
  DO_INDSW_W13A_RWE = DO_INDSW_W13A_RWE_0;
  DO_INDSW_W13A_NWE = DO_INDSW_W13A_NWE_0;
  DO_INDSW_W11B_RWE = DO_INDSW_W11B_RWE_0;
  DO_INDSW_W11B_NWE = DO_INDSW_W11B_NWE_0;
  DO_INDSW_W11A_RWE = DO_INDSW_W11A_RWE_0;
  DO_INDSW_W11A_NWE = DO_INDSW_W11A_NWE_0;
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S737>/DEP-AR-OK' */
    M_AR_DEP = rtu_FROMDEP[5];

    /* DataStoreWrite: '<S737>/DEP-AS' */
    NONVITALMAIN_DW.M_AS_DEP = rtu_FROMDEP[4];

    /* DataStoreWrite: '<S737>/DEP-GR-DO' */
    M_DO_DEP_GR = rtu_FROMDEP[0];

    /* DataStoreWrite: '<S737>/DEP-RRLS' */
    M_RRLS_DEP = rtu_FROMDEP[3];

    /* DataStoreWrite: '<S737>/DEP-TO-ST-PB-DI' */
    NONVITALMAIN_DW.M_DI_PBJ_DEP = rtu_FROMDEP[1];

    /* DataStoreWrite: '<S737>/ST-TO-DEP-PB-DI' */
    NONVITALMAIN_DW.M_DI_PBX_DEP = rtu_FROMDEP[2];

    /* DataStoreWrite: '<S743>/VDR' */
    NONVITALMAIN_DW.M_VDR = *rtu_VDRFROM;

    /* DataStoreWrite: '<S743>/V-NV-CHK' */
    M_CHK_V_NV = *rtu_VNVCHKFROM;

    /* DataStoreWrite: '<S743>/10A-TP' */
    M_TP_10A = rtu_TPFROM[0];

    /* DataStoreWrite: '<S743>/10B-TP' */
    M_TP_10B = rtu_TPFROM[1];

    /* DataStoreWrite: '<S743>/11A-TP' */
    M_TP_11A = rtu_TPFROM[2];

    /* DataStoreWrite: '<S743>/11B-TP' */
    M_TP_11B = rtu_TPFROM[3];

    /* DataStoreWrite: '<S743>/12A-TP' */
    M_TP_12A = rtu_TPFROM[4];

    /* DataStoreWrite: '<S743>/12B-TP' */
    M_TP_12B = rtu_TPFROM[5];

    /* DataStoreWrite: '<S743>/12C-TP' */
    M_TP_12C = rtu_TPFROM[6];

    /* DataStoreWrite: '<S743>/12D-TP' */
    M_TP_12D = rtu_TPFROM[7];

    /* DataStoreWrite: '<S743>/12E-TP' */
    M_TP_12E = rtu_TPFROM[8];

    /* DataStoreWrite: '<S743>/13A-TP' */
    M_TP_13A = rtu_TPFROM[9];

    /* DataStoreWrite: '<S743>/13B-TP' */
    M_TP_13B = rtu_TPFROM[10];

    /* DataStoreWrite: '<S743>/14A-TP' */
    M_TP_14A = rtu_TPFROM[11];

    /* DataStoreWrite: '<S743>/14B-TP' */
    M_TP_14B = rtu_TPFROM[12];

    /* DataStoreWrite: '<S743>/20A-TP' */
    M_TP_20A = rtu_TPFROM[13];

    /* DataStoreWrite: '<S743>/20B-TP' */
    M_TP_20B = rtu_TPFROM[14];

    /* DataStoreWrite: '<S743>/21A-TP' */
    M_TP_21A = rtu_TPFROM[15];

    /* DataStoreWrite: '<S743>/21B-TP' */
    M_TP_21B = rtu_TPFROM[16];

    /* DataStoreWrite: '<S743>/21C-TP' */
    M_TP_21C = rtu_TPFROM[17];

    /* DataStoreWrite: '<S743>/22A-TP' */
    M_TP_22A = rtu_TPFROM[18];

    /* DataStoreWrite: '<S743>/22B-TP' */
    M_TP_22B = rtu_TPFROM[19];

    /* DataStoreWrite: '<S743>/22C-TP' */
    M_TP_22C = rtu_TPFROM[20];

    /* DataStoreWrite: '<S743>/22D-TP' */
    M_TP_22D = rtu_TPFROM[21];

    /* DataStoreWrite: '<S743>/22E-TP' */
    M_TP_22E = rtu_TPFROM[22];

    /* DataStoreWrite: '<S743>/23A-TP' */
    M_TP_23A = rtu_TPFROM[23];

    /* DataStoreWrite: '<S743>/23B-TP' */
    M_TP_23B = rtu_TPFROM[24];

    /* DataStoreWrite: '<S743>/24A-TP' */
    M_TP_24A = rtu_TPFROM[25];

    /* DataStoreWrite: '<S743>/24B-TP' */
    M_TP_24B = rtu_TPFROM[26];

    /* DataStoreWrite: '<S743>/10B-T-ES' */
    M_T_ES_10B = rtu_TESFROM[0];

    /* DataStoreWrite: '<S743>/11A-T-ES' */
    M_T_ES_11A = rtu_TESFROM[1];

    /* DataStoreWrite: '<S743>/11B-T-ES' */
    M_T_ES_11B = rtu_TESFROM[2];

    /* DataStoreWrite: '<S743>/12A-T-ES' */
    M_T_ES_12A = rtu_TESFROM[3];

    /* DataStoreWrite: '<S743>/12B-T-ES' */
    M_T_ES_12B = rtu_TESFROM[4];

    /* DataStoreWrite: '<S743>/12C-T-ES' */
    M_T_ES_12C = rtu_TESFROM[5];

    /* DataStoreWrite: '<S743>/12D-T-ES' */
    M_T_ES_12D = rtu_TESFROM[6];

    /* DataStoreWrite: '<S743>/12E-T-ES' */
    M_T_ES_12E = rtu_TESFROM[23];

    /* DataStoreWrite: '<S743>/13A-T-ES' */
    M_T_ES_13A = rtu_TESFROM[7];

    /* DataStoreWrite: '<S743>/13B-T-ES' */
    M_T_ES_13B = rtu_TESFROM[8];

    /* DataStoreWrite: '<S743>/14A-T-ES' */
    M_T_ES_14A = rtu_TESFROM[9];

    /* DataStoreWrite: '<S743>/14B-T-ES' */
    M_T_ES_14B = rtu_TESFROM[21];

    /* DataStoreWrite: '<S743>/20B-T-ES' */
    M_T_ES_20B = rtu_TESFROM[10];

    /* DataStoreWrite: '<S743>/21A-T-ES' */
    M_T_ES_21A = rtu_TESFROM[11];

    /* DataStoreWrite: '<S743>/21B-T-ES' */
    M_T_ES_21B = rtu_TESFROM[12];

    /* DataStoreWrite: '<S743>/21C-T-ES' */
    M_T_ES_21C = rtu_TESFROM[13];

    /* DataStoreWrite: '<S743>/22A-T-ES' */
    M_T_ES_22A = rtu_TESFROM[14];

    /* DataStoreWrite: '<S743>/22B-T-ES' */
    M_T_ES_22B = rtu_TESFROM[15];

    /* DataStoreWrite: '<S743>/22C-T-ES' */
    M_T_ES_22C = rtu_TESFROM[16];

    /* DataStoreWrite: '<S743>/22D-T-ES' */
    M_T_ES_22D = rtu_TESFROM[17];

    /* DataStoreWrite: '<S743>/22E-T-ES' */
    M_T_ES_22E = rtu_TESFROM[24];

    /* DataStoreWrite: '<S743>/23A-T-ES' */
    M_T_ES_23A = rtu_TESFROM[18];

    /* DataStoreWrite: '<S743>/23B-T-ES' */
    M_T_ES_23B = rtu_TESFROM[19];

    /* DataStoreWrite: '<S743>/24A-T-ES' */
    M_T_ES_24A = rtu_TESFROM[20];

    /* DataStoreWrite: '<S743>/24B-T-ES' */
    M_T_ES_24B = rtu_TESFROM[22];

    /* DataStoreWrite: '<S743>/10A-T-WS' */
    M_T_WS_10A = rtu_TWSFROM[21];

    /* DataStoreWrite: '<S743>/10B-T-WS' */
    M_T_WS_10B = rtu_TWSFROM[0];

    /* DataStoreWrite: '<S743>/11A-T-WS' */
    M_T_WS_11A = rtu_TWSFROM[1];

    /* DataStoreWrite: '<S743>/11B-T-WS' */
    M_T_WS_11B = rtu_TWSFROM[2];

    /* DataStoreWrite: '<S743>/12A-T-WS' */
    M_T_WS_12A = rtu_TWSFROM[23];

    /* DataStoreWrite: '<S743>/12B-T-WS' */
    M_T_WS_12B = rtu_TWSFROM[3];

    /* DataStoreWrite: '<S743>/12C-T-WS' */
    M_T_WS_12C = rtu_TWSFROM[4];

    /* DataStoreWrite: '<S743>/12D-T-WS' */
    M_T_WS_12D = rtu_TWSFROM[5];

    /* DataStoreWrite: '<S743>/12E-T-WS' */
    M_T_WS_12E = rtu_TWSFROM[6];

    /* DataStoreWrite: '<S743>/13A-T-WS' */
    M_T_WS_13A = rtu_TWSFROM[7];

    /* DataStoreWrite: '<S743>/13B-T-WS' */
    M_T_WS_13B = rtu_TWSFROM[8];

    /* DataStoreWrite: '<S743>/14A-T-WS' */
    M_T_WS_14A = rtu_TWSFROM[9];

    /* DataStoreWrite: '<S743>/20A-T-WS' */
    M_T_WS_20A = rtu_TWSFROM[22];

    /* DataStoreWrite: '<S743>/20B-T-WS' */
    M_T_WS_20B = rtu_TWSFROM[10];

    /* DataStoreWrite: '<S743>/21A-T-WS' */
    M_T_WS_21A = rtu_TWSFROM[11];

    /* DataStoreWrite: '<S743>/21B-T-WS' */
    M_T_WS_21B = rtu_TWSFROM[12];

    /* DataStoreWrite: '<S743>/21C-T-WS' */
    M_T_WS_21C = rtu_TWSFROM[13];

    /* DataStoreWrite: '<S743>/22A-T-WS' */
    M_T_WS_22A = rtu_TWSFROM[24];

    /* DataStoreWrite: '<S743>/22B-T-WS' */
    M_T_WS_22B = rtu_TWSFROM[14];

    /* DataStoreWrite: '<S743>/22C-T-WS' */
    M_T_WS_22C = rtu_TWSFROM[15];

    /* DataStoreWrite: '<S743>/22D-T-WS' */
    M_T_WS_22D = rtu_TWSFROM[16];

    /* DataStoreWrite: '<S743>/22E-T-WS' */
    M_T_WS_22E = rtu_TWSFROM[17];

    /* DataStoreWrite: '<S743>/23A-T-WS' */
    M_T_WS_23A = rtu_TWSFROM[18];

    /* DataStoreWrite: '<S743>/23B-T-WS' */
    M_T_WS_23B = rtu_TWSFROM[19];

    /* DataStoreWrite: '<S743>/24A-T-WS' */
    M_T_WS_24A = rtu_TWSFROM[20];

    /* DataStoreWrite: '<S743>/10B-S-ES' */
    M_S_ES_10B = rtu_SESFROM[0];

    /* DataStoreWrite: '<S743>/11A-S-ES' */
    M_S_ES_11A = rtu_SESFROM[1];

    /* DataStoreWrite: '<S743>/11B-S-ES' */
    M_S_ES_11B = rtu_SESFROM[2];

    /* DataStoreWrite: '<S743>/20B-S-ES' */
    M_S_ES_20B = rtu_SESFROM[3];

    /* DataStoreWrite: '<S743>/21A-S-ES' */
    M_S_ES_21A = rtu_SESFROM[4];

    /* DataStoreWrite: '<S743>/21B-S-ES' */
    M_S_ES_21B = rtu_SESFROM[5];

    /* DataStoreWrite: '<S743>/21C-S-ES' */
    M_S_ES_21C = rtu_SESFROM[6];

    /* DataStoreWrite: '<S743>/10A-S-WS' */
    M_S_WS_10A = rtu_SWSFROM[7];

    /* DataStoreWrite: '<S743>/10B-S-WS' */
    M_S_WS_10B = rtu_SWSFROM[0];

    /* DataStoreWrite: '<S743>/11A-S-WS' */
    M_S_WS_11A = rtu_SWSFROM[1];

    /* DataStoreWrite: '<S743>/11B-S-WS' */
    M_S_WS_11B = rtu_SWSFROM[2];

    /* DataStoreWrite: '<S743>/20A-S-WS' */
    M_S_WS_20A = rtu_SWSFROM[8];

    /* DataStoreWrite: '<S743>/20B-S-WS' */
    M_S_WS_20B = rtu_SWSFROM[3];

    /* DataStoreWrite: '<S743>/21A-S-WS' */
    M_S_WS_21A = rtu_SWSFROM[4];

    /* DataStoreWrite: '<S743>/21B-S-WS' */
    M_S_WS_21B = rtu_SWSFROM[5];

    /* DataStoreWrite: '<S743>/21C-S-WS' */
    M_S_WS_21C = rtu_SWSFROM[6];

    /* DataStoreWrite: '<S743>/W11A//21A-NWC' */
    M_W11A_21A_NWC = rtu_NWCFROM[0];

    /* DataStoreWrite: '<S743>/W11B//21B-NWC' */
    M_W11B_21B_NWC = rtu_NWCFROM[1];

    /* DataStoreWrite: '<S743>/W13A//23A-NWC' */
    M_W13A_23A_NWC = rtu_NWCFROM[3];

    /* DataStoreWrite: '<S743>/W13B//23B-NWC' */
    M_W13B_23B_NWC = rtu_NWCFROM[4];

    /* DataStoreWrite: '<S743>/W21C-NWC' */
    M_W21C_NWC = rtu_NWCFROM[2];

    /* DataStoreWrite: '<S743>/W11A//21A-NWP' */
    M_W11A_21A_NWP = rtu_NWPFROM[0];

    /* DataStoreWrite: '<S743>/W11B//21B-NWP' */
    M_W11B_21B_NWP = rtu_NWPFROM[1];

    /* DataStoreWrite: '<S743>/W13A//23A-NWP' */
    M_W13A_23A_NWP = rtu_NWPFROM[3];

    /* DataStoreWrite: '<S743>/W13B//23B-NWP' */
    M_W13B_23B_NWP = rtu_NWPFROM[4];

    /* DataStoreWrite: '<S743>/W21C-NWP' */
    M_W21C_NWP = rtu_NWPFROM[2];

    /* DataStoreWrite: '<S743>/W11A//21A-NWZ' */
    M_W11A_21A_NWZ = rtu_NWZFROM[0];

    /* DataStoreWrite: '<S743>/W11B//21B-NWZ' */
    M_W11B_21B_NWZ = rtu_NWZFROM[1];

    /* DataStoreWrite: '<S743>/W13A//23A-NWZ' */
    M_W13A_23A_NWZ = rtu_NWZFROM[3];

    /* DataStoreWrite: '<S743>/W13B//23B-NWZ' */
    M_W13B_23B_NWZ = rtu_NWZFROM[4];

    /* DataStoreWrite: '<S743>/W21C-NWZ' */
    M_W21C_NWZ = rtu_NWZFROM[2];

    /* DataStoreWrite: '<S743>/W11A//21A-NW-TE' */
    M_W11A_21A_NW_TE = rtu_NWTEFROM[0];

    /* DataStoreWrite: '<S743>/W11B//21B-NW-TE' */
    M_W11B_21B_NW_TE = rtu_NWTEFROM[1];

    /* DataStoreWrite: '<S743>/W13A//23A-NW-TE' */
    M_W13A_23A_NW_TE = rtu_NWTEFROM[3];

    /* DataStoreWrite: '<S743>/W13B//23B-NW-TE' */
    M_W13B_23B_NW_TE = rtu_NWTEFROM[4];

    /* DataStoreWrite: '<S743>/W21C-NW-TE' */
    M_W21C_NW_TE = rtu_NWTEFROM[2];

    /* DataStoreWrite: '<S743>/W11A//21A-RWC' */
    M_W11A_21A_RWC = rtu_RWCFROM[0];

    /* DataStoreWrite: '<S743>/W11B//21B-RWC' */
    M_W11B_21B_RWC = rtu_RWCFROM[1];

    /* DataStoreWrite: '<S743>/W13A//23A-RWC' */
    M_W13A_23A_RWC = rtu_RWCFROM[3];

    /* DataStoreWrite: '<S743>/W13B//23B-RWC' */
    M_W13B_23B_RWC = rtu_RWCFROM[4];

    /* DataStoreWrite: '<S743>/W21C-RWC' */
    M_W21C_RWC = rtu_RWCFROM[2];

    /* DataStoreWrite: '<S743>/W11A//21A-RWP' */
    M_W11A_21A_RWP = rtu_RWPFROM[0];

    /* DataStoreWrite: '<S743>/W11B//21B-RWP' */
    M_W11B_21B_RWP = rtu_RWPFROM[1];

    /* DataStoreWrite: '<S743>/W13A//23A-RWP' */
    M_W13A_23A_RWP = rtu_RWPFROM[3];

    /* DataStoreWrite: '<S743>/W13B//23B-RWP' */
    M_W13B_23B_RWP = rtu_RWPFROM[4];

    /* DataStoreWrite: '<S743>/W21C-RWP' */
    M_W21C_RWP = rtu_RWPFROM[2];

    /* DataStoreWrite: '<S743>/W11A//21A-RWZ' */
    M_W11A_21A_RWZ = rtu_RWZFROM[0];

    /* DataStoreWrite: '<S743>/W11B//21B-RWZ' */
    M_W11B_21B_RWZ = rtu_RWZFROM[1];

    /* DataStoreWrite: '<S743>/W13A//23A-RWZ' */
    M_W13A_23A_RWZ = rtu_RWZFROM[3];

    /* DataStoreWrite: '<S743>/W13B//23B-RWZ' */
    M_W13B_23B_RWZ = rtu_RWZFROM[4];

    /* DataStoreWrite: '<S743>/W21C-RWZ' */
    M_W21C_RWZ = rtu_RWZFROM[2];

    /* DataStoreWrite: '<S743>/W11A//21A-RW-TE' */
    M_W11A_21A_RW_TE = rtu_RWTEFROM[0];

    /* DataStoreWrite: '<S743>/W11B//21B-RW-TE' */
    M_W11B_21B_RW_TE = rtu_RWTEFROM[1];

    /* DataStoreWrite: '<S743>/W13A//23A-RW-TE' */
    M_W13A_23A_RW_TE = rtu_RWTEFROM[3];

    /* DataStoreWrite: '<S743>/W13B//23B-RW-TE' */
    M_W13B_23B_RW_TE = rtu_RWTEFROM[4];

    /* DataStoreWrite: '<S743>/W21C-RW-TE' */
    M_W21C_RW_TE = rtu_RWTEFROM[2];

    /* DataStoreWrite: '<S743>/W11A//21A-L' */
    M_W11A_21A_L = rtu_LFROM[0];

    /* DataStoreWrite: '<S743>/W11B//21B-L' */
    M_W11B_21B_L = rtu_LFROM[1];

    /* DataStoreWrite: '<S743>/W13A//23A-L' */
    M_W13A_23A_L = rtu_LFROM[3];

    /* DataStoreWrite: '<S743>/W13B//23B-L' */
    M_W13B_23B_L = rtu_LFROM[4];

    /* DataStoreWrite: '<S743>/W21C-L' */
    M_W21C_L = rtu_LFROM[2];

    /* DataStoreWrite: '<S743>/W11A//21A-LS' */
    M_W11A_21A_LS = rtu_LSFROM[0];

    /* DataStoreWrite: '<S743>/W11B//21B-LS' */
    M_W11B_21B_LS = rtu_LSFROM[1];

    /* DataStoreWrite: '<S743>/W13A//23A-LS' */
    M_W13A_23A_LS = rtu_LSFROM[3];

    /* DataStoreWrite: '<S743>/W13B//23B-LS' */
    M_W13B_23B_LS = rtu_LSFROM[4];

    /* DataStoreWrite: '<S743>/W21C-LS' */
    M_W21C_LS = rtu_LSFROM[2];

    /* DataStoreWrite: '<S743>/W11A//21A-SWRLS' */
    M_W11A_21A_SWRLS = rtu_SWRLSFROM[0];

    /* DataStoreWrite: '<S743>/W11B//21B-SWRLS' */
    M_W11B_21B_SWRLS = rtu_SWRLSFROM[1];

    /* DataStoreWrite: '<S743>/W13A//23A-SWRLS' */
    M_W13A_23A_SWRLS = rtu_SWRLSFROM[3];

    /* DataStoreWrite: '<S743>/W13B//23B-SWRLS' */
    M_W13B_23B_SWRLS = rtu_SWRLSFROM[4];

    /* DataStoreWrite: '<S743>/W21C-SWRLS' */
    M_W21C_SWRLS = rtu_SWRLSFROM[2];

    /* DataStoreWrite: '<S743>/W11A//21A-TPZ' */
    M_W11A_21A_TPZ = rtu_TPZFROM[0];

    /* DataStoreWrite: '<S743>/W11B//21B-TPZ' */
    M_W11B_21B_TPZ = rtu_TPZFROM[1];

    /* DataStoreWrite: '<S743>/W13A//23A-TPZ' */
    M_W13A_23A_TPZ = rtu_TPZFROM[3];

    /* DataStoreWrite: '<S743>/W13B//23B-TPZ' */
    M_W13B_23B_TPZ = rtu_TPZFROM[4];

    /* DataStoreWrite: '<S743>/W21C-TPZ' */
    M_W21C_TPZ = rtu_TPZFROM[2];

    /* DataStoreWrite: '<S743>/J12A-DR-DO' */
    M_DO_J12A_DR = rtu_DRDOFROM[2];

    /* DataStoreWrite: '<S743>/J12B-DR-DO' */
    M_DO_J12B_DR = rtu_DRDOFROM[4];

    /* DataStoreWrite: '<S743>/J14-DR-DO' */
    M_DO_J14_DR = rtu_DRDOFROM[6];

    /* DataStoreWrite: '<S743>/J22A-DR-DO' */
    M_DO_J22A_DR = rtu_DRDOFROM[3];

    /* DataStoreWrite: '<S743>/J22B-DR-DO' */
    M_DO_J22B_DR = rtu_DRDOFROM[5];

    /* DataStoreWrite: '<S743>/J24-DR-DO' */
    M_DO_J24_DR = rtu_DRDOFROM[7];

    /* DataStoreWrite: '<S743>/JL10-DR-DO' */
    M_DO_JL10_DR = rtu_DRDOFROM[0];

    /* DataStoreWrite: '<S743>/JL20-DR-DO' */
    M_DO_JL20_DR = rtu_DRDOFROM[1];

    /* DataStoreWrite: '<S743>/JL10-GR-DO' */
    M_DO_JL10_GR = rtu_GRDOFROM[0];

    /* DataStoreWrite: '<S743>/JL20-GR-DO' */
    M_DO_JL20_GR = rtu_GRDOFROM[1];

    /* DataStoreWrite: '<S743>/J12A-T-AS' */
    M_AS_T_J12A = rtu_TASFROM[2];

    /* DataStoreWrite: '<S743>/J12B-T-AS' */
    M_AS_T_J12B = rtu_TASFROM[4];

    /* DataStoreWrite: '<S743>/J14-T-AS' */
    M_AS_T_J14 = rtu_TASFROM[6];

    /* DataStoreWrite: '<S743>/J22A-T-AS' */
    M_AS_T_J22A = rtu_TASFROM[3];

    /* DataStoreWrite: '<S743>/J22B-T-AS' */
    M_AS_T_J22B = rtu_TASFROM[5];

    /* DataStoreWrite: '<S743>/J24-T-AS' */
    M_AS_T_J24 = rtu_TASFROM[7];

    /* DataStoreWrite: '<S743>/JL10-T-AS' */
    M_AS_T_JL10 = rtu_TASFROM[0];

    /* DataStoreWrite: '<S743>/JL20-T-AS' */
    M_AS_T_JL20 = rtu_TASFROM[1];

    /* DataStoreWrite: '<S743>/DEP-S-AS' */
    M_AS_S_DEP = rtu_SASFROM[2];

    /* DataStoreWrite: '<S743>/JL10-S-AS' */
    M_AS_S_JL10 = rtu_SASFROM[0];

    /* DataStoreWrite: '<S743>/JL20-S-AS' */
    M_AS_S_JL20 = rtu_SASFROM[1];

    /* DataStoreWrite: '<S743>/J12A-RRLS' */
    M_RRLS_J12A = rtu_RRLSFROM[2];

    /* DataStoreWrite: '<S743>/J12B-RRLS' */
    M_RRLS_J12B = rtu_RRLSFROM[4];

    /* DataStoreWrite: '<S743>/J22A-RRLS' */
    M_RRLS_J22A = rtu_RRLSFROM[3];

    /* DataStoreWrite: '<S743>/J22B-RRLS' */
    M_RRLS_J22B = rtu_RRLSFROM[5];

    /* DataStoreWrite: '<S743>/X10-RRLS' */
    M_RRLS_X10 = rtu_RRLSFROM[0];

    /* DataStoreWrite: '<S743>/X14-RRLS' */
    M_RRLS_X14 = rtu_RRLSFROM[6];

    /* DataStoreWrite: '<S743>/X20-RRLS' */
    M_RRLS_X20 = rtu_RRLSFROM[1];

    /* DataStoreWrite: '<S743>/X24-RRLS' */
    M_RRLS_X24 = rtu_RRLSFROM[7];

    /* DataStoreWrite: '<S743>/DEP-X10-S' */
    NONVITALMAIN_DW.M_R_S_DEP_10 = rtu_HDSFROM[18];

    /* DataStoreWrite: '<S743>/DEP-X20-S' */
    NONVITALMAIN_DW.M_R_S_DEP_20 = rtu_HDSFROM[19];

    /* DataStoreWrite: '<S743>/J12A-X10-H' */
    NONVITALMAIN_DW.M_R_H_12_10 = rtu_HDSFROM[12];

    /* DataStoreWrite: '<S743>/J12A-X20-H' */
    NONVITALMAIN_DW.M_R_H_12_20 = rtu_HDSFROM[13];

    /* DataStoreWrite: '<S743>/J12B-X14-H' */
    NONVITALMAIN_DW.M_R_H_12_14 = rtu_HDSFROM[4];

    /* DataStoreWrite: '<S743>/J12B-X24-H' */
    NONVITALMAIN_DW.M_R_H_12_24 = rtu_HDSFROM[5];

    /* DataStoreWrite: '<S743>/J14-J12A-D' */
    NONVITALMAIN_DW.M_R_D_14_12 = rtu_HDSFROM[8];

    /* DataStoreWrite: '<S743>/J14-J22A-D' */
    NONVITALMAIN_DW.M_R_D_14_22 = rtu_HDSFROM[9];

    /* DataStoreWrite: '<S743>/J22A-X10-H' */
    NONVITALMAIN_DW.M_R_H_22_10 = rtu_HDSFROM[14];

    /* DataStoreWrite: '<S743>/J22A-X20-H' */
    NONVITALMAIN_DW.M_R_H_22_20 = rtu_HDSFROM[15];

    /* DataStoreWrite: '<S743>/J22B-X14-H' */
    NONVITALMAIN_DW.M_R_H_22_14 = rtu_HDSFROM[6];

    /* DataStoreWrite: '<S743>/J22B-X24-H' */
    NONVITALMAIN_DW.M_R_H_22_24 = rtu_HDSFROM[7];

    /* DataStoreWrite: '<S743>/J24-J12A-D' */
    NONVITALMAIN_DW.M_R_D_24_12 = rtu_HDSFROM[10];

    /* DataStoreWrite: '<S743>/J24-J22A-D' */
    NONVITALMAIN_DW.M_R_D_24_22 = rtu_HDSFROM[11];

    /* DataStoreWrite: '<S743>/JL10-DEP-S' */
    NONVITALMAIN_DW.M_R_S_10_DEP = rtu_HDSFROM[16];

    /* DataStoreWrite: '<S743>/JL10-J12B-D' */
    NONVITALMAIN_DW.M_R_D_10_12 = rtu_HDSFROM[0];

    /* DataStoreWrite: '<S743>/JL10-J22B-D' */
    NONVITALMAIN_DW.M_R_D_10_22 = rtu_HDSFROM[1];

    /* DataStoreWrite: '<S743>/JL20-DEP-S' */
    NONVITALMAIN_DW.M_R_S_20_DEP = rtu_HDSFROM[17];

    /* DataStoreWrite: '<S743>/JL20-J12B-D' */
    NONVITALMAIN_DW.M_R_D_20_12 = rtu_HDSFROM[2];

    /* DataStoreWrite: '<S743>/JL20-J22B-D' */
    NONVITALMAIN_DW.M_R_D_20_22 = rtu_HDSFROM[3];

    /* DataStoreWrite: '<S735>/ED1' */
    M_CBTC_T1_ED1 = rtu_CBTCFROM[16];

    /* DataStoreWrite: '<S735>/ED10' */
    M_CBTC_T2_ED2 = rtu_CBTCFROM[25];

    /* DataStoreWrite: '<S735>/ED11' */
    M_CBTC_T2_ED3 = rtu_CBTCFROM[26];

    /* DataStoreWrite: '<S735>/ED12' */
    M_CBTC_T2_ED4 = rtu_CBTCFROM[27];

    /* DataStoreWrite: '<S735>/ED13' */
    M_CBTC_T3_ED1 = rtu_CBTCFROM[28];

    /* DataStoreWrite: '<S735>/ED14' */
    M_CBTC_T3_ED2 = rtu_CBTCFROM[29];

    /* DataStoreWrite: '<S735>/ED15' */
    M_CBTC_T3_ED3 = rtu_CBTCFROM[30];

    /* DataStoreWrite: '<S735>/ED16' */
    M_CBTC_T3_ED4 = rtu_CBTCFROM[31];

    /* DataStoreWrite: '<S735>/ED2' */
    M_CBTC_T1_ED2 = rtu_CBTCFROM[17];

    /* DataStoreWrite: '<S735>/ED3' */
    M_CBTC_T1_ED3 = rtu_CBTCFROM[18];

    /* DataStoreWrite: '<S735>/ED4' */
    M_CBTC_T1_ED4 = rtu_CBTCFROM[19];

    /* DataStoreWrite: '<S735>/ED5' */
    M_CBTC_TIB_ED1 = rtu_CBTCFROM[20];

    /* DataStoreWrite: '<S735>/ED6' */
    M_CBTC_TIB_ED2 = rtu_CBTCFROM[21];

    /* DataStoreWrite: '<S735>/ED7' */
    M_CBTC_TIB_ED3 = rtu_CBTCFROM[22];

    /* DataStoreWrite: '<S735>/ED8' */
    M_CBTC_TIB_ED4 = rtu_CBTCFROM[23];

    /* DataStoreWrite: '<S735>/ED9' */
    M_CBTC_T2_ED1 = rtu_CBTCFROM[24];

    /* DataStoreWrite: '<S735>/ESB1' */
    M_CBTC_T1_ESB1 = rtu_CBTCFROM[8];

    /* DataStoreWrite: '<S735>/ESB2' */
    M_CBTC_T1_ESB2 = rtu_CBTCFROM[9];

    /* DataStoreWrite: '<S735>/ESB3' */
    M_CBTC_TIB_ESB1 = rtu_CBTCFROM[10];

    /* DataStoreWrite: '<S735>/ESB4' */
    M_CBTC_TIB_ESB2 = rtu_CBTCFROM[11];

    /* DataStoreWrite: '<S735>/ESB5' */
    M_CBTC_T2_ESB1 = rtu_CBTCFROM[12];

    /* DataStoreWrite: '<S735>/ESB6' */
    M_CBTC_T2_ESB2 = rtu_CBTCFROM[13];

    /* DataStoreWrite: '<S735>/ESB7' */
    M_CBTC_T3_ESB1 = rtu_CBTCFROM[14];

    /* DataStoreWrite: '<S735>/ESB8' */
    M_CBTC_T3_ESB2 = rtu_CBTCFROM[15];

    /* DataStoreWrite: '<S735>/PSD1' */
    M_CBTC_T1_PSD1 = rtu_CBTCFROM[0];

    /* DataStoreWrite: '<S735>/PSD2' */
    M_CBTC_T1_PSD2 = rtu_CBTCFROM[1];

    /* DataStoreWrite: '<S735>/PSD3' */
    M_CBTC_TIB_PSD1 = rtu_CBTCFROM[2];

    /* DataStoreWrite: '<S735>/PSD4' */
    M_CBTC_TIB_PSD2 = rtu_CBTCFROM[3];

    /* DataStoreWrite: '<S735>/PSD5' */
    M_CBTC_T2_PSD1 = rtu_CBTCFROM[4];

    /* DataStoreWrite: '<S735>/PSD6' */
    M_CBTC_T2_PSD2 = rtu_CBTCFROM[5];

    /* DataStoreWrite: '<S735>/PSD7' */
    M_CBTC_T3_PSD1 = rtu_CBTCFROM[6];

    /* DataStoreWrite: '<S735>/PSD8' */
    M_CBTC_T3_PSD2 = rtu_CBTCFROM[7];

    /* DataStoreWrite: '<S744>/COMM-1-FAIL' */
    CBI_FAIL_COMM1 = rtu_SYSTEMFROM[2];

    /* DataStoreWrite: '<S744>/COMM-2-FAIL' */
    CBI_FAIL_COMM2 = rtu_SYSTEMFROM[3];

    /* DataStoreWrite: '<S744>/SYSTEM-1-FAIL' */
    CBI_FAIL_SYSTEM1 = rtu_SYSTEMFROM[0];

    /* DataStoreWrite: '<S744>/SYSTEM-2-FAIL' */
    CBI_FAIL_SYSTEM2 = rtu_SYSTEMFROM[1];

    /* DataStoreWrite: '<S738>/R1' */
    R1012PBRST = rtu_FROMATS[20];

    /* DataStoreWrite: '<S738>/R10' */
    R2022PBRST = rtu_FROMATS[23];

    /* DataStoreWrite: '<S738>/R1012' */
    R1012PBCTRL = rtu_FROMATS[0];

    /* DataStoreWrite: '<S738>/R1022' */
    R1022PBCTRL = rtu_FROMATS[1];

    /* DataStoreWrite: '<S738>/R10DEP' */
    R10DEPPBCTRL = rtu_FROMATS[16];

    /* DataStoreWrite: '<S738>/R10DEP1' */
    R10DEPPBRST = rtu_FROMATS[36];

    /* DataStoreWrite: '<S738>/R11' */
    R2210PBRST = rtu_FROMATS[34];

    /* DataStoreWrite: '<S738>/R12' */
    R2214PBRST = rtu_FROMATS[26];

    /* DataStoreWrite: '<S738>/R1210' */
    R1210PBCTRL = rtu_FROMATS[12];

    /* DataStoreWrite: '<S738>/R1214' */
    R1214PBCTRL = rtu_FROMATS[4];

    /* DataStoreWrite: '<S738>/R1220' */
    R1220PBCTRL = rtu_FROMATS[13];

    /* DataStoreWrite: '<S738>/R13' */
    R2220PBRST = rtu_FROMATS[35];

    /* DataStoreWrite: '<S738>/R14' */
    R2224PBRST = rtu_FROMATS[27];

    /* DataStoreWrite: '<S738>/R1412' */
    R1412PBCTRL = rtu_FROMATS[8];

    /* DataStoreWrite: '<S738>/R1422' */
    R1422PBCTRL = rtu_FROMATS[9];

    /* DataStoreWrite: '<S738>/R15' */
    R2412PBRST = rtu_FROMATS[30];

    /* DataStoreWrite: '<S738>/R16' */
    R2422PBRST = rtu_FROMATS[31];

    /* DataStoreWrite: '<S738>/R2' */
    R1022PBRST = rtu_FROMATS[21];

    /* DataStoreWrite: '<S738>/R2012' */
    R2012PBCTRL = rtu_FROMATS[2];

    /* DataStoreWrite: '<S738>/R2022' */
    R2022PBCTRL = rtu_FROMATS[3];

    /* DataStoreWrite: '<S738>/R20DEP' */
    R20DEPPBCTRL = rtu_FROMATS[17];

    /* DataStoreWrite: '<S738>/R20DEP1' */
    R20DEPPBRST = rtu_FROMATS[37];

    /* DataStoreWrite: '<S738>/R2210' */
    R2210PBCTRL = rtu_FROMATS[14];

    /* DataStoreWrite: '<S738>/R2214' */
    R2214PBCTRL = rtu_FROMATS[6];

    /* DataStoreWrite: '<S738>/R2220' */
    R2220PBCTRL = rtu_FROMATS[15];

    /* DataStoreWrite: '<S738>/R2224' */
    R2224PBCTRL = rtu_FROMATS[7];

    /* DataStoreWrite: '<S738>/R2412' */
    R2412PBCTRL = rtu_FROMATS[10];

    /* DataStoreWrite: '<S738>/R2422' */
    R2422PBCTRL = rtu_FROMATS[11];

    /* DataStoreWrite: '<S738>/R3' */
    R1210PBRST = rtu_FROMATS[32];

    /* DataStoreWrite: '<S738>/R4' */
    R1214PBRST = rtu_FROMATS[24];

    /* DataStoreWrite: '<S738>/R5' */
    R1220PBRST = rtu_FROMATS[33];

    /* DataStoreWrite: '<S738>/R6' */
    R1224PBCTRL = rtu_FROMATS[25];

    /* DataStoreWrite: '<S738>/R7' */
    R1412PBRST = rtu_FROMATS[28];

    /* DataStoreWrite: '<S738>/R8' */
    R1422PBRST = rtu_FROMATS[29];

    /* DataStoreWrite: '<S738>/R9' */
    R2012PBRST = rtu_FROMATS[22];

    /* DataStoreWrite: '<S738>/RDEP1' */
    RDEP10PBRST = rtu_FROMATS[38];

    /* DataStoreWrite: '<S738>/RDEP10' */
    RDEP10PBCTRL = rtu_FROMATS[18];

    /* DataStoreWrite: '<S738>/RDEP2' */
    RDEP20PBRST = rtu_FROMATS[39];

    /* DataStoreWrite: '<S738>/RDEP20' */
    RDEP20PBCTRL = rtu_FROMATS[19];

    /* DataStoreWrite: '<S739>/MANUAL-PB' */
    DI_PBG_MANUAL = rtu_GLOBALPBDI[1];

    /* DataStoreWrite: '<S739>/OTOMATIS-PB' */
    DI_PBG_OTOMATIS = rtu_GLOBALPBDI[0];

    /* DataStoreWrite: '<S739>/THB-PB' */
    DI_PBG_THB = rtu_GLOBALPBDI[2];

    /* DataStoreWrite: '<S739>/TPR-BANTU-PB-DI' */
    NONVITALMAIN_DW.DI_PBG_TPR_BANTU = rtu_GLOBALPBDI[3];

    /* DataStoreWrite: '<S739>/TBKW-PB' */
    DI_PBSW_TBKW = rtu_SWCTRLPBDI[3];

    /* DataStoreWrite: '<S739>/TBW-PB' */
    DI_PBSW_TBW = rtu_SWCTRLPBDI[2];

    /* DataStoreWrite: '<S739>/TKGW-PB' */
    DI_PBSW_TKGW = rtu_SWCTRLPBDI[4];

    /* DataStoreWrite: '<S739>/TKW-PB' */
    DI_PBSW_TKW = rtu_SWCTRLPBDI[1];

    /* DataStoreWrite: '<S739>/TWT-PB' */
    DI_PBSW_TWT = rtu_SWCTRLPBDI[0];

    /* DataStoreWrite: '<S739>/TPR-PB' */
    DI_PBR_TPR = *rtu_RCTRLPBDI;

    /* DataStoreWrite: '<S739>/J12A-PB' */
    DI_PBJ_12A = rtu_ROUTEPBDI[1];

    /* DataStoreWrite: '<S739>/J12B-PB' */
    DI_PBJ_12B = rtu_ROUTEPBDI[2];

    /* DataStoreWrite: '<S739>/J14-PB' */
    DI_PBJ_14 = rtu_ROUTEPBDI[3];

    /* DataStoreWrite: '<S739>/J22A-PB' */
    DI_PBJ_22A = rtu_ROUTEPBDI[5];

    /* DataStoreWrite: '<S739>/J22B-PB' */
    DI_PBJ_22B = rtu_ROUTEPBDI[6];

    /* DataStoreWrite: '<S739>/J24-PB' */
    DI_PBJ_24 = rtu_ROUTEPBDI[7];

    /* DataStoreWrite: '<S739>/JL10-PB' */
    DI_PBJ_10 = rtu_ROUTEPBDI[0];

    /* DataStoreWrite: '<S739>/JL20-PB' */
    DI_PBJ_20 = rtu_ROUTEPBDI[4];

    /* DataStoreWrite: '<S739>/X10-PB' */
    DI_PBX_10 = rtu_ROUTEPBDI[8];

    /* DataStoreWrite: '<S739>/X14-PB' */
    DI_PBX_14 = rtu_ROUTEPBDI[9];

    /* DataStoreWrite: '<S739>/X20-PB' */
    DI_PBX_20 = rtu_ROUTEPBDI[10];

    /* DataStoreWrite: '<S739>/X24-PB' */
    DI_PBX_24 = rtu_ROUTEPBDI[11];

    /* DataStoreWrite: '<S739>/W11A//21A-PB' */
    DI_PBW_11A_21A = rtu_POINTPBDI[0];

    /* DataStoreWrite: '<S739>/W11B//21B-PB' */
    DI_PBW_11B_21B = rtu_POINTPBDI[1];

    /* DataStoreWrite: '<S739>/W13A//23A-PB' */
    DI_PBW_13A_23A = rtu_POINTPBDI[3];

    /* DataStoreWrite: '<S739>/W13B//23B-PB' */
    DI_PBW_13B_23B = rtu_POINTPBDI[4];

    /* DataStoreWrite: '<S739>/W21C-PB' */
    DI_PBW_21C = rtu_POINTPBDI[2];

    /* DataStoreWrite: '<S739>/DEPOT-FROM-PB-DI' */
    DI_GO_FROM_DEPOT = rtu_CBTCPBDI[33];

    /* DataStoreWrite: '<S739>/DEPOT-TO-PB-DI' */
    DI_GO_TO_DEPOT = rtu_CBTCPBDI[32];

    /* DataStoreWrite: '<S739>/TSB-T1-PB' */
    NONVITALMAIN_DW.DI_PBCBTC_TSB_T1 = rtu_CBTCPBDI[28];

    /* DataStoreWrite: '<S739>/TSB-T2-PB' */
    NONVITALMAIN_DW.DI_PBCBTC_TSB_T2 = rtu_CBTCPBDI[30];

    /* DataStoreWrite: '<S739>/TSB-T3-PB' */
    NONVITALMAIN_DW.DI_PBCBTC_TSB_T3 = rtu_CBTCPBDI[31];

    /* DataStoreWrite: '<S739>/TSB-TIB-PB' */
    NONVITALMAIN_DW.DI_PBCBTC_TSB_TIB = rtu_CBTCPBDI[29];

    /* DataStoreWrite: '<S739>/VSB1' */
    VSB1_g = rtu_CBTCPBDI[0];

    /* DataStoreWrite: '<S739>/VSB10' */
    VSB10_j = rtu_CBTCPBDI[9];

    /* DataStoreWrite: '<S739>/VSB11' */
    VSB11_c = rtu_CBTCPBDI[10];

    /* DataStoreWrite: '<S739>/VSB12' */
    VSB12_l = rtu_CBTCPBDI[11];

    /* DataStoreWrite: '<S739>/VSB13' */
    VSB13_d = rtu_CBTCPBDI[12];

    /* DataStoreWrite: '<S739>/VSB14' */
    VSB14_o = rtu_CBTCPBDI[13];

    /* DataStoreWrite: '<S739>/VSB15' */
    VSB15_h = rtu_CBTCPBDI[14];

    /* DataStoreWrite: '<S739>/VSB16' */
    VSB16_h = rtu_CBTCPBDI[15];

    /* DataStoreWrite: '<S739>/VSB17' */
    VSB17_c = rtu_CBTCPBDI[16];

    /* DataStoreWrite: '<S739>/VSB18' */
    VSB18_j = rtu_CBTCPBDI[17];

    /* DataStoreWrite: '<S739>/VSB19' */
    VSB19_d = rtu_CBTCPBDI[18];

    /* DataStoreWrite: '<S739>/VSB2' */
    VSB2_e = rtu_CBTCPBDI[1];

    /* DataStoreWrite: '<S739>/VSB20' */
    VSB20_c = rtu_CBTCPBDI[19];

    /* DataStoreWrite: '<S739>/VSB21' */
    VSB21_p = rtu_CBTCPBDI[20];

    /* DataStoreWrite: '<S739>/VSB22' */
    VSB22_c = rtu_CBTCPBDI[21];

    /* DataStoreWrite: '<S739>/VSB23' */
    VSB23_i = rtu_CBTCPBDI[22];

    /* DataStoreWrite: '<S739>/VSB24' */
    VSB24_a = rtu_CBTCPBDI[23];

    /* DataStoreWrite: '<S739>/VSB25' */
    VSB25_k = rtu_CBTCPBDI[24];

    /* DataStoreWrite: '<S739>/VSB26' */
    VSB26_l = rtu_CBTCPBDI[25];

    /* DataStoreWrite: '<S739>/VSB27' */
    VSB27_p = rtu_CBTCPBDI[26];

    /* DataStoreWrite: '<S739>/VSB3' */
    VSB3_l = rtu_CBTCPBDI[2];

    /* DataStoreWrite: '<S739>/VSB4' */
    VSB4_g = rtu_CBTCPBDI[3];

    /* DataStoreWrite: '<S739>/VSB5' */
    VSB5_n = rtu_CBTCPBDI[4];

    /* DataStoreWrite: '<S739>/VSB6' */
    VSB6_h = rtu_CBTCPBDI[5];

    /* DataStoreWrite: '<S739>/VSB7' */
    VSB7_f = rtu_CBTCPBDI[6];

    /* DataStoreWrite: '<S739>/VSB8' */
    VSB8_i = rtu_CBTCPBDI[7];

    /* DataStoreWrite: '<S739>/VSB9' */
    VSB9_c = rtu_CBTCPBDI[8];

    /* DataStoreWrite: '<S739>/WZ-PB' */
    DI_PBCBTC_WZ = rtu_CBTCPBDI[27];

    /* DataStoreRead: '<S742>/21C-S-ES' incorporates:
     *  DataStoreWrite: '<S743>/21C-S-ES'
     */
    rtb_u1CSES_b = rtu_SESFROM[6];

    /* DataStoreRead: '<S742>/21C-S-WS' incorporates:
     *  DataStoreWrite: '<S743>/21C-S-WS'
     */
    rtb_u1CSWS_hl = rtu_SWSFROM[6];

    /* DataStoreRead: '<S742>/21C-TP' incorporates:
     *  DataStoreWrite: '<S743>/21C-TP'
     */
    rtb_u1CTP_cw = rtu_TPFROM[17];

    /* DataStoreRead: '<S742>/AS' */
    rtb_AS_m = M_GV_AS;

    /* DataStoreRead: '<S742>/DEP-RRLS' */
    rtb_DEPRRLS_f = M_CTRL_RRLS_DEP;

    /* DataStoreRead: '<S742>/DEP-X10-RS' */
    rtb_DEPX10RS_k = M_RS_DEP_10;

    /* DataStoreRead: '<S742>/DEP-X20-RS' */
    rtb_DEPX20RS_f = M_RS_DEP_20;

    /* DataStoreRead: '<S742>/FLASH-0.5S' */
    rtb_FLASH05S_f1 = NONVITALMAIN_DW.M_GV_FLASH_500;

    /* DataStoreRead: '<S742>/FLASH-1S' */
    rtb_FLASH1S_p = M_GV_FLASH_1000;

    /* DataStoreRead: '<S742>/JL10-DEP-RS' */
    rtb_JL10DEPRS_d = M_RS_10_DEP;

    /* DataStoreRead: '<S742>/JL10-GR-DO' incorporates:
     *  DataStoreWrite: '<S743>/JL10-GR-DO'
     */
    rtb_JL10GRDO_by = rtu_GRDOFROM[0];

    /* DataStoreRead: '<S742>/JL20-DEP-RS' */
    rtb_JL20DEPRS_gl = M_RS_20_DEP;

    /* DataStoreRead: '<S742>/JL20-GR-DO' incorporates:
     *  DataStoreWrite: '<S743>/JL20-GR-DO'
     */
    rtb_JL20GRDO_a = rtu_GRDOFROM[1];

    /* DataStoreRead: '<S742>/VDR' */
    rtb_VDR_de = NONVITALMAIN_DW.M_VDR;

    /* DataStoreRead: '<S742>/W21C-NBE-DO' */
    rtb_W21CNBEDO = DO_INDSW_W21C_NBE;

    /* DataStoreRead: '<S742>/W21C-NRE-DO' */
    rtb_W21CNREDO = DO_INDSW_W21C_NRE;

    /* DataStoreRead: '<S742>/W21C-NTE-DO' */
    rtb_W21CNTEDO = DO_INDSW_W21C_NTE;

    /* DataStoreRead: '<S741>/NV-V-CHK' */
    *rty_NVVCHKTO = M_CHK_NV_V;

    /* DataStoreRead: '<S741>/RR' */
    *rty_RRTO = M_GV_RR;

    /* DataStoreRead: '<S741>/J12A-X10-T-REQ' */
    rtb_J12AX10TREQ = M_REQ_T_12_10;

    /* DataStoreRead: '<S741>/J12A-X20-T-REQ' */
    rtb_J12AX20TREQ = M_REQ_T_12_20;

    /* DataStoreRead: '<S741>/J12B-X14-T-REQ' */
    rtb_J12BX14TREQ = M_REQ_T_12_14;

    /* DataStoreRead: '<S741>/J12B-X24-T-REQ' */
    rtb_J12BX24TREQ = M_REQ_T_12_24;

    /* DataStoreRead: '<S741>/J14-J12A-T-REQ' */
    rtb_J14J12ATREQ = M_REQ_T_14_12;

    /* DataStoreRead: '<S741>/J14-J22A-T-REQ' */
    rtb_J14J22ATREQ = M_REQ_T_14_22;

    /* DataStoreRead: '<S741>/J22A-X10-T-REQ' */
    rtb_J22AX10TREQ = M_REQ_T_22_10;

    /* DataStoreRead: '<S741>/J22A-X20-T-REQ' */
    rtb_J22AX20TREQ = M_REQ_T_22_20;

    /* DataStoreRead: '<S741>/J22B-X14-T-REQ' */
    rtb_J22BX14TREQ = M_REQ_T_22_14;

    /* DataStoreRead: '<S741>/J22B-X24-T-REQ' */
    rtb_J22BX24TREQ = M_REQ_T_22_24;

    /* DataStoreRead: '<S741>/J24-J12A-T-REQ' */
    rtb_J24J12ATREQ = M_REQ_T_24_12;

    /* DataStoreRead: '<S741>/J24-J22A-T-REQ' */
    rtb_J24J22ATREQ = M_REQ_T_24_22;

    /* DataStoreRead: '<S741>/JL10-J12B-T-REQ' */
    rtb_JL10J12BTREQ = M_REQ_T_10_12;

    /* DataStoreRead: '<S741>/JL10-J22B-T-REQ' */
    rtb_JL10J22BTREQ = M_REQ_T_10_22;

    /* DataStoreRead: '<S741>/JL20-J12B-T-REQ' */
    rtb_JL20J12BTREQ = M_REQ_T_20_12;

    /* DataStoreRead: '<S741>/JL20-J22B-T-REQ' */
    rtb_JL20J22BTREQ = M_REQ_T_20_22;

    /* DataStoreRead: '<S741>/W11A//21A-N-REQ' */
    rtb_W11A21ANREQ_c = M_W11A_21A_N_REQ;

    /* DataStoreRead: '<S741>/W11B//21B-N-REQ' */
    rtb_W11B21BNREQ_ka = M_W11B_21B_N_REQ;

    /* DataStoreRead: '<S741>/W13A//23A-N-REQ' */
    rtb_W13A23ANREQ_h = M_W13A_23A_N_REQ;

    /* DataStoreRead: '<S741>/W13B//23B-N-REQ' */
    rtb_W13B23BNREQ = M_W13B_23B_N_REQ;

    /* DataStoreRead: '<S741>/W21C-N-REQ' */
    rtb_W21CNREQ_m = M_W21C_N_REQ;

    /* DataStoreRead: '<S741>/W11A//21A-R-REQ' */
    rtb_W11A21ARREQ_i = M_W11A_21A_R_REQ;

    /* DataStoreRead: '<S741>/W11B//21B-R-REQ' */
    rtb_W11B21BRREQ_n = M_W11B_21B_R_REQ;

    /* DataStoreRead: '<S741>/W13A//23A-R-REQ' */
    rtb_W13A23ARREQ_k = M_W13A_23A_R_REQ;

    /* DataStoreRead: '<S741>/W13B//23B-R-REQ' */
    rtb_W13B23BRREQ = M_W13B_23B_R_REQ;

    /* DataStoreRead: '<S741>/W21C-R-REQ' */
    rtb_W21CRREQ_f = M_W21C_R_REQ;

    /* DataStoreRead: '<S741>/W11A//21A-OOC' */
    rtb_W11A21AOOC_bp = M_W11A_21A_OOC;

    /* DataStoreRead: '<S741>/W11B//21B-OOC' */
    rtb_W11B21BOOC_c = M_W11B_21B_OOC;

    /* DataStoreRead: '<S741>/W13A//23A-R-OOC' */
    rtb_W13A23AROOC = M_W13A_23A_OOC;

    /* DataStoreRead: '<S741>/W13B//23B-R-OOC' */
    rtb_W13B23BROOC = M_W13B_23B_OOC;

    /* DataStoreRead: '<S741>/W21C-R-OOC' */
    rtb_W21CROOC = M_W21C_OOC;

    /* DataStoreRead: '<S741>/J12A-RRLSPB-CTRL' */
    rtb_J12ARRLSPBCTRL = M_CTRL_RRLS_12A;

    /* DataStoreRead: '<S741>/J12B-RRLSPB-CTRL' */
    rtb_J12BRRLSPBCTRL = M_CTRL_RRLS_12B;

    /* DataStoreRead: '<S741>/J22A-RRLSPB-CTRL' */
    rtb_J22ARRLSPBCTRL = M_CTRL_RRLS_22A;

    /* DataStoreRead: '<S741>/J22B-RRLSPB-CTRL' */
    rtb_J22BRRLSPBCTRL = M_CTRL_RRLS_22B;

    /* DataStoreRead: '<S741>/X10-RRLSPB-CTRL' */
    rtb_X10RRLSPBCTRL = M_CTRL_RRLS_10;

    /* DataStoreRead: '<S741>/X14-RRLSPB-CTRL' */
    rtb_X14RRLSPBCTRL = M_CTRL_RRLS_14;

    /* DataStoreRead: '<S741>/X20-RRLSPB-CTRL' */
    rtb_X20RRLSPBCTRL = M_CTRL_RRLS_20;

    /* DataStoreRead: '<S741>/X24-RRLSPB-CTRL' */
    rtb_X24RRLSPBCTRL = M_CTRL_RRLS_24;

    /* DataStoreRead: '<S741>/W11A//21A-SWRLSPB-CTRL' */
    rtb_W11A21ASWRLSPBCTRL = M_W11A_21A_CTRL_SWRLS;

    /* DataStoreRead: '<S741>/W11B//21B-SWRLSPB-CTRL' */
    rtb_W11B21BSWRLSPBCTRL = M_W11B_21B_CTRL_SWRLS;

    /* DataStoreRead: '<S741>/W13A//23A-SWRLSPB-CTRL' */
    rtb_W13A23ASWRLSPBCTRL = M_W13A_23A_CTRL_SWRLS;

    /* DataStoreRead: '<S741>/W13B//23B-SWRLSPB-CTRL' */
    rtb_W13B23BSWRLSPBCTRL = M_W13B_23B_CTRL_SWRLS;

    /* DataStoreRead: '<S741>/W21C-SWRLSPB-CTRL' */
    rtb_W21CSWRLSPBCTRL = M_W21C_CTRL_SWRLS;

    /* DataStoreRead: '<S741>/W11A//21A-SWINIT' */
    rtb_W11A21ASWINIT_g = M_W11A_21A_SWINIT;

    /* DataStoreRead: '<S741>/W11B//21B-SWINIT' */
    rtb_W11B21BSWINIT_ae = M_W11B_21B_SWINIT;

    /* DataStoreRead: '<S741>/W13A//23A-SWINIT' */
    rtb_W13A23ASWINIT_cd = M_W13A_23A_SWINIT;

    /* DataStoreRead: '<S741>/W13B//23B-SWINIT' */
    rtb_W13B23BSWINIT_k = M_W13B_23B_SWINIT;

    /* DataStoreRead: '<S741>/W21C-SWINIT' */
    rtb_W21CSWINIT_j = M_W21C_SWINIT;

    /* DataStoreRead: '<S741>/DEP-RST-CTRL' */
    rtb_DEPRSTCTRL_p = M_CTRL_RST_DEP;

    /* DataStoreRead: '<S741>/J12A-RST-CTRL' */
    rtb_J12ARSTCTRL_f = M_CTRL_RST_12A;

    /* DataStoreRead: '<S741>/J12B-RST-CTRL' */
    rtb_J12BRSTCTRL_p = M_CTRL_RST_12B;

    /* DataStoreRead: '<S741>/J14-RST-CTRL' */
    rtb_J14RSTCTRL_d = M_CTRL_RST_14;

    /* DataStoreRead: '<S741>/J22A-RST-CTRL' */
    rtb_J22ARSTCTRL_f = M_CTRL_RST_22A;

    /* DataStoreRead: '<S741>/J22B-RST-CTRL' */
    rtb_J22BRSTCTRL_pg = M_CTRL_RST_22B;

    /* DataStoreRead: '<S741>/J24-RST-CTRL' */
    rtb_J24RSTCTRL_m = M_CTRL_RST_24;

    /* DataStoreRead: '<S741>/JL10-RST-CTRL' */
    rtb_JL10RSTCTRL_g = M_CTRL_RST_10;

    /* DataStoreRead: '<S741>/JL20-RST-CTRL' */
    rtb_JL20RSTCTRL_m = M_CTRL_RST_20;

    /* DataStoreRead: '<S741>/DEP-X10-S-REQ' */
    rtb_DEPX10SREQ = M_REQ_S_DEP_10;

    /* DataStoreRead: '<S741>/DEP-X20-S-REQ' */
    rtb_DEPX20SREQ = M_REQ_S_DEP_20;

    /* DataStoreRead: '<S741>/JL10-DEP-S-REQ' */
    rtb_JL10DEPSREQ = M_REQ_S_10_DEP;

    /* DataStoreRead: '<S741>/JL20-DEP-S-REQ' */
    rtb_JL20DEPSREQ = M_REQ_S_20_DEP;

    /* DataStoreRead: '<S741>/T1-TSB-PB-DI' incorporates:
     *  DataStoreWrite: '<S739>/TSB-T1-PB'
     */
    rtb_T1TSBPBDI = rtu_CBTCPBDI[28];

    /* DataStoreRead: '<S741>/T2-TSB-PB-DI' incorporates:
     *  DataStoreWrite: '<S739>/TSB-T2-PB'
     */
    rtb_T2TSBPBDI = rtu_CBTCPBDI[30];

    /* DataStoreRead: '<S741>/T3-TSB-PB-DI' incorporates:
     *  DataStoreWrite: '<S739>/TSB-T3-PB'
     */
    rtb_T3TSBPBDI = rtu_CBTCPBDI[31];

    /* DataStoreRead: '<S741>/TIB-TSB-PB-DI' incorporates:
     *  DataStoreWrite: '<S739>/TSB-TIB-PB'
     */
    rtb_TIBTSBPBDI = rtu_CBTCPBDI[29];

    /* DataStoreRead: '<S741>/VSB1' */
    rtb_VSB1 = M_CTRL_VSB1;

    /* DataStoreRead: '<S741>/VSB10' */
    rtb_VSB10 = M_CTRL_VSB10;

    /* DataStoreRead: '<S741>/VSB11' */
    rtb_VSB11 = M_CTRL_VSB11;

    /* DataStoreRead: '<S741>/VSB12' */
    rtb_VSB12 = M_CTRL_VSB12;

    /* DataStoreRead: '<S741>/VSB13' */
    rtb_VSB13 = M_CTRL_VSB13;

    /* DataStoreRead: '<S741>/VSB14' */
    rtb_VSB14 = M_CTRL_VSB14;

    /* DataStoreRead: '<S741>/VSB15' */
    rtb_VSB15 = M_CTRL_VSB15;

    /* DataStoreRead: '<S741>/VSB16' */
    rtb_VSB16 = M_CTRL_VSB16;

    /* DataStoreRead: '<S741>/VSB17' */
    rtb_VSB17 = M_CTRL_VSB17;

    /* DataStoreRead: '<S741>/VSB18' */
    rtb_VSB18 = M_CTRL_VSB18;

    /* DataStoreRead: '<S741>/VSB19' */
    rtb_VSB19 = M_CTRL_VSB19;

    /* DataStoreRead: '<S741>/VSB2' */
    rtb_VSB2 = M_CTRL_VSB2;

    /* DataStoreRead: '<S741>/VSB20' */
    rtb_VSB20 = M_CTRL_VSB20;

    /* DataStoreRead: '<S741>/VSB21' */
    rtb_VSB21 = M_CTRL_VSB21;

    /* DataStoreRead: '<S741>/VSB22' */
    rtb_VSB22 = M_CTRL_VSB22;

    /* DataStoreRead: '<S741>/VSB23' */
    rtb_VSB23 = M_CTRL_VSB23;

    /* DataStoreRead: '<S741>/VSB24' */
    rtb_VSB24 = M_CTRL_VSB24;

    /* DataStoreRead: '<S741>/VSB25' */
    rtb_VSB25 = M_CTRL_VSB25;

    /* DataStoreRead: '<S741>/VSB26' */
    rtb_VSB26 = M_CTRL_VSB26;

    /* DataStoreRead: '<S741>/VSB27' */
    rtb_VSB27 = M_CTRL_VSB27;

    /* DataStoreRead: '<S741>/VSB3' */
    rtb_VSB3 = M_CTRL_VSB3;

    /* DataStoreRead: '<S741>/VSB4' */
    rtb_VSB4 = M_CTRL_VSB4;

    /* DataStoreRead: '<S741>/VSB5' */
    rtb_VSB5 = M_CTRL_VSB5;

    /* DataStoreRead: '<S741>/VSB6' */
    rtb_VSB6 = M_CTRL_VSB6;

    /* DataStoreRead: '<S741>/VSB7' */
    rtb_VSB7 = M_CTRL_VSB7;

    /* DataStoreRead: '<S741>/VSB8' */
    rtb_VSB8 = M_CTRL_VSB8;

    /* DataStoreRead: '<S741>/VSB9' */
    rtb_VSB9 = M_CTRL_VSB9;

    /* DataStoreRead: '<S740>/BUZZER-DO' */
    rtb_BUZZERDO = DO_INDG_BUZZ;

    /* DataStoreRead: '<S740>/COMM-1-FAIL-DO' */
    rtb_COMM1FAILDO = DO_INDG_COMM1_FAIL;

    /* DataStoreRead: '<S740>/COMM-2-FAIL-DO' */
    rtb_COMM2FAILDO = DO_INDG_COMM2_FAIL;

    /* DataStoreRead: '<S740>/POINT-FAIL-DO' */
    rtb_POINTFAILDO = DO_INDG_POINT;

    /* DataStoreRead: '<S740>/SISTEM-1-FAIL-DO' */
    rtb_SISTEM1FAILDO = DO_INDG_SYS1_FAIL;

    /* DataStoreRead: '<S740>/SISTEM-2-FAIL-DO' */
    rtb_SISTEM2FAILDO = DO_INDG_SYS2_FAIL;

    /* DataStoreRead: '<S740>/TPR-BANTU-DO' */
    rtb_TPRBANTUDO = DO_INDG_TPR_BANTU;

    /* DataStoreRead: '<S740>/J12A-CGE-DO' */
    rtb_J12ACGEDO = DO_INDJ_12A_CGE;

    /* DataStoreRead: '<S740>/J12A-RGE-DO' */
    rtb_J12ARGEDO = DO_INDJ_12A_RGE;

    /* DataStoreRead: '<S740>/J12B-CGE-DO' */
    rtb_J12BCGEDO = DO_INDJ_12B_CGE;

    /* DataStoreRead: '<S740>/J12B-RGE-DO' */
    rtb_J12BRGEDO = DO_INDJ_12B_RGE;

    /* DataStoreRead: '<S740>/J14-CGE-DO' */
    rtb_J14CGEDO = DO_INDJ_14_CGE;

    /* DataStoreRead: '<S740>/J14-RGE-DO' */
    rtb_J14RGEDO = DO_INDJ_14_RGE;

    /* DataStoreRead: '<S740>/J22A-CGE-DO' */
    rtb_J22ACGEDO = DO_INDJ_22A_CGE;

    /* DataStoreRead: '<S740>/J22A-RGE-DO' */
    rtb_J22ARGEDO = DO_INDJ_22A_RGE;

    /* DataStoreRead: '<S740>/J22B-CGE-DO' */
    rtb_J22BCGEDO = DO_INDJ_22B_CGE;

    /* DataStoreRead: '<S740>/J22B-RGE-DO' */
    rtb_J22BRGEDO = DO_INDJ_22B_RGE;

    /* DataStoreRead: '<S740>/J24-CGE-DO' */
    rtb_J24CGEDO = DO_INDJ_24_CGE;

    /* DataStoreRead: '<S740>/J24-RGE-DO' */
    rtb_J24RGEDO = DO_INDJ_24_RGE;

    /* DataStoreRead: '<S740>/JL10-CGE-DO' */
    rtb_JL10CGEDO = DO_INDJ_10_CGE;

    /* DataStoreRead: '<S740>/JL10-RGE-DO' */
    rtb_JL10RGEDO = DO_INDJ_10_RGE;

    /* DataStoreRead: '<S740>/JL10-WGE-DO' */
    rtb_JL10WGEDO = DO_INDJ_10_WGE;

    /* DataStoreRead: '<S740>/JL20-CGE-DO' */
    rtb_JL20CGEDO = DO_INDJ_20_CGE;

    /* DataStoreRead: '<S740>/JL20-RGE-DO' */
    rtb_JL20RGEDO = DO_INDJ_20_RGE;

    /* DataStoreRead: '<S740>/JL20-WGE-DO' */
    rtb_JL20WGEDO = DO_INDJ_20_WGE;

    /* DataStoreRead: '<S740>/W11A-BE-DO' */
    rtb_W11ABEDO = DO_INDSW_W11A_BE;

    /* DataStoreRead: '<S740>/W11A-LE-DO' */
    rtb_W11ALEDO = DO_INDSW_W11A_LE;

    /* DataStoreRead: '<S740>/W11A-NBE-DO' */
    rtb_W11ANBEDO = DO_INDSW_W11A_NBE;

    /* DataStoreRead: '<S740>/W11A-NRE-DO' */
    rtb_W11ANREDO = DO_INDSW_W11A_NRE;

    /* DataStoreRead: '<S740>/W11A-NTE-DO' */
    rtb_W11ANTEDO = DO_INDSW_W11A_NTE;

    /* DataStoreRead: '<S740>/W11A-NWBE-DO' */
    rtb_W11ANWBEDO = DO_INDSW_W11A_NWBE;

    /* DataStoreRead: '<S740>/W11A-NWRE-DO' */
    rtb_W11ANWREDO = DO_INDSW_W11A_NWRE;

    /* DataStoreRead: '<S740>/W11A-NWTE-DO' */
    rtb_W11ANWTEDO = DO_INDSW_W11A_NWTE;

    /* DataStoreRead: '<S740>/W11A-RBE-DO' */
    rtb_W11ARBEDO = DO_INDSW_W11A_RBE;

    /* DataStoreRead: '<S740>/W11A-RRE-DO' */
    rtb_W11ARREDO = DO_INDSW_W11A_RRE;

    /* DataStoreRead: '<S740>/W11A-RTE-DO' */
    rtb_W11ARTEDO = DO_INDSW_W11A_RTE;

    /* DataStoreRead: '<S740>/W11A-RWBE-DO' */
    rtb_W11ARWBEDO = DO_INDSW_W11A_RWBE;

    /* DataStoreRead: '<S740>/W11A-RWRE-DO' */
    rtb_W11ARWREDO = DO_INDSW_W11A_RWRE;

    /* DataStoreRead: '<S740>/W11A-RWTE-DO' */
    rtb_W11ARWTEDO = DO_INDSW_W11A_RWTE;

    /* DataStoreRead: '<S740>/W11B-BE-DO' */
    rtb_W11BBEDO = DO_INDSW_W11B_BE;

    /* DataStoreRead: '<S740>/W11B-LE-DO' */
    rtb_W11BLEDO = DO_INDSW_W11B_LE;

    /* DataStoreRead: '<S740>/W11B-NBE-DO' */
    rtb_W11BNBEDO = DO_INDSW_W11B_NBE;

    /* DataStoreRead: '<S740>/W11B-NRE-DO' */
    rtb_W11BNREDO = DO_INDSW_W11B_NRE;

    /* DataStoreRead: '<S740>/W11B-NTE-DO' */
    rtb_W11BNTEDO = DO_INDSW_W11B_NTE;

    /* DataStoreRead: '<S740>/W11B-NWBE-DO' */
    rtb_W11BNWBEDO = DO_INDSW_W11B_NWBE;

    /* DataStoreRead: '<S740>/W11B-NWRE-DO' */
    rtb_W11BNWREDO = DO_INDSW_W11B_NWRE;

    /* DataStoreRead: '<S740>/W11B-NWTE-DO' */
    rtb_W11BNWTEDO = DO_INDSW_W11B_NWTE;

    /* DataStoreRead: '<S740>/W11B-RBE-DO' */
    rtb_W11BRBEDO = DO_INDSW_W11B_RBE;

    /* DataStoreRead: '<S740>/W11B-RRE-DO' */
    rtb_W11BRREDO = DO_INDSW_W11B_RRE;

    /* DataStoreRead: '<S740>/W11B-RTE-DO' */
    rtb_W11BRTEDO = DO_INDSW_W11B_RTE;

    /* DataStoreRead: '<S740>/W11B-RWBE-DO' */
    rtb_W11BRWBEDO = DO_INDSW_W11B_RWBE;

    /* DataStoreRead: '<S740>/W11B-RWRE-DO' */
    rtb_W11BRWREDO = DO_INDSW_W11B_RWRE;

    /* DataStoreRead: '<S740>/W11B-RWTE-DO' */
    rtb_W11BRWTEDO = DO_INDSW_W11B_RWTE;

    /* DataStoreRead: '<S740>/W13A-BE-DO' */
    rtb_W13ABEDO = DO_INDSW_W13A_BE;

    /* DataStoreRead: '<S740>/W13A-LE-DO' */
    rtb_W13ALEDO = DO_INDSW_W13A_LE;

    /* DataStoreRead: '<S740>/W13A-NBE-DO' */
    rtb_W13ANBEDO = DO_INDSW_W13A_NBE;

    /* DataStoreRead: '<S740>/W13A-NRE-DO' */
    rtb_W13ANREDO = DO_INDSW_W13A_NRE;

    /* DataStoreRead: '<S740>/W13A-NTE-DO' */
    rtb_W13ANTEDO = DO_INDSW_W13A_NTE;

    /* DataStoreRead: '<S740>/W13A-NWBE-DO' */
    rtb_W13ANWBEDO = DO_INDSW_W13A_NWBE;

    /* DataStoreRead: '<S740>/W13A-NWRE-DO' */
    rtb_W13ANWREDO = DO_INDSW_W13A_NWRE;

    /* DataStoreRead: '<S740>/W13A-NWTE-DO' */
    rtb_W13ANWTEDO = DO_INDSW_W13A_NWTE;

    /* DataStoreRead: '<S740>/W13A-RBE-DO' */
    rtb_W13ARBEDO = DO_INDSW_W13A_RBE;

    /* DataStoreRead: '<S740>/W13A-RRE-DO' */
    rtb_W13ARREDO = DO_INDSW_W13A_RRE;

    /* DataStoreRead: '<S740>/W13A-RTE-DO' */
    rtb_W13ARTEDO = DO_INDSW_W13A_RTE;

    /* DataStoreRead: '<S740>/W13A-RWBE-DO' */
    rtb_W13ARWBEDO = DO_INDSW_W13A_RWBE;

    /* DataStoreRead: '<S740>/W13A-RWRE-DO' */
    rtb_W13ARWREDO = DO_INDSW_W13A_RWRE;

    /* DataStoreRead: '<S740>/W13A-RWTE-DO' */
    rtb_W13ARWTEDO = DO_INDSW_W13A_RWTE;

    /* DataStoreRead: '<S740>/W13B-BE-DO' */
    rtb_W13BBEDO = DO_INDSW_W13B_BE;

    /* DataStoreRead: '<S740>/W13B-LE-DO' */
    rtb_W13BLEDO = DO_INDSW_W13B_LE;

    /* DataStoreRead: '<S740>/W13B-NBE-DO' */
    rtb_W13BNBEDO = DO_INDSW_W13B_NBE;

    /* DataStoreRead: '<S740>/W13B-NRE-DO' */
    rtb_W13BNREDO = DO_INDSW_W13B_NRE;

    /* DataStoreRead: '<S740>/W13B-NTE-DO' */
    rtb_W13BNTEDO = DO_INDSW_W13B_NTE;

    /* DataStoreRead: '<S740>/W13B-NWBE-DO' */
    rtb_W13BNWBEDO = DO_INDSW_W13B_NWBE;

    /* DataStoreRead: '<S740>/W13B-NWRE-DO' */
    rtb_W13BNWREDO = DO_INDSW_W13B_NWRE;

    /* DataStoreRead: '<S740>/W13B-NWTE-DO' */
    rtb_W13BNWTEDO = DO_INDSW_W13B_NWTE;

    /* DataStoreRead: '<S740>/W13B-RBE-DO' */
    rtb_W13BRBEDO = DO_INDSW_W13B_RBE;

    /* DataStoreRead: '<S740>/W13B-RRE-DO' */
    rtb_W13BRREDO = DO_INDSW_W13B_RRE;

    /* DataStoreRead: '<S740>/W13B-RTE-DO' */
    rtb_W13BRTEDO = DO_INDSW_W13B_RTE;

    /* DataStoreRead: '<S740>/W13B-RWBE-DO' */
    rtb_W13BRWBEDO = DO_INDSW_W13B_RWBE;

    /* DataStoreRead: '<S740>/W13B-RWRE-DO' */
    rtb_W13BRWREDO = DO_INDSW_W13B_RWRE;

    /* DataStoreRead: '<S740>/W13B-RWTE-DO' */
    rtb_W13BRWTEDO = DO_INDSW_W13B_RWTE;

    /* DataStoreRead: '<S740>/W21A-BE-DO' */
    rtb_W21ABEDO = DO_INDSW_W21A_BE;

    /* DataStoreRead: '<S740>/W21A-LE-DO' */
    rtb_W21ALEDO = DO_INDSW_W21A_LE;

    /* DataStoreRead: '<S740>/W21A-NBE-DO' */
    rtb_W21ANBEDO = DO_INDSW_W21A_NBE;

    /* DataStoreRead: '<S740>/W21A-NRE-DO' */
    rtb_W21ANREDO = DO_INDSW_W21A_NRE;

    /* DataStoreRead: '<S740>/W21A-NTE-DO' */
    rtb_W21ANTEDO = DO_INDSW_W21A_NTE;

    /* DataStoreRead: '<S740>/W21A-NWBE-DO' */
    rtb_W21ANWBEDO = DO_INDSW_W21A_NWBE;

    /* DataStoreRead: '<S740>/W21A-NWRE-DO' */
    rtb_W21ANWREDO = DO_INDSW_W21A_NWRE;

    /* DataStoreRead: '<S740>/W21A-NWTE-DO' */
    rtb_W21ANWTEDO = DO_INDSW_W21A_NWTE;

    /* DataStoreRead: '<S740>/W21A-RBE-DO' */
    rtb_W21ARBEDO = DO_INDSW_W21A_RBE;

    /* DataStoreRead: '<S740>/W21A-RRE-DO' */
    rtb_W21ARREDO = DO_INDSW_W21A_RRE;

    /* DataStoreRead: '<S740>/W21A-RTE-DO' */
    rtb_W21ARTEDO = DO_INDSW_W21A_RTE;

    /* DataStoreRead: '<S740>/W21A-RWBE-DO' */
    rtb_W21ARWBEDO = DO_INDSW_W21A_RWBE;

    /* DataStoreRead: '<S740>/W21A-RWRE-DO' */
    rtb_W21ARWREDO = DO_INDSW_W21A_RWRE;

    /* DataStoreRead: '<S740>/W21A-RWTE-DO' */
    rtb_W21ARWTEDO = DO_INDSW_W21A_RWTE;

    /* DataStoreRead: '<S740>/W21B-BE-DO' */
    rtb_W21BBEDO = DO_INDSW_W21B_BE;

    /* DataStoreRead: '<S740>/W21B-LE-DO' */
    rtb_W21BLEDO = DO_INDSW_W21B_LE;

    /* DataStoreRead: '<S740>/W21B-NBE-DO' */
    rtb_W21BNBEDO = DO_INDSW_W21B_NBE;

    /* DataStoreRead: '<S740>/W21B-NRE-DO' */
    rtb_W21BNREDO = DO_INDSW_W21B_NRE;

    /* DataStoreRead: '<S740>/W21B-NTE-DO' */
    rtb_W21BNTEDO = DO_INDSW_W21B_NTE;

    /* DataStoreRead: '<S740>/W21B-NWBE-DO' */
    rtb_W21BNWBEDO = DO_INDSW_W21B_NWBE;

    /* DataStoreRead: '<S740>/W21B-NWRE-DO' */
    rtb_W21BNWREDO = DO_INDSW_W21B_NWRE;

    /* DataStoreRead: '<S740>/W21B-NWTE-DO' */
    rtb_W21BNWTEDO = DO_INDSW_W21B_NWTE;

    /* DataStoreRead: '<S740>/W21B-RBE-DO' */
    rtb_W21BRBEDO = DO_INDSW_W21B_RBE;

    /* DataStoreRead: '<S740>/W21B-RRE-DO' */
    rtb_W21BRREDO = DO_INDSW_W21B_RRE;

    /* DataStoreRead: '<S740>/W21B-RTE-DO' */
    rtb_W21BRTEDO = DO_INDSW_W21B_RTE;

    /* DataStoreRead: '<S740>/W21B-RWBE-DO' */
    rtb_W21BRWBEDO = DO_INDSW_W21B_RWBE;

    /* DataStoreRead: '<S740>/W21B-RWRE-DO' */
    rtb_W21BRWREDO = DO_INDSW_W21B_RWRE;

    /* DataStoreRead: '<S740>/W21B-RWTE-DO' */
    rtb_W21BRWTEDO = DO_INDSW_W21B_RWTE;

    /* DataStoreRead: '<S740>/W21C-BE-DO' */
    rtb_W21CBEDO = DO_INDSW_W21C_BE;

    /* DataStoreRead: '<S740>/W21C-LE-DO' */
    rtb_W21CLEDO = DO_INDSW_W21C_LE;

    /* DataStoreRead: '<S740>/W21C-NWBE-DO' */
    rtb_W21CNWBEDO = DO_INDSW_W21C_NWBE;

    /* DataStoreRead: '<S740>/W21C-NWRE-DO' */
    rtb_W21CNWREDO = DO_INDSW_W21C_NWRE;

    /* DataStoreRead: '<S740>/W21C-NWTE-DO' */
    rtb_W21CNWTEDO = DO_INDSW_W21C_NWTE;

    /* DataStoreRead: '<S740>/W21C-RBE-DO' */
    rtb_W21CRBEDO = DO_INDSW_W21C_RBE;

    /* DataStoreRead: '<S740>/W21C-RRE-DO' */
    rtb_W21CRREDO = DO_INDSW_W21C_RRE;

    /* DataStoreRead: '<S740>/W21C-RTE-DO' */
    rtb_W21CRTEDO = DO_INDSW_W21C_RTE;

    /* DataStoreRead: '<S740>/W21C-RWBE-DO' */
    rtb_W21CRWBEDO = DO_INDSW_W21C_RWBE;

    /* DataStoreRead: '<S740>/W21C-RWRE-DO' */
    rtb_W21CRWREDO = DO_INDSW_W21C_RWRE;

    /* DataStoreRead: '<S740>/W21C-RWTE-DO' */
    rtb_W21CRWTEDO = DO_INDSW_W21C_RWTE;

    /* DataStoreRead: '<S740>/W23A-BE-DO' */
    rtb_W23ABEDO = DO_INDSW_W23A_BE;

    /* DataStoreRead: '<S740>/W23A-LE-DO' */
    rtb_W23ALEDO = DO_INDSW_W23A_LE;

    /* DataStoreRead: '<S740>/W23A-NBE-DO' */
    rtb_W23ANBEDO = DO_INDSW_W23A_NBE;

    /* DataStoreRead: '<S740>/W23A-NRE-DO' */
    rtb_W23ANREDO = DO_INDSW_W23A_NRE;

    /* DataStoreRead: '<S740>/W23A-NTE-DO' */
    rtb_W23ANTEDO = DO_INDSW_W23A_NTE;

    /* DataStoreRead: '<S740>/W23A-NWBE-DO' */
    rtb_W23ANWBEDO = DO_INDSW_W23A_NWBE;

    /* DataStoreRead: '<S740>/W23A-NWRE-DO' */
    rtb_W23ANWREDO = DO_INDSW_W23A_NWRE;

    /* DataStoreRead: '<S740>/W23A-NWTE-DO' */
    rtb_W23ANWTEDO = DO_INDSW_W23A_NWTE;

    /* DataStoreRead: '<S740>/W23A-RBE-DO' */
    rtb_W23ARBEDO = DO_INDSW_W23A_RBE;

    /* DataStoreRead: '<S740>/W23A-RRE-DO' */
    rtb_W23ARREDO = DO_INDSW_W23A_RRE;

    /* DataStoreRead: '<S740>/W23A-RTE-DO' */
    rtb_W23ARTEDO = DO_INDSW_W23A_RTE;

    /* DataStoreRead: '<S740>/W23A-RWBE-DO' */
    rtb_W23ARWBEDO = DO_INDSW_W23A_RWBE;

    /* DataStoreRead: '<S740>/W23A-RWRE-DO' */
    rtb_W23ARWREDO = DO_INDSW_W23A_RWRE;

    /* DataStoreRead: '<S740>/W23A-RWTE-DO' */
    rtb_W23ARWTEDO = DO_INDSW_W23A_RWTE;

    /* DataStoreRead: '<S740>/W23B-BE-DO' */
    rtb_W23BBEDO = DO_INDSW_W23B_BE;

    /* DataStoreRead: '<S740>/W23B-LE-DO' */
    rtb_W23BLEDO = DO_INDSW_W23B_LE;

    /* DataStoreRead: '<S740>/W23B-NBE-DO' */
    rtb_W23BNBEDO = DO_INDSW_W23B_NBE;

    /* DataStoreRead: '<S740>/W23B-NRE-DO' */
    rtb_W23BNREDO = DO_INDSW_W23B_NRE;

    /* DataStoreRead: '<S740>/W23B-NTE-DO' */
    rtb_W23BNTEDO = DO_INDSW_W23B_NTE;

    /* DataStoreRead: '<S740>/W23B-NWBE-DO' */
    rtb_W23BNWBEDO = DO_INDSW_W23B_NWBE;

    /* DataStoreRead: '<S740>/W23B-NWRE-DO' */
    rtb_W23BNWREDO = DO_INDSW_W23B_NWRE;

    /* DataStoreRead: '<S740>/W23B-NWTE-DO' */
    rtb_W23BNWTEDO = DO_INDSW_W23B_NWTE;

    /* DataStoreRead: '<S740>/W23B-RBE-DO' */
    rtb_W23BRBEDO = DO_INDSW_W23B_RBE;

    /* DataStoreRead: '<S740>/W23B-RRE-DO' */
    rtb_W23BRREDO = DO_INDSW_W23B_RRE;

    /* DataStoreRead: '<S740>/W23B-RTE-DO' */
    rtb_W23BRTEDO = DO_INDSW_W23B_RTE;

    /* DataStoreRead: '<S740>/W23B-RWBE-DO' */
    rtb_W23BRWBEDO = DO_INDSW_W23B_RWBE;

    /* DataStoreRead: '<S740>/W23B-RWRE-DO' */
    rtb_W23BRWREDO = DO_INDSW_W23B_RWRE;

    /* DataStoreRead: '<S740>/W23B-RWTE-DO' */
    rtb_W23BRWTEDO = DO_INDSW_W23B_RWTE;

    /* DataStoreRead: '<S740>/10A-BE-DO' */
    rtb_u0ABEDO = DO_INDT_BE_10A;

    /* DataStoreRead: '<S740>/10A-RE-DO' */
    rtb_u0AREDO = DO_INDT_RE_10A;

    /* DataStoreRead: '<S740>/10A-TE-DO' */
    rtb_u0ATEDO = DO_INDT_TE_10A;

    /* DataStoreRead: '<S740>/10B-BE-DO' */
    rtb_u0BBEDO = DO_INDT_BE_10B;

    /* DataStoreRead: '<S740>/10B-RE-DO' */
    rtb_u0BREDO = DO_INDT_RE_10B;

    /* DataStoreRead: '<S740>/10B-TE-DO' */
    rtb_u0BTEDO = DO_INDT_TE_10B;

    /* DataStoreRead: '<S740>/11A-BE-DO' */
    rtb_u1ABEDO = DO_INDT_BE_11A;

    /* DataStoreRead: '<S740>/11A-RE-DO' */
    rtb_u1AREDO = DO_INDT_RE_11A;

    /* DataStoreRead: '<S740>/11A-TE-DO' */
    rtb_u1ATEDO = DO_INDT_TE_11A;

    /* DataStoreRead: '<S740>/11B-BE-DO' */
    rtb_u1BBEDO = DO_INDT_BE_11B;

    /* DataStoreRead: '<S740>/11B-RE-DO' */
    rtb_u1BREDO = DO_INDT_RE_11B;

    /* DataStoreRead: '<S740>/11B-TE-DO' */
    rtb_u1BTEDO = DO_INDT_TE_11B;

    /* DataStoreRead: '<S740>/12A-BE-DO' */
    rtb_u2ABEDO = DO_INDT_BE_12A;

    /* DataStoreRead: '<S740>/12A-RE-DO' */
    rtb_u2AREDO = DO_INDT_RE_12A;

    /* DataStoreRead: '<S740>/12A-TE-DO' */
    rtb_u2ATEDO = DO_INDT_TE_12A;

    /* DataStoreRead: '<S740>/12B-BE-DO' */
    rtb_u2BBEDO = DO_INDT_BE_12B;

    /* DataStoreRead: '<S740>/12B-RE-DO' */
    rtb_u2BREDO = DO_INDT_RE_12B;

    /* DataStoreRead: '<S740>/12B-TE-DO' */
    rtb_u2BTEDO = DO_INDT_TE_12B;

    /* DataStoreRead: '<S740>/12C-BE-DO' */
    rtb_u2CBEDO = DO_INDT_BE_12C;

    /* DataStoreRead: '<S740>/12C-RE-DO' */
    rtb_u2CREDO = DO_INDT_RE_12C;

    /* DataStoreRead: '<S740>/12C-TE-DO' */
    rtb_u2CTEDO = DO_INDT_TE_12C;

    /* DataStoreRead: '<S740>/12D-BE-DO' */
    rtb_u2DBEDO = DO_INDT_BE_12D;

    /* DataStoreRead: '<S740>/12D-RE-DO' */
    rtb_u2DREDO = DO_INDT_RE_12D;

    /* DataStoreRead: '<S740>/12D-TE-DO' */
    rtb_u2DTEDO = DO_INDT_TE_12D;

    /* DataStoreRead: '<S740>/12E-BE-DO' */
    rtb_u2EBEDO = DO_INDT_BE_12E;

    /* DataStoreRead: '<S740>/12E-RE-DO' */
    rtb_u2EREDO = DO_INDT_RE_12E;

    /* DataStoreRead: '<S740>/12E-TE-DO' */
    rtb_u2ETEDO = DO_INDT_TE_12E;

    /* DataStoreRead: '<S740>/13A-BE-DO' */
    rtb_u3ABEDO = DO_INDT_BE_13A;

    /* DataStoreRead: '<S740>/13A-RE-DO' */
    rtb_u3AREDO = DO_INDT_RE_13A;

    /* DataStoreRead: '<S740>/13A-TE-DO' */
    rtb_u3ATEDO = DO_INDT_TE_13A;

    /* DataStoreRead: '<S740>/13B-BE-DO' */
    rtb_u3BBEDO = DO_INDT_BE_13B;

    /* DataStoreRead: '<S740>/13B-RE-DO' */
    rtb_u3BREDO = DO_INDT_RE_13B;

    /* DataStoreRead: '<S740>/13B-TE-DO' */
    rtb_u3BTEDO = DO_INDT_TE_13B;

    /* DataStoreRead: '<S740>/14A-BE-DO' */
    rtb_u4ABEDO = DO_INDT_BE_14A;

    /* DataStoreRead: '<S740>/14A-RE-DO' */
    rtb_u4AREDO = DO_INDT_RE_14A;

    /* DataStoreRead: '<S740>/14A-TE-DO' */
    rtb_u4ATEDO = DO_INDT_TE_14A;

    /* DataStoreRead: '<S740>/14B-BE-DO' */
    rtb_u4BBEDO = DO_INDT_BE_14B;

    /* DataStoreRead: '<S740>/14B-RE-DO' */
    rtb_u4BREDO = DO_INDT_RE_14B;

    /* DataStoreRead: '<S740>/14B-TE-DO' */
    rtb_u4BTEDO = DO_INDT_TE_14B;

    /* DataStoreRead: '<S740>/20A-BE-DO' */
    rtb_u0ABEDO_a = DO_INDT_BE_20A;

    /* DataStoreRead: '<S740>/20A-RE-DO' */
    rtb_u0AREDO_m = DO_INDT_RE_20A;

    /* DataStoreRead: '<S740>/20A-TE-DO' */
    rtb_u0ATEDO_j = DO_INDT_TE_20A;

    /* DataStoreRead: '<S740>/20B-BE-DO' */
    rtb_u0BBEDO_m = DO_INDT_BE_20B;

    /* DataStoreRead: '<S740>/20B-RE-DO' */
    rtb_u0BREDO_l = DO_INDT_RE_20B;

    /* DataStoreRead: '<S740>/20B-TE-DO' */
    rtb_u0BTEDO_j = DO_INDT_TE_20B;

    /* DataStoreRead: '<S740>/21A-BE-DO' */
    rtb_u1ABEDO_p = DO_INDT_BE_21A;

    /* DataStoreRead: '<S740>/21A-RE-DO' */
    rtb_u1AREDO_h = DO_INDT_RE_21A;

    /* DataStoreRead: '<S740>/21A-TE-DO' */
    rtb_u1ATEDO_b = DO_INDT_TE_21A;

    /* DataStoreRead: '<S740>/21B-BE-DO' */
    rtb_u1BBEDO_b = DO_INDT_BE_21B;

    /* DataStoreRead: '<S740>/21B-RE-DO' */
    rtb_u1BREDO_n = DO_INDT_RE_21B;

    /* DataStoreRead: '<S740>/21B-TE-DO' */
    rtb_u1BTEDO_p = DO_INDT_TE_21B;

    /* DataStoreRead: '<S740>/21C-BE-DO' */
    rtb_u1CBEDO = DO_INDT_BE_21C;

    /* DataStoreRead: '<S740>/21C-RE-DO' */
    rtb_u1CREDO = DO_INDT_RE_21C;

    /* DataStoreRead: '<S740>/21C-TE-DO' */
    rtb_u1CTEDO = DO_INDT_TE_21C;

    /* DataStoreRead: '<S740>/22A-BE-DO' */
    rtb_u2ABEDO_h = DO_INDT_BE_22A;

    /* DataStoreRead: '<S740>/22A-RE-DO' */
    rtb_u2AREDO_f = DO_INDT_RE_22A;

    /* DataStoreRead: '<S740>/22A-TE-DO' */
    rtb_u2ATEDO_l = DO_INDT_TE_22A;

    /* DataStoreRead: '<S740>/22B-BE-DO' */
    rtb_u2BBEDO_a = DO_INDT_BE_22B;

    /* DataStoreRead: '<S740>/22B-RE-DO' */
    rtb_u2BREDO_l = DO_INDT_RE_22B;

    /* DataStoreRead: '<S740>/22B-TE-DO' */
    rtb_u2BTEDO_n = DO_INDT_TE_22B;

    /* DataStoreRead: '<S740>/22C-BE-DO' */
    rtb_u2CBEDO_o = DO_INDT_BE_22C;

    /* DataStoreRead: '<S740>/22C-RE-DO' */
    rtb_u2CREDO_n = DO_INDT_RE_22C;

    /* DataStoreRead: '<S740>/22C-TE-DO' */
    rtb_u2CTEDO_h = DO_INDT_TE_22C;

    /* DataStoreRead: '<S740>/22D-BE-DO' */
    rtb_u2DBEDO_b = DO_INDT_BE_22D;

    /* DataStoreRead: '<S740>/22D-RE-DO' */
    rtb_u2DREDO_j = DO_INDT_RE_22D;

    /* DataStoreRead: '<S740>/22D-TE-DO' */
    rtb_u2DTEDO_j = DO_INDT_TE_22D;

    /* DataStoreRead: '<S740>/22E-BE-DO' */
    rtb_u2EBEDO_o = DO_INDT_BE_22E;

    /* DataStoreRead: '<S740>/22E-RE-DO' */
    rtb_u2EREDO_b = DO_INDT_RE_22E;

    /* DataStoreRead: '<S740>/22E-TE-DO' */
    rtb_u2ETEDO_g = DO_INDT_TE_22E;

    /* DataStoreRead: '<S740>/23A-BE-DO' */
    rtb_u3ABEDO_l = DO_INDT_BE_23A;

    /* DataStoreRead: '<S740>/23A-RE-DO' */
    rtb_u3AREDO_p = DO_INDT_RE_23A;

    /* DataStoreRead: '<S740>/23A-TE-DO' */
    rtb_u3ATEDO_p = DO_INDT_TE_23A;

    /* DataStoreRead: '<S740>/23B-BE-DO' */
    rtb_u3BBEDO_p = DO_INDT_BE_23B;

    /* DataStoreRead: '<S740>/23B-RE-DO' */
    rtb_u3BREDO_e = DO_INDT_RE_23B;

    /* DataStoreRead: '<S740>/23B-TE-DO' */
    rtb_u3BTEDO_g = DO_INDT_TE_23B;

    /* DataStoreRead: '<S740>/24A-BE-DO' */
    rtb_u4ABEDO_n = DO_INDT_BE_24A;

    /* DataStoreRead: '<S740>/24A-RE-DO' */
    rtb_u4AREDO_e = DO_INDT_RE_24A;

    /* DataStoreRead: '<S740>/24A-TE-DO' */
    rtb_u4ATEDO_d = DO_INDT_TE_24A;

    /* DataStoreRead: '<S740>/24B-BE-DO' */
    rtb_u4BBEDO_d = DO_INDT_BE_24B;

    /* DataStoreRead: '<S740>/24B-RE-DO' */
    rtb_u4BREDO_e = DO_INDT_RE_24B;

    /* DataStoreRead: '<S740>/24B-TE-DO' */
    rtb_u4BTEDO_k = DO_INDT_TE_24B;

    /* DataStoreRead: '<S740>/J12A-ARE-DO' */
    rtb_J12AAREDO = DO_INDAR_J12A;

    /* DataStoreRead: '<S740>/J12A-PBE-DO' */
    rtb_J12APBEDO = DO_INDPB_J12A;

    /* DataStoreRead: '<S740>/J12B-ARE-DO' */
    rtb_J12BAREDO = DO_INDAR_J12B;

    /* DataStoreRead: '<S740>/J12B-PBE-DO' */
    rtb_J12BPBEDO = DO_INDPB_J12B;

    /* DataStoreRead: '<S740>/J14-ARE-DO' */
    rtb_J14AREDO = DO_INDAR_J14;

    /* DataStoreRead: '<S740>/J14-PBE-DO' */
    rtb_J14PBEDO = DO_INDPB_J14;

    /* DataStoreRead: '<S740>/J22A-ARE-DO' */
    rtb_J22AAREDO = DO_INDAR_J22A;

    /* DataStoreRead: '<S740>/J22A-PBE-DO' */
    rtb_J22APBEDO = DO_INDPB_J22A;

    /* DataStoreRead: '<S740>/J22B-ARE-DO' */
    rtb_J22BAREDO = DO_INDAR_J22B;

    /* DataStoreRead: '<S740>/J22B-PBE-DO' */
    rtb_J22BPBEDO = DO_INDPB_J22B;

    /* DataStoreRead: '<S740>/J24-ARE-DO' */
    rtb_J24AREDO = DO_INDAR_J24;

    /* DataStoreRead: '<S740>/J24-PBE-DO' */
    rtb_J24PBEDO = DO_INDPB_J24;

    /* DataStoreRead: '<S740>/JL10-ARE-DO' */
    rtb_JL10AREDO = DO_INDAR_JL10;

    /* DataStoreRead: '<S740>/JL10-PBE-DO' */
    rtb_JL10PBEDO = DO_INDPB_JL10;

    /* DataStoreRead: '<S740>/JL20-ARE-DO' */
    rtb_JL20AREDO = DO_INDAR_JL20;

    /* DataStoreRead: '<S740>/JL20-PBE-DO' */
    rtb_JL20PBEDO = DO_INDPB_JL20;

    /* DataStoreRead: '<S740>/X10-PBE-DO' */
    rtb_X10PBEDO = DO_INDPB_X10;

    /* DataStoreRead: '<S740>/X14-PBE-DO' */
    rtb_X14PBEDO = DO_INDPB_X14;

    /* DataStoreRead: '<S740>/X20-PBE-DO' */
    rtb_X20PBEDO = DO_INDPB_X20;

    /* DataStoreRead: '<S740>/X24-PBE-DO' */
    rtb_X24PBEDO = DO_INDPB_X24;

    /* DataStoreRead: '<S740>/FROM-DEP-FE-DO' */
    rtb_FROMDEPFEDO = DO_FE_FROM_DEP;

    /* DataStoreRead: '<S740>/FROM-DEP-FLE-DO' */
    rtb_FROMDEPFLEDO = DO_FLE_FROM_DEP;

    /* DataStoreRead: '<S740>/FROM-DEP-PBE-DO' */
    rtb_FROMDEPPBEDO = DO_PBE_FROM_DEP;

    /* DataStoreRead: '<S740>/T1ED1' */
    rtb_T1ED1 = DO_CBTC_T1_ED1;

    /* DataStoreRead: '<S740>/T1ED2' */
    rtb_T1ED2 = DO_CBTC_T1_ED2;

    /* DataStoreRead: '<S740>/T1ED3' */
    rtb_T1ED3 = DO_CBTC_T1_ED3;

    /* DataStoreRead: '<S740>/T1ED4' */
    rtb_T1ED4 = DO_CBTC_T1_ED4;

    /* DataStoreRead: '<S740>/T1ESB1' */
    rtb_T1ESB1 = DO_CBTC_T1_PSD1;

    /* DataStoreRead: '<S740>/T1ESB2' */
    rtb_T1ESB2 = DO_CBTC_T1_PSD2;

    /* DataStoreRead: '<S740>/T1PSD1' */
    rtb_T1PSD1 = DO_CBTC_T1_ESB1;

    /* DataStoreRead: '<S740>/T1PSD2' */
    rtb_T1PSD2 = DO_CBTC_T1_ESB2;

    /* DataStoreRead: '<S740>/T2ED1' */
    rtb_T2ED1 = DO_CBTC_T2_ED1;

    /* DataStoreRead: '<S740>/T2ED2' */
    rtb_T2ED2 = DO_CBTC_T2_ED2;

    /* DataStoreRead: '<S740>/T2ED3' */
    rtb_T2ED3 = DO_CBTC_T2_ED3;

    /* DataStoreRead: '<S740>/T2ED4' */
    rtb_T2ED4 = DO_CBTC_T2_ED4;

    /* DataStoreRead: '<S740>/T2ESB1' */
    rtb_T2ESB1 = DO_CBTC_T2_PSD1;

    /* DataStoreRead: '<S740>/T2ESB2' */
    rtb_T2ESB2 = DO_CBTC_T2_PSD2;

    /* DataStoreRead: '<S740>/T2PSD1' */
    rtb_T2PSD1 = DO_CBTC_T2_ESB1;

    /* DataStoreRead: '<S740>/T2PSD2' */
    rtb_T2PSD2 = DO_CBTC_T2_ESB2;

    /* DataStoreRead: '<S740>/T3ED1' */
    rtb_T3ED1 = DO_CBTC_T3_ED1;

    /* DataStoreRead: '<S740>/T3ED2' */
    rtb_T3ED2 = DO_CBTC_T3_ED2;

    /* DataStoreRead: '<S740>/T3ED3' */
    rtb_T3ED3 = DO_CBTC_T3_ED3;

    /* DataStoreRead: '<S740>/T3ED4' */
    rtb_T3ED4 = DO_CBTC_T3_ED4;

    /* DataStoreRead: '<S740>/T3ESB1' */
    rtb_T3ESB1 = DO_CBTC_T3_PSD1;

    /* DataStoreRead: '<S740>/T3ESB2' */
    rtb_T3ESB2 = DO_CBTC_T3_PSD2;

    /* DataStoreRead: '<S740>/T3PSD1' */
    rtb_T3PSD1 = DO_CBTC_T3_ESB1;

    /* DataStoreRead: '<S740>/T3PSD2' */
    rtb_T3PSD2 = DO_CBTC_T3_ESB2;

    /* DataStoreRead: '<S740>/TBW-CT-DO' */
    rtb_TBWCTDO = DO_CT_TBW;

    /* DataStoreRead: '<S740>/TIBED1' */
    rtb_TIBED1 = DO_CBTC_TIB_ED1;

    /* DataStoreRead: '<S740>/TIBED2' */
    rtb_TIBED2 = DO_CBTC_TIB_ED2;

    /* DataStoreRead: '<S740>/TIBED3' */
    rtb_TIBED3 = DO_CBTC_TIB_ED3;

    /* DataStoreRead: '<S740>/TIBED4' */
    rtb_TIBED4 = DO_CBTC_TIB_ED4;

    /* DataStoreRead: '<S740>/TIBESB1' */
    rtb_TIBESB1 = DO_CBTC_TIB_PSD1;

    /* DataStoreRead: '<S740>/TIBESB2' */
    rtb_TIBESB2 = DO_CBTC_TIB_PSD2;

    /* DataStoreRead: '<S740>/TIBPSD1' */
    rtb_TIBPSD1 = DO_CBTC_TIB_ESB1;

    /* DataStoreRead: '<S740>/TIBPSD2' */
    rtb_TIBPSD2 = DO_CBTC_TIB_ESB2;

    /* DataStoreRead: '<S740>/TO-DEP-FE-DO' */
    rtb_TODEPFEDO = DO_FE_TO_DEP;

    /* DataStoreRead: '<S740>/TO-DEP-FLE-DO' */
    rtb_TODEPFLEDO = DO_FLE_TO_DEP;

    /* DataStoreRead: '<S740>/TO-DEP-PBE-DO' */
    rtb_TODEPPBEDO = DO_PBE_TO_DEP;

    /* DataStoreRead: '<S740>/TPR-CT-DO' */
    rtb_TPRCTDO = DO_CT_TPR;

    /* DataStoreRead: '<S740>/TWT-CT-DO' */
    rtb_TWTCTDO = DO_CT_TWT;

    /* DataStoreRead: '<S740>/WZ-CT-DO' */
    rtb_WZCTDO = DO_CT_WZ;

    /* DataStoreRead: '<S736>/DEP-RST-CTRL1' incorporates:
     *  DataStoreWrite: '<S743>/X24-RRLS'
     */
    rtb_DEPRSTCTRL1 = rtu_RRLSFROM[7];

    /* DataStoreRead: '<S736>/DEP-RST-CTRL2' incorporates:
     *  DataStoreWrite: '<S737>/DEP-RRLS'
     */
    rtb_DEPRSTCTRL2 = rtu_FROMDEP[3];

    /* DataStoreRead: '<S736>/DEP-X10-S' incorporates:
     *  DataStoreWrite: '<S743>/DEP-X10-S'
     */
    rtb_DEPX10S = rtu_HDSFROM[18];

    /* DataStoreRead: '<S736>/DEP-X20-S' incorporates:
     *  DataStoreWrite: '<S743>/JL20-DEP-S'
     */
    rtb_DEPX20S = rtu_HDSFROM[17];

    /* DataStoreRead: '<S736>/J12A-RST-CTRL1' incorporates:
     *  DataStoreWrite: '<S743>/X20-RRLS'
     */
    rtb_J12ARSTCTRL1 = rtu_RRLSFROM[1];

    /* DataStoreRead: '<S736>/J12A-X10-H' incorporates:
     *  DataStoreWrite: '<S743>/J12A-X10-H'
     */
    rtb_J12AX10H = rtu_HDSFROM[12];

    /* DataStoreRead: '<S736>/J12A-X20-H' incorporates:
     *  DataStoreWrite: '<S743>/J12A-X20-H'
     */
    rtb_J12AX20H = rtu_HDSFROM[13];

    /* DataStoreRead: '<S736>/J12B-RST-CTRL1' incorporates:
     *  DataStoreWrite: '<S743>/J22B-RRLS'
     */
    rtb_J12BRSTCTRL1 = rtu_RRLSFROM[5];

    /* DataStoreRead: '<S736>/J12B-X14-H' incorporates:
     *  DataStoreWrite: '<S743>/J12B-X14-H'
     */
    rtb_J12BX14H = rtu_HDSFROM[4];

    /* DataStoreRead: '<S736>/J12B-X24-H' incorporates:
     *  DataStoreWrite: '<S743>/J12B-X24-H'
     */
    rtb_J12BX24H = rtu_HDSFROM[5];

    /* DataStoreRead: '<S736>/J14-J12A-D' incorporates:
     *  DataStoreWrite: '<S743>/J14-J12A-D'
     */
    rtb_J14J12AD = rtu_HDSFROM[8];

    /* DataStoreRead: '<S736>/J14-J22A-D' incorporates:
     *  DataStoreWrite: '<S743>/J14-J22A-D'
     */
    rtb_J14J22AD = rtu_HDSFROM[9];

    /* DataStoreRead: '<S736>/J14-RST-CTRL1' incorporates:
     *  DataStoreWrite: '<S743>/J22A-RRLS'
     */
    rtb_J14RSTCTRL1 = rtu_RRLSFROM[3];

    /* DataStoreRead: '<S736>/J22A-RST-CTRL1' incorporates:
     *  DataStoreWrite: '<S743>/J12A-RRLS'
     */
    rtb_J22ARSTCTRL1 = rtu_RRLSFROM[2];

    /* DataStoreRead: '<S736>/J22A-X10-H' incorporates:
     *  DataStoreWrite: '<S743>/J22A-X10-H'
     */
    rtb_J22AX10H = rtu_HDSFROM[14];

    /* DataStoreRead: '<S736>/J22A-X20-H' incorporates:
     *  DataStoreWrite: '<S743>/J22A-X20-H'
     */
    rtb_J22AX20H = rtu_HDSFROM[15];

    /* DataStoreRead: '<S736>/J22B-RST-CTRL1' incorporates:
     *  DataStoreWrite: '<S743>/X14-RRLS'
     */
    rtb_J22BRSTCTRL1 = rtu_RRLSFROM[6];

    /* DataStoreRead: '<S736>/J22B-X14-H' incorporates:
     *  DataStoreWrite: '<S743>/J22B-X14-H'
     */
    rtb_J22BX14H = rtu_HDSFROM[6];

    /* DataStoreRead: '<S736>/J22B-X24-H' incorporates:
     *  DataStoreWrite: '<S743>/J22B-X24-H'
     */
    rtb_J22BX24H = rtu_HDSFROM[7];

    /* DataStoreRead: '<S736>/J24-J12A-D' incorporates:
     *  DataStoreWrite: '<S743>/J24-J12A-D'
     */
    rtb_J24J12AD = rtu_HDSFROM[10];

    /* DataStoreRead: '<S736>/J24-J22A-D' incorporates:
     *  DataStoreWrite: '<S743>/J24-J22A-D'
     */
    rtb_J24J22AD = rtu_HDSFROM[11];

    /* DataStoreRead: '<S736>/J24-RST-CTRL1' incorporates:
     *  DataStoreWrite: '<S743>/J12B-RRLS'
     */
    rtb_J24RSTCTRL1 = rtu_RRLSFROM[4];

    /* DataStoreRead: '<S736>/JL10-DEP-S' incorporates:
     *  DataStoreWrite: '<S743>/JL10-DEP-S'
     */
    rtb_JL10DEPS = rtu_HDSFROM[16];

    /* DataStoreRead: '<S736>/JL10-J12B-D' incorporates:
     *  DataStoreWrite: '<S743>/JL10-J12B-D'
     */
    rtb_JL10J12BD = rtu_HDSFROM[0];

    /* DataStoreRead: '<S736>/JL10-J22B-D' incorporates:
     *  DataStoreWrite: '<S743>/JL10-J22B-D'
     */
    rtb_JL10J22BD = rtu_HDSFROM[1];

    /* DataStoreRead: '<S736>/JL20-DEP-S' incorporates:
     *  DataStoreWrite: '<S743>/JL20-DEP-S'
     */
    rtb_JL20DEPS = rtu_HDSFROM[17];

    /* DataStoreRead: '<S736>/JL20-J12B-D' incorporates:
     *  DataStoreWrite: '<S743>/JL20-J12B-D'
     */
    rtb_JL20J12BD = rtu_HDSFROM[2];

    /* DataStoreRead: '<S736>/JL20-J22B-D' incorporates:
     *  DataStoreWrite: '<S743>/JL20-J22B-D'
     */
    rtb_JL20J22BD = rtu_HDSFROM[3];

    /* DataStoreRead: '<S736>/JL20-RST-CTRL1' incorporates:
     *  DataStoreWrite: '<S743>/X10-RRLS'
     */
    rtb_JL20RSTCTRL1 = rtu_RRLSFROM[0];

    /* DataStoreWrite: '<S17>/AS' incorporates:
     *  DataStoreWrite: '<S743>/DEP-S-AS'
     *  DataStoreWrite: '<S743>/J12A-T-AS'
     *  DataStoreWrite: '<S743>/J12B-T-AS'
     *  DataStoreWrite: '<S743>/J14-T-AS'
     *  DataStoreWrite: '<S743>/J22A-T-AS'
     *  DataStoreWrite: '<S743>/J22B-T-AS'
     *  DataStoreWrite: '<S743>/J24-T-AS'
     *  DataStoreWrite: '<S743>/JL10-S-AS'
     *  DataStoreWrite: '<S743>/JL10-T-AS'
     *  DataStoreWrite: '<S743>/JL20-S-AS'
     *  DataStoreWrite: '<S743>/JL20-T-AS'
     *  Logic: '<S17>/AND1'
     */
    M_GV_AS = (rtu_TASFROM[0] && rtu_TASFROM[1] && rtu_TASFROM[2] &&
               rtu_TASFROM[3] && rtu_TASFROM[6] && rtu_TASFROM[7] &&
               rtu_TASFROM[4] && rtu_TASFROM[5] && rtu_SASFROM[0] &&
               rtu_SASFROM[1] && rtu_SASFROM[2]);

    /* Memory: '<S18>/Memory' */
    rtb_RE = NONVITALMAIN_DW.Memory_PreviousInput;

    /* DataStoreWrite: '<S18>/RR' */
    M_GV_RR = rtb_RE;

    /* DataStoreWrite: '<S18>/RR-OK' */
    M_GV_RR_OK = Memory1_PreviousInput;

    /* DataStoreWrite: '<S18>/RR-CTRL-TO' incorporates:
     *  DataStoreWrite: '<S739>/TPR-BANTU-PB-DI'
     */
    NONVITALMAIN_DW.M_CTRL_RR = rtu_GLOBALPBDI[3];

    /* Logic: '<S18>/OR1' incorporates:
     *  DataStoreRead: '<S18>/VDR'
     *  DataStoreWrite: '<S739>/TPR-BANTU-PB-DI'
     *  Logic: '<S18>/AND1'
     */
    NONVITALMAIN_DW.OR1 = ((rtu_GLOBALPBDI[3] && NONVITALMAIN_DW.M_VDR) ||
      rtb_RE);

    /* Logic: '<S18>/OR2' */
    NONVITALMAIN_DW.OR2 = (M_GV_AS || Memory1_PreviousInput);

    /* Logic: '<S19>/NOT8' incorporates:
     *  DataStoreWrite: '<S743>/24A-TP'
     */
    NONVITALMAIN_DW.NOT8 = !rtu_TPFROM[25];
  }

  /* Outputs for Atomic SubSystem: '<S19>/TON7' */
  MNV_TON(NONVITALMAIN_M, NONVITALMAIN_DW.NOT8, &NONVITALMAIN_DW.TON7, 0.5);

  /* End of Outputs for SubSystem: '<S19>/TON7' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S19>/24A-TPBP' incorporates:
     *  SignalConversion: '<S19>/TmpSignal ConversionAtTON7Outport1'
     */
    M_TPBP_24A = NONVITALMAIN_DW.TON7.LogicalOperator2;

    /* Logic: '<S19>/NOT7' */
    NONVITALMAIN_DW.NOT7 = !M_TP_23A;
  }

  /* Outputs for Atomic SubSystem: '<S19>/TON6' */
  MNV_TON(NONVITALMAIN_M, NONVITALMAIN_DW.NOT7, &NONVITALMAIN_DW.TON6, 0.5);

  /* End of Outputs for SubSystem: '<S19>/TON6' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S19>/23A-TPBP' incorporates:
     *  SignalConversion: '<S19>/TmpSignal ConversionAtTON6Outport1'
     */
    M_TPBP_23A = NONVITALMAIN_DW.TON6.LogicalOperator2;

    /* Logic: '<S19>/NOT6' */
    NONVITALMAIN_DW.NOT6 = !M_TP_21C;
  }

  /* Outputs for Atomic SubSystem: '<S19>/TON5' */
  MNV_TON(NONVITALMAIN_M, NONVITALMAIN_DW.NOT6, &NONVITALMAIN_DW.TON5, 0.5);

  /* End of Outputs for SubSystem: '<S19>/TON5' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S19>/21C-TPBP' incorporates:
     *  SignalConversion: '<S19>/TmpSignal ConversionAtTON5Outport1'
     */
    M_TPBP_21C = NONVITALMAIN_DW.TON5.LogicalOperator2;

    /* Logic: '<S19>/NOT5' */
    NONVITALMAIN_DW.NOT5 = !M_TP_20B;
  }

  /* Outputs for Atomic SubSystem: '<S19>/TON4' */
  MNV_TON(NONVITALMAIN_M, NONVITALMAIN_DW.NOT5, &NONVITALMAIN_DW.TON4, 0.5);

  /* End of Outputs for SubSystem: '<S19>/TON4' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S19>/20B-TPBP' incorporates:
     *  SignalConversion: '<S19>/TmpSignal ConversionAtTON4Outport1'
     */
    M_TPBP_20B = NONVITALMAIN_DW.TON4.LogicalOperator2;

    /* Logic: '<S19>/NOT4' */
    NONVITALMAIN_DW.NOT4 = !M_TP_14A;
  }

  /* Outputs for Atomic SubSystem: '<S19>/TON3' */
  MNV_TON(NONVITALMAIN_M, NONVITALMAIN_DW.NOT4, &NONVITALMAIN_DW.TON3, 0.5);

  /* End of Outputs for SubSystem: '<S19>/TON3' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S19>/14A-TPBP' incorporates:
     *  SignalConversion: '<S19>/TmpSignal ConversionAtTON3Outport1'
     */
    M_TPBP_14A = NONVITALMAIN_DW.TON3.LogicalOperator2;

    /* Logic: '<S19>/NOT3' */
    NONVITALMAIN_DW.NOT3 = !M_TP_13A;
  }

  /* Outputs for Atomic SubSystem: '<S19>/TON2' */
  MNV_TON(NONVITALMAIN_M, NONVITALMAIN_DW.NOT3, &NONVITALMAIN_DW.TON2, 0.5);

  /* End of Outputs for SubSystem: '<S19>/TON2' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S19>/13A-TPBP' incorporates:
     *  SignalConversion: '<S19>/TmpSignal ConversionAtTON2Outport1'
     */
    M_TPBP_13A = NONVITALMAIN_DW.TON2.LogicalOperator2;

    /* Logic: '<S19>/NOT2' */
    NONVITALMAIN_DW.NOT2 = !M_TP_11B;
  }

  /* Outputs for Atomic SubSystem: '<S19>/TON1' */
  MNV_TON(NONVITALMAIN_M, NONVITALMAIN_DW.NOT2, &NONVITALMAIN_DW.TON1, 0.5);

  /* End of Outputs for SubSystem: '<S19>/TON1' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S19>/11B-TPBP' incorporates:
     *  SignalConversion: '<S19>/TmpSignal ConversionAtTON1Outport1'
     */
    M_TPBP_11B = NONVITALMAIN_DW.TON1.LogicalOperator2;

    /* Logic: '<S19>/NOT1' */
    NONVITALMAIN_DW.NOT1 = !M_TP_10B;
  }

  /* Outputs for Atomic SubSystem: '<S19>/TON' */
  MNV_TON(NONVITALMAIN_M, NONVITALMAIN_DW.NOT1, &NONVITALMAIN_DW.TON, 0.5);

  /* End of Outputs for SubSystem: '<S19>/TON' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S19>/10B-TPBP' incorporates:
     *  SignalConversion: '<S19>/TmpSignal ConversionAtTONOutport1'
     */
    M_TPBP_10B = NONVITALMAIN_DW.TON.LogicalOperator2;

    /* Memory: '<S60>/Memory1' */
    NONVITALMAIN_DW.Memory1 = NONVITALMAIN_DW.Memory1_PreviousInput_e;

    /* DataStoreWrite: '<S60>/DEP-GR-RD' */
    M_RD_DEP_GR = NONVITALMAIN_DW.Memory1;

    /* Logic: '<S60>/OR4' incorporates:
     *  Memory: '<S60>/Memory2'
     */
    OR4 = (NONVITALMAIN_DW.Memory2_PreviousInput || M_CTRL_RST_DEP);

    /* Logic: '<S60>/NOT8' */
    NOT8_f = !M_AS_S_DEP;

    /* DataStoreRead: '<S60>/DEP-GR-DO' */
    NONVITALMAIN_DW.DEPGRDO = M_DO_DEP_GR;
  }

  /* Outputs for Atomic SubSystem: '<S60>/MNV_TOF2' */
  MNV_TOF(NONVITALMAIN_M, NONVITALMAIN_DW.Memory1, &NONVITALMAIN_DW.MNV_TOF2,
          0.5);

  /* End of Outputs for SubSystem: '<S60>/MNV_TOF2' */

  /* Logic: '<S60>/AND13' incorporates:
   *  Logic: '<S60>/AND4'
   *  Logic: '<S60>/NOT16'
   *  Logic: '<S60>/OR10'
   */
  NONVITALMAIN_DW.AND13 = (OR4 && (NOT8_f && (NONVITALMAIN_DW.DEPGRDO ||
    (!NONVITALMAIN_DW.MNV_TOF2.LogicalOperator4))));
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S60>/FROM-DEP-PBE-DO' incorporates:
     *  Logic: '<S60>/AND1'
     *  Logic: '<S60>/AND5'
     *  Logic: '<S60>/AND7'
     *  Logic: '<S60>/NOT11'
     *  Logic: '<S60>/OR6'
     */
    DO_PBE_FROM_DEP = ((NONVITALMAIN_DW.AND13 && M_GV_FLASH_1000) ||
                       ((M_RS_DEP_10 || M_RS_DEP_20) &&
                        (!NONVITALMAIN_DW.DEPGRDO)));

    /* Memory: '<S61>/Memory' */
    NONVITALMAIN_DW.Memory = NONVITALMAIN_DW.Memory_PreviousInput_a;

    /* DataStoreWrite: '<S61>/J12A-DR-RD' */
    M_RD_J12A_DR = NONVITALMAIN_DW.Memory;

    /* Logic: '<S61>/OR3' incorporates:
     *  Memory: '<S61>/Memory2'
     */
    OR3 = (NONVITALMAIN_DW.Memory2_PreviousInput_b || M_CTRL_RST_12A);

    /* Logic: '<S61>/NOT7' */
    NOT7_i = !M_AS_T_J12A;

    /* DataStoreRead: '<S61>/J12A-DR-DO' */
    NONVITALMAIN_DW.J12ADRDO = M_DO_J12A_DR;
  }

  /* Outputs for Atomic SubSystem: '<S61>/MNV_TOF1' */
  MNV_TOF(NONVITALMAIN_M, NONVITALMAIN_DW.Memory, &NONVITALMAIN_DW.MNV_TOF1, 0.5);

  /* End of Outputs for SubSystem: '<S61>/MNV_TOF1' */

  /* Logic: '<S61>/AND13' incorporates:
   *  Logic: '<S61>/AND3'
   *  Logic: '<S61>/NOT16'
   *  Logic: '<S61>/OR12'
   */
  NONVITALMAIN_DW.AND13_c = (OR3 && (NOT7_i && (NONVITALMAIN_DW.J12ADRDO ||
    (!NONVITALMAIN_DW.MNV_TOF1.LogicalOperator4))));
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S61>/J12A-PBE-DO' incorporates:
     *  DataStoreRead: '<S61>/FLASH-0.5S'
     *  Logic: '<S61>/AND1'
     *  Logic: '<S61>/AND14'
     *  Logic: '<S61>/AND15'
     *  Logic: '<S61>/AND16'
     *  Logic: '<S61>/AND2'
     *  Logic: '<S61>/AND5'
     *  Logic: '<S61>/NOT10'
     *  Logic: '<S61>/NOT2'
     *  Logic: '<S61>/NOT3'
     *  Logic: '<S61>/NOT4'
     *  Logic: '<S61>/OR1'
     *  Logic: '<S61>/OR2'
     *  Logic: '<S61>/OR4'
     *  Logic: '<S61>/OR5'
     *  Logic: '<S61>/OR6'
     */
    DO_INDPB_J12A = ((((NONVITALMAIN_DW.AND13_c && M_GV_FLASH_1000) ||
                       (((M_RS_12_10 || M_RS_12_20) &&
                         (!NONVITALMAIN_DW.J12ADRDO)) || ((M_RS_14_12 &&
      (!M_DO_J14_DR)) || (M_RS_24_12 && (!M_DO_J24_DR))))) && (!M_RRLS_J12A)) ||
                     (M_RRLS_J12A && NONVITALMAIN_DW.M_GV_FLASH_500));

    /* Memory: '<S62>/Memory' */
    NONVITALMAIN_DW.Memory_m = NONVITALMAIN_DW.Memory_PreviousInput_j;

    /* DataStoreWrite: '<S62>/J12B-DR-RD' */
    M_RD_J12B_DR = NONVITALMAIN_DW.Memory_m;

    /* Logic: '<S62>/OR5' incorporates:
     *  Memory: '<S62>/Memory2'
     */
    OR5 = (NONVITALMAIN_DW.Memory2_PreviousInput_n || M_CTRL_RST_12B);

    /* Logic: '<S62>/NOT7' */
    NOT7_p = !M_AS_T_J12B;

    /* DataStoreRead: '<S62>/J12B-DR-DO' */
    NONVITALMAIN_DW.J12BDRDO = M_DO_J12B_DR;
  }

  /* Outputs for Atomic SubSystem: '<S62>/MNV_TOF1' */
  MNV_TOF(NONVITALMAIN_M, NONVITALMAIN_DW.Memory_m, &NONVITALMAIN_DW.MNV_TOF1_b,
          0.5);

  /* End of Outputs for SubSystem: '<S62>/MNV_TOF1' */

  /* Logic: '<S62>/AND13' incorporates:
   *  Logic: '<S62>/AND5'
   *  Logic: '<S62>/NOT16'
   *  Logic: '<S62>/OR12'
   */
  NONVITALMAIN_DW.AND13_g = (OR5 && (NOT7_p && (NONVITALMAIN_DW.J12BDRDO ||
    (!NONVITALMAIN_DW.MNV_TOF1_b.LogicalOperator4))));
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S62>/J12B-PBE-DO' incorporates:
     *  DataStoreRead: '<S62>/FLASH-0.5S'
     *  Logic: '<S62>/AND1'
     *  Logic: '<S62>/AND14'
     *  Logic: '<S62>/AND15'
     *  Logic: '<S62>/AND16'
     *  Logic: '<S62>/AND3'
     *  Logic: '<S62>/AND4'
     *  Logic: '<S62>/NOT10'
     *  Logic: '<S62>/NOT2'
     *  Logic: '<S62>/NOT3'
     *  Logic: '<S62>/NOT4'
     *  Logic: '<S62>/OR1'
     *  Logic: '<S62>/OR3'
     *  Logic: '<S62>/OR4'
     *  Logic: '<S62>/OR7'
     *  Logic: '<S62>/OR8'
     */
    DO_INDPB_J12B = ((((NONVITALMAIN_DW.AND13_g && M_GV_FLASH_1000) ||
                       (((M_RS_12_14 || M_RS_12_24) &&
                         (!NONVITALMAIN_DW.J12BDRDO)) || ((M_RS_10_12 &&
      (!M_DO_JL10_DR)) || (M_RS_20_12 && (!M_DO_JL20_DR))))) && (!M_RRLS_J12B)) ||
                     (M_RRLS_J12B && NONVITALMAIN_DW.M_GV_FLASH_500));

    /* Memory: '<S63>/Memory' */
    NONVITALMAIN_DW.Memory_c = NONVITALMAIN_DW.Memory_PreviousInput_p;

    /* DataStoreWrite: '<S63>/J14-DR-RD' */
    M_RD_J14_DR = NONVITALMAIN_DW.Memory_c;

    /* Logic: '<S63>/OR3' incorporates:
     *  Memory: '<S63>/Memory2'
     */
    OR3_f = (NONVITALMAIN_DW.Memory2_PreviousInput_a || M_CTRL_RST_14);

    /* Logic: '<S63>/NOT7' */
    NOT7_m = !M_AS_T_J14;

    /* DataStoreRead: '<S63>/J14-DR-DO' */
    NONVITALMAIN_DW.J14DRDO = M_DO_J14_DR;
  }

  /* Outputs for Atomic SubSystem: '<S63>/MNV_TOF1' */
  MNV_TOF(NONVITALMAIN_M, NONVITALMAIN_DW.Memory_c, &NONVITALMAIN_DW.MNV_TOF1_l,
          0.5);

  /* End of Outputs for SubSystem: '<S63>/MNV_TOF1' */

  /* Logic: '<S63>/AND13' incorporates:
   *  Logic: '<S63>/AND2'
   *  Logic: '<S63>/NOT16'
   *  Logic: '<S63>/OR12'
   */
  NONVITALMAIN_DW.AND13_k = (OR3_f && (NOT7_m && (NONVITALMAIN_DW.J14DRDO ||
    (!NONVITALMAIN_DW.MNV_TOF1_l.LogicalOperator4))));
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S63>/J14-PBE-DO' incorporates:
     *  Logic: '<S63>/AND1'
     *  Logic: '<S63>/AND4'
     *  Logic: '<S63>/AND7'
     *  Logic: '<S63>/NOT9'
     *  Logic: '<S63>/OR6'
     */
    DO_INDPB_J14 = ((NONVITALMAIN_DW.AND13_k && M_GV_FLASH_1000) || ((M_RS_14_12
      || M_RS_14_22) && (!NONVITALMAIN_DW.J14DRDO)));

    /* Memory: '<S64>/Memory' */
    NONVITALMAIN_DW.Memory_n = NONVITALMAIN_DW.Memory_PreviousInput_k;

    /* DataStoreWrite: '<S64>/J22A-DR-RD' */
    M_RD_J22A_DR = NONVITALMAIN_DW.Memory_n;

    /* Logic: '<S64>/OR5' incorporates:
     *  Memory: '<S64>/Memory2'
     */
    OR5_j = (NONVITALMAIN_DW.Memory2_PreviousInput_f || M_CTRL_RST_22A);

    /* Logic: '<S64>/NOT7' */
    NOT7_a = !M_AS_T_J22A;

    /* DataStoreRead: '<S64>/J22A-DR-DO' */
    NONVITALMAIN_DW.J22ADRDO = M_DO_J22A_DR;
  }

  /* Outputs for Atomic SubSystem: '<S64>/MNV_TOF1' */
  MNV_TOF(NONVITALMAIN_M, NONVITALMAIN_DW.Memory_n, &NONVITALMAIN_DW.MNV_TOF1_j,
          0.5);

  /* End of Outputs for SubSystem: '<S64>/MNV_TOF1' */

  /* Logic: '<S64>/AND13' incorporates:
   *  Logic: '<S64>/AND5'
   *  Logic: '<S64>/NOT16'
   *  Logic: '<S64>/OR12'
   */
  NONVITALMAIN_DW.AND13_ch = (OR5_j && (NOT7_a && (NONVITALMAIN_DW.J22ADRDO || (
    !NONVITALMAIN_DW.MNV_TOF1_j.LogicalOperator4))));
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S64>/J22A-PBE-DO' incorporates:
     *  DataStoreRead: '<S64>/FLASH-0.5S'
     *  Logic: '<S64>/AND1'
     *  Logic: '<S64>/AND14'
     *  Logic: '<S64>/AND15'
     *  Logic: '<S64>/AND16'
     *  Logic: '<S64>/AND3'
     *  Logic: '<S64>/AND4'
     *  Logic: '<S64>/NOT10'
     *  Logic: '<S64>/NOT2'
     *  Logic: '<S64>/NOT3'
     *  Logic: '<S64>/NOT4'
     *  Logic: '<S64>/OR1'
     *  Logic: '<S64>/OR3'
     *  Logic: '<S64>/OR4'
     *  Logic: '<S64>/OR7'
     *  Logic: '<S64>/OR8'
     */
    DO_INDPB_J22A = ((((NONVITALMAIN_DW.AND13_ch && M_GV_FLASH_1000) ||
                       (((M_RS_22_10 || M_RS_22_20) &&
                         (!NONVITALMAIN_DW.J22ADRDO)) || ((M_RS_14_22 &&
      (!M_DO_J14_DR)) || (M_RS_24_22 && (!M_DO_J24_DR))))) && (!M_RRLS_J22A)) ||
                     (M_RRLS_J22A && NONVITALMAIN_DW.M_GV_FLASH_500));

    /* Memory: '<S65>/Memory' */
    NONVITALMAIN_DW.Memory_i = NONVITALMAIN_DW.Memory_PreviousInput_ay;

    /* DataStoreWrite: '<S65>/J22B-DR-RD' */
    M_RD_J22B_DR = NONVITALMAIN_DW.Memory_i;

    /* Logic: '<S65>/OR5' incorporates:
     *  Memory: '<S65>/Memory2'
     */
    OR5_m = (NONVITALMAIN_DW.Memory2_PreviousInput_e || M_CTRL_RST_22B);

    /* Logic: '<S65>/NOT7' */
    NOT7_l = !M_AS_T_J22B;

    /* DataStoreRead: '<S65>/J22B-DR-DO' */
    NONVITALMAIN_DW.J22BDRDO = M_DO_J22B_DR;
  }

  /* Outputs for Atomic SubSystem: '<S65>/MNV_TOF1' */
  MNV_TOF(NONVITALMAIN_M, NONVITALMAIN_DW.Memory_i, &NONVITALMAIN_DW.MNV_TOF1_ll,
          0.5);

  /* End of Outputs for SubSystem: '<S65>/MNV_TOF1' */

  /* Logic: '<S65>/AND13' incorporates:
   *  Logic: '<S65>/AND5'
   *  Logic: '<S65>/NOT16'
   *  Logic: '<S65>/OR12'
   */
  NONVITALMAIN_DW.AND13_ga = (OR5_m && (NOT7_l && (NONVITALMAIN_DW.J22BDRDO || (
    !NONVITALMAIN_DW.MNV_TOF1_ll.LogicalOperator4))));
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S65>/J22B-PBE-DO' incorporates:
     *  DataStoreRead: '<S65>/FLASH-0.5S'
     *  Logic: '<S65>/AND1'
     *  Logic: '<S65>/AND14'
     *  Logic: '<S65>/AND15'
     *  Logic: '<S65>/AND16'
     *  Logic: '<S65>/AND3'
     *  Logic: '<S65>/AND4'
     *  Logic: '<S65>/NOT10'
     *  Logic: '<S65>/NOT2'
     *  Logic: '<S65>/NOT3'
     *  Logic: '<S65>/NOT4'
     *  Logic: '<S65>/OR1'
     *  Logic: '<S65>/OR3'
     *  Logic: '<S65>/OR4'
     *  Logic: '<S65>/OR7'
     *  Logic: '<S65>/OR8'
     */
    DO_INDPB_J22B = ((((NONVITALMAIN_DW.AND13_ga && M_GV_FLASH_1000) ||
                       (((M_RS_22_14 || M_RS_22_24) &&
                         (!NONVITALMAIN_DW.J22BDRDO)) || ((M_RS_10_22 &&
      (!M_DO_JL10_DR)) || (M_RS_20_22 && (!M_DO_JL20_DR))))) && (!M_RRLS_J22B)) ||
                     (M_RRLS_J22B && NONVITALMAIN_DW.M_GV_FLASH_500));

    /* Memory: '<S66>/Memory' */
    NONVITALMAIN_DW.Memory_o = NONVITALMAIN_DW.Memory_PreviousInput_kg;

    /* DataStoreWrite: '<S66>/J24-DR-RD' */
    M_RD_J24_DR = NONVITALMAIN_DW.Memory_o;

    /* Logic: '<S66>/OR3' incorporates:
     *  Memory: '<S66>/Memory2'
     */
    OR3_c = (NONVITALMAIN_DW.Memory2_PreviousInput_c || M_CTRL_RST_24);

    /* Logic: '<S66>/NOT7' */
    NOT7_n = !M_AS_T_J24;

    /* DataStoreRead: '<S66>/J24-DR-DO' */
    NONVITALMAIN_DW.J24DRDO = M_DO_J24_DR;
  }

  /* Outputs for Atomic SubSystem: '<S66>/MNV_TOF1' */
  MNV_TOF(NONVITALMAIN_M, NONVITALMAIN_DW.Memory_o, &NONVITALMAIN_DW.MNV_TOF1_k,
          0.5);

  /* End of Outputs for SubSystem: '<S66>/MNV_TOF1' */

  /* Logic: '<S66>/AND13' incorporates:
   *  Logic: '<S66>/AND2'
   *  Logic: '<S66>/NOT16'
   *  Logic: '<S66>/OR12'
   */
  NONVITALMAIN_DW.AND13_o = (OR3_c && (NOT7_n && (NONVITALMAIN_DW.J24DRDO ||
    (!NONVITALMAIN_DW.MNV_TOF1_k.LogicalOperator4))));
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S66>/J24-PBE-DO' incorporates:
     *  Logic: '<S66>/AND1'
     *  Logic: '<S66>/AND4'
     *  Logic: '<S66>/AND7'
     *  Logic: '<S66>/NOT9'
     *  Logic: '<S66>/OR6'
     */
    DO_INDPB_J24 = ((NONVITALMAIN_DW.AND13_o && M_GV_FLASH_1000) || ((M_RS_24_12
      || M_RS_24_22) && (!NONVITALMAIN_DW.J24DRDO)));

    /* Memory: '<S67>/Memory' */
    NONVITALMAIN_DW.Memory_e = NONVITALMAIN_DW.Memory_PreviousInput_b;

    /* DataStoreWrite: '<S67>/JL10-DR-RD' */
    M_RD_JL10_DR = NONVITALMAIN_DW.Memory_e;

    /* Memory: '<S67>/Memory1' */
    NONVITALMAIN_DW.Memory1_m = NONVITALMAIN_DW.Memory1_PreviousInput_l;

    /* DataStoreWrite: '<S67>/JL10-GR-RD' */
    M_RD_JL10_GR = NONVITALMAIN_DW.Memory1_m;

    /* Logic: '<S67>/OR3' incorporates:
     *  Memory: '<S67>/Memory2'
     */
    OR3_g = (NONVITALMAIN_DW.Memory2_PreviousInput_p || M_CTRL_RST_10);

    /* Logic: '<S67>/NOT7' */
    NOT7_j = !M_AS_T_JL10;

    /* DataStoreRead: '<S67>/JL10-DR-DO' */
    NONVITALMAIN_DW.JL10DRDO = M_DO_JL10_DR;
  }

  /* Outputs for Atomic SubSystem: '<S67>/MNV_TOF1' */
  MNV_TOF(NONVITALMAIN_M, NONVITALMAIN_DW.Memory_e, &NONVITALMAIN_DW.MNV_TOF1_lg,
          0.5);

  /* End of Outputs for SubSystem: '<S67>/MNV_TOF1' */

  /* Outputs for Atomic SubSystem: '<S67>/MNV_TOF2' */
  MNV_TOF(NONVITALMAIN_M, NONVITALMAIN_DW.Memory1_m, &NONVITALMAIN_DW.MNV_TOF2_h,
          0.5);

  /* End of Outputs for SubSystem: '<S67>/MNV_TOF2' */

  /* Logic: '<S67>/NOT16' incorporates:
   *  Logic: '<S67>/OR11'
   */
  rtb_RE = !(NONVITALMAIN_DW.MNV_TOF1_lg.LogicalOperator4 ||
             NONVITALMAIN_DW.MNV_TOF2_h.LogicalOperator4);
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Logic: '<S67>/NOT8' */
    NOT8_n = !M_AS_S_JL10;

    /* DataStoreRead: '<S67>/JL10-GR-DO' */
    NONVITALMAIN_DW.JL10GRDO = M_DO_JL10_GR;
  }

  /* Logic: '<S67>/AND13' incorporates:
   *  Logic: '<S67>/AND2'
   *  Logic: '<S67>/AND3'
   *  Logic: '<S67>/OR1'
   *  Logic: '<S67>/OR10'
   *  Logic: '<S67>/OR12'
   */
  NONVITALMAIN_DW.AND13_n = (OR3_g && ((NOT7_j && (NONVITALMAIN_DW.JL10DRDO ||
    rtb_RE)) || (NOT8_n && (NONVITALMAIN_DW.JL10GRDO || rtb_RE))));
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S67>/JL10-PBE-DO' incorporates:
     *  Logic: '<S67>/AND1'
     *  Logic: '<S67>/AND4'
     *  Logic: '<S67>/AND7'
     *  Logic: '<S67>/NOT11'
     *  Logic: '<S67>/NOT9'
     *  Logic: '<S67>/OR6'
     */
    DO_INDPB_JL10 = ((NONVITALMAIN_DW.AND13_n && M_GV_FLASH_1000) ||
                     ((M_RS_10_12 || M_RS_10_22 || M_RS_10_DEP) &&
                      (!NONVITALMAIN_DW.JL10DRDO) && (!NONVITALMAIN_DW.JL10GRDO)));

    /* Memory: '<S68>/Memory' */
    NONVITALMAIN_DW.Memory_l = NONVITALMAIN_DW.Memory_PreviousInput_pj;

    /* DataStoreWrite: '<S68>/JL20-DR-RD' */
    M_RD_JL20_DR = NONVITALMAIN_DW.Memory_l;

    /* Memory: '<S68>/Memory1' */
    NONVITALMAIN_DW.Memory1_e = NONVITALMAIN_DW.Memory1_PreviousInput_i;

    /* DataStoreWrite: '<S68>/JL20-GR-RD' */
    M_RD_JL20_GR = NONVITALMAIN_DW.Memory1_e;

    /* Logic: '<S68>/OR3' incorporates:
     *  Memory: '<S68>/Memory2'
     */
    OR3_o = (NONVITALMAIN_DW.Memory2_PreviousInput_af || M_CTRL_RST_20);

    /* Logic: '<S68>/NOT7' */
    NOT7_ix = !M_AS_T_JL20;

    /* DataStoreRead: '<S68>/JL20-DR-DO' */
    NONVITALMAIN_DW.JL20DRDO = M_DO_JL20_DR;
  }

  /* Outputs for Atomic SubSystem: '<S68>/MNV_TOF1' */
  MNV_TOF(NONVITALMAIN_M, NONVITALMAIN_DW.Memory_l, &NONVITALMAIN_DW.MNV_TOF1_js,
          0.5);

  /* End of Outputs for SubSystem: '<S68>/MNV_TOF1' */

  /* Outputs for Atomic SubSystem: '<S68>/MNV_TOF2' */
  MNV_TOF(NONVITALMAIN_M, NONVITALMAIN_DW.Memory1_e, &NONVITALMAIN_DW.MNV_TOF2_o,
          0.5);

  /* End of Outputs for SubSystem: '<S68>/MNV_TOF2' */

  /* Logic: '<S68>/NOT16' incorporates:
   *  Logic: '<S68>/OR11'
   */
  rtb_RE = !(NONVITALMAIN_DW.MNV_TOF1_js.LogicalOperator4 ||
             NONVITALMAIN_DW.MNV_TOF2_o.LogicalOperator4);
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Logic: '<S68>/NOT8' */
    NOT8_o = !M_AS_S_JL20;

    /* DataStoreRead: '<S68>/JL20-GR-DO' */
    NONVITALMAIN_DW.JL20GRDO = M_DO_JL20_GR;
  }

  /* Logic: '<S68>/AND13' incorporates:
   *  Logic: '<S68>/AND2'
   *  Logic: '<S68>/AND3'
   *  Logic: '<S68>/OR1'
   *  Logic: '<S68>/OR10'
   *  Logic: '<S68>/OR12'
   */
  NONVITALMAIN_DW.AND13_or = (OR3_o && ((NOT7_ix && (NONVITALMAIN_DW.JL20DRDO ||
    rtb_RE)) || (NOT8_o && (NONVITALMAIN_DW.JL20GRDO || rtb_RE))));
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S68>/JL20-PBE-DO' incorporates:
     *  Logic: '<S68>/AND1'
     *  Logic: '<S68>/AND4'
     *  Logic: '<S68>/AND7'
     *  Logic: '<S68>/NOT11'
     *  Logic: '<S68>/NOT9'
     *  Logic: '<S68>/OR6'
     */
    DO_INDPB_JL20 = ((NONVITALMAIN_DW.AND13_or && M_GV_FLASH_1000) ||
                     ((M_RS_20_12 || M_RS_20_22 || M_RS_20_DEP) &&
                      (!NONVITALMAIN_DW.JL20DRDO) && (!NONVITALMAIN_DW.JL20GRDO)));

    /* DataStoreWrite: '<S69>/TO-DEPOT-PBE-DO' incorporates:
     *  DataStoreRead: '<S69>/FLASH-0.5S'
     *  Logic: '<S69>/AND14'
     *  Logic: '<S69>/AND16'
     *  Logic: '<S69>/AND3'
     *  Logic: '<S69>/NOT10'
     *  Logic: '<S69>/NOT3'
     *  Logic: '<S69>/NOT4'
     *  Logic: '<S69>/OR4'
     *  Logic: '<S69>/OR5'
     *  Logic: '<S69>/OR9'
     */
    DO_PBE_TO_DEP = ((((M_RS_10_DEP && (!M_DO_JL10_GR)) || (M_RS_20_DEP &&
      (!M_DO_JL20_GR))) && (!M_RRLS_DEP)) || (M_RRLS_DEP &&
      NONVITALMAIN_DW.M_GV_FLASH_500));

    /* DataStoreWrite: '<S70>/X10-PBE-DO' incorporates:
     *  DataStoreRead: '<S70>/FLASH-0.5S'
     *  Logic: '<S70>/AND14'
     *  Logic: '<S70>/AND16'
     *  Logic: '<S70>/AND3'
     *  Logic: '<S70>/NOT1'
     *  Logic: '<S70>/NOT10'
     *  Logic: '<S70>/NOT3'
     *  Logic: '<S70>/NOT4'
     *  Logic: '<S70>/OR4'
     *  Logic: '<S70>/OR5'
     *  Logic: '<S70>/OR6'
     *  Logic: '<S70>/OR9'
     */
    DO_INDPB_X10 = ((((M_RS_12_10 && (!M_DO_J12A_DR)) || (M_RS_22_10 &&
      (!M_DO_J22A_DR)) || (M_RS_DEP_10 && (!M_DO_DEP_GR))) && (!M_RRLS_X10)) ||
                    (M_RRLS_X10 && NONVITALMAIN_DW.M_GV_FLASH_500));

    /* DataStoreWrite: '<S71>/X14-PBE-DO' incorporates:
     *  DataStoreRead: '<S71>/FLASH-0.5S'
     *  Logic: '<S71>/AND14'
     *  Logic: '<S71>/AND16'
     *  Logic: '<S71>/AND3'
     *  Logic: '<S71>/NOT10'
     *  Logic: '<S71>/NOT3'
     *  Logic: '<S71>/NOT4'
     *  Logic: '<S71>/OR4'
     *  Logic: '<S71>/OR5'
     *  Logic: '<S71>/OR9'
     */
    DO_INDPB_X14 = ((((M_RS_12_14 && (!M_DO_J12B_DR)) || (M_RS_22_14 &&
      (!M_DO_J22B_DR))) && (!M_RRLS_X14)) || (M_RRLS_X14 &&
      NONVITALMAIN_DW.M_GV_FLASH_500));

    /* DataStoreWrite: '<S72>/X20-PBE-DO' incorporates:
     *  DataStoreRead: '<S72>/FLASH-0.5S'
     *  Logic: '<S72>/AND14'
     *  Logic: '<S72>/AND16'
     *  Logic: '<S72>/AND3'
     *  Logic: '<S72>/NOT1'
     *  Logic: '<S72>/NOT10'
     *  Logic: '<S72>/NOT3'
     *  Logic: '<S72>/NOT4'
     *  Logic: '<S72>/OR4'
     *  Logic: '<S72>/OR5'
     *  Logic: '<S72>/OR6'
     *  Logic: '<S72>/OR9'
     */
    DO_INDPB_X20 = ((((M_RS_12_20 && (!M_DO_J12A_DR)) || (M_RS_22_20 &&
      (!M_DO_J22A_DR)) || (M_RS_DEP_20 && (!M_DO_DEP_GR))) && (!M_RRLS_X20)) ||
                    (M_RRLS_X20 && NONVITALMAIN_DW.M_GV_FLASH_500));

    /* DataStoreWrite: '<S73>/X24-PBE-DO' incorporates:
     *  DataStoreRead: '<S73>/FLASH-0.5S'
     *  Logic: '<S73>/AND14'
     *  Logic: '<S73>/AND16'
     *  Logic: '<S73>/AND3'
     *  Logic: '<S73>/NOT10'
     *  Logic: '<S73>/NOT3'
     *  Logic: '<S73>/NOT4'
     *  Logic: '<S73>/OR4'
     *  Logic: '<S73>/OR5'
     *  Logic: '<S73>/OR9'
     */
    DO_INDPB_X24 = ((((M_RS_12_24 && (!M_DO_J12B_DR)) || (M_RS_22_24 &&
      (!M_DO_J22B_DR))) && (!M_RRLS_X24)) || (M_RRLS_X24 &&
      NONVITALMAIN_DW.M_GV_FLASH_500));

    /* DataStoreRead: '<S129>/W11A//21A-L' */
    rtb_W11A21AL = M_W11A_21A_L;

    /* DataStoreRead: '<S129>/W11A//21A-SWRLS' */
    rtb_W11A21ASWRLS = M_W11A_21A_SWRLS;

    /* DataStoreRead: '<S129>/W11A//21A-SWINIT' */
    rtb_W11A21ASWINIT = M_W11A_21A_SWINIT;

    /* DataStoreRead: '<S129>/W11A//21A-BLOCK' */
    rtb_W11A21ABLOCK = M_W11A_21A_BLOCK;

    /* DataStoreRead: '<S129>/W11A//21A-LS' */
    rtb_W11A21ALS = M_W11A_21A_LS;

    /* DataStoreRead: '<S129>/FLASH-1S' */
    rtb_FLASH1S = M_GV_FLASH_1000;

    /* DataStoreRead: '<S129>/FLASH-0.5S' */
    rtb_FLASH05S_nd = NONVITALMAIN_DW.M_GV_FLASH_500;

    /* DataStoreRead: '<S129>/W11A//21A-NWP' */
    rtb_W11A21ANWP = M_W11A_21A_NWP;

    /* DataStoreRead: '<S129>/W11A//21A-RWP' */
    rtb_W11A21ARWP = M_W11A_21A_RWP;

    /* DataStoreRead: '<S129>/W11A//21A-NWZ' */
    rtb_W11A21ANWZ = M_W11A_21A_NWZ;

    /* DataStoreRead: '<S129>/W11A//21A-RWZ' */
    rtb_W11A21ARWZ = M_W11A_21A_RWZ;

    /* DataStoreRead: '<S129>/W11A//21A-NWC' */
    rtb_W11A21ANWC = M_W11A_21A_NWC;

    /* DataStoreRead: '<S129>/W11A//21A-RWC' */
    rtb_W11A21ARWC = M_W11A_21A_RWC;

    /* DataStoreRead: '<S129>/W11A//21A-OOC' */
    rtb_W11A21AOOC = M_W11A_21A_OOC;

    /* DataStoreRead: '<S129>/11A-TP' */
    rtb_u1ATP = M_TP_11A;

    /* Logic: '<S129>/NOT1' incorporates:
     *  Logic: '<S129>/AND1'
     */
    rtb_NOT1_o = !(M_T_ES_11A && M_T_WS_11A && M_S_ES_11A && M_S_WS_11A);

    /* Outputs for Atomic SubSystem: '<S129>/INDIKASI POINT' */
    M_IND_POINT(rtb_W11A21AL, rtb_W11A21ASWRLS, rtb_W11A21ASWINIT,
                rtb_W11A21ABLOCK, rtb_W11A21ALS, rtb_FLASH1S, rtb_FLASH05S_nd,
                rtb_W11A21ANWP, rtb_W11A21ARWP, rtb_W11A21ANWZ, rtb_W11A21ARWZ,
                rtb_W11A21ANWC, rtb_W11A21ARWC, rtb_W11A21AOOC, rtb_u1ATP,
                rtb_NOT1_o, &NONVITALMAIN_DW.INDIKASIPOINT);

    /* End of Outputs for SubSystem: '<S129>/INDIKASI POINT' */

    /* DataStoreWrite: '<S129>/W11A-BE-DO' */
    DO_INDSW_W11A_BE = NONVITALMAIN_DW.INDIKASIPOINT.OR9;

    /* DataStoreWrite: '<S129>/W11A-LE-DO' */
    DO_INDSW_W11A_LE = NONVITALMAIN_DW.INDIKASIPOINT.AND5;

    /* Logic: '<S129>/NOT2' */
    rtb_RE = !rtb_NOT1_o;

    /* DataStoreWrite: '<S129>/W11A-NBE-DO' incorporates:
     *  Logic: '<S129>/AND6'
     *  Logic: '<S129>/AND8'
     */
    DO_INDSW_W11A_NBE = (DO_INDT_BE_11A && (M_W11A_21A_NWP || rtb_RE));

    /* DataStoreWrite: '<S129>/W11A-NRE-DO' */
    DO_INDSW_W11A_NRE = NONVITALMAIN_DW.INDIKASIPOINT.AND27;

    /* DataStoreWrite: '<S129>/W11A-NTE-DO' */
    DO_INDSW_W11A_NTE = NONVITALMAIN_DW.INDIKASIPOINT.AND26;

    /* DataStoreWrite: '<S129>/W11A-NWBE-DO' incorporates:
     *  Logic: '<S129>/AND4'
     */
    DO_INDSW_W11A_NWBE = (DO_INDSW_W11A_NWE_0 && DO_INDT_BE_11A);

    /* DataStoreWrite: '<S129>/W11A-NWE-DO' */
    DO_INDSW_W11A_NWE = NONVITALMAIN_DW.INDIKASIPOINT.OR11;

    /* DataStoreWrite: '<S129>/W11A-NWRE-DO' incorporates:
     *  Logic: '<S129>/AND2'
     */
    DO_INDSW_W11A_NWRE = (DO_INDSW_W11A_NWE_0 && DO_INDT_RE_11A);

    /* DataStoreWrite: '<S129>/W11A-NWTE-DO' */
    DO_INDSW_W11A_NWTE = NONVITALMAIN_DW.INDIKASIPOINT.OR12;

    /* DataStoreWrite: '<S129>/W11A-RBE-DO' incorporates:
     *  Logic: '<S129>/AND7'
     *  Logic: '<S129>/AND9'
     */
    DO_INDSW_W11A_RBE = (DO_INDT_BE_11A && (rtb_RE || M_W11A_21A_RWP));

    /* DataStoreWrite: '<S129>/W11A-RRE-DO' */
    DO_INDSW_W11A_RRE = NONVITALMAIN_DW.INDIKASIPOINT.AND28;

    /* DataStoreWrite: '<S129>/W11A-RTE-DO' */
    DO_INDSW_W11A_RTE = NONVITALMAIN_DW.INDIKASIPOINT.AND34;

    /* DataStoreWrite: '<S129>/W11A-RWBE-DO' incorporates:
     *  Logic: '<S129>/AND5'
     */
    DO_INDSW_W11A_RWBE = (DO_INDSW_W11A_RWE_0 && DO_INDT_BE_11A);

    /* DataStoreWrite: '<S129>/W11A-RWE-DO' */
    DO_INDSW_W11A_RWE = NONVITALMAIN_DW.INDIKASIPOINT.OR13;

    /* DataStoreWrite: '<S129>/W11A-RWRE-DO' incorporates:
     *  Logic: '<S129>/AND3'
     */
    DO_INDSW_W11A_RWRE = (DO_INDSW_W11A_RWE_0 && DO_INDT_RE_11A);

    /* DataStoreWrite: '<S129>/W11A-RWTE-DO' */
    DO_INDSW_W11A_RWTE = NONVITALMAIN_DW.INDIKASIPOINT.OR14;

    /* DataStoreRead: '<S130>/W11B//21B-L' */
    rtb_W11B21BL = M_W11B_21B_L;

    /* DataStoreRead: '<S130>/W11B//21B-SWRLS' */
    rtb_W11B21BSWRLS = M_W11B_21B_SWRLS;

    /* DataStoreRead: '<S130>/W11B//21B-SWINIT' */
    rtb_W11B21BSWINIT = M_W11B_21B_SWINIT;

    /* DataStoreRead: '<S130>/W11B//21B-BLOCK' */
    rtb_W11B21BBLOCK = M_W11B_21B_BLOCK;

    /* DataStoreRead: '<S130>/W11B//21B-LS' */
    rtb_W11B21BLS = M_W11B_21B_LS;

    /* DataStoreRead: '<S130>/FLASH-1S' */
    rtb_FLASH1S_l = M_GV_FLASH_1000;

    /* DataStoreRead: '<S130>/FLASH-0.5S' */
    rtb_FLASH05S_m = NONVITALMAIN_DW.M_GV_FLASH_500;

    /* DataStoreRead: '<S130>/W11B//21B-NWP' */
    rtb_W11B21BNWP = M_W11B_21B_NWP;

    /* DataStoreRead: '<S130>/W11B//21B-RWP' */
    rtb_W11B21BRWP = M_W11B_21B_RWP;

    /* DataStoreRead: '<S130>/W11B//21B-NWZ' */
    rtb_W11B21BNWZ = M_W11B_21B_NWZ;

    /* DataStoreRead: '<S130>/W11B//21B-RWZ' */
    rtb_W11B21BRWZ = M_W11B_21B_RWZ;

    /* DataStoreRead: '<S130>/W11B//21B-NWC' */
    rtb_W11B21BNWC = M_W11B_21B_NWC;

    /* DataStoreRead: '<S130>/W11B//21B-RWC' */
    rtb_W11B21BRWC = M_W11B_21B_RWC;

    /* DataStoreRead: '<S130>/W11B//21B-OOC' */
    rtb_W11B21BOOC = M_W11B_21B_OOC;

    /* DataStoreRead: '<S130>/11B-TP' */
    rtb_u1BTP_n = M_TP_11B;

    /* Logic: '<S130>/NOT1' incorporates:
     *  Logic: '<S130>/AND1'
     */
    rtb_NOT1_h = !(M_T_ES_11B && M_T_WS_11B && M_S_ES_11B && M_S_WS_11B);

    /* Outputs for Atomic SubSystem: '<S130>/INDIKASI POINT' */
    M_IND_POINT(rtb_W11B21BL, rtb_W11B21BSWRLS, rtb_W11B21BSWINIT,
                rtb_W11B21BBLOCK, rtb_W11B21BLS, rtb_FLASH1S_l, rtb_FLASH05S_m,
                rtb_W11B21BNWP, rtb_W11B21BRWP, rtb_W11B21BNWZ, rtb_W11B21BRWZ,
                rtb_W11B21BNWC, rtb_W11B21BRWC, rtb_W11B21BOOC, rtb_u1BTP_n,
                rtb_NOT1_h, &NONVITALMAIN_DW.INDIKASIPOINT_k);

    /* End of Outputs for SubSystem: '<S130>/INDIKASI POINT' */

    /* DataStoreWrite: '<S130>/W11B-BE-DO' */
    DO_INDSW_W11B_BE = NONVITALMAIN_DW.INDIKASIPOINT_k.OR9;

    /* DataStoreWrite: '<S130>/W11B-LE-DO' */
    DO_INDSW_W11B_LE = NONVITALMAIN_DW.INDIKASIPOINT_k.AND5;

    /* Logic: '<S130>/NOT2' */
    rtb_RWE = !rtb_NOT1_h;

    /* DataStoreWrite: '<S130>/W11B-NBE-DO' incorporates:
     *  Logic: '<S130>/AND6'
     *  Logic: '<S130>/AND8'
     */
    DO_INDSW_W11B_NBE = (DO_INDT_BE_11B && (M_W11B_21B_NWP || rtb_RWE));

    /* DataStoreWrite: '<S130>/W11B-NRE-DO' */
    DO_INDSW_W11B_NRE = NONVITALMAIN_DW.INDIKASIPOINT_k.AND27;

    /* DataStoreWrite: '<S130>/W11B-NTE-DO' */
    DO_INDSW_W11B_NTE = NONVITALMAIN_DW.INDIKASIPOINT_k.AND26;

    /* DataStoreWrite: '<S130>/W11B-NWBE-DO' incorporates:
     *  Logic: '<S130>/AND4'
     */
    DO_INDSW_W11B_NWBE = (DO_INDSW_W11B_NWE_0 && DO_INDT_BE_11B);

    /* DataStoreWrite: '<S130>/W11B-NWE-DO' */
    DO_INDSW_W11B_NWE = NONVITALMAIN_DW.INDIKASIPOINT_k.OR11;

    /* DataStoreWrite: '<S130>/W11B-NWRE-DO' incorporates:
     *  Logic: '<S130>/AND2'
     */
    DO_INDSW_W11B_NWRE = (DO_INDSW_W11B_NWE_0 && DO_INDT_RE_11B);

    /* DataStoreWrite: '<S130>/W11B-NWTE-DO' */
    DO_INDSW_W11B_NWTE = NONVITALMAIN_DW.INDIKASIPOINT_k.OR12;

    /* DataStoreWrite: '<S130>/W11B-RBE-DO' incorporates:
     *  Logic: '<S130>/AND7'
     *  Logic: '<S130>/AND9'
     */
    DO_INDSW_W11B_RBE = (DO_INDT_BE_11B && (rtb_RWE || M_W11B_21B_RWP));

    /* DataStoreWrite: '<S130>/W11B-RRE-DO' */
    DO_INDSW_W11B_RRE = NONVITALMAIN_DW.INDIKASIPOINT_k.AND28;

    /* DataStoreWrite: '<S130>/W11B-RTE-DO' */
    DO_INDSW_W11B_RTE = NONVITALMAIN_DW.INDIKASIPOINT_k.AND34;

    /* DataStoreWrite: '<S130>/W11B-RWBE-DO' incorporates:
     *  Logic: '<S130>/AND5'
     */
    DO_INDSW_W11B_RWBE = (DO_INDSW_W11B_RWE_0 && DO_INDT_BE_11B);

    /* DataStoreWrite: '<S130>/W11B-RWE-DO' */
    DO_INDSW_W11B_RWE = NONVITALMAIN_DW.INDIKASIPOINT_k.OR13;

    /* DataStoreWrite: '<S130>/W11B-RWRE-DO' incorporates:
     *  Logic: '<S130>/AND3'
     */
    DO_INDSW_W11B_RWRE = (DO_INDSW_W11B_RWE_0 && DO_INDT_RE_11B);

    /* DataStoreWrite: '<S130>/W11B-RWTE-DO' */
    DO_INDSW_W11B_RWTE = NONVITALMAIN_DW.INDIKASIPOINT_k.OR14;

    /* DataStoreRead: '<S131>/W13A//23A-L' */
    rtb_W13A23AL = M_W13A_23A_L;

    /* DataStoreRead: '<S131>/W13A//23A-SWRLS' */
    rtb_W13A23ASWRLS = M_W13A_23A_SWRLS;

    /* DataStoreRead: '<S131>/W13A//23A-SWINIT' */
    rtb_W13A23ASWINIT = M_W13A_23A_SWINIT;

    /* DataStoreRead: '<S131>/W13A//23A-BLOCK' */
    rtb_W13A23ABLOCK = M_W13A_23A_BLOCK;

    /* DataStoreRead: '<S131>/W13A//23A-LS' */
    rtb_W13A23ALS = M_W13A_23A_LS;

    /* DataStoreRead: '<S131>/FLASH-1S' */
    rtb_FLASH1S_d = M_GV_FLASH_1000;

    /* DataStoreRead: '<S131>/FLASH-0.5S' */
    rtb_FLASH05S_d = NONVITALMAIN_DW.M_GV_FLASH_500;

    /* DataStoreRead: '<S131>/W13A//23A-NWP' */
    rtb_W13A23ANWP = M_W13A_23A_NWP;

    /* DataStoreRead: '<S131>/W13A//23A-RWP' */
    rtb_W13A23ARWP = M_W13A_23A_RWP;

    /* DataStoreRead: '<S131>/W13A//23A-NWZ' */
    rtb_W13A23ANWZ = M_W13A_23A_NWZ;

    /* DataStoreRead: '<S131>/W13A//23A-RWZ' */
    rtb_W13A23ARWZ = M_W13A_23A_RWZ;

    /* DataStoreRead: '<S131>/W13A//23A-NWC' */
    rtb_W13A23ANWC = M_W13A_23A_NWC;

    /* DataStoreRead: '<S131>/W13A//23A-RWC' */
    rtb_W13A23ARWC = M_W13A_23A_RWC;

    /* DataStoreRead: '<S131>/W13A//23A-OOC' */
    rtb_W13A23AOOC = M_W13A_23A_OOC;

    /* DataStoreRead: '<S131>/13A-TP' */
    rtb_u3ATP_j = M_TP_13A;

    /* Logic: '<S131>/NOT1' incorporates:
     *  Logic: '<S131>/AND1'
     */
    rtb_NOT1_l = !(M_T_ES_13A && M_T_WS_13A);

    /* Outputs for Atomic SubSystem: '<S131>/INDIKASI POINT' */
    M_IND_POINT(rtb_W13A23AL, rtb_W13A23ASWRLS, rtb_W13A23ASWINIT,
                rtb_W13A23ABLOCK, rtb_W13A23ALS, rtb_FLASH1S_d, rtb_FLASH05S_d,
                rtb_W13A23ANWP, rtb_W13A23ARWP, rtb_W13A23ANWZ, rtb_W13A23ARWZ,
                rtb_W13A23ANWC, rtb_W13A23ARWC, rtb_W13A23AOOC, rtb_u3ATP_j,
                rtb_NOT1_l, &NONVITALMAIN_DW.INDIKASIPOINT_g);

    /* End of Outputs for SubSystem: '<S131>/INDIKASI POINT' */

    /* DataStoreWrite: '<S131>/W13A-BE-DO' */
    DO_INDSW_W13A_BE = NONVITALMAIN_DW.INDIKASIPOINT_g.OR9;

    /* DataStoreWrite: '<S131>/W13A-LE-DO' */
    DO_INDSW_W13A_LE = NONVITALMAIN_DW.INDIKASIPOINT_g.AND5;

    /* Logic: '<S131>/NOT2' */
    rtb_RWE = !rtb_NOT1_l;

    /* DataStoreWrite: '<S131>/W13A-NBE-DO' incorporates:
     *  Logic: '<S131>/AND6'
     *  Logic: '<S131>/AND8'
     */
    DO_INDSW_W13A_NBE = (DO_INDT_BE_13A && (M_W13A_23A_NWP || rtb_RWE));

    /* DataStoreWrite: '<S131>/W13A-NRE-DO' */
    DO_INDSW_W13A_NRE = NONVITALMAIN_DW.INDIKASIPOINT_g.AND27;

    /* DataStoreWrite: '<S131>/W13A-NTE-DO' */
    DO_INDSW_W13A_NTE = NONVITALMAIN_DW.INDIKASIPOINT_g.AND26;

    /* DataStoreWrite: '<S131>/W13A-NWBE-DO' incorporates:
     *  Logic: '<S131>/AND4'
     */
    DO_INDSW_W13A_NWBE = (DO_INDSW_W13A_NWE_0 && DO_INDT_BE_13A);

    /* DataStoreWrite: '<S131>/W13A-NWE-DO' */
    DO_INDSW_W13A_NWE = NONVITALMAIN_DW.INDIKASIPOINT_g.OR11;

    /* DataStoreWrite: '<S131>/W13A-NWRE-DO' incorporates:
     *  Logic: '<S131>/AND2'
     */
    DO_INDSW_W13A_NWRE = (DO_INDSW_W13A_NWE_0 && DO_INDT_RE_13A);

    /* DataStoreWrite: '<S131>/W13A-NWTE-DO' */
    DO_INDSW_W13A_NWTE = NONVITALMAIN_DW.INDIKASIPOINT_g.OR12;

    /* DataStoreWrite: '<S131>/W13A-RBE-DO' incorporates:
     *  Logic: '<S131>/AND7'
     *  Logic: '<S131>/AND9'
     */
    DO_INDSW_W13A_RBE = (DO_INDT_BE_13A && (rtb_RWE || M_W13A_23A_RWP));

    /* DataStoreWrite: '<S131>/W13A-RRE-DO' */
    DO_INDSW_W13A_RRE = NONVITALMAIN_DW.INDIKASIPOINT_g.AND28;

    /* DataStoreWrite: '<S131>/W13A-RTE-DO' */
    DO_INDSW_W13A_RTE = NONVITALMAIN_DW.INDIKASIPOINT_g.AND34;

    /* DataStoreWrite: '<S131>/W13A-RWBE-DO' incorporates:
     *  Logic: '<S131>/AND5'
     */
    DO_INDSW_W13A_RWBE = (DO_INDSW_W13A_RWE_0 && DO_INDT_BE_13A);

    /* DataStoreWrite: '<S131>/W13A-RWE-DO' */
    DO_INDSW_W13A_RWE = NONVITALMAIN_DW.INDIKASIPOINT_g.OR13;

    /* DataStoreWrite: '<S131>/W13A-RWRE-DO' incorporates:
     *  Logic: '<S131>/AND3'
     */
    DO_INDSW_W13A_RWRE = (DO_INDSW_W13A_RWE_0 && DO_INDT_RE_13A);

    /* DataStoreWrite: '<S131>/W13A-RWTE-DO' */
    DO_INDSW_W13A_RWTE = NONVITALMAIN_DW.INDIKASIPOINT_g.OR14;

    /* DataStoreRead: '<S132>/W13B//23B-L' */
    rtb_W13B23BL = M_W13B_23B_L;

    /* DataStoreRead: '<S132>/W13B//23B-SWRLS' */
    rtb_W13B23BSWRLS = M_W13B_23B_SWRLS;

    /* DataStoreRead: '<S132>/W13B//23B-SWINIT' */
    rtb_W13B23BSWINIT = M_W13B_23B_SWINIT;

    /* DataStoreRead: '<S132>/W13B//23B-BLOCK' */
    rtb_W13B23BBLOCK = M_W13B_23B_BLOCK;

    /* DataStoreRead: '<S132>/W13B//23B-LS' */
    rtb_W13B23BLS = M_W13B_23B_LS;

    /* DataStoreRead: '<S132>/FLASH-1S' */
    rtb_FLASH1S_n = M_GV_FLASH_1000;

    /* DataStoreRead: '<S132>/FLASH-0.5S' */
    rtb_FLASH05S_p = NONVITALMAIN_DW.M_GV_FLASH_500;

    /* DataStoreRead: '<S132>/W13B//23B-NWP' */
    rtb_W13B23BNWP = M_W13B_23B_NWP;

    /* DataStoreRead: '<S132>/W13B//23B-RWP' */
    rtb_W13B23BRWP = M_W13B_23B_RWP;

    /* DataStoreRead: '<S132>/W13B//23B-NWZ' */
    rtb_W13B23BNWZ = M_W13B_23B_NWZ;

    /* DataStoreRead: '<S132>/W13B//23B-RWZ' */
    rtb_W13B23BRWZ = M_W13B_23B_RWZ;

    /* DataStoreRead: '<S132>/W13B//23B-NWC' */
    rtb_W13B23BNWC = M_W13B_23B_NWC;

    /* DataStoreRead: '<S132>/W13B//23B-RWC' */
    rtb_W13B23BRWC = M_W13B_23B_RWC;

    /* DataStoreRead: '<S132>/W13B//23B-OOC' */
    rtb_W13B23BOOC = M_W13B_23B_OOC;

    /* DataStoreRead: '<S132>/13B-TP' */
    rtb_u3BTP = M_TP_13B;

    /* Logic: '<S132>/NOT1' incorporates:
     *  Logic: '<S132>/AND1'
     */
    rtb_NOT1_b = !(M_T_ES_13B && M_T_WS_13B);

    /* Outputs for Atomic SubSystem: '<S132>/INDIKASI POINT' */
    M_IND_POINT(rtb_W13B23BL, rtb_W13B23BSWRLS, rtb_W13B23BSWINIT,
                rtb_W13B23BBLOCK, rtb_W13B23BLS, rtb_FLASH1S_n, rtb_FLASH05S_p,
                rtb_W13B23BNWP, rtb_W13B23BRWP, rtb_W13B23BNWZ, rtb_W13B23BRWZ,
                rtb_W13B23BNWC, rtb_W13B23BRWC, rtb_W13B23BOOC, rtb_u3BTP,
                rtb_NOT1_b, &NONVITALMAIN_DW.INDIKASIPOINT_l);

    /* End of Outputs for SubSystem: '<S132>/INDIKASI POINT' */

    /* DataStoreWrite: '<S132>/W13B-BE-DO' */
    DO_INDSW_W13B_BE = NONVITALMAIN_DW.INDIKASIPOINT_l.OR9;

    /* DataStoreWrite: '<S132>/W13B-LE-DO' */
    DO_INDSW_W13B_LE = NONVITALMAIN_DW.INDIKASIPOINT_l.AND5;

    /* Logic: '<S132>/NOT2' */
    rtb_RWE = !rtb_NOT1_b;

    /* DataStoreWrite: '<S132>/W13B-NBE-DO' incorporates:
     *  Logic: '<S132>/AND6'
     *  Logic: '<S132>/AND8'
     */
    DO_INDSW_W13B_NBE = (DO_INDT_BE_13B && (M_W13B_23B_NWP || rtb_RWE));

    /* DataStoreWrite: '<S132>/W13B-NRE-DO' */
    DO_INDSW_W13B_NRE = NONVITALMAIN_DW.INDIKASIPOINT_l.AND27;

    /* DataStoreWrite: '<S132>/W13B-NTE-DO' */
    DO_INDSW_W13B_NTE = NONVITALMAIN_DW.INDIKASIPOINT_l.AND26;

    /* DataStoreWrite: '<S132>/W13B-NWBE-DO' incorporates:
     *  Logic: '<S132>/AND4'
     */
    DO_INDSW_W13B_NWBE = (DO_INDSW_W13B_NWE_0 && DO_INDT_BE_13B);

    /* DataStoreWrite: '<S132>/W13B-NWE-DO' */
    DO_INDSW_W13B_NWE = NONVITALMAIN_DW.INDIKASIPOINT_l.OR11;

    /* DataStoreWrite: '<S132>/W13B-NWRE-DO' incorporates:
     *  Logic: '<S132>/AND2'
     */
    DO_INDSW_W13B_NWRE = (DO_INDSW_W13B_NWE_0 && DO_INDT_RE_13B);

    /* DataStoreWrite: '<S132>/W13B-NWTE-DO' */
    DO_INDSW_W13B_NWTE = NONVITALMAIN_DW.INDIKASIPOINT_l.OR12;

    /* DataStoreWrite: '<S132>/W13B-RBE-DO' incorporates:
     *  Logic: '<S132>/AND7'
     *  Logic: '<S132>/AND9'
     */
    DO_INDSW_W13B_RBE = (DO_INDT_BE_13B && (rtb_RWE || M_W13B_23B_RWP));

    /* DataStoreWrite: '<S132>/W13B-RRE-DO' */
    DO_INDSW_W13B_RRE = NONVITALMAIN_DW.INDIKASIPOINT_l.AND28;

    /* DataStoreWrite: '<S132>/W13B-RTE-DO' */
    DO_INDSW_W13B_RTE = NONVITALMAIN_DW.INDIKASIPOINT_l.AND34;

    /* DataStoreWrite: '<S132>/W13B-RWBE-DO' incorporates:
     *  Logic: '<S132>/AND5'
     */
    DO_INDSW_W13B_RWBE = (DO_INDSW_W13B_RWE_0 && DO_INDT_BE_13B);

    /* DataStoreWrite: '<S132>/W13B-RWE-DO' */
    DO_INDSW_W13B_RWE = NONVITALMAIN_DW.INDIKASIPOINT_l.OR13;

    /* DataStoreWrite: '<S132>/W13B-RWRE-DO' incorporates:
     *  Logic: '<S132>/AND3'
     */
    DO_INDSW_W13B_RWRE = (DO_INDSW_W13B_RWE_0 && DO_INDT_RE_13B);

    /* DataStoreWrite: '<S132>/W13B-RWTE-DO' */
    DO_INDSW_W13B_RWTE = NONVITALMAIN_DW.INDIKASIPOINT_l.OR14;

    /* DataStoreRead: '<S133>/W11A//21A-L' */
    rtb_W11A21AL_c = M_W11A_21A_L;

    /* DataStoreRead: '<S133>/W11A//21A-SWRLS' */
    rtb_W11A21ASWRLS_a = M_W11A_21A_SWRLS;

    /* DataStoreRead: '<S133>/W11A//21A-SWINIT' */
    rtb_W11A21ASWINIT_p = M_W11A_21A_SWINIT;

    /* DataStoreRead: '<S133>/W11A//21A-BLOCK' */
    rtb_W11A21ABLOCK_j = M_W11A_21A_BLOCK;

    /* DataStoreRead: '<S133>/W11A//21A-LS' */
    rtb_W11A21ALS_n = M_W11A_21A_LS;

    /* DataStoreRead: '<S133>/FLASH-1S' */
    rtb_FLASH1S_m = M_GV_FLASH_1000;

    /* DataStoreRead: '<S133>/FLASH-0.5S' */
    rtb_FLASH05S_eu = NONVITALMAIN_DW.M_GV_FLASH_500;

    /* DataStoreRead: '<S133>/W11A//21A-NWP' */
    rtb_W11A21ANWP_k = M_W11A_21A_NWP;

    /* DataStoreRead: '<S133>/W11A//21A-RWP' */
    rtb_W11A21ARWP_j = M_W11A_21A_RWP;

    /* DataStoreRead: '<S133>/W11A//21A-NWZ' */
    rtb_W11A21ANWZ_b = M_W11A_21A_NWZ;

    /* DataStoreRead: '<S133>/W11A//21A-RWZ' */
    rtb_W11A21ARWZ_h = M_W11A_21A_RWZ;

    /* DataStoreRead: '<S133>/W11A//21A-NWC' */
    rtb_W11A21ANWC_g = M_W11A_21A_NWC;

    /* DataStoreRead: '<S133>/W11A//21A-RWC' */
    rtb_W11A21ARWC_l = M_W11A_21A_RWC;

    /* DataStoreRead: '<S133>/W11A//21A-OOC' */
    rtb_W11A21AOOC_e = M_W11A_21A_OOC;

    /* DataStoreRead: '<S133>/21A-TP' */
    rtb_u1ATP_b = M_TP_21A;

    /* Logic: '<S133>/NOT1' incorporates:
     *  Logic: '<S133>/AND1'
     */
    rtb_NOT1_j = !(M_T_ES_21A && M_T_WS_21A && M_S_ES_21A && M_S_WS_21A);

    /* Outputs for Atomic SubSystem: '<S133>/INDIKASI POINT' */
    M_IND_POINT(rtb_W11A21AL_c, rtb_W11A21ASWRLS_a, rtb_W11A21ASWINIT_p,
                rtb_W11A21ABLOCK_j, rtb_W11A21ALS_n, rtb_FLASH1S_m,
                rtb_FLASH05S_eu, rtb_W11A21ANWP_k, rtb_W11A21ARWP_j,
                rtb_W11A21ANWZ_b, rtb_W11A21ARWZ_h, rtb_W11A21ANWC_g,
                rtb_W11A21ARWC_l, rtb_W11A21AOOC_e, rtb_u1ATP_b, rtb_NOT1_j,
                &NONVITALMAIN_DW.INDIKASIPOINT_c);

    /* End of Outputs for SubSystem: '<S133>/INDIKASI POINT' */

    /* DataStoreWrite: '<S133>/W21A-BE-DO' */
    DO_INDSW_W21A_BE = NONVITALMAIN_DW.INDIKASIPOINT_c.OR9;

    /* DataStoreWrite: '<S133>/W21A-LE-DO' */
    DO_INDSW_W21A_LE = NONVITALMAIN_DW.INDIKASIPOINT_c.AND5;

    /* Logic: '<S133>/NOT2' */
    rtb_RWE = !rtb_NOT1_j;

    /* DataStoreWrite: '<S133>/W21A-NBE-DO' incorporates:
     *  Logic: '<S133>/AND6'
     *  Logic: '<S133>/AND8'
     */
    DO_INDSW_W21A_NBE = (DO_INDT_BE_21A && (M_W11A_21A_NWP || rtb_RWE));

    /* DataStoreWrite: '<S133>/W21A-NRE-DO' */
    DO_INDSW_W21A_NRE = NONVITALMAIN_DW.INDIKASIPOINT_c.AND27;

    /* DataStoreWrite: '<S133>/W21A-NTE-DO' */
    DO_INDSW_W21A_NTE = NONVITALMAIN_DW.INDIKASIPOINT_c.AND26;

    /* DataStoreWrite: '<S133>/W21A-NWBE-DO' incorporates:
     *  Logic: '<S133>/AND4'
     */
    DO_INDSW_W21A_NWBE = (DO_INDSW_W21A_NWE_0 && DO_INDT_BE_21A);

    /* DataStoreWrite: '<S133>/W21A-NWE-DO' */
    DO_INDSW_W21A_NWE = NONVITALMAIN_DW.INDIKASIPOINT_c.OR11;

    /* DataStoreWrite: '<S133>/W21A-NWRE-DO' incorporates:
     *  Logic: '<S133>/AND2'
     */
    DO_INDSW_W21A_NWRE = (DO_INDSW_W21A_NWE_0 && DO_INDT_RE_21A);

    /* DataStoreWrite: '<S133>/W21A-NWTE-DO' */
    DO_INDSW_W21A_NWTE = NONVITALMAIN_DW.INDIKASIPOINT_c.OR12;

    /* DataStoreWrite: '<S133>/W21A-RBE-DO' incorporates:
     *  Logic: '<S133>/AND7'
     *  Logic: '<S133>/AND9'
     */
    DO_INDSW_W21A_RBE = (DO_INDT_BE_21A && (rtb_RWE || M_W11A_21A_RWP));

    /* DataStoreWrite: '<S133>/W21A-RRE-DO' */
    DO_INDSW_W21A_RRE = NONVITALMAIN_DW.INDIKASIPOINT_c.AND28;

    /* DataStoreWrite: '<S133>/W21A-RTE-DO' */
    DO_INDSW_W21A_RTE = NONVITALMAIN_DW.INDIKASIPOINT_c.AND34;

    /* DataStoreWrite: '<S133>/W21A-RWBE-DO' incorporates:
     *  Logic: '<S133>/AND5'
     */
    DO_INDSW_W21A_RWBE = (DO_INDSW_W21A_RWE_0 && DO_INDT_BE_21A);

    /* DataStoreWrite: '<S133>/W21A-RWE-DO' */
    DO_INDSW_W21A_RWE = NONVITALMAIN_DW.INDIKASIPOINT_c.OR13;

    /* DataStoreWrite: '<S133>/W21A-RWRE-DO' incorporates:
     *  Logic: '<S133>/AND3'
     */
    DO_INDSW_W21A_RWRE = (DO_INDSW_W21A_RWE_0 && DO_INDT_RE_21A);

    /* DataStoreWrite: '<S133>/W21A-RWTE-DO' */
    DO_INDSW_W21A_RWTE = NONVITALMAIN_DW.INDIKASIPOINT_c.OR14;

    /* DataStoreRead: '<S134>/W11B//21B-L' */
    rtb_W11B21BL_e = M_W11B_21B_L;

    /* DataStoreRead: '<S134>/W11B//21B-SWRLS' */
    rtb_W11B21BSWRLS_c = M_W11B_21B_SWRLS;

    /* DataStoreRead: '<S134>/W11B//21B-SWINIT' */
    rtb_W11B21BSWINIT_g = M_W11B_21B_SWINIT;

    /* DataStoreRead: '<S134>/W11B//21B-BLOCK' */
    rtb_W11B21BBLOCK_i = M_W11B_21B_BLOCK;

    /* DataStoreRead: '<S134>/W11B//21B-LS' */
    rtb_W11B21BLS_j = M_W11B_21B_LS;

    /* DataStoreRead: '<S134>/FLASH-1S' */
    rtb_FLASH1S_h = M_GV_FLASH_1000;

    /* DataStoreRead: '<S134>/FLASH-0.5S' */
    rtb_FLASH05S_ba = NONVITALMAIN_DW.M_GV_FLASH_500;

    /* DataStoreRead: '<S134>/W11B//21B-NWP' */
    rtb_W11B21BNWP_p = M_W11B_21B_NWP;

    /* DataStoreRead: '<S134>/W11B//21B-RWP' */
    rtb_W11B21BRWP_k = M_W11B_21B_RWP;

    /* DataStoreRead: '<S134>/W11B//21B-NWZ' */
    rtb_W11B21BNWZ_n = M_W11B_21B_NWZ;

    /* DataStoreRead: '<S134>/W11B//21B-RWZ' */
    rtb_W11B21BRWZ_j = M_W11B_21B_RWZ;

    /* DataStoreRead: '<S134>/W11B//21B-NWC' */
    rtb_W11B21BNWC_a = M_W11B_21B_NWC;

    /* DataStoreRead: '<S134>/W11B//21B-RWC' */
    rtb_W11B21BRWC_c = M_W11B_21B_RWC;

    /* DataStoreRead: '<S134>/W11B//21B-OOC' */
    rtb_W11B21BOOC_n = M_W11B_21B_OOC;

    /* DataStoreRead: '<S134>/21B-TP' */
    rtb_u1BTP_g = M_TP_21B;

    /* Logic: '<S134>/NOT1' incorporates:
     *  Logic: '<S134>/AND1'
     */
    rtb_NOT1_g = !(M_T_ES_21B && M_T_WS_21B && M_S_ES_21B && M_S_WS_21B);

    /* Outputs for Atomic SubSystem: '<S134>/INDIKASI POINT' */
    M_IND_POINT(rtb_W11B21BL_e, rtb_W11B21BSWRLS_c, rtb_W11B21BSWINIT_g,
                rtb_W11B21BBLOCK_i, rtb_W11B21BLS_j, rtb_FLASH1S_h,
                rtb_FLASH05S_ba, rtb_W11B21BNWP_p, rtb_W11B21BRWP_k,
                rtb_W11B21BNWZ_n, rtb_W11B21BRWZ_j, rtb_W11B21BNWC_a,
                rtb_W11B21BRWC_c, rtb_W11B21BOOC_n, rtb_u1BTP_g, rtb_NOT1_g,
                &NONVITALMAIN_DW.INDIKASIPOINT_cu);

    /* End of Outputs for SubSystem: '<S134>/INDIKASI POINT' */

    /* DataStoreWrite: '<S134>/W21B-BE-DO' */
    DO_INDSW_W21B_BE = NONVITALMAIN_DW.INDIKASIPOINT_cu.OR9;

    /* DataStoreWrite: '<S134>/W21B-LE-DO' */
    DO_INDSW_W21B_LE = NONVITALMAIN_DW.INDIKASIPOINT_cu.AND5;

    /* Logic: '<S134>/NOT2' */
    rtb_RWE = !rtb_NOT1_g;

    /* DataStoreWrite: '<S134>/W21B-NBE-DO' incorporates:
     *  Logic: '<S134>/AND6'
     *  Logic: '<S134>/AND8'
     */
    DO_INDSW_W21B_NBE = (DO_INDT_BE_21B && (M_W11B_21B_NWP || rtb_RWE));

    /* DataStoreWrite: '<S134>/W21B-NRE-DO' */
    DO_INDSW_W21B_NRE = NONVITALMAIN_DW.INDIKASIPOINT_cu.AND27;

    /* DataStoreWrite: '<S134>/W21B-NTE-DO' */
    DO_INDSW_W21B_NTE = NONVITALMAIN_DW.INDIKASIPOINT_cu.AND26;

    /* DataStoreWrite: '<S134>/W21B-NWBE-DO' incorporates:
     *  Logic: '<S134>/AND4'
     */
    DO_INDSW_W21B_NWBE = (DO_INDSW_W21B_NWE_0 && DO_INDT_BE_21B);

    /* DataStoreWrite: '<S134>/W21B-NWE-DO' */
    DO_INDSW_W21B_NWE = NONVITALMAIN_DW.INDIKASIPOINT_cu.OR11;

    /* DataStoreWrite: '<S134>/W21B-NWRE-DO' incorporates:
     *  Logic: '<S134>/AND2'
     */
    DO_INDSW_W21B_NWRE = (DO_INDSW_W21B_NWE_0 && DO_INDT_RE_21B);

    /* DataStoreWrite: '<S134>/W21B-NWTE-DO' */
    DO_INDSW_W21B_NWTE = NONVITALMAIN_DW.INDIKASIPOINT_cu.OR12;

    /* DataStoreWrite: '<S134>/W21B-RBE-DO' incorporates:
     *  Logic: '<S134>/AND7'
     *  Logic: '<S134>/AND9'
     */
    DO_INDSW_W21B_RBE = (DO_INDT_BE_21B && (rtb_RWE || M_W11B_21B_RWP));

    /* DataStoreWrite: '<S134>/W21B-RRE-DO' */
    DO_INDSW_W21B_RRE = NONVITALMAIN_DW.INDIKASIPOINT_cu.AND28;

    /* DataStoreWrite: '<S134>/W21B-RTE-DO' */
    DO_INDSW_W21B_RTE = NONVITALMAIN_DW.INDIKASIPOINT_cu.AND34;

    /* DataStoreWrite: '<S134>/W21B-RWBE-DO' incorporates:
     *  Logic: '<S134>/AND5'
     */
    DO_INDSW_W21B_RWBE = (DO_INDSW_W21B_RWE_0 && DO_INDT_BE_21B);

    /* DataStoreWrite: '<S134>/W21B-RWE-DO' */
    DO_INDSW_W21B_RWE = NONVITALMAIN_DW.INDIKASIPOINT_cu.OR13;

    /* DataStoreWrite: '<S134>/W21B-RWRE-DO' incorporates:
     *  Logic: '<S134>/AND3'
     */
    DO_INDSW_W21B_RWRE = (DO_INDSW_W21B_RWE_0 && DO_INDT_RE_21B);

    /* DataStoreWrite: '<S134>/W21B-RWTE-DO' */
    DO_INDSW_W21B_RWTE = NONVITALMAIN_DW.INDIKASIPOINT_cu.OR14;

    /* DataStoreRead: '<S135>/W21C-L' */
    rtb_W21CL = M_W21C_L;

    /* DataStoreRead: '<S135>/W21C-SWRLS' */
    rtb_W21CSWRLS = M_W21C_SWRLS;

    /* DataStoreRead: '<S135>/W21C-SWINIT' */
    rtb_W21CSWINIT = M_W21C_SWINIT;

    /* DataStoreRead: '<S135>/W21C-BLOCK' */
    rtb_W21CBLOCK = M_W21C_BLOCK;

    /* DataStoreRead: '<S135>/W21C-LS' */
    rtb_W21CLS = M_W21C_LS;

    /* DataStoreRead: '<S135>/FLASH-1S' */
    rtb_FLASH1S_nt = M_GV_FLASH_1000;

    /* DataStoreRead: '<S135>/FLASH-0.5S' */
    rtb_FLASH05S_k = NONVITALMAIN_DW.M_GV_FLASH_500;

    /* DataStoreRead: '<S135>/W21C-NWP' */
    rtb_W21CNWP = M_W21C_NWP;

    /* DataStoreRead: '<S135>/W21C-RWP' */
    rtb_W21CRWP = M_W21C_RWP;

    /* DataStoreRead: '<S135>/W21C-NWZ' */
    rtb_W21CNWZ = M_W21C_NWZ;

    /* DataStoreRead: '<S135>/W21C-RWZ' */
    rtb_W21CRWZ = M_W21C_RWZ;

    /* DataStoreRead: '<S135>/W21C-NWC' */
    rtb_W21CNWC = M_W21C_NWC;

    /* DataStoreRead: '<S135>/W21C-RWC' */
    rtb_W21CRWC = M_W21C_RWC;

    /* DataStoreRead: '<S135>/W21C-OOC' */
    rtb_W21COOC = M_W21C_OOC;

    /* DataStoreRead: '<S135>/21C-TP' */
    rtb_u1CTP_j = M_TP_21C;

    /* Logic: '<S135>/NOT1' incorporates:
     *  Logic: '<S135>/AND1'
     */
    rtb_NOT1_i = !(M_T_ES_21C && M_T_WS_21C && M_S_ES_21C && M_S_WS_21C);

    /* Outputs for Atomic SubSystem: '<S135>/INDIKASI POINT' */
    M_IND_POINT(rtb_W21CL, rtb_W21CSWRLS, rtb_W21CSWINIT, rtb_W21CBLOCK,
                rtb_W21CLS, rtb_FLASH1S_nt, rtb_FLASH05S_k, rtb_W21CNWP,
                rtb_W21CRWP, rtb_W21CNWZ, rtb_W21CRWZ, rtb_W21CNWC, rtb_W21CRWC,
                rtb_W21COOC, rtb_u1CTP_j, rtb_NOT1_i,
                &NONVITALMAIN_DW.INDIKASIPOINT_h);

    /* End of Outputs for SubSystem: '<S135>/INDIKASI POINT' */

    /* DataStoreWrite: '<S135>/W21C-BE-DO' */
    DO_INDSW_W21C_BE = NONVITALMAIN_DW.INDIKASIPOINT_h.OR9;

    /* DataStoreWrite: '<S135>/W21C-LE-DO' */
    DO_INDSW_W21C_LE = NONVITALMAIN_DW.INDIKASIPOINT_h.AND5;

    /* Logic: '<S135>/NOT2' */
    rtb_RWE = !rtb_NOT1_i;

    /* DataStoreWrite: '<S135>/W21C-NBE-DO' incorporates:
     *  Logic: '<S135>/AND6'
     *  Logic: '<S135>/AND8'
     */
    DO_INDSW_W21C_NBE = (DO_INDT_BE_21C && (M_W21C_NWP || rtb_RWE));

    /* DataStoreWrite: '<S135>/W21C-NRE-DO' */
    DO_INDSW_W21C_NRE = NONVITALMAIN_DW.INDIKASIPOINT_h.AND27;

    /* DataStoreWrite: '<S135>/W21C-NTE-DO' */
    DO_INDSW_W21C_NTE = NONVITALMAIN_DW.INDIKASIPOINT_h.AND26;

    /* DataStoreWrite: '<S135>/W21C-NWBE-DO' incorporates:
     *  Logic: '<S135>/AND4'
     */
    DO_INDSW_W21C_NWBE = (DO_INDSW_W21C_NWE_0 && DO_INDT_BE_21C);

    /* DataStoreWrite: '<S135>/W21C-NWE-DO' */
    DO_INDSW_W21C_NWE = NONVITALMAIN_DW.INDIKASIPOINT_h.OR11;

    /* DataStoreWrite: '<S135>/W21C-NWRE-DO' incorporates:
     *  Logic: '<S135>/AND2'
     */
    DO_INDSW_W21C_NWRE = (DO_INDSW_W21C_NWE_0 && DO_INDT_RE_21C);

    /* DataStoreWrite: '<S135>/W21C-NWTE-DO' */
    DO_INDSW_W21C_NWTE = NONVITALMAIN_DW.INDIKASIPOINT_h.OR12;

    /* DataStoreWrite: '<S135>/W21C-RBE-DO' incorporates:
     *  Logic: '<S135>/AND7'
     *  Logic: '<S135>/AND9'
     */
    DO_INDSW_W21C_RBE = (DO_INDT_BE_21C && (rtb_RWE || M_W21C_RWP));

    /* DataStoreWrite: '<S135>/W21C-RRE-DO' */
    DO_INDSW_W21C_RRE = NONVITALMAIN_DW.INDIKASIPOINT_h.AND28;

    /* DataStoreWrite: '<S135>/W21C-RTE-DO' */
    DO_INDSW_W21C_RTE = NONVITALMAIN_DW.INDIKASIPOINT_h.AND34;

    /* DataStoreWrite: '<S135>/W21C-RWBE-DO' incorporates:
     *  Logic: '<S135>/AND5'
     */
    DO_INDSW_W21C_RWBE = (DO_INDSW_W21C_RWE_0 && DO_INDT_BE_21C);

    /* DataStoreWrite: '<S135>/W21C-RWE-DO' */
    DO_INDSW_W21C_RWE = NONVITALMAIN_DW.INDIKASIPOINT_h.OR13;

    /* DataStoreWrite: '<S135>/W21C-RWRE-DO' incorporates:
     *  Logic: '<S135>/AND3'
     */
    DO_INDSW_W21C_RWRE = (DO_INDSW_W21C_RWE_0 && DO_INDT_RE_21C);

    /* DataStoreWrite: '<S135>/W21C-RWTE-DO' */
    DO_INDSW_W21C_RWTE = NONVITALMAIN_DW.INDIKASIPOINT_h.OR14;

    /* DataStoreRead: '<S136>/W13A//23A-L' */
    rtb_W13A23AL_j = M_W13A_23A_L;

    /* DataStoreRead: '<S136>/W13A//23A-SWRLS' */
    rtb_W13A23ASWRLS_b = M_W13A_23A_SWRLS;

    /* DataStoreRead: '<S136>/W13A//23A-SWINIT' */
    rtb_W13A23ASWINIT_h = M_W13A_23A_SWINIT;

    /* DataStoreRead: '<S136>/W13A//23A-BLOCK' */
    rtb_W13A23ABLOCK_n = M_W13A_23A_BLOCK;

    /* DataStoreRead: '<S136>/W13A//23A-LS' */
    rtb_W13A23ALS_h = M_W13A_23A_LS;

    /* DataStoreRead: '<S136>/FLASH-1S' */
    rtb_FLASH1S_a = M_GV_FLASH_1000;

    /* DataStoreRead: '<S136>/FLASH-0.5S' */
    rtb_FLASH05S_mu = NONVITALMAIN_DW.M_GV_FLASH_500;

    /* DataStoreRead: '<S136>/W13A//23A-NWP' */
    rtb_W13A23ANWP_o = M_W13A_23A_NWP;

    /* DataStoreRead: '<S136>/W13A//23A-RWP' */
    rtb_W13A23ARWP_i = M_W13A_23A_RWP;

    /* DataStoreRead: '<S136>/W13A//23A-NWZ' */
    rtb_W13A23ANWZ_a = M_W13A_23A_NWZ;

    /* DataStoreRead: '<S136>/W13A//23A-RWZ' */
    rtb_W13A23ARWZ_m = M_W13A_23A_RWZ;

    /* DataStoreRead: '<S136>/W13A//23A-NWC' */
    rtb_W13A23ANWC_p = M_W13A_23A_NWC;

    /* DataStoreRead: '<S136>/W13A//23A-RWC' */
    rtb_W13A23ARWC_g = M_W13A_23A_RWC;

    /* DataStoreRead: '<S136>/W13A//23A-OOC' */
    rtb_W13A23AOOC_c = M_W13A_23A_OOC;

    /* DataStoreRead: '<S136>/23A-TP' */
    rtb_u3ATP_m = M_TP_23A;

    /* Logic: '<S136>/NOT1' incorporates:
     *  Logic: '<S136>/AND1'
     */
    rtb_NOT1_hl = !(M_T_ES_23A && M_T_WS_23A);

    /* Outputs for Atomic SubSystem: '<S136>/INDIKASI POINT' */
    M_IND_POINT(rtb_W13A23AL_j, rtb_W13A23ASWRLS_b, rtb_W13A23ASWINIT_h,
                rtb_W13A23ABLOCK_n, rtb_W13A23ALS_h, rtb_FLASH1S_a,
                rtb_FLASH05S_mu, rtb_W13A23ANWP_o, rtb_W13A23ARWP_i,
                rtb_W13A23ANWZ_a, rtb_W13A23ARWZ_m, rtb_W13A23ANWC_p,
                rtb_W13A23ARWC_g, rtb_W13A23AOOC_c, rtb_u3ATP_m, rtb_NOT1_hl,
                &NONVITALMAIN_DW.INDIKASIPOINT_a);

    /* End of Outputs for SubSystem: '<S136>/INDIKASI POINT' */

    /* DataStoreWrite: '<S136>/W23A-BE-DO' */
    DO_INDSW_W23A_BE = NONVITALMAIN_DW.INDIKASIPOINT_a.OR9;

    /* DataStoreWrite: '<S136>/W23A-LE-DO' */
    DO_INDSW_W23A_LE = NONVITALMAIN_DW.INDIKASIPOINT_a.AND5;

    /* Logic: '<S136>/NOT2' */
    rtb_RWE = !rtb_NOT1_hl;

    /* DataStoreWrite: '<S136>/W23A-NBE-DO' incorporates:
     *  Logic: '<S136>/AND6'
     *  Logic: '<S136>/AND8'
     */
    DO_INDSW_W23A_NBE = (DO_INDT_BE_23A && (M_W13A_23A_NWP || rtb_RWE));

    /* DataStoreWrite: '<S136>/W23A-NRE-DO' */
    DO_INDSW_W23A_NRE = NONVITALMAIN_DW.INDIKASIPOINT_a.AND27;

    /* DataStoreWrite: '<S136>/W23A-NTE-DO' */
    DO_INDSW_W23A_NTE = NONVITALMAIN_DW.INDIKASIPOINT_a.AND26;

    /* DataStoreWrite: '<S136>/W23A-NWBE-DO' incorporates:
     *  Logic: '<S136>/AND4'
     */
    DO_INDSW_W23A_NWBE = (DO_INDSW_W23A_NWE_0 && DO_INDT_BE_23A);

    /* DataStoreWrite: '<S136>/W23A-NWE-DO' */
    DO_INDSW_W23A_NWE = NONVITALMAIN_DW.INDIKASIPOINT_a.OR11;

    /* DataStoreWrite: '<S136>/W23A-NWRE-DO' incorporates:
     *  Logic: '<S136>/AND2'
     */
    DO_INDSW_W23A_NWRE = (DO_INDSW_W23A_NWE_0 && DO_INDT_RE_23A);

    /* DataStoreWrite: '<S136>/W23A-NWTE-DO' */
    DO_INDSW_W23A_NWTE = NONVITALMAIN_DW.INDIKASIPOINT_a.OR12;

    /* DataStoreWrite: '<S136>/W23A-RBE-DO' incorporates:
     *  Logic: '<S136>/AND7'
     *  Logic: '<S136>/AND9'
     */
    DO_INDSW_W23A_RBE = (DO_INDT_BE_23A && (rtb_RWE || M_W13A_23A_RWP));

    /* DataStoreWrite: '<S136>/W23A-RRE-DO' */
    DO_INDSW_W23A_RRE = NONVITALMAIN_DW.INDIKASIPOINT_a.AND28;

    /* DataStoreWrite: '<S136>/W23A-RTE-DO' */
    DO_INDSW_W23A_RTE = NONVITALMAIN_DW.INDIKASIPOINT_a.AND34;

    /* DataStoreWrite: '<S136>/W23A-RWBE-DO' incorporates:
     *  Logic: '<S136>/AND5'
     */
    DO_INDSW_W23A_RWBE = (DO_INDSW_W23A_RWE_0 && DO_INDT_BE_23A);

    /* DataStoreWrite: '<S136>/W23A-RWE-DO' */
    DO_INDSW_W23A_RWE = NONVITALMAIN_DW.INDIKASIPOINT_a.OR13;

    /* DataStoreWrite: '<S136>/W23A-RWRE-DO' incorporates:
     *  Logic: '<S136>/AND3'
     */
    DO_INDSW_W23A_RWRE = (DO_INDSW_W23A_RWE_0 && DO_INDT_RE_23A);

    /* DataStoreWrite: '<S136>/W23A-RWTE-DO' */
    DO_INDSW_W23A_RWTE = NONVITALMAIN_DW.INDIKASIPOINT_a.OR14;

    /* DataStoreRead: '<S137>/W13B//23B-L' */
    rtb_W13B23BL_b = M_W13B_23B_L;

    /* DataStoreRead: '<S137>/W13B//23B-SWRLS' */
    rtb_W13B23BSWRLS_p = M_W13B_23B_SWRLS;

    /* DataStoreRead: '<S137>/W13B//23B-SWINIT' */
    rtb_W13B23BSWINIT_p = M_W13B_23B_SWINIT;

    /* DataStoreRead: '<S137>/W13B//23B-BLOCK' */
    rtb_W13B23BBLOCK_g = M_W13B_23B_BLOCK;

    /* DataStoreRead: '<S137>/W13B//23B-LS' */
    rtb_W13B23BLS_f = M_W13B_23B_LS;

    /* DataStoreRead: '<S137>/FLASH-1S' */
    rtb_FLASH1S_k = M_GV_FLASH_1000;

    /* DataStoreRead: '<S137>/FLASH-0.5S' */
    rtb_FLASH05S_i = NONVITALMAIN_DW.M_GV_FLASH_500;

    /* DataStoreRead: '<S137>/W13B//23B-NWP' */
    rtb_W13B23BNWP_c = M_W13B_23B_NWP;

    /* DataStoreRead: '<S137>/W13B//23B-RWP' */
    rtb_W13B23BRWP_e = M_W13B_23B_RWP;

    /* DataStoreRead: '<S137>/W13B//23B-NWZ' */
    rtb_W13B23BNWZ_d = M_W13B_23B_NWZ;

    /* DataStoreRead: '<S137>/W13B//23B-RWZ' */
    rtb_W13B23BRWZ_f = M_W13B_23B_RWZ;

    /* DataStoreRead: '<S137>/W13B//23B-NWC' */
    rtb_W13B23BNWC_f = M_W13B_23B_NWC;

    /* DataStoreRead: '<S137>/W13B//23B-RWC' */
    rtb_W13B23BRWC_d = M_W13B_23B_RWC;

    /* DataStoreRead: '<S137>/W13B//23B-OOC' */
    rtb_W13B23BOOC_n = M_W13B_23B_OOC;

    /* DataStoreRead: '<S137>/23B-TP' */
    rtb_u3BTP_b = M_TP_23B;

    /* Logic: '<S137>/NOT1' incorporates:
     *  Logic: '<S137>/AND1'
     */
    rtb_NOT1_bf = !(M_T_ES_23B && M_T_WS_23B);

    /* Outputs for Atomic SubSystem: '<S137>/INDIKASI POINT' */
    M_IND_POINT(rtb_W13B23BL_b, rtb_W13B23BSWRLS_p, rtb_W13B23BSWINIT_p,
                rtb_W13B23BBLOCK_g, rtb_W13B23BLS_f, rtb_FLASH1S_k,
                rtb_FLASH05S_i, rtb_W13B23BNWP_c, rtb_W13B23BRWP_e,
                rtb_W13B23BNWZ_d, rtb_W13B23BRWZ_f, rtb_W13B23BNWC_f,
                rtb_W13B23BRWC_d, rtb_W13B23BOOC_n, rtb_u3BTP_b, rtb_NOT1_bf,
                &NONVITALMAIN_DW.INDIKASIPOINT_n);

    /* End of Outputs for SubSystem: '<S137>/INDIKASI POINT' */

    /* DataStoreWrite: '<S137>/W23B-BE-DO' */
    DO_INDSW_W23B_BE = NONVITALMAIN_DW.INDIKASIPOINT_n.OR9;

    /* DataStoreWrite: '<S137>/W23B-LE-DO' */
    DO_INDSW_W23B_LE = NONVITALMAIN_DW.INDIKASIPOINT_n.AND5;

    /* Logic: '<S137>/NOT2' */
    rtb_RWE = !rtb_NOT1_bf;

    /* DataStoreWrite: '<S137>/W23B-NBE-DO' incorporates:
     *  Logic: '<S137>/AND6'
     *  Logic: '<S137>/AND8'
     */
    DO_INDSW_W23B_NBE = (DO_INDT_BE_23B && (M_W13B_23B_NWP || rtb_RWE));

    /* DataStoreWrite: '<S137>/W23B-NRE-DO' */
    DO_INDSW_W23B_NRE = NONVITALMAIN_DW.INDIKASIPOINT_n.AND27;

    /* DataStoreWrite: '<S137>/W23B-NTE-DO' */
    DO_INDSW_W23B_NTE = NONVITALMAIN_DW.INDIKASIPOINT_n.AND26;

    /* DataStoreWrite: '<S137>/W23B-NWBE-DO' incorporates:
     *  Logic: '<S137>/AND4'
     */
    DO_INDSW_W23B_NWBE = (DO_INDSW_W23B_NWE_0 && DO_INDT_BE_23B);

    /* DataStoreWrite: '<S137>/W23B-NWE-DO' */
    DO_INDSW_W23B_NWE = NONVITALMAIN_DW.INDIKASIPOINT_n.OR11;

    /* DataStoreWrite: '<S137>/W23B-NWRE-DO' incorporates:
     *  Logic: '<S137>/AND2'
     */
    DO_INDSW_W23B_NWRE = (DO_INDSW_W23B_NWE_0 && DO_INDT_RE_23B);

    /* DataStoreWrite: '<S137>/W23B-NWTE-DO' */
    DO_INDSW_W23B_NWTE = NONVITALMAIN_DW.INDIKASIPOINT_n.OR12;

    /* DataStoreWrite: '<S137>/W23B-RBE-DO' incorporates:
     *  Logic: '<S137>/AND7'
     *  Logic: '<S137>/AND9'
     */
    DO_INDSW_W23B_RBE = (DO_INDT_BE_23B && (rtb_RWE || M_W13B_23B_RWP));

    /* DataStoreWrite: '<S137>/W23B-RRE-DO' */
    DO_INDSW_W23B_RRE = NONVITALMAIN_DW.INDIKASIPOINT_n.AND28;

    /* DataStoreWrite: '<S137>/W23B-RTE-DO' */
    DO_INDSW_W23B_RTE = NONVITALMAIN_DW.INDIKASIPOINT_n.AND34;

    /* DataStoreWrite: '<S137>/W23B-RWBE-DO' incorporates:
     *  Logic: '<S137>/AND5'
     */
    DO_INDSW_W23B_RWBE = (DO_INDSW_W23B_RWE && DO_INDT_BE_23B);

    /* DataStoreWrite: '<S137>/W23B-RWE-DO' */
    rtb_RWE = NONVITALMAIN_DW.INDIKASIPOINT_n.OR13;

    /* DataStoreWrite: '<S137>/W23B-RWRE-DO' incorporates:
     *  Logic: '<S137>/AND3'
     */
    DO_INDSW_W23B_RWRE = (DO_INDSW_W23B_RWE && DO_INDT_RE_23B);

    /* DataStoreWrite: '<S137>/W23B-RWTE-DO' */
    DO_INDSW_W23B_RWTE = NONVITALMAIN_DW.INDIKASIPOINT_n.OR14;

    /* DataStoreRead: '<S147>/VDR' */
    rtb_VDR_h = NONVITALMAIN_DW.M_VDR;

    /* DataStoreRead: '<S147>/J12A-DR-DO' */
    rtb_J12ADRDO_mk = M_DO_J12A_DR;

    /* DataStoreRead: '<S147>/FLASH' */
    rtb_FLASH = NONVITALMAIN_DW.M_GV_FLASH_500;

    /* Outputs for Atomic SubSystem: '<S147>/INDIKASI SIGNAL' */
    M_SIG_IND_2(rtb_VDR_h, rtb_J12ADRDO_mk, rtb_FLASH,
                &NONVITALMAIN_DW.INDIKASISIGNAL);

    /* End of Outputs for SubSystem: '<S147>/INDIKASI SIGNAL' */

    /* DataStoreWrite: '<S147>/J12A-CGE-DO' */
    DO_INDJ_12A_CGE = NONVITALMAIN_DW.INDIKASISIGNAL.AND6;

    /* DataStoreWrite: '<S147>/J12A-RGE-DO' */
    DO_INDJ_12A_RGE = NONVITALMAIN_DW.INDIKASISIGNAL.AND3;

    /* DataStoreRead: '<S148>/VDR' */
    rtb_VDR_g = NONVITALMAIN_DW.M_VDR;

    /* DataStoreRead: '<S148>/J12B-DR-DO' */
    rtb_J12BDRDO_n = M_DO_J12B_DR;

    /* DataStoreRead: '<S148>/FLASH' */
    rtb_FLASH_n = NONVITALMAIN_DW.M_GV_FLASH_500;

    /* Outputs for Atomic SubSystem: '<S148>/INDIKASI SIGNAL' */
    M_SIG_IND_2(rtb_VDR_g, rtb_J12BDRDO_n, rtb_FLASH_n,
                &NONVITALMAIN_DW.INDIKASISIGNAL_n);

    /* End of Outputs for SubSystem: '<S148>/INDIKASI SIGNAL' */

    /* DataStoreWrite: '<S148>/J12B-CGE-DO' */
    DO_INDJ_12B_CGE = NONVITALMAIN_DW.INDIKASISIGNAL_n.AND6;

    /* DataStoreWrite: '<S148>/J12B-RGE-DO' */
    DO_INDJ_12B_RGE = NONVITALMAIN_DW.INDIKASISIGNAL_n.AND3;

    /* DataStoreRead: '<S149>/VDR' */
    rtb_VDR_c = NONVITALMAIN_DW.M_VDR;

    /* DataStoreRead: '<S149>/J14-DR-DO' */
    rtb_J14DRDO_l = M_DO_J14_DR;

    /* DataStoreRead: '<S149>/FLASH' */
    rtb_FLASH_g = NONVITALMAIN_DW.M_GV_FLASH_500;

    /* Outputs for Atomic SubSystem: '<S149>/INDIKASI SIGNAL' */
    M_SIG_IND_2(rtb_VDR_c, rtb_J14DRDO_l, rtb_FLASH_g,
                &NONVITALMAIN_DW.INDIKASISIGNAL_b);

    /* End of Outputs for SubSystem: '<S149>/INDIKASI SIGNAL' */

    /* DataStoreWrite: '<S149>/J14-CGE-DO' */
    DO_INDJ_14_CGE = NONVITALMAIN_DW.INDIKASISIGNAL_b.AND6;

    /* DataStoreWrite: '<S149>/J14-RGE-DO' */
    DO_INDJ_14_RGE = NONVITALMAIN_DW.INDIKASISIGNAL_b.AND3;

    /* DataStoreRead: '<S150>/VDR' */
    rtb_VDR_j = NONVITALMAIN_DW.M_VDR;

    /* DataStoreRead: '<S150>/J22A-DR-DO' */
    rtb_J22ADRDO_m = M_DO_J22A_DR;

    /* DataStoreRead: '<S150>/FLASH' */
    rtb_FLASH_b = NONVITALMAIN_DW.M_GV_FLASH_500;

    /* Outputs for Atomic SubSystem: '<S150>/INDIKASI SIGNAL' */
    M_SIG_IND_2(rtb_VDR_j, rtb_J22ADRDO_m, rtb_FLASH_b,
                &NONVITALMAIN_DW.INDIKASISIGNAL_ni);

    /* End of Outputs for SubSystem: '<S150>/INDIKASI SIGNAL' */

    /* DataStoreWrite: '<S150>/J22A-CGE-DO' */
    DO_INDJ_22A_CGE = NONVITALMAIN_DW.INDIKASISIGNAL_ni.AND6;

    /* DataStoreWrite: '<S150>/J22A-RGE-DO' */
    DO_INDJ_22A_RGE = NONVITALMAIN_DW.INDIKASISIGNAL_ni.AND3;

    /* DataStoreRead: '<S151>/VDR' */
    rtb_VDR_l = NONVITALMAIN_DW.M_VDR;

    /* DataStoreRead: '<S151>/J22B-DR-DO' */
    rtb_J22BDRDO_a = M_DO_J22B_DR;

    /* DataStoreRead: '<S151>/FLASH' */
    rtb_FLASH_a = NONVITALMAIN_DW.M_GV_FLASH_500;

    /* Outputs for Atomic SubSystem: '<S151>/INDIKASI SIGNAL' */
    M_SIG_IND_2(rtb_VDR_l, rtb_J22BDRDO_a, rtb_FLASH_a,
                &NONVITALMAIN_DW.INDIKASISIGNAL_c);

    /* End of Outputs for SubSystem: '<S151>/INDIKASI SIGNAL' */

    /* DataStoreWrite: '<S151>/J22B-CGE-DO' */
    DO_INDJ_22B_CGE = NONVITALMAIN_DW.INDIKASISIGNAL_c.AND6;

    /* DataStoreWrite: '<S151>/J22B-RGE-DO' */
    DO_INDJ_22B_RGE = NONVITALMAIN_DW.INDIKASISIGNAL_c.AND3;

    /* DataStoreRead: '<S152>/VDR' */
    rtb_VDR_b = NONVITALMAIN_DW.M_VDR;

    /* DataStoreRead: '<S152>/J24-DR-DO' */
    rtb_J24DRDO_m = M_DO_J24_DR;

    /* DataStoreRead: '<S152>/FLASH' */
    rtb_FLASH_k = NONVITALMAIN_DW.M_GV_FLASH_500;

    /* Outputs for Atomic SubSystem: '<S152>/INDIKASI SIGNAL' */
    M_SIG_IND_2(rtb_VDR_b, rtb_J24DRDO_m, rtb_FLASH_k,
                &NONVITALMAIN_DW.INDIKASISIGNAL_a);

    /* End of Outputs for SubSystem: '<S152>/INDIKASI SIGNAL' */

    /* DataStoreWrite: '<S152>/J24-CGE-DO' */
    DO_INDJ_24_CGE = NONVITALMAIN_DW.INDIKASISIGNAL_a.AND6;

    /* DataStoreWrite: '<S152>/J24-RGE-DO' */
    DO_INDJ_24_RGE = NONVITALMAIN_DW.INDIKASISIGNAL_a.AND3;

    /* DataStoreRead: '<S153>/VDR' */
    rtb_VDR_ll = NONVITALMAIN_DW.M_VDR;

    /* DataStoreRead: '<S153>/JL10-DR-DO' */
    rtb_JL10DRDO_j = M_DO_JL10_DR;

    /* DataStoreRead: '<S153>/JL10-GR-DO' */
    rtb_JL10GRDO_h = M_DO_JL10_GR;

    /* DataStoreRead: '<S153>/FLASH' */
    rtb_FLASH_bn = NONVITALMAIN_DW.M_GV_FLASH_500;

    /* Outputs for Atomic SubSystem: '<S153>/INDIKASI SIGNAL' */
    M_SIG_IND(rtb_VDR_ll, rtb_JL10DRDO_j, rtb_JL10GRDO_h, rtb_FLASH_bn,
              &NONVITALMAIN_DW.INDIKASISIGNAL_d);

    /* End of Outputs for SubSystem: '<S153>/INDIKASI SIGNAL' */

    /* DataStoreWrite: '<S153>/JL10-CGE-DO' */
    DO_INDJ_10_CGE = NONVITALMAIN_DW.INDIKASISIGNAL_d.AND6;

    /* DataStoreWrite: '<S153>/JL10-RGE-DO' */
    DO_INDJ_10_RGE = NONVITALMAIN_DW.INDIKASISIGNAL_d.AND3;

    /* DataStoreWrite: '<S153>/JL10-WGE-DO' */
    DO_INDJ_10_WGE = NONVITALMAIN_DW.INDIKASISIGNAL_d.AND10;

    /* DataStoreRead: '<S154>/VDR' */
    rtb_VDR_jd = NONVITALMAIN_DW.M_VDR;

    /* DataStoreRead: '<S154>/JL20-DR-DO' */
    rtb_JL20DRDO_kc = M_DO_JL20_DR;

    /* DataStoreRead: '<S154>/JL20-GR-DO' */
    rtb_JL20GRDO_g = M_DO_JL20_GR;

    /* DataStoreRead: '<S154>/FLASH' */
    rtb_FLASH_e = NONVITALMAIN_DW.M_GV_FLASH_500;

    /* Outputs for Atomic SubSystem: '<S154>/INDIKASI SIGNAL' */
    M_SIG_IND(rtb_VDR_jd, rtb_JL20DRDO_kc, rtb_JL20GRDO_g, rtb_FLASH_e,
              &NONVITALMAIN_DW.INDIKASISIGNAL_f);

    /* End of Outputs for SubSystem: '<S154>/INDIKASI SIGNAL' */

    /* DataStoreWrite: '<S154>/JL20-CGE-DO' */
    DO_INDJ_20_CGE = NONVITALMAIN_DW.INDIKASISIGNAL_f.AND6;

    /* DataStoreWrite: '<S154>/JL20-RGE-DO' */
    DO_INDJ_20_RGE = NONVITALMAIN_DW.INDIKASISIGNAL_f.AND3;

    /* DataStoreWrite: '<S154>/JL20-WGE-DO' */
    DO_INDJ_20_WGE = NONVITALMAIN_DW.INDIKASISIGNAL_f.AND10;

    /* DataStoreRead: '<S163>/10A-TP' */
    rtb_u0ATP = M_TP_10A;

    /* Logic: '<S163>/Logical Operator' */
    rtb_LogicalOperator = (M_T_WS_10A && M_S_WS_10A);

    /* Outputs for Atomic SubSystem: '<S163>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u0ATP, rtb_LogicalOperator, &NONVITALMAIN_DW.INDIKASITRACK);

    /* End of Outputs for SubSystem: '<S163>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S163>/10A-RE-DO' */
    DO_INDT_RE_10A = NONVITALMAIN_DW.INDIKASITRACK.NOT5;

    /* DataStoreWrite: '<S163>/10A-TE-DO' */
    DO_INDT_TE_10A = NONVITALMAIN_DW.INDIKASITRACK.NOT2;

    /* DataStoreRead: '<S164>/10B-TP' */
    rtb_u0BTP_b = M_TP_10B;

    /* Logic: '<S164>/Logical Operator' */
    rtb_LogicalOperator_h = (M_T_ES_10B && M_T_WS_10B && M_S_ES_10B &&
      M_S_WS_10B);

    /* Outputs for Atomic SubSystem: '<S164>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u0BTP_b, rtb_LogicalOperator_h,
                &NONVITALMAIN_DW.INDIKASITRACK_d);

    /* End of Outputs for SubSystem: '<S164>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S164>/10B-RE-DO' */
    DO_INDT_RE_10B = NONVITALMAIN_DW.INDIKASITRACK_d.NOT5;

    /* DataStoreWrite: '<S164>/10B-TE-DO' */
    DO_INDT_TE_10B = NONVITALMAIN_DW.INDIKASITRACK_d.NOT2;

    /* DataStoreRead: '<S165>/11A-TP' */
    rtb_u1ATP_o = M_TP_11A;

    /* Logic: '<S165>/Logical Operator' */
    rtb_LogicalOperator_m = (M_T_ES_11A && M_T_WS_11A && M_S_ES_11A &&
      M_S_WS_11A);

    /* Outputs for Atomic SubSystem: '<S165>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u1ATP_o, rtb_LogicalOperator_m,
                &NONVITALMAIN_DW.INDIKASITRACK_h);

    /* End of Outputs for SubSystem: '<S165>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S165>/11A-RE-DO' */
    DO_INDT_RE_11A = NONVITALMAIN_DW.INDIKASITRACK_h.NOT5;

    /* DataStoreWrite: '<S165>/11A-TE-DO' */
    DO_INDT_TE_11A = NONVITALMAIN_DW.INDIKASITRACK_h.NOT2;

    /* DataStoreRead: '<S166>/11B-TP' */
    rtb_u1BTP_m = M_TP_11B;

    /* Logic: '<S166>/Logical Operator' */
    rtb_LogicalOperator_d = (M_T_ES_11B && M_T_WS_11B && M_S_ES_11B &&
      M_S_WS_11B);

    /* Outputs for Atomic SubSystem: '<S166>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u1BTP_m, rtb_LogicalOperator_d,
                &NONVITALMAIN_DW.INDIKASITRACK_b);

    /* End of Outputs for SubSystem: '<S166>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S166>/11B-RE-DO' */
    DO_INDT_RE_11B = NONVITALMAIN_DW.INDIKASITRACK_b.NOT5;

    /* DataStoreWrite: '<S166>/11B-TE-DO' */
    DO_INDT_TE_11B = NONVITALMAIN_DW.INDIKASITRACK_b.NOT2;

    /* DataStoreRead: '<S167>/12A-TP' */
    rtb_u2ATP = M_TP_12A;

    /* Logic: '<S167>/Logical Operator' */
    rtb_LogicalOperator_dk = (M_T_ES_12A && M_T_WS_12A);

    /* Outputs for Atomic SubSystem: '<S167>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u2ATP, rtb_LogicalOperator_dk,
                &NONVITALMAIN_DW.INDIKASITRACK_g);

    /* End of Outputs for SubSystem: '<S167>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S167>/12A-RE-DO' */
    DO_INDT_RE_12A = NONVITALMAIN_DW.INDIKASITRACK_g.NOT5;

    /* DataStoreWrite: '<S167>/12A-TE-DO' */
    DO_INDT_TE_12A = NONVITALMAIN_DW.INDIKASITRACK_g.NOT2;

    /* DataStoreRead: '<S168>/12B-TP' */
    rtb_u2BTP = M_TP_12B;

    /* Logic: '<S168>/Logical Operator' */
    rtb_LogicalOperator_p = (M_T_ES_12B && M_T_WS_12B);

    /* Outputs for Atomic SubSystem: '<S168>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u2BTP, rtb_LogicalOperator_p,
                &NONVITALMAIN_DW.INDIKASITRACK_j);

    /* End of Outputs for SubSystem: '<S168>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S168>/12B-RE-DO' */
    DO_INDT_RE_12B = NONVITALMAIN_DW.INDIKASITRACK_j.NOT5;

    /* DataStoreWrite: '<S168>/12B-TE-DO' */
    DO_INDT_TE_12B = NONVITALMAIN_DW.INDIKASITRACK_j.NOT2;

    /* DataStoreRead: '<S169>/12C-TP' */
    rtb_u2CTP = M_TP_12C;

    /* Logic: '<S169>/Logical Operator' */
    rtb_LogicalOperator_pd = (M_T_ES_12C && M_T_WS_12C);

    /* Outputs for Atomic SubSystem: '<S169>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u2CTP, rtb_LogicalOperator_pd,
                &NONVITALMAIN_DW.INDIKASITRACK_e);

    /* End of Outputs for SubSystem: '<S169>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S169>/12C-RE-DO' */
    DO_INDT_RE_12C = NONVITALMAIN_DW.INDIKASITRACK_e.NOT5;

    /* DataStoreWrite: '<S169>/12C-TE-DO' */
    DO_INDT_TE_12C = NONVITALMAIN_DW.INDIKASITRACK_e.NOT2;

    /* DataStoreRead: '<S170>/12D-TP' */
    rtb_u2DTP = M_TP_12D;

    /* Logic: '<S170>/Logical Operator' */
    rtb_LogicalOperator_c = (M_T_ES_12D && M_T_WS_12D);

    /* Outputs for Atomic SubSystem: '<S170>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u2DTP, rtb_LogicalOperator_c,
                &NONVITALMAIN_DW.INDIKASITRACK_n);

    /* End of Outputs for SubSystem: '<S170>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S170>/12D-RE-DO' */
    DO_INDT_RE_12D = NONVITALMAIN_DW.INDIKASITRACK_n.NOT5;

    /* DataStoreWrite: '<S170>/12D-TE-DO' */
    DO_INDT_TE_12D = NONVITALMAIN_DW.INDIKASITRACK_n.NOT2;

    /* DataStoreRead: '<S171>/12E-TP' */
    rtb_u2ETP = M_TP_12E;

    /* Logic: '<S171>/Logical Operator' */
    rtb_LogicalOperator_pdf = (M_T_ES_12E && M_T_WS_12E);

    /* Outputs for Atomic SubSystem: '<S171>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u2ETP, rtb_LogicalOperator_pdf,
                &NONVITALMAIN_DW.INDIKASITRACK_f);

    /* End of Outputs for SubSystem: '<S171>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S171>/12E-RE-DO' */
    DO_INDT_RE_12E = NONVITALMAIN_DW.INDIKASITRACK_f.NOT5;

    /* DataStoreWrite: '<S171>/12E-TE-DO' */
    DO_INDT_TE_12E = NONVITALMAIN_DW.INDIKASITRACK_f.NOT2;

    /* DataStoreRead: '<S172>/13A-TP' */
    rtb_u3ATP_o = M_TP_13A;

    /* Logic: '<S172>/Logical Operator' */
    rtb_LogicalOperator_b = (M_T_ES_13A && M_T_WS_13A);

    /* Outputs for Atomic SubSystem: '<S172>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u3ATP_o, rtb_LogicalOperator_b,
                &NONVITALMAIN_DW.INDIKASITRACK_nt);

    /* End of Outputs for SubSystem: '<S172>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S172>/13A-RE-DO' */
    DO_INDT_RE_13A = NONVITALMAIN_DW.INDIKASITRACK_nt.NOT5;

    /* DataStoreWrite: '<S172>/13A-TE-DO' */
    DO_INDT_TE_13A = NONVITALMAIN_DW.INDIKASITRACK_nt.NOT2;

    /* DataStoreRead: '<S173>/13B-TP' */
    rtb_u3BTP_a = M_TP_13B;

    /* Logic: '<S173>/Logical Operator' */
    rtb_LogicalOperator_f = (M_T_ES_13B && M_T_WS_13B);

    /* Outputs for Atomic SubSystem: '<S173>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u3BTP_a, rtb_LogicalOperator_f,
                &NONVITALMAIN_DW.INDIKASITRACK_c);

    /* End of Outputs for SubSystem: '<S173>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S173>/13B-RE-DO' */
    DO_INDT_RE_13B = NONVITALMAIN_DW.INDIKASITRACK_c.NOT5;

    /* DataStoreWrite: '<S173>/13B-TE-DO' */
    DO_INDT_TE_13B = NONVITALMAIN_DW.INDIKASITRACK_c.NOT2;

    /* DataStoreRead: '<S174>/14A-TP' */
    rtb_u4ATP_k = M_TP_14A;

    /* Logic: '<S174>/Logical Operator' */
    rtb_LogicalOperator_o = (M_T_ES_14A && M_T_WS_14A);

    /* Outputs for Atomic SubSystem: '<S174>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u4ATP_k, rtb_LogicalOperator_o,
                &NONVITALMAIN_DW.INDIKASITRACK_fn);

    /* End of Outputs for SubSystem: '<S174>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S174>/14A-RE-DO' */
    DO_INDT_RE_14A = NONVITALMAIN_DW.INDIKASITRACK_fn.NOT5;

    /* DataStoreWrite: '<S174>/14A-TE-DO' */
    DO_INDT_TE_14A = NONVITALMAIN_DW.INDIKASITRACK_fn.NOT2;

    /* DataStoreRead: '<S175>/14B-TP' */
    rtb_u4BTP = M_TP_14B;

    /* DataStoreRead: '<S175>/14B-T-ES' */
    rtb_u4BTES = M_T_ES_14B;

    /* Outputs for Atomic SubSystem: '<S175>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u4BTP, rtb_u4BTES, &NONVITALMAIN_DW.INDIKASITRACK_fc);

    /* End of Outputs for SubSystem: '<S175>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S175>/14B-RE-DO' */
    DO_INDT_RE_14B = NONVITALMAIN_DW.INDIKASITRACK_fc.NOT5;

    /* DataStoreWrite: '<S175>/14B-TE-DO' */
    DO_INDT_TE_14B = NONVITALMAIN_DW.INDIKASITRACK_fc.NOT2;

    /* DataStoreRead: '<S176>/20A-TP' */
    rtb_u0ATP_c = M_TP_20A;

    /* Logic: '<S176>/Logical Operator' */
    rtb_LogicalOperator_mp = (M_T_WS_20A && M_S_WS_20A);

    /* Outputs for Atomic SubSystem: '<S176>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u0ATP_c, rtb_LogicalOperator_mp,
                &NONVITALMAIN_DW.INDIKASITRACK_jw);

    /* End of Outputs for SubSystem: '<S176>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S176>/20A-RE-DO' */
    DO_INDT_RE_20A = NONVITALMAIN_DW.INDIKASITRACK_jw.NOT5;

    /* DataStoreWrite: '<S176>/20A-TE-DO' */
    DO_INDT_TE_20A = NONVITALMAIN_DW.INDIKASITRACK_jw.NOT2;

    /* DataStoreRead: '<S177>/20B-TP' */
    rtb_u0BTP_n = M_TP_20B;

    /* Logic: '<S177>/Logical Operator' */
    rtb_LogicalOperator_l = (M_T_ES_20B && M_T_WS_20B && M_S_ES_20B &&
      M_S_WS_20B);

    /* Outputs for Atomic SubSystem: '<S177>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u0BTP_n, rtb_LogicalOperator_l,
                &NONVITALMAIN_DW.INDIKASITRACK_ck);

    /* End of Outputs for SubSystem: '<S177>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S177>/20B-RE-DO' */
    DO_INDT_RE_20B = NONVITALMAIN_DW.INDIKASITRACK_ck.NOT5;

    /* DataStoreWrite: '<S177>/20B-TE-DO' */
    DO_INDT_TE_20B = NONVITALMAIN_DW.INDIKASITRACK_ck.NOT2;

    /* DataStoreRead: '<S178>/21A-TP' */
    rtb_u1ATP_e = M_TP_21A;

    /* Logic: '<S178>/Logical Operator' */
    rtb_LogicalOperator_ph = (M_T_ES_21A && M_T_WS_21A && M_S_ES_21A &&
      M_S_WS_21A);

    /* Outputs for Atomic SubSystem: '<S178>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u1ATP_e, rtb_LogicalOperator_ph,
                &NONVITALMAIN_DW.INDIKASITRACK_bc);

    /* End of Outputs for SubSystem: '<S178>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S178>/21A-RE-DO' */
    DO_INDT_RE_21A = NONVITALMAIN_DW.INDIKASITRACK_bc.NOT5;

    /* DataStoreWrite: '<S178>/21A-TE-DO' */
    DO_INDT_TE_21A = NONVITALMAIN_DW.INDIKASITRACK_bc.NOT2;

    /* DataStoreRead: '<S179>/21B-TP' */
    rtb_u1BTP_b = M_TP_21B;

    /* Logic: '<S179>/Logical Operator' */
    rtb_LogicalOperator_lk = (M_T_ES_21B && M_T_WS_21B && M_S_ES_21B &&
      M_S_WS_21B);

    /* Outputs for Atomic SubSystem: '<S179>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u1BTP_b, rtb_LogicalOperator_lk,
                &NONVITALMAIN_DW.INDIKASITRACK_p);

    /* End of Outputs for SubSystem: '<S179>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S179>/21B-RE-DO' */
    DO_INDT_RE_21B = NONVITALMAIN_DW.INDIKASITRACK_p.NOT5;

    /* DataStoreWrite: '<S179>/21B-TE-DO' */
    DO_INDT_TE_21B = NONVITALMAIN_DW.INDIKASITRACK_p.NOT2;

    /* DataStoreRead: '<S180>/21C-TP' */
    rtb_u1CTP_f = M_TP_21C;

    /* Logic: '<S180>/Logical Operator' */
    rtb_LogicalOperator_k = (M_T_ES_21C && M_T_WS_21C && M_S_ES_21C &&
      M_S_WS_21C);

    /* Outputs for Atomic SubSystem: '<S180>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u1CTP_f, rtb_LogicalOperator_k,
                &NONVITALMAIN_DW.INDIKASITRACK_fo);

    /* End of Outputs for SubSystem: '<S180>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S180>/21C-RE-DO' */
    DO_INDT_RE_21C = NONVITALMAIN_DW.INDIKASITRACK_fo.NOT5;

    /* DataStoreWrite: '<S180>/21C-TE-DO' */
    DO_INDT_TE_21C = NONVITALMAIN_DW.INDIKASITRACK_fo.NOT2;

    /* DataStoreRead: '<S181>/22A-TP' */
    rtb_u2ATP_n = M_TP_22A;

    /* Logic: '<S181>/Logical Operator' */
    rtb_LogicalOperator_i = (M_T_ES_22A && M_T_WS_22A);

    /* Outputs for Atomic SubSystem: '<S181>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u2ATP_n, rtb_LogicalOperator_i,
                &NONVITALMAIN_DW.INDIKASITRACK_k);

    /* End of Outputs for SubSystem: '<S181>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S181>/22A-RE-DO' */
    DO_INDT_RE_22A = NONVITALMAIN_DW.INDIKASITRACK_k.NOT5;

    /* DataStoreWrite: '<S181>/22A-TE-DO' */
    DO_INDT_TE_22A = NONVITALMAIN_DW.INDIKASITRACK_k.NOT2;

    /* DataStoreRead: '<S182>/22B-TP' */
    rtb_u2BTP_d = M_TP_22B;

    /* Logic: '<S182>/Logical Operator' */
    rtb_LogicalOperator_l1 = (M_T_ES_22B && M_T_WS_22B);

    /* Outputs for Atomic SubSystem: '<S182>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u2BTP_d, rtb_LogicalOperator_l1,
                &NONVITALMAIN_DW.INDIKASITRACK_bx);

    /* End of Outputs for SubSystem: '<S182>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S182>/22B-RE-DO' */
    DO_INDT_RE_22B = NONVITALMAIN_DW.INDIKASITRACK_bx.NOT5;

    /* DataStoreWrite: '<S182>/22B-TE-DO' */
    DO_INDT_TE_22B = NONVITALMAIN_DW.INDIKASITRACK_bx.NOT2;

    /* DataStoreRead: '<S183>/22C-TP' */
    rtb_u2CTP_g = M_TP_22C;

    /* Logic: '<S183>/Logical Operator' */
    rtb_LogicalOperator_g = (M_T_ES_22C && M_T_WS_22C);

    /* Outputs for Atomic SubSystem: '<S183>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u2CTP_g, rtb_LogicalOperator_g,
                &NONVITALMAIN_DW.INDIKASITRACK_i);

    /* End of Outputs for SubSystem: '<S183>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S183>/22C-RE-DO' */
    DO_INDT_RE_22C = NONVITALMAIN_DW.INDIKASITRACK_i.NOT5;

    /* DataStoreWrite: '<S183>/22C-TE-DO' */
    DO_INDT_TE_22C = NONVITALMAIN_DW.INDIKASITRACK_i.NOT2;

    /* DataStoreRead: '<S184>/22D-TP' */
    rtb_u2DTP_f = M_TP_22D;

    /* Logic: '<S184>/Logical Operator' */
    rtb_LogicalOperator_ov = (M_T_ES_22D && M_T_WS_22D);

    /* Outputs for Atomic SubSystem: '<S184>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u2DTP_f, rtb_LogicalOperator_ov,
                &NONVITALMAIN_DW.INDIKASITRACK_ej);

    /* End of Outputs for SubSystem: '<S184>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S184>/22D-RE-DO' */
    DO_INDT_RE_22D = NONVITALMAIN_DW.INDIKASITRACK_ej.NOT5;

    /* DataStoreWrite: '<S184>/22D-TE-DO' */
    DO_INDT_TE_22D = NONVITALMAIN_DW.INDIKASITRACK_ej.NOT2;

    /* DataStoreRead: '<S185>/22E-TP' */
    rtb_u2ETP_f = M_TP_22E;

    /* Logic: '<S185>/Logical Operator' */
    rtb_LogicalOperator_lw = (M_T_ES_22E && M_T_WS_22E);

    /* Outputs for Atomic SubSystem: '<S185>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u2ETP_f, rtb_LogicalOperator_lw,
                &NONVITALMAIN_DW.INDIKASITRACK_o);

    /* End of Outputs for SubSystem: '<S185>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S185>/22E-RE-DO' */
    DO_INDT_RE_22E = NONVITALMAIN_DW.INDIKASITRACK_o.NOT5;

    /* DataStoreWrite: '<S185>/22E-TE-DO' */
    DO_INDT_TE_22E = NONVITALMAIN_DW.INDIKASITRACK_o.NOT2;

    /* DataStoreRead: '<S186>/23A-TP' */
    rtb_u3ATP_b = M_TP_23A;

    /* Logic: '<S186>/Logical Operator' */
    rtb_LogicalOperator_ml = (M_T_ES_23A && M_T_WS_23A);

    /* Outputs for Atomic SubSystem: '<S186>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u3ATP_b, rtb_LogicalOperator_ml,
                &NONVITALMAIN_DW.INDIKASITRACK_n0);

    /* End of Outputs for SubSystem: '<S186>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S186>/23A-RE-DO' */
    DO_INDT_RE_23A = NONVITALMAIN_DW.INDIKASITRACK_n0.NOT5;

    /* DataStoreWrite: '<S186>/23A-TE-DO' */
    DO_INDT_TE_23A = NONVITALMAIN_DW.INDIKASITRACK_n0.NOT2;

    /* DataStoreRead: '<S187>/23B-TP' */
    rtb_u3BTP_o = M_TP_23B;

    /* Logic: '<S187>/Logical Operator' */
    rtb_LogicalOperator_m5 = (M_T_ES_23B && M_T_WS_23B);

    /* Outputs for Atomic SubSystem: '<S187>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u3BTP_o, rtb_LogicalOperator_m5,
                &NONVITALMAIN_DW.INDIKASITRACK_db);

    /* End of Outputs for SubSystem: '<S187>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S187>/23B-RE-DO' */
    DO_INDT_RE_23B = NONVITALMAIN_DW.INDIKASITRACK_db.NOT5;

    /* DataStoreWrite: '<S187>/23B-TE-DO' */
    DO_INDT_TE_23B = NONVITALMAIN_DW.INDIKASITRACK_db.NOT2;

    /* DataStoreRead: '<S188>/14A-TP' */
    rtb_u4ATP_o = M_TP_24A;

    /* Logic: '<S188>/Logical Operator' */
    rtb_LogicalOperator_j = (M_T_ES_24A && M_T_WS_24A);

    /* Outputs for Atomic SubSystem: '<S188>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u4ATP_o, rtb_LogicalOperator_j,
                &NONVITALMAIN_DW.INDIKASITRACK_jb);

    /* End of Outputs for SubSystem: '<S188>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S188>/24A-RE-DO' */
    DO_INDT_RE_24A = NONVITALMAIN_DW.INDIKASITRACK_jb.NOT5;

    /* DataStoreWrite: '<S188>/24A-TE-DO' */
    DO_INDT_TE_24A = NONVITALMAIN_DW.INDIKASITRACK_jb.NOT2;

    /* DataStoreRead: '<S189>/24B-TP' */
    rtb_u4BTP_l = M_TP_24B;

    /* DataStoreRead: '<S189>/24B-T-ES' */
    rtb_u4BTES_o = M_T_ES_24B;

    /* Outputs for Atomic SubSystem: '<S189>/INDIKASI TRACK' */
    M_IND_TRACK(rtb_u4BTP_l, rtb_u4BTES_o, &NONVITALMAIN_DW.INDIKASITRACK_h0);

    /* End of Outputs for SubSystem: '<S189>/INDIKASI TRACK' */

    /* DataStoreWrite: '<S189>/24B-RE-DO' */
    DO_INDT_RE_24B = NONVITALMAIN_DW.INDIKASITRACK_h0.NOT5;

    /* DataStoreWrite: '<S189>/24B-TE-DO' */
    DO_INDT_TE_24B = NONVITALMAIN_DW.INDIKASITRACK_h0.NOT2;

    /* Logic: '<S190>/NOT5' */
    rtb_RE = !M_S_ES_21C;

    /* DataStoreWrite: '<S190>/TO-DEP-FE-DO' */
    DO_FE_TO_DEP = rtb_RE;

    /* DataStoreWrite: '<S190>/TO-DEP-FLE-DO' incorporates:
     *  Logic: '<S190>/NOT1'
     *  Logic: '<S190>/NOT2'
     */
    DO_FLE_TO_DEP = (rtb_RE && (!M_TP_21C));

    /* Logic: '<S191>/NOT5' */
    rtb_RE = !M_S_WS_21C;

    /* DataStoreWrite: '<S191>/FROM-DEP-FE-DO' */
    DO_FE_FROM_DEP = rtb_RE;

    /* DataStoreWrite: '<S191>/FROM-DEP-FLE-DO' incorporates:
     *  Logic: '<S191>/NOT1'
     *  Logic: '<S191>/NOT2'
     */
    DO_FLE_FROM_DEP = (rtb_RE && (!M_TP_21C));

    /* DataStoreRead: '<S219>/W11A//21A-CAL-CTRL' */
    rtb_W11A21ACALCTRL = M_W11A_21A_CTRL_CAL;

    /* DataStoreRead: '<S219>/W11A//21A-TRAIL-CTRL' */
    rtb_W11A21ATRAILCTRL = M_W11A_21A_CTRL_TRAIL;

    /* DataStoreRead: '<S219>/W11A//21A-RST-CTRL' */
    rtb_W11A21ARSTCTRL = M_W11A_21A_CTRL_RST;

    /* DataStoreRead: '<S219>/W11A//21A-B-CTRL' */
    rtb_W11A21ABCTRL = M_W11A_21A_CTRL_B;

    /* DataStoreRead: '<S219>/W11A//21A-NWZ' */
    rtb_W11A21ANWZ_h = M_W11A_21A_NWZ;

    /* DataStoreRead: '<S219>/W11A//21A-RWZ' */
    rtb_W11A21ARWZ_d = M_W11A_21A_RWZ;

    /* DataStoreRead: '<S219>/W11A//21A-NWP' */
    rtb_W11A21ANWP_j = M_W11A_21A_NWP;

    /* DataStoreRead: '<S219>/W11A//21A-RWP' */
    rtb_W11A21ARWP_g = M_W11A_21A_RWP;

    /* DataStoreRead: '<S219>/W11A//21A-NWC' */
    rtb_W11A21ANWC_e = M_W11A_21A_NWC;

    /* DataStoreRead: '<S219>/W11A//21A-RWC' */
    rtb_W11A21ARWC_b = M_W11A_21A_RWC;

    /* DataStoreRead: '<S219>/W11A//21A-NW-TE' */
    rtb_W11A21ANWTE = M_W11A_21A_NW_TE;

    /* DataStoreRead: '<S219>/W11A//21A-RW-TE' */
    rtb_W11A21ARWTE = M_W11A_21A_RW_TE;

    /* DataStoreRead: '<S219>/W11A//21A-L' */
    NONVITALMAIN_DW.W11A21AL = M_W11A_21A_L;

    /* DataStoreRead: '<S219>/W11A//21A-OOC' */
    rtb_W11A21AOOC_d = M_W11A_21A_OOC;

    /* DataStoreRead: '<S219>/W11A//21A-OOC-RD' */
    rtb_W11A21AOOCRD = M_W11A_21A_OOC_RD;

    /* Logic: '<S219>/OR2' */
    rtb_OR2_n = (M_RS_10_12 || M_RS_10_22 || M_RS_20_22 || M_RS_12_10 ||
                 M_RS_22_10 || M_RS_22_20 || M_RS_10_DEP || M_RS_20_DEP ||
                 M_RS_DEP_10 || M_RS_DEP_20);

    /* Logic: '<S219>/OR3' */
    rtb_OR3_b = (M_RS_20_12 || M_RS_12_20);

    /* Logic: '<S219>/OR1' */
    rtb_OR1_l = (M_W11B_21B_START || M_W21C_START || M_W13A_23A_START ||
                 M_W13B_23B_START);
  }

  /* Outputs for Atomic SubSystem: '<S219>/INTERLOCKING POINT' */
  M_IL_POINT(NONVITALMAIN_M, rtb_W11A21ACALCTRL, rtb_W11A21ATRAILCTRL,
             rtb_W11A21ARSTCTRL, rtb_W11A21ABCTRL, rtb_W11A21ANWZ_h,
             rtb_W11A21ARWZ_d, rtb_W11A21ANWP_j, rtb_W11A21ARWP_g,
             rtb_W11A21ANWC_e, rtb_W11A21ARWC_b, rtb_W11A21ANWTE,
             rtb_W11A21ARWTE, NONVITALMAIN_DW.W11A21AL, rtb_W11A21AOOC_d,
             rtb_W11A21AOOCRD, rtb_OR2_n, rtb_OR3_b, rtb_OR1_l,
             &NONVITALMAIN_DW.INTERLOCKINGPOINT);

  /* End of Outputs for SubSystem: '<S219>/INTERLOCKING POINT' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S219>/W11A//21A-BACK-TO-N' */
    M_W11A_21A_BACK_TO_N = NONVITALMAIN_DW.INTERLOCKINGPOINT.AND4;

    /* DataStoreWrite: '<S219>/W11A//21A-BACK-TO-R' */
    M_W11A_21A_BACK_TO_R = NONVITALMAIN_DW.INTERLOCKINGPOINT.AND3;

    /* DataStoreWrite: '<S219>/W11A//21A-BLOCK' */
    M_W11A_21A_BLOCK = NONVITALMAIN_DW.INTERLOCKINGPOINT.OR23;

    /* DataStoreWrite: '<S219>/W11A//21A-N' */
    M_W11A_21A_N = NONVITALMAIN_DW.INTERLOCKINGPOINT.M6;

    /* DataStoreWrite: '<S219>/W11A//21A-N-BLOCK' */
    M_W11A_21A_N_BLOCK = NONVITALMAIN_DW.INTERLOCKINGPOINT.M10;

    /* DataStoreWrite: '<S219>/W11A//21A-N-REQ' */
    M_W11A_21A_N_REQ = NONVITALMAIN_DW.INTERLOCKINGPOINT.AND19;

    /* DataStoreWrite: '<S219>/W11A//21A-R' */
    M_W11A_21A_R = NONVITALMAIN_DW.INTERLOCKINGPOINT.M7;

    /* DataStoreWrite: '<S219>/W11A//21A-R-BLOCK' */
    M_W11A_21A_R_BLOCK = NONVITALMAIN_DW.INTERLOCKINGPOINT.M11;

    /* DataStoreWrite: '<S219>/W11A//21A-R-REQ' */
    M_W11A_21A_R_REQ = NONVITALMAIN_DW.INTERLOCKINGPOINT.AND20;

    /* DataStoreWrite: '<S219>/W11A//21A-START' */
    M_W11A_21A_START = NONVITALMAIN_DW.INTERLOCKINGPOINT.M8;

    /* DataStoreWrite: '<S219>/W11A//21A-SWINIT' */
    M_W11A_21A_SWINIT = NONVITALMAIN_DW.INTERLOCKINGPOINT.M9;

    /* DataStoreRead: '<S220>/W11B//21B-CAL-CTRL' */
    rtb_W11B21BCALCTRL = M_W11B_21B_CTRL_CAL;

    /* DataStoreRead: '<S220>/W11B//21B-TRAIL-CTRL' */
    rtb_W11B21BTRAILCTRL = M_W11B_21B_CTRL_TRAIL;

    /* DataStoreRead: '<S220>/W11B//21B-RST-CTRL' */
    rtb_W11B21BRSTCTRL = M_W11B_21B_CTRL_RST;

    /* DataStoreRead: '<S220>/W11B//21B-B-CTRL' */
    rtb_W11B21BBCTRL = M_W11B_21B_CTRL_B;

    /* DataStoreRead: '<S220>/W11B//21B-NWZ' */
    rtb_W11B21BNWZ_g = M_W11B_21B_NWZ;

    /* DataStoreRead: '<S220>/W11B//21B-RWZ' */
    rtb_W11B21BRWZ_d = M_W11B_21B_RWZ;

    /* DataStoreRead: '<S220>/W11B//21B-NWP' */
    rtb_W11B21BNWP_pt = M_W11B_21B_NWP;

    /* DataStoreRead: '<S220>/W11B//21B-RWP' */
    rtb_W11B21BRWP_o = M_W11B_21B_RWP;

    /* DataStoreRead: '<S220>/W11B//21B-NWC' */
    rtb_W11B21BNWC_b = M_W11B_21B_NWC;

    /* DataStoreRead: '<S220>/W11B//21B-RWC' */
    rtb_W11B21BRWC_n = M_W11B_21B_RWC;

    /* DataStoreRead: '<S220>/W11B//21B-NW-TE' */
    rtb_W11B21BNWTE = M_W11B_21B_NW_TE;

    /* DataStoreRead: '<S220>/W11B//21B-RW-TE' */
    rtb_W11B21BRWTE = M_W11B_21B_RW_TE;

    /* DataStoreRead: '<S220>/W11B//21B-L' */
    NONVITALMAIN_DW.W11B21BL = M_W11B_21B_L;

    /* DataStoreRead: '<S220>/W11B//21B-OOC' */
    rtb_W11B21BOOC_b = M_W11B_21B_OOC;

    /* DataStoreRead: '<S220>/W11B//21B-OOC-RD' */
    rtb_W11B21BOOCRD = M_W11B_21B_OOC_RD;

    /* Logic: '<S220>/OR2' */
    rtb_OR2_a = (M_RS_10_12 || M_RS_20_12 || M_RS_20_22 || M_RS_12_10 ||
                 M_RS_12_20 || M_RS_22_20 || M_RS_20_DEP || M_RS_DEP_20);

    /* Logic: '<S220>/OR3' */
    rtb_OR3_l = (M_RS_10_22 || M_RS_22_10 || M_RS_10_DEP || M_RS_DEP_10);

    /* Logic: '<S220>/OR1' incorporates:
     *  DataStoreWrite: '<S219>/W11A//21A-START'
     */
    rtb_OR1_h = (NONVITALMAIN_DW.INTERLOCKINGPOINT.M8 || M_W21C_START ||
                 M_W13A_23A_START || M_W13B_23B_START);
  }

  /* Outputs for Atomic SubSystem: '<S220>/INTERLOCKING POINT' */
  M_IL_POINT(NONVITALMAIN_M, rtb_W11B21BCALCTRL, rtb_W11B21BTRAILCTRL,
             rtb_W11B21BRSTCTRL, rtb_W11B21BBCTRL, rtb_W11B21BNWZ_g,
             rtb_W11B21BRWZ_d, rtb_W11B21BNWP_pt, rtb_W11B21BRWP_o,
             rtb_W11B21BNWC_b, rtb_W11B21BRWC_n, rtb_W11B21BNWTE,
             rtb_W11B21BRWTE, NONVITALMAIN_DW.W11B21BL, rtb_W11B21BOOC_b,
             rtb_W11B21BOOCRD, rtb_OR2_a, rtb_OR3_l, rtb_OR1_h,
             &NONVITALMAIN_DW.INTERLOCKINGPOINT_f);

  /* End of Outputs for SubSystem: '<S220>/INTERLOCKING POINT' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S220>/W11B//21B-BACK-TO-N' */
    M_W11B_21B_BACK_TO_N = NONVITALMAIN_DW.INTERLOCKINGPOINT_f.AND4;

    /* DataStoreWrite: '<S220>/W11B//21B-BACK-TO-R' */
    M_W11B_21B_BACK_TO_R = NONVITALMAIN_DW.INTERLOCKINGPOINT_f.AND3;

    /* DataStoreWrite: '<S220>/W11B//21B-BLOCK' */
    M_W11B_21B_BLOCK = NONVITALMAIN_DW.INTERLOCKINGPOINT_f.OR23;

    /* DataStoreWrite: '<S220>/W11B//21B-N' */
    M_W11B_21B_N = NONVITALMAIN_DW.INTERLOCKINGPOINT_f.M6;

    /* DataStoreWrite: '<S220>/W11B//21B-N-BLOCK' */
    M_W11B_21B_N_BLOCK = NONVITALMAIN_DW.INTERLOCKINGPOINT_f.M10;

    /* Logic: '<S220>/OR10' */
    rtb_RE = (M_W11A_21A_N_REQ || M_W11A_21A_R_REQ);

    /* DataStoreWrite: '<S220>/W11B//21B-N-REQ' incorporates:
     *  Logic: '<S220>/OR6'
     *  Logic: '<S220>/OR8'
     */
    M_W11B_21B_N_REQ = (NONVITALMAIN_DW.INTERLOCKINGPOINT_f.AND19 && (!rtb_RE));

    /* DataStoreWrite: '<S220>/W11B//21B-R' */
    M_W11B_21B_R = NONVITALMAIN_DW.INTERLOCKINGPOINT_f.M7;

    /* DataStoreWrite: '<S220>/W11B//21B-R-BLOCK' */
    M_W11B_21B_R_BLOCK = NONVITALMAIN_DW.INTERLOCKINGPOINT_f.M11;

    /* DataStoreWrite: '<S220>/W11B//21B-R-REQ' incorporates:
     *  Logic: '<S220>/OR7'
     *  Logic: '<S220>/OR9'
     */
    M_W11B_21B_R_REQ = (NONVITALMAIN_DW.INTERLOCKINGPOINT_f.AND20 && (!rtb_RE));

    /* DataStoreWrite: '<S220>/W11B//21B-START' */
    M_W11B_21B_START = NONVITALMAIN_DW.INTERLOCKINGPOINT_f.M8;

    /* DataStoreWrite: '<S220>/W11B//21B-SWINIT' */
    M_W11B_21B_SWINIT = NONVITALMAIN_DW.INTERLOCKINGPOINT_f.M9;

    /* DataStoreRead: '<S221>/W13A//23A-CAL-CTRL' */
    rtb_W13A23ACALCTRL = M_W13A_23A_CTRL_CAL;

    /* DataStoreRead: '<S221>/W13A//23A-TRAIL-CTRL' */
    rtb_W13A23ATRAILCTRL = M_W13A_23A_CTRL_TRAIL;

    /* DataStoreRead: '<S221>/W13A//23A-RST-CTRL' */
    rtb_W13A23ARSTCTRL = M_W13A_23A_CTRL_RST;

    /* DataStoreRead: '<S221>/W13A//23A-B-CTRL' */
    rtb_W13A23ABCTRL = M_W13A_23A_CTRL_B;

    /* DataStoreRead: '<S221>/W13A//23A-NWZ' */
    rtb_W13A23ANWZ_p = M_W13A_23A_NWZ;

    /* DataStoreRead: '<S221>/W13A//23A-RWZ' */
    rtb_W13A23ARWZ_e = M_W13A_23A_RWZ;

    /* DataStoreRead: '<S221>/W13A//23A-NWP' */
    rtb_W13A23ANWP_j = M_W13A_23A_NWP;

    /* DataStoreRead: '<S221>/W13A//23A-RWP' */
    rtb_W13A23ARWP_n = M_W13A_23A_RWP;

    /* DataStoreRead: '<S221>/W13A//23A-NWC' */
    rtb_W13A23ANWC_k = M_W13A_23A_NWC;

    /* DataStoreRead: '<S221>/W13A//23A-RWC' */
    rtb_W13A23ARWC_k = M_W13A_23A_RWC;

    /* DataStoreRead: '<S221>/W13A//23A-NW-TE' */
    rtb_W13A23ANWTE = M_W13A_23A_NW_TE;

    /* DataStoreRead: '<S221>/W13A//23A-RW-TE' */
    rtb_W13A23ARWTE = M_W13A_23A_RW_TE;

    /* DataStoreRead: '<S221>/W13A//23A-L' */
    NONVITALMAIN_DW.W13A23AL = M_W13A_23A_L;

    /* DataStoreRead: '<S221>/W13A//23A-OOC' */
    rtb_W13A23AOOC_e = M_W13A_23A_OOC;

    /* DataStoreRead: '<S221>/W13A//23A-OOC-RD' */
    rtb_W13A23AOOCRD = M_W13A_23A_OOC_RD;

    /* Logic: '<S221>/OR2' */
    rtb_OR2_m = (M_RS_14_12 || M_RS_14_22 || M_RS_24_22 || M_RS_12_14 ||
                 M_RS_22_14 || M_RS_22_24);

    /* Logic: '<S221>/OR3' */
    rtb_OR3_lm = (M_RS_24_12 || M_RS_12_24);

    /* Logic: '<S221>/OR1' incorporates:
     *  DataStoreWrite: '<S220>/W11B//21B-START'
     */
    rtb_OR1_b = (M_W11A_21A_START || NONVITALMAIN_DW.INTERLOCKINGPOINT_f.M8 ||
                 M_W21C_START || M_W13B_23B_START);
  }

  /* Outputs for Atomic SubSystem: '<S221>/INTERLOCKING POINT' */
  M_IL_POINT(NONVITALMAIN_M, rtb_W13A23ACALCTRL, rtb_W13A23ATRAILCTRL,
             rtb_W13A23ARSTCTRL, rtb_W13A23ABCTRL, rtb_W13A23ANWZ_p,
             rtb_W13A23ARWZ_e, rtb_W13A23ANWP_j, rtb_W13A23ARWP_n,
             rtb_W13A23ANWC_k, rtb_W13A23ARWC_k, rtb_W13A23ANWTE,
             rtb_W13A23ARWTE, NONVITALMAIN_DW.W13A23AL, rtb_W13A23AOOC_e,
             rtb_W13A23AOOCRD, rtb_OR2_m, rtb_OR3_lm, rtb_OR1_b,
             &NONVITALMAIN_DW.INTERLOCKINGPOINT_e);

  /* End of Outputs for SubSystem: '<S221>/INTERLOCKING POINT' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S221>/W13A//23A-BACK-TO-N' */
    M_W13A_23A_BACK_TO_N = NONVITALMAIN_DW.INTERLOCKINGPOINT_e.AND4;

    /* DataStoreWrite: '<S221>/W13A//23A-BACK-TO-R' */
    M_W13A_23A_BACK_TO_R = NONVITALMAIN_DW.INTERLOCKINGPOINT_e.AND3;

    /* DataStoreWrite: '<S221>/W13A//23A-BLOCK' */
    M_W13A_23A_BLOCK = NONVITALMAIN_DW.INTERLOCKINGPOINT_e.OR23;

    /* DataStoreWrite: '<S221>/W13A//23A-N' */
    M_W13A_23A_N = NONVITALMAIN_DW.INTERLOCKINGPOINT_e.M6;

    /* DataStoreWrite: '<S221>/W13A//23A-N-BLOCK' */
    M_W13A_23A_N_BLOCK = NONVITALMAIN_DW.INTERLOCKINGPOINT_e.M10;

    /* Logic: '<S221>/OR10' incorporates:
     *  Logic: '<S221>/OR4'
     *  Logic: '<S221>/OR5'
     */
    rtb_RE = (M_W11A_21A_N_REQ || M_W11B_21B_N_REQ || M_W21C_N_REQ ||
              (M_W11A_21A_R_REQ || M_W11B_21B_R_REQ || M_W21C_R_REQ));

    /* DataStoreWrite: '<S221>/W13A//23A-N-REQ' incorporates:
     *  Logic: '<S221>/OR6'
     *  Logic: '<S221>/OR8'
     */
    M_W13A_23A_N_REQ = (NONVITALMAIN_DW.INTERLOCKINGPOINT_e.AND19 && (!rtb_RE));

    /* DataStoreWrite: '<S221>/W13A//23A-R' */
    M_W13A_23A_R = NONVITALMAIN_DW.INTERLOCKINGPOINT_e.M7;

    /* DataStoreWrite: '<S221>/W13A//23A-R-BLOCK' */
    M_W13A_23A_R_BLOCK = NONVITALMAIN_DW.INTERLOCKINGPOINT_e.M11;

    /* DataStoreWrite: '<S221>/W13A//23A-R-REQ' incorporates:
     *  Logic: '<S221>/OR7'
     *  Logic: '<S221>/OR9'
     */
    M_W13A_23A_R_REQ = (NONVITALMAIN_DW.INTERLOCKINGPOINT_e.AND20 && (!rtb_RE));

    /* DataStoreWrite: '<S221>/W13A//23A-START' */
    M_W13A_23A_START = NONVITALMAIN_DW.INTERLOCKINGPOINT_e.M8;

    /* DataStoreWrite: '<S221>/W13A//23A-SWINIT' */
    M_W13A_23A_SWINIT = NONVITALMAIN_DW.INTERLOCKINGPOINT_e.M9;

    /* DataStoreRead: '<S222>/W13B//23B-CAL-CTRL' */
    rtb_W13B23BCALCTRL = M_W13B_23B_CTRL_CAL;

    /* DataStoreRead: '<S222>/W13B//23B-TRAIL-CTRL' */
    rtb_W13B23BTRAILCTRL = M_W13B_23B_CTRL_TRAIL;

    /* DataStoreRead: '<S222>/W13B//23B-RST-CTRL' */
    rtb_W13B23BRSTCTRL = M_W13B_23B_CTRL_RST;

    /* DataStoreRead: '<S222>/W13B//23B-B-CTRL' */
    rtb_W13B23BBCTRL = M_W13B_23B_CTRL_B;

    /* DataStoreRead: '<S222>/W13B//23B-NWZ' */
    rtb_W13B23BNWZ_l = M_W13B_23B_NWZ;

    /* DataStoreRead: '<S222>/W13B//23B-RWZ' */
    rtb_W13B23BRWZ_fy = M_W13B_23B_RWZ;

    /* DataStoreRead: '<S222>/W13B//23B-NWP' */
    rtb_W13B23BNWP_m = M_W13B_23B_NWP;

    /* DataStoreRead: '<S222>/W13B//23B-RWP' */
    rtb_W13B23BRWP_g = M_W13B_23B_RWP;

    /* DataStoreRead: '<S222>/W13B//23B-NWC' */
    rtb_W13B23BNWC_a = M_W13B_23B_NWC;

    /* DataStoreRead: '<S222>/W13B//23B-RWC' */
    rtb_W13B23BRWC_b = M_W13B_23B_RWC;

    /* DataStoreRead: '<S222>/W13B//23B-NW-TE' */
    rtb_W13B23BNWTE = M_W13B_23B_NW_TE;

    /* DataStoreRead: '<S222>/W13B//23B-RW-TE' */
    rtb_W13B23BRWTE = M_W13B_23B_RW_TE;

    /* DataStoreRead: '<S222>/W13B//23B-L' */
    NONVITALMAIN_DW.W13B23BL = M_W13B_23B_L;

    /* DataStoreRead: '<S222>/W13B//23B-OOC' */
    rtb_W13B23BOOC_m = M_W13B_23B_OOC;

    /* DataStoreRead: '<S222>/W13B//23B-OOC-RD' */
    rtb_W13B23BOOCRD = M_W13B_23B_OOC_RD;

    /* Logic: '<S222>/OR2' */
    rtb_OR2_d = (M_RS_14_12 || M_RS_24_12 || M_RS_24_22 || M_RS_12_14 ||
                 M_RS_12_24 || M_RS_22_24);

    /* Logic: '<S222>/OR3' */
    rtb_OR3_o = (M_RS_14_22 || M_RS_22_14);

    /* Logic: '<S222>/OR1' incorporates:
     *  DataStoreWrite: '<S221>/W13A//23A-START'
     */
    rtb_OR1_i = (M_W11A_21A_START || M_W11B_21B_START || M_W21C_START ||
                 NONVITALMAIN_DW.INTERLOCKINGPOINT_e.M8);
  }

  /* Outputs for Atomic SubSystem: '<S222>/INTERLOCKING POINT' */
  M_IL_POINT(NONVITALMAIN_M, rtb_W13B23BCALCTRL, rtb_W13B23BTRAILCTRL,
             rtb_W13B23BRSTCTRL, rtb_W13B23BBCTRL, rtb_W13B23BNWZ_l,
             rtb_W13B23BRWZ_fy, rtb_W13B23BNWP_m, rtb_W13B23BRWP_g,
             rtb_W13B23BNWC_a, rtb_W13B23BRWC_b, rtb_W13B23BNWTE,
             rtb_W13B23BRWTE, NONVITALMAIN_DW.W13B23BL, rtb_W13B23BOOC_m,
             rtb_W13B23BOOCRD, rtb_OR2_d, rtb_OR3_o, rtb_OR1_i,
             &NONVITALMAIN_DW.INTERLOCKINGPOINT_a);

  /* End of Outputs for SubSystem: '<S222>/INTERLOCKING POINT' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S222>/W13B//23B-BACK-TO-N' */
    M_W13B_23B_BACK_TO_N = NONVITALMAIN_DW.INTERLOCKINGPOINT_a.AND4;

    /* DataStoreWrite: '<S222>/W13B//23B-BACK-TO-R' */
    M_W13B_23B_BACK_TO_R = NONVITALMAIN_DW.INTERLOCKINGPOINT_a.AND3;

    /* DataStoreWrite: '<S222>/W13B//23B-BLOCK' */
    M_W13B_23B_BLOCK = NONVITALMAIN_DW.INTERLOCKINGPOINT_a.OR23;

    /* DataStoreWrite: '<S222>/W13B//23B-N' */
    M_W13B_23B_N = NONVITALMAIN_DW.INTERLOCKINGPOINT_a.M6;

    /* DataStoreWrite: '<S222>/W13B//23B-N-BLOCK' */
    M_W13B_23B_N_BLOCK = NONVITALMAIN_DW.INTERLOCKINGPOINT_a.M10;

    /* Logic: '<S222>/OR10' incorporates:
     *  Logic: '<S222>/OR4'
     *  Logic: '<S222>/OR5'
     */
    rtb_RE = (M_W11A_21A_N_REQ || M_W11B_21B_N_REQ || M_W21C_N_REQ ||
              M_W13A_23A_N_REQ || (M_W11A_21A_R_REQ || M_W11B_21B_R_REQ ||
               M_W21C_R_REQ || M_W13A_23A_R_REQ));

    /* DataStoreWrite: '<S222>/W13B//23B-N-REQ' incorporates:
     *  Logic: '<S222>/OR6'
     *  Logic: '<S222>/OR8'
     */
    M_W13B_23B_N_REQ = (NONVITALMAIN_DW.INTERLOCKINGPOINT_a.AND19 && (!rtb_RE));

    /* DataStoreWrite: '<S222>/W13B//23B-R' */
    M_W13B_23B_R = NONVITALMAIN_DW.INTERLOCKINGPOINT_a.M7;

    /* DataStoreWrite: '<S222>/W13B//23B-R-BLOCK' */
    M_W13B_23B_R_BLOCK = NONVITALMAIN_DW.INTERLOCKINGPOINT_a.M11;

    /* DataStoreWrite: '<S222>/W13B//23B-R-REQ' incorporates:
     *  Logic: '<S222>/OR7'
     *  Logic: '<S222>/OR9'
     */
    M_W13B_23B_R_REQ = (NONVITALMAIN_DW.INTERLOCKINGPOINT_a.AND20 && (!rtb_RE));

    /* DataStoreWrite: '<S222>/W13B//23B-START' */
    M_W13B_23B_START = NONVITALMAIN_DW.INTERLOCKINGPOINT_a.M8;

    /* DataStoreWrite: '<S222>/W13B//23B-SWINIT' */
    M_W13B_23B_SWINIT = NONVITALMAIN_DW.INTERLOCKINGPOINT_a.M9;

    /* DataStoreRead: '<S223>/W21C-CAL-CTRL' */
    rtb_W21CCALCTRL = M_W21C_CTRL_CAL;

    /* DataStoreRead: '<S223>/W21C-TRAIL-CTRL' */
    rtb_W21CTRAILCTRL = M_W21C_CTRL_TRAIL;

    /* DataStoreRead: '<S223>/W21C-RST-CTRL' */
    rtb_W21CRSTCTRL = M_W21C_CTRL_RST;

    /* DataStoreRead: '<S223>/W21C-B-CTRL' */
    rtb_W21CBCTRL = M_W21C_CTRL_B;

    /* DataStoreRead: '<S223>/W21C-NWZ' */
    rtb_W21CNWZ_f = M_W21C_NWZ;

    /* DataStoreRead: '<S223>/W21C-RWZ' */
    rtb_W21CRWZ_j = M_W21C_RWZ;

    /* DataStoreRead: '<S223>/W21C-NWP' */
    rtb_W21CNWP_f = M_W21C_NWP;

    /* DataStoreRead: '<S223>/W21C-RWP' */
    rtb_W21CRWP_p = M_W21C_RWP;

    /* DataStoreRead: '<S223>/W21C-NWC' */
    rtb_W21CNWC_o = M_W21C_NWC;

    /* DataStoreRead: '<S223>/W21C-RWC' */
    rtb_W21CRWC_e = M_W21C_RWC;

    /* DataStoreRead: '<S223>/W21C-NW-TE' */
    rtb_W21CNWTE = M_W21C_NW_TE;

    /* DataStoreRead: '<S223>/W21C-RW-TE' */
    rtb_W21CRWTE = M_W21C_RW_TE;

    /* DataStoreRead: '<S223>/W21C-L' */
    NONVITALMAIN_DW.W21CL = M_W21C_L;

    /* DataStoreRead: '<S223>/W21C-OOC' */
    rtb_W21COOC_k = M_W21C_OOC;

    /* DataStoreRead: '<S223>/W21C-OOC-RD' */
    rtb_W21COOCRD = M_W21C_OOC_RD;

    /* Logic: '<S223>/OR4' */
    rtb_OR4_ak = (M_RS_10_22 || M_RS_20_22 || M_RS_22_10 || M_RS_22_20);

    /* Logic: '<S223>/OR2' */
    rtb_OR2_ng = (M_RS_10_DEP || M_RS_20_DEP || M_RS_DEP_10 || M_RS_DEP_20);

    /* Logic: '<S223>/OR1' incorporates:
     *  DataStoreWrite: '<S222>/W13B//23B-START'
     */
    rtb_OR1_f = (M_W11A_21A_START || M_W11B_21B_START || M_W13A_23A_START ||
                 NONVITALMAIN_DW.INTERLOCKINGPOINT_a.M8);
  }

  /* Outputs for Atomic SubSystem: '<S223>/INTERLOCKING POINT' */
  M_IL_POINT(NONVITALMAIN_M, rtb_W21CCALCTRL, rtb_W21CTRAILCTRL, rtb_W21CRSTCTRL,
             rtb_W21CBCTRL, rtb_W21CNWZ_f, rtb_W21CRWZ_j, rtb_W21CNWP_f,
             rtb_W21CRWP_p, rtb_W21CNWC_o, rtb_W21CRWC_e, rtb_W21CNWTE,
             rtb_W21CRWTE, NONVITALMAIN_DW.W21CL, rtb_W21COOC_k, rtb_W21COOCRD,
             rtb_OR4_ak, rtb_OR2_ng, rtb_OR1_f,
             &NONVITALMAIN_DW.INTERLOCKINGPOINT_i);

  /* End of Outputs for SubSystem: '<S223>/INTERLOCKING POINT' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S223>/W21C-BACK-TO-N' */
    M_W21C_BACK_TO_N = NONVITALMAIN_DW.INTERLOCKINGPOINT_i.AND4;

    /* DataStoreWrite: '<S223>/W21C-BACK-TO-R' */
    M_W21C_BACK_TO_R = NONVITALMAIN_DW.INTERLOCKINGPOINT_i.AND3;

    /* DataStoreWrite: '<S223>/W21C-BLOCK' */
    M_W21C_BLOCK = NONVITALMAIN_DW.INTERLOCKINGPOINT_i.OR23;

    /* DataStoreWrite: '<S223>/W21C-N' */
    NONVITALMAIN_DW.M_W21C_N = NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M6;

    /* DataStoreWrite: '<S223>/W21C-N-BLOCK' */
    M_W21C_N_BLOCK = NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M10;

    /* Logic: '<S223>/OR10' incorporates:
     *  Logic: '<S223>/OR3'
     *  Logic: '<S223>/OR5'
     */
    rtb_RE = (M_W11A_21A_N_REQ || M_W11B_21B_N_REQ || (M_W11A_21A_R_REQ ||
               M_W11B_21B_R_REQ));

    /* DataStoreWrite: '<S223>/W21C-N-REQ' incorporates:
     *  Logic: '<S223>/OR6'
     *  Logic: '<S223>/OR8'
     */
    M_W21C_N_REQ = (NONVITALMAIN_DW.INTERLOCKINGPOINT_i.AND19 && (!rtb_RE));

    /* DataStoreWrite: '<S223>/W21C-R' */
    NONVITALMAIN_DW.M_W21C_R = NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M7;

    /* DataStoreWrite: '<S223>/W21C-R-BLOCK' */
    M_W21C_R_BLOCK = NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M11;

    /* DataStoreWrite: '<S223>/W21C-R-REQ' incorporates:
     *  Logic: '<S223>/OR7'
     *  Logic: '<S223>/OR9'
     */
    M_W21C_R_REQ = (NONVITALMAIN_DW.INTERLOCKINGPOINT_i.AND20 && (!rtb_RE));

    /* DataStoreWrite: '<S223>/W21C-START' */
    M_W21C_START = NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M8;

    /* DataStoreWrite: '<S223>/W21C-SWINIT' */
    M_W21C_SWINIT = NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M9;

    /* DataStoreWrite: '<S284>/DEP-X10-B' incorporates:
     *  DataStoreWrite: '<S223>/W21C-N'
     *  DataStoreWrite: '<S223>/W21C-SWINIT'
     *  Logic: '<S284>/AND1'
     *  Logic: '<S284>/AND10'
     *  Logic: '<S284>/AND2'
     *  Logic: '<S284>/AND3'
     *  Logic: '<S284>/AND4'
     *  Logic: '<S284>/NOT10'
     *  Logic: '<S284>/NOT11'
     *  Logic: '<S284>/NOT7'
     *  Logic: '<S284>/NOT8'
     *  Logic: '<S284>/NOT9'
     *  Logic: '<S284>/OR1'
     *  Logic: '<S284>/OR10'
     *  Logic: '<S284>/OR11'
     *  Logic: '<S284>/OR12'
     *  Logic: '<S284>/OR2'
     *  Logic: '<S284>/OR3'
     *  Logic: '<S284>/OR4'
     */
    M_B_DEP_10 = (M_T_ES_21C && M_S_ES_21C && (!(M_W11A_21A_SWRLS ||
      M_W11B_21B_SWRLS || M_W21C_SWRLS)) && (!(M_W11A_21A_TPZ || M_W11B_21B_TPZ ||
      M_W21C_TPZ)) && (!(M_W11A_21A_R || M_W11B_21B_N ||
                         NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M6)) &&
                  ((M_W11A_21A_L || M_W11A_21A_NWZ) && (M_W11B_21B_L ||
      M_W11B_21B_RWZ) && (M_W21C_L || M_W21C_RWZ)) && (!(M_W11A_21A_OOC ||
      M_W11B_21B_OOC || M_W21C_OOC)) && (M_W11A_21A_SWINIT && M_W11B_21B_SWINIT &&
      NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M9) && (!M_RRLS_X10) && (M_TP_10A &&
      M_TP_10B && M_TP_11A && M_TP_11B && M_TP_21B && M_TP_21C));

    /* DataStoreWrite: '<S285>/DEP-X20-B' incorporates:
     *  DataStoreWrite: '<S223>/W21C-N'
     *  DataStoreWrite: '<S223>/W21C-SWINIT'
     *  Logic: '<S285>/AND1'
     *  Logic: '<S285>/AND10'
     *  Logic: '<S285>/AND2'
     *  Logic: '<S285>/AND3'
     *  Logic: '<S285>/AND4'
     *  Logic: '<S285>/NOT10'
     *  Logic: '<S285>/NOT11'
     *  Logic: '<S285>/NOT7'
     *  Logic: '<S285>/NOT8'
     *  Logic: '<S285>/NOT9'
     *  Logic: '<S285>/OR1'
     *  Logic: '<S285>/OR10'
     *  Logic: '<S285>/OR11'
     *  Logic: '<S285>/OR12'
     *  Logic: '<S285>/OR2'
     *  Logic: '<S285>/OR3'
     *  Logic: '<S285>/OR4'
     */
    M_B_DEP_20 = (M_T_ES_21C && M_S_ES_21C && (!(M_W11A_21A_SWRLS ||
      M_W11B_21B_SWRLS || M_W21C_SWRLS)) && (!(M_W11A_21A_TPZ || M_W11B_21B_TPZ ||
      M_W21C_TPZ)) && (!(M_W11A_21A_R || M_W11B_21B_R ||
                         NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M6)) &&
                  ((M_W11A_21A_L || M_W11A_21A_NWZ) && (M_W11B_21B_L ||
      M_W11B_21B_NWZ) && (M_W21C_L || M_W21C_RWZ)) && (!(M_W11A_21A_OOC ||
      M_W11B_21B_OOC || M_W21C_OOC)) && (M_W11A_21A_SWINIT && M_W11B_21B_SWINIT &&
      NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M9) && (!M_RRLS_X20) && (M_TP_20A &&
      M_TP_20B && M_TP_21A && M_TP_21B && M_TP_21C));

    /* DataStoreWrite: '<S286>/J12A-X10-B' incorporates:
     *  Logic: '<S286>/AND1'
     *  Logic: '<S286>/AND2'
     *  Logic: '<S286>/AND3'
     *  Logic: '<S286>/AND4'
     *  Logic: '<S286>/NOT10'
     *  Logic: '<S286>/NOT11'
     *  Logic: '<S286>/NOT7'
     *  Logic: '<S286>/NOT8'
     *  Logic: '<S286>/NOT9'
     *  Logic: '<S286>/OR1'
     *  Logic: '<S286>/OR2'
     *  Logic: '<S286>/OR3'
     *  Logic: '<S286>/OR4'
     *  Logic: '<S286>/OR5'
     *  Logic: '<S286>/OR6'
     */
    M_B_12_10 = (M_T_ES_11B && (!(M_W11A_21A_SWRLS || M_W11B_21B_SWRLS)) &&
                 (!(M_W11A_21A_TPZ || M_W11B_21B_TPZ)) && (!(M_W11A_21A_R ||
      M_W11B_21B_R)) && ((M_W11A_21A_L || M_W11A_21A_NWZ) && (M_W11B_21B_L ||
      M_W11B_21B_NWZ)) && (!(M_W11A_21A_OOC || M_W11B_21B_OOC)) &&
                 (M_W11A_21A_SWINIT && M_W11B_21B_SWINIT) && (!M_RRLS_X10) &&
                 (M_TP_10A && M_TP_10B && M_TP_11A && M_TP_11B));

    /* DataStoreWrite: '<S287>/J12A-X20-B' incorporates:
     *  Logic: '<S287>/AND1'
     *  Logic: '<S287>/AND2'
     *  Logic: '<S287>/AND3'
     *  Logic: '<S287>/AND4'
     *  Logic: '<S287>/NOT10'
     *  Logic: '<S287>/NOT11'
     *  Logic: '<S287>/NOT7'
     *  Logic: '<S287>/NOT8'
     *  Logic: '<S287>/NOT9'
     *  Logic: '<S287>/OR1'
     *  Logic: '<S287>/OR2'
     *  Logic: '<S287>/OR3'
     *  Logic: '<S287>/OR4'
     *  Logic: '<S287>/OR5'
     *  Logic: '<S287>/OR6'
     */
    M_B_12_20 = (M_T_ES_11B && (!(M_W11A_21A_SWRLS || M_W11B_21B_SWRLS)) &&
                 (!(M_W11A_21A_TPZ || M_W11B_21B_TPZ)) && (!(M_W11A_21A_N ||
      M_W11B_21B_R)) && ((M_W11A_21A_L || M_W11A_21A_RWZ) && (M_W11B_21B_L ||
      M_W11B_21B_NWZ)) && (!(M_W11A_21A_OOC || M_W11B_21B_OOC)) &&
                 (M_W11A_21A_SWINIT && M_W11B_21B_SWINIT) && (!M_RRLS_X20) &&
                 (M_TP_20A && M_TP_20B && M_TP_21A && M_TP_11A && M_TP_11B));

    /* DataStoreWrite: '<S288>/J12B-X14-B' incorporates:
     *  Logic: '<S288>/AND1'
     *  Logic: '<S288>/AND2'
     *  Logic: '<S288>/AND3'
     *  Logic: '<S288>/AND4'
     *  Logic: '<S288>/NOT10'
     *  Logic: '<S288>/NOT11'
     *  Logic: '<S288>/NOT7'
     *  Logic: '<S288>/NOT8'
     *  Logic: '<S288>/NOT9'
     *  Logic: '<S288>/OR1'
     *  Logic: '<S288>/OR2'
     *  Logic: '<S288>/OR3'
     *  Logic: '<S288>/OR4'
     *  Logic: '<S288>/OR5'
     *  Logic: '<S288>/OR6'
     */
    M_B_12_14 = (M_T_WS_13A && (!(M_W13A_23A_SWRLS || M_W13B_23B_SWRLS)) &&
                 (!(M_W13A_23A_TPZ || M_W13B_23B_TPZ)) && (!(M_W13A_23A_R ||
      M_W13B_23B_R)) && ((M_W13A_23A_L || M_W13A_23A_NWZ) && (M_W13B_23B_L ||
      M_W13B_23B_NWZ)) && (!(M_W13A_23A_OOC || M_W13B_23B_OOC)) &&
                 (M_W13A_23A_SWINIT && M_W13B_23B_SWINIT) && (!M_RRLS_X14) &&
                 (M_TP_14B && M_TP_14A && M_TP_13B && M_TP_13A));

    /* DataStoreWrite: '<S289>/J12B-X24-B' incorporates:
     *  Logic: '<S289>/AND1'
     *  Logic: '<S289>/AND2'
     *  Logic: '<S289>/AND3'
     *  Logic: '<S289>/AND4'
     *  Logic: '<S289>/NOT10'
     *  Logic: '<S289>/NOT11'
     *  Logic: '<S289>/NOT7'
     *  Logic: '<S289>/NOT8'
     *  Logic: '<S289>/NOT9'
     *  Logic: '<S289>/OR1'
     *  Logic: '<S289>/OR2'
     *  Logic: '<S289>/OR3'
     *  Logic: '<S289>/OR4'
     *  Logic: '<S289>/OR5'
     *  Logic: '<S289>/OR6'
     */
    M_B_12_24 = (M_T_WS_13A && (!(M_W13A_23A_SWRLS || M_W13B_23B_SWRLS)) &&
                 (!(M_W13A_23A_TPZ || M_W13B_23B_TPZ)) && (!(M_W13A_23A_N ||
      M_W13B_23B_R)) && ((M_W13A_23A_L || M_W13A_23A_RWZ) && (M_W13B_23B_L ||
      M_W13B_23B_NWZ)) && (!(M_W13A_23A_OOC || M_W13B_23B_OOC)) &&
                 (M_W13A_23A_SWINIT && M_W13B_23B_SWINIT) && (!M_RRLS_X24) &&
                 (M_TP_24B && M_TP_24A && M_TP_23B && M_TP_23A && M_TP_13A));

    /* DataStoreWrite: '<S290>/J14-J12A-B' incorporates:
     *  Logic: '<S290>/AND1'
     *  Logic: '<S290>/AND10'
     *  Logic: '<S290>/AND19'
     *  Logic: '<S290>/AND2'
     *  Logic: '<S290>/NOT16'
     *  Logic: '<S290>/NOT17'
     *  Logic: '<S290>/NOT18'
     *  Logic: '<S290>/NOT19'
     *  Logic: '<S290>/NOT20'
     *  Logic: '<S290>/OR1'
     *  Logic: '<S290>/OR2'
     *  Logic: '<S290>/OR3'
     *  Logic: '<S290>/OR4'
     *  Logic: '<S290>/OR5'
     *  Logic: '<S290>/OR6'
     */
    M_B_14_12 = (M_T_ES_14A && M_T_ES_12E && (!(M_W13A_23A_SWRLS ||
      M_W13B_23B_SWRLS)) && (!(M_W13A_23A_TPZ || M_W13B_23B_TPZ)) &&
                 (!(M_W13A_23A_R || M_W13B_23B_R)) && ((M_W13A_23A_L ||
      M_W13A_23A_NWZ) && (M_W13B_23B_L || M_W13B_23B_NWZ)) && (!(M_W13A_23A_OOC ||
      M_W13B_23B_OOC)) && (M_W13A_23A_SWINIT && M_W13B_23B_SWINIT) &&
                 (!M_RRLS_J12A));

    /* DataStoreWrite: '<S291>/J14-J22A-B' incorporates:
     *  Logic: '<S291>/AND1'
     *  Logic: '<S291>/AND10'
     *  Logic: '<S291>/AND19'
     *  Logic: '<S291>/AND2'
     *  Logic: '<S291>/NOT16'
     *  Logic: '<S291>/NOT17'
     *  Logic: '<S291>/NOT18'
     *  Logic: '<S291>/NOT19'
     *  Logic: '<S291>/NOT20'
     *  Logic: '<S291>/OR1'
     *  Logic: '<S291>/OR2'
     *  Logic: '<S291>/OR3'
     *  Logic: '<S291>/OR4'
     *  Logic: '<S291>/OR5'
     *  Logic: '<S291>/OR6'
     */
    M_B_14_22 = (M_T_ES_14A && M_T_ES_22E && (!(M_W13A_23A_SWRLS ||
      M_W13B_23B_SWRLS)) && (!(M_W13A_23A_TPZ || M_W13B_23B_TPZ)) &&
                 (!(M_W13A_23A_R || M_W13B_23B_N)) && ((M_W13A_23A_L ||
      M_W13A_23A_NWZ) && (M_W13B_23B_L || M_W13B_23B_RWZ)) && (!(M_W13A_23A_OOC ||
      M_W13B_23B_OOC)) && (M_W13A_23A_SWINIT && M_W13B_23B_SWINIT) &&
                 (!M_RRLS_J22A));

    /* DataStoreWrite: '<S292>/J22A-X10-B' incorporates:
     *  DataStoreWrite: '<S223>/W21C-R'
     *  DataStoreWrite: '<S223>/W21C-SWINIT'
     *  Logic: '<S292>/AND1'
     *  Logic: '<S292>/AND2'
     *  Logic: '<S292>/AND3'
     *  Logic: '<S292>/AND4'
     *  Logic: '<S292>/NOT10'
     *  Logic: '<S292>/NOT11'
     *  Logic: '<S292>/NOT7'
     *  Logic: '<S292>/NOT8'
     *  Logic: '<S292>/NOT9'
     *  Logic: '<S292>/OR1'
     *  Logic: '<S292>/OR10'
     *  Logic: '<S292>/OR11'
     *  Logic: '<S292>/OR12'
     *  Logic: '<S292>/OR2'
     *  Logic: '<S292>/OR3'
     *  Logic: '<S292>/OR4'
     */
    M_B_22_10 = (M_T_ES_21C && (!(M_W11A_21A_SWRLS || M_W11B_21B_SWRLS ||
      M_W21C_SWRLS)) && (!(M_W11A_21A_TPZ || M_W11B_21B_TPZ || M_W21C_TPZ)) && (
      !(M_W11A_21A_R || M_W11B_21B_N || NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M7))
                 && ((M_W11A_21A_L || M_W11A_21A_NWZ) && (M_W11B_21B_L ||
      M_W11B_21B_RWZ) && (M_W21C_L || M_W21C_NWZ)) && (!(M_W11A_21A_OOC ||
      M_W11B_21B_OOC || M_W21C_OOC)) && (M_W11A_21A_SWINIT && M_W11B_21B_SWINIT &&
      NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M9) && (!M_RRLS_X10) && (M_TP_10A &&
      M_TP_10B && M_TP_11A && M_TP_11B && M_TP_21B && M_TP_21C));

    /* DataStoreWrite: '<S293>/J22A-X20-B' incorporates:
     *  DataStoreWrite: '<S223>/W21C-R'
     *  DataStoreWrite: '<S223>/W21C-SWINIT'
     *  Logic: '<S293>/AND1'
     *  Logic: '<S293>/AND2'
     *  Logic: '<S293>/AND3'
     *  Logic: '<S293>/AND4'
     *  Logic: '<S293>/NOT10'
     *  Logic: '<S293>/NOT11'
     *  Logic: '<S293>/NOT7'
     *  Logic: '<S293>/NOT8'
     *  Logic: '<S293>/NOT9'
     *  Logic: '<S293>/OR1'
     *  Logic: '<S293>/OR10'
     *  Logic: '<S293>/OR11'
     *  Logic: '<S293>/OR12'
     *  Logic: '<S293>/OR2'
     *  Logic: '<S293>/OR3'
     *  Logic: '<S293>/OR4'
     */
    M_B_22_20 = (M_T_ES_21C && (!(M_W11A_21A_SWRLS || M_W11B_21B_SWRLS ||
      M_W21C_SWRLS)) && (!(M_W11A_21A_TPZ || M_W11B_21B_TPZ || M_W21C_TPZ)) && (
      !(M_W11A_21A_R || M_W11B_21B_R || NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M7))
                 && ((M_W11A_21A_L || M_W11A_21A_NWZ) && (M_W11B_21B_L ||
      M_W11B_21B_NWZ) && (M_W21C_L || M_W21C_NWZ)) && (!(M_W11A_21A_OOC ||
      M_W11B_21B_OOC || M_W21C_OOC)) && (M_W11A_21A_SWINIT && M_W11B_21B_SWINIT &&
      NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M9) && (!M_RRLS_X20) && (M_TP_20A &&
      M_TP_20B && M_TP_21A && M_TP_21B && M_TP_21C));

    /* DataStoreWrite: '<S294>/J22B-X14-B' incorporates:
     *  Logic: '<S294>/AND1'
     *  Logic: '<S294>/AND2'
     *  Logic: '<S294>/AND3'
     *  Logic: '<S294>/AND4'
     *  Logic: '<S294>/NOT10'
     *  Logic: '<S294>/NOT11'
     *  Logic: '<S294>/NOT7'
     *  Logic: '<S294>/NOT8'
     *  Logic: '<S294>/NOT9'
     *  Logic: '<S294>/OR1'
     *  Logic: '<S294>/OR2'
     *  Logic: '<S294>/OR3'
     *  Logic: '<S294>/OR4'
     *  Logic: '<S294>/OR5'
     *  Logic: '<S294>/OR6'
     */
    M_B_22_14 = (M_T_WS_23B && (!(M_W13A_23A_SWRLS || M_W13B_23B_SWRLS)) &&
                 (!(M_W13A_23A_TPZ || M_W13B_23B_TPZ)) && (!(M_W13A_23A_R ||
      M_W13B_23B_N)) && ((M_W13A_23A_L || M_W13A_23A_NWZ) && (M_W13B_23B_L ||
      M_W13B_23B_RWZ)) && (!(M_W13A_23A_OOC || M_W13B_23B_OOC)) &&
                 (M_W13A_23A_SWINIT && M_W13B_23B_SWINIT) && (!M_RRLS_X14) &&
                 (M_TP_14B && M_TP_14A && M_TP_13B && M_TP_23B && M_TP_23A));

    /* DataStoreWrite: '<S295>/J22B-X24-B' incorporates:
     *  Logic: '<S295>/AND1'
     *  Logic: '<S295>/AND2'
     *  Logic: '<S295>/AND3'
     *  Logic: '<S295>/AND4'
     *  Logic: '<S295>/NOT10'
     *  Logic: '<S295>/NOT11'
     *  Logic: '<S295>/NOT7'
     *  Logic: '<S295>/NOT8'
     *  Logic: '<S295>/NOT9'
     *  Logic: '<S295>/OR1'
     *  Logic: '<S295>/OR2'
     *  Logic: '<S295>/OR3'
     *  Logic: '<S295>/OR4'
     *  Logic: '<S295>/OR5'
     *  Logic: '<S295>/OR6'
     */
    M_B_22_24 = (M_T_WS_23A && (!(M_W13A_23A_SWRLS || M_W13B_23B_SWRLS)) &&
                 (!(M_W13A_23A_TPZ || M_W13B_23B_TPZ)) && (!(M_W13A_23A_R ||
      M_W13B_23B_R)) && ((M_W13A_23A_L || M_W13A_23A_NWZ) && (M_W13B_23B_L ||
      M_W13B_23B_NWZ)) && (!(M_W13A_23A_OOC || M_W13B_23B_OOC)) &&
                 (M_W13A_23A_SWINIT && M_W13B_23B_SWINIT) && (!M_RRLS_X24) &&
                 (M_TP_24B && M_TP_24A && M_TP_23B && M_TP_23A));

    /* DataStoreWrite: '<S296>/J24-J12A-B' incorporates:
     *  Logic: '<S296>/AND1'
     *  Logic: '<S296>/AND10'
     *  Logic: '<S296>/AND19'
     *  Logic: '<S296>/AND2'
     *  Logic: '<S296>/NOT16'
     *  Logic: '<S296>/NOT17'
     *  Logic: '<S296>/NOT18'
     *  Logic: '<S296>/NOT19'
     *  Logic: '<S296>/NOT20'
     *  Logic: '<S296>/OR1'
     *  Logic: '<S296>/OR2'
     *  Logic: '<S296>/OR3'
     *  Logic: '<S296>/OR4'
     *  Logic: '<S296>/OR5'
     *  Logic: '<S296>/OR6'
     */
    M_B_24_12 = (M_T_ES_24A && M_T_ES_12E && (!(M_W13A_23A_SWRLS ||
      M_W13B_23B_SWRLS)) && (!(M_W13A_23A_TPZ || M_W13B_23B_TPZ)) &&
                 (!(M_W13A_23A_N || M_W13B_23B_R)) && ((M_W13A_23A_L ||
      M_W13A_23A_RWZ) && (M_W13B_23B_L || M_W13B_23B_NWZ)) && (!(M_W13A_23A_OOC ||
      M_W13B_23B_OOC)) && (M_W13A_23A_SWINIT && M_W13B_23B_SWINIT) &&
                 (!M_RRLS_J12A));

    /* DataStoreWrite: '<S297>/J24-J22A-B' incorporates:
     *  Logic: '<S297>/AND1'
     *  Logic: '<S297>/AND10'
     *  Logic: '<S297>/AND19'
     *  Logic: '<S297>/AND2'
     *  Logic: '<S297>/NOT16'
     *  Logic: '<S297>/NOT17'
     *  Logic: '<S297>/NOT18'
     *  Logic: '<S297>/NOT19'
     *  Logic: '<S297>/NOT20'
     *  Logic: '<S297>/OR1'
     *  Logic: '<S297>/OR2'
     *  Logic: '<S297>/OR3'
     *  Logic: '<S297>/OR4'
     *  Logic: '<S297>/OR5'
     *  Logic: '<S297>/OR6'
     */
    M_B_24_22 = (M_T_ES_24A && M_T_ES_22E && (!(M_W13A_23A_SWRLS ||
      M_W13B_23B_SWRLS)) && (!(M_W13A_23A_TPZ || M_W13B_23B_TPZ)) &&
                 (!(M_W13A_23A_R || M_W13B_23B_R)) && ((M_W13A_23A_L ||
      M_W13A_23A_NWZ) && (M_W13B_23B_L || M_W13B_23B_NWZ)) && (!(M_W13A_23A_OOC ||
      M_W13B_23B_OOC)) && (M_W13A_23A_SWINIT && M_W13B_23B_SWINIT) &&
                 (!M_RRLS_J22A));

    /* DataStoreWrite: '<S298>/JL10-DEP-B' incorporates:
     *  DataStoreWrite: '<S223>/W21C-N'
     *  DataStoreWrite: '<S223>/W21C-SWINIT'
     *  Logic: '<S298>/AND1'
     *  Logic: '<S298>/AND10'
     *  Logic: '<S298>/AND2'
     *  Logic: '<S298>/AND4'
     *  Logic: '<S298>/NOT10'
     *  Logic: '<S298>/NOT11'
     *  Logic: '<S298>/NOT7'
     *  Logic: '<S298>/NOT8'
     *  Logic: '<S298>/NOT9'
     *  Logic: '<S298>/OR1'
     *  Logic: '<S298>/OR10'
     *  Logic: '<S298>/OR11'
     *  Logic: '<S298>/OR12'
     *  Logic: '<S298>/OR2'
     *  Logic: '<S298>/OR3'
     *  Logic: '<S298>/OR4'
     */
    M_B_10_DEP = (M_T_WS_10B && M_S_WS_10B && (!(M_W11A_21A_SWRLS ||
      M_W11B_21B_SWRLS || M_W21C_SWRLS)) && (!(M_W11A_21A_TPZ || M_W11B_21B_TPZ ||
      M_W21C_TPZ)) && (!(M_W11A_21A_R || M_W11B_21B_N ||
                         NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M6)) &&
                  ((M_W11A_21A_L || M_W11A_21A_NWZ) && (M_W11B_21B_L ||
      M_W11B_21B_RWZ) && (M_W21C_L || M_W21C_RWZ)) && (!(M_W11A_21A_OOC ||
      M_W11B_21B_OOC || M_W21C_OOC)) && (M_W11A_21A_SWINIT && M_W11B_21B_SWINIT &&
      NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M9) && (!M_RRLS_DEP) && M_TP_10B);

    /* DataStoreWrite: '<S299>/JL10-J12B-B' incorporates:
     *  Logic: '<S299>/AND1'
     *  Logic: '<S299>/AND10'
     *  Logic: '<S299>/AND19'
     *  Logic: '<S299>/AND2'
     *  Logic: '<S299>/NOT16'
     *  Logic: '<S299>/NOT17'
     *  Logic: '<S299>/NOT18'
     *  Logic: '<S299>/NOT19'
     *  Logic: '<S299>/NOT20'
     *  Logic: '<S299>/OR1'
     *  Logic: '<S299>/OR2'
     *  Logic: '<S299>/OR3'
     *  Logic: '<S299>/OR4'
     *  Logic: '<S299>/OR5'
     *  Logic: '<S299>/OR6'
     */
    M_B_10_12 = (M_T_WS_10B && M_S_WS_10B && M_T_WS_12A && (!(M_W11A_21A_SWRLS ||
      M_W11B_21B_SWRLS)) && (!(M_W11A_21A_TPZ || M_W11B_21B_TPZ)) &&
                 (!(M_W11A_21A_R || M_W11B_21B_R)) && ((M_W11A_21A_L ||
      M_W11A_21A_NWZ) && (M_W11B_21B_L || M_W11B_21B_NWZ)) && (!(M_W11A_21A_OOC ||
      M_W11B_21B_OOC)) && (M_W11A_21A_SWINIT && M_W11B_21B_SWINIT) &&
                 (!M_RRLS_J12B));

    /* DataStoreWrite: '<S300>/JL10-J22B-B' incorporates:
     *  DataStoreWrite: '<S223>/W21C-R'
     *  DataStoreWrite: '<S223>/W21C-SWINIT'
     *  Logic: '<S300>/AND10'
     *  Logic: '<S300>/AND19'
     *  Logic: '<S300>/AND2'
     *  Logic: '<S300>/AND4'
     *  Logic: '<S300>/NOT16'
     *  Logic: '<S300>/NOT17'
     *  Logic: '<S300>/NOT18'
     *  Logic: '<S300>/NOT19'
     *  Logic: '<S300>/NOT20'
     *  Logic: '<S300>/OR1'
     *  Logic: '<S300>/OR10'
     *  Logic: '<S300>/OR11'
     *  Logic: '<S300>/OR12'
     *  Logic: '<S300>/OR2'
     *  Logic: '<S300>/OR3'
     *  Logic: '<S300>/OR4'
     */
    M_B_10_22 = (M_T_WS_10B && M_S_WS_10B && M_T_WS_22A && (!(M_W11A_21A_SWRLS ||
      M_W11B_21B_SWRLS || M_W21C_SWRLS)) && (!(M_W11A_21A_TPZ || M_W11B_21B_TPZ ||
      M_W21C_TPZ)) && (!(M_W11A_21A_R || M_W11B_21B_N ||
                         NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M7)) &&
                 ((M_W11A_21A_L || M_W11A_21A_NWZ) && (M_W11B_21B_L ||
      M_W11B_21B_RWZ) && (M_W21C_L || M_W21C_NWZ)) && (!(M_W11A_21A_OOC ||
      M_W11B_21B_OOC || M_W21C_OOC)) && (M_W11A_21A_SWINIT && M_W11B_21B_SWINIT &&
      NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M9) && (!M_RRLS_J22B));

    /* DataStoreWrite: '<S301>/JL20-DEP-B' incorporates:
     *  DataStoreWrite: '<S223>/W21C-N'
     *  DataStoreWrite: '<S223>/W21C-SWINIT'
     *  Logic: '<S301>/AND1'
     *  Logic: '<S301>/AND10'
     *  Logic: '<S301>/AND2'
     *  Logic: '<S301>/AND4'
     *  Logic: '<S301>/NOT10'
     *  Logic: '<S301>/NOT11'
     *  Logic: '<S301>/NOT7'
     *  Logic: '<S301>/NOT8'
     *  Logic: '<S301>/NOT9'
     *  Logic: '<S301>/OR1'
     *  Logic: '<S301>/OR10'
     *  Logic: '<S301>/OR11'
     *  Logic: '<S301>/OR12'
     *  Logic: '<S301>/OR2'
     *  Logic: '<S301>/OR3'
     *  Logic: '<S301>/OR4'
     */
    M_B_20_DEP = (M_T_WS_20B && M_S_WS_20B && (!(M_W11A_21A_SWRLS ||
      M_W11B_21B_SWRLS || M_W21C_SWRLS)) && (!(M_W11A_21A_TPZ || M_W11B_21B_TPZ ||
      M_W21C_TPZ)) && (!(M_W11A_21A_R || M_W11B_21B_R ||
                         NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M6)) &&
                  ((M_W11A_21A_L || M_W11A_21A_NWZ) && (M_W11B_21B_L ||
      M_W11B_21B_NWZ) && (M_W21C_L || M_W21C_RWZ)) && (!(M_W11A_21A_OOC ||
      M_W11B_21B_OOC || M_W21C_OOC)) && (M_W11A_21A_SWINIT && M_W11B_21B_SWINIT &&
      NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M9) && (!M_RRLS_DEP) && M_TP_20B);

    /* DataStoreWrite: '<S302>/JL20-J12B-B' incorporates:
     *  Logic: '<S302>/AND1'
     *  Logic: '<S302>/AND10'
     *  Logic: '<S302>/AND19'
     *  Logic: '<S302>/AND2'
     *  Logic: '<S302>/NOT16'
     *  Logic: '<S302>/NOT17'
     *  Logic: '<S302>/NOT18'
     *  Logic: '<S302>/NOT19'
     *  Logic: '<S302>/NOT20'
     *  Logic: '<S302>/OR1'
     *  Logic: '<S302>/OR2'
     *  Logic: '<S302>/OR3'
     *  Logic: '<S302>/OR4'
     *  Logic: '<S302>/OR5'
     *  Logic: '<S302>/OR6'
     */
    M_B_20_12 = (M_T_WS_20B && M_S_WS_20B && M_T_WS_12A && (!(M_W11A_21A_SWRLS ||
      M_W11B_21B_SWRLS)) && (!(M_W11A_21A_TPZ || M_W11B_21B_TPZ)) &&
                 (!(M_W11A_21A_N || M_W11B_21B_R)) && ((M_W11A_21A_L ||
      M_W11A_21A_RWZ) && (M_W11B_21B_L || M_W11B_21B_NWZ)) && (!(M_W11A_21A_OOC ||
      M_W11B_21B_OOC)) && (M_W11A_21A_SWINIT && M_W11B_21B_SWINIT) &&
                 (!M_RRLS_J12B));

    /* DataStoreWrite: '<S303>/JL20-J22B-B' incorporates:
     *  DataStoreWrite: '<S223>/W21C-R'
     *  DataStoreWrite: '<S223>/W21C-SWINIT'
     *  Logic: '<S303>/AND10'
     *  Logic: '<S303>/AND19'
     *  Logic: '<S303>/AND2'
     *  Logic: '<S303>/AND4'
     *  Logic: '<S303>/NOT16'
     *  Logic: '<S303>/NOT17'
     *  Logic: '<S303>/NOT18'
     *  Logic: '<S303>/NOT19'
     *  Logic: '<S303>/NOT20'
     *  Logic: '<S303>/OR1'
     *  Logic: '<S303>/OR10'
     *  Logic: '<S303>/OR11'
     *  Logic: '<S303>/OR12'
     *  Logic: '<S303>/OR2'
     *  Logic: '<S303>/OR3'
     *  Logic: '<S303>/OR4'
     */
    M_B_20_22 = (M_T_WS_20B && M_S_WS_20B && M_T_WS_22A && (!(M_W11A_21A_SWRLS ||
      M_W11B_21B_SWRLS || M_W21C_SWRLS)) && (!(M_W11A_21A_TPZ || M_W11B_21B_TPZ ||
      M_W21C_TPZ)) && (!(M_W11A_21A_R || M_W11B_21B_R ||
                         NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M7)) &&
                 ((M_W11A_21A_L || M_W11A_21A_NWZ) && (M_W11B_21B_L ||
      M_W11B_21B_NWZ) && (M_W21C_L || M_W21C_NWZ)) && (!(M_W11A_21A_OOC ||
      M_W11B_21B_OOC || M_W21C_OOC)) && (M_W11A_21A_SWINIT && M_W11B_21B_SWINIT &&
      NONVITALMAIN_DW.INTERLOCKINGPOINT_i.M9) && (!M_RRLS_J22B));

    /* DataStoreWrite: '<S304>/BUZZER' incorporates:
     *  Logic: '<S304>/Logical Operator1'
     *  Logic: '<S304>/Logical Operator2'
     *  Logic: '<S304>/Logical Operator3'
     *  Logic: '<S304>/Logical Operator4'
     *  Logic: '<S304>/Logical Operator5'
     */
    DO_INDG_BUZZ = (M_FAIL_SYSTEM1_F || M_FAIL_SYSTEM2_F || M_FAIL_COMM1_F ||
                    M_FAIL_COMM2_F || M_W11A_21A_FAIL || M_W11B_21B_FAIL ||
                    M_W21C_FAIL || M_W13A_23A_FAIL || M_W13B_23B_FAIL ||
                    (M_CBTC_T1_F_ED1 || M_CBTC_T1_F_ED2 || M_CBTC_T1_F_ED3 ||
                     M_CBTC_T1_F_ED4 || M_CBTC_T1_F_ESB1 || M_CBTC_T1_F_ESB2 ||
                     M_CBTC_T1_F_PSD1 || M_CBTC_T1_F_PSD2) || (M_CBTC_TIB_F_ED1 ||
      M_CBTC_TIB_F_ED2 || M_CBTC_TIB_F_ED3 || M_CBTC_TIB_F_ED4 ||
      M_CBTC_TIB_F_ESB1 || M_CBTC_TIB_F_ESB2 || M_CBTC_TIB_F_PSD1 ||
      M_CBTC_TIB_F_PSD2) || (M_CBTC_T2_F_ED1 || M_CBTC_T2_F_ED2 ||
      M_CBTC_T2_F_ED3 || M_CBTC_T2_F_ED4 || M_CBTC_T2_F_ESB1 || M_CBTC_T2_F_ESB2
      || M_CBTC_T2_F_PSD1 || M_CBTC_T2_F_PSD2) || (M_CBTC_T3_F_ED1 ||
      M_CBTC_T3_F_ED2 || M_CBTC_T3_F_ED3 || M_CBTC_T3_F_ED4 || M_CBTC_T3_F_ESB1 ||
      M_CBTC_T3_F_ESB2 || M_CBTC_T3_F_PSD1 || M_CBTC_T3_F_PSD2));

    /* DataStoreRead: '<S310>/ED-DI' */
    rtb_EDDI = M_CBTC_T1_ED1;

    /* DataStoreRead: '<S310>/THB' */
    rtb_THB = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S310>/WARNING ED' */
    M_WAR(rtb_EDDI, rtb_THB, &NONVITALMAIN_DW.WARNINGED,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S310>/WARNING ED' */

    /* DataStoreWrite: '<S310>/ED-DO' */
    DO_CBTC_T1_ED1 = NONVITALMAIN_DW.WARNINGED.OR2;

    /* DataStoreWrite: '<S310>/ED-F' */
    M_CBTC_T1_F_ED1 = NONVITALMAIN_DW.WARNINGED.AND5;

    /* DataStoreRead: '<S311>/ED-DI' */
    rtb_EDDI_o = M_CBTC_T2_ED1;

    /* DataStoreRead: '<S311>/THB' */
    rtb_THB_e = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S311>/WARNING ED' */
    M_WAR(rtb_EDDI_o, rtb_THB_e, &NONVITALMAIN_DW.WARNINGED_c,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S311>/WARNING ED' */

    /* DataStoreWrite: '<S311>/ED-DO' */
    DO_CBTC_T2_ED1 = NONVITALMAIN_DW.WARNINGED_c.OR2;

    /* DataStoreWrite: '<S311>/ED-F' */
    M_CBTC_T2_F_ED1 = NONVITALMAIN_DW.WARNINGED_c.AND5;

    /* DataStoreRead: '<S312>/ED-DI' */
    rtb_EDDI_a = M_CBTC_T3_ED1;

    /* DataStoreRead: '<S312>/THB' */
    rtb_THB_e1 = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S312>/WARNING ED' */
    M_WAR(rtb_EDDI_a, rtb_THB_e1, &NONVITALMAIN_DW.WARNINGED_n,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S312>/WARNING ED' */

    /* DataStoreWrite: '<S312>/ED-DO' */
    DO_CBTC_T3_ED1 = NONVITALMAIN_DW.WARNINGED_n.OR2;

    /* DataStoreWrite: '<S312>/ED-F' */
    M_CBTC_T3_F_ED1 = NONVITALMAIN_DW.WARNINGED_n.AND5;

    /* DataStoreRead: '<S313>/ED-DI' */
    rtb_EDDI_b = M_CBTC_TIB_ED1;

    /* DataStoreRead: '<S313>/THB' */
    rtb_THB_k = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S313>/WARNING ED' */
    M_WAR(rtb_EDDI_b, rtb_THB_k, &NONVITALMAIN_DW.WARNINGED_p,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S313>/WARNING ED' */

    /* DataStoreWrite: '<S313>/ED-DO' */
    DO_CBTC_TIB_ED1 = NONVITALMAIN_DW.WARNINGED_p.OR2;

    /* DataStoreWrite: '<S313>/ED-F' */
    M_CBTC_TIB_F_ED1 = NONVITALMAIN_DW.WARNINGED_p.AND5;

    /* DataStoreRead: '<S314>/ED-DI' */
    rtb_EDDI_i = M_CBTC_T1_ED2;

    /* DataStoreRead: '<S314>/THB' */
    rtb_THB_f = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S314>/WARNING ED' */
    M_WAR(rtb_EDDI_i, rtb_THB_f, &NONVITALMAIN_DW.WARNINGED_cg,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S314>/WARNING ED' */

    /* DataStoreWrite: '<S314>/ED-DO' */
    DO_CBTC_T1_ED2 = NONVITALMAIN_DW.WARNINGED_cg.OR2;

    /* DataStoreWrite: '<S314>/ED-F' */
    M_CBTC_T1_F_ED2 = NONVITALMAIN_DW.WARNINGED_cg.AND5;

    /* DataStoreRead: '<S315>/ED-DI' */
    rtb_EDDI_j = M_CBTC_T2_ED2;

    /* DataStoreRead: '<S315>/THB' */
    rtb_THB_n = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S315>/WARNING ED' */
    M_WAR(rtb_EDDI_j, rtb_THB_n, &NONVITALMAIN_DW.WARNINGED_a,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S315>/WARNING ED' */

    /* DataStoreWrite: '<S315>/ED-DO' */
    DO_CBTC_T2_ED2 = NONVITALMAIN_DW.WARNINGED_a.OR2;

    /* DataStoreWrite: '<S315>/ED-F' */
    M_CBTC_T2_F_ED2 = NONVITALMAIN_DW.WARNINGED_a.AND5;

    /* DataStoreRead: '<S316>/ED-DI' */
    rtb_EDDI_d = M_CBTC_T3_ED2;

    /* DataStoreRead: '<S316>/THB' */
    rtb_THB_p = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S316>/WARNING ED' */
    M_WAR(rtb_EDDI_d, rtb_THB_p, &NONVITALMAIN_DW.WARNINGED_h,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S316>/WARNING ED' */

    /* DataStoreWrite: '<S316>/ED-DO' */
    DO_CBTC_T3_ED2 = NONVITALMAIN_DW.WARNINGED_h.OR2;

    /* DataStoreWrite: '<S316>/ED-F' */
    M_CBTC_T3_F_ED2 = NONVITALMAIN_DW.WARNINGED_h.AND5;

    /* DataStoreRead: '<S317>/ED-DI' */
    rtb_EDDI_e = M_CBTC_TIB_ED2;

    /* DataStoreRead: '<S317>/THB' */
    rtb_THB_f2 = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S317>/WARNING ED' */
    M_WAR(rtb_EDDI_e, rtb_THB_f2, &NONVITALMAIN_DW.WARNINGED_o,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S317>/WARNING ED' */

    /* DataStoreWrite: '<S317>/ED-DO' */
    DO_CBTC_TIB_ED2 = NONVITALMAIN_DW.WARNINGED_o.OR2;

    /* DataStoreWrite: '<S317>/ED-F' */
    M_CBTC_TIB_F_ED2 = NONVITALMAIN_DW.WARNINGED_o.AND5;

    /* DataStoreRead: '<S318>/ED-DI' */
    rtb_EDDI_l = M_CBTC_T1_ED3;

    /* DataStoreRead: '<S318>/THB' */
    rtb_THB_j = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S318>/WARNING ED' */
    M_WAR(rtb_EDDI_l, rtb_THB_j, &NONVITALMAIN_DW.WARNINGED_ph,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S318>/WARNING ED' */

    /* DataStoreWrite: '<S318>/ED-DO' */
    DO_CBTC_T1_ED3 = NONVITALMAIN_DW.WARNINGED_ph.OR2;

    /* DataStoreWrite: '<S318>/ED-F' */
    M_CBTC_T1_F_ED3 = NONVITALMAIN_DW.WARNINGED_ph.AND5;

    /* DataStoreRead: '<S319>/ED-DI' */
    rtb_EDDI_g = M_CBTC_T2_ED3;

    /* DataStoreRead: '<S319>/THB' */
    rtb_THB_g = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S319>/WARNING ED' */
    M_WAR(rtb_EDDI_g, rtb_THB_g, &NONVITALMAIN_DW.WARNINGED_d,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S319>/WARNING ED' */

    /* DataStoreWrite: '<S319>/ED-DO' */
    DO_CBTC_T2_ED3 = NONVITALMAIN_DW.WARNINGED_d.OR2;

    /* DataStoreWrite: '<S319>/ED-F' */
    M_CBTC_T2_F_ED3 = NONVITALMAIN_DW.WARNINGED_d.AND5;

    /* DataStoreRead: '<S320>/ED-DI' */
    rtb_EDDI_bx = M_CBTC_T3_ED3;

    /* DataStoreRead: '<S320>/THB' */
    rtb_THB_m = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S320>/WARNING ED' */
    M_WAR(rtb_EDDI_bx, rtb_THB_m, &NONVITALMAIN_DW.WARNINGED_i,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S320>/WARNING ED' */

    /* DataStoreWrite: '<S320>/ED-DO' */
    DO_CBTC_T3_ED3 = NONVITALMAIN_DW.WARNINGED_i.OR2;

    /* DataStoreWrite: '<S320>/ED-F' */
    M_CBTC_T3_F_ED3 = NONVITALMAIN_DW.WARNINGED_i.AND5;

    /* DataStoreRead: '<S321>/ED-DI' */
    rtb_EDDI_i4 = M_CBTC_TIB_ED3;

    /* DataStoreRead: '<S321>/THB' */
    rtb_THB_o = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S321>/WARNING ED' */
    M_WAR(rtb_EDDI_i4, rtb_THB_o, &NONVITALMAIN_DW.WARNINGED_m,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S321>/WARNING ED' */

    /* DataStoreWrite: '<S321>/ED-DO' */
    DO_CBTC_TIB_ED3 = NONVITALMAIN_DW.WARNINGED_m.OR2;

    /* DataStoreWrite: '<S321>/ED-F' */
    M_CBTC_TIB_F_ED3 = NONVITALMAIN_DW.WARNINGED_m.AND5;

    /* DataStoreRead: '<S322>/ED-DI' */
    rtb_EDDI_jc = M_CBTC_T1_ED4;

    /* DataStoreRead: '<S322>/THB' */
    rtb_THB_ji = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S322>/WARNING ED' */
    M_WAR(rtb_EDDI_jc, rtb_THB_ji, &NONVITALMAIN_DW.WARNINGED_ds,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S322>/WARNING ED' */

    /* DataStoreWrite: '<S322>/ED-DO' */
    DO_CBTC_T1_ED4 = NONVITALMAIN_DW.WARNINGED_ds.OR2;

    /* DataStoreWrite: '<S322>/ED-F' */
    M_CBTC_T1_F_ED4 = NONVITALMAIN_DW.WARNINGED_ds.AND5;

    /* DataStoreRead: '<S323>/ED-DI' */
    rtb_EDDI_ik = M_CBTC_T2_ED4;

    /* DataStoreRead: '<S323>/THB' */
    rtb_THB_a = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S323>/WARNING ED' */
    M_WAR(rtb_EDDI_ik, rtb_THB_a, &NONVITALMAIN_DW.WARNINGED_pr,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S323>/WARNING ED' */

    /* DataStoreWrite: '<S323>/ED-DO' */
    DO_CBTC_T2_ED4 = NONVITALMAIN_DW.WARNINGED_pr.OR2;

    /* DataStoreWrite: '<S323>/ED-F' */
    M_CBTC_T2_F_ED4 = NONVITALMAIN_DW.WARNINGED_pr.AND5;

    /* DataStoreRead: '<S324>/ED-DI' */
    rtb_EDDI_bxn = M_CBTC_T3_ED4;

    /* DataStoreRead: '<S324>/THB' */
    rtb_THB_a5 = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S324>/WARNING ED' */
    M_WAR(rtb_EDDI_bxn, rtb_THB_a5, &NONVITALMAIN_DW.WARNINGED_l,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S324>/WARNING ED' */

    /* DataStoreWrite: '<S324>/ED-DO' */
    DO_CBTC_T3_ED4 = NONVITALMAIN_DW.WARNINGED_l.OR2;

    /* DataStoreWrite: '<S324>/ED-F' */
    M_CBTC_T3_F_ED4 = NONVITALMAIN_DW.WARNINGED_l.AND5;

    /* DataStoreRead: '<S325>/ED-DI' */
    rtb_EDDI_p = M_CBTC_TIB_ED4;

    /* DataStoreRead: '<S325>/THB' */
    rtb_THB_e3 = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S325>/WARNING ED' */
    M_WAR(rtb_EDDI_p, rtb_THB_e3, &NONVITALMAIN_DW.WARNINGED_b,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S325>/WARNING ED' */

    /* DataStoreWrite: '<S325>/ED-DO' */
    DO_CBTC_TIB_ED4 = NONVITALMAIN_DW.WARNINGED_b.OR2;

    /* DataStoreWrite: '<S325>/ED-F' */
    M_CBTC_TIB_F_ED4 = NONVITALMAIN_DW.WARNINGED_b.AND5;

    /* DataStoreRead: '<S342>/ESB-DI' */
    rtb_ESBDI = M_CBTC_T1_ESB1;

    /* DataStoreRead: '<S342>/THB' */
    rtb_THB_fq = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S342>/WARNING ESB' */
    M_WAR(rtb_ESBDI, rtb_THB_fq, &NONVITALMAIN_DW.WARNINGESB,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S342>/WARNING ESB' */

    /* DataStoreWrite: '<S342>/ESB-DO' */
    DO_CBTC_T1_ESB1 = NONVITALMAIN_DW.WARNINGESB.OR2;

    /* DataStoreWrite: '<S342>/ESB-F' */
    M_CBTC_T1_F_ESB1 = NONVITALMAIN_DW.WARNINGESB.AND5;

    /* DataStoreRead: '<S343>/ESB-DI' */
    rtb_ESBDI_e = M_CBTC_T2_ESB1;

    /* DataStoreRead: '<S343>/THB' */
    rtb_THB_ja = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S343>/WARNING ESB' */
    M_WAR(rtb_ESBDI_e, rtb_THB_ja, &NONVITALMAIN_DW.WARNINGESB_m,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S343>/WARNING ESB' */

    /* DataStoreWrite: '<S343>/ESB-DO' */
    DO_CBTC_T2_ESB1 = NONVITALMAIN_DW.WARNINGESB_m.OR2;

    /* DataStoreWrite: '<S343>/ESB-F' */
    M_CBTC_T2_F_ESB1 = NONVITALMAIN_DW.WARNINGESB_m.AND5;

    /* DataStoreRead: '<S344>/ESB-DI' */
    rtb_ESBDI_o = M_CBTC_T3_ESB1;

    /* DataStoreRead: '<S344>/THB' */
    rtb_THB_oh = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S344>/WARNING ESB' */
    M_WAR(rtb_ESBDI_o, rtb_THB_oh, &NONVITALMAIN_DW.WARNINGESB_b,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S344>/WARNING ESB' */

    /* DataStoreWrite: '<S344>/ESB-DO' */
    DO_CBTC_T3_ESB1 = NONVITALMAIN_DW.WARNINGESB_b.OR2;

    /* DataStoreWrite: '<S344>/ESB-F' */
    M_CBTC_T3_F_ESB1 = NONVITALMAIN_DW.WARNINGESB_b.AND5;

    /* DataStoreRead: '<S345>/ESB-DI' */
    rtb_ESBDI_k = M_CBTC_TIB_ESB1;

    /* DataStoreRead: '<S345>/THB' */
    rtb_THB_jp = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S345>/WARNING ESB' */
    M_WAR(rtb_ESBDI_k, rtb_THB_jp, &NONVITALMAIN_DW.WARNINGESB_g,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S345>/WARNING ESB' */

    /* DataStoreWrite: '<S345>/ESB-DO' */
    DO_CBTC_TIB_ESB1 = NONVITALMAIN_DW.WARNINGESB_g.OR2;

    /* DataStoreWrite: '<S345>/ESB-F' */
    M_CBTC_TIB_F_ESB1 = NONVITALMAIN_DW.WARNINGESB_g.AND5;

    /* DataStoreRead: '<S346>/ESB-DI' */
    rtb_ESBDI_l = M_CBTC_T1_ESB2;

    /* DataStoreRead: '<S346>/THB' */
    rtb_THB_fi = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S346>/WARNING ESB' */
    M_WAR(rtb_ESBDI_l, rtb_THB_fi, &NONVITALMAIN_DW.WARNINGESB_bu,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S346>/WARNING ESB' */

    /* DataStoreWrite: '<S346>/ESB-DO' */
    DO_CBTC_T1_ESB2 = NONVITALMAIN_DW.WARNINGESB_bu.OR2;

    /* DataStoreWrite: '<S346>/ESB-F' */
    M_CBTC_T1_F_ESB2 = NONVITALMAIN_DW.WARNINGESB_bu.AND5;

    /* DataStoreRead: '<S347>/ESB-DI' */
    rtb_ESBDI_f = M_CBTC_T2_ESB2;

    /* DataStoreRead: '<S347>/THB' */
    rtb_THB_ku = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S347>/WARNING ESB' */
    M_WAR(rtb_ESBDI_f, rtb_THB_ku, &NONVITALMAIN_DW.WARNINGESB_p,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S347>/WARNING ESB' */

    /* DataStoreWrite: '<S347>/ESB-DO' */
    DO_CBTC_T2_ESB2 = NONVITALMAIN_DW.WARNINGESB_p.OR2;

    /* DataStoreWrite: '<S347>/ESB-F' */
    M_CBTC_T2_F_ESB2 = NONVITALMAIN_DW.WARNINGESB_p.AND5;

    /* DataStoreRead: '<S348>/ESB-DI' */
    rtb_ESBDI_i = M_CBTC_T3_ESB2;

    /* DataStoreRead: '<S348>/THB' */
    rtb_THB_l = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S348>/WARNING ESB' */
    M_WAR(rtb_ESBDI_i, rtb_THB_l, &NONVITALMAIN_DW.WARNINGESB_h,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S348>/WARNING ESB' */

    /* DataStoreWrite: '<S348>/ESB-DO' */
    DO_CBTC_T3_ESB2 = NONVITALMAIN_DW.WARNINGESB_h.OR2;

    /* DataStoreWrite: '<S348>/ESB-F' */
    M_CBTC_T3_F_ESB2 = NONVITALMAIN_DW.WARNINGESB_h.AND5;

    /* DataStoreRead: '<S349>/ESB-DI' */
    rtb_ESBDI_g = M_CBTC_TIB_ESB2;

    /* DataStoreRead: '<S349>/THB' */
    rtb_THB_l2 = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S349>/WARNING ESB' */
    M_WAR(rtb_ESBDI_g, rtb_THB_l2, &NONVITALMAIN_DW.WARNINGESB_f,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S349>/WARNING ESB' */

    /* DataStoreWrite: '<S349>/ESB-DO' */
    DO_CBTC_TIB_ESB2 = NONVITALMAIN_DW.WARNINGESB_f.OR2;

    /* DataStoreWrite: '<S349>/ESB-F' */
    M_CBTC_TIB_F_ESB2 = NONVITALMAIN_DW.WARNINGESB_f.AND5;

    /* DataStoreRead: '<S358>/FAIL' */
    rtb_FAIL = CBI_FAIL_COMM1;

    /* DataStoreRead: '<S358>/THB' */
    rtb_THB_ge = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S358>/WARNING COMM 1 FAIL' */
    M_WAR(rtb_FAIL, rtb_THB_ge, &NONVITALMAIN_DW.WARNINGCOMM1FAIL,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S358>/WARNING COMM 1 FAIL' */

    /* DataStoreWrite: '<S358>/FAIL-DO' */
    DO_INDG_COMM1_FAIL = NONVITALMAIN_DW.WARNINGCOMM1FAIL.OR2;

    /* DataStoreWrite: '<S358>/FAIL-F' */
    M_FAIL_COMM1_F = NONVITALMAIN_DW.WARNINGCOMM1FAIL.AND5;

    /* DataStoreRead: '<S359>/FAIL' */
    rtb_FAIL_c = CBI_FAIL_COMM2;

    /* DataStoreRead: '<S359>/THB' */
    rtb_THB_e2 = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S359>/WARNING COMM 2 FAIL' */
    M_WAR(rtb_FAIL_c, rtb_THB_e2, &NONVITALMAIN_DW.WARNINGCOMM2FAIL,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S359>/WARNING COMM 2 FAIL' */

    /* DataStoreWrite: '<S359>/FAIL-DO' */
    DO_INDG_COMM2_FAIL = NONVITALMAIN_DW.WARNINGCOMM2FAIL.OR2;

    /* DataStoreWrite: '<S359>/FAIL-F' */
    M_FAIL_COMM2_F = NONVITALMAIN_DW.WARNINGCOMM2FAIL.AND5;

    /* DataStoreWrite: '<S360>/POINT-FAIL' incorporates:
     *  DataStoreRead: '<S360>/FLASH-500MS'
     *  Logic: '<S360>/AND1'
     *  Logic: '<S360>/AND2'
     *  Logic: '<S360>/AND3'
     *  Logic: '<S360>/AND4'
     */
    DO_INDG_POINT = (((M_W11A_21A_FAIL || M_W11B_21B_FAIL || M_W21C_FAIL ||
                       M_W13A_23A_FAIL || M_W13B_23B_FAIL) &&
                      NONVITALMAIN_DW.M_GV_FLASH_500) || (M_W11A_21A_F_ACK ||
      M_W11B_21B_F_ACK || M_W21C_F_ACK || M_W13A_23A_F_ACK || M_W13B_23B_F_ACK));

    /* Logic: '<S361>/AND1' incorporates:
     *  DataStoreRead: '<S361>/VDR'
     */
    rtb_AND1_nt = (CBI_FAIL_SYSTEM1 && NONVITALMAIN_DW.M_VDR);

    /* DataStoreRead: '<S361>/THB' */
    rtb_THB_o1 = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S361>/WARNING SYSTEM 1 FAIL' */
    M_WAR(rtb_AND1_nt, rtb_THB_o1, &NONVITALMAIN_DW.WARNINGSYSTEM1FAIL,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S361>/WARNING SYSTEM 1 FAIL' */

    /* DataStoreWrite: '<S361>/FAIL-DO' */
    DO_INDG_SYS1_FAIL = NONVITALMAIN_DW.WARNINGSYSTEM1FAIL.OR2;

    /* DataStoreWrite: '<S361>/FAIL-F' */
    M_FAIL_SYSTEM1_F = NONVITALMAIN_DW.WARNINGSYSTEM1FAIL.AND5;

    /* Logic: '<S362>/AND1' incorporates:
     *  DataStoreRead: '<S362>/VDR'
     */
    rtb_AND1_iww = (CBI_FAIL_SYSTEM2 && NONVITALMAIN_DW.M_VDR);

    /* DataStoreRead: '<S362>/THB' */
    rtb_THB_ap = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S362>/WARNING SYSTEM 2 FAIL' */
    M_WAR(rtb_AND1_iww, rtb_THB_ap, &NONVITALMAIN_DW.WARNINGSYSTEM2FAIL,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S362>/WARNING SYSTEM 2 FAIL' */

    /* DataStoreWrite: '<S362>/FAIL-DO' */
    DO_INDG_SYS2_FAIL = NONVITALMAIN_DW.WARNINGSYSTEM2FAIL.OR2;

    /* DataStoreWrite: '<S362>/FAIL-F' */
    M_FAIL_SYSTEM2_F = NONVITALMAIN_DW.WARNINGSYSTEM2FAIL.AND5;

    /* DataStoreRead: '<S367>/PSD-DI' */
    rtb_PSDDI = M_CBTC_T1_PSD1;

    /* DataStoreRead: '<S367>/THB' */
    rtb_THB_ej = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S367>/WARNING PSD' */
    M_WAR(rtb_PSDDI, rtb_THB_ej, &NONVITALMAIN_DW.WARNINGPSD,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S367>/WARNING PSD' */

    /* DataStoreWrite: '<S367>/PSD-DO' */
    DO_CBTC_T1_PSD1 = NONVITALMAIN_DW.WARNINGPSD.OR2;

    /* DataStoreWrite: '<S367>/PSD-F' */
    M_CBTC_T1_F_PSD1 = NONVITALMAIN_DW.WARNINGPSD.AND5;

    /* DataStoreRead: '<S368>/PSD-DI' */
    rtb_PSDDI_n = M_CBTC_T2_PSD1;

    /* DataStoreRead: '<S368>/THB' */
    rtb_THB_fv = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S368>/WARNING PSD' */
    M_WAR(rtb_PSDDI_n, rtb_THB_fv, &NONVITALMAIN_DW.WARNINGPSD_k,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S368>/WARNING PSD' */

    /* DataStoreWrite: '<S368>/PSD-DO' */
    DO_CBTC_T2_PSD1 = NONVITALMAIN_DW.WARNINGPSD_k.OR2;

    /* DataStoreWrite: '<S368>/PSD-F' */
    M_CBTC_T2_F_PSD1 = NONVITALMAIN_DW.WARNINGPSD_k.AND5;

    /* DataStoreRead: '<S369>/PSD-DI' */
    rtb_PSDDI_o = M_CBTC_T3_PSD1;

    /* DataStoreRead: '<S369>/THB' */
    rtb_THB_ei = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S369>/WARNING PSD' */
    M_WAR(rtb_PSDDI_o, rtb_THB_ei, &NONVITALMAIN_DW.WARNINGPSD_b,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S369>/WARNING PSD' */

    /* DataStoreWrite: '<S369>/PSD-DO' */
    DO_CBTC_T3_PSD1 = NONVITALMAIN_DW.WARNINGPSD_b.OR2;

    /* DataStoreWrite: '<S369>/PSD-F' */
    M_CBTC_T3_F_PSD1 = NONVITALMAIN_DW.WARNINGPSD_b.AND5;

    /* DataStoreRead: '<S370>/PSD-DI' */
    rtb_PSDDI_a = M_CBTC_TIB_PSD1;

    /* DataStoreRead: '<S370>/THB' */
    rtb_THB_c = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S370>/WARNING PSD' */
    M_WAR(rtb_PSDDI_a, rtb_THB_c, &NONVITALMAIN_DW.WARNINGPSD_bo,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S370>/WARNING PSD' */

    /* DataStoreWrite: '<S370>/PSD-DO' */
    DO_CBTC_TIB_PSD1 = NONVITALMAIN_DW.WARNINGPSD_bo.OR2;

    /* DataStoreWrite: '<S370>/PSD-F' */
    M_CBTC_TIB_F_PSD1 = NONVITALMAIN_DW.WARNINGPSD_bo.AND5;

    /* DataStoreRead: '<S371>/PSD-DI' */
    rtb_PSDDI_b = M_CBTC_T1_PSD2;

    /* DataStoreRead: '<S371>/THB' */
    rtb_THB_py = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S371>/WARNING PSD' */
    M_WAR(rtb_PSDDI_b, rtb_THB_py, &NONVITALMAIN_DW.WARNINGPSD_n,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S371>/WARNING PSD' */

    /* DataStoreWrite: '<S371>/PSD-DO' */
    DO_CBTC_T1_PSD2 = NONVITALMAIN_DW.WARNINGPSD_n.OR2;

    /* DataStoreWrite: '<S371>/PSD-F' */
    M_CBTC_T1_F_PSD2 = NONVITALMAIN_DW.WARNINGPSD_n.AND5;

    /* DataStoreRead: '<S372>/PSD-DI' */
    rtb_PSDDI_l = M_CBTC_T2_PSD2;

    /* DataStoreRead: '<S372>/THB' */
    rtb_THB_og = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S372>/WARNING PSD' */
    M_WAR(rtb_PSDDI_l, rtb_THB_og, &NONVITALMAIN_DW.WARNINGPSD_a,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S372>/WARNING PSD' */

    /* DataStoreWrite: '<S372>/PSD-DO' */
    DO_CBTC_T2_PSD2 = NONVITALMAIN_DW.WARNINGPSD_a.OR2;

    /* DataStoreWrite: '<S372>/PSD-F' */
    M_CBTC_T2_F_PSD2 = NONVITALMAIN_DW.WARNINGPSD_a.AND5;

    /* DataStoreRead: '<S373>/PSD-DI' */
    rtb_PSDDI_k = M_CBTC_T3_PSD2;

    /* DataStoreRead: '<S373>/THB' */
    rtb_THB_i = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S373>/WARNING PSD' */
    M_WAR(rtb_PSDDI_k, rtb_THB_i, &NONVITALMAIN_DW.WARNINGPSD_o,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S373>/WARNING PSD' */

    /* DataStoreWrite: '<S373>/PSD-DO' */
    DO_CBTC_T3_PSD2 = NONVITALMAIN_DW.WARNINGPSD_o.OR2;

    /* DataStoreWrite: '<S373>/PSD-F' */
    M_CBTC_T3_F_PSD2 = NONVITALMAIN_DW.WARNINGPSD_o.AND5;

    /* DataStoreRead: '<S374>/PSD-DI' */
    rtb_PSDDI_lu = M_CBTC_TIB_PSD2;

    /* DataStoreRead: '<S374>/THB' */
    rtb_THB_o2 = DI_PBG_THB;

    /* Outputs for Atomic SubSystem: '<S374>/WARNING PSD' */
    M_WAR(rtb_PSDDI_lu, rtb_THB_o2, &NONVITALMAIN_DW.WARNINGPSD_p,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S374>/WARNING PSD' */

    /* DataStoreWrite: '<S374>/PSD-DO' */
    DO_CBTC_TIB_PSD2 = NONVITALMAIN_DW.WARNINGPSD_p.OR2;

    /* DataStoreWrite: '<S374>/PSD-F' */
    M_CBTC_TIB_F_PSD2 = NONVITALMAIN_DW.WARNINGPSD_p.AND5;

    /* Logic: '<S309>/NOT2' */
    rtb_NOT2_f = !M_GV_RR;

    /* DataStoreRead: '<S309>/RR-OK' */
    rtb_RROK = M_GV_RR_OK;

    /* Outputs for Atomic SubSystem: '<S309>/TPR-BANTU' */
    M_WAR(rtb_NOT2_f, rtb_RROK, &NONVITALMAIN_DW.TPRBANTU,
          &NONVITALMAIN_DW.M_GV_FLASH_500);

    /* End of Outputs for SubSystem: '<S309>/TPR-BANTU' */

    /* DataStoreWrite: '<S309>/PSD-DO' incorporates:
     *  Logic: '<S309>/NOT1'
     */
    DO_INDG_TPR_BANTU = !NONVITALMAIN_DW.TPRBANTU.OR2;

    /* DataStoreWrite: '<S384>/AA-CTRL' */
    M_CTRL_AA = DI_PBG_THB;

    /* DataStoreRead: '<S391>/W11A//21A-PB-DI' */
    rtb_W11A21APBDI = DI_PBW_11A_21A;

    /* Logic: '<S391>/AND1' */
    rtb_AND1_n1 = (M_TP_11A && M_TP_21A);

    /* DataStoreRead: '<S391>/TBW-PB-DI' */
    rtb_TBWPBDI = DI_PBSW_TBW;

    /* DataStoreRead: '<S391>/TKGW-PB-DI' */
    rtb_TKGWPBDI = DI_PBSW_TKGW;

    /* DataStoreRead: '<S391>/TBKW-PB-DI' */
    rtb_TBKWPBDI = DI_PBSW_TBKW;

    /* DataStoreRead: '<S391>/TWT-PB-DI' */
    rtb_TWTPBDI = DI_PBSW_TWT;

    /* DataStoreRead: '<S391>/TKW-PB-DI' */
    rtb_TKWPBDI = DI_PBSW_TKW;

    /* Outputs for Atomic SubSystem: '<S391>/POINT PB CONTROL' */
    M_SW_PB(rtb_W11A21APBDI, rtb_AND1_n1, rtb_TBWPBDI, rtb_TKGWPBDI,
            rtb_TBKWPBDI, rtb_TWTPBDI, rtb_TKWPBDI,
            &NONVITALMAIN_DW.POINTPBCONTROL, &NONVITALMAIN_DW.M_NVCOMM_OK,
            &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S391>/POINT PB CONTROL' */

    /* DataStoreWrite: '<S391>/W11A//21A-B-CTRL' */
    M_W11A_21A_CTRL_B = NONVITALMAIN_DW.POINTPBCONTROL.AND4;

    /* DataStoreWrite: '<S391>/W11A//21A-CAL-CTRL' */
    M_W11A_21A_CTRL_CAL = NONVITALMAIN_DW.POINTPBCONTROL.FixPtRelationalOperator;

    /* DataStoreWrite: '<S391>/W11A//21A-RST-CTRL' */
    M_W11A_21A_CTRL_RST = NONVITALMAIN_DW.POINTPBCONTROL.AND5;

    /* DataStoreWrite: '<S391>/W11A//21A-SWRLSPB-CTRL' */
    M_W11A_21A_CTRL_SWRLS = NONVITALMAIN_DW.POINTPBCONTROL.AND1;

    /* DataStoreWrite: '<S391>/W11A//21A-TRAIL-CTRL' */
    M_W11A_21A_CTRL_TRAIL = NONVITALMAIN_DW.POINTPBCONTROL.AND6;

    /* DataStoreRead: '<S392>/W11B//21B-PB-DI' */
    rtb_W11B21BPBDI = DI_PBW_11B_21B;

    /* Logic: '<S392>/AND1' */
    rtb_AND1_ml = (M_TP_11B && M_TP_21B);

    /* DataStoreRead: '<S392>/TBW-PB-DI' */
    rtb_TBWPBDI_o = DI_PBSW_TBW;

    /* DataStoreRead: '<S392>/TKGW-PB-DI' */
    rtb_TKGWPBDI_a = DI_PBSW_TKGW;

    /* DataStoreRead: '<S392>/TBKW-PB-DI' */
    rtb_TBKWPBDI_h = DI_PBSW_TBKW;

    /* DataStoreRead: '<S392>/TWT-PB-DI' */
    rtb_TWTPBDI_b = DI_PBSW_TWT;

    /* DataStoreRead: '<S392>/TKW-PB-DI' */
    rtb_TKWPBDI_f = DI_PBSW_TKW;

    /* Outputs for Atomic SubSystem: '<S392>/POINT PB CONTROL' */
    M_SW_PB(rtb_W11B21BPBDI, rtb_AND1_ml, rtb_TBWPBDI_o, rtb_TKGWPBDI_a,
            rtb_TBKWPBDI_h, rtb_TWTPBDI_b, rtb_TKWPBDI_f,
            &NONVITALMAIN_DW.POINTPBCONTROL_l, &NONVITALMAIN_DW.M_NVCOMM_OK,
            &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S392>/POINT PB CONTROL' */

    /* DataStoreWrite: '<S392>/W11B//21B-B-CTRL' */
    M_W11B_21B_CTRL_B = NONVITALMAIN_DW.POINTPBCONTROL_l.AND4;

    /* DataStoreWrite: '<S392>/W11B//21B-CAL-CTRL' */
    M_W11B_21B_CTRL_CAL =
      NONVITALMAIN_DW.POINTPBCONTROL_l.FixPtRelationalOperator;

    /* DataStoreWrite: '<S392>/W11B//21B-RST-CTRL' */
    M_W11B_21B_CTRL_RST = NONVITALMAIN_DW.POINTPBCONTROL_l.AND5;

    /* DataStoreWrite: '<S392>/W11B//21B-SWRLSPB-CTRL' */
    M_W11B_21B_CTRL_SWRLS = NONVITALMAIN_DW.POINTPBCONTROL_l.AND1;

    /* DataStoreWrite: '<S392>/W11B//21B-TRAIL-CTRL' */
    M_W11B_21B_CTRL_TRAIL = NONVITALMAIN_DW.POINTPBCONTROL_l.AND6;

    /* DataStoreRead: '<S393>/W13A//23A-PB-DI' */
    rtb_W13A23APBDI = DI_PBW_13A_23A;

    /* Logic: '<S393>/AND1' */
    rtb_AND1_g = (M_TP_13A && M_TP_23A);

    /* DataStoreRead: '<S393>/TBW-PB-DI' */
    rtb_TBWPBDI_o0 = DI_PBSW_TBW;

    /* DataStoreRead: '<S393>/TKGW-PB-DI' */
    rtb_TKGWPBDI_c = DI_PBSW_TKGW;

    /* DataStoreRead: '<S393>/TBKW-PB-DI' */
    rtb_TBKWPBDI_n = DI_PBSW_TBKW;

    /* DataStoreRead: '<S393>/TWT-PB-DI' */
    rtb_TWTPBDI_c = DI_PBSW_TWT;

    /* DataStoreRead: '<S393>/TKW-PB-DI' */
    rtb_TKWPBDI_e = DI_PBSW_TKW;

    /* Outputs for Atomic SubSystem: '<S393>/POINT PB CONTROL' */
    M_SW_PB(rtb_W13A23APBDI, rtb_AND1_g, rtb_TBWPBDI_o0, rtb_TKGWPBDI_c,
            rtb_TBKWPBDI_n, rtb_TWTPBDI_c, rtb_TKWPBDI_e,
            &NONVITALMAIN_DW.POINTPBCONTROL_p, &NONVITALMAIN_DW.M_NVCOMM_OK,
            &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S393>/POINT PB CONTROL' */

    /* DataStoreWrite: '<S393>/W13A//23A-B-CTRL' */
    M_W13A_23A_CTRL_B = NONVITALMAIN_DW.POINTPBCONTROL_p.AND4;

    /* DataStoreWrite: '<S393>/W13A//23A-CAL-CTRL' */
    M_W13A_23A_CTRL_CAL =
      NONVITALMAIN_DW.POINTPBCONTROL_p.FixPtRelationalOperator;

    /* DataStoreWrite: '<S393>/W13A//23A-RST-CTRL' */
    M_W13A_23A_CTRL_RST = NONVITALMAIN_DW.POINTPBCONTROL_p.AND5;

    /* DataStoreWrite: '<S393>/W13A//23A-SWRLSPB-CTRL' */
    M_W13A_23A_CTRL_SWRLS = NONVITALMAIN_DW.POINTPBCONTROL_p.AND1;

    /* DataStoreWrite: '<S393>/W13A//23A-TRAIL-CTRL' */
    M_W13A_23A_CTRL_TRAIL = NONVITALMAIN_DW.POINTPBCONTROL_p.AND6;

    /* DataStoreRead: '<S394>/W13B//23B-PB-DI' */
    rtb_W13B23BPBDI = DI_PBW_13B_23B;

    /* Logic: '<S394>/AND1' */
    rtb_AND1_l3 = (M_TP_13B && M_TP_23B);

    /* DataStoreRead: '<S394>/TBW-PB-DI' */
    rtb_TBWPBDI_m = DI_PBSW_TBW;

    /* DataStoreRead: '<S394>/TKGW-PB-DI' */
    rtb_TKGWPBDI_g = DI_PBSW_TKGW;

    /* DataStoreRead: '<S394>/TBKW-PB-DI' */
    rtb_TBKWPBDI_f = DI_PBSW_TBKW;

    /* DataStoreRead: '<S394>/TWT-PB-DI' */
    rtb_TWTPBDI_o = DI_PBSW_TWT;

    /* DataStoreRead: '<S394>/TKW-PB-DI' */
    rtb_TKWPBDI_l = DI_PBSW_TKW;

    /* Outputs for Atomic SubSystem: '<S394>/POINT PB CONTROL' */
    M_SW_PB(rtb_W13B23BPBDI, rtb_AND1_l3, rtb_TBWPBDI_m, rtb_TKGWPBDI_g,
            rtb_TBKWPBDI_f, rtb_TWTPBDI_o, rtb_TKWPBDI_l,
            &NONVITALMAIN_DW.POINTPBCONTROL_e, &NONVITALMAIN_DW.M_NVCOMM_OK,
            &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S394>/POINT PB CONTROL' */

    /* DataStoreWrite: '<S394>/W13B//23B-B-CTRL' */
    M_W13B_23B_CTRL_B = NONVITALMAIN_DW.POINTPBCONTROL_e.AND4;

    /* DataStoreWrite: '<S394>/W13B//23B-CAL-CTRL' */
    M_W13B_23B_CTRL_CAL =
      NONVITALMAIN_DW.POINTPBCONTROL_e.FixPtRelationalOperator;

    /* DataStoreWrite: '<S394>/W13B//23B-RST-CTRL' */
    M_W13B_23B_CTRL_RST = NONVITALMAIN_DW.POINTPBCONTROL_e.AND5;

    /* DataStoreWrite: '<S394>/W13B//23B-SWRLSPB-CTRL' */
    M_W13B_23B_CTRL_SWRLS = NONVITALMAIN_DW.POINTPBCONTROL_e.AND1;

    /* DataStoreWrite: '<S394>/W13B//23B-TRAIL-CTRL' */
    M_W13B_23B_CTRL_TRAIL = NONVITALMAIN_DW.POINTPBCONTROL_e.AND6;

    /* DataStoreRead: '<S395>/W11A//21A-PB-DI' */
    rtb_W11A21APBDI_i = DI_PBW_21C;

    /* DataStoreRead: '<S395>/11A-TP' */
    rtb_u1ATP_ne = M_TP_21C;

    /* DataStoreRead: '<S395>/TBW-PB-DI' */
    rtb_TBWPBDI_e = DI_PBSW_TBW;

    /* DataStoreRead: '<S395>/TKGW-PB-DI' */
    rtb_TKGWPBDI_cp = DI_PBSW_TKGW;

    /* DataStoreRead: '<S395>/TBKW-PB-DI' */
    rtb_TBKWPBDI_e = DI_PBSW_TBKW;

    /* DataStoreRead: '<S395>/TWT-PB-DI' */
    rtb_TWTPBDI_h = DI_PBSW_TWT;

    /* DataStoreRead: '<S395>/TKW-PB-DI' */
    rtb_TKWPBDI_b = DI_PBSW_TKW;

    /* Outputs for Atomic SubSystem: '<S395>/POINT PB CONTROL' */
    M_SW_PB(rtb_W11A21APBDI_i, rtb_u1ATP_ne, rtb_TBWPBDI_e, rtb_TKGWPBDI_cp,
            rtb_TBKWPBDI_e, rtb_TWTPBDI_h, rtb_TKWPBDI_b,
            &NONVITALMAIN_DW.POINTPBCONTROL_n, &NONVITALMAIN_DW.M_NVCOMM_OK,
            &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S395>/POINT PB CONTROL' */

    /* DataStoreWrite: '<S395>/W21C-B-CTRL' */
    M_W21C_CTRL_B = NONVITALMAIN_DW.POINTPBCONTROL_n.AND4;

    /* DataStoreWrite: '<S395>/W21C-CAL-CTRL' */
    M_W21C_CTRL_CAL = NONVITALMAIN_DW.POINTPBCONTROL_n.FixPtRelationalOperator;

    /* DataStoreWrite: '<S395>/W21C-RST-CTRL' */
    M_W21C_CTRL_RST = NONVITALMAIN_DW.POINTPBCONTROL_n.AND5;

    /* DataStoreWrite: '<S395>/W21C-SWRLSPB-CTRL' */
    M_W21C_CTRL_SWRLS = NONVITALMAIN_DW.POINTPBCONTROL_n.AND1;

    /* DataStoreWrite: '<S395>/W21C-TRAIL-CTRL' */
    M_W21C_CTRL_TRAIL = NONVITALMAIN_DW.POINTPBCONTROL_n.AND6;

    /* DataStoreRead: '<S406>/JL10-PB-DI' */
    rtb_JL10PBDI = DI_PBJ_10;

    /* DataStoreRead: '<S406>/J12B-PB-DI' */
    rtb_J12BPBDI = DI_PBJ_12B;

    /* DataStoreRead: '<S406>/J22B-PB-DI' */
    rtb_J22BPBDI = DI_PBJ_22B;

    /* Outputs for Atomic SubSystem: '<S406>/ROUTE PB CONTROL' */
    M_R_PB(rtb_JL10PBDI, rtb_J12BPBDI, rtb_J22BPBDI,
           &NONVITALMAIN_DW.ROUTEPBCONTROL, &NONVITALMAIN_DW.M_NVCOMM_OK,
           &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S406>/ROUTE PB CONTROL' */

    /* DataStoreWrite: '<S406>/JL10-J12B-PB-CTRL' */
    M_PBCTRL_10_12 = NONVITALMAIN_DW.ROUTEPBCONTROL.AND2;

    /* DataStoreWrite: '<S406>/JL10-J22B-PB-CTRL' */
    M_PBCTRL_10_22 = NONVITALMAIN_DW.ROUTEPBCONTROL.AND3;

    /* DataStoreRead: '<S407>/JL10-PB-DI' */
    rtb_JL10PBDI_k = DI_PBJ_14;

    /* DataStoreRead: '<S407>/J12A-PB-DI' */
    rtb_J12APBDI = DI_PBJ_12A;

    /* DataStoreRead: '<S407>/J22A-PB-DI' */
    rtb_J22APBDI = DI_PBJ_22A;

    /* Outputs for Atomic SubSystem: '<S407>/ROUTE PB CONTROL' */
    M_R_PB(rtb_JL10PBDI_k, rtb_J12APBDI, rtb_J22APBDI,
           &NONVITALMAIN_DW.ROUTEPBCONTROL_o, &NONVITALMAIN_DW.M_NVCOMM_OK,
           &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S407>/ROUTE PB CONTROL' */

    /* DataStoreWrite: '<S407>/J14-J12A-PB-CTRL' */
    M_PBCTRL_14_12 = NONVITALMAIN_DW.ROUTEPBCONTROL_o.AND2;

    /* DataStoreWrite: '<S407>/J14-J22A-PB-CTRL' */
    M_PBCTRL_14_22 = NONVITALMAIN_DW.ROUTEPBCONTROL_o.AND3;

    /* DataStoreRead: '<S408>/JL20-PB-DI' */
    rtb_JL20PBDI = DI_PBJ_20;

    /* DataStoreRead: '<S408>/J12B-PB-DI' */
    rtb_J12BPBDI_c = DI_PBJ_12B;

    /* DataStoreRead: '<S408>/J22B-PB-DI' */
    rtb_J22BPBDI_m = DI_PBJ_22B;

    /* Outputs for Atomic SubSystem: '<S408>/ROUTE PB CONTROL' */
    M_R_PB(rtb_JL20PBDI, rtb_J12BPBDI_c, rtb_J22BPBDI_m,
           &NONVITALMAIN_DW.ROUTEPBCONTROL_a, &NONVITALMAIN_DW.M_NVCOMM_OK,
           &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S408>/ROUTE PB CONTROL' */

    /* DataStoreWrite: '<S408>/JL20-J12B-PB-CTRL' */
    M_PBCTRL_20_12 = NONVITALMAIN_DW.ROUTEPBCONTROL_a.AND2;

    /* DataStoreWrite: '<S408>/JL20-J22B-PB-CTRL' */
    M_PBCTRL_20_22 = NONVITALMAIN_DW.ROUTEPBCONTROL_a.AND3;

    /* DataStoreRead: '<S409>/J24-PB-DI' */
    rtb_J24PBDI = DI_PBJ_24;

    /* DataStoreRead: '<S409>/J12A-PB-DI' */
    rtb_J12APBDI_b = DI_PBJ_12A;

    /* DataStoreRead: '<S409>/J22A-PB-DI' */
    rtb_J22APBDI_i = DI_PBJ_22A;

    /* Outputs for Atomic SubSystem: '<S409>/ROUTE PB CONTROL' */
    M_R_PB(rtb_J24PBDI, rtb_J12APBDI_b, rtb_J22APBDI_i,
           &NONVITALMAIN_DW.ROUTEPBCONTROL_og, &NONVITALMAIN_DW.M_NVCOMM_OK,
           &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S409>/ROUTE PB CONTROL' */

    /* DataStoreWrite: '<S409>/J24-J12A-PB-CTRL' */
    M_PBCTRL_24_12 = NONVITALMAIN_DW.ROUTEPBCONTROL_og.AND2;

    /* DataStoreWrite: '<S409>/J24-J22A-PB-CTRL' */
    M_PBCTRL_24_22 = NONVITALMAIN_DW.ROUTEPBCONTROL_og.AND3;

    /* DataStoreRead: '<S410>/DEP-TO-ST-PB-DI' */
    rtb_DEPTOSTPBDI = DI_GO_FROM_DEPOT;

    /* DataStoreRead: '<S410>/X10-PB-DI' */
    rtb_X10PBDI = DI_PBX_10;

    /* DataStoreRead: '<S410>/X20-PB-DI' */
    rtb_X20PBDI = DI_PBX_20;

    /* Outputs for Atomic SubSystem: '<S410>/ROUTE PB CONTROL' */
    M_R_PB(rtb_DEPTOSTPBDI, rtb_X10PBDI, rtb_X20PBDI,
           &NONVITALMAIN_DW.ROUTEPBCONTROL_ax, &NONVITALMAIN_DW.M_NVCOMM_OK,
           &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S410>/ROUTE PB CONTROL' */

    /* DataStoreWrite: '<S410>/DEP-X10-PB-CTRL' */
    M_PBCTRL_DEP_10 = NONVITALMAIN_DW.ROUTEPBCONTROL_ax.AND2;

    /* DataStoreWrite: '<S410>/DEP-X20-PB-CTRL' */
    M_PBCTRL_DEP_20 = NONVITALMAIN_DW.ROUTEPBCONTROL_ax.AND3;

    /* DataStoreRead: '<S411>/X10-PB-DI' */
    rtb_X10PBDI_m = DI_PBX_10;

    /* DataStoreRead: '<S411>/J12A-PB-DI' */
    rtb_J12APBDI_g = DI_PBJ_12A;

    /* DataStoreRead: '<S411>/J22A-PB-DI' */
    rtb_J22APBDI_a = DI_PBJ_22A;

    /* Outputs for Atomic SubSystem: '<S411>/ROUTE PB CONTROL' */
    M_R_PB(rtb_X10PBDI_m, rtb_J12APBDI_g, rtb_J22APBDI_a,
           &NONVITALMAIN_DW.ROUTEPBCONTROL_f, &NONVITALMAIN_DW.M_NVCOMM_OK,
           &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S411>/ROUTE PB CONTROL' */

    /* DataStoreWrite: '<S411>/J12A-X10-PB-CTRL' */
    M_PBCTRL_12_10 = NONVITALMAIN_DW.ROUTEPBCONTROL_f.AND2;

    /* DataStoreWrite: '<S411>/J22A-X10-PB-CTRL' */
    M_PBCTRL_22_10 = NONVITALMAIN_DW.ROUTEPBCONTROL_f.AND3;

    /* DataStoreRead: '<S412>/X14-PB-DI' */
    rtb_X14PBDI = DI_PBX_14;

    /* DataStoreRead: '<S412>/J12B-PB-DI' */
    rtb_J12BPBDI_i = DI_PBJ_12B;

    /* DataStoreRead: '<S412>/J22B-PB-DI' */
    rtb_J22BPBDI_c = DI_PBJ_22B;

    /* Outputs for Atomic SubSystem: '<S412>/ROUTE PB CONTROL' */
    M_R_PB(rtb_X14PBDI, rtb_J12BPBDI_i, rtb_J22BPBDI_c,
           &NONVITALMAIN_DW.ROUTEPBCONTROL_j, &NONVITALMAIN_DW.M_NVCOMM_OK,
           &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S412>/ROUTE PB CONTROL' */

    /* DataStoreWrite: '<S412>/J12B-X14-PB-CTRL' */
    M_PBCTRL_12_14 = NONVITALMAIN_DW.ROUTEPBCONTROL_j.AND2;

    /* DataStoreWrite: '<S412>/J22B-X14-PB-CTRL' */
    M_PBCTRL_22_14 = NONVITALMAIN_DW.ROUTEPBCONTROL_j.AND3;

    /* DataStoreRead: '<S413>/JL10-PB-DI' */
    rtb_JL10PBDI_h = DI_PBX_20;

    /* DataStoreRead: '<S413>/J12A-PB-DI' */
    rtb_J12APBDI_bs = DI_PBJ_12A;

    /* DataStoreRead: '<S413>/J22A-PB-DI' */
    rtb_J22APBDI_b = DI_PBJ_22A;

    /* Outputs for Atomic SubSystem: '<S413>/ROUTE PB CONTROL' */
    M_R_PB(rtb_JL10PBDI_h, rtb_J12APBDI_bs, rtb_J22APBDI_b,
           &NONVITALMAIN_DW.ROUTEPBCONTROL_fl, &NONVITALMAIN_DW.M_NVCOMM_OK,
           &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S413>/ROUTE PB CONTROL' */

    /* DataStoreWrite: '<S413>/J12A-X20-PB-CTRL' */
    M_PBCTRL_12_20 = NONVITALMAIN_DW.ROUTEPBCONTROL_fl.AND2;

    /* DataStoreWrite: '<S413>/J22A-X20-PB-CTRL' */
    M_PBCTRL_22_20 = NONVITALMAIN_DW.ROUTEPBCONTROL_fl.AND3;

    /* DataStoreRead: '<S414>/X24-PB-DI' */
    rtb_X24PBDI = DI_PBX_24;

    /* DataStoreRead: '<S414>/J12B-PB-DI' */
    rtb_J12BPBDI_h = DI_PBJ_12B;

    /* DataStoreRead: '<S414>/J22B-PB-DI' */
    rtb_J22BPBDI_p = DI_PBJ_22B;

    /* Outputs for Atomic SubSystem: '<S414>/ROUTE PB CONTROL' */
    M_R_PB(rtb_X24PBDI, rtb_J12BPBDI_h, rtb_J22BPBDI_p,
           &NONVITALMAIN_DW.ROUTEPBCONTROL_i, &NONVITALMAIN_DW.M_NVCOMM_OK,
           &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S414>/ROUTE PB CONTROL' */

    /* DataStoreWrite: '<S414>/J12B-X24-PB-CTRL' */
    M_PBCTRL_12_24 = NONVITALMAIN_DW.ROUTEPBCONTROL_i.AND2;

    /* DataStoreWrite: '<S414>/J22B-X24-PB-CTRL' */
    M_PBCTRL_22_24 = NONVITALMAIN_DW.ROUTEPBCONTROL_i.AND3;

    /* DataStoreRead: '<S415>/ST-TO-DEP -PB-DI' */
    rtb_STTODEPPBDI = DI_GO_TO_DEPOT;

    /* DataStoreRead: '<S415>/JL10-PB-DI' */
    rtb_JL10PBDI_a = DI_PBJ_10;

    /* DataStoreRead: '<S415>/JL20-PB-DI' */
    rtb_JL20PBDI_g = DI_PBJ_20;

    /* Outputs for Atomic SubSystem: '<S415>/ROUTE PB CONTROL' */
    M_R_PB(rtb_STTODEPPBDI, rtb_JL10PBDI_a, rtb_JL20PBDI_g,
           &NONVITALMAIN_DW.ROUTEPBCONTROL_d, &NONVITALMAIN_DW.M_NVCOMM_OK,
           &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S415>/ROUTE PB CONTROL' */

    /* DataStoreWrite: '<S415>/JL10-DEP-PB-CTRL' */
    M_PBCTRL_10_DEP = NONVITALMAIN_DW.ROUTEPBCONTROL_d.AND2;

    /* DataStoreWrite: '<S415>/JL20-DEP-PB-CTRL' */
    M_PBCTRL_20_DEP = NONVITALMAIN_DW.ROUTEPBCONTROL_d.AND3;

    /* DataStoreRead: '<S426>/OTOMATIS-PB-DI' */
    rtb_OTOMATISPBDI = DI_PBG_OTOMATIS;

    /* DataStoreRead: '<S426>/MANUAL-PB-DI' */
    rtb_MANUALPBDI = DI_PBG_MANUAL;

    /* DataStoreRead: '<S426>/J12A-PB-DI' */
    rtb_J12APBDI_i = DI_PBJ_12A;

    /* Outputs for Atomic SubSystem: '<S426>/RUTE OTOMATIS' */
    M_R_AUTO(rtb_OTOMATISPBDI, rtb_MANUALPBDI, rtb_J12APBDI_i,
             &NONVITALMAIN_DW.RUTEOTOMATIS, &NONVITALMAIN_DW.M_NVCOMM_OK,
             &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S426>/RUTE OTOMATIS' */

    /* DataStoreWrite: '<S426>/J12A-AR-OK' */
    M_AR_J12A = NONVITALMAIN_DW.RUTEOTOMATIS.AND5;

    /* DataStoreWrite: '<S426>/J12A-ARE-DO' */
    DO_INDAR_J12A = NONVITALMAIN_DW.RUTEOTOMATIS.AND5;

    /* DataStoreRead: '<S427>/OTOMATIS-PB-DI' */
    rtb_OTOMATISPBDI_p = DI_PBG_OTOMATIS;

    /* DataStoreRead: '<S427>/MANUAL-PB-DI' */
    rtb_MANUALPBDI_d = DI_PBG_MANUAL;

    /* DataStoreRead: '<S427>/J12B-PB-DI' */
    rtb_J12BPBDI_l = DI_PBJ_12B;

    /* Outputs for Atomic SubSystem: '<S427>/RUTE OTOMATIS' */
    M_R_AUTO(rtb_OTOMATISPBDI_p, rtb_MANUALPBDI_d, rtb_J12BPBDI_l,
             &NONVITALMAIN_DW.RUTEOTOMATIS_f, &NONVITALMAIN_DW.M_NVCOMM_OK,
             &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S427>/RUTE OTOMATIS' */

    /* DataStoreWrite: '<S427>/J12B-AR-OK' */
    M_AR_J12B = NONVITALMAIN_DW.RUTEOTOMATIS_f.AND5;

    /* DataStoreWrite: '<S427>/J12B-ARE-DO' */
    DO_INDAR_J12B = NONVITALMAIN_DW.RUTEOTOMATIS_f.AND5;

    /* DataStoreRead: '<S428>/OTOMATIS-PB-DI' */
    rtb_OTOMATISPBDI_d = DI_PBG_OTOMATIS;

    /* DataStoreRead: '<S428>/MANUAL-PB-DI' */
    rtb_MANUALPBDI_b = DI_PBG_MANUAL;

    /* DataStoreRead: '<S428>/J14-PB-DI' */
    rtb_J14PBDI = DI_PBJ_14;

    /* Outputs for Atomic SubSystem: '<S428>/RUTE OTOMATIS' */
    M_R_AUTO(rtb_OTOMATISPBDI_d, rtb_MANUALPBDI_b, rtb_J14PBDI,
             &NONVITALMAIN_DW.RUTEOTOMATIS_e, &NONVITALMAIN_DW.M_NVCOMM_OK,
             &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S428>/RUTE OTOMATIS' */

    /* DataStoreWrite: '<S428>/J14-AR-OK' */
    M_AR_J14 = NONVITALMAIN_DW.RUTEOTOMATIS_e.AND5;

    /* DataStoreWrite: '<S428>/J14-ARE-DO' */
    DO_INDAR_J14 = NONVITALMAIN_DW.RUTEOTOMATIS_e.AND5;

    /* DataStoreRead: '<S429>/OTOMATIS-PB-DI' */
    rtb_OTOMATISPBDI_b = DI_PBG_OTOMATIS;

    /* DataStoreRead: '<S429>/MANUAL-PB-DI' */
    rtb_MANUALPBDI_k = DI_PBG_MANUAL;

    /* DataStoreRead: '<S429>/J22A-PB-DI' */
    rtb_J22APBDI_f = DI_PBJ_22A;

    /* Outputs for Atomic SubSystem: '<S429>/RUTE OTOMATIS' */
    M_R_AUTO(rtb_OTOMATISPBDI_b, rtb_MANUALPBDI_k, rtb_J22APBDI_f,
             &NONVITALMAIN_DW.RUTEOTOMATIS_e0, &NONVITALMAIN_DW.M_NVCOMM_OK,
             &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S429>/RUTE OTOMATIS' */

    /* DataStoreWrite: '<S429>/J22A-AR-OK' */
    M_AR_J22A = NONVITALMAIN_DW.RUTEOTOMATIS_e0.AND5;

    /* DataStoreWrite: '<S429>/J22A-ARE-DO' */
    DO_INDAR_J22A = NONVITALMAIN_DW.RUTEOTOMATIS_e0.AND5;

    /* DataStoreRead: '<S430>/OTOMATIS-PB-DI' */
    rtb_OTOMATISPBDI_h = DI_PBG_OTOMATIS;

    /* DataStoreRead: '<S430>/MANUAL-PB-DI' */
    rtb_MANUALPBDI_a = DI_PBG_MANUAL;

    /* DataStoreRead: '<S430>/J22B-PB-DI' */
    rtb_J22BPBDI_n = DI_PBJ_22B;

    /* Outputs for Atomic SubSystem: '<S430>/RUTE OTOMATIS' */
    M_R_AUTO(rtb_OTOMATISPBDI_h, rtb_MANUALPBDI_a, rtb_J22BPBDI_n,
             &NONVITALMAIN_DW.RUTEOTOMATIS_j, &NONVITALMAIN_DW.M_NVCOMM_OK,
             &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S430>/RUTE OTOMATIS' */

    /* DataStoreWrite: '<S430>/J22B-AR-OK' */
    M_AR_J22B = NONVITALMAIN_DW.RUTEOTOMATIS_j.AND5;

    /* DataStoreWrite: '<S430>/J22B-ARE-DO' */
    DO_INDAR_J22B = NONVITALMAIN_DW.RUTEOTOMATIS_j.AND5;

    /* DataStoreRead: '<S431>/OTOMATIS-PB-DI' */
    rtb_OTOMATISPBDI_g = DI_PBG_OTOMATIS;

    /* DataStoreRead: '<S431>/MANUAL-PB-DI' */
    rtb_MANUALPBDI_dz = DI_PBG_MANUAL;

    /* DataStoreRead: '<S431>/J24-PB-DI' */
    rtb_J24PBDI_l = DI_PBJ_24;

    /* Outputs for Atomic SubSystem: '<S431>/RUTE OTOMATIS' */
    M_R_AUTO(rtb_OTOMATISPBDI_g, rtb_MANUALPBDI_dz, rtb_J24PBDI_l,
             &NONVITALMAIN_DW.RUTEOTOMATIS_h, &NONVITALMAIN_DW.M_NVCOMM_OK,
             &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S431>/RUTE OTOMATIS' */

    /* DataStoreWrite: '<S431>/J24-AR-OK' */
    M_AR_J24 = NONVITALMAIN_DW.RUTEOTOMATIS_h.AND5;

    /* DataStoreWrite: '<S431>/J24-ARE-DO' */
    DO_INDAR_J24 = NONVITALMAIN_DW.RUTEOTOMATIS_h.AND5;

    /* DataStoreRead: '<S432>/OTOMATIS-PB-DI' */
    rtb_OTOMATISPBDI_j = DI_PBG_OTOMATIS;

    /* DataStoreRead: '<S432>/MANUAL-PB-DI' */
    rtb_MANUALPBDI_f = DI_PBG_MANUAL;

    /* DataStoreRead: '<S432>/JL10-PB-DI' */
    rtb_JL10PBDI_g = DI_PBJ_10;

    /* Outputs for Atomic SubSystem: '<S432>/RUTE OTOMATIS' */
    M_R_AUTO(rtb_OTOMATISPBDI_j, rtb_MANUALPBDI_f, rtb_JL10PBDI_g,
             &NONVITALMAIN_DW.RUTEOTOMATIS_ec, &NONVITALMAIN_DW.M_NVCOMM_OK,
             &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S432>/RUTE OTOMATIS' */

    /* DataStoreWrite: '<S432>/JL10-AR-OK' */
    M_AR_JL10 = NONVITALMAIN_DW.RUTEOTOMATIS_ec.AND5;

    /* DataStoreWrite: '<S432>/JL10-ARE-DO' */
    DO_INDAR_JL10 = NONVITALMAIN_DW.RUTEOTOMATIS_ec.AND5;

    /* DataStoreRead: '<S433>/OTOMATIS-PB-DI' */
    rtb_OTOMATISPBDI_m = DI_PBG_OTOMATIS;

    /* DataStoreRead: '<S433>/MANUAL-PB-DI' */
    rtb_MANUALPBDI_n = DI_PBG_MANUAL;

    /* DataStoreRead: '<S433>/JL20-PB-DI' */
    rtb_JL20PBDI_m = DI_PBJ_20;

    /* Outputs for Atomic SubSystem: '<S433>/RUTE OTOMATIS' */
    M_R_AUTO(rtb_OTOMATISPBDI_m, rtb_MANUALPBDI_n, rtb_JL20PBDI_m,
             &NONVITALMAIN_DW.RUTEOTOMATIS_m, &NONVITALMAIN_DW.M_NVCOMM_OK,
             &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S433>/RUTE OTOMATIS' */

    /* DataStoreWrite: '<S433>/JL20-AR-OK' */
    M_AR_JL20 = NONVITALMAIN_DW.RUTEOTOMATIS_m.AND5;

    /* DataStoreWrite: '<S433>/JL20-ARE-DO' */
    DO_INDAR_JL20 = NONVITALMAIN_DW.RUTEOTOMATIS_m.AND5;

    /* DataStoreRead: '<S442>/TPR-PB-DI' */
    rtb_TPRPBDI = DI_PBR_TPR;

    /* DataStoreRead: '<S442>/ST-TO-DEP-PB-DI' */
    rtb_STTODEPPBDI_o = DI_GO_TO_DEPOT;

    /* Logic: '<S442>/OR6' incorporates:
     *  DataStoreWrite: '<S433>/JL20-AR-OK'
     *  Logic: '<S442>/OR4'
     *  Logic: '<S442>/OR5'
     */
    rtb_OR6_ib = ((M_AR_JL10 && R10DEPPBRST) ||
                  (NONVITALMAIN_DW.RUTEOTOMATIS_m.AND5 && R20DEPPBRST));

    /* DataStoreRead: '<S442>/21C-S-WS' */
    rtb_u1CSWS_k = M_S_WS_21C;

    /* Logic: '<S442>/OR2' */
    rtb_OR2_e = (M_RS_DEP_10 && M_RS_DEP_20);

    /* Outputs for Atomic SubSystem: '<S442>/RRLS PB CONTROL' */
    M_RRLS_X(rtb_TPRPBDI, rtb_STTODEPPBDI_o, rtb_OR6_ib, rtb_u1CSWS_k, rtb_OR2_e,
             &NONVITALMAIN_DW.RRLSPBCONTROL, &NONVITALMAIN_DW.M_NVCOMM_OK,
             &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S442>/RRLS PB CONTROL' */

    /* DataStoreWrite: '<S442>/DEP-RRLSPB-CTRL' */
    M_CTRL_RRLS_DEP = NONVITALMAIN_DW.RRLSPBCONTROL.AND1;

    /* DataStoreRead: '<S443>/TPR-PB-DI' */
    rtb_TPRPBDI_n = DI_PBR_TPR;

    /* DataStoreRead: '<S443>/J12A-PB-DI' */
    rtb_J12APBDI_p = DI_PBJ_12A;

    /* Logic: '<S443>/OR6' incorporates:
     *  Logic: '<S443>/OR4'
     *  Logic: '<S443>/OR5'
     */
    rtb_OR6_ac = ((M_AR_J14 && R1412PBRST) || (M_AR_J24 && R2412PBRST));

    /* DataStoreRead: '<S443>/12A-T-WS' */
    rtb_u2ATWS_j = M_T_WS_12A;

    /* Logic: '<S443>/OR2' */
    rtb_OR2_l = (M_RS_14_12 && M_RS_24_12);

    /* Outputs for Atomic SubSystem: '<S443>/RRLS PB CONTROL' */
    M_RRLS_X(rtb_TPRPBDI_n, rtb_J12APBDI_p, rtb_OR6_ac, rtb_u2ATWS_j, rtb_OR2_l,
             &NONVITALMAIN_DW.RRLSPBCONTROL_h, &NONVITALMAIN_DW.M_NVCOMM_OK,
             &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S443>/RRLS PB CONTROL' */

    /* DataStoreWrite: '<S443>/J12A-RRLSPB-CTRL' */
    M_CTRL_RRLS_12A = NONVITALMAIN_DW.RRLSPBCONTROL_h.AND1;

    /* DataStoreRead: '<S444>/TPR-PB-DI' */
    rtb_TPRPBDI_h = DI_PBR_TPR;

    /* DataStoreRead: '<S444>/J12B-PB-DI' */
    rtb_J12BPBDI_hj = DI_PBJ_12B;

    /* Logic: '<S444>/OR6' incorporates:
     *  DataStoreWrite: '<S433>/JL20-AR-OK'
     *  Logic: '<S444>/OR4'
     *  Logic: '<S444>/OR5'
     */
    rtb_OR6_o = ((M_AR_JL10 && R1012PBRST) ||
                 (NONVITALMAIN_DW.RUTEOTOMATIS_m.AND5 && R2012PBRST));

    /* DataStoreRead: '<S444>/12E-T-ES' */
    rtb_u2ETES_n = M_T_ES_12E;

    /* Logic: '<S444>/OR2' */
    rtb_OR2_li = (M_RS_10_12 && M_RS_20_12);

    /* Outputs for Atomic SubSystem: '<S444>/RRLS PB CONTROL' */
    M_RRLS_X(rtb_TPRPBDI_h, rtb_J12BPBDI_hj, rtb_OR6_o, rtb_u2ETES_n, rtb_OR2_li,
             &NONVITALMAIN_DW.RRLSPBCONTROL_j, &NONVITALMAIN_DW.M_NVCOMM_OK,
             &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S444>/RRLS PB CONTROL' */

    /* DataStoreWrite: '<S444>/J12B-RRLSPB-CTRL' */
    M_CTRL_RRLS_12B = NONVITALMAIN_DW.RRLSPBCONTROL_j.AND1;

    /* DataStoreRead: '<S445>/TPR-PB-DI' */
    rtb_TPRPBDI_i = DI_PBR_TPR;

    /* DataStoreRead: '<S445>/J22A-PB-DI' */
    rtb_J22APBDI_l = DI_PBJ_22A;

    /* Logic: '<S445>/OR6' incorporates:
     *  Logic: '<S445>/OR4'
     *  Logic: '<S445>/OR5'
     */
    rtb_OR6_h = ((M_AR_J14 && R1422PBRST) || (M_AR_J24 && R2422PBRST));

    /* DataStoreRead: '<S445>/22A-T-WS' */
    rtb_u2ATWS_k = M_T_WS_22A;

    /* Logic: '<S445>/OR2' */
    rtb_OR2_as = (M_RS_14_22 && M_RS_24_22);

    /* Outputs for Atomic SubSystem: '<S445>/RRLS PB CONTROL' */
    M_RRLS_X(rtb_TPRPBDI_i, rtb_J22APBDI_l, rtb_OR6_h, rtb_u2ATWS_k, rtb_OR2_as,
             &NONVITALMAIN_DW.RRLSPBCONTROL_l, &NONVITALMAIN_DW.M_NVCOMM_OK,
             &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S445>/RRLS PB CONTROL' */

    /* DataStoreWrite: '<S445>/J22A-RRLSPB-CTRL' */
    M_CTRL_RRLS_22A = NONVITALMAIN_DW.RRLSPBCONTROL_l.AND1;

    /* DataStoreRead: '<S446>/TPR-PB-DI' */
    rtb_TPRPBDI_f = DI_PBR_TPR;

    /* DataStoreRead: '<S446>/J22B-PB-DI' */
    rtb_J22BPBDI_a = DI_PBJ_22B;

    /* Logic: '<S446>/OR6' incorporates:
     *  DataStoreWrite: '<S433>/JL20-AR-OK'
     *  Logic: '<S446>/OR4'
     *  Logic: '<S446>/OR5'
     */
    rtb_OR6_b3 = ((M_AR_JL10 && R1022PBRST) ||
                  (NONVITALMAIN_DW.RUTEOTOMATIS_m.AND5 && R2022PBRST));

    /* DataStoreRead: '<S446>/22E-T-ES' */
    rtb_u2ETES_k = M_T_ES_22E;

    /* Logic: '<S446>/OR2' */
    rtb_OR2_i5 = (M_RS_10_22 && M_RS_20_22);

    /* Outputs for Atomic SubSystem: '<S446>/RRLS PB CONTROL' */
    M_RRLS_X(rtb_TPRPBDI_f, rtb_J22BPBDI_a, rtb_OR6_b3, rtb_u2ETES_k, rtb_OR2_i5,
             &NONVITALMAIN_DW.RRLSPBCONTROL_f, &NONVITALMAIN_DW.M_NVCOMM_OK,
             &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S446>/RRLS PB CONTROL' */

    /* DataStoreWrite: '<S446>/J22B-RRLSPB-CTRL' */
    M_CTRL_RRLS_22B = NONVITALMAIN_DW.RRLSPBCONTROL_f.AND1;

    /* DataStoreRead: '<S447>/TPR-PB-DI' */
    rtb_TPRPBDI_k = DI_PBR_TPR;

    /* DataStoreRead: '<S447>/X10-PB-DI' */
    rtb_X10PBDI_f = DI_PBX_10;

    /* Logic: '<S447>/OR6' incorporates:
     *  Logic: '<S447>/OR3'
     *  Logic: '<S447>/OR4'
     *  Logic: '<S447>/OR5'
     */
    rtb_OR6_bd = ((M_AR_J12A && R1210PBRST) || (M_AR_J22A && R2210PBRST) ||
                  (M_AR_DEP && RDEP10PBRST));

    /* Logic: '<S447>/OR1' */
    rtb_OR1_il = (M_T_WS_10A && M_S_WS_10A);

    /* Logic: '<S447>/OR2' */
    rtb_OR2_c = (M_RS_12_10 && M_RS_22_10 && M_RS_DEP_10);

    /* Outputs for Atomic SubSystem: '<S447>/RRLS PB CONTROL' */
    M_RRLS_X(rtb_TPRPBDI_k, rtb_X10PBDI_f, rtb_OR6_bd, rtb_OR1_il, rtb_OR2_c,
             &NONVITALMAIN_DW.RRLSPBCONTROL_e, &NONVITALMAIN_DW.M_NVCOMM_OK,
             &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S447>/RRLS PB CONTROL' */

    /* DataStoreWrite: '<S447>/X10-RRLSPB-CTRL' */
    M_CTRL_RRLS_10 = NONVITALMAIN_DW.RRLSPBCONTROL_e.AND1;

    /* DataStoreRead: '<S448>/TPR-PB-DI' */
    rtb_TPRPBDI_p = DI_PBR_TPR;

    /* DataStoreRead: '<S448>/X14-PB-DI' */
    rtb_X14PBDI_j = DI_PBX_14;

    /* Logic: '<S448>/OR6' incorporates:
     *  Logic: '<S448>/OR4'
     *  Logic: '<S448>/OR5'
     */
    rtb_OR6_h3 = ((M_AR_J12B && R1214PBRST) || (M_AR_J22B && R2214PBRST));

    /* DataStoreRead: '<S448>/14B-T-ES' */
    rtb_u4BTES_a = M_T_ES_14B;

    /* Logic: '<S448>/OR2' */
    rtb_OR2_b3 = (M_RS_12_14 && M_RS_22_14);

    /* Outputs for Atomic SubSystem: '<S448>/RRLS PB CONTROL' */
    M_RRLS_X(rtb_TPRPBDI_p, rtb_X14PBDI_j, rtb_OR6_h3, rtb_u4BTES_a, rtb_OR2_b3,
             &NONVITALMAIN_DW.RRLSPBCONTROL_hv, &NONVITALMAIN_DW.M_NVCOMM_OK,
             &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S448>/RRLS PB CONTROL' */

    /* DataStoreWrite: '<S448>/X14-RRLSPB-CTRL' */
    M_CTRL_RRLS_14 = NONVITALMAIN_DW.RRLSPBCONTROL_hv.AND1;

    /* DataStoreRead: '<S449>/TPR-PB-DI' */
    rtb_TPRPBDI_nr = DI_PBR_TPR;

    /* DataStoreRead: '<S449>/X20-PB-DI' */
    rtb_X20PBDI_j = DI_PBX_20;

    /* Logic: '<S449>/OR6' incorporates:
     *  Logic: '<S449>/OR3'
     *  Logic: '<S449>/OR4'
     *  Logic: '<S449>/OR5'
     */
    rtb_OR6_ibr = ((M_AR_J12A && R1220PBRST) || (M_AR_J22A && R2220PBRST) ||
                   (M_AR_DEP && RDEP20PBRST));

    /* Logic: '<S449>/OR1' */
    rtb_OR1_oc = (M_T_WS_20A && M_S_WS_20A);

    /* Logic: '<S449>/OR2' */
    rtb_OR2_h0 = (M_RS_12_20 && M_RS_22_20 && M_RS_DEP_20);

    /* Outputs for Atomic SubSystem: '<S449>/RRLS PB CONTROL' */
    M_RRLS_X(rtb_TPRPBDI_nr, rtb_X20PBDI_j, rtb_OR6_ibr, rtb_OR1_oc, rtb_OR2_h0,
             &NONVITALMAIN_DW.RRLSPBCONTROL_ep, &NONVITALMAIN_DW.M_NVCOMM_OK,
             &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S449>/RRLS PB CONTROL' */

    /* DataStoreWrite: '<S449>/X20-RRLSPB-CTRL' */
    M_CTRL_RRLS_20 = NONVITALMAIN_DW.RRLSPBCONTROL_ep.AND1;

    /* DataStoreRead: '<S450>/TPR-PB-DI' */
    rtb_TPRPBDI_c = DI_PBR_TPR;

    /* DataStoreRead: '<S450>/X24-PB-DI' */
    rtb_X24PBDI_g = DI_PBX_24;

    /* Logic: '<S450>/OR6' incorporates:
     *  Logic: '<S450>/OR4'
     *  Logic: '<S450>/OR5'
     */
    rtb_OR6_mo = ((M_AR_J12B && R1224PBRST) || (M_AR_J22B && R2224PBRST));

    /* DataStoreRead: '<S450>/24B-T-ES' */
    rtb_u4BTES_op = M_T_ES_24B;

    /* Logic: '<S450>/OR2' */
    rtb_OR2_ma = (M_RS_12_24 && M_RS_22_24);

    /* Outputs for Atomic SubSystem: '<S450>/RRLS PB CONTROL' */
    M_RRLS_X(rtb_TPRPBDI_c, rtb_X24PBDI_g, rtb_OR6_mo, rtb_u4BTES_op, rtb_OR2_ma,
             &NONVITALMAIN_DW.RRLSPBCONTROL_n, &NONVITALMAIN_DW.M_NVCOMM_OK,
             &NONVITALMAIN_DW.M_VDR);

    /* End of Outputs for SubSystem: '<S450>/RRLS PB CONTROL' */

    /* DataStoreWrite: '<S450>/X24-RRLSPB-CTRL' */
    M_CTRL_RRLS_24 = NONVITALMAIN_DW.RRLSPBCONTROL_n.AND1;

    /* DataStoreWrite: '<S460>/JL20-RST-CTRL' incorporates:
     *  DataStoreRead: '<S460>/COMM-OK'
     *  DataStoreRead: '<S460>/VDR'
     *  DataStoreWrite: '<S433>/JL20-AR-OK'
     *  Logic: '<S460>/OR1'
     *  Logic: '<S469>/OR2'
     *  Logic: '<S469>/OR3'
     *  Logic: '<S469>/OR4'
     *  Logic: '<S469>/OR5'
     *  Logic: '<S469>/OR6'
     */
    M_CTRL_RST_20 = (((DI_PBR_TPR && (!NONVITALMAIN_DW.RUTEOTOMATIS_m.AND5) &&
                       DI_PBJ_20) || (NONVITALMAIN_DW.RUTEOTOMATIS_m.AND5 &&
      (R2012PBRST || R2022PBRST || R20DEPPBRST))) && NONVITALMAIN_DW.M_NVCOMM_OK
                     && NONVITALMAIN_DW.M_VDR);

    /* DataStoreWrite: '<S461>/JL10-RST-CTRL' incorporates:
     *  DataStoreRead: '<S461>/COMM-OK'
     *  DataStoreRead: '<S461>/VDR'
     *  Logic: '<S461>/OR1'
     *  Logic: '<S470>/OR2'
     *  Logic: '<S470>/OR3'
     *  Logic: '<S470>/OR4'
     *  Logic: '<S470>/OR5'
     *  Logic: '<S470>/OR6'
     */
    M_CTRL_RST_10 = (((DI_PBR_TPR && (!M_AR_JL10) && DI_PBJ_10) || (M_AR_JL10 &&
      (R1012PBRST || R1022PBRST || R10DEPPBRST))) && NONVITALMAIN_DW.M_NVCOMM_OK
                     && NONVITALMAIN_DW.M_VDR);

    /* DataStoreWrite: '<S462>/JL24-RST-CTRL' incorporates:
     *  DataStoreRead: '<S462>/COMM-OK'
     *  DataStoreRead: '<S462>/VDR'
     *  Logic: '<S462>/OR1'
     *  Logic: '<S471>/OR2'
     *  Logic: '<S471>/OR3'
     *  Logic: '<S471>/OR4'
     *  Logic: '<S471>/OR5'
     *  Logic: '<S471>/OR6'
     */
    M_CTRL_RST_24 = (((DI_PBR_TPR && (!M_AR_J24) && DI_PBJ_24) || (M_AR_J24 &&
      (R2412PBRST || R2422PBRST))) && NONVITALMAIN_DW.M_NVCOMM_OK &&
                     NONVITALMAIN_DW.M_VDR);

    /* DataStoreWrite: '<S463>/JL14-RST-CTRL' incorporates:
     *  DataStoreRead: '<S463>/COMM-OK'
     *  DataStoreRead: '<S463>/VDR'
     *  Logic: '<S463>/OR1'
     *  Logic: '<S472>/OR2'
     *  Logic: '<S472>/OR3'
     *  Logic: '<S472>/OR4'
     *  Logic: '<S472>/OR5'
     *  Logic: '<S472>/OR6'
     */
    M_CTRL_RST_14 = (((DI_PBR_TPR && (!M_AR_J14) && DI_PBJ_14) || (M_AR_J14 &&
      (R1412PBRST || R1422PBRST))) && NONVITALMAIN_DW.M_NVCOMM_OK &&
                     NONVITALMAIN_DW.M_VDR);

    /* DataStoreWrite: '<S464>/J12A-RST-CTRL' incorporates:
     *  DataStoreRead: '<S464>/COMM-OK'
     *  DataStoreRead: '<S464>/VDR'
     *  Logic: '<S464>/OR1'
     *  Logic: '<S473>/OR2'
     *  Logic: '<S473>/OR3'
     *  Logic: '<S473>/OR4'
     *  Logic: '<S473>/OR5'
     *  Logic: '<S473>/OR6'
     */
    M_CTRL_RST_12A = (((DI_PBR_TPR && (!M_AR_J12A) && DI_PBJ_12A) || (M_AR_J12A &&
      (R1210PBRST || R1220PBRST))) && NONVITALMAIN_DW.M_NVCOMM_OK &&
                      NONVITALMAIN_DW.M_VDR);

    /* DataStoreWrite: '<S465>/J22A-RST-CTRL' incorporates:
     *  DataStoreRead: '<S465>/COMM-OK'
     *  DataStoreRead: '<S465>/VDR'
     *  Logic: '<S465>/OR1'
     *  Logic: '<S474>/OR2'
     *  Logic: '<S474>/OR3'
     *  Logic: '<S474>/OR4'
     *  Logic: '<S474>/OR5'
     *  Logic: '<S474>/OR6'
     */
    M_CTRL_RST_22A = (((DI_PBR_TPR && (!M_AR_J22A) && DI_PBJ_22A) || (M_AR_J22A &&
      (R2210PBRST || R2220PBRST))) && NONVITALMAIN_DW.M_NVCOMM_OK &&
                      NONVITALMAIN_DW.M_VDR);

    /* DataStoreWrite: '<S466>/J12B-RST-CTRL' incorporates:
     *  DataStoreRead: '<S466>/COMM-OK'
     *  DataStoreRead: '<S466>/VDR'
     *  Logic: '<S466>/OR1'
     *  Logic: '<S475>/OR2'
     *  Logic: '<S475>/OR3'
     *  Logic: '<S475>/OR4'
     *  Logic: '<S475>/OR5'
     *  Logic: '<S475>/OR6'
     */
    M_CTRL_RST_12B = (((DI_PBR_TPR && (!M_AR_J12B) && DI_PBJ_12B) || (M_AR_J12B &&
      (R1214PBRST || R1224PBRST))) && NONVITALMAIN_DW.M_NVCOMM_OK &&
                      NONVITALMAIN_DW.M_VDR);

    /* DataStoreWrite: '<S467>/J22B-RST-CTRL' incorporates:
     *  DataStoreRead: '<S467>/COMM-OK'
     *  DataStoreRead: '<S467>/VDR'
     *  Logic: '<S467>/OR1'
     *  Logic: '<S476>/OR2'
     *  Logic: '<S476>/OR3'
     *  Logic: '<S476>/OR4'
     *  Logic: '<S476>/OR5'
     *  Logic: '<S476>/OR6'
     */
    M_CTRL_RST_22B = (((DI_PBR_TPR && (!M_AR_J22B) && DI_PBJ_22B) || (M_AR_J22B &&
      (R2214PBRST || R2224PBRST))) && NONVITALMAIN_DW.M_NVCOMM_OK &&
                      NONVITALMAIN_DW.M_VDR);

    /* DataStoreWrite: '<S468>/DEP-RST-CTRL' incorporates:
     *  DataStoreRead: '<S468>/COMM-OK'
     *  DataStoreRead: '<S468>/VDR'
     *  Logic: '<S468>/OR1'
     *  Logic: '<S477>/OR2'
     *  Logic: '<S477>/OR3'
     *  Logic: '<S477>/OR4'
     *  Logic: '<S477>/OR5'
     *  Logic: '<S477>/OR6'
     */
    M_CTRL_RST_DEP = (((DI_PBR_TPR && (!M_AR_DEP) && DI_GO_FROM_DEPOT) ||
                       (M_AR_DEP && (RDEP10PBRST || RDEP20PBRST))) &&
                      NONVITALMAIN_DW.M_NVCOMM_OK && NONVITALMAIN_DW.M_VDR);

    /* DataStoreRead: '<S390>/WZ-PB-DI' */
    rtb_WZPBDI = DI_PBCBTC_WZ;

    /* DataStoreRead: '<S390>/VSB15-PB-DI' */
    rtb_VSB15PBDI = VSB15_h;

    /* Outputs for Atomic SubSystem: '<S390>/VSB15' */
    M_VSB(rtb_WZPBDI, rtb_VSB15PBDI, &NONVITALMAIN_DW.VSB15);

    /* End of Outputs for SubSystem: '<S390>/VSB15' */

    /* DataStoreWrite: '<S390>/10A-BE-DO' */
    DO_INDT_BE_10A = NONVITALMAIN_DW.VSB15.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB16-PB-DI' */
    rtb_VSB16PBDI = VSB16_h;

    /* Outputs for Atomic SubSystem: '<S390>/VSB16' */
    M_VSB(rtb_WZPBDI, rtb_VSB16PBDI, &NONVITALMAIN_DW.VSB16);

    /* End of Outputs for SubSystem: '<S390>/VSB16' */

    /* DataStoreWrite: '<S390>/10B-BE-DO' */
    DO_INDT_BE_10B = NONVITALMAIN_DW.VSB16.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB17-PB-DI' */
    rtb_VSB17PBDI = VSB17_c;

    /* Outputs for Atomic SubSystem: '<S390>/VSB17' */
    M_VSB(rtb_WZPBDI, rtb_VSB17PBDI, &NONVITALMAIN_DW.VSB17);

    /* End of Outputs for SubSystem: '<S390>/VSB17' */

    /* DataStoreWrite: '<S390>/11A-BE-DO' */
    DO_INDT_BE_11A = NONVITALMAIN_DW.VSB17.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB18-PB-DI' */
    rtb_VSB18PBDI = VSB18_j;

    /* Outputs for Atomic SubSystem: '<S390>/VSB18' */
    M_VSB(rtb_WZPBDI, rtb_VSB18PBDI, &NONVITALMAIN_DW.VSB18);

    /* End of Outputs for SubSystem: '<S390>/VSB18' */

    /* DataStoreWrite: '<S390>/11B-BE-DO' */
    DO_INDT_BE_11B = NONVITALMAIN_DW.VSB18.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB19-PB-DI' */
    rtb_VSB19PBDI = VSB19_d;

    /* Outputs for Atomic SubSystem: '<S390>/VSB19' */
    M_VSB(rtb_WZPBDI, rtb_VSB19PBDI, &NONVITALMAIN_DW.VSB19);

    /* End of Outputs for SubSystem: '<S390>/VSB19' */

    /* DataStoreWrite: '<S390>/12A-BE-DO' */
    DO_INDT_BE_12A = NONVITALMAIN_DW.VSB19.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB20-PB-DI' */
    rtb_VSB20PBDI = VSB20_c;

    /* Outputs for Atomic SubSystem: '<S390>/VSB20' */
    M_VSB(rtb_WZPBDI, rtb_VSB20PBDI, &NONVITALMAIN_DW.VSB20);

    /* End of Outputs for SubSystem: '<S390>/VSB20' */

    /* DataStoreWrite: '<S390>/12B-BE-DO' */
    DO_INDT_BE_12B = NONVITALMAIN_DW.VSB20.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB21-PB-DI' */
    rtb_VSB21PBDI = VSB21_p;

    /* Outputs for Atomic SubSystem: '<S390>/VSB21' */
    M_VSB(rtb_WZPBDI, rtb_VSB21PBDI, &NONVITALMAIN_DW.VSB21);

    /* End of Outputs for SubSystem: '<S390>/VSB21' */

    /* DataStoreWrite: '<S390>/12C-BE-DO' */
    DO_INDT_BE_12C = NONVITALMAIN_DW.VSB21.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB22-PB-DI' */
    rtb_VSB22PBDI = VSB22_c;

    /* Outputs for Atomic SubSystem: '<S390>/VSB22' */
    M_VSB(rtb_WZPBDI, rtb_VSB22PBDI, &NONVITALMAIN_DW.VSB22);

    /* End of Outputs for SubSystem: '<S390>/VSB22' */

    /* DataStoreWrite: '<S390>/12D-BE-DO' */
    DO_INDT_BE_12D = NONVITALMAIN_DW.VSB22.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB23-PB-DI' */
    rtb_VSB23PBDI = VSB23_i;

    /* Outputs for Atomic SubSystem: '<S390>/VSB23' */
    M_VSB(rtb_WZPBDI, rtb_VSB23PBDI, &NONVITALMAIN_DW.VSB23);

    /* End of Outputs for SubSystem: '<S390>/VSB23' */

    /* DataStoreWrite: '<S390>/12E-BE-DO' */
    DO_INDT_BE_12E = NONVITALMAIN_DW.VSB23.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB24-PB-DI' */
    rtb_VSB24PBDI = VSB24_a;

    /* Outputs for Atomic SubSystem: '<S390>/VSB24' */
    M_VSB(rtb_WZPBDI, rtb_VSB24PBDI, &NONVITALMAIN_DW.VSB24);

    /* End of Outputs for SubSystem: '<S390>/VSB24' */

    /* DataStoreWrite: '<S390>/13A-BE-DO' */
    DO_INDT_BE_13A = NONVITALMAIN_DW.VSB24.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB25-PB-DI' */
    rtb_VSB25PBDI = VSB25_k;

    /* Outputs for Atomic SubSystem: '<S390>/VSB25' */
    M_VSB(rtb_WZPBDI, rtb_VSB25PBDI, &NONVITALMAIN_DW.VSB25);

    /* End of Outputs for SubSystem: '<S390>/VSB25' */

    /* DataStoreWrite: '<S390>/13B-BE-DO' */
    DO_INDT_BE_13B = NONVITALMAIN_DW.VSB25.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB26-PB-DI' */
    rtb_VSB26PBDI = VSB26_l;

    /* Outputs for Atomic SubSystem: '<S390>/VSB26' */
    M_VSB(rtb_WZPBDI, rtb_VSB26PBDI, &NONVITALMAIN_DW.VSB26);

    /* End of Outputs for SubSystem: '<S390>/VSB26' */

    /* DataStoreWrite: '<S390>/14A-BE-DO' */
    DO_INDT_BE_14A = NONVITALMAIN_DW.VSB26.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB27-PB-DI' */
    rtb_VSB27PBDI = VSB27_p;

    /* Outputs for Atomic SubSystem: '<S390>/VSB27' */
    M_VSB(rtb_WZPBDI, rtb_VSB27PBDI, &NONVITALMAIN_DW.VSB27);

    /* End of Outputs for SubSystem: '<S390>/VSB27' */

    /* DataStoreWrite: '<S390>/14B-BE-DO' */
    DO_INDT_BE_14B = NONVITALMAIN_DW.VSB27.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB1-PB-DI' */
    rtb_VSB1PBDI = VSB1_g;

    /* Outputs for Atomic SubSystem: '<S390>/VSB1' */
    M_VSB(rtb_WZPBDI, rtb_VSB1PBDI, &NONVITALMAIN_DW.VSB1);

    /* End of Outputs for SubSystem: '<S390>/VSB1' */

    /* DataStoreWrite: '<S390>/20A-BE-DO' */
    DO_INDT_BE_20A = NONVITALMAIN_DW.VSB1.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB2-PB-DI' */
    rtb_VSB2PBDI = VSB2_e;

    /* Outputs for Atomic SubSystem: '<S390>/VSB2' */
    M_VSB(rtb_WZPBDI, rtb_VSB2PBDI, &NONVITALMAIN_DW.VSB2);

    /* End of Outputs for SubSystem: '<S390>/VSB2' */

    /* DataStoreWrite: '<S390>/20B-BE-DO' */
    DO_INDT_BE_20B = NONVITALMAIN_DW.VSB2.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB3-PB-DI' */
    rtb_VSB3PBDI = VSB3_l;

    /* Outputs for Atomic SubSystem: '<S390>/VSB3' */
    M_VSB(rtb_WZPBDI, rtb_VSB3PBDI, &NONVITALMAIN_DW.VSB3);

    /* End of Outputs for SubSystem: '<S390>/VSB3' */

    /* DataStoreWrite: '<S390>/21A-BE-DO' */
    DO_INDT_BE_21A = NONVITALMAIN_DW.VSB3.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB4-PB-DI' */
    rtb_VSB4PBDI = VSB4_g;

    /* Outputs for Atomic SubSystem: '<S390>/VSB4' */
    M_VSB(rtb_WZPBDI, rtb_VSB4PBDI, &NONVITALMAIN_DW.VSB4);

    /* End of Outputs for SubSystem: '<S390>/VSB4' */

    /* DataStoreWrite: '<S390>/21B-BE-DO' */
    DO_INDT_BE_21B = NONVITALMAIN_DW.VSB4.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB5-PB-DI' */
    rtb_VSB5PBDI = VSB5_n;

    /* Outputs for Atomic SubSystem: '<S390>/VSB5' */
    M_VSB(rtb_WZPBDI, rtb_VSB5PBDI, &NONVITALMAIN_DW.VSB5);

    /* End of Outputs for SubSystem: '<S390>/VSB5' */

    /* DataStoreWrite: '<S390>/21C-BE-DO' */
    DO_INDT_BE_21C = NONVITALMAIN_DW.VSB5.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB6-PB-DI' */
    rtb_VSB6PBDI = VSB6_h;

    /* Outputs for Atomic SubSystem: '<S390>/VSB6' */
    M_VSB(rtb_WZPBDI, rtb_VSB6PBDI, &NONVITALMAIN_DW.VSB6);

    /* End of Outputs for SubSystem: '<S390>/VSB6' */

    /* DataStoreWrite: '<S390>/22A-BE-DO' */
    DO_INDT_BE_22A = NONVITALMAIN_DW.VSB6.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB7-PB-DI' */
    rtb_VSB7PBDI = VSB7_f;

    /* Outputs for Atomic SubSystem: '<S390>/VSB7' */
    M_VSB(rtb_WZPBDI, rtb_VSB7PBDI, &NONVITALMAIN_DW.VSB7);

    /* End of Outputs for SubSystem: '<S390>/VSB7' */

    /* DataStoreWrite: '<S390>/22B-BE-DO' */
    DO_INDT_BE_22B = NONVITALMAIN_DW.VSB7.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB8-PB-DI' */
    rtb_VSB8PBDI = VSB8_i;

    /* Outputs for Atomic SubSystem: '<S390>/VSB8' */
    M_VSB(rtb_WZPBDI, rtb_VSB8PBDI, &NONVITALMAIN_DW.VSB8);

    /* End of Outputs for SubSystem: '<S390>/VSB8' */

    /* DataStoreWrite: '<S390>/22C-BE-DO' */
    DO_INDT_BE_22C = NONVITALMAIN_DW.VSB8.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB9-PB-DI' */
    rtb_VSB9PBDI = VSB9_c;

    /* Outputs for Atomic SubSystem: '<S390>/VSB9' */
    M_VSB(rtb_WZPBDI, rtb_VSB9PBDI, &NONVITALMAIN_DW.VSB9);

    /* End of Outputs for SubSystem: '<S390>/VSB9' */

    /* DataStoreWrite: '<S390>/22D-BE-DO' */
    DO_INDT_BE_22D = NONVITALMAIN_DW.VSB9.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB10-PB-DI' */
    rtb_VSB10PBDI = VSB10_j;

    /* Outputs for Atomic SubSystem: '<S390>/VSB10' */
    M_VSB(rtb_WZPBDI, rtb_VSB10PBDI, &NONVITALMAIN_DW.VSB10);

    /* End of Outputs for SubSystem: '<S390>/VSB10' */

    /* DataStoreWrite: '<S390>/22E-BE-DO' */
    DO_INDT_BE_22E = NONVITALMAIN_DW.VSB10.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB11-PB-DI' */
    rtb_VSB11PBDI = VSB11_c;

    /* Outputs for Atomic SubSystem: '<S390>/VSB11' */
    M_VSB(rtb_WZPBDI, rtb_VSB11PBDI, &NONVITALMAIN_DW.VSB11);

    /* End of Outputs for SubSystem: '<S390>/VSB11' */

    /* DataStoreWrite: '<S390>/23A-BE-DO' */
    DO_INDT_BE_23A = NONVITALMAIN_DW.VSB11.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB12-PB-DI' */
    rtb_VSB12PBDI = VSB12_l;

    /* Outputs for Atomic SubSystem: '<S390>/VSB12' */
    M_VSB(rtb_WZPBDI, rtb_VSB12PBDI, &NONVITALMAIN_DW.VSB12);

    /* End of Outputs for SubSystem: '<S390>/VSB12' */

    /* DataStoreWrite: '<S390>/23B-BE-DO' */
    DO_INDT_BE_23B = NONVITALMAIN_DW.VSB12.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB13-PB-DI' */
    rtb_VSB13PBDI = VSB13_d;

    /* Outputs for Atomic SubSystem: '<S390>/VSB13' */
    M_VSB(rtb_WZPBDI, rtb_VSB13PBDI, &NONVITALMAIN_DW.VSB13);

    /* End of Outputs for SubSystem: '<S390>/VSB13' */

    /* DataStoreWrite: '<S390>/24A-BE-DO' */
    DO_INDT_BE_24A = NONVITALMAIN_DW.VSB13.LogicalOperator;

    /* DataStoreRead: '<S390>/VSB14-PB-DI' */
    rtb_VSB14PBDI = VSB14_o;

    /* Outputs for Atomic SubSystem: '<S390>/VSB14' */
    M_VSB(rtb_WZPBDI, rtb_VSB14PBDI, &NONVITALMAIN_DW.VSB14);

    /* End of Outputs for SubSystem: '<S390>/VSB14' */

    /* DataStoreWrite: '<S390>/24B-BE-DO' */
    DO_INDT_BE_24B = NONVITALMAIN_DW.VSB14.LogicalOperator;

    /* DataStoreWrite: '<S390>/VSB1-CTRL' */
    M_CTRL_VSB1 = NONVITALMAIN_DW.VSB1.AND1;

    /* DataStoreWrite: '<S390>/VSB10-CTRL' */
    M_CTRL_VSB10 = NONVITALMAIN_DW.VSB10.AND1;

    /* DataStoreWrite: '<S390>/VSB11-CTRL' */
    M_CTRL_VSB11 = NONVITALMAIN_DW.VSB11.AND1;

    /* DataStoreWrite: '<S390>/VSB12-CTRL' */
    M_CTRL_VSB12 = NONVITALMAIN_DW.VSB12.AND1;

    /* DataStoreWrite: '<S390>/VSB13-CTRL' */
    M_CTRL_VSB13 = NONVITALMAIN_DW.VSB13.AND1;

    /* DataStoreWrite: '<S390>/VSB14-CTRL' */
    M_CTRL_VSB14 = NONVITALMAIN_DW.VSB14.AND1;

    /* DataStoreWrite: '<S390>/VSB15-CTRL' */
    M_CTRL_VSB15 = NONVITALMAIN_DW.VSB15.AND1;

    /* DataStoreWrite: '<S390>/VSB16-CTRL' */
    M_CTRL_VSB16 = NONVITALMAIN_DW.VSB16.AND1;

    /* DataStoreWrite: '<S390>/VSB17-CTRL' */
    M_CTRL_VSB17 = NONVITALMAIN_DW.VSB17.AND1;

    /* DataStoreWrite: '<S390>/VSB18-CTRL' */
    M_CTRL_VSB18 = NONVITALMAIN_DW.VSB18.AND1;

    /* DataStoreWrite: '<S390>/VSB19-CTRL' */
    M_CTRL_VSB19 = NONVITALMAIN_DW.VSB19.AND1;

    /* DataStoreWrite: '<S390>/VSB2-CTRL' */
    M_CTRL_VSB2 = NONVITALMAIN_DW.VSB2.AND1;

    /* DataStoreWrite: '<S390>/VSB20-CTRL' */
    M_CTRL_VSB20 = NONVITALMAIN_DW.VSB20.AND1;

    /* DataStoreWrite: '<S390>/VSB21-CTRL' */
    M_CTRL_VSB21 = NONVITALMAIN_DW.VSB21.AND1;

    /* DataStoreWrite: '<S390>/VSB22-CTRL' */
    M_CTRL_VSB22 = NONVITALMAIN_DW.VSB22.AND1;

    /* DataStoreWrite: '<S390>/VSB23-CTRL' */
    M_CTRL_VSB23 = NONVITALMAIN_DW.VSB23.AND1;

    /* DataStoreWrite: '<S390>/VSB24-CTRL' */
    M_CTRL_VSB24 = NONVITALMAIN_DW.VSB24.AND1;

    /* DataStoreWrite: '<S390>/VSB25-CTRL' */
    M_CTRL_VSB25 = NONVITALMAIN_DW.VSB25.AND1;

    /* DataStoreWrite: '<S390>/VSB26-CTRL' */
    M_CTRL_VSB26 = NONVITALMAIN_DW.VSB26.AND1;

    /* DataStoreWrite: '<S390>/VSB27-CTRL' */
    M_CTRL_VSB27 = NONVITALMAIN_DW.VSB27.AND1;

    /* DataStoreWrite: '<S390>/VSB3-CTRL' */
    M_CTRL_VSB3 = NONVITALMAIN_DW.VSB3.AND1;

    /* DataStoreWrite: '<S390>/VSB4-CTRL' */
    M_CTRL_VSB4 = NONVITALMAIN_DW.VSB4.AND1;

    /* DataStoreWrite: '<S390>/VSB5-CTRL' */
    M_CTRL_VSB5 = NONVITALMAIN_DW.VSB5.AND1;

    /* DataStoreWrite: '<S390>/VSB6-CTRL' */
    M_CTRL_VSB6 = NONVITALMAIN_DW.VSB6.AND1;

    /* DataStoreWrite: '<S390>/VSB7-CTRL' */
    M_CTRL_VSB7 = NONVITALMAIN_DW.VSB7.AND1;

    /* DataStoreWrite: '<S390>/VSB8-CTRL' */
    M_CTRL_VSB8 = NONVITALMAIN_DW.VSB8.AND1;

    /* DataStoreWrite: '<S390>/VSB9-CTRL' */
    M_CTRL_VSB9 = NONVITALMAIN_DW.VSB9.AND1;

    /* DataStoreRead: '<S532>/AA-CTRL' */
    rtb_AACTRL = DI_PBG_THB;

    /* DataStoreRead: '<S532>/W11A//21A-TRAIL-CTRL' */
    rtb_W11A21ATRAILCTRL_n = M_W11A_21A_CTRL_TRAIL;

    /* DataStoreRead: '<S532>/W11A//21A-RST-CTRL' */
    rtb_W11A21ARSTCTRL_k = M_W11A_21A_CTRL_RST;

    /* DataStoreRead: '<S532>/W11A//21A-LS' */
    rtb_W11A21ALS_h = M_W11A_21A_LS;

    /* DataStoreRead: '<S532>/W11A//21A-BACK-TO-N' */
    rtb_W11A21ABACKTON = M_W11A_21A_BACK_TO_N;

    /* DataStoreRead: '<S532>/W11A//21A-BACK-TO-R' */
    rtb_W11A21ABACKTOR = M_W11A_21A_BACK_TO_R;

    /* DataStoreRead: '<S532>/W11A//21A-NWP' */
    rtb_W11A21ANWP_h = M_W11A_21A_NWP;

    /* DataStoreRead: '<S532>/W11A//21A-RWP' */
    rtb_W11A21ARWP_h = M_W11A_21A_RWP;

    /* DataStoreRead: '<S532>/W11A//21A-NWC' */
    rtb_W11A21ANWC_h = M_W11A_21A_NWC;

    /* DataStoreRead: '<S532>/W11A//21A-RWC' */
    rtb_W11A21ARWC_la = M_W11A_21A_RWC;

    /* DataStoreRead: '<S532>/W11A//21A-NW-TE' */
    rtb_W11A21ANWTE_m = M_W11A_21A_NW_TE;

    /* DataStoreRead: '<S532>/W11A//21A-RW-TE' */
    rtb_W11A21ARWTE_j = M_W11A_21A_RW_TE;

    /* DataStoreRead: '<S532>/W11A//21A-BLOCK' */
    rtb_W11A21ABLOCK_p = M_W11A_21A_BLOCK;

    /* DataStoreRead: '<S532>/W11A//21A-N-BLOCK' */
    rtb_W11A21ANBLOCK = M_W11A_21A_N_BLOCK;

    /* DataStoreRead: '<S532>/W11A//21A-R-BLOCK' */
    rtb_W11A21ARBLOCK = M_W11A_21A_R_BLOCK;
  }

  /* Outputs for Atomic SubSystem: '<S532>/POINT FAIL' */
  M_POINT_FAIL(NONVITALMAIN_M, rtb_AACTRL, rtb_W11A21ATRAILCTRL_n,
               rtb_W11A21ARSTCTRL_k, rtb_W11A21ALS_h, rtb_W11A21ABACKTON,
               rtb_W11A21ABACKTOR, rtb_W11A21ANWP_h, rtb_W11A21ARWP_h,
               rtb_W11A21ANWC_h, rtb_W11A21ARWC_la, rtb_W11A21ANWTE_m,
               rtb_W11A21ARWTE_j, rtb_W11A21ABLOCK_p, rtb_W11A21ANBLOCK,
               rtb_W11A21ARBLOCK, &NONVITALMAIN_DW.POINTFAIL);

  /* End of Outputs for SubSystem: '<S532>/POINT FAIL' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S532>/W11A//21A-F-ACK' */
    M_W11A_21A_F_ACK = NONVITALMAIN_DW.POINTFAIL.OR9;

    /* DataStoreWrite: '<S532>/W11A//21A-FAIL' */
    M_W11A_21A_FAIL = NONVITALMAIN_DW.POINTFAIL.OR8;

    /* DataStoreWrite: '<S532>/W11A//21A-OOC' */
    M_W11A_21A_OOC = NONVITALMAIN_DW.POINTFAIL.M7;

    /* DataStoreWrite: '<S532>/W11A//21A-OOC-RD' */
    M_W11A_21A_OOC_RD = NONVITALMAIN_DW.POINTFAIL.M8;

    /* DataStoreWrite: '<S532>/W11A//21A-TRAIL-CTRL-Z' */
    M_W11A_21A_CTRL_TRAIL_Z = NONVITALMAIN_DW.POINTFAIL.M6;

    /* DataStoreRead: '<S533>/AA-CTRL' */
    rtb_AACTRL_m = M_CTRL_AA;

    /* DataStoreRead: '<S533>/W11B//21B-TRAIL-CTRL' */
    rtb_W11B21BTRAILCTRL_k = M_W11B_21B_CTRL_TRAIL;

    /* DataStoreRead: '<S533>/W11B//21B-RST-CTRL' */
    rtb_W11B21BRSTCTRL_g = M_W11B_21B_CTRL_RST;

    /* DataStoreRead: '<S533>/W11B//21B-LS' */
    rtb_W11B21BLS_n = M_W11B_21B_LS;

    /* DataStoreRead: '<S533>/W11B//21B-BACK-TO-N' */
    rtb_W11B21BBACKTON = M_W11B_21B_BACK_TO_N;

    /* DataStoreRead: '<S533>/W11B//21B-BACK-TO-R' */
    rtb_W11B21BBACKTOR = M_W11B_21B_BACK_TO_R;

    /* DataStoreRead: '<S533>/W11B//21B-NWP' */
    rtb_W11B21BNWP_a = M_W11B_21B_NWP;

    /* DataStoreRead: '<S533>/W11B//21B-RWP' */
    rtb_W11B21BRWP_h = M_W11B_21B_RWP;

    /* DataStoreRead: '<S533>/W11B//21B-NWC' */
    rtb_W11B21BNWC_l = M_W11B_21B_NWC;

    /* DataStoreRead: '<S533>/W11B//21B-RWC' */
    rtb_W11B21BRWC_e = M_W11B_21B_RWC;

    /* DataStoreRead: '<S533>/W11B//21B-NW-TE' */
    rtb_W11B21BNWTE_k = M_W11B_21B_NW_TE;

    /* DataStoreRead: '<S533>/W11B//21B-RW-TE' */
    rtb_W11B21BRWTE_a = M_W11B_21B_RW_TE;

    /* DataStoreRead: '<S533>/W11B//21B-BLOCK' */
    rtb_W11B21BBLOCK_a = M_W11B_21B_BLOCK;

    /* DataStoreRead: '<S533>/W11B//21B-N-BLOCK' */
    rtb_W11B21BNBLOCK = M_W11B_21B_N_BLOCK;

    /* DataStoreRead: '<S533>/W11B//21B-R-BLOCK' */
    rtb_W11B21BRBLOCK = M_W11B_21B_R_BLOCK;
  }

  /* Outputs for Atomic SubSystem: '<S533>/POINT FAIL' */
  M_POINT_FAIL(NONVITALMAIN_M, rtb_AACTRL_m, rtb_W11B21BTRAILCTRL_k,
               rtb_W11B21BRSTCTRL_g, rtb_W11B21BLS_n, rtb_W11B21BBACKTON,
               rtb_W11B21BBACKTOR, rtb_W11B21BNWP_a, rtb_W11B21BRWP_h,
               rtb_W11B21BNWC_l, rtb_W11B21BRWC_e, rtb_W11B21BNWTE_k,
               rtb_W11B21BRWTE_a, rtb_W11B21BBLOCK_a, rtb_W11B21BNBLOCK,
               rtb_W11B21BRBLOCK, &NONVITALMAIN_DW.POINTFAIL_n);

  /* End of Outputs for SubSystem: '<S533>/POINT FAIL' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S533>/W11B//21B-F-ACK' */
    M_W11B_21B_F_ACK = NONVITALMAIN_DW.POINTFAIL_n.OR9;

    /* DataStoreWrite: '<S533>/W11B//21B-FAIL' */
    M_W11B_21B_FAIL = NONVITALMAIN_DW.POINTFAIL_n.OR8;

    /* DataStoreWrite: '<S533>/W11B//21B-OOC' */
    M_W11B_21B_OOC = NONVITALMAIN_DW.POINTFAIL_n.M7;

    /* DataStoreWrite: '<S533>/W11B//21B-OOC-RD' */
    M_W11B_21B_OOC_RD = NONVITALMAIN_DW.POINTFAIL_n.M8;

    /* DataStoreWrite: '<S533>/W11B//21B-TRAIL-CTRL-Z' */
    M_W11B_21B_CTRL_TRAIL_Z = NONVITALMAIN_DW.POINTFAIL_n.M6;

    /* DataStoreRead: '<S534>/AA-CTRL' */
    rtb_AACTRL_b = M_CTRL_AA;

    /* DataStoreRead: '<S534>/W13A//23A-TRAIL-CTRL' */
    rtb_W13A23ATRAILCTRL_k = M_W13A_23A_CTRL_TRAIL;

    /* DataStoreRead: '<S534>/W13A//23A-RST-CTRL' */
    rtb_W13A23ARSTCTRL_f = M_W13A_23A_CTRL_RST;

    /* DataStoreRead: '<S534>/W13A//23A-LS' */
    rtb_W13A23ALS_j = M_W13A_23A_LS;

    /* DataStoreRead: '<S534>/W13A//23A-BACK-TO-N' */
    rtb_W13A23ABACKTON = M_W13A_23A_BACK_TO_N;

    /* DataStoreRead: '<S534>/W13A//23A-BACK-TO-R' */
    rtb_W13A23ABACKTOR = M_W13A_23A_BACK_TO_R;

    /* DataStoreRead: '<S534>/W13A//23A-NWP' */
    rtb_W13A23ANWP_a = M_W13A_23A_NWP;

    /* DataStoreRead: '<S534>/W13A//23A-RWP' */
    rtb_W13A23ARWP_k = M_W13A_23A_RWP;

    /* DataStoreRead: '<S534>/W13A//23A-NWC' */
    rtb_W13A23ANWC_b = M_W13A_23A_NWC;

    /* DataStoreRead: '<S534>/W13A//23A-RWC' */
    rtb_W13A23ARWC_h = M_W13A_23A_RWC;

    /* DataStoreRead: '<S534>/W13A//23A-NW-TE' */
    rtb_W13A23ANWTE_d = M_W13A_23A_NW_TE;

    /* DataStoreRead: '<S534>/W13A//23A-RW-TE' */
    rtb_W13A23ARWTE_l = M_W13A_23A_RW_TE;

    /* DataStoreRead: '<S534>/W13A//23A-BLOCK' */
    rtb_W13A23ABLOCK_h = M_W13A_23A_BLOCK;

    /* DataStoreRead: '<S534>/W13A//23A-N-BLOCK' */
    rtb_W13A23ANBLOCK = M_W13A_23A_N_BLOCK;

    /* DataStoreRead: '<S534>/W13A//23A-R-BLOCK' */
    rtb_W13A23ARBLOCK = M_W13A_23A_R_BLOCK;
  }

  /* Outputs for Atomic SubSystem: '<S534>/POINT FAIL' */
  M_POINT_FAIL(NONVITALMAIN_M, rtb_AACTRL_b, rtb_W13A23ATRAILCTRL_k,
               rtb_W13A23ARSTCTRL_f, rtb_W13A23ALS_j, rtb_W13A23ABACKTON,
               rtb_W13A23ABACKTOR, rtb_W13A23ANWP_a, rtb_W13A23ARWP_k,
               rtb_W13A23ANWC_b, rtb_W13A23ARWC_h, rtb_W13A23ANWTE_d,
               rtb_W13A23ARWTE_l, rtb_W13A23ABLOCK_h, rtb_W13A23ANBLOCK,
               rtb_W13A23ARBLOCK, &NONVITALMAIN_DW.POINTFAIL_a);

  /* End of Outputs for SubSystem: '<S534>/POINT FAIL' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S534>/W13A//23A-F-ACK' */
    M_W13A_23A_F_ACK = NONVITALMAIN_DW.POINTFAIL_a.OR9;

    /* DataStoreWrite: '<S534>/W13A//23A-FAIL' */
    M_W13A_23A_FAIL = NONVITALMAIN_DW.POINTFAIL_a.OR8;

    /* DataStoreWrite: '<S534>/W13A//23A-OOC' */
    M_W13A_23A_OOC = NONVITALMAIN_DW.POINTFAIL_a.M7;

    /* DataStoreWrite: '<S534>/W13A//23A-OOC-RD' */
    M_W13A_23A_OOC_RD = NONVITALMAIN_DW.POINTFAIL_a.M8;

    /* DataStoreWrite: '<S534>/W13A//23A-TRAIL-CTRL-Z' */
    M_W13A_23A_CTRL_TRAIL_Z = NONVITALMAIN_DW.POINTFAIL_a.M6;

    /* DataStoreRead: '<S535>/AA-CTRL' */
    rtb_AACTRL_l = M_CTRL_AA;

    /* DataStoreRead: '<S535>/W13B//23B-TRAIL-CTRL' */
    rtb_W13B23BTRAILCTRL_e = M_W13B_23B_CTRL_TRAIL;

    /* DataStoreRead: '<S535>/W13B//23B-RST-CTRL' */
    rtb_W13B23BRSTCTRL_a = M_W13B_23B_CTRL_RST;

    /* DataStoreRead: '<S535>/W13B//23B-LS' */
    rtb_W13B23BLS_b = M_W13B_23B_LS;

    /* DataStoreRead: '<S535>/W13B//23B-BACK-TO-N' */
    rtb_W13B23BBACKTON = M_W13B_23B_BACK_TO_N;

    /* DataStoreRead: '<S535>/W13B//23B-BACK-TO-R' */
    rtb_W13B23BBACKTOR = M_W13B_23B_BACK_TO_R;

    /* DataStoreRead: '<S535>/W13B//23B-NWP' */
    rtb_W13B23BNWP_k = M_W13B_23B_NWP;

    /* DataStoreRead: '<S535>/W13B//23B-RWP' */
    rtb_W13B23BRWP_h = M_W13B_23B_RWP;

    /* DataStoreRead: '<S535>/W13B//23B-NWC' */
    rtb_W13B23BNWC_i = M_W13B_23B_NWC;

    /* DataStoreRead: '<S535>/W13B//23B-RWC' */
    rtb_W13B23BRWC_l = M_W13B_23B_RWC;

    /* DataStoreRead: '<S535>/W13B//23B-NW-TE' */
    rtb_W13B23BNWTE_b = M_W13B_23B_NW_TE;

    /* DataStoreRead: '<S535>/W13B//23B-RW-TE' */
    rtb_W13B23BRWTE_p = M_W13B_23B_RW_TE;

    /* DataStoreRead: '<S535>/W13B//23B-BLOCK' */
    rtb_W13B23BBLOCK_f = M_W13B_23B_BLOCK;

    /* DataStoreRead: '<S535>/W13B//23B-N-BLOCK' */
    rtb_W13B23BNBLOCK = M_W13B_23B_N_BLOCK;

    /* DataStoreRead: '<S535>/W13B//23B-R-BLOCK' */
    rtb_W13B23BRBLOCK = M_W13B_23B_R_BLOCK;
  }

  /* Outputs for Atomic SubSystem: '<S535>/POINT FAIL' */
  M_POINT_FAIL(NONVITALMAIN_M, rtb_AACTRL_l, rtb_W13B23BTRAILCTRL_e,
               rtb_W13B23BRSTCTRL_a, rtb_W13B23BLS_b, rtb_W13B23BBACKTON,
               rtb_W13B23BBACKTOR, rtb_W13B23BNWP_k, rtb_W13B23BRWP_h,
               rtb_W13B23BNWC_i, rtb_W13B23BRWC_l, rtb_W13B23BNWTE_b,
               rtb_W13B23BRWTE_p, rtb_W13B23BBLOCK_f, rtb_W13B23BNBLOCK,
               rtb_W13B23BRBLOCK, &NONVITALMAIN_DW.POINTFAIL_m);

  /* End of Outputs for SubSystem: '<S535>/POINT FAIL' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S535>/W13B//23B-F-ACK' */
    M_W13B_23B_F_ACK = NONVITALMAIN_DW.POINTFAIL_m.OR9;

    /* DataStoreWrite: '<S535>/W13B//23B-FAIL' */
    M_W13B_23B_FAIL = NONVITALMAIN_DW.POINTFAIL_m.OR8;

    /* DataStoreWrite: '<S535>/W13B//23B-OOC' */
    M_W13B_23B_OOC = NONVITALMAIN_DW.POINTFAIL_m.M7;

    /* DataStoreWrite: '<S535>/W13B//23B-OOC-RD' */
    M_W13B_23B_OOC_RD = NONVITALMAIN_DW.POINTFAIL_m.M8;

    /* DataStoreWrite: '<S535>/W13B//23B-TRAIL-CTRL-Z' */
    M_W13B_23B_CTRL_TRAIL_Z = NONVITALMAIN_DW.POINTFAIL_m.M6;

    /* DataStoreRead: '<S536>/AA-CTRL' */
    rtb_AACTRL_p = M_CTRL_AA;

    /* DataStoreRead: '<S536>/W21C-TRAIL-CTRL' */
    rtb_W21CTRAILCTRL_e = M_W21C_CTRL_TRAIL;

    /* DataStoreRead: '<S536>/W21C-RST-CTRL' */
    rtb_W21CRSTCTRL_g = M_W21C_CTRL_RST;

    /* DataStoreRead: '<S536>/W21C-LS' */
    rtb_W21CLS_i = M_W21C_LS;

    /* DataStoreRead: '<S536>/W21C-BACK-TO-N' */
    rtb_W21CBACKTON = M_W21C_BACK_TO_N;

    /* DataStoreRead: '<S536>/W21C-BACK-TO-R' */
    rtb_W21CBACKTOR = M_W21C_BACK_TO_R;

    /* DataStoreRead: '<S536>/W21C-NWP' */
    rtb_W21CNWP_e = M_W21C_NWP;

    /* DataStoreRead: '<S536>/W21C-RWP' */
    rtb_W21CRWP_c = M_W21C_RWP;

    /* DataStoreRead: '<S536>/W21C-NWC' */
    rtb_W21CNWC_d = M_W21C_NWC;

    /* DataStoreRead: '<S536>/W21C-RWC' */
    rtb_W21CRWC_m = M_W21C_RWC;

    /* DataStoreRead: '<S536>/W//21C-NW-TE' */
    rtb_W21CNWTE_e = M_W21C_NW_TE;

    /* DataStoreRead: '<S536>/W21C-RW-TE' */
    rtb_W21CRWTE_f = M_W21C_RW_TE;

    /* DataStoreRead: '<S536>/W21C-BLOCK' */
    rtb_W21CBLOCK_j = M_W21C_BLOCK;

    /* DataStoreRead: '<S536>/W21C-N-BLOCK' */
    rtb_W21CNBLOCK = M_W21C_N_BLOCK;

    /* DataStoreRead: '<S536>/W21C-R-BLOCK' */
    rtb_W21CRBLOCK = M_W21C_R_BLOCK;
  }

  /* Outputs for Atomic SubSystem: '<S536>/POINT FAIL' */
  M_POINT_FAIL(NONVITALMAIN_M, rtb_AACTRL_p, rtb_W21CTRAILCTRL_e,
               rtb_W21CRSTCTRL_g, rtb_W21CLS_i, rtb_W21CBACKTON, rtb_W21CBACKTOR,
               rtb_W21CNWP_e, rtb_W21CRWP_c, rtb_W21CNWC_d, rtb_W21CRWC_m,
               rtb_W21CNWTE_e, rtb_W21CRWTE_f, rtb_W21CBLOCK_j, rtb_W21CNBLOCK,
               rtb_W21CRBLOCK, &NONVITALMAIN_DW.POINTFAIL_p);

  /* End of Outputs for SubSystem: '<S536>/POINT FAIL' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S536>/W21C-F-ACK' */
    M_W21C_F_ACK = NONVITALMAIN_DW.POINTFAIL_p.OR9;

    /* DataStoreWrite: '<S536>/W21C-FAIL' */
    M_W21C_FAIL = NONVITALMAIN_DW.POINTFAIL_p.OR8;

    /* DataStoreWrite: '<S536>/W21C-OOC' */
    M_W21C_OOC = NONVITALMAIN_DW.POINTFAIL_p.M7;

    /* DataStoreWrite: '<S536>/W21C-OOC-RD' */
    M_W21C_OOC_RD = NONVITALMAIN_DW.POINTFAIL_p.M8;

    /* DataStoreWrite: '<S536>/W21C-TRAIL-CTRL-Z' */
    NONVITALMAIN_DW.M_W21C_CTRL_TRAIL_Z = NONVITALMAIN_DW.POINTFAIL_p.M6;

    /* Logic: '<S567>/AND1' incorporates:
     *  DataStoreWrite: '<S536>/W21C-TRAIL-CTRL-Z'
     */
    NONVITALMAIN_DW.AND1 = (M_W11A_21A_CTRL_TRAIL_Z || M_W11B_21B_CTRL_TRAIL_Z ||
      NONVITALMAIN_DW.POINTFAIL_p.M6 || M_W13A_23A_CTRL_TRAIL_Z ||
      M_W13B_23B_CTRL_TRAIL_Z);
  }

  /* Outputs for Atomic SubSystem: '<S567>/MNV_TOF' */
  MNV_TOF(NONVITALMAIN_M, NONVITALMAIN_DW.AND1, &NONVITALMAIN_DW.MNV_TOF_e, 1.0);

  /* End of Outputs for SubSystem: '<S567>/MNV_TOF' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S567>/TWT-CT-DO' incorporates:
     *  SignalConversion: '<S567>/TmpSignal ConversionAtMNV_TOFOutport1'
     */
    DO_CT_TWT = NONVITALMAIN_DW.MNV_TOF_e.LogicalOperator4;

    /* Logic: '<S568>/AND1' */
    AND1_j = (M_W11A_21A_SWRLS || M_W11B_21B_SWRLS || M_W21C_SWRLS ||
              M_W13A_23A_SWRLS || M_W13B_23B_SWRLS);

    /* RelationalOperator: '<S576>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S576>/Delay Input1'
     *
     * Block description for '<S576>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.FixPtRelationalOperator = ((int32_T)AND1_j > (int32_T)
      NONVITALMAIN_DW.DelayInput1_DSTATE);
  }

  /* Outputs for Atomic SubSystem: '<S568>/MNV_TOF' */
  MNV_TOF(NONVITALMAIN_M, NONVITALMAIN_DW.FixPtRelationalOperator,
          &NONVITALMAIN_DW.MNV_TOF_h, 1.0);

  /* End of Outputs for SubSystem: '<S568>/MNV_TOF' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S568>/TBW-CT-DO' incorporates:
     *  SignalConversion: '<S568>/TmpSignal ConversionAtMNV_TOFOutport1'
     */
    DO_CT_TBW = NONVITALMAIN_DW.MNV_TOF_h.LogicalOperator4;

    /* DataStoreRead: '<S569>/VSB15' */
    NONVITALMAIN_DW.VSB15_g = DO_INDT_BE_10A;

    /* DataStoreRead: '<S569>/VSB21' */
    NONVITALMAIN_DW.VSB21_d = DO_INDT_BE_10B;

    /* DataStoreRead: '<S569>/VSB22' */
    NONVITALMAIN_DW.VSB22_p = DO_INDT_BE_11A;

    /* DataStoreRead: '<S569>/VSB23' */
    NONVITALMAIN_DW.VSB23_k = DO_INDT_BE_11B;

    /* DataStoreRead: '<S569>/VSB1' */
    NONVITALMAIN_DW.VSB1_j = DO_INDT_BE_20A;

    /* DataStoreRead: '<S569>/VSB2' */
    NONVITALMAIN_DW.VSB2_e = DO_INDT_BE_20B;

    /* DataStoreRead: '<S569>/VSB3' */
    NONVITALMAIN_DW.VSB3_p = DO_INDT_BE_21A;

    /* DataStoreRead: '<S569>/VSB4' */
    NONVITALMAIN_DW.VSB4_d = DO_INDT_BE_21B;

    /* DataStoreRead: '<S569>/VSB5' */
    NONVITALMAIN_DW.VSB5_k = DO_INDT_BE_21C;

    /* DataStoreRead: '<S569>/VSB6' */
    NONVITALMAIN_DW.VSB6_p = DO_INDT_BE_22A;

    /* DataStoreRead: '<S569>/VSB7' */
    NONVITALMAIN_DW.VSB7_g = DO_INDT_BE_22B;

    /* DataStoreRead: '<S569>/VSB8' */
    NONVITALMAIN_DW.VSB8_i = DO_INDT_BE_22C;

    /* DataStoreRead: '<S569>/VSB9' */
    NONVITALMAIN_DW.VSB9_n = DO_INDT_BE_22D;

    /* DataStoreRead: '<S569>/VSB10' */
    NONVITALMAIN_DW.VSB10_l = DO_INDT_BE_22E;

    /* DataStoreRead: '<S569>/VSB11' */
    NONVITALMAIN_DW.VSB11_b = DO_INDT_BE_23A;

    /* DataStoreRead: '<S569>/VSB12' */
    NONVITALMAIN_DW.VSB12_p = DO_INDT_BE_23B;

    /* DataStoreRead: '<S569>/VSB13' */
    NONVITALMAIN_DW.VSB13_c = DO_INDT_BE_24A;

    /* DataStoreRead: '<S569>/VSB14' */
    NONVITALMAIN_DW.VSB14_l = DO_INDT_BE_24B;

    /* DataStoreRead: '<S569>/VSB25' */
    NONVITALMAIN_DW.VSB25_n = DO_INDT_BE_12A;

    /* DataStoreRead: '<S569>/VSB26' */
    NONVITALMAIN_DW.VSB26_c = DO_INDT_BE_12B;

    /* DataStoreRead: '<S569>/VSB27' */
    NONVITALMAIN_DW.VSB27_o = DO_INDT_BE_12C;

    /* DataStoreRead: '<S569>/VSB28' */
    NONVITALMAIN_DW.VSB28 = DO_INDT_BE_12D;

    /* DataStoreRead: '<S569>/VSB16' */
    NONVITALMAIN_DW.VSB16_h = DO_INDT_BE_12E;

    /* DataStoreRead: '<S569>/VSB17' */
    NONVITALMAIN_DW.VSB17_i = DO_INDT_BE_13A;

    /* DataStoreRead: '<S569>/VSB18' */
    NONVITALMAIN_DW.VSB18_i = DO_INDT_BE_13B;

    /* DataStoreRead: '<S569>/VSB19' */
    NONVITALMAIN_DW.VSB19_f = DO_INDT_BE_14A;

    /* DataStoreRead: '<S569>/VSB20' */
    NONVITALMAIN_DW.VSB20_c = DO_INDT_BE_14B;

    /* Logic: '<S569>/AND1' incorporates:
     *  Logic: '<S569>/AND14'
     *  RelationalOperator: '<S582>/FixPt Relational Operator'
     *  RelationalOperator: '<S583>/FixPt Relational Operator'
     *  RelationalOperator: '<S584>/FixPt Relational Operator'
     *  RelationalOperator: '<S585>/FixPt Relational Operator'
     *  RelationalOperator: '<S586>/FixPt Relational Operator'
     *  RelationalOperator: '<S587>/FixPt Relational Operator'
     *  RelationalOperator: '<S588>/FixPt Relational Operator'
     *  RelationalOperator: '<S589>/FixPt Relational Operator'
     *  RelationalOperator: '<S590>/FixPt Relational Operator'
     *  RelationalOperator: '<S591>/FixPt Relational Operator'
     *  RelationalOperator: '<S592>/FixPt Relational Operator'
     *  RelationalOperator: '<S593>/FixPt Relational Operator'
     *  RelationalOperator: '<S594>/FixPt Relational Operator'
     *  RelationalOperator: '<S595>/FixPt Relational Operator'
     *  RelationalOperator: '<S596>/FixPt Relational Operator'
     *  RelationalOperator: '<S597>/FixPt Relational Operator'
     *  RelationalOperator: '<S598>/FixPt Relational Operator'
     *  RelationalOperator: '<S599>/FixPt Relational Operator'
     *  RelationalOperator: '<S600>/FixPt Relational Operator'
     *  RelationalOperator: '<S601>/FixPt Relational Operator'
     *  RelationalOperator: '<S602>/FixPt Relational Operator'
     *  RelationalOperator: '<S603>/FixPt Relational Operator'
     *  RelationalOperator: '<S604>/FixPt Relational Operator'
     *  RelationalOperator: '<S605>/FixPt Relational Operator'
     *  RelationalOperator: '<S606>/FixPt Relational Operator'
     *  RelationalOperator: '<S607>/FixPt Relational Operator'
     *  RelationalOperator: '<S608>/FixPt Relational Operator'
     *  UnitDelay: '<S582>/Delay Input1'
     *  UnitDelay: '<S583>/Delay Input1'
     *  UnitDelay: '<S584>/Delay Input1'
     *  UnitDelay: '<S585>/Delay Input1'
     *  UnitDelay: '<S586>/Delay Input1'
     *  UnitDelay: '<S587>/Delay Input1'
     *  UnitDelay: '<S588>/Delay Input1'
     *  UnitDelay: '<S589>/Delay Input1'
     *  UnitDelay: '<S590>/Delay Input1'
     *  UnitDelay: '<S591>/Delay Input1'
     *  UnitDelay: '<S592>/Delay Input1'
     *  UnitDelay: '<S593>/Delay Input1'
     *  UnitDelay: '<S594>/Delay Input1'
     *  UnitDelay: '<S595>/Delay Input1'
     *  UnitDelay: '<S596>/Delay Input1'
     *  UnitDelay: '<S597>/Delay Input1'
     *  UnitDelay: '<S598>/Delay Input1'
     *  UnitDelay: '<S599>/Delay Input1'
     *  UnitDelay: '<S600>/Delay Input1'
     *  UnitDelay: '<S601>/Delay Input1'
     *  UnitDelay: '<S602>/Delay Input1'
     *  UnitDelay: '<S603>/Delay Input1'
     *  UnitDelay: '<S604>/Delay Input1'
     *  UnitDelay: '<S605>/Delay Input1'
     *  UnitDelay: '<S606>/Delay Input1'
     *  UnitDelay: '<S607>/Delay Input1'
     *  UnitDelay: '<S608>/Delay Input1'
     *
     * Block description for '<S582>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S583>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S584>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S585>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S586>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S587>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S588>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S589>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S590>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S591>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S592>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S593>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S594>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S595>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S596>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S597>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S598>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S599>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S600>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S601>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S602>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S603>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S604>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S605>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S606>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S607>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S608>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.AND1_k = ((DO_INDT_BE_10A !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_n) || (DO_INDT_BE_10B !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_h) || (DO_INDT_BE_11A !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_k) || (DO_INDT_BE_11B !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_a) || ((DO_INDT_BE_20A !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_m) || (DO_INDT_BE_20B !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_c) || (DO_INDT_BE_21A !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_e) || (DO_INDT_BE_21B !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_f) || (DO_INDT_BE_21C !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_j) || (DO_INDT_BE_22A !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_p) || (DO_INDT_BE_22B !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_ej) || (DO_INDT_BE_22C !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_fa) || (DO_INDT_BE_22D !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_o) || (DO_INDT_BE_22E !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_m5) || (DO_INDT_BE_23A !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_l) || (DO_INDT_BE_23B !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_kj) || (DO_INDT_BE_24A !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_cd) || (DO_INDT_BE_24B !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_a1)) || (DO_INDT_BE_12A !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_d) || (DO_INDT_BE_12B !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_n5) || (DO_INDT_BE_12C !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_lv) || (DO_INDT_BE_12D !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_jk) || (DO_INDT_BE_12E !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_i) || (DO_INDT_BE_13A !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_io) || (DO_INDT_BE_13B !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_hs) || (DO_INDT_BE_14A !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_b) || (DO_INDT_BE_14B !=
      NONVITALMAIN_DW.DelayInput1_DSTATE_lc));
  }

  /* Outputs for Atomic SubSystem: '<S569>/MNV_TOF' */
  MNV_TOF(NONVITALMAIN_M, NONVITALMAIN_DW.AND1_k, &NONVITALMAIN_DW.MNV_TOF_m,
          1.0);

  /* End of Outputs for SubSystem: '<S569>/MNV_TOF' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S569>/WZ-CT-DO' incorporates:
     *  SignalConversion: '<S569>/TmpSignal ConversionAtMNV_TOFOutport1'
     */
    DO_CT_WZ = NONVITALMAIN_DW.MNV_TOF_m.LogicalOperator4;

    /* Logic: '<S570>/AND14' incorporates:
     *  Logic: '<S570>/AND10'
     *  Logic: '<S570>/AND11'
     *  Logic: '<S570>/AND12'
     *  Logic: '<S570>/AND13'
     *  Logic: '<S570>/AND2'
     *  Logic: '<S570>/AND3'
     *  Logic: '<S570>/AND4'
     *  Logic: '<S570>/AND5'
     *  Logic: '<S570>/AND6'
     *  Logic: '<S570>/AND7'
     *  Logic: '<S570>/AND8'
     *  Logic: '<S570>/AND9'
     */
    AND14 = ((M_CTRL_RST_10 && (M_DO_JL10_DR || M_DO_JL10_GR)) || (M_CTRL_RST_20
              && (M_DO_JL20_DR || M_DO_JL20_GR)) || (M_CTRL_RST_12A &&
              M_DO_J12A_DR) || (M_CTRL_RST_12B && M_DO_J12B_DR) ||
             (M_CTRL_RST_22A && M_DO_J22A_DR) || (M_CTRL_RST_22B && M_DO_J22B_DR)
             || (M_CTRL_RST_14 && M_DO_J14_DR) || (M_CTRL_RST_24 && M_DO_J24_DR)
             || (M_CTRL_RST_DEP && M_DO_DEP_GR) || M_RRLS_X10 || M_RRLS_X20 ||
             M_RRLS_J12A || M_RRLS_J12B || M_RRLS_J22A || M_RRLS_J22B ||
             M_RRLS_X14 || M_RRLS_X24 || M_RRLS_DEP);

    /* RelationalOperator: '<S614>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S614>/Delay Input1'
     *
     * Block description for '<S614>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.FixPtRelationalOperator_e = ((int32_T)AND14 > (int32_T)
      NONVITALMAIN_DW.DelayInput1_DSTATE_kg);
  }

  /* Outputs for Atomic SubSystem: '<S570>/MNV_TOF' */
  MNV_TOF(NONVITALMAIN_M, NONVITALMAIN_DW.FixPtRelationalOperator_e,
          &NONVITALMAIN_DW.MNV_TOF_n, 1.0);

  /* End of Outputs for SubSystem: '<S570>/MNV_TOF' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S570>/TPR-CT-DO' incorporates:
     *  SignalConversion: '<S570>/TmpSignal ConversionAtMNV_TOFOutport1'
     */
    DO_CT_TPR = NONVITALMAIN_DW.MNV_TOF_n.LogicalOperator4;

    /* DataStoreRead: '<S620>/DEP-AR-OK' */
    rtb_DEPAROK_o = M_AR_DEP;

    /* DataStoreRead: '<S620>/DEP-X10-CTRL' */
    rtb_DEPX10CTRL = M_PBCTRL_DEP_10;

    /* DataStoreRead: '<S620>/DEP-X10-ARS' */
    rtb_DEPX10ARS = RDEP10PBCTRL;

    /* DataStoreRead: '<S620>/DEP-RST-CTRL' */
    rtb_DEPRSTCTRL_a = M_CTRL_RST_DEP;

    /* DataStoreRead: '<S620>/DEP-X10-B' */
    rtb_DEPX10B = M_B_DEP_10;

    /* DataStoreRead: '<S620>/21C-TP' */
    rtb_u1CTP_g = M_TP_21C;

    /* DataStoreRead: '<S620>/21C-TPBP' */
    rtb_u1CTPBP = M_TPBP_21C;

    /* DataStoreRead: '<S620>/DEP-S-B' */
    rtb_DEPSB = M_B_DEP;

    /* Outputs for Atomic SubSystem: '<S620>/ROUTE REQUEST' */
    M_REQ(rtb_DEPAROK_o, rtb_DEPX10CTRL, rtb_DEPX10ARS, rtb_DEPRSTCTRL_a,
          rtb_DEPX10B, rtb_u1CTP_g, rtb_u1CTPBP, rtb_DEPSB,
          &NONVITALMAIN_DW.ROUTEREQUEST);

    /* End of Outputs for SubSystem: '<S620>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S620>/DEP-X10-RS' */
    M_RS_DEP_10 = NONVITALMAIN_DW.ROUTEREQUEST.Memory1;

    /* DataStoreWrite: '<S620>/DEP-X10-S-REQ' */
    M_REQ_S_DEP_10 = NONVITALMAIN_DW.ROUTEREQUEST.OR5;

    /* DataStoreRead: '<S621>/DEP-AR-OK' */
    rtb_DEPAROK_h = M_AR_DEP;

    /* DataStoreRead: '<S621>/DEP-X20-CTRL' */
    rtb_DEPX20CTRL = M_PBCTRL_DEP_20;

    /* DataStoreRead: '<S621>/DEP-X20-ARS' */
    rtb_DEPX20ARS = RDEP20PBCTRL;

    /* DataStoreRead: '<S621>/DEP-RST-CTRL' */
    rtb_DEPRSTCTRL_b = M_CTRL_RST_DEP;

    /* DataStoreRead: '<S621>/DEP-X20-B' */
    rtb_DEPX20B = M_B_DEP_20;

    /* DataStoreRead: '<S621>/21C-TP' */
    rtb_u1CTP_jk = M_TP_21C;

    /* DataStoreRead: '<S621>/21C-TPBP' */
    rtb_u1CTPBP_d = M_TPBP_21C;

    /* DataStoreRead: '<S621>/DEP-S-B' */
    rtb_DEPSB_c = M_B_DEP;

    /* Outputs for Atomic SubSystem: '<S621>/ROUTE REQUEST' */
    M_REQ(rtb_DEPAROK_h, rtb_DEPX20CTRL, rtb_DEPX20ARS, rtb_DEPRSTCTRL_b,
          rtb_DEPX20B, rtb_u1CTP_jk, rtb_u1CTPBP_d, rtb_DEPSB_c,
          &NONVITALMAIN_DW.ROUTEREQUEST_p);

    /* End of Outputs for SubSystem: '<S621>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S621>/DEP-X20-RS' */
    M_RS_DEP_20 = NONVITALMAIN_DW.ROUTEREQUEST_p.Memory1;

    /* DataStoreWrite: '<S621>/DEP-X20-S-REQ' */
    M_REQ_S_DEP_20 = NONVITALMAIN_DW.ROUTEREQUEST_p.OR5;

    /* DataStoreRead: '<S622>/J12A-AR-OK' */
    rtb_J12AAROK_a = M_AR_J12A;

    /* DataStoreRead: '<S622>/J12A-X10-CTRL' */
    rtb_J12AX10CTRL = M_PBCTRL_12_10;

    /* DataStoreRead: '<S622>/J12A-X10-ARS' */
    rtb_J12AX10ARS = R1210PBCTRL;

    /* DataStoreRead: '<S622>/J12A-RST-CTRL' */
    rtb_J12ARSTCTRL_o = M_CTRL_RST_12A;

    /* DataStoreRead: '<S622>/J12A-X10-B' */
    rtb_J12AX10B = M_B_12_10;

    /* DataStoreRead: '<S622>/11B-TP' */
    rtb_u1BTP_lu = M_TP_11B;

    /* DataStoreRead: '<S622>/11B-TPBP' */
    rtb_u1BTPBP = M_TPBP_11B;

    /* DataStoreRead: '<S622>/J12A-H-B' */
    rtb_J12AHB = M_B_J12A_H;

    /* Outputs for Atomic SubSystem: '<S622>/ROUTE REQUEST' */
    M_REQ(rtb_J12AAROK_a, rtb_J12AX10CTRL, rtb_J12AX10ARS, rtb_J12ARSTCTRL_o,
          rtb_J12AX10B, rtb_u1BTP_lu, rtb_u1BTPBP, rtb_J12AHB,
          &NONVITALMAIN_DW.ROUTEREQUEST_i);

    /* End of Outputs for SubSystem: '<S622>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S622>/J12A-X10-RS' */
    M_RS_12_10 = NONVITALMAIN_DW.ROUTEREQUEST_i.Memory1;

    /* DataStoreWrite: '<S622>/J12A-X10-T-REQ' */
    M_REQ_T_12_10 = NONVITALMAIN_DW.ROUTEREQUEST_i.OR5;

    /* DataStoreRead: '<S623>/J12A-AR-OK' */
    rtb_J12AAROK_ag = M_AR_J12A;

    /* DataStoreRead: '<S623>/J12A-X20-CTRL' */
    rtb_J12AX20CTRL = M_PBCTRL_12_20;

    /* DataStoreRead: '<S623>/J12A-X20-ARS' */
    rtb_J12AX20ARS = R1220PBCTRL;

    /* DataStoreRead: '<S623>/J12A-RST-CTRL' */
    rtb_J12ARSTCTRL_j = M_CTRL_RST_12A;

    /* DataStoreRead: '<S623>/J12A-X20-B' */
    rtb_J12AX20B = M_B_12_20;

    /* DataStoreRead: '<S623>/11B-TP' */
    rtb_u1BTP_hr = M_TP_11B;

    /* DataStoreRead: '<S623>/11B-TPBP' */
    rtb_u1BTPBP_f = M_TPBP_11B;

    /* DataStoreRead: '<S623>/J12A-H-B' */
    rtb_J12AHB_g = M_B_J12A_H;

    /* Outputs for Atomic SubSystem: '<S623>/ROUTE REQUEST' */
    M_REQ(rtb_J12AAROK_ag, rtb_J12AX20CTRL, rtb_J12AX20ARS, rtb_J12ARSTCTRL_j,
          rtb_J12AX20B, rtb_u1BTP_hr, rtb_u1BTPBP_f, rtb_J12AHB_g,
          &NONVITALMAIN_DW.ROUTEREQUEST_m);

    /* End of Outputs for SubSystem: '<S623>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S623>/J12A-X20-RS' */
    M_RS_12_20 = NONVITALMAIN_DW.ROUTEREQUEST_m.Memory1;

    /* DataStoreWrite: '<S623>/J12A-X20-T-REQ' */
    M_REQ_T_12_20 = NONVITALMAIN_DW.ROUTEREQUEST_m.OR5;

    /* DataStoreRead: '<S624>/J12B-AR-OK' */
    rtb_J12BAROK_n = M_AR_J12B;

    /* DataStoreRead: '<S624>/J12B-X14-CTRL' */
    rtb_J12BX14CTRL = M_PBCTRL_12_14;

    /* DataStoreRead: '<S624>/J12B-X14-ARS' */
    rtb_J12BX14ARS = R1214PBCTRL;

    /* DataStoreRead: '<S624>/J12B-RST-CTRL' */
    rtb_J12BRSTCTRL_o = M_CTRL_RST_12B;

    /* DataStoreRead: '<S624>/J12B-X14-B' */
    rtb_J12BX14B = M_B_12_14;

    /* DataStoreRead: '<S624>/13A-TP' */
    rtb_u3ATP_jh = M_TP_13A;

    /* DataStoreRead: '<S624>/13A-TPBP' */
    rtb_u3ATPBP = M_TPBP_13A;

    /* DataStoreRead: '<S624>/J12B-H-B' */
    rtb_J12BHB = M_B_J12B_H;

    /* Outputs for Atomic SubSystem: '<S624>/ROUTE REQUEST' */
    M_REQ(rtb_J12BAROK_n, rtb_J12BX14CTRL, rtb_J12BX14ARS, rtb_J12BRSTCTRL_o,
          rtb_J12BX14B, rtb_u3ATP_jh, rtb_u3ATPBP, rtb_J12BHB,
          &NONVITALMAIN_DW.ROUTEREQUEST_d);

    /* End of Outputs for SubSystem: '<S624>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S624>/J12B-X14-RS' */
    M_RS_12_14 = NONVITALMAIN_DW.ROUTEREQUEST_d.Memory1;

    /* DataStoreWrite: '<S624>/J12B-X14-T-REQ' */
    M_REQ_T_12_14 = NONVITALMAIN_DW.ROUTEREQUEST_d.OR5;

    /* DataStoreRead: '<S625>/JL20-AR-OK' */
    rtb_JL20AROK_g = M_AR_J12B;

    /* DataStoreRead: '<S625>/J12B-X24-CTRL' */
    rtb_J12BX24CTRL = M_PBCTRL_12_24;

    /* DataStoreRead: '<S625>/J12B-X24-ARS' */
    rtb_J12BX24ARS = R1224PBCTRL;

    /* DataStoreRead: '<S625>/J12B-RST-CTRL' */
    rtb_J12BRSTCTRL_m = M_CTRL_RST_12B;

    /* DataStoreRead: '<S625>/J12B-X24-B' */
    rtb_J12BX24B = M_B_12_24;

    /* DataStoreRead: '<S625>/13A-TP' */
    rtb_u3ATP_nj = M_TP_13A;

    /* DataStoreRead: '<S625>/13A-TPBP' */
    rtb_u3ATPBP_g = M_TPBP_13A;

    /* DataStoreRead: '<S625>/J12B-H-B' */
    rtb_J12BHB_i = M_B_J12B_H;

    /* Outputs for Atomic SubSystem: '<S625>/ROUTE REQUEST' */
    M_REQ(rtb_JL20AROK_g, rtb_J12BX24CTRL, rtb_J12BX24ARS, rtb_J12BRSTCTRL_m,
          rtb_J12BX24B, rtb_u3ATP_nj, rtb_u3ATPBP_g, rtb_J12BHB_i,
          &NONVITALMAIN_DW.ROUTEREQUEST_f);

    /* End of Outputs for SubSystem: '<S625>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S625>/J12B-X24-RS' */
    M_RS_12_24 = NONVITALMAIN_DW.ROUTEREQUEST_f.Memory1;

    /* DataStoreWrite: '<S625>/J12B-X24-T-REQ' */
    M_REQ_T_12_24 = NONVITALMAIN_DW.ROUTEREQUEST_f.OR5;

    /* DataStoreRead: '<S626>/J14-AR-OK' */
    rtb_J14AROK_d = M_AR_J14;

    /* DataStoreRead: '<S626>/J14-J12A-CTRL' */
    rtb_J14J12ACTRL = M_PBCTRL_14_12;

    /* DataStoreRead: '<S626>/J14-J12A-ARS' */
    rtb_J14J12AARS = R1412PBCTRL;

    /* DataStoreRead: '<S626>/J14-RST-CTRL' */
    rtb_J14RSTCTRL_j = M_CTRL_RST_14;

    /* DataStoreRead: '<S626>/J14-J12A-B' */
    rtb_J14J12AB = M_B_14_12;

    /* DataStoreRead: '<S626>/14A-TP' */
    rtb_u4ATP_d = M_TP_14A;

    /* DataStoreRead: '<S626>/14A-TPBP' */
    rtb_u4ATPBP = M_TPBP_14A;

    /* DataStoreRead: '<S626>/J14-D-B' */
    rtb_J14DB = M_B_J14_D;

    /* Outputs for Atomic SubSystem: '<S626>/ROUTE REQUEST' */
    M_REQ(rtb_J14AROK_d, rtb_J14J12ACTRL, rtb_J14J12AARS, rtb_J14RSTCTRL_j,
          rtb_J14J12AB, rtb_u4ATP_d, rtb_u4ATPBP, rtb_J14DB,
          &NONVITALMAIN_DW.ROUTEREQUEST_l);

    /* End of Outputs for SubSystem: '<S626>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S626>/J14-J12A-RS' */
    M_RS_14_12 = NONVITALMAIN_DW.ROUTEREQUEST_l.Memory1;

    /* DataStoreWrite: '<S626>/J14-J12A-T-REQ' */
    M_REQ_T_14_12 = NONVITALMAIN_DW.ROUTEREQUEST_l.OR5;

    /* DataStoreRead: '<S627>/J14-AR-OK' */
    rtb_J14AROK_n = M_AR_J14;

    /* DataStoreRead: '<S627>/J14-J22A-CTRL' */
    rtb_J14J22ACTRL = M_PBCTRL_14_22;

    /* DataStoreRead: '<S627>/J14-J22A-ARS' */
    rtb_J14J22AARS = R1422PBCTRL;

    /* DataStoreRead: '<S627>/J14-RST-CTRL' */
    rtb_J14RSTCTRL_o = M_CTRL_RST_14;

    /* DataStoreRead: '<S627>/J14-J22A-B' */
    rtb_J14J22AB = M_B_14_22;

    /* DataStoreRead: '<S627>/14A-TP' */
    rtb_u4ATP_j = M_TP_14A;

    /* DataStoreRead: '<S627>/14A-TPBP' */
    rtb_u4ATPBP_c = M_TPBP_14A;

    /* DataStoreRead: '<S627>/J14-D-B' */
    rtb_J14DB_f = M_B_J14_D;

    /* Outputs for Atomic SubSystem: '<S627>/ROUTE REQUEST' */
    M_REQ(rtb_J14AROK_n, rtb_J14J22ACTRL, rtb_J14J22AARS, rtb_J14RSTCTRL_o,
          rtb_J14J22AB, rtb_u4ATP_j, rtb_u4ATPBP_c, rtb_J14DB_f,
          &NONVITALMAIN_DW.ROUTEREQUEST_lk);

    /* End of Outputs for SubSystem: '<S627>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S627>/J14-J22A-RS' */
    M_RS_14_22 = NONVITALMAIN_DW.ROUTEREQUEST_lk.Memory1;

    /* DataStoreWrite: '<S627>/J14-J22A-T-REQ' */
    M_REQ_T_14_22 = NONVITALMAIN_DW.ROUTEREQUEST_lk.OR5;

    /* DataStoreRead: '<S628>/J22A-AR-OK' */
    rtb_J22AAROK_c = M_AR_J22A;

    /* DataStoreRead: '<S628>/J22A-X10-CTRL' */
    rtb_J22AX10CTRL = M_PBCTRL_22_10;

    /* DataStoreRead: '<S628>/J22A-X10-ARS' */
    rtb_J22AX10ARS = R2210PBCTRL;

    /* DataStoreRead: '<S628>/J22A-RST-CTRL' */
    rtb_J22ARSTCTRL_d = M_CTRL_RST_22A;

    /* DataStoreRead: '<S628>/J22A-X10-B' */
    rtb_J22AX10B = M_B_22_10;

    /* DataStoreRead: '<S628>/21C-TP' */
    rtb_u1CTP_jv = M_TP_21C;

    /* DataStoreRead: '<S628>/21C-TPBP' */
    rtb_u1CTPBP_p = M_TPBP_21C;

    /* DataStoreRead: '<S628>/J22A-H-B' */
    rtb_J22AHB = M_B_J22A_H;

    /* Outputs for Atomic SubSystem: '<S628>/ROUTE REQUEST' */
    M_REQ(rtb_J22AAROK_c, rtb_J22AX10CTRL, rtb_J22AX10ARS, rtb_J22ARSTCTRL_d,
          rtb_J22AX10B, rtb_u1CTP_jv, rtb_u1CTPBP_p, rtb_J22AHB,
          &NONVITALMAIN_DW.ROUTEREQUEST_c);

    /* End of Outputs for SubSystem: '<S628>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S628>/J22A-X10-RS' */
    M_RS_22_10 = NONVITALMAIN_DW.ROUTEREQUEST_c.Memory1;

    /* DataStoreWrite: '<S628>/J22A-X10-T-REQ' */
    M_REQ_T_22_10 = NONVITALMAIN_DW.ROUTEREQUEST_c.OR5;

    /* DataStoreRead: '<S629>/J22A-AR-OK' */
    rtb_J22AAROK_cl = M_AR_J22A;

    /* DataStoreRead: '<S629>/J22A-X20-CTRL' */
    rtb_J22AX20CTRL = M_PBCTRL_22_20;

    /* DataStoreRead: '<S629>/J22A-X20-ARS' */
    rtb_J22AX20ARS = R2220PBCTRL;

    /* DataStoreRead: '<S629>/J22A-RST-CTRL' */
    rtb_J22ARSTCTRL_dj = M_CTRL_RST_22A;

    /* DataStoreRead: '<S629>/J22A-X20-B' */
    rtb_J22AX20B = M_B_22_20;

    /* DataStoreRead: '<S629>/21C-TP' */
    rtb_u1CTP_f1 = M_TP_21C;

    /* DataStoreRead: '<S629>/21C-TPBP' */
    rtb_u1CTPBP_l = M_TPBP_21C;

    /* DataStoreRead: '<S629>/J22A-H-B' */
    rtb_J22AHB_b = M_B_J22A_H;

    /* Outputs for Atomic SubSystem: '<S629>/ROUTE REQUEST' */
    M_REQ(rtb_J22AAROK_cl, rtb_J22AX20CTRL, rtb_J22AX20ARS, rtb_J22ARSTCTRL_dj,
          rtb_J22AX20B, rtb_u1CTP_f1, rtb_u1CTPBP_l, rtb_J22AHB_b,
          &NONVITALMAIN_DW.ROUTEREQUEST_g);

    /* End of Outputs for SubSystem: '<S629>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S629>/J22A-X20-RS' */
    M_RS_22_20 = NONVITALMAIN_DW.ROUTEREQUEST_g.Memory1;

    /* DataStoreWrite: '<S629>/J22A-X20-T-REQ' */
    M_REQ_T_22_20 = NONVITALMAIN_DW.ROUTEREQUEST_g.OR5;

    /* DataStoreRead: '<S630>/J22B-AR-OK' */
    rtb_J22BAROK_i = M_AR_J22B;

    /* DataStoreRead: '<S630>/J22B-X14-CTRL' */
    rtb_J22BX14CTRL = M_PBCTRL_22_14;

    /* DataStoreRead: '<S630>/J22B-X14-ARS' */
    rtb_J22BX14ARS = R2214PBCTRL;

    /* DataStoreRead: '<S630>/J22B-RST-CTRL' */
    rtb_J22BRSTCTRL_f = M_CTRL_RST_22B;

    /* DataStoreRead: '<S630>/J22B-X14-B' */
    rtb_J22BX14B = M_B_22_14;

    /* DataStoreRead: '<S630>/23A-TP' */
    rtb_u3ATP_i = M_TP_23A;

    /* DataStoreRead: '<S630>/23A-TPBP' */
    rtb_u3ATPBP_l = M_TPBP_23A;

    /* DataStoreRead: '<S630>/J22B-H-B' */
    rtb_J22BHB = M_B_J22B_H;

    /* Outputs for Atomic SubSystem: '<S630>/ROUTE REQUEST' */
    M_REQ(rtb_J22BAROK_i, rtb_J22BX14CTRL, rtb_J22BX14ARS, rtb_J22BRSTCTRL_f,
          rtb_J22BX14B, rtb_u3ATP_i, rtb_u3ATPBP_l, rtb_J22BHB,
          &NONVITALMAIN_DW.ROUTEREQUEST_o);

    /* End of Outputs for SubSystem: '<S630>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S630>/J22B-X14-RS' */
    M_RS_22_14 = NONVITALMAIN_DW.ROUTEREQUEST_o.Memory1;

    /* DataStoreWrite: '<S630>/J22B-X14-T-REQ' */
    M_REQ_T_22_14 = NONVITALMAIN_DW.ROUTEREQUEST_o.OR5;

    /* DataStoreRead: '<S631>/J22B-AR-OK' */
    rtb_J22BAROK_l = M_AR_J22B;

    /* DataStoreRead: '<S631>/J22B-X24-CTRL' */
    rtb_J22BX24CTRL = M_PBCTRL_22_24;

    /* DataStoreRead: '<S631>/J22B-X24-ARS' */
    rtb_J22BX24ARS = R2224PBCTRL;

    /* DataStoreRead: '<S631>/J22B-RST-CTRL' */
    rtb_J22BRSTCTRL_p = M_CTRL_RST_22B;

    /* DataStoreRead: '<S631>/J22B-X24-B' */
    rtb_J22BX24B = M_B_22_24;

    /* DataStoreRead: '<S631>/23A-TP' */
    rtb_u3ATP_c0 = M_TP_23A;

    /* DataStoreRead: '<S631>/23A-TPBP' */
    rtb_u3ATPBP_o = M_TPBP_23A;

    /* DataStoreRead: '<S631>/J22B-H-B' */
    rtb_J22BHB_m = M_B_J22B_H;

    /* Outputs for Atomic SubSystem: '<S631>/ROUTE REQUEST' */
    M_REQ(rtb_J22BAROK_l, rtb_J22BX24CTRL, rtb_J22BX24ARS, rtb_J22BRSTCTRL_p,
          rtb_J22BX24B, rtb_u3ATP_c0, rtb_u3ATPBP_o, rtb_J22BHB_m,
          &NONVITALMAIN_DW.ROUTEREQUEST_n);

    /* End of Outputs for SubSystem: '<S631>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S631>/J22B-X24-RS' */
    M_RS_22_24 = NONVITALMAIN_DW.ROUTEREQUEST_n.Memory1;

    /* DataStoreWrite: '<S631>/J22B-X24-T-REQ' */
    M_REQ_T_22_24 = NONVITALMAIN_DW.ROUTEREQUEST_n.OR5;

    /* DataStoreRead: '<S632>/J24-AR-OK' */
    rtb_J24AROK_d = M_AR_J24;

    /* DataStoreRead: '<S632>/J24-J12A-CTRL' */
    rtb_J24J12ACTRL = M_PBCTRL_24_12;

    /* DataStoreRead: '<S632>/J24-J12A-ARS' */
    rtb_J24J12AARS = R2412PBCTRL;

    /* DataStoreRead: '<S632>/J24-RST-CTRL' */
    rtb_J24RSTCTRL_g = M_CTRL_RST_24;

    /* DataStoreRead: '<S632>/J24-J12A-B' */
    rtb_J24J12AB = M_B_24_12;

    /* DataStoreRead: '<S632>/24A-TP' */
    rtb_u4ATP_jk = M_TP_24A;

    /* DataStoreRead: '<S632>/24A-TPBP' */
    rtb_u4ATPBP_d = M_TPBP_24A;

    /* DataStoreRead: '<S632>/J24-D-B' */
    rtb_J24DB = M_B_J24_D;

    /* Outputs for Atomic SubSystem: '<S632>/ROUTE REQUEST' */
    M_REQ(rtb_J24AROK_d, rtb_J24J12ACTRL, rtb_J24J12AARS, rtb_J24RSTCTRL_g,
          rtb_J24J12AB, rtb_u4ATP_jk, rtb_u4ATPBP_d, rtb_J24DB,
          &NONVITALMAIN_DW.ROUTEREQUEST_dh);

    /* End of Outputs for SubSystem: '<S632>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S632>/J24-J12A-RS' */
    M_RS_24_12 = NONVITALMAIN_DW.ROUTEREQUEST_dh.Memory1;

    /* DataStoreWrite: '<S632>/J24-J12A-T-REQ' */
    M_REQ_T_24_12 = NONVITALMAIN_DW.ROUTEREQUEST_dh.OR5;

    /* DataStoreRead: '<S633>/J24-AR-OK' */
    rtb_J24AROK_j = M_AR_J24;

    /* DataStoreRead: '<S633>/J24-J22A-CTRL' */
    rtb_J24J22ACTRL = M_PBCTRL_24_22;

    /* DataStoreRead: '<S633>/J24-J22A-ARS' */
    rtb_J24J22AARS = R2422PBCTRL;

    /* DataStoreRead: '<S633>/J24-RST-CTRL' */
    rtb_J24RSTCTRL_o = M_CTRL_RST_24;

    /* DataStoreRead: '<S633>/J24-J22A-B' */
    rtb_J24J22AB = M_B_24_22;

    /* DataStoreRead: '<S633>/24A-TP' */
    rtb_u4ATP_a = M_TP_24A;

    /* DataStoreRead: '<S633>/24A-TPBP' */
    rtb_u4ATPBP_n = M_TPBP_24A;

    /* DataStoreRead: '<S633>/J24-D-B' */
    rtb_J24DB_j = M_B_J24_D;

    /* Outputs for Atomic SubSystem: '<S633>/ROUTE REQUEST' */
    M_REQ(rtb_J24AROK_j, rtb_J24J22ACTRL, rtb_J24J22AARS, rtb_J24RSTCTRL_o,
          rtb_J24J22AB, rtb_u4ATP_a, rtb_u4ATPBP_n, rtb_J24DB_j,
          &NONVITALMAIN_DW.ROUTEREQUEST_ij);

    /* End of Outputs for SubSystem: '<S633>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S633>/J24-J22A-RS' */
    M_RS_24_22 = NONVITALMAIN_DW.ROUTEREQUEST_ij.Memory1;

    /* DataStoreWrite: '<S633>/J24-J22A-T-REQ' */
    M_REQ_T_24_22 = NONVITALMAIN_DW.ROUTEREQUEST_ij.OR5;

    /* DataStoreRead: '<S634>/JL10-AR-OK' */
    rtb_JL10AROK_ls = M_AR_JL10;

    /* DataStoreRead: '<S634>/JL10-DEP-CTRL' */
    rtb_JL10DEPCTRL = M_PBCTRL_10_DEP;

    /* DataStoreRead: '<S634>/JL10-DEP-ARS' */
    rtb_JL10DEPARS = R10DEPPBCTRL;

    /* DataStoreRead: '<S634>/JL10-RST-CTRL' */
    rtb_JL10RSTCTRL_d = M_CTRL_RST_10;

    /* DataStoreRead: '<S634>/JL10-DEP-B' */
    rtb_JL10DEPB = M_B_10_DEP;

    /* DataStoreRead: '<S634>/10B-TP' */
    rtb_u0BTP_e = M_TP_10B;

    /* DataStoreRead: '<S634>/10B-TPBP' */
    rtb_u0BTPBP = M_TPBP_10B;

    /* DataStoreRead: '<S634>/JL10-S-B' */
    rtb_JL10SB = M_B_JL10_S;

    /* Outputs for Atomic SubSystem: '<S634>/ROUTE REQUEST' */
    M_REQ(rtb_JL10AROK_ls, rtb_JL10DEPCTRL, rtb_JL10DEPARS, rtb_JL10RSTCTRL_d,
          rtb_JL10DEPB, rtb_u0BTP_e, rtb_u0BTPBP, rtb_JL10SB,
          &NONVITALMAIN_DW.ROUTEREQUEST_fl);

    /* End of Outputs for SubSystem: '<S634>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S634>/JL10-DEP-RS' */
    M_RS_10_DEP = NONVITALMAIN_DW.ROUTEREQUEST_fl.Memory1;

    /* DataStoreWrite: '<S634>/JL10-DEP-S-REQ' */
    M_REQ_S_10_DEP = NONVITALMAIN_DW.ROUTEREQUEST_fl.OR5;

    /* DataStoreRead: '<S635>/JL10-AR-OK' */
    rtb_JL10AROK_a = M_AR_JL10;

    /* DataStoreRead: '<S635>/JL10-J12B-CTRL' */
    rtb_JL10J12BCTRL = M_PBCTRL_10_12;

    /* DataStoreRead: '<S635>/JL10-J12B-ARS' */
    rtb_JL10J12BARS = R1012PBCTRL;

    /* DataStoreRead: '<S635>/JL10-RST-CTRL' */
    rtb_JL10RSTCTRL_f = M_CTRL_RST_10;

    /* DataStoreRead: '<S635>/JL10-J12B-B' */
    rtb_JL10J12BB = M_B_10_12;

    /* DataStoreRead: '<S635>/10B-TP' */
    rtb_u0BTP_c = M_TP_10B;

    /* DataStoreRead: '<S635>/10B-TPBP' */
    rtb_u0BTPBP_h = M_TPBP_10B;

    /* DataStoreRead: '<S635>/JL10-D-B' */
    rtb_JL10DB = M_B_JL10_D;

    /* Outputs for Atomic SubSystem: '<S635>/ROUTE REQUEST' */
    M_REQ(rtb_JL10AROK_a, rtb_JL10J12BCTRL, rtb_JL10J12BARS, rtb_JL10RSTCTRL_f,
          rtb_JL10J12BB, rtb_u0BTP_c, rtb_u0BTPBP_h, rtb_JL10DB,
          &NONVITALMAIN_DW.ROUTEREQUEST_p2);

    /* End of Outputs for SubSystem: '<S635>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S635>/JL10-J12B-RS' */
    M_RS_10_12 = NONVITALMAIN_DW.ROUTEREQUEST_p2.Memory1;

    /* DataStoreWrite: '<S635>/JL10-J12B-T-REQ' */
    M_REQ_T_10_12 = NONVITALMAIN_DW.ROUTEREQUEST_p2.OR5;

    /* DataStoreRead: '<S636>/JL10-AR-OK' */
    rtb_JL10AROK_n = M_AR_JL10;

    /* DataStoreRead: '<S636>/JL10-J22B-CTRL' */
    rtb_JL10J22BCTRL = M_PBCTRL_10_22;

    /* DataStoreRead: '<S636>/JL10-J22B-ARS' */
    rtb_JL10J22BARS = R1022PBCTRL;

    /* DataStoreRead: '<S636>/JL10-RST-CTRL' */
    rtb_JL10RSTCTRL_k = M_CTRL_RST_10;

    /* DataStoreRead: '<S636>/JL10-J22B-B' */
    rtb_JL10J22BB = M_B_10_22;

    /* DataStoreRead: '<S636>/10B-TP' */
    rtb_u0BTP_ct = M_TP_10B;

    /* DataStoreRead: '<S636>/10B-TPBP' */
    rtb_u0BTPBP_hi = M_TPBP_10B;

    /* DataStoreRead: '<S636>/JL10-D-B' */
    rtb_JL10DB_f = M_B_JL10_D;

    /* Outputs for Atomic SubSystem: '<S636>/ROUTE REQUEST' */
    M_REQ(rtb_JL10AROK_n, rtb_JL10J22BCTRL, rtb_JL10J22BARS, rtb_JL10RSTCTRL_k,
          rtb_JL10J22BB, rtb_u0BTP_ct, rtb_u0BTPBP_hi, rtb_JL10DB_f,
          &NONVITALMAIN_DW.ROUTEREQUEST_h);

    /* End of Outputs for SubSystem: '<S636>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S636>/JL10-J22B-RS' */
    M_RS_10_22 = NONVITALMAIN_DW.ROUTEREQUEST_h.Memory1;

    /* DataStoreWrite: '<S636>/JL10-J22B-T-REQ' */
    M_REQ_T_10_22 = NONVITALMAIN_DW.ROUTEREQUEST_h.OR5;

    /* DataStoreRead: '<S637>/JL20-AR-OK' */
    rtb_JL20AROK_e = M_AR_JL20;

    /* DataStoreRead: '<S637>/JL20-DEP-CTRL' */
    rtb_JL20DEPCTRL = M_PBCTRL_20_DEP;

    /* DataStoreRead: '<S637>/JL20-DEP-ARS' */
    rtb_JL20DEPARS = R20DEPPBCTRL;

    /* DataStoreRead: '<S637>/JL20-RST-CTRL' */
    rtb_JL20RSTCTRL_k = M_CTRL_RST_20;

    /* DataStoreRead: '<S637>/JL20-DEP-B' */
    rtb_JL20DEPB = M_B_20_DEP;

    /* DataStoreRead: '<S637>/20B-TP' */
    rtb_u0BTP_k = M_TP_20B;

    /* DataStoreRead: '<S637>/20B-TPBP' */
    rtb_u0BTPBP_l = M_TPBP_20B;

    /* DataStoreRead: '<S637>/JL20-S-B' */
    rtb_JL20SB = M_B_JL20_S;

    /* Outputs for Atomic SubSystem: '<S637>/ROUTE REQUEST' */
    M_REQ(rtb_JL20AROK_e, rtb_JL20DEPCTRL, rtb_JL20DEPARS, rtb_JL20RSTCTRL_k,
          rtb_JL20DEPB, rtb_u0BTP_k, rtb_u0BTPBP_l, rtb_JL20SB,
          &NONVITALMAIN_DW.ROUTEREQUEST_c5);

    /* End of Outputs for SubSystem: '<S637>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S637>/JL20-DEP-RS' */
    M_RS_20_DEP = NONVITALMAIN_DW.ROUTEREQUEST_c5.Memory1;

    /* DataStoreWrite: '<S637>/JL20-DEP-S-REQ' */
    M_REQ_S_20_DEP = NONVITALMAIN_DW.ROUTEREQUEST_c5.OR5;

    /* DataStoreRead: '<S638>/JL20-AR-OK' */
    rtb_JL20AROK_ge = M_AR_JL20;

    /* DataStoreRead: '<S638>/JL20-J12B-CTRL' */
    rtb_JL20J12BCTRL = M_PBCTRL_20_12;

    /* DataStoreRead: '<S638>/JL20-J12B-ARS' */
    rtb_JL20J12BARS = R2012PBCTRL;

    /* DataStoreRead: '<S638>/JL20-RST-CTRL' */
    rtb_JL20RSTCTRL_h = M_CTRL_RST_20;

    /* DataStoreRead: '<S638>/JL20-J12B-B' */
    rtb_JL20J12BB = M_B_20_12;

    /* DataStoreRead: '<S638>/20B-TP' */
    rtb_u0BTP_n5 = M_TP_20B;

    /* DataStoreRead: '<S638>/20B-TPBP' */
    rtb_u0BTPBP_p = M_TPBP_20B;

    /* DataStoreRead: '<S638>/JL20-D-B' */
    rtb_JL20DB = M_B_JL20_D;

    /* Outputs for Atomic SubSystem: '<S638>/ROUTE REQUEST' */
    M_REQ(rtb_JL20AROK_ge, rtb_JL20J12BCTRL, rtb_JL20J12BARS, rtb_JL20RSTCTRL_h,
          rtb_JL20J12BB, rtb_u0BTP_n5, rtb_u0BTPBP_p, rtb_JL20DB,
          &NONVITALMAIN_DW.ROUTEREQUEST_b);

    /* End of Outputs for SubSystem: '<S638>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S638>/JL20-J12B-RS' */
    M_RS_20_12 = NONVITALMAIN_DW.ROUTEREQUEST_b.Memory1;

    /* DataStoreWrite: '<S638>/JL20-J12B-T-REQ' */
    M_REQ_T_20_12 = NONVITALMAIN_DW.ROUTEREQUEST_b.OR5;

    /* DataStoreRead: '<S639>/JL20-AR-OK' */
    rtb_JL20AROK_o = M_AR_JL20;

    /* DataStoreRead: '<S639>/JL20-J22B-CTRL' */
    rtb_JL20J22BCTRL = M_PBCTRL_20_22;

    /* DataStoreRead: '<S639>/JL20-J22B-ARS' */
    rtb_JL20J22BARS = R2022PBCTRL;

    /* DataStoreRead: '<S639>/JL20-RST-CTRL' */
    rtb_JL20RSTCTRL_hd = M_CTRL_RST_20;

    /* DataStoreRead: '<S639>/JL20-J22B-B' */
    rtb_JL20J22BB = M_B_20_22;

    /* DataStoreRead: '<S639>/20B-TP' */
    rtb_u0BTP_by = M_TP_20B;

    /* DataStoreRead: '<S639>/20B-TPBP' */
    rtb_u0BTPBP_o = M_TPBP_20B;

    /* DataStoreRead: '<S639>/JL20-D-B' */
    rtb_JL20DB_h = M_B_JL20_D;

    /* Outputs for Atomic SubSystem: '<S639>/ROUTE REQUEST' */
    M_REQ(rtb_JL20AROK_o, rtb_JL20J22BCTRL, rtb_JL20J22BARS, rtb_JL20RSTCTRL_hd,
          rtb_JL20J22BB, rtb_u0BTP_by, rtb_u0BTPBP_o, rtb_JL20DB_h,
          &NONVITALMAIN_DW.ROUTEREQUEST_i5);

    /* End of Outputs for SubSystem: '<S639>/ROUTE REQUEST' */

    /* DataStoreWrite: '<S639>/JL20-J22B-RS' */
    M_RS_20_22 = NONVITALMAIN_DW.ROUTEREQUEST_i5.Memory1;

    /* DataStoreWrite: '<S639>/JL20-J22B-T-REQ' */
    M_REQ_T_20_22 = NONVITALMAIN_DW.ROUTEREQUEST_i5.OR5;

    /* DataStoreRead: '<S660>/VDR' */
    NONVITALMAIN_DW.VDR = NONVITALMAIN_DW.M_VDR;

    /* Logic: '<S660>/AND1' */
    rtb_AND1_lq = (M_RS_DEP_10 && M_RS_DEP_20);

    /* DataStoreRead: '<S660>/DEP-GR-DO' */
    NONVITALMAIN_DW.DEPGRDO_p = M_DO_DEP_GR;

    /* DataStoreRead: '<S660>/DEP-GR-RD' */
    rtb_DEPGRRD = M_RD_DEP_GR;

    /* DataStoreRead: '<S660>/21C-TP' */
    rtb_u1CTP_cg = M_TP_21C;
  }

  /* Outputs for Atomic SubSystem: '<S660>/SIGNAL BLOCK S' */
  M_SIG_B(NONVITALMAIN_M, NONVITALMAIN_DW.VDR, rtb_AND1_lq,
          NONVITALMAIN_DW.DEPGRDO_p, rtb_DEPGRRD, rtb_u1CTP_cg,
          &NONVITALMAIN_DW.SIGNALBLOCKS);

  /* End of Outputs for SubSystem: '<S660>/SIGNAL BLOCK S' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S660>/DEP-S-B' incorporates:
     *  SignalConversion: '<S660>/TmpSignal ConversionAtSIGNAL BLOCK SOutport1'
     */
    M_B_DEP = NONVITALMAIN_DW.SIGNALBLOCKS.OR4;

    /* DataStoreRead: '<S661>/VDR' */
    NONVITALMAIN_DW.VDR_c = NONVITALMAIN_DW.M_VDR;

    /* Logic: '<S661>/AND1' */
    rtb_AND1_my = (M_RS_12_10 && M_RS_12_20);

    /* DataStoreRead: '<S661>/J12A-DR-DO' */
    NONVITALMAIN_DW.J12ADRDO_c = M_DO_J12A_DR;

    /* DataStoreRead: '<S661>/J12A-DR-RD' */
    rtb_J12ADRRD = M_RD_J12A_DR;

    /* DataStoreRead: '<S661>/11B-TP' */
    rtb_u1BTP_o = M_TP_11B;
  }

  /* Outputs for Atomic SubSystem: '<S661>/SIGNAL BLOCK T' */
  M_SIG_B(NONVITALMAIN_M, NONVITALMAIN_DW.VDR_c, rtb_AND1_my,
          NONVITALMAIN_DW.J12ADRDO_c, rtb_J12ADRRD, rtb_u1BTP_o,
          &NONVITALMAIN_DW.SIGNALBLOCKT);

  /* End of Outputs for SubSystem: '<S661>/SIGNAL BLOCK T' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S661>/J12A-H-B' incorporates:
     *  SignalConversion: '<S661>/TmpSignal ConversionAtSIGNAL BLOCK TOutport1'
     */
    M_B_J12A_H = NONVITALMAIN_DW.SIGNALBLOCKT.OR4;

    /* DataStoreRead: '<S662>/VDR' */
    NONVITALMAIN_DW.VDR_o = NONVITALMAIN_DW.M_VDR;

    /* Logic: '<S662>/AND1' */
    rtb_AND1_lp = (M_RS_12_14 && M_RS_12_24);

    /* DataStoreRead: '<S662>/J12B-DR-DO' */
    NONVITALMAIN_DW.J12BDRDO_l = M_DO_J12B_DR;

    /* DataStoreRead: '<S662>/J12B-DR-RD' */
    rtb_J12BDRRD = M_RD_J12B_DR;

    /* DataStoreRead: '<S662>/13A-TP' */
    rtb_u3ATP_fl = M_TP_13A;
  }

  /* Outputs for Atomic SubSystem: '<S662>/SIGNAL BLOCK T' */
  M_SIG_B(NONVITALMAIN_M, NONVITALMAIN_DW.VDR_o, rtb_AND1_lp,
          NONVITALMAIN_DW.J12BDRDO_l, rtb_J12BDRRD, rtb_u3ATP_fl,
          &NONVITALMAIN_DW.SIGNALBLOCKT_p);

  /* End of Outputs for SubSystem: '<S662>/SIGNAL BLOCK T' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S662>/J12B-H-B' incorporates:
     *  SignalConversion: '<S662>/TmpSignal ConversionAtSIGNAL BLOCK TOutport1'
     */
    M_B_J12B_H = NONVITALMAIN_DW.SIGNALBLOCKT_p.OR4;

    /* DataStoreRead: '<S663>/VDR' */
    NONVITALMAIN_DW.VDR_g = NONVITALMAIN_DW.M_VDR;

    /* Logic: '<S663>/AND1' */
    rtb_AND1_n5 = (M_RS_14_12 && M_RS_14_22);

    /* DataStoreRead: '<S663>/J14-DR-DO' */
    NONVITALMAIN_DW.J14DRDO_a = M_DO_J14_DR;

    /* DataStoreRead: '<S663>/J14-DR-RD' */
    rtb_J14DRRD = M_RD_J14_DR;

    /* DataStoreRead: '<S663>/14A-TP' */
    rtb_u4ATP_o0 = M_TP_14A;
  }

  /* Outputs for Atomic SubSystem: '<S663>/SIGNAL BLOCK T' */
  M_SIG_B(NONVITALMAIN_M, NONVITALMAIN_DW.VDR_g, rtb_AND1_n5,
          NONVITALMAIN_DW.J14DRDO_a, rtb_J14DRRD, rtb_u4ATP_o0,
          &NONVITALMAIN_DW.SIGNALBLOCKT_b);

  /* End of Outputs for SubSystem: '<S663>/SIGNAL BLOCK T' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S663>/J14-D-B' incorporates:
     *  SignalConversion: '<S663>/TmpSignal ConversionAtSIGNAL BLOCK TOutport1'
     */
    M_B_J14_D = NONVITALMAIN_DW.SIGNALBLOCKT_b.OR4;

    /* DataStoreRead: '<S664>/VDR' */
    NONVITALMAIN_DW.VDR_a = NONVITALMAIN_DW.M_VDR;

    /* Logic: '<S664>/AND1' */
    rtb_AND1_as = (M_RS_22_10 && M_RS_22_20);

    /* DataStoreRead: '<S664>/J22A-DR-DO' */
    NONVITALMAIN_DW.J22ADRDO_l = M_DO_J22A_DR;

    /* DataStoreRead: '<S664>/J22A-DR-RD' */
    rtb_J22ADRRD = M_RD_J22A_DR;

    /* DataStoreRead: '<S664>/21C-TP' */
    rtb_u1CTP_ed = M_TP_21C;
  }

  /* Outputs for Atomic SubSystem: '<S664>/SIGNAL BLOCK T' */
  M_SIG_B(NONVITALMAIN_M, NONVITALMAIN_DW.VDR_a, rtb_AND1_as,
          NONVITALMAIN_DW.J22ADRDO_l, rtb_J22ADRRD, rtb_u1CTP_ed,
          &NONVITALMAIN_DW.SIGNALBLOCKT_i);

  /* End of Outputs for SubSystem: '<S664>/SIGNAL BLOCK T' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S664>/J22A-H-B' incorporates:
     *  SignalConversion: '<S664>/TmpSignal ConversionAtSIGNAL BLOCK TOutport1'
     */
    M_B_J22A_H = NONVITALMAIN_DW.SIGNALBLOCKT_i.OR4;

    /* DataStoreRead: '<S665>/VDR' */
    NONVITALMAIN_DW.VDR_j = NONVITALMAIN_DW.M_VDR;

    /* Logic: '<S665>/AND1' */
    rtb_AND1_nj = (M_RS_22_14 && M_RS_22_24);

    /* DataStoreRead: '<S665>/J22B-DR-DO' */
    NONVITALMAIN_DW.J22BDRDO_f = M_DO_J22B_DR;

    /* DataStoreRead: '<S665>/J22B-DR-RD' */
    rtb_J22BDRRD = M_RD_J22B_DR;

    /* DataStoreRead: '<S665>/23A-TP' */
    rtb_u3ATP_dh = M_TP_23A;
  }

  /* Outputs for Atomic SubSystem: '<S665>/SIGNAL BLOCK T' */
  M_SIG_B(NONVITALMAIN_M, NONVITALMAIN_DW.VDR_j, rtb_AND1_nj,
          NONVITALMAIN_DW.J22BDRDO_f, rtb_J22BDRRD, rtb_u3ATP_dh,
          &NONVITALMAIN_DW.SIGNALBLOCKT_m);

  /* End of Outputs for SubSystem: '<S665>/SIGNAL BLOCK T' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S665>/J22B-H-B' incorporates:
     *  SignalConversion: '<S665>/TmpSignal ConversionAtSIGNAL BLOCK TOutport1'
     */
    M_B_J22B_H = NONVITALMAIN_DW.SIGNALBLOCKT_m.OR4;

    /* DataStoreRead: '<S666>/VDR' */
    NONVITALMAIN_DW.VDR_n = NONVITALMAIN_DW.M_VDR;

    /* Logic: '<S666>/AND1' */
    rtb_AND1_e25 = (M_RS_24_12 && M_RS_24_22);

    /* DataStoreRead: '<S666>/J24-DR-DO' */
    NONVITALMAIN_DW.J24DRDO_a = M_DO_J24_DR;

    /* DataStoreRead: '<S666>/J24-DR-RD' */
    rtb_J24DRRD = M_RD_J24_DR;

    /* DataStoreRead: '<S666>/24A-TP' */
    rtb_u4ATP_c = M_TP_24A;
  }

  /* Outputs for Atomic SubSystem: '<S666>/SIGNAL BLOCK T' */
  M_SIG_B(NONVITALMAIN_M, NONVITALMAIN_DW.VDR_n, rtb_AND1_e25,
          NONVITALMAIN_DW.J24DRDO_a, rtb_J24DRRD, rtb_u4ATP_c,
          &NONVITALMAIN_DW.SIGNALBLOCKT_f);

  /* End of Outputs for SubSystem: '<S666>/SIGNAL BLOCK T' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S666>/J24-D-B' incorporates:
     *  SignalConversion: '<S666>/TmpSignal ConversionAtSIGNAL BLOCK TOutport1'
     */
    M_B_J24_D = NONVITALMAIN_DW.SIGNALBLOCKT_f.OR4;

    /* DataStoreRead: '<S667>/VDR' */
    NONVITALMAIN_DW.VDR_cc = NONVITALMAIN_DW.M_VDR;

    /* Logic: '<S667>/AND1' */
    rtb_AND1_iy = (M_RS_10_12 && M_RS_10_22);

    /* DataStoreRead: '<S667>/JL10-DR-DO' */
    NONVITALMAIN_DW.JL10DRDO_h = M_DO_JL10_DR;

    /* DataStoreRead: '<S667>/JL10-DR-RD' */
    rtb_JL10DRRD = M_RD_JL10_DR;

    /* DataStoreRead: '<S667>/10B-TP' */
    rtb_u0BTP_f = M_TP_10B;
  }

  /* Outputs for Atomic SubSystem: '<S667>/SIGNAL BLOCK T' */
  M_SIG_B(NONVITALMAIN_M, NONVITALMAIN_DW.VDR_cc, rtb_AND1_iy,
          NONVITALMAIN_DW.JL10DRDO_h, rtb_JL10DRRD, rtb_u0BTP_f,
          &NONVITALMAIN_DW.SIGNALBLOCKT_ir);

  /* End of Outputs for SubSystem: '<S667>/SIGNAL BLOCK T' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S667>/JL10-D-B' incorporates:
     *  SignalConversion: '<S667>/TmpSignal ConversionAtSIGNAL BLOCK TOutport1'
     */
    M_B_JL10_D = NONVITALMAIN_DW.SIGNALBLOCKT_ir.OR4;

    /* DataStoreRead: '<S667>/JL10-DEP-RS' */
    rtb_JL10DEPRS_mm = M_RS_10_DEP;

    /* DataStoreRead: '<S667>/JL10-GR-DO' */
    NONVITALMAIN_DW.JL10GRDO_c = M_DO_JL10_GR;

    /* DataStoreRead: '<S667>/JL10-GR-RD' */
    rtb_JL10GRRD = M_RD_JL10_GR;
  }

  /* Outputs for Atomic SubSystem: '<S667>/SIGNAL BLOCK S' */
  M_SIG_B(NONVITALMAIN_M, NONVITALMAIN_DW.VDR_cc, rtb_JL10DEPRS_mm,
          NONVITALMAIN_DW.JL10GRDO_c, rtb_JL10GRRD, rtb_u0BTP_f,
          &NONVITALMAIN_DW.SIGNALBLOCKS_c);

  /* End of Outputs for SubSystem: '<S667>/SIGNAL BLOCK S' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S667>/JL10-S-B' incorporates:
     *  SignalConversion: '<S667>/TmpSignal ConversionAtSIGNAL BLOCK SOutport1'
     */
    M_B_JL10_S = NONVITALMAIN_DW.SIGNALBLOCKS_c.OR4;

    /* DataStoreRead: '<S668>/VDR' */
    NONVITALMAIN_DW.VDR_nc = NONVITALMAIN_DW.M_VDR;

    /* Logic: '<S668>/AND1' */
    rtb_AND1_ph = M_RS_20_22;

    /* DataStoreRead: '<S668>/JL20-DR-DO' */
    NONVITALMAIN_DW.JL20DRDO_d = M_DO_JL20_DR;

    /* DataStoreRead: '<S668>/JL20-DR-RD' */
    rtb_JL20DRRD = M_RD_JL20_DR;

    /* DataStoreRead: '<S668>/20B-TP' */
    rtb_u0BTP_cy = M_TP_20B;
  }

  /* Outputs for Atomic SubSystem: '<S668>/SIGNAL BLOCK T' */
  M_SIG_B(NONVITALMAIN_M, NONVITALMAIN_DW.VDR_nc, rtb_AND1_ph,
          NONVITALMAIN_DW.JL20DRDO_d, rtb_JL20DRRD, rtb_u0BTP_cy,
          &NONVITALMAIN_DW.SIGNALBLOCKT_j);

  /* End of Outputs for SubSystem: '<S668>/SIGNAL BLOCK T' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S668>/JL20-D-B' incorporates:
     *  SignalConversion: '<S668>/TmpSignal ConversionAtSIGNAL BLOCK TOutport1'
     */
    M_B_JL20_D = NONVITALMAIN_DW.SIGNALBLOCKT_j.OR4;

    /* DataStoreRead: '<S668>/JL20-DEP-RS' */
    rtb_JL20DEPRS_o = M_RS_20_DEP;

    /* DataStoreRead: '<S668>/JL20-GR-DO' */
    NONVITALMAIN_DW.JL20GRDO_p = M_DO_JL20_GR;

    /* DataStoreRead: '<S668>/JL20-GR-RD' */
    rtb_JL20GRRD = M_RD_JL20_GR;
  }

  /* Outputs for Atomic SubSystem: '<S668>/SIGNAL BLOCK S' */
  M_SIG_B(NONVITALMAIN_M, NONVITALMAIN_DW.VDR_nc, rtb_JL20DEPRS_o,
          NONVITALMAIN_DW.JL20GRDO_p, rtb_JL20GRRD, rtb_u0BTP_cy,
          &NONVITALMAIN_DW.SIGNALBLOCKS_e);

  /* End of Outputs for SubSystem: '<S668>/SIGNAL BLOCK S' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* DataStoreWrite: '<S668>/JL20-S-B' incorporates:
     *  SignalConversion: '<S668>/TmpSignal ConversionAtSIGNAL BLOCK SOutport1'
     */
    M_B_JL20_S = NONVITALMAIN_DW.SIGNALBLOCKS_e.OR4;

    /* DiscretePulseGenerator: '<S3>/0.5S' */
    if (clockTickCounter_0 >= 19) {
      clockTickCounter = 0;
    } else {
      clockTickCounter = clockTickCounter_0 + 1;
    }

    /* DataStoreWrite: '<S3>/FLASH-0.5S' incorporates:
     *  DiscretePulseGenerator: '<S3>/0.5S'
     */
    NONVITALMAIN_DW.M_GV_FLASH_500 = ((clockTickCounter_0 < 10) &&
      (clockTickCounter_0 >= 0));

    /* DiscretePulseGenerator: '<S3>/1S' */
    if (clockTickCounter_f_0 >= 39) {
      clockTickCounter_f = 0;
    } else {
      clockTickCounter_f = clockTickCounter_f_0 + 1;
    }

    /* DataStoreWrite: '<S3>/FLASH-1S' incorporates:
     *  DiscretePulseGenerator: '<S3>/1S'
     */
    M_GV_FLASH_1000 = ((clockTickCounter_f_0 < 20) && (clockTickCounter_f_0 >= 0));

    /* DataStoreWrite: '<S3>/COMM-CHECK-OUT' */
    M_CHK_NV_V = M_CHK_V_NV;

    /* DataStoreWrite: '<S3>/COMM-OK' incorporates:
     *  Logic: '<S3>/Logical Operator'
     */
    NONVITALMAIN_DW.M_NVCOMM_OK = (CBI_FAIL_COMM1 || CBI_FAIL_COMM2);

    /* SignalConversion: '<Root>/TmpSignal ConversionAtBUTTON-IND-DOInport1' */
    rty_BUTTONINDDO[0] = rtb_JL10PBEDO;
    rty_BUTTONINDDO[1] = rtb_J12APBEDO;
    rty_BUTTONINDDO[2] = rtb_J12BPBEDO;
    rty_BUTTONINDDO[3] = rtb_J14PBEDO;
    rty_BUTTONINDDO[4] = rtb_JL20PBEDO;
    rty_BUTTONINDDO[5] = rtb_J22APBEDO;
    rty_BUTTONINDDO[6] = rtb_J22BPBEDO;
    rty_BUTTONINDDO[7] = rtb_J24PBEDO;
    rty_BUTTONINDDO[8] = rtb_X10PBEDO;
    rty_BUTTONINDDO[9] = rtb_X14PBEDO;
    rty_BUTTONINDDO[10] = rtb_X20PBEDO;
    rty_BUTTONINDDO[11] = rtb_X24PBEDO;
    rty_BUTTONINDDO[12] = rtb_JL10AREDO;
    rty_BUTTONINDDO[13] = rtb_J12AAREDO;
    rty_BUTTONINDDO[14] = rtb_J12BAREDO;
    rty_BUTTONINDDO[15] = rtb_J14AREDO;
    rty_BUTTONINDDO[16] = rtb_JL20AREDO;
    rty_BUTTONINDDO[17] = rtb_J22AAREDO;
    rty_BUTTONINDDO[18] = rtb_J22BAREDO;
    rty_BUTTONINDDO[19] = rtb_J24AREDO;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtCBTC-IND-DOInport1' */
    rty_CBTCINDDO[0] = rtb_T1PSD1;
    rty_CBTCINDDO[1] = rtb_T1PSD2;
    rty_CBTCINDDO[2] = rtb_TIBPSD1;
    rty_CBTCINDDO[3] = rtb_TIBPSD2;
    rty_CBTCINDDO[4] = rtb_T2PSD1;
    rty_CBTCINDDO[5] = rtb_T2PSD2;
    rty_CBTCINDDO[6] = rtb_T3PSD1;
    rty_CBTCINDDO[7] = rtb_T3PSD2;
    rty_CBTCINDDO[8] = rtb_T1ESB1;
    rty_CBTCINDDO[9] = rtb_T1ESB2;
    rty_CBTCINDDO[10] = rtb_TIBESB1;
    rty_CBTCINDDO[11] = rtb_TIBESB2;
    rty_CBTCINDDO[12] = rtb_T2ESB1;
    rty_CBTCINDDO[13] = rtb_T2ESB2;
    rty_CBTCINDDO[14] = rtb_T3ESB1;
    rty_CBTCINDDO[15] = rtb_T3ESB2;
    rty_CBTCINDDO[16] = rtb_T1ED1;
    rty_CBTCINDDO[17] = rtb_T1ED2;
    rty_CBTCINDDO[18] = rtb_T1ED3;
    rty_CBTCINDDO[19] = rtb_T1ED4;
    rty_CBTCINDDO[20] = rtb_TIBED1;
    rty_CBTCINDDO[21] = rtb_TIBED2;
    rty_CBTCINDDO[22] = rtb_TIBED3;
    rty_CBTCINDDO[23] = rtb_TIBED4;
    rty_CBTCINDDO[24] = rtb_T2ED1;
    rty_CBTCINDDO[25] = rtb_T2ED2;
    rty_CBTCINDDO[26] = rtb_T2ED3;
    rty_CBTCINDDO[27] = rtb_T2ED4;
    rty_CBTCINDDO[28] = rtb_T3ED1;
    rty_CBTCINDDO[29] = rtb_T3ED2;
    rty_CBTCINDDO[30] = rtb_T3ED3;
    rty_CBTCINDDO[31] = rtb_T3ED4;
    rty_CBTCINDDO[32] = rtb_FROMDEPFEDO;
    rty_CBTCINDDO[33] = rtb_TODEPFEDO;
    rty_CBTCINDDO[34] = rtb_FROMDEPFLEDO;
    rty_CBTCINDDO[35] = rtb_TODEPFLEDO;
    rty_CBTCINDDO[36] = rtb_FROMDEPPBEDO;
    rty_CBTCINDDO[37] = rtb_TODEPPBEDO;
    rty_CBTCINDDO[38] = rtb_TWTCTDO;
    rty_CBTCINDDO[39] = rtb_TBWCTDO;
    rty_CBTCINDDO[40] = rtb_TPRCTDO;
    rty_CBTCINDDO[41] = rtb_WZCTDO;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtCBTC-TOInport1' */
    rty_CBTCTO[0] = rtb_VSB1;
    rty_CBTCTO[1] = rtb_VSB2;
    rty_CBTCTO[2] = rtb_VSB3;
    rty_CBTCTO[3] = rtb_VSB4;
    rty_CBTCTO[4] = rtb_VSB5;
    rty_CBTCTO[5] = rtb_VSB6;
    rty_CBTCTO[6] = rtb_VSB7;
    rty_CBTCTO[7] = rtb_VSB8;
    rty_CBTCTO[8] = rtb_VSB9;
    rty_CBTCTO[9] = rtb_VSB10;
    rty_CBTCTO[10] = rtb_VSB11;
    rty_CBTCTO[11] = rtb_VSB12;
    rty_CBTCTO[12] = rtb_VSB13;
    rty_CBTCTO[13] = rtb_VSB14;
    rty_CBTCTO[14] = rtb_VSB15;
    rty_CBTCTO[15] = rtb_VSB16;
    rty_CBTCTO[16] = rtb_VSB17;
    rty_CBTCTO[17] = rtb_VSB18;
    rty_CBTCTO[18] = rtb_VSB19;
    rty_CBTCTO[19] = rtb_VSB20;
    rty_CBTCTO[20] = rtb_VSB21;
    rty_CBTCTO[21] = rtb_VSB22;
    rty_CBTCTO[22] = rtb_VSB23;
    rty_CBTCTO[23] = rtb_VSB24;
    rty_CBTCTO[24] = rtb_VSB25;
    rty_CBTCTO[25] = rtb_VSB26;
    rty_CBTCTO[26] = rtb_VSB27;
    rty_CBTCTO[27] = rtb_T1TSBPBDI;
    rty_CBTCTO[28] = rtb_TIBTSBPBDI;
    rty_CBTCTO[29] = rtb_T2TSBPBDI;
    rty_CBTCTO[30] = rtb_T3TSBPBDI;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtDEP-VAR-TOInport1' */
    rty_DEPVARTO[0] = rtb_JL10DEPSREQ;
    rty_DEPVARTO[1] = rtb_JL20DEPSREQ;
    rty_DEPVARTO[2] = rtb_DEPX10SREQ;
    rty_DEPVARTO[3] = rtb_DEPX20SREQ;
    rty_DEPVARTO[4] = rtb_JL10DEPRS_d;
    rty_DEPVARTO[5] = rtb_JL20DEPRS_gl;
    rty_DEPVARTO[6] = rtb_DEPX10RS_k;
    rty_DEPVARTO[7] = rtb_DEPX20RS_f;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtGLOBAL-IND-DOInport1' */
    rty_GLOBALINDDO[0] = rtb_SISTEM1FAILDO;
    rty_GLOBALINDDO[1] = rtb_SISTEM2FAILDO;
    rty_GLOBALINDDO[2] = rtb_COMM1FAILDO;
    rty_GLOBALINDDO[3] = rtb_COMM2FAILDO;
    rty_GLOBALINDDO[4] = rtb_BUZZERDO;
    rty_GLOBALINDDO[5] = rtb_TPRBANTUDO;
    rty_GLOBALINDDO[6] = rtb_POINTFAILDO;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtN-REQ-TOInport1' */
    rty_NREQTO[0] = rtb_W11A21ANREQ_c;
    rty_NREQTO[1] = rtb_W11B21BNREQ_ka;
    rty_NREQTO[2] = rtb_W21CNREQ_m;
    rty_NREQTO[3] = rtb_W13A23ANREQ_h;
    rty_NREQTO[4] = rtb_W13B23BNREQ;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtOOC-TOInport1' */
    rty_OOCTO[0] = rtb_W11A21AOOC_bp;
    rty_OOCTO[1] = rtb_W11B21BOOC_c;
    rty_OOCTO[2] = rtb_W21CROOC;
    rty_OOCTO[3] = rtb_W13A23AROOC;
    rty_OOCTO[4] = rtb_W13B23BROOC;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtPOINT-IND-DOInport1' */
    rty_POINTINDDO[0] = rtb_W11ABEDO;
    rty_POINTINDDO[1] = rtb_W11BBEDO;
    rty_POINTINDDO[2] = rtb_W13ABEDO;
    rty_POINTINDDO[3] = rtb_W13BBEDO;
    rty_POINTINDDO[4] = rtb_W21ABEDO;
    rty_POINTINDDO[5] = rtb_W21BBEDO;
    rty_POINTINDDO[6] = rtb_W21CBEDO;
    rty_POINTINDDO[7] = rtb_W23ABEDO;
    rty_POINTINDDO[8] = rtb_W23BBEDO;
    rty_POINTINDDO[9] = rtb_W11ALEDO;
    rty_POINTINDDO[10] = rtb_W11BLEDO;
    rty_POINTINDDO[11] = rtb_W13ALEDO;
    rty_POINTINDDO[12] = rtb_W13BLEDO;
    rty_POINTINDDO[13] = rtb_W21ALEDO;
    rty_POINTINDDO[14] = rtb_W21BLEDO;
    rty_POINTINDDO[15] = rtb_W21CLEDO;
    rty_POINTINDDO[16] = rtb_W23ALEDO;
    rty_POINTINDDO[17] = rtb_W23BLEDO;
    rty_POINTINDDO[18] = DO_INDSW_W11A_NWE_0;
    rty_POINTINDDO[19] = DO_INDSW_W11B_NWE_0;
    rty_POINTINDDO[20] = DO_INDSW_W13A_NWE_0;
    rty_POINTINDDO[21] = DO_INDSW_W13B_NWE_0;
    rty_POINTINDDO[22] = DO_INDSW_W21A_NWE_0;
    rty_POINTINDDO[23] = DO_INDSW_W21B_NWE_0;
    rty_POINTINDDO[24] = DO_INDSW_W21C_NWE_0;
    rty_POINTINDDO[25] = DO_INDSW_W23A_NWE_0;
    rty_POINTINDDO[26] = DO_INDSW_W23B_NWE_0;
    rty_POINTINDDO[27] = rtb_W11ANWTEDO;
    rty_POINTINDDO[28] = rtb_W11BNWTEDO;
    rty_POINTINDDO[29] = rtb_W13ANWTEDO;
    rty_POINTINDDO[30] = rtb_W13BNWTEDO;
    rty_POINTINDDO[31] = rtb_W21ANWTEDO;
    rty_POINTINDDO[32] = rtb_W21BNWTEDO;
    rty_POINTINDDO[33] = rtb_W21CNWTEDO;
    rty_POINTINDDO[34] = rtb_W23ANWTEDO;
    rty_POINTINDDO[35] = rtb_W23BNWTEDO;
    rty_POINTINDDO[36] = rtb_W11ANWREDO;
    rty_POINTINDDO[37] = rtb_W11BNWREDO;
    rty_POINTINDDO[38] = rtb_W13ANWREDO;
    rty_POINTINDDO[39] = rtb_W13BNWREDO;
    rty_POINTINDDO[40] = rtb_W21ANWREDO;
    rty_POINTINDDO[41] = rtb_W21BNWREDO;
    rty_POINTINDDO[42] = rtb_W21CNWREDO;
    rty_POINTINDDO[43] = rtb_W23ANWREDO;
    rty_POINTINDDO[44] = rtb_W23BNWREDO;
    rty_POINTINDDO[45] = rtb_W11ANWBEDO;
    rty_POINTINDDO[46] = rtb_W11BNWBEDO;
    rty_POINTINDDO[47] = rtb_W13ANWBEDO;
    rty_POINTINDDO[48] = rtb_W13BNWBEDO;
    rty_POINTINDDO[49] = rtb_W21ANWBEDO;
    rty_POINTINDDO[50] = rtb_W21BNWBEDO;
    rty_POINTINDDO[51] = rtb_W21CNWBEDO;
    rty_POINTINDDO[52] = rtb_W23ANWBEDO;
    rty_POINTINDDO[53] = rtb_W23BNWBEDO;
    rty_POINTINDDO[54] = DO_INDSW_W11A_RWE_0;
    rty_POINTINDDO[55] = DO_INDSW_W11B_RWE_0;
    rty_POINTINDDO[56] = DO_INDSW_W13A_RWE_0;
    rty_POINTINDDO[57] = DO_INDSW_W13B_RWE_0;
    rty_POINTINDDO[58] = DO_INDSW_W21A_RWE_0;
    rty_POINTINDDO[59] = DO_INDSW_W21B_RWE_0;
    rty_POINTINDDO[60] = DO_INDSW_W21C_RWE_0;
    rty_POINTINDDO[61] = DO_INDSW_W23A_RWE_0;
    rty_POINTINDDO[62] = DO_INDSW_W23B_RWE;
    rty_POINTINDDO[63] = rtb_W11ARWTEDO;
    rty_POINTINDDO[64] = rtb_W11BRWTEDO;
    rty_POINTINDDO[65] = rtb_W13ARWTEDO;
    rty_POINTINDDO[66] = rtb_W13BRWTEDO;
    rty_POINTINDDO[67] = rtb_W21ARWTEDO;
    rty_POINTINDDO[68] = rtb_W21BRWTEDO;
    rty_POINTINDDO[69] = rtb_W21CRWTEDO;
    rty_POINTINDDO[70] = rtb_W23ARWTEDO;
    rty_POINTINDDO[71] = rtb_W23BRWTEDO;
    rty_POINTINDDO[72] = rtb_W11ARWREDO;
    rty_POINTINDDO[73] = rtb_W11BRWREDO;
    rty_POINTINDDO[74] = rtb_W13ARWREDO;
    rty_POINTINDDO[75] = rtb_W13BRWREDO;
    rty_POINTINDDO[76] = rtb_W21ARWREDO;
    rty_POINTINDDO[77] = rtb_W21BRWREDO;
    rty_POINTINDDO[78] = rtb_W21CRWREDO;
    rty_POINTINDDO[79] = rtb_W23ARWREDO;
    rty_POINTINDDO[80] = rtb_W23BRWREDO;
    rty_POINTINDDO[81] = rtb_W11ARWBEDO;
    rty_POINTINDDO[82] = rtb_W11BRWBEDO;
    rty_POINTINDDO[83] = rtb_W13ARWBEDO;
    rty_POINTINDDO[84] = rtb_W13BRWBEDO;
    rty_POINTINDDO[85] = rtb_W21ARWBEDO;
    rty_POINTINDDO[86] = rtb_W21BRWBEDO;
    rty_POINTINDDO[87] = rtb_W21CRWBEDO;
    rty_POINTINDDO[88] = rtb_W23ARWBEDO;
    rty_POINTINDDO[89] = rtb_W23BRWBEDO;
    rty_POINTINDDO[90] = rtb_W11ANTEDO;
    rty_POINTINDDO[91] = rtb_W11BNTEDO;
    rty_POINTINDDO[92] = rtb_W13ANTEDO;
    rty_POINTINDDO[93] = rtb_W13BNTEDO;
    rty_POINTINDDO[94] = rtb_W21ANTEDO;
    rty_POINTINDDO[95] = rtb_W21BNTEDO;
    rty_POINTINDDO[96] = rtb_W21CNTEDO;
    rty_POINTINDDO[97] = rtb_W23ANTEDO;
    rty_POINTINDDO[98] = rtb_W23BNTEDO;
    rty_POINTINDDO[99] = rtb_W11ANREDO;
    rty_POINTINDDO[100] = rtb_W11BNREDO;
    rty_POINTINDDO[101] = rtb_W13ANREDO;
    rty_POINTINDDO[102] = rtb_W13BNREDO;
    rty_POINTINDDO[103] = rtb_W21ANREDO;
    rty_POINTINDDO[104] = rtb_W21BNREDO;
    rty_POINTINDDO[105] = rtb_W21CNREDO;
    rty_POINTINDDO[106] = rtb_W23ANREDO;
    rty_POINTINDDO[107] = rtb_W23BNREDO;
    rty_POINTINDDO[108] = rtb_W11ANBEDO;
    rty_POINTINDDO[109] = rtb_W11BNBEDO;
    rty_POINTINDDO[110] = rtb_W13ANBEDO;
    rty_POINTINDDO[111] = rtb_W13BNBEDO;
    rty_POINTINDDO[112] = rtb_W21ANBEDO;
    rty_POINTINDDO[113] = rtb_W21BNBEDO;
    rty_POINTINDDO[114] = rtb_W21CNBEDO;
    rty_POINTINDDO[115] = rtb_W23ANBEDO;
    rty_POINTINDDO[116] = rtb_W23BNBEDO;
    rty_POINTINDDO[117] = rtb_W11ARTEDO;
    rty_POINTINDDO[118] = rtb_W11BRTEDO;
    rty_POINTINDDO[119] = rtb_W13ARTEDO;
    rty_POINTINDDO[120] = rtb_W13BRTEDO;
    rty_POINTINDDO[121] = rtb_W21ARTEDO;
    rty_POINTINDDO[122] = rtb_W21BRTEDO;
    rty_POINTINDDO[123] = rtb_W21CRTEDO;
    rty_POINTINDDO[124] = rtb_W23ARTEDO;
    rty_POINTINDDO[125] = rtb_W23BRTEDO;
    rty_POINTINDDO[126] = rtb_W11ARREDO;
    rty_POINTINDDO[127] = rtb_W11BRREDO;
    rty_POINTINDDO[128] = rtb_W13ARREDO;
    rty_POINTINDDO[129] = rtb_W13BRREDO;
    rty_POINTINDDO[130] = rtb_W21ARREDO;
    rty_POINTINDDO[131] = rtb_W21BRREDO;
    rty_POINTINDDO[132] = rtb_W21CRREDO;
    rty_POINTINDDO[133] = rtb_W23ARREDO;
    rty_POINTINDDO[134] = rtb_W23BRREDO;
    rty_POINTINDDO[135] = rtb_W11ARBEDO;
    rty_POINTINDDO[136] = rtb_W11BRBEDO;
    rty_POINTINDDO[137] = rtb_W13ARBEDO;
    rty_POINTINDDO[138] = rtb_W13BRBEDO;
    rty_POINTINDDO[139] = rtb_W21ARBEDO;
    rty_POINTINDDO[140] = rtb_W21BRBEDO;
    rty_POINTINDDO[141] = rtb_W21CRBEDO;
    rty_POINTINDDO[142] = rtb_W23ARBEDO;
    rty_POINTINDDO[143] = rtb_W23BRBEDO;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtR-REQ-TOInport1' */
    rty_RREQTO[0] = rtb_W11A21ARREQ_i;
    rty_RREQTO[1] = rtb_W11B21BRREQ_n;
    rty_RREQTO[2] = rtb_W21CRREQ_f;
    rty_RREQTO[3] = rtb_W13A23ARREQ_k;
    rty_RREQTO[4] = rtb_W13B23BRREQ;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtRRLSPB-TOInport1' */
    rty_RRLSPBTO[0] = rtb_X10RRLSPBCTRL;
    rty_RRLSPBTO[1] = rtb_X20RRLSPBCTRL;
    rty_RRLSPBTO[2] = rtb_J12ARRLSPBCTRL;
    rty_RRLSPBTO[3] = rtb_J22ARRLSPBCTRL;
    rty_RRLSPBTO[4] = rtb_J12BRRLSPBCTRL;
    rty_RRLSPBTO[5] = rtb_J22BRRLSPBCTRL;
    rty_RRLSPBTO[6] = rtb_X14RRLSPBCTRL;
    rty_RRLSPBTO[7] = rtb_X24RRLSPBCTRL;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtRST-TOInport1' */
    rty_RSTTO[0] = rtb_JL10RSTCTRL_g;
    rty_RSTTO[1] = rtb_JL20RSTCTRL_m;
    rty_RSTTO[2] = rtb_J12ARSTCTRL_f;
    rty_RSTTO[3] = rtb_J22ARSTCTRL_f;
    rty_RSTTO[4] = rtb_J14RSTCTRL_d;
    rty_RSTTO[5] = rtb_J24RSTCTRL_m;
    rty_RSTTO[6] = rtb_J12BRSTCTRL_p;
    rty_RSTTO[7] = rtb_J22BRSTCTRL_pg;
    rty_RSTTO[8] = rtb_DEPRSTCTRL_p;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtSIGNAL-IND-DOInport1' */
    rty_SIGNALINDDO[0] = rtb_JL10CGEDO;
    rty_SIGNALINDDO[1] = rtb_J12ACGEDO;
    rty_SIGNALINDDO[2] = rtb_J12BCGEDO;
    rty_SIGNALINDDO[3] = rtb_J14CGEDO;
    rty_SIGNALINDDO[4] = rtb_JL20CGEDO;
    rty_SIGNALINDDO[5] = rtb_J22ACGEDO;
    rty_SIGNALINDDO[6] = rtb_J22BCGEDO;
    rty_SIGNALINDDO[7] = rtb_J24CGEDO;
    rty_SIGNALINDDO[8] = rtb_JL10RGEDO;
    rty_SIGNALINDDO[9] = rtb_J12ARGEDO;
    rty_SIGNALINDDO[10] = rtb_J12BRGEDO;
    rty_SIGNALINDDO[11] = rtb_J14RGEDO;
    rty_SIGNALINDDO[12] = rtb_JL20RGEDO;
    rty_SIGNALINDDO[13] = rtb_J22ARGEDO;
    rty_SIGNALINDDO[14] = rtb_J22BRGEDO;
    rty_SIGNALINDDO[15] = rtb_J24RGEDO;
    rty_SIGNALINDDO[16] = rtb_JL10WGEDO;
    rty_SIGNALINDDO[17] = rtb_JL20WGEDO;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtSWINIT-TOInport1' */
    rty_SWINITTO[0] = rtb_W11A21ASWINIT_g;
    rty_SWINITTO[1] = rtb_W11B21BSWINIT_ae;
    rty_SWINITTO[2] = rtb_W21CSWINIT_j;
    rty_SWINITTO[3] = rtb_W13A23ASWINIT_cd;
    rty_SWINITTO[4] = rtb_W13B23BSWINIT_k;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtSWRLSPB-TOInport1' */
    rty_SWRLSPBTO[0] = rtb_W11A21ASWRLSPBCTRL;
    rty_SWRLSPBTO[1] = rtb_W11B21BSWRLSPBCTRL;
    rty_SWRLSPBTO[2] = rtb_W21CSWRLSPBCTRL;
    rty_SWRLSPBTO[3] = rtb_W13A23ASWRLSPBCTRL;
    rty_SWRLSPBTO[4] = rtb_W13B23BSWRLSPBCTRL;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtT-REQ-TOInport1' */
    rty_TREQTO[0] = rtb_JL10J12BTREQ;
    rty_TREQTO[1] = rtb_JL10J22BTREQ;
    rty_TREQTO[2] = rtb_JL20J12BTREQ;
    rty_TREQTO[3] = rtb_JL20J22BTREQ;
    rty_TREQTO[4] = rtb_J12BX14TREQ;
    rty_TREQTO[5] = rtb_J12BX24TREQ;
    rty_TREQTO[6] = rtb_J22BX14TREQ;
    rty_TREQTO[7] = rtb_J22BX24TREQ;
    rty_TREQTO[8] = rtb_J14J12ATREQ;
    rty_TREQTO[9] = rtb_J14J22ATREQ;
    rty_TREQTO[10] = rtb_J24J12ATREQ;
    rty_TREQTO[11] = rtb_J24J22ATREQ;
    rty_TREQTO[12] = rtb_J12AX10TREQ;
    rty_TREQTO[13] = rtb_J12AX20TREQ;
    rty_TREQTO[14] = rtb_J22AX10TREQ;
    rty_TREQTO[15] = rtb_J22AX20TREQ;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtTO-ARSInport1' */
    rty_TOARS[0] = rtb_JL10J12BD;
    rty_TOARS[1] = rtb_JL10J22BD;
    rty_TOARS[2] = rtb_JL20J12BD;
    rty_TOARS[3] = rtb_JL20J22BD;
    rty_TOARS[4] = rtb_J12BX14H;
    rty_TOARS[5] = rtb_J12BX24H;
    rty_TOARS[6] = rtb_J22BX14H;
    rty_TOARS[7] = rtb_J22BX24H;
    rty_TOARS[8] = rtb_J14J12AD;
    rty_TOARS[9] = rtb_J14J22AD;
    rty_TOARS[10] = rtb_J24J12AD;
    rty_TOARS[11] = rtb_J24J22AD;
    rty_TOARS[12] = rtb_J12AX10H;
    rty_TOARS[13] = rtb_J12AX20H;
    rty_TOARS[14] = rtb_J22AX10H;
    rty_TOARS[15] = rtb_J22AX20H;
    rty_TOARS[16] = rtb_JL10DEPS;
    rty_TOARS[17] = rtb_JL20DEPS;
    rty_TOARS[18] = rtb_DEPX10S;
    rty_TOARS[19] = rtb_DEPX20S;
    rty_TOARS[20] = rtb_JL10RSTCTRL_g;
    rty_TOARS[21] = rtb_JL20RSTCTRL_m;
    rty_TOARS[22] = rtb_J12ARSTCTRL_f;
    rty_TOARS[23] = rtb_J22ARSTCTRL_f;
    rty_TOARS[24] = rtb_J14RSTCTRL_d;
    rty_TOARS[25] = rtb_J24RSTCTRL_m;
    rty_TOARS[26] = rtb_J12BRSTCTRL_p;
    rty_TOARS[27] = rtb_J22BRSTCTRL_pg;
    rty_TOARS[28] = rtb_JL20RSTCTRL1;
    rty_TOARS[29] = rtb_J12ARSTCTRL1;
    rty_TOARS[30] = rtb_J22ARSTCTRL1;
    rty_TOARS[31] = rtb_J14RSTCTRL1;
    rty_TOARS[32] = rtb_J24RSTCTRL1;
    rty_TOARS[33] = rtb_J12BRSTCTRL1;
    rty_TOARS[34] = rtb_J22BRSTCTRL1;
    rty_TOARS[35] = rtb_DEPRSTCTRL1;
    rty_TOARS[36] = rtb_DEPRSTCTRL_p;
    rty_TOARS[37] = rtb_DEPRSTCTRL2;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtTO-DEPInport1' */
    rty_TODEP[0] = rtb_VDR_de;
    rty_TODEP[1] = rtb_FLASH1S_p;
    rty_TODEP[2] = rtb_FLASH05S_f1;
    rty_TODEP[3] = rtb_JL10DEPRS_d;
    rty_TODEP[4] = rtb_JL20DEPRS_gl;
    rty_TODEP[5] = rtb_DEPX10RS_k;
    rty_TODEP[6] = rtb_DEPX20RS_f;
    rty_TODEP[7] = rtb_JL10GRDO_by;
    rty_TODEP[8] = rtb_JL20GRDO_a;
    rty_TODEP[9] = rtb_AS_m;
    rty_TODEP[10] = rtb_DEPRRLS_f;
    rty_TODEP[11] = rtb_u1CTP_cw;
    rty_TODEP[12] = rtb_u1CSES_b;
    rty_TODEP[13] = rtb_u1CSWS_hl;
    rty_TODEP[14] = rtb_W21CNTEDO;
    rty_TODEP[15] = rtb_W21CNREDO;
    rty_TODEP[16] = rtb_W21CNBEDO;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtTRACK-IND-DOInport1' */
    rty_TRACKINDDO[0] = rtb_u0AREDO;
    rty_TRACKINDDO[1] = rtb_u0BREDO;
    rty_TRACKINDDO[2] = rtb_u1AREDO;
    rty_TRACKINDDO[3] = rtb_u1BREDO;
    rty_TRACKINDDO[4] = rtb_u2AREDO;
    rty_TRACKINDDO[5] = rtb_u2BREDO;
    rty_TRACKINDDO[6] = rtb_u2CREDO;
    rty_TRACKINDDO[7] = rtb_u2DREDO;
    rty_TRACKINDDO[8] = rtb_u2EREDO;
    rty_TRACKINDDO[9] = rtb_u3AREDO;
    rty_TRACKINDDO[10] = rtb_u3BREDO;
    rty_TRACKINDDO[11] = rtb_u4AREDO;
    rty_TRACKINDDO[12] = rtb_u4BREDO;
    rty_TRACKINDDO[13] = rtb_u0AREDO_m;
    rty_TRACKINDDO[14] = rtb_u0BREDO_l;
    rty_TRACKINDDO[15] = rtb_u1AREDO_h;
    rty_TRACKINDDO[16] = rtb_u1BREDO_n;
    rty_TRACKINDDO[17] = rtb_u1CREDO;
    rty_TRACKINDDO[18] = rtb_u2AREDO_f;
    rty_TRACKINDDO[19] = rtb_u2BREDO_l;
    rty_TRACKINDDO[20] = rtb_u2CREDO_n;
    rty_TRACKINDDO[21] = rtb_u2DREDO_j;
    rty_TRACKINDDO[22] = rtb_u2EREDO_b;
    rty_TRACKINDDO[23] = rtb_u3AREDO_p;
    rty_TRACKINDDO[24] = rtb_u3BREDO_e;
    rty_TRACKINDDO[25] = rtb_u4AREDO_e;
    rty_TRACKINDDO[26] = rtb_u4BREDO_e;
    rty_TRACKINDDO[27] = rtb_u0ATEDO;
    rty_TRACKINDDO[28] = rtb_u0BTEDO;
    rty_TRACKINDDO[29] = rtb_u1ATEDO;
    rty_TRACKINDDO[30] = rtb_u1BTEDO;
    rty_TRACKINDDO[31] = rtb_u2ATEDO;
    rty_TRACKINDDO[32] = rtb_u2BTEDO;
    rty_TRACKINDDO[33] = rtb_u2CTEDO;
    rty_TRACKINDDO[34] = rtb_u2DTEDO;
    rty_TRACKINDDO[35] = rtb_u2ETEDO;
    rty_TRACKINDDO[36] = rtb_u3ATEDO;
    rty_TRACKINDDO[37] = rtb_u3BTEDO;
    rty_TRACKINDDO[38] = rtb_u4ATEDO;
    rty_TRACKINDDO[39] = rtb_u4BTEDO;
    rty_TRACKINDDO[40] = rtb_u0ATEDO_j;
    rty_TRACKINDDO[41] = rtb_u0BTEDO_j;
    rty_TRACKINDDO[42] = rtb_u1ATEDO_b;
    rty_TRACKINDDO[43] = rtb_u1BTEDO_p;
    rty_TRACKINDDO[44] = rtb_u1CTEDO;
    rty_TRACKINDDO[45] = rtb_u2ATEDO_l;
    rty_TRACKINDDO[46] = rtb_u2BTEDO_n;
    rty_TRACKINDDO[47] = rtb_u2CTEDO_h;
    rty_TRACKINDDO[48] = rtb_u2DTEDO_j;
    rty_TRACKINDDO[49] = rtb_u2ETEDO_g;
    rty_TRACKINDDO[50] = rtb_u3ATEDO_p;
    rty_TRACKINDDO[51] = rtb_u3BTEDO_g;
    rty_TRACKINDDO[52] = rtb_u4ATEDO_d;
    rty_TRACKINDDO[53] = rtb_u4BTEDO_k;
    rty_TRACKINDDO[54] = rtb_u0ABEDO;
    rty_TRACKINDDO[55] = rtb_u0BBEDO;
    rty_TRACKINDDO[56] = rtb_u1ABEDO;
    rty_TRACKINDDO[57] = rtb_u1BBEDO;
    rty_TRACKINDDO[58] = rtb_u2ABEDO;
    rty_TRACKINDDO[59] = rtb_u2BBEDO;
    rty_TRACKINDDO[60] = rtb_u2CBEDO;
    rty_TRACKINDDO[61] = rtb_u2DBEDO;
    rty_TRACKINDDO[62] = rtb_u2EBEDO;
    rty_TRACKINDDO[63] = rtb_u3ABEDO;
    rty_TRACKINDDO[64] = rtb_u3BBEDO;
    rty_TRACKINDDO[65] = rtb_u4ABEDO;
    rty_TRACKINDDO[66] = rtb_u4BBEDO;
    rty_TRACKINDDO[67] = rtb_u0ABEDO_a;
    rty_TRACKINDDO[68] = rtb_u0BBEDO_m;
    rty_TRACKINDDO[69] = rtb_u1ABEDO_p;
    rty_TRACKINDDO[70] = rtb_u1BBEDO_b;
    rty_TRACKINDDO[71] = rtb_u1CBEDO;
    rty_TRACKINDDO[72] = rtb_u2ABEDO_h;
    rty_TRACKINDDO[73] = rtb_u2BBEDO_a;
    rty_TRACKINDDO[74] = rtb_u2CBEDO_o;
    rty_TRACKINDDO[75] = rtb_u2DBEDO_b;
    rty_TRACKINDDO[76] = rtb_u2EBEDO_o;
    rty_TRACKINDDO[77] = rtb_u3ABEDO_l;
    rty_TRACKINDDO[78] = rtb_u3BBEDO_p;
    rty_TRACKINDDO[79] = rtb_u4ABEDO_n;
    rty_TRACKINDDO[80] = rtb_u4BBEDO_d;
  }

  DO_INDSW_W11A_NWE_0 = DO_INDSW_W11A_NWE;
  DO_INDSW_W11A_RWE_0 = DO_INDSW_W11A_RWE;
  DO_INDSW_W11B_NWE_0 = DO_INDSW_W11B_NWE;
  DO_INDSW_W11B_RWE_0 = DO_INDSW_W11B_RWE;
  DO_INDSW_W13A_NWE_0 = DO_INDSW_W13A_NWE;
  DO_INDSW_W13A_RWE_0 = DO_INDSW_W13A_RWE;
  DO_INDSW_W13B_NWE_0 = DO_INDSW_W13B_NWE;
  DO_INDSW_W13B_RWE_0 = DO_INDSW_W13B_RWE;
  DO_INDSW_W21A_NWE_0 = DO_INDSW_W21A_NWE;
  DO_INDSW_W21A_RWE_0 = DO_INDSW_W21A_RWE;
  DO_INDSW_W21B_NWE_0 = DO_INDSW_W21B_NWE;
  DO_INDSW_W21B_RWE_0 = DO_INDSW_W21B_RWE;
  DO_INDSW_W21C_NWE_0 = DO_INDSW_W21C_NWE;
  DO_INDSW_W21C_RWE_0 = DO_INDSW_W21C_RWE;
  DO_INDSW_W23A_NWE_0 = DO_INDSW_W23A_NWE;
  DO_INDSW_W23A_RWE_0 = DO_INDSW_W23A_RWE;
  DO_INDSW_W23B_NWE_0 = DO_INDSW_W23B_NWE;
  DO_INDSW_W23B_RWE = rtb_RWE;
  clockTickCounter_0 = clockTickCounter;
  clockTickCounter_f_0 = clockTickCounter_f;

  /* Logic: '<S568>/AND1' */
  NONVITALMAIN_DW.AND1_j = AND1_j;

  /* Logic: '<S570>/AND14' */
  NONVITALMAIN_DW.AND14 = AND14;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtPOINT-IND-DOInport1' */
  NONVITALMAIN_DW.DO_INDSW_W11A_NWE = DO_INDSW_W11A_NWE_0;
  NONVITALMAIN_DW.DO_INDSW_W11B_NWE = DO_INDSW_W11B_NWE_0;
  NONVITALMAIN_DW.DO_INDSW_W13A_NWE = DO_INDSW_W13A_NWE_0;
  NONVITALMAIN_DW.DO_INDSW_W13B_NWE = DO_INDSW_W13B_NWE_0;
  NONVITALMAIN_DW.DO_INDSW_W21A_NWE = DO_INDSW_W21A_NWE_0;
  NONVITALMAIN_DW.DO_INDSW_W21B_NWE = DO_INDSW_W21B_NWE_0;
  NONVITALMAIN_DW.DO_INDSW_W21C_NWE = DO_INDSW_W21C_NWE_0;
  NONVITALMAIN_DW.DO_INDSW_W23A_NWE = DO_INDSW_W23A_NWE_0;
  NONVITALMAIN_DW.DO_INDSW_W23B_NWE = DO_INDSW_W23B_NWE_0;
  NONVITALMAIN_DW.DO_INDSW_W11A_RWE = DO_INDSW_W11A_RWE_0;
  NONVITALMAIN_DW.DO_INDSW_W11B_RWE = DO_INDSW_W11B_RWE_0;
  NONVITALMAIN_DW.DO_INDSW_W13A_RWE = DO_INDSW_W13A_RWE_0;
  NONVITALMAIN_DW.DO_INDSW_W13B_RWE = DO_INDSW_W13B_RWE_0;
  NONVITALMAIN_DW.DO_INDSW_W21A_RWE = DO_INDSW_W21A_RWE_0;
  NONVITALMAIN_DW.DO_INDSW_W21B_RWE = DO_INDSW_W21B_RWE_0;
  NONVITALMAIN_DW.DO_INDSW_W21C_RWE = DO_INDSW_W21C_RWE_0;
  NONVITALMAIN_DW.DO_INDSW_W23A_RWE = DO_INDSW_W23A_RWE_0;
  NONVITALMAIN_DW.DO_INDSW_W23B_RWE = DO_INDSW_W23B_RWE;
  NONVITALMAIN_DW.M_AR_DEP = M_AR_DEP;
  NONVITALMAIN_DW.M_DO_DEP_GR = M_DO_DEP_GR;
  NONVITALMAIN_DW.M_RRLS_DEP = M_RRLS_DEP;
  NONVITALMAIN_DW.M_CHK_V_NV = M_CHK_V_NV;
  NONVITALMAIN_DW.M_TP_10A = M_TP_10A;
  NONVITALMAIN_DW.M_TP_10B = M_TP_10B;
  NONVITALMAIN_DW.M_TP_11A = M_TP_11A;
  NONVITALMAIN_DW.M_TP_11B = M_TP_11B;
  NONVITALMAIN_DW.M_TP_12A = M_TP_12A;
  NONVITALMAIN_DW.M_TP_12B = M_TP_12B;
  NONVITALMAIN_DW.M_TP_12C = M_TP_12C;
  NONVITALMAIN_DW.M_TP_12D = M_TP_12D;
  NONVITALMAIN_DW.M_TP_12E = M_TP_12E;
  NONVITALMAIN_DW.M_TP_13A = M_TP_13A;
  NONVITALMAIN_DW.M_TP_13B = M_TP_13B;
  NONVITALMAIN_DW.M_TP_14A = M_TP_14A;
  NONVITALMAIN_DW.M_TP_14B = M_TP_14B;
  NONVITALMAIN_DW.M_TP_20A = M_TP_20A;
  NONVITALMAIN_DW.M_TP_20B = M_TP_20B;
  NONVITALMAIN_DW.M_TP_21A = M_TP_21A;
  NONVITALMAIN_DW.M_TP_21B = M_TP_21B;
  NONVITALMAIN_DW.M_TP_21C = M_TP_21C;
  NONVITALMAIN_DW.M_TP_22A = M_TP_22A;
  NONVITALMAIN_DW.M_TP_22B = M_TP_22B;
  NONVITALMAIN_DW.M_TP_22C = M_TP_22C;
  NONVITALMAIN_DW.M_TP_22D = M_TP_22D;
  NONVITALMAIN_DW.M_TP_22E = M_TP_22E;
  NONVITALMAIN_DW.M_TP_23A = M_TP_23A;
  NONVITALMAIN_DW.M_TP_23B = M_TP_23B;
  NONVITALMAIN_DW.M_TP_24A = M_TP_24A;
  NONVITALMAIN_DW.M_TP_24B = M_TP_24B;
  NONVITALMAIN_DW.M_T_ES_10B = M_T_ES_10B;
  NONVITALMAIN_DW.M_T_ES_11A = M_T_ES_11A;
  NONVITALMAIN_DW.M_T_ES_11B = M_T_ES_11B;
  NONVITALMAIN_DW.M_T_ES_12A = M_T_ES_12A;
  NONVITALMAIN_DW.M_T_ES_12B = M_T_ES_12B;
  NONVITALMAIN_DW.M_T_ES_12C = M_T_ES_12C;
  NONVITALMAIN_DW.M_T_ES_12D = M_T_ES_12D;
  NONVITALMAIN_DW.M_T_ES_12E = M_T_ES_12E;
  NONVITALMAIN_DW.M_T_ES_13A = M_T_ES_13A;
  NONVITALMAIN_DW.M_T_ES_13B = M_T_ES_13B;
  NONVITALMAIN_DW.M_T_ES_14A = M_T_ES_14A;
  NONVITALMAIN_DW.M_T_ES_14B = M_T_ES_14B;
  NONVITALMAIN_DW.M_T_ES_20B = M_T_ES_20B;
  NONVITALMAIN_DW.M_T_ES_21A = M_T_ES_21A;
  NONVITALMAIN_DW.M_T_ES_21B = M_T_ES_21B;
  NONVITALMAIN_DW.M_T_ES_21C = M_T_ES_21C;
  NONVITALMAIN_DW.M_T_ES_22A = M_T_ES_22A;
  NONVITALMAIN_DW.M_T_ES_22B = M_T_ES_22B;
  NONVITALMAIN_DW.M_T_ES_22C = M_T_ES_22C;
  NONVITALMAIN_DW.M_T_ES_22D = M_T_ES_22D;
  NONVITALMAIN_DW.M_T_ES_22E = M_T_ES_22E;
  NONVITALMAIN_DW.M_T_ES_23A = M_T_ES_23A;
  NONVITALMAIN_DW.M_T_ES_23B = M_T_ES_23B;
  NONVITALMAIN_DW.M_T_ES_24A = M_T_ES_24A;
  NONVITALMAIN_DW.M_T_ES_24B = M_T_ES_24B;
  NONVITALMAIN_DW.M_T_WS_10A = M_T_WS_10A;
  NONVITALMAIN_DW.M_T_WS_10B = M_T_WS_10B;
  NONVITALMAIN_DW.M_T_WS_11A = M_T_WS_11A;
  NONVITALMAIN_DW.M_T_WS_11B = M_T_WS_11B;
  NONVITALMAIN_DW.M_T_WS_12A = M_T_WS_12A;
  NONVITALMAIN_DW.M_T_WS_12B = M_T_WS_12B;
  NONVITALMAIN_DW.M_T_WS_12C = M_T_WS_12C;
  NONVITALMAIN_DW.M_T_WS_12D = M_T_WS_12D;
  NONVITALMAIN_DW.M_T_WS_12E = M_T_WS_12E;
  NONVITALMAIN_DW.M_T_WS_13A = M_T_WS_13A;
  NONVITALMAIN_DW.M_T_WS_13B = M_T_WS_13B;
  NONVITALMAIN_DW.M_T_WS_14A = M_T_WS_14A;
  NONVITALMAIN_DW.M_T_WS_20A = M_T_WS_20A;
  NONVITALMAIN_DW.M_T_WS_20B = M_T_WS_20B;
  NONVITALMAIN_DW.M_T_WS_21A = M_T_WS_21A;
  NONVITALMAIN_DW.M_T_WS_21B = M_T_WS_21B;
  NONVITALMAIN_DW.M_T_WS_21C = M_T_WS_21C;
  NONVITALMAIN_DW.M_T_WS_22A = M_T_WS_22A;
  NONVITALMAIN_DW.M_T_WS_22B = M_T_WS_22B;
  NONVITALMAIN_DW.M_T_WS_22C = M_T_WS_22C;
  NONVITALMAIN_DW.M_T_WS_22D = M_T_WS_22D;
  NONVITALMAIN_DW.M_T_WS_22E = M_T_WS_22E;
  NONVITALMAIN_DW.M_T_WS_23A = M_T_WS_23A;
  NONVITALMAIN_DW.M_T_WS_23B = M_T_WS_23B;
  NONVITALMAIN_DW.M_T_WS_24A = M_T_WS_24A;
  NONVITALMAIN_DW.M_S_ES_10B = M_S_ES_10B;
  NONVITALMAIN_DW.M_S_ES_11A = M_S_ES_11A;
  NONVITALMAIN_DW.M_S_ES_11B = M_S_ES_11B;
  NONVITALMAIN_DW.M_S_ES_20B = M_S_ES_20B;
  NONVITALMAIN_DW.M_S_ES_21A = M_S_ES_21A;
  NONVITALMAIN_DW.M_S_ES_21B = M_S_ES_21B;
  NONVITALMAIN_DW.M_S_ES_21C = M_S_ES_21C;
  NONVITALMAIN_DW.M_S_WS_10A = M_S_WS_10A;
  NONVITALMAIN_DW.M_S_WS_10B = M_S_WS_10B;
  NONVITALMAIN_DW.M_S_WS_11A = M_S_WS_11A;
  NONVITALMAIN_DW.M_S_WS_11B = M_S_WS_11B;
  NONVITALMAIN_DW.M_S_WS_20A = M_S_WS_20A;
  NONVITALMAIN_DW.M_S_WS_20B = M_S_WS_20B;
  NONVITALMAIN_DW.M_S_WS_21A = M_S_WS_21A;
  NONVITALMAIN_DW.M_S_WS_21B = M_S_WS_21B;
  NONVITALMAIN_DW.M_S_WS_21C = M_S_WS_21C;
  NONVITALMAIN_DW.M_W11A_21A_NWC = M_W11A_21A_NWC;
  NONVITALMAIN_DW.M_W11B_21B_NWC = M_W11B_21B_NWC;
  NONVITALMAIN_DW.M_W13A_23A_NWC = M_W13A_23A_NWC;
  NONVITALMAIN_DW.M_W13B_23B_NWC = M_W13B_23B_NWC;
  NONVITALMAIN_DW.M_W21C_NWC = M_W21C_NWC;
  NONVITALMAIN_DW.M_W11A_21A_NWP = M_W11A_21A_NWP;
  NONVITALMAIN_DW.M_W11B_21B_NWP = M_W11B_21B_NWP;
  NONVITALMAIN_DW.M_W13A_23A_NWP = M_W13A_23A_NWP;
  NONVITALMAIN_DW.M_W13B_23B_NWP = M_W13B_23B_NWP;
  NONVITALMAIN_DW.M_W21C_NWP = M_W21C_NWP;
  NONVITALMAIN_DW.M_W11A_21A_NWZ = M_W11A_21A_NWZ;
  NONVITALMAIN_DW.M_W11B_21B_NWZ = M_W11B_21B_NWZ;
  NONVITALMAIN_DW.M_W13A_23A_NWZ = M_W13A_23A_NWZ;
  NONVITALMAIN_DW.M_W13B_23B_NWZ = M_W13B_23B_NWZ;
  NONVITALMAIN_DW.M_W21C_NWZ = M_W21C_NWZ;
  NONVITALMAIN_DW.M_W11A_21A_NW_TE = M_W11A_21A_NW_TE;
  NONVITALMAIN_DW.M_W11B_21B_NW_TE = M_W11B_21B_NW_TE;
  NONVITALMAIN_DW.M_W13A_23A_NW_TE = M_W13A_23A_NW_TE;
  NONVITALMAIN_DW.M_W13B_23B_NW_TE = M_W13B_23B_NW_TE;
  NONVITALMAIN_DW.M_W21C_NW_TE = M_W21C_NW_TE;
  NONVITALMAIN_DW.M_W11A_21A_RWC = M_W11A_21A_RWC;
  NONVITALMAIN_DW.M_W11B_21B_RWC = M_W11B_21B_RWC;
  NONVITALMAIN_DW.M_W13A_23A_RWC = M_W13A_23A_RWC;
  NONVITALMAIN_DW.M_W13B_23B_RWC = M_W13B_23B_RWC;
  NONVITALMAIN_DW.M_W21C_RWC = M_W21C_RWC;
  NONVITALMAIN_DW.M_W11A_21A_RWP = M_W11A_21A_RWP;
  NONVITALMAIN_DW.M_W11B_21B_RWP = M_W11B_21B_RWP;
  NONVITALMAIN_DW.M_W13A_23A_RWP = M_W13A_23A_RWP;
  NONVITALMAIN_DW.M_W13B_23B_RWP = M_W13B_23B_RWP;
  NONVITALMAIN_DW.M_W21C_RWP = M_W21C_RWP;
  NONVITALMAIN_DW.M_W11A_21A_RWZ = M_W11A_21A_RWZ;
  NONVITALMAIN_DW.M_W11B_21B_RWZ = M_W11B_21B_RWZ;
  NONVITALMAIN_DW.M_W13A_23A_RWZ = M_W13A_23A_RWZ;
  NONVITALMAIN_DW.M_W13B_23B_RWZ = M_W13B_23B_RWZ;
  NONVITALMAIN_DW.M_W21C_RWZ = M_W21C_RWZ;
  NONVITALMAIN_DW.M_W11A_21A_RW_TE = M_W11A_21A_RW_TE;
  NONVITALMAIN_DW.M_W11B_21B_RW_TE = M_W11B_21B_RW_TE;
  NONVITALMAIN_DW.M_W13A_23A_RW_TE = M_W13A_23A_RW_TE;
  NONVITALMAIN_DW.M_W13B_23B_RW_TE = M_W13B_23B_RW_TE;
  NONVITALMAIN_DW.M_W21C_RW_TE = M_W21C_RW_TE;
  NONVITALMAIN_DW.M_W11A_21A_L = M_W11A_21A_L;
  NONVITALMAIN_DW.M_W11B_21B_L = M_W11B_21B_L;
  NONVITALMAIN_DW.M_W13A_23A_L = M_W13A_23A_L;
  NONVITALMAIN_DW.M_W13B_23B_L = M_W13B_23B_L;
  NONVITALMAIN_DW.M_W21C_L = M_W21C_L;
  NONVITALMAIN_DW.M_W11A_21A_LS = M_W11A_21A_LS;
  NONVITALMAIN_DW.M_W11B_21B_LS = M_W11B_21B_LS;
  NONVITALMAIN_DW.M_W13A_23A_LS = M_W13A_23A_LS;
  NONVITALMAIN_DW.M_W13B_23B_LS = M_W13B_23B_LS;
  NONVITALMAIN_DW.M_W21C_LS = M_W21C_LS;
  NONVITALMAIN_DW.M_W11A_21A_SWRLS = M_W11A_21A_SWRLS;
  NONVITALMAIN_DW.M_W11B_21B_SWRLS = M_W11B_21B_SWRLS;
  NONVITALMAIN_DW.M_W13A_23A_SWRLS = M_W13A_23A_SWRLS;
  NONVITALMAIN_DW.M_W13B_23B_SWRLS = M_W13B_23B_SWRLS;
  NONVITALMAIN_DW.M_W21C_SWRLS = M_W21C_SWRLS;
  NONVITALMAIN_DW.M_W11A_21A_TPZ = M_W11A_21A_TPZ;
  NONVITALMAIN_DW.M_W11B_21B_TPZ = M_W11B_21B_TPZ;
  NONVITALMAIN_DW.M_W13A_23A_TPZ = M_W13A_23A_TPZ;
  NONVITALMAIN_DW.M_W13B_23B_TPZ = M_W13B_23B_TPZ;
  NONVITALMAIN_DW.M_W21C_TPZ = M_W21C_TPZ;
  NONVITALMAIN_DW.M_DO_J12A_DR = M_DO_J12A_DR;
  NONVITALMAIN_DW.M_DO_J12B_DR = M_DO_J12B_DR;
  NONVITALMAIN_DW.M_DO_J14_DR = M_DO_J14_DR;
  NONVITALMAIN_DW.M_DO_J22A_DR = M_DO_J22A_DR;
  NONVITALMAIN_DW.M_DO_J22B_DR = M_DO_J22B_DR;
  NONVITALMAIN_DW.M_DO_J24_DR = M_DO_J24_DR;
  NONVITALMAIN_DW.M_DO_JL10_DR = M_DO_JL10_DR;
  NONVITALMAIN_DW.M_DO_JL20_DR = M_DO_JL20_DR;
  NONVITALMAIN_DW.M_DO_JL10_GR = M_DO_JL10_GR;
  NONVITALMAIN_DW.M_DO_JL20_GR = M_DO_JL20_GR;
  NONVITALMAIN_DW.M_AS_T_J12A = M_AS_T_J12A;
  NONVITALMAIN_DW.M_AS_T_J12B = M_AS_T_J12B;
  NONVITALMAIN_DW.M_AS_T_J14 = M_AS_T_J14;
  NONVITALMAIN_DW.M_AS_T_J22A = M_AS_T_J22A;
  NONVITALMAIN_DW.M_AS_T_J22B = M_AS_T_J22B;
  NONVITALMAIN_DW.M_AS_T_J24 = M_AS_T_J24;
  NONVITALMAIN_DW.M_AS_T_JL10 = M_AS_T_JL10;
  NONVITALMAIN_DW.M_AS_T_JL20 = M_AS_T_JL20;
  NONVITALMAIN_DW.M_AS_S_DEP = M_AS_S_DEP;
  NONVITALMAIN_DW.M_AS_S_JL10 = M_AS_S_JL10;
  NONVITALMAIN_DW.M_AS_S_JL20 = M_AS_S_JL20;
  NONVITALMAIN_DW.M_RRLS_J12A = M_RRLS_J12A;
  NONVITALMAIN_DW.M_RRLS_J12B = M_RRLS_J12B;
  NONVITALMAIN_DW.M_RRLS_J22A = M_RRLS_J22A;
  NONVITALMAIN_DW.M_RRLS_J22B = M_RRLS_J22B;
  NONVITALMAIN_DW.M_RRLS_X10 = M_RRLS_X10;
  NONVITALMAIN_DW.M_RRLS_X14 = M_RRLS_X14;
  NONVITALMAIN_DW.M_RRLS_X20 = M_RRLS_X20;
  NONVITALMAIN_DW.M_RRLS_X24 = M_RRLS_X24;
  NONVITALMAIN_DW.M_CBTC_T1_ED1 = M_CBTC_T1_ED1;
  NONVITALMAIN_DW.M_CBTC_T2_ED2 = M_CBTC_T2_ED2;
  NONVITALMAIN_DW.M_CBTC_T2_ED3 = M_CBTC_T2_ED3;
  NONVITALMAIN_DW.M_CBTC_T2_ED4 = M_CBTC_T2_ED4;
  NONVITALMAIN_DW.M_CBTC_T3_ED1 = M_CBTC_T3_ED1;
  NONVITALMAIN_DW.M_CBTC_T3_ED2 = M_CBTC_T3_ED2;
  NONVITALMAIN_DW.M_CBTC_T3_ED3 = M_CBTC_T3_ED3;
  NONVITALMAIN_DW.M_CBTC_T3_ED4 = M_CBTC_T3_ED4;
  NONVITALMAIN_DW.M_CBTC_T1_ED2 = M_CBTC_T1_ED2;
  NONVITALMAIN_DW.M_CBTC_T1_ED3 = M_CBTC_T1_ED3;
  NONVITALMAIN_DW.M_CBTC_T1_ED4 = M_CBTC_T1_ED4;
  NONVITALMAIN_DW.M_CBTC_TIB_ED1 = M_CBTC_TIB_ED1;
  NONVITALMAIN_DW.M_CBTC_TIB_ED2 = M_CBTC_TIB_ED2;
  NONVITALMAIN_DW.M_CBTC_TIB_ED3 = M_CBTC_TIB_ED3;
  NONVITALMAIN_DW.M_CBTC_TIB_ED4 = M_CBTC_TIB_ED4;
  NONVITALMAIN_DW.M_CBTC_T2_ED1 = M_CBTC_T2_ED1;
  NONVITALMAIN_DW.M_CBTC_T1_ESB1 = M_CBTC_T1_ESB1;
  NONVITALMAIN_DW.M_CBTC_T1_ESB2 = M_CBTC_T1_ESB2;
  NONVITALMAIN_DW.M_CBTC_TIB_ESB1 = M_CBTC_TIB_ESB1;
  NONVITALMAIN_DW.M_CBTC_TIB_ESB2 = M_CBTC_TIB_ESB2;
  NONVITALMAIN_DW.M_CBTC_T2_ESB1 = M_CBTC_T2_ESB1;
  NONVITALMAIN_DW.M_CBTC_T2_ESB2 = M_CBTC_T2_ESB2;
  NONVITALMAIN_DW.M_CBTC_T3_ESB1 = M_CBTC_T3_ESB1;
  NONVITALMAIN_DW.M_CBTC_T3_ESB2 = M_CBTC_T3_ESB2;
  NONVITALMAIN_DW.M_CBTC_T1_PSD1 = M_CBTC_T1_PSD1;
  NONVITALMAIN_DW.M_CBTC_T1_PSD2 = M_CBTC_T1_PSD2;
  NONVITALMAIN_DW.M_CBTC_TIB_PSD1 = M_CBTC_TIB_PSD1;
  NONVITALMAIN_DW.M_CBTC_TIB_PSD2 = M_CBTC_TIB_PSD2;
  NONVITALMAIN_DW.M_CBTC_T2_PSD1 = M_CBTC_T2_PSD1;
  NONVITALMAIN_DW.M_CBTC_T2_PSD2 = M_CBTC_T2_PSD2;
  NONVITALMAIN_DW.M_CBTC_T3_PSD1 = M_CBTC_T3_PSD1;
  NONVITALMAIN_DW.M_CBTC_T3_PSD2 = M_CBTC_T3_PSD2;
  NONVITALMAIN_DW.CBI_FAIL_COMM1 = CBI_FAIL_COMM1;
  NONVITALMAIN_DW.CBI_FAIL_COMM2 = CBI_FAIL_COMM2;
  NONVITALMAIN_DW.CBI_FAIL_SYSTEM1 = CBI_FAIL_SYSTEM1;
  NONVITALMAIN_DW.CBI_FAIL_SYSTEM2 = CBI_FAIL_SYSTEM2;
  NONVITALMAIN_DW.R1012PBRST = R1012PBRST;
  NONVITALMAIN_DW.R2022PBRST = R2022PBRST;
  NONVITALMAIN_DW.R1012PBCTRL = R1012PBCTRL;
  NONVITALMAIN_DW.R1022PBCTRL = R1022PBCTRL;
  NONVITALMAIN_DW.R10DEPPBCTRL = R10DEPPBCTRL;
  NONVITALMAIN_DW.R10DEPPBRST = R10DEPPBRST;
  NONVITALMAIN_DW.R2210PBRST = R2210PBRST;
  NONVITALMAIN_DW.R2214PBRST = R2214PBRST;
  NONVITALMAIN_DW.R1210PBCTRL = R1210PBCTRL;
  NONVITALMAIN_DW.R1214PBCTRL = R1214PBCTRL;
  NONVITALMAIN_DW.R1220PBCTRL = R1220PBCTRL;
  NONVITALMAIN_DW.R2220PBRST = R2220PBRST;
  NONVITALMAIN_DW.R2224PBRST = R2224PBRST;
  NONVITALMAIN_DW.R1412PBCTRL = R1412PBCTRL;
  NONVITALMAIN_DW.R1422PBCTRL = R1422PBCTRL;
  NONVITALMAIN_DW.R2412PBRST = R2412PBRST;
  NONVITALMAIN_DW.R2422PBRST = R2422PBRST;
  NONVITALMAIN_DW.R1022PBRST = R1022PBRST;
  NONVITALMAIN_DW.R2012PBCTRL = R2012PBCTRL;
  NONVITALMAIN_DW.R2022PBCTRL = R2022PBCTRL;
  NONVITALMAIN_DW.R20DEPPBCTRL = R20DEPPBCTRL;
  NONVITALMAIN_DW.R20DEPPBRST = R20DEPPBRST;
  NONVITALMAIN_DW.R2210PBCTRL = R2210PBCTRL;
  NONVITALMAIN_DW.R2214PBCTRL = R2214PBCTRL;
  NONVITALMAIN_DW.R2220PBCTRL = R2220PBCTRL;
  NONVITALMAIN_DW.R2224PBCTRL = R2224PBCTRL;
  NONVITALMAIN_DW.R2412PBCTRL = R2412PBCTRL;
  NONVITALMAIN_DW.R2422PBCTRL = R2422PBCTRL;
  NONVITALMAIN_DW.R1210PBRST = R1210PBRST;
  NONVITALMAIN_DW.R1214PBRST = R1214PBRST;
  NONVITALMAIN_DW.R1220PBRST = R1220PBRST;
  NONVITALMAIN_DW.R1224PBCTRL = R1224PBCTRL;
  NONVITALMAIN_DW.R1412PBRST = R1412PBRST;
  NONVITALMAIN_DW.R1422PBRST = R1422PBRST;
  NONVITALMAIN_DW.R2012PBRST = R2012PBRST;
  NONVITALMAIN_DW.RDEP10PBRST = RDEP10PBRST;
  NONVITALMAIN_DW.RDEP10PBCTRL = RDEP10PBCTRL;
  NONVITALMAIN_DW.RDEP20PBRST = RDEP20PBRST;
  NONVITALMAIN_DW.RDEP20PBCTRL = RDEP20PBCTRL;
  NONVITALMAIN_DW.DI_PBG_MANUAL = DI_PBG_MANUAL;
  NONVITALMAIN_DW.DI_PBG_OTOMATIS = DI_PBG_OTOMATIS;
  NONVITALMAIN_DW.DI_PBG_THB = DI_PBG_THB;
  NONVITALMAIN_DW.DI_PBSW_TBKW = DI_PBSW_TBKW;
  NONVITALMAIN_DW.DI_PBSW_TBW = DI_PBSW_TBW;
  NONVITALMAIN_DW.DI_PBSW_TKGW = DI_PBSW_TKGW;
  NONVITALMAIN_DW.DI_PBSW_TKW = DI_PBSW_TKW;
  NONVITALMAIN_DW.DI_PBSW_TWT = DI_PBSW_TWT;
  NONVITALMAIN_DW.DI_PBR_TPR = DI_PBR_TPR;
  NONVITALMAIN_DW.DI_PBJ_12A = DI_PBJ_12A;
  NONVITALMAIN_DW.DI_PBJ_12B = DI_PBJ_12B;
  NONVITALMAIN_DW.DI_PBJ_14 = DI_PBJ_14;
  NONVITALMAIN_DW.DI_PBJ_22A = DI_PBJ_22A;
  NONVITALMAIN_DW.DI_PBJ_22B = DI_PBJ_22B;
  NONVITALMAIN_DW.DI_PBJ_24 = DI_PBJ_24;
  NONVITALMAIN_DW.DI_PBJ_10 = DI_PBJ_10;
  NONVITALMAIN_DW.DI_PBJ_20 = DI_PBJ_20;
  NONVITALMAIN_DW.DI_PBX_10 = DI_PBX_10;
  NONVITALMAIN_DW.DI_PBX_14 = DI_PBX_14;
  NONVITALMAIN_DW.DI_PBX_20 = DI_PBX_20;
  NONVITALMAIN_DW.DI_PBX_24 = DI_PBX_24;
  NONVITALMAIN_DW.DI_PBW_11A_21A = DI_PBW_11A_21A;
  NONVITALMAIN_DW.DI_PBW_11B_21B = DI_PBW_11B_21B;
  NONVITALMAIN_DW.DI_PBW_13A_23A = DI_PBW_13A_23A;
  NONVITALMAIN_DW.DI_PBW_13B_23B = DI_PBW_13B_23B;
  NONVITALMAIN_DW.DI_PBW_21C = DI_PBW_21C;
  NONVITALMAIN_DW.DI_GO_FROM_DEPOT = DI_GO_FROM_DEPOT;
  NONVITALMAIN_DW.DI_GO_TO_DEPOT = DI_GO_TO_DEPOT;
  NONVITALMAIN_DW.VSB1_g = VSB1_g;
  NONVITALMAIN_DW.VSB10_j = VSB10_j;
  NONVITALMAIN_DW.VSB11_c = VSB11_c;
  NONVITALMAIN_DW.VSB12_l = VSB12_l;
  NONVITALMAIN_DW.VSB13_d = VSB13_d;
  NONVITALMAIN_DW.VSB14_o = VSB14_o;
  NONVITALMAIN_DW.VSB15_h = VSB15_h;
  NONVITALMAIN_DW.VSB16_h_c = VSB16_h;
  NONVITALMAIN_DW.VSB17_c = VSB17_c;
  NONVITALMAIN_DW.VSB18_j = VSB18_j;
  NONVITALMAIN_DW.VSB19_d = VSB19_d;
  NONVITALMAIN_DW.VSB2_e_k = VSB2_e;
  NONVITALMAIN_DW.VSB20_c_c = VSB20_c;
  NONVITALMAIN_DW.VSB21_p = VSB21_p;
  NONVITALMAIN_DW.VSB22_c = VSB22_c;
  NONVITALMAIN_DW.VSB23_i = VSB23_i;
  NONVITALMAIN_DW.VSB24_a = VSB24_a;
  NONVITALMAIN_DW.VSB25_k = VSB25_k;
  NONVITALMAIN_DW.VSB26_l = VSB26_l;
  NONVITALMAIN_DW.VSB27_p = VSB27_p;
  NONVITALMAIN_DW.VSB3_l = VSB3_l;
  NONVITALMAIN_DW.VSB4_g = VSB4_g;
  NONVITALMAIN_DW.VSB5_n = VSB5_n;
  NONVITALMAIN_DW.VSB6_h = VSB6_h;
  NONVITALMAIN_DW.VSB7_f = VSB7_f;
  NONVITALMAIN_DW.VSB8_i_m = VSB8_i;
  NONVITALMAIN_DW.VSB9_c = VSB9_c;
  NONVITALMAIN_DW.DI_PBCBTC_WZ = DI_PBCBTC_WZ;
  NONVITALMAIN_DW.M_GV_AS = M_GV_AS;
  NONVITALMAIN_DW.M_CTRL_RRLS_DEP = M_CTRL_RRLS_DEP;
  NONVITALMAIN_DW.M_RS_DEP_10 = M_RS_DEP_10;
  NONVITALMAIN_DW.M_RS_DEP_20 = M_RS_DEP_20;
  NONVITALMAIN_DW.M_GV_FLASH_1000 = M_GV_FLASH_1000;
  NONVITALMAIN_DW.M_RS_10_DEP = M_RS_10_DEP;
  NONVITALMAIN_DW.M_RS_20_DEP = M_RS_20_DEP;
  NONVITALMAIN_DW.DO_INDSW_W21C_NBE = DO_INDSW_W21C_NBE;
  NONVITALMAIN_DW.DO_INDSW_W21C_NRE = DO_INDSW_W21C_NRE;
  NONVITALMAIN_DW.DO_INDSW_W21C_NTE = DO_INDSW_W21C_NTE;
  NONVITALMAIN_DW.M_CHK_NV_V = M_CHK_NV_V;
  NONVITALMAIN_DW.M_GV_RR = M_GV_RR;
  NONVITALMAIN_DW.M_REQ_T_12_10 = M_REQ_T_12_10;
  NONVITALMAIN_DW.M_REQ_T_12_20 = M_REQ_T_12_20;
  NONVITALMAIN_DW.M_REQ_T_12_14 = M_REQ_T_12_14;
  NONVITALMAIN_DW.M_REQ_T_12_24 = M_REQ_T_12_24;
  NONVITALMAIN_DW.M_REQ_T_14_12 = M_REQ_T_14_12;
  NONVITALMAIN_DW.M_REQ_T_14_22 = M_REQ_T_14_22;
  NONVITALMAIN_DW.M_REQ_T_22_10 = M_REQ_T_22_10;
  NONVITALMAIN_DW.M_REQ_T_22_20 = M_REQ_T_22_20;
  NONVITALMAIN_DW.M_REQ_T_22_14 = M_REQ_T_22_14;
  NONVITALMAIN_DW.M_REQ_T_22_24 = M_REQ_T_22_24;
  NONVITALMAIN_DW.M_REQ_T_24_12 = M_REQ_T_24_12;
  NONVITALMAIN_DW.M_REQ_T_24_22 = M_REQ_T_24_22;
  NONVITALMAIN_DW.M_REQ_T_10_12 = M_REQ_T_10_12;
  NONVITALMAIN_DW.M_REQ_T_10_22 = M_REQ_T_10_22;
  NONVITALMAIN_DW.M_REQ_T_20_12 = M_REQ_T_20_12;
  NONVITALMAIN_DW.M_REQ_T_20_22 = M_REQ_T_20_22;
  NONVITALMAIN_DW.M_W11A_21A_N_REQ = M_W11A_21A_N_REQ;
  NONVITALMAIN_DW.M_W11B_21B_N_REQ = M_W11B_21B_N_REQ;
  NONVITALMAIN_DW.M_W13A_23A_N_REQ = M_W13A_23A_N_REQ;
  NONVITALMAIN_DW.M_W13B_23B_N_REQ = M_W13B_23B_N_REQ;
  NONVITALMAIN_DW.M_W21C_N_REQ = M_W21C_N_REQ;
  NONVITALMAIN_DW.M_W11A_21A_R_REQ = M_W11A_21A_R_REQ;
  NONVITALMAIN_DW.M_W11B_21B_R_REQ = M_W11B_21B_R_REQ;
  NONVITALMAIN_DW.M_W13A_23A_R_REQ = M_W13A_23A_R_REQ;
  NONVITALMAIN_DW.M_W13B_23B_R_REQ = M_W13B_23B_R_REQ;
  NONVITALMAIN_DW.M_W21C_R_REQ = M_W21C_R_REQ;
  NONVITALMAIN_DW.M_W11A_21A_OOC = M_W11A_21A_OOC;
  NONVITALMAIN_DW.M_W11B_21B_OOC = M_W11B_21B_OOC;
  NONVITALMAIN_DW.M_W13A_23A_OOC = M_W13A_23A_OOC;
  NONVITALMAIN_DW.M_W13B_23B_OOC = M_W13B_23B_OOC;
  NONVITALMAIN_DW.M_W21C_OOC = M_W21C_OOC;
  NONVITALMAIN_DW.M_CTRL_RRLS_12A = M_CTRL_RRLS_12A;
  NONVITALMAIN_DW.M_CTRL_RRLS_12B = M_CTRL_RRLS_12B;
  NONVITALMAIN_DW.M_CTRL_RRLS_22A = M_CTRL_RRLS_22A;
  NONVITALMAIN_DW.M_CTRL_RRLS_22B = M_CTRL_RRLS_22B;
  NONVITALMAIN_DW.M_CTRL_RRLS_10 = M_CTRL_RRLS_10;
  NONVITALMAIN_DW.M_CTRL_RRLS_14 = M_CTRL_RRLS_14;
  NONVITALMAIN_DW.M_CTRL_RRLS_20 = M_CTRL_RRLS_20;
  NONVITALMAIN_DW.M_CTRL_RRLS_24 = M_CTRL_RRLS_24;
  NONVITALMAIN_DW.M_W11A_21A_CTRL_SWRLS = M_W11A_21A_CTRL_SWRLS;
  NONVITALMAIN_DW.M_W11B_21B_CTRL_SWRLS = M_W11B_21B_CTRL_SWRLS;
  NONVITALMAIN_DW.M_W13A_23A_CTRL_SWRLS = M_W13A_23A_CTRL_SWRLS;
  NONVITALMAIN_DW.M_W13B_23B_CTRL_SWRLS = M_W13B_23B_CTRL_SWRLS;
  NONVITALMAIN_DW.M_W21C_CTRL_SWRLS = M_W21C_CTRL_SWRLS;
  NONVITALMAIN_DW.M_W11A_21A_SWINIT = M_W11A_21A_SWINIT;
  NONVITALMAIN_DW.M_W11B_21B_SWINIT = M_W11B_21B_SWINIT;
  NONVITALMAIN_DW.M_W13A_23A_SWINIT = M_W13A_23A_SWINIT;
  NONVITALMAIN_DW.M_W13B_23B_SWINIT = M_W13B_23B_SWINIT;
  NONVITALMAIN_DW.M_W21C_SWINIT = M_W21C_SWINIT;
  NONVITALMAIN_DW.M_CTRL_RST_DEP = M_CTRL_RST_DEP;
  NONVITALMAIN_DW.M_CTRL_RST_12A = M_CTRL_RST_12A;
  NONVITALMAIN_DW.M_CTRL_RST_12B = M_CTRL_RST_12B;
  NONVITALMAIN_DW.M_CTRL_RST_14 = M_CTRL_RST_14;
  NONVITALMAIN_DW.M_CTRL_RST_22A = M_CTRL_RST_22A;
  NONVITALMAIN_DW.M_CTRL_RST_22B = M_CTRL_RST_22B;
  NONVITALMAIN_DW.M_CTRL_RST_24 = M_CTRL_RST_24;
  NONVITALMAIN_DW.M_CTRL_RST_10 = M_CTRL_RST_10;
  NONVITALMAIN_DW.M_CTRL_RST_20 = M_CTRL_RST_20;
  NONVITALMAIN_DW.M_REQ_S_DEP_10 = M_REQ_S_DEP_10;
  NONVITALMAIN_DW.M_REQ_S_DEP_20 = M_REQ_S_DEP_20;
  NONVITALMAIN_DW.M_REQ_S_10_DEP = M_REQ_S_10_DEP;
  NONVITALMAIN_DW.M_REQ_S_20_DEP = M_REQ_S_20_DEP;
  NONVITALMAIN_DW.M_CTRL_VSB1 = M_CTRL_VSB1;
  NONVITALMAIN_DW.M_CTRL_VSB10 = M_CTRL_VSB10;
  NONVITALMAIN_DW.M_CTRL_VSB11 = M_CTRL_VSB11;
  NONVITALMAIN_DW.M_CTRL_VSB12 = M_CTRL_VSB12;
  NONVITALMAIN_DW.M_CTRL_VSB13 = M_CTRL_VSB13;
  NONVITALMAIN_DW.M_CTRL_VSB14 = M_CTRL_VSB14;
  NONVITALMAIN_DW.M_CTRL_VSB15 = M_CTRL_VSB15;
  NONVITALMAIN_DW.M_CTRL_VSB16 = M_CTRL_VSB16;
  NONVITALMAIN_DW.M_CTRL_VSB17 = M_CTRL_VSB17;
  NONVITALMAIN_DW.M_CTRL_VSB18 = M_CTRL_VSB18;
  NONVITALMAIN_DW.M_CTRL_VSB19 = M_CTRL_VSB19;
  NONVITALMAIN_DW.M_CTRL_VSB2 = M_CTRL_VSB2;
  NONVITALMAIN_DW.M_CTRL_VSB20 = M_CTRL_VSB20;
  NONVITALMAIN_DW.M_CTRL_VSB21 = M_CTRL_VSB21;
  NONVITALMAIN_DW.M_CTRL_VSB22 = M_CTRL_VSB22;
  NONVITALMAIN_DW.M_CTRL_VSB23 = M_CTRL_VSB23;
  NONVITALMAIN_DW.M_CTRL_VSB24 = M_CTRL_VSB24;
  NONVITALMAIN_DW.M_CTRL_VSB25 = M_CTRL_VSB25;
  NONVITALMAIN_DW.M_CTRL_VSB26 = M_CTRL_VSB26;
  NONVITALMAIN_DW.M_CTRL_VSB27 = M_CTRL_VSB27;
  NONVITALMAIN_DW.M_CTRL_VSB3 = M_CTRL_VSB3;
  NONVITALMAIN_DW.M_CTRL_VSB4 = M_CTRL_VSB4;
  NONVITALMAIN_DW.M_CTRL_VSB5 = M_CTRL_VSB5;
  NONVITALMAIN_DW.M_CTRL_VSB6 = M_CTRL_VSB6;
  NONVITALMAIN_DW.M_CTRL_VSB7 = M_CTRL_VSB7;
  NONVITALMAIN_DW.M_CTRL_VSB8 = M_CTRL_VSB8;
  NONVITALMAIN_DW.M_CTRL_VSB9 = M_CTRL_VSB9;
  NONVITALMAIN_DW.DO_INDG_BUZZ = DO_INDG_BUZZ;
  NONVITALMAIN_DW.DO_INDG_COMM1_FAIL = DO_INDG_COMM1_FAIL;
  NONVITALMAIN_DW.DO_INDG_COMM2_FAIL = DO_INDG_COMM2_FAIL;
  NONVITALMAIN_DW.DO_INDG_POINT = DO_INDG_POINT;
  NONVITALMAIN_DW.DO_INDG_SYS1_FAIL = DO_INDG_SYS1_FAIL;
  NONVITALMAIN_DW.DO_INDG_SYS2_FAIL = DO_INDG_SYS2_FAIL;
  NONVITALMAIN_DW.DO_INDG_TPR_BANTU = DO_INDG_TPR_BANTU;
  NONVITALMAIN_DW.DO_INDJ_12A_CGE = DO_INDJ_12A_CGE;
  NONVITALMAIN_DW.DO_INDJ_12A_RGE = DO_INDJ_12A_RGE;
  NONVITALMAIN_DW.DO_INDJ_12B_CGE = DO_INDJ_12B_CGE;
  NONVITALMAIN_DW.DO_INDJ_12B_RGE = DO_INDJ_12B_RGE;
  NONVITALMAIN_DW.DO_INDJ_14_CGE = DO_INDJ_14_CGE;
  NONVITALMAIN_DW.DO_INDJ_14_RGE = DO_INDJ_14_RGE;
  NONVITALMAIN_DW.DO_INDJ_22A_CGE = DO_INDJ_22A_CGE;
  NONVITALMAIN_DW.DO_INDJ_22A_RGE = DO_INDJ_22A_RGE;
  NONVITALMAIN_DW.DO_INDJ_22B_CGE = DO_INDJ_22B_CGE;
  NONVITALMAIN_DW.DO_INDJ_22B_RGE = DO_INDJ_22B_RGE;
  NONVITALMAIN_DW.DO_INDJ_24_CGE = DO_INDJ_24_CGE;
  NONVITALMAIN_DW.DO_INDJ_24_RGE = DO_INDJ_24_RGE;
  NONVITALMAIN_DW.DO_INDJ_10_CGE = DO_INDJ_10_CGE;
  NONVITALMAIN_DW.DO_INDJ_10_RGE = DO_INDJ_10_RGE;
  NONVITALMAIN_DW.DO_INDJ_10_WGE = DO_INDJ_10_WGE;
  NONVITALMAIN_DW.DO_INDJ_20_CGE = DO_INDJ_20_CGE;
  NONVITALMAIN_DW.DO_INDJ_20_RGE = DO_INDJ_20_RGE;
  NONVITALMAIN_DW.DO_INDJ_20_WGE = DO_INDJ_20_WGE;
  NONVITALMAIN_DW.DO_INDSW_W11A_BE = DO_INDSW_W11A_BE;
  NONVITALMAIN_DW.DO_INDSW_W11A_LE = DO_INDSW_W11A_LE;
  NONVITALMAIN_DW.DO_INDSW_W11A_NBE = DO_INDSW_W11A_NBE;
  NONVITALMAIN_DW.DO_INDSW_W11A_NRE = DO_INDSW_W11A_NRE;
  NONVITALMAIN_DW.DO_INDSW_W11A_NTE = DO_INDSW_W11A_NTE;
  NONVITALMAIN_DW.DO_INDSW_W11A_NWBE = DO_INDSW_W11A_NWBE;
  NONVITALMAIN_DW.DO_INDSW_W11A_NWRE = DO_INDSW_W11A_NWRE;
  NONVITALMAIN_DW.DO_INDSW_W11A_NWTE = DO_INDSW_W11A_NWTE;
  NONVITALMAIN_DW.DO_INDSW_W11A_RBE = DO_INDSW_W11A_RBE;
  NONVITALMAIN_DW.DO_INDSW_W11A_RRE = DO_INDSW_W11A_RRE;
  NONVITALMAIN_DW.DO_INDSW_W11A_RTE = DO_INDSW_W11A_RTE;
  NONVITALMAIN_DW.DO_INDSW_W11A_RWBE = DO_INDSW_W11A_RWBE;
  NONVITALMAIN_DW.DO_INDSW_W11A_RWRE = DO_INDSW_W11A_RWRE;
  NONVITALMAIN_DW.DO_INDSW_W11A_RWTE = DO_INDSW_W11A_RWTE;
  NONVITALMAIN_DW.DO_INDSW_W11B_BE = DO_INDSW_W11B_BE;
  NONVITALMAIN_DW.DO_INDSW_W11B_LE = DO_INDSW_W11B_LE;
  NONVITALMAIN_DW.DO_INDSW_W11B_NBE = DO_INDSW_W11B_NBE;
  NONVITALMAIN_DW.DO_INDSW_W11B_NRE = DO_INDSW_W11B_NRE;
  NONVITALMAIN_DW.DO_INDSW_W11B_NTE = DO_INDSW_W11B_NTE;
  NONVITALMAIN_DW.DO_INDSW_W11B_NWBE = DO_INDSW_W11B_NWBE;
  NONVITALMAIN_DW.DO_INDSW_W11B_NWRE = DO_INDSW_W11B_NWRE;
  NONVITALMAIN_DW.DO_INDSW_W11B_NWTE = DO_INDSW_W11B_NWTE;
  NONVITALMAIN_DW.DO_INDSW_W11B_RBE = DO_INDSW_W11B_RBE;
  NONVITALMAIN_DW.DO_INDSW_W11B_RRE = DO_INDSW_W11B_RRE;
  NONVITALMAIN_DW.DO_INDSW_W11B_RTE = DO_INDSW_W11B_RTE;
  NONVITALMAIN_DW.DO_INDSW_W11B_RWBE = DO_INDSW_W11B_RWBE;
  NONVITALMAIN_DW.DO_INDSW_W11B_RWRE = DO_INDSW_W11B_RWRE;
  NONVITALMAIN_DW.DO_INDSW_W11B_RWTE = DO_INDSW_W11B_RWTE;
  NONVITALMAIN_DW.DO_INDSW_W13A_BE = DO_INDSW_W13A_BE;
  NONVITALMAIN_DW.DO_INDSW_W13A_LE = DO_INDSW_W13A_LE;
  NONVITALMAIN_DW.DO_INDSW_W13A_NBE = DO_INDSW_W13A_NBE;
  NONVITALMAIN_DW.DO_INDSW_W13A_NRE = DO_INDSW_W13A_NRE;
  NONVITALMAIN_DW.DO_INDSW_W13A_NTE = DO_INDSW_W13A_NTE;
  NONVITALMAIN_DW.DO_INDSW_W13A_NWBE = DO_INDSW_W13A_NWBE;
  NONVITALMAIN_DW.DO_INDSW_W13A_NWRE = DO_INDSW_W13A_NWRE;
  NONVITALMAIN_DW.DO_INDSW_W13A_NWTE = DO_INDSW_W13A_NWTE;
  NONVITALMAIN_DW.DO_INDSW_W13A_RBE = DO_INDSW_W13A_RBE;
  NONVITALMAIN_DW.DO_INDSW_W13A_RRE = DO_INDSW_W13A_RRE;
  NONVITALMAIN_DW.DO_INDSW_W13A_RTE = DO_INDSW_W13A_RTE;
  NONVITALMAIN_DW.DO_INDSW_W13A_RWBE = DO_INDSW_W13A_RWBE;
  NONVITALMAIN_DW.DO_INDSW_W13A_RWRE = DO_INDSW_W13A_RWRE;
  NONVITALMAIN_DW.DO_INDSW_W13A_RWTE = DO_INDSW_W13A_RWTE;
  NONVITALMAIN_DW.DO_INDSW_W13B_BE = DO_INDSW_W13B_BE;
  NONVITALMAIN_DW.DO_INDSW_W13B_LE = DO_INDSW_W13B_LE;
  NONVITALMAIN_DW.DO_INDSW_W13B_NBE = DO_INDSW_W13B_NBE;
  NONVITALMAIN_DW.DO_INDSW_W13B_NRE = DO_INDSW_W13B_NRE;
  NONVITALMAIN_DW.DO_INDSW_W13B_NTE = DO_INDSW_W13B_NTE;
  NONVITALMAIN_DW.DO_INDSW_W13B_NWBE = DO_INDSW_W13B_NWBE;
  NONVITALMAIN_DW.DO_INDSW_W13B_NWRE = DO_INDSW_W13B_NWRE;
  NONVITALMAIN_DW.DO_INDSW_W13B_NWTE = DO_INDSW_W13B_NWTE;
  NONVITALMAIN_DW.DO_INDSW_W13B_RBE = DO_INDSW_W13B_RBE;
  NONVITALMAIN_DW.DO_INDSW_W13B_RRE = DO_INDSW_W13B_RRE;
  NONVITALMAIN_DW.DO_INDSW_W13B_RTE = DO_INDSW_W13B_RTE;
  NONVITALMAIN_DW.DO_INDSW_W13B_RWBE = DO_INDSW_W13B_RWBE;
  NONVITALMAIN_DW.DO_INDSW_W13B_RWRE = DO_INDSW_W13B_RWRE;
  NONVITALMAIN_DW.DO_INDSW_W13B_RWTE = DO_INDSW_W13B_RWTE;
  NONVITALMAIN_DW.DO_INDSW_W21A_BE = DO_INDSW_W21A_BE;
  NONVITALMAIN_DW.DO_INDSW_W21A_LE = DO_INDSW_W21A_LE;
  NONVITALMAIN_DW.DO_INDSW_W21A_NBE = DO_INDSW_W21A_NBE;
  NONVITALMAIN_DW.DO_INDSW_W21A_NRE = DO_INDSW_W21A_NRE;
  NONVITALMAIN_DW.DO_INDSW_W21A_NTE = DO_INDSW_W21A_NTE;
  NONVITALMAIN_DW.DO_INDSW_W21A_NWBE = DO_INDSW_W21A_NWBE;
  NONVITALMAIN_DW.DO_INDSW_W21A_NWRE = DO_INDSW_W21A_NWRE;
  NONVITALMAIN_DW.DO_INDSW_W21A_NWTE = DO_INDSW_W21A_NWTE;
  NONVITALMAIN_DW.DO_INDSW_W21A_RBE = DO_INDSW_W21A_RBE;
  NONVITALMAIN_DW.DO_INDSW_W21A_RRE = DO_INDSW_W21A_RRE;
  NONVITALMAIN_DW.DO_INDSW_W21A_RTE = DO_INDSW_W21A_RTE;
  NONVITALMAIN_DW.DO_INDSW_W21A_RWBE = DO_INDSW_W21A_RWBE;
  NONVITALMAIN_DW.DO_INDSW_W21A_RWRE = DO_INDSW_W21A_RWRE;
  NONVITALMAIN_DW.DO_INDSW_W21A_RWTE = DO_INDSW_W21A_RWTE;
  NONVITALMAIN_DW.DO_INDSW_W21B_BE = DO_INDSW_W21B_BE;
  NONVITALMAIN_DW.DO_INDSW_W21B_LE = DO_INDSW_W21B_LE;
  NONVITALMAIN_DW.DO_INDSW_W21B_NBE = DO_INDSW_W21B_NBE;
  NONVITALMAIN_DW.DO_INDSW_W21B_NRE = DO_INDSW_W21B_NRE;
  NONVITALMAIN_DW.DO_INDSW_W21B_NTE = DO_INDSW_W21B_NTE;
  NONVITALMAIN_DW.DO_INDSW_W21B_NWBE = DO_INDSW_W21B_NWBE;
  NONVITALMAIN_DW.DO_INDSW_W21B_NWRE = DO_INDSW_W21B_NWRE;
  NONVITALMAIN_DW.DO_INDSW_W21B_NWTE = DO_INDSW_W21B_NWTE;
  NONVITALMAIN_DW.DO_INDSW_W21B_RBE = DO_INDSW_W21B_RBE;
  NONVITALMAIN_DW.DO_INDSW_W21B_RRE = DO_INDSW_W21B_RRE;
  NONVITALMAIN_DW.DO_INDSW_W21B_RTE = DO_INDSW_W21B_RTE;
  NONVITALMAIN_DW.DO_INDSW_W21B_RWBE = DO_INDSW_W21B_RWBE;
  NONVITALMAIN_DW.DO_INDSW_W21B_RWRE = DO_INDSW_W21B_RWRE;
  NONVITALMAIN_DW.DO_INDSW_W21B_RWTE = DO_INDSW_W21B_RWTE;
  NONVITALMAIN_DW.DO_INDSW_W21C_BE = DO_INDSW_W21C_BE;
  NONVITALMAIN_DW.DO_INDSW_W21C_LE = DO_INDSW_W21C_LE;
  NONVITALMAIN_DW.DO_INDSW_W21C_NWBE = DO_INDSW_W21C_NWBE;
  NONVITALMAIN_DW.DO_INDSW_W21C_NWRE = DO_INDSW_W21C_NWRE;
  NONVITALMAIN_DW.DO_INDSW_W21C_NWTE = DO_INDSW_W21C_NWTE;
  NONVITALMAIN_DW.DO_INDSW_W21C_RBE = DO_INDSW_W21C_RBE;
  NONVITALMAIN_DW.DO_INDSW_W21C_RRE = DO_INDSW_W21C_RRE;
  NONVITALMAIN_DW.DO_INDSW_W21C_RTE = DO_INDSW_W21C_RTE;
  NONVITALMAIN_DW.DO_INDSW_W21C_RWBE = DO_INDSW_W21C_RWBE;
  NONVITALMAIN_DW.DO_INDSW_W21C_RWRE = DO_INDSW_W21C_RWRE;
  NONVITALMAIN_DW.DO_INDSW_W21C_RWTE = DO_INDSW_W21C_RWTE;
  NONVITALMAIN_DW.DO_INDSW_W23A_BE = DO_INDSW_W23A_BE;
  NONVITALMAIN_DW.DO_INDSW_W23A_LE = DO_INDSW_W23A_LE;
  NONVITALMAIN_DW.DO_INDSW_W23A_NBE = DO_INDSW_W23A_NBE;
  NONVITALMAIN_DW.DO_INDSW_W23A_NRE = DO_INDSW_W23A_NRE;
  NONVITALMAIN_DW.DO_INDSW_W23A_NTE = DO_INDSW_W23A_NTE;
  NONVITALMAIN_DW.DO_INDSW_W23A_NWBE = DO_INDSW_W23A_NWBE;
  NONVITALMAIN_DW.DO_INDSW_W23A_NWRE = DO_INDSW_W23A_NWRE;
  NONVITALMAIN_DW.DO_INDSW_W23A_NWTE = DO_INDSW_W23A_NWTE;
  NONVITALMAIN_DW.DO_INDSW_W23A_RBE = DO_INDSW_W23A_RBE;
  NONVITALMAIN_DW.DO_INDSW_W23A_RRE = DO_INDSW_W23A_RRE;
  NONVITALMAIN_DW.DO_INDSW_W23A_RTE = DO_INDSW_W23A_RTE;
  NONVITALMAIN_DW.DO_INDSW_W23A_RWBE = DO_INDSW_W23A_RWBE;
  NONVITALMAIN_DW.DO_INDSW_W23A_RWRE = DO_INDSW_W23A_RWRE;
  NONVITALMAIN_DW.DO_INDSW_W23A_RWTE = DO_INDSW_W23A_RWTE;
  NONVITALMAIN_DW.DO_INDSW_W23B_BE = DO_INDSW_W23B_BE;
  NONVITALMAIN_DW.DO_INDSW_W23B_LE = DO_INDSW_W23B_LE;
  NONVITALMAIN_DW.DO_INDSW_W23B_NBE = DO_INDSW_W23B_NBE;
  NONVITALMAIN_DW.DO_INDSW_W23B_NRE = DO_INDSW_W23B_NRE;
  NONVITALMAIN_DW.DO_INDSW_W23B_NTE = DO_INDSW_W23B_NTE;
  NONVITALMAIN_DW.DO_INDSW_W23B_NWBE = DO_INDSW_W23B_NWBE;
  NONVITALMAIN_DW.DO_INDSW_W23B_NWRE = DO_INDSW_W23B_NWRE;
  NONVITALMAIN_DW.DO_INDSW_W23B_NWTE = DO_INDSW_W23B_NWTE;
  NONVITALMAIN_DW.DO_INDSW_W23B_RBE = DO_INDSW_W23B_RBE;
  NONVITALMAIN_DW.DO_INDSW_W23B_RRE = DO_INDSW_W23B_RRE;
  NONVITALMAIN_DW.DO_INDSW_W23B_RTE = DO_INDSW_W23B_RTE;
  NONVITALMAIN_DW.DO_INDSW_W23B_RWBE = DO_INDSW_W23B_RWBE;
  NONVITALMAIN_DW.DO_INDSW_W23B_RWRE = DO_INDSW_W23B_RWRE;
  NONVITALMAIN_DW.DO_INDSW_W23B_RWTE = DO_INDSW_W23B_RWTE;
  NONVITALMAIN_DW.DO_INDT_BE_10A = DO_INDT_BE_10A;
  NONVITALMAIN_DW.DO_INDT_RE_10A = DO_INDT_RE_10A;
  NONVITALMAIN_DW.DO_INDT_TE_10A = DO_INDT_TE_10A;
  NONVITALMAIN_DW.DO_INDT_BE_10B = DO_INDT_BE_10B;
  NONVITALMAIN_DW.DO_INDT_RE_10B = DO_INDT_RE_10B;
  NONVITALMAIN_DW.DO_INDT_TE_10B = DO_INDT_TE_10B;
  NONVITALMAIN_DW.DO_INDT_BE_11A = DO_INDT_BE_11A;
  NONVITALMAIN_DW.DO_INDT_RE_11A = DO_INDT_RE_11A;
  NONVITALMAIN_DW.DO_INDT_TE_11A = DO_INDT_TE_11A;
  NONVITALMAIN_DW.DO_INDT_BE_11B = DO_INDT_BE_11B;
  NONVITALMAIN_DW.DO_INDT_RE_11B = DO_INDT_RE_11B;
  NONVITALMAIN_DW.DO_INDT_TE_11B = DO_INDT_TE_11B;
  NONVITALMAIN_DW.DO_INDT_BE_12A = DO_INDT_BE_12A;
  NONVITALMAIN_DW.DO_INDT_RE_12A = DO_INDT_RE_12A;
  NONVITALMAIN_DW.DO_INDT_TE_12A = DO_INDT_TE_12A;
  NONVITALMAIN_DW.DO_INDT_BE_12B = DO_INDT_BE_12B;
  NONVITALMAIN_DW.DO_INDT_RE_12B = DO_INDT_RE_12B;
  NONVITALMAIN_DW.DO_INDT_TE_12B = DO_INDT_TE_12B;
  NONVITALMAIN_DW.DO_INDT_BE_12C = DO_INDT_BE_12C;
  NONVITALMAIN_DW.DO_INDT_RE_12C = DO_INDT_RE_12C;
  NONVITALMAIN_DW.DO_INDT_TE_12C = DO_INDT_TE_12C;
  NONVITALMAIN_DW.DO_INDT_BE_12D = DO_INDT_BE_12D;
  NONVITALMAIN_DW.DO_INDT_RE_12D = DO_INDT_RE_12D;
  NONVITALMAIN_DW.DO_INDT_TE_12D = DO_INDT_TE_12D;
  NONVITALMAIN_DW.DO_INDT_BE_12E = DO_INDT_BE_12E;
  NONVITALMAIN_DW.DO_INDT_RE_12E = DO_INDT_RE_12E;
  NONVITALMAIN_DW.DO_INDT_TE_12E = DO_INDT_TE_12E;
  NONVITALMAIN_DW.DO_INDT_BE_13A = DO_INDT_BE_13A;
  NONVITALMAIN_DW.DO_INDT_RE_13A = DO_INDT_RE_13A;
  NONVITALMAIN_DW.DO_INDT_TE_13A = DO_INDT_TE_13A;
  NONVITALMAIN_DW.DO_INDT_BE_13B = DO_INDT_BE_13B;
  NONVITALMAIN_DW.DO_INDT_RE_13B = DO_INDT_RE_13B;
  NONVITALMAIN_DW.DO_INDT_TE_13B = DO_INDT_TE_13B;
  NONVITALMAIN_DW.DO_INDT_BE_14A = DO_INDT_BE_14A;
  NONVITALMAIN_DW.DO_INDT_RE_14A = DO_INDT_RE_14A;
  NONVITALMAIN_DW.DO_INDT_TE_14A = DO_INDT_TE_14A;
  NONVITALMAIN_DW.DO_INDT_BE_14B = DO_INDT_BE_14B;
  NONVITALMAIN_DW.DO_INDT_RE_14B = DO_INDT_RE_14B;
  NONVITALMAIN_DW.DO_INDT_TE_14B = DO_INDT_TE_14B;
  NONVITALMAIN_DW.DO_INDT_BE_20A = DO_INDT_BE_20A;
  NONVITALMAIN_DW.DO_INDT_RE_20A = DO_INDT_RE_20A;
  NONVITALMAIN_DW.DO_INDT_TE_20A = DO_INDT_TE_20A;
  NONVITALMAIN_DW.DO_INDT_BE_20B = DO_INDT_BE_20B;
  NONVITALMAIN_DW.DO_INDT_RE_20B = DO_INDT_RE_20B;
  NONVITALMAIN_DW.DO_INDT_TE_20B = DO_INDT_TE_20B;
  NONVITALMAIN_DW.DO_INDT_BE_21A = DO_INDT_BE_21A;
  NONVITALMAIN_DW.DO_INDT_RE_21A = DO_INDT_RE_21A;
  NONVITALMAIN_DW.DO_INDT_TE_21A = DO_INDT_TE_21A;
  NONVITALMAIN_DW.DO_INDT_BE_21B = DO_INDT_BE_21B;
  NONVITALMAIN_DW.DO_INDT_RE_21B = DO_INDT_RE_21B;
  NONVITALMAIN_DW.DO_INDT_TE_21B = DO_INDT_TE_21B;
  NONVITALMAIN_DW.DO_INDT_BE_21C = DO_INDT_BE_21C;
  NONVITALMAIN_DW.DO_INDT_RE_21C = DO_INDT_RE_21C;
  NONVITALMAIN_DW.DO_INDT_TE_21C = DO_INDT_TE_21C;
  NONVITALMAIN_DW.DO_INDT_BE_22A = DO_INDT_BE_22A;
  NONVITALMAIN_DW.DO_INDT_RE_22A = DO_INDT_RE_22A;
  NONVITALMAIN_DW.DO_INDT_TE_22A = DO_INDT_TE_22A;
  NONVITALMAIN_DW.DO_INDT_BE_22B = DO_INDT_BE_22B;
  NONVITALMAIN_DW.DO_INDT_RE_22B = DO_INDT_RE_22B;
  NONVITALMAIN_DW.DO_INDT_TE_22B = DO_INDT_TE_22B;
  NONVITALMAIN_DW.DO_INDT_BE_22C = DO_INDT_BE_22C;
  NONVITALMAIN_DW.DO_INDT_RE_22C = DO_INDT_RE_22C;
  NONVITALMAIN_DW.DO_INDT_TE_22C = DO_INDT_TE_22C;
  NONVITALMAIN_DW.DO_INDT_BE_22D = DO_INDT_BE_22D;
  NONVITALMAIN_DW.DO_INDT_RE_22D = DO_INDT_RE_22D;
  NONVITALMAIN_DW.DO_INDT_TE_22D = DO_INDT_TE_22D;
  NONVITALMAIN_DW.DO_INDT_BE_22E = DO_INDT_BE_22E;
  NONVITALMAIN_DW.DO_INDT_RE_22E = DO_INDT_RE_22E;
  NONVITALMAIN_DW.DO_INDT_TE_22E = DO_INDT_TE_22E;
  NONVITALMAIN_DW.DO_INDT_BE_23A = DO_INDT_BE_23A;
  NONVITALMAIN_DW.DO_INDT_RE_23A = DO_INDT_RE_23A;
  NONVITALMAIN_DW.DO_INDT_TE_23A = DO_INDT_TE_23A;
  NONVITALMAIN_DW.DO_INDT_BE_23B = DO_INDT_BE_23B;
  NONVITALMAIN_DW.DO_INDT_RE_23B = DO_INDT_RE_23B;
  NONVITALMAIN_DW.DO_INDT_TE_23B = DO_INDT_TE_23B;
  NONVITALMAIN_DW.DO_INDT_BE_24A = DO_INDT_BE_24A;
  NONVITALMAIN_DW.DO_INDT_RE_24A = DO_INDT_RE_24A;
  NONVITALMAIN_DW.DO_INDT_TE_24A = DO_INDT_TE_24A;
  NONVITALMAIN_DW.DO_INDT_BE_24B = DO_INDT_BE_24B;
  NONVITALMAIN_DW.DO_INDT_RE_24B = DO_INDT_RE_24B;
  NONVITALMAIN_DW.DO_INDT_TE_24B = DO_INDT_TE_24B;
  NONVITALMAIN_DW.DO_INDAR_J12A = DO_INDAR_J12A;
  NONVITALMAIN_DW.DO_INDPB_J12A = DO_INDPB_J12A;
  NONVITALMAIN_DW.DO_INDAR_J12B = DO_INDAR_J12B;
  NONVITALMAIN_DW.DO_INDPB_J12B = DO_INDPB_J12B;
  NONVITALMAIN_DW.DO_INDAR_J14 = DO_INDAR_J14;
  NONVITALMAIN_DW.DO_INDPB_J14 = DO_INDPB_J14;
  NONVITALMAIN_DW.DO_INDAR_J22A = DO_INDAR_J22A;
  NONVITALMAIN_DW.DO_INDPB_J22A = DO_INDPB_J22A;
  NONVITALMAIN_DW.DO_INDAR_J22B = DO_INDAR_J22B;
  NONVITALMAIN_DW.DO_INDPB_J22B = DO_INDPB_J22B;
  NONVITALMAIN_DW.DO_INDAR_J24 = DO_INDAR_J24;
  NONVITALMAIN_DW.DO_INDPB_J24 = DO_INDPB_J24;
  NONVITALMAIN_DW.DO_INDAR_JL10 = DO_INDAR_JL10;
  NONVITALMAIN_DW.DO_INDPB_JL10 = DO_INDPB_JL10;
  NONVITALMAIN_DW.DO_INDAR_JL20 = DO_INDAR_JL20;
  NONVITALMAIN_DW.DO_INDPB_JL20 = DO_INDPB_JL20;
  NONVITALMAIN_DW.DO_INDPB_X10 = DO_INDPB_X10;
  NONVITALMAIN_DW.DO_INDPB_X14 = DO_INDPB_X14;
  NONVITALMAIN_DW.DO_INDPB_X20 = DO_INDPB_X20;
  NONVITALMAIN_DW.DO_INDPB_X24 = DO_INDPB_X24;
  NONVITALMAIN_DW.DO_FE_FROM_DEP = DO_FE_FROM_DEP;
  NONVITALMAIN_DW.DO_FLE_FROM_DEP = DO_FLE_FROM_DEP;
  NONVITALMAIN_DW.DO_PBE_FROM_DEP = DO_PBE_FROM_DEP;
  NONVITALMAIN_DW.DO_CBTC_T1_ED1 = DO_CBTC_T1_ED1;
  NONVITALMAIN_DW.DO_CBTC_T1_ED2 = DO_CBTC_T1_ED2;
  NONVITALMAIN_DW.DO_CBTC_T1_ED3 = DO_CBTC_T1_ED3;
  NONVITALMAIN_DW.DO_CBTC_T1_ED4 = DO_CBTC_T1_ED4;
  NONVITALMAIN_DW.DO_CBTC_T1_PSD1 = DO_CBTC_T1_PSD1;
  NONVITALMAIN_DW.DO_CBTC_T1_PSD2 = DO_CBTC_T1_PSD2;
  NONVITALMAIN_DW.DO_CBTC_T1_ESB1 = DO_CBTC_T1_ESB1;
  NONVITALMAIN_DW.DO_CBTC_T1_ESB2 = DO_CBTC_T1_ESB2;
  NONVITALMAIN_DW.DO_CBTC_T2_ED1 = DO_CBTC_T2_ED1;
  NONVITALMAIN_DW.DO_CBTC_T2_ED2 = DO_CBTC_T2_ED2;
  NONVITALMAIN_DW.DO_CBTC_T2_ED3 = DO_CBTC_T2_ED3;
  NONVITALMAIN_DW.DO_CBTC_T2_ED4 = DO_CBTC_T2_ED4;
  NONVITALMAIN_DW.DO_CBTC_T2_PSD1 = DO_CBTC_T2_PSD1;
  NONVITALMAIN_DW.DO_CBTC_T2_PSD2 = DO_CBTC_T2_PSD2;
  NONVITALMAIN_DW.DO_CBTC_T2_ESB1 = DO_CBTC_T2_ESB1;
  NONVITALMAIN_DW.DO_CBTC_T2_ESB2 = DO_CBTC_T2_ESB2;
  NONVITALMAIN_DW.DO_CBTC_T3_ED1 = DO_CBTC_T3_ED1;
  NONVITALMAIN_DW.DO_CBTC_T3_ED2 = DO_CBTC_T3_ED2;
  NONVITALMAIN_DW.DO_CBTC_T3_ED3 = DO_CBTC_T3_ED3;
  NONVITALMAIN_DW.DO_CBTC_T3_ED4 = DO_CBTC_T3_ED4;
  NONVITALMAIN_DW.DO_CBTC_T3_PSD1 = DO_CBTC_T3_PSD1;
  NONVITALMAIN_DW.DO_CBTC_T3_PSD2 = DO_CBTC_T3_PSD2;
  NONVITALMAIN_DW.DO_CBTC_T3_ESB1 = DO_CBTC_T3_ESB1;
  NONVITALMAIN_DW.DO_CBTC_T3_ESB2 = DO_CBTC_T3_ESB2;
  NONVITALMAIN_DW.DO_CT_TBW = DO_CT_TBW;
  NONVITALMAIN_DW.DO_CBTC_TIB_ED1 = DO_CBTC_TIB_ED1;
  NONVITALMAIN_DW.DO_CBTC_TIB_ED2 = DO_CBTC_TIB_ED2;
  NONVITALMAIN_DW.DO_CBTC_TIB_ED3 = DO_CBTC_TIB_ED3;
  NONVITALMAIN_DW.DO_CBTC_TIB_ED4 = DO_CBTC_TIB_ED4;
  NONVITALMAIN_DW.DO_CBTC_TIB_PSD1 = DO_CBTC_TIB_PSD1;
  NONVITALMAIN_DW.DO_CBTC_TIB_PSD2 = DO_CBTC_TIB_PSD2;
  NONVITALMAIN_DW.DO_CBTC_TIB_ESB1 = DO_CBTC_TIB_ESB1;
  NONVITALMAIN_DW.DO_CBTC_TIB_ESB2 = DO_CBTC_TIB_ESB2;
  NONVITALMAIN_DW.DO_FE_TO_DEP = DO_FE_TO_DEP;
  NONVITALMAIN_DW.DO_FLE_TO_DEP = DO_FLE_TO_DEP;
  NONVITALMAIN_DW.DO_PBE_TO_DEP = DO_PBE_TO_DEP;
  NONVITALMAIN_DW.DO_CT_TPR = DO_CT_TPR;
  NONVITALMAIN_DW.DO_CT_TWT = DO_CT_TWT;
  NONVITALMAIN_DW.DO_CT_WZ = DO_CT_WZ;
  NONVITALMAIN_DW.M_GV_RR_OK = M_GV_RR_OK;
  NONVITALMAIN_DW.M_TPBP_24A = M_TPBP_24A;
  NONVITALMAIN_DW.M_TPBP_23A = M_TPBP_23A;
  NONVITALMAIN_DW.M_TPBP_21C = M_TPBP_21C;
  NONVITALMAIN_DW.M_TPBP_20B = M_TPBP_20B;
  NONVITALMAIN_DW.M_TPBP_14A = M_TPBP_14A;
  NONVITALMAIN_DW.M_TPBP_13A = M_TPBP_13A;
  NONVITALMAIN_DW.M_TPBP_11B = M_TPBP_11B;
  NONVITALMAIN_DW.M_TPBP_10B = M_TPBP_10B;
  NONVITALMAIN_DW.M_RD_DEP_GR = M_RD_DEP_GR;
  NONVITALMAIN_DW.OR4 = OR4;
  NONVITALMAIN_DW.NOT8_f = NOT8_f;
  NONVITALMAIN_DW.M_RD_J12A_DR = M_RD_J12A_DR;
  NONVITALMAIN_DW.OR3 = OR3;
  NONVITALMAIN_DW.NOT7_i = NOT7_i;
  NONVITALMAIN_DW.M_RD_J12B_DR = M_RD_J12B_DR;
  NONVITALMAIN_DW.OR5 = OR5;
  NONVITALMAIN_DW.NOT7_p = NOT7_p;
  NONVITALMAIN_DW.M_RD_J14_DR = M_RD_J14_DR;
  NONVITALMAIN_DW.OR3_f = OR3_f;
  NONVITALMAIN_DW.NOT7_m = NOT7_m;
  NONVITALMAIN_DW.M_RD_J22A_DR = M_RD_J22A_DR;
  NONVITALMAIN_DW.OR5_j = OR5_j;
  NONVITALMAIN_DW.NOT7_a = NOT7_a;
  NONVITALMAIN_DW.M_RD_J22B_DR = M_RD_J22B_DR;
  NONVITALMAIN_DW.OR5_m = OR5_m;
  NONVITALMAIN_DW.NOT7_l = NOT7_l;
  NONVITALMAIN_DW.M_RD_J24_DR = M_RD_J24_DR;
  NONVITALMAIN_DW.OR3_c = OR3_c;
  NONVITALMAIN_DW.NOT7_n = NOT7_n;
  NONVITALMAIN_DW.M_RD_JL10_DR = M_RD_JL10_DR;
  NONVITALMAIN_DW.M_RD_JL10_GR = M_RD_JL10_GR;
  NONVITALMAIN_DW.OR3_g = OR3_g;
  NONVITALMAIN_DW.NOT7_j = NOT7_j;
  NONVITALMAIN_DW.NOT8_n = NOT8_n;
  NONVITALMAIN_DW.M_RD_JL20_DR = M_RD_JL20_DR;
  NONVITALMAIN_DW.M_RD_JL20_GR = M_RD_JL20_GR;
  NONVITALMAIN_DW.OR3_o = OR3_o;
  NONVITALMAIN_DW.NOT7_ix = NOT7_ix;
  NONVITALMAIN_DW.NOT8_o = NOT8_o;
  NONVITALMAIN_DW.M_W11A_21A_BLOCK = M_W11A_21A_BLOCK;
  NONVITALMAIN_DW.M_W11B_21B_BLOCK = M_W11B_21B_BLOCK;
  NONVITALMAIN_DW.M_W13A_23A_BLOCK = M_W13A_23A_BLOCK;
  NONVITALMAIN_DW.M_W13B_23B_BLOCK = M_W13B_23B_BLOCK;
  NONVITALMAIN_DW.M_W21C_BLOCK = M_W21C_BLOCK;
  NONVITALMAIN_DW.M_W11A_21A_CTRL_CAL = M_W11A_21A_CTRL_CAL;
  NONVITALMAIN_DW.M_W11A_21A_CTRL_TRAIL = M_W11A_21A_CTRL_TRAIL;
  NONVITALMAIN_DW.M_W11A_21A_CTRL_RST = M_W11A_21A_CTRL_RST;
  NONVITALMAIN_DW.M_W11A_21A_CTRL_B = M_W11A_21A_CTRL_B;
  NONVITALMAIN_DW.M_W11A_21A_OOC_RD = M_W11A_21A_OOC_RD;
  NONVITALMAIN_DW.M_W11A_21A_BACK_TO_N = M_W11A_21A_BACK_TO_N;
  NONVITALMAIN_DW.M_W11A_21A_BACK_TO_R = M_W11A_21A_BACK_TO_R;
  NONVITALMAIN_DW.M_W11A_21A_N = M_W11A_21A_N;
  NONVITALMAIN_DW.M_W11A_21A_N_BLOCK = M_W11A_21A_N_BLOCK;
  NONVITALMAIN_DW.M_W11A_21A_R = M_W11A_21A_R;
  NONVITALMAIN_DW.M_W11A_21A_R_BLOCK = M_W11A_21A_R_BLOCK;
  NONVITALMAIN_DW.M_W11A_21A_START = M_W11A_21A_START;
  NONVITALMAIN_DW.M_W11B_21B_CTRL_CAL = M_W11B_21B_CTRL_CAL;
  NONVITALMAIN_DW.M_W11B_21B_CTRL_TRAIL = M_W11B_21B_CTRL_TRAIL;
  NONVITALMAIN_DW.M_W11B_21B_CTRL_RST = M_W11B_21B_CTRL_RST;
  NONVITALMAIN_DW.M_W11B_21B_CTRL_B = M_W11B_21B_CTRL_B;
  NONVITALMAIN_DW.M_W11B_21B_OOC_RD = M_W11B_21B_OOC_RD;
  NONVITALMAIN_DW.M_W11B_21B_BACK_TO_N = M_W11B_21B_BACK_TO_N;
  NONVITALMAIN_DW.M_W11B_21B_BACK_TO_R = M_W11B_21B_BACK_TO_R;
  NONVITALMAIN_DW.M_W11B_21B_N = M_W11B_21B_N;
  NONVITALMAIN_DW.M_W11B_21B_N_BLOCK = M_W11B_21B_N_BLOCK;
  NONVITALMAIN_DW.M_W11B_21B_R = M_W11B_21B_R;
  NONVITALMAIN_DW.M_W11B_21B_R_BLOCK = M_W11B_21B_R_BLOCK;
  NONVITALMAIN_DW.M_W11B_21B_START = M_W11B_21B_START;
  NONVITALMAIN_DW.M_W13A_23A_CTRL_CAL = M_W13A_23A_CTRL_CAL;
  NONVITALMAIN_DW.M_W13A_23A_CTRL_TRAIL = M_W13A_23A_CTRL_TRAIL;
  NONVITALMAIN_DW.M_W13A_23A_CTRL_RST = M_W13A_23A_CTRL_RST;
  NONVITALMAIN_DW.M_W13A_23A_CTRL_B = M_W13A_23A_CTRL_B;
  NONVITALMAIN_DW.M_W13A_23A_OOC_RD = M_W13A_23A_OOC_RD;
  NONVITALMAIN_DW.M_W13A_23A_BACK_TO_N = M_W13A_23A_BACK_TO_N;
  NONVITALMAIN_DW.M_W13A_23A_BACK_TO_R = M_W13A_23A_BACK_TO_R;
  NONVITALMAIN_DW.M_W13A_23A_N = M_W13A_23A_N;
  NONVITALMAIN_DW.M_W13A_23A_N_BLOCK = M_W13A_23A_N_BLOCK;
  NONVITALMAIN_DW.M_W13A_23A_R = M_W13A_23A_R;
  NONVITALMAIN_DW.M_W13A_23A_R_BLOCK = M_W13A_23A_R_BLOCK;
  NONVITALMAIN_DW.M_W13A_23A_START = M_W13A_23A_START;
  NONVITALMAIN_DW.M_W13B_23B_CTRL_CAL = M_W13B_23B_CTRL_CAL;
  NONVITALMAIN_DW.M_W13B_23B_CTRL_TRAIL = M_W13B_23B_CTRL_TRAIL;
  NONVITALMAIN_DW.M_W13B_23B_CTRL_RST = M_W13B_23B_CTRL_RST;
  NONVITALMAIN_DW.M_W13B_23B_CTRL_B = M_W13B_23B_CTRL_B;
  NONVITALMAIN_DW.M_W13B_23B_OOC_RD = M_W13B_23B_OOC_RD;
  NONVITALMAIN_DW.M_W13B_23B_BACK_TO_N = M_W13B_23B_BACK_TO_N;
  NONVITALMAIN_DW.M_W13B_23B_BACK_TO_R = M_W13B_23B_BACK_TO_R;
  NONVITALMAIN_DW.M_W13B_23B_N = M_W13B_23B_N;
  NONVITALMAIN_DW.M_W13B_23B_N_BLOCK = M_W13B_23B_N_BLOCK;
  NONVITALMAIN_DW.M_W13B_23B_R = M_W13B_23B_R;
  NONVITALMAIN_DW.M_W13B_23B_R_BLOCK = M_W13B_23B_R_BLOCK;
  NONVITALMAIN_DW.M_W13B_23B_START = M_W13B_23B_START;
  NONVITALMAIN_DW.M_W21C_CTRL_CAL = M_W21C_CTRL_CAL;
  NONVITALMAIN_DW.M_W21C_CTRL_TRAIL = M_W21C_CTRL_TRAIL;
  NONVITALMAIN_DW.M_W21C_CTRL_RST = M_W21C_CTRL_RST;
  NONVITALMAIN_DW.M_W21C_CTRL_B = M_W21C_CTRL_B;
  NONVITALMAIN_DW.M_W21C_OOC_RD = M_W21C_OOC_RD;
  NONVITALMAIN_DW.M_W21C_BACK_TO_N = M_W21C_BACK_TO_N;
  NONVITALMAIN_DW.M_W21C_BACK_TO_R = M_W21C_BACK_TO_R;
  NONVITALMAIN_DW.M_W21C_N_BLOCK = M_W21C_N_BLOCK;
  NONVITALMAIN_DW.M_W21C_R_BLOCK = M_W21C_R_BLOCK;
  NONVITALMAIN_DW.M_W21C_START = M_W21C_START;
  NONVITALMAIN_DW.M_B_DEP_10 = M_B_DEP_10;
  NONVITALMAIN_DW.M_B_DEP_20 = M_B_DEP_20;
  NONVITALMAIN_DW.M_B_12_10 = M_B_12_10;
  NONVITALMAIN_DW.M_B_12_20 = M_B_12_20;
  NONVITALMAIN_DW.M_B_12_14 = M_B_12_14;
  NONVITALMAIN_DW.M_B_12_24 = M_B_12_24;
  NONVITALMAIN_DW.M_B_14_12 = M_B_14_12;
  NONVITALMAIN_DW.M_B_14_22 = M_B_14_22;
  NONVITALMAIN_DW.M_B_22_10 = M_B_22_10;
  NONVITALMAIN_DW.M_B_22_20 = M_B_22_20;
  NONVITALMAIN_DW.M_B_22_14 = M_B_22_14;
  NONVITALMAIN_DW.M_B_22_24 = M_B_22_24;
  NONVITALMAIN_DW.M_B_24_12 = M_B_24_12;
  NONVITALMAIN_DW.M_B_24_22 = M_B_24_22;
  NONVITALMAIN_DW.M_B_10_DEP = M_B_10_DEP;
  NONVITALMAIN_DW.M_B_10_12 = M_B_10_12;
  NONVITALMAIN_DW.M_B_10_22 = M_B_10_22;
  NONVITALMAIN_DW.M_B_20_DEP = M_B_20_DEP;
  NONVITALMAIN_DW.M_B_20_12 = M_B_20_12;
  NONVITALMAIN_DW.M_B_20_22 = M_B_20_22;
  NONVITALMAIN_DW.M_CBTC_T1_F_ED1 = M_CBTC_T1_F_ED1;
  NONVITALMAIN_DW.M_CBTC_T2_F_ED1 = M_CBTC_T2_F_ED1;
  NONVITALMAIN_DW.M_CBTC_T3_F_ED1 = M_CBTC_T3_F_ED1;
  NONVITALMAIN_DW.M_CBTC_TIB_F_ED1 = M_CBTC_TIB_F_ED1;
  NONVITALMAIN_DW.M_CBTC_T1_F_ED2 = M_CBTC_T1_F_ED2;
  NONVITALMAIN_DW.M_CBTC_T2_F_ED2 = M_CBTC_T2_F_ED2;
  NONVITALMAIN_DW.M_CBTC_T3_F_ED2 = M_CBTC_T3_F_ED2;
  NONVITALMAIN_DW.M_CBTC_TIB_F_ED2 = M_CBTC_TIB_F_ED2;
  NONVITALMAIN_DW.M_CBTC_T1_F_ED3 = M_CBTC_T1_F_ED3;
  NONVITALMAIN_DW.M_CBTC_T2_F_ED3 = M_CBTC_T2_F_ED3;
  NONVITALMAIN_DW.M_CBTC_T3_F_ED3 = M_CBTC_T3_F_ED3;
  NONVITALMAIN_DW.M_CBTC_TIB_F_ED3 = M_CBTC_TIB_F_ED3;
  NONVITALMAIN_DW.M_CBTC_T1_F_ED4 = M_CBTC_T1_F_ED4;
  NONVITALMAIN_DW.M_CBTC_T2_F_ED4 = M_CBTC_T2_F_ED4;
  NONVITALMAIN_DW.M_CBTC_T3_F_ED4 = M_CBTC_T3_F_ED4;
  NONVITALMAIN_DW.M_CBTC_TIB_F_ED4 = M_CBTC_TIB_F_ED4;
  NONVITALMAIN_DW.M_CBTC_T1_F_ESB1 = M_CBTC_T1_F_ESB1;
  NONVITALMAIN_DW.M_CBTC_T2_F_ESB1 = M_CBTC_T2_F_ESB1;
  NONVITALMAIN_DW.M_CBTC_T3_F_ESB1 = M_CBTC_T3_F_ESB1;
  NONVITALMAIN_DW.M_CBTC_TIB_F_ESB1 = M_CBTC_TIB_F_ESB1;
  NONVITALMAIN_DW.M_CBTC_T1_F_ESB2 = M_CBTC_T1_F_ESB2;
  NONVITALMAIN_DW.M_CBTC_T2_F_ESB2 = M_CBTC_T2_F_ESB2;
  NONVITALMAIN_DW.M_CBTC_T3_F_ESB2 = M_CBTC_T3_F_ESB2;
  NONVITALMAIN_DW.M_CBTC_TIB_F_ESB2 = M_CBTC_TIB_F_ESB2;
  NONVITALMAIN_DW.M_FAIL_COMM1_F = M_FAIL_COMM1_F;
  NONVITALMAIN_DW.M_FAIL_COMM2_F = M_FAIL_COMM2_F;
  NONVITALMAIN_DW.M_FAIL_SYSTEM1_F = M_FAIL_SYSTEM1_F;
  NONVITALMAIN_DW.M_FAIL_SYSTEM2_F = M_FAIL_SYSTEM2_F;
  NONVITALMAIN_DW.M_CBTC_T1_F_PSD1 = M_CBTC_T1_F_PSD1;
  NONVITALMAIN_DW.M_CBTC_T2_F_PSD1 = M_CBTC_T2_F_PSD1;
  NONVITALMAIN_DW.M_CBTC_T3_F_PSD1 = M_CBTC_T3_F_PSD1;
  NONVITALMAIN_DW.M_CBTC_TIB_F_PSD1 = M_CBTC_TIB_F_PSD1;
  NONVITALMAIN_DW.M_CBTC_T1_F_PSD2 = M_CBTC_T1_F_PSD2;
  NONVITALMAIN_DW.M_CBTC_T2_F_PSD2 = M_CBTC_T2_F_PSD2;
  NONVITALMAIN_DW.M_CBTC_T3_F_PSD2 = M_CBTC_T3_F_PSD2;
  NONVITALMAIN_DW.M_CBTC_TIB_F_PSD2 = M_CBTC_TIB_F_PSD2;
  NONVITALMAIN_DW.M_CTRL_AA = M_CTRL_AA;
  NONVITALMAIN_DW.M_PBCTRL_10_12 = M_PBCTRL_10_12;
  NONVITALMAIN_DW.M_PBCTRL_10_22 = M_PBCTRL_10_22;
  NONVITALMAIN_DW.M_PBCTRL_14_12 = M_PBCTRL_14_12;
  NONVITALMAIN_DW.M_PBCTRL_14_22 = M_PBCTRL_14_22;
  NONVITALMAIN_DW.M_PBCTRL_20_12 = M_PBCTRL_20_12;
  NONVITALMAIN_DW.M_PBCTRL_20_22 = M_PBCTRL_20_22;
  NONVITALMAIN_DW.M_PBCTRL_24_12 = M_PBCTRL_24_12;
  NONVITALMAIN_DW.M_PBCTRL_24_22 = M_PBCTRL_24_22;
  NONVITALMAIN_DW.M_PBCTRL_DEP_10 = M_PBCTRL_DEP_10;
  NONVITALMAIN_DW.M_PBCTRL_DEP_20 = M_PBCTRL_DEP_20;
  NONVITALMAIN_DW.M_PBCTRL_12_10 = M_PBCTRL_12_10;
  NONVITALMAIN_DW.M_PBCTRL_22_10 = M_PBCTRL_22_10;
  NONVITALMAIN_DW.M_PBCTRL_12_14 = M_PBCTRL_12_14;
  NONVITALMAIN_DW.M_PBCTRL_22_14 = M_PBCTRL_22_14;
  NONVITALMAIN_DW.M_PBCTRL_12_20 = M_PBCTRL_12_20;
  NONVITALMAIN_DW.M_PBCTRL_22_20 = M_PBCTRL_22_20;
  NONVITALMAIN_DW.M_PBCTRL_12_24 = M_PBCTRL_12_24;
  NONVITALMAIN_DW.M_PBCTRL_22_24 = M_PBCTRL_22_24;
  NONVITALMAIN_DW.M_PBCTRL_10_DEP = M_PBCTRL_10_DEP;
  NONVITALMAIN_DW.M_PBCTRL_20_DEP = M_PBCTRL_20_DEP;
  NONVITALMAIN_DW.M_AR_J12A = M_AR_J12A;
  NONVITALMAIN_DW.M_AR_J12B = M_AR_J12B;
  NONVITALMAIN_DW.M_AR_J14 = M_AR_J14;
  NONVITALMAIN_DW.M_AR_J22A = M_AR_J22A;
  NONVITALMAIN_DW.M_AR_J22B = M_AR_J22B;
  NONVITALMAIN_DW.M_AR_J24 = M_AR_J24;
  NONVITALMAIN_DW.M_AR_JL10 = M_AR_JL10;
  NONVITALMAIN_DW.M_AR_JL20 = M_AR_JL20;
  NONVITALMAIN_DW.M_W11A_21A_F_ACK = M_W11A_21A_F_ACK;
  NONVITALMAIN_DW.M_W11A_21A_FAIL = M_W11A_21A_FAIL;
  NONVITALMAIN_DW.M_W11A_21A_CTRL_TRAIL_Z = M_W11A_21A_CTRL_TRAIL_Z;
  NONVITALMAIN_DW.M_W11B_21B_F_ACK = M_W11B_21B_F_ACK;
  NONVITALMAIN_DW.M_W11B_21B_FAIL = M_W11B_21B_FAIL;
  NONVITALMAIN_DW.M_W11B_21B_CTRL_TRAIL_Z = M_W11B_21B_CTRL_TRAIL_Z;
  NONVITALMAIN_DW.M_W13A_23A_F_ACK = M_W13A_23A_F_ACK;
  NONVITALMAIN_DW.M_W13A_23A_FAIL = M_W13A_23A_FAIL;
  NONVITALMAIN_DW.M_W13A_23A_CTRL_TRAIL_Z = M_W13A_23A_CTRL_TRAIL_Z;
  NONVITALMAIN_DW.M_W13B_23B_F_ACK = M_W13B_23B_F_ACK;
  NONVITALMAIN_DW.M_W13B_23B_FAIL = M_W13B_23B_FAIL;
  NONVITALMAIN_DW.M_W13B_23B_CTRL_TRAIL_Z = M_W13B_23B_CTRL_TRAIL_Z;
  NONVITALMAIN_DW.M_W21C_F_ACK = M_W21C_F_ACK;
  NONVITALMAIN_DW.M_W21C_FAIL = M_W21C_FAIL;
  NONVITALMAIN_DW.M_B_DEP = M_B_DEP;
  NONVITALMAIN_DW.M_B_J12A_H = M_B_J12A_H;
  NONVITALMAIN_DW.M_RS_12_10 = M_RS_12_10;
  NONVITALMAIN_DW.M_RS_12_20 = M_RS_12_20;
  NONVITALMAIN_DW.M_B_J12B_H = M_B_J12B_H;
  NONVITALMAIN_DW.M_RS_12_14 = M_RS_12_14;
  NONVITALMAIN_DW.M_RS_12_24 = M_RS_12_24;
  NONVITALMAIN_DW.M_B_J14_D = M_B_J14_D;
  NONVITALMAIN_DW.M_RS_14_12 = M_RS_14_12;
  NONVITALMAIN_DW.M_RS_14_22 = M_RS_14_22;
  NONVITALMAIN_DW.M_B_J22A_H = M_B_J22A_H;
  NONVITALMAIN_DW.M_RS_22_10 = M_RS_22_10;
  NONVITALMAIN_DW.M_RS_22_20 = M_RS_22_20;
  NONVITALMAIN_DW.M_B_J22B_H = M_B_J22B_H;
  NONVITALMAIN_DW.M_RS_22_14 = M_RS_22_14;
  NONVITALMAIN_DW.M_RS_22_24 = M_RS_22_24;
  NONVITALMAIN_DW.M_B_J24_D = M_B_J24_D;
  NONVITALMAIN_DW.M_RS_24_12 = M_RS_24_12;
  NONVITALMAIN_DW.M_RS_24_22 = M_RS_24_22;
  NONVITALMAIN_DW.M_B_JL10_S = M_B_JL10_S;
  NONVITALMAIN_DW.M_B_JL10_D = M_B_JL10_D;
  NONVITALMAIN_DW.M_RS_10_12 = M_RS_10_12;
  NONVITALMAIN_DW.M_RS_10_22 = M_RS_10_22;
  NONVITALMAIN_DW.M_B_JL20_S = M_B_JL20_S;
  NONVITALMAIN_DW.M_B_JL20_D = M_B_JL20_D;
  NONVITALMAIN_DW.M_RS_20_12 = M_RS_20_12;
  NONVITALMAIN_DW.M_RS_20_22 = M_RS_20_22;

  /* DiscretePulseGenerator: '<S3>/0.5S' */
  NONVITALMAIN_DW.clockTickCounter = clockTickCounter_0;

  /* DiscretePulseGenerator: '<S3>/1S' */
  NONVITALMAIN_DW.clockTickCounter_f = clockTickCounter_f_0;
}

/* Update for referenced model: 'NONVITALMAIN' */
void NONVITALMAIN_Update(void)
{
  RT_MODEL_NONVITALMAIN_T *const NONVITALMAIN_M = &(NONVITALMAIN_MdlrefDW.rtm);
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for Memory: '<S18>/Memory' */
    NONVITALMAIN_DW.Memory_PreviousInput = NONVITALMAIN_DW.OR1;

    /* Update for Memory: '<S18>/Memory1' */
    NONVITALMAIN_DW.Memory1_PreviousInput = NONVITALMAIN_DW.OR2;
  }

  /* Update for Atomic SubSystem: '<S19>/TON7' */
  MNV_TON_Update(NONVITALMAIN_M, NONVITALMAIN_DW.NOT8, &NONVITALMAIN_DW.TON7);

  /* End of Update for SubSystem: '<S19>/TON7' */

  /* Update for Atomic SubSystem: '<S19>/TON6' */
  MNV_TON_Update(NONVITALMAIN_M, NONVITALMAIN_DW.NOT7, &NONVITALMAIN_DW.TON6);

  /* End of Update for SubSystem: '<S19>/TON6' */

  /* Update for Atomic SubSystem: '<S19>/TON5' */
  MNV_TON_Update(NONVITALMAIN_M, NONVITALMAIN_DW.NOT6, &NONVITALMAIN_DW.TON5);

  /* End of Update for SubSystem: '<S19>/TON5' */

  /* Update for Atomic SubSystem: '<S19>/TON4' */
  MNV_TON_Update(NONVITALMAIN_M, NONVITALMAIN_DW.NOT5, &NONVITALMAIN_DW.TON4);

  /* End of Update for SubSystem: '<S19>/TON4' */

  /* Update for Atomic SubSystem: '<S19>/TON3' */
  MNV_TON_Update(NONVITALMAIN_M, NONVITALMAIN_DW.NOT4, &NONVITALMAIN_DW.TON3);

  /* End of Update for SubSystem: '<S19>/TON3' */

  /* Update for Atomic SubSystem: '<S19>/TON2' */
  MNV_TON_Update(NONVITALMAIN_M, NONVITALMAIN_DW.NOT3, &NONVITALMAIN_DW.TON2);

  /* End of Update for SubSystem: '<S19>/TON2' */

  /* Update for Atomic SubSystem: '<S19>/TON1' */
  MNV_TON_Update(NONVITALMAIN_M, NONVITALMAIN_DW.NOT2, &NONVITALMAIN_DW.TON1);

  /* End of Update for SubSystem: '<S19>/TON1' */

  /* Update for Atomic SubSystem: '<S19>/TON' */
  MNV_TON_Update(NONVITALMAIN_M, NONVITALMAIN_DW.NOT1, &NONVITALMAIN_DW.TON);

  /* End of Update for SubSystem: '<S19>/TON' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for Memory: '<S60>/Memory1' */
    NONVITALMAIN_DW.Memory1_PreviousInput_e = NONVITALMAIN_DW.DEPGRDO;

    /* Update for Memory: '<S60>/Memory2' */
    NONVITALMAIN_DW.Memory2_PreviousInput = NONVITALMAIN_DW.AND13;
  }

  /* Update for Atomic SubSystem: '<S60>/MNV_TOF2' */
  MNV_TOF_Update(NONVITALMAIN_M, NONVITALMAIN_DW.Memory1,
                 &NONVITALMAIN_DW.MNV_TOF2);

  /* End of Update for SubSystem: '<S60>/MNV_TOF2' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for Memory: '<S61>/Memory' */
    NONVITALMAIN_DW.Memory_PreviousInput_a = NONVITALMAIN_DW.J12ADRDO;

    /* Update for Memory: '<S61>/Memory2' */
    NONVITALMAIN_DW.Memory2_PreviousInput_b = NONVITALMAIN_DW.AND13_c;
  }

  /* Update for Atomic SubSystem: '<S61>/MNV_TOF1' */
  MNV_TOF_Update(NONVITALMAIN_M, NONVITALMAIN_DW.Memory,
                 &NONVITALMAIN_DW.MNV_TOF1);

  /* End of Update for SubSystem: '<S61>/MNV_TOF1' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for Memory: '<S62>/Memory' */
    NONVITALMAIN_DW.Memory_PreviousInput_j = NONVITALMAIN_DW.J12BDRDO;

    /* Update for Memory: '<S62>/Memory2' */
    NONVITALMAIN_DW.Memory2_PreviousInput_n = NONVITALMAIN_DW.AND13_g;
  }

  /* Update for Atomic SubSystem: '<S62>/MNV_TOF1' */
  MNV_TOF_Update(NONVITALMAIN_M, NONVITALMAIN_DW.Memory_m,
                 &NONVITALMAIN_DW.MNV_TOF1_b);

  /* End of Update for SubSystem: '<S62>/MNV_TOF1' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for Memory: '<S63>/Memory' */
    NONVITALMAIN_DW.Memory_PreviousInput_p = NONVITALMAIN_DW.J14DRDO;

    /* Update for Memory: '<S63>/Memory2' */
    NONVITALMAIN_DW.Memory2_PreviousInput_a = NONVITALMAIN_DW.AND13_k;
  }

  /* Update for Atomic SubSystem: '<S63>/MNV_TOF1' */
  MNV_TOF_Update(NONVITALMAIN_M, NONVITALMAIN_DW.Memory_c,
                 &NONVITALMAIN_DW.MNV_TOF1_l);

  /* End of Update for SubSystem: '<S63>/MNV_TOF1' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for Memory: '<S64>/Memory' */
    NONVITALMAIN_DW.Memory_PreviousInput_k = NONVITALMAIN_DW.J22ADRDO;

    /* Update for Memory: '<S64>/Memory2' */
    NONVITALMAIN_DW.Memory2_PreviousInput_f = NONVITALMAIN_DW.AND13_ch;
  }

  /* Update for Atomic SubSystem: '<S64>/MNV_TOF1' */
  MNV_TOF_Update(NONVITALMAIN_M, NONVITALMAIN_DW.Memory_n,
                 &NONVITALMAIN_DW.MNV_TOF1_j);

  /* End of Update for SubSystem: '<S64>/MNV_TOF1' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for Memory: '<S65>/Memory' */
    NONVITALMAIN_DW.Memory_PreviousInput_ay = NONVITALMAIN_DW.J22BDRDO;

    /* Update for Memory: '<S65>/Memory2' */
    NONVITALMAIN_DW.Memory2_PreviousInput_e = NONVITALMAIN_DW.AND13_ga;
  }

  /* Update for Atomic SubSystem: '<S65>/MNV_TOF1' */
  MNV_TOF_Update(NONVITALMAIN_M, NONVITALMAIN_DW.Memory_i,
                 &NONVITALMAIN_DW.MNV_TOF1_ll);

  /* End of Update for SubSystem: '<S65>/MNV_TOF1' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for Memory: '<S66>/Memory' */
    NONVITALMAIN_DW.Memory_PreviousInput_kg = NONVITALMAIN_DW.J24DRDO;

    /* Update for Memory: '<S66>/Memory2' */
    NONVITALMAIN_DW.Memory2_PreviousInput_c = NONVITALMAIN_DW.AND13_o;
  }

  /* Update for Atomic SubSystem: '<S66>/MNV_TOF1' */
  MNV_TOF_Update(NONVITALMAIN_M, NONVITALMAIN_DW.Memory_o,
                 &NONVITALMAIN_DW.MNV_TOF1_k);

  /* End of Update for SubSystem: '<S66>/MNV_TOF1' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for Memory: '<S67>/Memory' */
    NONVITALMAIN_DW.Memory_PreviousInput_b = NONVITALMAIN_DW.JL10DRDO;

    /* Update for Memory: '<S67>/Memory1' */
    NONVITALMAIN_DW.Memory1_PreviousInput_l = NONVITALMAIN_DW.JL10GRDO;

    /* Update for Memory: '<S67>/Memory2' */
    NONVITALMAIN_DW.Memory2_PreviousInput_p = NONVITALMAIN_DW.AND13_n;
  }

  /* Update for Atomic SubSystem: '<S67>/MNV_TOF1' */
  MNV_TOF_Update(NONVITALMAIN_M, NONVITALMAIN_DW.Memory_e,
                 &NONVITALMAIN_DW.MNV_TOF1_lg);

  /* End of Update for SubSystem: '<S67>/MNV_TOF1' */

  /* Update for Atomic SubSystem: '<S67>/MNV_TOF2' */
  MNV_TOF_Update(NONVITALMAIN_M, NONVITALMAIN_DW.Memory1_m,
                 &NONVITALMAIN_DW.MNV_TOF2_h);

  /* End of Update for SubSystem: '<S67>/MNV_TOF2' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for Memory: '<S68>/Memory' */
    NONVITALMAIN_DW.Memory_PreviousInput_pj = NONVITALMAIN_DW.JL20DRDO;

    /* Update for Memory: '<S68>/Memory1' */
    NONVITALMAIN_DW.Memory1_PreviousInput_i = NONVITALMAIN_DW.JL20GRDO;

    /* Update for Memory: '<S68>/Memory2' */
    NONVITALMAIN_DW.Memory2_PreviousInput_af = NONVITALMAIN_DW.AND13_or;
  }

  /* Update for Atomic SubSystem: '<S68>/MNV_TOF1' */
  MNV_TOF_Update(NONVITALMAIN_M, NONVITALMAIN_DW.Memory_l,
                 &NONVITALMAIN_DW.MNV_TOF1_js);

  /* End of Update for SubSystem: '<S68>/MNV_TOF1' */

  /* Update for Atomic SubSystem: '<S68>/MNV_TOF2' */
  MNV_TOF_Update(NONVITALMAIN_M, NONVITALMAIN_DW.Memory1_e,
                 &NONVITALMAIN_DW.MNV_TOF2_o);

  /* End of Update for SubSystem: '<S68>/MNV_TOF2' */

  /* Update for Atomic SubSystem: '<S219>/INTERLOCKING POINT' */
  M_IL_POINT_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.INTERLOCKINGPOINT);

  /* End of Update for SubSystem: '<S219>/INTERLOCKING POINT' */

  /* Update for Atomic SubSystem: '<S220>/INTERLOCKING POINT' */
  M_IL_POINT_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.INTERLOCKINGPOINT_f);

  /* End of Update for SubSystem: '<S220>/INTERLOCKING POINT' */

  /* Update for Atomic SubSystem: '<S221>/INTERLOCKING POINT' */
  M_IL_POINT_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.INTERLOCKINGPOINT_e);

  /* End of Update for SubSystem: '<S221>/INTERLOCKING POINT' */

  /* Update for Atomic SubSystem: '<S222>/INTERLOCKING POINT' */
  M_IL_POINT_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.INTERLOCKINGPOINT_a);

  /* End of Update for SubSystem: '<S222>/INTERLOCKING POINT' */

  /* Update for Atomic SubSystem: '<S223>/INTERLOCKING POINT' */
  M_IL_POINT_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.INTERLOCKINGPOINT_i);

  /* End of Update for SubSystem: '<S223>/INTERLOCKING POINT' */

  /* Update for Atomic SubSystem: '<S532>/POINT FAIL' */
  M_POINT_FAIL_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.POINTFAIL);

  /* End of Update for SubSystem: '<S532>/POINT FAIL' */

  /* Update for Atomic SubSystem: '<S533>/POINT FAIL' */
  M_POINT_FAIL_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.POINTFAIL_n);

  /* End of Update for SubSystem: '<S533>/POINT FAIL' */

  /* Update for Atomic SubSystem: '<S534>/POINT FAIL' */
  M_POINT_FAIL_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.POINTFAIL_a);

  /* End of Update for SubSystem: '<S534>/POINT FAIL' */

  /* Update for Atomic SubSystem: '<S535>/POINT FAIL' */
  M_POINT_FAIL_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.POINTFAIL_m);

  /* End of Update for SubSystem: '<S535>/POINT FAIL' */

  /* Update for Atomic SubSystem: '<S536>/POINT FAIL' */
  M_POINT_FAIL_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.POINTFAIL_p);

  /* End of Update for SubSystem: '<S536>/POINT FAIL' */

  /* Update for Atomic SubSystem: '<S567>/MNV_TOF' */
  MNV_TOF_Update(NONVITALMAIN_M, NONVITALMAIN_DW.AND1,
                 &NONVITALMAIN_DW.MNV_TOF_e);

  /* End of Update for SubSystem: '<S567>/MNV_TOF' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for UnitDelay: '<S576>/Delay Input1'
     *
     * Block description for '<S576>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE = NONVITALMAIN_DW.AND1_j;
  }

  /* Update for Atomic SubSystem: '<S568>/MNV_TOF' */
  MNV_TOF_Update(NONVITALMAIN_M, NONVITALMAIN_DW.FixPtRelationalOperator,
                 &NONVITALMAIN_DW.MNV_TOF_h);

  /* End of Update for SubSystem: '<S568>/MNV_TOF' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for UnitDelay: '<S588>/Delay Input1'
     *
     * Block description for '<S588>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_n = NONVITALMAIN_DW.VSB15_g;

    /* Update for UnitDelay: '<S589>/Delay Input1'
     *
     * Block description for '<S589>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_h = NONVITALMAIN_DW.VSB21_d;

    /* Update for UnitDelay: '<S595>/Delay Input1'
     *
     * Block description for '<S595>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_k = NONVITALMAIN_DW.VSB22_p;

    /* Update for UnitDelay: '<S596>/Delay Input1'
     *
     * Block description for '<S596>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_a = NONVITALMAIN_DW.VSB23_k;

    /* Update for UnitDelay: '<S582>/Delay Input1'
     *
     * Block description for '<S582>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_m = NONVITALMAIN_DW.VSB1_j;

    /* Update for UnitDelay: '<S583>/Delay Input1'
     *
     * Block description for '<S583>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_c = NONVITALMAIN_DW.VSB2_e;

    /* Update for UnitDelay: '<S594>/Delay Input1'
     *
     * Block description for '<S594>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_e = NONVITALMAIN_DW.VSB3_p;

    /* Update for UnitDelay: '<S602>/Delay Input1'
     *
     * Block description for '<S602>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_f = NONVITALMAIN_DW.VSB4_d;

    /* Update for UnitDelay: '<S603>/Delay Input1'
     *
     * Block description for '<S603>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_j = NONVITALMAIN_DW.VSB5_k;

    /* Update for UnitDelay: '<S604>/Delay Input1'
     *
     * Block description for '<S604>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_p = NONVITALMAIN_DW.VSB6_p;

    /* Update for UnitDelay: '<S605>/Delay Input1'
     *
     * Block description for '<S605>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_ej = NONVITALMAIN_DW.VSB7_g;

    /* Update for UnitDelay: '<S606>/Delay Input1'
     *
     * Block description for '<S606>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_fa = NONVITALMAIN_DW.VSB8_i;

    /* Update for UnitDelay: '<S607>/Delay Input1'
     *
     * Block description for '<S607>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_o = NONVITALMAIN_DW.VSB9_n;

    /* Update for UnitDelay: '<S608>/Delay Input1'
     *
     * Block description for '<S608>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_m5 = NONVITALMAIN_DW.VSB10_l;

    /* Update for UnitDelay: '<S584>/Delay Input1'
     *
     * Block description for '<S584>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_l = NONVITALMAIN_DW.VSB11_b;

    /* Update for UnitDelay: '<S585>/Delay Input1'
     *
     * Block description for '<S585>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_kj = NONVITALMAIN_DW.VSB12_p;

    /* Update for UnitDelay: '<S586>/Delay Input1'
     *
     * Block description for '<S586>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_cd = NONVITALMAIN_DW.VSB13_c;

    /* Update for UnitDelay: '<S587>/Delay Input1'
     *
     * Block description for '<S587>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_a1 = NONVITALMAIN_DW.VSB14_l;

    /* Update for UnitDelay: '<S597>/Delay Input1'
     *
     * Block description for '<S597>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_d = NONVITALMAIN_DW.VSB25_n;

    /* Update for UnitDelay: '<S598>/Delay Input1'
     *
     * Block description for '<S598>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_n5 = NONVITALMAIN_DW.VSB26_c;

    /* Update for UnitDelay: '<S599>/Delay Input1'
     *
     * Block description for '<S599>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_lv = NONVITALMAIN_DW.VSB27_o;

    /* Update for UnitDelay: '<S600>/Delay Input1'
     *
     * Block description for '<S600>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_jk = NONVITALMAIN_DW.VSB28;

    /* Update for UnitDelay: '<S601>/Delay Input1'
     *
     * Block description for '<S601>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_i = NONVITALMAIN_DW.VSB16_h;

    /* Update for UnitDelay: '<S590>/Delay Input1'
     *
     * Block description for '<S590>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_io = NONVITALMAIN_DW.VSB17_i;

    /* Update for UnitDelay: '<S591>/Delay Input1'
     *
     * Block description for '<S591>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_hs = NONVITALMAIN_DW.VSB18_i;

    /* Update for UnitDelay: '<S592>/Delay Input1'
     *
     * Block description for '<S592>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_b = NONVITALMAIN_DW.VSB19_f;

    /* Update for UnitDelay: '<S593>/Delay Input1'
     *
     * Block description for '<S593>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_lc = NONVITALMAIN_DW.VSB20_c;
  }

  /* Update for Atomic SubSystem: '<S569>/MNV_TOF' */
  MNV_TOF_Update(NONVITALMAIN_M, NONVITALMAIN_DW.AND1_k,
                 &NONVITALMAIN_DW.MNV_TOF_m);

  /* End of Update for SubSystem: '<S569>/MNV_TOF' */
  if (rtmIsMajorTimeStep(NONVITALMAIN_M)) {
    /* Update for UnitDelay: '<S614>/Delay Input1'
     *
     * Block description for '<S614>/Delay Input1':
     *
     *  Store in Global RAM
     */
    NONVITALMAIN_DW.DelayInput1_DSTATE_kg = NONVITALMAIN_DW.AND14;
  }

  /* Update for Atomic SubSystem: '<S570>/MNV_TOF' */
  MNV_TOF_Update(NONVITALMAIN_M, NONVITALMAIN_DW.FixPtRelationalOperator_e,
                 &NONVITALMAIN_DW.MNV_TOF_n);

  /* End of Update for SubSystem: '<S570>/MNV_TOF' */

  /* Update for Atomic SubSystem: '<S660>/SIGNAL BLOCK S' */
  M_SIG_B_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.SIGNALBLOCKS);

  /* End of Update for SubSystem: '<S660>/SIGNAL BLOCK S' */

  /* Update for Atomic SubSystem: '<S661>/SIGNAL BLOCK T' */
  M_SIG_B_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.SIGNALBLOCKT);

  /* End of Update for SubSystem: '<S661>/SIGNAL BLOCK T' */

  /* Update for Atomic SubSystem: '<S662>/SIGNAL BLOCK T' */
  M_SIG_B_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.SIGNALBLOCKT_p);

  /* End of Update for SubSystem: '<S662>/SIGNAL BLOCK T' */

  /* Update for Atomic SubSystem: '<S663>/SIGNAL BLOCK T' */
  M_SIG_B_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.SIGNALBLOCKT_b);

  /* End of Update for SubSystem: '<S663>/SIGNAL BLOCK T' */

  /* Update for Atomic SubSystem: '<S664>/SIGNAL BLOCK T' */
  M_SIG_B_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.SIGNALBLOCKT_i);

  /* End of Update for SubSystem: '<S664>/SIGNAL BLOCK T' */

  /* Update for Atomic SubSystem: '<S665>/SIGNAL BLOCK T' */
  M_SIG_B_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.SIGNALBLOCKT_m);

  /* End of Update for SubSystem: '<S665>/SIGNAL BLOCK T' */

  /* Update for Atomic SubSystem: '<S666>/SIGNAL BLOCK T' */
  M_SIG_B_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.SIGNALBLOCKT_f);

  /* End of Update for SubSystem: '<S666>/SIGNAL BLOCK T' */

  /* Update for Atomic SubSystem: '<S667>/SIGNAL BLOCK T' */
  M_SIG_B_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.SIGNALBLOCKT_ir);

  /* End of Update for SubSystem: '<S667>/SIGNAL BLOCK T' */

  /* Update for Atomic SubSystem: '<S667>/SIGNAL BLOCK S' */
  M_SIG_B_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.SIGNALBLOCKS_c);

  /* End of Update for SubSystem: '<S667>/SIGNAL BLOCK S' */

  /* Update for Atomic SubSystem: '<S668>/SIGNAL BLOCK T' */
  M_SIG_B_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.SIGNALBLOCKT_j);

  /* End of Update for SubSystem: '<S668>/SIGNAL BLOCK T' */

  /* Update for Atomic SubSystem: '<S668>/SIGNAL BLOCK S' */
  M_SIG_B_Update(NONVITALMAIN_M, &NONVITALMAIN_DW.SIGNALBLOCKS_e);

  /* End of Update for SubSystem: '<S668>/SIGNAL BLOCK S' */
}

/* Model initialize function */
void NONVITALMAIN_initialize(const char_T **rt_errorStatus, RTWSolverInfo
  *rt_solverInfo, const rtTimingBridge *timingBridge, int_T mdlref_TID0, int_T
  mdlref_TID1)
{
  RT_MODEL_NONVITALMAIN_T *const NONVITALMAIN_M = &(NONVITALMAIN_MdlrefDW.rtm);

  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)NONVITALMAIN_M, 0,
                sizeof(RT_MODEL_NONVITALMAIN_T));

  /* setup the global timing engine */
  NONVITALMAIN_GlobalTID[0] = mdlref_TID0;
  NONVITALMAIN_GlobalTID[1] = mdlref_TID1;
  NONVITALMAIN_TimingBrdg = timingBridge;

  /* initialize error status */
  rtmSetErrorStatusPointer(NONVITALMAIN_M, rt_errorStatus);

  /* initialize RTWSolverInfo */
  NONVITALMAIN_M->solverInfo = (rt_solverInfo);

  /* Set the Timing fields to the appropriate data in the RTWSolverInfo */
  rtmSetSimTimeStepPointer(NONVITALMAIN_M, rtsiGetSimTimeStepPtr
    (NONVITALMAIN_M->solverInfo));
  NONVITALMAIN_M->Timing.stepSize0 = (rtsiGetStepSize(NONVITALMAIN_M->solverInfo));

  /* states (dwork) */
  (void) memset((void *)&NONVITALMAIN_DW, 0,
                sizeof(DW_NONVITALMAIN_f_T));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
