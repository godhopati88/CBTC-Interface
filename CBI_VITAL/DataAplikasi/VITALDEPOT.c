/*
 * File: VITALDEPOT.c
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

#include "VITALDEPOT.h"
#include "VITALDEPOT_private.h"

int_T VITALDEPOT_GlobalTID[2];
const rtTimingBridge *VITALDEPOT_TimingBrdg;
MdlrefDW_VITALDEPOT_T VITALDEPOT_MdlrefDW;

/* Block states (auto storage) */
DW_VITALDEPOT_f_T VITALDEPOT_DW;

/*
 * System initialize for atomic system:
 *    '<S22>/DV_TON'
 *    '<S28>/DV_TON'
 *    '<S34>/DV_TON'
 *    '<S40>/DV_TON'
 *    '<S46>/DV_TON'
 *    '<S52>/DV_TON'
 *    '<S58>/DV_TON'
 *    '<S68>/DV_TON1'
 *    '<S68>/DV_TON4'
 *    '<S79>/DV_TON1'
 *    ...
 */
void DV_TON_Init(DW_DV_TON_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S23>/TON' */
  /* InitializeConditions for Memory: '<S27>/memory' */
  localDW->memory_PreviousInput = -1.0E+99;

  /* End of SystemInitialize for SubSystem: '<S23>/TON' */
}

/*
 * Outputs for atomic system:
 *    '<S22>/DV_TON'
 *    '<S28>/DV_TON'
 *    '<S34>/DV_TON'
 *    '<S40>/DV_TON'
 *    '<S46>/DV_TON'
 *    '<S52>/DV_TON'
 *    '<S58>/DV_TON'
 *    '<S68>/DV_TON1'
 *    '<S68>/DV_TON4'
 *    '<S79>/DV_TON1'
 *    ...
 */
void DV_TON(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_IN,
            DW_DV_TON_T *localDW, real_T rtp_TIME)
{
  real_T rtb_CLOCK;
  boolean_T LogicalOperator1;
  real_T memory;
  memory = localDW->memory;
  LogicalOperator1 = localDW->LogicalOperator1;

  /* Clock: '<S23>/CLOCK' */
  rtb_CLOCK = (*(VITALDEPOT_TimingBrdg->taskTime[VITALDEPOT_GlobalTID[0]]));

  /* Outputs for Atomic SubSystem: '<S23>/TON' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Logic: '<S24>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S25>/FixPt Relational Operator'
     *  RelationalOperator: '<S26>/FixPt Relational Operator'
     *  UnitDelay: '<S25>/Delay Input1'
     *  UnitDelay: '<S26>/Delay Input1'
     *
     * Block description for '<S25>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S26>/Delay Input1':
     *
     *  Store in Global RAM
     */
    LogicalOperator1 = (((int32_T)rtu_IN > (int32_T)
                         localDW->DelayInput1_DSTATE_b) || ((int32_T)rtu_IN <
      (int32_T)localDW->DelayInput1_DSTATE));

    /* Memory: '<S27>/memory' */
    memory = localDW->memory_PreviousInput;
  }

  /* Switch: '<S27>/Switch' */
  if (LogicalOperator1) {
    localDW->Switch = rtb_CLOCK;
  } else {
    localDW->Switch = memory;
  }

  /* End of Switch: '<S27>/Switch' */

  /* Logic: '<S24>/Logical Operator2' incorporates:
   *  Constant: '<S23>/TIME'
   *  RelationalOperator: '<S24>/Relational Operator'
   *  Sum: '<S24>/Sum'
   */
  localDW->LogicalOperator2 = ((rtb_CLOCK >= localDW->Switch + rtp_TIME) &&
    rtu_IN);

  /* End of Outputs for SubSystem: '<S23>/TON' */
  localDW->LogicalOperator1 = LogicalOperator1;
  localDW->memory = memory;
}

/*
 * Update for atomic system:
 *    '<S22>/DV_TON'
 *    '<S28>/DV_TON'
 *    '<S34>/DV_TON'
 *    '<S40>/DV_TON'
 *    '<S46>/DV_TON'
 *    '<S52>/DV_TON'
 *    '<S58>/DV_TON'
 *    '<S68>/DV_TON1'
 *    '<S68>/DV_TON4'
 *    '<S79>/DV_TON1'
 *    ...
 */
void DV_TON_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_IN,
                   DW_DV_TON_T *localDW)
{
  /* Update for Atomic SubSystem: '<S23>/TON' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Update for UnitDelay: '<S25>/Delay Input1'
     *
     * Block description for '<S25>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE = rtu_IN;

    /* Update for UnitDelay: '<S26>/Delay Input1'
     *
     * Block description for '<S26>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE_b = rtu_IN;

    /* Update for Memory: '<S27>/memory' */
    localDW->memory_PreviousInput = localDW->Switch;
  }

  /* End of Update for SubSystem: '<S23>/TON' */
}

/*
 * System initialize for atomic system:
 *    '<S15>/APPROACH LOCK'
 *    '<S16>/APPROACH LOCK'
 *    '<S17>/APPROACH LOCK'
 *    '<S18>/APPROACH LOCK'
 *    '<S19>/APPROACH LOCK'
 *    '<S20>/APPROACH LOCK'
 *    '<S21>/APPROACH LOCK'
 */
void D_AS_Init(DW_D_AS_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S22>/DV_TON' */
  DV_TON_Init(&localDW->DV_TON_c);

  /* End of SystemInitialize for SubSystem: '<S22>/DV_TON' */
}

/*
 * Outputs for atomic system:
 *    '<S15>/APPROACH LOCK'
 *    '<S16>/APPROACH LOCK'
 *    '<S17>/APPROACH LOCK'
 *    '<S18>/APPROACH LOCK'
 *    '<S19>/APPROACH LOCK'
 *    '<S20>/APPROACH LOCK'
 *    '<S21>/APPROACH LOCK'
 */
void D_AS(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_DRGR,
          boolean_T rtu_TPF, boolean_T rtu_TPB, boolean_T rtu_RR, boolean_T
          rtu_VDR, DW_D_AS_T *localDW)
{
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Logic: '<S22>/AND4' incorporates:
     *  Logic: '<S22>/AND5'
     *  Logic: '<S22>/NOT1'
     *  Logic: '<S22>/OR7'
     *  Memory: '<S22>/Memory3'
     *  Memory: '<S22>/Memory4'
     */
    localDW->AND4 = ((!rtu_DRGR) && rtu_RR && (localDW->Memory3_PreviousInput ||
      (rtu_TPF && rtu_TPB) || localDW->Memory4_PreviousInput));

    /* Logic: '<S22>/AND1' incorporates:
     *  Logic: '<S22>/NOT2'
     *  Logic: '<S22>/NOT3'
     */
    localDW->AND1 = ((!rtu_DRGR) && rtu_RR && (!localDW->AND4) && rtu_VDR);
  }

  /* Outputs for Atomic SubSystem: '<S22>/DV_TON' */
  DV_TON(VITALDEPOT_M, localDW->AND1, &localDW->DV_TON_c, 90.0);

  /* End of Outputs for SubSystem: '<S22>/DV_TON' */
}

/*
 * Update for atomic system:
 *    '<S15>/APPROACH LOCK'
 *    '<S16>/APPROACH LOCK'
 *    '<S17>/APPROACH LOCK'
 *    '<S18>/APPROACH LOCK'
 *    '<S19>/APPROACH LOCK'
 *    '<S20>/APPROACH LOCK'
 *    '<S21>/APPROACH LOCK'
 */
void D_AS_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, DW_D_AS_T *localDW)
{
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Update for Memory: '<S22>/Memory3' */
    localDW->Memory3_PreviousInput = localDW->AND4;

    /* Update for Memory: '<S22>/Memory4' */
    localDW->Memory4_PreviousInput = localDW->DV_TON_c.LogicalOperator2;
  }

  /* Update for Atomic SubSystem: '<S22>/DV_TON' */
  DV_TON_Update(VITALDEPOT_M, localDW->AND1, &localDW->DV_TON_c);

  /* End of Update for SubSystem: '<S22>/DV_TON' */
}

/*
 * System initialize for atomic system:
 *    '<S64>/EMERGENCY POINT RELEASE'
 *    '<S65>/EMERGENCY POINT RELEASE'
 *    '<S66>/EMERGENCY POINT RELEASE'
 *    '<S67>/EMERGENCY POINT RELEASE'
 */
void D_SWRLS_Init(DW_D_SWRLS_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S68>/DV_TON1' */
  DV_TON_Init(&localDW->DV_TON1);

  /* End of SystemInitialize for SubSystem: '<S68>/DV_TON1' */

  /* SystemInitialize for Atomic SubSystem: '<S68>/DV_TON4' */
  DV_TON_Init(&localDW->DV_TON4);

  /* End of SystemInitialize for SubSystem: '<S68>/DV_TON4' */
}

/*
 * Outputs for atomic system:
 *    '<S64>/EMERGENCY POINT RELEASE'
 *    '<S65>/EMERGENCY POINT RELEASE'
 *    '<S66>/EMERGENCY POINT RELEASE'
 *    '<S67>/EMERGENCY POINT RELEASE'
 */
void D_SWRLS(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_SWRLSCTRL,
             boolean_T rtu_ESWS, boolean_T rtu_TP, boolean_T rtu_SWRLS,
             boolean_T rtu_VDR, DW_D_SWRLS_T *localDW)
{
  boolean_T Memory3_PreviousInput;

  /* Logic: '<S68>/AND9' */
  Memory3_PreviousInput = localDW->Memory3_PreviousInput;
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Logic: '<S68>/OR3' incorporates:
     *  Logic: '<S68>/AND10'
     *  Logic: '<S68>/AND9'
     *  Logic: '<S68>/NOT4'
     *  Logic: '<S68>/NOT8'
     *  Memory: '<S68>/Memory4'
     *  Memory: '<S68>/Memory5'
     */
    localDW->OR3 = ((Memory3_PreviousInput && (!rtu_TP)) ||
                    ((!localDW->Memory5_PreviousInput) &&
                     localDW->Memory4_PreviousInput));

    /* Logic: '<S68>/AND11' */
    localDW->AND11 = (localDW->OR3 && rtu_VDR);

    /* Logic: '<S68>/AND5' incorporates:
     *  Logic: '<S68>/AND4'
     *  Logic: '<S68>/AND7'
     *  Logic: '<S68>/NOT1'
     *  Logic: '<S68>/OR2'
     *  Memory: '<S68>/Memory2'
     */
    localDW->AND5 = (rtu_ESWS && ((rtu_SWRLSCTRL && rtu_SWRLS) ||
      ((!Memory3_PreviousInput) && localDW->Memory2_PreviousInput)));

    /* Logic: '<S68>/AND8' */
    localDW->AND8 = (localDW->AND5 && rtu_VDR);
  }

  /* Outputs for Atomic SubSystem: '<S68>/DV_TON1' */
  DV_TON(VITALDEPOT_M, localDW->AND11, &localDW->DV_TON1, 60.0);

  /* End of Outputs for SubSystem: '<S68>/DV_TON1' */

  /* Outputs for Atomic SubSystem: '<S68>/DV_TON4' */
  DV_TON(VITALDEPOT_M, localDW->AND8, &localDW->DV_TON4, 60.0);

  /* End of Outputs for SubSystem: '<S68>/DV_TON4' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* SignalConversion: '<S68>/TmpSignal ConversionAtDV_TON1Outport1' */
    localDW->TmpSignalConversionAtDV_TON1Out = localDW->DV_TON1.LogicalOperator2;

    /* SignalConversion: '<S68>/TmpSignal ConversionAtDV_TON4Outport1' */
    localDW->TmpSignalConversionAtDV_TON4Out = localDW->DV_TON4.LogicalOperator2;
  }
}

/*
 * Update for atomic system:
 *    '<S64>/EMERGENCY POINT RELEASE'
 *    '<S65>/EMERGENCY POINT RELEASE'
 *    '<S66>/EMERGENCY POINT RELEASE'
 *    '<S67>/EMERGENCY POINT RELEASE'
 */
void D_SWRLS_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, DW_D_SWRLS_T
                    *localDW)
{
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Update for Memory: '<S68>/Memory5' */
    localDW->Memory5_PreviousInput = localDW->TmpSignalConversionAtDV_TON1Out;

    /* Update for Memory: '<S68>/Memory4' */
    localDW->Memory4_PreviousInput = localDW->OR3;

    /* Update for Memory: '<S68>/Memory3' */
    localDW->Memory3_PreviousInput = localDW->TmpSignalConversionAtDV_TON4Out;

    /* Update for Memory: '<S68>/Memory2' */
    localDW->Memory2_PreviousInput = localDW->AND5;
  }

  /* Update for Atomic SubSystem: '<S68>/DV_TON1' */
  DV_TON_Update(VITALDEPOT_M, localDW->AND11, &localDW->DV_TON1);

  /* End of Update for SubSystem: '<S68>/DV_TON1' */

  /* Update for Atomic SubSystem: '<S68>/DV_TON4' */
  DV_TON_Update(VITALDEPOT_M, localDW->AND8, &localDW->DV_TON4);

  /* End of Update for SubSystem: '<S68>/DV_TON4' */
}

/*
 * System initialize for atomic system:
 *    '<S119>/DV_TOF'
 *    '<S130>/DV_TOF'
 *    '<S141>/DV_TOF'
 *    '<S152>/DV_TOF'
 *    '<S163>/DV_TOF'
 *    '<S174>/DV_TOF'
 *    '<S185>/DV_TOF'
 *    '<S249>/DV_TOF'
 *    '<S249>/DV_TOF1'
 *    '<S270>/DV_TOF'
 *    ...
 */
void DV_TOF_Init(DW_DV_TOF_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S120>/TOF' */
  /* InitializeConditions for Memory: '<S125>/memory' */
  localDW->memory_PreviousInput = -1.0E+99;

  /* End of SystemInitialize for SubSystem: '<S120>/TOF' */
}

/*
 * Outputs for atomic system:
 *    '<S119>/DV_TOF'
 *    '<S130>/DV_TOF'
 *    '<S141>/DV_TOF'
 *    '<S152>/DV_TOF'
 *    '<S163>/DV_TOF'
 *    '<S174>/DV_TOF'
 *    '<S185>/DV_TOF'
 *    '<S249>/DV_TOF'
 *    '<S249>/DV_TOF1'
 *    '<S270>/DV_TOF'
 *    ...
 */
void DV_TOF(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_IN,
            DW_DV_TOF_T *localDW, real_T rtp_TIME)
{
  real_T rtb_CLOCK;
  boolean_T LogicalOperator1;
  real_T memory;
  boolean_T LogicalOperator3;
  LogicalOperator3 = localDW->LogicalOperator3;
  memory = localDW->memory;
  LogicalOperator1 = localDW->LogicalOperator1;

  /* Clock: '<S120>/CLOCK' */
  rtb_CLOCK = (*(VITALDEPOT_TimingBrdg->taskTime[VITALDEPOT_GlobalTID[0]]));

  /* Outputs for Atomic SubSystem: '<S120>/TOF' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Logic: '<S122>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S123>/FixPt Relational Operator'
     *  RelationalOperator: '<S124>/FixPt Relational Operator'
     *  UnitDelay: '<S123>/Delay Input1'
     *  UnitDelay: '<S124>/Delay Input1'
     *
     * Block description for '<S123>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S124>/Delay Input1':
     *
     *  Store in Global RAM
     */
    LogicalOperator1 = (((int32_T)rtu_IN > (int32_T)
                         localDW->DelayInput1_DSTATE_p) || ((int32_T)rtu_IN <
      (int32_T)localDW->DelayInput1_DSTATE));

    /* Memory: '<S125>/memory' */
    memory = localDW->memory_PreviousInput;

    /* Logic: '<S122>/Logical Operator3' */
    LogicalOperator3 = !rtu_IN;
  }

  /* Switch: '<S125>/Switch' */
  if (LogicalOperator1) {
    localDW->Switch = rtb_CLOCK;
  } else {
    localDW->Switch = memory;
  }

  /* End of Switch: '<S125>/Switch' */

  /* Logic: '<S122>/Logical Operator4' incorporates:
   *  Constant: '<S120>/TIME'
   *  Logic: '<S122>/Logical Operator2'
   *  RelationalOperator: '<S122>/Relational Operator'
   *  Sum: '<S122>/Sum'
   */
  localDW->LogicalOperator4 = !((rtb_CLOCK >= localDW->Switch + rtp_TIME) &&
    LogicalOperator3);

  /* End of Outputs for SubSystem: '<S120>/TOF' */
  localDW->LogicalOperator1 = LogicalOperator1;
  localDW->memory = memory;
  localDW->LogicalOperator3 = LogicalOperator3;
}

/*
 * Update for atomic system:
 *    '<S119>/DV_TOF'
 *    '<S130>/DV_TOF'
 *    '<S141>/DV_TOF'
 *    '<S152>/DV_TOF'
 *    '<S163>/DV_TOF'
 *    '<S174>/DV_TOF'
 *    '<S185>/DV_TOF'
 *    '<S249>/DV_TOF'
 *    '<S249>/DV_TOF1'
 *    '<S270>/DV_TOF'
 *    ...
 */
void DV_TOF_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_IN,
                   DW_DV_TOF_T *localDW)
{
  /* Update for Atomic SubSystem: '<S120>/TOF' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Update for UnitDelay: '<S123>/Delay Input1'
     *
     * Block description for '<S123>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE = rtu_IN;

    /* Update for UnitDelay: '<S124>/Delay Input1'
     *
     * Block description for '<S124>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE_p = rtu_IN;

    /* Update for Memory: '<S125>/memory' */
    localDW->memory_PreviousInput = localDW->Switch;
  }

  /* End of Update for SubSystem: '<S120>/TOF' */
}

/*
 * System initialize for atomic system:
 *    '<S119>/DV_TON'
 *    '<S130>/DV_TON'
 *    '<S141>/DV_TON'
 *    '<S152>/DV_TON'
 *    '<S163>/DV_TON'
 *    '<S174>/DV_TON'
 *    '<S185>/DV_TON'
 */
void VITALDEPOT_DV_TON_Init(DW_DV_TON_b_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S121>/TON' */
  /* InitializeConditions for Memory: '<S129>/memory' */
  localDW->memory_PreviousInput = -1.0E+99;

  /* End of SystemInitialize for SubSystem: '<S121>/TON' */
}

/*
 * Outputs for atomic system:
 *    '<S119>/DV_TON'
 *    '<S130>/DV_TON'
 *    '<S141>/DV_TON'
 *    '<S152>/DV_TON'
 *    '<S163>/DV_TON'
 *    '<S174>/DV_TON'
 *    '<S185>/DV_TON'
 */
void VITALDEPOT_DV_TON(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T
  rtu_IN, DW_DV_TON_b_T *localDW, real_T rtp_TIME)
{
  real_T rtb_CLOCK;
  real_T memory;
  boolean_T Uk1;
  boolean_T Uk1_n;
  Uk1_n = localDW->Uk1_n;
  Uk1 = localDW->Uk1;
  memory = localDW->memory;

  /* Clock: '<S121>/CLOCK' */
  rtb_CLOCK = (*(VITALDEPOT_TimingBrdg->taskTime[VITALDEPOT_GlobalTID[0]]));

  /* Outputs for Atomic SubSystem: '<S121>/TON' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* UnitDelay: '<S127>/Delay Input1'
     *
     * Block description for '<S127>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Uk1 = localDW->DelayInput1_DSTATE;

    /* UnitDelay: '<S128>/Delay Input1'
     *
     * Block description for '<S128>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Uk1_n = localDW->DelayInput1_DSTATE_f;

    /* Memory: '<S129>/memory' */
    memory = localDW->memory_PreviousInput;
  }

  /* Switch: '<S129>/Switch' incorporates:
   *  Logic: '<S126>/Logical Operator1'
   *  RelationalOperator: '<S127>/FixPt Relational Operator'
   *  RelationalOperator: '<S128>/FixPt Relational Operator'
   */
  if (((int32_T)rtu_IN > (int32_T)Uk1_n) || ((int32_T)rtu_IN < (int32_T)Uk1)) {
    localDW->Switch = rtb_CLOCK;
  } else {
    localDW->Switch = memory;
  }

  /* End of Switch: '<S129>/Switch' */

  /* Logic: '<S126>/Logical Operator2' incorporates:
   *  Constant: '<S121>/TIME'
   *  RelationalOperator: '<S126>/Relational Operator'
   *  Sum: '<S126>/Sum'
   */
  localDW->LogicalOperator2 = ((rtb_CLOCK >= localDW->Switch + rtp_TIME) &&
    rtu_IN);

  /* End of Outputs for SubSystem: '<S121>/TON' */
  localDW->memory = memory;
  localDW->Uk1 = Uk1;
  localDW->Uk1_n = Uk1_n;
}

/*
 * Update for atomic system:
 *    '<S119>/DV_TON'
 *    '<S130>/DV_TON'
 *    '<S141>/DV_TON'
 *    '<S152>/DV_TON'
 *    '<S163>/DV_TON'
 *    '<S174>/DV_TON'
 *    '<S185>/DV_TON'
 */
void VITALDEPOT_DV_TON_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M,
  boolean_T rtu_IN, DW_DV_TON_b_T *localDW)
{
  /* Update for Atomic SubSystem: '<S121>/TON' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Update for UnitDelay: '<S127>/Delay Input1'
     *
     * Block description for '<S127>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE = rtu_IN;

    /* Update for UnitDelay: '<S128>/Delay Input1'
     *
     * Block description for '<S128>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE_f = rtu_IN;

    /* Update for Memory: '<S129>/memory' */
    localDW->memory_PreviousInput = localDW->Switch;
  }

  /* End of Update for SubSystem: '<S121>/TON' */
}

/*
 * System initialize for atomic system:
 *    '<S112>/EMERGENCY ROUTE '
 *    '<S113>/EMERGENCY ROUTE '
 *    '<S114>/EMERGENCY ROUTE '
 *    '<S115>/EMERGENCY ROUTE '
 *    '<S116>/EMERGENCY ROUTE '
 *    '<S117>/EMERGENCY ROUTE '
 *    '<S118>/EMERGENCY ROUTE '
 */
void D_RRLS_Init(DW_D_RRLS_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S119>/DV_TOF' */
  DV_TOF_Init(&localDW->DV_TOF_p);

  /* End of SystemInitialize for SubSystem: '<S119>/DV_TOF' */

  /* SystemInitialize for Atomic SubSystem: '<S119>/DV_TON' */
  VITALDEPOT_DV_TON_Init(&localDW->DV_TON_h);

  /* End of SystemInitialize for SubSystem: '<S119>/DV_TON' */
}

/*
 * Outputs for atomic system:
 *    '<S112>/EMERGENCY ROUTE '
 *    '<S113>/EMERGENCY ROUTE '
 *    '<S114>/EMERGENCY ROUTE '
 *    '<S115>/EMERGENCY ROUTE '
 *    '<S116>/EMERGENCY ROUTE '
 *    '<S117>/EMERGENCY ROUTE '
 *    '<S118>/EMERGENCY ROUTE '
 */
void D_RRLS(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_AS,
            boolean_T rtu_REQ, boolean_T rtu_ESWS, boolean_T rtu_RRLSCTRL,
            boolean_T rtu_RRLS, boolean_T rtu_VDR, DW_D_RRLS_T *localDW)
{
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Memory: '<S119>/Memory1' */
    localDW->Memory1 = localDW->Memory1_PreviousInput;

    /* Logic: '<S119>/AND1' incorporates:
     *  Logic: '<S119>/AND2'
     *  Logic: '<S119>/AND3'
     *  Logic: '<S119>/NOT1'
     *  Logic: '<S119>/NOT2'
     *  Logic: '<S119>/NOT7'
     *  Logic: '<S119>/OR1'
     *  Memory: '<S119>/Memory'
     */
    localDW->AND1 = (rtu_AS && (!rtu_REQ) && (!rtu_ESWS) && ((rtu_RRLSCTRL &&
      rtu_RRLS) || ((!localDW->Memory1) && localDW->Memory_PreviousInput)));

    /* Logic: '<S119>/AND6' */
    localDW->AND6 = (localDW->AND1 && rtu_VDR);
  }

  /* Outputs for Atomic SubSystem: '<S119>/DV_TOF' */
  DV_TOF(VITALDEPOT_M, localDW->AND6, &localDW->DV_TOF_p, 2.0);

  /* End of Outputs for SubSystem: '<S119>/DV_TOF' */

  /* Outputs for Atomic SubSystem: '<S119>/DV_TON' */
  VITALDEPOT_DV_TON(VITALDEPOT_M, localDW->DV_TOF_p.LogicalOperator4,
                    &localDW->DV_TON_h, 60.0);

  /* End of Outputs for SubSystem: '<S119>/DV_TON' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* SignalConversion: '<S119>/TmpSignal ConversionAtDV_TONOutport1' */
    localDW->TmpSignalConversionAtDV_TONOutp =
      localDW->DV_TON_h.LogicalOperator2;
  }
}

/*
 * Update for atomic system:
 *    '<S112>/EMERGENCY ROUTE '
 *    '<S113>/EMERGENCY ROUTE '
 *    '<S114>/EMERGENCY ROUTE '
 *    '<S115>/EMERGENCY ROUTE '
 *    '<S116>/EMERGENCY ROUTE '
 *    '<S117>/EMERGENCY ROUTE '
 *    '<S118>/EMERGENCY ROUTE '
 */
void D_RRLS_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, DW_D_RRLS_T
                   *localDW)
{
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Update for Memory: '<S119>/Memory1' */
    localDW->Memory1_PreviousInput = localDW->TmpSignalConversionAtDV_TONOutp;

    /* Update for Memory: '<S119>/Memory' */
    localDW->Memory_PreviousInput = localDW->AND1;
  }

  /* Update for Atomic SubSystem: '<S119>/DV_TOF' */
  DV_TOF_Update(VITALDEPOT_M, localDW->AND6, &localDW->DV_TOF_p);

  /* End of Update for SubSystem: '<S119>/DV_TOF' */

  /* Update for Atomic SubSystem: '<S119>/DV_TON' */
  VITALDEPOT_DV_TON_Update(VITALDEPOT_M, localDW->DV_TOF_p.LogicalOperator4,
    &localDW->DV_TON_h);

  /* End of Update for SubSystem: '<S119>/DV_TON' */
}

/*
 * Output and update for atomic system:
 *    '<S201>/AS_SR'
 *    '<S202>/AS_SR'
 *    '<S203>/AS_SR'
 *    '<S204>/AS_SR'
 *    '<S205>/AS_SR'
 *    '<S206>/AS_SR'
 *    '<S207>/AS_SR'
 *    '<S208>/AS_SR'
 *    '<S209>/AS_SR'
 *    '<S210>/AS_SR'
 *    ...
 */
void D_AS_SR(boolean_T rtu_L, boolean_T rtu_RS, DW_D_AS_SR_T *localDW)
{
  /* Logic: '<S213>/AND1' incorporates:
   *  Logic: '<S213>/OR1'
   *  Memory: '<S213>/MEM1'
   */
  localDW->AND1 = ((localDW->AND1 || rtu_L) && rtu_RS);
}

/*
 * Output and update for atomic system:
 *    '<S229>/D_RRLS1'
 *    '<S229>/D_RRLS7'
 *    '<S230>/D_RRLS1'
 *    '<S231>/D_RRLS1'
 *    '<S231>/D_RRLS2'
 */
void D_RRLS3(boolean_T rtu_RRLSTE, boolean_T rtu_NWZRWZ1, boolean_T rtu_NWZRWZ2,
             DW_D_RRLS3_T *localDW)
{
  /* Logic: '<S232>/AND1' */
  localDW->AND1 = (rtu_RRLSTE && rtu_NWZRWZ1 && rtu_NWZRWZ2);
}

/*
 * Output and update for atomic system:
 *    '<S229>/D_RRLS5'
 *    '<S230>/D_RRLS5'
 *    '<S231>/D_RRLS5'
 */
void D_RRLS1(boolean_T rtu_RRLSTE, DW_D_RRLS1_T *localDW)
{
  /* Inport: '<S233>/RRLS-TE' */
  localDW->RRLSTE = rtu_RRLSTE;
}

/*
 * Output and update for atomic system:
 *    '<S229>/D_RRLS6'
 *    '<S230>/D_RRLS6'
 *    '<S231>/D_RRLS6'
 */
void D_RRLS2(boolean_T rtu_RRLSTE, boolean_T rtu_NWZRWZ1, DW_D_RRLS2_T *localDW)
{
  /* Logic: '<S234>/AND1' */
  localDW->AND1 = (rtu_RRLSTE && rtu_NWZRWZ1);
}

/*
 * Output and update for atomic system:
 *    '<S230>/D_RRLS2'
 *    '<S230>/D_RRLS8'
 */
void D_RRLS_4(boolean_T rtu_RRLSTE, boolean_T rtu_NWZRWZ1, boolean_T rtu_NWZRWZ2,
              boolean_T rtu_NWZRWZ3, DW_D_RRLS_4_T *localDW)
{
  /* Logic: '<S237>/AND1' */
  localDW->AND1 = (rtu_RRLSTE && rtu_NWZRWZ1 && rtu_NWZRWZ2 && rtu_NWZRWZ3);
}

/*
 * System initialize for atomic system:
 *    '<S245>/POINT CONTROL'
 *    '<S246>/POINT CONTROL'
 *    '<S247>/POINT CONTROL'
 *    '<S248>/POINT CONTROL'
 */
void D_SW_CTRL_Init(DW_D_SW_CTRL_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S249>/DV_TOF1' */
  DV_TOF_Init(&localDW->DV_TOF1);

  /* End of SystemInitialize for SubSystem: '<S249>/DV_TOF1' */

  /* SystemInitialize for Atomic SubSystem: '<S249>/DV_TOF' */
  DV_TOF_Init(&localDW->DV_TOF_e);

  /* End of SystemInitialize for SubSystem: '<S249>/DV_TOF' */

  /* SystemInitialize for Atomic SubSystem: '<S249>/DV_TON' */
  DV_TON_Init(&localDW->DV_TON_a);

  /* End of SystemInitialize for SubSystem: '<S249>/DV_TON' */

  /* SystemInitialize for Atomic SubSystem: '<S249>/DV_TON1' */
  DV_TON_Init(&localDW->DV_TON1);

  /* End of SystemInitialize for SubSystem: '<S249>/DV_TON1' */
}

/*
 * Outputs for atomic system:
 *    '<S245>/POINT CONTROL'
 *    '<S246>/POINT CONTROL'
 *    '<S247>/POINT CONTROL'
 *    '<S248>/POINT CONTROL'
 */
void D_SW_CTRL(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_NWPDI,
               boolean_T rtu_RWPDI, boolean_T rtu_OOC, boolean_T rtu_L,
               boolean_T rtu_NREQ, boolean_T rtu_RREQ, boolean_T rtu_TP,
               boolean_T rtu_TPZ, boolean_T rtu_VDR, DW_D_SW_CTRL_T *localDW)
{
  boolean_T rtb_AND10_l;
  boolean_T rtb_AND11;
  boolean_T NOT9;
  boolean_T NOT10;
  boolean_T NOT11;
  boolean_T OR6;
  boolean_T AND16;
  boolean_T AND17;
  AND17 = localDW->AND17;
  AND16 = localDW->AND16;
  OR6 = localDW->OR6;
  NOT11 = localDW->NOT11;
  NOT10 = localDW->NOT10;
  NOT9 = localDW->NOT9;
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Memory: '<S249>/Memory2' */
    localDW->Memory2 = localDW->Memory2_PreviousInput;

    /* Logic: '<S249>/AND1' incorporates:
     *  Logic: '<S249>/NOT1'
     *  Logic: '<S249>/OR1'
     */
    localDW->AND1 = (rtu_NWPDI && (rtu_OOC || (!localDW->Memory2)));

    /* Memory: '<S249>/Memory1' */
    localDW->Memory1 = localDW->Memory1_PreviousInput;

    /* Logic: '<S249>/AND2' incorporates:
     *  Logic: '<S2NONVITALALL_initialize49>/NOT2'
     *  Logic: '<S249>/OR2'
     */
    localDW->AND2 = (rtu_RWPDI && (rtu_OOC || (!localDW->Memory1)));
  }

  /* Outputs for Atomic SubSystem: '<S249>/DV_TOF1' */
  DV_TOF(VITALDEPOT_M, localDW->AND2, &localDW->DV_TOF1, 0.2);

  /* End of Outputs for SubSystem: '<S249>/DV_TOF1' */

  /* Logic: '<S249>/AND10' */
  rtb_AND10_l = (localDW->DV_TOF1.LogicalOperator4 && localDW->Memory1);
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Logic: '<S249>/NOT9' */
    NOT9 = !localDW->Memory1;
  }

  /* Logic: '<S249>/AND11' incorporates:
   *  Logic: '<S249>/NOT8'
   */
  rtb_AND11 = ((!localDW->DV_TOF1.LogicalOperator4) && NOT9);

  /* Outputs for Atomic SubSystem: '<S249>/DV_TOF' */
  DV_TOF(VITALDEPOT_M, localDW->AND1, &localDW->DV_TOF_e, 0.2);

  /* End of Outputs for SubSystem: '<S249>/DV_TOF' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Logic: '<S249>/NOT10' */
    NOT10 = !localDW->Memory2;

    /* Logic: '<S249>/NOT11' */
    NOT11 = !rtu_OOC;

    /* Logic: '<S249>/OR6' */
    OR6 = (rtu_TP || rtu_TPZ);

    /* Memory: '<S249>/Memory3' */
    localDW->Memory3 = localDW->Memory3_PreviousInput;
  }

  /* Logic: '<S249>/AND15' incorporates:
   *  Logic: '<S249>/AND12'
   *  Logic: '<S249>/AND13'
   *  Logic: '<S249>/AND14'
   *  Logic: '<S249>/AND9'
   *  Logic: '<S249>/NOT7'
   *  Logic: '<S249>/OR7'
   *  Logic: '<S249>/OR8'
   *  Logic: '<S249>/OR9'
   */
  localDW->AND15 = (((((localDW->DV_TOF_e.LogicalOperator4 && localDW->Memory2) ||
                       rtb_AND10_l) && NOT11 && OR6) || ((rtb_AND11 ||
    ((!localDW->DV_TOF_e.LogicalOperator4) && NOT10)) && localDW->Memory3)) &&
                    rtu_VDR);
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Logic: '<S249>/AND16' incorporates:
     *  Logic: '<S249>/NOT12'
     */
    AND16 = ((!localDW->AND1) && localDW->Memory1);

    /* Logic: '<S249>/AND17' incorporates:
     *  Logic: '<S249>/NOT13'
     */
    AND17 = ((!localDW->AND2) && localDW->Memory2);

    /* Logic: '<S249>/AND18' */
    rtb_AND10_l = (localDW->Memory3 && rtu_VDR);

    /* Logic: '<S249>/AND20' */
    localDW->AND20 = (AND16 && rtb_AND10_l);

    /* Logic: '<S249>/AND21' */
    localDW->AND21 = (AND17 && rtb_AND10_l);
  }

  /* Outputs for Atomic SubSystem: '<S249>/DV_TON' */
  DV_TON(VITALDEPOT_M, localDW->AND20, &localDW->DV_TON_a, 10.0);

  /* End of Outputs for SubSystem: '<S249>/DV_TON' */

  /* Logic: '<S249>/AND22' incorporates:
   *  Logic: '<S249>/NOT14'
   */
  localDW->AND22 = ((!localDW->DV_TON_a.LogicalOperator2) && localDW->Memory3 &&
                    AND16);

  /* Outputs for Atomic SubSystem: '<S249>/DV_TON1' */
  DV_TON(VITALDEPOT_M, localDW->AND21, &localDW->DV_TON1, 10.0);

  /* End of Outputs for SubSystem: '<S249>/DV_TON1' */

  /* Logic: '<S249>/AND23' incorporates:
   *  Logic: '<S249>/NOT15'
   */
  localDW->AND23 = ((!localDW->DV_TON1.LogicalOperator2) && localDW->Memory3 &&
                    AND17);

  /* Logic: '<S249>/AND24' incorporates:
   *  Logic: '<S249>/OR10'
   */
  localDW->AND24 = ((localDW->AND22 || localDW->AND23) && rtu_L);
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Logic: '<S249>/OR3' */
    rtb_AND10_l = (localDW->AND1 || localDW->AND2 || localDW->Memory3 || rtu_OOC);

    /* Logic: '<S249>/AND3' incorporates:
     *  Logic: '<S249>/NOT4'
     */
    rtb_AND11 = (rtu_L && rtu_NREQ && (!rtu_RREQ) && rtb_AND10_l);

    /* Logic: '<S249>/AND4' incorporates:
     *  Logic: '<S249>/NOT3'
     */
    rtb_AND10_l = (rtu_L && (!rtu_NREQ) && rtu_RREQ && rtb_AND10_l);

    /* Logic: '<S249>/AND5' incorporates:
     *  Logic: '<S249>/NOT6'
     *  Logic: '<S249>/OR4'
     */
    localDW->AND5 = ((localDW->Memory1 || rtb_AND11) && (!rtb_AND10_l));

    /* Logic: '<S249>/AND6' incorporates:
     *  Logic: '<S249>/NOT5'
     *  Logic: '<S249>/OR5'
     */
    localDW->AND6 = ((!rtb_AND11) && (rtb_AND10_l || localDW->Memory2));

    /* Logic: '<S249>/AND7' */
    localDW->AND7 = (localDW->AND1 && localDW->Memory1);

    /* Logic: '<S249>/AND8' */
    localDW->AND8 = (localDW->AND2 && localDW->Memory2);
  }

  localDW->NOT9 = NOT9;
  localDW->NOT10 = NOT10;
  localDW->NOT11 = NOT11;
  localDW->OR6 = OR6;
  localDW->AND16 = AND16;
  localDW->AND17 = AND17;
}

