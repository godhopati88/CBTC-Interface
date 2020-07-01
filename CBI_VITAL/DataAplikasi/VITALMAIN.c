/*
 * File: VITALMAIN.c
 *
 * Code generated for Simulink model 'VITALMAIN'.
 *
 * Model version                  : 1.460
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Nov 08 19:02:23 2017
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

#include "VITALMAIN.h"
#include "VITALMAIN_private.h"

int_T VITALMAIN_GlobalTID[2];
const rtTimingBridge *VITALMAIN_TimingBrdg;
MdlrefDW_VITALMAIN_T VITALMAIN_MdlrefDW;

/* Block states (auto storage) */
DW_VITALMAIN_f_T VITALMAIN_DW;

/*
 * System initialize for atomic system:
 *    '<S24>/MV_TON1'
 *    '<S30>/MV_TON1'
 *    '<S36>/MV_TON1'
 *    '<S42>/MV_TON1'
 *    '<S48>/MV_TON1'
 *    '<S54>/MV_TON1'
 *    '<S60>/MV_TON1'
 *    '<S66>/MV_TON1'
 *    '<S66>/MV_TON3'
 *    '<S77>/MV_TON1'
 *    ...
 */
void MV_TON_Init(DW_MV_TON_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S25>/TON' */
  /* InitializeConditions for Memory: '<S29>/memory' */
  localDW->memory_PreviousInput = -1.0E+99;

  /* End of SystemInitialize for SubSystem: '<S25>/TON' */
}

/*
 * Outputs for atomic system:
 *    '<S24>/MV_TON1'
 *    '<S30>/MV_TON1'
 *    '<S36>/MV_TON1'
 *    '<S42>/MV_TON1'
 *    '<S48>/MV_TON1'
 *    '<S54>/MV_TON1'
 *    '<S60>/MV_TON1'
 *    '<S66>/MV_TON1'
 *    '<S66>/MV_TON3'
 *    '<S77>/MV_TON1'
 *    ...
 */
void MV_TON(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_IN,
            DW_MV_TON_T *localDW, real_T rtp_TIME)
{
  real_T rtb_CLOCK;
  boolean_T LogicalOperator1;
  real_T memory;
  memory = localDW->memory;
  LogicalOperator1 = localDW->LogicalOperator1;

  /* Clock: '<S25>/CLOCK' */
  rtb_CLOCK = (*(VITALMAIN_TimingBrdg->taskTime[VITALMAIN_GlobalTID[0]]));

  /* Outputs for Atomic SubSystem: '<S25>/TON' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Logic: '<S26>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S27>/FixPt Relational Operator'
     *  RelationalOperator: '<S28>/FixPt Relational Operator'
     *  UnitDelay: '<S27>/Delay Input1'
     *  UnitDelay: '<S28>/Delay Input1'
     *
     * Block description for '<S27>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S28>/Delay Input1':
     *
     *  Store in Global RAM
     */
    LogicalOperator1 = (((int32_T)rtu_IN > (int32_T)
                         localDW->DelayInput1_DSTATE_o) || ((int32_T)rtu_IN <
      (int32_T)localDW->DelayInput1_DSTATE));

    /* Memory: '<S29>/memory' */
    memory = localDW->memory_PreviousInput;
  }

  /* Switch: '<S29>/Switch' */
  if (LogicalOperator1) {
    localDW->Switch = rtb_CLOCK;
  } else {
    localDW->Switch = memory;
  }

  /* End of Switch: '<S29>/Switch' */

  /* Logic: '<S26>/Logical Operator2' incorporates:
   *  Constant: '<S25>/TIME'
   *  RelationalOperator: '<S26>/Relational Operator'
   *  Sum: '<S26>/Sum'
   */
  localDW->LogicalOperator2 = ((rtb_CLOCK >= localDW->Switch + rtp_TIME) &&
    rtu_IN);

  /* End of Outputs for SubSystem: '<S25>/TON' */
  localDW->LogicalOperator1 = LogicalOperator1;
  localDW->memory = memory;
}

/*
 * Update for atomic system:
 *    '<S24>/MV_TON1'
 *    '<S30>/MV_TON1'
 *    '<S36>/MV_TON1'
 *    '<S42>/MV_TON1'
 *    '<S48>/MV_TON1'
 *    '<S54>/MV_TON1'
 *    '<S60>/MV_TON1'
 *    '<S66>/MV_TON1'
 *    '<S66>/MV_TON3'
 *    '<S77>/MV_TON1'
 *    ...
 */
void MV_TON_Update(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_IN,
                   DW_MV_TON_T *localDW)
{
  /* Update for Atomic SubSystem: '<S25>/TON' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Update for UnitDelay: '<S27>/Delay Input1'
     *
     * Block description for '<S27>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE = rtu_IN;

    /* Update for UnitDelay: '<S28>/Delay Input1'
     *
     * Block description for '<S28>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE_o = rtu_IN;

    /* Update for Memory: '<S29>/memory' */
    localDW->memory_PreviousInput = localDW->Switch;
  }

  /* End of Update for SubSystem: '<S25>/TON' */
}

/*
 * System initialize for atomic system:
 *    '<S15>/M_AS2'
 *    '<S16>/APPROACH LOCK'
 *    '<S17>/APPROACH LOCK'
 *    '<S18>/APPROACH LOCK'
 *    '<S19>/APPROACH LOCK'
 *    '<S20>/APPROACH LOCK'
 *    '<S21>/APPROACH LOCK'
 */
void M_AS_2_Init(DW_M_AS_2_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S24>/MV_TON1' */
  MV_TON_Init(&localDW->MV_TON1);

  /* End of SystemInitialize for SubSystem: '<S24>/MV_TON1' */
}

/*
 * Outputs for atomic system:
 *    '<S15>/M_AS2'
 *    '<S16>/APPROACH LOCK'
 *    '<S17>/APPROACH LOCK'
 *    '<S18>/APPROACH LOCK'
 *    '<S19>/APPROACH LOCK'
 *    '<S20>/APPROACH LOCK'
 *    '<S21>/APPROACH LOCK'
 */
void M_AS_2(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_DRGR,
            boolean_T rtu_TPF, boolean_T rtu_TPB, boolean_T rtu_RR, boolean_T
            rtu_VDR, DW_M_AS_2_T *localDW)
{
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Logic: '<S24>/AND4' incorporates:
     *  Logic: '<S24>/AND5'
     *  Logic: '<S24>/NOT1'
     *  Logic: '<S24>/OR7'
     *  Memory: '<S24>/Memory3'
     *  Memory: '<S24>/Memory4'
     */
    localDW->AND4 = ((!rtu_DRGR) && rtu_RR && (localDW->Memory3_PreviousInput ||
      (rtu_TPF && rtu_TPB) || localDW->Memory4_PreviousInput));

    /* Logic: '<S24>/AND1' incorporates:
     *  Logic: '<S24>/NOT2'
     *  Logic: '<S24>/NOT3'
     */
    localDW->AND1 = ((!rtu_DRGR) && rtu_RR && (!localDW->AND4) && rtu_VDR);
  }

  /* Outputs for Atomic SubSystem: '<S24>/MV_TON1' */
  MV_TON(VITALMAIN_M, localDW->AND1, &localDW->MV_TON1, 2.0);

  /* End of Outputs for SubSystem: '<S24>/MV_TON1' */
}

/*
 * Update for atomic system:
 *    '<S15>/M_AS2'
 *    '<S16>/APPROACH LOCK'
 *    '<S17>/APPROACH LOCK'
 *    '<S18>/APPROACH LOCK'
 *    '<S19>/APPROACH LOCK'
 *    '<S20>/APPROACH LOCK'
 *    '<S21>/APPROACH LOCK'
 */
void M_AS_2_Update(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, DW_M_AS_2_T
                   *localDW)
{
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Update for Memory: '<S24>/Memory3' */
    localDW->Memory3_PreviousInput = localDW->AND4;

    /* Update for Memory: '<S24>/Memory4' */
    localDW->Memory4_PreviousInput = localDW->MV_TON1.LogicalOperator2;
  }

  /* Update for Atomic SubSystem: '<S24>/MV_TON1' */
  MV_TON_Update(VITALMAIN_M, localDW->AND1, &localDW->MV_TON1);

  /* End of Update for SubSystem: '<S24>/MV_TON1' */
}

/*
 * System initialize for atomic system:
 *    '<S22>/APPROACH LOCK'
 *    '<S23>/APPROACH LOCK'
 */
void M_AS_Init(DW_M_AS_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S66>/MV_TON1' */
  MV_TON_Init(&localDW->MV_TON1);

  /* End of SystemInitialize for SubSystem: '<S66>/MV_TON1' */

  /* SystemInitialize for Atomic SubSystem: '<S66>/MV_TON3' */
  MV_TON_Init(&localDW->MV_TON3);

  /* End of SystemInitialize for SubSystem: '<S66>/MV_TON3' */
}

/*
 * Outputs for atomic system:
 *    '<S22>/APPROACH LOCK'
 *    '<S23>/APPROACH LOCK'
 */
void M_AS(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_DR, boolean_T
          rtu_GR, boolean_T rtu_TPF, boolean_T rtu_TPB, boolean_T rtu_RR,
          boolean_T rtu_VDR, DW_M_AS_T *localDW)
{
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Logic: '<S66>/AND4' incorporates:
     *  Logic: '<S66>/AND5'
     *  Logic: '<S66>/NOT1'
     *  Logic: '<S66>/OR7'
     *  Memory: '<S66>/Memory3'
     *  Memory: '<S66>/Memory4'
     */
    localDW->AND4 = ((!rtu_DR) && rtu_RR && (localDW->Memory3_PreviousInput ||
      (rtu_TPF && rtu_TPB) || localDW->Memory4_PreviousInput));

    /* Logic: '<S66>/AND1' incorporates:
     *  Logic: '<S66>/NOT2'
     *  Logic: '<S66>/NOT3'
     */
    localDW->AND1 = ((!rtu_DR) && rtu_RR && (!localDW->AND4) && rtu_VDR);

    /* Logic: '<S66>/AND11' incorporates:
     *  Logic: '<S66>/AND12'
     *  Logic: '<S66>/NOT12'
     *  Logic: '<S66>/OR9'
     *  Memory: '<S66>/Memory7'
     *  Memory: '<S66>/Memory8'
     */
    localDW->AND11 = ((!rtu_GR) && rtu_RR && (localDW->Memory7_PreviousInput ||
      (rtu_TPF && rtu_TPB) || localDW->Memory8_PreviousInput));

    /* Logic: '<S66>/AND3' incorporates:
     *  Logic: '<S66>/NOT13'
     *  Logic: '<S66>/NOT14'
     */
    localDW->AND3 = ((!rtu_GR) && rtu_RR && (!localDW->AND11) && rtu_VDR);
  }

  /* Outputs for Atomic SubSystem: '<S66>/MV_TON1' */
  MV_TON(VITALMAIN_M, localDW->AND1, &localDW->MV_TON1, 2.0);

  /* End of Outputs for SubSystem: '<S66>/MV_TON1' */

  /* Outputs for Atomic SubSystem: '<S66>/MV_TON3' */
  MV_TON(VITALMAIN_M, localDW->AND3, &localDW->MV_TON3, 2.0);

  /* End of Outputs for SubSystem: '<S66>/MV_TON3' */
}

/*
 * Update for atomic system:
 *    '<S22>/APPROACH LOCK'
 *    '<S23>/APPROACH LOCK'
 */
void M_AS_Update(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, DW_M_AS_T *localDW)
{
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Update for Memory: '<S66>/Memory3' */
    localDW->Memory3_PreviousInput = localDW->AND4;

    /* Update for Memory: '<S66>/Memory4' */
    localDW->Memory4_PreviousInput = localDW->MV_TON1.LogicalOperator2;

    /* Update for Memory: '<S66>/Memory7' */
    localDW->Memory7_PreviousInput = localDW->AND11;

    /* Update for Memory: '<S66>/Memory8' */
    localDW->Memory8_PreviousInput = localDW->MV_TON3.LogicalOperator2;
  }

  /* Update for Atomic SubSystem: '<S66>/MV_TON1' */
  MV_TON_Update(VITALMAIN_M, localDW->AND1, &localDW->MV_TON1);

  /* End of Update for SubSystem: '<S66>/MV_TON1' */

  /* Update for Atomic SubSystem: '<S66>/MV_TON3' */
  MV_TON_Update(VITALMAIN_M, localDW->AND3, &localDW->MV_TON3);

  /* End of Update for SubSystem: '<S66>/MV_TON3' */
}

/*
 * System initialize for atomic system:
 *    '<S88>/EMERGENCY POINT RELEASE'
 *    '<S89>/EMERGENCY POINT RELEASE'
 *    '<S90>/EMERGENCY POINT RELEASE'
 *    '<S91>/EMERGENCY POINT RELEASE'
 *    '<S92>/EMERGENCY POINT RELEASE'
 */
void M_SWRLS_Init(DW_M_SWRLS_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S93>/MV_TON1' */
  MV_TON_Init(&localDW->MV_TON1);

  /* End of SystemInitialize for SubSystem: '<S93>/MV_TON1' */

  /* SystemInitialize for Atomic SubSystem: '<S93>/MV_TON2' */
  MV_TON_Init(&localDW->MV_TON2);

  /* End of SystemInitialize for SubSystem: '<S93>/MV_TON2' */
}

/*
 * Outputs for atomic system:
 *    '<S88>/EMERGENCY POINT RELEASE'
 *    '<S89>/EMERGENCY POINT RELEASE'
 *    '<S90>/EMERGENCY POINT RELEASE'
 *    '<S91>/EMERGENCY POINT RELEASE'
 *    '<S92>/EMERGENCY POINT RELEASE'
 */
void M_SWRLS(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_SWRLSCTRL,
             boolean_T rtu_ESWS, boolean_T rtu_TP, boolean_T rtu_SWRLS,
             boolean_T rtu_VDR, DW_M_SWRLS_T *localDW)
{
  boolean_T Memory3_PreviousInput;

  /* Logic: '<S93>/AND9' */
  Memory3_PreviousInput = localDW->Memory3_PreviousInput;
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Logic: '<S93>/OR3' incorporates:
     *  Logic: '<S93>/AND10'
     *  Logic: '<S93>/AND9'
     *  Logic: '<S93>/NOT4'
     *  Logic: '<S93>/NOT8'
     *  Memory: '<S93>/Memory4'
     *  Memory: '<S93>/Memory5'
     */
    localDW->OR3 = ((Memory3_PreviousInput && (!rtu_TP)) ||
                    ((!localDW->Memory5_PreviousInput) &&
                     localDW->Memory4_PreviousInput));

    /* Logic: '<S93>/AND11' */
    localDW->AND11 = (localDW->OR3 && rtu_VDR);

    /* Logic: '<S93>/AND5' incorporates:
     *  Logic: '<S93>/AND4'
     *  Logic: '<S93>/AND7'
     *  Logic: '<S93>/NOT1'
     *  Logic: '<S93>/OR2'
     *  Memory: '<S93>/Memory2'
     */
    localDW->AND5 = (rtu_ESWS && ((rtu_SWRLSCTRL && rtu_SWRLS) ||
      ((!Memory3_PreviousInput) && localDW->Memory2_PreviousInput)));

    /* Logic: '<S93>/AND8' */
    localDW->AND8 = (localDW->AND5 && rtu_VDR);
  }

  /* Outputs for Atomic SubSystem: '<S93>/MV_TON1' */
  MV_TON(VITALMAIN_M, localDW->AND8, &localDW->MV_TON1, 60.0);

  /* End of Outputs for SubSystem: '<S93>/MV_TON1' */

  /* Outputs for Atomic SubSystem: '<S93>/MV_TON2' */
  MV_TON(VITALMAIN_M, localDW->AND11, &localDW->MV_TON2, 60.0);

  /* End of Outputs for SubSystem: '<S93>/MV_TON2' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* SignalConversion: '<S93>/TmpSignal ConversionAtMV_TON1Outport1' */
    localDW->TmpSignalConversionAtMV_TON1Out = localDW->MV_TON1.LogicalOperator2;

    /* SignalConversion: '<S93>/TmpSignal ConversionAtMV_TON2Outport1' */
    localDW->TmpSignalConversionAtMV_TON2Out = localDW->MV_TON2.LogicalOperator2;
  }
}

/*
 * Update for atomic system:
 *    '<S88>/EMERGENCY POINT RELEASE'
 *    '<S89>/EMERGENCY POINT RELEASE'
 *    '<S90>/EMERGENCY POINT RELEASE'
 *    '<S91>/EMERGENCY POINT RELEASE'
 *    '<S92>/EMERGENCY POINT RELEASE'
 */
void M_SWRLS_Update(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, DW_M_SWRLS_T
                    *localDW)
{
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Update for Memory: '<S93>/Memory5' */
    localDW->Memory5_PreviousInput = localDW->TmpSignalConversionAtMV_TON2Out;

    /* Update for Memory: '<S93>/Memory4' */
    localDW->Memory4_PreviousInput = localDW->OR3;

    /* Update for Memory: '<S93>/Memory3' */
    localDW->Memory3_PreviousInput = localDW->TmpSignalConversionAtMV_TON1Out;

    /* Update for Memory: '<S93>/Memory2' */
    localDW->Memory2_PreviousInput = localDW->AND5;
  }

  /* Update for Atomic SubSystem: '<S93>/MV_TON1' */
  MV_TON_Update(VITALMAIN_M, localDW->AND8, &localDW->MV_TON1);

  /* End of Update for SubSystem: '<S93>/MV_TON1' */

  /* Update for Atomic SubSystem: '<S93>/MV_TON2' */
  MV_TON_Update(VITALMAIN_M, localDW->AND11, &localDW->MV_TON2);

  /* End of Update for SubSystem: '<S93>/MV_TON2' */
}

/*
 * System initialize for atomic system:
 *    '<S157>/MV_TOF1'
 *    '<S168>/MV_TOF1'
 *    '<S179>/MV_TOF1'
 *    '<S190>/MV_TOF1'
 *    '<S201>/MV_TOF1'
 *    '<S212>/MV_TOF1'
 *    '<S223>/MV_TOF1'
 *    '<S234>/MV_TOF1'
 *    '<S245>/MV_TOF1'
 *    '<S366>/MV_TOF1'
 *    ...
 */
void MV_TOF_Init(DW_MV_TOF_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S158>/TOF' */
  /* InitializeConditions for Memory: '<S163>/memory' */
  localDW->memory_PreviousInput = -1.0E+99;

  /* End of SystemInitialize for SubSystem: '<S158>/TOF' */
}

/*
 * Outputs for atomic system:
 *    '<S157>/MV_TOF1'
 *    '<S168>/MV_TOF1'
 *    '<S179>/MV_TOF1'
 *    '<S190>/MV_TOF1'
 *    '<S201>/MV_TOF1'
 *    '<S212>/MV_TOF1'
 *    '<S223>/MV_TOF1'
 *    '<S234>/MV_TOF1'
 *    '<S245>/MV_TOF1'
 *    '<S366>/MV_TOF1'
 *    ...
 */
void MV_TOF(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_IN,
            DW_MV_TOF_T *localDW, real_T rtp_TIME)
{
  real_T rtb_CLOCK;
  boolean_T LogicalOperator1;
  real_T memory;
  boolean_T LogicalOperator3;
  LogicalOperator3 = localDW->LogicalOperator3;
  memory = localDW->memory;
  LogicalOperator1 = localDW->LogicalOperator1;

  /* Clock: '<S158>/CLOCK' */
  rtb_CLOCK = (*(VITALMAIN_TimingBrdg->taskTime[VITALMAIN_GlobalTID[0]]));

  /* Outputs for Atomic SubSystem: '<S158>/TOF' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Logic: '<S160>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S161>/FixPt Relational Operator'
     *  RelationalOperator: '<S162>/FixPt Relational Operator'
     *  UnitDelay: '<S161>/Delay Input1'
     *  UnitDelay: '<S162>/Delay Input1'
     *
     * Block description for '<S161>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S162>/Delay Input1':
     *
     *  Store in Global RAM
     */
    LogicalOperator1 = (((int32_T)rtu_IN > (int32_T)
                         localDW->DelayInput1_DSTATE_h) || ((int32_T)rtu_IN <
      (int32_T)localDW->DelayInput1_DSTATE));

    /* Memory: '<S163>/memory' */
    memory = localDW->memory_PreviousInput;

    /* Logic: '<S160>/Logical Operator3' */
    LogicalOperator3 = !rtu_IN;
  }

  /* Switch: '<S163>/Switch' */
  if (LogicalOperator1) {
    localDW->Switch = rtb_CLOCK;
  } else {
    localDW->Switch = memory;
  }

  /* End of Switch: '<S163>/Switch' */

  /* Logic: '<S160>/Logical Operator4' incorporates:
   *  Constant: '<S158>/TIME'
   *  Logic: '<S160>/Logical Operator2'
   *  RelationalOperator: '<S160>/Relational Operator'
   *  Sum: '<S160>/Sum'
   */
  localDW->LogicalOperator4 = !((rtb_CLOCK >= localDW->Switch + rtp_TIME) &&
    LogicalOperator3);

  /* End of Outputs for SubSystem: '<S158>/TOF' */
  localDW->LogicalOperator1 = LogicalOperator1;
  localDW->memory = memory;
  localDW->LogicalOperator3 = LogicalOperator3;
}

/*
 * Update for atomic system:
 *    '<S157>/MV_TOF1'
 *    '<S168>/MV_TOF1'
 *    '<S179>/MV_TOF1'
 *    '<S190>/MV_TOF1'
 *    '<S201>/MV_TOF1'
 *    '<S212>/MV_TOF1'
 *    '<S223>/MV_TOF1'
 *    '<S234>/MV_TOF1'
 *    '<S245>/MV_TOF1'
 *    '<S366>/MV_TOF1'
 *    ...
 */
void MV_TOF_Update(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_IN,
                   DW_MV_TOF_T *localDW)
{
  /* Update for Atomic SubSystem: '<S158>/TOF' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Update for UnitDelay: '<S161>/Delay Input1'
     *
     * Block description for '<S161>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE = rtu_IN;

    /* Update for UnitDelay: '<S162>/Delay Input1'
     *
     * Block description for '<S162>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE_h = rtu_IN;

    /* Update for Memory: '<S163>/memory' */
    localDW->memory_PreviousInput = localDW->Switch;
  }

  /* End of Update for SubSystem: '<S158>/TOF' */
}

/*
 * System initialize for atomic system:
 *    '<S157>/MV_TON1'
 *    '<S168>/MV_TON1'
 *    '<S179>/MV_TON1'
 *    '<S190>/MV_TON1'
 *    '<S201>/MV_TON1'
 *    '<S212>/MV_TON1'
 *    '<S223>/MV_TON1'
 *    '<S234>/MV_TON1'
 *    '<S245>/MV_TON1'
 */
void VITALMAIN_MV_TON_Init(DW_MV_TON_h_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S159>/TON' */
  /* InitializeConditions for Memory: '<S167>/memory' */
  localDW->memory_PreviousInput = -1.0E+99;

  /* End of SystemInitialize for SubSystem: '<S159>/TON' */
}

/*
 * Outputs for atomic system:
 *    '<S157>/MV_TON1'
 *    '<S168>/MV_TON1'
 *    '<S179>/MV_TON1'
 *    '<S190>/MV_TON1'
 *    '<S201>/MV_TON1'
 *    '<S212>/MV_TON1'
 *    '<S223>/MV_TON1'
 *    '<S234>/MV_TON1'
 *    '<S245>/MV_TON1'
 */
void VITALMAIN_MV_TON(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_IN,
                      DW_MV_TON_h_T *localDW, real_T rtp_TIME)
{
  real_T rtb_CLOCK;
  real_T memory;
  boolean_T Uk1;
  boolean_T Uk1_f;
  Uk1_f = localDW->Uk1_f;
  Uk1 = localDW->Uk1;
  memory = localDW->memory;

  /* Clock: '<S159>/CLOCK' */
  rtb_CLOCK = (*(VITALMAIN_TimingBrdg->taskTime[VITALMAIN_GlobalTID[0]]));

  /* Outputs for Atomic SubSystem: '<S159>/TON' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* UnitDelay: '<S165>/Delay Input1'
     *
     * Block description for '<S165>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Uk1 = localDW->DelayInput1_DSTATE;

    /* UnitDelay: '<S166>/Delay Input1'
     *
     * Block description for '<S166>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Uk1_f = localDW->DelayInput1_DSTATE_k;

    /* Memory: '<S167>/memory' */
    memory = localDW->memory_PreviousInput;
  }

  /* Switch: '<S167>/Switch' incorporates:
   *  Logic: '<S164>/Logical Operator1'
   *  RelationalOperator: '<S165>/FixPt Relational Operator'
   *  RelationalOperator: '<S166>/FixPt Relational Operator'
   */
  if (((int32_T)rtu_IN > (int32_T)Uk1_f) || ((int32_T)rtu_IN < (int32_T)Uk1)) {
    localDW->Switch = rtb_CLOCK;
  } else {
    localDW->Switch = memory;
  }

  /* End of Switch: '<S167>/Switch' */

  /* Logic: '<S164>/Logical Operator2' incorporates:
   *  Constant: '<S159>/TIME'
   *  RelationalOperator: '<S164>/Relational Operator'
   *  Sum: '<S164>/Sum'
   */
  localDW->LogicalOperator2 = ((rtb_CLOCK >= localDW->Switch + rtp_TIME) &&
    rtu_IN);

  /* End of Outputs for SubSystem: '<S159>/TON' */
  localDW->memory = memory;
  localDW->Uk1 = Uk1;
  localDW->Uk1_f = Uk1_f;
}

/*
 * Update for atomic system:
 *    '<S157>/MV_TON1'
 *    '<S168>/MV_TON1'
 *    '<S179>/MV_TON1'
 *    '<S190>/MV_TON1'
 *    '<S201>/MV_TON1'
 *    '<S212>/MV_TON1'
 *    '<S223>/MV_TON1'
 *    '<S234>/MV_TON1'
 *    '<S245>/MV_TON1'
 */
void VITALMAIN_MV_TON_Update(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T
  rtu_IN, DW_MV_TON_h_T *localDW)
{
  /* Update for Atomic SubSystem: '<S159>/TON' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Update for UnitDelay: '<S165>/Delay Input1'
     *
     * Block description for '<S165>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE = rtu_IN;

    /* Update for UnitDelay: '<S166>/Delay Input1'
     *
     * Block description for '<S166>/Delay Input1':
     *
     *  Store in Global RAM
     */
    localDW->DelayInput1_DSTATE_k = rtu_IN;

    /* Update for Memory: '<S167>/memory' */
    localDW->memory_PreviousInput = localDW->Switch;
  }

  /* End of Update for SubSystem: '<S159>/TON' */
}

/*
 * System initialize for atomic system:
 *    '<S148>/EMERGENCY ROUTE RELEASE'
 *    '<S149>/EMERGENCY ROUTE RELEASE'
 *    '<S150>/EMERGENCY ROUTE RELEASE'
 *    '<S151>/EMERGENCY ROUTE RELEASE'
 *    '<S152>/EMERGENCY ROUTE RELEASE'
 *    '<S153>/EMERGENCY ROUTE RELEASE'
 *    '<S154>/EMERGENCY ROUTE RELEASE'
 *    '<S155>/EMERGENCY ROUTE RELEASE'
 *    '<S156>/EMERGENCY ROUTE RELEASE'
 */
void M_RRLS_Init(DW_M_RRLS_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S157>/MV_TOF1' */
  MV_TOF_Init(&localDW->MV_TOF1);

  /* End of SystemInitialize for SubSystem: '<S157>/MV_TOF1' */

  /* SystemInitialize for Atomic SubSystem: '<S157>/MV_TON1' */
  VITALMAIN_MV_TON_Init(&localDW->MV_TON1);

  /* End of SystemInitialize for SubSystem: '<S157>/MV_TON1' */
}

/*
 * Outputs for atomic system:
 *    '<S148>/EMERGENCY ROUTE RELEASE'
 *    '<S149>/EMERGENCY ROUTE RELEASE'
 *    '<S150>/EMERGENCY ROUTE RELEASE'
 *    '<S151>/EMERGENCY ROUTE RELEASE'
 *    '<S152>/EMERGENCY ROUTE RELEASE'
 *    '<S153>/EMERGENCY ROUTE RELEASE'
 *    '<S154>/EMERGENCY ROUTE RELEASE'
 *    '<S155>/EMERGENCY ROUTE RELEASE'
 *    '<S156>/EMERGENCY ROUTE RELEASE'
 */
void M_RRLS(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_AS,
            boolean_T rtu_REQ, boolean_T rtu_ESWS, boolean_T rtu_RRLSCTRL,
            boolean_T rtu_RRLS, boolean_T rtu_VDR, DW_M_RRLS_T *localDW)
{
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Memory: '<S157>/Memory1' */
    localDW->Memory1 = localDW->Memory1_PreviousInput;

    /* Logic: '<S157>/AND1' incorporates:
     *  Logic: '<S157>/AND2'
     *  Logic: '<S157>/AND3'
     *  Logic: '<S157>/NOT1'
     *  Logic: '<S157>/NOT2'
     *  Logic: '<S157>/NOT7'
     *  Logic: '<S157>/OR1'
     *  Memory: '<S157>/Memory'
     */
    localDW->AND1 = (rtu_AS && (!rtu_REQ) && (!rtu_ESWS) && ((rtu_RRLSCTRL &&
      rtu_RRLS) || ((!localDW->Memory1) && localDW->Memory_PreviousInput)));

    /* Logic: '<S157>/AND6' */
    localDW->AND6 = (localDW->AND1 && rtu_VDR);
  }

  /* Outputs for Atomic SubSystem: '<S157>/MV_TOF1' */
  MV_TOF(VITALMAIN_M, localDW->AND6, &localDW->MV_TOF1, 2.0);

  /* End of Outputs for SubSystem: '<S157>/MV_TOF1' */

  /* Outputs for Atomic SubSystem: '<S157>/MV_TON1' */
  VITALMAIN_MV_TON(VITALMAIN_M, localDW->MV_TOF1.LogicalOperator4,
                   &localDW->MV_TON1, 2.0);

  /* End of Outputs for SubSystem: '<S157>/MV_TON1' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* SignalConversion: '<S157>/TmpSignal ConversionAtMV_TON1Outport1' */
    localDW->TmpSignalConversionAtMV_TON1Out = localDW->MV_TON1.LogicalOperator2;
  }
}

/*
 * Update for atomic system:
 *    '<S148>/EMERGENCY ROUTE RELEASE'
 *    '<S149>/EMERGENCY ROUTE RELEASE'
 *    '<S150>/EMERGENCY ROUTE RELEASE'
 *    '<S151>/EMERGENCY ROUTE RELEASE'
 *    '<S152>/EMERGENCY ROUTE RELEASE'
 *    '<S153>/EMERGENCY ROUTE RELEASE'
 *    '<S154>/EMERGENCY ROUTE RELEASE'
 *    '<S155>/EMERGENCY ROUTE RELEASE'
 *    '<S156>/EMERGENCY ROUTE RELEASE'
 */
void M_RRLS_Update(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, DW_M_RRLS_T
                   *localDW)
{
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Update for Memory: '<S157>/Memory1' */
    localDW->Memory1_PreviousInput = localDW->TmpSignalConversionAtMV_TON1Out;

    /* Update for Memory: '<S157>/Memory' */
    localDW->Memory_PreviousInput = localDW->AND1;
  }

  /* Update for Atomic SubSystem: '<S157>/MV_TOF1' */
  MV_TOF_Update(VITALMAIN_M, localDW->AND6, &localDW->MV_TOF1);

  /* End of Update for SubSystem: '<S157>/MV_TOF1' */

  /* Update for Atomic SubSystem: '<S157>/MV_TON1' */
  VITALMAIN_MV_TON_Update(VITALMAIN_M, localDW->MV_TOF1.LogicalOperator4,
    &localDW->MV_TON1);

  /* End of Update for SubSystem: '<S157>/MV_TON1' */
}

/*
 * Output and update for atomic system:
 *    '<S261>/M-AS-SR'
 *    '<S262>/M-AS-SR'
 *    '<S263>/M-AS-SR'
 *    '<S264>/M-AS-SR'
 */
void M_AS_SR(boolean_T rtu_L, boolean_T rtu_RS, DW_M_AS_SR_T *localDW)
{
  /* Logic: '<S265>/AND1' incorporates:
   *  Logic: '<S265>/OR1'
   *  Memory: '<S265>/MEM1'
   */
  localDW->AND1 = ((localDW->AND1 || rtu_L) && rtu_RS);
}

/*
 * Output and update for atomic system:
 *    '<S280>/M_RRLS5'
 *    '<S283>/M_RRLS1'
 *    '<S283>/M_RRLS5'
 *    '<S284>/M_RRLS1'
 *    '<S284>/M_RRLS5'
 *    '<S285>/M_RRLS1'
 *    '<S285>/M_RRLS5'
 *    '<S286>/M_RRLS5'
 *    '<S287>/M_RRLS5'
 *    '<S288>/M_RRLS5'
 *    ...
 */
void M_RRLS1(boolean_T rtu_RRLSTE, DW_M_RRLS1_T *localDW)
{
  /* Inport: '<S299>/RRLS-TE' */
  localDW->RRLSTE = rtu_RRLSTE;
}

/*
 * Output and update for atomic system:
 *    '<S280>/M_RRLS6'
 *    '<S281>/M_RRLS6'
 *    '<S281>/M_RRLS9'
 *    '<S282>/M_RRLS6'
 *    '<S282>/M_RRLS9'
 *    '<S286>/M_RRLS1'
 *    '<S286>/M_RRLS6'
 *    '<S287>/M_RRLS1'
 *    '<S287>/M_RRLS6'
 *    '<S288>/M_RRLS1'
 *    ...
 */
void M_RRLS3(boolean_T rtu_RRLSTE, boolean_T rtu_NWZRWZ1, boolean_T rtu_NWZRWZ2,
             DW_M_RRLS3_T *localDW)
{
  /* Logic: '<S300>/AND1' */
  localDW->AND1 = (rtu_RRLSTE && rtu_NWZRWZ1 && rtu_NWZRWZ2);
}

/*
 * Output and update for atomic system:
 *    '<S280>/M_RRLS7'
 *    '<S280>/M_RRLS8'
 *    '<S289>/M_RRLS7'
 *    '<S289>/M_RRLS8'
 *    '<S290>/M_RRLS7'
 *    '<S290>/M_RRLS8'
 */
void M_RRLS_4(boolean_T rtu_RRLSTE, boolean_T rtu_NWZRWZ1, boolean_T rtu_NWZRWZ2,
              boolean_T rtu_NWZRWZ3, DW_M_RRLS_4_T *localDW)
{
  /* Logic: '<S301>/AND1' */
  localDW->AND1 = (rtu_RRLSTE && rtu_NWZRWZ1 && rtu_NWZRWZ2 && rtu_NWZRWZ3);
}

/*
 * Output and update for atomic system:
 *    '<S281>/M_RRLS5'
 *    '<S281>/M_RRLS7'
 *    '<S281>/M_RRLS8'
 *    '<S282>/M_RRLS5'
 *    '<S282>/M_RRLS7'
 *    '<S282>/M_RRLS8'
 *    '<S291>/M_RRLS5'
 *    '<S291>/M_RRLS7'
 *    '<S292>/M_RRLS5'
 *    '<S292>/M_RRLS7'
 *    ...
 */
void M_RRLS2(boolean_T rtu_RRLSTE, boolean_T rtu_NWZRWZ1, DW_M_RRLS2_T *localDW)
{
  /* Logic: '<S303>/AND1' */
  localDW->AND1 = (rtu_RRLSTE && rtu_NWZRWZ1);
}

/*
 * System initialize for atomic system:
 *    '<S361>/POINT CONTROL'
 *    '<S362>/POINT CONTROL'
 *    '<S363>/POINT CONTROL'
 *    '<S364>/POINT CONTROL'
 *    '<S365>/POINT CONTROL'
 */
void M_SW_CTRL_Init(DW_M_SW_CTRL_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S366>/MV_TOF2' */
  MV_TOF_Init(&localDW->MV_TOF2);

  /* End of SystemInitialize for SubSystem: '<S366>/MV_TOF2' */

  /* SystemInitialize for Atomic SubSystem: '<S366>/MV_TOF1' */
  MV_TOF_Init(&localDW->MV_TOF1);

  /* End of SystemInitialize for SubSystem: '<S366>/MV_TOF1' */

  /* SystemInitialize for Atomic SubSystem: '<S366>/MV_TON1' */
  MV_TON_Init(&localDW->MV_TON1);

  /* End of SystemInitialize for SubSystem: '<S366>/MV_TON1' */

  /* SystemInitialize for Atomic SubSystem: '<S366>/MV_TON2' */
  MV_TON_Init(&localDW->MV_TON2);

  /* End of SystemInitialize for SubSystem: '<S366>/MV_TON2' */
}

/*
 * Outputs for atomic system:
 *    '<S361>/POINT CONTROL'
 *    '<S362>/POINT CONTROL'
 *    '<S363>/POINT CONTROL'
 *    '<S364>/POINT CONTROL'
 *    '<S365>/POINT CONTROL'
 */
void M_SW_CTRL(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_NWPDI,
               boolean_T rtu_RWPDI, boolean_T rtu_OOC, boolean_T rtu_L,
               boolean_T rtu_NREQ, boolean_T rtu_RREQ, boolean_T rtu_TP,
               boolean_T rtu_TPZ, boolean_T rtu_VDR, DW_M_SW_CTRL_T *localDW)
{
  boolean_T rtb_AND10_a;
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
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Memory: '<S366>/Memory2' */
    localDW->Memory2 = localDW->Memory2_PreviousInput;

    /* Logic: '<S366>/AND1' incorporates:
     *  Logic: '<S366>/NOT1'
     *  Logic: '<S366>/OR1'
     */
    localDW->AND1 = (rtu_NWPDI && (rtu_OOC || (!localDW->Memory2)));

    /* Memory: '<S366>/Memory1' */
    localDW->Memory1 = localDW->Memory1_PreviousInput;

    /* Logic: '<S366>/AND2' incorporates:
     *  Logic: '<S366>/NOT2'
     *  Logic: '<S366>/OR2'
     */
    localDW->AND2 = (rtu_RWPDI && (rtu_OOC || (!localDW->Memory1)));
  }

  /* Outputs for Atomic SubSystem: '<S366>/MV_TOF2' */
  MV_TOF(VITALMAIN_M, localDW->AND2, &localDW->MV_TOF2, 0.2);

  /* End of Outputs for SubSystem: '<S366>/MV_TOF2' */

  /* Logic: '<S366>/AND10' */
  rtb_AND10_a = (localDW->MV_TOF2.LogicalOperator4 && localDW->Memory1);
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Logic: '<S366>/NOT9' */
    NOT9 = !localDW->Memory1;
  }

  /* Logic: '<S366>/AND11' incorporates:
   *  Logic: '<S366>/NOT8'
   */
  rtb_AND11 = ((!localDW->MV_TOF2.LogicalOperator4) && NOT9);

  /* Outputs for Atomic SubSystem: '<S366>/MV_TOF1' */
  MV_TOF(VITALMAIN_M, localDW->AND1, &localDW->MV_TOF1, 0.2);

  /* End of Outputs for SubSystem: '<S366>/MV_TOF1' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Logic: '<S366>/NOT10' */
    NOT10 = !localDW->Memory2;

    /* Logic: '<S366>/NOT11' */
    NOT11 = !rtu_OOC;

    /* Logic: '<S366>/OR6' */
    OR6 = (rtu_TP || rtu_TPZ);

    /* Memory: '<S366>/Memory3' */
    localDW->Memory3 = localDW->Memory3_PreviousInput;
  }

  /* Logic: '<S366>/AND15' incorporates:
   *  Logic: '<S366>/AND12'
   *  Logic: '<S366>/AND13'
   *  Logic: '<S366>/AND14'
   *  Logic: '<S366>/AND9'
   *  Logic: '<S366>/NOT7'
   *  Logic: '<S366>/OR7'
   *  Logic: '<S366>/OR8'
   *  Logic: '<S366>/OR9'
   */
  localDW->AND15 = (((((localDW->MV_TOF1.LogicalOperator4 && localDW->Memory2) ||
                       rtb_AND10_a) && NOT11 && OR6) || ((rtb_AND11 ||
    ((!localDW->MV_TOF1.LogicalOperator4) && NOT10)) && localDW->Memory3)) &&
                    rtu_VDR);
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Logic: '<S366>/AND16' incorporates:
     *  Logic: '<S366>/NOT12'
     */
    AND16 = ((!localDW->AND1) && localDW->Memory1);

    /* Logic: '<S366>/AND17' incorporates:
     *  Logic: '<S366>/NOT13'
     */
    AND17 = ((!localDW->AND2) && localDW->Memory2);

    /* Logic: '<S366>/AND18' */
    rtb_AND10_a = (localDW->Memory3 && rtu_VDR);

    /* Logic: '<S366>/AND20' */
    localDW->AND20 = (AND16 && rtb_AND10_a);

    /* Logic: '<S366>/AND21' */
    localDW->AND21 = (AND17 && rtb_AND10_a);
  }

  /* Outputs for Atomic SubSystem: '<S366>/MV_TON1' */
  MV_TON(VITALMAIN_M, localDW->AND20, &localDW->MV_TON1, 10.0);

  /* End of Outputs for SubSystem: '<S366>/MV_TON1' */

  /* Logic: '<S366>/AND22' incorporates:
   *  Logic: '<S366>/NOT14'
   */
  localDW->AND22 = ((!localDW->MV_TON1.LogicalOperator2) && localDW->Memory3 &&
                    AND16);

  /* Outputs for Atomic SubSystem: '<S366>/MV_TON2' */
  MV_TON(VITALMAIN_M, localDW->AND21, &localDW->MV_TON2, 10.0);

  /* End of Outputs for SubSystem: '<S366>/MV_TON2' */

  /* Logic: '<S366>/AND23' incorporates:
   *  Logic: '<S366>/NOT15'
   */
  localDW->AND23 = ((!localDW->MV_TON2.LogicalOperator2) && localDW->Memory3 &&
                    AND17);

  /* Logic: '<S366>/AND24' incorporates:
   *  Logic: '<S366>/OR10'
   */
  localDW->AND24 = ((localDW->AND22 || localDW->AND23) && rtu_L);
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Logic: '<S366>/OR3' */
    rtb_AND10_a = (localDW->AND1 || localDW->AND2 || localDW->Memory3 || rtu_OOC);

    /* Logic: '<S366>/AND3' incorporates:
     *  Logic: '<S366>/NOT4'
     */
    rtb_AND11 = (rtu_L && rtu_NREQ && (!rtu_RREQ) && rtb_AND10_a);

    /* Logic: '<S366>/AND4' incorporates:
     *  Logic: '<S366>/NOT3'
     */
    rtb_AND10_a = (rtu_L && (!rtu_NREQ) && rtu_RREQ && rtb_AND10_a);

    /* Logic: '<S366>/AND5' incorporates:
     *  Logic: '<S366>/NOT6'
     *  Logic: '<S366>/OR4'
     */
    localDW->AND5 = ((localDW->Memory1 || rtb_AND11) && (!rtb_AND10_a));

    /* Logic: '<S366>/AND6' incorporates:
     *  Logic: '<S366>/NOT5'
     *  Logic: '<S366>/OR5'
     */
    localDW->AND6 = ((!rtb_AND11) && (rtb_AND10_a || localDW->Memory2));

    /* Logic: '<S366>/AND7' */
    localDW->AND7 = (localDW->AND1 && localDW->Memory1);

    /* Logic: '<S366>/AND8' */
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
 *    '<S361>/POINT CONTROL'
 *    '<S362>/POINT CONTROL'
 *    '<S363>/POINT CONTROL'
 *    '<S364>/POINT CONTROL'
 *    '<S365>/POINT CONTROL'
 */
void M_SW_CTRL_Update(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, DW_M_SW_CTRL_T
                      *localDW)
{
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Update for Memory: '<S366>/Memory2' */
    localDW->Memory2_PreviousInput = localDW->AND6;

    /* Update for Memory: '<S366>/Memory1' */
    localDW->Memory1_PreviousInput = localDW->AND5;
  }

  /* Update for Atomic SubSystem: '<S366>/MV_TOF2' */
  MV_TOF_Update(VITALMAIN_M, localDW->AND2, &localDW->MV_TOF2);

  /* End of Update for SubSystem: '<S366>/MV_TOF2' */

  /* Update for Atomic SubSystem: '<S366>/MV_TOF1' */
  MV_TOF_Update(VITALMAIN_M, localDW->AND1, &localDW->MV_TOF1);

  /* End of Update for SubSystem: '<S366>/MV_TOF1' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Update for Memory: '<S366>/Memory3' */
    localDW->Memory3_PreviousInput = localDW->AND15;
  }

  /* Update for Atomic SubSystem: '<S366>/MV_TON1' */
  MV_TON_Update(VITALMAIN_M, localDW->AND20, &localDW->MV_TON1);

  /* End of Update for SubSystem: '<S366>/MV_TON1' */

  /* Update for Atomic SubSystem: '<S366>/MV_TON2' */
  MV_TON_Update(VITALMAIN_M, localDW->AND21, &localDW->MV_TON2);

  /* End of Update for SubSystem: '<S366>/MV_TON2' */
}

/*
 * Output and update for atomic system:
 *    '<S471>/POINT LOCK'
 *    '<S472>/POINT LOCK'
 *    '<S473>/POINT LOCK'
 *    '<S474>/POINT LOCK'
 *    '<S475>/POINT LOCK'
 */
void M_SW_L(boolean_T rtu_ESWS, boolean_T rtu_TP, boolean_T rtu_TPZ, DW_M_SW_L_T
            *localDW)
{
  /* Logic: '<S476>/OR2' incorporates:
   *  Logic: '<S476>/OR1'
   */
  localDW->OR2 = (rtu_ESWS && (rtu_TP || rtu_TPZ));
}

/*
 * Output and update for atomic system:
 *    '<S481>/ROUTE CHECK'
 *    '<S482>/ROUTE CHECK'
 *    '<S483>/ROUTE CHECK'
 *    '<S484>/ROUTE CHECK'
 *    '<S485>/ROUTE CHECK'
 *    '<S486>/ROUTE CHECK'
 *    '<S487>/ROUTE CHECK'
 *    '<S488>/ROUTE CHECK'
 *    '<S489>/ROUTE CHECK'
 *    '<S490>/ROUTE CHECK'
 *    ...
 */
void M_T_S(boolean_T rtu_REQ, boolean_T rtu_L, DW_M_T_S_T *localDW)
{
  /* Logic: '<S501>/AND2' */
  localDW->AND2 = (rtu_REQ && rtu_L);
}

/*
 * Output and update for atomic system:
 *    '<S521>/ROUTE CONFLICT LOCK'
 *    '<S522>/ROUTE CONFLICT LOCK'
 *    '<S523>/ROUTE CONFLICT LOCK'
 *    '<S524>/ROUTE CONFLICT LOCK'
 *    '<S525>/ROUTE CONFLICT LOCK'
 *    '<S526>/ROUTE CONFLICT LOCK'
 *    '<S529>/ROUTE CONFLICT LOCK'
 *    '<S530>/ROUTE CONFLICT LOCK'
 *    '<S531>/ROUTE CONFLICT LOCK'
 *    '<S532>/ROUTE CONFLICT LOCK'
 *    ...
 */
void M_R_L(boolean_T rtu_ESWS, boolean_T rtu_NWCRWC, boolean_T rtu_GRDRDO,
           boolean_T rtu_TP, DW_M_R_L_T *localDW)
{
  /* Logic: '<S541>/AND1' incorporates:
   *  Logic: '<S541>/NOT1'
   */
  localDW->AND1 = (rtu_ESWS && rtu_NWCRWC && (!rtu_GRDRDO) && rtu_TP);
}

/*
 * Output and update for atomic system:
 *    '<S527>/ROUTE CONFLICT LOCK'
 *    '<S528>/ROUTE CONFLICT LOCK'
 *    '<S533>/ROUTE CONFLICT LOCK'
 *    '<S534>/ROUTE CONFLICT LOCK'
 *    '<S536>/ROUTE CONFLICT LOCK'
 *    '<S537>/ROUTE CONFLICT LOCK'
 *    '<S539>/ROUTE CONFLICT LOCK'
 *    '<S540>/ROUTE CONFLICT LOCK'
 */
void M_R_L_2(boolean_T rtu_ESWS, boolean_T rtu_NWCRWC, boolean_T rtu_GRDRDO,
             DW_M_R_L_2_T *localDW)
{
  /* Logic: '<S547>/AND1' incorporates:
   *  Logic: '<S547>/NOT1'
   */
  localDW->AND1 = (rtu_ESWS && rtu_NWCRWC && (!rtu_GRDRDO));
}

/*
 * Output and update for atomic system:
 *    '<S561>/ROUTE LOCK1'
 *    '<S561>/ROUTE LOCK2'
 *    '<S562>/ROUTE LOCK1'
 *    '<S562>/ROUTE LOCK2'
 *    '<S563>/ROUTE LOCK1'
 *    '<S563>/ROUTE LOCK2'
 *    '<S564>/ROUTE LOCK'
 *    '<S565>/ROUTE LOCK'
 *    '<S566>/ROUTE LOCK'
 *    '<S567>/ROUTE LOCK'
 *    ...
 */
void M_ES_WS(boolean_T rtu_RLESWSB, boolean_T rtu_TP, boolean_T rtu_RLS,
             DW_M_ES_WS_T *localDW)
{
  /* Logic: '<S611>/AND1' incorporates:
   *  Logic: '<S611>/OR2'
   *  Memory: '<S611>/Memory'
   */
  localDW->AND1 = (rtu_RLESWSB && (rtu_TP || rtu_RLS || localDW->AND1));
}

/* Output and update for atomic system: '<S677>/M_SIG_CTRL3' */
void M_SIG_CTRL_3(boolean_T rtu_S, boolean_T rtu_TP, DW_M_SIG_CTRL_3_T *localDW)
{
  /* Logic: '<S686>/AND19' incorporates:
   *  Logic: '<S686>/NOT16'
   */
  localDW->AND19 = (rtu_S && (!rtu_TP));
}

/*
 * Output and update for atomic system:
 *    '<S678>/SIGNAL LIGHTING'
 *    '<S679>/SIGNAL LIGHTING'
 *    '<S680>/SIGNAL LIGHTING'
 *    '<S681>/SIGNAL LIGHTING'
 *    '<S682>/SIGNAL LIGHTING'
 *    '<S683>/SIGNAL LIGHTING'
 */
void M_SIG_CTRL_2(boolean_T rtu_T, DW_M_SIG_CTRL_2_T *localDW)
{
  /* Inport: '<S687>/T' */
  localDW->T = rtu_T;
}

/*
 * Output and update for atomic system:
 *    '<S684>/SIGNAL LIGHTING'
 *    '<S685>/SIGNAL LIGHTING'
 */
void M_SIG_CTRL(boolean_T rtu_T, boolean_T rtu_S, boolean_T rtu_TP,
                DW_M_SIG_CTRL_T *localDW)
{
  /* Inport: '<S693>/T' */
  localDW->T = rtu_T;

  /* Logic: '<S693>/AND19' incorporates:
   *  Logic: '<S693>/NOT16'
   */
  localDW->AND19 = (rtu_S && (!rtu_TP));
}

/*
 * System initialize for atomic system:
 *    '<S14>/M_TP1'
 *    '<S14>/M_TP10'
 *    '<S14>/M_TP11'
 *    '<S14>/M_TP12'
 *    '<S14>/M_TP13'
 *    '<S14>/M_TP14'
 *    '<S14>/M_TP15'
 *    '<S14>/M_TP16'
 *    '<S14>/M_TP17'
 *    '<S14>/M_TP18'
 *    ...
 */
void M_TP_Init(DW_M_TP_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S695>/MV_TON1' */
  MV_TON_Init(&localDW->MV_TON1);

  /* End of SystemInitialize for SubSystem: '<S695>/MV_TON1' */
}

/*
 * Outputs for atomic system:
 *    '<S14>/M_TP1'
 *    '<S14>/M_TP10'
 *    '<S14>/M_TP11'
 *    '<S14>/M_TP12'
 *    '<S14>/M_TP13'
 *    '<S14>/M_TP14'
 *    '<S14>/M_TP15'
 *    '<S14>/M_TP16'
 *    '<S14>/M_TP17'
 *    '<S14>/M_TP18'
 *    ...
 */
void M_TP(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_TPR, DW_M_TP_T
          *localDW)
{
  /* Outputs for Atomic SubSystem: '<S695>/MV_TON1' */
  MV_TON(VITALMAIN_M, rtu_TPR, &localDW->MV_TON1, 0.5);

  /* End of Outputs for SubSystem: '<S695>/MV_TON1' */
}

/*
 * Update for atomic system:
 *    '<S14>/M_TP1'
 *    '<S14>/M_TP10'
 *    '<S14>/M_TP11'
 *    '<S14>/M_TP12'
 *    '<S14>/M_TP13'
 *    '<S14>/M_TP14'
 *    '<S14>/M_TP15'
 *    '<S14>/M_TP16'
 *    '<S14>/M_TP17'
 *    '<S14>/M_TP18'
 *    ...
 */
void M_TP_Update(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_TPR,
                 DW_M_TP_T *localDW)
{
  /* Update for Atomic SubSystem: '<S695>/MV_TON1' */
  MV_TON_Update(VITALMAIN_M, rtu_TPR, &localDW->MV_TON1);

  /* End of Update for SubSystem: '<S695>/MV_TON1' */
}

/* System initialize for atomic system: '<S3>/COMMUNICATION CHECK' */
void M_COMM_Init(DW_M_COMM_T *localDW)
{
  /* SystemInitialize for Atomic SubSystem: '<S865>/MV_TON' */
  MV_TON_Init(&localDW->MV_TON_g);

  /* End of SystemInitialize for SubSystem: '<S865>/MV_TON' */

  /* SystemInitialize for Atomic SubSystem: '<S865>/MV_TON1' */
  MV_TON_Init(&localDW->MV_TON1);

  /* End of SystemInitialize for SubSystem: '<S865>/MV_TON1' */
}

/* Outputs for atomic system: '<S3>/COMMUNICATION CHECK' */
void M_COMM(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_WATCHDOG,
            boolean_T rtu_COMM1, boolean_T rtu_COMM2, DW_M_COMM_T *localDW)
{
  boolean_T LogicalOperator4;
  LogicalOperator4 = localDW->LogicalOperator4;
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Logic: '<S865>/Logical Operator' */
    localDW->LogicalOperator = !rtu_WATCHDOG;
  }

  /* Outputs for Atomic SubSystem: '<S865>/MV_TON' */
  MV_TON(VITALMAIN_M, rtu_WATCHDOG, &localDW->MV_TON_g, 2.0);

  /* End of Outputs for SubSystem: '<S865>/MV_TON' */

  /* Outputs for Atomic SubSystem: '<S865>/MV_TON1' */
  MV_TON(VITALMAIN_M, localDW->LogicalOperator, &localDW->MV_TON1, 2.0);

  /* End of Outputs for SubSystem: '<S865>/MV_TON1' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Logic: '<S865>/Logical Operator4' */
    LogicalOperator4 = (rtu_COMM1 || rtu_COMM2);
  }

  /* Logic: '<S865>/Logical Operator3' incorporates:
   *  Logic: '<S865>/Logical Operator1'
   *  Logic: '<S865>/Logical Operator2'
   */
  localDW->LogicalOperator3 = ((!(localDW->MV_TON_g.LogicalOperator2 ||
    localDW->MV_TON1.LogicalOperator2)) && LogicalOperator4);
  localDW->LogicalOperator4 = LogicalOperator4;
}

/* Update for atomic system: '<S3>/COMMUNICATION CHECK' */
void M_COMM_Update(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T
                   rtu_WATCHDOG, DW_M_COMM_T *localDW)
{
  /* Update for Atomic SubSystem: '<S865>/MV_TON' */
  MV_TON_Update(VITALMAIN_M, rtu_WATCHDOG, &localDW->MV_TON_g);

  /* End of Update for SubSystem: '<S865>/MV_TON' */

  /* Update for Atomic SubSystem: '<S865>/MV_TON1' */
  MV_TON_Update(VITALMAIN_M, localDW->LogicalOperator, &localDW->MV_TON1);

  /* End of Update for SubSystem: '<S865>/MV_TON1' */
}

/* System initialize for referenced model: 'VITALMAIN' */
void VITALMAIN_Init(void)
{
  /* SystemInitialize for Atomic SubSystem: '<S15>/M_AS2' */
  M_AS_2_Init(&VITALMAIN_DW.M_AS2);

  /* End of SystemInitialize for SubSystem: '<S15>/M_AS2' */

  /* SystemInitialize for Atomic SubSystem: '<S16>/APPROACH LOCK' */
  M_AS_2_Init(&VITALMAIN_DW.APPROACHLOCK);

  /* End of SystemInitialize for SubSystem: '<S16>/APPROACH LOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S17>/APPROACH LOCK' */
  M_AS_2_Init(&VITALMAIN_DW.APPROACHLOCK_h);

  /* End of SystemInitialize for SubSystem: '<S17>/APPROACH LOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S18>/APPROACH LOCK' */
  M_AS_2_Init(&VITALMAIN_DW.APPROACHLOCK_n);

  /* End of SystemInitialize for SubSystem: '<S18>/APPROACH LOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S19>/APPROACH LOCK' */
  M_AS_2_Init(&VITALMAIN_DW.APPROACHLOCK_d);

  /* End of SystemInitialize for SubSystem: '<S19>/APPROACH LOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S20>/APPROACH LOCK' */
  M_AS_2_Init(&VITALMAIN_DW.APPROACHLOCK_di);

  /* End of SystemInitialize for SubSystem: '<S20>/APPROACH LOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S21>/APPROACH LOCK' */
  M_AS_2_Init(&VITALMAIN_DW.APPROACHLOCK_a);

  /* End of SystemInitialize for SubSystem: '<S21>/APPROACH LOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S22>/APPROACH LOCK' */
  M_AS_Init(&VITALMAIN_DW.APPROACHLOCK_ne);

  /* End of SystemInitialize for SubSystem: '<S22>/APPROACH LOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S23>/APPROACH LOCK' */
  M_AS_Init(&VITALMAIN_DW.APPROACHLOCK_f);

  /* End of SystemInitialize for SubSystem: '<S23>/APPROACH LOCK' */

  /* SystemInitialize for Atomic SubSystem: '<S88>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Init(&VITALMAIN_DW.EMERGENCYPOINTRELEASE);

  /* End of SystemInitialize for SubSystem: '<S88>/EMERGENCY POINT RELEASE' */

  /* SystemInitialize for Atomic SubSystem: '<S89>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Init(&VITALMAIN_DW.EMERGENCYPOINTRELEASE_f);

  /* End of SystemInitialize for SubSystem: '<S89>/EMERGENCY POINT RELEASE' */

  /* SystemInitialize for Atomic SubSystem: '<S90>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Init(&VITALMAIN_DW.EMERGENCYPOINTRELEASE_e);

  /* End of SystemInitialize for SubSystem: '<S90>/EMERGENCY POINT RELEASE' */

  /* SystemInitialize for Atomic SubSystem: '<S91>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Init(&VITALMAIN_DW.EMERGENCYPOINTRELEASE_d);

  /* End of SystemInitialize for SubSystem: '<S91>/EMERGENCY POINT RELEASE' */

  /* SystemInitialize for Atomic SubSystem: '<S92>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Init(&VITALMAIN_DW.EMERGENCYPOINTRELEASE_m);

  /* End of SystemInitialize for SubSystem: '<S92>/EMERGENCY POINT RELEASE' */

  /* SystemInitialize for Atomic SubSystem: '<S148>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Init(&VITALMAIN_DW.EMERGENCYROUTERELEASE);

  /* End of SystemInitialize for SubSystem: '<S148>/EMERGENCY ROUTE RELEASE' */

  /* SystemInitialize for Atomic SubSystem: '<S149>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Init(&VITALMAIN_DW.EMERGENCYROUTERELEASE_h);

  /* End of SystemInitialize for SubSystem: '<S149>/EMERGENCY ROUTE RELEASE' */

  /* SystemInitialize for Atomic SubSystem: '<S150>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Init(&VITALMAIN_DW.EMERGENCYROUTERELEASE_e);

  /* End of SystemInitialize for SubSystem: '<S150>/EMERGENCY ROUTE RELEASE' */

  /* SystemInitialize for Atomic SubSystem: '<S151>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Init(&VITALMAIN_DW.EMERGENCYROUTERELEASE_d);

  /* End of SystemInitialize for SubSystem: '<S151>/EMERGENCY ROUTE RELEASE' */

  /* SystemInitialize for Atomic SubSystem: '<S152>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Init(&VITALMAIN_DW.EMERGENCYROUTERELEASE_n);

  /* End of SystemInitialize for SubSystem: '<S152>/EMERGENCY ROUTE RELEASE' */

  /* SystemInitialize for Atomic SubSystem: '<S153>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Init(&VITALMAIN_DW.EMERGENCYROUTERELEASE_ey);

  /* End of SystemInitialize for SubSystem: '<S153>/EMERGENCY ROUTE RELEASE' */

  /* SystemInitialize for Atomic SubSystem: '<S154>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Init(&VITALMAIN_DW.EMERGENCYROUTERELEASE_m);

  /* End of SystemInitialize for SubSystem: '<S154>/EMERGENCY ROUTE RELEASE' */

  /* SystemInitialize for Atomic SubSystem: '<S155>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Init(&VITALMAIN_DW.EMERGENCYROUTERELEASE_f);

  /* End of SystemInitialize for SubSystem: '<S155>/EMERGENCY ROUTE RELEASE' */

  /* SystemInitialize for Atomic SubSystem: '<S156>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Init(&VITALMAIN_DW.EMERGENCYROUTERELEASE_o);

  /* End of SystemInitialize for SubSystem: '<S156>/EMERGENCY ROUTE RELEASE' */

  /* SystemInitialize for Atomic SubSystem: '<S361>/POINT CONTROL' */
  M_SW_CTRL_Init(&VITALMAIN_DW.POINTCONTROL);

  /* End of SystemInitialize for SubSystem: '<S361>/POINT CONTROL' */

  /* SystemInitialize for Atomic SubSystem: '<S362>/POINT CONTROL' */
  M_SW_CTRL_Init(&VITALMAIN_DW.POINTCONTROL_c);

  /* End of SystemInitialize for SubSystem: '<S362>/POINT CONTROL' */

  /* SystemInitialize for Atomic SubSystem: '<S363>/POINT CONTROL' */
  M_SW_CTRL_Init(&VITALMAIN_DW.POINTCONTROL_a);

  /* End of SystemInitialize for SubSystem: '<S363>/POINT CONTROL' */

  /* SystemInitialize for Atomic SubSystem: '<S364>/POINT CONTROL' */
  M_SW_CTRL_Init(&VITALMAIN_DW.POINTCONTROL_j);

  /* End of SystemInitialize for SubSystem: '<S364>/POINT CONTROL' */

  /* SystemInitialize for Atomic SubSystem: '<S365>/POINT CONTROL' */
  M_SW_CTRL_Init(&VITALMAIN_DW.POINTCONTROL_h);

  /* End of SystemInitialize for SubSystem: '<S365>/POINT CONTROL' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP9' */
  M_TP_Init(&VITALMAIN_DW.M_TP9);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP9' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP8' */
  M_TP_Init(&VITALMAIN_DW.M_TP8);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP8' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP7' */
  M_TP_Init(&VITALMAIN_DW.M_TP7);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP7' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP6' */
  M_TP_Init(&VITALMAIN_DW.M_TP6);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP6' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP5' */
  M_TP_Init(&VITALMAIN_DW.M_TP5);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP5' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP4' */
  M_TP_Init(&VITALMAIN_DW.M_TP4);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP4' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP3' */
  M_TP_Init(&VITALMAIN_DW.M_TP3);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP3' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP27' */
  M_TP_Init(&VITALMAIN_DW.M_TP27);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP27' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP26' */
  M_TP_Init(&VITALMAIN_DW.M_TP26);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP26' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP25' */
  M_TP_Init(&VITALMAIN_DW.M_TP25);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP25' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP24' */
  M_TP_Init(&VITALMAIN_DW.M_TP24);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP24' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP23' */
  M_TP_Init(&VITALMAIN_DW.M_TP23);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP23' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP22' */
  M_TP_Init(&VITALMAIN_DW.M_TP22);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP22' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP21' */
  M_TP_Init(&VITALMAIN_DW.M_TP21);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP21' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP20' */
  M_TP_Init(&VITALMAIN_DW.M_TP20);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP20' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP2' */
  M_TP_Init(&VITALMAIN_DW.M_TP2);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP2' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP19' */
  M_TP_Init(&VITALMAIN_DW.M_TP19);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP19' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP18' */
  M_TP_Init(&VITALMAIN_DW.M_TP18);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP18' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP17' */
  M_TP_Init(&VITALMAIN_DW.M_TP17);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP17' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP16' */
  M_TP_Init(&VITALMAIN_DW.M_TP16);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP16' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP15' */
  M_TP_Init(&VITALMAIN_DW.M_TP15);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP15' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP14' */
  M_TP_Init(&VITALMAIN_DW.M_TP14);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP14' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP13' */
  M_TP_Init(&VITALMAIN_DW.M_TP13);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP13' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP12' */
  M_TP_Init(&VITALMAIN_DW.M_TP12);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP12' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP11' */
  M_TP_Init(&VITALMAIN_DW.M_TP11);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP11' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP10' */
  M_TP_Init(&VITALMAIN_DW.M_TP10);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP10' */

  /* SystemInitialize for Atomic SubSystem: '<S14>/M_TP1' */
  M_TP_Init(&VITALMAIN_DW.M_TP1);

  /* End of SystemInitialize for SubSystem: '<S14>/M_TP1' */

  /* SystemInitialize for Atomic SubSystem: '<S3>/COMMUNICATION CHECK' */
  M_COMM_Init(&VITALMAIN_DW.COMMUNICATIONCHECK);

  /* End of SystemInitialize for SubSystem: '<S3>/COMMUNICATION CHECK' */
}

/* Start for referenced model: 'VITALMAIN' */
void VITALMAIN_Start(void)
{
  /* Start for DiscretePulseGenerator: '<S3>/0.5S' */
  VITALMAIN_DW.clockTickCounter = 0;

  /* Start for DiscretePulseGenerator: '<S3>/1S' */
  VITALMAIN_DW.clockTickCounter_j = 0;
}

/* Outputs for referenced model: 'VITALMAIN' */
void VITALMAIN(const boolean_T rtu_FROMDEP[2], const boolean_T *rtu_NVVCHKFROM,
               const boolean_T *rtu_RRFROM, const boolean_T rtu_TREQFROM[16],
               const boolean_T rtu_NREQFROM[5], const boolean_T rtu_RREQFROM[5],
               const boolean_T rtu_OOCFROM[5], const boolean_T rtu_RRLSPBFROM[8],
               const boolean_T rtu_SWRLSPBFROM[5], const boolean_T
               rtu_DEPVARFROM[8], const boolean_T rtu_RSTFROM[9], const
               boolean_T *rtu_VDRDI, const boolean_T rtu_TPRDI[27], const
               boolean_T rtu_NWPDI[5], const boolean_T rtu_RWPDI[5], const
               boolean_T rtu_SYSTEMFROM[4], boolean_T rty_TODEP[3], boolean_T
               *rty_VDRDITO, boolean_T *rty_VNVCHKTO, boolean_T rty_TPTO[27],
               boolean_T rty_TESTO[25], boolean_T rty_TWSTO[25], boolean_T
               rty_SESTO[7], boolean_T rty_SWSTO[9], boolean_T rty_NWCTO[5],
               boolean_T rty_NWPTO[5], boolean_T rty_NWZTO[5], boolean_T
               rty_NWTETO[5], boolean_T rty_RWCTO[5], boolean_T rty_RWPTO[5],
               boolean_T rty_RWZTO[5], boolean_T rty_RWTETO[5], boolean_T
               rty_LTO[5], boolean_T rty_LSTO[5], boolean_T rty_SWRLSTO[5],
               boolean_T rty_TPZTO[5], boolean_T rty_DRDOTO[8], boolean_T
               rty_GRDOTO[2], boolean_T rty_TASTO[8], boolean_T rty_SASTO[3],
               boolean_T rty_RRLSTO[8], boolean_T *rty_VDRDO, boolean_T
               rty_DRDO[8], boolean_T rty_GRDO[2], boolean_T rty_NWRDO[5],
               boolean_T rty_RWRDO[5], boolean_T rty_WLPRDO[5])
{
  RT_MODEL_VITALMAIN_T *const VITALMAIN_M = &(VITALMAIN_MdlrefDW.rtm);

  /* local block i/o variables */
  boolean_T rtb_DEPGRDO;
  boolean_T rtb_DEPTP;
  boolean_T rtb_u1CTP;
  boolean_T rtb_RR;
  boolean_T rtb_VDRDI_m;
  boolean_T rtb_J12ADRDO;
  boolean_T rtb_u2ATP;
  boolean_T rtb_u1BTP;
  boolean_T rtb_RR_h;
  boolean_T rtb_VDRDI_e;
  boolean_T rtb_J12BDRDO;
  boolean_T rtb_u2ETP;
  boolean_T rtb_u3ATP;
  boolean_T rtb_RR_a;
  boolean_T rtb_VDRDI_i;
  boolean_T rtb_J14DRDO;
  boolean_T rtb_u4BTP;
  boolean_T rtb_u4ATP;
  boolean_T rtb_RR_d;
  boolean_T rtb_VDRDI_f;
  boolean_T rtb_J22ADRDO;
  boolean_T rtb_u2ATP_c;
  boolean_T rtb_u1CTP_n;
  boolean_T rtb_RR_e;
  boolean_T rtb_VDRDI_a;
  boolean_T rtb_J22BDRDO;
  boolean_T rtb_u2ATP_cl;
  boolean_T rtb_u3ATP_l;
  boolean_T rtb_RR_f;
  boolean_T rtb_VDRDI_d;
  boolean_T rtb_J24DRDO;
  boolean_T rtb_u4BTP_l;
  boolean_T rtb_u4ATP_k;
  boolean_T rtb_RR_hx;
  boolean_T rtb_VDRDI_iv;
  boolean_T rtb_JL10DRDO;
  boolean_T rtb_JL10GRDO;
  boolean_T rtb_u0ATP;
  boolean_T rtb_u0BTP;
  boolean_T rtb_RR_g;
  boolean_T rtb_VDRDI_k;
  boolean_T rtb_JL20DRDO;
  boolean_T rtb_JL10GRDO_o;
  boolean_T rtb_u0ATP_i;
  boolean_T rtb_u0BTP_d;
  boolean_T rtb_RR_l;
  boolean_T rtb_VDRDI_j;
  boolean_T rtb_W11A21ASWRLSPBCTRL;
  boolean_T rtb_AND1;
  boolean_T rtb_AND2;
  boolean_T rtb_SWRLS;
  boolean_T rtb_VDRDI_l;
  boolean_T rtb_W11B21BSWRLSPBCTRL;
  boolean_T rtb_AND1_o;
  boolean_T rtb_AND2_b;
  boolean_T rtb_SWRLS_o;
  boolean_T rtb_VDRDI_b;
  boolean_T rtb_W13A23ASWRLSPBCTRL;
  boolean_T rtb_AND1_o5;
  boolean_T rtb_AND2_k;
  boolean_T rtb_SWRLS_l;
  boolean_T rtb_VDRDI_g;
  boolean_T rtb_W13B23BSWRLSPBCTRL;
  boolean_T rtb_AND1_k;
  boolean_T rtb_AND2_n;
  boolean_T rtb_SWRLS_m;
  boolean_T rtb_VDRDI_h;
  boolean_T rtb_W21CSWRLSPBCTRL;
  boolean_T rtb_AND1_a;
  boolean_T rtb_u1CTP_b;
  boolean_T rtb_SWRLS_g;
  boolean_T rtb_VDRDI_gs;
  boolean_T rtb_AND1_ox;
  boolean_T rtb_OR1;
  boolean_T rtb_u1CSES_o;
  boolean_T rtb_DEPRRLSPBCTRL;
  boolean_T rtb_RRLS;
  boolean_T rtb_VDRDI_ay;
  boolean_T rtb_AND1_g;
  boolean_T rtb_OR1_l;
  boolean_T rtb_u2BTWS;
  boolean_T rtb_J12ARRLSPBCTRL;
  boolean_T rtb_RRLS_h;
  boolean_T rtb_VDRDI_p;
  boolean_T rtb_AND1_au;
  boolean_T rtb_OR1_m;
  boolean_T rtb_u2DTES;
  boolean_T rtb_J12BRRLSPBCTRL;
  boolean_T rtb_RRLS_g;
  boolean_T rtb_VDRDI_mc;
  boolean_T rtb_AND1_ah;
  boolean_T rtb_OR1_i;
  boolean_T rtb_u2BTWS_o;
  boolean_T rtb_J22ARRLSPBCTRL;
  boolean_T rtb_RRLS1;
  boolean_T rtb_VDRDI1;
  boolean_T rtb_AND1_j;
  boolean_T rtb_OR1_g;
  boolean_T rtb_u2DTES_a;
  boolean_T rtb_J22BRRLSPBCTRL;
  boolean_T rtb_RRLS_gh;
  boolean_T rtb_VDRDI_f5;
  boolean_T rtb_AND1_i;
  boolean_T rtb_OR1_g1;
  boolean_T rtb_u0BTWS;
  boolean_T rtb_X10RRLSPBCTRL;
  boolean_T rtb_RRLS1_j;
  boolean_T rtb_VDRDI1_p;
  boolean_T rtb_AND1_ac;
  boolean_T rtb_OR1_lj;
  boolean_T rtb_u4ATES;
  boolean_T rtb_X14RRLSPBCTRL;
  boolean_T rtb_RRLS_e;
  boolean_T rtb_VDRDI_c;
  boolean_T rtb_AND1_ob;
  boolean_T rtb_OR1_a;
  boolean_T rtb_u0BTWS_g;
  boolean_T rtb_X20RRLSPBCTRL;
  boolean_T rtb_RRLS1_c;
  boolean_T rtb_VDRDI1_d;
  boolean_T rtb_AND1_im;
  boolean_T rtb_OR1_h;
  boolean_T rtb_u4ATES_d;
  boolean_T rtb_X24RRLSPBCTRL;
  boolean_T rtb_RRLS_c;
  boolean_T rtb_VDRDI_gu;
  boolean_T rtb_DEPX10SL;
  boolean_T rtb_DEPX10RS;
  boolean_T rtb_DEPX20SL;
  boolean_T rtb_DEPX20RS;
  boolean_T rtb_JL10DEPSL;
  boolean_T rtb_JL10DEPRS;
  boolean_T rtb_JL20DEPSL;
  boolean_T rtb_JL20DEPRS;
  boolean_T rtb_X10RRLSTEFROM1;
  boolean_T rtb_J12BRRLSTEFROM1;
  boolean_T rtb_W11A21ANWZFROM1;
  boolean_T rtb_W11B21BNWZFROM1;
  boolean_T rtb_J22BRRLSTEFROM1;
  boolean_T rtb_W11A21ANWZFROM2;
  boolean_T rtb_W11B21BRWZFROM1;
  boolean_T rtb_W21CNWZFROM1;
  boolean_T rtb_DEPRRLSTEFROM1;
  boolean_T rtb_W11A21ANWZFROM3;
  boolean_T rtb_W11B21BRWZFROM2;
  boolean_T rtb_W21CRWZFROM1;
  boolean_T rtb_X10RRLSTEFROM1_n;
  boolean_T rtb_W11A21ANWZFROM1_b;
  boolean_T rtb_X20RRLSTEFROM1;
  boolean_T rtb_W11A21ARWZFROM1;
  boolean_T rtb_J12BRRLSTEFROM1_j;
  boolean_T rtb_W11B21BNWZFROM1_b;
  boolean_T rtb_J22BRRLSTEFROM1_k;
  boolean_T rtb_W11B21BRWZFROM1_j;
  boolean_T rtb_W21CNWZFROM1_g;
  boolean_T rtb_DEPRRLSTEFROM1_j;
  boolean_T rtb_W11B21BRWZFROM2_a;
  boolean_T rtb_W21CRWZFROM1_l;
  boolean_T rtb_X10RRLSTEFROM1_o;
  boolean_T rtb_W11A21ANWZFROM1_f;
  boolean_T rtb_X20RRLSTEFROM1_h;
  boolean_T rtb_W11A21ARWZFROM1_e;
  boolean_T rtb_J12BRRLSTEFROM1_g;
  boolean_T rtb_W11B21BNWZFROM1_c;
  boolean_T rtb_J22BRRLSTEFROM1_c;
  boolean_T rtb_W11B21BRWZFROM1_i;
  boolean_T rtb_W21CNWZFROM1_l;
  boolean_T rtb_DEPRRLSTEFROM1_g;
  boolean_T rtb_W11B21BRWZFROM2_g;
  boolean_T rtb_W21CRWZFROM1_n;
  boolean_T rtb_J12ARRLSTEFROM1;
  boolean_T rtb_J12BRRLSTEFROM1_f;
  boolean_T rtb_J12ARRLSTEFROM1_e;
  boolean_T rtb_J12BRRLSTEFROM1_e;
  boolean_T rtb_J12ARRLSTEFROM1_j;
  boolean_T rtb_J12BRRLSTEFROM1_i;
  boolean_T rtb_J12ARRLSTEFROM1_e1;
  boolean_T rtb_X14RRLSTEFROM1;
  boolean_T rtb_W13A23ANWZFROM1;
  boolean_T rtb_W13B23BNWZFROM1;
  boolean_T rtb_X24RRLSTEFROM1;
  boolean_T rtb_W13A23ARWZFROM1;
  boolean_T rtb_W13B23BNWZFROM2;
  boolean_T rtb_X14RRLSTEFROM1_d;
  boolean_T rtb_J12ARRLSTEFROM1_d;
  boolean_T rtb_W13B23BNWZFROM1_d;
  boolean_T rtb_W13A23ANWZFROM1_m;
  boolean_T rtb_J22ARRLSTEFROM1;
  boolean_T rtb_W13B23BRWZFROM1;
  boolean_T rtb_W13A23ANWZFROM2;
  boolean_T rtb_X14RRLSTEFROM1_e;
  boolean_T rtb_J12ARRLSTEFROM1_dy;
  boolean_T rtb_W13B23BNWZFROM1_k;
  boolean_T rtb_W13A23ANWZFROM1_h;
  boolean_T rtb_J22ARRLSTEFROM1_e;
  boolean_T rtb_W13B23BRWZFROM1_l;
  boolean_T rtb_W13A23ANWZFROM2_i;
  boolean_T rtb_X20RRLSTEFROM1_k;
  boolean_T rtb_J12BRRLSTEFROM1_h;
  boolean_T rtb_W11A21ARWZFROM1_h;
  boolean_T rtb_W11B21BNWZFROM1_f;
  boolean_T rtb_J22BRRLSTEFROM1_g;
  boolean_T rtb_W11A21ANWZFROM1_h;
  boolean_T rtb_W11B21BNWZFROM2;
  boolean_T rtb_W21CNWZFROM1_p;
  boolean_T rtb_DEPRRLSTEFROM1_e;
  boolean_T rtb_W11A21ANWZFROM2_m;
  boolean_T rtb_W11B21BNWZFROM3;
  boolean_T rtb_W21CRWZFROM1_b;
  boolean_T rtb_X20RRLSTEFROM1_d;
  boolean_T rtb_J12BRRLSTEFROM1_ec;
  boolean_T rtb_W11A21ARWZFROM1_a;
  boolean_T rtb_W11B21BNWZFROM1_g;
  boolean_T rtb_J22BRRLSTEFROM1_h;
  boolean_T rtb_W11A21ANWZFROM1_hu;
  boolean_T rtb_W11B21BNWZFROM2_g;
  boolean_T rtb_W21CNWZFROM1_n;
  boolean_T rtb_DEPRRLSTEFROM1_f;
  boolean_T rtb_W11A21ANWZFROM2_e;
  boolean_T rtb_W11B21BNWZFROM3_c;
  boolean_T rtb_W21CRWZFROM1_g;
  boolean_T rtb_DEPRRLSTEFROM1_fe;
  boolean_T rtb_W21CRWZFROM1_bf;
  boolean_T rtb_J22BRRLSTEFROM1_d;
  boolean_T rtb_W21CNWZFROM1_e;
  boolean_T rtb_X10RRLSTEFROM1_e;
  boolean_T rtb_W11B21BRWZFROM1_o;
  boolean_T rtb_W11A21ANWZFROM1_e;
  boolean_T rtb_X20RRLSTEFROM1_b;
  boolean_T rtb_W11B21BNWZFROM1_j;
  boolean_T rtb_W11A21ANWZFROM2_p;
  boolean_T rtb_DEPRRLSTEFROM1_k;
  boolean_T rtb_W21CRWZFROM1_j;
  boolean_T rtb_J22BRRLSTEFROM1_l;
  boolean_T rtb_W21CNWZFROM1_b;
  boolean_T rtb_X10RRLSTEFROM1_m;
  boolean_T rtb_W11B21BRWZFROM1_if;
  boolean_T rtb_W11A21ANWZFROM1_k;
  boolean_T rtb_X20RRLSTEFROM1_ko;
  boolean_T rtb_W11B21BNWZFROM1_l;
  boolean_T rtb_W11A21ANWZFROM2_j;
  boolean_T rtb_J22ARRLSTEFROM1_h;
  boolean_T rtb_J22BRRLSTEFROM1_j;
  boolean_T rtb_J22ARRLSTEFROM1_f;
  boolean_T rtb_J22BRRLSTEFROM1_i;
  boolean_T rtb_J22ARRLSTEFROM1_b;
  boolean_T rtb_J22BRRLSTEFROM1_o;
  boolean_T rtb_J12ARRLSTEFROM1_ef;
  boolean_T rtb_W13A23ARWZFROM1_i;
  boolean_T rtb_J22ARRLSTEFROM1_bt;
  boolean_T rtb_W13A23ANWZFROM1_l;
  boolean_T rtb_X14RRLSTEFROM1_do;
  boolean_T rtb_W13B23BRWZFROM1_f;
  boolean_T rtb_X24RRLSTEFROM1_e;
  boolean_T rtb_W13B23BNWZFROM1_g;
  boolean_T rtb_J12ARRLSTEFROM1_m;
  boolean_T rtb_W13A23ARWZFROM1_m;
  boolean_T rtb_J22ARRLSTEFROM1_o;
  boolean_T rtb_W13A23ANWZFROM1_h0;
  boolean_T rtb_X14RRLSTEFROM1_a;
  boolean_T rtb_W13B23BRWZFROM1_k;
  boolean_T rtb_X24RRLSTEFROM1_h;
  boolean_T rtb_W13B23BNWZFROM1_p;
  boolean_T rtb_X24RRLSTEFROM1_b;
  boolean_T rtb_J12ARRLSTEFROM1_jl;
  boolean_T rtb_W13B23BNWZFROM1_ge;
  boolean_T rtb_W13A23ARWZFROM1_h;
  boolean_T rtb_J22ARRLSTEFROM1_c;
  boolean_T rtb_W13B23BNWZFROM2_d;
  boolean_T rtb_W13A23ANWZFROM1_a;
  boolean_T rtb_W11A21ANWPDI;
  boolean_T rtb_W11A21ARWPDI;
  boolean_T rtb_W11A21AOOC;
  boolean_T rtb_W11A21ANREQ;
  boolean_T rtb_W11A21ARREQ;
  boolean_T rtb_AND1_h;
  boolean_T rtb_W11A21ATPZ;
  boolean_T rtb_W11B21BNWPDI;
  boolean_T rtb_W11B21BRWPDI;
  boolean_T rtb_W11B21BOOC;
  boolean_T rtb_W11B21BNREQ;
  boolean_T rtb_W11B21BRREQ;
  boolean_T rtb_AND1_d;
  boolean_T rtb_W11B21BTPZ;
  boolean_T rtb_W13A23ANWPDI;
  boolean_T rtb_W13A23ARWPDI;
  boolean_T rtb_W13A23AOOC;
  boolean_T rtb_W13A23ANREQ;
  boolean_T rtb_W13A23ARREQ;
  boolean_T rtb_AND1_m;
  boolean_T rtb_W13A23ATPZ;
  boolean_T rtb_W13B23BNWPDI;
  boolean_T rtb_W13B23BRWPDI;
  boolean_T rtb_W13B23BOOC;
  boolean_T rtb_W13B23BNREQ;
  boolean_T rtb_W13B23BRREQ;
  boolean_T rtb_AND1_at;
  boolean_T rtb_W13B23BTPZ;
  boolean_T rtb_W21CNWPDI;
  boolean_T rtb_W21CRWPDI;
  boolean_T rtb_W21COOC;
  boolean_T rtb_W21CNREQ;
  boolean_T rtb_W21CRREQ;
  boolean_T rtb_u1CTP_n2;
  boolean_T rtb_W21CTPZ;
  boolean_T rtb_AND6;
  boolean_T rtb_AND5;
  boolean_T rtb_W11A21ATPZ_o;
  boolean_T rtb_AND6_l;
  boolean_T rtb_AND5_g;
  boolean_T rtb_W11B21BTPZ_o;
  boolean_T rtb_AND6_k;
  boolean_T rtb_AND5_p;
  boolean_T rtb_W13A23ATPZ_a;
  boolean_T rtb_AND6_ki;
  boolean_T rtb_AND5_j;
  boolean_T rtb_W13B23BTPZ_n;
  boolean_T rtb_AND6_f;
  boolean_T rtb_u1CTP_p;
  boolean_T rtb_W21CTPZ_a;
  boolean_T rtb_DEPX10REQ;
  boolean_T rtb_DEPX10SL_e;
  boolean_T rtb_DEPX20REQ;
  boolean_T rtb_DEPX20SL_l;
  boolean_T rtb_J12AX10REQ;
  boolean_T rtb_J12AX10L;
  boolean_T rtb_J12AX20REQ;
  boolean_T rtb_J12AX20L;
  boolean_T rtb_J12BX14REQ;
  boolean_T rtb_J12BX14L;
  boolean_T rtb_J12BX24REQ;
  boolean_T rtb_J12BX24L;
  boolean_T rtb_J14J12AREQ;
  boolean_T rtb_J14J12AL;
  boolean_T rtb_J14J22AREQ;
  boolean_T rtb_J14J22AL;
  boolean_T rtb_J22AX10REQ;
  boolean_T rtb_J22AX10L;
  boolean_T rtb_J22AX20REQ;
  boolean_T rtb_J22AX20L;
  boolean_T rtb_J22BX14REQ;
  boolean_T rtb_J22BX14L;
  boolean_T rtb_J22BX24REQ;
  boolean_T rtb_J22BX24L;
  boolean_T rtb_J24J12AREQ;
  boolean_T rtb_J24J12AL;
  boolean_T rtb_J24J22AREQ;
  boolean_T rtb_J24J22AL;
  boolean_T rtb_JL10DEPREQ;
  boolean_T rtb_JL10DEPSL_m;
  boolean_T rtb_JL10J12BREQ;
  boolean_T rtb_JL10J12BL;
  boolean_T rtb_JL10J22BREQ;
  boolean_T rtb_JL10J22BL;
  boolean_T rtb_JL20DEPREQ;
  boolean_T rtb_JL20DEPSL_p;
  boolean_T rtb_JL20J12BREQ;
  boolean_T rtb_JL20J12BL;
  boolean_T rtb_JL20J22BREQ;
  boolean_T rtb_JL20J22BL;
  boolean_T rtb_AND2_at;
  boolean_T rtb_AND1_m2;
  boolean_T rtb_AND3_hx;
  boolean_T rtb_u1CTP_j;
  boolean_T rtb_AND2_m;
  boolean_T rtb_AND1_in;
  boolean_T rtb_AND3_j;
  boolean_T rtb_u1CTP_nj;
  boolean_T rtb_u1BTES_i;
  boolean_T rtb_AND1_bv;
  boolean_T rtb_OR1_az;
  boolean_T rtb_AND3_c;
  boolean_T rtb_u1BTES_cc;
  boolean_T rtb_AND1_n5;
  boolean_T rtb_AND2_g;
  boolean_T rtb_AND3_o;
  boolean_T rtb_u3ATWS_k;
  boolean_T rtb_AND1_pg;
  boolean_T rtb_J14DRDO_f;
  boolean_T rtb_AND3_k;
  boolean_T rtb_u3ATWS_i;
  boolean_T rtb_AND1_h1;
  boolean_T rtb_J24DRDO_j;
  boolean_T rtb_AND3_m;
  boolean_T rtb_u4ATES_c;
  boolean_T rtb_AND1_e;
  boolean_T rtb_J12BDRDO_c;
  boolean_T rtb_u4ATES_o;
  boolean_T rtb_AND1_pl;
  boolean_T rtb_J22DRDO;
  boolean_T rtb_u1CTES_a;
  boolean_T rtb_AND1_e1;
  boolean_T rtb_OR1_pi;
  boolean_T rtb_AND3_ei;
  boolean_T rtb_u1CTES_o;
  boolean_T rtb_AND2_h;
  boolean_T rtb_AND1_pgg;
  boolean_T rtb_AND3_ke;
  boolean_T rtb_u3ATWS_p;
  boolean_T rtb_AND1_b4;
  boolean_T rtb_J14DRDO_fl;
  boolean_T rtb_AND3_hq;
  boolean_T rtb_u3ATWS_a;
  boolean_T rtb_AND1_fd;
  boolean_T rtb_J24DRDO_e;
  boolean_T rtb_AND3_dw;
  boolean_T rtb_u4ATES_p;
  boolean_T rtb_AND1_df;
  boolean_T rtb_J12BDRDO_ct;
  boolean_T rtb_u4ATES_dt;
  boolean_T rtb_AND1_b3;
  boolean_T rtb_J22BDRDO_m;
  boolean_T rtb_AND2_ar;
  boolean_T rtb_AND1_po;
  boolean_T rtb_DEPGRDO_d;
  boolean_T rtb_u0BTP_f;
  boolean_T rtb_AND2_j;
  boolean_T rtb_AND1_pk;
  boolean_T rtb_J12ADRDO_d;
  boolean_T rtb_AND2_b4;
  boolean_T rtb_AND1_hc;
  boolean_T rtb_J22ADRDO_l;
  boolean_T rtb_AND2_p;
  boolean_T rtb_AND1_on;
  boolean_T rtb_DEPGRDO_h;
  boolean_T rtb_u0BTP_dj;
  boolean_T rtb_AND2_i;
  boolean_T rtb_AND1_o3;
  boolean_T rtb_J12ADRDO_f;
  boolean_T rtb_AND2_h1;
  boolean_T rtb_AND1_i4;
  boolean_T rtb_J22ADRDO_n;
  boolean_T rtb_u0BSESRL;
  boolean_T rtb_u0BTP_b;
  boolean_T rtb_u0BRLS;
  boolean_T rtb_u0BTESRL;
  boolean_T rtb_u0BSWS_b;
  boolean_T rtb_u0ATP_k;
  boolean_T rtb_u0ARLS;
  boolean_T rtb_u0BTWS_a;
  boolean_T rtb_u0BSWS_bf;
  boolean_T rtb_u0ATP_p;
  boolean_T rtb_u0ARLS_m;
  boolean_T rtb_u0BTWS_j;
  boolean_T rtb_u2BTWS_e;
  boolean_T rtb_u2ATP_n;
  boolean_T rtb_u2ARLS;
  boolean_T rtb_u2BTWS_n;
  boolean_T rtb_u2ATP_p;
  boolean_T rtb_u2ARLS_p;
  boolean_T rtb_u2DTES_l;
  boolean_T rtb_u2ETP_h;
  boolean_T rtb_u2ERLS;
  boolean_T rtb_u2DTES_f;
  boolean_T rtb_u2ETP_p;
  boolean_T rtb_u2ERLS_a;
  boolean_T rtb_u4ATES_k;
  boolean_T rtb_u4BTP_im;
  boolean_T rtb_u4BRLS;
  boolean_T rtb_u4ATES_l;
  boolean_T rtb_u4BTP_b;
  boolean_T rtb_u4BRLS_p;
  boolean_T rtb_OR2_l;
  boolean_T rtb_u0BTP_fu;
  boolean_T rtb_u0BRLS_e;
  boolean_T rtb_OR1_f1;
  boolean_T rtb_OR2_j;
  boolean_T rtb_u1ATP_nv;
  boolean_T rtb_u1ARLS;
  boolean_T rtb_u0BSES;
  boolean_T rtb_u1BSWS_k0;
  boolean_T rtb_u1ATP_ar;
  boolean_T rtb_u1ARLS_n;
  boolean_T rtb_u1BTWS_hl;
  boolean_T rtb_u1ASES_j;
  boolean_T rtb_u1BTP_gg;
  boolean_T rtb_u1BRLS;
  boolean_T rtb_u1ATES_d;
  boolean_T rtb_OR3;
  boolean_T rtb_u1BTP_po;
  boolean_T rtb_u1BRLS_k;
  boolean_T rtb_OR2_i;
  boolean_T rtb_OR1_d;
  boolean_T rtb_u2ATP_m;
  boolean_T rtb_u2ARLS_n;
  boolean_T rtb_u2ATES;
  boolean_T rtb_u2BTP;
  boolean_T rtb_u2BRLS;
  boolean_T rtb_u2CTWS;
  boolean_T rtb_u2BTP_g;
  boolean_T rtb_u2BRLS_b;
  boolean_T rtb_u2BTES;
  boolean_T rtb_u2CTP;
  boolean_T rtb_u2CRLS;
  boolean_T rtb_u2DTWS;
  boolean_T rtb_u2CTP_n;
  boolean_T rtb_u2CRLS_k;
  boolean_T rtb_u2CTES;
  boolean_T rtb_u2DTP;
  boolean_T rtb_u2DRLS;
  boolean_T rtb_u2ETWS;
  boolean_T rtb_u2DTP_a;
  boolean_T rtb_u2DRLS_d;
  boolean_T rtb_u3ATWS_b;
  boolean_T rtb_u2ETP_c;
  boolean_T rtb_u2ERLS_f;
  boolean_T rtb_u3ATESRL;
  boolean_T rtb_u3ATP_i;
  boolean_T rtb_u3ARLS;
  boolean_T rtb_AND1_bs;
  boolean_T rtb_u3ATP_e;
  boolean_T rtb_u3ARLS_l;
  boolean_T rtb_AND1_di;
  boolean_T rtb_u3BTP_o;
  boolean_T rtb_u3BRLS;
  boolean_T rtb_u4ATWS;
  boolean_T rtb_u3BTP_f;
  boolean_T rtb_u3BRLS_j;
  boolean_T rtb_u3BTES_h;
  boolean_T rtb_u4ATP_g;
  boolean_T rtb_u4ARLS;
  boolean_T rtb_u4TWSRL;
  boolean_T rtb_u4ATP_m;
  boolean_T rtb_u4ARLS_c;
  boolean_T rtb_u0BSESRL_l;
  boolean_T rtb_u0BTP_e;
  boolean_T rtb_u0BRLS_p;
  boolean_T rtb_u0BTESRL_m;
  boolean_T rtb_u1ASWS_n;
  boolean_T rtb_u0BTP_l;
  boolean_T rtb_u0BRLS_l;
  boolean_T rtb_u1ATWS_c;
  boolean_T rtb_u0BSES_k;
  boolean_T rtb_u1ATP_f5;
  boolean_T rtb_u1ARLS_k;
  boolean_T rtb_u0BTES_f;
  boolean_T rtb_OR6;
  boolean_T rtb_u1ATP_i;
  boolean_T rtb_u1ARLS_g;
  boolean_T rtb_AND1_nb;
  boolean_T rtb_AND2_ib;
  boolean_T rtb_u1BTP_e;
  boolean_T rtb_u1BRLS_o;
  boolean_T rtb_AND1_bl;
  boolean_T rtb_u1CSWS_l;
  boolean_T rtb_u1BTP_h;
  boolean_T rtb_u1BRLS_b;
  boolean_T rtb_u1CTWS_g;
  boolean_T rtb_u1BSES_e;
  boolean_T rtb_u1CTP_bc;
  boolean_T rtb_u1CRLS;
  boolean_T rtb_u1BTES_g;
  boolean_T rtb_u1CSWSRL;
  boolean_T rtb_u1CTP_g;
  boolean_T rtb_u1CRLS_l;
  boolean_T rtb_u1CTWSRL;
  boolean_T rtb_OR1_cc;
  boolean_T rtb_u2ATP_j;
  boolean_T rtb_u2ARLS_d;
  boolean_T rtb_u2ATES_a;
  boolean_T rtb_u2BTP_i;
  boolean_T rtb_u2BRLS_p;
  boolean_T rtb_u2CTWS_i;
  boolean_T rtb_u2BTP_k;
  boolean_T rtb_u2BRLS_pa;
  boolean_T rtb_u2BTES_e;
  boolean_T rtb_u2CTP_k;
  boolean_T rtb_u2CRLS_e;
  boolean_T rtb_u2DTWS_b;
  boolean_T rtb_u2CTP_p;
  boolean_T rtb_u2CRLS_n;
  boolean_T rtb_u2CTES_a;
  boolean_T rtb_u2DTP_o;
  boolean_T rtb_u2DRLS_h;
  boolean_T rtb_u2ETWS_d;
  boolean_T rtb_u2DTP_j;
  boolean_T rtb_u2DRLS_dv;
  boolean_T rtb_OR1_a0;
  boolean_T rtb_u2ETP_g;
  boolean_T rtb_u2ERLS_i;
  boolean_T rtb_OR2_pe;
  boolean_T rtb_u3ATP_e4;
  boolean_T rtb_u3ARLS_a;
  boolean_T rtb_u3BTWS_g;
  boolean_T rtb_u3ATP_dq;
  boolean_T rtb_u3ARLS_h;
  boolean_T rtb_u3ATES_ph;
  boolean_T rtb_u3BTP_c;
  boolean_T rtb_u3BRLS_m;
  boolean_T rtb_OR2_kc;
  boolean_T rtb_u3BTP_e5;
  boolean_T rtb_u3BRLS_o;
  boolean_T rtb_OR1_nr;
  boolean_T rtb_u4ATP_l;
  boolean_T rtb_u4ARLS_f;
  boolean_T rtb_u4TWSRL_p;
  boolean_T rtb_u4ATP_h;
  boolean_T rtb_u4ARLS_g;
  boolean_T rtb_OR1_mc;
  boolean_T rtb_DEPTP_a;
  boolean_T rtb_OR2_f;
  boolean_T rtb_OR2_fr;
  boolean_T rtb_OR2_g;
  boolean_T rtb_OR2_av;
  boolean_T rtb_OR2_iv;
  boolean_T rtb_OR2_km;
  boolean_T rtb_OR1_fj;
  boolean_T rtb_JL10DEPS_f;
  boolean_T rtb_u0ATP_az;
  boolean_T rtb_OR2_jb;
  boolean_T rtb_JL20DEPS_j;
  boolean_T rtb_u0ATP_ad;
  boolean_T rtb_COMM1DI;
  boolean_T rtb_COMM2DI;
  boolean_T rtb_DEPGRDO_o;
  boolean_T rtb_RRLSXDEP;
  boolean_T rtb_u0ATP_b;
  boolean_T rtb_u0BTP_ep;
  boolean_T rtb_u1ATP_k;
  boolean_T rtb_u1BTP_ac;
  boolean_T rtb_u2ATP_b;
  boolean_T rtb_u2BTP_c;
  boolean_T rtb_u2CTP_f;
  boolean_T rtb_u2DTP_p;
  boolean_T rtb_u2ETP_a;
  boolean_T rtb_u3ATP_od;
  boolean_T rtb_u3BTP_i;
  boolean_T rtb_u4ATP_n1;
  boolean_T rtb_u4BTP_n;
  boolean_T rtb_u0ATP_g3;
  boolean_T rtb_u0BTP_mt;
  boolean_T rtb_u1ATP_o;
  boolean_T rtb_u1BTP_nz;
  boolean_T rtb_u1CTP_dm;
  boolean_T rtb_u2ATP_mb;
  boolean_T rtb_u2BTP_a;
  boolean_T rtb_u2CTP_a;
  boolean_T rtb_u2DTP_e;
  boolean_T rtb_u2ETP_b;
  boolean_T rtb_u3ATP_lr;
  boolean_T rtb_u3BTP_k4;
  boolean_T rtb_u4ATP_p;
  boolean_T rtb_u4BTP_hz;
  boolean_T rtb_u0BTES_l;
  boolean_T rtb_u1ATES_ok;
  boolean_T rtb_u1BTES_m;
  boolean_T rtb_u2ATES_g;
  boolean_T rtb_u2BTES_a;
  boolean_T rtb_u2CTES_p;
  boolean_T rtb_u2DTES_i;
  boolean_T rtb_u2ETES;
  boolean_T rtb_u3ATES_i;
  boolean_T rtb_u3BTES_gn;
  boolean_T rtb_u4ATES_m;
  boolean_T rtb_u4BTES;
  boolean_T rtb_u0BTES_j;
  boolean_T rtb_u1ATES_g;
  boolean_T rtb_u1BTES_gi;
  boolean_T rtb_u1CTES_b;
  boolean_T rtb_u2ATES_o;
  boolean_T rtb_u2BTES_f;
  boolean_T rtb_u2CTES_o;
  boolean_T rtb_u2DTES_b5;
  boolean_T rtb_u2ETES_o;
  boolean_T rtb_u3ATES_d;
  boolean_T rtb_u3BTES_et;
  boolean_T rtb_u4ATES_ia;
  boolean_T rtb_u4BTES_n;
  boolean_T rtb_u0ATWS;
  boolean_T rtb_u0BTWS_m;
  boolean_T rtb_u1ATWS_he;
  boolean_T rtb_u1BTWS_l;
  boolean_T rtb_u2ATWS;
  boolean_T rtb_u2BTWS_f;
  boolean_T rtb_u2CTWS_d;
  boolean_T rtb_u2DTWS_i;
  boolean_T rtb_u2ETWS_b;
  boolean_T rtb_u3ATWS_e;
  boolean_T rtb_u3BTWS_n;
  boolean_T rtb_u4ATWS_d;
  boolean_T rtb_u0ATWS_i;
  boolean_T rtb_u0BTWS_e;
  boolean_T rtb_u1ATWS_j;
  boolean_T rtb_u1BTWS_m;
  boolean_T rtb_u1CTWS_c;
  boolean_T rtb_u2ATWS_n;
  boolean_T rtb_u2BTWS_h;
  boolean_T rtb_u2CTWS_o;
  boolean_T rtb_u2DTWS_k0;
  boolean_T rtb_u2ETWS_m;
  boolean_T rtb_u3ATWS_d;
  boolean_T rtb_u3BTWS_f;
  boolean_T rtb_u4ATWS_f;
  boolean_T rtb_u0BSES_c;
  boolean_T rtb_u1ASES_n;
  boolean_T rtb_u1BSES_lq;
  boolean_T rtb_u0BSES_a;
  boolean_T rtb_u1ASES_f;
  boolean_T rtb_u1BSES_m;
  boolean_T rtb_u1CSES_e;
  boolean_T rtb_u0ASWS;
  boolean_T rtb_u0BSWS_en;
  boolean_T rtb_u1ASWS_c;
  boolean_T rtb_u1BSWS_im;
  boolean_T rtb_u0ASWS_h;
  boolean_T rtb_u0BSWS_ee;
  boolean_T rtb_u1ASWS_f3;
  boolean_T rtb_u1BSWS_c;
  boolean_T rtb_u1CSWS_n;
  boolean_T rtb_W11A21ANWC_e;
  boolean_T rtb_W11B21BNWC_e;
  boolean_T rtb_W13A23ANWC_p;
  boolean_T rtb_W13B23BNWC_b;
  boolean_T rtb_W21CNWC_l;
  boolean_T rtb_W11A21ANWP;
  boolean_T rtb_W11B21BNWP;
  boolean_T rtb_W13A23ANWP;
  boolean_T rtb_W13B23BNWP;
  boolean_T rtb_W21CNWP;
  boolean_T rtb_W11A21ANWZ_p;
  boolean_T rtb_W11B21BNWZ_c;
  boolean_T rtb_W13A23ANWZ_a;
  boolean_T rtb_W13B23BNWZ_i;
  boolean_T rtb_W21CNWZ;
  boolean_T rtb_W11A21ANWTE;
  boolean_T rtb_W11B21BNWTE;
  boolean_T rtb_W13A23ANWTE;
  boolean_T rtb_W13B23BNWTE;
  boolean_T rtb_W21CNWTE;
  boolean_T rtb_W11A21ARWC_c;
  boolean_T rtb_W11B21BRWC_j;
  boolean_T rtb_W13A23ARWC_m;
  boolean_T rtb_W13B23BRWC_n;
  boolean_T rtb_W21CRWC_lp;
  boolean_T rtb_W11A21ARWP;
  boolean_T rtb_W11B21BRWP;
  boolean_T rtb_W13A23ARWP;
  boolean_T rtb_W13B23BRWP;
  boolean_T rtb_W21CRWP;
  boolean_T rtb_W11A21ARWZ_h;
  boolean_T rtb_W11B21BRWZ_n;
  boolean_T rtb_W13A23ARWZ_g;
  boolean_T rtb_W13B23BRWZ_o;
  boolean_T rtb_W21CRWZ_i;
  boolean_T rtb_W11A21ARWTE;
  boolean_T rtb_W11B21BRWTE;
  boolean_T rtb_W13A23ARWTE;
  boolean_T rtb_W13B23BRWTE;
  boolean_T rtb_W21CRWTE;
  boolean_T rtb_W11A21AL;
  boolean_T rtb_W11B21BL;
  boolean_T rtb_W13A23AL;
  boolean_T rtb_W13B23BL;
  boolean_T rtb_W21CL;
  boolean_T rtb_W11A21ALS;
  boolean_T rtb_W11B21BLS;
  boolean_T rtb_W13A23ALS;
  boolean_T rtb_W13B23BLS;
  boolean_T rtb_W21CLS;
  boolean_T rtb_W11A21ASWRLS_c;
  boolean_T rtb_W11B21BSWRLS_j;
  boolean_T rtb_W13A23ASWRLS_g;
  boolean_T rtb_W13B23BSWRLS_k;
  boolean_T rtb_W21CSWRLS_j;
  boolean_T rtb_W11A21ATPZ_c0;
  boolean_T rtb_W11B21BTPZ_f;
  boolean_T rtb_W13A23ATPZ_m;
  boolean_T rtb_W13B23BTPZ_o;
  boolean_T rtb_W21CTPZ_l;
  boolean_T rtb_J12ADRDO_k;
  boolean_T rtb_J12BDRDO_b;
  boolean_T rtb_J14DRDO_k;
  boolean_T rtb_J22ADRDO_j;
  boolean_T rtb_J22BDRDO_e;
  boolean_T rtb_J24DRDO_c;
  boolean_T rtb_JL10DRDO_g;
  boolean_T rtb_JL20DRDO_p;
  boolean_T rtb_JL10GRDO_c;
  boolean_T rtb_JL20GRDO_f;
  boolean_T rtb_J12ATAS_n;
  boolean_T rtb_J12BTAS_h;
  boolean_T rtb_J14TAS_b;
  boolean_T rtb_J22ATAS_h;
  boolean_T rtb_J22BTAS_er;
  boolean_T rtb_J24TAS_j;
  boolean_T rtb_JL10TAS_j;
  boolean_T rtb_JL20TAS_m;
  boolean_T rtb_DEPSAS_e;
  boolean_T rtb_JL10SAS_o;
  boolean_T rtb_JL20SAS_c;
  boolean_T rtb_J12ARRLS_p;
  boolean_T rtb_J12BRRLS_p;
  boolean_T rtb_J22ARRLS_a;
  boolean_T rtb_J22BRRLS_b;
  boolean_T rtb_X10RRLS_m;
  boolean_T rtb_X14RRLS_g;
  boolean_T rtb_X20RRLS_b;
  boolean_T rtb_X24RRLS_o;
  boolean_T rtb_W11A21ANWRDO;
  boolean_T rtb_W11B21BNWRDO;
  boolean_T rtb_W13A23ANWRDO;
  boolean_T rtb_W13B23BNWRDO;
  boolean_T rtb_W21CNWRDO;
  boolean_T rtb_W11A21ARWRDO;
  boolean_T rtb_W11B21BRWRDO;
  boolean_T rtb_W13A23ARWRDO;
  boolean_T rtb_W13B23BRWRDO;
  boolean_T rtb_W21CRWRDO;
  boolean_T rtb_W11A21AWLPRDO;
  boolean_T rtb_W11B21BWLPRDO;
  boolean_T rtb_W13A23AWLPRDO;
  boolean_T rtb_W13B23BWLPRDO;
  boolean_T rtb_W21CWLPRDO;
  int32_T clockTickCounter;
  int32_T clockTickCounter_j;
  boolean_T M_RLS_24A;
  boolean_T M_RRLSPB_CTRL_DEP;
  boolean_T M_TP_DEP;
  boolean_T M_CHK_NV_V;
  boolean_T M_RR;
  boolean_T M_REQ_T_12_14;
  boolean_T M_REQ_T_12_24;
  boolean_T M_REQ_T_12_10;
  boolean_T M_REQ_T_12_20;
  boolean_T M_REQ_T_14_12;
  boolean_T M_REQ_T_14_22;
  boolean_T M_REQ_T_22_14;
  boolean_T M_REQ_T_22_24;
  boolean_T M_REQ_T_22_10;
  boolean_T M_REQ_T_22_20;
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
  boolean_T M_RRLSPB_CTRL_J12A;
  boolean_T M_RRLSPB_CTRL_J12B;
  boolean_T M_RRLSPB_CTRL_J22A;
  boolean_T M_RRLSPB_CTRL_J22B;
  boolean_T M_RRLSPB_CTRL_X10;
  boolean_T M_RRLSPB_CTRL_X14;
  boolean_T M_RRLSPB_CTRL_X20;
  boolean_T M_RRLSPB_CTRL_X24;
  boolean_T M_W11A_21A_SWRLSPB_CTRL;
  boolean_T M_W11B_21B_SWRLSPB_CTRL;
  boolean_T M_W13A_23A_SWRLSPB_CTRL;
  boolean_T M_W13B_23B_SWRLSPB_CTRL;
  boolean_T M_W21C_SWRLSPB_CTRL;
  boolean_T M_RS_DEP_10;
  boolean_T M_REQ_S_DEP_10;
  boolean_T M_RS_DEP_20;
  boolean_T M_REQ_S_DEP_20;
  boolean_T M_RS_10_DEP;
  boolean_T M_REQ_S_10_DEP;
  boolean_T M_RS_20_DEP;
  boolean_T M_REQ_S_20_DEP;
  boolean_T DI_VDR;
  boolean_T DI_TPR_10A;
  boolean_T DI_TPR_10B;
  boolean_T DI_TPR_11A;
  boolean_T DI_TPR_11B;
  boolean_T DI_TPR_12A;
  boolean_T DI_TPR_12B;
  boolean_T DI_TPR_12C;
  boolean_T DI_TPR_12D;
  boolean_T DI_TPR_12E;
  boolean_T DI_TPR_13A;
  boolean_T DI_TPR_13B;
  boolean_T DI_TPR_14A;
  boolean_T DI_TPR_14B;
  boolean_T DI_TPR_20A;
  boolean_T DI_TPR_20B;
  boolean_T DI_TPR_21A;
  boolean_T DI_TPR_21B;
  boolean_T DI_TPR_21C;
  boolean_T DI_TPR_22A;
  boolean_T DI_TPR_22B;
  boolean_T DI_TPR_22C;
  boolean_T DI_TPR_22D;
  boolean_T DI_TPR_22E;
  boolean_T DI_TPR_23A;
  boolean_T DI_TPR_23B;
  boolean_T DI_TPR_24A;
  boolean_T DI_TPR_24B;
  boolean_T DI_NWP_W11A_21A;
  boolean_T DI_NWP_W11B_21B;
  boolean_T DI_NWP_W13A_23A;
  boolean_T DI_NWP_W13B_23B;
  boolean_T DI_NWP_W21C;
  boolean_T DI_RWP_W11A_21A;
  boolean_T DI_RWP_W11B_21B;
  boolean_T DI_RWP_W13A_23A;
  boolean_T DI_RWP_W13B_23B;
  boolean_T DI_RWP_W21C;
  boolean_T DI_COMM_1;
  boolean_T DI_COMM_2;
  boolean_T DI_SYS_1;
  boolean_T DI_SYS_2;
  boolean_T M_DEP_GR_DO;
  boolean_T M_RRLS_XDEP;
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
  boolean_T DO_J12A_DR;
  boolean_T DO_J12B_DR;
  boolean_T DO_J14_DR;
  boolean_T DO_J22A_DR;
  boolean_T DO_J22B_DR;
  boolean_T DO_J24_DR;
  boolean_T DO_JL10_DR;
  boolean_T DO_JL20_DR;
  boolean_T DO_JL10_GR;
  boolean_T DO_JL20_GR;
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
  boolean_T DO_VDR;
  boolean_T DO_NWR_W11A_21A;
  boolean_T DO_NWR_W11B_21B;
  boolean_T DO_NWR_W13A_23A;
  boolean_T DO_NWR_W13B_23B;
  boolean_T DO_NWR_W21C;
  boolean_T DO_RWR_W11A_21A;
  boolean_T DO_RWR_W11B_21B;
  boolean_T DO_RWR_W13A_23A;
  boolean_T DO_RWR_W13B_23B;
  boolean_T DO_RWR_W21C;
  boolean_T DO_WLPR_W11A_21A;
  boolean_T DO_WLPR_W11B_21B;
  boolean_T DO_WLPR_W13A_23A;
  boolean_T DO_WLPR_W13B_23B;
  boolean_T DO_WLPR_W21C;
  boolean_T M_SWRLS_k;
  boolean_T M_RRLS_l;
  boolean_T M_RRLSTE_DEP;
  boolean_T M_RRLSTE_J12A;
  boolean_T M_RRLSTE_J12B;
  boolean_T M_RRLSTE_J22A;
  boolean_T M_RRLSTE_J22B;
  boolean_T M_RRLSTE_X10;
  boolean_T M_RRLSTE_X14;
  boolean_T M_RRLSTE_X20;
  boolean_T M_L_S_DEP_10;
  boolean_T M_AS_SR_S_DEP_10;
  boolean_T M_L_S_DEP_20;
  boolean_T M_AS_SR_S_DEP_20;
  boolean_T M_L_S_10_DEP;
  boolean_T M_AS_SR_S_10_DEP;
  boolean_T M_L_S_20_DEP;
  boolean_T M_RL_T_WS_21C;
  boolean_T M_RL_S_ES_10B;
  boolean_T M_RL_T_ES_10B;
  boolean_T M_RL_T_WS_11B;
  boolean_T M_RL_T_ES_13A;
  boolean_T M_RL_T_WS_14A;
  boolean_T M_RL_S_ES_20B;
  boolean_T M_RL_T_ES_20B;
  boolean_T M_RL_S_WS_21C;
  boolean_T M_RL_T_ES_23A;
  boolean_T M_RL_T_WS_24A;
  boolean_T M_RLS_10A;
  boolean_T M_RLS_10B;
  boolean_T M_RLS_11A;
  boolean_T M_RLS_11B;
  boolean_T M_RLS_12A;
  boolean_T M_RLS_12B;
  boolean_T M_RLS_12C;
  boolean_T M_RLS_12D;
  boolean_T M_RLS_12E;
  boolean_T M_RLS_13A;
  boolean_T M_RLS_13B;
  boolean_T M_RLS_14A;
  boolean_T M_RLS_14B;
  boolean_T M_RLS_20A;
  boolean_T M_RLS_20B;
  boolean_T M_RLS_21A;
  boolean_T M_RLS_21B;
  boolean_T M_RLS_21C;
  boolean_T M_RLS_22A;
  boolean_T M_RLS_22B;
  boolean_T M_RLS_22C;
  boolean_T M_RLS_22D;
  boolean_T M_RLS_22E;
  boolean_T M_RLS_23A;
  boolean_T M_RLS_23B;
  boolean_T M_RLS_24B;
  boolean_T M_R_S_DEP_10;
  boolean_T M_R_S_DEP_20;
  boolean_T M_L_T_12_10;
  boolean_T M_R_H_12_10;
  boolean_T M_L_T_12_20;
  boolean_T M_R_H_12_20;
  boolean_T M_L_T_12_14;
  boolean_T M_R_H_12_14;
  boolean_T M_L_T_12_24;
  boolean_T M_R_H_12_24;
  boolean_T M_L_T_14_12;
  boolean_T M_R_D_14_12;
  boolean_T M_L_T_14_22;
  boolean_T M_R_D_14_22;
  boolean_T M_L_T_22_10;
  boolean_T M_R_H_22_10;
  boolean_T M_L_T_22_20;
  boolean_T M_R_H_22_20;
  boolean_T M_L_T_22_14;
  boolean_T M_R_H_22_14;
  boolean_T M_L_T_22_24;
  boolean_T M_R_H_22_24;
  boolean_T M_L_T_24_12;
  boolean_T M_R_D_24_12;
  boolean_T M_L_T_24_22;
  boolean_T M_R_D_24_22;
  boolean_T M_R_S_10_DEP;
  boolean_T M_L_T_10_12;
  boolean_T M_R_D_10_12;
  boolean_T M_L_T_10_22;
  boolean_T M_R_D_10_22;
  boolean_T M_R_S_20_DEP;
  boolean_T M_L_T_20_12;
  boolean_T M_R_D_20_12;
  boolean_T M_L_T_20_22;
  boolean_T M_R_D_20_22;
  int32_T clockTickCounter_0;
  int32_T clockTickCounter_j_0;
  boolean_T M_GV_FLASH_1000;
  M_GV_FLASH_1000 = VITALMAIN_DW.M_GV_FLASH_1000;

  /* DiscretePulseGenerator: '<S3>/1S' */
  clockTickCounter_j_0 = VITALMAIN_DW.clockTickCounter_j;

  /* DiscretePulseGenerator: '<S3>/0.5S' */
  clockTickCounter_0 = VITALMAIN_DW.clockTickCounter;
  M_R_D_20_22 = VITALMAIN_DW.M_R_D_20_22;
  M_L_T_20_22 = VITALMAIN_DW.M_L_T_20_22;
  M_R_D_20_12 = VITALMAIN_DW.M_R_D_20_12;
  M_L_T_20_12 = VITALMAIN_DW.M_L_T_20_12;
  M_R_S_20_DEP = VITALMAIN_DW.M_R_S_20_DEP;
  M_R_D_10_22 = VITALMAIN_DW.M_R_D_10_22;
  M_L_T_10_22 = VITALMAIN_DW.M_L_T_10_22;
  M_R_D_10_12 = VITALMAIN_DW.M_R_D_10_12;
  M_L_T_10_12 = VITALMAIN_DW.M_L_T_10_12;
  M_R_S_10_DEP = VITALMAIN_DW.M_R_S_10_DEP;
  M_R_D_24_22 = VITALMAIN_DW.M_R_D_24_22;
  M_L_T_24_22 = VITALMAIN_DW.M_L_T_24_22;
  M_R_D_24_12 = VITALMAIN_DW.M_R_D_24_12;
  M_L_T_24_12 = VITALMAIN_DW.M_L_T_24_12;
  M_R_H_22_24 = VITALMAIN_DW.M_R_H_22_24;
  M_L_T_22_24 = VITALMAIN_DW.M_L_T_22_24;
  M_R_H_22_14 = VITALMAIN_DW.M_R_H_22_14;
  M_L_T_22_14 = VITALMAIN_DW.M_L_T_22_14;
  M_R_H_22_20 = VITALMAIN_DW.M_R_H_22_20;
  M_L_T_22_20 = VITALMAIN_DW.M_L_T_22_20;
  M_R_H_22_10 = VITALMAIN_DW.M_R_H_22_10;
  M_L_T_22_10 = VITALMAIN_DW.M_L_T_22_10;
  M_R_D_14_22 = VITALMAIN_DW.M_R_D_14_22;
  M_L_T_14_22 = VITALMAIN_DW.M_L_T_14_22;
  M_R_D_14_12 = VITALMAIN_DW.M_R_D_14_12;
  M_L_T_14_12 = VITALMAIN_DW.M_L_T_14_12;
  M_R_H_12_24 = VITALMAIN_DW.M_R_H_12_24;
  M_L_T_12_24 = VITALMAIN_DW.M_L_T_12_24;
  M_R_H_12_14 = VITALMAIN_DW.M_R_H_12_14;
  M_L_T_12_14 = VITALMAIN_DW.M_L_T_12_14;
  M_R_H_12_20 = VITALMAIN_DW.M_R_H_12_20;
  M_L_T_12_20 = VITALMAIN_DW.M_L_T_12_20;
  M_R_H_12_10 = VITALMAIN_DW.M_R_H_12_10;
  M_L_T_12_10 = VITALMAIN_DW.M_L_T_12_10;
  M_R_S_DEP_20 = VITALMAIN_DW.M_R_S_DEP_20;
  M_R_S_DEP_10 = VITALMAIN_DW.M_R_S_DEP_10;
  M_RLS_24B = VITALMAIN_DW.M_RLS_24B;
  M_RLS_23B = VITALMAIN_DW.M_RLS_23B;
  M_RLS_23A = VITALMAIN_DW.M_RLS_23A;
  M_RLS_22E = VITALMAIN_DW.M_RLS_22E;
  M_RLS_22D = VITALMAIN_DW.M_RLS_22D;
  M_RLS_22C = VITALMAIN_DW.M_RLS_22C;
  M_RLS_22B = VITALMAIN_DW.M_RLS_22B;
  M_RLS_22A = VITALMAIN_DW.M_RLS_22A;
  M_RLS_21C = VITALMAIN_DW.M_RLS_21C;
  M_RLS_21B = VITALMAIN_DW.M_RLS_21B;
  M_RLS_21A = VITALMAIN_DW.M_RLS_21A;
  M_RLS_20B = VITALMAIN_DW.M_RLS_20B;
  M_RLS_20A = VITALMAIN_DW.M_RLS_20A;
  M_RLS_14B = VITALMAIN_DW.M_RLS_14B;
  M_RLS_14A = VITALMAIN_DW.M_RLS_14A;
  M_RLS_13B = VITALMAIN_DW.M_RLS_13B;
  M_RLS_13A = VITALMAIN_DW.M_RLS_13A;
  M_RLS_12E = VITALMAIN_DW.M_RLS_12E;
  M_RLS_12D = VITALMAIN_DW.M_RLS_12D;
  M_RLS_12C = VITALMAIN_DW.M_RLS_12C;
  M_RLS_12B = VITALMAIN_DW.M_RLS_12B;
  M_RLS_12A = VITALMAIN_DW.M_RLS_12A;
  M_RLS_11B = VITALMAIN_DW.M_RLS_11B;
  M_RLS_11A = VITALMAIN_DW.M_RLS_11A;
  M_RLS_10B = VITALMAIN_DW.M_RLS_10B;
  M_RLS_10A = VITALMAIN_DW.M_RLS_10A;
  M_RL_T_WS_24A = VITALMAIN_DW.M_RL_T_WS_24A;
  M_RL_T_ES_23A = VITALMAIN_DW.M_RL_T_ES_23A;
  M_RL_S_WS_21C = VITALMAIN_DW.M_RL_S_WS_21C;
  M_RL_T_ES_20B = VITALMAIN_DW.M_RL_T_ES_20B;
  M_RL_S_ES_20B = VITALMAIN_DW.M_RL_S_ES_20B;
  M_RL_T_WS_14A = VITALMAIN_DW.M_RL_T_WS_14A;
  M_RL_T_ES_13A = VITALMAIN_DW.M_RL_T_ES_13A;
  M_RL_T_WS_11B = VITALMAIN_DW.M_RL_T_WS_11B;
  M_RL_T_ES_10B = VITALMAIN_DW.M_RL_T_ES_10B;
  M_RL_S_ES_10B = VITALMAIN_DW.M_RL_S_ES_10B;
  M_RL_T_WS_21C = VITALMAIN_DW.M_RL_T_WS_21C;
  M_L_S_20_DEP = VITALMAIN_DW.M_L_S_20_DEP;
  M_AS_SR_S_10_DEP = VITALMAIN_DW.M_AS_SR_S_10_DEP;
  M_L_S_10_DEP = VITALMAIN_DW.M_L_S_10_DEP;
  M_AS_SR_S_DEP_20 = VITALMAIN_DW.M_AS_SR_S_DEP_20;
  M_L_S_DEP_20 = VITALMAIN_DW.M_L_S_DEP_20;
  M_AS_SR_S_DEP_10 = VITALMAIN_DW.M_AS_SR_S_DEP_10;
  M_L_S_DEP_10 = VITALMAIN_DW.M_L_S_DEP_10;
  M_RRLSTE_X20 = VITALMAIN_DW.M_RRLSTE_X20;
  M_RRLSTE_X14 = VITALMAIN_DW.M_RRLSTE_X14;
  M_RRLSTE_X10 = VITALMAIN_DW.M_RRLSTE_X10;
  M_RRLSTE_J22B = VITALMAIN_DW.M_RRLSTE_J22B;
  M_RRLSTE_J22A = VITALMAIN_DW.M_RRLSTE_J22A;
  M_RRLSTE_J12B = VITALMAIN_DW.M_RRLSTE_J12B;
  M_RRLSTE_J12A = VITALMAIN_DW.M_RRLSTE_J12A;
  M_RRLSTE_DEP = VITALMAIN_DW.M_RRLSTE_DEP;
  M_RRLS_l = VITALMAIN_DW.M_RRLS_l;
  M_SWRLS_k = VITALMAIN_DW.M_SWRLS_k;
  DO_WLPR_W21C = VITALMAIN_DW.DO_WLPR_W21C;
  DO_WLPR_W13B_23B = VITALMAIN_DW.DO_WLPR_W13B_23B;
  DO_WLPR_W13A_23A = VITALMAIN_DW.DO_WLPR_W13A_23A;
  DO_WLPR_W11B_21B = VITALMAIN_DW.DO_WLPR_W11B_21B;
  DO_WLPR_W11A_21A = VITALMAIN_DW.DO_WLPR_W11A_21A;
  DO_RWR_W21C = VITALMAIN_DW.DO_RWR_W21C;
  DO_RWR_W13B_23B = VITALMAIN_DW.DO_RWR_W13B_23B;
  DO_RWR_W13A_23A = VITALMAIN_DW.DO_RWR_W13A_23A;
  DO_RWR_W11B_21B = VITALMAIN_DW.DO_RWR_W11B_21B;
  DO_RWR_W11A_21A = VITALMAIN_DW.DO_RWR_W11A_21A;
  DO_NWR_W21C = VITALMAIN_DW.DO_NWR_W21C;
  DO_NWR_W13B_23B = VITALMAIN_DW.DO_NWR_W13B_23B;
  DO_NWR_W13A_23A = VITALMAIN_DW.DO_NWR_W13A_23A;
  DO_NWR_W11B_21B = VITALMAIN_DW.DO_NWR_W11B_21B;
  DO_NWR_W11A_21A = VITALMAIN_DW.DO_NWR_W11A_21A;
  DO_VDR = VITALMAIN_DW.DO_VDR;
  M_RRLS_X24 = VITALMAIN_DW.M_RRLS_X24;
  M_RRLS_X20 = VITALMAIN_DW.M_RRLS_X20;
  M_RRLS_X14 = VITALMAIN_DW.M_RRLS_X14;
  M_RRLS_X10 = VITALMAIN_DW.M_RRLS_X10;
  M_RRLS_J22B = VITALMAIN_DW.M_RRLS_J22B;
  M_RRLS_J22A = VITALMAIN_DW.M_RRLS_J22A;
  M_RRLS_J12B = VITALMAIN_DW.M_RRLS_J12B;
  M_RRLS_J12A = VITALMAIN_DW.M_RRLS_J12A;
  M_AS_S_JL20 = VITALMAIN_DW.M_AS_S_JL20;
  M_AS_S_JL10 = VITALMAIN_DW.M_AS_S_JL10;
  M_AS_S_DEP = VITALMAIN_DW.M_AS_S_DEP;
  M_AS_T_JL20 = VITALMAIN_DW.M_AS_T_JL20;
  M_AS_T_JL10 = VITALMAIN_DW.M_AS_T_JL10;
  M_AS_T_J24 = VITALMAIN_DW.M_AS_T_J24;
  M_AS_T_J22B = VITALMAIN_DW.M_AS_T_J22B;
  M_AS_T_J22A = VITALMAIN_DW.M_AS_T_J22A;
  M_AS_T_J14 = VITALMAIN_DW.M_AS_T_J14;
  M_AS_T_J12B = VITALMAIN_DW.M_AS_T_J12B;
  M_AS_T_J12A = VITALMAIN_DW.M_AS_T_J12A;
  DO_JL20_GR = VITALMAIN_DW.DO_JL20_GR;
  DO_JL10_GR = VITALMAIN_DW.DO_JL10_GR;
  DO_JL20_DR = VITALMAIN_DW.DO_JL20_DR;
  DO_JL10_DR = VITALMAIN_DW.DO_JL10_DR;
  DO_J24_DR = VITALMAIN_DW.DO_J24_DR;
  DO_J22B_DR = VITALMAIN_DW.DO_J22B_DR;
  DO_J22A_DR = VITALMAIN_DW.DO_J22A_DR;
  DO_J14_DR = VITALMAIN_DW.DO_J14_DR;
  DO_J12B_DR = VITALMAIN_DW.DO_J12B_DR;
  DO_J12A_DR = VITALMAIN_DW.DO_J12A_DR;
  M_W21C_TPZ = VITALMAIN_DW.M_W21C_TPZ;
  M_W13B_23B_TPZ = VITALMAIN_DW.M_W13B_23B_TPZ;
  M_W13A_23A_TPZ = VITALMAIN_DW.M_W13A_23A_TPZ;
  M_W11B_21B_TPZ = VITALMAIN_DW.M_W11B_21B_TPZ;
  M_W11A_21A_TPZ = VITALMAIN_DW.M_W11A_21A_TPZ;
  M_W21C_SWRLS = VITALMAIN_DW.M_W21C_SWRLS;
  M_W13B_23B_SWRLS = VITALMAIN_DW.M_W13B_23B_SWRLS;
  M_W13A_23A_SWRLS = VITALMAIN_DW.M_W13A_23A_SWRLS;
  M_W11B_21B_SWRLS = VITALMAIN_DW.M_W11B_21B_SWRLS;
  M_W11A_21A_SWRLS = VITALMAIN_DW.M_W11A_21A_SWRLS;
  M_W21C_LS = VITALMAIN_DW.M_W21C_LS;
  M_W13B_23B_LS = VITALMAIN_DW.M_W13B_23B_LS;
  M_W13A_23A_LS = VITALMAIN_DW.M_W13A_23A_LS;
  M_W11B_21B_LS = VITALMAIN_DW.M_W11B_21B_LS;
  M_W11A_21A_LS = VITALMAIN_DW.M_W11A_21A_LS;
  M_W21C_L = VITALMAIN_DW.M_W21C_L;
  M_W13B_23B_L = VITALMAIN_DW.M_W13B_23B_L;
  M_W13A_23A_L = VITALMAIN_DW.M_W13A_23A_L;
  M_W11B_21B_L = VITALMAIN_DW.M_W11B_21B_L;
  M_W11A_21A_L = VITALMAIN_DW.M_W11A_21A_L;
  M_W21C_RW_TE = VITALMAIN_DW.M_W21C_RW_TE;
  M_W13B_23B_RW_TE = VITALMAIN_DW.M_W13B_23B_RW_TE;
  M_W13A_23A_RW_TE = VITALMAIN_DW.M_W13A_23A_RW_TE;
  M_W11B_21B_RW_TE = VITALMAIN_DW.M_W11B_21B_RW_TE;
  M_W11A_21A_RW_TE = VITALMAIN_DW.M_W11A_21A_RW_TE;
  M_W21C_RWZ = VITALMAIN_DW.M_W21C_RWZ;
  M_W13B_23B_RWZ = VITALMAIN_DW.M_W13B_23B_RWZ;
  M_W13A_23A_RWZ = VITALMAIN_DW.M_W13A_23A_RWZ;
  M_W11B_21B_RWZ = VITALMAIN_DW.M_W11B_21B_RWZ;
  M_W11A_21A_RWZ = VITALMAIN_DW.M_W11A_21A_RWZ;
  M_W21C_RWP = VITALMAIN_DW.M_W21C_RWP;
  M_W13B_23B_RWP = VITALMAIN_DW.M_W13B_23B_RWP;
  M_W13A_23A_RWP = VITALMAIN_DW.M_W13A_23A_RWP;
  M_W11B_21B_RWP = VITALMAIN_DW.M_W11B_21B_RWP;
  M_W11A_21A_RWP = VITALMAIN_DW.M_W11A_21A_RWP;
  M_W21C_RWC = VITALMAIN_DW.M_W21C_RWC;
  M_W13B_23B_RWC = VITALMAIN_DW.M_W13B_23B_RWC;
  M_W13A_23A_RWC = VITALMAIN_DW.M_W13A_23A_RWC;
  M_W11B_21B_RWC = VITALMAIN_DW.M_W11B_21B_RWC;
  M_W11A_21A_RWC = VITALMAIN_DW.M_W11A_21A_RWC;
  M_W21C_NW_TE = VITALMAIN_DW.M_W21C_NW_TE;
  M_W13B_23B_NW_TE = VITALMAIN_DW.M_W13B_23B_NW_TE;
  M_W13A_23A_NW_TE = VITALMAIN_DW.M_W13A_23A_NW_TE;
  M_W11B_21B_NW_TE = VITALMAIN_DW.M_W11B_21B_NW_TE;
  M_W11A_21A_NW_TE = VITALMAIN_DW.M_W11A_21A_NW_TE;
  M_W21C_NWZ = VITALMAIN_DW.M_W21C_NWZ;
  M_W13B_23B_NWZ = VITALMAIN_DW.M_W13B_23B_NWZ;
  M_W13A_23A_NWZ = VITALMAIN_DW.M_W13A_23A_NWZ;
  M_W11B_21B_NWZ = VITALMAIN_DW.M_W11B_21B_NWZ;
  M_W11A_21A_NWZ = VITALMAIN_DW.M_W11A_21A_NWZ;
  M_W21C_NWP = VITALMAIN_DW.M_W21C_NWP;
  M_W13B_23B_NWP = VITALMAIN_DW.M_W13B_23B_NWP;
  M_W13A_23A_NWP = VITALMAIN_DW.M_W13A_23A_NWP;
  M_W11B_21B_NWP = VITALMAIN_DW.M_W11B_21B_NWP;
  M_W11A_21A_NWP = VITALMAIN_DW.M_W11A_21A_NWP;
  M_W21C_NWC = VITALMAIN_DW.M_W21C_NWC;
  M_W13B_23B_NWC = VITALMAIN_DW.M_W13B_23B_NWC;
  M_W13A_23A_NWC = VITALMAIN_DW.M_W13A_23A_NWC;
  M_W11B_21B_NWC = VITALMAIN_DW.M_W11B_21B_NWC;
  M_W11A_21A_NWC = VITALMAIN_DW.M_W11A_21A_NWC;
  M_S_WS_21C = VITALMAIN_DW.M_S_WS_21C;
  M_S_WS_21B = VITALMAIN_DW.M_S_WS_21B;
  M_S_WS_21A = VITALMAIN_DW.M_S_WS_21A;
  M_S_WS_20B = VITALMAIN_DW.M_S_WS_20B;
  M_S_WS_20A = VITALMAIN_DW.M_S_WS_20A;
  M_S_WS_11B = VITALMAIN_DW.M_S_WS_11B;
  M_S_WS_11A = VITALMAIN_DW.M_S_WS_11A;
  M_S_WS_10B = VITALMAIN_DW.M_S_WS_10B;
  M_S_WS_10A = VITALMAIN_DW.M_S_WS_10A;
  M_S_ES_21C = VITALMAIN_DW.M_S_ES_21C;
  M_S_ES_21B = VITALMAIN_DW.M_S_ES_21B;
  M_S_ES_21A = VITALMAIN_DW.M_S_ES_21A;
  M_S_ES_20B = VITALMAIN_DW.M_S_ES_20B;
  M_S_ES_11B = VITALMAIN_DW.M_S_ES_11B;
  M_S_ES_11A = VITALMAIN_DW.M_S_ES_11A;
  M_S_ES_10B = VITALMAIN_DW.M_S_ES_10B;
  M_T_WS_24A = VITALMAIN_DW.M_T_WS_24A;
  M_T_WS_23B = VITALMAIN_DW.M_T_WS_23B;
  M_T_WS_23A = VITALMAIN_DW.M_T_WS_23A;
  M_T_WS_22E = VITALMAIN_DW.M_T_WS_22E;
  M_T_WS_22D = VITALMAIN_DW.M_T_WS_22D;
  M_T_WS_22C = VITALMAIN_DW.M_T_WS_22C;
  M_T_WS_22B = VITALMAIN_DW.M_T_WS_22B;
  M_T_WS_22A = VITALMAIN_DW.M_T_WS_22A;
  M_T_WS_21C = VITALMAIN_DW.M_T_WS_21C;
  M_T_WS_21B = VITALMAIN_DW.M_T_WS_21B;
  M_T_WS_21A = VITALMAIN_DW.M_T_WS_21A;
  M_T_WS_20B = VITALMAIN_DW.M_T_WS_20B;
  M_T_WS_20A = VITALMAIN_DW.M_T_WS_20A;
  M_T_WS_14A = VITALMAIN_DW.M_T_WS_14A;
  M_T_WS_13B = VITALMAIN_DW.M_T_WS_13B;
  M_T_WS_13A = VITALMAIN_DW.M_T_WS_13A;
  M_T_WS_12E = VITALMAIN_DW.M_T_WS_12E;
  M_T_WS_12D = VITALMAIN_DW.M_T_WS_12D;
  M_T_WS_12C = VITALMAIN_DW.M_T_WS_12C;
  M_T_WS_12B = VITALMAIN_DW.M_T_WS_12B;
  M_T_WS_12A = VITALMAIN_DW.M_T_WS_12A;
  M_T_WS_11B = VITALMAIN_DW.M_T_WS_11B;
  M_T_WS_11A = VITALMAIN_DW.M_T_WS_11A;
  M_T_WS_10B = VITALMAIN_DW.M_T_WS_10B;
  M_T_WS_10A = VITALMAIN_DW.M_T_WS_10A;
  M_T_ES_24B = VITALMAIN_DW.M_T_ES_24B;
  M_T_ES_24A = VITALMAIN_DW.M_T_ES_24A;
  M_T_ES_23B = VITALMAIN_DW.M_T_ES_23B;
  M_T_ES_23A = VITALMAIN_DW.M_T_ES_23A;
  M_T_ES_22E = VITALMAIN_DW.M_T_ES_22E;
  M_T_ES_22D = VITALMAIN_DW.M_T_ES_22D;
  M_T_ES_22C = VITALMAIN_DW.M_T_ES_22C;
  M_T_ES_22B = VITALMAIN_DW.M_T_ES_22B;
  M_T_ES_22A = VITALMAIN_DW.M_T_ES_22A;
  M_T_ES_21C = VITALMAIN_DW.M_T_ES_21C;
  M_T_ES_21B = VITALMAIN_DW.M_T_ES_21B;
  M_T_ES_21A = VITALMAIN_DW.M_T_ES_21A;
  M_T_ES_20B = VITALMAIN_DW.M_T_ES_20B;
  M_T_ES_14B = VITALMAIN_DW.M_T_ES_14B;
  M_T_ES_14A = VITALMAIN_DW.M_T_ES_14A;
  M_T_ES_13B = VITALMAIN_DW.M_T_ES_13B;
  M_T_ES_13A = VITALMAIN_DW.M_T_ES_13A;
  M_T_ES_12E = VITALMAIN_DW.M_T_ES_12E;
  M_T_ES_12D = VITALMAIN_DW.M_T_ES_12D;
  M_T_ES_12C = VITALMAIN_DW.M_T_ES_12C;
  M_T_ES_12B = VITALMAIN_DW.M_T_ES_12B;
  M_T_ES_12A = VITALMAIN_DW.M_T_ES_12A;
  M_T_ES_11B = VITALMAIN_DW.M_T_ES_11B;
  M_T_ES_11A = VITALMAIN_DW.M_T_ES_11A;
  M_T_ES_10B = VITALMAIN_DW.M_T_ES_10B;
  M_TP_24B = VITALMAIN_DW.M_TP_24B;
  M_TP_24A = VITALMAIN_DW.M_TP_24A;
  M_TP_23B = VITALMAIN_DW.M_TP_23B;
  M_TP_23A = VITALMAIN_DW.M_TP_23A;
  M_TP_22E = VITALMAIN_DW.M_TP_22E;
  M_TP_22D = VITALMAIN_DW.M_TP_22D;
  M_TP_22C = VITALMAIN_DW.M_TP_22C;
  M_TP_22B = VITALMAIN_DW.M_TP_22B;
  M_TP_22A = VITALMAIN_DW.M_TP_22A;
  M_TP_21C = VITALMAIN_DW.M_TP_21C;
  M_TP_21B = VITALMAIN_DW.M_TP_21B;
  M_TP_21A = VITALMAIN_DW.M_TP_21A;
  M_TP_20B = VITALMAIN_DW.M_TP_20B;
  M_TP_20A = VITALMAIN_DW.M_TP_20A;
  M_TP_14B = VITALMAIN_DW.M_TP_14B;
  M_TP_14A = VITALMAIN_DW.M_TP_14A;
  M_TP_13B = VITALMAIN_DW.M_TP_13B;
  M_TP_13A = VITALMAIN_DW.M_TP_13A;
  M_TP_12E = VITALMAIN_DW.M_TP_12E;
  M_TP_12D = VITALMAIN_DW.M_TP_12D;
  M_TP_12C = VITALMAIN_DW.M_TP_12C;
  M_TP_12B = VITALMAIN_DW.M_TP_12B;
  M_TP_12A = VITALMAIN_DW.M_TP_12A;
  M_TP_11B = VITALMAIN_DW.M_TP_11B;
  M_TP_11A = VITALMAIN_DW.M_TP_11A;
  M_TP_10B = VITALMAIN_DW.M_TP_10B;
  M_TP_10A = VITALMAIN_DW.M_TP_10A;
  M_CHK_V_NV = VITALMAIN_DW.M_CHK_V_NV;
  M_RRLS_XDEP = VITALMAIN_DW.M_RRLS_XDEP;
  M_DEP_GR_DO = VITALMAIN_DW.M_DEP_GR_DO;
  DI_SYS_2 = VITALMAIN_DW.DI_SYS_2;
  DI_SYS_1 = VITALMAIN_DW.DI_SYS_1;
  DI_COMM_2 = VITALMAIN_DW.DI_COMM_2;
  DI_COMM_1 = VITALMAIN_DW.DI_COMM_1;
  DI_RWP_W21C = VITALMAIN_DW.DI_RWP_W21C;
  DI_RWP_W13B_23B = VITALMAIN_DW.DI_RWP_W13B_23B;
  DI_RWP_W13A_23A = VITALMAIN_DW.DI_RWP_W13A_23A;
  DI_RWP_W11B_21B = VITALMAIN_DW.DI_RWP_W11B_21B;
  DI_RWP_W11A_21A = VITALMAIN_DW.DI_RWP_W11A_21A;
  DI_NWP_W21C = VITALMAIN_DW.DI_NWP_W21C;
  DI_NWP_W13B_23B = VITALMAIN_DW.DI_NWP_W13B_23B;
  DI_NWP_W13A_23A = VITALMAIN_DW.DI_NWP_W13A_23A;
  DI_NWP_W11B_21B = VITALMAIN_DW.DI_NWP_W11B_21B;
  DI_NWP_W11A_21A = VITALMAIN_DW.DI_NWP_W11A_21A;
  DI_TPR_24B = VITALMAIN_DW.DI_TPR_24B;
  DI_TPR_24A = VITALMAIN_DW.DI_TPR_24A;
  DI_TPR_23B = VITALMAIN_DW.DI_TPR_23B;
  DI_TPR_23A = VITALMAIN_DW.DI_TPR_23A;
  DI_TPR_22E = VITALMAIN_DW.DI_TPR_22E;
  DI_TPR_22D = VITALMAIN_DW.DI_TPR_22D;
  DI_TPR_22C = VITALMAIN_DW.DI_TPR_22C;
  DI_TPR_22B = VITALMAIN_DW.DI_TPR_22B;
  DI_TPR_22A = VITALMAIN_DW.DI_TPR_22A;
  DI_TPR_21C = VITALMAIN_DW.DI_TPR_21C;
  DI_TPR_21B = VITALMAIN_DW.DI_TPR_21B;
  DI_TPR_21A = VITALMAIN_DW.DI_TPR_21A;
  DI_TPR_20B = VITALMAIN_DW.DI_TPR_20B;
  DI_TPR_20A = VITALMAIN_DW.DI_TPR_20A;
  DI_TPR_14B = VITALMAIN_DW.DI_TPR_14B;
  DI_TPR_14A = VITALMAIN_DW.DI_TPR_14A;
  DI_TPR_13B = VITALMAIN_DW.DI_TPR_13B;
  DI_TPR_13A = VITALMAIN_DW.DI_TPR_13A;
  DI_TPR_12E = VITALMAIN_DW.DI_TPR_12E;
  DI_TPR_12D = VITALMAIN_DW.DI_TPR_12D;
  DI_TPR_12C = VITALMAIN_DW.DI_TPR_12C;
  DI_TPR_12B = VITALMAIN_DW.DI_TPR_12B;
  DI_TPR_12A = VITALMAIN_DW.DI_TPR_12A;
  DI_TPR_11B = VITALMAIN_DW.DI_TPR_11B;
  DI_TPR_11A = VITALMAIN_DW.DI_TPR_11A;
  DI_TPR_10B = VITALMAIN_DW.DI_TPR_10B;
  DI_TPR_10A = VITALMAIN_DW.DI_TPR_10A;
  DI_VDR = VITALMAIN_DW.DI_VDR;
  M_REQ_S_20_DEP = VITALMAIN_DW.M_REQ_S_20_DEP;
  M_RS_20_DEP = VITALMAIN_DW.M_RS_20_DEP;
  M_REQ_S_10_DEP = VITALMAIN_DW.M_REQ_S_10_DEP;
  M_RS_10_DEP = VITALMAIN_DW.M_RS_10_DEP;
  M_REQ_S_DEP_20 = VITALMAIN_DW.M_REQ_S_DEP_20;
  M_RS_DEP_20 = VITALMAIN_DW.M_RS_DEP_20;
  M_REQ_S_DEP_10 = VITALMAIN_DW.M_REQ_S_DEP_10;
  M_RS_DEP_10 = VITALMAIN_DW.M_RS_DEP_10;
  M_W21C_SWRLSPB_CTRL = VITALMAIN_DW.M_W21C_SWRLSPB_CTRL;
  M_W13B_23B_SWRLSPB_CTRL = VITALMAIN_DW.M_W13B_23B_SWRLSPB_CTRL;
  M_W13A_23A_SWRLSPB_CTRL = VITALMAIN_DW.M_W13A_23A_SWRLSPB_CTRL;
  M_W11B_21B_SWRLSPB_CTRL = VITALMAIN_DW.M_W11B_21B_SWRLSPB_CTRL;
  M_W11A_21A_SWRLSPB_CTRL = VITALMAIN_DW.M_W11A_21A_SWRLSPB_CTRL;
  M_RRLSPB_CTRL_X24 = VITALMAIN_DW.M_RRLSPB_CTRL_X24;
  M_RRLSPB_CTRL_X20 = VITALMAIN_DW.M_RRLSPB_CTRL_X20;
  M_RRLSPB_CTRL_X14 = VITALMAIN_DW.M_RRLSPB_CTRL_X14;
  M_RRLSPB_CTRL_X10 = VITALMAIN_DW.M_RRLSPB_CTRL_X10;
  M_RRLSPB_CTRL_J22B = VITALMAIN_DW.M_RRLSPB_CTRL_J22B;
  M_RRLSPB_CTRL_J22A = VITALMAIN_DW.M_RRLSPB_CTRL_J22A;
  M_RRLSPB_CTRL_J12B = VITALMAIN_DW.M_RRLSPB_CTRL_J12B;
  M_RRLSPB_CTRL_J12A = VITALMAIN_DW.M_RRLSPB_CTRL_J12A;
  M_W21C_OOC = VITALMAIN_DW.M_W21C_OOC;
  M_W13B_23B_OOC = VITALMAIN_DW.M_W13B_23B_OOC;
  M_W13A_23A_OOC = VITALMAIN_DW.M_W13A_23A_OOC;
  M_W11B_21B_OOC = VITALMAIN_DW.M_W11B_21B_OOC;
  M_W11A_21A_OOC = VITALMAIN_DW.M_W11A_21A_OOC;
  M_W21C_R_REQ = VITALMAIN_DW.M_W21C_R_REQ;
  M_W13B_23B_R_REQ = VITALMAIN_DW.M_W13B_23B_R_REQ;
  M_W13A_23A_R_REQ = VITALMAIN_DW.M_W13A_23A_R_REQ;
  M_W11B_21B_R_REQ = VITALMAIN_DW.M_W11B_21B_R_REQ;
  M_W11A_21A_R_REQ = VITALMAIN_DW.M_W11A_21A_R_REQ;
  M_W21C_N_REQ = VITALMAIN_DW.M_W21C_N_REQ;
  M_W13B_23B_N_REQ = VITALMAIN_DW.M_W13B_23B_N_REQ;
  M_W13A_23A_N_REQ = VITALMAIN_DW.M_W13A_23A_N_REQ;
  M_W11B_21B_N_REQ = VITALMAIN_DW.M_W11B_21B_N_REQ;
  M_W11A_21A_N_REQ = VITALMAIN_DW.M_W11A_21A_N_REQ;
  M_REQ_T_20_22 = VITALMAIN_DW.M_REQ_T_20_22;
  M_REQ_T_20_12 = VITALMAIN_DW.M_REQ_T_20_12;
  M_REQ_T_10_22 = VITALMAIN_DW.M_REQ_T_10_22;
  M_REQ_T_10_12 = VITALMAIN_DW.M_REQ_T_10_12;
  M_REQ_T_24_22 = VITALMAIN_DW.M_REQ_T_24_22;
  M_REQ_T_24_12 = VITALMAIN_DW.M_REQ_T_24_12;
  M_REQ_T_22_20 = VITALMAIN_DW.M_REQ_T_22_20;
  M_REQ_T_22_10 = VITALMAIN_DW.M_REQ_T_22_10;
  M_REQ_T_22_24 = VITALMAIN_DW.M_REQ_T_22_24;
  M_REQ_T_22_14 = VITALMAIN_DW.M_REQ_T_22_14;
  M_REQ_T_14_22 = VITALMAIN_DW.M_REQ_T_14_22;
  M_REQ_T_14_12 = VITALMAIN_DW.M_REQ_T_14_12;
  M_REQ_T_12_20 = VITALMAIN_DW.M_REQ_T_12_20;
  M_REQ_T_12_10 = VITALMAIN_DW.M_REQ_T_12_10;
  M_REQ_T_12_24 = VITALMAIN_DW.M_REQ_T_12_24;
  M_REQ_T_12_14 = VITALMAIN_DW.M_REQ_T_12_14;
  M_RR = VITALMAIN_DW.M_RR;
  M_CHK_NV_V = VITALMAIN_DW.M_CHK_NV_V;
  M_TP_DEP = VITALMAIN_DW.M_TP_DEP;
  M_RRLSPB_CTRL_DEP = VITALMAIN_DW.M_RRLSPB_CTRL_DEP;

  /* Logic: '<S280>/OR1' */
  M_RLS_24A = VITALMAIN_DW.M_RLS_24A;
  clockTickCounter_j = clockTickCounter_j_0;
  clockTickCounter = clockTickCounter_0;
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S857>/DEP-RRLSPB-CTRL' */
    M_RRLSPB_CTRL_DEP = rtu_FROMDEP[1];

    /* DataStoreWrite: '<S857>/DEP-TP' */
    M_TP_DEP = rtu_FROMDEP[0];

    /* DataStoreWrite: '<S860>/NV-V-CHK' */
    M_CHK_NV_V = *rtu_NVVCHKFROM;

    /* DataStoreWrite: '<S860>/RR' */
    M_RR = *rtu_RRFROM;

    /* DataStoreWrite: '<S860>/J12A-X14-T-REQ' */
    M_REQ_T_12_14 = rtu_TREQFROM[4];

    /* DataStoreWrite: '<S860>/J12A-X24-T-REQ' */
    M_REQ_T_12_24 = rtu_TREQFROM[5];

    /* DataStoreWrite: '<S860>/J12B-X10-T-REQ' */
    M_REQ_T_12_10 = rtu_TREQFROM[12];

    /* DataStoreWrite: '<S860>/J12B-X20-T-REQ' */
    M_REQ_T_12_20 = rtu_TREQFROM[13];

    /* DataStoreWrite: '<S860>/J14-J12B-T-REQ' */
    M_REQ_T_14_12 = rtu_TREQFROM[8];

    /* DataStoreWrite: '<S860>/J14-J22B-T-REQ' */
    M_REQ_T_14_22 = rtu_TREQFROM[9];

    /* DataStoreWrite: '<S860>/J22A-X14-T-REQ' */
    M_REQ_T_22_14 = rtu_TREQFROM[6];

    /* DataStoreWrite: '<S860>/J22A-X24-T-REQ' */
    M_REQ_T_22_24 = rtu_TREQFROM[7];

    /* DataStoreWrite: '<S860>/J22B-X10-T-REQ' */
    M_REQ_T_22_10 = rtu_TREQFROM[14];

    /* DataStoreWrite: '<S860>/J22B-X20-T-REQ' */
    M_REQ_T_22_20 = rtu_TREQFROM[15];

    /* DataStoreWrite: '<S860>/J24-J12B-T-REQ' */
    M_REQ_T_24_12 = rtu_TREQFROM[10];

    /* DataStoreWrite: '<S860>/J24-J22B-T-REQ' */
    M_REQ_T_24_22 = rtu_TREQFROM[11];

    /* DataStoreWrite: '<S860>/JL10-J12A-T-REQ' */
    M_REQ_T_10_12 = rtu_TREQFROM[0];

    /* DataStoreWrite: '<S860>/JL10-J22A-T-REQ' */
    M_REQ_T_10_22 = rtu_TREQFROM[1];

    /* DataStoreWrite: '<S860>/JL20-J12A-T-REQ' */
    M_REQ_T_20_12 = rtu_TREQFROM[2];

    /* DataStoreWrite: '<S860>/JL20-J22A-T-REQ' */
    M_REQ_T_20_22 = rtu_TREQFROM[3];

    /* DataStoreWrite: '<S860>/W11A//21A-N-REQ' */
    M_W11A_21A_N_REQ = rtu_NREQFROM[0];

    /* DataStoreWrite: '<S860>/W11B//21B-N-REQ' */
    M_W11B_21B_N_REQ = rtu_NREQFROM[1];

    /* DataStoreWrite: '<S860>/W13A//23A-N-REQ' */
    M_W13A_23A_N_REQ = rtu_NREQFROM[3];

    /* DataStoreWrite: '<S860>/W13B//23B-N-REQ' */
    M_W13B_23B_N_REQ = rtu_NREQFROM[4];

    /* DataStoreWrite: '<S860>/W21C-N-REQ' */
    M_W21C_N_REQ = rtu_NREQFROM[2];

    /* DataStoreWrite: '<S860>/W11A//21A-R-REQ' */
    M_W11A_21A_R_REQ = rtu_RREQFROM[0];

    /* DataStoreWrite: '<S860>/W11B//21B-R-REQ' */
    M_W11B_21B_R_REQ = rtu_RREQFROM[1];

    /* DataStoreWrite: '<S860>/W13A//23A-R-REQ' */
    M_W13A_23A_R_REQ = rtu_RREQFROM[3];

    /* DataStoreWrite: '<S860>/W13B//23B-R-REQ' */
    M_W13B_23B_R_REQ = rtu_RREQFROM[4];

    /* DataStoreWrite: '<S860>/W21C-R-REQ' */
    M_W21C_R_REQ = rtu_RREQFROM[2];

    /* DataStoreWrite: '<S860>/W11A//21A-OOC' */
    M_W11A_21A_OOC = rtu_OOCFROM[0];

    /* DataStoreWrite: '<S860>/W11B//21B-OOC' */
    M_W11B_21B_OOC = rtu_OOCFROM[1];

    /* DataStoreWrite: '<S860>/W13A//23A-OOC' */
    M_W13A_23A_OOC = rtu_OOCFROM[3];

    /* DataStoreWrite: '<S860>/W13B//23B-OOC' */
    M_W13B_23B_OOC = rtu_OOCFROM[4];

    /* DataStoreWrite: '<S860>/W21C-OOC' */
    M_W21C_OOC = rtu_OOCFROM[2];

    /* DataStoreWrite: '<S860>/J12A-RRLSPB-CTRL' */
    M_RRLSPB_CTRL_J12A = rtu_RRLSPBFROM[2];

    /* DataStoreWrite: '<S860>/J12B-RRLSPB-CTRL' */
    M_RRLSPB_CTRL_J12B = rtu_RRLSPBFROM[4];

    /* DataStoreWrite: '<S860>/J22A-RRLSPB-CTRL' */
    M_RRLSPB_CTRL_J22A = rtu_RRLSPBFROM[3];

    /* DataStoreWrite: '<S860>/J22B-RRLSPB-CTRL' */
    M_RRLSPB_CTRL_J22B = rtu_RRLSPBFROM[5];

    /* DataStoreWrite: '<S860>/X10-RRLSPB-CTRL' */
    M_RRLSPB_CTRL_X10 = rtu_RRLSPBFROM[0];

    /* DataStoreWrite: '<S860>/X14-RRLSPB-CTRL' */
    M_RRLSPB_CTRL_X14 = rtu_RRLSPBFROM[6];

    /* DataStoreWrite: '<S860>/X20-RRLSPB-CTRL' */
    M_RRLSPB_CTRL_X20 = rtu_RRLSPBFROM[1];

    /* DataStoreWrite: '<S860>/X24-RRLSPB-CTRL' */
    M_RRLSPB_CTRL_X24 = rtu_RRLSPBFROM[7];

    /* DataStoreWrite: '<S860>/W11A//21A-SWRLSPB-CTRL' */
    M_W11A_21A_SWRLSPB_CTRL = rtu_SWRLSPBFROM[0];

    /* DataStoreWrite: '<S860>/W11B//21B-SWRLSPB-CTRL' */
    M_W11B_21B_SWRLSPB_CTRL = rtu_SWRLSPBFROM[1];

    /* DataStoreWrite: '<S860>/W13A//23A-SWRLSPB-CTRL' */
    M_W13A_23A_SWRLSPB_CTRL = rtu_SWRLSPBFROM[3];

    /* DataStoreWrite: '<S860>/W13B//23B-SWRLSPB-CTRL' */
    M_W13B_23B_SWRLSPB_CTRL = rtu_SWRLSPBFROM[4];

    /* DataStoreWrite: '<S860>/W21C-SWRLSPB-CTRL' */
    M_W21C_SWRLSPB_CTRL = rtu_SWRLSPBFROM[2];

    /* DataStoreWrite: '<S860>/DEP-X10-RS' */
    M_RS_DEP_10 = rtu_DEPVARFROM[6];

    /* DataStoreWrite: '<S860>/DEP-X10-S-REQ' */
    M_REQ_S_DEP_10 = rtu_DEPVARFROM[2];

    /* DataStoreWrite: '<S860>/DEP-X20-RS' */
    M_RS_DEP_20 = rtu_DEPVARFROM[7];

    /* DataStoreWrite: '<S860>/DEP-X20-S-REQ' */
    M_REQ_S_DEP_20 = rtu_DEPVARFROM[3];

    /* DataStoreWrite: '<S860>/JL10-DEP-RS' */
    M_RS_10_DEP = rtu_DEPVARFROM[4];

    /* DataStoreWrite: '<S860>/JL10-DEP-S-REQ' */
    M_REQ_S_10_DEP = rtu_DEPVARFROM[0];

    /* DataStoreWrite: '<S860>/JL20-DEP-RS' */
    M_RS_20_DEP = rtu_DEPVARFROM[5];

    /* DataStoreWrite: '<S860>/JL20-DEP-S-REQ' */
    M_REQ_S_20_DEP = rtu_DEPVARFROM[1];

    /* DataStoreWrite: '<S863>/DEP-RST' */
    VITALMAIN_DW.M_RST_DEP = rtu_RSTFROM[8];

    /* DataStoreWrite: '<S863>/J12A-RST' */
    VITALMAIN_DW.M_RST_J12A = rtu_RSTFROM[2];

    /* DataStoreWrite: '<S863>/J12B-RST' */
    VITALMAIN_DW.M_RST_J12B = rtu_RSTFROM[6];

    /* DataStoreWrite: '<S863>/J14-RST' */
    VITALMAIN_DW.M_RST_J14 = rtu_RSTFROM[4];

    /* DataStoreWrite: '<S863>/J22A-RST' */
    VITALMAIN_DW.M_RST_J22A = rtu_RSTFROM[3];

    /* DataStoreWrite: '<S863>/J22B-RST' */
    VITALMAIN_DW.M_RST_J22B = rtu_RSTFROM[7];

    /* DataStoreWrite: '<S863>/J24-RST' */
    VITALMAIN_DW.M_RST_J24 = rtu_RSTFROM[5];

    /* DataStoreWrite: '<S863>/JL10-RST' */
    VITALMAIN_DW.M_RST_JL10 = rtu_RSTFROM[0];

    /* DataStoreWrite: '<S863>/JL20-RST' */
    VITALMAIN_DW.M_RST_JL20 = rtu_RSTFROM[1];

    /* DataStoreWrite: '<S858>/VDR' */
    DI_VDR = *rtu_VDRDI;

    /* DataStoreWrite: '<S858>/10A-TPR-DI' */
    DI_TPR_10A = rtu_TPRDI[0];

    /* DataStoreWrite: '<S858>/10B-TPR-DI' */
    DI_TPR_10B = rtu_TPRDI[1];

    /* DataStoreWrite: '<S858>/11A-TPR-DI' */
    DI_TPR_11A = rtu_TPRDI[2];

    /* DataStoreWrite: '<S858>/11B-TPR-DI' */
    DI_TPR_11B = rtu_TPRDI[3];

    /* DataStoreWrite: '<S858>/12A-TPR-DI' */
    DI_TPR_12A = rtu_TPRDI[4];

    /* DataStoreWrite: '<S858>/12B-TPR-DI' */
    DI_TPR_12B = rtu_TPRDI[5];

    /* DataStoreWrite: '<S858>/12C-TPR-DI' */
    DI_TPR_12C = rtu_TPRDI[6];

    /* DataStoreWrite: '<S858>/12D-TPR-DI' */
    DI_TPR_12D = rtu_TPRDI[7];

    /* DataStoreWrite: '<S858>/12E-TPR-DI' */
    DI_TPR_12E = rtu_TPRDI[8];

    /* DataStoreWrite: '<S858>/13A-TPR-DI' */
    DI_TPR_13A = rtu_TPRDI[9];

    /* DataStoreWrite: '<S858>/13B-TPR-DI' */
    DI_TPR_13B = rtu_TPRDI[10];

    /* DataStoreWrite: '<S858>/14A-TPR-DI' */
    DI_TPR_14A = rtu_TPRDI[11];

    /* DataStoreWrite: '<S858>/14B-TPR-DI' */
    DI_TPR_14B = rtu_TPRDI[12];

    /* DataStoreWrite: '<S858>/20A-TPR-DI' */
    DI_TPR_20A = rtu_TPRDI[13];

    /* DataStoreWrite: '<S858>/20B-TPR-DI' */
    DI_TPR_20B = rtu_TPRDI[14];

    /* DataStoreWrite: '<S858>/21A-TPR-DI' */
    DI_TPR_21A = rtu_TPRDI[15];

    /* DataStoreWrite: '<S858>/21B-TPR-DI' */
    DI_TPR_21B = rtu_TPRDI[16];

    /* DataStoreWrite: '<S858>/21C-TPR-DI' */
    DI_TPR_21C = rtu_TPRDI[17];

    /* DataStoreWrite: '<S858>/22A-TPR-DI' */
    DI_TPR_22A = rtu_TPRDI[18];

    /* DataStoreWrite: '<S858>/22B-TPR-DI' */
    DI_TPR_22B = rtu_TPRDI[19];

    /* DataStoreWrite: '<S858>/22C-TPR-DI' */
    DI_TPR_22C = rtu_TPRDI[20];

    /* DataStoreWrite: '<S858>/22D-TPR-DI' */
    DI_TPR_22D = rtu_TPRDI[21];

    /* DataStoreWrite: '<S858>/22E-TPR-DI' */
    DI_TPR_22E = rtu_TPRDI[22];

    /* DataStoreWrite: '<S858>/23A-TPR-DI' */
    DI_TPR_23A = rtu_TPRDI[23];

    /* DataStoreWrite: '<S858>/23B-TPR-DI' */
    DI_TPR_23B = rtu_TPRDI[24];

    /* DataStoreWrite: '<S858>/24A-TPR-DI' */
    DI_TPR_24A = rtu_TPRDI[25];

    /* DataStoreWrite: '<S858>/24B-TPR-DI' */
    DI_TPR_24B = rtu_TPRDI[26];

    /* DataStoreWrite: '<S858>/W11A//21A-NWP-DI' */
    DI_NWP_W11A_21A = rtu_NWPDI[0];

    /* DataStoreWrite: '<S858>/W11B//21B-NWP-DI' */
    DI_NWP_W11B_21B = rtu_NWPDI[1];

    /* DataStoreWrite: '<S858>/W13A//23A-NWP-DI' */
    DI_NWP_W13A_23A = rtu_NWPDI[3];

    /* DataStoreWrite: '<S858>/W13B//23B-NWP-DI' */
    DI_NWP_W13B_23B = rtu_NWPDI[4];

    /* DataStoreWrite: '<S858>/W21C-NWP-DI' */
    DI_NWP_W21C = rtu_NWPDI[2];

    /* DataStoreWrite: '<S858>/W11A//21A-RWP-DI' */
    DI_RWP_W11A_21A = rtu_RWPDI[0];

    /* DataStoreWrite: '<S858>/W11B//21B-RWP-DI' */
    DI_RWP_W11B_21B = rtu_RWPDI[1];

    /* DataStoreWrite: '<S858>/W13A//23A-RWP-DI' */
    DI_RWP_W13A_23A = rtu_RWPDI[3];

    /* DataStoreWrite: '<S858>/W13B//23B-RWP-DI' */
    DI_RWP_W13B_23B = rtu_RWPDI[4];

    /* DataStoreWrite: '<S858>/W21C-RWP-DI' */
    DI_RWP_W21C = rtu_RWPDI[2];

    /* DataStoreWrite: '<S864>/COMM1-DI' */
    DI_COMM_1 = rtu_SYSTEMFROM[2];

    /* DataStoreWrite: '<S864>/COMM2-DI' */
    DI_COMM_2 = rtu_SYSTEMFROM[3];

    /* DataStoreWrite: '<S864>/SYSTEM1-DI' */
    DI_SYS_1 = rtu_SYSTEMFROM[0];

    /* DataStoreWrite: '<S864>/SYSTEM2-DI' */
    DI_SYS_2 = rtu_SYSTEMFROM[1];

    /* DataStoreRead: '<S861>/DEP-GR-DO' */
    rtb_DEPGRDO_o = M_DEP_GR_DO;

    /* DataStoreRead: '<S861>/RRLS-XDEP' */
    rtb_RRLSXDEP = M_RRLS_XDEP;

    /* DataStoreRead: '<S862>/VDR-DI' incorporates:
     *  DataStoreWrite: '<S858>/VDR'
     */
    *rty_VDRDITO = *rtu_VDRDI;

    /* DataStoreRead: '<S862>/V-NV-CHK' */
    *rty_VNVCHKTO = M_CHK_V_NV;

    /* DataStoreRead: '<S862>/10A-TP' */
    rtb_u0ATP_b = M_TP_10A;

    /* DataStoreRead: '<S862>/10B-TP' */
    rtb_u0BTP_ep = M_TP_10B;

    /* DataStoreRead: '<S862>/11A-TP' */
    rtb_u1ATP_k = M_TP_11A;

    /* DataStoreRead: '<S862>/11B-TP' */
    rtb_u1BTP_ac = M_TP_11B;

    /* DataStoreRead: '<S862>/12A-TP' */
    rtb_u2ATP_b = M_TP_12A;

    /* DataStoreRead: '<S862>/12B-TP' */
    rtb_u2BTP_c = M_TP_12B;

    /* DataStoreRead: '<S862>/12C-TP' */
    rtb_u2CTP_f = M_TP_12C;

    /* DataStoreRead: '<S862>/12D-TP' */
    rtb_u2DTP_p = M_TP_12D;

    /* DataStoreRead: '<S862>/12E-TP' */
    rtb_u2ETP_a = M_TP_12E;

    /* DataStoreRead: '<S862>/13A-TP' */
    rtb_u3ATP_od = M_TP_13A;

    /* DataStoreRead: '<S862>/13B-TP' */
    rtb_u3BTP_i = M_TP_13B;

    /* DataStoreRead: '<S862>/14A-TP' */
    rtb_u4ATP_n1 = M_TP_14A;

    /* DataStoreRead: '<S862>/14B-TP' */
    rtb_u4BTP_n = M_TP_14B;

    /* DataStoreRead: '<S862>/20A-TP' */
    rtb_u0ATP_g3 = M_TP_20A;

    /* DataStoreRead: '<S862>/20B-TP' */
    rtb_u0BTP_mt = M_TP_20B;

    /* DataStoreRead: '<S862>/21A-TP' */
    rtb_u1ATP_o = M_TP_21A;

    /* DataStoreRead: '<S862>/21B-TP' */
    rtb_u1BTP_nz = M_TP_21B;

    /* DataStoreRead: '<S862>/21C-TP' */
    rtb_u1CTP_dm = M_TP_21C;

    /* DataStoreRead: '<S862>/22A-TP' */
    rtb_u2ATP_mb = M_TP_22A;

    /* DataStoreRead: '<S862>/22B-TP' */
    rtb_u2BTP_a = M_TP_22B;

    /* DataStoreRead: '<S862>/22C-TP' */
    rtb_u2CTP_a = M_TP_22C;

    /* DataStoreRead: '<S862>/22D-TP' */
    rtb_u2DTP_e = M_TP_22D;

    /* DataStoreRead: '<S862>/22E-TP' */
    rtb_u2ETP_b = M_TP_22E;

    /* DataStoreRead: '<S862>/23A-TP' */
    rtb_u3ATP_lr = M_TP_23A;

    /* DataStoreRead: '<S862>/23B-TP' */
    rtb_u3BTP_k4 = M_TP_23B;

    /* DataStoreRead: '<S862>/24A-TP' */
    rtb_u4ATP_p = M_TP_24A;

    /* DataStoreRead: '<S862>/24B-TP' */
    rtb_u4BTP_hz = M_TP_24B;

    /* DataStoreRead: '<S862>/10B-T-ES' */
    rtb_u0BTES_l = M_T_ES_10B;

    /* DataStoreRead: '<S862>/11A-T-ES' */
    rtb_u1ATES_ok = M_T_ES_11A;

    /* DataStoreRead: '<S862>/11B-T-ES' */
    rtb_u1BTES_m = M_T_ES_11B;

    /* DataStoreRead: '<S862>/12A-T-ES' */
    rtb_u2ATES_g = M_T_ES_12A;

    /* DataStoreRead: '<S862>/12B-T-ES' */
    rtb_u2BTES_a = M_T_ES_12B;

    /* DataStoreRead: '<S862>/12C-T-ES' */
    rtb_u2CTES_p = M_T_ES_12C;

    /* DataStoreRead: '<S862>/12D-T-ES' */
    rtb_u2DTES_i = M_T_ES_12D;

    /* DataStoreRead: '<S862>/12E-T-ES' */
    rtb_u2ETES = M_T_ES_12E;

    /* DataStoreRead: '<S862>/13A-T-ES' */
    rtb_u3ATES_i = M_T_ES_13A;

    /* DataStoreRead: '<S862>/13B-T-ES' */
    rtb_u3BTES_gn = M_T_ES_13B;

    /* DataStoreRead: '<S862>/14A-T-ES' */
    rtb_u4ATES_m = M_T_ES_14A;

    /* DataStoreRead: '<S862>/14B-T-ES' */
    rtb_u4BTES = M_T_ES_14B;

    /* DataStoreRead: '<S862>/20B-T-ES' */
    rtb_u0BTES_j = M_T_ES_20B;

    /* DataStoreRead: '<S862>/21A-T-ES' */
    rtb_u1ATES_g = M_T_ES_21A;

    /* DataStoreRead: '<S862>/21B-T-ES' */
    rtb_u1BTES_gi = M_T_ES_21B;

    /* DataStoreRead: '<S862>/21C-T-ES' */
    rtb_u1CTES_b = M_T_ES_21C;

    /* DataStoreRead: '<S862>/22A-T-ES' */
    rtb_u2ATES_o = M_T_ES_22A;

    /* DataStoreRead: '<S862>/22B-T-ES' */
    rtb_u2BTES_f = M_T_ES_22B;

    /* DataStoreRead: '<S862>/22C-T-ES' */
    rtb_u2CTES_o = M_T_ES_22C;

    /* DataStoreRead: '<S862>/22D-T-ES' */
    rtb_u2DTES_b5 = M_T_ES_22D;

    /* DataStoreRead: '<S862>/22E-T-ES' */
    rtb_u2ETES_o = M_T_ES_22E;

    /* DataStoreRead: '<S862>/23A-T-ES' */
    rtb_u3ATES_d = M_T_ES_23A;

    /* DataStoreRead: '<S862>/23B-T-ES' */
    rtb_u3BTES_et = M_T_ES_23B;

    /* DataStoreRead: '<S862>/24A-T-ES' */
    rtb_u4ATES_ia = M_T_ES_24A;

    /* DataStoreRead: '<S862>/24B-T-ES' */
    rtb_u4BTES_n = M_T_ES_24B;

    /* DataStoreRead: '<S862>/10A-T-WS' */
    rtb_u0ATWS = M_T_WS_10A;

    /* DataStoreRead: '<S862>/10B-T-WS' */
    rtb_u0BTWS_m = M_T_WS_10B;

    /* DataStoreRead: '<S862>/11A-T-WS' */
    rtb_u1ATWS_he = M_T_WS_11A;

    /* DataStoreRead: '<S862>/11B-T-WS' */
    rtb_u1BTWS_l = M_T_WS_11B;

    /* DataStoreRead: '<S862>/12A-T-WS' */
    rtb_u2ATWS = M_T_WS_12A;

    /* DataStoreRead: '<S862>/12B-T-WS' */
    rtb_u2BTWS_f = M_T_WS_12B;

    /* DataStoreRead: '<S862>/12C-T-WS' */
    rtb_u2CTWS_d = M_T_WS_12C;

    /* DataStoreRead: '<S862>/12D-T-WS' */
    rtb_u2DTWS_i = M_T_WS_12D;

    /* DataStoreRead: '<S862>/12E-T-WS' */
    rtb_u2ETWS_b = M_T_WS_12E;

    /* DataStoreRead: '<S862>/13A-T-WS' */
    rtb_u3ATWS_e = M_T_WS_13A;

    /* DataStoreRead: '<S862>/13B-T-WS' */
    rtb_u3BTWS_n = M_T_WS_13B;

    /* DataStoreRead: '<S862>/14A-T-WS' */
    rtb_u4ATWS_d = M_T_WS_14A;

    /* DataStoreRead: '<S862>/20A-T-WS' */
    rtb_u0ATWS_i = M_T_WS_20A;

    /* DataStoreRead: '<S862>/20B-T-WS' */
    rtb_u0BTWS_e = M_T_WS_20B;

    /* DataStoreRead: '<S862>/21A-T-WS' */
    rtb_u1ATWS_j = M_T_WS_21A;

    /* DataStoreRead: '<S862>/21B-T-WS' */
    rtb_u1BTWS_m = M_T_WS_21B;

    /* DataStoreRead: '<S862>/21C-T-WS' */
    rtb_u1CTWS_c = M_T_WS_21C;

    /* DataStoreRead: '<S862>/22A-T-WS' */
    rtb_u2ATWS_n = M_T_WS_22A;

    /* DataStoreRead: '<S862>/22B-T-WS' */
    rtb_u2BTWS_h = M_T_WS_22B;

    /* DataStoreRead: '<S862>/22C-T-WS' */
    rtb_u2CTWS_o = M_T_WS_22C;

    /* DataStoreRead: '<S862>/22D-T-WS' */
    rtb_u2DTWS_k0 = M_T_WS_22D;

    /* DataStoreRead: '<S862>/22E-T-WS' */
    rtb_u2ETWS_m = M_T_WS_22E;

    /* DataStoreRead: '<S862>/23A-T-WS' */
    rtb_u3ATWS_d = M_T_WS_23A;

    /* DataStoreRead: '<S862>/23B-T-WS' */
    rtb_u3BTWS_f = M_T_WS_23B;

    /* DataStoreRead: '<S862>/24A-T-WS' */
    rtb_u4ATWS_f = M_T_WS_24A;

    /* DataStoreRead: '<S862>/10B-S-ES' */
    rtb_u0BSES_c = M_S_ES_10B;

    /* DataStoreRead: '<S862>/11A-S-ES' */
    rtb_u1ASES_n = M_S_ES_11A;

    /* DataStoreRead: '<S862>/11B-S-ES' */
    rtb_u1BSES_lq = M_S_ES_11B;

    /* DataStoreRead: '<S862>/20B-S-ES' */
    rtb_u0BSES_a = M_S_ES_20B;

    /* DataStoreRead: '<S862>/21A-S-ES' */
    rtb_u1ASES_f = M_S_ES_21A;

    /* DataStoreRead: '<S862>/21B-S-ES' */
    rtb_u1BSES_m = M_S_ES_21B;

    /* DataStoreRead: '<S862>/21C-S-ES' */
    rtb_u1CSES_e = M_S_ES_21C;

    /* DataStoreRead: '<S862>/10A-S-WS' */
    rtb_u0ASWS = M_S_WS_10A;

    /* DataStoreRead: '<S862>/10B-S-WS' */
    rtb_u0BSWS_en = M_S_WS_10B;

    /* DataStoreRead: '<S862>/11A-S-WS' */
    rtb_u1ASWS_c = M_S_WS_11A;

    /* DataStoreRead: '<S862>/11B-S-WS' */
    rtb_u1BSWS_im = M_S_WS_11B;

    /* DataStoreRead: '<S862>/20A-S-WS' */
    rtb_u0ASWS_h = M_S_WS_20A;

    /* DataStoreRead: '<S862>/20B-S-WS' */
    rtb_u0BSWS_ee = M_S_WS_20B;

    /* DataStoreRead: '<S862>/21A-S-WS' */
    rtb_u1ASWS_f3 = M_S_WS_21A;

    /* DataStoreRead: '<S862>/21B-S-WS' */
    rtb_u1BSWS_c = M_S_WS_21B;

    /* DataStoreRead: '<S862>/21C-S-WS' */
    rtb_u1CSWS_n = M_S_WS_21C;

    /* DataStoreRead: '<S862>/W11A//21A-NWC' */
    rtb_W11A21ANWC_e = M_W11A_21A_NWC;

    /* DataStoreRead: '<S862>/W11B//21B-NWC' */
    rtb_W11B21BNWC_e = M_W11B_21B_NWC;

    /* DataStoreRead: '<S862>/W13A//23A-NWC' */
    rtb_W13A23ANWC_p = M_W13A_23A_NWC;

    /* DataStoreRead: '<S862>/W13B//23B-NWC' */
    rtb_W13B23BNWC_b = M_W13B_23B_NWC;

    /* DataStoreRead: '<S862>/W21C-NWC' */
    rtb_W21CNWC_l = M_W21C_NWC;

    /* DataStoreRead: '<S862>/W11A//21A-NWP' */
    rtb_W11A21ANWP = M_W11A_21A_NWP;

    /* DataStoreRead: '<S862>/W11B//21B-NWP' */
    rtb_W11B21BNWP = M_W11B_21B_NWP;

    /* DataStoreRead: '<S862>/W13A//23A-NWP' */
    rtb_W13A23ANWP = M_W13A_23A_NWP;

    /* DataStoreRead: '<S862>/W13B//23B-NWP' */
    rtb_W13B23BNWP = M_W13B_23B_NWP;

    /* DataStoreRead: '<S862>/W21C-NWP' */
    rtb_W21CNWP = M_W21C_NWP;

    /* DataStoreRead: '<S862>/W11A//21A-NWZ' */
    rtb_W11A21ANWZ_p = M_W11A_21A_NWZ;

    /* DataStoreRead: '<S862>/W11B//21B-NWZ' */
    rtb_W11B21BNWZ_c = M_W11B_21B_NWZ;

    /* DataStoreRead: '<S862>/W13A//23A-NWZ' */
    rtb_W13A23ANWZ_a = M_W13A_23A_NWZ;

    /* DataStoreRead: '<S862>/W13B//23B-NWZ' */
    rtb_W13B23BNWZ_i = M_W13B_23B_NWZ;

    /* DataStoreRead: '<S862>/W21C-NWZ' */
    rtb_W21CNWZ = M_W21C_NWZ;

    /* DataStoreRead: '<S862>/W11A//21A-NW-TE' */
    rtb_W11A21ANWTE = M_W11A_21A_NW_TE;

    /* DataStoreRead: '<S862>/W11B//21B-NW-TE' */
    rtb_W11B21BNWTE = M_W11B_21B_NW_TE;

    /* DataStoreRead: '<S862>/W13A//23A-NW-TE' */
    rtb_W13A23ANWTE = M_W13A_23A_NW_TE;

    /* DataStoreRead: '<S862>/W13B//23B-NW-TE' */
    rtb_W13B23BNWTE = M_W13B_23B_NW_TE;

    /* DataStoreRead: '<S862>/W21C-NW-TE' */
    rtb_W21CNWTE = M_W21C_NW_TE;

    /* DataStoreRead: '<S862>/W11A//21A-RWC' */
    rtb_W11A21ARWC_c = M_W11A_21A_RWC;

    /* DataStoreRead: '<S862>/W11B//21B-RWC' */
    rtb_W11B21BRWC_j = M_W11B_21B_RWC;

    /* DataStoreRead: '<S862>/W13A//23A-RWC' */
    rtb_W13A23ARWC_m = M_W13A_23A_RWC;

    /* DataStoreRead: '<S862>/W13B//23B-RWC' */
    rtb_W13B23BRWC_n = M_W13B_23B_RWC;

    /* DataStoreRead: '<S862>/W21C-RWC' */
    rtb_W21CRWC_lp = M_W21C_RWC;

    /* DataStoreRead: '<S862>/W11A//21A-RWP' */
    rtb_W11A21ARWP = M_W11A_21A_RWP;

    /* DataStoreRead: '<S862>/W11B//21B-RWP' */
    rtb_W11B21BRWP = M_W11B_21B_RWP;

    /* DataStoreRead: '<S862>/W13A//23A-RWP' */
    rtb_W13A23ARWP = M_W13A_23A_RWP;

    /* DataStoreRead: '<S862>/W13B//23B-RWP' */
    rtb_W13B23BRWP = M_W13B_23B_RWP;

    /* DataStoreRead: '<S862>/W21C-RWP' */
    rtb_W21CRWP = M_W21C_RWP;

    /* DataStoreRead: '<S862>/W11A//21A-RWZ' */
    rtb_W11A21ARWZ_h = M_W11A_21A_RWZ;

    /* DataStoreRead: '<S862>/W11B//21B-RWZ' */
    rtb_W11B21BRWZ_n = M_W11B_21B_RWZ;

    /* DataStoreRead: '<S862>/W13A//23A-RWZ' */
    rtb_W13A23ARWZ_g = M_W13A_23A_RWZ;

    /* DataStoreRead: '<S862>/W13B//23B-RWZ' */
    rtb_W13B23BRWZ_o = M_W13B_23B_RWZ;

    /* DataStoreRead: '<S862>/W21C-RWZ' */
    rtb_W21CRWZ_i = M_W21C_RWZ;

    /* DataStoreRead: '<S862>/W11A//21A-RW-TE' */
    rtb_W11A21ARWTE = M_W11A_21A_RW_TE;

    /* DataStoreRead: '<S862>/W11B//21B-RW-TE' */
    rtb_W11B21BRWTE = M_W11B_21B_RW_TE;

    /* DataStoreRead: '<S862>/W13A//23A-RW-TE' */
    rtb_W13A23ARWTE = M_W13A_23A_RW_TE;

    /* DataStoreRead: '<S862>/W13B//23B-RW-TE' */
    rtb_W13B23BRWTE = M_W13B_23B_RW_TE;

    /* DataStoreRead: '<S862>/W21C-RW-TE' */
    rtb_W21CRWTE = M_W21C_RW_TE;

    /* DataStoreRead: '<S862>/W11A//21A-L' */
    rtb_W11A21AL = M_W11A_21A_L;

    /* DataStoreRead: '<S862>/W11B//21B-L' */
    rtb_W11B21BL = M_W11B_21B_L;

    /* DataStoreRead: '<S862>/W13A//23A-L' */
    rtb_W13A23AL = M_W13A_23A_L;

    /* DataStoreRead: '<S862>/W13B//23B-L' */
    rtb_W13B23BL = M_W13B_23B_L;

    /* DataStoreRead: '<S862>/W21C-L' */
    rtb_W21CL = M_W21C_L;

    /* DataStoreRead: '<S862>/W11A//21A-LS' */
    rtb_W11A21ALS = M_W11A_21A_LS;

    /* DataStoreRead: '<S862>/W11B//21B-LS' */
    rtb_W11B21BLS = M_W11B_21B_LS;

    /* DataStoreRead: '<S862>/W13A//23A-LS' */
    rtb_W13A23ALS = M_W13A_23A_LS;

    /* DataStoreRead: '<S862>/W13B//23B-LS' */
    rtb_W13B23BLS = M_W13B_23B_LS;

    /* DataStoreRead: '<S862>/W21C-LS' */
    rtb_W21CLS = M_W21C_LS;

    /* DataStoreRead: '<S862>/W11A//21A-SWRLS' */
    rtb_W11A21ASWRLS_c = M_W11A_21A_SWRLS;

    /* DataStoreRead: '<S862>/W11B//21B-SWRLS' */
    rtb_W11B21BSWRLS_j = M_W11B_21B_SWRLS;

    /* DataStoreRead: '<S862>/W13A//23A-SWRLS' */
    rtb_W13A23ASWRLS_g = M_W13A_23A_SWRLS;

    /* DataStoreRead: '<S862>/W13B//23B-SWRLS' */
    rtb_W13B23BSWRLS_k = M_W13B_23B_SWRLS;

    /* DataStoreRead: '<S862>/W21C-SWRLS' */
    rtb_W21CSWRLS_j = M_W21C_SWRLS;

    /* DataStoreRead: '<S862>/W11A//21A-TPZ' */
    rtb_W11A21ATPZ_c0 = M_W11A_21A_TPZ;

    /* DataStoreRead: '<S862>/W11B//21B-TPZ' */
    rtb_W11B21BTPZ_f = M_W11B_21B_TPZ;

    /* DataStoreRead: '<S862>/W13A//23A-TPZ' */
    rtb_W13A23ATPZ_m = M_W13A_23A_TPZ;

    /* DataStoreRead: '<S862>/W13B//23B-TPZ' */
    rtb_W13B23BTPZ_o = M_W13B_23B_TPZ;

    /* DataStoreRead: '<S862>/W21C-TPZ' */
    rtb_W21CTPZ_l = M_W21C_TPZ;

    /* DataStoreRead: '<S862>/J12A-DR-DO' */
    rtb_J12ADRDO_k = DO_J12A_DR;

    /* DataStoreRead: '<S862>/J12B-DR-DO' */
    rtb_J12BDRDO_b = DO_J12B_DR;

    /* DataStoreRead: '<S862>/J14-DR-DO' */
    rtb_J14DRDO_k = DO_J14_DR;

    /* DataStoreRead: '<S862>/J22A-DR-DO' */
    rtb_J22ADRDO_j = DO_J22A_DR;

    /* DataStoreRead: '<S862>/J22B-DR-DO' */
    rtb_J22BDRDO_e = DO_J22B_DR;

    /* DataStoreRead: '<S862>/J24-DR-DO' */
    rtb_J24DRDO_c = DO_J24_DR;

    /* DataStoreRead: '<S862>/JL10-DR-DO' */
    rtb_JL10DRDO_g = DO_JL10_DR;

    /* DataStoreRead: '<S862>/JL20-DR-DO' */
    rtb_JL20DRDO_p = DO_JL20_DR;

    /* DataStoreRead: '<S862>/JL10-GR-DO' */
    rtb_JL10GRDO_c = DO_JL10_GR;

    /* DataStoreRead: '<S862>/JL20-GR-DO' */
    rtb_JL20GRDO_f = DO_JL20_GR;

    /* DataStoreRead: '<S862>/J12A-T-AS' */
    rtb_J12ATAS_n = M_AS_T_J12A;

    /* DataStoreRead: '<S862>/J12B-T-AS' */
    rtb_J12BTAS_h = M_AS_T_J12B;

    /* DataStoreRead: '<S862>/J14-T-AS' */
    rtb_J14TAS_b = M_AS_T_J14;

    /* DataStoreRead: '<S862>/J22A-T-AS' */
    rtb_J22ATAS_h = M_AS_T_J22A;

    /* DataStoreRead: '<S862>/J22B-T-AS' */
    rtb_J22BTAS_er = M_AS_T_J22B;

    /* DataStoreRead: '<S862>/J24-T-AS' */
    rtb_J24TAS_j = M_AS_T_J24;

    /* DataStoreRead: '<S862>/JL10-T-AS' */
    rtb_JL10TAS_j = M_AS_T_JL10;

    /* DataStoreRead: '<S862>/JL20-T-AS' */
    rtb_JL20TAS_m = M_AS_T_JL20;

    /* DataStoreRead: '<S862>/DEP-S-AS' */
    rtb_DEPSAS_e = M_AS_S_DEP;

    /* DataStoreRead: '<S862>/JL10-S-AS' */
    rtb_JL10SAS_o = M_AS_S_JL10;

    /* DataStoreRead: '<S862>/JL20-S-AS' */
    rtb_JL20SAS_c = M_AS_S_JL20;

    /* DataStoreRead: '<S862>/J12A-RRLS' */
    rtb_J12ARRLS_p = M_RRLS_J12A;

    /* DataStoreRead: '<S862>/J12B-RRLS' */
    rtb_J12BRRLS_p = M_RRLS_J12B;

    /* DataStoreRead: '<S862>/J22A-RRLS' */
    rtb_J22ARRLS_a = M_RRLS_J22A;

    /* DataStoreRead: '<S862>/J22B-RRLS' */
    rtb_J22BRRLS_b = M_RRLS_J22B;

    /* DataStoreRead: '<S862>/X10-RRLS' */
    rtb_X10RRLS_m = M_RRLS_X10;

    /* DataStoreRead: '<S862>/X14-RRLS' */
    rtb_X14RRLS_g = M_RRLS_X14;

    /* DataStoreRead: '<S862>/X20-RRLS' */
    rtb_X20RRLS_b = M_RRLS_X20;

    /* DataStoreRead: '<S862>/X24-RRLS' */
    rtb_X24RRLS_o = M_RRLS_X24;

    /* DataStoreRead: '<S859>/VDR' */
    *rty_VDRDO = DO_VDR;

    /* DataStoreRead: '<S859>/W11A//21A-NWR-DO' */
    rtb_W11A21ANWRDO = DO_NWR_W11A_21A;

    /* DataStoreRead: '<S859>/W11B//21B-NWR-DO' */
    rtb_W11B21BNWRDO = DO_NWR_W11B_21B;

    /* DataStoreRead: '<S859>/W13A//23A-NWR-DO' */
    rtb_W13A23ANWRDO = DO_NWR_W13A_23A;

    /* DataStoreRead: '<S859>/W13B//23B-NWR-DO' */
    rtb_W13B23BNWRDO = DO_NWR_W13B_23B;

    /* DataStoreRead: '<S859>/W21C-NWR-DO' */
    rtb_W21CNWRDO = DO_NWR_W21C;

    /* DataStoreRead: '<S859>/W11A//21A-RWR-DO' */
    rtb_W11A21ARWRDO = DO_RWR_W11A_21A;

    /* DataStoreRead: '<S859>/W11B//21B-RWR-DO' */
    rtb_W11B21BRWRDO = DO_RWR_W11B_21B;

    /* DataStoreRead: '<S859>/W13A//23A-RWR-DO' */
    rtb_W13A23ARWRDO = DO_RWR_W13A_23A;

    /* DataStoreRead: '<S859>/W13B//23B-RWR-DO' */
    rtb_W13B23BRWRDO = DO_RWR_W13B_23B;

    /* DataStoreRead: '<S859>/W21C-RWR-DO' */
    rtb_W21CRWRDO = DO_RWR_W21C;

    /* DataStoreRead: '<S859>/W11A//21A-WLPR-DO' */
    rtb_W11A21AWLPRDO = DO_WLPR_W11A_21A;

    /* DataStoreRead: '<S859>/W11B//21B-WLPR-DO' */
    rtb_W11B21BWLPRDO = DO_WLPR_W11B_21B;

    /* DataStoreRead: '<S859>/W13A//23A-WLPR-DO' */
    rtb_W13A23AWLPRDO = DO_WLPR_W13A_23A;

    /* DataStoreRead: '<S859>/W13B//23B-WLPR-DO' */
    rtb_W13B23BWLPRDO = DO_WLPR_W13B_23B;

    /* DataStoreRead: '<S859>/W21C-WLPR-DO' */
    rtb_W21CWLPRDO = DO_WLPR_W21C;

    /* DataStoreRead: '<S15>/DEP-GR-DO' */
    rtb_DEPGRDO = M_DEP_GR_DO;

    /* DataStoreRead: '<S15>/DEP-TP' incorporates:
     *  DataStoreWrite: '<S857>/DEP-TP'
     */
    rtb_DEPTP = rtu_FROMDEP[0];

    /* DataStoreRead: '<S15>/21C-TP' */
    rtb_u1CTP = M_TP_21C;

    /* DataStoreRead: '<S15>/RR' incorporates:
     *  DataStoreWrite: '<S860>/RR'
     */
    rtb_RR = *rtu_RRFROM;

    /* DataStoreRead: '<S15>/VDR-DI' incorporates:
     *  DataStoreWrite: '<S858>/VDR'
     */
    rtb_VDRDI_m = *rtu_VDRDI;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_AS2' */
  M_AS_2(VITALMAIN_M, rtb_DEPGRDO, rtb_DEPTP, rtb_u1CTP, rtb_RR, rtb_VDRDI_m,
         &VITALMAIN_DW.M_AS2);

  /* End of Outputs for SubSystem: '<S15>/M_AS2' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/DEP-S-AS' */
    M_AS_S_DEP = VITALMAIN_DW.M_AS2.AND4;

    /* DataStoreRead: '<S16>/J12A-DR-DO' */
    rtb_J12ADRDO = DO_J12A_DR;

    /* DataStoreRead: '<S16>/12A-TP' */
    rtb_u2ATP = M_TP_12A;

    /* DataStoreRead: '<S16>/11B-TP' */
    rtb_u1BTP = M_TP_11B;

    /* DataStoreRead: '<S16>/RR' */
    rtb_RR_h = M_RR;

    /* DataStoreRead: '<S16>/VDR-DI' */
    rtb_VDRDI_e = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S16>/APPROACH LOCK' */
  M_AS_2(VITALMAIN_M, rtb_J12ADRDO, rtb_u2ATP, rtb_u1BTP, rtb_RR_h, rtb_VDRDI_e,
         &VITALMAIN_DW.APPROACHLOCK);

  /* End of Outputs for SubSystem: '<S16>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S16>/J12A-T-AS' */
    M_AS_T_J12A = VITALMAIN_DW.APPROACHLOCK.AND4;

    /* DataStoreRead: '<S17>/J12B-DR-DO' */
    rtb_J12BDRDO = DO_J12B_DR;

    /* DataStoreRead: '<S17>/12E-TP' */
    rtb_u2ETP = M_TP_12E;

    /* DataStoreRead: '<S17>/13A-TP' */
    rtb_u3ATP = M_TP_13A;

    /* DataStoreRead: '<S17>/RR' */
    rtb_RR_a = M_RR;

    /* DataStoreRead: '<S17>/VDR-DI' */
    rtb_VDRDI_i = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S17>/APPROACH LOCK' */
  M_AS_2(VITALMAIN_M, rtb_J12BDRDO, rtb_u2ETP, rtb_u3ATP, rtb_RR_a, rtb_VDRDI_i,
         &VITALMAIN_DW.APPROACHLOCK_h);

  /* End of Outputs for SubSystem: '<S17>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S17>/J12B-T-AS' */
    M_AS_T_J12B = VITALMAIN_DW.APPROACHLOCK_h.AND4;

    /* DataStoreRead: '<S18>/J14-DR-DO' */
    rtb_J14DRDO = DO_J14_DR;

    /* DataStoreRead: '<S18>/14B-TP' */
    rtb_u4BTP = M_TP_14B;

    /* DataStoreRead: '<S18>/14A-TP' */
    rtb_u4ATP = M_TP_14A;

    /* DataStoreRead: '<S18>/RR' */
    rtb_RR_d = M_RR;

    /* DataStoreRead: '<S18>/VDR-DI' */
    rtb_VDRDI_f = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S18>/APPROACH LOCK' */
  M_AS_2(VITALMAIN_M, rtb_J14DRDO, rtb_u4BTP, rtb_u4ATP, rtb_RR_d, rtb_VDRDI_f,
         &VITALMAIN_DW.APPROACHLOCK_n);

  /* End of Outputs for SubSystem: '<S18>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S18>/J14-T-AS' */
    M_AS_T_J14 = VITALMAIN_DW.APPROACHLOCK_n.AND4;

    /* DataStoreRead: '<S19>/J22A-DR-DO' */
    rtb_J22ADRDO = DO_J22A_DR;

    /* DataStoreRead: '<S19>/22A-TP' */
    rtb_u2ATP_c = M_TP_22A;

    /* DataStoreRead: '<S19>/21C-TP' */
    rtb_u1CTP_n = M_TP_21C;

    /* DataStoreRead: '<S19>/RR' */
    rtb_RR_e = M_RR;

    /* DataStoreRead: '<S19>/VDR-DI' */
    rtb_VDRDI_a = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S19>/APPROACH LOCK' */
  M_AS_2(VITALMAIN_M, rtb_J22ADRDO, rtb_u2ATP_c, rtb_u1CTP_n, rtb_RR_e,
         rtb_VDRDI_a, &VITALMAIN_DW.APPROACHLOCK_d);

  /* End of Outputs for SubSystem: '<S19>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S19>/J22A-T-AS' */
    M_AS_T_J22A = VITALMAIN_DW.APPROACHLOCK_d.AND4;

    /* DataStoreRead: '<S20>/J22B-DR-DO' */
    rtb_J22BDRDO = DO_J22B_DR;

    /* DataStoreRead: '<S20>/22A-TP' */
    rtb_u2ATP_cl = M_TP_22E;

    /* DataStoreRead: '<S20>/23A-TP' */
    rtb_u3ATP_l = M_TP_23A;

    /* DataStoreRead: '<S20>/RR' */
    rtb_RR_f = M_RR;

    /* DataStoreRead: '<S20>/VDR-DI' */
    rtb_VDRDI_d = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S20>/APPROACH LOCK' */
  M_AS_2(VITALMAIN_M, rtb_J22BDRDO, rtb_u2ATP_cl, rtb_u3ATP_l, rtb_RR_f,
         rtb_VDRDI_d, &VITALMAIN_DW.APPROACHLOCK_di);

  /* End of Outputs for SubSystem: '<S20>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S20>/J22B-T-AS' */
    M_AS_T_J22B = VITALMAIN_DW.APPROACHLOCK_di.AND4;

    /* DataStoreRead: '<S21>/J24-DR-DO' */
    rtb_J24DRDO = DO_J24_DR;

    /* DataStoreRead: '<S21>/24B-TP' */
    rtb_u4BTP_l = M_TP_24B;

    /* DataStoreRead: '<S21>/24A-TP' */
    rtb_u4ATP_k = M_TP_24A;

    /* DataStoreRead: '<S21>/RR' */
    rtb_RR_hx = M_RR;

    /* DataStoreRead: '<S21>/VDR-DI' */
    rtb_VDRDI_iv = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S21>/APPROACH LOCK' */
  M_AS_2(VITALMAIN_M, rtb_J24DRDO, rtb_u4BTP_l, rtb_u4ATP_k, rtb_RR_hx,
         rtb_VDRDI_iv, &VITALMAIN_DW.APPROACHLOCK_a);

  /* End of Outputs for SubSystem: '<S21>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S21>/J24-T-AS' */
    M_AS_T_J24 = VITALMAIN_DW.APPROACHLOCK_a.AND4;

    /* DataStoreRead: '<S22>/JL10-DR-DO' */
    rtb_JL10DRDO = DO_JL10_DR;

    /* DataStoreRead: '<S22>/JL10-GR-DO' */
    rtb_JL10GRDO = DO_JL10_GR;

    /* DataStoreRead: '<S22>/10A-TP' */
    rtb_u0ATP = M_TP_10A;

    /* DataStoreRead: '<S22>/10B-TP' */
    rtb_u0BTP = M_TP_10B;

    /* DataStoreRead: '<S22>/RR' */
    rtb_RR_g = M_RR;

    /* DataStoreRead: '<S22>/VDR-DI' */
    rtb_VDRDI_k = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S22>/APPROACH LOCK' */
  M_AS(VITALMAIN_M, rtb_JL10DRDO, rtb_JL10GRDO, rtb_u0ATP, rtb_u0BTP, rtb_RR_g,
       rtb_VDRDI_k, &VITALMAIN_DW.APPROACHLOCK_ne);

  /* End of Outputs for SubSystem: '<S22>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S22>/JL10-S-AS' */
    M_AS_S_JL10 = VITALMAIN_DW.APPROACHLOCK_ne.AND11;

    /* DataStoreWrite: '<S22>/JL10-T-AS' */
    M_AS_T_JL10 = VITALMAIN_DW.APPROACHLOCK_ne.AND4;

    /* DataStoreRead: '<S23>/JL20-DR-DO' */
    rtb_JL20DRDO = DO_JL20_DR;

    /* DataStoreRead: '<S23>/JL10-GR-DO' */
    rtb_JL10GRDO_o = DO_JL20_GR;

    /* DataStoreRead: '<S23>/20A-TP' */
    rtb_u0ATP_i = M_TP_20A;

    /* DataStoreRead: '<S23>/20B-TP' */
    rtb_u0BTP_d = M_TP_20B;

    /* DataStoreRead: '<S23>/RR' */
    rtb_RR_l = M_RR;

    /* DataStoreRead: '<S23>/VDR-DI' */
    rtb_VDRDI_j = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S23>/APPROACH LOCK' */
  M_AS(VITALMAIN_M, rtb_JL20DRDO, rtb_JL10GRDO_o, rtb_u0ATP_i, rtb_u0BTP_d,
       rtb_RR_l, rtb_VDRDI_j, &VITALMAIN_DW.APPROACHLOCK_f);

  /* End of Outputs for SubSystem: '<S23>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S23>/JL20-S-AS' */
    M_AS_S_JL20 = VITALMAIN_DW.APPROACHLOCK_f.AND11;

    /* DataStoreWrite: '<S23>/JL20-T-AS' */
    M_AS_T_JL20 = VITALMAIN_DW.APPROACHLOCK_f.AND4;

    /* DataStoreRead: '<S88>/W11A//21A-SWRLSPB-CTRL' */
    rtb_W11A21ASWRLSPBCTRL = M_W11A_21A_SWRLSPB_CTRL;

    /* Logic: '<S88>/AND1' */
    rtb_AND1 = (M_T_ES_11A && M_T_ES_21A && M_T_WS_11A && M_T_WS_21A &&
                M_S_ES_11A && M_S_ES_21A && M_S_WS_11A && M_S_WS_21A);

    /* Logic: '<S88>/AND2' */
    rtb_AND2 = (M_TP_11A && M_TP_21A);

    /* DataStoreRead: '<S88>/SWRLS' */
    rtb_SWRLS = M_SWRLS_k;

    /* DataStoreRead: '<S88>/VDR-DI' */
    rtb_VDRDI_l = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S88>/EMERGENCY POINT RELEASE' */
  M_SWRLS(VITALMAIN_M, rtb_W11A21ASWRLSPBCTRL, rtb_AND1, rtb_AND2, rtb_SWRLS,
          rtb_VDRDI_l, &VITALMAIN_DW.EMERGENCYPOINTRELEASE);

  /* End of Outputs for SubSystem: '<S88>/EMERGENCY POINT RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S88>/W11A//21A-SWRLS' */
    M_W11A_21A_SWRLS = VITALMAIN_DW.EMERGENCYPOINTRELEASE.AND5;

    /* DataStoreWrite: '<S88>/W11A//21A-TPZ' */
    M_W11A_21A_TPZ = VITALMAIN_DW.EMERGENCYPOINTRELEASE.OR3;

    /* DataStoreRead: '<S89>/W11B//21B-SWRLSPB-CTRL' */
    rtb_W11B21BSWRLSPBCTRL = M_W11B_21B_SWRLSPB_CTRL;

    /* Logic: '<S89>/AND1' */
    rtb_AND1_o = (M_T_ES_11B && M_T_ES_21B && M_T_WS_11B && M_T_WS_21B &&
                  M_S_ES_11B && M_S_ES_21B && M_S_WS_11B && M_S_WS_21B);

    /* Logic: '<S89>/AND2' */
    rtb_AND2_b = (M_TP_11B && M_TP_21B);

    /* DataStoreRead: '<S89>/SWRLS' */
    rtb_SWRLS_o = M_SWRLS_k;

    /* DataStoreRead: '<S89>/VDR-DI' */
    rtb_VDRDI_b = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S89>/EMERGENCY POINT RELEASE' */
  M_SWRLS(VITALMAIN_M, rtb_W11B21BSWRLSPBCTRL, rtb_AND1_o, rtb_AND2_b,
          rtb_SWRLS_o, rtb_VDRDI_b, &VITALMAIN_DW.EMERGENCYPOINTRELEASE_f);

  /* End of Outputs for SubSystem: '<S89>/EMERGENCY POINT RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S89>/W11B//21B-SWRLS' */
    M_W11B_21B_SWRLS = VITALMAIN_DW.EMERGENCYPOINTRELEASE_f.AND5;

    /* DataStoreWrite: '<S89>/W11B//21B-TPZ' */
    M_W11B_21B_TPZ = VITALMAIN_DW.EMERGENCYPOINTRELEASE_f.OR3;

    /* DataStoreRead: '<S90>/W13A//23A-SWRLSPB-CTRL' */
    rtb_W13A23ASWRLSPBCTRL = M_W13A_23A_SWRLSPB_CTRL;

    /* Logic: '<S90>/AND1' */
    rtb_AND1_o5 = (M_T_ES_13A && M_T_ES_23A && M_T_WS_13A && M_T_WS_23A);

    /* Logic: '<S90>/AND2' */
    rtb_AND2_k = (M_TP_13A && M_TP_23A);

    /* DataStoreRead: '<S90>/SWRLS' */
    rtb_SWRLS_l = M_SWRLS_k;

    /* DataStoreRead: '<S90>/VDR-DI' */
    rtb_VDRDI_g = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S90>/EMERGENCY POINT RELEASE' */
  M_SWRLS(VITALMAIN_M, rtb_W13A23ASWRLSPBCTRL, rtb_AND1_o5, rtb_AND2_k,
          rtb_SWRLS_l, rtb_VDRDI_g, &VITALMAIN_DW.EMERGENCYPOINTRELEASE_e);

  /* End of Outputs for SubSystem: '<S90>/EMERGENCY POINT RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S90>/W13A//23A-SWRLS' */
    M_W13A_23A_SWRLS = VITALMAIN_DW.EMERGENCYPOINTRELEASE_e.AND5;

    /* DataStoreWrite: '<S90>/W13A//23A-TPZ' */
    M_W13A_23A_TPZ = VITALMAIN_DW.EMERGENCYPOINTRELEASE_e.OR3;

    /* DataStoreRead: '<S91>/W13B//23B-SWRLSPB-CTRL' */
    rtb_W13B23BSWRLSPBCTRL = M_W13B_23B_SWRLSPB_CTRL;

    /* Logic: '<S91>/AND1' */
    rtb_AND1_k = (M_T_ES_13B && M_T_ES_23B && M_T_WS_13B && M_T_WS_23B);

    /* Logic: '<S91>/AND2' */
    rtb_AND2_n = (M_TP_13B && M_TP_23B);

    /* DataStoreRead: '<S91>/SWRLS' */
    rtb_SWRLS_m = M_SWRLS_k;

    /* DataStoreRead: '<S91>/VDR-DI' */
    rtb_VDRDI_h = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S91>/EMERGENCY POINT RELEASE' */
  M_SWRLS(VITALMAIN_M, rtb_W13B23BSWRLSPBCTRL, rtb_AND1_k, rtb_AND2_n,
          rtb_SWRLS_m, rtb_VDRDI_h, &VITALMAIN_DW.EMERGENCYPOINTRELEASE_d);

  /* End of Outputs for SubSystem: '<S91>/EMERGENCY POINT RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S91>/W13B//23B-SWRLS' */
    M_W13B_23B_SWRLS = VITALMAIN_DW.EMERGENCYPOINTRELEASE_d.AND5;

    /* DataStoreWrite: '<S91>/W13B//23B-TPZ' */
    M_W13B_23B_TPZ = VITALMAIN_DW.EMERGENCYPOINTRELEASE_d.OR3;

    /* DataStoreRead: '<S92>/W21C-SWRLSPB-CTRL' */
    rtb_W21CSWRLSPBCTRL = M_W21C_SWRLSPB_CTRL;

    /* Logic: '<S92>/AND1' */
    rtb_AND1_a = (M_T_ES_21C && M_T_WS_21C && M_S_ES_21C && M_S_WS_21C);

    /* DataStoreRead: '<S92>/21C-TP' */
    rtb_u1CTP_b = M_TP_21C;

    /* DataStoreRead: '<S92>/SWRLS' */
    rtb_SWRLS_g = M_SWRLS_k;

    /* DataStoreRead: '<S92>/VDR-DI' */
    rtb_VDRDI_gs = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S92>/EMERGENCY POINT RELEASE' */
  M_SWRLS(VITALMAIN_M, rtb_W21CSWRLSPBCTRL, rtb_AND1_a, rtb_u1CTP_b, rtb_SWRLS_g,
          rtb_VDRDI_gs, &VITALMAIN_DW.EMERGENCYPOINTRELEASE_m);

  /* End of Outputs for SubSystem: '<S92>/EMERGENCY POINT RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S92>/W21C-SWRLS' */
    M_W21C_SWRLS = VITALMAIN_DW.EMERGENCYPOINTRELEASE_m.AND5;

    /* DataStoreWrite: '<S92>/W21C-TPZ' */
    M_W21C_TPZ = VITALMAIN_DW.EMERGENCYPOINTRELEASE_m.OR3;

    /* Logic: '<S148>/AND1' */
    rtb_AND1_ox = (M_AS_S_JL10 && M_AS_S_JL20);

    /* Logic: '<S148>/OR1' */
    rtb_OR1 = (M_REQ_S_10_DEP || M_REQ_S_20_DEP);

    /* DataStoreRead: '<S148>/21C-S-ES' */
    rtb_u1CSES_o = M_S_ES_21C;

    /* DataStoreRead: '<S148>/DEP-RRLSPB-CTRL' */
    rtb_DEPRRLSPBCTRL = M_RRLSPB_CTRL_DEP;

    /* DataStoreRead: '<S148>/RRLS' */
    rtb_RRLS = M_RRLS_l;

    /* DataStoreRead: '<S148>/VDR-DI' */
    rtb_VDRDI_ay = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S148>/EMERGENCY ROUTE RELEASE' */
  M_RRLS(VITALMAIN_M, rtb_AND1_ox, rtb_OR1, rtb_u1CSES_o, rtb_DEPRRLSPBCTRL,
         rtb_RRLS, rtb_VDRDI_ay, &VITALMAIN_DW.EMERGENCYROUTERELEASE);

  /* End of Outputs for SubSystem: '<S148>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S148>/DEP-RRLS-TE' */
    M_RRLSTE_DEP = VITALMAIN_DW.EMERGENCYROUTERELEASE.Memory1;

    /* DataStoreWrite: '<S148>/XDEP-RRLS' */
    M_RRLS_XDEP = VITALMAIN_DW.EMERGENCYROUTERELEASE.AND1;

    /* Logic: '<S149>/AND1' */
    rtb_AND1_g = (M_AS_T_J14 && M_AS_T_J24);

    /* Logic: '<S149>/OR1' */
    rtb_OR1_l = (M_REQ_T_14_12 || M_REQ_T_24_12);

    /* DataStoreRead: '<S149>/12B-T-WS' */
    rtb_u2BTWS = M_T_WS_12B;

    /* DataStoreRead: '<S149>/J12A-RRLSPB-CTRL' */
    rtb_J12ARRLSPBCTRL = M_RRLSPB_CTRL_J12A;

    /* DataStoreRead: '<S149>/RRLS' */
    rtb_RRLS_h = M_RRLS_l;

    /* DataStoreRead: '<S149>/VDR-DI' */
    rtb_VDRDI_p = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S149>/EMERGENCY ROUTE RELEASE' */
  M_RRLS(VITALMAIN_M, rtb_AND1_g, rtb_OR1_l, rtb_u2BTWS, rtb_J12ARRLSPBCTRL,
         rtb_RRLS_h, rtb_VDRDI_p, &VITALMAIN_DW.EMERGENCYROUTERELEASE_h);

  /* End of Outputs for SubSystem: '<S149>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S149>/J12A-RRLS' */
    M_RRLS_J12A = VITALMAIN_DW.EMERGENCYROUTERELEASE_h.AND1;

    /* DataStoreWrite: '<S149>/J12A-RRLS-TE' */
    M_RRLSTE_J12A = VITALMAIN_DW.EMERGENCYROUTERELEASE_h.Memory1;

    /* Logic: '<S150>/AND1' */
    rtb_AND1_au = (M_AS_T_JL10 && M_AS_T_JL20);

    /* Logic: '<S150>/OR1' */
    rtb_OR1_m = (M_REQ_T_10_12 || M_REQ_T_20_12);

    /* DataStoreRead: '<S150>/12D-T-ES' */
    rtb_u2DTES = M_T_ES_12D;

    /* DataStoreRead: '<S150>/J12B-RRLSPB-CTRL' */
    rtb_J12BRRLSPBCTRL = M_RRLSPB_CTRL_J12B;

    /* DataStoreRead: '<S150>/RRLS' */
    rtb_RRLS_g = M_RRLS_l;

    /* DataStoreRead: '<S150>/VDR-DI' */
    rtb_VDRDI_mc = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S150>/EMERGENCY ROUTE RELEASE' */
  M_RRLS(VITALMAIN_M, rtb_AND1_au, rtb_OR1_m, rtb_u2DTES, rtb_J12BRRLSPBCTRL,
         rtb_RRLS_g, rtb_VDRDI_mc, &VITALMAIN_DW.EMERGENCYROUTERELEASE_e);

  /* End of Outputs for SubSystem: '<S150>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S150>/J12B-RRLS' */
    M_RRLS_J12B = VITALMAIN_DW.EMERGENCYROUTERELEASE_e.AND1;

    /* DataStoreWrite: '<S150>/J12B-RRLS-TE' */
    M_RRLSTE_J12B = VITALMAIN_DW.EMERGENCYROUTERELEASE_e.Memory1;

    /* Logic: '<S151>/AND1' */
    rtb_AND1_ah = (M_AS_T_J14 && M_AS_T_J24);

    /* Logic: '<S151>/OR1' */
    rtb_OR1_i = (M_REQ_T_14_22 || M_REQ_T_24_22);

    /* DataStoreRead: '<S151>/22B-T-WS' */
    rtb_u2BTWS_o = M_T_WS_22B;

    /* DataStoreRead: '<S151>/J22A-RRLSPB-CTRL' */
    rtb_J22ARRLSPBCTRL = M_RRLSPB_CTRL_J22A;

    /* DataStoreRead: '<S151>/RRLS1' */
    rtb_RRLS1 = M_RRLS_l;

    /* DataStoreRead: '<S151>/VDR-DI1' */
    rtb_VDRDI1 = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S151>/EMERGENCY ROUTE RELEASE' */
  M_RRLS(VITALMAIN_M, rtb_AND1_ah, rtb_OR1_i, rtb_u2BTWS_o, rtb_J22ARRLSPBCTRL,
         rtb_RRLS1, rtb_VDRDI1, &VITALMAIN_DW.EMERGENCYROUTERELEASE_d);

  /* End of Outputs for SubSystem: '<S151>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S151>/J22A-RRLS' */
    M_RRLS_J22A = VITALMAIN_DW.EMERGENCYROUTERELEASE_d.AND1;

    /* DataStoreWrite: '<S151>/J22A-RRLS-TE' */
    M_RRLSTE_J22A = VITALMAIN_DW.EMERGENCYROUTERELEASE_d.Memory1;

    /* Logic: '<S152>/AND1' */
    rtb_AND1_j = (M_AS_T_JL10 && M_AS_T_JL20);

    /* Logic: '<S152>/OR1' */
    rtb_OR1_g = (M_REQ_T_10_22 || M_REQ_T_20_22);

    /* DataStoreRead: '<S152>/22D-T-ES' */
    rtb_u2DTES_a = M_T_ES_22D;

    /* DataStoreRead: '<S152>/J22B-RRLSPB-CTRL' */
    rtb_J22BRRLSPBCTRL = M_RRLSPB_CTRL_J22B;

    /* DataStoreRead: '<S152>/RRLS' */
    rtb_RRLS_gh = M_RRLS_l;

    /* DataStoreRead: '<S152>/VDR-DI' */
    rtb_VDRDI_f5 = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S152>/EMERGENCY ROUTE RELEASE' */
  M_RRLS(VITALMAIN_M, rtb_AND1_j, rtb_OR1_g, rtb_u2DTES_a, rtb_J22BRRLSPBCTRL,
         rtb_RRLS_gh, rtb_VDRDI_f5, &VITALMAIN_DW.EMERGENCYROUTERELEASE_n);

  /* End of Outputs for SubSystem: '<S152>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S152>/J22B-RRLS' */
    M_RRLS_J22B = VITALMAIN_DW.EMERGENCYROUTERELEASE_n.AND1;

    /* DataStoreWrite: '<S152>/J22B-RRLS-TE' */
    M_RRLSTE_J22B = VITALMAIN_DW.EMERGENCYROUTERELEASE_n.Memory1;

    /* Logic: '<S153>/AND1' */
    rtb_AND1_i = (M_AS_T_J12A && M_AS_T_J22A && M_AS_S_DEP);

    /* Logic: '<S153>/OR1' */
    rtb_OR1_g1 = (M_REQ_T_12_10 || M_REQ_T_22_10 || M_REQ_S_DEP_10);

    /* DataStoreRead: '<S153>/10B-T-WS' */
    rtb_u0BTWS = M_T_WS_10B;

    /* DataStoreRead: '<S153>/X10-RRLSPB-CTRL' */
    rtb_X10RRLSPBCTRL = M_RRLSPB_CTRL_X10;

    /* DataStoreRead: '<S153>/RRLS1' */
    rtb_RRLS1_j = M_RRLS_l;

    /* DataStoreRead: '<S153>/VDR-DI1' */
    rtb_VDRDI1_p = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S153>/EMERGENCY ROUTE RELEASE' */
  M_RRLS(VITALMAIN_M, rtb_AND1_i, rtb_OR1_g1, rtb_u0BTWS, rtb_X10RRLSPBCTRL,
         rtb_RRLS1_j, rtb_VDRDI1_p, &VITALMAIN_DW.EMERGENCYROUTERELEASE_ey);

  /* End of Outputs for SubSystem: '<S153>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S153>/X10-RRLS' */
    M_RRLS_X10 = VITALMAIN_DW.EMERGENCYROUTERELEASE_ey.AND1;

    /* DataStoreWrite: '<S153>/X10-RRLS-TE' */
    M_RRLSTE_X10 = VITALMAIN_DW.EMERGENCYROUTERELEASE_ey.Memory1;

    /* Logic: '<S154>/AND1' */
    rtb_AND1_ac = (M_AS_T_J12B && M_AS_T_J22B);

    /* Logic: '<S154>/OR1' */
    rtb_OR1_lj = (M_REQ_T_12_14 || M_REQ_T_22_14);

    /* DataStoreRead: '<S154>/14A-T-ES' */
    rtb_u4ATES = M_T_ES_14A;

    /* DataStoreRead: '<S154>/X14-RRLSPB-CTRL' */
    rtb_X14RRLSPBCTRL = M_RRLSPB_CTRL_X14;

    /* DataStoreRead: '<S154>/RRLS' */
    rtb_RRLS_e = M_RRLS_l;

    /* DataStoreRead: '<S154>/VDR-DI' */
    rtb_VDRDI_c = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S154>/EMERGENCY ROUTE RELEASE' */
  M_RRLS(VITALMAIN_M, rtb_AND1_ac, rtb_OR1_lj, rtb_u4ATES, rtb_X14RRLSPBCTRL,
         rtb_RRLS_e, rtb_VDRDI_c, &VITALMAIN_DW.EMERGENCYROUTERELEASE_m);

  /* End of Outputs for SubSystem: '<S154>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S154>/X14-RRLS' */
    M_RRLS_X14 = VITALMAIN_DW.EMERGENCYROUTERELEASE_m.AND1;

    /* DataStoreWrite: '<S154>/X14-RRLS-TE' */
    M_RRLSTE_X14 = VITALMAIN_DW.EMERGENCYROUTERELEASE_m.Memory1;

    /* Logic: '<S155>/AND1' */
    rtb_AND1_ob = (M_AS_T_J12A && M_AS_T_J22A && M_AS_S_DEP);

    /* Logic: '<S155>/OR1' */
    rtb_OR1_a = (M_REQ_T_12_20 || M_REQ_T_22_20 || M_REQ_S_DEP_20);

    /* DataStoreRead: '<S155>/20B-T-WS' */
    rtb_u0BTWS_g = M_T_WS_20B;

    /* DataStoreRead: '<S155>/X20-RRLSPB-CTRL' */
    rtb_X20RRLSPBCTRL = M_RRLSPB_CTRL_X20;

    /* DataStoreRead: '<S155>/RRLS1' */
    rtb_RRLS1_c = M_RRLS_l;

    /* DataStoreRead: '<S155>/VDR-DI1' */
    rtb_VDRDI1_d = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S155>/EMERGENCY ROUTE RELEASE' */
  M_RRLS(VITALMAIN_M, rtb_AND1_ob, rtb_OR1_a, rtb_u0BTWS_g, rtb_X20RRLSPBCTRL,
         rtb_RRLS1_c, rtb_VDRDI1_d, &VITALMAIN_DW.EMERGENCYROUTERELEASE_f);

  /* End of Outputs for SubSystem: '<S155>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S155>/X20-RRLS' */
    M_RRLS_X20 = VITALMAIN_DW.EMERGENCYROUTERELEASE_f.AND1;

    /* DataStoreWrite: '<S155>/X20-RRLS-TE' */
    M_RRLSTE_X20 = VITALMAIN_DW.EMERGENCYROUTERELEASE_f.Memory1;

    /* Logic: '<S156>/AND1' */
    rtb_AND1_im = (M_AS_T_J12B && M_AS_T_J22B);

    /* Logic: '<S156>/OR1' */
    rtb_OR1_h = (M_REQ_T_12_24 || M_REQ_T_22_24);

    /* DataStoreRead: '<S156>/24A-T-ES' */
    rtb_u4ATES_d = M_T_ES_24A;

    /* DataStoreRead: '<S156>/X24-RRLSPB-CTRL' */
    rtb_X24RRLSPBCTRL = M_RRLSPB_CTRL_X24;

    /* DataStoreRead: '<S156>/RRLS' */
    rtb_RRLS_c = M_RRLS_l;

    /* DataStoreRead: '<S156>/VDR-DI' */
    rtb_VDRDI_gu = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S156>/EMERGENCY ROUTE RELEASE' */
  M_RRLS(VITALMAIN_M, rtb_AND1_im, rtb_OR1_h, rtb_u4ATES_d, rtb_X24RRLSPBCTRL,
         rtb_RRLS_c, rtb_VDRDI_gu, &VITALMAIN_DW.EMERGENCYROUTERELEASE_o);

  /* End of Outputs for SubSystem: '<S156>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S156>/X24-RRLS' */
    M_RRLS_X24 = VITALMAIN_DW.EMERGENCYROUTERELEASE_o.AND1;

    /* DataStoreWrite: '<S156>/X24-RRLS-TE' */
    VITALMAIN_DW.M_RRLSTE_X24 = VITALMAIN_DW.EMERGENCYROUTERELEASE_o.Memory1;

    /* DataStoreRead: '<S261>/DEP-X10-S-L' */
    rtb_DEPX10SL = M_L_S_DEP_10;

    /* DataStoreRead: '<S261>/DEP-X10-RS' */
    rtb_DEPX10RS = M_RS_DEP_10;

    /* Outputs for Atomic SubSystem: '<S261>/M-AS-SR' */
    M_AS_SR(rtb_DEPX10SL, rtb_DEPX10RS, &VITALMAIN_DW.MASSR);

    /* End of Outputs for SubSystem: '<S261>/M-AS-SR' */

    /* DataStoreWrite: '<S261>/DEP-X10-S-AS-SR' */
    M_AS_SR_S_DEP_10 = VITALMAIN_DW.MASSR.AND1;

    /* DataStoreRead: '<S262>/DEP-X20-S-L' */
    rtb_DEPX20SL = M_L_S_DEP_20;

    /* DataStoreRead: '<S262>/DEP-X20-RS' */
    rtb_DEPX20RS = M_RS_DEP_20;

    /* Outputs for Atomic SubSystem: '<S262>/M-AS-SR' */
    M_AS_SR(rtb_DEPX20SL, rtb_DEPX20RS, &VITALMAIN_DW.MASSR_g);

    /* End of Outputs for SubSystem: '<S262>/M-AS-SR' */

    /* DataStoreWrite: '<S262>/DEP-X20-S-AS-SR' */
    M_AS_SR_S_DEP_20 = VITALMAIN_DW.MASSR_g.AND1;

    /* DataStoreRead: '<S263>/JL10-DEP-S-L' */
    rtb_JL10DEPSL = M_L_S_10_DEP;

    /* DataStoreRead: '<S263>/JL10-DEP-RS' */
    rtb_JL10DEPRS = M_RS_10_DEP;

    /* Outputs for Atomic SubSystem: '<S263>/M-AS-SR' */
    M_AS_SR(rtb_JL10DEPSL, rtb_JL10DEPRS, &VITALMAIN_DW.MASSR_j);

    /* End of Outputs for SubSystem: '<S263>/M-AS-SR' */

    /* DataStoreWrite: '<S263>/JL10-DEP-S-AS-SR' */
    M_AS_SR_S_10_DEP = VITALMAIN_DW.MASSR_j.AND1;

    /* DataStoreRead: '<S264>/JL20-DEP-S-L' */
    rtb_JL20DEPSL = M_L_S_20_DEP;

    /* DataStoreRead: '<S264>/JL20-DEP-RS' */
    rtb_JL20DEPRS = M_RS_20_DEP;

    /* Outputs for Atomic SubSystem: '<S264>/M-AS-SR' */
    M_AS_SR(rtb_JL20DEPSL, rtb_JL20DEPRS, &VITALMAIN_DW.MASSR_e);

    /* End of Outputs for SubSystem: '<S264>/M-AS-SR' */

    /* DataStoreWrite: '<S264>/JL20-DEP-S-AS-SR' */
    VITALMAIN_DW.M_AS_SR_S_20_DEP = VITALMAIN_DW.MASSR_e.AND1;

    /* DataStoreWrite: '<S269>/21C-T-WS-RL' incorporates:
     *  Logic: '<S269>/NOT1'
     *  Logic: '<S269>/NOT2'
     *  Logic: '<S269>/OR2'
     */
    M_RL_T_WS_21C = (M_AS_T_J22A && (!M_R_H_22_10) && (!M_R_H_22_20));

    /* DataStoreWrite: '<S270>/10B-S-ES-RL' incorporates:
     *  Logic: '<S270>/AND1'
     *  Logic: '<S270>/NOT1'
     *  Logic: '<S270>/NOT2'
     */
    M_RL_S_ES_10B = (M_AS_S_JL10 && (!M_R_S_10_DEP) && (!M_AS_SR_S_10_DEP));

    /* DataStoreWrite: '<S271>/10B-T-ES-RL' incorporates:
     *  Logic: '<S271>/NOT1'
     *  Logic: '<S271>/NOT2'
     *  Logic: '<S271>/OR2'
     */
    M_RL_T_ES_10B = (M_AS_T_JL10 && (!M_R_D_10_12) && (!M_R_D_10_22));

    /* DataStoreWrite: '<S272>/11B-T-WS-RL' incorporates:
     *  Logic: '<S272>/NOT1'
     *  Logic: '<S272>/NOT2'
     *  Logic: '<S272>/OR2'
     */
    M_RL_T_WS_11B = (M_AS_T_J12A && (!M_R_H_12_10) && (!M_R_H_12_20));

    /* DataStoreWrite: '<S273>/13A-T-ES-RL' incorporates:
     *  Logic: '<S273>/NOT1'
     *  Logic: '<S273>/NOT2'
     *  Logic: '<S273>/OR2'
     */
    M_RL_T_ES_13A = (M_AS_T_J12B && (!M_R_H_12_14) && (!M_R_H_12_24));

    /* DataStoreWrite: '<S274>/14A-T-WS-RL' incorporates:
     *  Logic: '<S274>/NOT1'
     *  Logic: '<S274>/NOT2'
     *  Logic: '<S274>/OR2'
     */
    M_RL_T_WS_14A = (M_AS_T_J14 && (!M_R_D_14_12) && (!M_R_D_14_22));

    /* DataStoreWrite: '<S275>/10B-S-ES-RL' incorporates:
     *  DataStoreWrite: '<S264>/JL20-DEP-S-AS-SR'
     *  Logic: '<S275>/AND1'
     *  Logic: '<S275>/NOT1'
     *  Logic: '<S275>/NOT2'
     */
    M_RL_S_ES_20B = (M_AS_S_JL20 && (!M_R_S_20_DEP) &&
                     (!VITALMAIN_DW.MASSR_e.AND1));

    /* DataStoreWrite: '<S276>/20B-T-ES-RL' incorporates:
     *  Logic: '<S276>/NOT1'
     *  Logic: '<S276>/NOT2'
     *  Logic: '<S276>/OR2'
     */
    M_RL_T_ES_20B = (M_AS_T_JL20 && (!M_R_D_20_12) && (!M_R_D_20_22));

    /* DataStoreWrite: '<S277>/21C-S-WS-RL' incorporates:
     *  Logic: '<S277>/NOT1'
     *  Logic: '<S277>/NOT2'
     *  Logic: '<S277>/NOT3'
     *  Logic: '<S277>/NOT4'
     *  Logic: '<S277>/OR2'
     */
    M_RL_S_WS_21C = (M_AS_S_DEP && (!M_R_S_DEP_10) && (!M_R_S_DEP_20) &&
                     (!M_AS_SR_S_DEP_10) && (!M_AS_SR_S_DEP_20));

    /* DataStoreWrite: '<S278>/23A-T-ES-RL' incorporates:
     *  Logic: '<S278>/NOT1'
     *  Logic: '<S278>/NOT2'
     *  Logic: '<S278>/OR2'
     */
    M_RL_T_ES_23A = (M_AS_T_J22B && (!M_R_H_22_14) && (!M_R_H_22_24));

    /* DataStoreWrite: '<S279>/24A-T-WS-RL' incorporates:
     *  Logic: '<S279>/NOT1'
     *  Logic: '<S279>/NOT2'
     *  Logic: '<S279>/OR2'
     */
    M_RL_T_WS_24A = (M_AS_T_J24 && (!M_R_D_24_12) && (!M_R_D_24_22));

    /* DataStoreRead: '<S280>/X10-RRLS-TE-FROM1' */
    rtb_X10RRLSTEFROM1 = M_RRLSTE_X10;

    /* Outputs for Atomic SubSystem: '<S280>/M_RRLS5' */
    M_RRLS1(rtb_X10RRLSTEFROM1, &VITALMAIN_DW.M_RRLS5);

    /* End of Outputs for SubSystem: '<S280>/M_RRLS5' */

    /* DataStoreRead: '<S280>/J12B-RRLS-TE-FROM1' */
    rtb_J12BRRLSTEFROM1 = M_RRLSTE_J12B;

    /* DataStoreRead: '<S280>/W11A//21A-NWZ-FROM1' */
    rtb_W11A21ANWZFROM1 = M_W11A_21A_NWZ;

    /* DataStoreRead: '<S280>/W11B//21B-NWZ-FROM1' */
    rtb_W11B21BNWZFROM1 = M_W11B_21B_NWZ;

    /* Outputs for Atomic SubSystem: '<S280>/M_RRLS6' */
    M_RRLS3(rtb_J12BRRLSTEFROM1, rtb_W11A21ANWZFROM1, rtb_W11B21BNWZFROM1,
            &VITALMAIN_DW.M_RRLS6);

    /* End of Outputs for SubSystem: '<S280>/M_RRLS6' */

    /* DataStoreRead: '<S280>/J22B-RRLS-TE-FROM1' */
    rtb_J22BRRLSTEFROM1 = M_RRLSTE_J22B;

    /* DataStoreRead: '<S280>/W11A//21A-NWZ-FROM2' */
    rtb_W11A21ANWZFROM2 = M_W11A_21A_NWZ;

    /* DataStoreRead: '<S280>/W11B//21B-RWZ-FROM1' */
    rtb_W11B21BRWZFROM1 = M_W11B_21B_RWZ;

    /* DataStoreRead: '<S280>/W21C-NWZ-FROM1' */
    rtb_W21CNWZFROM1 = M_W21C_NWZ;

    /* Outputs for Atomic SubSystem: '<S280>/M_RRLS7' */
    M_RRLS_4(rtb_J22BRRLSTEFROM1, rtb_W11A21ANWZFROM2, rtb_W11B21BRWZFROM1,
             rtb_W21CNWZFROM1, &VITALMAIN_DW.M_RRLS7);

    /* End of Outputs for SubSystem: '<S280>/M_RRLS7' */

    /* DataStoreRead: '<S280>/DEP-RRLS-TE-FROM1' */
    rtb_DEPRRLSTEFROM1 = M_RRLSTE_DEP;

    /* DataStoreRead: '<S280>/W11A//21A-NWZ-FROM3' */
    rtb_W11A21ANWZFROM3 = M_W11A_21A_NWZ;

    /* DataStoreRead: '<S280>/W11B//21B-RWZ-FROM2' */
    rtb_W11B21BRWZFROM2 = M_W11B_21B_RWZ;

    /* DataStoreRead: '<S280>/W21C-RWZ-FROM1' */
    rtb_W21CRWZFROM1 = M_W21C_RWZ;

    /* Outputs for Atomic SubSystem: '<S280>/M_RRLS8' */
    M_RRLS_4(rtb_DEPRRLSTEFROM1, rtb_W11A21ANWZFROM3, rtb_W11B21BRWZFROM2,
             rtb_W21CRWZFROM1, &VITALMAIN_DW.M_RRLS8);

    /* End of Outputs for SubSystem: '<S280>/M_RRLS8' */

    /* Logic: '<S280>/OR1' */
    M_RLS_24A = (VITALMAIN_DW.M_RRLS5.RRLSTE || VITALMAIN_DW.M_RRLS6.AND1 ||
                 VITALMAIN_DW.M_RRLS7.AND1 || VITALMAIN_DW.M_RRLS8.AND1);

    /* DataStoreWrite: '<S280>/10A-RLS' */
    M_RLS_10A = M_RLS_24A;

    /* DataStoreWrite: '<S280>/10B-RLS' */
    M_RLS_10B = M_RLS_24A;

    /* DataStoreRead: '<S281>/X10-RRLS-TE-FROM1' */
    rtb_X10RRLSTEFROM1_n = M_RRLSTE_X10;

    /* DataStoreRead: '<S281>/W11A//21A-NWZ-FROM1' */
    rtb_W11A21ANWZFROM1_b = M_W11A_21A_NWZ;

    /* Outputs for Atomic SubSystem: '<S281>/M_RRLS5' */
    M_RRLS2(rtb_X10RRLSTEFROM1_n, rtb_W11A21ANWZFROM1_b, &VITALMAIN_DW.M_RRLS5_p);

    /* End of Outputs for SubSystem: '<S281>/M_RRLS5' */

    /* DataStoreRead: '<S281>/X20-RRLS-TE-FROM1' */
    rtb_X20RRLSTEFROM1 = M_RRLSTE_X20;

    /* DataStoreRead: '<S281>/W11A//21A-RWZ-FROM1' */
    rtb_W11A21ARWZFROM1 = M_W11A_21A_RWZ;

    /* Outputs for Atomic SubSystem: '<S281>/M_RRLS7' */
    M_RRLS2(rtb_X20RRLSTEFROM1, rtb_W11A21ARWZFROM1, &VITALMAIN_DW.M_RRLS7_d);

    /* End of Outputs for SubSystem: '<S281>/M_RRLS7' */

    /* DataStoreRead: '<S281>/J12B-RRLS-TE-FROM1' */
    rtb_J12BRRLSTEFROM1_j = M_RRLSTE_J12B;

    /* DataStoreRead: '<S281>/W11B//21B-NWZ-FROM1' */
    rtb_W11B21BNWZFROM1_b = M_W11B_21B_NWZ;

    /* Outputs for Atomic SubSystem: '<S281>/M_RRLS8' */
    M_RRLS2(rtb_J12BRRLSTEFROM1_j, rtb_W11B21BNWZFROM1_b,
            &VITALMAIN_DW.M_RRLS8_f);

    /* End of Outputs for SubSystem: '<S281>/M_RRLS8' */

    /* DataStoreRead: '<S281>/J22B-RRLS-TE-FROM1' */
    rtb_J22BRRLSTEFROM1_k = M_RRLSTE_J22B;

    /* DataStoreRead: '<S281>/W11B//21B-RWZ-FROM1' */
    rtb_W11B21BRWZFROM1_j = M_W11B_21B_RWZ;

    /* DataStoreRead: '<S281>/W21C-NWZ-FROM1' */
    rtb_W21CNWZFROM1_g = M_W21C_NWZ;

    /* Outputs for Atomic SubSystem: '<S281>/M_RRLS6' */
    M_RRLS3(rtb_J22BRRLSTEFROM1_k, rtb_W11B21BRWZFROM1_j, rtb_W21CNWZFROM1_g,
            &VITALMAIN_DW.M_RRLS6_o);

    /* End of Outputs for SubSystem: '<S281>/M_RRLS6' */

    /* DataStoreRead: '<S281>/DEP-RRLS-TE-FROM1' */
    rtb_DEPRRLSTEFROM1_j = M_RRLSTE_DEP;

    /* DataStoreRead: '<S281>/W11B//21B-RWZ-FROM2' */
    rtb_W11B21BRWZFROM2_a = M_W11B_21B_RWZ;

    /* DataStoreRead: '<S281>/W21C-RWZ-FROM1' */
    rtb_W21CRWZFROM1_l = M_W21C_RWZ;

    /* Outputs for Atomic SubSystem: '<S281>/M_RRLS9' */
    M_RRLS3(rtb_DEPRRLSTEFROM1_j, rtb_W11B21BRWZFROM2_a, rtb_W21CRWZFROM1_l,
            &VITALMAIN_DW.M_RRLS9);

    /* End of Outputs for SubSystem: '<S281>/M_RRLS9' */

    /* DataStoreWrite: '<S281>/11A-RLS' incorporates:
     *  Logic: '<S281>/OR1'
     */
    M_RLS_11A = (VITALMAIN_DW.M_RRLS5_p.AND1 || VITALMAIN_DW.M_RRLS7_d.AND1 ||
                 VITALMAIN_DW.M_RRLS8_f.AND1 || VITALMAIN_DW.M_RRLS6_o.AND1 ||
                 VITALMAIN_DW.M_RRLS9.AND1);

    /* DataStoreRead: '<S282>/X10-RRLS-TE-FROM1' */
    rtb_X10RRLSTEFROM1_o = M_RRLSTE_X10;

    /* DataStoreRead: '<S282>/W11A//21A-NWZ-FROM1' */
    rtb_W11A21ANWZFROM1_f = M_W11A_21A_NWZ;

    /* Outputs for Atomic SubSystem: '<S282>/M_RRLS5' */
    M_RRLS2(rtb_X10RRLSTEFROM1_o, rtb_W11A21ANWZFROM1_f, &VITALMAIN_DW.M_RRLS5_a);

    /* End of Outputs for SubSystem: '<S282>/M_RRLS5' */

    /* DataStoreRead: '<S282>/X20-RRLS-TE-FROM1' */
    rtb_X20RRLSTEFROM1_h = M_RRLSTE_X20;

    /* DataStoreRead: '<S282>/W11A//21A-RWZ-FROM1' */
    rtb_W11A21ARWZFROM1_e = M_W11A_21A_RWZ;

    /* Outputs for Atomic SubSystem: '<S282>/M_RRLS7' */
    M_RRLS2(rtb_X20RRLSTEFROM1_h, rtb_W11A21ARWZFROM1_e, &VITALMAIN_DW.M_RRLS7_e);

    /* End of Outputs for SubSystem: '<S282>/M_RRLS7' */

    /* DataStoreRead: '<S282>/J12B-RRLS-TE-FROM1' */
    rtb_J12BRRLSTEFROM1_g = M_RRLSTE_J12B;

    /* DataStoreRead: '<S282>/W11B//21B-NWZ-FROM1' */
    rtb_W11B21BNWZFROM1_c = M_W11B_21B_NWZ;

    /* Outputs for Atomic SubSystem: '<S282>/M_RRLS8' */
    M_RRLS2(rtb_J12BRRLSTEFROM1_g, rtb_W11B21BNWZFROM1_c,
            &VITALMAIN_DW.M_RRLS8_a);

    /* End of Outputs for SubSystem: '<S282>/M_RRLS8' */

    /* DataStoreRead: '<S282>/J22B-RRLS-TE-FROM1' */
    rtb_J22BRRLSTEFROM1_c = M_RRLSTE_J22B;

    /* DataStoreRead: '<S282>/W11B//21B-RWZ-FROM1' */
    rtb_W11B21BRWZFROM1_i = M_W11B_21B_RWZ;

    /* DataStoreRead: '<S282>/W21C-NWZ-FROM1' */
    rtb_W21CNWZFROM1_l = M_W21C_NWZ;

    /* Outputs for Atomic SubSystem: '<S282>/M_RRLS6' */
    M_RRLS3(rtb_J22BRRLSTEFROM1_c, rtb_W11B21BRWZFROM1_i, rtb_W21CNWZFROM1_l,
            &VITALMAIN_DW.M_RRLS6_b);

    /* End of Outputs for SubSystem: '<S282>/M_RRLS6' */

    /* DataStoreRead: '<S282>/DEP-RRLS-TE-FROM1' */
    rtb_DEPRRLSTEFROM1_g = M_RRLSTE_DEP;

    /* DataStoreRead: '<S282>/W11B//21B-RWZ-FROM2' */
    rtb_W11B21BRWZFROM2_g = M_W11B_21B_RWZ;

    /* DataStoreRead: '<S282>/W21C-RWZ-FROM1' */
    rtb_W21CRWZFROM1_n = M_W21C_RWZ;

    /* Outputs for Atomic SubSystem: '<S282>/M_RRLS9' */
    M_RRLS3(rtb_DEPRRLSTEFROM1_g, rtb_W11B21BRWZFROM2_g, rtb_W21CRWZFROM1_n,
            &VITALMAIN_DW.M_RRLS9_o);

    /* End of Outputs for SubSystem: '<S282>/M_RRLS9' */

    /* DataStoreWrite: '<S282>/11B-RLS' incorporates:
     *  Logic: '<S282>/OR1'
     */
    M_RLS_11B = (VITALMAIN_DW.M_RRLS5_a.AND1 || VITALMAIN_DW.M_RRLS7_e.AND1 ||
                 VITALMAIN_DW.M_RRLS8_a.AND1 || VITALMAIN_DW.M_RRLS6_b.AND1 ||
                 VITALMAIN_DW.M_RRLS9_o.AND1);

    /* DataStoreRead: '<S283>/J12A-RRLS-TE-FROM1' */
    rtb_J12ARRLSTEFROM1 = M_RRLSTE_J12A;

    /* Outputs for Atomic SubSystem: '<S283>/M_RRLS5' */
    M_RRLS1(rtb_J12ARRLSTEFROM1, &VITALMAIN_DW.M_RRLS5_m);

    /* End of Outputs for SubSystem: '<S283>/M_RRLS5' */

    /* DataStoreRead: '<S283>/J12B-RRLS-TE-FROM1' */
    rtb_J12BRRLSTEFROM1_f = M_RRLSTE_J12B;

    /* Outputs for Atomic SubSystem: '<S283>/M_RRLS1' */
    M_RRLS1(rtb_J12BRRLSTEFROM1_f, &VITALMAIN_DW.M_RRLS1_h);

    /* End of Outputs for SubSystem: '<S283>/M_RRLS1' */

    /* DataStoreWrite: '<S283>/12A-RLS' incorporates:
     *  Logic: '<S283>/OR1'
     */
    M_RLS_12A = (VITALMAIN_DW.M_RRLS5_m.RRLSTE || VITALMAIN_DW.M_RRLS1_h.RRLSTE);

    /* DataStoreRead: '<S284>/J12A-RRLS-TE-FROM1' */
    rtb_J12ARRLSTEFROM1_e = M_RRLSTE_J12A;

    /* Outputs for Atomic SubSystem: '<S284>/M_RRLS5' */
    M_RRLS1(rtb_J12ARRLSTEFROM1_e, &VITALMAIN_DW.M_RRLS5_f);

    /* End of Outputs for SubSystem: '<S284>/M_RRLS5' */

    /* DataStoreRead: '<S284>/J12B-RRLS-TE-FROM1' */
    rtb_J12BRRLSTEFROM1_e = M_RRLSTE_J12B;

    /* Outputs for Atomic SubSystem: '<S284>/M_RRLS1' */
    M_RRLS1(rtb_J12BRRLSTEFROM1_e, &VITALMAIN_DW.M_RRLS1_p);

    /* End of Outputs for SubSystem: '<S284>/M_RRLS1' */

    /* Logic: '<S284>/OR1' */
    M_RLS_24A = (VITALMAIN_DW.M_RRLS5_f.RRLSTE || VITALMAIN_DW.M_RRLS1_p.RRLSTE);

    /* DataStoreWrite: '<S284>/12B-RLS' */
    M_RLS_12B = M_RLS_24A;

    /* DataStoreWrite: '<S284>/12C-RLS' */
    M_RLS_12C = M_RLS_24A;

    /* DataStoreWrite: '<S284>/12D-RLS' */
    M_RLS_12D = M_RLS_24A;

    /* DataStoreRead: '<S285>/J12A-RRLS-TE-FROM1' */
    rtb_J12ARRLSTEFROM1_j = M_RRLSTE_J12A;

    /* Outputs for Atomic SubSystem: '<S285>/M_RRLS5' */
    M_RRLS1(rtb_J12ARRLSTEFROM1_j, &VITALMAIN_DW.M_RRLS5_l);

    /* End of Outputs for SubSystem: '<S285>/M_RRLS5' */

    /* DataStoreRead: '<S285>/J12B-RRLS-TE-FROM1' */
    rtb_J12BRRLSTEFROM1_i = M_RRLSTE_J12B;

    /* Outputs for Atomic SubSystem: '<S285>/M_RRLS1' */
    M_RRLS1(rtb_J12BRRLSTEFROM1_i, &VITALMAIN_DW.M_RRLS1_j);

    /* End of Outputs for SubSystem: '<S285>/M_RRLS1' */

    /* DataStoreWrite: '<S285>/12E-RLS' incorporates:
     *  Logic: '<S285>/OR1'
     */
    M_RLS_12E = (VITALMAIN_DW.M_RRLS5_l.RRLSTE || VITALMAIN_DW.M_RRLS1_j.RRLSTE);

    /* DataStoreRead: '<S286>/J12A-RRLS-TE-FROM1' */
    rtb_J12ARRLSTEFROM1_e1 = M_RRLSTE_J12A;

    /* Outputs for Atomic SubSystem: '<S286>/M_RRLS5' */
    M_RRLS1(rtb_J12ARRLSTEFROM1_e1, &VITALMAIN_DW.M_RRLS5_g);

    /* End of Outputs for SubSystem: '<S286>/M_RRLS5' */

    /* DataStoreRead: '<S286>/X14-RRLS-TE-FROM1' */
    rtb_X14RRLSTEFROM1 = M_RRLSTE_X14;

    /* DataStoreRead: '<S286>/W13A//23A-NWZ-FROM1' */
    rtb_W13A23ANWZFROM1 = M_W13A_23A_NWZ;

    /* DataStoreRead: '<S286>/W13B//23B-NWZ-FROM1' */
    rtb_W13B23BNWZFROM1 = M_W13B_23B_NWZ;

    /* Outputs for Atomic SubSystem: '<S286>/M_RRLS6' */
    M_RRLS3(rtb_X14RRLSTEFROM1, rtb_W13A23ANWZFROM1, rtb_W13B23BNWZFROM1,
            &VITALMAIN_DW.M_RRLS6_e);

    /* End of Outputs for SubSystem: '<S286>/M_RRLS6' */

    /* DataStoreRead: '<S286>/X24-RRLS-TE-FROM1' incorporates:
     *  DataStoreWrite: '<S156>/X24-RRLS-TE'
     */
    rtb_X24RRLSTEFROM1 = VITALMAIN_DW.EMERGENCYROUTERELEASE_o.Memory1;

    /* DataStoreRead: '<S286>/W13A//23A-RWZ-FROM1' */
    rtb_W13A23ARWZFROM1 = M_W13A_23A_RWZ;

    /* DataStoreRead: '<S286>/W13B//23B-NWZ-FROM2' */
    rtb_W13B23BNWZFROM2 = M_W13B_23B_NWZ;

    /* Outputs for Atomic SubSystem: '<S286>/M_RRLS1' */
    M_RRLS3(rtb_X24RRLSTEFROM1, rtb_W13A23ARWZFROM1, rtb_W13B23BNWZFROM2,
            &VITALMAIN_DW.M_RRLS1_a);

    /* End of Outputs for SubSystem: '<S286>/M_RRLS1' */

    /* DataStoreWrite: '<S286>/13A-RLS' incorporates:
     *  Logic: '<S286>/OR1'
     */
    M_RLS_13A = (VITALMAIN_DW.M_RRLS5_g.RRLSTE || VITALMAIN_DW.M_RRLS6_e.AND1 ||
                 VITALMAIN_DW.M_RRLS1_a.AND1);

    /* DataStoreRead: '<S287>/X14-RRLS-TE-FROM1' */
    rtb_X14RRLSTEFROM1_d = M_RRLSTE_X14;

    /* Outputs for Atomic SubSystem: '<S287>/M_RRLS5' */
    M_RRLS1(rtb_X14RRLSTEFROM1_d, &VITALMAIN_DW.M_RRLS5_n);

    /* End of Outputs for SubSystem: '<S287>/M_RRLS5' */

    /* DataStoreRead: '<S287>/J12A-RRLS-TE-FROM1' */
    rtb_J12ARRLSTEFROM1_d = M_RRLSTE_J12A;

    /* DataStoreRead: '<S287>/W13B//23B-NWZ-FROM1' */
    rtb_W13B23BNWZFROM1_d = M_W13B_23B_NWZ;

    /* DataStoreRead: '<S287>/W13A//23A-NWZ-FROM1' */
    rtb_W13A23ANWZFROM1_m = M_W13A_23A_NWZ;

    /* Outputs for Atomic SubSystem: '<S287>/M_RRLS6' */
    M_RRLS3(rtb_J12ARRLSTEFROM1_d, rtb_W13B23BNWZFROM1_d, rtb_W13A23ANWZFROM1_m,
            &VITALMAIN_DW.M_RRLS6_m);

    /* End of Outputs for SubSystem: '<S287>/M_RRLS6' */

    /* DataStoreRead: '<S287>/J22A-RRLS-TE-FROM1' */
    rtb_J22ARRLSTEFROM1 = M_RRLSTE_J22A;

    /* DataStoreRead: '<S287>/W13B//23B-RWZ-FROM1' */
    rtb_W13B23BRWZFROM1 = M_W13B_23B_RWZ;

    /* DataStoreRead: '<S287>/W13A//23A-NWZ-FROM2' */
    rtb_W13A23ANWZFROM2 = M_W13A_23A_NWZ;

    /* Outputs for Atomic SubSystem: '<S287>/M_RRLS1' */
    M_RRLS3(rtb_J22ARRLSTEFROM1, rtb_W13B23BRWZFROM1, rtb_W13A23ANWZFROM2,
            &VITALMAIN_DW.M_RRLS1_d);

    /* End of Outputs for SubSystem: '<S287>/M_RRLS1' */

    /* DataStoreWrite: '<S287>/13B-RLS' incorporates:
     *  Logic: '<S287>/OR1'
     */
    M_RLS_13B = (VITALMAIN_DW.M_RRLS5_n.RRLSTE || VITALMAIN_DW.M_RRLS6_m.AND1 ||
                 VITALMAIN_DW.M_RRLS1_d.AND1);

    /* DataStoreRead: '<S288>/X14-RRLS-TE-FROM1' */
    rtb_X14RRLSTEFROM1_e = M_RRLSTE_X14;

    /* Outputs for Atomic SubSystem: '<S288>/M_RRLS5' */
    M_RRLS1(rtb_X14RRLSTEFROM1_e, &VITALMAIN_DW.M_RRLS5_k);

    /* End of Outputs for SubSystem: '<S288>/M_RRLS5' */

    /* DataStoreRead: '<S288>/J12A-RRLS-TE-FROM1' */
    rtb_J12ARRLSTEFROM1_dy = M_RRLSTE_J12A;

    /* DataStoreRead: '<S288>/W13B//23B-NWZ-FROM1' */
    rtb_W13B23BNWZFROM1_k = M_W13B_23B_NWZ;

    /* DataStoreRead: '<S288>/W13A//23A-NWZ-FROM1' */
    rtb_W13A23ANWZFROM1_h = M_W13A_23A_NWZ;

    /* Outputs for Atomic SubSystem: '<S288>/M_RRLS6' */
    M_RRLS3(rtb_J12ARRLSTEFROM1_dy, rtb_W13B23BNWZFROM1_k, rtb_W13A23ANWZFROM1_h,
            &VITALMAIN_DW.M_RRLS6_f);

    /* End of Outputs for SubSystem: '<S288>/M_RRLS6' */

    /* DataStoreRead: '<S288>/J22A-RRLS-TE-FROM1' */
    rtb_J22ARRLSTEFROM1_e = M_RRLSTE_J22A;

    /* DataStoreRead: '<S288>/W13B//23B-RWZ-FROM1' */
    rtb_W13B23BRWZFROM1_l = M_W13B_23B_RWZ;

    /* DataStoreRead: '<S288>/W13A//23A-NWZ-FROM2' */
    rtb_W13A23ANWZFROM2_i = M_W13A_23A_NWZ;

    /* Outputs for Atomic SubSystem: '<S288>/M_RRLS1' */
    M_RRLS3(rtb_J22ARRLSTEFROM1_e, rtb_W13B23BRWZFROM1_l, rtb_W13A23ANWZFROM2_i,
            &VITALMAIN_DW.M_RRLS1_e);

    /* End of Outputs for SubSystem: '<S288>/M_RRLS1' */

    /* Logic: '<S288>/OR1' */
    M_RLS_24A = (VITALMAIN_DW.M_RRLS5_k.RRLSTE || VITALMAIN_DW.M_RRLS6_f.AND1 ||
                 VITALMAIN_DW.M_RRLS1_e.AND1);

    /* DataStoreWrite: '<S288>/14A-RLS' */
    M_RLS_14A = M_RLS_24A;

    /* DataStoreWrite: '<S288>/14B-RLS' */
    M_RLS_14B = M_RLS_24A;

    /* DataStoreRead: '<S289>/X20-RRLS-TE-FROM1' */
    rtb_X20RRLSTEFROM1_k = M_RRLSTE_X20;

    /* Outputs for Atomic SubSystem: '<S289>/M_RRLS5' */
    M_RRLS1(rtb_X20RRLSTEFROM1_k, &VITALMAIN_DW.M_RRLS5_b);

    /* End of Outputs for SubSystem: '<S289>/M_RRLS5' */

    /* DataStoreRead: '<S289>/J12B-RRLS-TE-FROM1' */
    rtb_J12BRRLSTEFROM1_h = M_RRLSTE_J12B;

    /* DataStoreRead: '<S289>/W11A//21A-RWZ-FROM1' */
    rtb_W11A21ARWZFROM1_h = M_W11A_21A_RWZ;

    /* DataStoreRead: '<S289>/W11B//21B-NWZ-FROM1' */
    rtb_W11B21BNWZFROM1_f = M_W11B_21B_NWZ;

    /* Outputs for Atomic SubSystem: '<S289>/M_RRLS6' */
    M_RRLS3(rtb_J12BRRLSTEFROM1_h, rtb_W11A21ARWZFROM1_h, rtb_W11B21BNWZFROM1_f,
            &VITALMAIN_DW.M_RRLS6_mf);

    /* End of Outputs for SubSystem: '<S289>/M_RRLS6' */

    /* DataStoreRead: '<S289>/J22B-RRLS-TE-FROM1' */
    rtb_J22BRRLSTEFROM1_g = M_RRLSTE_J22B;

    /* DataStoreRead: '<S289>/W11A//21A-NWZ-FROM1' */
    rtb_W11A21ANWZFROM1_h = M_W11A_21A_NWZ;

    /* DataStoreRead: '<S289>/W11B//21B-NWZ-FROM2' */
    rtb_W11B21BNWZFROM2 = M_W11B_21B_NWZ;

    /* DataStoreRead: '<S289>/W21C-NWZ-FROM1' */
    rtb_W21CNWZFROM1_p = M_W21C_NWZ;

    /* Outputs for Atomic SubSystem: '<S289>/M_RRLS7' */
    M_RRLS_4(rtb_J22BRRLSTEFROM1_g, rtb_W11A21ANWZFROM1_h, rtb_W11B21BNWZFROM2,
             rtb_W21CNWZFROM1_p, &VITALMAIN_DW.M_RRLS7_k);

    /* End of Outputs for SubSystem: '<S289>/M_RRLS7' */

    /* DataStoreRead: '<S289>/DEP-RRLS-TE-FROM1' */
    rtb_DEPRRLSTEFROM1_e = M_RRLSTE_DEP;

    /* DataStoreRead: '<S289>/W11A//21A-NWZ-FROM2' */
    rtb_W11A21ANWZFROM2_m = M_W11A_21A_NWZ;

    /* DataStoreRead: '<S289>/W11B//21B-NWZ-FROM3' */
    rtb_W11B21BNWZFROM3 = M_W11B_21B_NWZ;

    /* DataStoreRead: '<S289>/W21C-RWZ-FROM1' */
    rtb_W21CRWZFROM1_b = M_W21C_RWZ;

    /* Outputs for Atomic SubSystem: '<S289>/M_RRLS8' */
    M_RRLS_4(rtb_DEPRRLSTEFROM1_e, rtb_W11A21ANWZFROM2_m, rtb_W11B21BNWZFROM3,
             rtb_W21CRWZFROM1_b, &VITALMAIN_DW.M_RRLS8_i);

    /* End of Outputs for SubSystem: '<S289>/M_RRLS8' */

    /* Logic: '<S289>/OR1' */
    M_RLS_24A = (VITALMAIN_DW.M_RRLS5_b.RRLSTE || VITALMAIN_DW.M_RRLS6_mf.AND1 ||
                 VITALMAIN_DW.M_RRLS7_k.AND1 || VITALMAIN_DW.M_RRLS8_i.AND1);

    /* DataStoreWrite: '<S289>/20A-RLS' */
    M_RLS_20A = M_RLS_24A;

    /* DataStoreWrite: '<S289>/20B-RLS' */
    M_RLS_20B = M_RLS_24A;

    /* DataStoreRead: '<S290>/X20-RRLS-TE-FROM1' */
    rtb_X20RRLSTEFROM1_d = M_RRLSTE_X20;

    /* Outputs for Atomic SubSystem: '<S290>/M_RRLS5' */
    M_RRLS1(rtb_X20RRLSTEFROM1_d, &VITALMAIN_DW.M_RRLS5_h);

    /* End of Outputs for SubSystem: '<S290>/M_RRLS5' */

    /* DataStoreRead: '<S290>/J12B-RRLS-TE-FROM1' */
    rtb_J12BRRLSTEFROM1_ec = M_RRLSTE_J12B;

    /* DataStoreRead: '<S290>/W11A//21A-RWZ-FROM1' */
    rtb_W11A21ARWZFROM1_a = M_W11A_21A_RWZ;

    /* DataStoreRead: '<S290>/W11B//21B-NWZ-FROM1' */
    rtb_W11B21BNWZFROM1_g = M_W11B_21B_NWZ;

    /* Outputs for Atomic SubSystem: '<S290>/M_RRLS6' */
    M_RRLS3(rtb_J12BRRLSTEFROM1_ec, rtb_W11A21ARWZFROM1_a, rtb_W11B21BNWZFROM1_g,
            &VITALMAIN_DW.M_RRLS6_oq);

    /* End of Outputs for SubSystem: '<S290>/M_RRLS6' */

    /* DataStoreRead: '<S290>/J22B-RRLS-TE-FROM1' */
    rtb_J22BRRLSTEFROM1_h = M_RRLSTE_J22B;

    /* DataStoreRead: '<S290>/W11A//21A-NWZ-FROM1' */
    rtb_W11A21ANWZFROM1_hu = M_W11A_21A_NWZ;

    /* DataStoreRead: '<S290>/W11B//21B-NWZ-FROM2' */
    rtb_W11B21BNWZFROM2_g = M_W11B_21B_NWZ;

    /* DataStoreRead: '<S290>/W21C-NWZ-FROM1' */
    rtb_W21CNWZFROM1_n = M_W21C_NWZ;

    /* Outputs for Atomic SubSystem: '<S290>/M_RRLS7' */
    M_RRLS_4(rtb_J22BRRLSTEFROM1_h, rtb_W11A21ANWZFROM1_hu,
             rtb_W11B21BNWZFROM2_g, rtb_W21CNWZFROM1_n, &VITALMAIN_DW.M_RRLS7_d2);

    /* End of Outputs for SubSystem: '<S290>/M_RRLS7' */

    /* DataStoreRead: '<S290>/DEP-RRLS-TE-FROM1' */
    rtb_DEPRRLSTEFROM1_f = M_RRLSTE_DEP;

    /* DataStoreRead: '<S290>/W11A//21A-NWZ-FROM2' */
    rtb_W11A21ANWZFROM2_e = M_W11A_21A_NWZ;

    /* DataStoreRead: '<S290>/W11B//21B-NWZ-FROM3' */
    rtb_W11B21BNWZFROM3_c = M_W11B_21B_NWZ;

    /* DataStoreRead: '<S290>/W21C-RWZ-FROM1' */
    rtb_W21CRWZFROM1_g = M_W21C_RWZ;

    /* Outputs for Atomic SubSystem: '<S290>/M_RRLS8' */
    M_RRLS_4(rtb_DEPRRLSTEFROM1_f, rtb_W11A21ANWZFROM2_e, rtb_W11B21BNWZFROM3_c,
             rtb_W21CRWZFROM1_g, &VITALMAIN_DW.M_RRLS8_g);

    /* End of Outputs for SubSystem: '<S290>/M_RRLS8' */

    /* DataStoreWrite: '<S290>/21A-RLS' incorporates:
     *  Logic: '<S290>/OR1'
     */
    M_RLS_21A = (VITALMAIN_DW.M_RRLS5_h.RRLSTE || VITALMAIN_DW.M_RRLS6_oq.AND1 ||
                 VITALMAIN_DW.M_RRLS7_d2.AND1 || VITALMAIN_DW.M_RRLS8_g.AND1);

    /* DataStoreRead: '<S291>/DEP-RRLS-TE-FROM1' */
    rtb_DEPRRLSTEFROM1_fe = M_RRLSTE_DEP;

    /* DataStoreRead: '<S291>/W21C-RWZ-FROM1' */
    rtb_W21CRWZFROM1_bf = M_W21C_RWZ;

    /* Outputs for Atomic SubSystem: '<S291>/M_RRLS5' */
    M_RRLS2(rtb_DEPRRLSTEFROM1_fe, rtb_W21CRWZFROM1_bf, &VITALMAIN_DW.M_RRLS5_i);

    /* End of Outputs for SubSystem: '<S291>/M_RRLS5' */

    /* DataStoreRead: '<S291>/J22B-RRLS-TE-FROM1' */
    rtb_J22BRRLSTEFROM1_d = M_RRLSTE_J22B;

    /* DataStoreRead: '<S291>/W21C-NWZ-FROM1' */
    rtb_W21CNWZFROM1_e = M_W21C_NWZ;

    /* Outputs for Atomic SubSystem: '<S291>/M_RRLS7' */
    M_RRLS2(rtb_J22BRRLSTEFROM1_d, rtb_W21CNWZFROM1_e, &VITALMAIN_DW.M_RRLS7_g);

    /* End of Outputs for SubSystem: '<S291>/M_RRLS7' */

    /* DataStoreRead: '<S291>/X10-RRLS-TE-FROM1' */
    rtb_X10RRLSTEFROM1_e = M_RRLSTE_X10;

    /* DataStoreRead: '<S291>/W11B//21B-RWZ-FROM1' */
    rtb_W11B21BRWZFROM1_o = M_W11B_21B_RWZ;

    /* DataStoreRead: '<S291>/W11A//21A-NWZ-FROM1' */
    rtb_W11A21ANWZFROM1_e = M_W11A_21A_NWZ;

    /* Outputs for Atomic SubSystem: '<S291>/M_RRLS6' */
    M_RRLS3(rtb_X10RRLSTEFROM1_e, rtb_W11B21BRWZFROM1_o, rtb_W11A21ANWZFROM1_e,
            &VITALMAIN_DW.M_RRLS6_d);

    /* End of Outputs for SubSystem: '<S291>/M_RRLS6' */

    /* DataStoreRead: '<S291>/X20-RRLS-TE-FROM1' */
    rtb_X20RRLSTEFROM1_b = M_RRLSTE_X20;

    /* DataStoreRead: '<S291>/W11B//21B-NWZ-FROM1' */
    rtb_W11B21BNWZFROM1_j = M_W11B_21B_NWZ;

    /* DataStoreRead: '<S291>/W11A//21A-NWZ-FROM2' */
    rtb_W11A21ANWZFROM2_p = M_W11A_21A_NWZ;

    /* Outputs for Atomic SubSystem: '<S291>/M_RRLS9' */
    M_RRLS3(rtb_X20RRLSTEFROM1_b, rtb_W11B21BNWZFROM1_j, rtb_W11A21ANWZFROM2_p,
            &VITALMAIN_DW.M_RRLS9_d);

    /* End of Outputs for SubSystem: '<S291>/M_RRLS9' */

    /* DataStoreWrite: '<S291>/21B-RLS' incorporates:
     *  Logic: '<S291>/OR1'
     */
    M_RLS_21B = (VITALMAIN_DW.M_RRLS5_i.AND1 || VITALMAIN_DW.M_RRLS7_g.AND1 ||
                 VITALMAIN_DW.M_RRLS6_d.AND1 || VITALMAIN_DW.M_RRLS9_d.AND1);

    /* DataStoreRead: '<S292>/DEP-RRLS-TE-FROM1' */
    rtb_DEPRRLSTEFROM1_k = M_RRLSTE_DEP;

    /* DataStoreRead: '<S292>/W21C-RWZ-FROM1' */
    rtb_W21CRWZFROM1_j = M_W21C_RWZ;

    /* Outputs for Atomic SubSystem: '<S292>/M_RRLS5' */
    M_RRLS2(rtb_DEPRRLSTEFROM1_k, rtb_W21CRWZFROM1_j, &VITALMAIN_DW.M_RRLS5_d);

    /* End of Outputs for SubSystem: '<S292>/M_RRLS5' */

    /* DataStoreRead: '<S292>/J22B-RRLS-TE-FROM1' */
    rtb_J22BRRLSTEFROM1_l = M_RRLSTE_J22B;

    /* DataStoreRead: '<S292>/W21C-NWZ-FROM1' */
    rtb_W21CNWZFROM1_b = M_W21C_NWZ;

    /* Outputs for Atomic SubSystem: '<S292>/M_RRLS7' */
    M_RRLS2(rtb_J22BRRLSTEFROM1_l, rtb_W21CNWZFROM1_b, &VITALMAIN_DW.M_RRLS7_f);

    /* End of Outputs for SubSystem: '<S292>/M_RRLS7' */

    /* DataStoreRead: '<S292>/X10-RRLS-TE-FROM1' */
    rtb_X10RRLSTEFROM1_m = M_RRLSTE_X10;

    /* DataStoreRead: '<S292>/W11B//21B-RWZ-FROM1' */
    rtb_W11B21BRWZFROM1_if = M_W11B_21B_RWZ;

    /* DataStoreRead: '<S292>/W11A//21A-NWZ-FROM1' */
    rtb_W11A21ANWZFROM1_k = M_W11A_21A_NWZ;

    /* Outputs for Atomic SubSystem: '<S292>/M_RRLS6' */
    M_RRLS3(rtb_X10RRLSTEFROM1_m, rtb_W11B21BRWZFROM1_if, rtb_W11A21ANWZFROM1_k,
            &VITALMAIN_DW.M_RRLS6_c);

    /* End of Outputs for SubSystem: '<S292>/M_RRLS6' */

    /* DataStoreRead: '<S292>/X20-RRLS-TE-FROM1' */
    rtb_X20RRLSTEFROM1_ko = M_RRLSTE_X20;

    /* DataStoreRead: '<S292>/W11B//21B-NWZ-FROM1' */
    rtb_W11B21BNWZFROM1_l = M_W11B_21B_NWZ;

    /* DataStoreRead: '<S292>/W11A//21A-NWZ-FROM2' */
    rtb_W11A21ANWZFROM2_j = M_W11A_21A_NWZ;

    /* Outputs for Atomic SubSystem: '<S292>/M_RRLS9' */
    M_RRLS3(rtb_X20RRLSTEFROM1_ko, rtb_W11B21BNWZFROM1_l, rtb_W11A21ANWZFROM2_j,
            &VITALMAIN_DW.M_RRLS9_e);

    /* End of Outputs for SubSystem: '<S292>/M_RRLS9' */

    /* DataStoreWrite: '<S292>/21C-RLS' incorporates:
     *  Logic: '<S292>/OR1'
     */
    M_RLS_21C = (VITALMAIN_DW.M_RRLS5_d.AND1 || VITALMAIN_DW.M_RRLS7_f.AND1 ||
                 VITALMAIN_DW.M_RRLS6_c.AND1 || VITALMAIN_DW.M_RRLS9_e.AND1);

    /* DataStoreRead: '<S293>/J22A-RRLS-TE-FROM1' */
    rtb_J22ARRLSTEFROM1_h = M_RRLSTE_J22A;

    /* Outputs for Atomic SubSystem: '<S293>/M_RRLS5' */
    M_RRLS1(rtb_J22ARRLSTEFROM1_h, &VITALMAIN_DW.M_RRLS5_j);

    /* End of Outputs for SubSystem: '<S293>/M_RRLS5' */

    /* DataStoreRead: '<S293>/J22B-RRLS-TE-FROM1' */
    rtb_J22BRRLSTEFROM1_j = M_RRLSTE_J22B;

    /* Outputs for Atomic SubSystem: '<S293>/M_RRLS1' */
    M_RRLS1(rtb_J22BRRLSTEFROM1_j, &VITALMAIN_DW.M_RRLS1_n);

    /* End of Outputs for SubSystem: '<S293>/M_RRLS1' */

    /* DataStoreWrite: '<S293>/22A-RLS' incorporates:
     *  Logic: '<S293>/OR1'
     */
    M_RLS_22A = (VITALMAIN_DW.M_RRLS5_j.RRLSTE || VITALMAIN_DW.M_RRLS1_n.RRLSTE);

    /* DataStoreRead: '<S294>/J22A-RRLS-TE-FROM1' */
    rtb_J22ARRLSTEFROM1_f = M_RRLSTE_J22A;

    /* Outputs for Atomic SubSystem: '<S294>/M_RRLS5' */
    M_RRLS1(rtb_J22ARRLSTEFROM1_f, &VITALMAIN_DW.M_RRLS5_ly);

    /* End of Outputs for SubSystem: '<S294>/M_RRLS5' */

    /* DataStoreRead: '<S294>/J22B-RRLS-TE-FROM1' */
    rtb_J22BRRLSTEFROM1_i = M_RRLSTE_J22B;

    /* Outputs for Atomic SubSystem: '<S294>/M_RRLS1' */
    M_RRLS1(rtb_J22BRRLSTEFROM1_i, &VITALMAIN_DW.M_RRLS1_m);

    /* End of Outputs for SubSystem: '<S294>/M_RRLS1' */

    /* Logic: '<S294>/OR1' */
    M_RLS_24A = (VITALMAIN_DW.M_RRLS5_ly.RRLSTE || VITALMAIN_DW.M_RRLS1_m.RRLSTE);

    /* DataStoreWrite: '<S294>/22B-RLS' */
    M_RLS_22B = M_RLS_24A;

    /* DataStoreWrite: '<S294>/22C-RLS' */
    M_RLS_22C = M_RLS_24A;

    /* DataStoreWrite: '<S294>/22D-RLS' */
    M_RLS_22D = M_RLS_24A;

    /* DataStoreRead: '<S295>/J22A-RRLS-TE-FROM1' */
    rtb_J22ARRLSTEFROM1_b = M_RRLSTE_J22A;

    /* Outputs for Atomic SubSystem: '<S295>/M_RRLS5' */
    M_RRLS1(rtb_J22ARRLSTEFROM1_b, &VITALMAIN_DW.M_RRLS5_jh);

    /* End of Outputs for SubSystem: '<S295>/M_RRLS5' */

    /* DataStoreRead: '<S295>/J22B-RRLS-TE-FROM1' */
    rtb_J22BRRLSTEFROM1_o = M_RRLSTE_J22B;

    /* Outputs for Atomic SubSystem: '<S295>/M_RRLS1' */
    M_RRLS1(rtb_J22BRRLSTEFROM1_o, &VITALMAIN_DW.M_RRLS1_pa);

    /* End of Outputs for SubSystem: '<S295>/M_RRLS1' */

    /* DataStoreWrite: '<S295>/22E-RLS' incorporates:
     *  Logic: '<S295>/OR1'
     */
    M_RLS_22E = (VITALMAIN_DW.M_RRLS5_jh.RRLSTE ||
                 VITALMAIN_DW.M_RRLS1_pa.RRLSTE);

    /* DataStoreRead: '<S296>/J12A-RRLS-TE-FROM1' */
    rtb_J12ARRLSTEFROM1_ef = M_RRLSTE_J12A;

    /* DataStoreRead: '<S296>/W13A//23A-RWZ-FROM1' */
    rtb_W13A23ARWZFROM1_i = M_W13A_23A_RWZ;

    /* Outputs for Atomic SubSystem: '<S296>/M_RRLS7' */
    M_RRLS2(rtb_J12ARRLSTEFROM1_ef, rtb_W13A23ARWZFROM1_i,
            &VITALMAIN_DW.M_RRLS7_j);

    /* End of Outputs for SubSystem: '<S296>/M_RRLS7' */

    /* DataStoreRead: '<S296>/J22A-RRLS-TE-FROM1' */
    rtb_J22ARRLSTEFROM1_bt = M_RRLSTE_J22A;

    /* DataStoreRead: '<S296>/W13A//23A-NWZ-FROM1' */
    rtb_W13A23ANWZFROM1_l = M_W13A_23A_NWZ;

    /* Outputs for Atomic SubSystem: '<S296>/M_RRLS8' */
    M_RRLS2(rtb_J22ARRLSTEFROM1_bt, rtb_W13A23ANWZFROM1_l,
            &VITALMAIN_DW.M_RRLS8_c);

    /* End of Outputs for SubSystem: '<S296>/M_RRLS8' */

    /* DataStoreRead: '<S296>/X14-RRLS-TE-FROM1' */
    rtb_X14RRLSTEFROM1_do = M_RRLSTE_X14;

    /* DataStoreRead: '<S296>/W13B//23B-RWZ-FROM1' */
    rtb_W13B23BRWZFROM1_f = M_W13B_23B_RWZ;

    /* Outputs for Atomic SubSystem: '<S296>/M_RRLS1' */
    M_RRLS2(rtb_X14RRLSTEFROM1_do, rtb_W13B23BRWZFROM1_f,
            &VITALMAIN_DW.M_RRLS1_g);

    /* End of Outputs for SubSystem: '<S296>/M_RRLS1' */

    /* DataStoreRead: '<S296>/X24-RRLS-TE-FROM1' incorporates:
     *  DataStoreWrite: '<S156>/X24-RRLS-TE'
     */
    rtb_X24RRLSTEFROM1_e = VITALMAIN_DW.EMERGENCYROUTERELEASE_o.Memory1;

    /* DataStoreRead: '<S296>/W13B//23B-NWZ-FROM1' */
    rtb_W13B23BNWZFROM1_g = M_W13B_23B_NWZ;

    /* Outputs for Atomic SubSystem: '<S296>/M_RRLS2' */
    M_RRLS2(rtb_X24RRLSTEFROM1_e, rtb_W13B23BNWZFROM1_g, &VITALMAIN_DW.M_RRLS2_c);

    /* End of Outputs for SubSystem: '<S296>/M_RRLS2' */

    /* DataStoreWrite: '<S296>/23A-RLS' incorporates:
     *  Logic: '<S296>/OR1'
     */
    M_RLS_23A = (VITALMAIN_DW.M_RRLS7_j.AND1 || VITALMAIN_DW.M_RRLS8_c.AND1 ||
                 VITALMAIN_DW.M_RRLS1_g.AND1 || VITALMAIN_DW.M_RRLS2_c.AND1);

    /* DataStoreRead: '<S297>/J12A-RRLS-TE-FROM1' */
    rtb_J12ARRLSTEFROM1_m = M_RRLSTE_J12A;

    /* DataStoreRead: '<S297>/W13A//23A-RWZ-FROM1' */
    rtb_W13A23ARWZFROM1_m = M_W13A_23A_RWZ;

    /* Outputs for Atomic SubSystem: '<S297>/M_RRLS7' */
    M_RRLS2(rtb_J12ARRLSTEFROM1_m, rtb_W13A23ARWZFROM1_m,
            &VITALMAIN_DW.M_RRLS7_m);

    /* End of Outputs for SubSystem: '<S297>/M_RRLS7' */

    /* DataStoreRead: '<S297>/J22A-RRLS-TE-FROM1' */
    rtb_J22ARRLSTEFROM1_o = M_RRLSTE_J22A;

    /* DataStoreRead: '<S297>/W13A//23A-NWZ-FROM1' */
    rtb_W13A23ANWZFROM1_h0 = M_W13A_23A_NWZ;

    /* Outputs for Atomic SubSystem: '<S297>/M_RRLS8' */
    M_RRLS2(rtb_J22ARRLSTEFROM1_o, rtb_W13A23ANWZFROM1_h0,
            &VITALMAIN_DW.M_RRLS8_ch);

    /* End of Outputs for SubSystem: '<S297>/M_RRLS8' */

    /* DataStoreRead: '<S297>/X14-RRLS-TE-FROM1' */
    rtb_X14RRLSTEFROM1_a = M_RRLSTE_X14;

    /* DataStoreRead: '<S297>/W13B//23B-RWZ-FROM1' */
    rtb_W13B23BRWZFROM1_k = M_W13B_23B_RWZ;

    /* Outputs for Atomic SubSystem: '<S297>/M_RRLS1' */
    M_RRLS2(rtb_X14RRLSTEFROM1_a, rtb_W13B23BRWZFROM1_k,
            &VITALMAIN_DW.M_RRLS1_dy);

    /* End of Outputs for SubSystem: '<S297>/M_RRLS1' */

    /* DataStoreRead: '<S297>/X24-RRLS-TE-FROM1' incorporates:
     *  DataStoreWrite: '<S156>/X24-RRLS-TE'
     */
    rtb_X24RRLSTEFROM1_h = VITALMAIN_DW.EMERGENCYROUTERELEASE_o.Memory1;

    /* DataStoreRead: '<S297>/W13B//23B-NWZ-FROM1' */
    rtb_W13B23BNWZFROM1_p = M_W13B_23B_NWZ;

    /* Outputs for Atomic SubSystem: '<S297>/M_RRLS2' */
    M_RRLS2(rtb_X24RRLSTEFROM1_h, rtb_W13B23BNWZFROM1_p, &VITALMAIN_DW.M_RRLS2_n);

    /* End of Outputs for SubSystem: '<S297>/M_RRLS2' */

    /* DataStoreWrite: '<S297>/23B-RLS' incorporates:
     *  Logic: '<S297>/OR1'
     */
    M_RLS_23B = (VITALMAIN_DW.M_RRLS7_m.AND1 || VITALMAIN_DW.M_RRLS8_ch.AND1 ||
                 VITALMAIN_DW.M_RRLS1_dy.AND1 || VITALMAIN_DW.M_RRLS2_n.AND1);

    /* DataStoreRead: '<S298>/X24-RRLS-TE-FROM1' incorporates:
     *  DataStoreWrite: '<S156>/X24-RRLS-TE'
     */
    rtb_X24RRLSTEFROM1_b = VITALMAIN_DW.EMERGENCYROUTERELEASE_o.Memory1;

    /* Outputs for Atomic SubSystem: '<S298>/M_RRLS5' */
    M_RRLS1(rtb_X24RRLSTEFROM1_b, &VITALMAIN_DW.M_RRLS5_hh);

    /* End of Outputs for SubSystem: '<S298>/M_RRLS5' */

    /* DataStoreRead: '<S298>/J12A-RRLS-TE-FROM1' */
    rtb_J12ARRLSTEFROM1_jl = M_RRLSTE_J12A;

    /* DataStoreRead: '<S298>/W13B//23B-NWZ-FROM1' */
    rtb_W13B23BNWZFROM1_ge = M_W13B_23B_NWZ;

    /* DataStoreRead: '<S298>/W13A//23A-RWZ-FROM1' */
    rtb_W13A23ARWZFROM1_h = M_W13A_23A_RWZ;

    /* Outputs for Atomic SubSystem: '<S298>/M_RRLS6' */
    M_RRLS3(rtb_J12ARRLSTEFROM1_jl, rtb_W13B23BNWZFROM1_ge,
            rtb_W13A23ARWZFROM1_h, &VITALMAIN_DW.M_RRLS6_i);

    /* End of Outputs for SubSystem: '<S298>/M_RRLS6' */

    /* DataStoreRead: '<S298>/J22A-RRLS-TE-FROM1' */
    rtb_J22ARRLSTEFROM1_c = M_RRLSTE_J22A;

    /* DataStoreRead: '<S298>/W13B//23B-NWZ-FROM2' */
    rtb_W13B23BNWZFROM2_d = M_W13B_23B_NWZ;

    /* DataStoreRead: '<S298>/W13A//23A-NWZ-FROM1' */
    rtb_W13A23ANWZFROM1_a = M_W13A_23A_NWZ;

    /* Outputs for Atomic SubSystem: '<S298>/M_RRLS1' */
    M_RRLS3(rtb_J22ARRLSTEFROM1_c, rtb_W13B23BNWZFROM2_d, rtb_W13A23ANWZFROM1_a,
            &VITALMAIN_DW.M_RRLS1_dn);

    /* End of Outputs for SubSystem: '<S298>/M_RRLS1' */

    /* Logic: '<S298>/OR1' */
    M_RLS_24A = (VITALMAIN_DW.M_RRLS5_hh.RRLSTE || VITALMAIN_DW.M_RRLS6_i.AND1 ||
                 VITALMAIN_DW.M_RRLS1_dn.AND1);

    /* DataStoreWrite: '<S298>/24B-RLS' */
    M_RLS_24B = M_RLS_24A;

    /* DataStoreWrite: '<S259>/RRLS' incorporates:
     *  DataStoreWrite: '<S156>/X24-RRLS'
     *  Logic: '<S259>/NOT1'
     *  Logic: '<S259>/OR1'
     */
    M_RRLS_l = !(M_RRLS_X10 || M_RRLS_X20 || M_RRLS_J12A || M_RRLS_J22A ||
                 M_RRLS_J12B || M_RRLS_J22B || M_RRLS_X14 ||
                 VITALMAIN_DW.EMERGENCYROUTERELEASE_o.AND1);

    /* DataStoreWrite: '<S260>/SWRLS' incorporates:
     *  Logic: '<S260>/NOT1'
     *  Logic: '<S260>/OR1'
     */
    M_SWRLS_k = !(M_W11A_21A_SWRLS || M_W11B_21B_SWRLS || M_W21C_SWRLS ||
                  M_W13A_23A_SWRLS || M_W13B_23B_SWRLS);

    /* DataStoreRead: '<S361>/W11A//21A-NWP-DI' */
    rtb_W11A21ANWPDI = DI_NWP_W11A_21A;

    /* DataStoreRead: '<S361>/W11A//21A-RWP-DI' */
    rtb_W11A21ARWPDI = DI_RWP_W11A_21A;

    /* DataStoreRead: '<S361>/W11A//21A-OOC' */
    rtb_W11A21AOOC = M_W11A_21A_OOC;

    /* DataStoreRead: '<S361>/W11A//21A-L' */
    VITALMAIN_DW.W11A21AL = M_W11A_21A_L;

    /* DataStoreRead: '<S361>/W11A//21A-N-REQ' */
    rtb_W11A21ANREQ = M_W11A_21A_N_REQ;

    /* DataStoreRead: '<S361>/W11A//21A-R-REQ' */
    rtb_W11A21ARREQ = M_W11A_21A_R_REQ;

    /* Logic: '<S361>/AND1' */
    rtb_AND1_h = (M_TP_11A && M_TP_21A);

    /* DataStoreRead: '<S361>/W11A//21A-TPZ' */
    rtb_W11A21ATPZ = M_W11A_21A_TPZ;

    /* DataStoreRead: '<S361>/VDR-DI' */
    VITALMAIN_DW.VDRDI = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S361>/POINT CONTROL' */
  M_SW_CTRL(VITALMAIN_M, rtb_W11A21ANWPDI, rtb_W11A21ARWPDI, rtb_W11A21AOOC,
            VITALMAIN_DW.W11A21AL, rtb_W11A21ANREQ, rtb_W11A21ARREQ, rtb_AND1_h,
            rtb_W11A21ATPZ, VITALMAIN_DW.VDRDI, &VITALMAIN_DW.POINTCONTROL);

  /* End of Outputs for SubSystem: '<S361>/POINT CONTROL' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S361>/W11A//21A-LS' */
    M_W11A_21A_LS = VITALMAIN_DW.POINTCONTROL.Memory3;

    /* DataStoreWrite: '<S361>/W11A//21A-NW-TE' incorporates:
     *  SignalConversion: '<S361>/TmpSignal ConversionAtPOINT CONTROLOutport11'
     */
    M_W11A_21A_NW_TE = VITALMAIN_DW.POINTCONTROL.MV_TON1.LogicalOperator2;

    /* DataStoreWrite: '<S361>/W11A//21A-NWC' */
    M_W11A_21A_NWC = VITALMAIN_DW.POINTCONTROL.AND7;

    /* DataStoreWrite: '<S361>/W11A//21A-NWP' */
    M_W11A_21A_NWP = VITALMAIN_DW.POINTCONTROL.AND1;

    /* DataStoreWrite: '<S361>/W11A//21A-NWR-DO' incorporates:
     *  SignalConversion: '<S361>/TmpSignal ConversionAtPOINT CONTROLOutport8'
     */
    DO_NWR_W11A_21A = VITALMAIN_DW.POINTCONTROL.AND22;

    /* DataStoreWrite: '<S361>/W11A//21A-NWZ' */
    M_W11A_21A_NWZ = VITALMAIN_DW.POINTCONTROL.Memory1;

    /* DataStoreWrite: '<S361>/W11A//21A-RW-TE' incorporates:
     *  SignalConversion: '<S361>/TmpSignal ConversionAtPOINT CONTROLOutport12'
     */
    M_W11A_21A_RW_TE = VITALMAIN_DW.POINTCONTROL.MV_TON2.LogicalOperator2;

    /* DataStoreWrite: '<S361>/W11A//21A-RWC' */
    M_W11A_21A_RWC = VITALMAIN_DW.POINTCONTROL.AND8;

    /* DataStoreWrite: '<S361>/W11A//21A-RWP' */
    M_W11A_21A_RWP = VITALMAIN_DW.POINTCONTROL.AND2;

    /* DataStoreWrite: '<S361>/W11A//21A-RWR-DO' incorporates:
     *  SignalConversion: '<S361>/TmpSignal ConversionAtPOINT CONTROLOutport9'
     */
    DO_RWR_W11A_21A = VITALMAIN_DW.POINTCONTROL.AND23;

    /* DataStoreWrite: '<S361>/W11A//21A-RWZ' */
    M_W11A_21A_RWZ = VITALMAIN_DW.POINTCONTROL.Memory2;

    /* DataStoreWrite: '<S361>/W11A//21A-WLPR-DO' incorporates:
     *  SignalConversion: '<S361>/TmpSignal ConversionAtPOINT CONTROLOutport10'
     */
    DO_WLPR_W11A_21A = VITALMAIN_DW.POINTCONTROL.AND24;

    /* DataStoreRead: '<S362>/W11B//21B-NWP-DI' */
    rtb_W11B21BNWPDI = DI_NWP_W11B_21B;

    /* DataStoreRead: '<S362>/W11B//21B-RWP-DI' */
    rtb_W11B21BRWPDI = DI_RWP_W11B_21B;

    /* DataStoreRead: '<S362>/W11B//21B-OOC' */
    rtb_W11B21BOOC = M_W11B_21B_OOC;

    /* DataStoreRead: '<S362>/W11B//21B-L' */
    VITALMAIN_DW.W11B21BL = M_W11B_21B_L;

    /* DataStoreRead: '<S362>/W11B//21B-N-REQ' */
    rtb_W11B21BNREQ = M_W11B_21B_N_REQ;

    /* DataStoreRead: '<S362>/W11B//21B-R-REQ' */
    rtb_W11B21BRREQ = M_W11B_21B_R_REQ;

    /* Logic: '<S362>/AND1' */
    rtb_AND1_d = (M_TP_11B && M_TP_21B);

    /* DataStoreRead: '<S362>/W11B//21B-TPZ' */
    rtb_W11B21BTPZ = M_W11B_21B_TPZ;

    /* DataStoreRead: '<S362>/VDR-DI' */
    VITALMAIN_DW.VDRDI_o = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S362>/POINT CONTROL' */
  M_SW_CTRL(VITALMAIN_M, rtb_W11B21BNWPDI, rtb_W11B21BRWPDI, rtb_W11B21BOOC,
            VITALMAIN_DW.W11B21BL, rtb_W11B21BNREQ, rtb_W11B21BRREQ, rtb_AND1_d,
            rtb_W11B21BTPZ, VITALMAIN_DW.VDRDI_o, &VITALMAIN_DW.POINTCONTROL_c);

  /* End of Outputs for SubSystem: '<S362>/POINT CONTROL' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S362>/W11B//21B-LS' */
    M_W11B_21B_LS = VITALMAIN_DW.POINTCONTROL_c.Memory3;

    /* DataStoreWrite: '<S362>/W11B//21B-NW-TE' incorporates:
     *  SignalConversion: '<S362>/TmpSignal ConversionAtPOINT CONTROLOutport11'
     */
    M_W11B_21B_NW_TE = VITALMAIN_DW.POINTCONTROL_c.MV_TON1.LogicalOperator2;

    /* DataStoreWrite: '<S362>/W11B//21B-NWC' */
    M_W11B_21B_NWC = VITALMAIN_DW.POINTCONTROL_c.AND7;

    /* DataStoreWrite: '<S362>/W11B//21B-NWP' */
    M_W11B_21B_NWP = VITALMAIN_DW.POINTCONTROL_c.AND1;

    /* DataStoreWrite: '<S362>/W11B//21B-NWR-DO' incorporates:
     *  SignalConversion: '<S362>/TmpSignal ConversionAtPOINT CONTROLOutport8'
     */
    DO_NWR_W11B_21B = VITALMAIN_DW.POINTCONTROL_c.AND22;

    /* DataStoreWrite: '<S362>/W11B//21B-NWZ' */
    M_W11B_21B_NWZ = VITALMAIN_DW.POINTCONTROL_c.Memory1;

    /* DataStoreWrite: '<S362>/W11B//21B-RW-TE' incorporates:
     *  SignalConversion: '<S362>/TmpSignal ConversionAtPOINT CONTROLOutport12'
     */
    M_W11B_21B_RW_TE = VITALMAIN_DW.POINTCONTROL_c.MV_TON2.LogicalOperator2;

    /* DataStoreWrite: '<S362>/W11B//21B-RWC' */
    M_W11B_21B_RWC = VITALMAIN_DW.POINTCONTROL_c.AND8;

    /* DataStoreWrite: '<S362>/W11B//21B-RWP' */
    M_W11B_21B_RWP = VITALMAIN_DW.POINTCONTROL_c.AND2;

    /* DataStoreWrite: '<S362>/W11B//21B-RWR-DO' incorporates:
     *  SignalConversion: '<S362>/TmpSignal ConversionAtPOINT CONTROLOutport9'
     */
    DO_RWR_W11B_21B = VITALMAIN_DW.POINTCONTROL_c.AND23;

    /* DataStoreWrite: '<S362>/W11B//21B-RWZ' */
    M_W11B_21B_RWZ = VITALMAIN_DW.POINTCONTROL_c.Memory2;

    /* DataStoreWrite: '<S362>/W11B//21B-WLPR-DO' incorporates:
     *  SignalConversion: '<S362>/TmpSignal ConversionAtPOINT CONTROLOutport10'
     */
    DO_WLPR_W11B_21B = VITALMAIN_DW.POINTCONTROL_c.AND24;

    /* DataStoreRead: '<S363>/W13A//23A-NWP-DI' */
    rtb_W13A23ANWPDI = DI_NWP_W13A_23A;

    /* DataStoreRead: '<S363>/W13A//23A-RWP-DI' */
    rtb_W13A23ARWPDI = DI_RWP_W13A_23A;

    /* DataStoreRead: '<S363>/W13A//23A-OOC' */
    rtb_W13A23AOOC = M_W13A_23A_OOC;

    /* DataStoreRead: '<S363>/W13A//23A-L' */
    VITALMAIN_DW.W13A23AL = M_W13A_23A_L;

    /* DataStoreRead: '<S363>/W13A//23A-N-REQ' */
    rtb_W13A23ANREQ = M_W13A_23A_N_REQ;

    /* DataStoreRead: '<S363>/W13A//23A-R-REQ' */
    rtb_W13A23ARREQ = M_W13A_23A_R_REQ;

    /* Logic: '<S363>/AND1' */
    rtb_AND1_m = (M_TP_13A && M_TP_23A);

    /* DataStoreRead: '<S363>/W13A//23A-TPZ' */
    rtb_W13A23ATPZ = M_W13A_23A_TPZ;

    /* DataStoreRead: '<S363>/VDR-DI' */
    VITALMAIN_DW.VDRDI_p = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S363>/POINT CONTROL' */
  M_SW_CTRL(VITALMAIN_M, rtb_W13A23ANWPDI, rtb_W13A23ARWPDI, rtb_W13A23AOOC,
            VITALMAIN_DW.W13A23AL, rtb_W13A23ANREQ, rtb_W13A23ARREQ, rtb_AND1_m,
            rtb_W13A23ATPZ, VITALMAIN_DW.VDRDI_p, &VITALMAIN_DW.POINTCONTROL_a);

  /* End of Outputs for SubSystem: '<S363>/POINT CONTROL' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S363>/W13A//23A-LS' */
    M_W13A_23A_LS = VITALMAIN_DW.POINTCONTROL_a.Memory3;

    /* DataStoreWrite: '<S363>/W13A//23A-NW-TE' incorporates:
     *  SignalConversion: '<S363>/TmpSignal ConversionAtPOINT CONTROLOutport11'
     */
    M_W13A_23A_NW_TE = VITALMAIN_DW.POINTCONTROL_a.MV_TON1.LogicalOperator2;

    /* DataStoreWrite: '<S363>/W13A//23A-NWC' */
    M_W13A_23A_NWC = VITALMAIN_DW.POINTCONTROL_a.AND7;

    /* DataStoreWrite: '<S363>/W13A//23A-NWP' */
    M_W13A_23A_NWP = VITALMAIN_DW.POINTCONTROL_a.AND1;

    /* DataStoreWrite: '<S363>/W13A//23A-NWR-DO' incorporates:
     *  SignalConversion: '<S363>/TmpSignal ConversionAtPOINT CONTROLOutport8'
     */
    DO_NWR_W13A_23A = VITALMAIN_DW.POINTCONTROL_a.AND22;

    /* DataStoreWrite: '<S363>/W13A//23A-NWZ' */
    M_W13A_23A_NWZ = VITALMAIN_DW.POINTCONTROL_a.Memory1;

    /* DataStoreWrite: '<S363>/W13A//23A-RW-TE' incorporates:
     *  SignalConversion: '<S363>/TmpSignal ConversionAtPOINT CONTROLOutport12'
     */
    M_W13A_23A_RW_TE = VITALMAIN_DW.POINTCONTROL_a.MV_TON2.LogicalOperator2;

    /* DataStoreWrite: '<S363>/W13A//23A-RWC' */
    M_W13A_23A_RWC = VITALMAIN_DW.POINTCONTROL_a.AND8;

    /* DataStoreWrite: '<S363>/W13A//23A-RWP' */
    M_W13A_23A_RWP = VITALMAIN_DW.POINTCONTROL_a.AND2;

    /* DataStoreWrite: '<S363>/W13A//23A-RWR-DO' incorporates:
     *  SignalConversion: '<S363>/TmpSignal ConversionAtPOINT CONTROLOutport9'
     */
    DO_RWR_W13A_23A = VITALMAIN_DW.POINTCONTROL_a.AND23;

    /* DataStoreWrite: '<S363>/W13A//23A-RWZ' */
    M_W13A_23A_RWZ = VITALMAIN_DW.POINTCONTROL_a.Memory2;

    /* DataStoreWrite: '<S363>/W13A//23A-WLPR-DO' incorporates:
     *  SignalConversion: '<S363>/TmpSignal ConversionAtPOINT CONTROLOutport10'
     */
    DO_WLPR_W13A_23A = VITALMAIN_DW.POINTCONTROL_a.AND24;

    /* DataStoreRead: '<S364>/W13B//23B-NWP-DI' */
    rtb_W13B23BNWPDI = DI_NWP_W13B_23B;

    /* DataStoreRead: '<S364>/W13B//23B-RWP-DI' */
    rtb_W13B23BRWPDI = DI_RWP_W13B_23B;

    /* DataStoreRead: '<S364>/W13B//23B-OOC' */
    rtb_W13B23BOOC = M_W13B_23B_OOC;

    /* DataStoreRead: '<S364>/W13B//23B-L' */
    VITALMAIN_DW.W13B23BL = M_W13B_23B_L;

    /* DataStoreRead: '<S364>/W13B//23B-N-REQ' */
    rtb_W13B23BNREQ = M_W13B_23B_N_REQ;

    /* DataStoreRead: '<S364>/W13B//23B-R-REQ' */
    rtb_W13B23BRREQ = M_W13B_23B_R_REQ;

    /* Logic: '<S364>/AND1' */
    rtb_AND1_at = (M_TP_13B && M_TP_23B);

    /* DataStoreRead: '<S364>/W13B//23B-TPZ' */
    rtb_W13B23BTPZ = M_W13B_23B_TPZ;

    /* DataStoreRead: '<S364>/VDR-DI' */
    VITALMAIN_DW.VDRDI_pw = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S364>/POINT CONTROL' */
  M_SW_CTRL(VITALMAIN_M, rtb_W13B23BNWPDI, rtb_W13B23BRWPDI, rtb_W13B23BOOC,
            VITALMAIN_DW.W13B23BL, rtb_W13B23BNREQ, rtb_W13B23BRREQ, rtb_AND1_at,
            rtb_W13B23BTPZ, VITALMAIN_DW.VDRDI_pw, &VITALMAIN_DW.POINTCONTROL_j);

  /* End of Outputs for SubSystem: '<S364>/POINT CONTROL' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S364>/W13B//23B-LS' */
    M_W13B_23B_LS = VITALMAIN_DW.POINTCONTROL_j.Memory3;

    /* DataStoreWrite: '<S364>/W13B//23B-NW-TE' incorporates:
     *  SignalConversion: '<S364>/TmpSignal ConversionAtPOINT CONTROLOutport11'
     */
    M_W13B_23B_NW_TE = VITALMAIN_DW.POINTCONTROL_j.MV_TON1.LogicalOperator2;

    /* DataStoreWrite: '<S364>/W13B//23B-NWC' */
    M_W13B_23B_NWC = VITALMAIN_DW.POINTCONTROL_j.AND7;

    /* DataStoreWrite: '<S364>/W13B//23B-NWP' */
    M_W13B_23B_NWP = VITALMAIN_DW.POINTCONTROL_j.AND1;

    /* DataStoreWrite: '<S364>/W13B//23B-NWR-DO' incorporates:
     *  SignalConversion: '<S364>/TmpSignal ConversionAtPOINT CONTROLOutport8'
     */
    DO_NWR_W13B_23B = VITALMAIN_DW.POINTCONTROL_j.AND22;

    /* DataStoreWrite: '<S364>/W13B//23B-NWZ' */
    M_W13B_23B_NWZ = VITALMAIN_DW.POINTCONTROL_j.Memory1;

    /* DataStoreWrite: '<S364>/W13B//23B-RW-TE' incorporates:
     *  SignalConversion: '<S364>/TmpSignal ConversionAtPOINT CONTROLOutport12'
     */
    M_W13B_23B_RW_TE = VITALMAIN_DW.POINTCONTROL_j.MV_TON2.LogicalOperator2;

    /* DataStoreWrite: '<S364>/W13B//23B-RWC' */
    M_W13B_23B_RWC = VITALMAIN_DW.POINTCONTROL_j.AND8;

    /* DataStoreWrite: '<S364>/W13B//23B-RWP' */
    M_W13B_23B_RWP = VITALMAIN_DW.POINTCONTROL_j.AND2;

    /* DataStoreWrite: '<S364>/W13B//23B-RWR-DO' incorporates:
     *  SignalConversion: '<S364>/TmpSignal ConversionAtPOINT CONTROLOutport9'
     */
    DO_RWR_W13B_23B = VITALMAIN_DW.POINTCONTROL_j.AND23;

    /* DataStoreWrite: '<S364>/W13B//23B-RWZ' */
    M_W13B_23B_RWZ = VITALMAIN_DW.POINTCONTROL_j.Memory2;

    /* DataStoreWrite: '<S364>/W13B//23B-WLPR-DO' incorporates:
     *  SignalConversion: '<S364>/TmpSignal ConversionAtPOINT CONTROLOutport10'
     */
    DO_WLPR_W13B_23B = VITALMAIN_DW.POINTCONTROL_j.AND24;

    /* DataStoreRead: '<S365>/W21C-NWP-DI' */
    rtb_W21CNWPDI = DI_NWP_W21C;

    /* DataStoreRead: '<S365>/W21C-RWP-DI' */
    rtb_W21CRWPDI = DI_RWP_W21C;

    /* DataStoreRead: '<S365>/W21C-OOC' */
    rtb_W21COOC = M_W21C_OOC;

    /* DataStoreRead: '<S365>/W21C-L' */
    VITALMAIN_DW.W21CL = M_W21C_L;

    /* DataStoreRead: '<S365>/W21C-N-REQ' */
    rtb_W21CNREQ = M_W21C_N_REQ;

    /* DataStoreRead: '<S365>/W21C-R-REQ' */
    rtb_W21CRREQ = M_W21C_R_REQ;

    /* DataStoreRead: '<S365>/21C-TP' */
    rtb_u1CTP_n2 = M_TP_21C;

    /* DataStoreRead: '<S365>/W21C-TPZ' */
    rtb_W21CTPZ = M_W21C_TPZ;

    /* DataStoreRead: '<S365>/VDR-DI' */
    VITALMAIN_DW.VDRDI_d = DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S365>/POINT CONTROL' */
  M_SW_CTRL(VITALMAIN_M, rtb_W21CNWPDI, rtb_W21CRWPDI, rtb_W21COOC,
            VITALMAIN_DW.W21CL, rtb_W21CNREQ, rtb_W21CRREQ, rtb_u1CTP_n2,
            rtb_W21CTPZ, VITALMAIN_DW.VDRDI_d, &VITALMAIN_DW.POINTCONTROL_h);

  /* End of Outputs for SubSystem: '<S365>/POINT CONTROL' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S365>/W21C-LS' */
    M_W21C_LS = VITALMAIN_DW.POINTCONTROL_h.Memory3;

    /* DataStoreWrite: '<S365>/W21C-NW-TE' incorporates:
     *  SignalConversion: '<S365>/TmpSignal ConversionAtPOINT CONTROLOutport11'
     */
    M_W21C_NW_TE = VITALMAIN_DW.POINTCONTROL_h.MV_TON1.LogicalOperator2;

    /* DataStoreWrite: '<S365>/W21C-NWC' */
    M_W21C_NWC = VITALMAIN_DW.POINTCONTROL_h.AND7;

    /* DataStoreWrite: '<S365>/W21C-NWP' */
    M_W21C_NWP = VITALMAIN_DW.POINTCONTROL_h.AND1;

    /* DataStoreWrite: '<S365>/W21C-NWR-DO' incorporates:
     *  SignalConversion: '<S365>/TmpSignal ConversionAtPOINT CONTROLOutport8'
     */
    DO_NWR_W21C = VITALMAIN_DW.POINTCONTROL_h.AND22;

    /* DataStoreWrite: '<S365>/W21C-NWZ' */
    M_W21C_NWZ = VITALMAIN_DW.POINTCONTROL_h.Memory1;

    /* DataStoreWrite: '<S365>/W21C-RW-TE' incorporates:
     *  SignalConversion: '<S365>/TmpSignal ConversionAtPOINT CONTROLOutport12'
     */
    M_W21C_RW_TE = VITALMAIN_DW.POINTCONTROL_h.MV_TON2.LogicalOperator2;

    /* DataStoreWrite: '<S365>/W21C-RWC' */
    M_W21C_RWC = VITALMAIN_DW.POINTCONTROL_h.AND8;

    /* DataStoreWrite: '<S365>/W21C-RWP' */
    M_W21C_RWP = VITALMAIN_DW.POINTCONTROL_h.AND2;

    /* DataStoreWrite: '<S365>/W21C-RWR-DO' incorporates:
     *  SignalConversion: '<S365>/TmpSignal ConversionAtPOINT CONTROLOutport9'
     */
    DO_RWR_W21C = VITALMAIN_DW.POINTCONTROL_h.AND23;

    /* DataStoreWrite: '<S365>/W21C-RWZ' */
    M_W21C_RWZ = VITALMAIN_DW.POINTCONTROL_h.Memory2;

    /* DataStoreWrite: '<S365>/W21C-WLPR-DO' incorporates:
     *  SignalConversion: '<S365>/TmpSignal ConversionAtPOINT CONTROLOutport10'
     */
    DO_WLPR_W21C = VITALMAIN_DW.POINTCONTROL_h.AND24;

    /* Logic: '<S471>/AND6' incorporates:
     *  Logic: '<S471>/AND1'
     *  Logic: '<S471>/AND2'
     *  Logic: '<S471>/AND3'
     *  Logic: '<S471>/AND4'
     */
    rtb_AND6 = (M_T_ES_11A && M_T_ES_21A && (M_S_ES_11A && M_S_ES_21A) &&
                (M_T_WS_11A && M_T_WS_21A) && (M_S_WS_11A && M_S_WS_21A));

    /* Logic: '<S471>/AND5' */
    rtb_AND5 = (M_TP_11A && M_TP_21A);

    /* DataStoreRead: '<S471>/W11A//21A-TPZ' */
    rtb_W11A21ATPZ_o = M_W11A_21A_TPZ;

    /* Outputs for Atomic SubSystem: '<S471>/POINT LOCK' */
    M_SW_L(rtb_AND6, rtb_AND5, rtb_W11A21ATPZ_o, &VITALMAIN_DW.POINTLOCK);

    /* End of Outputs for SubSystem: '<S471>/POINT LOCK' */

    /* DataStoreWrite: '<S471>/W11A//21A-L' */
    M_W11A_21A_L = VITALMAIN_DW.POINTLOCK.OR2;

    /* Logic: '<S472>/AND6' incorporates:
     *  Logic: '<S472>/AND1'
     *  Logic: '<S472>/AND2'
     *  Logic: '<S472>/AND3'
     *  Logic: '<S472>/AND4'
     */
    rtb_AND6_l = (M_T_ES_11B && M_T_ES_21B && (M_S_ES_11B && M_S_ES_21B) &&
                  (M_T_WS_11B && M_T_WS_21B) && (M_S_WS_11B && M_S_WS_21B));

    /* Logic: '<S472>/AND5' */
    rtb_AND5_g = (M_TP_11B && M_TP_21B);

    /* DataStoreRead: '<S472>/W11B//21B-TPZ' */
    rtb_W11B21BTPZ_o = M_W11B_21B_TPZ;

    /* Outputs for Atomic SubSystem: '<S472>/POINT LOCK' */
    M_SW_L(rtb_AND6_l, rtb_AND5_g, rtb_W11B21BTPZ_o, &VITALMAIN_DW.POINTLOCK_f);

    /* End of Outputs for SubSystem: '<S472>/POINT LOCK' */

    /* DataStoreWrite: '<S472>/W11B//21B-L' */
    M_W11B_21B_L = VITALMAIN_DW.POINTLOCK_f.OR2;

    /* Logic: '<S473>/AND6' incorporates:
     *  Logic: '<S473>/AND1'
     *  Logic: '<S473>/AND3'
     */
    rtb_AND6_k = (M_T_ES_13A && M_T_ES_23A && (M_T_WS_13A && M_T_WS_23A));

    /* Logic: '<S473>/AND5' */
    rtb_AND5_p = (M_TP_13A && M_TP_23A);

    /* DataStoreRead: '<S473>/W13A//23A-TPZ' */
    rtb_W13A23ATPZ_a = M_W13A_23A_TPZ;

    /* Outputs for Atomic SubSystem: '<S473>/POINT LOCK' */
    M_SW_L(rtb_AND6_k, rtb_AND5_p, rtb_W13A23ATPZ_a, &VITALMAIN_DW.POINTLOCK_e);

    /* End of Outputs for SubSystem: '<S473>/POINT LOCK' */

    /* DataStoreWrite: '<S473>/W13A//23A-L' */
    M_W13A_23A_L = VITALMAIN_DW.POINTLOCK_e.OR2;

    /* Logic: '<S474>/AND6' incorporates:
     *  Logic: '<S474>/AND1'
     *  Logic: '<S474>/AND3'
     */
    rtb_AND6_ki = (M_T_ES_13B && M_T_ES_23B && (M_T_WS_13B && M_T_WS_23B));

    /* Logic: '<S474>/AND5' */
    rtb_AND5_j = (M_TP_13B && M_TP_23B);

    /* DataStoreRead: '<S474>/W13B//23B-TPZ' */
    rtb_W13B23BTPZ_n = M_W13B_23B_TPZ;

    /* Outputs for Atomic SubSystem: '<S474>/POINT LOCK' */
    M_SW_L(rtb_AND6_ki, rtb_AND5_j, rtb_W13B23BTPZ_n, &VITALMAIN_DW.POINTLOCK_m);

    /* End of Outputs for SubSystem: '<S474>/POINT LOCK' */

    /* DataStoreWrite: '<S474>/W13B//23B-L' */
    M_W13B_23B_L = VITALMAIN_DW.POINTLOCK_m.OR2;

    /* Logic: '<S475>/AND6' */
    rtb_AND6_f = (M_T_ES_21C && M_S_ES_21C && M_T_WS_21C && M_S_WS_21C);

    /* DataStoreRead: '<S475>/21C-TP' */
    rtb_u1CTP_p = M_TP_21C;

    /* DataStoreRead: '<S475>/W21C-TPZ' */
    rtb_W21CTPZ_a = M_W21C_TPZ;

    /* Outputs for Atomic SubSystem: '<S475>/POINT LOCK' */
    M_SW_L(rtb_AND6_f, rtb_u1CTP_p, rtb_W21CTPZ_a, &VITALMAIN_DW.POINTLOCK_a);

    /* End of Outputs for SubSystem: '<S475>/POINT LOCK' */

    /* DataStoreWrite: '<S475>/W21C-L' */
    M_W21C_L = VITALMAIN_DW.POINTLOCK_a.OR2;

    /* DataStoreRead: '<S481>/DEP-X10-REQ' */
    rtb_DEPX10REQ = M_REQ_S_DEP_10;

    /* DataStoreRead: '<S481>/DEP-X10-S-L' */
    rtb_DEPX10SL_e = M_L_S_DEP_10;

    /* Outputs for Atomic SubSystem: '<S481>/ROUTE CHECK' */
    M_T_S(rtb_DEPX10REQ, rtb_DEPX10SL_e, &VITALMAIN_DW.ROUTECHECK);

    /* End of Outputs for SubSystem: '<S481>/ROUTE CHECK' */

    /* DataStoreWrite: '<S481>/DEP-X10-S' */
    M_R_S_DEP_10 = VITALMAIN_DW.ROUTECHECK.AND2;

    /* DataStoreRead: '<S482>/DEP-X20-REQ' */
    rtb_DEPX20REQ = M_REQ_S_DEP_20;

    /* DataStoreRead: '<S482>/DEP-X20-S-L' */
    rtb_DEPX20SL_l = M_L_S_DEP_20;

    /* Outputs for Atomic SubSystem: '<S482>/ROUTE CHECK' */
    M_T_S(rtb_DEPX20REQ, rtb_DEPX20SL_l, &VITALMAIN_DW.ROUTECHECK_a);

    /* End of Outputs for SubSystem: '<S482>/ROUTE CHECK' */

    /* DataStoreWrite: '<S482>/DEP-X20-S' */
    M_R_S_DEP_20 = VITALMAIN_DW.ROUTECHECK_a.AND2;

    /* DataStoreRead: '<S483>/J12A-X10-REQ' */
    rtb_J12AX10REQ = M_REQ_T_12_10;

    /* DataStoreRead: '<S483>/J12A-X10-L' */
    rtb_J12AX10L = M_L_T_12_10;

    /* Outputs for Atomic SubSystem: '<S483>/ROUTE CHECK' */
    M_T_S(rtb_J12AX10REQ, rtb_J12AX10L, &VITALMAIN_DW.ROUTECHECK_o);

    /* End of Outputs for SubSystem: '<S483>/ROUTE CHECK' */

    /* DataStoreWrite: '<S483>/J12A-X10-H' */
    M_R_H_12_10 = VITALMAIN_DW.ROUTECHECK_o.AND2;

    /* DataStoreRead: '<S484>/J12A-X20-REQ' */
    rtb_J12AX20REQ = M_REQ_T_12_20;

    /* DataStoreRead: '<S484>/J12A-X20-L' */
    rtb_J12AX20L = M_L_T_12_20;

    /* Outputs for Atomic SubSystem: '<S484>/ROUTE CHECK' */
    M_T_S(rtb_J12AX20REQ, rtb_J12AX20L, &VITALMAIN_DW.ROUTECHECK_op);

    /* End of Outputs for SubSystem: '<S484>/ROUTE CHECK' */

    /* DataStoreWrite: '<S484>/J12A-X20-H' */
    M_R_H_12_20 = VITALMAIN_DW.ROUTECHECK_op.AND2;

    /* DataStoreRead: '<S485>/J12B-X14-REQ' */
    rtb_J12BX14REQ = M_REQ_T_12_14;

    /* DataStoreRead: '<S485>/J12B-X14-L' */
    rtb_J12BX14L = M_L_T_12_14;

    /* Outputs for Atomic SubSystem: '<S485>/ROUTE CHECK' */
    M_T_S(rtb_J12BX14REQ, rtb_J12BX14L, &VITALMAIN_DW.ROUTECHECK_n);

    /* End of Outputs for SubSystem: '<S485>/ROUTE CHECK' */

    /* DataStoreWrite: '<S485>/J12B-X14-H' */
    M_R_H_12_14 = VITALMAIN_DW.ROUTECHECK_n.AND2;

    /* DataStoreRead: '<S486>/J12B-X24-REQ' */
    rtb_J12BX24REQ = M_REQ_T_12_24;

    /* DataStoreRead: '<S486>/J12B-X24-L' */
    rtb_J12BX24L = M_L_T_12_24;

    /* Outputs for Atomic SubSystem: '<S486>/ROUTE CHECK' */
    M_T_S(rtb_J12BX24REQ, rtb_J12BX24L, &VITALMAIN_DW.ROUTECHECK_oe);

    /* End of Outputs for SubSystem: '<S486>/ROUTE CHECK' */

    /* DataStoreWrite: '<S486>/J12B-X24-H' */
    M_R_H_12_24 = VITALMAIN_DW.ROUTECHECK_oe.AND2;

    /* DataStoreRead: '<S487>/J14-J12A-REQ' */
    rtb_J14J12AREQ = M_REQ_T_14_12;

    /* DataStoreRead: '<S487>/J14-J12A-L' */
    rtb_J14J12AL = M_L_T_14_12;

    /* Outputs for Atomic SubSystem: '<S487>/ROUTE CHECK' */
    M_T_S(rtb_J14J12AREQ, rtb_J14J12AL, &VITALMAIN_DW.ROUTECHECK_i);

    /* End of Outputs for SubSystem: '<S487>/ROUTE CHECK' */

    /* DataStoreWrite: '<S487>/J14-J12A-D' */
    M_R_D_14_12 = VITALMAIN_DW.ROUTECHECK_i.AND2;

    /* DataStoreRead: '<S488>/J14-J22A-REQ' */
    rtb_J14J22AREQ = M_REQ_T_14_22;

    /* DataStoreRead: '<S488>/J14-J22A-L' */
    rtb_J14J22AL = M_L_T_14_22;

    /* Outputs for Atomic SubSystem: '<S488>/ROUTE CHECK' */
    M_T_S(rtb_J14J22AREQ, rtb_J14J22AL, &VITALMAIN_DW.ROUTECHECK_ny);

    /* End of Outputs for SubSystem: '<S488>/ROUTE CHECK' */

    /* DataStoreWrite: '<S488>/J14-J22A-D' */
    M_R_D_14_22 = VITALMAIN_DW.ROUTECHECK_ny.AND2;

    /* DataStoreRead: '<S489>/J22A-X10-REQ' */
    rtb_J22AX10REQ = M_REQ_T_22_10;

    /* DataStoreRead: '<S489>/J22A-X10-L' */
    rtb_J22AX10L = M_L_T_22_10;

    /* Outputs for Atomic SubSystem: '<S489>/ROUTE CHECK' */
    M_T_S(rtb_J22AX10REQ, rtb_J22AX10L, &VITALMAIN_DW.ROUTECHECK_p);

    /* End of Outputs for SubSystem: '<S489>/ROUTE CHECK' */

    /* DataStoreWrite: '<S489>/J22A-X10-H' */
    M_R_H_22_10 = VITALMAIN_DW.ROUTECHECK_p.AND2;

    /* DataStoreRead: '<S490>/J22A-X20-REQ' */
    rtb_J22AX20REQ = M_REQ_T_22_20;

    /* DataStoreRead: '<S490>/J22A-X20-L' */
    rtb_J22AX20L = M_L_T_22_20;

    /* Outputs for Atomic SubSystem: '<S490>/ROUTE CHECK' */
    M_T_S(rtb_J22AX20REQ, rtb_J22AX20L, &VITALMAIN_DW.ROUTECHECK_d);

    /* End of Outputs for SubSystem: '<S490>/ROUTE CHECK' */

    /* DataStoreWrite: '<S490>/J22A-X20-H' */
    M_R_H_22_20 = VITALMAIN_DW.ROUTECHECK_d.AND2;

    /* DataStoreRead: '<S491>/J22B-X14-REQ' */
    rtb_J22BX14REQ = M_REQ_T_22_14;

    /* DataStoreRead: '<S491>/J22B-X14-L' */
    rtb_J22BX14L = M_L_T_22_14;

    /* Outputs for Atomic SubSystem: '<S491>/ROUTE CHECK' */
    M_T_S(rtb_J22BX14REQ, rtb_J22BX14L, &VITALMAIN_DW.ROUTECHECK_nw);

    /* End of Outputs for SubSystem: '<S491>/ROUTE CHECK' */

    /* DataStoreWrite: '<S491>/J22B-X14-H' */
    M_R_H_22_14 = VITALMAIN_DW.ROUTECHECK_nw.AND2;

    /* DataStoreRead: '<S492>/J22B-X24-REQ' */
    rtb_J22BX24REQ = M_REQ_T_22_24;

    /* DataStoreRead: '<S492>/J22B-X24-L' */
    rtb_J22BX24L = M_L_T_22_24;

    /* Outputs for Atomic SubSystem: '<S492>/ROUTE CHECK' */
    M_T_S(rtb_J22BX24REQ, rtb_J22BX24L, &VITALMAIN_DW.ROUTECHECK_e);

    /* End of Outputs for SubSystem: '<S492>/ROUTE CHECK' */

    /* DataStoreWrite: '<S492>/J22B-X24-H' */
    M_R_H_22_24 = VITALMAIN_DW.ROUTECHECK_e.AND2;

    /* DataStoreRead: '<S493>/J24-J12A-REQ' */
    rtb_J24J12AREQ = M_REQ_T_24_12;

    /* DataStoreRead: '<S493>/J24-J12A-L' */
    rtb_J24J12AL = M_L_T_24_12;

    /* Outputs for Atomic SubSystem: '<S493>/ROUTE CHECK' */
    M_T_S(rtb_J24J12AREQ, rtb_J24J12AL, &VITALMAIN_DW.ROUTECHECK_dk);

    /* End of Outputs for SubSystem: '<S493>/ROUTE CHECK' */

    /* DataStoreWrite: '<S493>/J24-J12A-D' */
    M_R_D_24_12 = VITALMAIN_DW.ROUTECHECK_dk.AND2;

    /* DataStoreRead: '<S494>/J24-J22A-REQ' */
    rtb_J24J22AREQ = M_REQ_T_24_22;

    /* DataStoreRead: '<S494>/J24-J22A-L' */
    rtb_J24J22AL = M_L_T_24_22;

    /* Outputs for Atomic SubSystem: '<S494>/ROUTE CHECK' */
    M_T_S(rtb_J24J22AREQ, rtb_J24J22AL, &VITALMAIN_DW.ROUTECHECK_m);

    /* End of Outputs for SubSystem: '<S494>/ROUTE CHECK' */

    /* DataStoreWrite: '<S494>/J24-J22A-D' */
    M_R_D_24_22 = VITALMAIN_DW.ROUTECHECK_m.AND2;

    /* DataStoreRead: '<S495>/JL10-DEP-REQ' */
    rtb_JL10DEPREQ = M_REQ_S_10_DEP;

    /* DataStoreRead: '<S495>/JL10-DEP-S-L' */
    rtb_JL10DEPSL_m = M_L_S_10_DEP;

    /* Outputs for Atomic SubSystem: '<S495>/ROUTE CHECK' */
    M_T_S(rtb_JL10DEPREQ, rtb_JL10DEPSL_m, &VITALMAIN_DW.ROUTECHECK_dd);

    /* End of Outputs for SubSystem: '<S495>/ROUTE CHECK' */

    /* DataStoreWrite: '<S495>/JL10-DEP-S' */
    M_R_S_10_DEP = VITALMAIN_DW.ROUTECHECK_dd.AND2;

    /* DataStoreRead: '<S496>/JL10-J12B-REQ' */
    rtb_JL10J12BREQ = M_REQ_T_10_12;

    /* DataStoreRead: '<S496>/JL10-J12B-L' */
    rtb_JL10J12BL = M_L_T_10_12;

    /* Outputs for Atomic SubSystem: '<S496>/ROUTE CHECK' */
    M_T_S(rtb_JL10J12BREQ, rtb_JL10J12BL, &VITALMAIN_DW.ROUTECHECK_c);

    /* End of Outputs for SubSystem: '<S496>/ROUTE CHECK' */

    /* DataStoreWrite: '<S496>/JL10-J12B-D' */
    M_R_D_10_12 = VITALMAIN_DW.ROUTECHECK_c.AND2;

    /* DataStoreRead: '<S497>/JL10-J22B-REQ' */
    rtb_JL10J22BREQ = M_REQ_T_10_22;

    /* DataStoreRead: '<S497>/JL10-J22B-L' */
    rtb_JL10J22BL = M_L_T_10_22;

    /* Outputs for Atomic SubSystem: '<S497>/ROUTE CHECK' */
    M_T_S(rtb_JL10J22BREQ, rtb_JL10J22BL, &VITALMAIN_DW.ROUTECHECK_eu);

    /* End of Outputs for SubSystem: '<S497>/ROUTE CHECK' */

    /* DataStoreWrite: '<S497>/JL10-J22B-D' */
    M_R_D_10_22 = VITALMAIN_DW.ROUTECHECK_eu.AND2;

    /* DataStoreRead: '<S498>/JL20-DEP-REQ' */
    rtb_JL20DEPREQ = M_REQ_S_20_DEP;

    /* DataStoreRead: '<S498>/JL20-DEP-S-L' */
    rtb_JL20DEPSL_p = M_L_S_20_DEP;

    /* Outputs for Atomic SubSystem: '<S498>/ROUTE CHECK' */
    M_T_S(rtb_JL20DEPREQ, rtb_JL20DEPSL_p, &VITALMAIN_DW.ROUTECHECK_ii);

    /* End of Outputs for SubSystem: '<S498>/ROUTE CHECK' */

    /* DataStoreWrite: '<S498>/JL20-DEP-S' */
    M_R_S_20_DEP = VITALMAIN_DW.ROUTECHECK_ii.AND2;

    /* DataStoreRead: '<S499>/JL20-J12B-REQ' */
    rtb_JL20J12BREQ = M_REQ_T_20_12;

    /* DataStoreRead: '<S499>/JL20-J12B-L' */
    rtb_JL20J12BL = M_L_T_20_12;

    /* Outputs for Atomic SubSystem: '<S499>/ROUTE CHECK' */
    M_T_S(rtb_JL20J12BREQ, rtb_JL20J12BL, &VITALMAIN_DW.ROUTECHECK_o4);

    /* End of Outputs for SubSystem: '<S499>/ROUTE CHECK' */

    /* DataStoreWrite: '<S499>/JL20-J12B-D' */
    M_R_D_20_12 = VITALMAIN_DW.ROUTECHECK_o4.AND2;

    /* DataStoreRead: '<S500>/JL20-J22B-REQ' */
    rtb_JL20J22BREQ = M_REQ_T_20_22;

    /* DataStoreRead: '<S500>/JL20-J22B-L' */
    rtb_JL20J22BL = M_L_T_20_22;

    /* Outputs for Atomic SubSystem: '<S500>/ROUTE CHECK' */
    M_T_S(rtb_JL20J22BREQ, rtb_JL20J22BL, &VITALMAIN_DW.ROUTECHECK_ih);

    /* End of Outputs for SubSystem: '<S500>/ROUTE CHECK' */

    /* DataStoreWrite: '<S500>/JL20-J22B-D' */
    M_R_D_20_22 = VITALMAIN_DW.ROUTECHECK_ih.AND2;

    /* Logic: '<S521>/AND2' */
    rtb_AND2_at = (M_T_ES_21C && M_S_ES_21C);

    /* Logic: '<S521>/AND1' incorporates:
     *  DataStoreWrite: '<S365>/W21C-RWC'
     */
    rtb_AND1_m2 = (M_W11A_21A_NWC && M_W11B_21B_RWC &&
                   VITALMAIN_DW.POINTCONTROL_h.AND8);

    /* Logic: '<S521>/AND3' */
    rtb_AND3_hx = (DO_JL10_DR || DO_JL10_GR);

    /* DataStoreRead: '<S521>/21C-TP' */
    rtb_u1CTP_j = M_TP_21C;

    /* Outputs for Atomic SubSystem: '<S521>/ROUTE CONFLICT LOCK' */
    M_R_L(rtb_AND2_at, rtb_AND1_m2, rtb_AND3_hx, rtb_u1CTP_j,
          &VITALMAIN_DW.ROUTECONFLICTLOCK);

    /* End of Outputs for SubSystem: '<S521>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S521>/DEP-X10-S-L' */
    M_L_S_DEP_10 = VITALMAIN_DW.ROUTECONFLICTLOCK.AND1;

    /* Logic: '<S522>/AND2' */
    rtb_AND2_m = (M_T_ES_21C && M_S_ES_21C);

    /* Logic: '<S522>/AND1' incorporates:
     *  DataStoreWrite: '<S365>/W21C-RWC'
     */
    rtb_AND1_in = (M_W11A_21A_NWC && M_W11B_21B_NWC &&
                   VITALMAIN_DW.POINTCONTROL_h.AND8);

    /* Logic: '<S522>/AND3' */
    rtb_AND3_j = (DO_JL20_DR || DO_JL20_GR);

    /* DataStoreRead: '<S522>/21C-TP' */
    rtb_u1CTP_nj = M_TP_21C;

    /* Outputs for Atomic SubSystem: '<S522>/ROUTE CONFLICT LOCK' */
    M_R_L(rtb_AND2_m, rtb_AND1_in, rtb_AND3_j, rtb_u1CTP_nj,
          &VITALMAIN_DW.ROUTECONFLICTLOCK_e);

    /* End of Outputs for SubSystem: '<S522>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S522>/DEP-X20-S-L' */
    M_L_S_DEP_20 = VITALMAIN_DW.ROUTECONFLICTLOCK_e.AND1;

    /* DataStoreRead: '<S523>/11B-T-ES' */
    rtb_u1BTES_i = M_T_ES_11B;

    /* Logic: '<S523>/AND1' */
    rtb_AND1_bv = (M_W11B_21B_NWC && M_W11A_21A_NWC);

    /* Logic: '<S523>/OR1' */
    rtb_OR1_az = (DO_JL10_DR || DO_JL10_GR);

    /* Logic: '<S523>/AND3' */
    rtb_AND3_c = (M_TP_10A && M_TP_10B && M_TP_11A && M_TP_11B);

    /* Outputs for Atomic SubSystem: '<S523>/ROUTE CONFLICT LOCK' */
    M_R_L(rtb_u1BTES_i, rtb_AND1_bv, rtb_OR1_az, rtb_AND3_c,
          &VITALMAIN_DW.ROUTECONFLICTLOCK_m);

    /* End of Outputs for SubSystem: '<S523>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S523>/J12A-X10-T-L' */
    M_L_T_12_10 = VITALMAIN_DW.ROUTECONFLICTLOCK_m.AND1;

    /* DataStoreRead: '<S524>/11B-T-ES' */
    rtb_u1BTES_cc = M_T_ES_11B;

    /* Logic: '<S524>/AND1' */
    rtb_AND1_n5 = (M_W11B_21B_NWC && M_W11A_21A_RWC);

    /* Logic: '<S524>/AND2' */
    rtb_AND2_g = (DO_JL20_DR && DO_JL20_GR);

    /* Logic: '<S524>/AND3' */
    rtb_AND3_o = (M_TP_20A && M_TP_20B && M_TP_21A && M_TP_11A && M_TP_11B);

    /* Outputs for Atomic SubSystem: '<S524>/ROUTE CONFLICT LOCK' */
    M_R_L(rtb_u1BTES_cc, rtb_AND1_n5, rtb_AND2_g, rtb_AND3_o,
          &VITALMAIN_DW.ROUTECONFLICTLOCK_ma);

    /* End of Outputs for SubSystem: '<S524>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S524>/J12A-X20-T-L' */
    M_L_T_12_20 = VITALMAIN_DW.ROUTECONFLICTLOCK_ma.AND1;

    /* DataStoreRead: '<S525>/13A-T-WS' */
    rtb_u3ATWS_k = M_T_WS_13A;

    /* Logic: '<S525>/AND1' */
    rtb_AND1_pg = (M_W13A_23A_NWC && M_W13B_23B_NWC);

    /* DataStoreRead: '<S525>/J14-DR-DO' */
    rtb_J14DRDO_f = DO_J14_DR;

    /* Logic: '<S525>/AND3' */
    rtb_AND3_k = (M_TP_14B && M_TP_14A && M_TP_13B && M_TP_13A);

    /* Outputs for Atomic SubSystem: '<S525>/ROUTE CONFLICT LOCK' */
    M_R_L(rtb_u3ATWS_k, rtb_AND1_pg, rtb_J14DRDO_f, rtb_AND3_k,
          &VITALMAIN_DW.ROUTECONFLICTLOCK_d);

    /* End of Outputs for SubSystem: '<S525>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S525>/J12B-X14-T-L' */
    M_L_T_12_14 = VITALMAIN_DW.ROUTECONFLICTLOCK_d.AND1;

    /* DataStoreRead: '<S526>/13A-T-WS' */
    rtb_u3ATWS_i = M_T_WS_13A;

    /* Logic: '<S526>/AND1' */
    rtb_AND1_h1 = (M_W13A_23A_RWC && M_W13B_23B_NWC);

    /* DataStoreRead: '<S526>/J24-DR-DO' */
    rtb_J24DRDO_j = DO_J24_DR;

    /* Logic: '<S526>/AND3' */
    rtb_AND3_m = (M_TP_24B && M_TP_24A && M_TP_23B && M_TP_23A && M_TP_13A);

    /* Outputs for Atomic SubSystem: '<S526>/ROUTE CONFLICT LOCK' */
    M_R_L(rtb_u3ATWS_i, rtb_AND1_h1, rtb_J24DRDO_j, rtb_AND3_m,
          &VITALMAIN_DW.ROUTECONFLICTLOCK_i);

    /* End of Outputs for SubSystem: '<S526>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S526>/J12B-X24-T-L' */
    M_L_T_12_24 = VITALMAIN_DW.ROUTECONFLICTLOCK_i.AND1;

    /* DataStoreRead: '<S527>/14A-T-ES' */
    rtb_u4ATES_c = M_T_ES_14A;

    /* Logic: '<S527>/AND1' */
    rtb_AND1_e = (M_W13B_23B_NWC && M_W13A_23A_NWC);

    /* DataStoreRead: '<S527>/J12B-DR-DO' */
    rtb_J12BDRDO_c = DO_J12B_DR;

    /* Outputs for Atomic SubSystem: '<S527>/ROUTE CONFLICT LOCK' */
    M_R_L_2(rtb_u4ATES_c, rtb_AND1_e, rtb_J12BDRDO_c,
            &VITALMAIN_DW.ROUTECONFLICTLOCK_k);

    /* End of Outputs for SubSystem: '<S527>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S527>/J14-J12A-T-L' */
    M_L_T_14_12 = VITALMAIN_DW.ROUTECONFLICTLOCK_k.AND1;

    /* DataStoreRead: '<S528>/14A-T-ES' */
    rtb_u4ATES_o = M_T_ES_14A;

    /* Logic: '<S528>/AND1' */
    rtb_AND1_pl = (M_W13B_23B_RWC && M_W13A_23A_NWC);

    /* DataStoreRead: '<S528>/J22-DR-DO' */
    rtb_J22DRDO = DO_J22B_DR;

    /* Outputs for Atomic SubSystem: '<S528>/ROUTE CONFLICT LOCK' */
    M_R_L_2(rtb_u4ATES_o, rtb_AND1_pl, rtb_J22DRDO,
            &VITALMAIN_DW.ROUTECONFLICTLOCK_j);

    /* End of Outputs for SubSystem: '<S528>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S528>/J14-J22A-T-L' */
    M_L_T_14_22 = VITALMAIN_DW.ROUTECONFLICTLOCK_j.AND1;

    /* DataStoreRead: '<S529>/21C-T-ES' */
    rtb_u1CTES_a = M_T_ES_21C;

    /* Logic: '<S529>/AND1' incorporates:
     *  DataStoreWrite: '<S365>/W21C-NWC'
     */
    rtb_AND1_e1 = (M_W11B_21B_RWC && M_W11A_21A_NWC &&
                   VITALMAIN_DW.POINTCONTROL_h.AND7);

    /* Logic: '<S529>/OR1' */
    rtb_OR1_pi = (DO_JL10_DR || DO_JL10_GR);

    /* Logic: '<S529>/AND3' */
    rtb_AND3_ei = (M_TP_10A && M_TP_10B && M_TP_11A && M_TP_11B && M_TP_21B &&
                   M_TP_21C);

    /* Outputs for Atomic SubSystem: '<S529>/ROUTE CONFLICT LOCK' */
    M_R_L(rtb_u1CTES_a, rtb_AND1_e1, rtb_OR1_pi, rtb_AND3_ei,
          &VITALMAIN_DW.ROUTECONFLICTLOCK_mq);

    /* End of Outputs for SubSystem: '<S529>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S529>/J22A-X10-T-L' */
    M_L_T_22_10 = VITALMAIN_DW.ROUTECONFLICTLOCK_mq.AND1;

    /* DataStoreRead: '<S530>/21C-T-ES' */
    rtb_u1CTES_o = M_T_ES_21C;

    /* Logic: '<S530>/AND2' incorporates:
     *  DataStoreWrite: '<S365>/W21C-NWC'
     */
    rtb_AND2_h = (M_W11B_21B_NWC && M_W11A_21A_NWC &&
                  VITALMAIN_DW.POINTCONTROL_h.AND7);

    /* Logic: '<S530>/AND1' */
    rtb_AND1_pgg = (DO_JL20_DR && DO_JL20_GR);

    /* Logic: '<S530>/AND3' */
    rtb_AND3_ke = (M_TP_20A && M_TP_20B && M_TP_21A && M_TP_21B && M_TP_21C);

    /* Outputs for Atomic SubSystem: '<S530>/ROUTE CONFLICT LOCK' */
    M_R_L(rtb_u1CTES_o, rtb_AND2_h, rtb_AND1_pgg, rtb_AND3_ke,
          &VITALMAIN_DW.ROUTECONFLICTLOCK_f);

    /* End of Outputs for SubSystem: '<S530>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S530>/J22A-X20-T-L' */
    M_L_T_22_20 = VITALMAIN_DW.ROUTECONFLICTLOCK_f.AND1;

    /* DataStoreRead: '<S531>/23A-T-WS' */
    rtb_u3ATWS_p = M_T_WS_23A;

    /* Logic: '<S531>/AND1' */
    rtb_AND1_b4 = (M_W13A_23A_NWC && M_W13B_23B_RWC);

    /* DataStoreRead: '<S531>/J14-DR-DO' */
    rtb_J14DRDO_fl = DO_J14_DR;

    /* Logic: '<S531>/AND3' */
    rtb_AND3_hq = (M_TP_14B && M_TP_14A && M_TP_13B && M_TP_23B && M_TP_23A);

    /* Outputs for Atomic SubSystem: '<S531>/ROUTE CONFLICT LOCK' */
    M_R_L(rtb_u3ATWS_p, rtb_AND1_b4, rtb_J14DRDO_fl, rtb_AND3_hq,
          &VITALMAIN_DW.ROUTECONFLICTLOCK_p);

    /* End of Outputs for SubSystem: '<S531>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S531>/J22B-X14-T-L' */
    M_L_T_22_14 = VITALMAIN_DW.ROUTECONFLICTLOCK_p.AND1;

    /* DataStoreRead: '<S532>/23A-T-WS' */
    rtb_u3ATWS_a = M_T_WS_23A;

    /* Logic: '<S532>/AND1' */
    rtb_AND1_fd = (M_W13A_23A_NWC && M_W13B_23B_NWC);

    /* DataStoreRead: '<S532>/J24-DR-DO' */
    rtb_J24DRDO_e = DO_J24_DR;

    /* Logic: '<S532>/AND3' */
    rtb_AND3_dw = (M_TP_24B && M_TP_24A && M_TP_23B && M_TP_23A);

    /* Outputs for Atomic SubSystem: '<S532>/ROUTE CONFLICT LOCK' */
    M_R_L(rtb_u3ATWS_a, rtb_AND1_fd, rtb_J24DRDO_e, rtb_AND3_dw,
          &VITALMAIN_DW.ROUTECONFLICTLOCK_kc);

    /* End of Outputs for SubSystem: '<S532>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S532>/J22B-X24-T-L' */
    M_L_T_22_24 = VITALMAIN_DW.ROUTECONFLICTLOCK_kc.AND1;

    /* DataStoreRead: '<S533>/24A-T-ES' */
    rtb_u4ATES_p = M_T_ES_24A;

    /* Logic: '<S533>/AND1' */
    rtb_AND1_df = (M_W13B_23B_NWC && M_W13A_23A_RWC);

    /* DataStoreRead: '<S533>/J12B-DR-DO' */
    rtb_J12BDRDO_ct = DO_J12B_DR;

    /* Outputs for Atomic SubSystem: '<S533>/ROUTE CONFLICT LOCK' */
    M_R_L_2(rtb_u4ATES_p, rtb_AND1_df, rtb_J12BDRDO_ct,
            &VITALMAIN_DW.ROUTECONFLICTLOCK_g);

    /* End of Outputs for SubSystem: '<S533>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S533>/J24-J12A-T-L' */
    M_L_T_24_12 = VITALMAIN_DW.ROUTECONFLICTLOCK_g.AND1;

    /* DataStoreRead: '<S534>/24A-T-ES' */
    rtb_u4ATES_dt = M_T_ES_24A;

    /* Logic: '<S534>/AND1' */
    rtb_AND1_b3 = (M_W13B_23B_NWC && M_W13A_23A_NWC);

    /* DataStoreRead: '<S534>/J22B-DR-DO' */
    rtb_J22BDRDO_m = DO_J22B_DR;

    /* Outputs for Atomic SubSystem: '<S534>/ROUTE CONFLICT LOCK' */
    M_R_L_2(rtb_u4ATES_dt, rtb_AND1_b3, rtb_J22BDRDO_m,
            &VITALMAIN_DW.ROUTECONFLICTLOCK_a);

    /* End of Outputs for SubSystem: '<S534>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S534>/J24-J22A-T-L' */
    M_L_T_24_22 = VITALMAIN_DW.ROUTECONFLICTLOCK_a.AND1;

    /* Logic: '<S535>/AND2' */
    rtb_AND2_ar = (M_T_WS_10B && M_S_WS_10B);

    /* Logic: '<S535>/AND1' incorporates:
     *  DataStoreWrite: '<S365>/W21C-RWC'
     */
    rtb_AND1_po = (M_W11A_21A_NWC && M_W11B_21B_RWC &&
                   VITALMAIN_DW.POINTCONTROL_h.AND8);

    /* DataStoreRead: '<S535>/DEP-GR-DO' */
    rtb_DEPGRDO_d = M_DEP_GR_DO;

    /* DataStoreRead: '<S535>/10B-TP' */
    rtb_u0BTP_f = M_TP_10B;

    /* Outputs for Atomic SubSystem: '<S535>/ROUTE CONFLICT LOCK' */
    M_R_L(rtb_AND2_ar, rtb_AND1_po, rtb_DEPGRDO_d, rtb_u0BTP_f,
          &VITALMAIN_DW.ROUTECONFLICTLOCK_c);

    /* End of Outputs for SubSystem: '<S535>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S535>/JL10-DEP-S-L' */
    M_L_S_10_DEP = VITALMAIN_DW.ROUTECONFLICTLOCK_c.AND1;

    /* Logic: '<S536>/AND2' */
    rtb_AND2_j = (M_T_WS_10B && M_S_WS_10B);

    /* Logic: '<S536>/AND1' */
    rtb_AND1_pk = (M_W11A_21A_NWC && M_W11B_21B_NWC);

    /* DataStoreRead: '<S536>/J12A-DR-DO' */
    rtb_J12ADRDO_d = DO_J12A_DR;

    /* Outputs for Atomic SubSystem: '<S536>/ROUTE CONFLICT LOCK' */
    M_R_L_2(rtb_AND2_j, rtb_AND1_pk, rtb_J12ADRDO_d,
            &VITALMAIN_DW.ROUTECONFLICTLOCK_pj);

    /* End of Outputs for SubSystem: '<S536>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S536>/JL10-J12B-T-L' */
    M_L_T_10_12 = VITALMAIN_DW.ROUTECONFLICTLOCK_pj.AND1;

    /* Logic: '<S537>/AND2' */
    rtb_AND2_b4 = (M_T_WS_10B && M_S_WS_10B);

    /* Logic: '<S537>/AND1' incorporates:
     *  DataStoreWrite: '<S365>/W21C-NWC'
     */
    rtb_AND1_hc = (M_W11A_21A_NWC && M_W11B_21B_RWC &&
                   VITALMAIN_DW.POINTCONTROL_h.AND7);

    /* DataStoreRead: '<S537>/J22A-DR-DO' */
    rtb_J22ADRDO_l = DO_J22A_DR;

    /* Outputs for Atomic SubSystem: '<S537>/ROUTE CONFLICT LOCK' */
    M_R_L_2(rtb_AND2_b4, rtb_AND1_hc, rtb_J22ADRDO_l,
            &VITALMAIN_DW.ROUTECONFLICTLOCK_m4);

    /* End of Outputs for SubSystem: '<S537>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S537>/JL10-J22B-T-L' */
    M_L_T_10_22 = VITALMAIN_DW.ROUTECONFLICTLOCK_m4.AND1;

    /* Logic: '<S538>/AND2' */
    rtb_AND2_p = (M_T_WS_10B && M_S_WS_10B);

    /* Logic: '<S538>/AND1' incorporates:
     *  DataStoreWrite: '<S365>/W21C-RWC'
     */
    rtb_AND1_on = (M_W11A_21A_NWC && M_W11B_21B_NWC &&
                   VITALMAIN_DW.POINTCONTROL_h.AND8);

    /* DataStoreRead: '<S538>/DEP-GR-DO' */
    rtb_DEPGRDO_h = M_DEP_GR_DO;

    /* DataStoreRead: '<S538>/20B-TP' */
    rtb_u0BTP_dj = M_TP_20B;

    /* Outputs for Atomic SubSystem: '<S538>/ROUTE CONFLICT LOCK' */
    M_R_L(rtb_AND2_p, rtb_AND1_on, rtb_DEPGRDO_h, rtb_u0BTP_dj,
          &VITALMAIN_DW.ROUTECONFLICTLOCK_gf);

    /* End of Outputs for SubSystem: '<S538>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S538>/JL20-DEP-S-L' */
    M_L_S_20_DEP = VITALMAIN_DW.ROUTECONFLICTLOCK_gf.AND1;

    /* Logic: '<S539>/AND2' */
    rtb_AND2_i = (M_T_WS_20B && M_S_WS_20B);

    /* Logic: '<S539>/AND1' */
    rtb_AND1_o3 = (M_W11A_21A_RWC && M_W11B_21B_NWC);

    /* DataStoreRead: '<S539>/J12A-DR-DO' */
    rtb_J12ADRDO_f = DO_J12A_DR;

    /* Outputs for Atomic SubSystem: '<S539>/ROUTE CONFLICT LOCK' */
    M_R_L_2(rtb_AND2_i, rtb_AND1_o3, rtb_J12ADRDO_f,
            &VITALMAIN_DW.ROUTECONFLICTLOCK_ea);

    /* End of Outputs for SubSystem: '<S539>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S539>/JL20-J12B-T-L' */
    M_L_T_20_12 = VITALMAIN_DW.ROUTECONFLICTLOCK_ea.AND1;

    /* Logic: '<S540>/AND2' */
    rtb_AND2_h1 = (M_T_WS_20B && M_S_WS_20B);

    /* Logic: '<S540>/AND1' incorporates:
     *  DataStoreWrite: '<S365>/W21C-NWC'
     */
    rtb_AND1_i4 = (M_W11A_21A_NWC && M_W11B_21B_NWC &&
                   VITALMAIN_DW.POINTCONTROL_h.AND7);

    /* DataStoreRead: '<S540>/J22A-DR-DO' */
    rtb_J22ADRDO_n = DO_J22A_DR;

    /* Outputs for Atomic SubSystem: '<S540>/ROUTE CONFLICT LOCK' */
    M_R_L_2(rtb_AND2_h1, rtb_AND1_i4, rtb_J22ADRDO_n,
            &VITALMAIN_DW.ROUTECONFLICTLOCK_i1);

    /* End of Outputs for SubSystem: '<S540>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S540>/JL20-J22B-T-L' */
    M_L_T_20_22 = VITALMAIN_DW.ROUTECONFLICTLOCK_i1.AND1;

    /* DataStoreRead: '<S561>/10B-S-ES-RL' */
    rtb_u0BSESRL = M_RL_S_ES_10B;

    /* DataStoreRead: '<S561>/10B-TP' */
    rtb_u0BTP_b = M_TP_10B;

    /* DataStoreRead: '<S561>/10B-RLS' */
    rtb_u0BRLS = M_RLS_10B;

    /* Outputs for Atomic SubSystem: '<S561>/ROUTE LOCK2' */
    M_ES_WS(rtb_u0BSESRL, rtb_u0BTP_b, rtb_u0BRLS, &VITALMAIN_DW.ROUTELOCK2);

    /* End of Outputs for SubSystem: '<S561>/ROUTE LOCK2' */

    /* DataStoreWrite: '<S561>/10B-S-ES' */
    M_S_ES_10B = VITALMAIN_DW.ROUTELOCK2.AND1;

    /* DataStoreRead: '<S561>/10B-T-ES-RL' */
    rtb_u0BTESRL = M_RL_T_ES_10B;

    /* Outputs for Atomic SubSystem: '<S561>/ROUTE LOCK1' */
    M_ES_WS(rtb_u0BTESRL, rtb_u0BTP_b, rtb_u0BRLS, &VITALMAIN_DW.ROUTELOCK1);

    /* End of Outputs for SubSystem: '<S561>/ROUTE LOCK1' */

    /* DataStoreWrite: '<S561>/10B-T-ES' */
    M_T_ES_10B = VITALMAIN_DW.ROUTELOCK1.AND1;

    /* DataStoreRead: '<S562>/10B-S-WS' */
    rtb_u0BSWS_b = M_S_WS_10B;

    /* DataStoreRead: '<S562>/10A-TP' */
    rtb_u0ATP_k = M_TP_10A;

    /* DataStoreRead: '<S562>/10A-RLS' */
    rtb_u0ARLS = M_RLS_10A;

    /* Outputs for Atomic SubSystem: '<S562>/ROUTE LOCK2' */
    M_ES_WS(rtb_u0BSWS_b, rtb_u0ATP_k, rtb_u0ARLS, &VITALMAIN_DW.ROUTELOCK2_p);

    /* End of Outputs for SubSystem: '<S562>/ROUTE LOCK2' */

    /* DataStoreWrite: '<S562>/10A-S-WS' */
    M_S_WS_10A = VITALMAIN_DW.ROUTELOCK2_p.AND1;

    /* DataStoreRead: '<S562>/10B-T-WS' */
    rtb_u0BTWS_a = M_T_WS_10B;

    /* Outputs for Atomic SubSystem: '<S562>/ROUTE LOCK1' */
    M_ES_WS(rtb_u0BTWS_a, rtb_u0ATP_k, rtb_u0ARLS, &VITALMAIN_DW.ROUTELOCK1_n);

    /* End of Outputs for SubSystem: '<S562>/ROUTE LOCK1' */

    /* DataStoreWrite: '<S562>/10A-T-WS' */
    M_T_WS_10A = VITALMAIN_DW.ROUTELOCK1_n.AND1;

    /* DataStoreRead: '<S563>/20B-S-WS' */
    rtb_u0BSWS_bf = M_S_WS_20B;

    /* DataStoreRead: '<S563>/20A-TP' */
    rtb_u0ATP_p = M_TP_20A;

    /* DataStoreRead: '<S563>/20A-RLS' */
    rtb_u0ARLS_m = M_RLS_20A;

    /* Outputs for Atomic SubSystem: '<S563>/ROUTE LOCK2' */
    M_ES_WS(rtb_u0BSWS_bf, rtb_u0ATP_p, rtb_u0ARLS_m, &VITALMAIN_DW.ROUTELOCK2_e);

    /* End of Outputs for SubSystem: '<S563>/ROUTE LOCK2' */

    /* DataStoreWrite: '<S563>/20A-S-ES' */
    M_S_WS_20A = VITALMAIN_DW.ROUTELOCK2_e.AND1;

    /* DataStoreRead: '<S563>/20B-T-WS' */
    rtb_u0BTWS_j = M_T_WS_20B;

    /* Outputs for Atomic SubSystem: '<S563>/ROUTE LOCK1' */
    M_ES_WS(rtb_u0BTWS_j, rtb_u0ATP_p, rtb_u0ARLS_m, &VITALMAIN_DW.ROUTELOCK1_b);

    /* End of Outputs for SubSystem: '<S563>/ROUTE LOCK1' */

    /* DataStoreWrite: '<S563>/20A-T-WS' */
    M_T_WS_20A = VITALMAIN_DW.ROUTELOCK1_b.AND1;

    /* DataStoreRead: '<S564>/12B-T-WS' */
    rtb_u2BTWS_e = M_T_WS_12B;

    /* DataStoreRead: '<S564>/12A-TP' */
    rtb_u2ATP_n = M_TP_12A;

    /* DataStoreRead: '<S564>/12A-RLS' */
    rtb_u2ARLS = M_RLS_12A;

    /* Outputs for Atomic SubSystem: '<S564>/ROUTE LOCK' */
    M_ES_WS(rtb_u2BTWS_e, rtb_u2ATP_n, rtb_u2ARLS, &VITALMAIN_DW.ROUTELOCK);

    /* End of Outputs for SubSystem: '<S564>/ROUTE LOCK' */

    /* DataStoreWrite: '<S564>/12A-T-WS' */
    M_T_WS_12A = VITALMAIN_DW.ROUTELOCK.AND1;

    /* DataStoreRead: '<S565>/22B-T-WS' */
    rtb_u2BTWS_n = M_T_WS_22B;

    /* DataStoreRead: '<S565>/22A-TP' */
    rtb_u2ATP_p = M_TP_22A;

    /* DataStoreRead: '<S565>/22A-RLS' */
    rtb_u2ARLS_p = M_RLS_22A;

    /* Outputs for Atomic SubSystem: '<S565>/ROUTE LOCK' */
    M_ES_WS(rtb_u2BTWS_n, rtb_u2ATP_p, rtb_u2ARLS_p, &VITALMAIN_DW.ROUTELOCK_l);

    /* End of Outputs for SubSystem: '<S565>/ROUTE LOCK' */

    /* DataStoreWrite: '<S565>/20A-T-WS' */
    M_T_WS_22A = VITALMAIN_DW.ROUTELOCK_l.AND1;

    /* DataStoreRead: '<S566>/12D-T-ES' */
    rtb_u2DTES_l = M_T_ES_12D;

    /* DataStoreRead: '<S566>/12E-TP' */
    rtb_u2ETP_h = M_TP_12E;

    /* DataStoreRead: '<S566>/12E-RLS' */
    rtb_u2ERLS = M_RLS_12E;

    /* Outputs for Atomic SubSystem: '<S566>/ROUTE LOCK' */
    M_ES_WS(rtb_u2DTES_l, rtb_u2ETP_h, rtb_u2ERLS, &VITALMAIN_DW.ROUTELOCK_n);

    /* End of Outputs for SubSystem: '<S566>/ROUTE LOCK' */

    /* DataStoreWrite: '<S566>/12E-T-ES' */
    M_T_ES_12E = VITALMAIN_DW.ROUTELOCK_n.AND1;

    /* DataStoreRead: '<S567>/22D-T-ES' */
    rtb_u2DTES_f = M_T_ES_22D;

    /* DataStoreRead: '<S567>/22E-TP' */
    rtb_u2ETP_p = M_TP_22E;

    /* DataStoreRead: '<S567>/22E-RLS' */
    rtb_u2ERLS_a = M_RLS_22E;

    /* Outputs for Atomic SubSystem: '<S567>/ROUTE LOCK' */
    M_ES_WS(rtb_u2DTES_f, rtb_u2ETP_p, rtb_u2ERLS_a, &VITALMAIN_DW.ROUTELOCK_p);

    /* End of Outputs for SubSystem: '<S567>/ROUTE LOCK' */

    /* DataStoreWrite: '<S567>/22E-T-ES' */
    M_T_ES_22E = VITALMAIN_DW.ROUTELOCK_p.AND1;

    /* DataStoreRead: '<S568>/14A-T-ES' */
    rtb_u4ATES_k = M_T_ES_14A;

    /* DataStoreRead: '<S568>/14B-TP' */
    rtb_u4BTP_im = M_TP_14B;

    /* DataStoreRead: '<S568>/14B-RLS' */
    rtb_u4BRLS = M_RLS_14B;

    /* Outputs for Atomic SubSystem: '<S568>/ROUTE LOCK' */
    M_ES_WS(rtb_u4ATES_k, rtb_u4BTP_im, rtb_u4BRLS, &VITALMAIN_DW.ROUTELOCK_i);

    /* End of Outputs for SubSystem: '<S568>/ROUTE LOCK' */

    /* DataStoreWrite: '<S568>/14B-T-ES' */
    M_T_ES_14B = VITALMAIN_DW.ROUTELOCK_i.AND1;

    /* DataStoreRead: '<S569>/24A-T-ES' */
    rtb_u4ATES_l = M_T_ES_24A;

    /* DataStoreRead: '<S569>/24B-TP' */
    rtb_u4BTP_b = M_TP_24B;

    /* DataStoreRead: '<S569>/24B-RLS' */
    rtb_u4BRLS_p = M_RLS_24B;

    /* Outputs for Atomic SubSystem: '<S569>/ROUTE LOCK' */
    M_ES_WS(rtb_u4ATES_l, rtb_u4BTP_b, rtb_u4BRLS_p, &VITALMAIN_DW.ROUTELOCK_k);

    /* End of Outputs for SubSystem: '<S569>/ROUTE LOCK' */

    /* DataStoreWrite: '<S569>/24B-T-ES' */
    M_T_ES_24B = VITALMAIN_DW.ROUTELOCK_k.AND1;

    /* Logic: '<S570>/OR2' */
    rtb_OR2_l = (M_W11A_21A_RWZ || M_S_WS_11A);

    /* DataStoreRead: '<S570>/10B-TP' */
    rtb_u0BTP_fu = M_TP_10B;

    /* DataStoreRead: '<S570>/10B-RLS' */
    rtb_u0BRLS_e = M_RLS_10B;

    /* Outputs for Atomic SubSystem: '<S570>/ROUTE LOCK2' */
    M_ES_WS(rtb_OR2_l, rtb_u0BTP_fu, rtb_u0BRLS_e, &VITALMAIN_DW.ROUTELOCK2_d);

    /* End of Outputs for SubSystem: '<S570>/ROUTE LOCK2' */

    /* DataStoreWrite: '<S570>/10B-S-WS' */
    M_S_WS_10B = VITALMAIN_DW.ROUTELOCK2_d.AND1;

    /* Logic: '<S570>/OR1' */
    rtb_OR1_f1 = (M_T_WS_11A || M_W11A_21A_RWZ);

    /* Outputs for Atomic SubSystem: '<S570>/ROUTE LOCK1' */
    M_ES_WS(rtb_OR1_f1, rtb_u0BTP_fu, rtb_u0BRLS_e, &VITALMAIN_DW.ROUTELOCK1_c);

    /* End of Outputs for SubSystem: '<S570>/ROUTE LOCK1' */

    /* DataStoreWrite: '<S570>/10B-T-WS' */
    M_T_WS_10B = VITALMAIN_DW.ROUTELOCK1_c.AND1;

    /* Logic: '<S571>/OR2' incorporates:
     *  Logic: '<S571>/OR1'
     */
    rtb_OR2_j = (M_T_ES_10B && (M_T_ES_21A || M_W11A_21A_NWZ));

    /* DataStoreRead: '<S571>/11A-TP' */
    rtb_u1ATP_nv = M_TP_11A;

    /* DataStoreRead: '<S571>/11A-RLS' */
    rtb_u1ARLS = M_RLS_11A;

    /* Outputs for Atomic SubSystem: '<S571>/ROUTE LOCK1' */
    M_ES_WS(rtb_OR2_j, rtb_u1ATP_nv, rtb_u1ARLS, &VITALMAIN_DW.ROUTELOCK1_j);

    /* End of Outputs for SubSystem: '<S571>/ROUTE LOCK1' */

    /* DataStoreWrite: '<S571>/11A-S-ES' */
    M_T_ES_11A = VITALMAIN_DW.ROUTELOCK1_j.AND1;

    /* DataStoreRead: '<S571>/10B-S-ES' */
    rtb_u0BSES = M_S_ES_10B;

    /* Outputs for Atomic SubSystem: '<S571>/ROUTE LOCK2' */
    M_ES_WS(rtb_u0BSES, rtb_u1ATP_nv, rtb_u1ARLS, &VITALMAIN_DW.ROUTELOCK2_a);

    /* End of Outputs for SubSystem: '<S571>/ROUTE LOCK2' */

    /* DataStoreWrite: '<S571>/11A-T-ES' */
    M_S_ES_11A = VITALMAIN_DW.ROUTELOCK2_a.AND1;

    /* DataStoreRead: '<S572>/11B-S-WS' */
    rtb_u1BSWS_k0 = M_S_WS_11B;

    /* DataStoreRead: '<S572>/11A-TP' */
    rtb_u1ATP_ar = M_TP_11A;

    /* DataStoreRead: '<S572>/11A-RLS' */
    rtb_u1ARLS_n = M_RLS_11A;

    /* Outputs for Atomic SubSystem: '<S572>/ROUTE LOCK2' */
    M_ES_WS(rtb_u1BSWS_k0, rtb_u1ATP_ar, rtb_u1ARLS_n,
            &VITALMAIN_DW.ROUTELOCK2_pm);

    /* End of Outputs for SubSystem: '<S572>/ROUTE LOCK2' */

    /* DataStoreWrite: '<S572>/11A-S-WS' */
    M_S_WS_11A = VITALMAIN_DW.ROUTELOCK2_pm.AND1;

    /* DataStoreRead: '<S572>/11B-T-WS' */
    rtb_u1BTWS_hl = M_T_WS_11B;

    /* Outputs for Atomic SubSystem: '<S572>/ROUTE LOCK1' */
    M_ES_WS(rtb_u1BTWS_hl, rtb_u1ATP_ar, rtb_u1ARLS_n,
            &VITALMAIN_DW.ROUTELOCK1_i);

    /* End of Outputs for SubSystem: '<S572>/ROUTE LOCK1' */

    /* DataStoreWrite: '<S572>/11A-T-ES' */
    M_T_WS_11A = VITALMAIN_DW.ROUTELOCK1_i.AND1;

    /* DataStoreRead: '<S573>/11A-S-ES' */
    rtb_u1ASES_j = M_S_ES_11A;

    /* DataStoreRead: '<S573>/11B-TP' */
    rtb_u1BTP_gg = M_TP_11B;

    /* DataStoreRead: '<S573>/11B-RLS' */
    rtb_u1BRLS = M_RLS_11B;

    /* Outputs for Atomic SubSystem: '<S573>/ROUTE LOCK2' */
    M_ES_WS(rtb_u1ASES_j, rtb_u1BTP_gg, rtb_u1BRLS, &VITALMAIN_DW.ROUTELOCK2_n);

    /* End of Outputs for SubSystem: '<S573>/ROUTE LOCK2' */

    /* DataStoreWrite: '<S573>/11B-S-ES' */
    M_S_ES_11B = VITALMAIN_DW.ROUTELOCK2_n.AND1;

    /* DataStoreRead: '<S573>/11A-T-ES' */
    rtb_u1ATES_d = M_T_ES_11A;

    /* Outputs for Atomic SubSystem: '<S573>/ROUTE LOCK1' */
    M_ES_WS(rtb_u1ATES_d, rtb_u1BTP_gg, rtb_u1BRLS, &VITALMAIN_DW.ROUTELOCK1_ir);

    /* End of Outputs for SubSystem: '<S573>/ROUTE LOCK1' */

    /* DataStoreWrite: '<S573>/11B-T-ES' */
    M_T_ES_11B = VITALMAIN_DW.ROUTELOCK1_ir.AND1;

    /* Logic: '<S574>/OR3' */
    rtb_OR3 = (M_W11B_21B_NWZ || M_S_WS_21B);

    /* DataStoreRead: '<S574>/11B-TP' */
    rtb_u1BTP_po = M_TP_11B;

    /* DataStoreRead: '<S574>/11B-RLS' */
    rtb_u1BRLS_k = M_RLS_11B;

    /* Outputs for Atomic SubSystem: '<S574>/ROUTE LOCK2' */
    M_ES_WS(rtb_OR3, rtb_u1BTP_po, rtb_u1BRLS_k, &VITALMAIN_DW.ROUTELOCK2_a5);

    /* End of Outputs for SubSystem: '<S574>/ROUTE LOCK2' */

    /* DataStoreWrite: '<S574>/11B-S-WS' */
    M_S_WS_11B = VITALMAIN_DW.ROUTELOCK2_a5.AND1;

    /* Logic: '<S574>/OR2' incorporates:
     *  Logic: '<S574>/OR1'
     */
    rtb_OR2_i = (M_RL_T_WS_11B && (M_T_WS_21B || M_W11B_21B_NWZ));

    /* Outputs for Atomic SubSystem: '<S574>/ROUTE LOCK1' */
    M_ES_WS(rtb_OR2_i, rtb_u1BTP_po, rtb_u1BRLS_k, &VITALMAIN_DW.ROUTELOCK1_p);

    /* End of Outputs for SubSystem: '<S574>/ROUTE LOCK1' */

    /* DataStoreWrite: '<S574>/11B-T-WS' */
    M_T_WS_11B = VITALMAIN_DW.ROUTELOCK1_p.AND1;

    /* Logic: '<S575>/OR1' */
    rtb_OR1_d = (M_T_ES_11B || M_W11B_21B_RWZ);

    /* DataStoreRead: '<S575>/12A-TP' */
    rtb_u2ATP_m = M_TP_12A;

    /* DataStoreRead: '<S575>/12A-RLS' */
    rtb_u2ARLS_n = M_RLS_12A;

    /* Outputs for Atomic SubSystem: '<S575>/ROUTE LOCK' */
    M_ES_WS(rtb_OR1_d, rtb_u2ATP_m, rtb_u2ARLS_n, &VITALMAIN_DW.ROUTELOCK_c);

    /* End of Outputs for SubSystem: '<S575>/ROUTE LOCK' */

    /* DataStoreWrite: '<S575>/12A-T-ES' */
    M_T_ES_12A = VITALMAIN_DW.ROUTELOCK_c.AND1;

    /* DataStoreRead: '<S576>/12A-T-ES' incorporates:
     *  DataStoreWrite: '<S575>/12A-T-ES'
     */
    rtb_u2ATES = VITALMAIN_DW.ROUTELOCK_c.AND1;

    /* DataStoreRead: '<S576>/12B-TP' */
    rtb_u2BTP = M_TP_12B;

    /* DataStoreRead: '<S576>/12B-RLS' */
    rtb_u2BRLS = M_RLS_12B;

    /* Outputs for Atomic SubSystem: '<S576>/ROUTE LOCK' */
    M_ES_WS(rtb_u2ATES, rtb_u2BTP, rtb_u2BRLS, &VITALMAIN_DW.ROUTELOCK_d);

    /* End of Outputs for SubSystem: '<S576>/ROUTE LOCK' */

    /* DataStoreWrite: '<S576>/12B-T-ES' */
    M_T_ES_12B = VITALMAIN_DW.ROUTELOCK_d.AND1;

    /* DataStoreRead: '<S577>/12C-T-WS' */
    rtb_u2CTWS = M_T_WS_12C;

    /* DataStoreRead: '<S577>/12B-TP' */
    rtb_u2BTP_g = M_TP_12B;

    /* DataStoreRead: '<S577>/12B-RLS' */
    rtb_u2BRLS_b = M_RLS_12B;

    /* Outputs for Atomic SubSystem: '<S577>/ROUTE LOCK' */
    M_ES_WS(rtb_u2CTWS, rtb_u2BTP_g, rtb_u2BRLS_b, &VITALMAIN_DW.ROUTELOCK_pd);

    /* End of Outputs for SubSystem: '<S577>/ROUTE LOCK' */

    /* DataStoreWrite: '<S577>/12B-T-WS' */
    M_T_WS_12B = VITALMAIN_DW.ROUTELOCK_pd.AND1;

    /* DataStoreRead: '<S578>/12B-T-ES' */
    rtb_u2BTES = M_T_ES_12B;

    /* DataStoreRead: '<S578>/12C-TP' */
    rtb_u2CTP = M_TP_12C;

    /* DataStoreRead: '<S578>/12C-RLS' */
    rtb_u2CRLS = M_RLS_12C;

    /* Outputs for Atomic SubSystem: '<S578>/ROUTE LOCK' */
    M_ES_WS(rtb_u2BTES, rtb_u2CTP, rtb_u2CRLS, &VITALMAIN_DW.ROUTELOCK_e);

    /* End of Outputs for SubSystem: '<S578>/ROUTE LOCK' */

    /* DataStoreWrite: '<S578>/12C-T-ES' */
    M_T_ES_12C = VITALMAIN_DW.ROUTELOCK_e.AND1;

    /* DataStoreRead: '<S579>/12D-T-WS' */
    rtb_u2DTWS = M_T_WS_12D;

    /* DataStoreRead: '<S579>/12C-TP' */
    rtb_u2CTP_n = M_TP_12C;

    /* DataStoreRead: '<S579>/12C-RLS' */
    rtb_u2CRLS_k = M_RLS_12C;

    /* Outputs for Atomic SubSystem: '<S579>/ROUTE LOCK' */
    M_ES_WS(rtb_u2DTWS, rtb_u2CTP_n, rtb_u2CRLS_k, &VITALMAIN_DW.ROUTELOCK_a);

    /* End of Outputs for SubSystem: '<S579>/ROUTE LOCK' */

    /* DataStoreWrite: '<S579>/12C-T-WS' */
    M_T_WS_12C = VITALMAIN_DW.ROUTELOCK_a.AND1;

    /* DataStoreRead: '<S580>/12C-T-ES' */
    rtb_u2CTES = M_T_ES_12C;

    /* DataStoreRead: '<S580>/12D-TP' */
    rtb_u2DTP = M_TP_12D;

    /* DataStoreRead: '<S580>/12D-RLS' */
    rtb_u2DRLS = M_RLS_12D;

    /* Outputs for Atomic SubSystem: '<S580>/ROUTE LOCK' */
    M_ES_WS(rtb_u2CTES, rtb_u2DTP, rtb_u2DRLS, &VITALMAIN_DW.ROUTELOCK_ew);

    /* End of Outputs for SubSystem: '<S580>/ROUTE LOCK' */

    /* DataStoreWrite: '<S580>/12D-T-ES' */
    M_T_ES_12D = VITALMAIN_DW.ROUTELOCK_ew.AND1;

    /* DataStoreRead: '<S581>/12E-T-WS' */
    rtb_u2ETWS = M_T_WS_12E;

    /* DataStoreRead: '<S581>/12D-TP' */
    rtb_u2DTP_a = M_TP_12D;

    /* DataStoreRead: '<S581>/12D-RLS' */
    rtb_u2DRLS_d = M_RLS_12D;

    /* Outputs for Atomic SubSystem: '<S581>/ROUTE LOCK' */
    M_ES_WS(rtb_u2ETWS, rtb_u2DTP_a, rtb_u2DRLS_d, &VITALMAIN_DW.ROUTELOCK_dm);

    /* End of Outputs for SubSystem: '<S581>/ROUTE LOCK' */

    /* DataStoreWrite: '<S581>/12D-T-WS' */
    M_T_WS_12D = VITALMAIN_DW.ROUTELOCK_dm.AND1;

    /* DataStoreRead: '<S582>/13A-T-WS' */
    rtb_u3ATWS_b = M_T_WS_13A;

    /* DataStoreRead: '<S582>/12E-TP' */
    rtb_u2ETP_c = M_TP_12E;

    /* DataStoreRead: '<S582>/12E-RLS' */
    rtb_u2ERLS_f = M_RLS_12E;

    /* Outputs for Atomic SubSystem: '<S582>/ROUTE LOCK' */
    M_ES_WS(rtb_u3ATWS_b, rtb_u2ETP_c, rtb_u2ERLS_f, &VITALMAIN_DW.ROUTELOCK_ep);

    /* End of Outputs for SubSystem: '<S582>/ROUTE LOCK' */

    /* DataStoreWrite: '<S582>/12E-T-WS' */
    M_T_WS_12E = VITALMAIN_DW.ROUTELOCK_ep.AND1;

    /* DataStoreRead: '<S583>/13A-T-ES-RL' */
    rtb_u3ATESRL = M_RL_T_ES_13A;

    /* DataStoreRead: '<S583>/13A-TP' */
    rtb_u3ATP_i = M_TP_13A;

    /* DataStoreRead: '<S583>/13A-RLS' */
    rtb_u3ARLS = M_RLS_13A;

    /* Outputs for Atomic SubSystem: '<S583>/ROUTE LOCK' */
    M_ES_WS(rtb_u3ATESRL, rtb_u3ATP_i, rtb_u3ARLS, &VITALMAIN_DW.ROUTELOCK_kf);

    /* End of Outputs for SubSystem: '<S583>/ROUTE LOCK' */

    /* DataStoreWrite: '<S583>/13A-T-ES' */
    M_T_ES_13A = VITALMAIN_DW.ROUTELOCK_kf.AND1;

    /* Logic: '<S584>/AND1' incorporates:
     *  Logic: '<S584>/OR1'
     *  Logic: '<S584>/OR3'
     */
    rtb_AND1_bs = ((M_T_WS_13B || M_W13B_23B_RWZ) && (M_T_WS_23A ||
      M_W13A_23A_NWZ));

    /* DataStoreRead: '<S584>/13A-TP' */
    rtb_u3ATP_e = M_TP_13A;

    /* DataStoreRead: '<S584>/13A-RLS' */
    rtb_u3ARLS_l = M_RLS_13A;

    /* Outputs for Atomic SubSystem: '<S584>/ROUTE LOCK' */
    M_ES_WS(rtb_AND1_bs, rtb_u3ATP_e, rtb_u3ARLS_l, &VITALMAIN_DW.ROUTELOCK_ii);

    /* End of Outputs for SubSystem: '<S584>/ROUTE LOCK' */

    /* DataStoreWrite: '<S584>/13A-T-WS' */
    M_T_WS_13A = VITALMAIN_DW.ROUTELOCK_ii.AND1;

    /* Logic: '<S585>/AND1' incorporates:
     *  Logic: '<S585>/OR1'
     *  Logic: '<S585>/OR2'
     */
    rtb_AND1_di = ((M_T_ES_13A || M_W13A_23A_RWZ) && (M_T_ES_23B ||
      M_W13B_23B_NWZ));

    /* DataStoreRead: '<S585>/13B-TP' */
    rtb_u3BTP_o = M_TP_13B;

    /* DataStoreRead: '<S585>/13B-RLS' */
    rtb_u3BRLS = M_RLS_13B;

    /* Outputs for Atomic SubSystem: '<S585>/ROUTE LOCK' */
    M_ES_WS(rtb_AND1_di, rtb_u3BTP_o, rtb_u3BRLS, &VITALMAIN_DW.ROUTELOCK_p5);

    /* End of Outputs for SubSystem: '<S585>/ROUTE LOCK' */

    /* DataStoreWrite: '<S585>/13B-T-ES' */
    M_T_ES_13B = VITALMAIN_DW.ROUTELOCK_p5.AND1;

    /* DataStoreRead: '<S586>/14A-T-WS' */
    rtb_u4ATWS = M_T_WS_14A;

    /* DataStoreRead: '<S586>/13B-TP' */
    rtb_u3BTP_f = M_TP_13B;

    /* DataStoreRead: '<S586>/13B-RLS' */
    rtb_u3BRLS_j = M_RLS_13B;

    /* Outputs for Atomic SubSystem: '<S586>/ROUTE LOCK' */
    M_ES_WS(rtb_u4ATWS, rtb_u3BTP_f, rtb_u3BRLS_j, &VITALMAIN_DW.ROUTELOCK_i1);

    /* End of Outputs for SubSystem: '<S586>/ROUTE LOCK' */

    /* DataStoreWrite: '<S586>/13B-T-WS' */
    M_T_WS_13B = VITALMAIN_DW.ROUTELOCK_i1.AND1;

    /* DataStoreRead: '<S587>/13B-T-ES' */
    rtb_u3BTES_h = M_T_ES_13B;

    /* DataStoreRead: '<S587>/14A-TP' */
    rtb_u4ATP_g = M_TP_14A;

    /* DataStoreRead: '<S587>/14A-RLS' */
    rtb_u4ARLS = M_RLS_14A;

    /* Outputs for Atomic SubSystem: '<S587>/ROUTE LOCK' */
    M_ES_WS(rtb_u3BTES_h, rtb_u4ATP_g, rtb_u4ARLS, &VITALMAIN_DW.ROUTELOCK_g);

    /* End of Outputs for SubSystem: '<S587>/ROUTE LOCK' */

    /* DataStoreWrite: '<S587>/14A-T-ES' */
    M_T_ES_14A = VITALMAIN_DW.ROUTELOCK_g.AND1;

    /* DataStoreRead: '<S588>/14-T-WS-RL' */
    rtb_u4TWSRL = M_RL_T_WS_14A;

    /* DataStoreRead: '<S588>/14A-TP' */
    rtb_u4ATP_m = M_TP_14A;

    /* DataStoreRead: '<S588>/14A-RLS' */
    rtb_u4ARLS_c = M_RLS_14A;

    /* Outputs for Atomic SubSystem: '<S588>/ROUTE LOCK' */
    M_ES_WS(rtb_u4TWSRL, rtb_u4ATP_m, rtb_u4ARLS_c, &VITALMAIN_DW.ROUTELOCK_gn);

    /* End of Outputs for SubSystem: '<S588>/ROUTE LOCK' */

    /* DataStoreWrite: '<S588>/14A-T-WS' */
    M_T_WS_14A = VITALMAIN_DW.ROUTELOCK_gn.AND1;

    /* DataStoreRead: '<S589>/20B-S-ES-RL' */
    rtb_u0BSESRL_l = M_RL_S_ES_20B;

    /* DataStoreRead: '<S589>/20B-TP' */
    rtb_u0BTP_e = M_TP_20B;

    /* DataStoreRead: '<S589>/20B-RLS' */
    rtb_u0BRLS_p = M_RLS_20B;

    /* Outputs for Atomic SubSystem: '<S589>/ROUTE LOCK2' */
    M_ES_WS(rtb_u0BSESRL_l, rtb_u0BTP_e, rtb_u0BRLS_p,
            &VITALMAIN_DW.ROUTELOCK2_l);

    /* End of Outputs for SubSystem: '<S589>/ROUTE LOCK2' */

    /* DataStoreWrite: '<S589>/20B-S-ES' */
    M_S_ES_20B = VITALMAIN_DW.ROUTELOCK2_l.AND1;

    /* DataStoreRead: '<S589>/20B-T-ES-RL' */
    rtb_u0BTESRL_m = M_RL_T_ES_20B;

    /* Outputs for Atomic SubSystem: '<S589>/ROUTE LOCK1' */
    M_ES_WS(rtb_u0BTESRL_m, rtb_u0BTP_e, rtb_u0BRLS_p,
            &VITALMAIN_DW.ROUTELOCK1_h);

    /* End of Outputs for SubSystem: '<S589>/ROUTE LOCK1' */

    /* DataStoreWrite: '<S589>/20B-T-ES' */
    M_T_ES_20B = VITALMAIN_DW.ROUTELOCK1_h.AND1;

    /* DataStoreRead: '<S590>/21A-S-WS' */
    rtb_u1ASWS_n = M_S_WS_21A;

    /* DataStoreRead: '<S590>/20B-TP' */
    rtb_u0BTP_l = M_TP_20B;

    /* DataStoreRead: '<S590>/20B-RLS' */
    rtb_u0BRLS_l = M_RLS_20B;

    /* Outputs for Atomic SubSystem: '<S590>/ROUTE LOCK2' */
    M_ES_WS(rtb_u1ASWS_n, rtb_u0BTP_l, rtb_u0BRLS_l, &VITALMAIN_DW.ROUTELOCK2_lc);

    /* End of Outputs for SubSystem: '<S590>/ROUTE LOCK2' */

    /* DataStoreWrite: '<S590>/20B-S-WS' */
    M_S_WS_20B = VITALMAIN_DW.ROUTELOCK2_lc.AND1;

    /* DataStoreRead: '<S590>/21A-T-WS' */
    rtb_u1ATWS_c = M_T_WS_21A;

    /* Outputs for Atomic SubSystem: '<S590>/ROUTE LOCK1' */
    M_ES_WS(rtb_u1ATWS_c, rtb_u0BTP_l, rtb_u0BRLS_l, &VITALMAIN_DW.ROUTELOCK1_k);

    /* End of Outputs for SubSystem: '<S590>/ROUTE LOCK1' */

    /* DataStoreWrite: '<S590>/20B-T-WS' */
    M_T_WS_20B = VITALMAIN_DW.ROUTELOCK1_k.AND1;

    /* DataStoreRead: '<S591>/20B-S-ES' */
    rtb_u0BSES_k = M_S_ES_20B;

    /* DataStoreRead: '<S591>/21A-TP' */
    rtb_u1ATP_f5 = M_TP_21A;

    /* DataStoreRead: '<S591>/21A-RLS' */
    rtb_u1ARLS_k = M_RLS_21A;

    /* Outputs for Atomic SubSystem: '<S591>/ROUTE LOCK2' */
    M_ES_WS(rtb_u0BSES_k, rtb_u1ATP_f5, rtb_u1ARLS_k, &VITALMAIN_DW.ROUTELOCK2_o);

    /* End of Outputs for SubSystem: '<S591>/ROUTE LOCK2' */

    /* DataStoreWrite: '<S591>/21A-S-ES' */
    M_S_ES_21A = VITALMAIN_DW.ROUTELOCK2_o.AND1;

    /* DataStoreRead: '<S591>/20B-T-ES' */
    rtb_u0BTES_f = M_T_ES_20B;

    /* Outputs for Atomic SubSystem: '<S591>/ROUTE LOCK1' */
    M_ES_WS(rtb_u0BTES_f, rtb_u1ATP_f5, rtb_u1ARLS_k,
            &VITALMAIN_DW.ROUTELOCK1_i0);

    /* End of Outputs for SubSystem: '<S591>/ROUTE LOCK1' */

    /* DataStoreWrite: '<S591>/21A-T-ES' */
    M_T_ES_21A = VITALMAIN_DW.ROUTELOCK1_i0.AND1;

    /* Logic: '<S592>/OR6' */
    rtb_OR6 = (M_W11B_21B_RWZ || M_S_WS_21B);

    /* DataStoreRead: '<S592>/21A-TP' */
    rtb_u1ATP_i = M_TP_21A;

    /* DataStoreRead: '<S592>/21A-RLS' */
    rtb_u1ARLS_g = M_RLS_21A;

    /* Outputs for Atomic SubSystem: '<S592>/ROUTE LOCK2' */
    M_ES_WS(rtb_OR6, rtb_u1ATP_i, rtb_u1ARLS_g, &VITALMAIN_DW.ROUTELOCK2_dq);

    /* End of Outputs for SubSystem: '<S592>/ROUTE LOCK2' */

    /* DataStoreWrite: '<S592>/21A-S-WS' */
    M_S_WS_21A = VITALMAIN_DW.ROUTELOCK2_dq.AND1;

    /* Logic: '<S592>/AND1' incorporates:
     *  Logic: '<S592>/OR1'
     *  Logic: '<S592>/OR3'
     */
    rtb_AND1_nb = ((M_T_WS_21B || M_W11B_21B_RWZ) && (M_T_WS_11A ||
      M_W11A_21A_NWZ));

    /* Outputs for Atomic SubSystem: '<S592>/ROUTE LOCK1' */
    M_ES_WS(rtb_AND1_nb, rtb_u1ATP_i, rtb_u1ARLS_g, &VITALMAIN_DW.ROUTELOCK1_ct);

    /* End of Outputs for SubSystem: '<S592>/ROUTE LOCK1' */

    /* DataStoreWrite: '<S592>/21A-T-WS' */
    M_T_WS_21A = VITALMAIN_DW.ROUTELOCK1_ct.AND1;

    /* Logic: '<S593>/AND2' */
    rtb_AND2_ib = (M_S_ES_21A && M_S_ES_11B);

    /* DataStoreRead: '<S593>/21B-TP' */
    rtb_u1BTP_e = M_TP_21B;

    /* DataStoreRead: '<S593>/21B-RLS' */
    rtb_u1BRLS_o = M_RLS_21B;

    /* Outputs for Atomic SubSystem: '<S593>/ROUTE LOCK2' */
    M_ES_WS(rtb_AND2_ib, rtb_u1BTP_e, rtb_u1BRLS_o, &VITALMAIN_DW.ROUTELOCK2_c);

    /* End of Outputs for SubSystem: '<S593>/ROUTE LOCK2' */

    /* DataStoreWrite: '<S593>/21B-S-ES' */
    M_S_ES_21B = VITALMAIN_DW.ROUTELOCK2_c.AND1;

    /* Logic: '<S593>/AND1' incorporates:
     *  Logic: '<S593>/OR1'
     *  Logic: '<S593>/OR3'
     */
    rtb_AND1_bl = ((M_T_ES_21A || M_W11A_21A_RWZ) && (M_T_ES_11B ||
      M_W11B_21B_NWZ));

    /* Outputs for Atomic SubSystem: '<S593>/ROUTE LOCK1' */
    M_ES_WS(rtb_AND1_bl, rtb_u1BTP_e, rtb_u1BRLS_o, &VITALMAIN_DW.ROUTELOCK1_m);

    /* End of Outputs for SubSystem: '<S593>/ROUTE LOCK1' */

    /* DataStoreWrite: '<S593>/21B-T-ES' */
    M_T_ES_21B = VITALMAIN_DW.ROUTELOCK1_m.AND1;

    /* DataStoreRead: '<S594>/21C-S-WS' */
    rtb_u1CSWS_l = M_S_WS_21C;

    /* DataStoreRead: '<S594>/21B-TP' */
    rtb_u1BTP_h = M_TP_21B;

    /* DataStoreRead: '<S594>/21B-RLS' */
    rtb_u1BRLS_b = M_RLS_21B;

    /* Outputs for Atomic SubSystem: '<S594>/ROUTE LOCK2' */
    M_ES_WS(rtb_u1CSWS_l, rtb_u1BTP_h, rtb_u1BRLS_b, &VITALMAIN_DW.ROUTELOCK2_m);

    /* End of Outputs for SubSystem: '<S594>/ROUTE LOCK2' */

    /* DataStoreWrite: '<S594>/21B-S-WS' */
    M_S_WS_21B = VITALMAIN_DW.ROUTELOCK2_m.AND1;

    /* DataStoreRead: '<S594>/21C-T-WS' */
    rtb_u1CTWS_g = M_T_WS_21C;

    /* Outputs for Atomic SubSystem: '<S594>/ROUTE LOCK1' */
    M_ES_WS(rtb_u1CTWS_g, rtb_u1BTP_h, rtb_u1BRLS_b, &VITALMAIN_DW.ROUTELOCK1_kh);

    /* End of Outputs for SubSystem: '<S594>/ROUTE LOCK1' */

    /* DataStoreWrite: '<S594>/21B-T-WS' */
    M_T_WS_21B = VITALMAIN_DW.ROUTELOCK1_kh.AND1;

    /* DataStoreRead: '<S595>/21B-S-ES' */
    rtb_u1BSES_e = M_S_ES_21B;

    /* DataStoreRead: '<S595>/21C-TP' */
    rtb_u1CTP_bc = M_TP_21C;

    /* DataStoreRead: '<S595>/21C-RLS' */
    rtb_u1CRLS = M_RLS_21C;

    /* Outputs for Atomic SubSystem: '<S595>/ROUTE LOCK2' */
    M_ES_WS(rtb_u1BSES_e, rtb_u1CTP_bc, rtb_u1CRLS, &VITALMAIN_DW.ROUTELOCK2_n3);

    /* End of Outputs for SubSystem: '<S595>/ROUTE LOCK2' */

    /* DataStoreWrite: '<S595>/21C-S-ES' */
    M_S_ES_21C = VITALMAIN_DW.ROUTELOCK2_n3.AND1;

    /* DataStoreRead: '<S595>/21B-T-ES' */
    rtb_u1BTES_g = M_T_ES_21B;

    /* Outputs for Atomic SubSystem: '<S595>/ROUTE LOCK1' */
    M_ES_WS(rtb_u1BTES_g, rtb_u1CTP_bc, rtb_u1CRLS, &VITALMAIN_DW.ROUTELOCK1_cv);

    /* End of Outputs for SubSystem: '<S595>/ROUTE LOCK1' */

    /* DataStoreWrite: '<S595>/21C-T-ES' */
    M_T_ES_21C = VITALMAIN_DW.ROUTELOCK1_cv.AND1;

    /* DataStoreRead: '<S596>/21C-S-WS-RL' */
    rtb_u1CSWSRL = M_RL_S_WS_21C;

    /* DataStoreRead: '<S596>/21C-TP' */
    rtb_u1CTP_g = M_TP_21C;

    /* DataStoreRead: '<S596>/21C-RLS' */
    rtb_u1CRLS_l = M_RLS_21C;

    /* Outputs for Atomic SubSystem: '<S596>/ROUTE LOCK2' */
    M_ES_WS(rtb_u1CSWSRL, rtb_u1CTP_g, rtb_u1CRLS_l, &VITALMAIN_DW.ROUTELOCK2_f);

    /* End of Outputs for SubSystem: '<S596>/ROUTE LOCK2' */

    /* DataStoreWrite: '<S596>/21C-S-WS' */
    M_S_WS_21C = VITALMAIN_DW.ROUTELOCK2_f.AND1;

    /* DataStoreRead: '<S596>/21C-T-WS-RL' */
    rtb_u1CTWSRL = M_RL_T_WS_21C;

    /* Outputs for Atomic SubSystem: '<S596>/ROUTE LOCK1' */
    M_ES_WS(rtb_u1CTWSRL, rtb_u1CTP_g, rtb_u1CRLS_l, &VITALMAIN_DW.ROUTELOCK1_g);

    /* End of Outputs for SubSystem: '<S596>/ROUTE LOCK1' */

    /* DataStoreWrite: '<S596>/21C-T-WS' */
    M_T_WS_21C = VITALMAIN_DW.ROUTELOCK1_g.AND1;

    /* Logic: '<S597>/OR1' incorporates:
     *  DataStoreWrite: '<S365>/W21C-RWZ'
     */
    rtb_OR1_cc = (M_T_ES_21C || VITALMAIN_DW.POINTCONTROL_h.Memory2);

    /* DataStoreRead: '<S597>/22A-TP' */
    rtb_u2ATP_j = M_TP_22A;

    /* DataStoreRead: '<S597>/22A-RLS' */
    rtb_u2ARLS_d = M_RLS_22A;

    /* Outputs for Atomic SubSystem: '<S597>/ROUTE LOCK' */
    M_ES_WS(rtb_OR1_cc, rtb_u2ATP_j, rtb_u2ARLS_d, &VITALMAIN_DW.ROUTELOCK_h);

    /* End of Outputs for SubSystem: '<S597>/ROUTE LOCK' */

    /* DataStoreWrite: '<S597>/22A-T-ES' */
    M_T_ES_22A = VITALMAIN_DW.ROUTELOCK_h.AND1;

    /* DataStoreRead: '<S598>/22A-T-ES' incorporates:
     *  DataStoreWrite: '<S597>/22A-T-ES'
     */
    rtb_u2ATES_a = VITALMAIN_DW.ROUTELOCK_h.AND1;

    /* DataStoreRead: '<S598>/22B-TP' */
    rtb_u2BTP_i = M_TP_22B;

    /* DataStoreRead: '<S598>/22B-RLS' */
    rtb_u2BRLS_p = M_RLS_22B;

    /* Outputs for Atomic SubSystem: '<S598>/ROUTE LOCK' */
    M_ES_WS(rtb_u2ATES_a, rtb_u2BTP_i, rtb_u2BRLS_p, &VITALMAIN_DW.ROUTELOCK_an);

    /* End of Outputs for SubSystem: '<S598>/ROUTE LOCK' */

    /* DataStoreWrite: '<S598>/22B-T-ES' */
    M_T_ES_22B = VITALMAIN_DW.ROUTELOCK_an.AND1;

    /* DataStoreRead: '<S599>/22C-T-WS' */
    rtb_u2CTWS_i = M_T_WS_22C;

    /* DataStoreRead: '<S599>/22B-TP' */
    rtb_u2BTP_k = M_TP_22B;

    /* DataStoreRead: '<S599>/22B-RLS' */
    rtb_u2BRLS_pa = M_RLS_22B;

    /* Outputs for Atomic SubSystem: '<S599>/ROUTE LOCK' */
    M_ES_WS(rtb_u2CTWS_i, rtb_u2BTP_k, rtb_u2BRLS_pa, &VITALMAIN_DW.ROUTELOCK_aq);

    /* End of Outputs for SubSystem: '<S599>/ROUTE LOCK' */

    /* DataStoreWrite: '<S599>/22B-T-WS' */
    M_T_WS_22B = VITALMAIN_DW.ROUTELOCK_aq.AND1;

    /* DataStoreRead: '<S600>/22B-T-ES' */
    rtb_u2BTES_e = M_T_ES_22B;

    /* DataStoreRead: '<S600>/22C-TP' */
    rtb_u2CTP_k = M_TP_22C;

    /* DataStoreRead: '<S600>/22C-RLS' */
    rtb_u2CRLS_e = M_RLS_22C;

    /* Outputs for Atomic SubSystem: '<S600>/ROUTE LOCK' */
    M_ES_WS(rtb_u2BTES_e, rtb_u2CTP_k, rtb_u2CRLS_e, &VITALMAIN_DW.ROUTELOCK_c5);

    /* End of Outputs for SubSystem: '<S600>/ROUTE LOCK' */

    /* DataStoreWrite: '<S600>/22C-T-ES' */
    M_T_ES_22C = VITALMAIN_DW.ROUTELOCK_c5.AND1;

    /* DataStoreRead: '<S601>/22D-T-WS' */
    rtb_u2DTWS_b = M_T_WS_22D;

    /* DataStoreRead: '<S601>/22C-TP' */
    rtb_u2CTP_p = M_TP_22C;

    /* DataStoreRead: '<S601>/22C-RLS' */
    rtb_u2CRLS_n = M_RLS_22C;

    /* Outputs for Atomic SubSystem: '<S601>/ROUTE LOCK' */
    M_ES_WS(rtb_u2DTWS_b, rtb_u2CTP_p, rtb_u2CRLS_n, &VITALMAIN_DW.ROUTELOCK_o);

    /* End of Outputs for SubSystem: '<S601>/ROUTE LOCK' */

    /* DataStoreWrite: '<S601>/22C-T-WS' */
    M_T_WS_22C = VITALMAIN_DW.ROUTELOCK_o.AND1;

    /* DataStoreRead: '<S602>/22C-T-ES' */
    rtb_u2CTES_a = M_T_ES_22C;

    /* DataStoreRead: '<S602>/22D-TP' */
    rtb_u2DTP_o = M_TP_22D;

    /* DataStoreRead: '<S602>/22D-RLS' */
    rtb_u2DRLS_h = M_RLS_22D;

    /* Outputs for Atomic SubSystem: '<S602>/ROUTE LOCK' */
    M_ES_WS(rtb_u2CTES_a, rtb_u2DTP_o, rtb_u2DRLS_h, &VITALMAIN_DW.ROUTELOCK_f);

    /* End of Outputs for SubSystem: '<S602>/ROUTE LOCK' */

    /* DataStoreWrite: '<S602>/22D-T-ES' */
    M_T_ES_22D = VITALMAIN_DW.ROUTELOCK_f.AND1;

    /* DataStoreRead: '<S603>/22E-T-WS' */
    rtb_u2ETWS_d = M_T_WS_22E;

    /* DataStoreRead: '<S603>/22D-TP' */
    rtb_u2DTP_j = M_TP_22D;

    /* DataStoreRead: '<S603>/22D-RLS' */
    rtb_u2DRLS_dv = M_RLS_22D;

    /* Outputs for Atomic SubSystem: '<S603>/ROUTE LOCK' */
    M_ES_WS(rtb_u2ETWS_d, rtb_u2DTP_j, rtb_u2DRLS_dv, &VITALMAIN_DW.ROUTELOCK_nf);

    /* End of Outputs for SubSystem: '<S603>/ROUTE LOCK' */

    /* DataStoreWrite: '<S603>/22D-T-WS' */
    M_T_WS_22D = VITALMAIN_DW.ROUTELOCK_nf.AND1;

    /* Logic: '<S604>/OR1' */
    rtb_OR1_a0 = (M_T_WS_23A || M_W13A_23A_RWZ);

    /* DataStoreRead: '<S604>/22E-TP' */
    rtb_u2ETP_g = M_TP_22E;

    /* DataStoreRead: '<S604>/22E-RLS' */
    rtb_u2ERLS_i = M_RLS_22E;

    /* Outputs for Atomic SubSystem: '<S604>/ROUTE LOCK' */
    M_ES_WS(rtb_OR1_a0, rtb_u2ETP_g, rtb_u2ERLS_i, &VITALMAIN_DW.ROUTELOCK_m);

    /* End of Outputs for SubSystem: '<S604>/ROUTE LOCK' */

    /* DataStoreWrite: '<S604>/22E-T-WS' */
    M_T_WS_22E = VITALMAIN_DW.ROUTELOCK_m.AND1;

    /* Logic: '<S605>/OR2' incorporates:
     *  Logic: '<S605>/OR1'
     */
    rtb_OR2_pe = (M_RL_T_ES_23A && (M_T_ES_13A || M_W13A_23A_NWZ));

    /* DataStoreRead: '<S605>/23A-TP' */
    rtb_u3ATP_e4 = M_TP_23A;

    /* DataStoreRead: '<S605>/23A-RLS' */
    rtb_u3ARLS_a = M_RLS_23A;

    /* Outputs for Atomic SubSystem: '<S605>/ROUTE LOCK1' */
    M_ES_WS(rtb_OR2_pe, rtb_u3ATP_e4, rtb_u3ARLS_a, &VITALMAIN_DW.ROUTELOCK1_a);

    /* End of Outputs for SubSystem: '<S605>/ROUTE LOCK1' */

    /* DataStoreWrite: '<S605>/23A-T-ES' */
    M_T_ES_23A = VITALMAIN_DW.ROUTELOCK1_a.AND1;

    /* DataStoreRead: '<S606>/23B-T-WS' */
    rtb_u3BTWS_g = M_T_WS_23B;

    /* DataStoreRead: '<S606>/23A-TP' */
    rtb_u3ATP_dq = M_TP_23A;

    /* DataStoreRead: '<S606>/23A-RLS' */
    rtb_u3ARLS_h = M_RLS_23A;

    /* Outputs for Atomic SubSystem: '<S606>/ROUTE LOCK' */
    M_ES_WS(rtb_u3BTWS_g, rtb_u3ATP_dq, rtb_u3ARLS_h, &VITALMAIN_DW.ROUTELOCK_i3);

    /* End of Outputs for SubSystem: '<S606>/ROUTE LOCK' */

    /* DataStoreWrite: '<S606>/23A-T-WS' */
    M_T_WS_23A = VITALMAIN_DW.ROUTELOCK_i3.AND1;

    /* DataStoreRead: '<S607>/23A-T-ES' */
    rtb_u3ATES_ph = M_T_ES_23A;

    /* DataStoreRead: '<S607>/23B-TP' */
    rtb_u3BTP_c = M_TP_23B;

    /* DataStoreRead: '<S607>/23B-RLS' */
    rtb_u3BRLS_m = M_RLS_23B;

    /* Outputs for Atomic SubSystem: '<S607>/ROUTE LOCK' */
    M_ES_WS(rtb_u3ATES_ph, rtb_u3BTP_c, rtb_u3BRLS_m, &VITALMAIN_DW.ROUTELOCK_gp);

    /* End of Outputs for SubSystem: '<S607>/ROUTE LOCK' */

    /* DataStoreWrite: '<S607>/23B-T-ES' */
    M_T_ES_23B = VITALMAIN_DW.ROUTELOCK_gp.AND1;

    /* Logic: '<S608>/OR2' incorporates:
     *  Logic: '<S608>/OR1'
     */
    rtb_OR2_kc = (M_T_WS_24A && (M_T_WS_13B || M_W13B_23B_NWZ));

    /* DataStoreRead: '<S608>/23B-TP' */
    rtb_u3BTP_e5 = M_TP_23B;

    /* DataStoreRead: '<S608>/23B-RLS' */
    rtb_u3BRLS_o = M_RLS_23B;

    /* Outputs for Atomic SubSystem: '<S608>/ROUTE LOCK' */
    M_ES_WS(rtb_OR2_kc, rtb_u3BTP_e5, rtb_u3BRLS_o, &VITALMAIN_DW.ROUTELOCK_j);

    /* End of Outputs for SubSystem: '<S608>/ROUTE LOCK' */

    /* DataStoreWrite: '<S608>/23B-T-WS' */
    M_T_WS_23B = VITALMAIN_DW.ROUTELOCK_j.AND1;

    /* Logic: '<S609>/OR1' */
    rtb_OR1_nr = (M_T_ES_23B || M_W13B_23B_RWZ);

    /* DataStoreRead: '<S609>/24A-TP' */
    rtb_u4ATP_l = M_TP_24A;

    /* DataStoreRead: '<S609>/24A-RLS' */
    rtb_u4ARLS_f = M_RLS_24A;

    /* Outputs for Atomic SubSystem: '<S609>/ROUTE LOCK' */
    M_ES_WS(rtb_OR1_nr, rtb_u4ATP_l, rtb_u4ARLS_f, &VITALMAIN_DW.ROUTELOCK_hx);

    /* End of Outputs for SubSystem: '<S609>/ROUTE LOCK' */

    /* DataStoreWrite: '<S609>/24A-T-ES' */
    M_T_ES_24A = VITALMAIN_DW.ROUTELOCK_hx.AND1;

    /* DataStoreRead: '<S610>/24-T-WS-RL' */
    rtb_u4TWSRL_p = M_RL_T_WS_24A;

    /* DataStoreRead: '<S610>/24A-TP' */
    rtb_u4ATP_h = M_TP_24A;

    /* DataStoreRead: '<S610>/24A-RLS' */
    rtb_u4ARLS_g = M_RLS_24A;

    /* Outputs for Atomic SubSystem: '<S610>/ROUTE LOCK' */
    M_ES_WS(rtb_u4TWSRL_p, rtb_u4ATP_h, rtb_u4ARLS_g, &VITALMAIN_DW.ROUTELOCK_es);

    /* End of Outputs for SubSystem: '<S610>/ROUTE LOCK' */

    /* DataStoreWrite: '<S610>/24A-T-WS' */
    M_T_WS_24A = VITALMAIN_DW.ROUTELOCK_es.AND1;

    /* Logic: '<S677>/OR1' */
    rtb_OR1_mc = (M_R_S_DEP_10 || M_R_S_DEP_20);

    /* DataStoreRead: '<S677>/DEP-TP' */
    rtb_DEPTP_a = M_TP_DEP;

    /* Outputs for Atomic SubSystem: '<S677>/M_SIG_CTRL3' */
    M_SIG_CTRL_3(rtb_OR1_mc, rtb_DEPTP_a, &VITALMAIN_DW.M_SIG_CTRL3);

    /* End of Outputs for SubSystem: '<S677>/M_SIG_CTRL3' */

    /* DataStoreWrite: '<S677>/DEP-GR-DO' */
    M_DEP_GR_DO = VITALMAIN_DW.M_SIG_CTRL3.AND19;

    /* Logic: '<S678>/OR2' */
    rtb_OR2_f = (M_R_H_12_10 || M_R_H_12_20);

    /* Outputs for Atomic SubSystem: '<S678>/SIGNAL LIGHTING' */
    M_SIG_CTRL_2(rtb_OR2_f, &VITALMAIN_DW.SIGNALLIGHTING);

    /* End of Outputs for SubSystem: '<S678>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S678>/J12A-DR-DO' */
    DO_J12A_DR = VITALMAIN_DW.SIGNALLIGHTING.T;

    /* Logic: '<S679>/OR2' */
    rtb_OR2_fr = (M_R_H_12_14 || M_R_H_12_24);

    /* Outputs for Atomic SubSystem: '<S679>/SIGNAL LIGHTING' */
    M_SIG_CTRL_2(rtb_OR2_fr, &VITALMAIN_DW.SIGNALLIGHTING_g);

    /* End of Outputs for SubSystem: '<S679>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S679>/J12B-DR-DO' */
    DO_J12B_DR = VITALMAIN_DW.SIGNALLIGHTING_g.T;

    /* Logic: '<S680>/OR2' */
    rtb_OR2_g = (M_R_D_14_12 || M_R_D_14_22);

    /* Outputs for Atomic SubSystem: '<S680>/SIGNAL LIGHTING' */
    M_SIG_CTRL_2(rtb_OR2_g, &VITALMAIN_DW.SIGNALLIGHTING_k);

    /* End of Outputs for SubSystem: '<S680>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S680>/J14-DR-DO' */
    DO_J14_DR = VITALMAIN_DW.SIGNALLIGHTING_k.T;

    /* Logic: '<S681>/OR2' */
    rtb_OR2_av = (M_R_H_22_10 || M_R_H_22_20);

    /* Outputs for Atomic SubSystem: '<S681>/SIGNAL LIGHTING' */
    M_SIG_CTRL_2(rtb_OR2_av, &VITALMAIN_DW.SIGNALLIGHTING_h);

    /* End of Outputs for SubSystem: '<S681>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S681>/J22A-DR-DO' */
    DO_J22A_DR = VITALMAIN_DW.SIGNALLIGHTING_h.T;

    /* Logic: '<S682>/OR2' */
    rtb_OR2_iv = (M_R_H_22_14 || M_R_H_22_24);

    /* Outputs for Atomic SubSystem: '<S682>/SIGNAL LIGHTING' */
    M_SIG_CTRL_2(rtb_OR2_iv, &VITALMAIN_DW.SIGNALLIGHTING_p);

    /* End of Outputs for SubSystem: '<S682>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S682>/J22B-DR-DO' */
    DO_J22B_DR = VITALMAIN_DW.SIGNALLIGHTING_p.T;

    /* Logic: '<S683>/OR2' */
    rtb_OR2_km = (M_R_D_24_12 || M_R_D_24_22);

    /* Outputs for Atomic SubSystem: '<S683>/SIGNAL LIGHTING' */
    M_SIG_CTRL_2(rtb_OR2_km, &VITALMAIN_DW.SIGNALLIGHTING_m);

    /* End of Outputs for SubSystem: '<S683>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S683>/J24-DR-DO' */
    DO_J24_DR = VITALMAIN_DW.SIGNALLIGHTING_m.T;

    /* Logic: '<S684>/OR1' */
    rtb_OR1_fj = (M_R_D_10_12 || M_R_D_10_22);

    /* DataStoreRead: '<S684>/JL10-DEP-S' */
    rtb_JL10DEPS_f = M_R_S_10_DEP;

    /* DataStoreRead: '<S684>/10A-TP' */
    rtb_u0ATP_az = M_TP_10A;

    /* Outputs for Atomic SubSystem: '<S684>/SIGNAL LIGHTING' */
    M_SIG_CTRL(rtb_OR1_fj, rtb_JL10DEPS_f, rtb_u0ATP_az,
               &VITALMAIN_DW.SIGNALLIGHTING_c);

    /* End of Outputs for SubSystem: '<S684>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S684>/JL10-DR-DO' */
    DO_JL10_DR = VITALMAIN_DW.SIGNALLIGHTING_c.T;

    /* DataStoreWrite: '<S684>/JL10-GR-DO' */
    DO_JL10_GR = VITALMAIN_DW.SIGNALLIGHTING_c.AND19;

    /* Logic: '<S685>/OR2' incorporates:
     *  DataStoreWrite: '<S500>/JL20-J22B-D'
     */
    rtb_OR2_jb = (M_R_D_20_12 || VITALMAIN_DW.ROUTECHECK_ih.AND2);

    /* DataStoreRead: '<S685>/JL20-DEP-S' */
    rtb_JL20DEPS_j = M_R_S_20_DEP;

    /* DataStoreRead: '<S685>/20A-TP' */
    rtb_u0ATP_ad = M_TP_20A;

    /* Outputs for Atomic SubSystem: '<S685>/SIGNAL LIGHTING' */
    M_SIG_CTRL(rtb_OR2_jb, rtb_JL20DEPS_j, rtb_u0ATP_ad,
               &VITALMAIN_DW.SIGNALLIGHTING_j);

    /* End of Outputs for SubSystem: '<S685>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S685>/JL20-DR-DO' */
    DO_JL20_DR = VITALMAIN_DW.SIGNALLIGHTING_j.T;

    /* DataStoreWrite: '<S685>/JL20-GR-DO' */
    DO_JL20_GR = VITALMAIN_DW.SIGNALLIGHTING_j.AND19;

    /* DataStoreRead: '<S14>/13B-TPR-DI' */
    VITALMAIN_DW.u3BTPRDI = DI_TPR_13B;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP9' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u3BTPRDI, &VITALMAIN_DW.M_TP9);

  /* End of Outputs for SubSystem: '<S14>/M_TP9' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/13B-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP9Outport1'
     */
    M_TP_13B = VITALMAIN_DW.M_TP9.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/13A-TPR-DI' */
    VITALMAIN_DW.u3ATPRDI = DI_TPR_13A;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP8' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u3ATPRDI, &VITALMAIN_DW.M_TP8);

  /* End of Outputs for SubSystem: '<S14>/M_TP8' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/13A-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP8Outport1'
     */
    M_TP_13A = VITALMAIN_DW.M_TP8.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/12C-TPR-DI' */
    VITALMAIN_DW.u2CTPRDI = DI_TPR_12C;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP7' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u2CTPRDI, &VITALMAIN_DW.M_TP7);

  /* End of Outputs for SubSystem: '<S14>/M_TP7' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/12C-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP7Outport1'
     */
    M_TP_12C = VITALMAIN_DW.M_TP7.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/12B-TPR-DI' */
    VITALMAIN_DW.u2BTPRDI = DI_TPR_12B;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP6' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u2BTPRDI, &VITALMAIN_DW.M_TP6);

  /* End of Outputs for SubSystem: '<S14>/M_TP6' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/12B-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP6Outport1'
     */
    M_TP_12B = VITALMAIN_DW.M_TP6.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/12A-TPR-DI' */
    VITALMAIN_DW.u2ATPRDI = DI_TPR_12A;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP5' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u2ATPRDI, &VITALMAIN_DW.M_TP5);

  /* End of Outputs for SubSystem: '<S14>/M_TP5' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/12A-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP5Outport1'
     */
    M_TP_12A = VITALMAIN_DW.M_TP5.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/11B-TPR-DI' */
    VITALMAIN_DW.u1BTPRDI = DI_TPR_11B;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP4' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u1BTPRDI, &VITALMAIN_DW.M_TP4);

  /* End of Outputs for SubSystem: '<S14>/M_TP4' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/11B-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP4Outport1'
     */
    M_TP_11B = VITALMAIN_DW.M_TP4.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/11A-TPR-DI' */
    VITALMAIN_DW.u1ATPRDI = DI_TPR_11A;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP3' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u1ATPRDI, &VITALMAIN_DW.M_TP3);

  /* End of Outputs for SubSystem: '<S14>/M_TP3' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/11A-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP3Outport1'
     */
    M_TP_11A = VITALMAIN_DW.M_TP3.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/22E-TPR-DI' */
    VITALMAIN_DW.u2ETPRDI = DI_TPR_22E;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP27' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u2ETPRDI, &VITALMAIN_DW.M_TP27);

  /* End of Outputs for SubSystem: '<S14>/M_TP27' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/22E-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP27Outport1'
     */
    M_TP_22E = VITALMAIN_DW.M_TP27.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/22D-TPR-DI' */
    VITALMAIN_DW.u2DTPRDI = DI_TPR_22D;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP26' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u2DTPRDI, &VITALMAIN_DW.M_TP26);

  /* End of Outputs for SubSystem: '<S14>/M_TP26' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/22D-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP26Outport1'
     */
    M_TP_22D = VITALMAIN_DW.M_TP26.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/24B-TPR-DI' */
    VITALMAIN_DW.u4BTPRDI = DI_TPR_24B;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP25' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u4BTPRDI, &VITALMAIN_DW.M_TP25);

  /* End of Outputs for SubSystem: '<S14>/M_TP25' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/24B-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP25Outport1'
     */
    M_TP_24B = VITALMAIN_DW.M_TP25.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/24A-TPR-DI' */
    VITALMAIN_DW.u4ATPRDI = DI_TPR_24A;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP24' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u4ATPRDI, &VITALMAIN_DW.M_TP24);

  /* End of Outputs for SubSystem: '<S14>/M_TP24' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/24A-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP24Outport1'
     */
    M_TP_24A = VITALMAIN_DW.M_TP24.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/23B-TPR-DI' */
    VITALMAIN_DW.u3BTPRDI_f = DI_TPR_23B;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP23' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u3BTPRDI_f, &VITALMAIN_DW.M_TP23);

  /* End of Outputs for SubSystem: '<S14>/M_TP23' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/23B-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP23Outport1'
     */
    M_TP_23B = VITALMAIN_DW.M_TP23.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/23A-TPR-DI' */
    VITALMAIN_DW.u3ATPRDI_m = DI_TPR_23A;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP22' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u3ATPRDI_m, &VITALMAIN_DW.M_TP22);

  /* End of Outputs for SubSystem: '<S14>/M_TP22' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/23A-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP22Outport1'
     */
    M_TP_23A = VITALMAIN_DW.M_TP22.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/22C-TPR-DI' */
    VITALMAIN_DW.u2CTPRDI_p = DI_TPR_22C;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP21' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u2CTPRDI_p, &VITALMAIN_DW.M_TP21);

  /* End of Outputs for SubSystem: '<S14>/M_TP21' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/22C-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP21Outport1'
     */
    M_TP_22C = VITALMAIN_DW.M_TP21.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/22B-TPR-DI' */
    VITALMAIN_DW.u2BTPRDI_n = DI_TPR_22B;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP20' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u2BTPRDI_n, &VITALMAIN_DW.M_TP20);

  /* End of Outputs for SubSystem: '<S14>/M_TP20' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/22B-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP20Outport1'
     */
    M_TP_22B = VITALMAIN_DW.M_TP20.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/10B-TPR-DI' */
    VITALMAIN_DW.u0BTPRDI = DI_TPR_10B;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP2' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u0BTPRDI, &VITALMAIN_DW.M_TP2);

  /* End of Outputs for SubSystem: '<S14>/M_TP2' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/10B-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP2Outport1'
     */
    M_TP_10B = VITALMAIN_DW.M_TP2.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/22A-TPR-DI' */
    VITALMAIN_DW.u2ATPRDI_g = DI_TPR_22A;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP19' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u2ATPRDI_g, &VITALMAIN_DW.M_TP19);

  /* End of Outputs for SubSystem: '<S14>/M_TP19' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/22A-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP19Outport1'
     */
    M_TP_22A = VITALMAIN_DW.M_TP19.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/21C-TPR-DI' */
    VITALMAIN_DW.u1CTPRDI = DI_TPR_21C;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP18' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u1CTPRDI, &VITALMAIN_DW.M_TP18);

  /* End of Outputs for SubSystem: '<S14>/M_TP18' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/21C-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP18Outport1'
     */
    M_TP_21C = VITALMAIN_DW.M_TP18.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/21B-TPR-DI' */
    VITALMAIN_DW.u1BTPRDI_d = DI_TPR_21B;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP17' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u1BTPRDI_d, &VITALMAIN_DW.M_TP17);

  /* End of Outputs for SubSystem: '<S14>/M_TP17' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/21B-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP17Outport1'
     */
    M_TP_21B = VITALMAIN_DW.M_TP17.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/21A-TPR-DI' */
    VITALMAIN_DW.u1ATPRDI_i = DI_TPR_21A;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP16' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u1ATPRDI_i, &VITALMAIN_DW.M_TP16);

  /* End of Outputs for SubSystem: '<S14>/M_TP16' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/21A-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP16Outport1'
     */
    M_TP_21A = VITALMAIN_DW.M_TP16.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/20B-TPR-DI' */
    VITALMAIN_DW.u0BTPRDI_o = DI_TPR_20B;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP15' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u0BTPRDI_o, &VITALMAIN_DW.M_TP15);

  /* End of Outputs for SubSystem: '<S14>/M_TP15' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/20B-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP15Outport1'
     */
    M_TP_20B = VITALMAIN_DW.M_TP15.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/20A-TPR-DI' */
    VITALMAIN_DW.u0ATPRDI = DI_TPR_20A;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP14' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u0ATPRDI, &VITALMAIN_DW.M_TP14);

  /* End of Outputs for SubSystem: '<S14>/M_TP14' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/20A-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP14Outport1'
     */
    M_TP_20A = VITALMAIN_DW.M_TP14.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/12E-TPR-DI' */
    VITALMAIN_DW.u2ETPRDI_i = DI_TPR_12E;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP13' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u2ETPRDI_i, &VITALMAIN_DW.M_TP13);

  /* End of Outputs for SubSystem: '<S14>/M_TP13' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/12E-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP13Outport1'
     */
    M_TP_12E = VITALMAIN_DW.M_TP13.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/12D-TPR-DI' */
    VITALMAIN_DW.u2DTPRDI_l = DI_TPR_12D;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP12' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u2DTPRDI_l, &VITALMAIN_DW.M_TP12);

  /* End of Outputs for SubSystem: '<S14>/M_TP12' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/12D-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP12Outport1'
     */
    M_TP_12D = VITALMAIN_DW.M_TP12.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/14B-TPR-DI' */
    VITALMAIN_DW.u4BTPRDI_d = DI_TPR_14B;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP11' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u4BTPRDI_d, &VITALMAIN_DW.M_TP11);

  /* End of Outputs for SubSystem: '<S14>/M_TP11' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/14B-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP11Outport1'
     */
    M_TP_14B = VITALMAIN_DW.M_TP11.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/14A-TPR-DI' */
    VITALMAIN_DW.u4ATPRDI_e = DI_TPR_14A;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP10' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u4ATPRDI_e, &VITALMAIN_DW.M_TP10);

  /* End of Outputs for SubSystem: '<S14>/M_TP10' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/14A-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP10Outport1'
     */
    M_TP_14A = VITALMAIN_DW.M_TP10.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S14>/10A-TPR-DI' */
    VITALMAIN_DW.u0ATPRDI_g = DI_TPR_10A;
  }

  /* Outputs for Atomic SubSystem: '<S14>/M_TP1' */
  M_TP(VITALMAIN_M, VITALMAIN_DW.u0ATPRDI_g, &VITALMAIN_DW.M_TP1);

  /* End of Outputs for SubSystem: '<S14>/M_TP1' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S14>/10A-TP' incorporates:
     *  SignalConversion: '<S14>/TmpSignal ConversionAtM_TP1Outport1'
     */
    M_TP_10A = VITALMAIN_DW.M_TP1.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S3>/COMM-CHECK-IN' */
    VITALMAIN_DW.COMMCHECKIN = M_CHK_NV_V;

    /* DataStoreRead: '<S3>/COMM1-DI' */
    rtb_COMM1DI = DI_COMM_1;

    /* DataStoreRead: '<S3>/COMM2-DI' */
    rtb_COMM2DI = DI_COMM_2;
  }

  /* Outputs for Atomic SubSystem: '<S3>/COMMUNICATION CHECK' */
  M_COMM(VITALMAIN_M, VITALMAIN_DW.COMMCHECKIN, rtb_COMM1DI, rtb_COMM2DI,
         &VITALMAIN_DW.COMMUNICATIONCHECK);

  /* End of Outputs for SubSystem: '<S3>/COMMUNICATION CHECK' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S3>/COMM-OK' incorporates:
     *  SignalConversion: '<S3>/TmpSignal ConversionAtCOMMUNICATION CHECKOutport1'
     */
    VITALMAIN_DW.M_COMM_OK = VITALMAIN_DW.COMMUNICATIONCHECK.LogicalOperator3;

    /* DiscretePulseGenerator: '<S3>/0.5S' */
    if (clockTickCounter_0 >= 9) {
      clockTickCounter = 0;
    } else {
      clockTickCounter = clockTickCounter_0 + 1;
    }

    /* DataStoreWrite: '<S3>/FLASH-0.5S' incorporates:
     *  DiscretePulseGenerator: '<S3>/0.5S'
     */
    VITALMAIN_DW.M_GV_FLASH_500 = ((clockTickCounter_0 < 5) &&
      (clockTickCounter_0 >= 0));

    /* DiscretePulseGenerator: '<S3>/1S' */
    if (clockTickCounter_j_0 >= 19) {
      clockTickCounter_j = 0;
    } else {
      clockTickCounter_j = clockTickCounter_j_0 + 1;
    }

    /* DataStoreWrite: '<S3>/FLASH-1S' incorporates:
     *  DiscretePulseGenerator: '<S3>/1S'
     */
    M_GV_FLASH_1000 = ((clockTickCounter_j_0 < 10) && (clockTickCounter_j_0 >= 0));

    /* DataStoreWrite: '<S3>/COMM-CHECK-OUT' */
    M_CHK_V_NV = M_GV_FLASH_1000;

    /* DataStoreWrite: '<S3>/SEMENTARA' incorporates:
     *  Logic: '<S3>/Logical Operator'
     */
    DO_VDR = (DI_SYS_1 && DI_SYS_2);

    /* SignalConversion: '<Root>/TmpSignal ConversionAtDR-DO-TOInport1' */
    rty_DRDOTO[0] = rtb_JL10DRDO_g;
    rty_DRDOTO[1] = rtb_JL20DRDO_p;
    rty_DRDOTO[2] = rtb_J12ADRDO_k;
    rty_DRDOTO[3] = rtb_J22ADRDO_j;
    rty_DRDOTO[4] = rtb_J12BDRDO_b;
    rty_DRDOTO[5] = rtb_J22BDRDO_e;
    rty_DRDOTO[6] = rtb_J14DRDO_k;
    rty_DRDOTO[7] = rtb_J24DRDO_c;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtDR-DOInport1' */
    rty_DRDO[0] = rtb_JL10DRDO_g;
    rty_DRDO[1] = rtb_JL20DRDO_p;
    rty_DRDO[2] = rtb_J12ADRDO_k;
    rty_DRDO[3] = rtb_J22ADRDO_j;
    rty_DRDO[4] = rtb_J12BDRDO_b;
    rty_DRDO[5] = rtb_J22BDRDO_e;
    rty_DRDO[6] = rtb_J14DRDO_k;
    rty_DRDO[7] = rtb_J24DRDO_c;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtGR-DO-TOInport1' */
    rty_GRDOTO[0] = rtb_JL10GRDO_c;
    rty_GRDOTO[1] = rtb_JL20GRDO_f;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtGR-DOInport1' */
    rty_GRDO[0] = rtb_JL10GRDO_c;
    rty_GRDO[1] = rtb_JL20GRDO_f;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtL-TOInport1' */
    rty_LTO[0] = rtb_W11A21AL;
    rty_LTO[1] = rtb_W11B21BL;
    rty_LTO[2] = rtb_W21CL;
    rty_LTO[3] = rtb_W13A23AL;
    rty_LTO[4] = rtb_W13B23BL;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtLS-TOInport1' */
    rty_LSTO[0] = rtb_W11A21ALS;
    rty_LSTO[1] = rtb_W11B21BLS;
    rty_LSTO[2] = rtb_W21CLS;
    rty_LSTO[3] = rtb_W13A23ALS;
    rty_LSTO[4] = rtb_W13B23BLS;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtNWC-TOInport1' */
    rty_NWCTO[0] = rtb_W11A21ANWC_e;
    rty_NWCTO[1] = rtb_W11B21BNWC_e;
    rty_NWCTO[2] = rtb_W21CNWC_l;
    rty_NWCTO[3] = rtb_W13A23ANWC_p;
    rty_NWCTO[4] = rtb_W13B23BNWC_b;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtNWP-TOInport1' */
    rty_NWPTO[0] = rtb_W11A21ANWP;
    rty_NWPTO[1] = rtb_W11B21BNWP;
    rty_NWPTO[2] = rtb_W21CNWP;
    rty_NWPTO[3] = rtb_W13A23ANWP;
    rty_NWPTO[4] = rtb_W13B23BNWP;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtNWR-DOInport1' */
    rty_NWRDO[0] = rtb_W11A21ANWRDO;
    rty_NWRDO[1] = rtb_W11B21BNWRDO;
    rty_NWRDO[2] = rtb_W21CNWRDO;
    rty_NWRDO[3] = rtb_W13A23ANWRDO;
    rty_NWRDO[4] = rtb_W13B23BNWRDO;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtNWTE-TOInport1' */
    rty_NWTETO[0] = rtb_W11A21ANWTE;
    rty_NWTETO[1] = rtb_W11B21BNWTE;
    rty_NWTETO[2] = rtb_W21CNWTE;
    rty_NWTETO[3] = rtb_W13A23ANWTE;
    rty_NWTETO[4] = rtb_W13B23BNWTE;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtNWZ-TOInport1' */
    rty_NWZTO[0] = rtb_W11A21ANWZ_p;
    rty_NWZTO[1] = rtb_W11B21BNWZ_c;
    rty_NWZTO[2] = rtb_W21CNWZ;
    rty_NWZTO[3] = rtb_W13A23ANWZ_a;
    rty_NWZTO[4] = rtb_W13B23BNWZ_i;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtRRLS-TOInport1' */
    rty_RRLSTO[0] = rtb_X10RRLS_m;
    rty_RRLSTO[1] = rtb_X20RRLS_b;
    rty_RRLSTO[2] = rtb_J12ARRLS_p;
    rty_RRLSTO[3] = rtb_J22ARRLS_a;
    rty_RRLSTO[4] = rtb_J12BRRLS_p;
    rty_RRLSTO[5] = rtb_J22BRRLS_b;
    rty_RRLSTO[6] = rtb_X14RRLS_g;
    rty_RRLSTO[7] = rtb_X24RRLS_o;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtRWC-TOInport1' */
    rty_RWCTO[0] = rtb_W11A21ARWC_c;
    rty_RWCTO[1] = rtb_W11B21BRWC_j;
    rty_RWCTO[2] = rtb_W21CRWC_lp;
    rty_RWCTO[3] = rtb_W13A23ARWC_m;
    rty_RWCTO[4] = rtb_W13B23BRWC_n;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtRWP-TOInport1' */
    rty_RWPTO[0] = rtb_W11A21ARWP;
    rty_RWPTO[1] = rtb_W11B21BRWP;
    rty_RWPTO[2] = rtb_W21CRWP;
    rty_RWPTO[3] = rtb_W13A23ARWP;
    rty_RWPTO[4] = rtb_W13B23BRWP;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtRWR-DOInport1' */
    rty_RWRDO[0] = rtb_W11A21ARWRDO;
    rty_RWRDO[1] = rtb_W11B21BRWRDO;
    rty_RWRDO[2] = rtb_W21CRWRDO;
    rty_RWRDO[3] = rtb_W13A23ARWRDO;
    rty_RWRDO[4] = rtb_W13B23BRWRDO;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtRWTE-TOInport1' */
    rty_RWTETO[0] = rtb_W11A21ARWTE;
    rty_RWTETO[1] = rtb_W11B21BRWTE;
    rty_RWTETO[2] = rtb_W21CRWTE;
    rty_RWTETO[3] = rtb_W13A23ARWTE;
    rty_RWTETO[4] = rtb_W13B23BRWTE;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtRWZ-TOInport1' */
    rty_RWZTO[0] = rtb_W11A21ARWZ_h;
    rty_RWZTO[1] = rtb_W11B21BRWZ_n;
    rty_RWZTO[2] = rtb_W21CRWZ_i;
    rty_RWZTO[3] = rtb_W13A23ARWZ_g;
    rty_RWZTO[4] = rtb_W13B23BRWZ_o;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtS-AS-TOInport1' */
    rty_SASTO[0] = rtb_JL10SAS_o;
    rty_SASTO[1] = rtb_JL20SAS_c;
    rty_SASTO[2] = rtb_DEPSAS_e;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtS-ES-TOInport1' */
    rty_SESTO[0] = rtb_u0BSES_c;
    rty_SESTO[1] = rtb_u1ASES_n;
    rty_SESTO[2] = rtb_u1BSES_lq;
    rty_SESTO[3] = rtb_u0BSES_a;
    rty_SESTO[4] = rtb_u1ASES_f;
    rty_SESTO[5] = rtb_u1BSES_m;
    rty_SESTO[6] = rtb_u1CSES_e;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtS-WS-TOInport1' */
    rty_SWSTO[0] = rtb_u0BSWS_en;
    rty_SWSTO[1] = rtb_u1ASWS_c;
    rty_SWSTO[2] = rtb_u1BSWS_im;
    rty_SWSTO[3] = rtb_u0BSWS_ee;
    rty_SWSTO[4] = rtb_u1ASWS_f3;
    rty_SWSTO[5] = rtb_u1BSWS_c;
    rty_SWSTO[6] = rtb_u1CSWS_n;
    rty_SWSTO[7] = rtb_u0ASWS;
    rty_SWSTO[8] = rtb_u0ASWS_h;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtSWRLS-TOInport1' */
    rty_SWRLSTO[0] = rtb_W11A21ASWRLS_c;
    rty_SWRLSTO[1] = rtb_W11B21BSWRLS_j;
    rty_SWRLSTO[2] = rtb_W21CSWRLS_j;
    rty_SWRLSTO[3] = rtb_W13A23ASWRLS_g;
    rty_SWRLSTO[4] = rtb_W13B23BSWRLS_k;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtT-AS-TOInport1' */
    rty_TASTO[0] = rtb_JL10TAS_j;
    rty_TASTO[1] = rtb_JL20TAS_m;
    rty_TASTO[2] = rtb_J12ATAS_n;
    rty_TASTO[3] = rtb_J22ATAS_h;
    rty_TASTO[4] = rtb_J12BTAS_h;
    rty_TASTO[5] = rtb_J22BTAS_er;
    rty_TASTO[6] = rtb_J14TAS_b;
    rty_TASTO[7] = rtb_J24TAS_j;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtT-ES-TOInport1' */
    rty_TESTO[0] = rtb_u0BTES_l;
    rty_TESTO[1] = rtb_u1ATES_ok;
    rty_TESTO[2] = rtb_u1BTES_m;
    rty_TESTO[3] = rtb_u2ATES_g;
    rty_TESTO[4] = rtb_u2BTES_a;
    rty_TESTO[5] = rtb_u2CTES_p;
    rty_TESTO[6] = rtb_u2DTES_i;
    rty_TESTO[7] = rtb_u3ATES_i;
    rty_TESTO[8] = rtb_u3BTES_gn;
    rty_TESTO[9] = rtb_u4ATES_m;
    rty_TESTO[10] = rtb_u0BTES_j;
    rty_TESTO[11] = rtb_u1ATES_g;
    rty_TESTO[12] = rtb_u1BTES_gi;
    rty_TESTO[13] = rtb_u1CTES_b;
    rty_TESTO[14] = rtb_u2ATES_o;
    rty_TESTO[15] = rtb_u2BTES_f;
    rty_TESTO[16] = rtb_u2CTES_o;
    rty_TESTO[17] = rtb_u2DTES_b5;
    rty_TESTO[18] = rtb_u3ATES_d;
    rty_TESTO[19] = rtb_u3BTES_et;
    rty_TESTO[20] = rtb_u4ATES_ia;
    rty_TESTO[21] = rtb_u4BTES;
    rty_TESTO[22] = rtb_u4BTES_n;
    rty_TESTO[23] = rtb_u2ETES;
    rty_TESTO[24] = rtb_u2ETES_o;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtT-WS-TOInport1' */
    rty_TWSTO[0] = rtb_u0BTWS_m;
    rty_TWSTO[1] = rtb_u1ATWS_he;
    rty_TWSTO[2] = rtb_u1BTWS_l;
    rty_TWSTO[3] = rtb_u2BTWS_f;
    rty_TWSTO[4] = rtb_u2CTWS_d;
    rty_TWSTO[5] = rtb_u2DTWS_i;
    rty_TWSTO[6] = rtb_u2ETWS_b;
    rty_TWSTO[7] = rtb_u3ATWS_e;
    rty_TWSTO[8] = rtb_u3BTWS_n;
    rty_TWSTO[9] = rtb_u4ATWS_d;
    rty_TWSTO[10] = rtb_u0BTWS_e;
    rty_TWSTO[11] = rtb_u1ATWS_j;
    rty_TWSTO[12] = rtb_u1BTWS_m;
    rty_TWSTO[13] = rtb_u1CTWS_c;
    rty_TWSTO[14] = rtb_u2BTWS_h;
    rty_TWSTO[15] = rtb_u2CTWS_o;
    rty_TWSTO[16] = rtb_u2DTWS_k0;
    rty_TWSTO[17] = rtb_u2ETWS_m;
    rty_TWSTO[18] = rtb_u3ATWS_d;
    rty_TWSTO[19] = rtb_u3BTWS_f;
    rty_TWSTO[20] = rtb_u4ATWS_f;
    rty_TWSTO[21] = rtb_u0ATWS;
    rty_TWSTO[22] = rtb_u0ATWS_i;
    rty_TWSTO[23] = rtb_u2ATWS;
    rty_TWSTO[24] = rtb_u2ATWS_n;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtTO-DEPInport1' */
    rty_TODEP[0] = rtb_DEPGRDO_o;
    rty_TODEP[1] = *rtu_RRFROM;
    rty_TODEP[2] = rtb_RRLSXDEP;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtTP-TOInport1' */
    rty_TPTO[0] = rtb_u0ATP_b;
    rty_TPTO[1] = rtb_u0BTP_ep;
    rty_TPTO[2] = rtb_u1ATP_k;
    rty_TPTO[3] = rtb_u1BTP_ac;
    rty_TPTO[4] = rtb_u2ATP_b;
    rty_TPTO[5] = rtb_u2BTP_c;
    rty_TPTO[6] = rtb_u2CTP_f;
    rty_TPTO[7] = rtb_u2DTP_p;
    rty_TPTO[8] = rtb_u2ETP_a;
    rty_TPTO[9] = rtb_u3ATP_od;
    rty_TPTO[10] = rtb_u3BTP_i;
    rty_TPTO[11] = rtb_u4ATP_n1;
    rty_TPTO[12] = rtb_u4BTP_n;
    rty_TPTO[13] = rtb_u0ATP_g3;
    rty_TPTO[14] = rtb_u0BTP_mt;
    rty_TPTO[15] = rtb_u1ATP_o;
    rty_TPTO[16] = rtb_u1BTP_nz;
    rty_TPTO[17] = rtb_u1CTP_dm;
    rty_TPTO[18] = rtb_u2ATP_mb;
    rty_TPTO[19] = rtb_u2BTP_a;
    rty_TPTO[20] = rtb_u2CTP_a;
    rty_TPTO[21] = rtb_u2DTP_e;
    rty_TPTO[22] = rtb_u2ETP_b;
    rty_TPTO[23] = rtb_u3ATP_lr;
    rty_TPTO[24] = rtb_u3BTP_k4;
    rty_TPTO[25] = rtb_u4ATP_p;
    rty_TPTO[26] = rtb_u4BTP_hz;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtTPZ-TOInport1' */
    rty_TPZTO[0] = rtb_W11A21ATPZ_c0;
    rty_TPZTO[1] = rtb_W11B21BTPZ_f;
    rty_TPZTO[2] = rtb_W21CTPZ_l;
    rty_TPZTO[3] = rtb_W13A23ATPZ_m;
    rty_TPZTO[4] = rtb_W13B23BTPZ_o;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtWLPR-DOInport1' */
    rty_WLPRDO[0] = rtb_W11A21AWLPRDO;
    rty_WLPRDO[1] = rtb_W11B21BWLPRDO;
    rty_WLPRDO[2] = rtb_W21CWLPRDO;
    rty_WLPRDO[3] = rtb_W13A23AWLPRDO;
    rty_WLPRDO[4] = rtb_W13B23BWLPRDO;
  }

  clockTickCounter_0 = clockTickCounter;
  clockTickCounter_j_0 = clockTickCounter_j;

  /* Logic: '<S280>/OR1' */
  VITALMAIN_DW.M_RLS_24A = M_RLS_24A;
  VITALMAIN_DW.M_RRLSPB_CTRL_DEP = M_RRLSPB_CTRL_DEP;
  VITALMAIN_DW.M_TP_DEP = M_TP_DEP;
  VITALMAIN_DW.M_CHK_NV_V = M_CHK_NV_V;
  VITALMAIN_DW.M_RR = M_RR;
  VITALMAIN_DW.M_REQ_T_12_14 = M_REQ_T_12_14;
  VITALMAIN_DW.M_REQ_T_12_24 = M_REQ_T_12_24;
  VITALMAIN_DW.M_REQ_T_12_10 = M_REQ_T_12_10;
  VITALMAIN_DW.M_REQ_T_12_20 = M_REQ_T_12_20;
  VITALMAIN_DW.M_REQ_T_14_12 = M_REQ_T_14_12;
  VITALMAIN_DW.M_REQ_T_14_22 = M_REQ_T_14_22;
  VITALMAIN_DW.M_REQ_T_22_14 = M_REQ_T_22_14;
  VITALMAIN_DW.M_REQ_T_22_24 = M_REQ_T_22_24;
  VITALMAIN_DW.M_REQ_T_22_10 = M_REQ_T_22_10;
  VITALMAIN_DW.M_REQ_T_22_20 = M_REQ_T_22_20;
  VITALMAIN_DW.M_REQ_T_24_12 = M_REQ_T_24_12;
  VITALMAIN_DW.M_REQ_T_24_22 = M_REQ_T_24_22;
  VITALMAIN_DW.M_REQ_T_10_12 = M_REQ_T_10_12;
  VITALMAIN_DW.M_REQ_T_10_22 = M_REQ_T_10_22;
  VITALMAIN_DW.M_REQ_T_20_12 = M_REQ_T_20_12;
  VITALMAIN_DW.M_REQ_T_20_22 = M_REQ_T_20_22;
  VITALMAIN_DW.M_W11A_21A_N_REQ = M_W11A_21A_N_REQ;
  VITALMAIN_DW.M_W11B_21B_N_REQ = M_W11B_21B_N_REQ;
  VITALMAIN_DW.M_W13A_23A_N_REQ = M_W13A_23A_N_REQ;
  VITALMAIN_DW.M_W13B_23B_N_REQ = M_W13B_23B_N_REQ;
  VITALMAIN_DW.M_W21C_N_REQ = M_W21C_N_REQ;
  VITALMAIN_DW.M_W11A_21A_R_REQ = M_W11A_21A_R_REQ;
  VITALMAIN_DW.M_W11B_21B_R_REQ = M_W11B_21B_R_REQ;
  VITALMAIN_DW.M_W13A_23A_R_REQ = M_W13A_23A_R_REQ;
  VITALMAIN_DW.M_W13B_23B_R_REQ = M_W13B_23B_R_REQ;
  VITALMAIN_DW.M_W21C_R_REQ = M_W21C_R_REQ;
  VITALMAIN_DW.M_W11A_21A_OOC = M_W11A_21A_OOC;
  VITALMAIN_DW.M_W11B_21B_OOC = M_W11B_21B_OOC;
  VITALMAIN_DW.M_W13A_23A_OOC = M_W13A_23A_OOC;
  VITALMAIN_DW.M_W13B_23B_OOC = M_W13B_23B_OOC;
  VITALMAIN_DW.M_W21C_OOC = M_W21C_OOC;
  VITALMAIN_DW.M_RRLSPB_CTRL_J12A = M_RRLSPB_CTRL_J12A;
  VITALMAIN_DW.M_RRLSPB_CTRL_J12B = M_RRLSPB_CTRL_J12B;
  VITALMAIN_DW.M_RRLSPB_CTRL_J22A = M_RRLSPB_CTRL_J22A;
  VITALMAIN_DW.M_RRLSPB_CTRL_J22B = M_RRLSPB_CTRL_J22B;
  VITALMAIN_DW.M_RRLSPB_CTRL_X10 = M_RRLSPB_CTRL_X10;
  VITALMAIN_DW.M_RRLSPB_CTRL_X14 = M_RRLSPB_CTRL_X14;
  VITALMAIN_DW.M_RRLSPB_CTRL_X20 = M_RRLSPB_CTRL_X20;
  VITALMAIN_DW.M_RRLSPB_CTRL_X24 = M_RRLSPB_CTRL_X24;
  VITALMAIN_DW.M_W11A_21A_SWRLSPB_CTRL = M_W11A_21A_SWRLSPB_CTRL;
  VITALMAIN_DW.M_W11B_21B_SWRLSPB_CTRL = M_W11B_21B_SWRLSPB_CTRL;
  VITALMAIN_DW.M_W13A_23A_SWRLSPB_CTRL = M_W13A_23A_SWRLSPB_CTRL;
  VITALMAIN_DW.M_W13B_23B_SWRLSPB_CTRL = M_W13B_23B_SWRLSPB_CTRL;
  VITALMAIN_DW.M_W21C_SWRLSPB_CTRL = M_W21C_SWRLSPB_CTRL;
  VITALMAIN_DW.M_RS_DEP_10 = M_RS_DEP_10;
  VITALMAIN_DW.M_REQ_S_DEP_10 = M_REQ_S_DEP_10;
  VITALMAIN_DW.M_RS_DEP_20 = M_RS_DEP_20;
  VITALMAIN_DW.M_REQ_S_DEP_20 = M_REQ_S_DEP_20;
  VITALMAIN_DW.M_RS_10_DEP = M_RS_10_DEP;
  VITALMAIN_DW.M_REQ_S_10_DEP = M_REQ_S_10_DEP;
  VITALMAIN_DW.M_RS_20_DEP = M_RS_20_DEP;
  VITALMAIN_DW.M_REQ_S_20_DEP = M_REQ_S_20_DEP;
  VITALMAIN_DW.DI_VDR = DI_VDR;
  VITALMAIN_DW.DI_TPR_10A = DI_TPR_10A;
  VITALMAIN_DW.DI_TPR_10B = DI_TPR_10B;
  VITALMAIN_DW.DI_TPR_11A = DI_TPR_11A;
  VITALMAIN_DW.DI_TPR_11B = DI_TPR_11B;
  VITALMAIN_DW.DI_TPR_12A = DI_TPR_12A;
  VITALMAIN_DW.DI_TPR_12B = DI_TPR_12B;
  VITALMAIN_DW.DI_TPR_12C = DI_TPR_12C;
  VITALMAIN_DW.DI_TPR_12D = DI_TPR_12D;
  VITALMAIN_DW.DI_TPR_12E = DI_TPR_12E;
  VITALMAIN_DW.DI_TPR_13A = DI_TPR_13A;
  VITALMAIN_DW.DI_TPR_13B = DI_TPR_13B;
  VITALMAIN_DW.DI_TPR_14A = DI_TPR_14A;
  VITALMAIN_DW.DI_TPR_14B = DI_TPR_14B;
  VITALMAIN_DW.DI_TPR_20A = DI_TPR_20A;
  VITALMAIN_DW.DI_TPR_20B = DI_TPR_20B;
  VITALMAIN_DW.DI_TPR_21A = DI_TPR_21A;
  VITALMAIN_DW.DI_TPR_21B = DI_TPR_21B;
  VITALMAIN_DW.DI_TPR_21C = DI_TPR_21C;
  VITALMAIN_DW.DI_TPR_22A = DI_TPR_22A;
  VITALMAIN_DW.DI_TPR_22B = DI_TPR_22B;
  VITALMAIN_DW.DI_TPR_22C = DI_TPR_22C;
  VITALMAIN_DW.DI_TPR_22D = DI_TPR_22D;
  VITALMAIN_DW.DI_TPR_22E = DI_TPR_22E;
  VITALMAIN_DW.DI_TPR_23A = DI_TPR_23A;
  VITALMAIN_DW.DI_TPR_23B = DI_TPR_23B;
  VITALMAIN_DW.DI_TPR_24A = DI_TPR_24A;
  VITALMAIN_DW.DI_TPR_24B = DI_TPR_24B;
  VITALMAIN_DW.DI_NWP_W11A_21A = DI_NWP_W11A_21A;
  VITALMAIN_DW.DI_NWP_W11B_21B = DI_NWP_W11B_21B;
  VITALMAIN_DW.DI_NWP_W13A_23A = DI_NWP_W13A_23A;
  VITALMAIN_DW.DI_NWP_W13B_23B = DI_NWP_W13B_23B;
  VITALMAIN_DW.DI_NWP_W21C = DI_NWP_W21C;
  VITALMAIN_DW.DI_RWP_W11A_21A = DI_RWP_W11A_21A;
  VITALMAIN_DW.DI_RWP_W11B_21B = DI_RWP_W11B_21B;
  VITALMAIN_DW.DI_RWP_W13A_23A = DI_RWP_W13A_23A;
  VITALMAIN_DW.DI_RWP_W13B_23B = DI_RWP_W13B_23B;
  VITALMAIN_DW.DI_RWP_W21C = DI_RWP_W21C;
  VITALMAIN_DW.DI_COMM_1 = DI_COMM_1;
  VITALMAIN_DW.DI_COMM_2 = DI_COMM_2;
  VITALMAIN_DW.DI_SYS_1 = DI_SYS_1;
  VITALMAIN_DW.DI_SYS_2 = DI_SYS_2;
  VITALMAIN_DW.M_DEP_GR_DO = M_DEP_GR_DO;
  VITALMAIN_DW.M_RRLS_XDEP = M_RRLS_XDEP;
  VITALMAIN_DW.M_CHK_V_NV = M_CHK_V_NV;
  VITALMAIN_DW.M_TP_10A = M_TP_10A;
  VITALMAIN_DW.M_TP_10B = M_TP_10B;
  VITALMAIN_DW.M_TP_11A = M_TP_11A;
  VITALMAIN_DW.M_TP_11B = M_TP_11B;
  VITALMAIN_DW.M_TP_12A = M_TP_12A;
  VITALMAIN_DW.M_TP_12B = M_TP_12B;
  VITALMAIN_DW.M_TP_12C = M_TP_12C;
  VITALMAIN_DW.M_TP_12D = M_TP_12D;
  VITALMAIN_DW.M_TP_12E = M_TP_12E;
  VITALMAIN_DW.M_TP_13A = M_TP_13A;
  VITALMAIN_DW.M_TP_13B = M_TP_13B;
  VITALMAIN_DW.M_TP_14A = M_TP_14A;
  VITALMAIN_DW.M_TP_14B = M_TP_14B;
  VITALMAIN_DW.M_TP_20A = M_TP_20A;
  VITALMAIN_DW.M_TP_20B = M_TP_20B;
  VITALMAIN_DW.M_TP_21A = M_TP_21A;
  VITALMAIN_DW.M_TP_21B = M_TP_21B;
  VITALMAIN_DW.M_TP_21C = M_TP_21C;
  VITALMAIN_DW.M_TP_22A = M_TP_22A;
  VITALMAIN_DW.M_TP_22B = M_TP_22B;
  VITALMAIN_DW.M_TP_22C = M_TP_22C;
  VITALMAIN_DW.M_TP_22D = M_TP_22D;
  VITALMAIN_DW.M_TP_22E = M_TP_22E;
  VITALMAIN_DW.M_TP_23A = M_TP_23A;
  VITALMAIN_DW.M_TP_23B = M_TP_23B;
  VITALMAIN_DW.M_TP_24A = M_TP_24A;
  VITALMAIN_DW.M_TP_24B = M_TP_24B;
  VITALMAIN_DW.M_T_ES_10B = M_T_ES_10B;
  VITALMAIN_DW.M_T_ES_11A = M_T_ES_11A;
  VITALMAIN_DW.M_T_ES_11B = M_T_ES_11B;
  VITALMAIN_DW.M_T_ES_12A = M_T_ES_12A;
  VITALMAIN_DW.M_T_ES_12B = M_T_ES_12B;
  VITALMAIN_DW.M_T_ES_12C = M_T_ES_12C;
  VITALMAIN_DW.M_T_ES_12D = M_T_ES_12D;
  VITALMAIN_DW.M_T_ES_12E = M_T_ES_12E;
  VITALMAIN_DW.M_T_ES_13A = M_T_ES_13A;
  VITALMAIN_DW.M_T_ES_13B = M_T_ES_13B;
  VITALMAIN_DW.M_T_ES_14A = M_T_ES_14A;
  VITALMAIN_DW.M_T_ES_14B = M_T_ES_14B;
  VITALMAIN_DW.M_T_ES_20B = M_T_ES_20B;
  VITALMAIN_DW.M_T_ES_21A = M_T_ES_21A;
  VITALMAIN_DW.M_T_ES_21B = M_T_ES_21B;
  VITALMAIN_DW.M_T_ES_21C = M_T_ES_21C;
  VITALMAIN_DW.M_T_ES_22A = M_T_ES_22A;
  VITALMAIN_DW.M_T_ES_22B = M_T_ES_22B;
  VITALMAIN_DW.M_T_ES_22C = M_T_ES_22C;
  VITALMAIN_DW.M_T_ES_22D = M_T_ES_22D;
  VITALMAIN_DW.M_T_ES_22E = M_T_ES_22E;
  VITALMAIN_DW.M_T_ES_23A = M_T_ES_23A;
  VITALMAIN_DW.M_T_ES_23B = M_T_ES_23B;
  VITALMAIN_DW.M_T_ES_24A = M_T_ES_24A;
  VITALMAIN_DW.M_T_ES_24B = M_T_ES_24B;
  VITALMAIN_DW.M_T_WS_10A = M_T_WS_10A;
  VITALMAIN_DW.M_T_WS_10B = M_T_WS_10B;
  VITALMAIN_DW.M_T_WS_11A = M_T_WS_11A;
  VITALMAIN_DW.M_T_WS_11B = M_T_WS_11B;
  VITALMAIN_DW.M_T_WS_12A = M_T_WS_12A;
  VITALMAIN_DW.M_T_WS_12B = M_T_WS_12B;
  VITALMAIN_DW.M_T_WS_12C = M_T_WS_12C;
  VITALMAIN_DW.M_T_WS_12D = M_T_WS_12D;
  VITALMAIN_DW.M_T_WS_12E = M_T_WS_12E;
  VITALMAIN_DW.M_T_WS_13A = M_T_WS_13A;
  VITALMAIN_DW.M_T_WS_13B = M_T_WS_13B;
  VITALMAIN_DW.M_T_WS_14A = M_T_WS_14A;
  VITALMAIN_DW.M_T_WS_20A = M_T_WS_20A;
  VITALMAIN_DW.M_T_WS_20B = M_T_WS_20B;
  VITALMAIN_DW.M_T_WS_21A = M_T_WS_21A;
  VITALMAIN_DW.M_T_WS_21B = M_T_WS_21B;
  VITALMAIN_DW.M_T_WS_21C = M_T_WS_21C;
  VITALMAIN_DW.M_T_WS_22A = M_T_WS_22A;
  VITALMAIN_DW.M_T_WS_22B = M_T_WS_22B;
  VITALMAIN_DW.M_T_WS_22C = M_T_WS_22C;
  VITALMAIN_DW.M_T_WS_22D = M_T_WS_22D;
  VITALMAIN_DW.M_T_WS_22E = M_T_WS_22E;
  VITALMAIN_DW.M_T_WS_23A = M_T_WS_23A;
  VITALMAIN_DW.M_T_WS_23B = M_T_WS_23B;
  VITALMAIN_DW.M_T_WS_24A = M_T_WS_24A;
  VITALMAIN_DW.M_S_ES_10B = M_S_ES_10B;
  VITALMAIN_DW.M_S_ES_11A = M_S_ES_11A;
  VITALMAIN_DW.M_S_ES_11B = M_S_ES_11B;
  VITALMAIN_DW.M_S_ES_20B = M_S_ES_20B;
  VITALMAIN_DW.M_S_ES_21A = M_S_ES_21A;
  VITALMAIN_DW.M_S_ES_21B = M_S_ES_21B;
  VITALMAIN_DW.M_S_ES_21C = M_S_ES_21C;
  VITALMAIN_DW.M_S_WS_10A = M_S_WS_10A;
  VITALMAIN_DW.M_S_WS_10B = M_S_WS_10B;
  VITALMAIN_DW.M_S_WS_11A = M_S_WS_11A;
  VITALMAIN_DW.M_S_WS_11B = M_S_WS_11B;
  VITALMAIN_DW.M_S_WS_20A = M_S_WS_20A;
  VITALMAIN_DW.M_S_WS_20B = M_S_WS_20B;
  VITALMAIN_DW.M_S_WS_21A = M_S_WS_21A;
  VITALMAIN_DW.M_S_WS_21B = M_S_WS_21B;
  VITALMAIN_DW.M_S_WS_21C = M_S_WS_21C;
  VITALMAIN_DW.M_W11A_21A_NWC = M_W11A_21A_NWC;
  VITALMAIN_DW.M_W11B_21B_NWC = M_W11B_21B_NWC;
  VITALMAIN_DW.M_W13A_23A_NWC = M_W13A_23A_NWC;
  VITALMAIN_DW.M_W13B_23B_NWC = M_W13B_23B_NWC;
  VITALMAIN_DW.M_W21C_NWC = M_W21C_NWC;
  VITALMAIN_DW.M_W11A_21A_NWP = M_W11A_21A_NWP;
  VITALMAIN_DW.M_W11B_21B_NWP = M_W11B_21B_NWP;
  VITALMAIN_DW.M_W13A_23A_NWP = M_W13A_23A_NWP;
  VITALMAIN_DW.M_W13B_23B_NWP = M_W13B_23B_NWP;
  VITALMAIN_DW.M_W21C_NWP = M_W21C_NWP;
  VITALMAIN_DW.M_W11A_21A_NWZ = M_W11A_21A_NWZ;
  VITALMAIN_DW.M_W11B_21B_NWZ = M_W11B_21B_NWZ;
  VITALMAIN_DW.M_W13A_23A_NWZ = M_W13A_23A_NWZ;
  VITALMAIN_DW.M_W13B_23B_NWZ = M_W13B_23B_NWZ;
  VITALMAIN_DW.M_W21C_NWZ = M_W21C_NWZ;
  VITALMAIN_DW.M_W11A_21A_NW_TE = M_W11A_21A_NW_TE;
  VITALMAIN_DW.M_W11B_21B_NW_TE = M_W11B_21B_NW_TE;
  VITALMAIN_DW.M_W13A_23A_NW_TE = M_W13A_23A_NW_TE;
  VITALMAIN_DW.M_W13B_23B_NW_TE = M_W13B_23B_NW_TE;
  VITALMAIN_DW.M_W21C_NW_TE = M_W21C_NW_TE;
  VITALMAIN_DW.M_W11A_21A_RWC = M_W11A_21A_RWC;
  VITALMAIN_DW.M_W11B_21B_RWC = M_W11B_21B_RWC;
  VITALMAIN_DW.M_W13A_23A_RWC = M_W13A_23A_RWC;
  VITALMAIN_DW.M_W13B_23B_RWC = M_W13B_23B_RWC;
  VITALMAIN_DW.M_W21C_RWC = M_W21C_RWC;
  VITALMAIN_DW.M_W11A_21A_RWP = M_W11A_21A_RWP;
  VITALMAIN_DW.M_W11B_21B_RWP = M_W11B_21B_RWP;
  VITALMAIN_DW.M_W13A_23A_RWP = M_W13A_23A_RWP;
  VITALMAIN_DW.M_W13B_23B_RWP = M_W13B_23B_RWP;
  VITALMAIN_DW.M_W21C_RWP = M_W21C_RWP;
  VITALMAIN_DW.M_W11A_21A_RWZ = M_W11A_21A_RWZ;
  VITALMAIN_DW.M_W11B_21B_RWZ = M_W11B_21B_RWZ;
  VITALMAIN_DW.M_W13A_23A_RWZ = M_W13A_23A_RWZ;
  VITALMAIN_DW.M_W13B_23B_RWZ = M_W13B_23B_RWZ;
  VITALMAIN_DW.M_W21C_RWZ = M_W21C_RWZ;
  VITALMAIN_DW.M_W11A_21A_RW_TE = M_W11A_21A_RW_TE;
  VITALMAIN_DW.M_W11B_21B_RW_TE = M_W11B_21B_RW_TE;
  VITALMAIN_DW.M_W13A_23A_RW_TE = M_W13A_23A_RW_TE;
  VITALMAIN_DW.M_W13B_23B_RW_TE = M_W13B_23B_RW_TE;
  VITALMAIN_DW.M_W21C_RW_TE = M_W21C_RW_TE;
  VITALMAIN_DW.M_W11A_21A_L = M_W11A_21A_L;
  VITALMAIN_DW.M_W11B_21B_L = M_W11B_21B_L;
  VITALMAIN_DW.M_W13A_23A_L = M_W13A_23A_L;
  VITALMAIN_DW.M_W13B_23B_L = M_W13B_23B_L;
  VITALMAIN_DW.M_W21C_L = M_W21C_L;
  VITALMAIN_DW.M_W11A_21A_LS = M_W11A_21A_LS;
  VITALMAIN_DW.M_W11B_21B_LS = M_W11B_21B_LS;
  VITALMAIN_DW.M_W13A_23A_LS = M_W13A_23A_LS;
  VITALMAIN_DW.M_W13B_23B_LS = M_W13B_23B_LS;
  VITALMAIN_DW.M_W21C_LS = M_W21C_LS;
  VITALMAIN_DW.M_W11A_21A_SWRLS = M_W11A_21A_SWRLS;
  VITALMAIN_DW.M_W11B_21B_SWRLS = M_W11B_21B_SWRLS;
  VITALMAIN_DW.M_W13A_23A_SWRLS = M_W13A_23A_SWRLS;
  VITALMAIN_DW.M_W13B_23B_SWRLS = M_W13B_23B_SWRLS;
  VITALMAIN_DW.M_W21C_SWRLS = M_W21C_SWRLS;
  VITALMAIN_DW.M_W11A_21A_TPZ = M_W11A_21A_TPZ;
  VITALMAIN_DW.M_W11B_21B_TPZ = M_W11B_21B_TPZ;
  VITALMAIN_DW.M_W13A_23A_TPZ = M_W13A_23A_TPZ;
  VITALMAIN_DW.M_W13B_23B_TPZ = M_W13B_23B_TPZ;
  VITALMAIN_DW.M_W21C_TPZ = M_W21C_TPZ;
  VITALMAIN_DW.DO_J12A_DR = DO_J12A_DR;
  VITALMAIN_DW.DO_J12B_DR = DO_J12B_DR;
  VITALMAIN_DW.DO_J14_DR = DO_J14_DR;
  VITALMAIN_DW.DO_J22A_DR = DO_J22A_DR;
  VITALMAIN_DW.DO_J22B_DR = DO_J22B_DR;
  VITALMAIN_DW.DO_J24_DR = DO_J24_DR;
  VITALMAIN_DW.DO_JL10_DR = DO_JL10_DR;
  VITALMAIN_DW.DO_JL20_DR = DO_JL20_DR;
  VITALMAIN_DW.DO_JL10_GR = DO_JL10_GR;
  VITALMAIN_DW.DO_JL20_GR = DO_JL20_GR;
  VITALMAIN_DW.M_AS_T_J12A = M_AS_T_J12A;
  VITALMAIN_DW.M_AS_T_J12B = M_AS_T_J12B;
  VITALMAIN_DW.M_AS_T_J14 = M_AS_T_J14;
  VITALMAIN_DW.M_AS_T_J22A = M_AS_T_J22A;
  VITALMAIN_DW.M_AS_T_J22B = M_AS_T_J22B;
  VITALMAIN_DW.M_AS_T_J24 = M_AS_T_J24;
  VITALMAIN_DW.M_AS_T_JL10 = M_AS_T_JL10;
  VITALMAIN_DW.M_AS_T_JL20 = M_AS_T_JL20;
  VITALMAIN_DW.M_AS_S_DEP = M_AS_S_DEP;
  VITALMAIN_DW.M_AS_S_JL10 = M_AS_S_JL10;
  VITALMAIN_DW.M_AS_S_JL20 = M_AS_S_JL20;
  VITALMAIN_DW.M_RRLS_J12A = M_RRLS_J12A;
  VITALMAIN_DW.M_RRLS_J12B = M_RRLS_J12B;
  VITALMAIN_DW.M_RRLS_J22A = M_RRLS_J22A;
  VITALMAIN_DW.M_RRLS_J22B = M_RRLS_J22B;
  VITALMAIN_DW.M_RRLS_X10 = M_RRLS_X10;
  VITALMAIN_DW.M_RRLS_X14 = M_RRLS_X14;
  VITALMAIN_DW.M_RRLS_X20 = M_RRLS_X20;
  VITALMAIN_DW.M_RRLS_X24 = M_RRLS_X24;
  VITALMAIN_DW.DO_VDR = DO_VDR;
  VITALMAIN_DW.DO_NWR_W11A_21A = DO_NWR_W11A_21A;
  VITALMAIN_DW.DO_NWR_W11B_21B = DO_NWR_W11B_21B;
  VITALMAIN_DW.DO_NWR_W13A_23A = DO_NWR_W13A_23A;
  VITALMAIN_DW.DO_NWR_W13B_23B = DO_NWR_W13B_23B;
  VITALMAIN_DW.DO_NWR_W21C = DO_NWR_W21C;
  VITALMAIN_DW.DO_RWR_W11A_21A = DO_RWR_W11A_21A;
  VITALMAIN_DW.DO_RWR_W11B_21B = DO_RWR_W11B_21B;
  VITALMAIN_DW.DO_RWR_W13A_23A = DO_RWR_W13A_23A;
  VITALMAIN_DW.DO_RWR_W13B_23B = DO_RWR_W13B_23B;
  VITALMAIN_DW.DO_RWR_W21C = DO_RWR_W21C;
  VITALMAIN_DW.DO_WLPR_W11A_21A = DO_WLPR_W11A_21A;
  VITALMAIN_DW.DO_WLPR_W11B_21B = DO_WLPR_W11B_21B;
  VITALMAIN_DW.DO_WLPR_W13A_23A = DO_WLPR_W13A_23A;
  VITALMAIN_DW.DO_WLPR_W13B_23B = DO_WLPR_W13B_23B;
  VITALMAIN_DW.DO_WLPR_W21C = DO_WLPR_W21C;
  VITALMAIN_DW.M_SWRLS_k = M_SWRLS_k;
  VITALMAIN_DW.M_RRLS_l = M_RRLS_l;
  VITALMAIN_DW.M_RRLSTE_DEP = M_RRLSTE_DEP;
  VITALMAIN_DW.M_RRLSTE_J12A = M_RRLSTE_J12A;
  VITALMAIN_DW.M_RRLSTE_J12B = M_RRLSTE_J12B;
  VITALMAIN_DW.M_RRLSTE_J22A = M_RRLSTE_J22A;
  VITALMAIN_DW.M_RRLSTE_J22B = M_RRLSTE_J22B;
  VITALMAIN_DW.M_RRLSTE_X10 = M_RRLSTE_X10;
  VITALMAIN_DW.M_RRLSTE_X14 = M_RRLSTE_X14;
  VITALMAIN_DW.M_RRLSTE_X20 = M_RRLSTE_X20;
  VITALMAIN_DW.M_L_S_DEP_10 = M_L_S_DEP_10;
  VITALMAIN_DW.M_AS_SR_S_DEP_10 = M_AS_SR_S_DEP_10;
  VITALMAIN_DW.M_L_S_DEP_20 = M_L_S_DEP_20;
  VITALMAIN_DW.M_AS_SR_S_DEP_20 = M_AS_SR_S_DEP_20;
  VITALMAIN_DW.M_L_S_10_DEP = M_L_S_10_DEP;
  VITALMAIN_DW.M_AS_SR_S_10_DEP = M_AS_SR_S_10_DEP;
  VITALMAIN_DW.M_L_S_20_DEP = M_L_S_20_DEP;
  VITALMAIN_DW.M_RL_T_WS_21C = M_RL_T_WS_21C;
  VITALMAIN_DW.M_RL_S_ES_10B = M_RL_S_ES_10B;
  VITALMAIN_DW.M_RL_T_ES_10B = M_RL_T_ES_10B;
  VITALMAIN_DW.M_RL_T_WS_11B = M_RL_T_WS_11B;
  VITALMAIN_DW.M_RL_T_ES_13A = M_RL_T_ES_13A;
  VITALMAIN_DW.M_RL_T_WS_14A = M_RL_T_WS_14A;
  VITALMAIN_DW.M_RL_S_ES_20B = M_RL_S_ES_20B;
  VITALMAIN_DW.M_RL_T_ES_20B = M_RL_T_ES_20B;
  VITALMAIN_DW.M_RL_S_WS_21C = M_RL_S_WS_21C;
  VITALMAIN_DW.M_RL_T_ES_23A = M_RL_T_ES_23A;
  VITALMAIN_DW.M_RL_T_WS_24A = M_RL_T_WS_24A;
  VITALMAIN_DW.M_RLS_10A = M_RLS_10A;
  VITALMAIN_DW.M_RLS_10B = M_RLS_10B;
  VITALMAIN_DW.M_RLS_11A = M_RLS_11A;
  VITALMAIN_DW.M_RLS_11B = M_RLS_11B;
  VITALMAIN_DW.M_RLS_12A = M_RLS_12A;
  VITALMAIN_DW.M_RLS_12B = M_RLS_12B;
  VITALMAIN_DW.M_RLS_12C = M_RLS_12C;
  VITALMAIN_DW.M_RLS_12D = M_RLS_12D;
  VITALMAIN_DW.M_RLS_12E = M_RLS_12E;
  VITALMAIN_DW.M_RLS_13A = M_RLS_13A;
  VITALMAIN_DW.M_RLS_13B = M_RLS_13B;
  VITALMAIN_DW.M_RLS_14A = M_RLS_14A;
  VITALMAIN_DW.M_RLS_14B = M_RLS_14B;
  VITALMAIN_DW.M_RLS_20A = M_RLS_20A;
  VITALMAIN_DW.M_RLS_20B = M_RLS_20B;
  VITALMAIN_DW.M_RLS_21A = M_RLS_21A;
  VITALMAIN_DW.M_RLS_21B = M_RLS_21B;
  VITALMAIN_DW.M_RLS_21C = M_RLS_21C;
  VITALMAIN_DW.M_RLS_22A = M_RLS_22A;
  VITALMAIN_DW.M_RLS_22B = M_RLS_22B;
  VITALMAIN_DW.M_RLS_22C = M_RLS_22C;
  VITALMAIN_DW.M_RLS_22D = M_RLS_22D;
  VITALMAIN_DW.M_RLS_22E = M_RLS_22E;
  VITALMAIN_DW.M_RLS_23A = M_RLS_23A;
  VITALMAIN_DW.M_RLS_23B = M_RLS_23B;
  VITALMAIN_DW.M_RLS_24B = M_RLS_24B;
  VITALMAIN_DW.M_R_S_DEP_10 = M_R_S_DEP_10;
  VITALMAIN_DW.M_R_S_DEP_20 = M_R_S_DEP_20;
  VITALMAIN_DW.M_L_T_12_10 = M_L_T_12_10;
  VITALMAIN_DW.M_R_H_12_10 = M_R_H_12_10;
  VITALMAIN_DW.M_L_T_12_20 = M_L_T_12_20;
  VITALMAIN_DW.M_R_H_12_20 = M_R_H_12_20;
  VITALMAIN_DW.M_L_T_12_14 = M_L_T_12_14;
  VITALMAIN_DW.M_R_H_12_14 = M_R_H_12_14;
  VITALMAIN_DW.M_L_T_12_24 = M_L_T_12_24;
  VITALMAIN_DW.M_R_H_12_24 = M_R_H_12_24;
  VITALMAIN_DW.M_L_T_14_12 = M_L_T_14_12;
  VITALMAIN_DW.M_R_D_14_12 = M_R_D_14_12;
  VITALMAIN_DW.M_L_T_14_22 = M_L_T_14_22;
  VITALMAIN_DW.M_R_D_14_22 = M_R_D_14_22;
  VITALMAIN_DW.M_L_T_22_10 = M_L_T_22_10;
  VITALMAIN_DW.M_R_H_22_10 = M_R_H_22_10;
  VITALMAIN_DW.M_L_T_22_20 = M_L_T_22_20;
  VITALMAIN_DW.M_R_H_22_20 = M_R_H_22_20;
  VITALMAIN_DW.M_L_T_22_14 = M_L_T_22_14;
  VITALMAIN_DW.M_R_H_22_14 = M_R_H_22_14;
  VITALMAIN_DW.M_L_T_22_24 = M_L_T_22_24;
  VITALMAIN_DW.M_R_H_22_24 = M_R_H_22_24;
  VITALMAIN_DW.M_L_T_24_12 = M_L_T_24_12;
  VITALMAIN_DW.M_R_D_24_12 = M_R_D_24_12;
  VITALMAIN_DW.M_L_T_24_22 = M_L_T_24_22;
  VITALMAIN_DW.M_R_D_24_22 = M_R_D_24_22;
  VITALMAIN_DW.M_R_S_10_DEP = M_R_S_10_DEP;
  VITALMAIN_DW.M_L_T_10_12 = M_L_T_10_12;
  VITALMAIN_DW.M_R_D_10_12 = M_R_D_10_12;
  VITALMAIN_DW.M_L_T_10_22 = M_L_T_10_22;
  VITALMAIN_DW.M_R_D_10_22 = M_R_D_10_22;
  VITALMAIN_DW.M_R_S_20_DEP = M_R_S_20_DEP;
  VITALMAIN_DW.M_L_T_20_12 = M_L_T_20_12;
  VITALMAIN_DW.M_R_D_20_12 = M_R_D_20_12;
  VITALMAIN_DW.M_L_T_20_22 = M_L_T_20_22;
  VITALMAIN_DW.M_R_D_20_22 = M_R_D_20_22;

  /* DiscretePulseGenerator: '<S3>/0.5S' */
  VITALMAIN_DW.clockTickCounter = clockTickCounter_0;

  /* DiscretePulseGenerator: '<S3>/1S' */
  VITALMAIN_DW.clockTickCounter_j = clockTickCounter_j_0;
  VITALMAIN_DW.M_GV_FLASH_1000 = M_GV_FLASH_1000;
}

/* Update for referenced model: 'VITALMAIN' */
void VITALMAIN_Update(void)
{
  RT_MODEL_VITALMAIN_T *const VITALMAIN_M = &(VITALMAIN_MdlrefDW.rtm);

  /* Update for Atomic SubSystem: '<S15>/M_AS2' */
  M_AS_2_Update(VITALMAIN_M, &VITALMAIN_DW.M_AS2);

  /* End of Update for SubSystem: '<S15>/M_AS2' */

  /* Update for Atomic SubSystem: '<S16>/APPROACH LOCK' */
  M_AS_2_Update(VITALMAIN_M, &VITALMAIN_DW.APPROACHLOCK);

  /* End of Update for SubSystem: '<S16>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S17>/APPROACH LOCK' */
  M_AS_2_Update(VITALMAIN_M, &VITALMAIN_DW.APPROACHLOCK_h);

  /* End of Update for SubSystem: '<S17>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S18>/APPROACH LOCK' */
  M_AS_2_Update(VITALMAIN_M, &VITALMAIN_DW.APPROACHLOCK_n);

  /* End of Update for SubSystem: '<S18>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S19>/APPROACH LOCK' */
  M_AS_2_Update(VITALMAIN_M, &VITALMAIN_DW.APPROACHLOCK_d);

  /* End of Update for SubSystem: '<S19>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S20>/APPROACH LOCK' */
  M_AS_2_Update(VITALMAIN_M, &VITALMAIN_DW.APPROACHLOCK_di);

  /* End of Update for SubSystem: '<S20>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S21>/APPROACH LOCK' */
  M_AS_2_Update(VITALMAIN_M, &VITALMAIN_DW.APPROACHLOCK_a);

  /* End of Update for SubSystem: '<S21>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S22>/APPROACH LOCK' */
  M_AS_Update(VITALMAIN_M, &VITALMAIN_DW.APPROACHLOCK_ne);

  /* End of Update for SubSystem: '<S22>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S23>/APPROACH LOCK' */
  M_AS_Update(VITALMAIN_M, &VITALMAIN_DW.APPROACHLOCK_f);

  /* End of Update for SubSystem: '<S23>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S88>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Update(VITALMAIN_M, &VITALMAIN_DW.EMERGENCYPOINTRELEASE);

  /* End of Update for SubSystem: '<S88>/EMERGENCY POINT RELEASE' */

  /* Update for Atomic SubSystem: '<S89>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Update(VITALMAIN_M, &VITALMAIN_DW.EMERGENCYPOINTRELEASE_f);

  /* End of Update for SubSystem: '<S89>/EMERGENCY POINT RELEASE' */

  /* Update for Atomic SubSystem: '<S90>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Update(VITALMAIN_M, &VITALMAIN_DW.EMERGENCYPOINTRELEASE_e);

  /* End of Update for SubSystem: '<S90>/EMERGENCY POINT RELEASE' */

  /* Update for Atomic SubSystem: '<S91>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Update(VITALMAIN_M, &VITALMAIN_DW.EMERGENCYPOINTRELEASE_d);

  /* End of Update for SubSystem: '<S91>/EMERGENCY POINT RELEASE' */

  /* Update for Atomic SubSystem: '<S92>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Update(VITALMAIN_M, &VITALMAIN_DW.EMERGENCYPOINTRELEASE_m);

  /* End of Update for SubSystem: '<S92>/EMERGENCY POINT RELEASE' */

  /* Update for Atomic SubSystem: '<S148>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Update(VITALMAIN_M, &VITALMAIN_DW.EMERGENCYROUTERELEASE);

  /* End of Update for SubSystem: '<S148>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S149>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Update(VITALMAIN_M, &VITALMAIN_DW.EMERGENCYROUTERELEASE_h);

  /* End of Update for SubSystem: '<S149>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S150>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Update(VITALMAIN_M, &VITALMAIN_DW.EMERGENCYROUTERELEASE_e);

  /* End of Update for SubSystem: '<S150>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S151>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Update(VITALMAIN_M, &VITALMAIN_DW.EMERGENCYROUTERELEASE_d);

  /* End of Update for SubSystem: '<S151>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S152>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Update(VITALMAIN_M, &VITALMAIN_DW.EMERGENCYROUTERELEASE_n);

  /* End of Update for SubSystem: '<S152>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S153>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Update(VITALMAIN_M, &VITALMAIN_DW.EMERGENCYROUTERELEASE_ey);

  /* End of Update for SubSystem: '<S153>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S154>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Update(VITALMAIN_M, &VITALMAIN_DW.EMERGENCYROUTERELEASE_m);

  /* End of Update for SubSystem: '<S154>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S155>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Update(VITALMAIN_M, &VITALMAIN_DW.EMERGENCYROUTERELEASE_f);

  /* End of Update for SubSystem: '<S155>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S156>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Update(VITALMAIN_M, &VITALMAIN_DW.EMERGENCYROUTERELEASE_o);

  /* End of Update for SubSystem: '<S156>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S361>/POINT CONTROL' */
  M_SW_CTRL_Update(VITALMAIN_M, &VITALMAIN_DW.POINTCONTROL);

  /* End of Update for SubSystem: '<S361>/POINT CONTROL' */

  /* Update for Atomic SubSystem: '<S362>/POINT CONTROL' */
  M_SW_CTRL_Update(VITALMAIN_M, &VITALMAIN_DW.POINTCONTROL_c);

  /* End of Update for SubSystem: '<S362>/POINT CONTROL' */

  /* Update for Atomic SubSystem: '<S363>/POINT CONTROL' */
  M_SW_CTRL_Update(VITALMAIN_M, &VITALMAIN_DW.POINTCONTROL_a);

  /* End of Update for SubSystem: '<S363>/POINT CONTROL' */

  /* Update for Atomic SubSystem: '<S364>/POINT CONTROL' */
  M_SW_CTRL_Update(VITALMAIN_M, &VITALMAIN_DW.POINTCONTROL_j);

  /* End of Update for SubSystem: '<S364>/POINT CONTROL' */

  /* Update for Atomic SubSystem: '<S365>/POINT CONTROL' */
  M_SW_CTRL_Update(VITALMAIN_M, &VITALMAIN_DW.POINTCONTROL_h);

  /* End of Update for SubSystem: '<S365>/POINT CONTROL' */

  /* Update for Atomic SubSystem: '<S14>/M_TP9' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u3BTPRDI, &VITALMAIN_DW.M_TP9);

  /* End of Update for SubSystem: '<S14>/M_TP9' */

  /* Update for Atomic SubSystem: '<S14>/M_TP8' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u3ATPRDI, &VITALMAIN_DW.M_TP8);

  /* End of Update for SubSystem: '<S14>/M_TP8' */

  /* Update for Atomic SubSystem: '<S14>/M_TP7' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u2CTPRDI, &VITALMAIN_DW.M_TP7);

  /* End of Update for SubSystem: '<S14>/M_TP7' */

  /* Update for Atomic SubSystem: '<S14>/M_TP6' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u2BTPRDI, &VITALMAIN_DW.M_TP6);

  /* End of Update for SubSystem: '<S14>/M_TP6' */

  /* Update for Atomic SubSystem: '<S14>/M_TP5' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u2ATPRDI, &VITALMAIN_DW.M_TP5);

  /* End of Update for SubSystem: '<S14>/M_TP5' */

  /* Update for Atomic SubSystem: '<S14>/M_TP4' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u1BTPRDI, &VITALMAIN_DW.M_TP4);

  /* End of Update for SubSystem: '<S14>/M_TP4' */

  /* Update for Atomic SubSystem: '<S14>/M_TP3' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u1ATPRDI, &VITALMAIN_DW.M_TP3);

  /* End of Update for SubSystem: '<S14>/M_TP3' */

  /* Update for Atomic SubSystem: '<S14>/M_TP27' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u2ETPRDI, &VITALMAIN_DW.M_TP27);

  /* End of Update for SubSystem: '<S14>/M_TP27' */

  /* Update for Atomic SubSystem: '<S14>/M_TP26' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u2DTPRDI, &VITALMAIN_DW.M_TP26);

  /* End of Update for SubSystem: '<S14>/M_TP26' */

  /* Update for Atomic SubSystem: '<S14>/M_TP25' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u4BTPRDI, &VITALMAIN_DW.M_TP25);

  /* End of Update for SubSystem: '<S14>/M_TP25' */

  /* Update for Atomic SubSystem: '<S14>/M_TP24' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u4ATPRDI, &VITALMAIN_DW.M_TP24);

  /* End of Update for SubSystem: '<S14>/M_TP24' */

  /* Update for Atomic SubSystem: '<S14>/M_TP23' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u3BTPRDI_f, &VITALMAIN_DW.M_TP23);

  /* End of Update for SubSystem: '<S14>/M_TP23' */

  /* Update for Atomic SubSystem: '<S14>/M_TP22' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u3ATPRDI_m, &VITALMAIN_DW.M_TP22);

  /* End of Update for SubSystem: '<S14>/M_TP22' */

  /* Update for Atomic SubSystem: '<S14>/M_TP21' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u2CTPRDI_p, &VITALMAIN_DW.M_TP21);

  /* End of Update for SubSystem: '<S14>/M_TP21' */

  /* Update for Atomic SubSystem: '<S14>/M_TP20' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u2BTPRDI_n, &VITALMAIN_DW.M_TP20);

  /* End of Update for SubSystem: '<S14>/M_TP20' */

  /* Update for Atomic SubSystem: '<S14>/M_TP2' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u0BTPRDI, &VITALMAIN_DW.M_TP2);

  /* End of Update for SubSystem: '<S14>/M_TP2' */

  /* Update for Atomic SubSystem: '<S14>/M_TP19' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u2ATPRDI_g, &VITALMAIN_DW.M_TP19);

  /* End of Update for SubSystem: '<S14>/M_TP19' */

  /* Update for Atomic SubSystem: '<S14>/M_TP18' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u1CTPRDI, &VITALMAIN_DW.M_TP18);

  /* End of Update for SubSystem: '<S14>/M_TP18' */

  /* Update for Atomic SubSystem: '<S14>/M_TP17' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u1BTPRDI_d, &VITALMAIN_DW.M_TP17);

  /* End of Update for SubSystem: '<S14>/M_TP17' */

  /* Update for Atomic SubSystem: '<S14>/M_TP16' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u1ATPRDI_i, &VITALMAIN_DW.M_TP16);

  /* End of Update for SubSystem: '<S14>/M_TP16' */

  /* Update for Atomic SubSystem: '<S14>/M_TP15' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u0BTPRDI_o, &VITALMAIN_DW.M_TP15);

  /* End of Update for SubSystem: '<S14>/M_TP15' */

  /* Update for Atomic SubSystem: '<S14>/M_TP14' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u0ATPRDI, &VITALMAIN_DW.M_TP14);

  /* End of Update for SubSystem: '<S14>/M_TP14' */

  /* Update for Atomic SubSystem: '<S14>/M_TP13' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u2ETPRDI_i, &VITALMAIN_DW.M_TP13);

  /* End of Update for SubSystem: '<S14>/M_TP13' */

  /* Update for Atomic SubSystem: '<S14>/M_TP12' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u2DTPRDI_l, &VITALMAIN_DW.M_TP12);

  /* End of Update for SubSystem: '<S14>/M_TP12' */

  /* Update for Atomic SubSystem: '<S14>/M_TP11' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u4BTPRDI_d, &VITALMAIN_DW.M_TP11);

  /* End of Update for SubSystem: '<S14>/M_TP11' */

  /* Update for Atomic SubSystem: '<S14>/M_TP10' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u4ATPRDI_e, &VITALMAIN_DW.M_TP10);

  /* End of Update for SubSystem: '<S14>/M_TP10' */

  /* Update for Atomic SubSystem: '<S14>/M_TP1' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_DW.u0ATPRDI_g, &VITALMAIN_DW.M_TP1);

  /* End of Update for SubSystem: '<S14>/M_TP1' */

  /* Update for Atomic SubSystem: '<S3>/COMMUNICATION CHECK' */
  M_COMM_Update(VITALMAIN_M, VITALMAIN_DW.COMMCHECKIN,
                &VITALMAIN_DW.COMMUNICATIONCHECK);

  /* End of Update for SubSystem: '<S3>/COMMUNICATION CHECK' */
}

/* Model initialize function */
void VITALMAIN_initialize(const char_T **rt_errorStatus, RTWSolverInfo
  *rt_solverInfo, const rtTimingBridge *timingBridge, int_T mdlref_TID0, int_T
  mdlref_TID1)
{
  RT_MODEL_VITALMAIN_T *const VITALMAIN_M = &(VITALMAIN_MdlrefDW.rtm);

  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)VITALMAIN_M, 0,
                sizeof(RT_MODEL_VITALMAIN_T));

  /* setup the global timing engine */
  VITALMAIN_GlobalTID[0] = mdlref_TID0;
  VITALMAIN_GlobalTID[1] = mdlref_TID1;
  VITALMAIN_TimingBrdg = timingBridge;

  /* initialize error status */
  rtmSetErrorStatusPointer(VITALMAIN_M, rt_errorStatus);

  /* initialize RTWSolverInfo */
  VITALMAIN_M->solverInfo = (rt_solverInfo);

  /* Set the Timing fields to the appropriate data in the RTWSolverInfo */
  rtmSetSimTimeStepPointer(VITALMAIN_M, rtsiGetSimTimeStepPtr
    (VITALMAIN_M->solverInfo));
  VITALMAIN_M->Timing.stepSize0 = (rtsiGetStepSize(VITALMAIN_M->solverInfo));

  /* states (dwork) */
  (void) memset((void *)&VITALMAIN_DW, 0,
                sizeof(DW_VITALMAIN_f_T));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