/*
 * Update for atomic system:
 *    '<S245>/POINT CONTROL'
 *    '<S246>/POINT CONTROL'
 *    '<S247>/POINT CONTROL'
 *    '<S248>/POINT CONTROL'
 */
void D_SW_CTRL_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, DW_D_SW_CTRL_T
                      *localDW)
{
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Update for Memory: '<S249>/Memory2' */
    localDW->Memory2_PreviousInput = localDW->AND6;

    /* Update for Memory: '<S249>/Memory1' */
    localDW->Memory1_PreviousInput = localDW->AND5;
  }

  /* Update for Atomic SubSystem: '<S249>/DV_TOF1' */
  DV_TOF_Update(VITALDEPOT_M, localDW->AND2, &localDW->DV_TOF1);

  /* End of Update for SubSystem: '<S249>/DV_TOF1' */

  /* Update for Atomic SubSystem: '<S249>/DV_TOF' */
  DV_TOF_Update(VITALDEPOT_M, localDW->AND1, &localDW->DV_TOF_e);

  /* End of Update for SubSystem: '<S249>/DV_TOF' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Update for Memory: '<S249>/Memory3' */
    localDW->Memory3_PreviousInput = localDW->AND15;
  }

  /* Update for Atomic SubSystem: '<S249>/DV_TON' */
  DV_TON_Update(VITALDEPOT_M, localDW->AND20, &localDW->DV_TON_a);

  /* End of Update for SubSystem: '<S249>/DV_TON' */

  /* Update for Atomic SubSystem: '<S249>/DV_TON1' */
  DV_TON_Update(VITALDEPOT_M, localDW->AND21, &localDW->DV_TON1);

  /* End of Update for SubSystem: '<S249>/DV_TON1' */
}

/*
 * Output and update for atomic system:
 *    '<S333>/POINT LOCK'
 *    '<S334>/POINT LOCK'
 *    '<S335>/POINT LOCK'
 *    '<S336>/POINT LOCK'
 */
void D_SW_L(boolean_T rtu_ESWS, boolean_T rtu_TP, boolean_T rtu_TPZ, DW_D_SW_L_T
            *localDW)
{
  /* Logic: '<S337>/OR2' incorporates:
   *  Logic: '<S337>/OR1'
   */
  localDW->OR2 = (rtu_ESWS && (rtu_TP || rtu_TPZ));
}

/*
 * Output and update for atomic system:
 *    '<S341>/ROUTE CHECK'
 *    '<S342>/ROUTE CHECK'
 *    '<S343>/ROUTE CHECK'
 *    '<S344>/ROUTE CHECK'
 *    '<S345>/ROUTE CHECK'
 *    '<S346>/ROUTE CHECK'
 *    '<S347>/ROUTE CHECK'
 *    '<S348>/ROUTE CHECK'
 *    '<S349>/ROUTE CHECK'
 *    '<S350>/ROUTE CHECK'
 *    ...
 */
void D_H_D_S(boolean_T rtu_REQ, boolean_T rtu_L, DW_D_H_D_S_T *localDW)
{
  /* Logic: '<S353>/AND2' */
  localDW->AND2 = (rtu_REQ && rtu_L);
}

/*
 * Output and update for atomic system:
 *    '<S365>/ROUTE CONFLICT LOCK'
 *    '<S366>/ROUTE CONFLICT LOCK'
 *    '<S367>/ROUTE CONFLICT LOCK'
 *    '<S368>/ROUTE CONFLICT LOCK'
 *    '<S369>/ROUTE CONFLICT LOCK'
 *    '<S370>/ROUTE CONFLICT LOCK'
 *    '<S371>/ROUTE CONFLICT LOCK'
 *    '<S372>/ROUTE CONFLICT LOCK'
 *    '<S373>/ROUTE CONFLICT LOCK'
 *    '<S374>/ROUTE CONFLICT LOCK'
 *    ...
 */
void D_R_L(boolean_T rtu_ESWS, boolean_T rtu_NWCRWC, boolean_T rtu_GRDRDO,
           boolean_T rtu_TP, DW_D_R_L_T *localDW)
{
  /* Logic: '<S377>/AND1' incorporates:
   *  Logic: '<S377>/NOT1'
   */
  localDW->AND1 = (rtu_ESWS && rtu_NWCRWC && (!rtu_GRDRDO) && rtu_TP);
}

/*
 * Output and update for atomic system:
 *    '<S389>/ROUTE LOCK'
 *    '<S390>/ROUTE LOCK'
 *    '<S391>/ROUTE LOCK'
 *    '<S392>/ROUTE LOCK'
 *    '<S393>/ROUTE LOCK'
 *    '<S394>/ROUTE LOCK'
 */
void D_ES_WS(boolean_T rtu_RLESWSB, boolean_T rtu_TP, boolean_T rtu_RLS,
             DW_D_ES_WS_T *localDW)
{
  /* Logic: '<S395>/AND1' incorporates:
   *  Logic: '<S395>/OR2'
   *  Memory: '<S395>/Memory'
   */
  localDW->AND1 = (rtu_RLESWSB && (rtu_TP || rtu_RLS || localDW->AND1));
}

/*
 * Output and update for atomic system:
 *    '<S401>/SIGNAL LIGHTING'
 *    '<S402>/SIGNAL LIGHTING'
 *    '<S403>/SIGNAL LIGHTING'
 *    '<S404>/SIGNAL LIGHTING'
 *    '<S405>/SIGNAL LIGHTING'
 *    '<S406>/SIGNAL LIGHTING'
 *    '<S407>/SIGNAL LIGHTING'
 */
void D_SIG_CTRL(boolean_T rtu_S, boolean_T rtu_TP, DW_D_SIG_CTRL_T *localDW)
{
  /* Logic: '<S408>/AND19' incorporates:
   *  Logic: '<S408>/NOT16'
   */
  localDW->AND19 = (rtu_S && (!rtu_TP));
}

/*
 * System initialize for atomic system:
 *    '<S14>/D_TP1'
 *    '<S14>/D_TP10'
 *    '<S14>/D_TP2'
 *    '<S14>/D_TP3'
 *    '<S14>/D_TP4'
 *    '<S14>/D_TP5'
 *    '<S14>/D_TP6'
 *    '<S14>/D_TP7'
 *    '<S14>/D_TP8'
 *    '<S14>/D_TP9'
 */
void D_TP_Init(DW_D_TP_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S415>/DV_TON' */
  DV_TON_Init(&localDW->DV_TON_d);

  /* End of SystemInitialize for SubSystem: '<S415>/DV_TON' */
}

/*
 * Outputs for atomic system:
 *    '<S14>/D_TP1'
 *    '<S14>/D_TP10'
 *    '<S14>/D_TP2'
 *    '<S14>/D_TP3'
 *    '<S14>/D_TP4'
 *    '<S14>/D_TP5'
 *    '<S14>/D_TP6'
 *    '<S14>/D_TP7'
 *    '<S14>/D_TP8'
 *    '<S14>/D_TP9'
 */
void D_TP(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_TPR,
          DW_D_TP_T *localDW)
{
  /* Outputs for Atomic SubSystem: '<S415>/DV_TON' */
  DV_TON(VITALDEPOT_M, rtu_TPR, &localDW->DV_TON_d, 0.5);

  /* End of Outputs for SubSystem: '<S415>/DV_TON' */
}

/*
 * Update for atomic system:
 *    '<S14>/D_TP1'
 *    '<S14>/D_TP10'
 *    '<S14>/D_TP2'
 *    '<S14>/D_TP3'
 *    '<S14>/D_TP4'
 *    '<S14>/D_TP5'
 *    '<S14>/D_TP6'
 *    '<S14>/D_TP7'
 *    '<S14>/D_TP8'
 *    '<S14>/D_TP9'
 */
void D_TP_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_TPR,
                 DW_D_TP_T *localDW)
{
  /* Update for Atomic SubSystem: '<S415>/DV_TON' */
  DV_TON_Update(VITALDEPOT_M, rtu_TPR, &localDW->DV_TON_d);

  /* End of Update for SubSystem: '<S415>/DV_TON' */
}

/* System initialize for atomic system: '<S3>/COMMUNICATION CHECK' */
void D_COMM_Init(DW_D_COMM_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S483>/DV_TON' */
  DV_TON_Init(&localDW->DV_TON_e);

  /* End of SystemInitialize for SubSystem: '<S483>/DV_TON' */

  /* SystemInitialize for Atomic SubSystem: '<S483>/DV_TON1' */
  DV_TON_Init(&localDW->DV_TON1);

  /* End of SystemInitialize for SubSystem: '<S483>/DV_TON1' */
}

/* Outputs for atomic system: '<S3>/COMMUNICATION CHECK' */
void D_COMM(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_WATCHDOG,
            boolean_T rtu_COMM1, boolean_T rtu_COMM2, DW_D_COMM_T *localDW)
{
  boolean_T LogicalOperator4;
  LogicalOperator4 = localDW->LogicalOperator4;

  /* Outputs for Atomic SubSystem: '<S483>/DV_TON' */
  DV_TON(VITALDEPOT_M, rtu_WATCHDOG, &localDW->DV_TON_e, 2.0);

  /* End of Outputs for SubSystem: '<S483>/DV_TON' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Logic: '<S483>/Logical Operator' */
    localDW->LogicalOperator = !rtu_WATCHDOG;
  }

  /* Outputs for Atomic SubSystem: '<S483>/DV_TON1' */
  DV_TON(VITALDEPOT_M, localDW->LogicalOperator, &localDW->DV_TON1, 2.0);

  /* End of Outputs for SubSystem: '<S483>/DV_TON1' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Logic: '<S483>/Logical Operator4' */
    LogicalOperator4 = (rtu_COMM1 || rtu_COMM2);
  }

  /* Logic: '<S483>/Logical Operator3' incorporates:
   *  Logic: '<S483>/Logical Operator1'
   *  Logic: '<S483>/Logical Operator2'
   */
  localDW->LogicalOperator3 = ((!(localDW->DV_TON_e.LogicalOperator2 ||
    localDW->DV_TON1.LogicalOperator2)) && LogicalOperator4);
  localDW->LogicalOperator4 = LogicalOperator4;
}

/* Update for atomic system: '<S3>/COMMUNICATION CHECK' */
void D_COMM_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T
                   rtu_WATCHDOG, DW_D_COMM_T *localDW)
{
  /* Update for Atomic SubSystem: '<S483>/DV_TON' */
  DV_TON_Update(VITALDEPOT_M, rtu_WATCHDOG, &localDW->DV_TON_e);

  /* End of Update for SubSystem: '<S483>/DV_TON' */

  /* Update for Atomic SubSystem: '<S483>/DV_TON1' */
  DV_TON_Update(VITALDEPOT_M, localDW->LogicalOperator, &localDW->DV_TON1);

  /* End of Update for SubSystem: '<S483>/DV_TON1' */
}

/* System initialize for referenced model: 'VITALDEPOT' */
void VITALDEPOT_Init(void)
{
  /* SystemInitialize for Atomic SubSystem: '<S15>/APPROACH LOCK' */
  D_AS_Init(&VITALDEPOT_DW.APPROACHLOCK);

  /* End of SystemInitialize for SubSystem: '<S15>/APPROACH LOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S16>/APPROACH LOCK' */
  D_AS_Init(&VITALDEPOT_DW.APPROACHLOCK_f);

  /* End of SystemInitialize for SubSystem: '<S16>/APPROACH LOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S17>/APPROACH LOCK' */
  D_AS_Init(&VITALDEPOT_DW.APPROACHLOCK_h);

  /* End of SystemInitialize for SubSystem: '<S17>/APPROACH LOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S18>/APPROACH LOCK' */
  D_AS_Init(&VITALDEPOT_DW.APPROACHLOCK_e);

  /* End of SystemInitialize for SubSystem: '<S18>/APPROACH LOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S19>/APPROACH LOCK' */
  D_AS_Init(&VITALDEPOT_DW.APPROACHLOCK_o);

  /* End of SystemInitialize for SubSystem: '<S19>/APPROACH LOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S20>/APPROACH LOCK' */
  D_AS_Init(&VITALDEPOT_DW.APPROACHLOCK_ou);

  /* End of SystemInitialize for SubSystem: '<S20>/APPROACH LOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S21>/APPROACH LOCK' */
  D_AS_Init(&VITALDEPOT_DW.APPROACHLOCK_a);

  /* End of SystemInitialize for SubSystem: '<S21>/APPROACH LOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S64>/EMERGENCY POINT RELEASE' */
  D_SWRLS_Init(&VITALDEPOT_DW.EMERGENCYPOINTRELEASE);

  /* End of SystemInitialize for SubSystem: '<S64>/EMERGENCY POINT RELEASE' */

  /* SystemInitialize for Atomic SubSystem: '<S65>/EMERGENCY POINT RELEASE' */
  D_SWRLS_Init(&VITALDEPOT_DW.EMERGENCYPOINTRELEASE_l);

  /* End of SystemInitialize for SubSystem: '<S65>/EMERGENCY POINT RELEASE' */

  /* SystemInitialize for Atomic SubSystem: '<S66>/EMERGENCY POINT RELEASE' */
  D_SWRLS_Init(&VITALDEPOT_DW.EMERGENCYPOINTRELEASE_p);

  /* End of SystemInitialize for SubSystem: '<S66>/EMERGENCY POINT RELEASE' */

  /* SystemInitialize for Atomic SubSystem: '<S67>/EMERGENCY POINT RELEASE' */
  D_SWRLS_Init(&VITALDEPOT_DW.EMERGENCYPOINTRELEASE_b);

  /* End of SystemInitialize for SubSystem: '<S67>/EMERGENCY POINT RELEASE' */

  /* SystemInitialize for Atomic SubSystem: '<S112>/EMERGENCY ROUTE ' */
  D_RRLS_Init(&VITALDEPOT_DW.EMERGENCYROUTE);

  /* End of SystemInitialize for SubSystem: '<S112>/EMERGENCY ROUTE ' */

  /* SystemInitialize for Atomic SubSystem: '<S113>/EMERGENCY ROUTE ' */
  D_RRLS_Init(&VITALDEPOT_DW.EMERGENCYROUTE_g);

  /* End of SystemInitialize for SubSystem: '<S113>/EMERGENCY ROUTE ' */

  /* SystemInitialize for Atomic SubSystem: '<S114>/EMERGENCY ROUTE ' */
  D_RRLS_Init(&VITALDEPOT_DW.EMERGENCYROUTE_o);

  /* End of SystemInitialize for SubSystem: '<S114>/EMERGENCY ROUTE ' */

  /* SystemInitialize for Atomic SubSystem: '<S115>/EMERGENCY ROUTE ' */
  D_RRLS_Init(&VITALDEPOT_DW.EMERGENCYROUTE_m);

  /* End of SystemInitialize for SubSystem: '<S115>/EMERGENCY ROUTE ' */

  /* SystemInitialize for Atomic SubSystem: '<S116>/EMERGENCY ROUTE ' */
  D_RRLS_Init(&VITALDEPOT_DW.EMERGENCYROUTE_e);

  /* End of SystemInitialize for SubSystem: '<S116>/EMERGENCY ROUTE ' */

  /* SystemInitialize for Atomic SubSystem: '<S117>/EMERGENCY ROUTE ' */
  D_RRLS_Init(&VITALDEPOT_DW.EMERGENCYROUTE_l);

  /* End of SystemInitialize for SubSystem: '<S117>/EMERGENCY ROUTE ' */

  /* SystemInitialize for Atomic SubSystem: '<S118>/EMERGENCY ROUTE ' */
  D_RRLS_Init(&VITALDEPOT_DW.EMERGENCYROUTE_i);

  /* End of SystemInitialize for SubSystem: '<S118>/EMERGENCY ROUTE ' */

  /* SystemInitialize for Atomic SubSystem: '<S245>/POINT CONTROL' */
  D_SW_CTRL_Init(&VITALDEPOT_DW.POINTCONTROL);

  /* End of SystemInitialize for SubSystem: '<S245>/POINT CONTROL' */

  /* SystemInitialize for Atomic SubSystem: '<S246>/POINT CONTROL' */
  D_SW_CTRL_Init(&VITALDEPOT_DW.POINTCONTROL_b);

  /* End of SystemInitialize for SubSystem: '<S246>/POINT CONTROL' */

  /* SystemInitialize for Atomic SubSystem: '<S247>/POINT CONTROL' */
  D_SW_CTRL_Init(&VITALDEPOT_DW.POINTCONTROL_m);

  /* End of SystemInitialize for SubSystem: '<S247>/POINT CONTROL' */

  /* SystemInitialize for Atomic SubSystem: '<S248>/POINT CONTROL' */
  D_SW_CTRL_Init(&VITALDEPOT_DW.POINTCONTROL_d);

  /* End of SystemInitialize for SubSystem: '<S248>/POINT CONTROL' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/D_TP9' */
  D_TP_Init(&VITALDEPOT_DW.D_TP9);

  /* End of SystemInitialize for SubSystem: '<S14>/D_TP9' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/D_TP8' */
  D_TP_Init(&VITALDEPOT_DW.D_TP8);

  /* End of SystemInitialize for SubSystem: '<S14>/D_TP8' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/D_TP7' */
  D_TP_Init(&VITALDEPOT_DW.D_TP7);

  /* End of SystemInitialize for SubSystem: '<S14>/D_TP7' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/D_TP6' */
  D_TP_Init(&VITALDEPOT_DW.D_TP6);

  /* End of SystemInitialize for SubSystem: '<S14>/D_TP6' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/D_TP5' */
  D_TP_Init(&VITALDEPOT_DW.D_TP5);

  /* End of SystemInitialize for SubSystem: '<S14>/D_TP5' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/D_TP4' */
  D_TP_Init(&VITALDEPOT_DW.D_TP4);

  /* End of SystemInitialize for SubSystem: '<S14>/D_TP4' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/D_TP3' */
  D_TP_Init(&VITALDEPOT_DW.D_TP3);

  /* End of SystemInitialize for SubSystem: '<S14>/D_TP3' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/D_TP2' */
  D_TP_Init(&VITALDEPOT_DW.D_TP2);

  /* End of SystemInitialize for SubSystem: '<S14>/D_TP2' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/D_TP10' */
  D_TP_Init(&VITALDEPOT_DW.D_TP10);

  /* End of SystemInitialize for SubSystem: '<S14>/D_TP10' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/D_TP1' */
  D_TP_Init(&VITALDEPOT_DW.D_TP1);

  /* End of SystemInitialize for SubSystem: '<S14>/D_TP1' */

  /* SystemInitialize for Atomic SubSystem: '<S3>/COMMUNICATION CHECK' */
  D_COMM_Init(&VITALDEPOT_DW.COMMUNICATIONCHECK);

  /* End of SystemInitialize for SubSystem: '<S3>/COMMUNICATION CHECK' */
}

/* Start for referenced model: 'VITALDEPOT' */
void VITALDEPOT_Start(void)
{
  /* Start for DiscretePulseGenerator: '<S3>/0.5S' */
  VITALDEPOT_DW.clockTickCounter = 0;

  /* Start for DiscretePulseGenerator: '<S3>/1S' */
  VITALDEPOT_DW.clockTickCounter_i = 0;
}

/* Outputs for referenced model: 'VITALDEPOT' */
void VITALDEPOT(const boolean_T rtu_FROMMAIN[3], const boolean_T *rtu_NVVCHKFROM,
                const boolean_T rtu_SREQFROM[12], const boolean_T rtu_NREQFROM[4],
                const boolean_T rtu_RREQFROM[4], const boolean_T rtu_OOCFROM[4],
                const boolean_T rtu_RRLSPBCTRLFROM[8], const boolean_T
                rtu_SWRLSPBCTRLFROM[4], const boolean_T rtu_DEPVARFROM[12],
                const boolean_T rtu_RSTFROM[7], const boolean_T *rtu_VDRDI,
                const boolean_T rtu_TPRDI[10], const boolean_T rtu_NWPDI[4],
                const boolean_T rtu_RWPDI[4], const boolean_T rtu_SYSTEMFROM[4],
                boolean_T rty_TOMAIN[2], boolean_T *rty_VDRDITO, boolean_T
                *rty_VNVCHKTO, boolean_T rty_TPTO[10], boolean_T rty_SESTO[3],
                boolean_T rty_SWSTO[3], boolean_T rty_NWCTO[4], boolean_T
                rty_NWPTO[4], boolean_T rty_NWZTO[4], boolean_T rty_NWTETO[4],
                boolean_T rty_RWCTO[4], boolean_T rty_RWPTO[4], boolean_T
                rty_RWZTO[4], boolean_T rty_RWTETO[4], boolean_T rty_LTO[4],
                boolean_T rty_LSTO[4], boolean_T rty_SWRLSTO[4], boolean_T
                rty_TPZTO[4], boolean_T rty_GRDOTO[8], boolean_T rty_SASTO[8],
                boolean_T rty_RRLSTO[8], boolean_T *rty_VDRDO, boolean_T
                rty_GRDO[8], boolean_T rty_NWRDO[4], boolean_T rty_RWRDO[4],
                boolean_T rty_WLPRDO[4])
{
  RT_MODEL_VITALDEPOT_T *const VITALDEPOT_M = &(VITALDEPOT_MdlrefDW.rtm);

  /* local block i/o variables */
  boolean_T rtb_L12GRDO;
  boolean_T rtb_u2TP;
  boolean_T rtb_u3TP;
  boolean_T rtb_RR;
  boolean_T rtb_VDR_e;
  boolean_T rtb_L14AGRDO;
  boolean_T rtb_u4TP;
  boolean_T rtb_u3TP_a;
  boolean_T rtb_RR_k;
  boolean_T rtb_VDR_i;
  boolean_T rtb_L32GRDO;
  boolean_T rtb_u2TP_h;
  boolean_T rtb_u3TP_e;
  boolean_T rtb_RR_g;
  boolean_T rtb_VDR_f;
  boolean_T rtb_L34GRDO;
  boolean_T rtb_u4TP_k;
  boolean_T rtb_u3BTP;
  boolean_T rtb_RR_f;
  boolean_T rtb_VDR_d;
  boolean_T rtb_L54GRDO;
  boolean_T rtb_u4TP_n;
  boolean_T rtb_u3BTP_i;
  boolean_T rtb_RR_a;
  boolean_T rtb_VDR_c;
  boolean_T rtb_L72GRDO;
  boolean_T rtb_u2TP_hs;
  boolean_T rtb_u3ATP;
  boolean_T rtb_RR_o;
  boolean_T rtb_VDR_a;
  boolean_T rtb_L74GRDO;
  boolean_T rtb_u4TP_g;
  boolean_T rtb_u3BTP_l;
  boolean_T rtb_RR_j;
  boolean_T rtb_VDR_fa;
  boolean_T rtb_W13ASWRLSPBCTRL;
  boolean_T rtb_AND1;
  boolean_T rtb_u3TP_j;
  boolean_T rtb_SWRLS;
  boolean_T rtb_VDR_er;
  boolean_T rtb_W13B73ASWRLSPBCTRL;
  boolean_T rtb_AND1_d;
  boolean_T rtb_AND2;
  boolean_T rtb_SWRLS_c;
  boolean_T rtb_VDR_cf;
  boolean_T rtb_W54SWRLSPBCTRL;
  boolean_T rtb_AND1_e;
  boolean_T rtb_u3BTP_m;
  boolean_T rtb_SWRLS_j;
  boolean_T rtb_VDR_j;
  boolean_T rtb_W73BSWRLSPBCTRL;
  boolean_T rtb_AND1_g;
  boolean_T rtb_u3BTP_o;
  boolean_T rtb_SWRLS_k;
  boolean_T rtb_VDR_h;
  boolean_T rtb_AND1_gm;
  boolean_T rtb_AND2_m;
  boolean_T rtb_u3SES_i;
  boolean_T rtb_L14BRRLSPBCTRL;
  boolean_T rtb_RRLS;
  boolean_T rtb_VDRDI_b;
  boolean_T rtb_L14ASAS;
  boolean_T rtb_L14AX12SREQ;
  boolean_T rtb_OR1;
  boolean_T rtb_X12RRLSPBCTRL;
  boolean_T rtb_RRLS_n;
  boolean_T rtb_VDRDI_o;
  boolean_T rtb_L14ASAS_h;
  boolean_T rtb_L14AX32SREQ;
  boolean_T rtb_OR1_f;
  boolean_T rtb_X32RRLSPBCTRL;
  boolean_T rtb_RRLS_o;
  boolean_T rtb_VDRDI_n;
  boolean_T rtb_L72SAS_n;
  boolean_T rtb_L72X34SREQ;
  boolean_T rtb_OR1_d;
  boolean_T rtb_X34RRLSPBCTRL;
  boolean_T rtb_RRLS_g;
  boolean_T rtb_VDRDI_j;
  boolean_T rtb_L72SAS_o;
  boolean_T rtb_L72X54SREQ;
  boolean_T rtb_OR1_j;
  boolean_T rtb_X54RRLSPBCTRL;
  boolean_T rtb_RRLS_f;
  boolean_T rtb_VDRDI_g;
  boolean_T rtb_AND1_l;
  boolean_T rtb_AND2_d;
  boolean_T rtb_u3ASWS_c;
  boolean_T rtb_X72RRLSPBCTRL;
  boolean_T rtb_RRLS_h;
  boolean_T rtb_VDRDI_np;
  boolean_T rtb_L72SAS_b;
  boolean_T rtb_L72X74SREQ;
  boolean_T rtb_OR1_j1;
  boolean_T rtb_X74RRLSPBCTRL;
  boolean_T rtb_RRLS_j;
  boolean_T rtb_VDRDI_e;
  boolean_T rtb_L12L14BSL;
  boolean_T rtb_L12L14BRS;
  boolean_T rtb_L14AX12SL;
  boolean_T rtb_L14AX12RS;
  boolean_T rtb_L14AX32SL;
  boolean_T rtb_L14AX32RS;
  boolean_T rtb_L14AX72SL;
  boolean_T rtb_L14AX72RS;
  boolean_T rtb_L32L14BSL;
  boolean_T rtb_L32L14BRS;
  boolean_T rtb_L34X72SL;
  boolean_T rtb_L34X72RS;
  boolean_T rtb_L54X72SL;
  boolean_T rtb_L54X72RS;
  boolean_T rtb_L72L14BSL;
  boolean_T rtb_L72L14BRS;
  boolean_T rtb_L72X34SL;
  boolean_T rtb_L72X34RS;
  boolean_T rtb_L72X54SL;
  boolean_T rtb_L72X54RS;
  boolean_T rtb_L72X74SL;
  boolean_T rtb_L72X74RS;
  boolean_T rtb_L74X72SL;
  boolean_T rtb_L74X72RS;
  boolean_T rtb_L14BRRLSTEFROM1;
  boolean_T rtb_X12RRLSTEFROM1;
  boolean_T rtb_W13ANWZFROM1;
  boolean_T rtb_W13B73ANWZFROM1;
  boolean_T rtb_X32RRLSTEFROM1;
  boolean_T rtb_W13ARWZFROM1;
  boolean_T rtb_X72RRLSTEFROM1;
  boolean_T rtb_W13B73ARWZFROM1;
  boolean_T rtb_X72RRLSTEFROM1_b;
  boolean_T rtb_L14BRRLSTEFROM1_f;
  boolean_T rtb_W13B73ARWZFROM1_j;
  boolean_T rtb_X74RRLSTEFROM1;
  boolean_T rtb_W13B73ANWZFROM1_m;
  boolean_T rtb_W73BNWZFROM1;
  boolean_T rtb_X34RRLSTEFROM1;
  boolean_T rtb_W73BRWZFROM1;
  boolean_T rtb_W54RWZFROM1;
  boolean_T rtb_X54RRLSTEFROM1;
  boolean_T rtb_W54NWZFROM1;
  boolean_T rtb_X72RRLSTEFROM1_d;
  boolean_T rtb_X74RRLSTEFROM1_o;
  boolean_T rtb_W73BNWZFROM1_j;
  boolean_T rtb_X34RRLSTEFROM1_i;
  boolean_T rtb_W73BRWZFROM1_c;
  boolean_T rtb_W54RWZFROM1_h;
  boolean_T rtb_X54RRLSTEFROM1_p;
  boolean_T rtb_W54NWZFROM1_j;
  boolean_T rtb_W13ANWPDI;
  boolean_T rtb_W13ARWPDI;
  boolean_T rtb_W13AOOC;
  boolean_T rtb_W13ANREQ;
  boolean_T rtb_W13ARREQ;
  boolean_T rtb_u3TP_o;
  boolean_T rtb_AND1_di;
  boolean_T rtb_W13B73ANWPDI;
  boolean_T rtb_W13B73ARWPDI;
  boolean_T rtb_W13B73AOOC;
  boolean_T rtb_W13B73ANREQ;
  boolean_T rtb_W13B73ARREQ;
  boolean_T rtb_AND2_k;
  boolean_T rtb_AND1_ef;
  boolean_T rtb_W54NWPDI;
  boolean_T rtb_W54RWPDI;
  boolean_T rtb_W54OOC;
  boolean_T rtb_W54NREQ;
  boolean_T rtb_W54RREQ;
  boolean_T rtb_u3BTP_e;
  boolean_T rtb_AND1_o;
  boolean_T rtb_W73BNWPDI;
  boolean_T rtb_W73BRWPDI;
  boolean_T rtb_W73BOOC;
  boolean_T rtb_W73BNREQ;
  boolean_T rtb_W73BRREQ;
  boolean_T rtb_u3BTP_io;
  boolean_T rtb_AND1_p;
  boolean_T rtb_AND2_n;
  boolean_T rtb_u3TP_c;
  boolean_T rtb_AND1_n;
  boolean_T rtb_AND3;
  boolean_T rtb_AND5;
  boolean_T rtb_AND1_gz;
  boolean_T rtb_AND2_e;
  boolean_T rtb_u3BTP_d;
  boolean_T rtb_AND1_i;
  boolean_T rtb_AND2_i;
  boolean_T rtb_u3BTP_f;
  boolean_T rtb_AND1_gmn;
  boolean_T rtb_L12L14BREQ;
  boolean_T rtb_L12L14BSL_j;
  boolean_T rtb_L14AX12REQ;
  boolean_T rtb_L14AX12SL_g;
  boolean_T rtb_L14AX32REQ;
  boolean_T rtb_L14AX32SL_g;
  boolean_T rtb_L14AX72REQ;
  boolean_T rtb_L14AX72SL_d;
  boolean_T rtb_L32L14BREQ;
  boolean_T rtb_L32L14BSL_h;
  boolean_T rtb_L34AX72REQ;
  boolean_T rtb_L34AX72SL;
  boolean_T rtb_L54AX72REQ;
  boolean_T rtb_L54AX72SL;
  boolean_T rtb_L72L14BREQ;
  boolean_T rtb_L72L14BSL_e;
  boolean_T rtb_L72X34REQ;
  boolean_T rtb_L72X34SL_p;
  boolean_T rtb_L72X54REQ;
  boolean_T rtb_L72X54SL_b;
  boolean_T rtb_L72X74REQ;
  boolean_T rtb_L72X74SL_c;
  boolean_T rtb_L74AX72REQ;
  boolean_T rtb_L74AX72SL;
  boolean_T rtb_u3SWS_e;
  boolean_T rtb_AND1_h;
  boolean_T rtb_L14AGRDO_k;
  boolean_T rtb_u3TP_ae;
  boolean_T rtb_u3SES_k;
  boolean_T rtb_AND1_gr;
  boolean_T rtb_L12GRDO_f;
  boolean_T rtb_u3TP_h;
  boolean_T rtb_u3SES_eu;
  boolean_T rtb_AND1_g0;
  boolean_T rtb_L32GRDO_l;
  boolean_T rtb_u3TP_b;
  boolean_T rtb_u3SES_i2;
  boolean_T rtb_W13B73ARWC;
  boolean_T rtb_L72GRDO_e;
  boolean_T rtb_u3TP_oj;
  boolean_T rtb_u3SWS_g;
  boolean_T rtb_AND1_b;
  boolean_T rtb_L14AGRDO_f;
  boolean_T rtb_u3TP_he;
  boolean_T rtb_u3BSES_c;
  boolean_T rtb_AND1_m;
  boolean_T rtb_L72GRDO_j;
  boolean_T rtb_u3BTP_df;
  boolean_T rtb_u3BSES_h;
  boolean_T rtb_AND1_ie;
  boolean_T rtb_L72GRDO_k;
  boolean_T rtb_u3BTP_li;
  boolean_T rtb_u3ASWS_e;
  boolean_T rtb_W13B73ARWC_m;
  boolean_T rtb_L14AGRDO_i;
  boolean_T rtb_u3ATP_a;
  boolean_T rtb_u3ASWS_h;
  boolean_T rtb_AND1_nv;
  boolean_T rtb_L54GRDO_k;
  boolean_T rtb_u3ATP_b;
  boolean_T rtb_u3ASWS_l;
  boolean_T rtb_AND1_el;
  boolean_T rtb_L74GRDO_g;
  boolean_T rtb_u3ATP_g;
  boolean_T rtb_u3ASWS_h3;
  boolean_T rtb_AND1_f;
  boolean_T rtb_L34GRDO_a;
  boolean_T rtb_u3ATP_j;
  boolean_T rtb_u3BSES_k;
  boolean_T rtb_AND1_l0;
  boolean_T rtb_L72GRDO_a;
  boolean_T rtb_u3BTP_n;
  boolean_T rtb_OR2_p;
  boolean_T rtb_u3TP_d;
  boolean_T rtb_u3RLS;
  boolean_T rtb_u3SWSRL;
  boolean_T rtb_u3TP_n;
  boolean_T rtb_u3RLS_i;
  boolean_T rtb_u3ASESRL;
  boolean_T rtb_u3ATP_h;
  boolean_T rtb_u3ARLS;
  boolean_T rtb_OR2_pt;
  boolean_T rtb_u3ATP_n;
  boolean_T rtb_u3ARLS_o;
  boolean_T rtb_OR1_l;
  boolean_T rtb_u3BTP_c;
  boolean_T rtb_u3BRLS;
  boolean_T rtb_u3BSWSRL;
  boolean_T rtb_u3BTP_h;
  boolean_T rtb_u3BRLS_p;
  boolean_T rtb_L12L14BS_p;
  boolean_T rtb_u2TP_p;
  boolean_T rtb_OR1_hm;
  boolean_T rtb_u4TP_f;
  boolean_T rtb_L32L14BS_k;
  boolean_T rtb_u2TP_f;
  boolean_T rtb_L34X72S_k;
  boolean_T rtb_u4TP_m;
  boolean_T rtb_L54X72S_e;
  boolean_T rtb_u4TP_e;
  boolean_T rtb_OR1_a;
  boolean_T rtb_u2TP_a;
  boolean_T rtb_L74X72S_k;
  boolean_T rtb_u4TP_j;
  boolean_T rtb_COMM1DI;
  boolean_T rtb_COMM2DI;
  boolean_T rtb_u4TP_l;
  boolean_T rtb_u4ARRLSPBCTRL;
  boolean_T rtb_u2TP_d;
  boolean_T rtb_u3TP_kg;
  boolean_T rtb_u2TP_o;
  boolean_T rtb_u4TP_np;
  boolean_T rtb_u4TP_b;
  boolean_T rtb_u2TP_i;
  boolean_T rtb_u3ATP_p;
  boolean_T rtb_u3BTP_jy;
  boolean_T rtb_u4TP_eu;
  boolean_T rtb_u3SES_f;
  boolean_T rtb_u3ASES_e;
  boolean_T rtb_u3BSES_j;
  boolean_T rtb_u3SWS_l;
  boolean_T rtb_u3ASWS_b;
  boolean_T rtb_u3BSWS_f;
  boolean_T rtb_W13ANWC_k;
  boolean_T rtb_W13B73ANWC_cl;
  boolean_T rtb_W54NWC_g;
  boolean_T rtb_W73BNWC_c;
  boolean_T rtb_W13ANWP;
  boolean_T rtb_W13B73ANWP;
  boolean_T rtb_W54NWP;
  boolean_T rtb_W73BNWP;
  boolean_T rtb_W13ANWZ_g;
  boolean_T rtb_W13B73ANWZ_o;
  boolean_T rtb_W54NWZ_a;
  boolean_T rtb_W73BNWZ_f;
  boolean_T rtb_W13ANWTE;
  boolean_T rtb_W13B73ANWTE;
  boolean_T rtb_W54NWTE;
  boolean_T rtb_W73BNWTE;
  boolean_T rtb_W13ARWC_dj;
  boolean_T rtb_W13B73ARWC_l;
  boolean_T rtb_W54RWC_k;
  boolean_T rtb_W73BRWC_jj;
  boolean_T rtb_W13ARWP;
  boolean_T rtb_W13B73ARWP;
  boolean_T rtb_W54RWP;
  boolean_T rtb_W73BRWP;
  boolean_T rtb_W13ARWZ_k;
  boolean_T rtb_W13B73ARWZ_b;
  boolean_T rtb_W54RWZ_m;
  boolean_T rtb_W73BRWZ_p;
  boolean_T rtb_W13ARWTE;
  boolean_T rtb_W13B73ARWTE;
  boolean_T rtb_W54RWTE;
  boolean_T rtb_W73BRWTE;
  boolean_T rtb_W13AL;
  boolean_T rtb_W13B73AL;
  boolean_T rtb_W54L;
  boolean_T rtb_W73BL;
  boolean_T rtb_W13ALS;
  boolean_T rtb_W13B73ALS;
  boolean_T rtb_W54LS;
  boolean_T rtb_W73BLS;
  boolean_T rtb_W13ASWRLS_p;
  boolean_T rtb_W13B73ASWRLS;
  boolean_T rtb_W54SWRLS_o;
  boolean_T rtb_W73BSWRLS_i;
  boolean_T rtb_W13ATPZ_e;
  boolean_T rtb_W13B73ATPZ_bt;
  boolean_T rtb_W54TPZ_in;
  boolean_T rtb_W73BTPZ_e;
  boolean_T rtb_L12GRDO_m;
  boolean_T rtb_L14AGRDO_e;
  boolean_T rtb_L14BGRDO;
  boolean_T rtb_L32GRDO_ld;
  boolean_T rtb_L34GRDO_e;
  boolean_T rtb_L54GRDO_i;
  boolean_T rtb_L72GRDO_io;
  boolean_T rtb_L74GRDO_ai;
  boolean_T rtb_L12SAS_j;
  boolean_T rtb_L14ASAS_m;
  boolean_T rtb_L32SAS_o;
  boolean_T rtb_L34SAS_n;
  boolean_T rtb_L54SAS_o;
  boolean_T rtb_L72SAS_p;
  boolean_T rtb_L74SAS_e;
  boolean_T rtb_L14ARRLS_f;
  boolean_T rtb_L14BRRLS_g;
  boolean_T rtb_X12RRLS_a;
  boolean_T rtb_X32RRLS_l;
  boolean_T rtb_X34RRLS_e;
  boolean_T rtb_X54RRLS_n;
  boolean_T rtb_X72RRLS_f;
  boolean_T rtb_X74RRLS_a;
  boolean_T rtb_L14BGRDO_n;
  boolean_T rtb_W13ANWRDO;
  boolean_T rtb_W13B73ANWRDO;
  boolean_T rtb_W54NWRDO;
  boolean_T rtb_W73BNWRDO;
  boolean_T rtb_W13ARWRDO;
  boolean_T rtb_W13B73ARWRDO;
  boolean_T rtb_W54RWRDO;
  boolean_T rtb_W73BRWRDO;
  boolean_T rtb_W13AWLPRDO;
  boolean_T rtb_W13B73AWLPRDO;
  boolean_T rtb_W54WLPRDO;
  boolean_T rtb_W73BWLPRDO;
  int32_T clockTickCounter;
  int32_T clockTickCounter_i;
  boolean_T M_RRLS_L14A;
  boolean_T M_RR;
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
  boolean_T M_RRLSPB_CTRL_L14B;
  boolean_T M_RRLSPB_CTRL_X12;
  boolean_T M_RRLSPB_CTRL_X32;
  boolean_T M_RRLSPB_CTRL_X34;
  boolean_T M_RRLSPB_CTRL_X54;
  boolean_T M_RRLSPB_CTRL_X72;
  boolean_T M_RRLSPB_CTRL_X74;
  boolean_T M_W13A_SWRLSPB_CTRL;
  boolean_T M_W13B_73A_SWRLSPB_CTRL;
  boolean_T M_W54_SWRLSPB_CTRL;
  boolean_T M_W73B_SWRLSPB_CTRL;
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
  boolean_T DI_VDR;
  boolean_T DI_TPR_12;
  boolean_T DI_TPR_13;
  boolean_T DI_TPR_14;
  boolean_T DI_TPR_32;
  boolean_T DI_TPR_34;
  boolean_T DI_TPR_54;
  boolean_T DI_TPR_72;
  boolean_T DI_TPR_73A;
  boolean_T DI_TPR_73B;
  boolean_T DI_TPR_74;
  boolean_T DI_NWP_W13A;
  boolean_T DI_NWP_W13B_73A;
  boolean_T DI_NWP_W54;
  boolean_T DI_NWP_W73B;
  boolean_T DI_RWP_W13A;
  boolean_T DI_RWP_W13B_73A;
  boolean_T DI_RWP_W54;
  boolean_T DI_RWP_W73B;
  boolean_T DI_COMM_1;
  boolean_T DI_COMM_2;
  boolean_T DI_SYS_1;
  boolean_T DI_SYS_2;
  boolean_T M_TP_14;
  boolean_T M_CHK_V_NV;
  boolean_T M_TP_12;
  boolean_T M_TP_13;
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
  boolean_T DO_L12_GR;
  boolean_T DO_L14A_GR;
  boolean_T DO_L32_GR;
  boolean_T DO_L34_GR;
  boolean_T DO_L54_GR;
  boolean_T DO_L72_GR;
  boolean_T DO_L74_GR;
  boolean_T M_AS_S_L12;
  boolean_T M_AS_S_L14A;
  boolean_T M_AS_S_L32;
  boolean_T M_AS_S_L34;
  boolean_T M_AS_S_L54;
  boolean_T M_AS_S_L72;
  boolean_T M_AS_S_L74;
  boolean_T M_RRLS_L14B;
  boolean_T M_RRLS_X12;
  boolean_T M_RRLS_X32;
  boolean_T M_RRLS_X34;
  boolean_T M_RRLS_X54;
  boolean_T M_RRLS_X72;
  boolean_T M_RRLS_X74;
  boolean_T DO_VDR;
  boolean_T DO_NWR_W13A;
  boolean_T DO_NWR_W13B_73A;
  boolean_T DO_NWR_W54;
  boolean_T DO_NWR_W73B;
  boolean_T DO_RWR_W13A;
  boolean_T DO_RWR_W13B_73A;
  boolean_T DO_RWR_W54;
  boolean_T DO_RWR_W73B;
  boolean_T DO_WLPR_W13A;
  boolean_T DO_WLPR_W13B_73A;
  boolean_T DO_WLPR_W54;
  boolean_T DO_WLPR_W73B;
  boolean_T M_SWRLS;
  boolean_T M_RRLS;
  boolean_T M_RRLSTE_L14B;
  boolean_T M_RRLSTE_X12;
  boolean_T M_RRLSTE_X32;
  boolean_T M_RRLSTE_X34;
  boolean_T M_RRLSTE_X54;
  boolean_T M_RRLSTE_X72;
  boolean_T M_L_S_12_14;
  boolean_T M_AS_SR_S_12_14;
  boolean_T M_L_S_14_12;
  boolean_T M_AS_SR_S_14_12;
  boolean_T M_L_S_14_32;
  boolean_T M_AS_SR_S_14_32;
  boolean_T M_L_S_14_72;
  boolean_T M_AS_SR_S_14_72;
  boolean_T M_L_S_32_14;
  boolean_T M_AS_SR_S_32_14;
  boolean_T M_L_S_34_72;
  boolean_T M_AS_SR_S_34_72;
  boolean_T M_L_S_54_72;
  boolean_T M_AS_SR_S_54_72;
  boolean_T M_L_S_72_14;
  boolean_T M_AS_SR_S_72_14;
  boolean_T M_L_S_72_34;
  boolean_T M_AS_SR_S_72_34;
  boolean_T M_L_S_72_54;
  boolean_T M_AS_SR_S_72_54;
  boolean_T M_L_S_72_74;
  boolean_T M_AS_SR_S_72_74;
  boolean_T M_L_S_74_72;
  boolean_T M_RL_S_ES_13;
  boolean_T M_RL_S_WS_13;
  boolean_T M_RL_S_ES_73A;
  boolean_T M_RL_S_WS_73B;
  boolean_T M_RLS_13;
  boolean_T M_RLS_73A;
  boolean_T M_RLS_73B;
  boolean_T M_R_S_12_14;
  boolean_T M_R_S_14_12;
  boolean_T M_R_S_14_32;
  boolean_T M_R_S_14_72;
  boolean_T M_R_S_32_14;
  boolean_T M_R_S_34_72;
  boolean_T M_R_S_54_72;
  boolean_T M_R_S_72_14;
  boolean_T M_R_S_72_34;
  boolean_T M_R_S_72_54;
  boolean_T M_R_S_72_74;
  boolean_T M_R_S_74_72;
  int32_T clockTickCounter_0;
  int32_T clockTickCounter_i_0;
  boolean_T M_GV_FLASH_1000;
  M_GV_FLASH_1000 = VITALDEPOT_DW.M_GV_FLASH_1000;

  /* DiscretePulseGenerator: '<S3>/1S' */
  clockTickCounter_i_0 = VITALDEPOT_DW.clockTickCounter_i;

  /* DiscretePulseGenerator: '<S3>/0.5S' */
  clockTickCounter_0 = VITALDEPOT_DW.clockTickCounter;
  M_R_S_74_72 = VITALDEPOT_DW.M_R_S_74_72;
  M_R_S_72_74 = VITALDEPOT_DW.M_R_S_72_74;
  M_R_S_72_54 = VITALDEPOT_DW.M_R_S_72_54;
  M_R_S_72_34 = VITALDEPOT_DW.M_R_S_72_34;
  M_R_S_72_14 = VITALDEPOT_DW.M_R_S_72_14;
  M_R_S_54_72 = VITALDEPOT_DW.M_R_S_54_72;
  M_R_S_34_72 = VITALDEPOT_DW.M_R_S_34_72;
  M_R_S_32_14 = VITALDEPOT_DW.M_R_S_32_14;
  M_R_S_14_72 = VITALDEPOT_DW.M_R_S_14_72;
  M_R_S_14_32 = VITALDEPOT_DW.M_R_S_14_32;
  M_R_S_14_12 = VITALDEPOT_DW.M_R_S_14_12;
  M_R_S_12_14 = VITALDEPOT_DW.M_R_S_12_14;
  M_RLS_73B = VITALDEPOT_DW.M_RLS_73B;
  M_RLS_73A = VITALDEPOT_DW.M_RLS_73A;
  M_RLS_13 = VITALDEPOT_DW.M_RLS_13;
  M_RL_S_WS_73B = VITALDEPOT_DW.M_RL_S_WS_73B;
  M_RL_S_ES_73A = VITALDEPOT_DW.M_RL_S_ES_73A;
  M_RL_S_WS_13 = VITALDEPOT_DW.M_RL_S_WS_13;
  M_RL_S_ES_13 = VITALDEPOT_DW.M_RL_S_ES_13;
  M_L_S_74_72 = VITALDEPOT_DW.M_L_S_74_72;
  M_AS_SR_S_72_74 = VITALDEPOT_DW.M_AS_SR_S_72_74;
  M_L_S_72_74 = VITALDEPOT_DW.M_L_S_72_74;
  M_AS_SR_S_72_54 = VITALDEPOT_DW.M_AS_SR_S_72_54;
  M_L_S_72_54 = VITALDEPOT_DW.M_L_S_72_54;
  M_AS_SR_S_72_34 = VITALDEPOT_DW.M_AS_SR_S_72_34;
  M_L_S_72_34 = VITALDEPOT_DW.M_L_S_72_34;
  M_AS_SR_S_72_14 = VITALDEPOT_DW.M_AS_SR_S_72_14;
  M_L_S_72_14 = VITALDEPOT_DW.M_L_S_72_14;
  M_AS_SR_S_54_72 = VITALDEPOT_DW.M_AS_SR_S_54_72;
  M_L_S_54_72 = VITALDEPOT_DW.M_L_S_54_72;
  M_AS_SR_S_34_72 = VITALDEPOT_DW.M_AS_SR_S_34_72;
  M_L_S_34_72 = VITALDEPOT_DW.M_L_S_34_72;
  M_AS_SR_S_32_14 = VITALDEPOT_DW.M_AS_SR_S_32_14;
  M_L_S_32_14 = VITALDEPOT_DW.M_L_S_32_14;
  M_AS_SR_S_14_72 = VITALDEPOT_DW.M_AS_SR_S_14_72;
  M_L_S_14_72 = VITALDEPOT_DW.M_L_S_14_72;
  M_AS_SR_S_14_32 = VITALDEPOT_DW.M_AS_SR_S_14_32;
  M_L_S_14_32 = VITALDEPOT_DW.M_L_S_14_32;
  M_AS_SR_S_14_12 = VITALDEPOT_DW.M_AS_SR_S_14_12;
  M_L_S_14_12 = VITALDEPOT_DW.M_L_S_14_12;
  M_AS_SR_S_12_14 = VITALDEPOT_DW.M_AS_SR_S_12_14;
  M_L_S_12_14 = VITALDEPOT_DW.M_L_S_12_14;
  M_RRLSTE_X72 = VITALDEPOT_DW.M_RRLSTE_X72;
  M_RRLSTE_X54 = VITALDEPOT_DW.M_RRLSTE_X54;
  M_RRLSTE_X34 = VITALDEPOT_DW.M_RRLSTE_X34;
  M_RRLSTE_X32 = VITALDEPOT_DW.M_RRLSTE_X32;
  M_RRLSTE_X12 = VITALDEPOT_DW.M_RRLSTE_X12;
  M_RRLSTE_L14B = VITALDEPOT_DW.M_RRLSTE_L14B;
  M_RRLS = VITALDEPOT_DW.M_RRLS;
  M_SWRLS = VITALDEPOT_DW.M_SWRLS;
  DO_WLPR_W73B = VITALDEPOT_DW.DO_WLPR_W73B;
  DO_WLPR_W54 = VITALDEPOT_DW.DO_WLPR_W54;
  DO_WLPR_W13B_73A = VITALDEPOT_DW.DO_WLPR_W13B_73A;
  DO_WLPR_W13A = VITALDEPOT_DW.DO_WLPR_W13A;
  DO_RWR_W73B = VITALDEPOT_DW.DO_RWR_W73B;
  DO_RWR_W54 = VITALDEPOT_DW.DO_RWR_W54;
  DO_RWR_W13B_73A = VITALDEPOT_DW.DO_RWR_W13B_73A;
  DO_RWR_W13A = VITALDEPOT_DW.DO_RWR_W13A;
  DO_NWR_W73B = VITALDEPOT_DW.DO_NWR_W73B;
  DO_NWR_W54 = VITALDEPOT_DW.DO_NWR_W54;
  DO_NWR_W13B_73A = VITALDEPOT_DW.DO_NWR_W13B_73A;
  DO_NWR_W13A = VITALDEPOT_DW.DO_NWR_W13A;
  DO_VDR = VITALDEPOT_DW.DO_VDR;
  M_RRLS_X74 = VITALDEPOT_DW.M_RRLS_X74;
  M_RRLS_X72 = VITALDEPOT_DW.M_RRLS_X72;
  M_RRLS_X54 = VITALDEPOT_DW.M_RRLS_X54;
  M_RRLS_X34 = VITALDEPOT_DW.M_RRLS_X34;
  M_RRLS_X32 = VITALDEPOT_DW.M_RRLS_X32;
  M_RRLS_X12 = VITALDEPOT_DW.M_RRLS_X12;
  M_RRLS_L14B = VITALDEPOT_DW.M_RRLS_L14B;
  M_AS_S_L74 = VITALDEPOT_DW.M_AS_S_L74;
  M_AS_S_L72 = VITALDEPOT_DW.M_AS_S_L72;
  M_AS_S_L54 = VITALDEPOT_DW.M_AS_S_L54;
  M_AS_S_L34 = VITALDEPOT_DW.M_AS_S_L34;
  M_AS_S_L32 = VITALDEPOT_DW.M_AS_S_L32;
  M_AS_S_L14A = VITALDEPOT_DW.M_AS_S_L14A;
  M_AS_S_L12 = VITALDEPOT_DW.M_AS_S_L12;
  DO_L74_GR = VITALDEPOT_DW.DO_L74_GR;
  DO_L72_GR = VITALDEPOT_DW.DO_L72_GR;
  DO_L54_GR = VITALDEPOT_DW.DO_L54_GR;
  DO_L34_GR = VITALDEPOT_DW.DO_L34_GR;
  DO_L32_GR = VITALDEPOT_DW.DO_L32_GR;
  DO_L14A_GR = VITALDEPOT_DW.DO_L14A_GR;
  DO_L12_GR = VITALDEPOT_DW.DO_L12_GR;
  M_W73B_TPZ = VITALDEPOT_DW.M_W73B_TPZ;
  M_W54_TPZ = VITALDEPOT_DW.M_W54_TPZ;
  M_W13B_73A_TPZ = VITALDEPOT_DW.M_W13B_73A_TPZ;
  M_W13A_TPZ = VITALDEPOT_DW.M_W13A_TPZ;
  M_W73B_SWRLS = VITALDEPOT_DW.M_W73B_SWRLS;
  M_W54_SWRLS = VITALDEPOT_DW.M_W54_SWRLS;
  M_W13B_73A_SWRLS = VITALDEPOT_DW.M_W13B_73A_SWRLS;
  M_W13A_SWRLS = VITALDEPOT_DW.M_W13A_SWRLS;
  M_W73B_LS = VITALDEPOT_DW.M_W73B_LS;
  M_W54_LS = VITALDEPOT_DW.M_W54_LS;
  M_W13B_73A_LS = VITALDEPOT_DW.M_W13B_73A_LS;
  M_W13A_LS = VITALDEPOT_DW.M_W13A_LS;
  M_W73B_L = VITALDEPOT_DW.M_W73B_L;
  M_W54_L = VITALDEPOT_DW.M_W54_L;
  M_W13B_73A_L = VITALDEPOT_DW.M_W13B_73A_L;
  M_W13A_L = VITALDEPOT_DW.M_W13A_L;
  M_W73B_RW_TE = VITALDEPOT_DW.M_W73B_RW_TE;
  M_W54_RW_TE = VITALDEPOT_DW.M_W54_RW_TE;
  M_W13B_73A_RW_TE = VITALDEPOT_DW.M_W13B_73A_RW_TE;
  M_W13A_RW_TE = VITALDEPOT_DW.M_W13A_RW_TE;
  M_W73B_RWZ = VITALDEPOT_DW.M_W73B_RWZ;
  M_W54_RWZ = VITALDEPOT_DW.M_W54_RWZ;
  M_W13B_73A_RWZ = VITALDEPOT_DW.M_W13B_73A_RWZ;
  M_W13A_RWZ = VITALDEPOT_DW.M_W13A_RWZ;
  M_W73B_RWP = VITALDEPOT_DW.M_W73B_RWP;
  M_W54_RWP = VITALDEPOT_DW.M_W54_RWP;
  M_W13B_73A_RWP = VITALDEPOT_DW.M_W13B_73A_RWP;
  M_W13A_RWP = VITALDEPOT_DW.M_W13A_RWP;
  M_W73B_RWC = VITALDEPOT_DW.M_W73B_RWC;
  M_W54_RWC = VITALDEPOT_DW.M_W54_RWC;
  M_W13B_73A_RWC = VITALDEPOT_DW.M_W13B_73A_RWC;
  M_W13A_RWC = VITALDEPOT_DW.M_W13A_RWC;
  M_W73B_NW_TE = VITALDEPOT_DW.M_W73B_NW_TE;
  M_W54_NW_TE = VITALDEPOT_DW.M_W54_NW_TE;
  M_W13B_73A_NW_TE = VITALDEPOT_DW.M_W13B_73A_NW_TE;
  M_W13A_NW_TE = VITALDEPOT_DW.M_W13A_NW_TE;
  M_W73B_NWZ = VITALDEPOT_DW.M_W73B_NWZ;
  M_W54_NWZ = VITALDEPOT_DW.M_W54_NWZ;
  M_W13B_73A_NWZ = VITALDEPOT_DW.M_W13B_73A_NWZ;
  M_W13A_NWZ = VITALDEPOT_DW.M_W13A_NWZ;
  M_W73B_NWP = VITALDEPOT_DW.M_W73B_NWP;
  M_W54_NWP = VITALDEPOT_DW.M_W54_NWP;
  M_W13B_73A_NWP = VITALDEPOT_DW.M_W13B_73A_NWP;
  M_W13A_NWP = VITALDEPOT_DW.M_W13A_NWP;
  M_W73B_NWC = VITALDEPOT_DW.M_W73B_NWC;
  M_W54_NWC = VITALDEPOT_DW.M_W54_NWC;
  M_W13B_73A_NWC = VITALDEPOT_DW.M_W13B_73A_NWC;
  M_W13A_NWC = VITALDEPOT_DW.M_W13A_NWC;
  M_S_WS_73B = VITALDEPOT_DW.M_S_WS_73B;
  M_S_WS_73A = VITALDEPOT_DW.M_S_WS_73A;
  M_S_WS_13 = VITALDEPOT_DW.M_S_WS_13;
  M_S_ES_73B = VITALDEPOT_DW.M_S_ES_73B;
  M_S_ES_73A = VITALDEPOT_DW.M_S_ES_73A;
  M_S_ES_13 = VITALDEPOT_DW.M_S_ES_13;
  M_TP_74 = VITALDEPOT_DW.M_TP_74;
  M_TP_73B = VITALDEPOT_DW.M_TP_73B;
  M_TP_73A = VITALDEPOT_DW.M_TP_73A;
  M_TP_72 = VITALDEPOT_DW.M_TP_72;
  M_TP_54 = VITALDEPOT_DW.M_TP_54;
  M_TP_34 = VITALDEPOT_DW.M_TP_34;
  M_TP_32 = VITALDEPOT_DW.M_TP_32;
  M_TP_13 = VITALDEPOT_DW.M_TP_13;
  M_TP_12 = VITALDEPOT_DW.M_TP_12;
  M_CHK_V_NV = VITALDEPOT_DW.M_CHK_V_NV;
  M_TP_14 = VITALDEPOT_DW.M_TP_14;
  DI_SYS_2 = VITALDEPOT_DW.DI_SYS_2;
  DI_SYS_1 = VITALDEPOT_DW.DI_SYS_1;
  DI_COMM_2 = VITALDEPOT_DW.DI_COMM_2;
  DI_COMM_1 = VITALDEPOT_DW.DI_COMM_1;
  DI_RWP_W73B = VITALDEPOT_DW.DI_RWP_W73B;
  DI_RWP_W54 = VITALDEPOT_DW.DI_RWP_W54;
  DI_RWP_W13B_73A = VITALDEPOT_DW.DI_RWP_W13B_73A;
  DI_RWP_W13A = VITALDEPOT_DW.DI_RWP_W13A;
  DI_NWP_W73B = VITALDEPOT_DW.DI_NWP_W73B;
  DI_NWP_W54 = VITALDEPOT_DW.DI_NWP_W54;
  DI_NWP_W13B_73A = VITALDEPOT_DW.DI_NWP_W13B_73A;
  DI_NWP_W13A = VITALDEPOT_DW.DI_NWP_W13A;
  DI_TPR_74 = VITALDEPOT_DW.DI_TPR_74;
  DI_TPR_73B = VITALDEPOT_DW.DI_TPR_73B;
  DI_TPR_73A = VITALDEPOT_DW.DI_TPR_73A;
  DI_TPR_72 = VITALDEPOT_DW.DI_TPR_72;
  DI_TPR_54 = VITALDEPOT_DW.DI_TPR_54;
  DI_TPR_34 = VITALDEPOT_DW.DI_TPR_34;
  DI_TPR_32 = VITALDEPOT_DW.DI_TPR_32;
  DI_TPR_14 = VITALDEPOT_DW.DI_TPR_14;
  DI_TPR_13 = VITALDEPOT_DW.DI_TPR_13;
  DI_TPR_12 = VITALDEPOT_DW.DI_TPR_12;
  DI_VDR = VITALDEPOT_DW.DI_VDR;
  M_RS_74_72 = VITALDEPOT_DW.M_RS_74_72;
  M_RS_72_74 = VITALDEPOT_DW.M_RS_72_74;
  M_RS_72_54 = VITALDEPOT_DW.M_RS_72_54;
  M_RS_72_34 = VITALDEPOT_DW.M_RS_72_34;
  M_RS_72_14 = VITALDEPOT_DW.M_RS_72_14;
  M_RS_54_72 = VITALDEPOT_DW.M_RS_54_72;
  M_RS_34_72 = VITALDEPOT_DW.M_RS_34_72;
  M_RS_32_14 = VITALDEPOT_DW.M_RS_32_14;
  M_RS_14_72 = VITALDEPOT_DW.M_RS_14_72;
  M_RS_14_32 = VITALDEPOT_DW.M_RS_14_32;
  M_RS_14_12 = VITALDEPOT_DW.M_RS_14_12;
  M_RS_12_14 = VITALDEPOT_DW.M_RS_12_14;
  M_W73B_SWRLSPB_CTRL = VITALDEPOT_DW.M_W73B_SWRLSPB_CTRL;
  M_W54_SWRLSPB_CTRL = VITALDEPOT_DW.M_W54_SWRLSPB_CTRL;
  M_W13B_73A_SWRLSPB_CTRL = VITALDEPOT_DW.M_W13B_73A_SWRLSPB_CTRL;
  M_W13A_SWRLSPB_CTRL = VITALDEPOT_DW.M_W13A_SWRLSPB_CTRL;
  M_RRLSPB_CTRL_X74 = VITALDEPOT_DW.M_RRLSPB_CTRL_X74;
  M_RRLSPB_CTRL_X72 = VITALDEPOT_DW.M_RRLSPB_CTRL_X72;
  M_RRLSPB_CTRL_X54 = VITALDEPOT_DW.M_RRLSPB_CTRL_X54;
  M_RRLSPB_CTRL_X34 = VITALDEPOT_DW.M_RRLSPB_CTRL_X34;
  M_RRLSPB_CTRL_X32 = VITALDEPOT_DW.M_RRLSPB_CTRL_X32;
  M_RRLSPB_CTRL_X12 = VITALDEPOT_DW.M_RRLSPB_CTRL_X12;
  M_RRLSPB_CTRL_L14B = VITALDEPOT_DW.M_RRLSPB_CTRL_L14B;
  M_W73B_OOC = VITALDEPOT_DW.M_W73B_OOC;
  M_W54_OOC = VITALDEPOT_DW.M_W54_OOC;
  M_W13B_73A_OOC = VITALDEPOT_DW.M_W13B_73A_OOC;
  M_W13A_OOC = VITALDEPOT_DW.M_W13A_OOC;
  M_W73B_R_REQ = VITALDEPOT_DW.M_W73B_R_REQ;
  M_W54_R_REQ = VITALDEPOT_DW.M_W54_R_REQ;
  M_W13B_73A_R_REQ = VITALDEPOT_DW.M_W13B_73A_R_REQ;
  M_W13A_R_REQ = VITALDEPOT_DW.M_W13A_R_REQ;
  M_W73B_N_REQ = VITALDEPOT_DW.M_W73B_N_REQ;
  M_W54_N_REQ = VITALDEPOT_DW.M_W54_N_REQ;
  M_W13B_73A_N_REQ = VITALDEPOT_DW.M_W13B_73A_N_REQ;
  M_W13A_N_REQ = VITALDEPOT_DW.M_W13A_N_REQ;
  M_REQ_S_74_72 = VITALDEPOT_DW.M_REQ_S_74_72;
  M_REQ_S_72_74 = VITALDEPOT_DW.M_REQ_S_72_74;
  M_REQ_S_72_54 = VITALDEPOT_DW.M_REQ_S_72_54;
  M_REQ_S_72_34 = VITALDEPOT_DW.M_REQ_S_72_34;
  M_REQ_S_72_14 = VITALDEPOT_DW.M_REQ_S_72_14;
  M_REQ_S_54_72 = VITALDEPOT_DW.M_REQ_S_54_72;
  M_REQ_S_34_72 = VITALDEPOT_DW.M_REQ_S_34_72;
  M_REQ_S_32_14 = VITALDEPOT_DW.M_REQ_S_32_14;
  M_REQ_S_14_72 = VITALDEPOT_DW.M_REQ_S_14_72;
  M_REQ_S_14_32 = VITALDEPOT_DW.M_REQ_S_14_32;
  M_REQ_S_14_12 = VITALDEPOT_DW.M_REQ_S_14_12;
  M_REQ_S_12_14 = VITALDEPOT_DW.M_REQ_S_12_14;
  M_CHK_NV_V = VITALDEPOT_DW.M_CHK_NV_V;
  M_RR = VITALDEPOT_DW.M_RR;
  M_RRLS_L14A = VITALDEPOT_DW.M_RRLS_L14A;
  clockTickCounter_i = clockTickCounter_i_0;
  clockTickCounter = clockTickCounter_0;
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S480>/L14A-RRLS' */
    M_RRLS_L14A = rtu_FROMMAIN[2];

    /* DataStoreWrite: '<S480>/L14B-GR-DO' */
    VITALDEPOT_DW.DO_L14B_GR = rtu_FROMMAIN[0];

    /* DataStoreWrite: '<S480>/RR' */
    M_RR = rtu_FROMMAIN[1];

    /* DataStoreWrite: '<S477>/NV-V-CHK' */
    M_CHK_NV_V = *rtu_NVVCHKFROM;

    /* DataStoreWrite: '<S477>/L12-L14B-S-REQ' */
    M_REQ_S_12_14 = rtu_SREQFROM[0];

    /* DataStoreWrite: '<S477>/L14A-X12-S-REQ' */
    M_REQ_S_14_12 = rtu_SREQFROM[6];

    /* DataStoreWrite: '<S477>/L14A-X32-S-REQ' */
    M_REQ_S_14_32 = rtu_SREQFROM[7];

    /* DataStoreWrite: '<S477>/L14A-X72-S-REQ' */
    M_REQ_S_14_72 = rtu_SREQFROM[8];

    /* DataStoreWrite: '<S477>/L32-L14B-S-REQ' */
    M_REQ_S_32_14 = rtu_SREQFROM[1];

    /* DataStoreWrite: '<S477>/L34-X72-S-REQ' */
    M_REQ_S_34_72 = rtu_SREQFROM[9];

    /* DataStoreWrite: '<S477>/L54-X72-S-REQ' */
    M_REQ_S_54_72 = rtu_SREQFROM[10];

    /* DataStoreWrite: '<S477>/L72-L14B-S-REQ' */
    M_REQ_S_72_14 = rtu_SREQFROM[2];

    /* DataStoreWrite: '<S477>/L72-X34-S-REQ' */
    M_REQ_S_72_34 = rtu_SREQFROM[3];

    /* DataStoreWrite: '<S477>/L72-X54-S-REQ' */
    M_REQ_S_72_54 = rtu_SREQFROM[4];

    /* DataStoreWrite: '<S477>/L72-X74-S-REQ' */
    M_REQ_S_72_74 = rtu_SREQFROM[5];

    /* DataStoreWrite: '<S477>/L74-X72-S-REQ' */
    M_REQ_S_74_72 = rtu_SREQFROM[11];

    /* DataStoreWrite: '<S477>/W13A-N-REQ' */
    M_W13A_N_REQ = rtu_NREQFROM[0];

    /* DataStoreWrite: '<S477>/W13B//73A-N-REQ' */
    M_W13B_73A_N_REQ = rtu_NREQFROM[1];

    /* DataStoreWrite: '<S477>/W54-N-REQ' */
    M_W54_N_REQ = rtu_NREQFROM[2];

    /* DataStoreWrite: '<S477>/W73B-N-REQ' */
    M_W73B_N_REQ = rtu_NREQFROM[3];

    /* DataStoreWrite: '<S477>/W13A-R-REQ' */
    M_W13A_R_REQ = rtu_RREQFROM[0];

    /* DataStoreWrite: '<S477>/W13B//73A-R-REQ' */
    M_W13B_73A_R_REQ = rtu_RREQFROM[1];

    /* DataStoreWrite: '<S477>/W54-R-REQ' */
    M_W54_R_REQ = rtu_RREQFROM[2];

    /* DataStoreWrite: '<S477>/W73B-R-REQ' */
    M_W73B_R_REQ = rtu_RREQFROM[3];

    /* DataStoreWrite: '<S477>/W13A-OOC' */
    M_W13A_OOC = rtu_OOCFROM[0];

    /* DataStoreWrite: '<S477>/W13B//73A-OOC' */
    M_W13B_73A_OOC = rtu_OOCFROM[1];

    /* DataStoreWrite: '<S477>/W54-OOC' */
    M_W54_OOC = rtu_OOCFROM[2];

    /* DataStoreWrite: '<S477>/W73B-OOC' */
    M_W73B_OOC = rtu_OOCFROM[3];

    /* DataStoreWrite: '<S477>/L14A-RRLSPB-CTRL' */
    VITALDEPOT_DW.M_RRLSPB_CTRL_L14A = rtu_RRLSPBCTRLFROM[6];

    /* DataStoreWrite: '<S477>/L14B-RRLSPB-CTRL' */
    M_RRLSPB_CTRL_L14B = rtu_RRLSPBCTRLFROM[7];

    /* DataStoreWrite: '<S477>/X12-RRLSPB-CTRL' */
    M_RRLSPB_CTRL_X12 = rtu_RRLSPBCTRLFROM[0];

    /* DataStoreWrite: '<S477>/X32-RRLSPB-CTRL' */
    M_RRLSPB_CTRL_X32 = rtu_RRLSPBCTRLFROM[1];

    /* DataStoreWrite: '<S477>/X34-RRLSPB-CTRL' */
    M_RRLSPB_CTRL_X34 = rtu_RRLSPBCTRLFROM[3];

    /* DataStoreWrite: '<S477>/X54-RRLSPB-CTRL' */
    M_RRLSPB_CTRL_X54 = rtu_RRLSPBCTRLFROM[4];

    /* DataStoreWrite: '<S477>/X72-RRLSPB-CTRL' */
    M_RRLSPB_CTRL_X72 = rtu_RRLSPBCTRLFROM[2];

    /* DataStoreWrite: '<S477>/X74-RRLSPB-CTRL' */
    M_RRLSPB_CTRL_X74 = rtu_RRLSPBCTRLFROM[5];

    /* DataStoreWrite: '<S477>/W13A-SWRLSPB-CTRL' */
    M_W13A_SWRLSPB_CTRL = rtu_SWRLSPBCTRLFROM[0];

    /* DataStoreWrite: '<S477>/W13B//73A-SWRLSPB-CTRL' */
    M_W13B_73A_SWRLSPB_CTRL = rtu_SWRLSPBCTRLFROM[1];

    /* DataStoreWrite: '<S477>/W54-SWRLSPB-CTRL' */
    M_W54_SWRLSPB_CTRL = rtu_SWRLSPBCTRLFROM[2];

    /* DataStoreWrite: '<S477>/W73B-SWRLSPB-CTRL' */
    M_W73B_SWRLSPB_CTRL = rtu_SWRLSPBCTRLFROM[3];

    /* DataStoreWrite: '<S477>/L12-L14B-RS' */
    M_RS_12_14 = rtu_DEPVARFROM[0];

    /* DataStoreWrite: '<S477>/L14A-X12-RS' */
    M_RS_14_12 = rtu_DEPVARFROM[6];

    /* DataStoreWrite: '<S477>/L14A-X32-RS' */
    M_RS_14_32 = rtu_DEPVARFROM[7];

    /* DataStoreWrite: '<S477>/L14A-X72-RS' */
    M_RS_14_72 = rtu_DEPVARFROM[8];

    /* DataStoreWrite: '<S477>/L32-L14B-RS' */
    M_RS_32_14 = rtu_DEPVARFROM[1];

    /* DataStoreWrite: '<S477>/L34-X72-RS' */
    M_RS_34_72 = rtu_DEPVARFROM[9];

    /* DataStoreWrite: '<S477>/L54-X72-RS' */
    M_RS_54_72 = rtu_DEPVARFROM[10];

    /* DataStoreWrite: '<S477>/L72-L14B-RS' */
    M_RS_72_14 = rtu_DEPVARFROM[2];

    /* DataStoreWrite: '<S477>/L72-L34B-RS' */
    M_RS_72_34 = rtu_DEPVARFROM[3];

    /* DataStoreWrite: '<S477>/L72-L54B-RS' */
    M_RS_72_54 = rtu_DEPVARFROM[4];

    /* DataStoreWrite: '<S477>/L72-L74B-RS' */
    M_RS_72_74 = rtu_DEPVARFROM[5];

    /* DataStoreWrite: '<S477>/L74-X72-RS' */
    M_RS_74_72 = rtu_DEPVARFROM[11];

    /* DataStoreWrite: '<S481>/L12-RST' */
    VITALDEPOT_DW.M_RST_L12 = rtu_RSTFROM[0];

    /* DataStoreWrite: '<S481>/L14A-RST' */
    VITALDEPOT_DW.M_RST_L14A = rtu_RSTFROM[6];

    /* DataStoreWrite: '<S481>/L32-RST' */
    VITALDEPOT_DW.M_RST_L32 = rtu_RSTFROM[1];

    /* DataStoreWrite: '<S481>/L34-RST' */
    VITALDEPOT_DW.M_RST_L34 = rtu_RSTFROM[3];

    /* DataStoreWrite: '<S481>/L54-RST' */
    VITALDEPOT_DW.M_RST_L54 = rtu_RSTFROM[4];

    /* DataStoreWrite: '<S481>/L72-RST' */
    VITALDEPOT_DW.M_RST_L72 = rtu_RSTFROM[2];

    /* DataStoreWrite: '<S481>/L74-RST' */
    VITALDEPOT_DW.M_RST_L74 = rtu_RSTFROM[5];

    /* DataStoreWrite: '<S475>/VDR' */
    DI_VDR = *rtu_VDRDI;

    /* DataStoreWrite: '<S475>/12-TPR-DI' */
    DI_TPR_12 = rtu_TPRDI[0];

    /* DataStoreWrite: '<S475>/13-TPR-DI' */
    DI_TPR_13 = rtu_TPRDI[1];

    /* DataStoreWrite: '<S475>/14-TPR-DI' */
    DI_TPR_14 = rtu_TPRDI[2];

    /* DataStoreWrite: '<S475>/32-TPR-DI' */
    DI_TPR_32 = rtu_TPRDI[3];

    /* DataStoreWrite: '<S475>/34-TPR-DI' */
    DI_TPR_34 = rtu_TPRDI[4];

    /* DataStoreWrite: '<S475>/54-TPR-DI' */
    DI_TPR_54 = rtu_TPRDI[5];

    /* DataStoreWrite: '<S475>/72-TPR-DI' */
    DI_TPR_72 = rtu_TPRDI[6];

    /* DataStoreWrite: '<S475>/73A-TPR-DI' */
    DI_TPR_73A = rtu_TPRDI[7];

    /* DataStoreWrite: '<S475>/73B-TPR-DI' */
    DI_TPR_73B = rtu_TPRDI[8];

    /* DataStoreWrite: '<S475>/74-TPR-DI' */
    DI_TPR_74 = rtu_TPRDI[9];

    /* DataStoreWrite: '<S475>/W13A-NWP-DI' */
    DI_NWP_W13A = rtu_NWPDI[0];

    /* DataStoreWrite: '<S475>/W13B//73A-NWP-DI' */
    DI_NWP_W13B_73A = rtu_NWPDI[1];

    /* DataStoreWrite: '<S475>/W54-NWP-DI' */
    DI_NWP_W54 = rtu_NWPDI[2];

    /* DataStoreWrite: '<S475>/W73B-NWP-DI' */
    DI_NWP_W73B = rtu_NWPDI[3];

    /* DataStoreWrite: '<S475>/W13A-RWP-DI' */
    DI_RWP_W13A = rtu_RWPDI[0];

    /* DataStoreWrite: '<S475>/W13B//73A-RWP-DI' */
    DI_RWP_W13B_73A = rtu_RWPDI[1];

    /* DataStoreWrite: '<S475>/W54-RWP-DI' */
    DI_RWP_W54 = rtu_RWPDI[2];

    /* DataStoreWrite: '<S475>/W73B-RWP-DI' */
    DI_RWP_W73B = rtu_RWPDI[3];

    /* DataStoreWrite: '<S482>/COMM1-DI' */
    DI_COMM_1 = rtu_SYSTEMFROM[2];

    /* DataStoreWrite: '<S482>/COMM2-DI' */
    DI_COMM_2 = rtu_SYSTEMFROM[3];

    /* DataStoreWrite: '<S482>/SYSTEM1-DI' */
    DI_SYS_1 = rtu_SYSTEMFROM[0];

    /* DataStoreWrite: '<S482>/SYSTEM2-DI' */
    DI_SYS_2 = rtu_SYSTEMFROM[1];

    /* DataStoreRead: '<S478>/14-TP' */
    rtb_u4TP_l = M_TP_14;

    /* DataStoreRead: '<S478>/14A-RRLSPB-CTRL' incorporates:
     *  DataStoreWrite: '<S477>/L14A-RRLSPB-CTRL'
     */
    rtb_u4ARRLSPBCTRL = rtu_RRLSPBCTRLFROM[6];

    /* DataStoreRead: '<S479>/VDR-DI' incorporates:
     *  DataStoreWrite: '<S475>/VDR'
     */
    *rty_VDRDITO = *rtu_VDRDI;

    /* DataStoreRead: '<S479>/V-NV-CHK' */
    *rty_VNVCHKTO = M_CHK_V_NV;

    /* DataStoreRead: '<S479>/12-TP' */
    rtb_u2TP_d = M_TP_12;

    /* DataStoreRead: '<S479>/13-TP' */
    rtb_u3TP_kg = M_TP_13;

    /* DataStoreRead: '<S479>/32-TP' */
    rtb_u2TP_o = M_TP_32;

    /* DataStoreRead: '<S479>/34-TP' */
    rtb_u4TP_np = M_TP_34;

    /* DataStoreRead: '<S479>/54-TP' */
    rtb_u4TP_b = M_TP_54;

    /* DataStoreRead: '<S479>/72-TP' */
    rtb_u2TP_i = M_TP_72;

    /* DataStoreRead: '<S479>/73A-TP' */
    rtb_u3ATP_p = M_TP_73A;

    /* DataStoreRead: '<S479>/73B-TP' */
    rtb_u3BTP_jy = M_TP_73B;

    /* DataStoreRead: '<S479>/74-TP' */
    rtb_u4TP_eu = M_TP_74;

    /* DataStoreRead: '<S479>/13-S-ES' */
    rtb_u3SES_f = M_S_ES_13;

    /* DataStoreRead: '<S479>/73A-S-ES' */
    rtb_u3ASES_e = M_S_ES_73A;

    /* DataStoreRead: '<S479>/73B-S-ES' */
    rtb_u3BSES_j = M_S_ES_73B;

    /* DataStoreRead: '<S479>/13-S-WS' */
    rtb_u3SWS_l = M_S_WS_13;

    /* DataStoreRead: '<S479>/73A-S-WS' */
    rtb_u3ASWS_b = M_S_WS_73A;

    /* DataStoreRead: '<S479>/73B-S-WS' */
    rtb_u3BSWS_f = M_S_WS_73B;

    /* DataStoreRead: '<S479>/W13A-NWC' */
    rtb_W13ANWC_k = M_W13A_NWC;

    /* DataStoreRead: '<S479>/W13B//73A-NWC' */
    rtb_W13B73ANWC_cl = M_W13B_73A_NWC;

    /* DataStoreRead: '<S479>/W54-NWC' */
    rtb_W54NWC_g = M_W54_NWC;

    /* DataStoreRead: '<S479>/W73B-NWC' */
    rtb_W73BNWC_c = M_W73B_NWC;

    /* DataStoreRead: '<S479>/W13A-NWP' */
    rtb_W13ANWP = M_W13A_NWP;

    /* DataStoreRead: '<S479>/W13B//73A-NWP' */
    rtb_W13B73ANWP = M_W13B_73A_NWP;

    /* DataStoreRead: '<S479>/W54-NWP' */
    rtb_W54NWP = M_W54_NWP;

    /* DataStoreRead: '<S479>/W73B-NWP' */
    rtb_W73BNWP = M_W73B_NWP;

    /* DataStoreRead: '<S479>/W13A-NWZ' */
    rtb_W13ANWZ_g = M_W13A_NWZ;

    /* DataStoreRead: '<S479>/W13B//73A-NWZ' */
    rtb_W13B73ANWZ_o = M_W13B_73A_NWZ;

    /* DataStoreRead: '<S479>/W54-NWZ' */
    rtb_W54NWZ_a = M_W54_NWZ;

    /* DataStoreRead: '<S479>/W73B-NWZ' */
    rtb_W73BNWZ_f = M_W73B_NWZ;

    /* DataStoreRead: '<S479>/W13A-NW-TE' */
    rtb_W13ANWTE = M_W13A_NW_TE;

    /* DataStoreRead: '<S479>/W13B//73A-NW-TE' */
    rtb_W13B73ANWTE = M_W13B_73A_NW_TE;

    /* DataStoreRead: '<S479>/W54-NW-TE' */
    rtb_W54NWTE = M_W54_NW_TE;

    /* DataStoreRead: '<S479>/W73B-NW-TE' */
    rtb_W73BNWTE = M_W73B_NW_TE;

    /* DataStoreRead: '<S479>/W13A-RWC' */
    rtb_W13ARWC_dj = M_W13A_RWC;

    /* DataStoreRead: '<S479>/W13B//73A-RWC' */
    rtb_W13B73ARWC_l = M_W13B_73A_RWC;

    /* DataStoreRead: '<S479>/W54-RWC' */
    rtb_W54RWC_k = M_W54_RWC;

    /* DataStoreRead: '<S479>/W73B-RWC' */
    rtb_W73BRWC_jj = M_W73B_RWC;

    /* DataStoreRead: '<S479>/W13A-RWP' */
    rtb_W13ARWP = M_W13A_RWP;

    /* DataStoreRead: '<S479>/W13B//73A-RWP' */
    rtb_W13B73ARWP = M_W13B_73A_RWP;

    /* DataStoreRead: '<S479>/W54-RWP' */
    rtb_W54RWP = M_W54_RWP;

    /* DataStoreRead: '<S479>/W73B-RWP' */
    rtb_W73BRWP = M_W73B_RWP;

    /* DataStoreRead: '<S479>/W13A-RWZ' */
    rtb_W13ARWZ_k = M_W13A_RWZ;

    /* DataStoreRead: '<S479>/W13B//73A-RWZ' */
    rtb_W13B73ARWZ_b = M_W13B_73A_RWZ;

    /* DataStoreRead: '<S479>/W54-RWZ' */
    rtb_W54RWZ_m = M_W54_RWZ;

    /* DataStoreRead: '<S479>/W73B-RWZ' */
    rtb_W73BRWZ_p = M_W73B_RWZ;

    /* DataStoreRead: '<S479>/W13A-RW-TE' */
    rtb_W13ARWTE = M_W13A_RW_TE;

    /* DataStoreRead: '<S479>/W13B//73A-RW-TE' */
    rtb_W13B73ARWTE = M_W13B_73A_RW_TE;

    /* DataStoreRead: '<S479>/W54-RW-TE' */
    rtb_W54RWTE = M_W54_RW_TE;

    /* DataStoreRead: '<S479>/W73B-RW-TE' */
    rtb_W73BRWTE = M_W73B_RW_TE;

    /* DataStoreRead: '<S479>/W13A-L' */
    rtb_W13AL = M_W13A_L;

    /* DataStoreRead: '<S479>/W13B//73A-L' */
    rtb_W13B73AL = M_W13B_73A_L;

    /* DataStoreRead: '<S479>/W54-L' */
    rtb_W54L = M_W54_L;

    /* DataStoreRead: '<S479>/W73B-L' */
    rtb_W73BL = M_W73B_L;

    /* DataStoreRead: '<S479>/W13A-LS' */
    rtb_W13ALS = M_W13A_LS;

    /* DataStoreRead: '<S479>/W13B//73A-LS' */
    rtb_W13B73ALS = M_W13B_73A_LS;

    /* DataStoreRead: '<S479>/W54-LS' */
    rtb_W54LS = M_W54_LS;

    /* DataStoreRead: '<S479>/W73B-LS' */
    rtb_W73BLS = M_W73B_LS;

    /* DataStoreRead: '<S479>/W13A-SWRLS' */
    rtb_W13ASWRLS_p = M_W13A_SWRLS;

    /* DataStoreRead: '<S479>/W13B//73A-SWRLS' */
    rtb_W13B73ASWRLS = M_W13B_73A_SWRLS;

    /* DataStoreRead: '<S479>/W54-SWRLS' */
    rtb_W54SWRLS_o = M_W54_SWRLS;

    /* DataStoreRead: '<S479>/W73B-SWRLS' */
    rtb_W73BSWRLS_i = M_W73B_SWRLS;

    /* DataStoreRead: '<S479>/W13A-TPZ' */
    rtb_W13ATPZ_e = M_W13A_TPZ;

    /* DataStoreRead: '<S479>/W13B//73A-TPZ' */
    rtb_W13B73ATPZ_bt = M_W13B_73A_TPZ;

    /* DataStoreRead: '<S479>/W54-TPZ' */
    rtb_W54TPZ_in = M_W54_TPZ;

    /* DataStoreRead: '<S479>/W73B-TPZ' */
    rtb_W73BTPZ_e = M_W73B_TPZ;

    /* DataStoreRead: '<S479>/L12-GR-DO' */
    rtb_L12GRDO_m = DO_L12_GR;

    /* DataStoreRead: '<S479>/L14A-GR-DO' */
    rtb_L14AGRDO_e = DO_L14A_GR;

    /* DataStoreRead: '<S479>/L14B-GR-DO' incorporates:
     *  DataStoreWrite: '<S480>/L14B-GR-DO'
     */
    rtb_L14BGRDO = rtu_FROMMAIN[0];

    /* DataStoreRead: '<S479>/L32-GR-DO' */
    rtb_L32GRDO_ld = DO_L32_GR;

    /* DataStoreRead: '<S479>/L34-GR-DO' */
    rtb_L34GRDO_e = DO_L34_GR;

    /* DataStoreRead: '<S479>/L54-GR-DO' */
    rtb_L54GRDO_i = DO_L54_GR;

    /* DataStoreRead: '<S479>/L72-GR-DO' */
    rtb_L72GRDO_io = DO_L72_GR;

    /* DataStoreRead: '<S479>/L74-GR-DO' */
    rtb_L74GRDO_ai = DO_L74_GR;

    /* DataStoreRead: '<S479>/L12-S-AS' */
    rtb_L12SAS_j = M_AS_S_L12;

    /* DataStoreRead: '<S479>/L14A-S-AS' */
    rtb_L14ASAS_m = M_AS_S_L14A;

    /* DataStoreRead: '<S479>/L32-S-AS' */
    rtb_L32SAS_o = M_AS_S_L32;

    /* DataStoreRead: '<S479>/L34-S-AS' */
    rtb_L34SAS_n = M_AS_S_L34;

    /* DataStoreRead: '<S479>/L54-S-AS' */
    rtb_L54SAS_o = M_AS_S_L54;

    /* DataStoreRead: '<S479>/L72-S-AS' */
    rtb_L72SAS_p = M_AS_S_L72;

    /* DataStoreRead: '<S479>/L74-S-AS' */
    rtb_L74SAS_e = M_AS_S_L74;

    /* DataStoreRead: '<S479>/L14A-RRLS' incorporates:
     *  DataStoreWrite: '<S480>/L14A-RRLS'
     */
    rtb_L14ARRLS_f = rtu_FROMMAIN[2];

    /* DataStoreRead: '<S479>/L14B-RRLS' */
    rtb_L14BRRLS_g = M_RRLS_L14B;

    /* DataStoreRead: '<S479>/X12-RRLS' */
    rtb_X12RRLS_a = M_RRLS_X12;

    /* DataStoreRead: '<S479>/X32-RRLS' */
    rtb_X32RRLS_l = M_RRLS_X32;

    /* DataStoreRead: '<S479>/X34-RRLS' */
    rtb_X34RRLS_e = M_RRLS_X34;

    /* DataStoreRead: '<S479>/X54-RRLS' */
    rtb_X54RRLS_n = M_RRLS_X54;

    /* DataStoreRead: '<S479>/X72-RRLS' */
    rtb_X72RRLS_f = M_RRLS_X72;

    /* DataStoreRead: '<S479>/X74-RRLS' */
    rtb_X74RRLS_a = M_RRLS_X74;

    /* DataStoreRead: '<S476>/VDR' */
    *rty_VDRDO = DO_VDR;

    /* DataStoreRead: '<S476>/L14B-GR-DO' incorporates:
     *  DataStoreWrite: '<S480>/L14B-GR-DO'
     */
    rtb_L14BGRDO_n = rtu_FROMMAIN[0];

    /* DataStoreRead: '<S476>/W13A-NWR-DO' */
    rtb_W13ANWRDO = DO_NWR_W13A;

    /* DataStoreRead: '<S476>/W13B//73A-NWR-DO' */
    rtb_W13B73ANWRDO = DO_NWR_W13B_73A;

    /* DataStoreRead: '<S476>/W54-NWR-DO' */
    rtb_W54NWRDO = DO_NWR_W54;

    /* DataStoreRead: '<S476>/W73B-NWR-DO' */
    rtb_W73BNWRDO = DO_NWR_W73B;

    /* DataStoreRead: '<S476>/W13A-RWR-DO' */
    rtb_W13ARWRDO = DO_RWR_W13A;

    /* DataStoreRead: '<S476>/W13B//73A-RWR-DO' */
    rtb_W13B73ARWRDO = DO_RWR_W13B_73A;

    /* DataStoreRead: '<S476>/W54-RWR-DO' */
    rtb_W54RWRDO = DO_RWR_W54;

    /* DataStoreRead: '<S476>/W73B-RWR-DO' */
    rtb_W73BRWRDO = DO_RWR_W73B;

    /* DataStoreRead: '<S476>/W13A-WLPR-DO' */
    rtb_W13AWLPRDO = DO_WLPR_W13A;

    /* DataStoreRead: '<S476>/W13B//73A-WLPR-DO' */
    rtb_W13B73AWLPRDO = DO_WLPR_W13B_73A;

    /* DataStoreRead: '<S476>/W54-WLPR-DO' */
    rtb_W54WLPRDO = DO_WLPR_W54;

    /* DataStoreRead: '<S476>/W73B-WLPR-DO' */
    rtb_W73BWLPRDO = DO_WLPR_W73B;

    /* DataStoreRead: '<S15>/L12-GR-DO' */
    rtb_L12GRDO = DO_L12_GR;

    /* DataStoreRead: '<S15>/12-TP' */
    rtb_u2TP = M_TP_12;

    /* DataStoreRead: '<S15>/13-TP' */
    rtb_u3TP = M_TP_13;

    /* DataStoreRead: '<S15>/RR' incorporates:
     *  DataStoreWrite: '<S480>/RR'
     */
    rtb_RR = rtu_FROMMAIN[1];

    /* DataStoreRead: '<S15>/VDR' incorporates:
     *  DataStoreWrite: '<S475>/VDR'
     */
    rtb_VDR_e = *rtu_VDRDI;
  }

  /* Outputs for Atomic SubSystem: '<S15>/APPROACH LOCK' */
  D_AS(VITALDEPOT_M, rtb_L12GRDO, rtb_u2TP, rtb_u3TP, rtb_RR, rtb_VDR_e,
       &VITALDEPOT_DW.APPROACHLOCK);

  /* End of Outputs for SubSystem: '<S15>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S15>/L12-S-AS' */
    M_AS_S_L12 = VITALDEPOT_DW.APPROACHLOCK.AND4;

    /* DataStoreRead: '<S16>/L14A-GR-DO' */
    rtb_L14AGRDO = DO_L14A_GR;

    /* DataStoreRead: '<S16>/14-TP' */
    rtb_u4TP = M_TP_14;

    /* DataStoreRead: '<S16>/13-TP' */
    rtb_u3TP_a = M_TP_13;

    /* DataStoreRead: '<S16>/RR' */
    rtb_RR_k = M_RR;

    /* DataStoreRead: '<S16>/VDR' */
    rtb_VDR_i = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S16>/APPROACH LOCK' */
  D_AS(VITALDEPOT_M, rtb_L14AGRDO, rtb_u4TP, rtb_u3TP_a, rtb_RR_k, rtb_VDR_i,
       &VITALDEPOT_DW.APPROACHLOCK_f);

  /* End of Outputs for SubSystem: '<S16>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S16>/L14A-S-AS' */
    M_AS_S_L14A = VITALDEPOT_DW.APPROACHLOCK_f.AND4;

    /* DataStoreRead: '<S17>/L32-GR-DO' */
    rtb_L32GRDO = DO_L32_GR;

    /* DataStoreRead: '<S17>/32-TP' */
    rtb_u2TP_h = M_TP_32;

    /* DataStoreRead: '<S17>/13-TP' */
    rtb_u3TP_e = M_TP_13;

    /* DataStoreRead: '<S17>/RR' */
    rtb_RR_g = M_RR;

    /* DataStoreRead: '<S17>/VDR' */
    rtb_VDR_f = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S17>/APPROACH LOCK' */
  D_AS(VITALDEPOT_M, rtb_L32GRDO, rtb_u2TP_h, rtb_u3TP_e, rtb_RR_g, rtb_VDR_f,
       &VITALDEPOT_DW.APPROACHLOCK_h);

  /* End of Outputs for SubSystem: '<S17>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S17>/L32-S-AS' */
    M_AS_S_L32 = VITALDEPOT_DW.APPROACHLOCK_h.AND4;

    /* DataStoreRead: '<S18>/L34-GR-DO' */
    rtb_L34GRDO = DO_L34_GR;

    /* DataStoreRead: '<S18>/34-TP' */
    rtb_u4TP_k = M_TP_34;

    /* DataStoreRead: '<S18>/73B-TP' */
    rtb_u3BTP = M_TP_73B;

    /* DataStoreRead: '<S18>/RR' */
    rtb_RR_f = M_RR;

    /* DataStoreRead: '<S18>/VDR' */
    rtb_VDR_d = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S18>/APPROACH LOCK' */
  D_AS(VITALDEPOT_M, rtb_L34GRDO, rtb_u4TP_k, rtb_u3BTP, rtb_RR_f, rtb_VDR_d,
       &VITALDEPOT_DW.APPROACHLOCK_e);

  /* End of Outputs for SubSystem: '<S18>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S18>/L34-S-AS' */
    M_AS_S_L34 = VITALDEPOT_DW.APPROACHLOCK_e.AND4;

    /* DataStoreRead: '<S19>/L54-GR-DO' */
    rtb_L54GRDO = DO_L54_GR;

    /* DataStoreRead: '<S19>/54-TP' */
    rtb_u4TP_n = M_TP_54;

    /* DataStoreRead: '<S19>/73B-TP' */
    rtb_u3BTP_i = M_TP_73B;

    /* DataStoreRead: '<S19>/RR' */
    rtb_RR_a = M_RR;

    /* DataStoreRead: '<S19>/VDR' */
    rtb_VDR_c = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S19>/APPROACH LOCK' */
  D_AS(VITALDEPOT_M, rtb_L54GRDO, rtb_u4TP_n, rtb_u3BTP_i, rtb_RR_a, rtb_VDR_c,
       &VITALDEPOT_DW.APPROACHLOCK_o);

  /* End of Outputs for SubSystem: '<S19>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S19>/L54-S-AS' */
    M_AS_S_L54 = VITALDEPOT_DW.APPROACHLOCK_o.AND4;

    /* DataStoreRead: '<S20>/L72-GR-DO' */
    rtb_L72GRDO = DO_L72_GR;

    /* DataStoreRead: '<S20>/72-TP' */
    rtb_u2TP_hs = M_TP_72;

    /* DataStoreRead: '<S20>/73A-TP' */
    rtb_u3ATP = M_TP_73A;

    /* DataStoreRead: '<S20>/RR' */
    rtb_RR_o = M_RR;

    /* DataStoreRead: '<S20>/VDR' */
    rtb_VDR_a = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S20>/APPROACH LOCK' */
  D_AS(VITALDEPOT_M, rtb_L72GRDO, rtb_u2TP_hs, rtb_u3ATP, rtb_RR_o, rtb_VDR_a,
       &VITALDEPOT_DW.APPROACHLOCK_ou);

  /* End of Outputs for SubSystem: '<S20>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S20>/L72-S-AS' */
    M_AS_S_L72 = VITALDEPOT_DW.APPROACHLOCK_ou.AND4;

    /* DataStoreRead: '<S21>/L74-GR-DO' */
    rtb_L74GRDO = DO_L74_GR;

    /* DataStoreRead: '<S21>/74-TP' */
    rtb_u4TP_g = M_TP_74;

    /* DataStoreRead: '<S21>/73B-TP' */
    rtb_u3BTP_l = M_TP_73B;

    /* DataStoreRead: '<S21>/RR' */
    rtb_RR_j = M_RR;

    /* DataStoreRead: '<S21>/VDR' */
    rtb_VDR_fa = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S21>/APPROACH LOCK' */
  D_AS(VITALDEPOT_M, rtb_L74GRDO, rtb_u4TP_g, rtb_u3BTP_l, rtb_RR_j, rtb_VDR_fa,
       &VITALDEPOT_DW.APPROACHLOCK_a);

  /* End of Outputs for SubSystem: '<S21>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S21>/L74-S-AS' */
    M_AS_S_L74 = VITALDEPOT_DW.APPROACHLOCK_a.AND4;

    /* DataStoreRead: '<S64>/W13A-SWRLSPB-CTRL' */
    rtb_W13ASWRLSPBCTRL = M_W13A_SWRLSPB_CTRL;

    /* Logic: '<S64>/AND1' */
    rtb_AND1 = (M_S_ES_13 && M_S_WS_13);

    /* DataStoreRead: '<S64>/13-TP' */
    rtb_u3TP_j = M_TP_13;

    /* DataStoreRead: '<S64>/SWRLS' */
    rtb_SWRLS = M_SWRLS;

    /* DataStoreRead: '<S64>/VDR' */
    rtb_VDR_er = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S64>/EMERGENCY POINT RELEASE' */
  D_SWRLS(VITALDEPOT_M, rtb_W13ASWRLSPBCTRL, rtb_AND1, rtb_u3TP_j, rtb_SWRLS,
          rtb_VDR_er, &VITALDEPOT_DW.EMERGENCYPOINTRELEASE);

  /* End of Outputs for SubSystem: '<S64>/EMERGENCY POINT RELEASE' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S64>/W13A-SWRLS' */
    M_W13A_SWRLS = VITALDEPOT_DW.EMERGENCYPOINTRELEASE.AND5;

    /* DataStoreWrite: '<S64>/W13A-TPZ' */
    M_W13A_TPZ = VITALDEPOT_DW.EMERGENCYPOINTRELEASE.OR3;

    /* DataStoreRead: '<S65>/W13B//73A-SWRLSPB-CTRL' */
    rtb_W13B73ASWRLSPBCTRL = M_W13B_73A_SWRLSPB_CTRL;

    /* Logic: '<S65>/AND1' */
    rtb_AND1_d = (M_S_ES_13 && M_S_WS_13 && M_S_ES_73A && M_S_WS_73A);

    /* Logic: '<S65>/AND2' */
    rtb_AND2 = (M_TP_13 && M_TP_73A);

    /* DataStoreRead: '<S65>/SWRLS' */
    rtb_SWRLS_c = M_SWRLS;

    /* DataStoreRead: '<S65>/VDR' */
    rtb_VDR_cf = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S65>/EMERGENCY POINT RELEASE' */
  D_SWRLS(VITALDEPOT_M, rtb_W13B73ASWRLSPBCTRL, rtb_AND1_d, rtb_AND2,
          rtb_SWRLS_c, rtb_VDR_cf, &VITALDEPOT_DW.EMERGENCYPOINTRELEASE_l);

  /* End of Outputs for SubSystem: '<S65>/EMERGENCY POINT RELEASE' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S65>/W13B//73A-SWRLS' */
    M_W13B_73A_SWRLS = VITALDEPOT_DW.EMERGENCYPOINTRELEASE_l.AND5;

    /* DataStoreWrite: '<S65>/W13B//73A-TPZ' */
    M_W13B_73A_TPZ = VITALDEPOT_DW.EMERGENCYPOINTRELEASE_l.OR3;

    /* DataStoreRead: '<S66>/W54-SWRLSPB-CTRL' */
    rtb_W54SWRLSPBCTRL = M_W54_SWRLSPB_CTRL;

    /* Logic: '<S66>/AND1' */
    rtb_AND1_e = (M_S_ES_73B && M_S_WS_73B);

    /* DataStoreRead: '<S66>/73B-TP' */
    rtb_u3BTP_m = M_TP_73B;

    /* DataStoreRead: '<S66>/SWRLS' */
    rtb_SWRLS_j = M_SWRLS;

    /* DataStoreRead: '<S66>/VDR' */
    rtb_VDR_j = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S66>/EMERGENCY POINT RELEASE' */
  D_SWRLS(VITALDEPOT_M, rtb_W54SWRLSPBCTRL, rtb_AND1_e, rtb_u3BTP_m, rtb_SWRLS_j,
          rtb_VDR_j, &VITALDEPOT_DW.EMERGENCYPOINTRELEASE_p);

  /* End of Outputs for SubSystem: '<S66>/EMERGENCY POINT RELEASE' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S66>/W54-SWRLS' */
    M_W54_SWRLS = VITALDEPOT_DW.EMERGENCYPOINTRELEASE_p.AND5;

    /* DataStoreWrite: '<S66>/W54-TPZ' */
    M_W54_TPZ = VITALDEPOT_DW.EMERGENCYPOINTRELEASE_p.OR3;

    /* DataStoreRead: '<S67>/W73B-SWRLSPB-CTRL' */
    rtb_W73BSWRLSPBCTRL = M_W73B_SWRLSPB_CTRL;

    /* Logic: '<S67>/AND1' */
    rtb_AND1_g = (M_S_ES_73B && M_S_WS_73B);

    /* DataStoreRead: '<S67>/73B-TP' */
    rtb_u3BTP_o = M_TP_73B;

    /* DataStoreRead: '<S67>/SWRLS' */
    rtb_SWRLS_k = M_SWRLS;

    /* DataStoreRead: '<S67>/VDR' */
    rtb_VDR_h = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S67>/EMERGENCY POINT RELEASE' */
  D_SWRLS(VITALDEPOT_M, rtb_W73BSWRLSPBCTRL, rtb_AND1_g, rtb_u3BTP_o,
          rtb_SWRLS_k, rtb_VDR_h, &VITALDEPOT_DW.EMERGENCYPOINTRELEASE_b);

  /* End of Outputs for SubSystem: '<S67>/EMERGENCY POINT RELEASE' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S67>/W73B-SWRLS' */
    M_W73B_SWRLS = VITALDEPOT_DW.EMERGENCYPOINTRELEASE_b.AND5;

    /* DataStoreWrite: '<S67>/W73B-TPZ' */
    M_W73B_TPZ = VITALDEPOT_DW.EMERGENCYPOINTRELEASE_b.OR3;

    /* Logic: '<S112>/AND1' */
    rtb_AND1_gm = (M_AS_S_L12 && M_AS_S_L32 && M_AS_S_L72);

    /* Logic: '<S112>/AND2' */
    rtb_AND2_m = (M_REQ_S_12_14 || M_REQ_S_32_14 || M_REQ_S_72_14);

    /* DataStoreRead: '<S112>/13-S-ES' */
    rtb_u3SES_i = M_S_ES_13;

    /* DataStoreRead: '<S112>/L14B-RRLSPB-CTRL' */
    rtb_L14BRRLSPBCTRL = M_RRLSPB_CTRL_L14B;

    /* DataStoreRead: '<S112>/RRLS' */
    rtb_RRLS = M_RRLS;

    /* DataStoreRead: '<S112>/VDR-DI' */
    rtb_VDRDI_b = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S112>/EMERGENCY ROUTE ' */
  D_RRLS(VITALDEPOT_M, rtb_AND1_gm, rtb_AND2_m, rtb_u3SES_i, rtb_L14BRRLSPBCTRL,
         rtb_RRLS, rtb_VDRDI_b, &VITALDEPOT_DW.EMERGENCYROUTE);

  /* End of Outputs for SubSystem: '<S112>/EMERGENCY ROUTE ' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S112>/L14B-RRLS' */
    M_RRLS_L14B = VITALDEPOT_DW.EMERGENCYROUTE.AND1;

    /* DataStoreWrite: '<S112>/L14B-RRLS-TE' */
    M_RRLSTE_L14B = VITALDEPOT_DW.EMERGENCYROUTE.Memory1;

    /* DataStoreRead: '<S113>/L14A-S-AS' */
    rtb_L14ASAS = M_AS_S_L14A;

    /* DataStoreRead: '<S113>/L14A-X12-S-REQ' */
    rtb_L14AX12SREQ = M_REQ_S_14_12;

    /* Logic: '<S113>/OR1' incorporates:
     *  Logic: '<S113>/AND4'
     */
    rtb_OR1 = (M_S_WS_13 && (M_W13A_NWZ && M_W13B_73A_NWZ));

    /* DataStoreRead: '<S113>/X12-RRLSPB-CTRL' */
    rtb_X12RRLSPBCTRL = M_RRLSPB_CTRL_X12;

    /* DataStoreRead: '<S113>/RRLS' */
    rtb_RRLS_n = M_RRLS;

    /* DataStoreRead: '<S113>/VDR-DI' */
    rtb_VDRDI_o = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S113>/EMERGENCY ROUTE ' */
  D_RRLS(VITALDEPOT_M, rtb_L14ASAS, rtb_L14AX12SREQ, rtb_OR1, rtb_X12RRLSPBCTRL,
         rtb_RRLS_n, rtb_VDRDI_o, &VITALDEPOT_DW.EMERGENCYROUTE_g);

  /* End of Outputs for SubSystem: '<S113>/EMERGENCY ROUTE ' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S113>/X12-RRLS' */
    M_RRLS_X12 = VITALDEPOT_DW.EMERGENCYROUTE_g.AND1;

    /* DataStoreWrite: '<S113>/X12-RRLS-TE' */
    M_RRLSTE_X12 = VITALDEPOT_DW.EMERGENCYROUTE_g.Memory1;

    /* DataStoreRead: '<S114>/L14A-S-AS' */
    rtb_L14ASAS_h = M_AS_S_L14A;

    /* DataStoreRead: '<S114>/L14A-X32-S-REQ' */
    rtb_L14AX32SREQ = M_REQ_S_14_32;

    /* Logic: '<S114>/OR1' incorporates:
     *  Logic: '<S114>/AND4'
     */
    rtb_OR1_f = (M_S_WS_13 && (M_W13A_RWZ && M_W13B_73A_NWZ));

    /* DataStoreRead: '<S114>/X32-RRLSPB-CTRL' */
    rtb_X32RRLSPBCTRL = M_RRLSPB_CTRL_X32;

    /* DataStoreRead: '<S114>/RRLS' */
    rtb_RRLS_o = M_RRLS;

    /* DataStoreRead: '<S114>/VDR-DI' */
    rtb_VDRDI_n = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S114>/EMERGENCY ROUTE ' */
  D_RRLS(VITALDEPOT_M, rtb_L14ASAS_h, rtb_L14AX32SREQ, rtb_OR1_f,
         rtb_X32RRLSPBCTRL, rtb_RRLS_o, rtb_VDRDI_n,
         &VITALDEPOT_DW.EMERGENCYROUTE_o);

  /* End of Outputs for SubSystem: '<S114>/EMERGENCY ROUTE ' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S114>/X32-RRLS' */
    M_RRLS_X32 = VITALDEPOT_DW.EMERGENCYROUTE_o.AND1;

    /* DataStoreWrite: '<S114>/X32-RRLS-TE' */
    M_RRLSTE_X32 = VITALDEPOT_DW.EMERGENCYROUTE_o.Memory1;

    /* DataStoreRead: '<S115>/L72-S-AS' */
    rtb_L72SAS_n = M_AS_S_L72;

    /* DataStoreRead: '<S115>/L72-X34-S-REQ' */
    rtb_L72X34SREQ = M_REQ_S_72_34;

    /* Logic: '<S115>/OR1' incorporates:
     *  Logic: '<S115>/AND4'
     */
    rtb_OR1_d = (M_S_ES_73B && (M_W54_RWZ && M_W73B_RWZ && M_W13B_73A_NWZ));

    /* DataStoreRead: '<S115>/X34-RRLSPB-CTRL' */
    rtb_X34RRLSPBCTRL = M_RRLSPB_CTRL_X34;

    /* DataStoreRead: '<S115>/RRLS' */
    rtb_RRLS_g = M_RRLS;

    /* DataStoreRead: '<S115>/VDR-DI' */
    rtb_VDRDI_j = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S115>/EMERGENCY ROUTE ' */
  D_RRLS(VITALDEPOT_M, rtb_L72SAS_n, rtb_L72X34SREQ, rtb_OR1_d,
         rtb_X34RRLSPBCTRL, rtb_RRLS_g, rtb_VDRDI_j,
         &VITALDEPOT_DW.EMERGENCYROUTE_m);

  /* End of Outputs for SubSystem: '<S115>/EMERGENCY ROUTE ' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S115>/X34-RRLS' */
    M_RRLS_X34 = VITALDEPOT_DW.EMERGENCYROUTE_m.AND1;

    /* DataStoreWrite: '<S115>/X34-RRLS-TE' */
    M_RRLSTE_X34 = VITALDEPOT_DW.EMERGENCYROUTE_m.Memory1;

    /* DataStoreRead: '<S116>/L72-S-AS' */
    rtb_L72SAS_o = M_AS_S_L72;

    /* DataStoreRead: '<S116>/L72-X54-S-REQ' */
    rtb_L72X54SREQ = M_REQ_S_72_54;

    /* Logic: '<S116>/OR1' incorporates:
     *  Logic: '<S116>/AND4'
     */
    rtb_OR1_j = (M_S_ES_73B && (M_W54_NWZ && M_W73B_RWZ && M_W13B_73A_NWZ));

    /* DataStoreRead: '<S116>/X54-RRLSPB-CTRL' */
    rtb_X54RRLSPBCTRL = M_RRLSPB_CTRL_X54;

    /* DataStoreRead: '<S116>/RRLS' */
    rtb_RRLS_f = M_RRLS;

    /* DataStoreRead: '<S116>/VDR-DI' */
    rtb_VDRDI_g = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S116>/EMERGENCY ROUTE ' */
  D_RRLS(VITALDEPOT_M, rtb_L72SAS_o, rtb_L72X54SREQ, rtb_OR1_j,
         rtb_X54RRLSPBCTRL, rtb_RRLS_f, rtb_VDRDI_g,
         &VITALDEPOT_DW.EMERGENCYROUTE_e);

  /* End of Outputs for SubSystem: '<S116>/EMERGENCY ROUTE ' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S116>/X54-RRLS' */
    M_RRLS_X54 = VITALDEPOT_DW.EMERGENCYROUTE_e.AND1;

    /* DataStoreWrite: '<S116>/X54-RRLS-TE' */
    M_RRLSTE_X54 = VITALDEPOT_DW.EMERGENCYROUTE_e.Memory1;

    /* Logic: '<S117>/AND1' */
    rtb_AND1_l = (M_AS_S_L14A && M_AS_S_L34 && M_AS_S_L54 && M_AS_S_L74);

    /* Logic: '<S117>/AND2' */
    rtb_AND2_d = (M_REQ_S_14_72 || M_REQ_S_34_72 || M_REQ_S_54_72 ||
                  M_REQ_S_74_72);

    /* DataStoreRead: '<S117>/73A-S-WS' */
    rtb_u3ASWS_c = M_S_WS_73A;

    /* DataStoreRead: '<S117>/X72-RRLSPB-CTRL' */
    rtb_X72RRLSPBCTRL = M_RRLSPB_CTRL_X72;

    /* DataStoreRead: '<S117>/RRLS' */
    rtb_RRLS_h = M_RRLS;

    /* DataStoreRead: '<S117>/VDR-DI' */
    rtb_VDRDI_np = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S117>/EMERGENCY ROUTE ' */
  D_RRLS(VITALDEPOT_M, rtb_AND1_l, rtb_AND2_d, rtb_u3ASWS_c, rtb_X72RRLSPBCTRL,
         rtb_RRLS_h, rtb_VDRDI_np, &VITALDEPOT_DW.EMERGENCYROUTE_l);

  /* End of Outputs for SubSystem: '<S117>/EMERGENCY ROUTE ' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S117>/X72-RRLS' */
    M_RRLS_X72 = VITALDEPOT_DW.EMERGENCYROUTE_l.AND1;

    /* DataStoreWrite: '<S117>/X72-RRLS-TE' */
    M_RRLSTE_X72 = VITALDEPOT_DW.EMERGENCYROUTE_l.Memory1;

    /* DataStoreRead: '<S118>/L72-S-AS' */
    rtb_L72SAS_b = M_AS_S_L72;

    /* DataStoreRead: '<S118>/L72-X74-S-REQ' */
    rtb_L72X74SREQ = M_REQ_S_72_74;

    /* Logic: '<S118>/OR1' incorporates:
     *  Logic: '<S118>/AND4'
     */
    rtb_OR1_j1 = (M_S_ES_73B && (M_W73B_NWZ && M_W13B_73A_NWZ));

    /* DataStoreRead: '<S118>/X74-RRLSPB-CTRL' */
    rtb_X74RRLSPBCTRL = M_RRLSPB_CTRL_X74;

    /* DataStoreRead: '<S118>/RRLS' */
    rtb_RRLS_j = M_RRLS;

    /* DataStoreRead: '<S118>/VDR-DI' */
    rtb_VDRDI_e = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S118>/EMERGENCY ROUTE ' */
  D_RRLS(VITALDEPOT_M, rtb_L72SAS_b, rtb_L72X74SREQ, rtb_OR1_j1,
         rtb_X74RRLSPBCTRL, rtb_RRLS_j, rtb_VDRDI_e,
         &VITALDEPOT_DW.EMERGENCYROUTE_i);

  /* End of Outputs for SubSystem: '<S118>/EMERGENCY ROUTE ' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S118>/X74-RRLS' */
    M_RRLS_X74 = VITALDEPOT_DW.EMERGENCYROUTE_i.AND1;

    /* DataStoreWrite: '<S118>/X74-RRLS-TE' */
    VITALDEPOT_DW.M_RRLSTE_X74 = VITALDEPOT_DW.EMERGENCYROUTE_i.Memory1;

    /* DataStoreRead: '<S201>/L12-L14B-S-L' */
    rtb_L12L14BSL = M_L_S_12_14;

    /* DataStoreRead: '<S201>/L12-L14B-RS' */
    rtb_L12L14BRS = M_RS_12_14;

    /* Outputs for Atomic SubSystem: '<S201>/AS_SR' */
    D_AS_SR(rtb_L12L14BSL, rtb_L12L14BRS, &VITALDEPOT_DW.AS_SR);

    /* End of Outputs for SubSystem: '<S201>/AS_SR' */

    /* DataStoreWrite: '<S201>/L12-L14B-S-AS-SR' */
    M_AS_SR_S_12_14 = VITALDEPOT_DW.AS_SR.AND1;

    /* DataStoreRead: '<S202>/L14A-X12-S-L' */
    rtb_L14AX12SL = M_L_S_14_12;

    /* DataStoreRead: '<S202>/L14A-X12-RS' */
    rtb_L14AX12RS = M_RS_14_12;

    /* Outputs for Atomic SubSystem: '<S202>/AS_SR' */
    D_AS_SR(rtb_L14AX12SL, rtb_L14AX12RS, &VITALDEPOT_DW.AS_SR_e);

    /* End of Outputs for SubSystem: '<S202>/AS_SR' */

    /* DataStoreWrite: '<S202>/L14A-X12-S-AS-SR' */
    M_AS_SR_S_14_12 = VITALDEPOT_DW.AS_SR_e.AND1;

    /* DataStoreRead: '<S203>/L14A-X32-S-L' */
    rtb_L14AX32SL = M_L_S_14_32;

    /* DataStoreRead: '<S203>/L14A-X32-RS' */
    rtb_L14AX32RS = M_RS_14_32;

    /* Outputs for Atomic SubSystem: '<S203>/AS_SR' */
    D_AS_SR(rtb_L14AX32SL, rtb_L14AX32RS, &VITALDEPOT_DW.AS_SR_d);

    /* End of Outputs for SubSystem: '<S203>/AS_SR' */

    /* DataStoreWrite: '<S203>/L14A-X32-S-AS-SR' */
    M_AS_SR_S_14_32 = VITALDEPOT_DW.AS_SR_d.AND1;

    /* DataStoreRead: '<S204>/L14A-X72-S-L' */
    rtb_L14AX72SL = M_L_S_14_72;

    /* DataStoreRead: '<S204>/L14A-X72-RS' */
    rtb_L14AX72RS = M_RS_14_72;

    /* Outputs for Atomic SubSystem: '<S204>/AS_SR' */
    D_AS_SR(rtb_L14AX72SL, rtb_L14AX72RS, &VITALDEPOT_DW.AS_SR_a);

    /* End of Outputs for SubSystem: '<S204>/AS_SR' */

    /* DataStoreWrite: '<S204>/L14A-X72-S-AS-SR' */
    M_AS_SR_S_14_72 = VITALDEPOT_DW.AS_SR_a.AND1;

    /* DataStoreRead: '<S205>/L32-L14B-S-L' */
    rtb_L32L14BSL = M_L_S_32_14;

    /* DataStoreRead: '<S205>/L32-L14B-RS' */
    rtb_L32L14BRS = M_RS_32_14;

    /* Outputs for Atomic SubSystem: '<S205>/AS_SR' */
    D_AS_SR(rtb_L32L14BSL, rtb_L32L14BRS, &VITALDEPOT_DW.AS_SR_i);

    /* End of Outputs for SubSystem: '<S205>/AS_SR' */

    /* DataStoreWrite: '<S205>/L32-L14B-S-AS-SR' */
    M_AS_SR_S_32_14 = VITALDEPOT_DW.AS_SR_i.AND1;

    /* DataStoreRead: '<S206>/L34-X72-S-L' */
    rtb_L34X72SL = M_L_S_34_72;

    /* DataStoreRead: '<S206>/L34-X72-RS' */
    rtb_L34X72RS = M_RS_34_72;

    /* Outputs for Atomic SubSystem: '<S206>/AS_SR' */
    D_AS_SR(rtb_L34X72SL, rtb_L34X72RS, &VITALDEPOT_DW.AS_SR_g);

    /* End of Outputs for SubSystem: '<S206>/AS_SR' */

    /* DataStoreWrite: '<S206>/L34-X72-S-AS-SR' */
    M_AS_SR_S_34_72 = VITALDEPOT_DW.AS_SR_g.AND1;

    /* DataStoreRead: '<S207>/L54-X72-S-L' */
    rtb_L54X72SL = M_L_S_54_72;

    /* DataStoreRead: '<S207>/L54-X72-RS' */
    rtb_L54X72RS = M_RS_54_72;

    /* Outputs for Atomic SubSystem: '<S207>/AS_SR' */
    D_AS_SR(rtb_L54X72SL, rtb_L54X72RS, &VITALDEPOT_DW.AS_SR_b);

    /* End of Outputs for SubSystem: '<S207>/AS_SR' */

    /* DataStoreWrite: '<S207>/L54-X72-S-AS-SR' */
    M_AS_SR_S_54_72 = VITALDEPOT_DW.AS_SR_b.AND1;

    /* DataStoreRead: '<S208>/L72-L14B-S-L' */
    rtb_L72L14BSL = M_L_S_72_14;

    /* DataStoreRead: '<S208>/L72-L14B-RS' */
    rtb_L72L14BRS = M_RS_72_14;

    /* Outputs for Atomic SubSystem: '<S208>/AS_SR' */
    D_AS_SR(rtb_L72L14BSL, rtb_L72L14BRS, &VITALDEPOT_DW.AS_SR_m);

    /* End of Outputs for SubSystem: '<S208>/AS_SR' */

    /* DataStoreWrite: '<S208>/L72-L14B-S-AS-SR' */
    M_AS_SR_S_72_14 = VITALDEPOT_DW.AS_SR_m.AND1;

    /* DataStoreRead: '<S209>/L72-X34-S-L' */
    rtb_L72X34SL = M_L_S_72_34;

    /* DataStoreRead: '<S209>/L72-X34-RS' */
    rtb_L72X34RS = M_RS_72_34;

    /* Outputs for Atomic SubSystem: '<S209>/AS_SR' */
    D_AS_SR(rtb_L72X34SL, rtb_L72X34RS, &VITALDEPOT_DW.AS_SR_e4);

    /* End of Outputs for SubSystem: '<S209>/AS_SR' */

    /* DataStoreWrite: '<S209>/L72-X34-S-AS-SR' */
    M_AS_SR_S_72_34 = VITALDEPOT_DW.AS_SR_e4.AND1;

    /* DataStoreRead: '<S210>/L72-X54-S-L' */
    rtb_L72X54SL = M_L_S_72_54;

    /* DataStoreRead: '<S210>/L72-X54-RS' */
    rtb_L72X54RS = M_RS_72_54;

    /* Outputs for Atomic SubSystem: '<S210>/AS_SR' */
    D_AS_SR(rtb_L72X54SL, rtb_L72X54RS, &VITALDEPOT_DW.AS_SR_f);

    /* End of Outputs for SubSystem: '<S210>/AS_SR' */

    /* DataStoreWrite: '<S210>/L72-X54-S-AS-SR' */
    M_AS_SR_S_72_54 = VITALDEPOT_DW.AS_SR_f.AND1;

    /* DataStoreRead: '<S211>/L72-X74-S-L' */
    rtb_L72X74SL = M_L_S_72_74;

    /* DataStoreRead: '<S211>/L72-X74-RS' */
    rtb_L72X74RS = M_RS_72_74;

    /* Outputs for Atomic SubSystem: '<S211>/AS_SR' */
    D_AS_SR(rtb_L72X74SL, rtb_L72X74RS, &VITALDEPOT_DW.AS_SR_ip);

    /* End of Outputs for SubSystem: '<S211>/AS_SR' */

    /* DataStoreWrite: '<S211>/L72-X74-S-AS-SR' */
    M_AS_SR_S_72_74 = VITALDEPOT_DW.AS_SR_ip.AND1;

    /* DataStoreRead: '<S212>/L74-X72-S-L' */
    rtb_L74X72SL = M_L_S_74_72;

    /* DataStoreRead: '<S212>/L74-X72-RS' */
    rtb_L74X72RS = M_RS_74_72;

    /* Outputs for Atomic SubSystem: '<S212>/AS_SR' */
    D_AS_SR(rtb_L74X72SL, rtb_L74X72RS, &VITALDEPOT_DW.AS_SR_ec);

    /* End of Outputs for SubSystem: '<S212>/AS_SR' */

    /* DataStoreWrite: '<S212>/L74-X72-S-AS-SR' */
    VITALDEPOT_DW.M_AS_SR_S_74_72 = VITALDEPOT_DW.AS_SR_ec.AND1;

    /* DataStoreWrite: '<S225>/13-S-ES-RL' incorporates:
     *  Logic: '<S225>/NOT2'
     *  Logic: '<S225>/NOT3'
     *  Logic: '<S225>/NOT5'
     *  Logic: '<S225>/NOT6'
     *  Logic: '<S225>/OR2'
     */
    M_RL_S_ES_13 = (M_AS_S_L12 && M_AS_S_L32 && (!M_R_S_12_14) && (!M_R_S_32_14)
                    && (!M_AS_SR_S_12_14) && (!M_AS_SR_S_32_14));

    /* DataStoreWrite: '<S226>/13-S-WS-RL' incorporates:
     *  Logic: '<S226>/NOT1'
     *  Logic: '<S226>/NOT2'
     *  Logic: '<S226>/NOT3'
     *  Logic: '<S226>/NOT5'
     *  Logic: '<S226>/NOT6'
     *  Logic: '<S226>/NOT7'
     *  Logic: '<S226>/OR2'
     */
    M_RL_S_WS_13 = (M_AS_S_L14A && (!M_R_S_14_12) && (!M_R_S_14_32) &&
                    (!M_R_S_14_72) && (!M_AS_SR_S_14_12) && (!M_AS_SR_S_14_32) &&
                    (!M_AS_SR_S_14_72));

    /* DataStoreWrite: '<S227>/73A-S-ES-RL' incorporates:
     *  Logic: '<S227>/NOT1'
     *  Logic: '<S227>/NOT2'
     *  Logic: '<S227>/NOT3'
     *  Logic: '<S227>/NOT4'
     *  Logic: '<S227>/NOT5'
     *  Logic: '<S227>/NOT6'
     *  Logic: '<S227>/NOT7'
     *  Logic: '<S227>/NOT8'
     *  Logic: '<S227>/OR2'
     */
    M_RL_S_ES_73A = (M_AS_S_L72 && (!M_R_S_72_14) && (!M_R_S_72_34) &&
                     (!M_R_S_72_54) && (!M_R_S_72_74) && (!M_AS_SR_S_72_14) && (
      !M_AS_SR_S_72_34) && (!M_AS_SR_S_72_54) && (!M_AS_SR_S_72_74));

    /* DataStoreWrite: '<S228>/73B-S-WS-RL' incorporates:
     *  DataStoreWrite: '<S212>/L74-X72-S-AS-SR'
     *  Logic: '<S228>/NOT2'
     *  Logic: '<S228>/NOT3'
     *  Logic: '<S228>/NOT4'
     *  Logic: '<S228>/NOT5'
     *  Logic: '<S228>/NOT6'
     *  Logic: '<S228>/NOT7'
     *  Logic: '<S228>/OR2'
     */
    M_RL_S_WS_73B = (M_AS_S_L34 && M_AS_S_L54 && M_AS_S_L74 && (!M_R_S_34_72) &&
                     (!M_R_S_54_72) && (!M_R_S_74_72) && (!M_AS_SR_S_34_72) && (
      !M_AS_SR_S_54_72) && (!VITALDEPOT_DW.AS_SR_ec.AND1));

    /* DataStoreRead: '<S229>/L14B-RRLS-TE-FROM1' */
    rtb_L14BRRLSTEFROM1 = M_RRLSTE_L14B;

    /* Outputs for Atomic SubSystem: '<S229>/D_RRLS5' */
    D_RRLS1(rtb_L14BRRLSTEFROM1, &VITALDEPOT_DW.D_RRLS5);

    /* End of Outputs for SubSystem: '<S229>/D_RRLS5' */

    /* DataStoreRead: '<S229>/X12-RRLS-TE-FROM1' */
    rtb_X12RRLSTEFROM1 = M_RRLSTE_X12;

    /* DataStoreRead: '<S229>/W13A-NWZ-FROM1' */
    rtb_W13ANWZFROM1 = M_W13A_NWZ;

    /* DataStoreRead: '<S229>/W13B//73A-NWZ-FROM1' */
    rtb_W13B73ANWZFROM1 = M_W13B_73A_NWZ;

    /* Outputs for Atomic SubSystem: '<S229>/D_RRLS7' */
    D_RRLS3(rtb_X12RRLSTEFROM1, rtb_W13ANWZFROM1, rtb_W13B73ANWZFROM1,
            &VITALDEPOT_DW.D_RRLS7);

    /* End of Outputs for SubSystem: '<S229>/D_RRLS7' */

    /* DataStoreRead: '<S229>/X32-RRLS-TE-FROM1' */
    rtb_X32RRLSTEFROM1 = M_RRLSTE_X32;

    /* DataStoreRead: '<S229>/W13A-RWZ-FROM1' */
    rtb_W13ARWZFROM1 = M_W13A_RWZ;

    /* Outputs for Atomic SubSystem: '<S229>/D_RRLS1' */
    D_RRLS3(rtb_X32RRLSTEFROM1, rtb_W13ARWZFROM1, rtb_W13B73ANWZFROM1,
            &VITALDEPOT_DW.D_RRLS1_j);

    /* End of Outputs for SubSystem: '<S229>/D_RRLS1' */

    /* DataStoreRead: '<S229>/X72-RRLS-TE-FROM1' */
    rtb_X72RRLSTEFROM1 = M_RRLSTE_X72;

    /* DataStoreRead: '<S229>/W13B//73A-RWZ-FROM1' */
    rtb_W13B73ARWZFROM1 = M_W13B_73A_RWZ;

    /* Outputs for Atomic SubSystem: '<S229>/D_RRLS6' */
    D_RRLS2(rtb_X72RRLSTEFROM1, rtb_W13B73ARWZFROM1, &VITALDEPOT_DW.D_RRLS6);

    /* End of Outputs for SubSystem: '<S229>/D_RRLS6' */

    /* DataStoreWrite: '<S229>/13-RLS' incorporates:
     *  Logic: '<S229>/OR1'
     */
    M_RLS_13 = (VITALDEPOT_DW.D_RRLS5.RRLSTE || VITALDEPOT_DW.D_RRLS7.AND1 ||
                VITALDEPOT_DW.D_RRLS1_j.AND1 || VITALDEPOT_DW.D_RRLS6.AND1);

    /* DataStoreRead: '<S230>/X72-RRLS-TE-FROM1' */
    rtb_X72RRLSTEFROM1_b = M_RRLSTE_X72;

    /* Outputs for Atomic SubSystem: '<S230>/D_RRLS5' */
    D_RRLS1(rtb_X72RRLSTEFROM1_b, &VITALDEPOT_DW.D_RRLS5_j);

    /* End of Outputs for SubSystem: '<S230>/D_RRLS5' */

    /* DataStoreRead: '<S230>/L14B-RRLS-TE-FROM1' */
    rtb_L14BRRLSTEFROM1_f = M_RRLSTE_L14B;

    /* DataStoreRead: '<S230>/W13B//73A-RWZ-FROM1' */
    rtb_W13B73ARWZFROM1_j = M_W13B_73A_RWZ;

    /* Outputs for Atomic SubSystem: '<S230>/D_RRLS6' */
    D_RRLS2(rtb_L14BRRLSTEFROM1_f, rtb_W13B73ARWZFROM1_j,
            &VITALDEPOT_DW.D_RRLS6_l);

    /* End of Outputs for SubSystem: '<S230>/D_RRLS6' */

    /* DataStoreRead: '<S230>/X74-RRLS-TE-FROM1' incorporates:
     *  DataStoreWrite: '<S118>/X74-RRLS-TE'
     */
    rtb_X74RRLSTEFROM1 = VITALDEPOT_DW.EMERGENCYROUTE_i.Memory1;

    /* DataStoreRead: '<S230>/W13B//73A-NWZ-FROM1' */
    rtb_W13B73ANWZFROM1_m = M_W13B_73A_NWZ;

    /* DataStoreRead: '<S230>/W73B-NWZ-FROM1' */
    rtb_W73BNWZFROM1 = M_W73B_NWZ;

    /* Outputs for Atomic SubSystem: '<S230>/D_RRLS1' */
    D_RRLS3(rtb_X74RRLSTEFROM1, rtb_W13B73ANWZFROM1_m, rtb_W73BNWZFROM1,
            &VITALDEPOT_DW.D_RRLS1_k);

    /* End of Outputs for SubSystem: '<S230>/D_RRLS1' */

    /* DataStoreRead: '<S230>/X34-RRLS-TE-FROM1' */
    rtb_X34RRLSTEFROM1 = M_RRLSTE_X34;

    /* DataStoreRead: '<S230>/W73B-RWZ-FROM1' */
    rtb_W73BRWZFROM1 = M_W73B_RWZ;

    /* DataStoreRead: '<S230>/W54-RWZ-FROM1' */
    rtb_W54RWZFROM1 = M_W54_RWZ;

    /* Outputs for Atomic SubSystem: '<S230>/D_RRLS2' */
    D_RRLS_4(rtb_X34RRLSTEFROM1, rtb_W13B73ANWZFROM1_m, rtb_W73BRWZFROM1,
             rtb_W54RWZFROM1, &VITALDEPOT_DW.D_RRLS2_m);

    /* End of Outputs for SubSystem: '<S230>/D_RRLS2' */

    /* DataStoreRead: '<S230>/X54-RRLS-TE-FROM1' */
    rtb_X54RRLSTEFROM1 = M_RRLSTE_X54;

    /* DataStoreRead: '<S230>/W54-NWZ-FROM1' */
    rtb_W54NWZFROM1 = M_W54_NWZ;

    /* Outputs for Atomic SubSystem: '<S230>/D_RRLS8' */
    D_RRLS_4(rtb_X54RRLSTEFROM1, rtb_W13B73ANWZFROM1_m, rtb_W54RWZFROM1,
             rtb_W54NWZFROM1, &VITALDEPOT_DW.D_RRLS8);

    /* End of Outputs for SubSystem: '<S230>/D_RRLS8' */

    /* DataStoreWrite: '<S230>/73A-RLS' incorporates:
     *  Logic: '<S230>/OR1'
     */
    M_RLS_73A = (VITALDEPOT_DW.D_RRLS5_j.RRLSTE || VITALDEPOT_DW.D_RRLS6_l.AND1 ||
                 VITALDEPOT_DW.D_RRLS1_k.AND1 || VITALDEPOT_DW.D_RRLS2_m.AND1 ||
                 VITALDEPOT_DW.D_RRLS8.AND1);

    /* DataStoreRead: '<S231>/X72-RRLS-TE-FROM1' */
    rtb_X72RRLSTEFROM1_d = M_RRLSTE_X72;

    /* Outputs for Atomic SubSystem: '<S231>/D_RRLS5' */
    D_RRLS1(rtb_X72RRLSTEFROM1_d, &VITALDEPOT_DW.D_RRLS5_m);

    /* End of Outputs for SubSystem: '<S231>/D_RRLS5' */

    /* DataStoreRead: '<S231>/X74-RRLS-TE-FROM1' incorporates:
     *  DataStoreWrite: '<S118>/X74-RRLS-TE'
     */
    rtb_X74RRLSTEFROM1_o = VITALDEPOT_DW.EMERGENCYROUTE_i.Memory1;

    /* DataStoreRead: '<S231>/W73B-NWZ-FROM1' */
    rtb_W73BNWZFROM1_j = M_W73B_NWZ;

    /* Outputs for Atomic SubSystem: '<S231>/D_RRLS6' */
    D_RRLS2(rtb_X74RRLSTEFROM1_o, rtb_W73BNWZFROM1_j, &VITALDEPOT_DW.D_RRLS6_o);

    /* End of Outputs for SubSystem: '<S231>/D_RRLS6' */

    /* DataStoreRead: '<S231>/X34-RRLS-TE-FROM1' */
    rtb_X34RRLSTEFROM1_i = M_RRLSTE_X34;

    /* DataStoreRead: '<S231>/W73B-RWZ-FROM1' */
    rtb_W73BRWZFROM1_c = M_W73B_RWZ;

    /* DataStoreRead: '<S231>/W54-RWZ-FROM1' */
    rtb_W54RWZFROM1_h = M_W54_RWZ;

    /* Outputs for Atomic SubSystem: '<S231>/D_RRLS1' */
    D_RRLS3(rtb_X34RRLSTEFROM1_i, rtb_W73BRWZFROM1_c, rtb_W54RWZFROM1_h,
            &VITALDEPOT_DW.D_RRLS1_g);

    /* End of Outputs for SubSystem: '<S231>/D_RRLS1' */

    /* DataStoreRead: '<S231>/X54-RRLS-TE-FROM1' */
    rtb_X54RRLSTEFROM1_p = M_RRLSTE_X54;

    /* DataStoreRead: '<S231>/W54-NWZ-FROM1' */
    rtb_W54NWZFROM1_j = M_W54_NWZ;

    /* Outputs for Atomic SubSystem: '<S231>/D_RRLS2' */
    D_RRLS3(rtb_X54RRLSTEFROM1_p, rtb_W73BRWZFROM1_c, rtb_W54NWZFROM1_j,
            &VITALDEPOT_DW.D_RRLS2_o);

    /* End of Outputs for SubSystem: '<S231>/D_RRLS2' */

    /* DataStoreWrite: '<S231>/73B-RLS' incorporates:
     *  Logic: '<S231>/OR1'
     */
    M_RLS_73B = (VITALDEPOT_DW.D_RRLS5_m.RRLSTE || VITALDEPOT_DW.D_RRLS6_o.AND1 ||
                 VITALDEPOT_DW.D_RRLS1_g.AND1 || VITALDEPOT_DW.D_RRLS2_o.AND1);

    /* DataStoreWrite: '<S199>/RRLS' incorporates:
     *  DataStoreWrite: '<S118>/X74-RRLS'
     *  Logic: '<S199>/NOT1'
     *  Logic: '<S199>/OR1'
     */
    M_RRLS = !(M_RRLS_X12 || M_RRLS_X32 || M_RRLS_X72 || M_RRLS_X34 ||
               M_RRLS_X54 || VITALDEPOT_DW.EMERGENCYROUTE_i.AND1 || M_RRLS_L14A ||
               M_RRLS_L14B);

    /* DataStoreWrite: '<S200>/SWRLS' incorporates:
     *  Logic: '<S200>/NOT1'
     *  Logic: '<S200>/OR2'
     */
    M_SWRLS = !(M_W13A_SWRLS || M_W13B_73A_SWRLS || M_W54_SWRLS || M_W73B_SWRLS);

    /* DataStoreRead: '<S245>/W13A-NWP-DI' */
    rtb_W13ANWPDI = DI_NWP_W13A;

    /* DataStoreRead: '<S245>/W13A-RWP-DI' */
    rtb_W13ARWPDI = DI_RWP_W13A;

    /* DataStoreRead: '<S245>/W13A-OOC' */
    rtb_W13AOOC = M_W13A_OOC;

    /* DataStoreRead: '<S245>/W13A-L' */
    VITALDEPOT_DW.W13AL = M_W13A_L;

    /* DataStoreRead: '<S245>/W13A-N-REQ' */
    rtb_W13ANREQ = M_W13A_N_REQ;

    /* DataStoreRead: '<S245>/W13A-R-REQ' */
    rtb_W13ARREQ = M_W13A_R_REQ;

    /* DataStoreRead: '<S245>/13-TP' */
    rtb_u3TP_o = M_TP_13;

    /* Logic: '<S245>/AND1' */
    rtb_AND1_di = (M_W13A_TPZ && M_W13B_73A_TPZ);

    /* DataStoreRead: '<S245>/VDR' */
    VITALDEPOT_DW.VDR = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S245>/POINT CONTROL' */
  D_SW_CTRL(VITALDEPOT_M, rtb_W13ANWPDI, rtb_W13ARWPDI, rtb_W13AOOC,
            VITALDEPOT_DW.W13AL, rtb_W13ANREQ, rtb_W13ARREQ, rtb_u3TP_o,
            rtb_AND1_di, VITALDEPOT_DW.VDR, &VITALDEPOT_DW.POINTCONTROL);

  /* End of Outputs for SubSystem: '<S245>/POINT CONTROL' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S245>/W13A-LS' */
    M_W13A_LS = VITALDEPOT_DW.POINTCONTROL.Memory3;

    /* DataStoreWrite: '<S245>/W13A-NW-TE' incorporates:
     *  SignalConversion: '<S245>/TmpSignal ConversionAtPOINT CONTROLOutport11'
     */
    M_W13A_NW_TE = VITALDEPOT_DW.POINTCONTROL.DV_TON_a.LogicalOperator2;

    /* DataStoreWrite: '<S245>/W13A-NWC' */
    M_W13A_NWC = VITALDEPOT_DW.POINTCONTROL.AND7;

    /* DataStoreWrite: '<S245>/W13A-NWP' */
    M_W13A_NWP = VITALDEPOT_DW.POINTCONTROL.AND1;

    /* DataStoreWrite: '<S245>/W13A-NWR-DO' incorporates:
     *  SignalConversion: '<S245>/TmpSignal ConversionAtPOINT CONTROLOutport8'
     */
    DO_NWR_W13A = VITALDEPOT_DW.POINTCONTROL.AND22;

    /* DataStoreWrite: '<S245>/W13A-NWZ' */
    M_W13A_NWZ = VITALDEPOT_DW.POINTCONTROL.Memory1;

    /* DataStoreWrite: '<S245>/W13A-RW-TE' incorporates:
     *  SignalConversion: '<S245>/TmpSignal ConversionAtPOINT CONTROLOutport12'
     */
    M_W13A_RW_TE = VITALDEPOT_DW.POINTCONTROL.DV_TON1.LogicalOperator2;

    /* DataStoreWrite: '<S245>/W13A-RWC' */
    M_W13A_RWC = VITALDEPOT_DW.POINTCONTROL.AND8;

    /* DataStoreWrite: '<S245>/W13A-RWP' */
    M_W13A_RWP = VITALDEPOT_DW.POINTCONTROL.AND2;

    /* DataStoreWrite: '<S245>/W13A-RWR-DO' incorporates:
     *  SignalConversion: '<S245>/TmpSignal ConversionAtPOINT CONTROLOutport9'
     */
    DO_RWR_W13A = VITALDEPOT_DW.POINTCONTROL.AND23;

    /* DataStoreWrite: '<S245>/W13A-RWZ' */
    M_W13A_RWZ = VITALDEPOT_DW.POINTCONTROL.Memory2;

    /* DataStoreWrite: '<S245>/W13A-WLPR-DO' incorporates:
     *  SignalConversion: '<S245>/TmpSignal ConversionAtPOINT CONTROLOutport10'
     */
    DO_WLPR_W13A = VITALDEPOT_DW.POINTCONTROL.AND24;

    /* DataStoreRead: '<S246>/W13B//73A-NWP-DI' */
    rtb_W13B73ANWPDI = DI_NWP_W13B_73A;

    /* DataStoreRead: '<S246>/W13B//73A-RWP-DI' */
    rtb_W13B73ARWPDI = DI_RWP_W13B_73A;

    /* DataStoreRead: '<S246>/W13B//73A-OOC' */
    rtb_W13B73AOOC = M_W13B_73A_OOC;

    /* DataStoreRead: '<S246>/W13B//73A-L' */
    VITALDEPOT_DW.W13B73AL = M_W13B_73A_L;

    /* DataStoreRead: '<S246>/W13B//73A-N-REQ' */
    rtb_W13B73ANREQ = M_W13B_73A_N_REQ;

    /* DataStoreRead: '<S246>/W13B//73A-R-REQ' */
    rtb_W13B73ARREQ = M_W13B_73A_R_REQ;

    /* Logic: '<S246>/AND2' */
    rtb_AND2_k = (M_TP_13 && M_TP_73A);

    /* Logic: '<S246>/AND1' */
    rtb_AND1_ef = (M_W13A_TPZ && M_W13B_73A_TPZ);

    /* DataStoreRead: '<S246>/VDR' */
    VITALDEPOT_DW.VDR_f = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S246>/POINT CONTROL' */
  D_SW_CTRL(VITALDEPOT_M, rtb_W13B73ANWPDI, rtb_W13B73ARWPDI, rtb_W13B73AOOC,
            VITALDEPOT_DW.W13B73AL, rtb_W13B73ANREQ, rtb_W13B73ARREQ, rtb_AND2_k,
            rtb_AND1_ef, VITALDEPOT_DW.VDR_f, &VITALDEPOT_DW.POINTCONTROL_b);

  /* End of Outputs for SubSystem: '<S246>/POINT CONTROL' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S246>/W13B//73A-LS' */
    M_W13B_73A_LS = VITALDEPOT_DW.POINTCONTROL_b.Memory3;

    /* DataStoreWrite: '<S246>/W13B//73A-NW-TE' incorporates:
     *  SignalConversion: '<S246>/TmpSignal ConversionAtPOINT CONTROLOutport11'
     */
    M_W13B_73A_NW_TE = VITALDEPOT_DW.POINTCONTROL_b.DV_TON_a.LogicalOperator2;

    /* DataStoreWrite: '<S246>/W13B//73A-NWC' */
    M_W13B_73A_NWC = VITALDEPOT_DW.POINTCONTROL_b.AND7;

    /* DataStoreWrite: '<S246>/W13B//73A-NWP' */
    M_W13B_73A_NWP = VITALDEPOT_DW.POINTCONTROL_b.AND1;

    /* DataStoreWrite: '<S246>/W13B//73A-NWR-DO' incorporates:
     *  SignalConversion: '<S246>/TmpSignal ConversionAtPOINT CONTROLOutport8'
     */
    DO_NWR_W13B_73A = VITALDEPOT_DW.POINTCONTROL_b.AND22;

    /* DataStoreWrite: '<S246>/W13B//73A-NWZ' */
    M_W13B_73A_NWZ = VITALDEPOT_DW.POINTCONTROL_b.Memory1;

    /* DataStoreWrite: '<S246>/W13B//73A-RW-TE' incorporates:
     *  SignalConversion: '<S246>/TmpSignal ConversionAtPOINT CONTROLOutport12'
     */
    M_W13B_73A_RW_TE = VITALDEPOT_DW.POINTCONTROL_b.DV_TON1.LogicalOperator2;

    /* DataStoreWrite: '<S246>/W13B//73A-RWC' */
    M_W13B_73A_RWC = VITALDEPOT_DW.POINTCONTROL_b.AND8;

    /* DataStoreWrite: '<S246>/W13B//73A-RWP' */
    M_W13B_73A_RWP = VITALDEPOT_DW.POINTCONTROL_b.AND2;

    /* DataStoreWrite: '<S246>/W13B//73A-RWR-DO' incorporates:
     *  SignalConversion: '<S246>/TmpSignal ConversionAtPOINT CONTROLOutport9'
     */
    DO_RWR_W13B_73A = VITALDEPOT_DW.POINTCONTROL_b.AND23;

    /* DataStoreWrite: '<S246>/W13B//73A-RWZ' */
    M_W13B_73A_RWZ = VITALDEPOT_DW.POINTCONTROL_b.Memory2;

    /* DataStoreWrite: '<S246>/W13B//73A-WLPR-DO' incorporates:
     *  SignalConversion: '<S246>/TmpSignal ConversionAtPOINT CONTROLOutport10'
     */
    DO_WLPR_W13B_73A = VITALDEPOT_DW.POINTCONTROL_b.AND24;

    /* DataStoreRead: '<S247>/W54-NWP-DI' */
    rtb_W54NWPDI = DI_NWP_W54;

    /* DataStoreRead: '<S247>/W54-RWP-DI' */
    rtb_W54RWPDI = DI_RWP_W54;

    /* DataStoreRead: '<S247>/W54-OOC' */
    rtb_W54OOC = M_W54_OOC;

    /* DataStoreRead: '<S247>/W54-L' */
    VITALDEPOT_DW.W54L = M_W54_L;

    /* DataStoreRead: '<S247>/W54-N-REQ' */
    rtb_W54NREQ = M_W54_N_REQ;

    /* DataStoreRead: '<S247>/W54-R-REQ' */
    rtb_W54RREQ = M_W54_R_REQ;

    /* DataStoreRead: '<S247>/73B-TP' */
    rtb_u3BTP_e = M_TP_73B;

    /* Logic: '<S247>/AND1' */
    rtb_AND1_o = (M_W54_TPZ && M_W73B_TPZ);

    /* DataStoreRead: '<S247>/VDR' */
    VITALDEPOT_DW.VDR_e = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S247>/POINT CONTROL' */
  D_SW_CTRL(VITALDEPOT_M, rtb_W54NWPDI, rtb_W54RWPDI, rtb_W54OOC,
            VITALDEPOT_DW.W54L, rtb_W54NREQ, rtb_W54RREQ, rtb_u3BTP_e,
            rtb_AND1_o, VITALDEPOT_DW.VDR_e, &VITALDEPOT_DW.POINTCONTROL_m);

  /* End of Outputs for SubSystem: '<S247>/POINT CONTROL' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S247>/W54-LS' */
    M_W54_LS = VITALDEPOT_DW.POINTCONTROL_m.Memory3;

    /* DataStoreWrite: '<S247>/W54-NW-TE' incorporates:
     *  SignalConversion: '<S247>/TmpSignal ConversionAtPOINT CONTROLOutport11'
     */
    M_W54_NW_TE = VITALDEPOT_DW.POINTCONTROL_m.DV_TON_a.LogicalOperator2;

    /* DataStoreWrite: '<S247>/W54-NWC' */
    M_W54_NWC = VITALDEPOT_DW.POINTCONTROL_m.AND7;

    /* DataStoreWrite: '<S247>/W54-NWP' */
    M_W54_NWP = VITALDEPOT_DW.POINTCONTROL_m.AND1;

    /* DataStoreWrite: '<S247>/W54-NWR-DO' incorporates:
     *  SignalConversion: '<S247>/TmpSignal ConversionAtPOINT CONTROLOutport8'
     */
    DO_NWR_W54 = VITALDEPOT_DW.POINTCONTROL_m.AND22;

    /* DataStoreWrite: '<S247>/W54-NWZ' */
    M_W54_NWZ = VITALDEPOT_DW.POINTCONTROL_m.Memory1;

    /* DataStoreWrite: '<S247>/W54-RW-TE' incorporates:
     *  SignalConversion: '<S247>/TmpSignal ConversionAtPOINT CONTROLOutport12'
     */
    M_W54_RW_TE = VITALDEPOT_DW.POINTCONTROL_m.DV_TON1.LogicalOperator2;

    /* DataStoreWrite: '<S247>/W54-RWC' */
    M_W54_RWC = VITALDEPOT_DW.POINTCONTROL_m.AND8;

    /* DataStoreWrite: '<S247>/W54-RWP' */
    M_W54_RWP = VITALDEPOT_DW.POINTCONTROL_m.AND2;

    /* DataStoreWrite: '<S247>/W54-RWR-DO' incorporates:
     *  SignalConversion: '<S247>/TmpSignal ConversionAtPOINT CONTROLOutport9'
     */
    DO_RWR_W54 = VITALDEPOT_DW.POINTCONTROL_m.AND23;

    /* DataStoreWrite: '<S247>/W54-RWZ' */
    M_W54_RWZ = VITALDEPOT_DW.POINTCONTROL_m.Memory2;

    /* DataStoreWrite: '<S247>/W54-WLPR-DO' incorporates:
     *  SignalConversion: '<S247>/TmpSignal ConversionAtPOINT CONTROLOutport10'
     */
    DO_WLPR_W54 = VITALDEPOT_DW.POINTCONTROL_m.AND24;

    /* DataStoreRead: '<S248>/W73B-NWP-DI' */
    rtb_W73BNWPDI = DI_NWP_W73B;

    /* DataStoreRead: '<S248>/W73B-RWP-DI' */
    rtb_W73BRWPDI = DI_RWP_W73B;

    /* DataStoreRead: '<S248>/W73B-OOC' */
    rtb_W73BOOC = M_W73B_OOC;

    /* DataStoreRead: '<S248>/W73B-L' */
    VITALDEPOT_DW.W73BL = M_W73B_L;

    /* DataStoreRead: '<S248>/W73B-N-REQ' */
    rtb_W73BNREQ = M_W73B_N_REQ;

    /* DataStoreRead: '<S248>/W73B-R-REQ' */
    rtb_W73BRREQ = M_W73B_R_REQ;

    /* DataStoreRead: '<S248>/73B-TP' */
    rtb_u3BTP_io = M_TP_73B;

    /* Logic: '<S248>/AND1' */
    rtb_AND1_p = (M_W54_TPZ && M_W73B_TPZ);

    /* DataStoreRead: '<S248>/VDR' */
    VITALDEPOT_DW.VDR_h = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S248>/POINT CONTROL' */
  D_SW_CTRL(VITALDEPOT_M, rtb_W73BNWPDI, rtb_W73BRWPDI, rtb_W73BOOC,
            VITALDEPOT_DW.W73BL, rtb_W73BNREQ, rtb_W73BRREQ, rtb_u3BTP_io,
            rtb_AND1_p, VITALDEPOT_DW.VDR_h, &VITALDEPOT_DW.POINTCONTROL_d);

  /* End of Outputs for SubSystem: '<S248>/POINT CONTROL' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S248>/W73B-LS' */
    M_W73B_LS = VITALDEPOT_DW.POINTCONTROL_d.Memory3;

    /* DataStoreWrite: '<S248>/W73B-NW-TE' incorporates:
     *  SignalConversion: '<S248>/TmpSignal ConversionAtPOINT CONTROLOutport11'
     */
    M_W73B_NW_TE = VITALDEPOT_DW.POINTCONTROL_d.DV_TON_a.LogicalOperator2;

    /* DataStoreWrite: '<S248>/W73B-NWC' */
    M_W73B_NWC = VITALDEPOT_DW.POINTCONTROL_d.AND7;

    /* DataStoreWrite: '<S248>/W73B-NWP' */
    M_W73B_NWP = VITALDEPOT_DW.POINTCONTROL_d.AND1;

    /* DataStoreWrite: '<S248>/W73B-NWR-DO' incorporates:
     *  SignalConversion: '<S248>/TmpSignal ConversionAtPOINT CONTROLOutport8'
     */
    DO_NWR_W73B = VITALDEPOT_DW.POINTCONTROL_d.AND22;

    /* DataStoreWrite: '<S248>/W73B-NWZ' */
    M_W73B_NWZ = VITALDEPOT_DW.POINTCONTROL_d.Memory1;

    /* DataStoreWrite: '<S248>/W73B-RW-TE' incorporates:
     *  SignalConversion: '<S248>/TmpSignal ConversionAtPOINT CONTROLOutport12'
     */
    M_W73B_RW_TE = VITALDEPOT_DW.POINTCONTROL_d.DV_TON1.LogicalOperator2;

    /* DataStoreWrite: '<S248>/W73B-RWC' */
    M_W73B_RWC = VITALDEPOT_DW.POINTCONTROL_d.AND8;

    /* DataStoreWrite: '<S248>/W73B-RWP' */
    M_W73B_RWP = VITALDEPOT_DW.POINTCONTROL_d.AND2;

    /* DataStoreWrite: '<S248>/W73B-RWR-DO' incorporates:
     *  SignalConversion: '<S248>/TmpSignal ConversionAtPOINT CONTROLOutport9'
     */
    DO_RWR_W73B = VITALDEPOT_DW.POINTCONTROL_d.AND23;

    /* DataStoreWrite: '<S248>/W73B-RWZ' */
    M_W73B_RWZ = VITALDEPOT_DW.POINTCONTROL_d.Memory2;

    /* DataStoreWrite: '<S248>/W73B-WLPR-DO' incorporates:
     *  SignalConversion: '<S248>/TmpSignal ConversionAtPOINT CONTROLOutport10'
     */
    DO_WLPR_W73B = VITALDEPOT_DW.POINTCONTROL_d.AND24;

    /* Logic: '<S333>/AND2' */
    rtb_AND2_n = (M_S_ES_13 && M_S_WS_13);

    /* DataStoreRead: '<S333>/13-TP' */
    rtb_u3TP_c = M_TP_13;

    /* Logic: '<S333>/AND1' */
    rtb_AND1_n = (M_W13A_TPZ && M_W13B_73A_TPZ);

    /* Outputs for Atomic SubSystem: '<S333>/POINT LOCK' */
    D_SW_L(rtb_AND2_n, rtb_u3TP_c, rtb_AND1_n, &VITALDEPOT_DW.POINTLOCK);

    /* End of Outputs for SubSystem: '<S333>/POINT LOCK' */

    /* DataStoreWrite: '<S333>/W13A-L' */
    M_W13A_L = VITALDEPOT_DW.POINTLOCK.OR2;

    /* Logic: '<S334>/AND3' incorporates:
     *  Logic: '<S334>/AND2'
     *  Logic: '<S334>/AND4'
     */
    rtb_AND3 = (M_S_ES_13 && M_S_ES_73A && (M_S_WS_13 && M_S_WS_73A));

    /* Logic: '<S334>/AND5' */
    rtb_AND5 = (M_TP_13 && M_TP_73A);

    /* Logic: '<S334>/AND1' */
    rtb_AND1_gz = (M_W13A_TPZ && M_W13B_73A_TPZ);

    /* Outputs for Atomic SubSystem: '<S334>/POINT LOCK' */
    D_SW_L(rtb_AND3, rtb_AND5, rtb_AND1_gz, &VITALDEPOT_DW.POINTLOCK_e);

    /* End of Outputs for SubSystem: '<S334>/POINT LOCK' */

    /* DataStoreWrite: '<S334>/W13B//73A-L' */
    M_W13B_73A_L = VITALDEPOT_DW.POINTLOCK_e.OR2;

    /* Logic: '<S335>/AND2' */
    rtb_AND2_e = (M_S_ES_73B && M_S_WS_73B);

    /* DataStoreRead: '<S335>/73B-TP' */
    rtb_u3BTP_d = M_TP_73B;

    /* Logic: '<S335>/AND1' */
    rtb_AND1_i = (M_W54_TPZ && M_W73B_TPZ);

    /* Outputs for Atomic SubSystem: '<S335>/POINT LOCK' */
    D_SW_L(rtb_AND2_e, rtb_u3BTP_d, rtb_AND1_i, &VITALDEPOT_DW.POINTLOCK_d);

    /* End of Outputs for SubSystem: '<S335>/POINT LOCK' */

    /* DataStoreWrite: '<S335>/W54-L' */
    M_W54_L = VITALDEPOT_DW.POINTLOCK_d.OR2;

    /* Logic: '<S336>/AND2' */
    rtb_AND2_i = (M_S_ES_73B && M_S_WS_73B);

    /* DataStoreRead: '<S336>/73B-TP' */
    rtb_u3BTP_f = M_TP_73B;

    /* Logic: '<S336>/AND1' */
    rtb_AND1_gmn = (M_W54_TPZ && M_W73B_TPZ);

    /* Outputs for Atomic SubSystem: '<S336>/POINT LOCK' */
    D_SW_L(rtb_AND2_i, rtb_u3BTP_f, rtb_AND1_gmn, &VITALDEPOT_DW.POINTLOCK_dt);

    /* End of Outputs for SubSystem: '<S336>/POINT LOCK' */

    /* DataStoreWrite: '<S336>/W73B-L' */
    M_W73B_L = VITALDEPOT_DW.POINTLOCK_dt.OR2;

    /* DataStoreRead: '<S341>/L12-L14B-REQ' */
    rtb_L12L14BREQ = M_REQ_S_12_14;

    /* DataStoreRead: '<S341>/L12-L14B-S-L' */
    rtb_L12L14BSL_j = M_L_S_12_14;

    /* Outputs for Atomic SubSystem: '<S341>/ROUTE CHECK' */
    D_H_D_S(rtb_L12L14BREQ, rtb_L12L14BSL_j, &VITALDEPOT_DW.ROUTECHECK);

    /* End of Outputs for SubSystem: '<S341>/ROUTE CHECK' */

    /* DataStoreWrite: '<S341>/L12-L14B-S' */
    M_R_S_12_14 = VITALDEPOT_DW.ROUTECHECK.AND2;

    /* DataStoreRead: '<S342>/L14A-X12-REQ' */
    rtb_L14AX12REQ = M_REQ_S_14_12;

    /* DataStoreRead: '<S342>/L14A-X12-S-L' */
    rtb_L14AX12SL_g = M_L_S_14_12;

    /* Outputs for Atomic SubSystem: '<S342>/ROUTE CHECK' */
    D_H_D_S(rtb_L14AX12REQ, rtb_L14AX12SL_g, &VITALDEPOT_DW.ROUTECHECK_f);

    /* End of Outputs for SubSystem: '<S342>/ROUTE CHECK' */

    /* DataStoreWrite: '<S342>/L14A-X12-D' */
    M_R_S_14_12 = VITALDEPOT_DW.ROUTECHECK_f.AND2;

    /* DataStoreRead: '<S343>/L14A-X32-REQ' */
    rtb_L14AX32REQ = M_REQ_S_14_32;

    /* DataStoreRead: '<S343>/L14A-X32-S-L' */
    rtb_L14AX32SL_g = M_L_S_14_32;

    /* Outputs for Atomic SubSystem: '<S343>/ROUTE CHECK' */
    D_H_D_S(rtb_L14AX32REQ, rtb_L14AX32SL_g, &VITALDEPOT_DW.ROUTECHECK_l);

    /* End of Outputs for SubSystem: '<S343>/ROUTE CHECK' */

    /* DataStoreWrite: '<S343>/L14A-X32-D' */
    M_R_S_14_32 = VITALDEPOT_DW.ROUTECHECK_l.AND2;

    /* DataStoreRead: '<S344>/L14A-X72-REQ' */
    rtb_L14AX72REQ = M_REQ_S_14_72;

    /* DataStoreRead: '<S344>/L14A-X72-S-L' */
    rtb_L14AX72SL_d = M_L_S_14_72;

    /* Outputs for Atomic SubSystem: '<S344>/ROUTE CHECK' */
    D_H_D_S(rtb_L14AX72REQ, rtb_L14AX72SL_d, &VITALDEPOT_DW.ROUTECHECK_h);

    /* End of Outputs for SubSystem: '<S344>/ROUTE CHECK' */

    /* DataStoreWrite: '<S344>/L14A-X72-D' */
    M_R_S_14_72 = VITALDEPOT_DW.ROUTECHECK_h.AND2;

    /* DataStoreRead: '<S345>/L32-L14B-REQ' */
    rtb_L32L14BREQ = M_REQ_S_32_14;

    /* DataStoreRead: '<S345>/L32-L14B-S-L' */
    rtb_L32L14BSL_h = M_L_S_32_14;

    /* Outputs for Atomic SubSystem: '<S345>/ROUTE CHECK' */
    D_H_D_S(rtb_L32L14BREQ, rtb_L32L14BSL_h, &VITALDEPOT_DW.ROUTECHECK_p);

    /* End of Outputs for SubSystem: '<S345>/ROUTE CHECK' */

    /* DataStoreWrite: '<S345>/L32-L14B-D' */
    M_R_S_32_14 = VITALDEPOT_DW.ROUTECHECK_p.AND2;

    /* DataStoreRead: '<S346>/L34A-X72-REQ' */
    rtb_L34AX72REQ = M_REQ_S_34_72;

    /* DataStoreRead: '<S346>/L34A-X72-S-L' */
    rtb_L34AX72SL = M_L_S_34_72;

    /* Outputs for Atomic SubSystem: '<S346>/ROUTE CHECK' */
    D_H_D_S(rtb_L34AX72REQ, rtb_L34AX72SL, &VITALDEPOT_DW.ROUTECHECK_o);

    /* End of Outputs for SubSystem: '<S346>/ROUTE CHECK' */

    /* DataStoreWrite: '<S346>/L34-X72-D' */
    M_R_S_34_72 = VITALDEPOT_DW.ROUTECHECK_o.AND2;

    /* DataStoreRead: '<S347>/L54A-X72-REQ' */
    rtb_L54AX72REQ = M_REQ_S_54_72;

    /* DataStoreRead: '<S347>/L54A-X72-S-L' */
    rtb_L54AX72SL = M_L_S_54_72;

    /* Outputs for Atomic SubSystem: '<S347>/ROUTE CHECK' */
    D_H_D_S(rtb_L54AX72REQ, rtb_L54AX72SL, &VITALDEPOT_DW.ROUTECHECK_m);

    /* End of Outputs for SubSystem: '<S347>/ROUTE CHECK' */

    /* DataStoreWrite: '<S347>/L54A-X72-D' */
    M_R_S_54_72 = VITALDEPOT_DW.ROUTECHECK_m.AND2;

    /* DataStoreRead: '<S348>/L72-L14B-REQ' */
    rtb_L72L14BREQ = M_REQ_S_72_14;

    /* DataStoreRead: '<S348>/L72-L14B-S-L' */
    rtb_L72L14BSL_e = M_L_S_72_14;

    /* Outputs for Atomic SubSystem: '<S348>/ROUTE CHECK' */
    D_H_D_S(rtb_L72L14BREQ, rtb_L72L14BSL_e, &VITALDEPOT_DW.ROUTECHECK_i);

    /* End of Outputs for SubSystem: '<S348>/ROUTE CHECK' */

    /* DataStoreWrite: '<S348>/L72-L14B-D' */
    M_R_S_72_14 = VITALDEPOT_DW.ROUTECHECK_i.AND2;

    /* DataStoreRead: '<S349>/L72-X34-REQ' */
    rtb_L72X34REQ = M_REQ_S_72_34;

    /* DataStoreRead: '<S349>/L72-X34-S-L' */
    rtb_L72X34SL_p = M_L_S_72_34;

    /* Outputs for Atomic SubSystem: '<S349>/ROUTE CHECK' */
    D_H_D_S(rtb_L72X34REQ, rtb_L72X34SL_p, &VITALDEPOT_DW.ROUTECHECK_b);

    /* End of Outputs for SubSystem: '<S349>/ROUTE CHECK' */

    /* DataStoreWrite: '<S349>/L72-X34-D' */
    M_R_S_72_34 = VITALDEPOT_DW.ROUTECHECK_b.AND2;

    /* DataStoreRead: '<S350>/L72-X54-REQ' */
    rtb_L72X54REQ = M_REQ_S_72_54;

    /* DataStoreRead: '<S350>/L72-X54-S-L' */
    rtb_L72X54SL_b = M_L_S_72_54;

    /* Outputs for Atomic SubSystem: '<S350>/ROUTE CHECK' */
    D_H_D_S(rtb_L72X54REQ, rtb_L72X54SL_b, &VITALDEPOT_DW.ROUTECHECK_k);

    /* End of Outputs for SubSystem: '<S350>/ROUTE CHECK' */

    /* DataStoreWrite: '<S350>/L72-X54-D' */
    M_R_S_72_54 = VITALDEPOT_DW.ROUTECHECK_k.AND2;

    /* DataStoreRead: '<S351>/L72-X74-REQ' */
    rtb_L72X74REQ = M_REQ_S_72_74;

    /* DataStoreRead: '<S351>/L72-X74-S-L' */
    rtb_L72X74SL_c = M_L_S_72_74;

    /* Outputs for Atomic SubSystem: '<S351>/ROUTE CHECK' */
    D_H_D_S(rtb_L72X74REQ, rtb_L72X74SL_c, &VITALDEPOT_DW.ROUTECHECK_g);

    /* End of Outputs for SubSystem: '<S351>/ROUTE CHECK' */

    /* DataStoreWrite: '<S351>/L72-X74-D' */
    M_R_S_72_74 = VITALDEPOT_DW.ROUTECHECK_g.AND2;

    /* DataStoreRead: '<S352>/L74A-X72-REQ' */
    rtb_L74AX72REQ = M_REQ_S_74_72;

    /* DataStoreRead: '<S352>/L74A-X72-S-L' */
    rtb_L74AX72SL = M_L_S_74_72;

    /* Outputs for Atomic SubSystem: '<S352>/ROUTE CHECK' */
    D_H_D_S(rtb_L74AX72REQ, rtb_L74AX72SL, &VITALDEPOT_DW.ROUTECHECK_a);

    /* End of Outputs for SubSystem: '<S352>/ROUTE CHECK' */

    /* DataStoreWrite: '<S352>/L74A-X72-D' */
    M_R_S_74_72 = VITALDEPOT_DW.ROUTECHECK_a.AND2;

    /* DataStoreRead: '<S365>/13-S-WS' */
    rtb_u3SWS_e = M_S_WS_13;

    /* Logic: '<S365>/AND1' */
    rtb_AND1_h = (M_W13A_NWC && M_W13B_73A_NWC);

    /* DataStoreRead: '<S365>/L14A-GR-DO' */
    rtb_L14AGRDO_k = DO_L14A_GR;

    /* DataStoreRead: '<S365>/13-TP' */
    rtb_u3TP_ae = M_TP_13;

    /* Outputs for Atomic SubSystem: '<S365>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3SWS_e, rtb_AND1_h, rtb_L14AGRDO_k, rtb_u3TP_ae,
          &VITALDEPOT_DW.ROUTECONFLICTLOCK);

    /* End of Outputs for SubSystem: '<S365>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S365>/L12-L14B-S-L' */
    M_L_S_12_14 = VITALDEPOT_DW.ROUTECONFLICTLOCK.AND1;

    /* DataStoreRead: '<S366>/13-S-ES' */
    rtb_u3SES_k = M_S_ES_13;

    /* Logic: '<S366>/AND1' */
    rtb_AND1_gr = (M_W13A_NWC && M_W13B_73A_NWC);

    /* DataStoreRead: '<S366>/L12-GR-DO' */
    rtb_L12GRDO_f = DO_L12_GR;

    /* DataStoreRead: '<S366>/13-TP' */
    rtb_u3TP_h = M_TP_13;

    /* Outputs for Atomic SubSystem: '<S366>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3SES_k, rtb_AND1_gr, rtb_L12GRDO_f, rtb_u3TP_h,
          &VITALDEPOT_DW.ROUTECONFLICTLOCK_j);

    /* End of Outputs for SubSystem: '<S366>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S366>/L14A-X12-S-L' */
    M_L_S_14_12 = VITALDEPOT_DW.ROUTECONFLICTLOCK_j.AND1;

    /* DataStoreRead: '<S367>/13-S-ES' */
    rtb_u3SES_eu = M_S_ES_13;

    /* Logic: '<S367>/AND1' */
    rtb_AND1_g0 = (M_W13A_RWC && M_W13B_73A_NWC);

    /* DataStoreRead: '<S367>/L32-GR-DO' */
    rtb_L32GRDO_l = DO_L32_GR;

    /* DataStoreRead: '<S367>/13-TP' */
    rtb_u3TP_b = M_TP_13;

    /* Outputs for Atomic SubSystem: '<S367>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3SES_eu, rtb_AND1_g0, rtb_L32GRDO_l, rtb_u3TP_b,
          &VITALDEPOT_DW.ROUTECONFLICTLOCK_e);

    /* End of Outputs for SubSystem: '<S367>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S367>/L14A-X32-S-L' */
    M_L_S_14_32 = VITALDEPOT_DW.ROUTECONFLICTLOCK_e.AND1;

    /* DataStoreRead: '<S368>/13-S-ES' */
    rtb_u3SES_i2 = M_S_ES_13;

    /* DataStoreRead: '<S368>/W13B//73A-RWC' */
    rtb_W13B73ARWC = M_W13B_73A_RWC;

    /* DataStoreRead: '<S368>/L72-GR-DO' */
    rtb_L72GRDO_e = DO_L72_GR;

    /* DataStoreRead: '<S368>/13-TP' */
    rtb_u3TP_oj = M_TP_13;

    /* Outputs for Atomic SubSystem: '<S368>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3SES_i2, rtb_W13B73ARWC, rtb_L72GRDO_e, rtb_u3TP_oj,
          &VITALDEPOT_DW.ROUTECONFLICTLOCK_l);

    /* End of Outputs for SubSystem: '<S368>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S368>/L14A-X72-S-L' */
    M_L_S_14_72 = VITALDEPOT_DW.ROUTECONFLICTLOCK_l.AND1;

    /* DataStoreRead: '<S369>/13-S-WS' */
    rtb_u3SWS_g = M_S_WS_13;

    /* Logic: '<S369>/AND1' */
    rtb_AND1_b = (M_W13A_RWC && M_W13B_73A_NWC);

    /* DataStoreRead: '<S369>/L14A-GR-DO' */
    rtb_L14AGRDO_f = DO_L14A_GR;

    /* DataStoreRead: '<S369>/13-TP' */
    rtb_u3TP_he = M_TP_13;

    /* Outputs for Atomic SubSystem: '<S369>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3SWS_g, rtb_AND1_b, rtb_L14AGRDO_f, rtb_u3TP_he,
          &VITALDEPOT_DW.ROUTECONFLICTLOCK_h);

    /* End of Outputs for SubSystem: '<S369>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S369>/L32-L14B-S-L' */
    M_L_S_32_14 = VITALDEPOT_DW.ROUTECONFLICTLOCK_h.AND1;

    /* DataStoreRead: '<S370>/73B-S-ES' */
    rtb_u3BSES_c = M_S_ES_73B;

    /* Logic: '<S370>/AND1' incorporates:
     *  DataStoreWrite: '<S248>/W73B-RWC'
     */
    rtb_AND1_m = (M_W13B_73A_NWC && VITALDEPOT_DW.POINTCONTROL_d.AND8 &&
                  M_W54_RWC);

    /* DataStoreRead: '<S370>/L72-GR-DO' */
    rtb_L72GRDO_j = DO_L72_GR;

    /* DataStoreRead: '<S370>/73B-TP' */
    rtb_u3BTP_df = M_TP_73B;

    /* Outputs for Atomic SubSystem: '<S370>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3BSES_c, rtb_AND1_m, rtb_L72GRDO_j, rtb_u3BTP_df,
          &VITALDEPOT_DW.ROUTECONFLICTLOCK_i);

    /* End of Outputs for SubSystem: '<S370>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S370>/L34-X72-S-L' */
    M_L_S_34_72 = VITALDEPOT_DW.ROUTECONFLICTLOCK_i.AND1;

    /* DataStoreRead: '<S371>/73B-S-ES' */
    rtb_u3BSES_h = M_S_ES_73B;

    /* Logic: '<S371>/AND1' incorporates:
     *  DataStoreWrite: '<S248>/W73B-RWC'
     */
    rtb_AND1_ie = (M_W13B_73A_NWC && VITALDEPOT_DW.POINTCONTROL_d.AND8 &&
                   M_W54_NWC);

    /* DataStoreRead: '<S371>/L72-GR-DO' */
    rtb_L72GRDO_k = DO_L72_GR;

    /* DataStoreRead: '<S371>/73B-TP' */
    rtb_u3BTP_li = M_TP_73B;

    /* Outputs for Atomic SubSystem: '<S371>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3BSES_h, rtb_AND1_ie, rtb_L72GRDO_k, rtb_u3BTP_li,
          &VITALDEPOT_DW.ROUTECONFLICTLOCK_o);

    /* End of Outputs for SubSystem: '<S371>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S371>/L54-X72-S-L' */
    M_L_S_54_72 = VITALDEPOT_DW.ROUTECONFLICTLOCK_o.AND1;

    /* DataStoreRead: '<S372>/73A-S-WS' */
    rtb_u3ASWS_e = M_S_WS_73A;

    /* DataStoreRead: '<S372>/W13B//73A-RWC' */
    rtb_W13B73ARWC_m = M_W13B_73A_RWC;

    /* DataStoreRead: '<S372>/L14A-GR-DO' */
    rtb_L14AGRDO_i = DO_L14A_GR;

    /* DataStoreRead: '<S372>/73A-TP' */
    rtb_u3ATP_a = M_TP_73A;

    /* Outputs for Atomic SubSystem: '<S372>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3ASWS_e, rtb_W13B73ARWC_m, rtb_L14AGRDO_i, rtb_u3ATP_a,
          &VITALDEPOT_DW.ROUTECONFLICTLOCK_f);

    /* End of Outputs for SubSystem: '<S372>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S372>/L72-L14B-S-L' */
    M_L_S_72_14 = VITALDEPOT_DW.ROUTECONFLICTLOCK_f.AND1;

    /* DataStoreRead: '<S373>/73A-S-WS' */
    rtb_u3ASWS_h = M_S_WS_73A;

    /* Logic: '<S373>/AND1' incorporates:
     *  DataStoreWrite: '<S248>/W73B-RWC'
     */
    rtb_AND1_nv = (M_W13B_73A_NWC && VITALDEPOT_DW.POINTCONTROL_d.AND8 &&
                   M_W54_NWC);

    /* DataStoreRead: '<S373>/L54-GR-DO' */
    rtb_L54GRDO_k = DO_L54_GR;

    /* DataStoreRead: '<S373>/73A-TP' */
    rtb_u3ATP_b = M_TP_73A;

    /* Outputs for Atomic SubSystem: '<S373>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3ASWS_h, rtb_AND1_nv, rtb_L54GRDO_k, rtb_u3ATP_b,
          &VITALDEPOT_DW.ROUTECONFLICTLOCK_lr);

    /* End of Outputs for SubSystem: '<S373>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S373>/L72-X54-S-L' */
    M_L_S_72_54 = VITALDEPOT_DW.ROUTECONFLICTLOCK_lr.AND1;

    /* DataStoreRead: '<S374>/73A-S-WS' */
    rtb_u3ASWS_l = M_S_WS_73A;

    /* Logic: '<S374>/AND1' incorporates:
     *  DataStoreWrite: '<S248>/W73B-NWC'
     */
    rtb_AND1_el = (M_W13B_73A_NWC && VITALDEPOT_DW.POINTCONTROL_d.AND7);

    /* DataStoreRead: '<S374>/L74-GR-DO' */
    rtb_L74GRDO_g = DO_L74_GR;

    /* DataStoreRead: '<S374>/73A-TP' */
    rtb_u3ATP_g = M_TP_73A;

    /* Outputs for Atomic SubSystem: '<S374>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3ASWS_l, rtb_AND1_el, rtb_L74GRDO_g, rtb_u3ATP_g,
          &VITALDEPOT_DW.ROUTECONFLICTLOCK_ow);

    /* End of Outputs for SubSystem: '<S374>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S374>/L72-X74-S-L' */
    M_L_S_72_74 = VITALDEPOT_DW.ROUTECONFLICTLOCK_ow.AND1;

    /* DataStoreRead: '<S375>/73A-S-WS' */
    rtb_u3ASWS_h3 = M_S_WS_73A;

    /* Logic: '<S375>/AND1' incorporates:
     *  DataStoreWrite: '<S248>/W73B-RWC'
     */
    rtb_AND1_f = (M_W13B_73A_NWC && VITALDEPOT_DW.POINTCONTROL_d.AND8 &&
                  M_W54_RWC);

    /* DataStoreRead: '<S375>/L34-GR-DO' */
    rtb_L34GRDO_a = DO_L34_GR;

    /* DataStoreRead: '<S375>/73A-TP' */
    rtb_u3ATP_j = M_TP_73A;

    /* Outputs for Atomic SubSystem: '<S375>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3ASWS_h3, rtb_AND1_f, rtb_L34GRDO_a, rtb_u3ATP_j,
          &VITALDEPOT_DW.ROUTECONFLICTLOCK_b);

    /* End of Outputs for SubSystem: '<S375>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S375>/L72-X34-S-L' */
    M_L_S_72_34 = VITALDEPOT_DW.ROUTECONFLICTLOCK_b.AND1;

    /* DataStoreRead: '<S376>/73B-S-ES' */
    rtb_u3BSES_k = M_S_ES_73B;

    /* Logic: '<S376>/AND1' incorporates:
     *  DataStoreWrite: '<S248>/W73B-NWC'
     */
    rtb_AND1_l0 = (M_W13B_73A_NWC && VITALDEPOT_DW.POINTCONTROL_d.AND7);

    /* DataStoreRead: '<S376>/L72-GR-DO' */
    rtb_L72GRDO_a = DO_L72_GR;

    /* DataStoreRead: '<S376>/73B-TP' */
    rtb_u3BTP_n = M_TP_73B;

    /* Outputs for Atomic SubSystem: '<S376>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3BSES_k, rtb_AND1_l0, rtb_L72GRDO_a, rtb_u3BTP_n,
          &VITALDEPOT_DW.ROUTECONFLICTLOCK_k);

    /* End of Outputs for SubSystem: '<S376>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S376>/L74-X72-S-L' */
    M_L_S_74_72 = VITALDEPOT_DW.ROUTECONFLICTLOCK_k.AND1;

    /* Logic: '<S389>/OR2' incorporates:
     *  Logic: '<S389>/OR1'
     */
    rtb_OR2_p = (M_RL_S_ES_13 && (M_S_ES_73A || M_W13B_73A_NWZ));

    /* DataStoreRead: '<S389>/13-TP' */
    rtb_u3TP_d = M_TP_13;

    /* DataStoreRead: '<S389>/13-RLS' */
    rtb_u3RLS = M_RLS_13;

    /* Outputs for Atomic SubSystem: '<S389>/ROUTE LOCK' */
    D_ES_WS(rtb_OR2_p, rtb_u3TP_d, rtb_u3RLS, &VITALDEPOT_DW.ROUTELOCK);

    /* End of Outputs for SubSystem: '<S389>/ROUTE LOCK' */

    /* DataStoreWrite: '<S389>/13-S-ES' */
    M_S_ES_13 = VITALDEPOT_DW.ROUTELOCK.AND1;

    /* DataStoreRead: '<S390>/13-S-WS-RL' */
    rtb_u3SWSRL = M_RL_S_WS_13;

    /* DataStoreRead: '<S390>/13-TP' */
    rtb_u3TP_n = M_TP_13;

    /* DataStoreRead: '<S390>/13-RLS' */
    rtb_u3RLS_i = M_RLS_13;

    /* Outputs for Atomic SubSystem: '<S390>/ROUTE LOCK' */
    D_ES_WS(rtb_u3SWSRL, rtb_u3TP_n, rtb_u3RLS_i, &VITALDEPOT_DW.ROUTELOCK_i);

    /* End of Outputs for SubSystem: '<S390>/ROUTE LOCK' */

    /* DataStoreWrite: '<S390>/13-S-WS' */
    M_S_WS_13 = VITALDEPOT_DW.ROUTELOCK_i.AND1;

    /* DataStoreRead: '<S391>/73A-S-ES-RL' */
    rtb_u3ASESRL = M_RL_S_ES_73A;

    /* DataStoreRead: '<S391>/73A-TP' */
    rtb_u3ATP_h = M_TP_73A;

    /* DataStoreRead: '<S391>/73A-RLS' */
    rtb_u3ARLS = M_RLS_73A;

    /* Outputs for Atomic SubSystem: '<S391>/ROUTE LOCK' */
    D_ES_WS(rtb_u3ASESRL, rtb_u3ATP_h, rtb_u3ARLS, &VITALDEPOT_DW.ROUTELOCK_l);

    /* End of Outputs for SubSystem: '<S391>/ROUTE LOCK' */

    /* DataStoreWrite: '<S391>/73A-S-ES' */
    M_S_ES_73A = VITALDEPOT_DW.ROUTELOCK_l.AND1;

    /* Logic: '<S392>/OR2' incorporates:
     *  Logic: '<S392>/OR3'
     */
    rtb_OR2_pt = ((M_S_WS_13 || M_W13B_73A_NWZ) && M_S_WS_73B);

    /* DataStoreRead: '<S392>/73A-TP' */
    rtb_u3ATP_n = M_TP_73A;

    /* DataStoreRead: '<S392>/73A-RLS' */
    rtb_u3ARLS_o = M_RLS_73A;

    /* Outputs for Atomic SubSystem: '<S392>/ROUTE LOCK' */
    D_ES_WS(rtb_OR2_pt, rtb_u3ATP_n, rtb_u3ARLS_o, &VITALDEPOT_DW.ROUTELOCK_li);

    /* End of Outputs for SubSystem: '<S392>/ROUTE LOCK' */

    /* DataStoreWrite: '<S392>/73A-S-WS' */
    M_S_WS_73A = VITALDEPOT_DW.ROUTELOCK_li.AND1;

    /* Logic: '<S393>/OR1' */
    rtb_OR1_l = (M_S_ES_73A || M_W13B_73A_RWZ);

    /* DataStoreRead: '<S393>/73B-TP' */
    rtb_u3BTP_c = M_TP_73B;

    /* DataStoreRead: '<S393>/73B-RLS' */
    rtb_u3BRLS = M_RLS_73B;

    /* Outputs for Atomic SubSystem: '<S393>/ROUTE LOCK' */
    D_ES_WS(rtb_OR1_l, rtb_u3BTP_c, rtb_u3BRLS, &VITALDEPOT_DW.ROUTELOCK_n);

    /* End of Outputs for SubSystem: '<S393>/ROUTE LOCK' */

    /* DataStoreWrite: '<S393>/73B-S-ES' */
    M_S_ES_73B = VITALDEPOT_DW.ROUTELOCK_n.AND1;

    /* DataStoreRead: '<S394>/73B-S-WS-RL' */
    rtb_u3BSWSRL = M_RL_S_WS_73B;

    /* DataStoreRead: '<S394>/73B-TP' */
    rtb_u3BTP_h = M_TP_73B;

    /* DataStoreRead: '<S394>/73B-RLS' */
    rtb_u3BRLS_p = M_RLS_73B;

    /* Outputs for Atomic SubSystem: '<S394>/ROUTE LOCK' */
    D_ES_WS(rtb_u3BSWSRL, rtb_u3BTP_h, rtb_u3BRLS_p, &VITALDEPOT_DW.ROUTELOCK_c);

    /* End of Outputs for SubSystem: '<S394>/ROUTE LOCK' */

    /* DataStoreWrite: '<S394>/73B-S-WS' */
    M_S_WS_73B = VITALDEPOT_DW.ROUTELOCK_c.AND1;

    /* DataStoreRead: '<S401>/L12-L14B-S' */
    rtb_L12L14BS_p = M_R_S_12_14;

    /* DataStoreRead: '<S401>/12-TP' */
    rtb_u2TP_p = M_TP_12;

    /* Outputs for Atomic SubSystem: '<S401>/SIGNAL LIGHTING' */
    D_SIG_CTRL(rtb_L12L14BS_p, rtb_u2TP_p, &VITALDEPOT_DW.SIGNALLIGHTING);

    /* End of Outputs for SubSystem: '<S401>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S401>/L12-GR-DO' */
    DO_L12_GR = VITALDEPOT_DW.SIGNALLIGHTING.AND19;

    /* Logic: '<S402>/OR1' */
    rtb_OR1_hm = (M_R_S_14_12 || M_R_S_14_32 || M_R_S_14_72);

    /* DataStoreRead: '<S402>/14-TP' */
    rtb_u4TP_f = M_TP_14;

    /* Outputs for Atomic SubSystem: '<S402>/SIGNAL LIGHTING' */
    D_SIG_CTRL(rtb_OR1_hm, rtb_u4TP_f, &VITALDEPOT_DW.SIGNALLIGHTING_c);

    /* End of Outputs for SubSystem: '<S402>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S402>/L14A-GR-DO' */
    DO_L14A_GR = VITALDEPOT_DW.SIGNALLIGHTING_c.AND19;

    /* DataStoreRead: '<S403>/L32-L14B-S' */
    rtb_L32L14BS_k = M_R_S_32_14;

    /* DataStoreRead: '<S403>/32-TP' */
    rtb_u2TP_f = M_TP_32;

    /* Outputs for Atomic SubSystem: '<S403>/SIGNAL LIGHTING' */
    D_SIG_CTRL(rtb_L32L14BS_k, rtb_u2TP_f, &VITALDEPOT_DW.SIGNALLIGHTING_d);

    /* End of Outputs for SubSystem: '<S403>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S403>/L32-GR-DO' */
    DO_L32_GR = VITALDEPOT_DW.SIGNALLIGHTING_d.AND19;

    /* DataStoreRead: '<S404>/L34-X72-S' */
    rtb_L34X72S_k = M_R_S_34_72;

    /* DataStoreRead: '<S404>/34-TP' */
    rtb_u4TP_m = M_TP_34;

    /* Outputs for Atomic SubSystem: '<S404>/SIGNAL LIGHTING' */
    D_SIG_CTRL(rtb_L34X72S_k, rtb_u4TP_m, &VITALDEPOT_DW.SIGNALLIGHTING_k);

    /* End of Outputs for SubSystem: '<S404>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S404>/L34-GR-DO' */
    DO_L34_GR = VITALDEPOT_DW.SIGNALLIGHTING_k.AND19;

    /* DataStoreRead: '<S405>/L54-X72-S' */
    rtb_L54X72S_e = M_R_S_54_72;

    /* DataStoreRead: '<S405>/54-TP' */
    rtb_u4TP_e = M_TP_54;

    /* Outputs for Atomic SubSystem: '<S405>/SIGNAL LIGHTING' */
    D_SIG_CTRL(rtb_L54X72S_e, rtb_u4TP_e, &VITALDEPOT_DW.SIGNALLIGHTING_cy);

    /* End of Outputs for SubSystem: '<S405>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S405>/L54-GR-DO' */
    DO_L54_GR = VITALDEPOT_DW.SIGNALLIGHTING_cy.AND19;

    /* Logic: '<S406>/OR1' */
    rtb_OR1_a = (M_R_S_72_14 || M_R_S_72_34 || M_R_S_72_54 || M_R_S_72_74);

    /* DataStoreRead: '<S406>/72-TP' */
    rtb_u2TP_a = M_TP_72;

    /* Outputs for Atomic SubSystem: '<S406>/SIGNAL LIGHTING' */
    D_SIG_CTRL(rtb_OR1_a, rtb_u2TP_a, &VITALDEPOT_DW.SIGNALLIGHTING_p);

    /* End of Outputs for SubSystem: '<S406>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S406>/L72-GR-DO' */
    DO_L72_GR = VITALDEPOT_DW.SIGNALLIGHTING_p.AND19;

    /* DataStoreRead: '<S407>/L74-X72-S' incorporates:
     *  DataStoreWrite: '<S352>/L74A-X72-D'
     */
    rtb_L74X72S_k = VITALDEPOT_DW.ROUTECHECK_a.AND2;

    /* DataStoreRead: '<S407>/74-TP' */
    rtb_u4TP_j = M_TP_74;

    /* Outputs for Atomic SubSystem: '<S407>/SIGNAL LIGHTING' */
    D_SIG_CTRL(rtb_L74X72S_k, rtb_u4TP_j, &VITALDEPOT_DW.SIGNALLIGHTING_c3);

    /* End of Outputs for SubSystem: '<S407>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S407>/L74-GR-DO' */
    DO_L74_GR = VITALDEPOT_DW.SIGNALLIGHTING_c3.AND19;

    /* DataStoreRead: '<S14>/73B-TPR-DI' */
    VITALDEPOT_DW.u3BTPRDI = DI_TPR_73B;
  }

  /* Outputs for Atomic SubSystem: '<S14>/D_TP9' */
  D_TP(VITALDEPOT_M, VITALDEPOT_DW.u3BTPRDI, &VITALDEPOT_DW.D_TP9);

  /* End of Outputs for SubSystem: '<S14>/D_TP9' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S14>/73B-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtD_TP9Outport1'
     */
    M_TP_73B = VITALDEPOT_DW.D_TP9.DV_TON_d.LogicalOperator2;

    /* DataStoreRead: '<S14>/73A-TPR-DI' */
    VITALDEPOT_DW.u3ATPRDI = DI_TPR_73A;
  }

  /* Outputs for Atomic SubSystem: '<S14>/D_TP8' */
  D_TP(VITALDEPOT_M, VITALDEPOT_DW.u3ATPRDI, &VITALDEPOT_DW.D_TP8);

  /* End of Outputs for SubSystem: '<S14>/D_TP8' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S14>/73A-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtD_TP8Outport1'
     */
    M_TP_73A = VITALDEPOT_DW.D_TP8.DV_TON_d.LogicalOperator2;

    /* DataStoreRead: '<S14>/72-TPR-DI' */
    VITALDEPOT_DW.u2TPRDI = DI_TPR_72;
  }

  /* Outputs for Atomic SubSystem: '<S14>/D_TP7' */
  D_TP(VITALDEPOT_M, VITALDEPOT_DW.u2TPRDI, &VITALDEPOT_DW.D_TP7);

  /* End of Outputs for SubSystem: '<S14>/D_TP7' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S14>/72-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtD_TP7Outport1'
     */
    M_TP_72 = VITALDEPOT_DW.D_TP7.DV_TON_d.LogicalOperator2;

    /* DataStoreRead: '<S14>/54-TPR-DI' */
    VITALDEPOT_DW.u4TPRDI = DI_TPR_54;
  }

  /* Outputs for Atomic SubSystem: '<S14>/D_TP6' */
  D_TP(VITALDEPOT_M, VITALDEPOT_DW.u4TPRDI, &VITALDEPOT_DW.D_TP6);

  /* End of Outputs for SubSystem: '<S14>/D_TP6' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S14>/54-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtD_TP6Outport1'
     */
    M_TP_54 = VITALDEPOT_DW.D_TP6.DV_TON_d.LogicalOperator2;

    /* DataStoreRead: '<S14>/34-TPR-DI' */
    VITALDEPOT_DW.u4TPRDI_c = DI_TPR_34;
  }

  /* Outputs for Atomic SubSystem: '<S14>/D_TP5' */
  D_TP(VITALDEPOT_M, VITALDEPOT_DW.u4TPRDI_c, &VITALDEPOT_DW.D_TP5);

  /* End of Outputs for SubSystem: '<S14>/D_TP5' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S14>/34-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtD_TP5Outport1'
     */
    M_TP_34 = VITALDEPOT_DW.D_TP5.DV_TON_d.LogicalOperator2;

    /* DataStoreRead: '<S14>/32-TPR-DI' */
    VITALDEPOT_DW.u2TPRDI_i = DI_TPR_32;
  }

  /* Outputs for Atomic SubSystem: '<S14>/D_TP4' */
  D_TP(VITALDEPOT_M, VITALDEPOT_DW.u2TPRDI_i, &VITALDEPOT_DW.D_TP4);

  /* End of Outputs for SubSystem: '<S14>/D_TP4' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S14>/32-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtD_TP4Outport1'
     */
    M_TP_32 = VITALDEPOT_DW.D_TP4.DV_TON_d.LogicalOperator2;

    /* DataStoreRead: '<S14>/14-TPR-DI' */
    VITALDEPOT_DW.u4TPRDI_h = DI_TPR_14;
  }

  /* Outputs for Atomic SubSystem: '<S14>/D_TP3' */
  D_TP(VITALDEPOT_M, VITALDEPOT_DW.u4TPRDI_h, &VITALDEPOT_DW.D_TP3);

  /* End of Outputs for SubSystem: '<S14>/D_TP3' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S14>/14-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtD_TP3Outport1'
     */
    M_TP_14 = VITALDEPOT_DW.D_TP3.DV_TON_d.LogicalOperator2;

    /* DataStoreRead: '<S14>/13-TPR-DI' */
    VITALDEPOT_DW.u3TPRDI = DI_TPR_13;
  }

  /* Outputs for Atomic SubSystem: '<S14>/D_TP2' */
  D_TP(VITALDEPOT_M, VITALDEPOT_DW.u3TPRDI, &VITALDEPOT_DW.D_TP2);

  /* End of Outputs for SubSystem: '<S14>/D_TP2' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S14>/13-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtD_TP2Outport1'
     */
    M_TP_13 = VITALDEPOT_DW.D_TP2.DV_TON_d.LogicalOperator2;

    /* DataStoreRead: '<S14>/74-TPR-DI' */
    VITALDEPOT_DW.u4TPRDI_e = DI_TPR_74;
  }

  /* Outputs for Atomic SubSystem: '<S14>/D_TP10' */
  D_TP(VITALDEPOT_M, VITALDEPOT_DW.u4TPRDI_e, &VITALDEPOT_DW.D_TP10);

  /* End of Outputs for SubSystem: '<S14>/D_TP10' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S14>/74-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtD_TP10Outport1'
     */
    M_TP_74 = VITALDEPOT_DW.D_TP10.DV_TON_d.LogicalOperator2;

    /* DataStoreRead: '<S14>/12-TPR-DI' */
    VITALDEPOT_DW.u2TPRDI_b = DI_TPR_12;
  }

  /* Outputs for Atomic SubSystem: '<S14>/D_TP1' */
  D_TP(VITALDEPOT_M, VITALDEPOT_DW.u2TPRDI_b, &VITALDEPOT_DW.D_TP1);

  /* End of Outputs for SubSystem: '<S14>/D_TP1' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S14>/12-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtD_TP1Outport1'
     */
    M_TP_12 = VITALDEPOT_DW.D_TP1.DV_TON_d.LogicalOperator2;

    /* DataStoreRead: '<S3>/COMM-CHECK-IN' */
    VITALDEPOT_DW.COMMCHECKIN = M_CHK_NV_V;

    /* DataStoreRead: '<S3>/COMM1-DI' */
    rtb_COMM1DI = DI_COMM_1;

    /* DataStoreRead: '<S3>/COMM2-DI' */
    rtb_COMM2DI = DI_COMM_2;
  }

  /* Outputs for Atomic SubSystem: '<S3>/COMMUNICATION CHECK' */
  D_COMM(VITALDEPOT_M, VITALDEPOT_DW.COMMCHECKIN, rtb_COMM1DI, rtb_COMM2DI,
         &VITALDEPOT_DW.COMMUNICATIONCHECK);

  /* End of Outputs for SubSystem: '<S3>/COMMUNICATION CHECK' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S3>/COMM-OK' incorporates:
     *  SignalConversion: '<S3>/TmpSignal ConversionAtCOMMUNICATION CHECKOutport1'
     */
    VITALDEPOT_DW.M_COMM_OK = VITALDEPOT_DW.COMMUNICATIONCHECK.LogicalOperator3;

    /* DiscretePulseGenerator: '<S3>/0.5S' */
    if (clockTickCounter_0 >= 9) {
      clockTickCounter = 0;
    } else {
      clockTickCounter = clockTickCounter_0 + 1;
    }

    /* DataStoreWrite: '<S3>/FLASH-0.5S' incorporates:
     *  DiscretePulseGenerator: '<S3>/0.5S'
     */
    VITALDEPOT_DW.M_GV_FLASH_500 = ((clockTickCounter_0 < 5) &&
      (clockTickCounter_0 >= 0));

    /* DiscretePulseGenerator: '<S3>/1S' */
    if (clockTickCounter_i_0 >= 19) {
      clockTickCounter_i = 0;
    } else {
      clockTickCounter_i = clockTickCounter_i_0 + 1;
    }

    /* DataStoreWrite: '<S3>/FLASH-1S' incorporates:
     *  DiscretePulseGenerator: '<S3>/1S'
     */
    M_GV_FLASH_1000 = ((clockTickCounter_i_0 < 10) && (clockTickCounter_i_0 >= 0));

    /* DataStoreWrite: '<S3>/COMM-CHECK-OUT' */
    M_CHK_V_NV = M_GV_FLASH_1000;

    /* DataStoreWrite: '<S3>/SEMENTARA' incorporates:
     *  Logic: '<S3>/Logical Operator'
     */
    DO_VDR = (DI_SYS_1 && DI_SYS_2);

    /* SignalConversion: '<Root>/TmpSignal ConversionAtGR-DO-TOInport1' */
    rty_GRDOTO[0] = rtb_L12GRDO_m;
    rty_GRDOTO[1] = rtb_L32GRDO_ld;
    rty_GRDOTO[2] = rtb_L72GRDO_io;
    rty_GRDOTO[3] = rtb_L14AGRDO_e;
    rty_GRDOTO[4] = rtb_L34GRDO_e;
    rty_GRDOTO[5] = rtb_L54GRDO_i;
    rty_GRDOTO[6] = rtb_L74GRDO_ai;
    rty_GRDOTO[7] = rtb_L14BGRDO;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtGR-DOInport1' */
    rty_GRDO[0] = rtb_L12GRDO_m;
    rty_GRDO[1] = rtb_L32GRDO_ld;
    rty_GRDO[2] = rtb_L72GRDO_io;
    rty_GRDO[3] = rtb_L14AGRDO_e;
    rty_GRDO[4] = rtb_L34GRDO_e;
    rty_GRDO[5] = rtb_L54GRDO_i;
    rty_GRDO[6] = rtb_L74GRDO_ai;
    rty_GRDO[7] = rtb_L14BGRDO_n;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtL-TOInport1' */
    rty_LTO[0] = rtb_W13AL;
    rty_LTO[1] = rtb_W13B73AL;
    rty_LTO[2] = rtb_W54L;
    rty_LTO[3] = rtb_W73BL;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtLS-TOInport1' */
    rty_LSTO[0] = rtb_W13ALS;
    rty_LSTO[1] = rtb_W13B73ALS;
    rty_LSTO[2] = rtb_W54LS;
    rty_LSTO[3] = rtb_W73BLS;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtNWC-TOInport1' */
    rty_NWCTO[0] = rtb_W13ANWC_k;
    rty_NWCTO[1] = rtb_W13B73ANWC_cl;
    rty_NWCTO[2] = rtb_W54NWC_g;
    rty_NWCTO[3] = rtb_W73BNWC_c;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtNWP-TOInport1' */
    rty_NWPTO[0] = rtb_W13ANWP;
    rty_NWPTO[1] = rtb_W13B73ANWP;
    rty_NWPTO[2] = rtb_W54NWP;
    rty_NWPTO[3] = rtb_W73BNWP;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtNWR-DOInport1' */
    rty_NWRDO[0] = rtb_W13ANWRDO;
    rty_NWRDO[1] = rtb_W13B73ANWRDO;
    rty_NWRDO[2] = rtb_W54NWRDO;
    rty_NWRDO[3] = rtb_W73BNWRDO;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtNWTE-TOInport1' */
    rty_NWTETO[0] = rtb_W13ANWTE;
    rty_NWTETO[1] = rtb_W13B73ANWTE;
    rty_NWTETO[2] = rtb_W54NWTE;
    rty_NWTETO[3] = rtb_W73BNWTE;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtNWZ-TOInport1' */
    rty_NWZTO[0] = rtb_W13ANWZ_g;
    rty_NWZTO[1] = rtb_W13B73ANWZ_o;
    rty_NWZTO[2] = rtb_W54NWZ_a;
    rty_NWZTO[3] = rtb_W73BNWZ_f;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtRRLS-TOInport1' */
    rty_RRLSTO[0] = rtb_X12RRLS_a;
    rty_RRLSTO[1] = rtb_X32RRLS_l;
    rty_RRLSTO[2] = rtb_X72RRLS_f;
    rty_RRLSTO[3] = rtb_X34RRLS_e;
    rty_RRLSTO[4] = rtb_X54RRLS_n;
    rty_RRLSTO[5] = rtb_X74RRLS_a;
    rty_RRLSTO[6] = rtb_L14ARRLS_f;
    rty_RRLSTO[7] = rtb_L14BRRLS_g;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtRWC-TOInport1' */
    rty_RWCTO[0] = rtb_W13ARWC_dj;
    rty_RWCTO[1] = rtb_W13B73ARWC_l;
    rty_RWCTO[2] = rtb_W54RWC_k;
    rty_RWCTO[3] = rtb_W73BRWC_jj;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtRWP-TOInport1' */
    rty_RWPTO[0] = rtb_W13ARWP;
    rty_RWPTO[1] = rtb_W13B73ARWP;
    rty_RWPTO[2] = rtb_W54RWP;
    rty_RWPTO[3] = rtb_W73BRWP;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtRWR-DOInport1' */
    rty_RWRDO[0] = rtb_W13ARWRDO;
    rty_RWRDO[1] = rtb_W13B73ARWRDO;
    rty_RWRDO[2] = rtb_W54RWRDO;
    rty_RWRDO[3] = rtb_W73BRWRDO;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtRWTE-TOInport1' */
    rty_RWTETO[0] = rtb_W13ARWTE;
    rty_RWTETO[1] = rtb_W13B73ARWTE;
    rty_RWTETO[2] = rtb_W54RWTE;
    rty_RWTETO[3] = rtb_W73BRWTE;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtRWZ-TOInport1' */
    rty_RWZTO[0] = rtb_W13ARWZ_k;
    rty_RWZTO[1] = rtb_W13B73ARWZ_b;
    rty_RWZTO[2] = rtb_W54RWZ_m;
    rty_RWZTO[3] = rtb_W73BRWZ_p;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtS-AS-TOInport1' */
    rty_SASTO[0] = rtb_L12SAS_j;
    rty_SASTO[1] = rtb_L32SAS_o;
    rty_SASTO[2] = rtb_L72SAS_p;
    rty_SASTO[3] = rtb_L14ASAS_m;
    rty_SASTO[4] = rtb_L34SAS_n;
    rty_SASTO[5] = rtb_L54SAS_o;
    rty_SASTO[6] = rtb_L74SAS_e;
    rty_SASTO[7] = VITALDEPOT_DW.M_AS_S_L14B;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtS-ES-TOInport1' */
    rty_SESTO[0] = rtb_u3SES_f;
    rty_SESTO[1] = rtb_u3ASES_e;
    rty_SESTO[2] = rtb_u3BSES_j;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtS-WS-TOInport1' */
    rty_SWSTO[0] = rtb_u3SWS_l;
    rty_SWSTO[1] = rtb_u3ASWS_b;
    rty_SWSTO[2] = rtb_u3BSWS_f;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtSWRLS-TOInport1' */
    rty_SWRLSTO[0] = rtb_W13ASWRLS_p;
    rty_SWRLSTO[1] = rtb_W13B73ASWRLS;
    rty_SWRLSTO[2] = rtb_W54SWRLS_o;
    rty_SWRLSTO[3] = rtb_W73BSWRLS_i;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtTO-MAINInport1' */
    rty_TOMAIN[0] = rtb_u4TP_l;
    rty_TOMAIN[1] = rtb_u4ARRLSPBCTRL;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtTP-TOInport1' */
    rty_TPTO[0] = rtb_u2TP_d;
    rty_TPTO[1] = rtb_u3TP_kg;
    rty_TPTO[2] = rtb_u4TP_l;
    rty_TPTO[3] = rtb_u2TP_o;
    rty_TPTO[4] = rtb_u4TP_np;
    rty_TPTO[5] = rtb_u4TP_b;
    rty_TPTO[6] = rtb_u2TP_i;
    rty_TPTO[7] = rtb_u3ATP_p;
    rty_TPTO[8] = rtb_u3BTP_jy;
    rty_TPTO[9] = rtb_u4TP_eu;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtTPZ-TOInport1' */
    rty_TPZTO[0] = rtb_W13ATPZ_e;
    rty_TPZTO[1] = rtb_W13B73ATPZ_bt;
    rty_TPZTO[2] = rtb_W54TPZ_in;
    rty_TPZTO[3] = rtb_W73BTPZ_e;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtWLPR-DOInport1' */
    rty_WLPRDO[0] = rtb_W13AWLPRDO;
    rty_WLPRDO[1] = rtb_W13B73AWLPRDO;
    rty_WLPRDO[2] = rtb_W54WLPRDO;
    rty_WLPRDO[3] = rtb_W73BWLPRDO;
  }

  clockTickCounter_0 = clockTickCounter;
  clockTickCounter_i_0 = clockTickCounter_i;
  VITALDEPOT_DW.M_RRLS_L14A = M_RRLS_L14A;
  VITALDEPOT_DW.M_RR = M_RR;
  VITALDEPOT_DW.M_CHK_NV_V = M_CHK_NV_V;
  VITALDEPOT_DW.M_REQ_S_12_14 = M_REQ_S_12_14;
  VITALDEPOT_DW.M_REQ_S_14_12 = M_REQ_S_14_12;
  VITALDEPOT_DW.M_REQ_S_14_32 = M_REQ_S_14_32;
  VITALDEPOT_DW.M_REQ_S_14_72 = M_REQ_S_14_72;
  VITALDEPOT_DW.M_REQ_S_32_14 = M_REQ_S_32_14;
  VITALDEPOT_DW.M_REQ_S_34_72 = M_REQ_S_34_72;
  VITALDEPOT_DW.M_REQ_S_54_72 = M_REQ_S_54_72;
  VITALDEPOT_DW.M_REQ_S_72_14 = M_REQ_S_72_14;
  VITALDEPOT_DW.M_REQ_S_72_34 = M_REQ_S_72_34;
  VITALDEPOT_DW.M_REQ_S_72_54 = M_REQ_S_72_54;
  VITALDEPOT_DW.M_REQ_S_72_74 = M_REQ_S_72_74;
  VITALDEPOT_DW.M_REQ_S_74_72 = M_REQ_S_74_72;
  VITALDEPOT_DW.M_W13A_N_REQ = M_W13A_N_REQ;
  VITALDEPOT_DW.M_W13B_73A_N_REQ = M_W13B_73A_N_REQ;
  VITALDEPOT_DW.M_W54_N_REQ = M_W54_N_REQ;
  VITALDEPOT_DW.M_W73B_N_REQ = M_W73B_N_REQ;
  VITALDEPOT_DW.M_W13A_R_REQ = M_W13A_R_REQ;
  VITALDEPOT_DW.M_W13B_73A_R_REQ = M_W13B_73A_R_REQ;
  VITALDEPOT_DW.M_W54_R_REQ = M_W54_R_REQ;
  VITALDEPOT_DW.M_W73B_R_REQ = M_W73B_R_REQ;
  VITALDEPOT_DW.M_W13A_OOC = M_W13A_OOC;
  VITALDEPOT_DW.M_W13B_73A_OOC = M_W13B_73A_OOC;
  VITALDEPOT_DW.M_W54_OOC = M_W54_OOC;
  VITALDEPOT_DW.M_W73B_OOC = M_W73B_OOC;
  VITALDEPOT_DW.M_RRLSPB_CTRL_L14B = M_RRLSPB_CTRL_L14B;
  VITALDEPOT_DW.M_RRLSPB_CTRL_X12 = M_RRLSPB_CTRL_X12;
  VITALDEPOT_DW.M_RRLSPB_CTRL_X32 = M_RRLSPB_CTRL_X32;
  VITALDEPOT_DW.M_RRLSPB_CTRL_X34 = M_RRLSPB_CTRL_X34;
  VITALDEPOT_DW.M_RRLSPB_CTRL_X54 = M_RRLSPB_CTRL_X54;
  VITALDEPOT_DW.M_RRLSPB_CTRL_X72 = M_RRLSPB_CTRL_X72;
  VITALDEPOT_DW.M_RRLSPB_CTRL_X74 = M_RRLSPB_CTRL_X74;
  VITALDEPOT_DW.M_W13A_SWRLSPB_CTRL = M_W13A_SWRLSPB_CTRL;
  VITALDEPOT_DW.M_W13B_73A_SWRLSPB_CTRL = M_W13B_73A_SWRLSPB_CTRL;
  VITALDEPOT_DW.M_W54_SWRLSPB_CTRL = M_W54_SWRLSPB_CTRL;
  VITALDEPOT_DW.M_W73B_SWRLSPB_CTRL = M_W73B_SWRLSPB_CTRL;
  VITALDEPOT_DW.M_RS_12_14 = M_RS_12_14;
  VITALDEPOT_DW.M_RS_14_12 = M_RS_14_12;
  VITALDEPOT_DW.M_RS_14_32 = M_RS_14_32;
  VITALDEPOT_DW.M_RS_14_72 = M_RS_14_72;
  VITALDEPOT_DW.M_RS_32_14 = M_RS_32_14;
  VITALDEPOT_DW.M_RS_34_72 = M_RS_34_72;
  VITALDEPOT_DW.M_RS_54_72 = M_RS_54_72;
  VITALDEPOT_DW.M_RS_72_14 = M_RS_72_14;
  VITALDEPOT_DW.M_RS_72_34 = M_RS_72_34;
  VITALDEPOT_DW.M_RS_72_54 = M_RS_72_54;
  VITALDEPOT_DW.M_RS_72_74 = M_RS_72_74;
  VITALDEPOT_DW.M_RS_74_72 = M_RS_74_72;
  VITALDEPOT_DW.DI_VDR = DI_VDR;
  VITALDEPOT_DW.DI_TPR_12 = DI_TPR_12;
  VITALDEPOT_DW.DI_TPR_13 = DI_TPR_13;
  VITALDEPOT_DW.DI_TPR_14 = DI_TPR_14;
  VITALDEPOT_DW.DI_TPR_32 = DI_TPR_32;
  VITALDEPOT_DW.DI_TPR_34 = DI_TPR_34;
  VITALDEPOT_DW.DI_TPR_54 = DI_TPR_54;
  VITALDEPOT_DW.DI_TPR_72 = DI_TPR_72;
  VITALDEPOT_DW.DI_TPR_73A = DI_TPR_73A;
  VITALDEPOT_DW.DI_TPR_73B = DI_TPR_73B;
  VITALDEPOT_DW.DI_TPR_74 = DI_TPR_74;
  VITALDEPOT_DW.DI_NWP_W13A = DI_NWP_W13A;
  VITALDEPOT_DW.DI_NWP_W13B_73A = DI_NWP_W13B_73A;
  VITALDEPOT_DW.DI_NWP_W54 = DI_NWP_W54;
  VITALDEPOT_DW.DI_NWP_W73B = DI_NWP_W73B;
  VITALDEPOT_DW.DI_RWP_W13A = DI_RWP_W13A;
  VITALDEPOT_DW.DI_RWP_W13B_73A = DI_RWP_W13B_73A;
  VITALDEPOT_DW.DI_RWP_W54 = DI_RWP_W54;
  VITALDEPOT_DW.DI_RWP_W73B = DI_RWP_W73B;
  VITALDEPOT_DW.DI_COMM_1 = DI_COMM_1;
  VITALDEPOT_DW.DI_COMM_2 = DI_COMM_2;
  VITALDEPOT_DW.DI_SYS_1 = DI_SYS_1;
  VITALDEPOT_DW.DI_SYS_2 = DI_SYS_2;
  VITALDEPOT_DW.M_TP_14 = M_TP_14;
  VITALDEPOT_DW.M_CHK_V_NV = M_CHK_V_NV;
  VITALDEPOT_DW.M_TP_12 = M_TP_12;
  VITALDEPOT_DW.M_TP_13 = M_TP_13;
  VITALDEPOT_DW.M_TP_32 = M_TP_32;
  VITALDEPOT_DW.M_TP_34 = M_TP_34;
  VITALDEPOT_DW.M_TP_54 = M_TP_54;
  VITALDEPOT_DW.M_TP_72 = M_TP_72;
  VITALDEPOT_DW.M_TP_73A = M_TP_73A;
  VITALDEPOT_DW.M_TP_73B = M_TP_73B;
  VITALDEPOT_DW.M_TP_74 = M_TP_74;
  VITALDEPOT_DW.M_S_ES_13 = M_S_ES_13;
  VITALDEPOT_DW.M_S_ES_73A = M_S_ES_73A;
  VITALDEPOT_DW.M_S_ES_73B = M_S_ES_73B;
  VITALDEPOT_DW.M_S_WS_13 = M_S_WS_13;
  VITALDEPOT_DW.M_S_WS_73A = M_S_WS_73A;
  VITALDEPOT_DW.M_S_WS_73B = M_S_WS_73B;
  VITALDEPOT_DW.M_W13A_NWC = M_W13A_NWC;
  VITALDEPOT_DW.M_W13B_73A_NWC = M_W13B_73A_NWC;
  VITALDEPOT_DW.M_W54_NWC = M_W54_NWC;
  VITALDEPOT_DW.M_W73B_NWC = M_W73B_NWC;
  VITALDEPOT_DW.M_W13A_NWP = M_W13A_NWP;
  VITALDEPOT_DW.M_W13B_73A_NWP = M_W13B_73A_NWP;
  VITALDEPOT_DW.M_W54_NWP = M_W54_NWP;
  VITALDEPOT_DW.M_W73B_NWP = M_W73B_NWP;
  VITALDEPOT_DW.M_W13A_NWZ = M_W13A_NWZ;
  VITALDEPOT_DW.M_W13B_73A_NWZ = M_W13B_73A_NWZ;
  VITALDEPOT_DW.M_W54_NWZ = M_W54_NWZ;
  VITALDEPOT_DW.M_W73B_NWZ = M_W73B_NWZ;
  VITALDEPOT_DW.M_W13A_NW_TE = M_W13A_NW_TE;
  VITALDEPOT_DW.M_W13B_73A_NW_TE = M_W13B_73A_NW_TE;
  VITALDEPOT_DW.M_W54_NW_TE = M_W54_NW_TE;
  VITALDEPOT_DW.M_W73B_NW_TE = M_W73B_NW_TE;
  VITALDEPOT_DW.M_W13A_RWC = M_W13A_RWC;
  VITALDEPOT_DW.M_W13B_73A_RWC = M_W13B_73A_RWC;
  VITALDEPOT_DW.M_W54_RWC = M_W54_RWC;
  VITALDEPOT_DW.M_W73B_RWC = M_W73B_RWC;
  VITALDEPOT_DW.M_W13A_RWP = M_W13A_RWP;
  VITALDEPOT_DW.M_W13B_73A_RWP = M_W13B_73A_RWP;
  VITALDEPOT_DW.M_W54_RWP = M_W54_RWP;
  VITALDEPOT_DW.M_W73B_RWP = M_W73B_RWP;
  VITALDEPOT_DW.M_W13A_RWZ = M_W13A_RWZ;
  VITALDEPOT_DW.M_W13B_73A_RWZ = M_W13B_73A_RWZ;
  VITALDEPOT_DW.M_W54_RWZ = M_W54_RWZ;
  VITALDEPOT_DW.M_W73B_RWZ = M_W73B_RWZ;
  VITALDEPOT_DW.M_W13A_RW_TE = M_W13A_RW_TE;
  VITALDEPOT_DW.M_W13B_73A_RW_TE = M_W13B_73A_RW_TE;
  VITALDEPOT_DW.M_W54_RW_TE = M_W54_RW_TE;
  VITALDEPOT_DW.M_W73B_RW_TE = M_W73B_RW_TE;
  VITALDEPOT_DW.M_W13A_L = M_W13A_L;
  VITALDEPOT_DW.M_W13B_73A_L = M_W13B_73A_L;
  VITALDEPOT_DW.M_W54_L = M_W54_L;
  VITALDEPOT_DW.M_W73B_L = M_W73B_L;
  VITALDEPOT_DW.M_W13A_LS = M_W13A_LS;
  VITALDEPOT_DW.M_W13B_73A_LS = M_W13B_73A_LS;
  VITALDEPOT_DW.M_W54_LS = M_W54_LS;
  VITALDEPOT_DW.M_W73B_LS = M_W73B_LS;
  VITALDEPOT_DW.M_W13A_SWRLS = M_W13A_SWRLS;
  VITALDEPOT_DW.M_W13B_73A_SWRLS = M_W13B_73A_SWRLS;
  VITALDEPOT_DW.M_W54_SWRLS = M_W54_SWRLS;
  VITALDEPOT_DW.M_W73B_SWRLS = M_W73B_SWRLS;
  VITALDEPOT_DW.M_W13A_TPZ = M_W13A_TPZ;
  VITALDEPOT_DW.M_W13B_73A_TPZ = M_W13B_73A_TPZ;
  VITALDEPOT_DW.M_W54_TPZ = M_W54_TPZ;
  VITALDEPOT_DW.M_W73B_TPZ = M_W73B_TPZ;
  VITALDEPOT_DW.DO_L12_GR = DO_L12_GR;
  VITALDEPOT_DW.DO_L14A_GR = DO_L14A_GR;
  VITALDEPOT_DW.DO_L32_GR = DO_L32_GR;
  VITALDEPOT_DW.DO_L34_GR = DO_L34_GR;
  VITALDEPOT_DW.DO_L54_GR = DO_L54_GR;
  VITALDEPOT_DW.DO_L72_GR = DO_L72_GR;
  VITALDEPOT_DW.DO_L74_GR = DO_L74_GR;
  VITALDEPOT_DW.M_AS_S_L12 = M_AS_S_L12;
  VITALDEPOT_DW.M_AS_S_L14A = M_AS_S_L14A;
  VITALDEPOT_DW.M_AS_S_L32 = M_AS_S_L32;
  VITALDEPOT_DW.M_AS_S_L34 = M_AS_S_L34;
  VITALDEPOT_DW.M_AS_S_L54 = M_AS_S_L54;
  VITALDEPOT_DW.M_AS_S_L72 = M_AS_S_L72;
  VITALDEPOT_DW.M_AS_S_L74 = M_AS_S_L74;
  VITALDEPOT_DW.M_RRLS_L14B = M_RRLS_L14B;
  VITALDEPOT_DW.M_RRLS_X12 = M_RRLS_X12;
  VITALDEPOT_DW.M_RRLS_X32 = M_RRLS_X32;
  VITALDEPOT_DW.M_RRLS_X34 = M_RRLS_X34;
  VITALDEPOT_DW.M_RRLS_X54 = M_RRLS_X54;
  VITALDEPOT_DW.M_RRLS_X72 = M_RRLS_X72;
  VITALDEPOT_DW.M_RRLS_X74 = M_RRLS_X74;
  VITALDEPOT_DW.DO_VDR = DO_VDR;
  VITALDEPOT_DW.DO_NWR_W13A = DO_NWR_W13A;
  VITALDEPOT_DW.DO_NWR_W13B_73A = DO_NWR_W13B_73A;
  VITALDEPOT_DW.DO_NWR_W54 = DO_NWR_W54;
  VITALDEPOT_DW.DO_NWR_W73B = DO_NWR_W73B;
  VITALDEPOT_DW.DO_RWR_W13A = DO_RWR_W13A;
  VITALDEPOT_DW.DO_RWR_W13B_73A = DO_RWR_W13B_73A;
  VITALDEPOT_DW.DO_RWR_W54 = DO_RWR_W54;
  VITALDEPOT_DW.DO_RWR_W73B = DO_RWR_W73B;
  VITALDEPOT_DW.DO_WLPR_W13A = DO_WLPR_W13A;
  VITALDEPOT_DW.DO_WLPR_W13B_73A = DO_WLPR_W13B_73A;
  VITALDEPOT_DW.DO_WLPR_W54 = DO_WLPR_W54;
  VITALDEPOT_DW.DO_WLPR_W73B = DO_WLPR_W73B;
  VITALDEPOT_DW.M_SWRLS = M_SWRLS;
  VITALDEPOT_DW.M_RRLS = M_RRLS;
  VITALDEPOT_DW.M_RRLSTE_L14B = M_RRLSTE_L14B;
  VITALDEPOT_DW.M_RRLSTE_X12 = M_RRLSTE_X12;
  VITALDEPOT_DW.M_RRLSTE_X32 = M_RRLSTE_X32;
  VITALDEPOT_DW.M_RRLSTE_X34 = M_RRLSTE_X34;
  VITALDEPOT_DW.M_RRLSTE_X54 = M_RRLSTE_X54;
  VITALDEPOT_DW.M_RRLSTE_X72 = M_RRLSTE_X72;
  VITALDEPOT_DW.M_L_S_12_14 = M_L_S_12_14;
  VITALDEPOT_DW.M_AS_SR_S_12_14 = M_AS_SR_S_12_14;
  VITALDEPOT_DW.M_L_S_14_12 = M_L_S_14_12;
  VITALDEPOT_DW.M_AS_SR_S_14_12 = M_AS_SR_S_14_12;
  VITALDEPOT_DW.M_L_S_14_32 = M_L_S_14_32;
  VITALDEPOT_DW.M_AS_SR_S_14_32 = M_AS_SR_S_14_32;
  VITALDEPOT_DW.M_L_S_14_72 = M_L_S_14_72;
  VITALDEPOT_DW.M_AS_SR_S_14_72 = M_AS_SR_S_14_72;
  VITALDEPOT_DW.M_L_S_32_14 = M_L_S_32_14;
  VITALDEPOT_DW.M_AS_SR_S_32_14 = M_AS_SR_S_32_14;
  VITALDEPOT_DW.M_L_S_34_72 = M_L_S_34_72;
  VITALDEPOT_DW.M_AS_SR_S_34_72 = M_AS_SR_S_34_72;
  VITALDEPOT_DW.M_L_S_54_72 = M_L_S_54_72;
  VITALDEPOT_DW.M_AS_SR_S_54_72 = M_AS_SR_S_54_72;
  VITALDEPOT_DW.M_L_S_72_14 = M_L_S_72_14;
  VITALDEPOT_DW.M_AS_SR_S_72_14 = M_AS_SR_S_72_14;
  VITALDEPOT_DW.M_L_S_72_34 = M_L_S_72_34;
  VITALDEPOT_DW.M_AS_SR_S_72_34 = M_AS_SR_S_72_34;
  VITALDEPOT_DW.M_L_S_72_54 = M_L_S_72_54;
  VITALDEPOT_DW.M_AS_SR_S_72_54 = M_AS_SR_S_72_54;
  VITALDEPOT_DW.M_L_S_72_74 = M_L_S_72_74;
  VITALDEPOT_DW.M_AS_SR_S_72_74 = M_AS_SR_S_72_74;
  VITALDEPOT_DW.M_L_S_74_72 = M_L_S_74_72;
  VITALDEPOT_DW.M_RL_S_ES_13 = M_RL_S_ES_13;
  VITALDEPOT_DW.M_RL_S_WS_13 = M_RL_S_WS_13;
  VITALDEPOT_DW.M_RL_S_ES_73A = M_RL_S_ES_73A;
  VITALDEPOT_DW.M_RL_S_WS_73B = M_RL_S_WS_73B;
  VITALDEPOT_DW.M_RLS_13 = M_RLS_13;
  VITALDEPOT_DW.M_RLS_73A = M_RLS_73A;
  VITALDEPOT_DW.M_RLS_73B = M_RLS_73B;
  VITALDEPOT_DW.M_R_S_12_14 = M_R_S_12_14;
  VITALDEPOT_DW.M_R_S_14_12 = M_R_S_14_12;
  VITALDEPOT_DW.M_R_S_14_32 = M_R_S_14_32;
  VITALDEPOT_DW.M_R_S_14_72 = M_R_S_14_72;
  VITALDEPOT_DW.M_R_S_32_14 = M_R_S_32_14;
  VITALDEPOT_DW.M_R_S_34_72 = M_R_S_34_72;
  VITALDEPOT_DW.M_R_S_54_72 = M_R_S_54_72;
  VITALDEPOT_DW.M_R_S_72_14 = M_R_S_72_14;
  VITALDEPOT_DW.M_R_S_72_34 = M_R_S_72_34;
  VITALDEPOT_DW.M_R_S_72_54 = M_R_S_72_54;
  VITALDEPOT_DW.M_R_S_72_74 = M_R_S_72_74;
  VITALDEPOT_DW.M_R_S_74_72 = M_R_S_74_72;

  /* DiscretePulseGenerator: '<S3>/0.5S' */
  VITALDEPOT_DW.clockTickCounter = clockTickCounter_0;

  /* DiscretePulseGenerator: '<S3>/1S' */
  VITALDEPOT_DW.clockTickCounter_i = clockTickCounter_i_0;
  VITALDEPOT_DW.M_GV_FLASH_1000 = M_GV_FLASH_1000;
}

/* Update for referenced model: 'VITALDEPOT' */
void VITALDEPOT_Update(void)
{
  RT_MODEL_VITALDEPOT_T *const VITALDEPOT_M = &(VITALDEPOT_MdlrefDW.rtm);

  /* Update for Atomic SubSystem: '<S15>/APPROACH LOCK' */
  D_AS_Update(VITALDEPOT_M, &VITALDEPOT_DW.APPROACHLOCK);

  /* End of Update for SubSystem: '<S15>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S16>/APPROACH LOCK' */
  D_AS_Update(VITALDEPOT_M, &VITALDEPOT_DW.APPROACHLOCK_f);

  /* End of Update for SubSystem: '<S16>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S17>/APPROACH LOCK' */
  D_AS_Update(VITALDEPOT_M, &VITALDEPOT_DW.APPROACHLOCK_h);

  /* End of Update for SubSystem: '<S17>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S18>/APPROACH LOCK' */
  D_AS_Update(VITALDEPOT_M, &VITALDEPOT_DW.APPROACHLOCK_e);

  /* End of Update for SubSystem: '<S18>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S19>/APPROACH LOCK' */
  D_AS_Update(VITALDEPOT_M, &VITALDEPOT_DW.APPROACHLOCK_o);

  /* End of Update for SubSystem: '<S19>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S20>/APPROACH LOCK' */
  D_AS_Update(VITALDEPOT_M, &VITALDEPOT_DW.APPROACHLOCK_ou);

  /* End of Update for SubSystem: '<S20>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S21>/APPROACH LOCK' */
  D_AS_Update(VITALDEPOT_M, &VITALDEPOT_DW.APPROACHLOCK_a);

  /* End of Update for SubSystem: '<S21>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S64>/EMERGENCY POINT RELEASE' */
  D_SWRLS_Update(VITALDEPOT_M, &VITALDEPOT_DW.EMERGENCYPOINTRELEASE);

  /* End of Update for SubSystem: '<S64>/EMERGENCY POINT RELEASE' */

  /* Update for Atomic SubSystem: '<S65>/EMERGENCY POINT RELEASE' */
  D_SWRLS_Update(VITALDEPOT_M, &VITALDEPOT_DW.EMERGENCYPOINTRELEASE_l);

  /* End of Update for SubSystem: '<S65>/EMERGENCY POINT RELEASE' */

  /* Update for Atomic SubSystem: '<S66>/EMERGENCY POINT RELEASE' */
  D_SWRLS_Update(VITALDEPOT_M, &VITALDEPOT_DW.EMERGENCYPOINTRELEASE_p);

  /* End of Update for SubSystem: '<S66>/EMERGENCY POINT RELEASE' */

  /* Update for Atomic SubSystem: '<S67>/EMERGENCY POINT RELEASE' */
  D_SWRLS_Update(VITALDEPOT_M, &VITALDEPOT_DW.EMERGENCYPOINTRELEASE_b);

  /* End of Update for SubSystem: '<S67>/EMERGENCY POINT RELEASE' */

  /* Update for Atomic SubSystem: '<S112>/EMERGENCY ROUTE ' */
  D_RRLS_Update(VITALDEPOT_M, &VITALDEPOT_DW.EMERGENCYROUTE);

  /* End of Update for SubSystem: '<S112>/EMERGENCY ROUTE ' */

  /* Update for Atomic SubSystem: '<S113>/EMERGENCY ROUTE ' */
  D_RRLS_Update(VITALDEPOT_M, &VITALDEPOT_DW.EMERGENCYROUTE_g);

  /* End of Update for SubSystem: '<S113>/EMERGENCY ROUTE ' */

  /* Update for Atomic SubSystem: '<S114>/EMERGENCY ROUTE ' */
  D_RRLS_Update(VITALDEPOT_M, &VITALDEPOT_DW.EMERGENCYROUTE_o);

  /* End of Update for SubSystem: '<S114>/EMERGENCY ROUTE ' */

  /* Update for Atomic SubSystem: '<S115>/EMERGENCY ROUTE ' */
  D_RRLS_Update(VITALDEPOT_M, &VITALDEPOT_DW.EMERGENCYROUTE_m);

  /* End of Update for SubSystem: '<S115>/EMERGENCY ROUTE ' */

  /* Update for Atomic SubSystem: '<S116>/EMERGENCY ROUTE ' */
  D_RRLS_Update(VITALDEPOT_M, &VITALDEPOT_DW.EMERGENCYROUTE_e);

  /* End of Update for SubSystem: '<S116>/EMERGENCY ROUTE ' */

  /* Update for Atomic SubSystem: '<S117>/EMERGENCY ROUTE ' */
  D_RRLS_Update(VITALDEPOT_M, &VITALDEPOT_DW.EMERGENCYROUTE_l);

  /* End of Update for SubSystem: '<S117>/EMERGENCY ROUTE ' */

  /* Update for Atomic SubSystem: '<S118>/EMERGENCY ROUTE ' */
  D_RRLS_Update(VITALDEPOT_M, &VITALDEPOT_DW.EMERGENCYROUTE_i);

  /* End of Update for SubSystem: '<S118>/EMERGENCY ROUTE ' */

  /* Update for Atomic SubSystem: '<S245>/POINT CONTROL' */
  D_SW_CTRL_Update(VITALDEPOT_M, &VITALDEPOT_DW.POINTCONTROL);

  /* End of Update for SubSystem: '<S245>/POINT CONTROL' */

  /* Update for Atomic SubSystem: '<S246>/POINT CONTROL' */
  D_SW_CTRL_Update(VITALDEPOT_M, &VITALDEPOT_DW.POINTCONTROL_b);

  /* End of Update for SubSystem: '<S246>/POINT CONTROL' */

  /* Update for Atomic SubSystem: '<S247>/POINT CONTROL' */
  D_SW_CTRL_Update(VITALDEPOT_M, &VITALDEPOT_DW.POINTCONTROL_m);

  /* End of Update for SubSystem: '<S247>/POINT CONTROL' */

  /* Update for Atomic SubSystem: '<S248>/POINT CONTROL' */
  D_SW_CTRL_Update(VITALDEPOT_M, &VITALDEPOT_DW.POINTCONTROL_d);

  /* End of Update for SubSystem: '<S248>/POINT CONTROL' */

  /* Update for Atomic SubSystem: '<S14>/D_TP9' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_DW.u3BTPRDI, &VITALDEPOT_DW.D_TP9);

  /* End of Update for SubSystem: '<S14>/D_TP9' */

  /* Update for Atomic SubSystem: '<S14>/D_TP8' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_DW.u3ATPRDI, &VITALDEPOT_DW.D_TP8);

  /* End of Update for SubSystem: '<S14>/D_TP8' */

  /* Update for Atomic SubSystem: '<S14>/D_TP7' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_DW.u2TPRDI, &VITALDEPOT_DW.D_TP7);

  /* End of Update for SubSystem: '<S14>/D_TP7' */

  /* Update for Atomic SubSystem: '<S14>/D_TP6' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_DW.u4TPRDI, &VITALDEPOT_DW.D_TP6);

  /* End of Update for SubSystem: '<S14>/D_TP6' */

  /* Update for Atomic SubSystem: '<S14>/D_TP5' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_DW.u4TPRDI_c, &VITALDEPOT_DW.D_TP5);

  /* End of Update for SubSystem: '<S14>/D_TP5' */

  /* Update for Atomic SubSystem: '<S14>/D_TP4' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_DW.u2TPRDI_i, &VITALDEPOT_DW.D_TP4);

  /* End of Update for SubSystem: '<S14>/D_TP4' */

  /* Update for Atomic SubSystem: '<S14>/D_TP3' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_DW.u4TPRDI_h, &VITALDEPOT_DW.D_TP3);

  /* End of Update for SubSystem: '<S14>/D_TP3' */

  /* Update for Atomic SubSystem: '<S14>/D_TP2' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_DW.u3TPRDI, &VITALDEPOT_DW.D_TP2);

  /* End of Update for SubSystem: '<S14>/D_TP2' */

  /* Update for Atomic SubSystem: '<S14>/D_TP10' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_DW.u4TPRDI_e, &VITALDEPOT_DW.D_TP10);

  /* End of Update for SubSystem: '<S14>/D_TP10' */

  /* Update for Atomic SubSystem: '<S14>/D_TP1' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_DW.u2TPRDI_b, &VITALDEPOT_DW.D_TP1);

  /* End of Update for SubSystem: '<S14>/D_TP1' */

  /* Update for Atomic SubSystem: '<S3>/COMMUNICATION CHECK' */
  D_COMM_Update(VITALDEPOT_M, VITALDEPOT_DW.COMMCHECKIN,
                &VITALDEPOT_DW.COMMUNICATIONCHECK);

  /* End of Update for SubSystem: '<S3>/COMMUNICATION CHECK' */
}

/* Model initialize function */
void VITALDEPOT_initialize(const char_T **rt_errorStatus, RTWSolverInfo
  *rt_solverInfo, const rtTimingBridge *timingBridge, int_T mdlref_TID0, int_T
  mdlref_TID1)
{
  RT_MODEL_VITALDEPOT_T *const VITALDEPOT_M = &(VITALDEPOT_MdlrefDW.rtm);

  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)VITALDEPOT_M, 0,
                sizeof(RT_MODEL_VITALDEPOT_T));

  /* setup the global timing engine */
  VITALDEPOT_GlobalTID[0] = mdlref_TID0;
  VITALDEPOT_GlobalTID[1] = mdlref_TID1;
  VITALDEPOT_TimingBrdg = timingBridge;

  /* initialize error status */
  rtmSetErrorStatusPointer(VITALDEPOT_M, rt_errorStatus);

  /* initialize RTWSolverInfo */
  VITALDEPOT_M->solverInfo = (rt_solverInfo);

  /* Set the Timing fields to the appropriate data in the RTWSolverInfo */
  rtmSetSimTimeStepPointer(VITALDEPOT_M, rtsiGetSimTimeStepPtr
    (VITALDEPOT_M->solverInfo));
  VITALDEPOT_M->Timing.stepSize0 = (rtsiGetStepSize(VITALDEPOT_M->solverInfo));

  /* states (dwork) */
  (void) memset((void *)&VITALDEPOT_DW, 0,
                sizeof(DW_VITALDEPOT_f_T));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
