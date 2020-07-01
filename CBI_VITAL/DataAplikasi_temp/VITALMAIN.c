/*
 * File: VITALMAIN.c
 *
 * Code generated for Simulink model 'VITALMAIN'.
 *
 * Model version                  : 1.394
 * Simulink Coder version         : 8.9 (R2015b) 13-Aug-2015
 * C/C++ source code generated on : Fri Jun 16 08:25:54 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-32 (Windows32)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "VITALMAIN.h"
#include "VITALMAIN_private.h"

int_T VITALMAIN_GlobalTID[2];
const rtTimingBridge *VITALMAIN_TimingBrdg;
MdlrefDW_VITALMAIN_T VITALMAIN_MdlrefDW;

/* Block signals (auto storage) */
B_VITALMAIN_c_T VITALMAIN_B;

/* Block states (auto storage) */
DW_VITALMAIN_f_T VITALMAIN_DW;

/*
 * Initial conditions for atomic system:
 *    '<S25>/MV_TON1'
 *    '<S25>/MV_TON2'
 *    '<S25>/MV_TON3'
 *    '<S41>/MV_TON1'
 *    '<S41>/MV_TON2'
 *    '<S41>/MV_TON3'
 *    '<S57>/MV_TON1'
 *    '<S57>/MV_TON2'
 *    '<S57>/MV_TON3'
 *    '<S73>/MV_TON1'
 *    ...
 */
void MV_TON_Init(DW_MV_TON_T *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<S26>/TON' */
  /* InitializeConditions for Memory: '<S32>/memory' */
  localDW->memory_PreviousInput = -1.0E+99;

  /* End of InitializeConditions for SubSystem: '<S26>/TON' */
}

/*
 * Outputs for atomic system:
 *    '<S25>/MV_TON1'
 *    '<S25>/MV_TON2'
 *    '<S25>/MV_TON3'
 *    '<S41>/MV_TON1'
 *    '<S41>/MV_TON2'
 *    '<S41>/MV_TON3'
 *    '<S57>/MV_TON1'
 *    '<S57>/MV_TON2'
 *    '<S57>/MV_TON3'
 *    '<S73>/MV_TON1'
 *    ...
 */
void MV_TON(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_IN,
            B_MV_TON_T *localB, DW_MV_TON_T *localDW, real_T rtp_TIME)
{
  /* local block i/o variables */
  real_T rtb_CLOCK;

  /* Clock: '<S26>/CLOCK' */
  rtb_CLOCK = (*(VITALMAIN_TimingBrdg->taskTime[VITALMAIN_GlobalTID[0]]));

  /* Outputs for Atomic SubSystem: '<S26>/TON' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Logic: '<S29>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S30>/FixPt Relational Operator'
     *  RelationalOperator: '<S31>/FixPt Relational Operator'
     *  UnitDelay: '<S30>/Delay Input1'
     *  UnitDelay: '<S31>/Delay Input1'
     */
    localB->LogicalOperator1 = (((int32_T)rtu_IN > (int32_T)
      localDW->DelayInput1_DSTATE_d) || ((int32_T)rtu_IN < (int32_T)
      localDW->DelayInput1_DSTATE));

    /* Memory: '<S32>/memory' */
    localB->memory = localDW->memory_PreviousInput;
  }

  /* Switch: '<S32>/Switch' */
  if (localB->LogicalOperator1) {
    localB->Switch = rtb_CLOCK;
  } else {
    localB->Switch = localB->memory;
  }

  /* End of Switch: '<S32>/Switch' */

  /* Logic: '<S29>/Logical Operator2' incorporates:
   *  Constant: '<S26>/TIME'
   *  RelationalOperator: '<S29>/Relational Operator'
   *  Sum: '<S29>/Sum'
   */
  localB->LogicalOperator2 = ((rtb_CLOCK >= localB->Switch + rtp_TIME) && rtu_IN);

  /* End of Outputs for SubSystem: '<S26>/TON' */
}

/*
 * Update for atomic system:
 *    '<S25>/MV_TON1'
 *    '<S25>/MV_TON2'
 *    '<S25>/MV_TON3'
 *    '<S41>/MV_TON1'
 *    '<S41>/MV_TON2'
 *    '<S41>/MV_TON3'
 *    '<S57>/MV_TON1'
 *    '<S57>/MV_TON2'
 *    '<S57>/MV_TON3'
 *    '<S73>/MV_TON1'
 *    ...
 */
void MV_TON_Update(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_IN,
                   B_MV_TON_T *localB, DW_MV_TON_T *localDW)
{
  /* Update for Atomic SubSystem: '<S26>/TON' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Update for UnitDelay: '<S30>/Delay Input1' */
    localDW->DelayInput1_DSTATE = rtu_IN;

    /* Update for UnitDelay: '<S31>/Delay Input1' */
    localDW->DelayInput1_DSTATE_d = rtu_IN;

    /* Update for Memory: '<S32>/memory' */
    localDW->memory_PreviousInput = localB->Switch;
  }

  /* End of Update for SubSystem: '<S26>/TON' */
}

/*
 * Initial conditions for atomic system:
 *    '<S16>/APPROACH LOCK'
 *    '<S17>/APPROACH LOCK'
 *    '<S18>/APPROACH LOCK'
 *    '<S19>/APPROACH LOCK'
 *    '<S20>/APPROACH LOCK'
 *    '<S21>/APPROACH LOCK'
 *    '<S22>/APPROACH LOCK'
 *    '<S23>/APPROACH LOCK'
 *    '<S24>/APPROACH LOCK'
 */
void M_AS_Init(DW_M_AS_T *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<S25>/MV_TON1' */
  MV_TON_Init(&localDW->MV_TON1);

  /* End of InitializeConditions for SubSystem: '<S25>/MV_TON1' */

  /* InitializeConditions for Atomic SubSystem: '<S25>/MV_TON2' */
  MV_TON_Init(&localDW->MV_TON2);

  /* End of InitializeConditions for SubSystem: '<S25>/MV_TON2' */

  /* InitializeConditions for Atomic SubSystem: '<S25>/MV_TON3' */
  MV_TON_Init(&localDW->MV_TON3);

  /* End of InitializeConditions for SubSystem: '<S25>/MV_TON3' */
}

/*
 * Outputs for atomic system:
 *    '<S16>/APPROACH LOCK'
 *    '<S17>/APPROACH LOCK'
 *    '<S18>/APPROACH LOCK'
 *    '<S19>/APPROACH LOCK'
 *    '<S20>/APPROACH LOCK'
 *    '<S21>/APPROACH LOCK'
 *    '<S22>/APPROACH LOCK'
 *    '<S23>/APPROACH LOCK'
 *    '<S24>/APPROACH LOCK'
 */
void M_AS(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_HRDR,
          boolean_T rtu_ER, boolean_T rtu_GR, boolean_T rtu_TPF, boolean_T
          rtu_TPB, boolean_T rtu_RR, boolean_T rtu_VDR, B_M_AS_T *localB,
          DW_M_AS_T *localDW)
{
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Logic: '<S25>/AND4' incorporates:
     *  Logic: '<S25>/AND5'
     *  Logic: '<S25>/NOT1'
     *  Logic: '<S25>/OR7'
     *  Memory: '<S25>/Memory3'
     *  Memory: '<S25>/Memory4'
     */
    localB->AND4 = ((!rtu_HRDR) && rtu_RR && (localDW->Memory3_PreviousInput ||
      (rtu_TPF && rtu_TPB) || localDW->Memory4_PreviousInput));

    /* Logic: '<S25>/AND1' incorporates:
     *  Logic: '<S25>/NOT2'
     *  Logic: '<S25>/NOT3'
     */
    localB->AND1 = ((!rtu_HRDR) && rtu_RR && (!localB->AND4) && rtu_VDR);

    /* Logic: '<S25>/AND11' incorporates:
     *  Logic: '<S25>/AND12'
     *  Logic: '<S25>/NOT12'
     *  Logic: '<S25>/OR9'
     *  Memory: '<S25>/Memory7'
     *  Memory: '<S25>/Memory8'
     */
    localB->AND11 = ((!rtu_GR) && rtu_RR && (localDW->Memory7_PreviousInput ||
      (rtu_TPF && rtu_TPB) || localDW->Memory8_PreviousInput));

    /* Logic: '<S25>/AND7' incorporates:
     *  Logic: '<S25>/AND8'
     *  Logic: '<S25>/NOT4'
     *  Logic: '<S25>/OR8'
     *  Memory: '<S25>/Memory5'
     *  Memory: '<S25>/Memory6'
     */
    localB->AND7 = ((!rtu_ER) && rtu_RR && (localDW->Memory5_PreviousInput ||
      (rtu_TPF && rtu_TPB) || localDW->Memory6_PreviousInput));

    /* Logic: '<S25>/AND2' incorporates:
     *  Logic: '<S25>/NOT5'
     *  Logic: '<S25>/NOT6'
     */
    localB->AND2 = ((!rtu_ER) && rtu_RR && (!localB->AND7) && rtu_VDR);

    /* Logic: '<S25>/AND3' incorporates:
     *  Logic: '<S25>/NOT13'
     *  Logic: '<S25>/NOT14'
     */
    localB->AND3 = ((!rtu_GR) && rtu_RR && (!localB->AND11) && rtu_VDR);
  }

  /* Outputs for Atomic SubSystem: '<S25>/MV_TON1' */
  MV_TON(VITALMAIN_M, localB->AND1, &localB->MV_TON1, &localDW->MV_TON1, 2.0);

  /* End of Outputs for SubSystem: '<S25>/MV_TON1' */

  /* Outputs for Atomic SubSystem: '<S25>/MV_TON2' */
  MV_TON(VITALMAIN_M, localB->AND2, &localB->MV_TON2, &localDW->MV_TON2, 2.0);

  /* End of Outputs for SubSystem: '<S25>/MV_TON2' */

  /* Outputs for Atomic SubSystem: '<S25>/MV_TON3' */
  MV_TON(VITALMAIN_M, localB->AND3, &localB->MV_TON3, &localDW->MV_TON3, 2.0);

  /* End of Outputs for SubSystem: '<S25>/MV_TON3' */
}

/*
 * Update for atomic system:
 *    '<S16>/APPROACH LOCK'
 *    '<S17>/APPROACH LOCK'
 *    '<S18>/APPROACH LOCK'
 *    '<S19>/APPROACH LOCK'
 *    '<S20>/APPROACH LOCK'
 *    '<S21>/APPROACH LOCK'
 *    '<S22>/APPROACH LOCK'
 *    '<S23>/APPROACH LOCK'
 *    '<S24>/APPROACH LOCK'
 */
void M_AS_Update(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, B_M_AS_T *localB,
                 DW_M_AS_T *localDW)
{
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Update for Memory: '<S25>/Memory3' */
    localDW->Memory3_PreviousInput = localB->AND4;

    /* Update for Memory: '<S25>/Memory4' */
    localDW->Memory4_PreviousInput = localB->MV_TON1.LogicalOperator2;

    /* Update for Memory: '<S25>/Memory7' */
    localDW->Memory7_PreviousInput = localB->AND11;

    /* Update for Memory: '<S25>/Memory8' */
    localDW->Memory8_PreviousInput = localB->MV_TON3.LogicalOperator2;

    /* Update for Memory: '<S25>/Memory5' */
    localDW->Memory5_PreviousInput = localB->AND7;

    /* Update for Memory: '<S25>/Memory6' */
    localDW->Memory6_PreviousInput = localB->MV_TON2.LogicalOperator2;
  }

  /* Update for Atomic SubSystem: '<S25>/MV_TON1' */
  MV_TON_Update(VITALMAIN_M, localB->AND1, &localB->MV_TON1, &localDW->MV_TON1);

  /* End of Update for SubSystem: '<S25>/MV_TON1' */

  /* Update for Atomic SubSystem: '<S25>/MV_TON2' */
  MV_TON_Update(VITALMAIN_M, localB->AND2, &localB->MV_TON2, &localDW->MV_TON2);

  /* End of Update for SubSystem: '<S25>/MV_TON2' */

  /* Update for Atomic SubSystem: '<S25>/MV_TON3' */
  MV_TON_Update(VITALMAIN_M, localB->AND3, &localB->MV_TON3, &localDW->MV_TON3);

  /* End of Update for SubSystem: '<S25>/MV_TON3' */
}

/*
 * Initial conditions for atomic system:
 *    '<S169>/EMERGENCY POINT RELEASE'
 *    '<S170>/EMERGENCY POINT RELEASE'
 *    '<S171>/EMERGENCY POINT RELEASE'
 *    '<S172>/EMERGENCY POINT RELEASE'
 *    '<S173>/EMERGENCY POINT RELEASE'
 */
void M_SWRLS_Init(DW_M_SWRLS_T *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<S174>/MV_TON1' */
  MV_TON_Init(&localDW->MV_TON1);

  /* End of InitializeConditions for SubSystem: '<S174>/MV_TON1' */

  /* InitializeConditions for Atomic SubSystem: '<S174>/MV_TON2' */
  MV_TON_Init(&localDW->MV_TON2);

  /* End of InitializeConditions for SubSystem: '<S174>/MV_TON2' */
}

/*
 * Outputs for atomic system:
 *    '<S169>/EMERGENCY POINT RELEASE'
 *    '<S170>/EMERGENCY POINT RELEASE'
 *    '<S171>/EMERGENCY POINT RELEASE'
 *    '<S172>/EMERGENCY POINT RELEASE'
 *    '<S173>/EMERGENCY POINT RELEASE'
 */
void M_SWRLS(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_SWRLSCTRL,
             boolean_T rtu_ESWS, boolean_T rtu_TP, boolean_T rtu_SWRLS,
             boolean_T rtu_VDR, B_M_SWRLS_T *localB, DW_M_SWRLS_T *localDW)
{
  boolean_T rtb_Memory2;
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Memory: '<S174>/Memory3' */
    rtb_Memory2 = localDW->Memory3_PreviousInput;

    /* Logic: '<S174>/OR3' incorporates:
     *  Logic: '<S174>/AND10'
     *  Logic: '<S174>/AND9'
     *  Logic: '<S174>/NOT4'
     *  Logic: '<S174>/NOT8'
     *  Memory: '<S174>/Memory4'
     *  Memory: '<S174>/Memory5'
     */
    localB->OR3 = ((rtb_Memory2 && (!rtu_TP)) ||
                   ((!localDW->Memory5_PreviousInput) &&
                    localDW->Memory4_PreviousInput));

    /* Logic: '<S174>/AND11' */
    localB->AND11 = (localB->OR3 && rtu_VDR);

    /* Logic: '<S174>/AND5' incorporates:
     *  Logic: '<S174>/AND4'
     *  Logic: '<S174>/AND7'
     *  Logic: '<S174>/NOT1'
     *  Logic: '<S174>/OR2'
     *  Memory: '<S174>/Memory2'
     */
    localB->AND5 = (rtu_ESWS && ((rtu_SWRLSCTRL && rtu_SWRLS) || ((!rtb_Memory2)
      && localDW->Memory2_PreviousInput)));

    /* Logic: '<S174>/AND8' */
    localB->AND8 = (localB->AND5 && rtu_VDR);
  }

  /* Outputs for Atomic SubSystem: '<S174>/MV_TON1' */
  MV_TON(VITALMAIN_M, localB->AND8, &localB->MV_TON1, &localDW->MV_TON1, 60.0);

  /* End of Outputs for SubSystem: '<S174>/MV_TON1' */

  /* Outputs for Atomic SubSystem: '<S174>/MV_TON2' */
  MV_TON(VITALMAIN_M, localB->AND11, &localB->MV_TON2, &localDW->MV_TON2, 60.0);

  /* End of Outputs for SubSystem: '<S174>/MV_TON2' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* SignalConversion: '<S174>/TmpSignal ConversionAtMV_TON1Outport1' */
    localB->TmpSignalConversionAtMV_TON1Out = localB->MV_TON1.LogicalOperator2;

    /* SignalConversion: '<S174>/TmpSignal ConversionAtMV_TON2Outport1' */
    localB->TmpSignalConversionAtMV_TON2Out = localB->MV_TON2.LogicalOperator2;
  }
}

/*
 * Update for atomic system:
 *    '<S169>/EMERGENCY POINT RELEASE'
 *    '<S170>/EMERGENCY POINT RELEASE'
 *    '<S171>/EMERGENCY POINT RELEASE'
 *    '<S172>/EMERGENCY POINT RELEASE'
 *    '<S173>/EMERGENCY POINT RELEASE'
 */
void M_SWRLS_Update(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, B_M_SWRLS_T
                    *localB, DW_M_SWRLS_T *localDW)
{
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Update for Memory: '<S174>/Memory5' */
    localDW->Memory5_PreviousInput = localB->TmpSignalConversionAtMV_TON2Out;

    /* Update for Memory: '<S174>/Memory4' */
    localDW->Memory4_PreviousInput = localB->OR3;

    /* Update for Memory: '<S174>/Memory3' */
    localDW->Memory3_PreviousInput = localB->TmpSignalConversionAtMV_TON1Out;

    /* Update for Memory: '<S174>/Memory2' */
    localDW->Memory2_PreviousInput = localB->AND5;
  }

  /* Update for Atomic SubSystem: '<S174>/MV_TON1' */
  MV_TON_Update(VITALMAIN_M, localB->AND8, &localB->MV_TON1, &localDW->MV_TON1);

  /* End of Update for SubSystem: '<S174>/MV_TON1' */

  /* Update for Atomic SubSystem: '<S174>/MV_TON2' */
  MV_TON_Update(VITALMAIN_M, localB->AND11, &localB->MV_TON2, &localDW->MV_TON2);

  /* End of Update for SubSystem: '<S174>/MV_TON2' */
}

/*
 * Initial conditions for atomic system:
 *    '<S238>/MV_TOF1'
 *    '<S249>/MV_TOF1'
 *    '<S260>/MV_TOF1'
 *    '<S271>/MV_TOF1'
 *    '<S282>/MV_TOF1'
 *    '<S293>/MV_TOF1'
 *    '<S304>/MV_TOF1'
 *    '<S315>/MV_TOF1'
 *    '<S326>/MV_TOF1'
 *    '<S443>/MV_TOF1'
 *    ...
 */
void MV_TOF_Init(DW_MV_TOF_T *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<S239>/TOF' */
  /* InitializeConditions for Memory: '<S244>/memory' */
  localDW->memory_PreviousInput = -1.0E+99;

  /* End of InitializeConditions for SubSystem: '<S239>/TOF' */
}

/*
 * Outputs for atomic system:
 *    '<S238>/MV_TOF1'
 *    '<S249>/MV_TOF1'
 *    '<S260>/MV_TOF1'
 *    '<S271>/MV_TOF1'
 *    '<S282>/MV_TOF1'
 *    '<S293>/MV_TOF1'
 *    '<S304>/MV_TOF1'
 *    '<S315>/MV_TOF1'
 *    '<S326>/MV_TOF1'
 *    '<S443>/MV_TOF1'
 *    ...
 */
void MV_TOF(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_IN,
            B_MV_TOF_T *localB, DW_MV_TOF_T *localDW, real_T rtp_TIME)
{
  /* local block i/o variables */
  real_T rtb_CLOCK_e;

  /* Clock: '<S239>/CLOCK' */
  rtb_CLOCK_e = (*(VITALMAIN_TimingBrdg->taskTime[VITALMAIN_GlobalTID[0]]));

  /* Outputs for Atomic SubSystem: '<S239>/TOF' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Logic: '<S241>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S242>/FixPt Relational Operator'
     *  RelationalOperator: '<S243>/FixPt Relational Operator'
     *  UnitDelay: '<S242>/Delay Input1'
     *  UnitDelay: '<S243>/Delay Input1'
     */
    localB->LogicalOperator1 = (((int32_T)rtu_IN > (int32_T)
      localDW->DelayInput1_DSTATE_e) || ((int32_T)rtu_IN < (int32_T)
      localDW->DelayInput1_DSTATE));

    /* Memory: '<S244>/memory' */
    localB->memory = localDW->memory_PreviousInput;

    /* Logic: '<S241>/Logical Operator3' */
    localB->LogicalOperator3 = !rtu_IN;
  }

  /* Switch: '<S244>/Switch' */
  if (localB->LogicalOperator1) {
    localB->Switch = rtb_CLOCK_e;
  } else {
    localB->Switch = localB->memory;
  }

  /* End of Switch: '<S244>/Switch' */

  /* Logic: '<S241>/Logical Operator4' incorporates:
   *  Constant: '<S239>/TIME'
   *  Logic: '<S241>/Logical Operator2'
   *  RelationalOperator: '<S241>/Relational Operator'
   *  Sum: '<S241>/Sum'
   */
  localB->LogicalOperator4 = !((rtb_CLOCK_e >= localB->Switch + rtp_TIME) &&
    localB->LogicalOperator3);

  /* End of Outputs for SubSystem: '<S239>/TOF' */
}

/*
 * Update for atomic system:
 *    '<S238>/MV_TOF1'
 *    '<S249>/MV_TOF1'
 *    '<S260>/MV_TOF1'
 *    '<S271>/MV_TOF1'
 *    '<S282>/MV_TOF1'
 *    '<S293>/MV_TOF1'
 *    '<S304>/MV_TOF1'
 *    '<S315>/MV_TOF1'
 *    '<S326>/MV_TOF1'
 *    '<S443>/MV_TOF1'
 *    ...
 */
void MV_TOF_Update(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_IN,
                   B_MV_TOF_T *localB, DW_MV_TOF_T *localDW)
{
  /* Update for Atomic SubSystem: '<S239>/TOF' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Update for UnitDelay: '<S242>/Delay Input1' */
    localDW->DelayInput1_DSTATE = rtu_IN;

    /* Update for UnitDelay: '<S243>/Delay Input1' */
    localDW->DelayInput1_DSTATE_e = rtu_IN;

    /* Update for Memory: '<S244>/memory' */
    localDW->memory_PreviousInput = localB->Switch;
  }

  /* End of Update for SubSystem: '<S239>/TOF' */
}

/*
 * Initial conditions for atomic system:
 *    '<S238>/MV_TON1'
 *    '<S249>/MV_TON1'
 *    '<S260>/MV_TON1'
 *    '<S271>/MV_TON1'
 *    '<S282>/MV_TON1'
 *    '<S293>/MV_TON1'
 *    '<S304>/MV_TON1'
 *    '<S315>/MV_TON1'
 *    '<S326>/MV_TON1'
 */
void VITALMAIN_MV_TON_Init(DW_MV_TON_f_T *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<S240>/TON' */
  /* InitializeConditions for Memory: '<S248>/memory' */
  localDW->memory_PreviousInput = -1.0E+99;

  /* End of InitializeConditions for SubSystem: '<S240>/TON' */
}

/*
 * Outputs for atomic system:
 *    '<S238>/MV_TON1'
 *    '<S249>/MV_TON1'
 *    '<S260>/MV_TON1'
 *    '<S271>/MV_TON1'
 *    '<S282>/MV_TON1'
 *    '<S293>/MV_TON1'
 *    '<S304>/MV_TON1'
 *    '<S315>/MV_TON1'
 *    '<S326>/MV_TON1'
 */
void VITALMAIN_MV_TON(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_IN,
                      B_MV_TON_o_T *localB, DW_MV_TON_f_T *localDW, real_T
                      rtp_TIME)
{
  /* local block i/o variables */
  real_T rtb_CLOCK_p;

  /* Clock: '<S240>/CLOCK' */
  rtb_CLOCK_p = (*(VITALMAIN_TimingBrdg->taskTime[VITALMAIN_GlobalTID[0]]));

  /* Outputs for Atomic SubSystem: '<S240>/TON' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* UnitDelay: '<S246>/Delay Input1' */
    localB->Uk1 = localDW->DelayInput1_DSTATE;

    /* UnitDelay: '<S247>/Delay Input1' */
    localB->Uk1_f = localDW->DelayInput1_DSTATE_p;

    /* Memory: '<S248>/memory' */
    localB->memory = localDW->memory_PreviousInput;
  }

  /* Switch: '<S248>/Switch' incorporates:
   *  Logic: '<S245>/Logical Operator1'
   *  RelationalOperator: '<S246>/FixPt Relational Operator'
   *  RelationalOperator: '<S247>/FixPt Relational Operator'
   */
  if (((int32_T)rtu_IN > (int32_T)localB->Uk1_f) || ((int32_T)rtu_IN < (int32_T)
       localB->Uk1)) {
    localB->Switch = rtb_CLOCK_p;
  } else {
    localB->Switch = localB->memory;
  }

  /* End of Switch: '<S248>/Switch' */

  /* Logic: '<S245>/Logical Operator2' incorporates:
   *  Constant: '<S240>/TIME'
   *  RelationalOperator: '<S245>/Relational Operator'
   *  Sum: '<S245>/Sum'
   */
  localB->LogicalOperator2 = ((rtb_CLOCK_p >= localB->Switch + rtp_TIME) &&
    rtu_IN);

  /* End of Outputs for SubSystem: '<S240>/TON' */
}

/*
 * Update for atomic system:
 *    '<S238>/MV_TON1'
 *    '<S249>/MV_TON1'
 *    '<S260>/MV_TON1'
 *    '<S271>/MV_TON1'
 *    '<S282>/MV_TON1'
 *    '<S293>/MV_TON1'
 *    '<S304>/MV_TON1'
 *    '<S315>/MV_TON1'
 *    '<S326>/MV_TON1'
 */
void VITALMAIN_MV_TON_Update(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T
  rtu_IN, B_MV_TON_o_T *localB, DW_MV_TON_f_T *localDW)
{
  /* Update for Atomic SubSystem: '<S240>/TON' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Update for UnitDelay: '<S246>/Delay Input1' */
    localDW->DelayInput1_DSTATE = rtu_IN;

    /* Update for UnitDelay: '<S247>/Delay Input1' */
    localDW->DelayInput1_DSTATE_p = rtu_IN;

    /* Update for Memory: '<S248>/memory' */
    localDW->memory_PreviousInput = localB->Switch;
  }

  /* End of Update for SubSystem: '<S240>/TON' */
}

/*
 * Initial conditions for atomic system:
 *    '<S229>/EMERGENCY ROUTE RELEASE'
 *    '<S230>/EMERGENCY ROUTE RELEASE'
 *    '<S231>/EMERGENCY ROUTE RELEASE'
 *    '<S232>/EMERGENCY ROUTE RELEASE'
 *    '<S233>/EMERGENCY ROUTE RELEASE'
 *    '<S234>/EMERGENCY ROUTE RELEASE'
 *    '<S235>/EMERGENCY ROUTE RELEASE'
 *    '<S236>/EMERGENCY ROUTE RELEASE'
 *    '<S237>/EMERGENCY ROUTE RELEASE'
 */
void M_RRLS_Init(DW_M_RRLS_T *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<S238>/MV_TOF1' */
  MV_TOF_Init(&localDW->MV_TOF1);

  /* End of InitializeConditions for SubSystem: '<S238>/MV_TOF1' */

  /* InitializeConditions for Atomic SubSystem: '<S238>/MV_TON1' */
  VITALMAIN_MV_TON_Init(&localDW->MV_TON1);

  /* End of InitializeConditions for SubSystem: '<S238>/MV_TON1' */
}

/*
 * Outputs for atomic system:
 *    '<S229>/EMERGENCY ROUTE RELEASE'
 *    '<S230>/EMERGENCY ROUTE RELEASE'
 *    '<S231>/EMERGENCY ROUTE RELEASE'
 *    '<S232>/EMERGENCY ROUTE RELEASE'
 *    '<S233>/EMERGENCY ROUTE RELEASE'
 *    '<S234>/EMERGENCY ROUTE RELEASE'
 *    '<S235>/EMERGENCY ROUTE RELEASE'
 *    '<S236>/EMERGENCY ROUTE RELEASE'
 *    '<S237>/EMERGENCY ROUTE RELEASE'
 */
void M_RRLS(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_TAS,
            boolean_T rtu_TREQ, boolean_T rtu_EAS, boolean_T rtu_EREQ, boolean_T
            rtu_SAS, boolean_T rtu_SREQ, boolean_T rtu_ESWS, boolean_T
            rtu_NWZRWZ, boolean_T rtu_RRLSCTRL, boolean_T rtu_RRLS, boolean_T
            rtu_VDR, B_M_RRLS_T *localB, DW_M_RRLS_T *localDW)
{
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Memory: '<S238>/Memory1' */
    localB->Memory1 = localDW->Memory1_PreviousInput;

    /* Logic: '<S238>/AND1' incorporates:
     *  Logic: '<S238>/AND2'
     *  Logic: '<S238>/AND3'
     *  Logic: '<S238>/NOT2'
     *  Logic: '<S238>/NOT3'
     *  Logic: '<S238>/NOT5'
     *  Logic: '<S238>/NOT6'
     *  Logic: '<S238>/NOT7'
     *  Logic: '<S238>/OR1'
     *  Memory: '<S238>/Memory'
     */
    localB->AND1 = (rtu_TAS && (!rtu_TREQ) && rtu_EAS && (!rtu_EREQ) && rtu_SAS &&
                    (!rtu_SREQ) && (!rtu_ESWS) && rtu_NWZRWZ && ((rtu_RRLSCTRL &&
      rtu_RRLS) || ((!localB->Memory1) && localDW->Memory_PreviousInput)));

    /* Logic: '<S238>/AND6' */
    localB->AND6 = (localB->AND1 && rtu_VDR);
  }

  /* Outputs for Atomic SubSystem: '<S238>/MV_TOF1' */
  MV_TOF(VITALMAIN_M, localB->AND6, &localB->MV_TOF1, &localDW->MV_TOF1, 2.0);

  /* End of Outputs for SubSystem: '<S238>/MV_TOF1' */

  /* Outputs for Atomic SubSystem: '<S238>/MV_TON1' */
  VITALMAIN_MV_TON(VITALMAIN_M, localB->MV_TOF1.LogicalOperator4,
                   &localB->MV_TON1, &localDW->MV_TON1, 2.0);

  /* End of Outputs for SubSystem: '<S238>/MV_TON1' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* SignalConversion: '<S238>/TmpSignal ConversionAtMV_TON1Outport1' */
    localB->TmpSignalConversionAtMV_TON1Out = localB->MV_TON1.LogicalOperator2;
  }
}

/*
 * Update for atomic system:
 *    '<S229>/EMERGENCY ROUTE RELEASE'
 *    '<S230>/EMERGENCY ROUTE RELEASE'
 *    '<S231>/EMERGENCY ROUTE RELEASE'
 *    '<S232>/EMERGENCY ROUTE RELEASE'
 *    '<S233>/EMERGENCY ROUTE RELEASE'
 *    '<S234>/EMERGENCY ROUTE RELEASE'
 *    '<S235>/EMERGENCY ROUTE RELEASE'
 *    '<S236>/EMERGENCY ROUTE RELEASE'
 *    '<S237>/EMERGENCY ROUTE RELEASE'
 */
void M_RRLS_Update(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, B_M_RRLS_T *localB,
                   DW_M_RRLS_T *localDW)
{
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Update for Memory: '<S238>/Memory1' */
    localDW->Memory1_PreviousInput = localB->TmpSignalConversionAtMV_TON1Out;

    /* Update for Memory: '<S238>/Memory' */
    localDW->Memory_PreviousInput = localB->AND1;
  }

  /* Update for Atomic SubSystem: '<S238>/MV_TOF1' */
  MV_TOF_Update(VITALMAIN_M, localB->AND6, &localB->MV_TOF1, &localDW->MV_TOF1);

  /* End of Update for SubSystem: '<S238>/MV_TOF1' */

  /* Update for Atomic SubSystem: '<S238>/MV_TON1' */
  VITALMAIN_MV_TON_Update(VITALMAIN_M, localB->MV_TOF1.LogicalOperator4,
    &localB->MV_TON1, &localDW->MV_TON1);

  /* End of Update for SubSystem: '<S238>/MV_TON1' */
}

/*
 * Output and update for atomic system:
 *    '<S342>/M-AS-SR'
 *    '<S343>/M-AS-SR'
 *    '<S344>/M-AS-SR'
 *    '<S345>/M-AS-SR'
 */
void M_AS_SR(boolean_T rtu_L, boolean_T rtu_RS, B_M_AS_SR_T *localB)
{
  /* Logic: '<S346>/AND1' incorporates:
   *  Logic: '<S346>/OR1'
   *  Memory: '<S346>/MEM1'
   */
  localB->AND1 = ((localB->AND1 || rtu_L) && rtu_RS);
}

/*
 * Output and update for atomic system:
 *    '<S361>/M_RRLS5'
 *    '<S364>/M_RRLS5'
 *    '<S365>/M_RRLS1'
 *    '<S365>/M_RRLS5'
 *    '<S366>/M_RRLS5'
 *    '<S367>/M_RRLS5'
 *    '<S368>/M_RRLS5'
 *    '<S369>/M_RRLS5'
 *    '<S370>/M_RRLS5'
 *    '<S371>/M_RRLS5'
 *    ...
 */
void M_RRLS1(boolean_T rtu_RRLSTE, B_M_RRLS1_T *localB)
{
  /* Inport: '<S380>/RRLS-TE' */
  localB->RRLSTE = rtu_RRLSTE;
}

/*
 * Output and update for atomic system:
 *    '<S361>/M_RRLS6'
 *    '<S362>/M_RRLS6'
 *    '<S362>/M_RRLS9'
 *    '<S363>/M_RRLS6'
 *    '<S363>/M_RRLS9'
 *    '<S367>/M_RRLS1'
 *    '<S367>/M_RRLS6'
 *    '<S368>/M_RRLS1'
 *    '<S368>/M_RRLS6'
 *    '<S369>/M_RRLS1'
 *    ...
 */
void M_RRLS3(boolean_T rtu_RRLSTE, boolean_T rtu_NWZRWZ1, boolean_T rtu_NWZRWZ2,
             B_M_RRLS3_T *localB)
{
  /* Logic: '<S381>/AND1' */
  localB->AND1 = (rtu_RRLSTE && rtu_NWZRWZ1 && rtu_NWZRWZ2);
}

/*
 * Output and update for atomic system:
 *    '<S361>/M_RRLS7'
 *    '<S361>/M_RRLS8'
 *    '<S370>/M_RRLS7'
 *    '<S370>/M_RRLS8'
 *    '<S371>/M_RRLS7'
 *    '<S371>/M_RRLS8'
 */
void M_RRLS_4(boolean_T rtu_RRLSTE, boolean_T rtu_NWZRWZ1, boolean_T rtu_NWZRWZ2,
              boolean_T rtu_NWZRWZ3, B_M_RRLS_4_T *localB)
{
  /* Logic: '<S382>/AND1' */
  localB->AND1 = (rtu_RRLSTE && rtu_NWZRWZ1 && rtu_NWZRWZ2 && rtu_NWZRWZ3);
}

/*
 * Output and update for atomic system:
 *    '<S362>/M_RRLS5'
 *    '<S362>/M_RRLS7'
 *    '<S362>/M_RRLS8'
 *    '<S363>/M_RRLS5'
 *    '<S363>/M_RRLS7'
 *    '<S363>/M_RRLS8'
 *    '<S372>/M_RRLS5'
 *    '<S372>/M_RRLS7'
 *    '<S373>/M_RRLS5'
 *    '<S373>/M_RRLS7'
 *    ...
 */
void M_RRLS2(boolean_T rtu_RRLSTE, boolean_T rtu_NWZRWZ1, B_M_RRLS2_T *localB)
{
  /* Logic: '<S384>/AND1' */
  localB->AND1 = (rtu_RRLSTE && rtu_NWZRWZ1);
}

/*
 * Initial conditions for atomic system:
 *    '<S438>/POINT CONTROL'
 *    '<S439>/POINT CONTROL'
 *    '<S440>/POINT CONTROL'
 *    '<S441>/POINT CONTROL'
 *    '<S442>/POINT CONTROL'
 */
void M_SW_CTRL_Init(DW_M_SW_CTRL_T *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<S443>/MV_TOF2' */
  MV_TOF_Init(&localDW->MV_TOF2);

  /* End of InitializeConditions for SubSystem: '<S443>/MV_TOF2' */

  /* InitializeConditions for Atomic SubSystem: '<S443>/MV_TOF1' */
  MV_TOF_Init(&localDW->MV_TOF1);

  /* End of InitializeConditions for SubSystem: '<S443>/MV_TOF1' */

  /* InitializeConditions for Atomic SubSystem: '<S443>/MV_TON1' */
  MV_TON_Init(&localDW->MV_TON1);

  /* End of InitializeConditions for SubSystem: '<S443>/MV_TON1' */

  /* InitializeConditions for Atomic SubSystem: '<S443>/MV_TON2' */
  MV_TON_Init(&localDW->MV_TON2);

  /* End of InitializeConditions for SubSystem: '<S443>/MV_TON2' */
}

/*
 * Outputs for atomic system:
 *    '<S438>/POINT CONTROL'
 *    '<S439>/POINT CONTROL'
 *    '<S440>/POINT CONTROL'
 *    '<S441>/POINT CONTROL'
 *    '<S442>/POINT CONTROL'
 */
void M_SW_CTRL(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_NWPDI,
               boolean_T rtu_RWPDI, boolean_T rtu_OOC, boolean_T rtu_L,
               boolean_T rtu_NREQ, boolean_T rtu_RREQ, boolean_T rtu_TP,
               boolean_T rtu_TPZ, boolean_T rtu_VDR, B_M_SW_CTRL_T *localB,
               DW_M_SW_CTRL_T *localDW)
{
  boolean_T rtb_AND10_a;
  boolean_T rtb_AND11;
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Memory: '<S443>/Memory2' */
    localB->Memory2 = localDW->Memory2_PreviousInput;

    /* Logic: '<S443>/AND1' incorporates:
     *  Logic: '<S443>/NOT1'
     *  Logic: '<S443>/OR1'
     */
    localB->AND1 = (rtu_NWPDI && (rtu_OOC || (!localB->Memory2)));

    /* Memory: '<S443>/Memory1' */
    localB->Memory1 = localDW->Memory1_PreviousInput;

    /* Logic: '<S443>/AND2' incorporates:
     *  Logic: '<S443>/NOT2'
     *  Logic: '<S443>/OR2'
     */
    localB->AND2 = (rtu_RWPDI && (rtu_OOC || (!localB->Memory1)));
  }

  /* Outputs for Atomic SubSystem: '<S443>/MV_TOF2' */
  MV_TOF(VITALMAIN_M, localB->AND2, &localB->MV_TOF2, &localDW->MV_TOF2, 0.2);

  /* End of Outputs for SubSystem: '<S443>/MV_TOF2' */

  /* Logic: '<S443>/AND10' */
  rtb_AND10_a = (localB->MV_TOF2.LogicalOperator4 && localB->Memory1);
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Logic: '<S443>/NOT9' */
    localB->NOT9 = !localB->Memory1;
  }

  /* Logic: '<S443>/AND11' incorporates:
   *  Logic: '<S443>/NOT8'
   */
  rtb_AND11 = ((!localB->MV_TOF2.LogicalOperator4) && localB->NOT9);

  /* Outputs for Atomic SubSystem: '<S443>/MV_TOF1' */
  MV_TOF(VITALMAIN_M, localB->AND1, &localB->MV_TOF1, &localDW->MV_TOF1, 0.2);

  /* End of Outputs for SubSystem: '<S443>/MV_TOF1' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Logic: '<S443>/NOT10' */
    localB->NOT10 = !localB->Memory2;

    /* Logic: '<S443>/NOT11' */
    localB->NOT11 = !rtu_OOC;

    /* Logic: '<S443>/OR6' */
    localB->OR6 = (rtu_TP || rtu_TPZ);

    /* Memory: '<S443>/Memory3' */
    localB->Memory3 = localDW->Memory3_PreviousInput;
  }

  /* Logic: '<S443>/AND15' incorporates:
   *  Logic: '<S443>/AND12'
   *  Logic: '<S443>/AND13'
   *  Logic: '<S443>/AND14'
   *  Logic: '<S443>/AND9'
   *  Logic: '<S443>/NOT7'
   *  Logic: '<S443>/OR7'
   *  Logic: '<S443>/OR8'
   *  Logic: '<S443>/OR9'
   */
  localB->AND15 = (((((localB->MV_TOF1.LogicalOperator4 && localB->Memory2) ||
                      rtb_AND10_a) && localB->NOT11 && localB->OR6) ||
                    ((rtb_AND11 || ((!localB->MV_TOF1.LogicalOperator4) &&
    localB->NOT10)) && localB->Memory3)) && rtu_VDR);
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Logic: '<S443>/AND16' incorporates:
     *  Logic: '<S443>/NOT12'
     */
    localB->AND16 = ((!localB->AND1) && localB->Memory1);

    /* Logic: '<S443>/AND17' incorporates:
     *  Logic: '<S443>/NOT13'
     */
    localB->AND17 = ((!localB->AND2) && localB->Memory2);

    /* Logic: '<S443>/AND18' */
    rtb_AND10_a = (localB->Memory3 && rtu_VDR);

    /* Logic: '<S443>/AND20' */
    localB->AND20 = (localB->AND16 && rtb_AND10_a);

    /* Logic: '<S443>/AND21' */
    localB->AND21 = (localB->AND17 && rtb_AND10_a);
  }

  /* Outputs for Atomic SubSystem: '<S443>/MV_TON1' */
  MV_TON(VITALMAIN_M, localB->AND20, &localB->MV_TON1, &localDW->MV_TON1, 10.0);

  /* End of Outputs for SubSystem: '<S443>/MV_TON1' */

  /* Logic: '<S443>/AND22' incorporates:
   *  Logic: '<S443>/NOT14'
   */
  localB->AND22 = ((!localB->MV_TON1.LogicalOperator2) && localB->Memory3 &&
                   localB->AND16);

  /* Outputs for Atomic SubSystem: '<S443>/MV_TON2' */
  MV_TON(VITALMAIN_M, localB->AND21, &localB->MV_TON2, &localDW->MV_TON2, 10.0);

  /* End of Outputs for SubSystem: '<S443>/MV_TON2' */

  /* Logic: '<S443>/AND23' incorporates:
   *  Logic: '<S443>/NOT15'
   */
  localB->AND23 = ((!localB->MV_TON2.LogicalOperator2) && localB->Memory3 &&
                   localB->AND17);

  /* Logic: '<S443>/AND24' incorporates:
   *  Logic: '<S443>/OR10'
   */
  localB->AND24 = ((localB->AND22 || localB->AND23) && rtu_L);
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Logic: '<S443>/OR3' */
    rtb_AND10_a = (localB->AND1 || localB->AND2 || localB->Memory3 || rtu_OOC);

    /* Logic: '<S443>/AND3' incorporates:
     *  Logic: '<S443>/NOT4'
     */
    rtb_AND11 = (rtu_L && rtu_NREQ && (!rtu_RREQ) && rtb_AND10_a);

    /* Logic: '<S443>/AND4' incorporates:
     *  Logic: '<S443>/NOT3'
     */
    rtb_AND10_a = (rtu_L && (!rtu_NREQ) && rtu_RREQ && rtb_AND10_a);

    /* Logic: '<S443>/AND5' incorporates:
     *  Logic: '<S443>/NOT6'
     *  Logic: '<S443>/OR4'
     */
    localB->AND5 = ((localB->Memory1 || rtb_AND11) && (!rtb_AND10_a));

    /* Logic: '<S443>/AND6' incorporates:
     *  Logic: '<S443>/NOT5'
     *  Logic: '<S443>/OR5'
     */
    localB->AND6 = ((!rtb_AND11) && (rtb_AND10_a || localB->Memory2));

    /* Logic: '<S443>/AND7' */
    localB->AND7 = (localB->AND1 && localB->Memory1);

    /* Logic: '<S443>/AND8' */
    localB->AND8 = (localB->AND2 && localB->Memory2);
  }
}

/*
 * Update for atomic system:
 *    '<S438>/POINT CONTROL'
 *    '<S439>/POINT CONTROL'
 *    '<S440>/POINT CONTROL'
 *    '<S441>/POINT CONTROL'
 *    '<S442>/POINT CONTROL'
 */
void M_SW_CTRL_Update(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, B_M_SW_CTRL_T
                      *localB, DW_M_SW_CTRL_T *localDW)
{
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Update for Memory: '<S443>/Memory2' */
    localDW->Memory2_PreviousInput = localB->AND6;

    /* Update for Memory: '<S443>/Memory1' */
    localDW->Memory1_PreviousInput = localB->AND5;
  }

  /* Update for Atomic SubSystem: '<S443>/MV_TOF2' */
  MV_TOF_Update(VITALMAIN_M, localB->AND2, &localB->MV_TOF2, &localDW->MV_TOF2);

  /* End of Update for SubSystem: '<S443>/MV_TOF2' */

  /* Update for Atomic SubSystem: '<S443>/MV_TOF1' */
  MV_TOF_Update(VITALMAIN_M, localB->AND1, &localB->MV_TOF1, &localDW->MV_TOF1);

  /* End of Update for SubSystem: '<S443>/MV_TOF1' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* Update for Memory: '<S443>/Memory3' */
    localDW->Memory3_PreviousInput = localB->AND15;
  }

  /* Update for Atomic SubSystem: '<S443>/MV_TON1' */
  MV_TON_Update(VITALMAIN_M, localB->AND20, &localB->MV_TON1, &localDW->MV_TON1);

  /* End of Update for SubSystem: '<S443>/MV_TON1' */

  /* Update for Atomic SubSystem: '<S443>/MV_TON2' */
  MV_TON_Update(VITALMAIN_M, localB->AND21, &localB->MV_TON2, &localDW->MV_TON2);

  /* End of Update for SubSystem: '<S443>/MV_TON2' */
}

/*
 * Output and update for atomic system:
 *    '<S548>/POINT LOCK'
 *    '<S549>/POINT LOCK'
 *    '<S550>/POINT LOCK'
 *    '<S551>/POINT LOCK'
 *    '<S552>/POINT LOCK'
 */
void M_SW_L(boolean_T rtu_TES, boolean_T rtu_EES, boolean_T rtu_SES, boolean_T
            rtu_TWS, boolean_T rtu_EWS, boolean_T rtu_SWS, boolean_T rtu_TELAS,
            boolean_T rtu_TWLAS, boolean_T rtu_TP, boolean_T rtu_TPZ, B_M_SW_L_T
            *localB)
{
  /* Logic: '<S553>/AND1' incorporates:
   *  Logic: '<S553>/OR1'
   */
  localB->AND1 = (rtu_TES && rtu_EES && rtu_SES && rtu_TWS && rtu_EWS && rtu_SWS
                  && rtu_TELAS && rtu_TWLAS && (rtu_TP || rtu_TPZ));
}

/*
 * Output and update for atomic system:
 *    '<S558>/ROUTE CHECK'
 *    '<S559>/ROUTE CHECK'
 *    '<S560>/ROUTE CHECK'
 *    '<S561>/ROUTE CHECK'
 *    '<S562>/ROUTE CHECK'
 *    '<S563>/ROUTE CHECK'
 *    '<S564>/ROUTE CHECK'
 *    '<S565>/ROUTE CHECK'
 *    '<S566>/ROUTE CHECK'
 *    '<S567>/ROUTE CHECK'
 *    ...
 */
void M_H_D_S(boolean_T rtu_REQ, boolean_T rtu_L, B_M_H_D_S_T *localB)
{
  /* Logic: '<S578>/AND2' */
  localB->AND2 = (rtu_REQ && rtu_L);
}

/*
 * Output and update for atomic system:
 *    '<S598>/ROUTE CONFLICT'
 *    '<S599>/ROUTE CONFLICT'
 *    '<S600>/ROUTE CONFLICT'
 *    '<S601>/ROUTE CONFLICT'
 *    '<S602>/ROUTE CONFLICT'
 *    '<S603>/ROUTE CONFLICT'
 *    '<S604>/ROUTE CONFLICT'
 *    '<S605>/ROUTE CONFLICT'
 *    '<S606>/ROUTE CONFLICT'
 *    '<S607>/ROUTE CONFLICT'
 *    ...
 */
void M_R_L(boolean_T rtu_ESWS, boolean_T rtu_NWCRWC, boolean_T rtu_GRDRDO,
           B_M_R_L_T *localB)
{
  /* Logic: '<S618>/AND1' incorporates:
   *  Logic: '<S618>/NOT1'
   */
  localB->AND1 = (rtu_ESWS && rtu_NWCRWC && (!rtu_GRDRDO));
}

/*
 * Output and update for atomic system:
 *    '<S638>/ROUTE LOCK'
 *    '<S639>/ROUTE LOCK'
 *    '<S640>/ROUTE LOCK'
 *    '<S641>/ROUTE LOCK'
 *    '<S642>/ROUTE LOCK'
 *    '<S643>/ROUTE LOCK'
 *    '<S644>/ROUTE LOCK'
 *    '<S645>/ROUTE LOCK'
 *    '<S646>/ROUTE LOCK'
 *    '<S647>/ROUTE LOCK'
 *    ...
 */
void M_ES_WS(boolean_T rtu_TRL, boolean_T rtu_TESWSB, boolean_T rtu_TNWZRWZ,
             boolean_T rtu_ERL, boolean_T rtu_EESWSB, boolean_T rtu_ENWZRWZ,
             boolean_T rtu_SRL, boolean_T rtu_SESWSB, boolean_T rtu_SNWZRWZ,
             boolean_T rtu_TP, boolean_T rtu_RLS, B_M_ES_WS_T *localB,
             DW_M_ES_WS_T *localDW)
{
  /* Logic: '<S680>/AND1' incorporates:
   *  Logic: '<S680>/OR1'
   *  Logic: '<S680>/OR2'
   *  Memory: '<S680>/Memory'
   */
  localB->AND1 = (rtu_TRL && (rtu_TESWSB || rtu_TNWZRWZ) && (rtu_TP || rtu_RLS ||
    localB->AND1));

  /* Logic: '<S680>/AND3' incorporates:
   *  Logic: '<S680>/OR5'
   *  Logic: '<S680>/OR6'
   *  Memory: '<S680>/Memory2'
   */
  localB->AND3 = (rtu_SRL && (rtu_SESWSB || rtu_SNWZRWZ) && (rtu_TP || rtu_RLS ||
    localB->AND3));

  /* Update for Memory: '<S680>/Memory1' incorporates:
   *  Logic: '<S680>/AND2'
   *  Logic: '<S680>/OR3'
   *  Logic: '<S680>/OR4'
   *  Memory: '<S680>/Memory1'
   */
  localDW->Memory1_PreviousInput = (rtu_ERL && (rtu_EESWSB || rtu_ENWZRWZ) &&
    (rtu_TP || rtu_RLS || localDW->Memory1_PreviousInput));
}

/*
 * Output and update for atomic system:
 *    '<S722>/SIGNAL LIGHTING'
 *    '<S723>/SIGNAL LIGHTING'
 *    '<S724>/SIGNAL LIGHTING'
 *    '<S725>/SIGNAL LIGHTING'
 *    '<S726>/SIGNAL LIGHTING'
 *    '<S727>/SIGNAL LIGHTING'
 *    '<S728>/SIGNAL LIGHTING'
 *    '<S729>/SIGNAL LIGHTING'
 *    '<S730>/SIGNAL LIGHTING'
 */
void M_SIG_CTRL(boolean_T rtu_D, boolean_T rtu_S, boolean_T rtu_TP,
                B_M_SIG_CTRL_T *localB)
{
  /* Inport: '<S731>/D' */
  localB->D = rtu_D;

  /* Logic: '<S731>/AND19' incorporates:
   *  Logic: '<S731>/NOT16'
   */
  localB->AND19 = (rtu_S && (!rtu_TP));
}

/*
 * Initial conditions for atomic system:
 *    '<S15>/M_TP1'
 *    '<S15>/M_TP10'
 *    '<S15>/M_TP11'
 *    '<S15>/M_TP12'
 *    '<S15>/M_TP13'
 *    '<S15>/M_TP14'
 *    '<S15>/M_TP15'
 *    '<S15>/M_TP16'
 *    '<S15>/M_TP17'
 *    '<S15>/M_TP18'
 *    ...
 */
void M_TP_Init(DW_M_TP_T *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<S740>/MV_TON1' */
  MV_TON_Init(&localDW->MV_TON1);

  /* End of InitializeConditions for SubSystem: '<S740>/MV_TON1' */
}

/*
 * Outputs for atomic system:
 *    '<S15>/M_TP1'
 *    '<S15>/M_TP10'
 *    '<S15>/M_TP11'
 *    '<S15>/M_TP12'
 *    '<S15>/M_TP13'
 *    '<S15>/M_TP14'
 *    '<S15>/M_TP15'
 *    '<S15>/M_TP16'
 *    '<S15>/M_TP17'
 *    '<S15>/M_TP18'
 *    ...
 */
void M_TP(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_TPR, B_M_TP_T *
          localB, DW_M_TP_T *localDW)
{
  /* Outputs for Atomic SubSystem: '<S740>/MV_TON1' */
  MV_TON(VITALMAIN_M, rtu_TPR, &localB->MV_TON1, &localDW->MV_TON1, 5.0);

  /* End of Outputs for SubSystem: '<S740>/MV_TON1' */
}

/*
 * Update for atomic system:
 *    '<S15>/M_TP1'
 *    '<S15>/M_TP10'
 *    '<S15>/M_TP11'
 *    '<S15>/M_TP12'
 *    '<S15>/M_TP13'
 *    '<S15>/M_TP14'
 *    '<S15>/M_TP15'
 *    '<S15>/M_TP16'
 *    '<S15>/M_TP17'
 *    '<S15>/M_TP18'
 *    ...
 */
void M_TP_Update(RT_MODEL_VITALMAIN_T * const VITALMAIN_M, boolean_T rtu_TPR,
                 B_M_TP_T *localB, DW_M_TP_T *localDW)
{
  /* Update for Atomic SubSystem: '<S740>/MV_TON1' */
  MV_TON_Update(VITALMAIN_M, rtu_TPR, &localB->MV_TON1, &localDW->MV_TON1);

  /* End of Update for SubSystem: '<S740>/MV_TON1' */
}

/* Initial conditions for referenced model: 'VITALMAIN' */
void VITALMAIN_Init(void)
{
  /* InitializeConditions for Atomic SubSystem: '<S16>/APPROACH LOCK' */
  M_AS_Init(&VITALMAIN_DW.APPROACHLOCK);

  /* End of InitializeConditions for SubSystem: '<S16>/APPROACH LOCK' */

  /* InitializeConditions for Atomic SubSystem: '<S17>/APPROACH LOCK' */
  M_AS_Init(&VITALMAIN_DW.APPROACHLOCK_c);

  /* End of InitializeConditions for SubSystem: '<S17>/APPROACH LOCK' */

  /* InitializeConditions for Atomic SubSystem: '<S18>/APPROACH LOCK' */
  M_AS_Init(&VITALMAIN_DW.APPROACHLOCK_h);

  /* End of InitializeConditions for SubSystem: '<S18>/APPROACH LOCK' */

  /* InitializeConditions for Atomic SubSystem: '<S19>/APPROACH LOCK' */
  M_AS_Init(&VITALMAIN_DW.APPROACHLOCK_o);

  /* End of InitializeConditions for SubSystem: '<S19>/APPROACH LOCK' */

  /* InitializeConditions for Atomic SubSystem: '<S20>/APPROACH LOCK' */
  M_AS_Init(&VITALMAIN_DW.APPROACHLOCK_d);

  /* End of InitializeConditions for SubSystem: '<S20>/APPROACH LOCK' */

  /* InitializeConditions for Atomic SubSystem: '<S21>/APPROACH LOCK' */
  M_AS_Init(&VITALMAIN_DW.APPROACHLOCK_h1);

  /* End of InitializeConditions for SubSystem: '<S21>/APPROACH LOCK' */

  /* InitializeConditions for Atomic SubSystem: '<S22>/APPROACH LOCK' */
  M_AS_Init(&VITALMAIN_DW.APPROACHLOCK_g);

  /* End of InitializeConditions for SubSystem: '<S22>/APPROACH LOCK' */

  /* InitializeConditions for Atomic SubSystem: '<S23>/APPROACH LOCK' */
  M_AS_Init(&VITALMAIN_DW.APPROACHLOCK_e);

  /* End of InitializeConditions for SubSystem: '<S23>/APPROACH LOCK' */

  /* InitializeConditions for Atomic SubSystem: '<S24>/APPROACH LOCK' */
  M_AS_Init(&VITALMAIN_DW.APPROACHLOCK_ok);

  /* End of InitializeConditions for SubSystem: '<S24>/APPROACH LOCK' */

  /* InitializeConditions for Atomic SubSystem: '<S169>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Init(&VITALMAIN_DW.EMERGENCYPOINTRELEASE);

  /* End of InitializeConditions for SubSystem: '<S169>/EMERGENCY POINT RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S170>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Init(&VITALMAIN_DW.EMERGENCYPOINTRELEASE_f);

  /* End of InitializeConditions for SubSystem: '<S170>/EMERGENCY POINT RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S171>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Init(&VITALMAIN_DW.EMERGENCYPOINTRELEASE_e);

  /* End of InitializeConditions for SubSystem: '<S171>/EMERGENCY POINT RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S172>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Init(&VITALMAIN_DW.EMERGENCYPOINTRELEASE_d);

  /* End of InitializeConditions for SubSystem: '<S172>/EMERGENCY POINT RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S173>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Init(&VITALMAIN_DW.EMERGENCYPOINTRELEASE_m);

  /* End of InitializeConditions for SubSystem: '<S173>/EMERGENCY POINT RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S229>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Init(&VITALMAIN_DW.EMERGENCYROUTERELEASE);

  /* End of InitializeConditions for SubSystem: '<S229>/EMERGENCY ROUTE RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S230>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Init(&VITALMAIN_DW.EMERGENCYROUTERELEASE_b);

  /* End of InitializeConditions for SubSystem: '<S230>/EMERGENCY ROUTE RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S231>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Init(&VITALMAIN_DW.EMERGENCYROUTERELEASE_bb);

  /* End of InitializeConditions for SubSystem: '<S231>/EMERGENCY ROUTE RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S232>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Init(&VITALMAIN_DW.EMERGENCYROUTERELEASE_i);

  /* End of InitializeConditions for SubSystem: '<S232>/EMERGENCY ROUTE RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S233>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Init(&VITALMAIN_DW.EMERGENCYROUTERELEASE_p);

  /* End of InitializeConditions for SubSystem: '<S233>/EMERGENCY ROUTE RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S234>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Init(&VITALMAIN_DW.EMERGENCYROUTERELEASE_a);

  /* End of InitializeConditions for SubSystem: '<S234>/EMERGENCY ROUTE RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S235>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Init(&VITALMAIN_DW.EMERGENCYROUTERELEASE_l);

  /* End of InitializeConditions for SubSystem: '<S235>/EMERGENCY ROUTE RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S236>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Init(&VITALMAIN_DW.EMERGENCYROUTERELEASE_m);

  /* End of InitializeConditions for SubSystem: '<S236>/EMERGENCY ROUTE RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S237>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Init(&VITALMAIN_DW.EMERGENCYROUTERELEASE_o);

  /* End of InitializeConditions for SubSystem: '<S237>/EMERGENCY ROUTE RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S438>/POINT CONTROL' */
  M_SW_CTRL_Init(&VITALMAIN_DW.POINTCONTROL);

  /* End of InitializeConditions for SubSystem: '<S438>/POINT CONTROL' */

  /* InitializeConditions for Atomic SubSystem: '<S439>/POINT CONTROL' */
  M_SW_CTRL_Init(&VITALMAIN_DW.POINTCONTROL_c);

  /* End of InitializeConditions for SubSystem: '<S439>/POINT CONTROL' */

  /* InitializeConditions for Atomic SubSystem: '<S440>/POINT CONTROL' */
  M_SW_CTRL_Init(&VITALMAIN_DW.POINTCONTROL_a);

  /* End of InitializeConditions for SubSystem: '<S440>/POINT CONTROL' */

  /* InitializeConditions for Atomic SubSystem: '<S441>/POINT CONTROL' */
  M_SW_CTRL_Init(&VITALMAIN_DW.POINTCONTROL_j);

  /* End of InitializeConditions for SubSystem: '<S441>/POINT CONTROL' */

  /* InitializeConditions for Atomic SubSystem: '<S442>/POINT CONTROL' */
  M_SW_CTRL_Init(&VITALMAIN_DW.POINTCONTROL_h);

  /* End of InitializeConditions for SubSystem: '<S442>/POINT CONTROL' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP9' */
  M_TP_Init(&VITALMAIN_DW.M_TP9);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP9' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP8' */
  M_TP_Init(&VITALMAIN_DW.M_TP8);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP8' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP7' */
  M_TP_Init(&VITALMAIN_DW.M_TP7);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP7' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP6' */
  M_TP_Init(&VITALMAIN_DW.M_TP6);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP6' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP5' */
  M_TP_Init(&VITALMAIN_DW.M_TP5);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP5' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP4' */
  M_TP_Init(&VITALMAIN_DW.M_TP4);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP4' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP3' */
  M_TP_Init(&VITALMAIN_DW.M_TP3);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP3' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP27' */
  M_TP_Init(&VITALMAIN_DW.M_TP27);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP27' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP26' */
  M_TP_Init(&VITALMAIN_DW.M_TP26);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP26' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP25' */
  M_TP_Init(&VITALMAIN_DW.M_TP25);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP25' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP24' */
  M_TP_Init(&VITALMAIN_DW.M_TP24);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP24' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP23' */
  M_TP_Init(&VITALMAIN_DW.M_TP23);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP23' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP22' */
  M_TP_Init(&VITALMAIN_DW.M_TP22);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP22' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP21' */
  M_TP_Init(&VITALMAIN_DW.M_TP21);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP21' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP20' */
  M_TP_Init(&VITALMAIN_DW.M_TP20);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP20' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP2' */
  M_TP_Init(&VITALMAIN_DW.M_TP2);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP2' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP19' */
  M_TP_Init(&VITALMAIN_DW.M_TP19);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP19' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP18' */
  M_TP_Init(&VITALMAIN_DW.M_TP18);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP18' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP17' */
  M_TP_Init(&VITALMAIN_DW.M_TP17);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP17' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP16' */
  M_TP_Init(&VITALMAIN_DW.M_TP16);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP16' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP15' */
  M_TP_Init(&VITALMAIN_DW.M_TP15);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP15' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP14' */
  M_TP_Init(&VITALMAIN_DW.M_TP14);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP14' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP13' */
  M_TP_Init(&VITALMAIN_DW.M_TP13);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP13' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP12' */
  M_TP_Init(&VITALMAIN_DW.M_TP12);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP12' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP11' */
  M_TP_Init(&VITALMAIN_DW.M_TP11);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP11' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP10' */
  M_TP_Init(&VITALMAIN_DW.M_TP10);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP10' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/M_TP1' */
  M_TP_Init(&VITALMAIN_DW.M_TP1);

  /* End of InitializeConditions for SubSystem: '<S15>/M_TP1' */
}

/* Start for referenced model: 'VITALMAIN' */
void VITALMAIN_Start(void)
{
  /* Start for DiscretePulseGenerator: '<S4>/0.5S' */
  VITALMAIN_DW.clockTickCounter = 0;

  /* Start for DiscretePulseGenerator: '<S4>/1S' */
  VITALMAIN_DW.clockTickCounter_j = 0;
}

/* Outputs for referenced model: 'VITALMAIN' */
void VITALMAIN(const boolean_T rtu_FROMDEP[4], const boolean_T *rtu_NVVCHKFROM,
               const boolean_T *rtu_RRFROM, const boolean_T rtu_TREQFROM[16],
               const boolean_T rtu_NREQFROM[5], const boolean_T rtu_RREQFROM[5],
               const boolean_T rtu_OOCFROM[5], const boolean_T rtu_RRLSPBFROM[8],
               const boolean_T rtu_SWRLSPBFROM[5], const boolean_T
               rtu_DEPVARFROM[8], const boolean_T rtu_RSTFROM[9], const
               boolean_T *rtu_VDRDI, const boolean_T rtu_TPRDI[27], const
               boolean_T rtu_NWPDI[5], const boolean_T rtu_RWPDI[5], boolean_T
               rty_TODEP[6], boolean_T *rty_VDRDITO, boolean_T *rty_VNVCHKTO,
               boolean_T rty_TPTO[27], boolean_T rty_TESTO[21], boolean_T
               rty_TWSTO[21], boolean_T rty_SESTO[7], boolean_T rty_SWSTO[7],
               boolean_T rty_NWCTO[5], boolean_T rty_NWPTO[5], boolean_T
               rty_NWZTO[5], boolean_T rty_NWTETO[5], boolean_T rty_RWCTO[5],
               boolean_T rty_RWPTO[5], boolean_T rty_RWZTO[5], boolean_T
               rty_RWTETO[5], boolean_T rty_LTO[5], boolean_T rty_LSTO[5],
               boolean_T rty_SWRLSTO[5], boolean_T rty_TPZTO[5], boolean_T
               rty_DRDOTO[8], boolean_T rty_GRDOTO[2], boolean_T rty_TASTO[8],
               boolean_T rty_SASTO[2], boolean_T rty_RRLSTO[8], boolean_T
               *rty_VDRDO, boolean_T rty_DRDO[8], boolean_T rty_GRDO[2],
               boolean_T rty_NWRDO[5], boolean_T rty_RWRDO[5], boolean_T
               rty_WLPRDO[5])
{
  RT_MODEL_VITALMAIN_T *const VITALMAIN_M = &(VITALMAIN_MdlrefDW.rtm);

  /* local block i/o variables */
  boolean_T rtb_FALSE;
  boolean_T rtb_TmpSignalConversionAtAPPROA;
  boolean_T rtb_DEPGRDO;
  boolean_T rtb_DEPTP;
  boolean_T rtb_u1CTP;
  boolean_T rtb_RR;
  boolean_T rtb_VDRDI_m;
  boolean_T rtb_J12ADRDO;
  boolean_T rtb_FALSE_n;
  boolean_T rtb_TmpSignalConversionAtAPPR_n;
  boolean_T rtb_u2ATP;
  boolean_T rtb_u1BTP;
  boolean_T rtb_RR_h;
  boolean_T rtb_VDRDI_e;
  boolean_T rtb_J12BDRDO;
  boolean_T rtb_FALSE_h;
  boolean_T rtb_TmpSignalConversionAtAPP_nm;
  boolean_T rtb_u2ETP;
  boolean_T rtb_u3ATP;
  boolean_T rtb_RR_a;
  boolean_T rtb_VDRDI_i;
  boolean_T rtb_J14DRDO;
  boolean_T rtb_FALSE_e;
  boolean_T rtb_TmpSignalConversionAtAP_nmx;
  boolean_T rtb_u4BTP;
  boolean_T rtb_u4ATP;
  boolean_T rtb_RR_d;
  boolean_T rtb_VDRDI_f;
  boolean_T rtb_J22ADRDO;
  boolean_T rtb_FALSE_hg;
  boolean_T rtb_TmpSignalConversionAtA_nmxm;
  boolean_T rtb_u2ATP_c;
  boolean_T rtb_u1CTP_n;
  boolean_T rtb_RR_e;
  boolean_T rtb_VDRDI_a;
  boolean_T rtb_J22BDRDO;
  boolean_T rtb_FALSE_f;
  boolean_T rtb_TmpSignalConversionAt_nmxmn;
  boolean_T rtb_u2ATP_cl;
  boolean_T rtb_u3ATP_l;
  boolean_T rtb_RR_f;
  boolean_T rtb_VDRDI_d;
  boolean_T rtb_J24DRDO;
  boolean_T rtb_FALSE_g;
  boolean_T rtb_TmpSignalConversionA_nmxmns;
  boolean_T rtb_u4BTP_l;
  boolean_T rtb_u4ATP_k;
  boolean_T rtb_RR_hx;
  boolean_T rtb_VDRDI_iv;
  boolean_T rtb_JL10DRDO;
  boolean_T rtb_FALSE_m;
  boolean_T rtb_JL10GRDO;
  boolean_T rtb_u0ATP;
  boolean_T rtb_u0BTP;
  boolean_T rtb_RR_g;
  boolean_T rtb_VDRDI_k;
  boolean_T rtb_JL20DRDO;
  boolean_T rtb_FALSE_j;
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
  boolean_T rtb_TRUE;
  boolean_T rtb_TmpSignalConversionAtEMERGE;
  boolean_T rtb_FALSE_a;
  boolean_T rtb_TmpSignalConversionAtEMER_m;
  boolean_T rtb_TmpSignalConversionAtEMER_p;
  boolean_T rtb_AND1_ox;
  boolean_T rtb_OR1;
  boolean_T rtb_u1CSES_o;
  boolean_T rtb_DEPRRLSPBCTRL;
  boolean_T rtb_RRLS;
  boolean_T rtb_VDRDI_jl;
  boolean_T rtb_AND1_g;
  boolean_T rtb_OR1_l;
  boolean_T rtb_TRUE_a;
  boolean_T rtb_TmpSignalConversionAtEME_p5;
  boolean_T rtb_FALSE_b;
  boolean_T rtb_TmpSignalConversionAtEMER_f;
  boolean_T rtb_TmpSignalConversionAtEMER_g;
  boolean_T rtb_u2BTWS;
  boolean_T rtb_J12ARRLSPBCTRL;
  boolean_T rtb_RRLS_h;
  boolean_T rtb_VDRDI_n;
  boolean_T rtb_AND1_au;
  boolean_T rtb_OR1_m;
  boolean_T rtb_TRUE_h;
  boolean_T rtb_TmpSignalConversionAtEM_p5l;
  boolean_T rtb_FALSE_ne;
  boolean_T rtb_TmpSignalConversionAtEME_fh;
  boolean_T rtb_TmpSignalConversionAtEME_gb;
  boolean_T rtb_u2DTES;
  boolean_T rtb_J12BRRLSPBCTRL;
  boolean_T rtb_RRLS_d;
  boolean_T rtb_VDRDI_e1;
  boolean_T rtb_AND1_ah;
  boolean_T rtb_OR1_i;
  boolean_T rtb_TRUE_j;
  boolean_T rtb_TmpSignalConversionAtE_p5ld;
  boolean_T rtb_FALSE_hx;
  boolean_T rtb_TmpSignalConversionAtEM_fh2;
  boolean_T rtb_TmpSignalConversionAtEM_gb5;
  boolean_T rtb_u2BTWS_o;
  boolean_T rtb_J22ARRLSPBCTRL;
  boolean_T rtb_RRLS_p;
  boolean_T rtb_VDRDI_mg;
  boolean_T rtb_AND1_j;
  boolean_T rtb_OR1_g;
  boolean_T rtb_TRUE_m;
  boolean_T rtb_TmpSignalConversionAt_p5ld1;
  boolean_T rtb_FALSE_bn;
  boolean_T rtb_TmpSignalConversionAtE_fh2c;
  boolean_T rtb_TmpSignalConversionAtE_gb52;
  boolean_T rtb_u2DTES_a;
  boolean_T rtb_J22BRRLSPBCTRL;
  boolean_T rtb_RRLS_l;
  boolean_T rtb_VDRDI_i4;
  boolean_T rtb_AND1_i;
  boolean_T rtb_OR1_g1;
  boolean_T rtb_TRUE_n;
  boolean_T rtb_TmpSignalConversionA_p5ld1y;
  boolean_T rtb_FALSE_d;
  boolean_T rtb_DEPSAS;
  boolean_T rtb_DEPX10SREQ;
  boolean_T rtb_u0BTWS;
  boolean_T rtb_X10RRLSPBCTRL;
  boolean_T rtb_RRLS_i;
  boolean_T rtb_VDRDI_c;
  boolean_T rtb_AND1_ac;
  boolean_T rtb_OR1_lj;
  boolean_T rtb_TRUE_p;
  boolean_T rtb_TmpSignalConversion_p5ld1yk;
  boolean_T rtb_FALSE_k;
  boolean_T rtb_TmpSignalConversionAt_fh2cg;
  boolean_T rtb_TmpSignalConversionAt_gb522;
  boolean_T rtb_u4ATES;
  boolean_T rtb_X14RRLSPBCTRL;
  boolean_T rtb_RRLS_n;
  boolean_T rtb_VDRDI_cg;
  boolean_T rtb_AND1_ob;
  boolean_T rtb_OR1_a;
  boolean_T rtb_TRUE_g;
  boolean_T rtb_TmpSignalConversio_p5ld1ykq;
  boolean_T rtb_FALSE_en;
  boolean_T rtb_DEPSAS_f;
  boolean_T rtb_DEPX20SREQ;
  boolean_T rtb_u0BTWS_g;
  boolean_T rtb_X20RRLSPBCTRL;
  boolean_T rtb_RRLS_k;
  boolean_T rtb_VDRDI_ks;
  boolean_T rtb_AND1_im;
  boolean_T rtb_OR1_h;
  boolean_T rtb_TRUE_c;
  boolean_T rtb_TmpSignalConversi_p5ld1ykqn;
  boolean_T rtb_FALSE_hf;
  boolean_T rtb_TmpSignalConversionA_fh2cgc;
  boolean_T rtb_TmpSignalConversionA_gb522p;
  boolean_T rtb_u4ATES_d;
  boolean_T rtb_X24RRLSPBCTRL;
  boolean_T rtb_RRLS_g;
  boolean_T rtb_VDRDI_o;
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
  boolean_T rtb_J12BRRLSTEFROM1_l;
  boolean_T rtb_J12ARRLSTEFROM1;
  boolean_T rtb_J12BRRLSTEFROM1_e;
  boolean_T rtb_J12ARRLSTEFROM1_j;
  boolean_T rtb_J12ARRLSTEFROM1_e;
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
  boolean_T rtb_J22BRRLSTEFROM1_e;
  boolean_T rtb_J22ARRLSTEFROM1_f;
  boolean_T rtb_J22BRRLSTEFROM1_i;
  boolean_T rtb_J22ARRLSTEFROM1_b;
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
  boolean_T rtb_AND1_b;
  boolean_T rtb_TRUE_k;
  boolean_T rtb_TmpSignalConversionAtPOINTL;
  boolean_T rtb_AND2_nb;
  boolean_T rtb_AND3;
  boolean_T rtb_TmpSignalConversionAtPOIN_a;
  boolean_T rtb_AND4;
  boolean_T rtb_TmpSignalConversionAtPOIN_f;
  boolean_T rtb_AND5;
  boolean_T rtb_W11A21ATPZ_o;
  boolean_T rtb_AND1_m1;
  boolean_T rtb_TRUE_j5;
  boolean_T rtb_TmpSignalConversionAtPOIN_l;
  boolean_T rtb_AND2_a;
  boolean_T rtb_AND3_e;
  boolean_T rtb_TmpSignalConversionAtPOI_a1;
  boolean_T rtb_AND4_j;
  boolean_T rtb_TmpSignalConversionAtPOI_fe;
  boolean_T rtb_AND5_g;
  boolean_T rtb_W11B21BTPZ_o;
  boolean_T rtb_AND1_f;
  boolean_T rtb_TRUE_gn;
  boolean_T rtb_TmpSignalConversionAtPOI_lj;
  boolean_T rtb_TmpSignalConversionAtPOIN_g;
  boolean_T rtb_AND3_d;
  boolean_T rtb_TmpSignalConversionAtPO_a1a;
  boolean_T rtb_TmpSignalConversionAtPOI_fi;
  boolean_T rtb_TmpSignalConversionAtPO_fee;
  boolean_T rtb_AND5_p;
  boolean_T rtb_W13A23ATPZ_a;
  boolean_T rtb_AND1_p;
  boolean_T rtb_TRUE_e;
  boolean_T rtb_TmpSignalConversionAtPO_ljf;
  boolean_T rtb_TmpSignalConversionAtPOI_gm;
  boolean_T rtb_AND3_h;
  boolean_T rtb_TmpSignalConversionAtP_a1a5;
  boolean_T rtb_TmpSignalConversionAtPO_fiy;
  boolean_T rtb_TmpSignalConversionAtP_feeu;
  boolean_T rtb_AND5_j;
  boolean_T rtb_W13B23BTPZ_n;
  boolean_T rtb_u1CTES_c;
  boolean_T rtb_TRUE_o;
  boolean_T rtb_TmpSignalConversionAtP_ljfq;
  boolean_T rtb_u1CSES_i;
  boolean_T rtb_u1CTWS_h;
  boolean_T rtb_TmpSignalConversionAt_a1a5b;
  boolean_T rtb_u1CSWS_b;
  boolean_T rtb_TmpSignalConversionAt_feeux;
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
  boolean_T rtb_AND2_m;
  boolean_T rtb_AND1_in;
  boolean_T rtb_AND3_j;
  boolean_T rtb_u1BTES_i;
  boolean_T rtb_AND1_bv;
  boolean_T rtb_OR1_az;
  boolean_T rtb_u1BTES_cc;
  boolean_T rtb_AND1_n5;
  boolean_T rtb_AND2_g;
  boolean_T rtb_u3ATWS_k;
  boolean_T rtb_AND1_pg;
  boolean_T rtb_J14DRDO_f;
  boolean_T rtb_u3ATWS_i;
  boolean_T rtb_AND1_h1;
  boolean_T rtb_J24DRDO_j;
  boolean_T rtb_u4ATES_c;
  boolean_T rtb_AND1_e;
  boolean_T rtb_J12BDRDO_c;
  boolean_T rtb_u4ATES_o;
  boolean_T rtb_AND1_pl;
  boolean_T rtb_J22DRDO;
  boolean_T rtb_u1CTES_a;
  boolean_T rtb_AND1_e1;
  boolean_T rtb_OR1_pi;
  boolean_T rtb_u1CTES_o;
  boolean_T rtb_AND2_h;
  boolean_T rtb_AND1_pgg;
  boolean_T rtb_u3ATWS_p;
  boolean_T rtb_AND1_b4;
  boolean_T rtb_J14DRDO_fl;
  boolean_T rtb_u3ATWS_a;
  boolean_T rtb_AND1_fd;
  boolean_T rtb_J24DRDO_e;
  boolean_T rtb_u4ATES_p;
  boolean_T rtb_AND1_df;
  boolean_T rtb_J12BDRDO_ct;
  boolean_T rtb_u4ATES_dt;
  boolean_T rtb_AND1_b3;
  boolean_T rtb_J22BDRDO_m;
  boolean_T rtb_AND2_ar;
  boolean_T rtb_AND1_po;
  boolean_T rtb_DEPGRDO_d;
  boolean_T rtb_AND2_j;
  boolean_T rtb_AND1_pk;
  boolean_T rtb_J12ADRDO_d;
  boolean_T rtb_AND2_b4;
  boolean_T rtb_AND1_hc;
  boolean_T rtb_J22ADRDO_l;
  boolean_T rtb_AND2_p;
  boolean_T rtb_AND1_on;
  boolean_T rtb_DEPGRDO_h;
  boolean_T rtb_AND2_i;
  boolean_T rtb_AND1_o3;
  boolean_T rtb_J12ADRDO_f;
  boolean_T rtb_AND2_h1;
  boolean_T rtb_AND1_i4;
  boolean_T rtb_J22ADRDO_n;
  boolean_T rtb_u0BTESRL;
  boolean_T rtb_TRUE_nq;
  boolean_T rtb_TmpSignalConversionAtROUTEL;
  boolean_T rtb_FALSE_mu;
  boolean_T rtb_TmpSignalConversionAtROUT_g;
  boolean_T rtb_TmpSignalConversionAtROUT_m;
  boolean_T rtb_TmpSignalConversionAtROUT_c;
  boolean_T rtb_TmpSignalConversionAtROU_gd;
  boolean_T rtb_u0BSESRL;
  boolean_T rtb_u0BTP_b;
  boolean_T rtb_u0BRLS;
  boolean_T rtb_TRUE_px;
  boolean_T rtb_TmpSignalConversionAtROU_g1;
  boolean_T rtb_u1ATWS_h;
  boolean_T rtb_W11A21ARWZ;
  boolean_T rtb_TmpSignalConversionAtROU_gg;
  boolean_T rtb_FALSE_eg;
  boolean_T rtb_TmpSignalConversionAtROU_md;
  boolean_T rtb_TmpSignalConversionAtROU_cc;
  boolean_T rtb_u1ASWS_b;
  boolean_T rtb_u0BTP_f;
  boolean_T rtb_u0BRLS_e;
  boolean_T rtb_TRUE_mq;
  boolean_T rtb_TmpSignalConversionAtRO_g13;
  boolean_T rtb_OR2_j;
  boolean_T rtb_FALSE_gs;
  boolean_T rtb_TmpSignalConversionAtRO_ggh;
  boolean_T rtb_TmpSignalConversionAtRO_mda;
  boolean_T rtb_TmpSignalConversionAtRO_ccg;
  boolean_T rtb_TmpSignalConversionAtRO_gdj;
  boolean_T rtb_u0BSES;
  boolean_T rtb_u1ATP_n;
  boolean_T rtb_u1ARLS;
  boolean_T rtb_TRUE_oh;
  boolean_T rtb_TmpSignalConversionAtR_g13e;
  boolean_T rtb_u1BTWS_hl;
  boolean_T rtb_FALSE_gb;
  boolean_T rtb_TmpSignalConversionAtR_ggho;
  boolean_T rtb_TmpSignalConversionAtR_mda1;
  boolean_T rtb_TmpSignalConversionAtR_ccgp;
  boolean_T rtb_TmpSignalConversionAtR_gdjd;
  boolean_T rtb_u1BSWS_k0;
  boolean_T rtb_u1ATP_ar;
  boolean_T rtb_u1ARLS_n;
  boolean_T rtb_TRUE_g2;
  boolean_T rtb_TmpSignalConversionAt_g13en;
  boolean_T rtb_u1ATES_d;
  boolean_T rtb_FALSE_dy;
  boolean_T rtb_TmpSignalConversionAt_gghok;
  boolean_T rtb_TmpSignalConversionAt_mda10;
  boolean_T rtb_TmpSignalConversionAt_ccgp5;
  boolean_T rtb_TmpSignalConversionAt_gdjdy;
  boolean_T rtb_u1ASES_j;
  boolean_T rtb_u1BTP_g;
  boolean_T rtb_u1BRLS;
  boolean_T rtb_u1BTWSRL;
  boolean_T rtb_u1BTWS_p;
  boolean_T rtb_W11B21BNWZ;
  boolean_T rtb_TmpSignalConversionA_gghokx;
  boolean_T rtb_FALSE_bo;
  boolean_T rtb_TmpSignalConversionA_mda10h;
  boolean_T rtb_TmpSignalConversionA_ccgp5v;
  boolean_T rtb_TRUE_d;
  boolean_T rtb_u1BSWS_n;
  boolean_T rtb_u1BTP_po;
  boolean_T rtb_u1BRLS_k;
  boolean_T rtb_TRUE_l;
  boolean_T rtb_u1BTES_f;
  boolean_T rtb_W11B21BRWZ;
  boolean_T rtb_FALSE_fj;
  boolean_T rtb_TmpSignalConversion_mda10hh;
  boolean_T rtb_TmpSignalConversion_ccgp5v0;
  boolean_T rtb_TmpSignalConversionA_gdjdyz;
  boolean_T rtb_TmpSignalConversionAtROUT_d;
  boolean_T rtb_TmpSignalConversionAtROUT_h;
  boolean_T rtb_u2ATP_m;
  boolean_T rtb_u2ARLS;
  boolean_T rtb_TRUE_mi;
  boolean_T rtb_u2ATES;
  boolean_T rtb_FALSE_o;
  boolean_T rtb_TmpSignalConversion_gghokxh;
  boolean_T rtb_TmpSignalConversio_mda10hh4;
  boolean_T rtb_TmpSignalConversio_ccgp5v0t;
  boolean_T rtb_TmpSignalConversion_gdjdyzn;
  boolean_T rtb_TmpSignalConversionAtROU_dh;
  boolean_T rtb_TmpSignalConversionAtROU_hx;
  boolean_T rtb_u2BTP;
  boolean_T rtb_u2BRLS;
  boolean_T rtb_TRUE_ke;
  boolean_T rtb_u2CTWS;
  boolean_T rtb_FALSE_c;
  boolean_T rtb_TmpSignalConversio_gghokxhy;
  boolean_T rtb_TmpSignalConversi_mda10hh40;
  boolean_T rtb_TmpSignalConversi_ccgp5v0tc;
  boolean_T rtb_TmpSignalConversio_gdjdyznj;
  boolean_T rtb_TmpSignalConversionAtRO_dhm;
  boolean_T rtb_TmpSignalConversionAtRO_hxy;
  boolean_T rtb_u2BTP_g;
  boolean_T rtb_u2BRLS_b;
  boolean_T rtb_TRUE_jw;
  boolean_T rtb_u2BTES;
  boolean_T rtb_FALSE_p;
  boolean_T rtb_TmpSignalConversi_gghokxhyn;
  boolean_T rtb_TmpSignalConvers_mda10hh403;
  boolean_T rtb_TmpSignalConvers_ccgp5v0tcu;
  boolean_T rtb_TmpSignalConversi_gdjdyznjj;
  boolean_T rtb_TmpSignalConversionAtR_dhmn;
  boolean_T rtb_TmpSignalConversionAtR_hxy2;
  boolean_T rtb_u2CTP;
  boolean_T rtb_u2CRLS;
  boolean_T rtb_TRUE_of;
  boolean_T rtb_u2DTWS;
  boolean_T rtb_FALSE_ku;
  boolean_T rtb_TmpSignalConvers_gghokxhyny;
  boolean_T rtb_TmpSignalConver_mda10hh403q;
  boolean_T rtb_TmpSignalConver_ccgp5v0tcud;
  boolean_T rtb_TmpSignalConvers_gdjdyznjj1;
  boolean_T rtb_TmpSignalConversionAt_dhmnr;
  boolean_T rtb_TmpSignalConversionAt_hxy2n;
  boolean_T rtb_u2CTP_n;
  boolean_T rtb_u2CRLS_k;
  boolean_T rtb_TRUE_oa;
  boolean_T rtb_u2CTES;
  boolean_T rtb_FALSE_dh;
  boolean_T rtb_TmpSignalConver_gghokxhynyy;
  boolean_T rtb_TmpSignalConve_mda10hh403qq;
  boolean_T rtb_TmpSignalConve_ccgp5v0tcudo;
  boolean_T rtb_TmpSignalConver_gdjdyznjj1c;
  boolean_T rtb_TmpSignalConversionA_dhmnr0;
  boolean_T rtb_TmpSignalConversionA_hxy2nw;
  boolean_T rtb_u2DTP;
  boolean_T rtb_u2DRLS;
  boolean_T rtb_TRUE_lq;
  boolean_T rtb_u2ETWS;
  boolean_T rtb_FALSE_nd;
  boolean_T rtb_TmpSignalConve_gghokxhynyyh;
  boolean_T rtb_TmpSignalConv_mda10hh403qq5;
  boolean_T rtb_TmpSignalConv_ccgp5v0tcudoc;
  boolean_T rtb_TmpSignalConve_gdjdyznjj1cn;
  boolean_T rtb_TmpSignalConversion_dhmnr04;
  boolean_T rtb_TmpSignalConversion_hxy2nw3;
  boolean_T rtb_u2DTP_a;
  boolean_T rtb_u2DRLS_d;
  boolean_T rtb_TRUE_n1;
  boolean_T rtb_u3ATWS_b;
  boolean_T rtb_FALSE_hs;
  boolean_T rtb_TmpSignalConv_gghokxhynyyhh;
  boolean_T rtb_TmpSignalCon_mda10hh403qq5l;
  boolean_T rtb_TmpSignalCon_ccgp5v0tcudocs;
  boolean_T rtb_TmpSignalConv_gdjdyznjj1cn5;
  boolean_T rtb_TmpSignalConversio_dhmnr04w;
  boolean_T rtb_TmpSignalConversio_hxy2nw3n;
  boolean_T rtb_u2ETP_c;
  boolean_T rtb_u2ERLS;
  boolean_T rtb_u3ATESRL;
  boolean_T rtb_TRUE_lh;
  boolean_T rtb_FALSE_na;
  boolean_T rtb_TmpSignalCon_gghokxhynyyhh5;
  boolean_T rtb_TmpSignalCo_mda10hh403qq5lk;
  boolean_T rtb_TmpSignalCo_ccgp5v0tcudocsr;
  boolean_T rtb_TmpSignalCon_gdjdyznjj1cn5h;
  boolean_T rtb_TmpSignalConversi_dhmnr04wa;
  boolean_T rtb_TmpSignalConversi_hxy2nw3nn;
  boolean_T rtb_u3ATP_i;
  boolean_T rtb_u3ARLS;
  boolean_T rtb_TRUE_gk;
  boolean_T rtb_AND1_bs;
  boolean_T rtb_FALSE_h5;
  boolean_T rtb_TmpSignalCo_gghokxhynyyhh5w;
  boolean_T rtb_TmpSignalCo_g;
  boolean_T rtb_TmpSignalCo_gb;
  boolean_T rtb_TmpSignalCo_gdjdyznjj1cn5h1;
  boolean_T rtb_TmpSignalConvers_dhmnr04wa2;
  boolean_T rtb_TmpSignalConvers_hxy2nw3nnu;
  boolean_T rtb_u3ATP_e;
  boolean_T rtb_u3ARLS_l;
  boolean_T rtb_TRUE_au;
  boolean_T rtb_AND1_di;
  boolean_T rtb_FALSE_de;
  boolean_T rtb_TmpSignalCo_n;
  boolean_T rtb_TmpSignalCo_a;
  boolean_T rtb_TmpSignalCo_g4;
  boolean_T rtb_TmpSignalCo_o;
  boolean_T rtb_TmpSignalConver_dhmnr04wa2u;
  boolean_T rtb_TmpSignalConver_hxy2nw3nnu5;
  boolean_T rtb_u3BTP_o;
  boolean_T rtb_u3BRLS;
  boolean_T rtb_TRUE_ol;
  boolean_T rtb_u4ATWS;
  boolean_T rtb_FALSE_i;
  boolean_T rtb_TmpSignalCo_c;
  boolean_T rtb_TmpSignalCo_nj;
  boolean_T rtb_TmpSignalCo_h;
  boolean_T rtb_TmpSignalCo_hn;
  boolean_T rtb_TmpSignalConve_dhmnr04wa2uv;
  boolean_T rtb_TmpSignalConve_hxy2nw3nnu51;
  boolean_T rtb_u3BTP_f;
  boolean_T rtb_u3BRLS_j;
  boolean_T rtb_TRUE_nk;
  boolean_T rtb_u3BTES_h;
  boolean_T rtb_FALSE_gl;
  boolean_T rtb_TmpSignalCo_n3;
  boolean_T rtb_TmpSignalCo_b;
  boolean_T rtb_TmpSignalCo_gg;
  boolean_T rtb_TmpSignalCo_nf;
  boolean_T rtb_TmpSignalConv_dhmnr04wa2uvp;
  boolean_T rtb_TmpSignalConv_hxy2nw3nnu510;
  boolean_T rtb_u4ATP_g;
  boolean_T rtb_u4ARLS;
  boolean_T rtb_u4TWSRL;
  boolean_T rtb_TRUE_mb;
  boolean_T rtb_FALSE_jm;
  boolean_T rtb_TmpSignalCo_hg;
  boolean_T rtb_TmpSignalCo_hw;
  boolean_T rtb_TmpSignalCo_i;
  boolean_T rtb_TmpSignalCo_ch;
  boolean_T rtb_TmpSignalCon_dhmnr04wa2uvpn;
  boolean_T rtb_TmpSignalCon_hxy2nw3nnu510j;
  boolean_T rtb_u4ATP_m;
  boolean_T rtb_u4ARLS_c;
  boolean_T rtb_u0BTESRL_m;
  boolean_T rtb_TRUE_a2;
  boolean_T rtb_TmpSignalConversionAtROUT_k;
  boolean_T rtb_FALSE_o4;
  boolean_T rtb_TmpSignalCo_k;
  boolean_T rtb_TmpSignalCo_cw;
  boolean_T rtb_TmpSignalCo_j;
  boolean_T rtb_TmpSignalCo_jd;
  boolean_T rtb_u0BSESRL_l;
  boolean_T rtb_u0BTP_e;
  boolean_T rtb_u0BRLS_p;
  boolean_T rtb_TRUE_m3;
  boolean_T rtb_TmpSignalConversionA_g13en3;
  boolean_T rtb_u1ATWS_c;
  boolean_T rtb_FALSE_du;
  boolean_T rtb_TmpSignalCo_a1;
  boolean_T rtb_TmpSignalCo_kg;
  boolean_T rtb_TmpSignalCo_l;
  boolean_T rtb_TmpSignalCo_p;
  boolean_T rtb_u1ASWS_n;
  boolean_T rtb_u0BTP_l;
  boolean_T rtb_u0BRLS_l;
  boolean_T rtb_TRUE_lhp;
  boolean_T rtb_TmpSignalConversion_g13en3h;
  boolean_T rtb_u0BTES_f;
  boolean_T rtb_FALSE_i0;
  boolean_T rtb_TmpSignalCo_e;
  boolean_T rtb_TmpSignalCo_n2;
  boolean_T rtb_TmpSignalCo_ap;
  boolean_T rtb_TmpSignalCo_is;
  boolean_T rtb_u0BSES_k;
  boolean_T rtb_u1ATP_f;
  boolean_T rtb_u1ARLS_k;
  boolean_T rtb_TRUE_k1;
  boolean_T rtb_TmpSignalConversio_g13en3hq;
  boolean_T rtb_AND1_nb;
  boolean_T rtb_FALSE_pm;
  boolean_T rtb_TmpSignalCo_pa;
  boolean_T rtb_TmpSignalCo_oq;
  boolean_T rtb_TmpSignalCo_hj;
  boolean_T rtb_TmpSignalCo_i0;
  boolean_T rtb_OR6;
  boolean_T rtb_u1ATP_i;
  boolean_T rtb_u1ARLS_g;
  boolean_T rtb_TRUE_f;
  boolean_T rtb_TmpSignalConversi_g13en3hqf;
  boolean_T rtb_AND1_bl;
  boolean_T rtb_FALSE_bf;
  boolean_T rtb_TmpSignalCo_im;
  boolean_T rtb_TmpSignalCo_h0;
  boolean_T rtb_TmpSignalCo_d;
  boolean_T rtb_TmpSignalCo_ho;
  boolean_T rtb_AND2_ib;
  boolean_T rtb_u1BTP_e;
  boolean_T rtb_u1BRLS_o;
  boolean_T rtb_TRUE_b;
  boolean_T rtb_TmpSignalConvers_g13en3hqfo;
  boolean_T rtb_u1CTWS_g;
  boolean_T rtb_FALSE_a5;
  boolean_T rtb_TmpSignalCo_e4;
  boolean_T rtb_TmpSignalCo_bu;
  boolean_T rtb_TmpSignalCo_lu;
  boolean_T rtb_TmpSignalCo_nr;
  boolean_T rtb_u1CSWS_l;
  boolean_T rtb_u1BTP_h;
  boolean_T rtb_u1BRLS_b;
  boolean_T rtb_TRUE_by;
  boolean_T rtb_TmpSignalConver_g13en3hqfoe;
  boolean_T rtb_u1BTES_g;
  boolean_T rtb_FALSE_g2;
  boolean_T rtb_TmpSignalCo_pc;
  boolean_T rtb_TmpSignalCo_gq;
  boolean_T rtb_TmpSignalCo_p0;
  boolean_T rtb_TmpSignalCo_iv;
  boolean_T rtb_u1BSES_e;
  boolean_T rtb_u1CTP_bc;
  boolean_T rtb_u1CRLS;
  boolean_T rtb_u1CTWSRL;
  boolean_T rtb_TRUE_eb;
  boolean_T rtb_TmpSignalConversionAtROU_kv;
  boolean_T rtb_FALSE_b0;
  boolean_T rtb_TmpSignalCo_bs;
  boolean_T rtb_TmpSignalCo_f;
  boolean_T rtb_TmpSignalCo_os;
  boolean_T rtb_TmpSignalCo_au;
  boolean_T rtb_u1CSWSRL;
  boolean_T rtb_u1CTP_g;
  boolean_T rtb_u1CRLS_l;
  boolean_T rtb_TRUE_o4;
  boolean_T rtb_u1CTES_kx;
  boolean_T rtb_W21CRWZ;
  boolean_T rtb_FALSE_fr;
  boolean_T rtb_TmpSignalCo_k3;
  boolean_T rtb_TmpSignalCo_ax;
  boolean_T rtb_TmpSignalCo_ew;
  boolean_T rtb_TmpSignalCo_dhmnr04wa2uvpn1;
  boolean_T rtb_TmpSignalCo_hxy2nw3nnu510jd;
  boolean_T rtb_u2ATP_j;
  boolean_T rtb_u2ARLS_d;
  boolean_T rtb_TRUE_lu;
  boolean_T rtb_u2ATES_a;
  boolean_T rtb_FALSE_pi;
  boolean_T rtb_TmpSignalCo_dj;
  boolean_T rtb_TmpSignalCo_ho5;
  boolean_T rtb_TmpSignalCo_dr;
  boolean_T rtb_TmpSignalCo_dw;
  boolean_T rtb_TmpSignalCo_gf;
  boolean_T rtb_TmpSignalCo_gm;
  boolean_T rtb_u2BTP_i;
  boolean_T rtb_u2BRLS_p;
  boolean_T rtb_TRUE_li;
  boolean_T rtb_u2CTWS_i;
  boolean_T rtb_FALSE_l;
  boolean_T rtb_TmpSignalCo_kc;
  boolean_T rtb_TmpSignalCo_m;
  boolean_T rtb_TmpSignalCo_he;
  boolean_T rtb_TmpSignalCo_lq;
  boolean_T rtb_TmpSignalCo_jp;
  boolean_T rtb_TmpSignalCo_d1;
  boolean_T rtb_u2BTP_k;
  boolean_T rtb_u2BRLS_pa;
  boolean_T rtb_TRUE_eh;
  boolean_T rtb_u2BTES_e;
  boolean_T rtb_FALSE_il;
  boolean_T rtb_TmpSignalCo_fy;
  boolean_T rtb_TmpSignalCo_fx;
  boolean_T rtb_TmpSignalCo_mq;
  boolean_T rtb_TmpSignalCo_g1;
  boolean_T rtb_TmpSignalCo_l4;
  boolean_T rtb_TmpSignalCo_fm;
  boolean_T rtb_u2CTP_k;
  boolean_T rtb_u2CRLS_e;
  boolean_T rtb_TRUE_jd;
  boolean_T rtb_u2DTWS_b;
  boolean_T rtb_FALSE_mn;
  boolean_T rtb_TmpSignalCo_ej;
  boolean_T rtb_TmpSignalCo_do;
  boolean_T rtb_TmpSignalCo_pm;
  boolean_T rtb_TmpSignalCo_ll;
  boolean_T rtb_TmpSignalCo_k5;
  boolean_T rtb_TmpSignalCo_mh;
  boolean_T rtb_u2CTP_p;
  boolean_T rtb_u2CRLS_n;
  boolean_T rtb_TRUE_i;
  boolean_T rtb_u2CTES_a;
  boolean_T rtb_FALSE_nr;
  boolean_T rtb_TmpSignalCo_fg;
  boolean_T rtb_TmpSignalCo_bw;
  boolean_T rtb_TmpSignalCo_jf;
  boolean_T rtb_TmpSignalCo_kgw;
  boolean_T rtb_TmpSignalCo_j5;
  boolean_T rtb_TmpSignalCo_kb;
  boolean_T rtb_u2DTP_o;
  boolean_T rtb_u2DRLS_h;
  boolean_T rtb_TRUE_dv;
  boolean_T rtb_u2ETWS_d;
  boolean_T rtb_FALSE_i02;
  boolean_T rtb_TmpSignalCo_op;
  boolean_T rtb_TmpSignalCo_ms;
  boolean_T rtb_TmpSignalCo_ei;
  boolean_T rtb_TmpSignalCo_ec;
  boolean_T rtb_TmpSignalCo_fs;
  boolean_T rtb_TmpSignalCo_dz;
  boolean_T rtb_u2DTP_j;
  boolean_T rtb_u2DRLS_dv;
  boolean_T rtb_TRUE_gy;
  boolean_T rtb_u3ATWS_n;
  boolean_T rtb_W13A23ARWZ_c;
  boolean_T rtb_FALSE_bi;
  boolean_T rtb_TmpSignalCo_ls;
  boolean_T rtb_TmpSignalCo_oe;
  boolean_T rtb_TmpSignalCo_kp;
  boolean_T rtb_TmpSignalCo_p4;
  boolean_T rtb_TmpSignalCo_mi;
  boolean_T rtb_u2ETP_g;
  boolean_T rtb_u2ERLS_i;
  boolean_T rtb_u3ATESRL_p;
  boolean_T rtb_u3ATES_c;
  boolean_T rtb_W13A23ANWZ_p;
  boolean_T rtb_FALSE_g0;
  boolean_T rtb_TmpSignalCo_d3;
  boolean_T rtb_TmpSignalCo_gk;
  boolean_T rtb_TmpSignalCo_me;
  boolean_T rtb_TmpSignalCo_jm;
  boolean_T rtb_TmpSignalCo_ln;
  boolean_T rtb_u3ATP_e4;
  boolean_T rtb_u3ARLS_a;
  boolean_T rtb_TRUE_lh3;
  boolean_T rtb_u3BTWS_g;
  boolean_T rtb_FALSE_av;
  boolean_T rtb_TmpSignalCo_bv;
  boolean_T rtb_TmpSignalCo_d4;
  boolean_T rtb_TmpSignalCo_aa;
  boolean_T rtb_TmpSignalCo_k3l;
  boolean_T rtb_TmpSignalCo_ft;
  boolean_T rtb_TmpSignalCo_j4;
  boolean_T rtb_u3ATP_d;
  boolean_T rtb_u3ARLS_h;
  boolean_T rtb_TRUE_af;
  boolean_T rtb_u3ATES_ph;
  boolean_T rtb_FALSE_bq;
  boolean_T rtb_TmpSignalCo_kgc;
  boolean_T rtb_TmpSignalCo_ko;
  boolean_T rtb_TmpSignalCo_fk;
  boolean_T rtb_TmpSignalCo_h3;
  boolean_T rtb_TmpSignalCo_a5;
  boolean_T rtb_TmpSignalCo_k0;
  boolean_T rtb_u3BTP_c;
  boolean_T rtb_u3BRLS_m;
  boolean_T rtb_TRUE_p3;
  boolean_T rtb_OR2_kc;
  boolean_T rtb_FALSE_jh;
  boolean_T rtb_TmpSignalCo_ch2;
  boolean_T rtb_TmpSignalCo_cv;
  boolean_T rtb_TmpSignalCo_my;
  boolean_T rtb_TmpSignalCo_gr;
  boolean_T rtb_TmpSignalCo_n1;
  boolean_T rtb_TmpSignalCo_pk;
  boolean_T rtb_u3BTP_e5;
  boolean_T rtb_u3BRLS_o;
  boolean_T rtb_TRUE_gi;
  boolean_T rtb_u3BTES_d;
  boolean_T rtb_W13B23BRWZ_c;
  boolean_T rtb_FALSE_oz;
  boolean_T rtb_TmpSignalCo_lb;
  boolean_T rtb_TmpSignalCo_lx;
  boolean_T rtb_TmpSignalCo_nb;
  boolean_T rtb_TmpSignalCo_nc;
  boolean_T rtb_TmpSignalCo_an;
  boolean_T rtb_u4ATP_l;
  boolean_T rtb_u4ARLS_f;
  boolean_T rtb_u4TWSRL_p;
  boolean_T rtb_TRUE_kd;
  boolean_T rtb_FALSE_o4k;
  boolean_T rtb_TmpSignalCo_pax;
  boolean_T rtb_TmpSignalCo_pl;
  boolean_T rtb_TmpSignalCo_ip;
  boolean_T rtb_TmpSignalCo_cw3;
  boolean_T rtb_TmpSignalCo_m0;
  boolean_T rtb_TmpSignalCo_n5;
  boolean_T rtb_u4ATP_h;
  boolean_T rtb_u4ARLS_g;
  boolean_T rtb_FALSE_ib;
  boolean_T rtb_TmpSignalConversionAtSIGNAL;
  boolean_T rtb_TmpSignalConversionAtSIGN_m;
  boolean_T rtb_OR1_mc;
  boolean_T rtb_DEPTP_a;
  boolean_T rtb_OR1_af;
  boolean_T rtb_FALSE_am;
  boolean_T rtb_TmpSignalConversionAtSIG_m3;
  boolean_T rtb_TmpSignalConversionAtSIGN_b;
  boolean_T rtb_u2ATP_h;
  boolean_T rtb_OR1_b;
  boolean_T rtb_FALSE_ll;
  boolean_T rtb_TmpSignalConversionAtSI_m3g;
  boolean_T rtb_TmpSignalConversionAtSIG_bu;
  boolean_T rtb_u2ETP_o;
  boolean_T rtb_OR1_l5;
  boolean_T rtb_FALSE_o4q;
  boolean_T rtb_TmpSignalConversionAtS_m3gy;
  boolean_T rtb_TmpSignalConversionAtSI_buo;
  boolean_T rtb_u4BTP_f;
  boolean_T rtb_OR1_b5;
  boolean_T rtb_FALSE_a3;
  boolean_T rtb_TmpSignalConversionAt_m3gyu;
  boolean_T rtb_TmpSignalConversionAtS_buoj;
  boolean_T rtb_u2ATP_a;
  boolean_T rtb_OR1_ef;
  boolean_T rtb_FALSE_bh;
  boolean_T rtb_TmpSignalConversionA_m3gyu4;
  boolean_T rtb_TmpSignalConversionAt_buoj3;
  boolean_T rtb_u2ETP_m;
  boolean_T rtb_OR1_o4;
  boolean_T rtb_FALSE_f3;
  boolean_T rtb_TmpSignalConversion_m3gyu4z;
  boolean_T rtb_TmpSignalConversionA_buoj3j;
  boolean_T rtb_u4TP;
  boolean_T rtb_OR1_f;
  boolean_T rtb_FALSE_pma;
  boolean_T rtb_TmpSignalConversio_m3gyu4zg;
  boolean_T rtb_JL10DEPS_f;
  boolean_T rtb_u0ATP_a;
  boolean_T rtb_OR1_c;
  boolean_T rtb_FALSE_b0w;
  boolean_T rtb_TmpSignalConversi_m3gyu4zgx;
  boolean_T rtb_JL20DEPS_j;
  boolean_T rtb_u0ATP_ad;
  boolean_T rtb_DEPGRDO_o;
  boolean_T rtb_RR_j;
  boolean_T rtb_RRLS_cm;
  boolean_T rtb_RRLSXDEP;
  boolean_T rtb_SWRLS_i;
  boolean_T rtb_VDR_o;
  boolean_T rtb_u0ATP_b;
  boolean_T rtb_u0BTP_ep;
  boolean_T rtb_u1ATP_k;
  boolean_T rtb_u1BTP_ac;
  boolean_T rtb_u2ATP_b;
  boolean_T rtb_u2BTP_c;
  boolean_T rtb_u2CTP_f;
  boolean_T rtb_u2DTP_p;
  boolean_T rtb_u2ETP_a;
  boolean_T rtb_u3ATP_g;
  boolean_T rtb_u3BTP_i;
  boolean_T rtb_u4ATP_n1;
  boolean_T rtb_u4BTP_n;
  boolean_T rtb_u0ATP_g;
  boolean_T rtb_u0BTP_c;
  boolean_T rtb_u1ATP_o;
  boolean_T rtb_u1BTP_a;
  boolean_T rtb_u1CTP_dm;
  boolean_T rtb_u2ATP_mb;
  boolean_T rtb_u2BTP_a;
  boolean_T rtb_u2CTP_a;
  boolean_T rtb_u2DTP_e;
  boolean_T rtb_u2ETP_b;
  boolean_T rtb_u3ATP_o;
  boolean_T rtb_u3BTP_k4;
  boolean_T rtb_u4ATP_p;
  boolean_T rtb_u4BTP_d;
  boolean_T rtb_u0BTES_l;
  boolean_T rtb_u1ATES_ok;
  boolean_T rtb_u1BTES_m;
  boolean_T rtb_u2ATES_g;
  boolean_T rtb_u2BTES_a;
  boolean_T rtb_u2CTES_p;
  boolean_T rtb_u2DTES_i;
  boolean_T rtb_u3ATES_i;
  boolean_T rtb_u3BTES_gn;
  boolean_T rtb_u4ATES_m;
  boolean_T rtb_u0BTES_j;
  boolean_T rtb_u1ATES_g;
  boolean_T rtb_u1BTES_gi;
  boolean_T rtb_u1CTES_b;
  boolean_T rtb_u2ATES_o;
  boolean_T rtb_u2BTES_f;
  boolean_T rtb_u2CTES_o;
  boolean_T rtb_u2DTES_b5;
  boolean_T rtb_u3ATES_d;
  boolean_T rtb_u3BTES_et;
  boolean_T rtb_u4ATES_ia;
  boolean_T rtb_u0BTWS_m;
  boolean_T rtb_u1ATWS_he;
  boolean_T rtb_u1BTWS_l;
  boolean_T rtb_u2BTWS_f;
  boolean_T rtb_u2CTWS_d;
  boolean_T rtb_u2DTWS_i;
  boolean_T rtb_u2ETWS_b;
  boolean_T rtb_u3ATWS_e;
  boolean_T rtb_u3BTWS_n;
  boolean_T rtb_u4ATWS_d;
  boolean_T rtb_u0BTWS_e;
  boolean_T rtb_u1ATWS_j;
  boolean_T rtb_u1BTWS_m;
  boolean_T rtb_u1CTWS_c;
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
  boolean_T rtb_u0BSWS_en;
  boolean_T rtb_u1ASWS_c;
  boolean_T rtb_u1BSWS_im;
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
  boolean_T rtb_J12ADRDO_b;
  boolean_T rtb_J12BDRDO_h;
  boolean_T rtb_J14DRDO_h;
  boolean_T rtb_J22ADRDO_o;
  boolean_T rtb_J22BDRDO_a;
  boolean_T rtb_J24DRDO_l;
  boolean_T rtb_JL10DRDO_k;
  boolean_T rtb_JL20DRDO_g;
  boolean_T rtb_JL10GRDO_o4;
  boolean_T rtb_JL20GRDO_e;
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
  int32_T rtb_uS;
  boolean_T rtb_TmpSignalConversionAtM_TP1O;
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S902>/DEP-RRLSPB-CTRL' */
    VITALMAIN_DW.M_RRLSPB_CTRL_DEP = rtu_FROMDEP[3];

    /* DataStoreWrite: '<S902>/DEP-TP' */
    VITALMAIN_DW.M_TP_DEP = rtu_FROMDEP[2];

    /* DataStoreWrite: '<S902>/RRLS-DEP' */
    VITALMAIN_DW.M_RRLS_DEP = rtu_FROMDEP[0];

    /* DataStoreWrite: '<S902>/SWRLS-DEP' */
    VITALMAIN_DW.M_SWRLS_DEP = rtu_FROMDEP[1];

    /* DataStoreWrite: '<S905>/NV-V-CHK' */
    VITALMAIN_DW.M_CHK_NV_V = *rtu_NVVCHKFROM;

    /* DataStoreWrite: '<S905>/RR' */
    VITALMAIN_DW.M_RR = *rtu_RRFROM;

    /* DataStoreWrite: '<S905>/J12A-X14-T-REQ' */
    VITALMAIN_DW.M_REQ_T_12_14 = rtu_TREQFROM[4];

    /* DataStoreWrite: '<S905>/J12A-X24-T-REQ' */
    VITALMAIN_DW.M_REQ_T_12_24 = rtu_TREQFROM[5];

    /* DataStoreWrite: '<S905>/J12B-X10-T-REQ' */
    VITALMAIN_DW.M_REQ_T_12_10 = rtu_TREQFROM[12];

    /* DataStoreWrite: '<S905>/J12B-X20-T-REQ' */
    VITALMAIN_DW.M_REQ_T_12_20 = rtu_TREQFROM[13];

    /* DataStoreWrite: '<S905>/J14-J12B-T-REQ' */
    VITALMAIN_DW.M_REQ_T_14_12 = rtu_TREQFROM[8];

    /* DataStoreWrite: '<S905>/J14-J22B-T-REQ' */
    VITALMAIN_DW.M_REQ_T_14_22 = rtu_TREQFROM[9];

    /* DataStoreWrite: '<S905>/J22A-X14-T-REQ' */
    VITALMAIN_DW.M_REQ_T_22_14 = rtu_TREQFROM[6];

    /* DataStoreWrite: '<S905>/J22A-X24-T-REQ' */
    VITALMAIN_DW.M_REQ_T_22_24 = rtu_TREQFROM[7];

    /* DataStoreWrite: '<S905>/J22B-X10-T-REQ' */
    VITALMAIN_DW.M_REQ_T_22_10 = rtu_TREQFROM[14];

    /* DataStoreWrite: '<S905>/J22B-X20-T-REQ' */
    VITALMAIN_DW.M_REQ_T_22_20 = rtu_TREQFROM[15];

    /* DataStoreWrite: '<S905>/J24-J12B-T-REQ' */
    VITALMAIN_DW.M_REQ_T_24_12 = rtu_TREQFROM[10];

    /* DataStoreWrite: '<S905>/J24-J22B-T-REQ' */
    VITALMAIN_DW.M_REQ_T_24_22 = rtu_TREQFROM[11];

    /* DataStoreWrite: '<S905>/JL10-J12A-T-REQ' */
    VITALMAIN_DW.M_REQ_T_10_12 = rtu_TREQFROM[0];

    /* DataStoreWrite: '<S905>/JL10-J22A-T-REQ' */
    VITALMAIN_DW.M_REQ_T_10_22 = rtu_TREQFROM[1];

    /* DataStoreWrite: '<S905>/JL20-J12A-T-REQ' */
    VITALMAIN_DW.M_REQ_T_20_12 = rtu_TREQFROM[2];

    /* DataStoreWrite: '<S905>/JL20-J22A-T-REQ' */
    VITALMAIN_DW.M_REQ_T_20_22 = rtu_TREQFROM[3];

    /* DataStoreWrite: '<S905>/W11A//21A-N-REQ' */
    VITALMAIN_DW.M_W11A_21A_N_REQ = rtu_NREQFROM[0];

    /* DataStoreWrite: '<S905>/W11B//21B-N-REQ' */
    VITALMAIN_DW.M_W11B_21B_N_REQ = rtu_NREQFROM[1];

    /* DataStoreWrite: '<S905>/W13A//23A-N-REQ' */
    VITALMAIN_DW.M_W13A_23A_N_REQ = rtu_NREQFROM[3];

    /* DataStoreWrite: '<S905>/W13B//23B-N-REQ' */
    VITALMAIN_DW.M_W13B_23B_N_REQ = rtu_NREQFROM[4];

    /* DataStoreWrite: '<S905>/W21C-N-REQ' */
    VITALMAIN_DW.M_W21C_N_REQ = rtu_NREQFROM[2];

    /* DataStoreWrite: '<S905>/W11A//21A-R-REQ' */
    VITALMAIN_DW.M_W11A_21A_R_REQ = rtu_RREQFROM[0];

    /* DataStoreWrite: '<S905>/W11B//21B-R-REQ' */
    VITALMAIN_DW.M_W11B_21B_R_REQ = rtu_RREQFROM[1];

    /* DataStoreWrite: '<S905>/W13A//23A-R-REQ' */
    VITALMAIN_DW.M_W13A_23A_R_REQ = rtu_RREQFROM[3];

    /* DataStoreWrite: '<S905>/W13B//23B-R-REQ' */
    VITALMAIN_DW.M_W13B_23B_R_REQ = rtu_RREQFROM[4];

    /* DataStoreWrite: '<S905>/W21C-R-REQ' */
    VITALMAIN_DW.M_W21C_R_REQ = rtu_RREQFROM[2];

    /* DataStoreWrite: '<S905>/W11A//21A-OOC' */
    VITALMAIN_DW.M_W11A_21A_OOC = rtu_OOCFROM[0];

    /* DataStoreWrite: '<S905>/W11B//21B-OOC' */
    VITALMAIN_DW.M_W11B_21B_OOC = rtu_OOCFROM[1];

    /* DataStoreWrite: '<S905>/W13A//23A-OOC' */
    VITALMAIN_DW.M_W13A_23A_OOC = rtu_OOCFROM[3];

    /* DataStoreWrite: '<S905>/W13B//23B-OOC' */
    VITALMAIN_DW.M_W13B_23B_OOC = rtu_OOCFROM[4];

    /* DataStoreWrite: '<S905>/W21C-OOC' */
    VITALMAIN_DW.M_W21C_OOC = rtu_OOCFROM[2];

    /* DataStoreWrite: '<S905>/J12A-RRLSPB-CTRL' */
    VITALMAIN_DW.M_RRLSPB_CTRL_J12A = rtu_RRLSPBFROM[2];

    /* DataStoreWrite: '<S905>/J12B-RRLSPB-CTRL' */
    VITALMAIN_DW.M_RRLSPB_CTRL_J12B = rtu_RRLSPBFROM[4];

    /* DataStoreWrite: '<S905>/J22A-RRLSPB-CTRL' */
    VITALMAIN_DW.M_RRLSPB_CTRL_J22A = rtu_RRLSPBFROM[3];

    /* DataStoreWrite: '<S905>/J22B-RRLSPB-CTRL' */
    VITALMAIN_DW.M_RRLSPB_CTRL_J22B = rtu_RRLSPBFROM[5];

    /* DataStoreWrite: '<S905>/X10-RRLSPB-CTRL' */
    VITALMAIN_DW.M_RRLSPB_CTRL_X10 = rtu_RRLSPBFROM[0];

    /* DataStoreWrite: '<S905>/X14-RRLSPB-CTRL' */
    VITALMAIN_DW.M_RRLSPB_CTRL_X14 = rtu_RRLSPBFROM[6];

    /* DataStoreWrite: '<S905>/X20-RRLSPB-CTRL' */
    VITALMAIN_DW.M_RRLSPB_CTRL_X20 = rtu_RRLSPBFROM[1];

    /* DataStoreWrite: '<S905>/X24-RRLSPB-CTRL' */
    VITALMAIN_DW.M_RRLSPB_CTRL_X24 = rtu_RRLSPBFROM[7];

    /* DataStoreWrite: '<S905>/W11A//21A-SWRLSPB-CTRL' */
    VITALMAIN_DW.M_W11A_21A_SWRLSPB_CTRL = rtu_SWRLSPBFROM[0];

    /* DataStoreWrite: '<S905>/W11B//21B-SWRLSPB-CTRL' */
    VITALMAIN_DW.M_W11B_21B_SWRLSPB_CTRL = rtu_SWRLSPBFROM[1];

    /* DataStoreWrite: '<S905>/W13A//23A-SWRLSPB-CTRL' */
    VITALMAIN_DW.M_W13A_23A_SWRLSPB_CTRL = rtu_SWRLSPBFROM[3];

    /* DataStoreWrite: '<S905>/W13B//23B-SWRLSPB-CTRL' */
    VITALMAIN_DW.M_W13B_23B_SWRLSPB_CTRL = rtu_SWRLSPBFROM[4];

    /* DataStoreWrite: '<S905>/W21C-SWRLSPB-CTRL' */
    VITALMAIN_DW.M_W21C_SWRLSPB_CTRL = rtu_SWRLSPBFROM[2];

    /* DataStoreWrite: '<S905>/DEP-X10-RS' */
    VITALMAIN_DW.M_RS_DEP_10 = rtu_DEPVARFROM[6];

    /* DataStoreWrite: '<S905>/DEP-X10-S-REQ' */
    VITALMAIN_DW.M_REQ_S_DEP_10 = rtu_DEPVARFROM[2];

    /* DataStoreWrite: '<S905>/DEP-X20-RS' */
    VITALMAIN_DW.M_RS_DEP_20 = rtu_DEPVARFROM[7];

    /* DataStoreWrite: '<S905>/DEP-X20-S-REQ' */
    VITALMAIN_DW.M_REQ_S_DEP_20 = rtu_DEPVARFROM[3];

    /* DataStoreWrite: '<S905>/JL10-DEP-RS' */
    VITALMAIN_DW.M_RS_10_DEP = rtu_DEPVARFROM[4];

    /* DataStoreWrite: '<S905>/JL10-DEP-S-REQ' */
    VITALMAIN_DW.M_REQ_S_10_DEP = rtu_DEPVARFROM[0];

    /* DataStoreWrite: '<S905>/JL20-DEP-RS' */
    VITALMAIN_DW.M_RS_20_DEP = rtu_DEPVARFROM[5];

    /* DataStoreWrite: '<S905>/JL20-DEP-S-REQ' */
    VITALMAIN_DW.M_REQ_S_20_DEP = rtu_DEPVARFROM[1];

    /* DataStoreWrite: '<S908>/DEP-RST' */
    VITALMAIN_DW.M_RST_DEP = rtu_RSTFROM[8];

    /* DataStoreWrite: '<S908>/J12A-RST' */
    VITALMAIN_DW.M_RST_J12A = rtu_RSTFROM[2];

    /* DataStoreWrite: '<S908>/J12B-RST' */
    VITALMAIN_DW.M_RST_J12B = rtu_RSTFROM[6];

    /* DataStoreWrite: '<S908>/J14-RST' */
    VITALMAIN_DW.M_RST_J14 = rtu_RSTFROM[4];

    /* DataStoreWrite: '<S908>/J22A-RST' */
    VITALMAIN_DW.M_RST_J22A = rtu_RSTFROM[3];

    /* DataStoreWrite: '<S908>/J22B-RST' */
    VITALMAIN_DW.M_RST_J22B = rtu_RSTFROM[7];

    /* DataStoreWrite: '<S908>/J24-RST' */
    VITALMAIN_DW.M_RST_J24 = rtu_RSTFROM[5];

    /* DataStoreWrite: '<S908>/JL10-RST' */
    VITALMAIN_DW.M_RST_JL10 = rtu_RSTFROM[0];

    /* DataStoreWrite: '<S908>/JL20-RST' */
    VITALMAIN_DW.M_RST_JL20 = rtu_RSTFROM[1];

    /* DataStoreWrite: '<S903>/VDR' */
    VITALMAIN_DW.DI_VDR = *rtu_VDRDI;

    /* DataStoreWrite: '<S903>/10A-TPR-DI' */
    VITALMAIN_DW.DI_TPR_10A = rtu_TPRDI[0];

    /* DataStoreWrite: '<S903>/10B-TPR-DI' */
    VITALMAIN_DW.DI_TPR_10B = rtu_TPRDI[1];

    /* DataStoreWrite: '<S903>/11A-TPR-DI' */
    VITALMAIN_DW.DI_TPR_11A = rtu_TPRDI[2];

    /* DataStoreWrite: '<S903>/11B-TPR-DI' */
    VITALMAIN_DW.DI_TPR_11B = rtu_TPRDI[3];

    /* DataStoreWrite: '<S903>/12A-TPR-DI' */
    VITALMAIN_DW.DI_TPR_12A = rtu_TPRDI[4];

    /* DataStoreWrite: '<S903>/12B-TPR-DI' */
    VITALMAIN_DW.DI_TPR_12B = rtu_TPRDI[5];

    /* DataStoreWrite: '<S903>/12C-TPR-DI' */
    VITALMAIN_DW.DI_TPR_12C = rtu_TPRDI[6];

    /* DataStoreWrite: '<S903>/12D-TPR-DI' */
    VITALMAIN_DW.DI_TPR_12D = rtu_TPRDI[7];

    /* DataStoreWrite: '<S903>/12E-TPR-DI' */
    VITALMAIN_DW.DI_TPR_12E = rtu_TPRDI[8];

    /* DataStoreWrite: '<S903>/13A-TPR-DI' */
    VITALMAIN_DW.DI_TPR_13A = rtu_TPRDI[9];

    /* DataStoreWrite: '<S903>/13B-TPR-DI' */
    VITALMAIN_DW.DI_TPR_13B = rtu_TPRDI[10];

    /* DataStoreWrite: '<S903>/14A-TPR-DI' */
    VITALMAIN_DW.DI_TPR_14A = rtu_TPRDI[11];

    /* DataStoreWrite: '<S903>/14B-TPR-DI' */
    VITALMAIN_DW.DI_TPR_14B = rtu_TPRDI[12];

    /* DataStoreWrite: '<S903>/20A-TPR-DI' */
    VITALMAIN_DW.DI_TPR_20A = rtu_TPRDI[13];

    /* DataStoreWrite: '<S903>/20B-TPR-DI' */
    VITALMAIN_DW.DI_TPR_20B = rtu_TPRDI[14];

    /* DataStoreWrite: '<S903>/21A-TPR-DI' */
    VITALMAIN_DW.DI_TPR_21A = rtu_TPRDI[15];

    /* DataStoreWrite: '<S903>/21B-TPR-DI' */
    VITALMAIN_DW.DI_TPR_21B = rtu_TPRDI[16];

    /* DataStoreWrite: '<S903>/21C-TPR-DI' */
    VITALMAIN_DW.DI_TPR_21C = rtu_TPRDI[17];

    /* DataStoreWrite: '<S903>/22A-TPR-DI' */
    VITALMAIN_DW.DI_TPR_22A = rtu_TPRDI[18];

    /* DataStoreWrite: '<S903>/22B-TPR-DI' */
    VITALMAIN_DW.DI_TPR_22B = rtu_TPRDI[19];

    /* DataStoreWrite: '<S903>/22C-TPR-DI' */
    VITALMAIN_DW.DI_TPR_22C = rtu_TPRDI[20];

    /* DataStoreWrite: '<S903>/22D-TPR-DI' */
    VITALMAIN_DW.DI_TPR_22D = rtu_TPRDI[21];

    /* DataStoreWrite: '<S903>/22E-TPR-DI' */
    VITALMAIN_DW.DI_TPR_22E = rtu_TPRDI[22];

    /* DataStoreWrite: '<S903>/23A-TPR-DI' */
    VITALMAIN_DW.DI_TPR_23A = rtu_TPRDI[23];

    /* DataStoreWrite: '<S903>/23B-TPR-DI' */
    VITALMAIN_DW.DI_TPR_23B = rtu_TPRDI[24];

    /* DataStoreWrite: '<S903>/24A-TPR-DI' */
    VITALMAIN_DW.DI_TPR_24A = rtu_TPRDI[25];

    /* DataStoreWrite: '<S903>/24B-TPR-DI' */
    VITALMAIN_DW.DI_TPR_24B = rtu_TPRDI[26];

    /* DataStoreWrite: '<S903>/W11A//21A-NWP-DI' */
    VITALMAIN_DW.DI_NWP_W11A_21A = rtu_NWPDI[0];

    /* DataStoreWrite: '<S903>/W11B//21B-NWP-DI' */
    VITALMAIN_DW.DI_NWP_W11B_21B = rtu_NWPDI[1];

    /* DataStoreWrite: '<S903>/W13A//23A-NWP-DI' */
    VITALMAIN_DW.DI_NWP_W13A_23A = rtu_NWPDI[3];

    /* DataStoreWrite: '<S903>/W13B//23B-NWP-DI' */
    VITALMAIN_DW.DI_NWP_W13B_23B = rtu_NWPDI[4];

    /* DataStoreWrite: '<S903>/W21C-NWP-DI' */
    VITALMAIN_DW.DI_NWP_W21C = rtu_NWPDI[2];

    /* DataStoreWrite: '<S903>/W11A//21A-RWP-DI' */
    VITALMAIN_DW.DI_RWP_W11A_21A = rtu_RWPDI[0];

    /* DataStoreWrite: '<S903>/W11B//21B-RWP-DI' */
    VITALMAIN_DW.DI_RWP_W11B_21B = rtu_RWPDI[1];

    /* DataStoreWrite: '<S903>/W13A//23A-RWP-DI' */
    VITALMAIN_DW.DI_RWP_W13A_23A = rtu_RWPDI[3];

    /* DataStoreWrite: '<S903>/W13B//23B-RWP-DI' */
    VITALMAIN_DW.DI_RWP_W13B_23B = rtu_RWPDI[4];

    /* DataStoreWrite: '<S903>/W21C-RWP-DI' */
    VITALMAIN_DW.DI_RWP_W21C = rtu_RWPDI[2];

    /* DataStoreRead: '<S906>/DEP-GR-DO' */
    rtb_DEPGRDO_o = VITALMAIN_DW.M_DEP_GR_DO;

    /* DataStoreRead: '<S906>/RR' */
    rtb_RR_j = VITALMAIN_DW.M_RR;

    /* DataStoreRead: '<S906>/RRLS' */
    rtb_RRLS_cm = VITALMAIN_DW.M_RRLS_l;

    /* DataStoreRead: '<S906>/RRLS-XDEP' */
    rtb_RRLSXDEP = VITALMAIN_DW.M_RRLS_XDEP;

    /* DataStoreRead: '<S906>/SWRLS' */
    rtb_SWRLS_i = VITALMAIN_DW.M_SWRLS_k;

    /* DataStoreRead: '<S906>/VDR' */
    rtb_VDR_o = VITALMAIN_DW.DI_VDR;

    /* DataStoreRead: '<S907>/VDR-DI' */
    *rty_VDRDITO = VITALMAIN_DW.DI_VDR;

    /* DataStoreRead: '<S907>/V-NV-CHK' */
    *rty_VNVCHKTO = VITALMAIN_DW.M_CHK_V_NV;

    /* DataStoreRead: '<S907>/10A-TP' */
    rtb_u0ATP_b = VITALMAIN_DW.M_TP_10A;

    /* DataStoreRead: '<S907>/10B-TP' */
    rtb_u0BTP_ep = VITALMAIN_DW.M_TP_10B;

    /* DataStoreRead: '<S907>/11A-TP' */
    rtb_u1ATP_k = VITALMAIN_DW.M_TP_11A;

    /* DataStoreRead: '<S907>/11B-TP' */
    rtb_u1BTP_ac = VITALMAIN_DW.M_TP_11B;

    /* DataStoreRead: '<S907>/12A-TP' */
    rtb_u2ATP_b = VITALMAIN_DW.M_TP_12A;

    /* DataStoreRead: '<S907>/12B-TP' */
    rtb_u2BTP_c = VITALMAIN_DW.M_TP_12B;

    /* DataStoreRead: '<S907>/12C-TP' */
    rtb_u2CTP_f = VITALMAIN_DW.M_TP_12C;

    /* DataStoreRead: '<S907>/12D-TP' */
    rtb_u2DTP_p = VITALMAIN_DW.M_TP_12D;

    /* DataStoreRead: '<S907>/12E-TP' */
    rtb_u2ETP_a = VITALMAIN_DW.M_TP_12E;

    /* DataStoreRead: '<S907>/13A-TP' */
    rtb_u3ATP_g = VITALMAIN_DW.M_TP_13A;

    /* DataStoreRead: '<S907>/13B-TP' */
    rtb_u3BTP_i = VITALMAIN_DW.M_TP_13B;

    /* DataStoreRead: '<S907>/14A-TP' */
    rtb_u4ATP_n1 = VITALMAIN_DW.M_TP_14A;

    /* DataStoreRead: '<S907>/14B-TP' */
    rtb_u4BTP_n = VITALMAIN_DW.M_TP_14B;

    /* DataStoreRead: '<S907>/20A-TP' */
    rtb_u0ATP_g = VITALMAIN_DW.M_TP_20A;

    /* DataStoreRead: '<S907>/20B-TP' */
    rtb_u0BTP_c = VITALMAIN_DW.M_TP_20B;

    /* DataStoreRead: '<S907>/21A-TP' */
    rtb_u1ATP_o = VITALMAIN_DW.M_TP_21A;

    /* DataStoreRead: '<S907>/21B-TP' */
    rtb_u1BTP_a = VITALMAIN_DW.M_TP_21B;

    /* DataStoreRead: '<S907>/21C-TP' */
    rtb_u1CTP_dm = VITALMAIN_DW.M_TP_21C;

    /* DataStoreRead: '<S907>/22A-TP' */
    rtb_u2ATP_mb = VITALMAIN_DW.M_TP_22A;

    /* DataStoreRead: '<S907>/22B-TP' */
    rtb_u2BTP_a = VITALMAIN_DW.M_TP_22B;

    /* DataStoreRead: '<S907>/22C-TP' */
    rtb_u2CTP_a = VITALMAIN_DW.M_TP_22C;

    /* DataStoreRead: '<S907>/22D-TP' */
    rtb_u2DTP_e = VITALMAIN_DW.M_TP_22D;

    /* DataStoreRead: '<S907>/22E-TP' */
    rtb_u2ETP_b = VITALMAIN_DW.M_TP_22E;

    /* DataStoreRead: '<S907>/23A-TP' */
    rtb_u3ATP_o = VITALMAIN_DW.M_TP_23A;

    /* DataStoreRead: '<S907>/23B-TP' */
    rtb_u3BTP_k4 = VITALMAIN_DW.M_TP_23B;

    /* DataStoreRead: '<S907>/24A-TP' */
    rtb_u4ATP_p = VITALMAIN_DW.M_TP_24A;

    /* DataStoreRead: '<S907>/24B-TP' */
    rtb_u4BTP_d = VITALMAIN_DW.M_TP_24B;

    /* DataStoreRead: '<S907>/10B-T-ES' */
    rtb_u0BTES_l = VITALMAIN_DW.M_T_ES_10B;

    /* DataStoreRead: '<S907>/11A-T-ES' */
    rtb_u1ATES_ok = VITALMAIN_DW.M_T_ES_11A;

    /* DataStoreRead: '<S907>/11B-T-ES' */
    rtb_u1BTES_m = VITALMAIN_DW.M_T_ES_11B;

    /* DataStoreRead: '<S907>/12A-T-ES' */
    rtb_u2ATES_g = VITALMAIN_DW.M_T_ES_12A;

    /* DataStoreRead: '<S907>/12B-T-ES' */
    rtb_u2BTES_a = VITALMAIN_DW.M_T_ES_12B;

    /* DataStoreRead: '<S907>/12C-T-ES' */
    rtb_u2CTES_p = VITALMAIN_DW.M_T_ES_12C;

    /* DataStoreRead: '<S907>/12D-T-ES' */
    rtb_u2DTES_i = VITALMAIN_DW.M_T_ES_12D;

    /* DataStoreRead: '<S907>/13A-T-ES' */
    rtb_u3ATES_i = VITALMAIN_DW.M_T_ES_13A;

    /* DataStoreRead: '<S907>/13B-T-ES' */
    rtb_u3BTES_gn = VITALMAIN_DW.M_T_ES_13B;

    /* DataStoreRead: '<S907>/14A-T-ES' */
    rtb_u4ATES_m = VITALMAIN_DW.M_T_ES_14A;

    /* DataStoreRead: '<S907>/20B-T-ES' */
    rtb_u0BTES_j = VITALMAIN_DW.M_T_ES_20B;

    /* DataStoreRead: '<S907>/21A-T-ES' */
    rtb_u1ATES_g = VITALMAIN_DW.M_T_ES_21A;

    /* DataStoreRead: '<S907>/21B-T-ES' */
    rtb_u1BTES_gi = VITALMAIN_DW.M_T_ES_21B;

    /* DataStoreRead: '<S907>/21C-T-ES' */
    rtb_u1CTES_b = VITALMAIN_DW.M_T_ES_21C;

    /* DataStoreRead: '<S907>/22A-T-ES' */
    rtb_u2ATES_o = VITALMAIN_DW.M_T_ES_22A;

    /* DataStoreRead: '<S907>/22B-T-ES' */
    rtb_u2BTES_f = VITALMAIN_DW.M_T_ES_22B;

    /* DataStoreRead: '<S907>/22C-T-ES' */
    rtb_u2CTES_o = VITALMAIN_DW.M_T_ES_22C;

    /* DataStoreRead: '<S907>/22D-T-ES' */
    rtb_u2DTES_b5 = VITALMAIN_DW.M_T_ES_22D;

    /* DataStoreRead: '<S907>/23A-T-ES' */
    rtb_u3ATES_d = VITALMAIN_DW.M_T_ES_23A;

    /* DataStoreRead: '<S907>/23B-T-ES' */
    rtb_u3BTES_et = VITALMAIN_DW.M_T_ES_23B;

    /* DataStoreRead: '<S907>/24A-T-ES' */
    rtb_u4ATES_ia = VITALMAIN_DW.M_T_ES_24A;

    /* DataStoreRead: '<S907>/10B-T-WS' */
    rtb_u0BTWS_m = VITALMAIN_DW.M_T_WS_10B;

    /* DataStoreRead: '<S907>/11A-T-WS' */
    rtb_u1ATWS_he = VITALMAIN_DW.M_T_WS_11A;

    /* DataStoreRead: '<S907>/11B-T-WS' */
    rtb_u1BTWS_l = VITALMAIN_DW.M_T_WS_11B;

    /* DataStoreRead: '<S907>/12B-T-WS' */
    rtb_u2BTWS_f = VITALMAIN_DW.M_T_WS_12B;

    /* DataStoreRead: '<S907>/12C-T-WS' */
    rtb_u2CTWS_d = VITALMAIN_DW.M_T_WS_12C;

    /* DataStoreRead: '<S907>/12D-T-WS' */
    rtb_u2DTWS_i = VITALMAIN_DW.M_T_WS_12D;

    /* DataStoreRead: '<S907>/12E-T-WS' */
    rtb_u2ETWS_b = VITALMAIN_DW.M_T_WS_12E;

    /* DataStoreRead: '<S907>/13A-T-WS' */
    rtb_u3ATWS_e = VITALMAIN_DW.M_T_WS_13A;

    /* DataStoreRead: '<S907>/13B-T-WS' */
    rtb_u3BTWS_n = VITALMAIN_DW.M_T_WS_13B;

    /* DataStoreRead: '<S907>/14A-T-WS' */
    rtb_u4ATWS_d = VITALMAIN_DW.M_T_WS_14A;

    /* DataStoreRead: '<S907>/20B-T-WS' */
    rtb_u0BTWS_e = VITALMAIN_DW.M_T_WS_20B;

    /* DataStoreRead: '<S907>/21A-T-WS' */
    rtb_u1ATWS_j = VITALMAIN_DW.M_T_WS_21A;

    /* DataStoreRead: '<S907>/21B-T-WS' */
    rtb_u1BTWS_m = VITALMAIN_DW.M_T_WS_21B;

    /* DataStoreRead: '<S907>/21C-T-WS' */
    rtb_u1CTWS_c = VITALMAIN_DW.M_T_WS_21C;

    /* DataStoreRead: '<S907>/22B-T-WS' */
    rtb_u2BTWS_h = VITALMAIN_DW.M_T_WS_22B;

    /* DataStoreRead: '<S907>/22C-T-WS' */
    rtb_u2CTWS_o = VITALMAIN_DW.M_T_WS_22C;

    /* DataStoreRead: '<S907>/22D-T-WS' */
    rtb_u2DTWS_k0 = VITALMAIN_DW.M_T_WS_22D;

    /* DataStoreRead: '<S907>/22E-T-WS' */
    rtb_u2ETWS_m = VITALMAIN_DW.M_T_WS_22E;

    /* DataStoreRead: '<S907>/23A-T-WS' */
    rtb_u3ATWS_d = VITALMAIN_DW.M_T_WS_23A;

    /* DataStoreRead: '<S907>/23B-T-WS' */
    rtb_u3BTWS_f = VITALMAIN_DW.M_T_WS_23B;

    /* DataStoreRead: '<S907>/24A-T-WS' */
    rtb_u4ATWS_f = VITALMAIN_DW.M_T_WS_24A;

    /* DataStoreRead: '<S907>/10B-S-ES' */
    rtb_u0BSES_c = VITALMAIN_DW.M_S_ES_10B;

    /* DataStoreRead: '<S907>/11A-S-ES' */
    rtb_u1ASES_n = VITALMAIN_DW.M_S_ES_11A;

    /* DataStoreRead: '<S907>/11B-S-ES' */
    rtb_u1BSES_lq = VITALMAIN_DW.M_S_ES_11B;

    /* DataStoreRead: '<S907>/20B-S-ES' */
    rtb_u0BSES_a = VITALMAIN_DW.M_S_ES_20B;

    /* DataStoreRead: '<S907>/21A-S-ES' */
    rtb_u1ASES_f = VITALMAIN_DW.M_S_ES_21A;

    /* DataStoreRead: '<S907>/21B-S-ES' */
    rtb_u1BSES_m = VITALMAIN_DW.M_S_ES_21B;

    /* DataStoreRead: '<S907>/21C-S-ES' */
    rtb_u1CSES_e = VITALMAIN_DW.M_S_ES_21C;

    /* DataStoreRead: '<S907>/10B-S-WS' */
    rtb_u0BSWS_en = VITALMAIN_DW.M_S_WS_10B;

    /* DataStoreRead: '<S907>/11A-S-WS' */
    rtb_u1ASWS_c = VITALMAIN_DW.M_S_WS_11A;

    /* DataStoreRead: '<S907>/11B-S-WS' */
    rtb_u1BSWS_im = VITALMAIN_DW.M_S_WS_11B;

    /* DataStoreRead: '<S907>/20B-S-WS' */
    rtb_u0BSWS_ee = VITALMAIN_DW.M_S_WS_20B;

    /* DataStoreRead: '<S907>/21A-S-WS' */
    rtb_u1ASWS_f3 = VITALMAIN_DW.M_S_WS_21A;

    /* DataStoreRead: '<S907>/21B-S-WS' */
    rtb_u1BSWS_c = VITALMAIN_DW.M_S_WS_21B;

    /* DataStoreRead: '<S907>/21C-S-WS' */
    rtb_u1CSWS_n = VITALMAIN_DW.M_S_WS_21C;

    /* DataStoreRead: '<S907>/W11A//21A-NWC' */
    rtb_W11A21ANWC_e = VITALMAIN_DW.M_W11A_21A_NWC;

    /* DataStoreRead: '<S907>/W11B//21B-NWC' */
    rtb_W11B21BNWC_e = VITALMAIN_DW.M_W11B_21B_NWC;

    /* DataStoreRead: '<S907>/W13A//23A-NWC' */
    rtb_W13A23ANWC_p = VITALMAIN_DW.M_W13A_23A_NWC;

    /* DataStoreRead: '<S907>/W13B//23B-NWC' */
    rtb_W13B23BNWC_b = VITALMAIN_DW.M_W13B_23B_NWC;

    /* DataStoreRead: '<S907>/W21C-NWC' */
    rtb_W21CNWC_l = VITALMAIN_DW.M_W21C_NWC;

    /* DataStoreRead: '<S907>/W11A//21A-NWP' */
    rtb_W11A21ANWP = VITALMAIN_DW.M_W11A_21A_NWP;

    /* DataStoreRead: '<S907>/W11B//21B-NWP' */
    rtb_W11B21BNWP = VITALMAIN_DW.M_W11B_21B_NWP;

    /* DataStoreRead: '<S907>/W13A//23A-NWP' */
    rtb_W13A23ANWP = VITALMAIN_DW.M_W13A_23A_NWP;

    /* DataStoreRead: '<S907>/W13B//23B-NWP' */
    rtb_W13B23BNWP = VITALMAIN_DW.M_W13B_23B_NWP;

    /* DataStoreRead: '<S907>/W21C-NWP' */
    rtb_W21CNWP = VITALMAIN_DW.M_W21C_NWP;

    /* DataStoreRead: '<S907>/W11A//21A-NWZ' */
    rtb_W11A21ANWZ_p = VITALMAIN_DW.M_W11A_21A_NWZ;

    /* DataStoreRead: '<S907>/W11B//21B-NWZ' */
    rtb_W11B21BNWZ_c = VITALMAIN_DW.M_W11B_21B_NWZ;

    /* DataStoreRead: '<S907>/W13A//23A-NWZ' */
    rtb_W13A23ANWZ_a = VITALMAIN_DW.M_W13A_23A_NWZ;

    /* DataStoreRead: '<S907>/W13B//23B-NWZ' */
    rtb_W13B23BNWZ_i = VITALMAIN_DW.M_W13B_23B_NWZ;

    /* DataStoreRead: '<S907>/W21C-NWZ' */
    rtb_W21CNWZ = VITALMAIN_DW.M_W21C_NWZ;

    /* DataStoreRead: '<S907>/W11A//21A-NW-TE' */
    rtb_W11A21ANWTE = VITALMAIN_DW.M_W11A_21A_NW_TE;

    /* DataStoreRead: '<S907>/W11B//21B-NW-TE' */
    rtb_W11B21BNWTE = VITALMAIN_DW.M_W11B_21B_NW_TE;

    /* DataStoreRead: '<S907>/W13A//23A-NW-TE' */
    rtb_W13A23ANWTE = VITALMAIN_DW.M_W13A_23A_NW_TE;

    /* DataStoreRead: '<S907>/W13B//23B-NW-TE' */
    rtb_W13B23BNWTE = VITALMAIN_DW.M_W13B_23B_NW_TE;

    /* DataStoreRead: '<S907>/W21C-NW-TE' */
    rtb_W21CNWTE = VITALMAIN_DW.M_W21C_NW_TE;

    /* DataStoreRead: '<S907>/W11A//21A-RWC' */
    rtb_W11A21ARWC_c = VITALMAIN_DW.M_W11A_21A_RWC;

    /* DataStoreRead: '<S907>/W11B//21B-RWC' */
    rtb_W11B21BRWC_j = VITALMAIN_DW.M_W11B_21B_RWC;

    /* DataStoreRead: '<S907>/W13A//23A-RWC' */
    rtb_W13A23ARWC_m = VITALMAIN_DW.M_W13A_23A_RWC;

    /* DataStoreRead: '<S907>/W13B//23B-RWC' */
    rtb_W13B23BRWC_n = VITALMAIN_DW.M_W13B_23B_RWC;

    /* DataStoreRead: '<S907>/W21C-RWC' */
    rtb_W21CRWC_lp = VITALMAIN_DW.M_W21C_RWC;

    /* DataStoreRead: '<S907>/W11A//21A-RWP' */
    rtb_W11A21ARWP = VITALMAIN_DW.M_W11A_21A_RWP;

    /* DataStoreRead: '<S907>/W11B//21B-RWP' */
    rtb_W11B21BRWP = VITALMAIN_DW.M_W11B_21B_RWP;

    /* DataStoreRead: '<S907>/W13A//23A-RWP' */
    rtb_W13A23ARWP = VITALMAIN_DW.M_W13A_23A_RWP;

    /* DataStoreRead: '<S907>/W13B//23B-RWP' */
    rtb_W13B23BRWP = VITALMAIN_DW.M_W13B_23B_RWP;

    /* DataStoreRead: '<S907>/W21C-RWP' */
    rtb_W21CRWP = VITALMAIN_DW.M_W21C_RWP;

    /* DataStoreRead: '<S907>/W11A//21A-RWZ' */
    rtb_W11A21ARWZ_h = VITALMAIN_DW.M_W11A_21A_RWZ;

    /* DataStoreRead: '<S907>/W11B//21B-RWZ' */
    rtb_W11B21BRWZ_n = VITALMAIN_DW.M_W11B_21B_RWZ;

    /* DataStoreRead: '<S907>/W13A//23A-RWZ' */
    rtb_W13A23ARWZ_g = VITALMAIN_DW.M_W13A_23A_RWZ;

    /* DataStoreRead: '<S907>/W13B//23B-RWZ' */
    rtb_W13B23BRWZ_o = VITALMAIN_DW.M_W13B_23B_RWZ;

    /* DataStoreRead: '<S907>/W21C-RWZ' */
    rtb_W21CRWZ_i = VITALMAIN_DW.M_W21C_RWZ;

    /* DataStoreRead: '<S907>/W11A//21A-RW-TE' */
    rtb_W11A21ARWTE = VITALMAIN_DW.M_W11A_21A_RW_TE;

    /* DataStoreRead: '<S907>/W11B//21B-RW-TE' */
    rtb_W11B21BRWTE = VITALMAIN_DW.M_W11B_21B_RW_TE;

    /* DataStoreRead: '<S907>/W13A//23A-RW-TE' */
    rtb_W13A23ARWTE = VITALMAIN_DW.M_W13A_23A_RW_TE;

    /* DataStoreRead: '<S907>/W13B//23B-RW-TE' */
    rtb_W13B23BRWTE = VITALMAIN_DW.M_W13B_23B_RW_TE;

    /* DataStoreRead: '<S907>/W21C-RW-TE' */
    rtb_W21CRWTE = VITALMAIN_DW.M_W21C_RW_TE;

    /* DataStoreRead: '<S907>/W11A//21A-L' */
    rtb_W11A21AL = VITALMAIN_DW.M_W11A_21A_L;

    /* DataStoreRead: '<S907>/W11B//21B-L' */
    rtb_W11B21BL = VITALMAIN_DW.M_W11B_21B_L;

    /* DataStoreRead: '<S907>/W13A//23A-L' */
    rtb_W13A23AL = VITALMAIN_DW.M_W13A_23A_L;

    /* DataStoreRead: '<S907>/W13B//23B-L' */
    rtb_W13B23BL = VITALMAIN_DW.M_W13B_23B_L;

    /* DataStoreRead: '<S907>/W21C-L' */
    rtb_W21CL = VITALMAIN_DW.M_W21C_L;

    /* DataStoreRead: '<S907>/W11A//21A-LS' */
    rtb_W11A21ALS = VITALMAIN_DW.M_W11A_21A_LS;

    /* DataStoreRead: '<S907>/W11B//21B-LS' */
    rtb_W11B21BLS = VITALMAIN_DW.M_W11B_21B_LS;

    /* DataStoreRead: '<S907>/W13A//23A-LS' */
    rtb_W13A23ALS = VITALMAIN_DW.M_W13A_23A_LS;

    /* DataStoreRead: '<S907>/W13B//23B-LS' */
    rtb_W13B23BLS = VITALMAIN_DW.M_W13B_23B_LS;

    /* DataStoreRead: '<S907>/W21C-LS' */
    rtb_W21CLS = VITALMAIN_DW.M_W21C_LS;

    /* DataStoreRead: '<S907>/W11A//21A-SWRLS' */
    rtb_W11A21ASWRLS_c = VITALMAIN_DW.M_W11A_21A_SWRLS;

    /* DataStoreRead: '<S907>/W11B//21B-SWRLS' */
    rtb_W11B21BSWRLS_j = VITALMAIN_DW.M_W11B_21B_SWRLS;

    /* DataStoreRead: '<S907>/W13A//23A-SWRLS' */
    rtb_W13A23ASWRLS_g = VITALMAIN_DW.M_W13A_23A_SWRLS;

    /* DataStoreRead: '<S907>/W13B//23B-SWRLS' */
    rtb_W13B23BSWRLS_k = VITALMAIN_DW.M_W13B_23B_SWRLS;

    /* DataStoreRead: '<S907>/W21C-SWRLS' */
    rtb_W21CSWRLS_j = VITALMAIN_DW.M_W21C_SWRLS;

    /* DataStoreRead: '<S907>/W11A//21A-TPZ' */
    rtb_W11A21ATPZ_c0 = VITALMAIN_DW.M_W11A_21A_TPZ;

    /* DataStoreRead: '<S907>/W11B//21B-TPZ' */
    rtb_W11B21BTPZ_f = VITALMAIN_DW.M_W11B_21B_TPZ;

    /* DataStoreRead: '<S907>/W13A//23A-TPZ' */
    rtb_W13A23ATPZ_m = VITALMAIN_DW.M_W13A_23A_TPZ;

    /* DataStoreRead: '<S907>/W13B//23B-TPZ' */
    rtb_W13B23BTPZ_o = VITALMAIN_DW.M_W13B_23B_TPZ;

    /* DataStoreRead: '<S907>/W21C-TPZ' */
    rtb_W21CTPZ_l = VITALMAIN_DW.M_W21C_TPZ;

    /* DataStoreRead: '<S907>/J12A-DR-DO' */
    rtb_J12ADRDO_k = VITALMAIN_DW.DO_J12A_DR;

    /* DataStoreRead: '<S907>/J12B-DR-DO' */
    rtb_J12BDRDO_b = VITALMAIN_DW.DO_J12B_DR;

    /* DataStoreRead: '<S907>/J14-DR-DO' */
    rtb_J14DRDO_k = VITALMAIN_DW.DO_J14_DR;

    /* DataStoreRead: '<S907>/J22A-DR-DO' */
    rtb_J22ADRDO_j = VITALMAIN_DW.DO_J22A_DR;

    /* DataStoreRead: '<S907>/J22B-DR-DO' */
    rtb_J22BDRDO_e = VITALMAIN_DW.DO_J22B_DR;

    /* DataStoreRead: '<S907>/J24-DR-DO' */
    rtb_J24DRDO_c = VITALMAIN_DW.DO_J24_DR;

    /* DataStoreRead: '<S907>/JL10-DR-DO' */
    rtb_JL10DRDO_g = VITALMAIN_DW.DO_JL10_DR;

    /* DataStoreRead: '<S907>/JL20-DR-DO' */
    rtb_JL20DRDO_p = VITALMAIN_DW.DO_JL20_DR;

    /* DataStoreRead: '<S907>/JL10-GR-DO' */
    rtb_JL10GRDO_c = VITALMAIN_DW.DO_JL10_GR;

    /* DataStoreRead: '<S907>/JL20-GR-DO' */
    rtb_JL20GRDO_f = VITALMAIN_DW.DO_JL20_GR;

    /* DataStoreRead: '<S907>/J12A-T-AS' */
    rtb_J12ATAS_n = VITALMAIN_DW.M_AS_T_J12A;

    /* DataStoreRead: '<S907>/J12B-T-AS' */
    rtb_J12BTAS_h = VITALMAIN_DW.M_AS_T_J12B;

    /* DataStoreRead: '<S907>/J14-T-AS' */
    rtb_J14TAS_b = VITALMAIN_DW.M_AS_T_J14;

    /* DataStoreRead: '<S907>/J22A-T-AS' */
    rtb_J22ATAS_h = VITALMAIN_DW.M_AS_T_J22A;

    /* DataStoreRead: '<S907>/J22B-T-AS' */
    rtb_J22BTAS_er = VITALMAIN_DW.M_AS_T_J22B;

    /* DataStoreRead: '<S907>/J24-T-AS' */
    rtb_J24TAS_j = VITALMAIN_DW.M_AS_T_J24;

    /* DataStoreRead: '<S907>/JL10-T-AS' */
    rtb_JL10TAS_j = VITALMAIN_DW.M_AS_T_JL10;

    /* DataStoreRead: '<S907>/JL20-T-AS' */
    rtb_JL20TAS_m = VITALMAIN_DW.M_AS_T_JL20;

    /* DataStoreRead: '<S907>/JL10-S-AS' */
    rtb_JL10SAS_o = VITALMAIN_DW.M_AS_S_JL10;

    /* DataStoreRead: '<S907>/JL20-S-AS' */
    rtb_JL20SAS_c = VITALMAIN_DW.M_AS_S_JL20;

    /* DataStoreRead: '<S907>/J12A-RRLS' */
    rtb_J12ARRLS_p = VITALMAIN_DW.M_RRLS_J12A;

    /* DataStoreRead: '<S907>/J12B-RRLS' */
    rtb_J12BRRLS_p = VITALMAIN_DW.M_RRLS_J12B;

    /* DataStoreRead: '<S907>/J22A-RRLS' */
    rtb_J22ARRLS_a = VITALMAIN_DW.M_RRLS_J22A;

    /* DataStoreRead: '<S907>/J22B-RRLS' */
    rtb_J22BRRLS_b = VITALMAIN_DW.M_RRLS_J22B;

    /* DataStoreRead: '<S907>/X10-RRLS' */
    rtb_X10RRLS_m = VITALMAIN_DW.M_RRLS_X10;

    /* DataStoreRead: '<S907>/X14-RRLS' */
    rtb_X14RRLS_g = VITALMAIN_DW.M_RRLS_X14;

    /* DataStoreRead: '<S907>/X20-RRLS' */
    rtb_X20RRLS_b = VITALMAIN_DW.M_RRLS_X20;

    /* DataStoreRead: '<S907>/X24-RRLS' */
    rtb_X24RRLS_o = VITALMAIN_DW.M_RRLS_X24;

    /* DataStoreRead: '<S904>/VDR' */
    *rty_VDRDO = VITALMAIN_DW.DO_VDR;

    /* DataStoreRead: '<S904>/J12A-DR-DO' */
    rtb_J12ADRDO_b = VITALMAIN_DW.DO_J12A_DR;

    /* DataStoreRead: '<S904>/J12B-DR-DO' */
    rtb_J12BDRDO_h = VITALMAIN_DW.DO_J12B_DR;

    /* DataStoreRead: '<S904>/J14-DR-DO' */
    rtb_J14DRDO_h = VITALMAIN_DW.DO_J14_DR;

    /* DataStoreRead: '<S904>/J22A-DR-DO' */
    rtb_J22ADRDO_o = VITALMAIN_DW.DO_J22A_DR;

    /* DataStoreRead: '<S904>/J22B-DR-DO' */
    rtb_J22BDRDO_a = VITALMAIN_DW.DO_J22B_DR;

    /* DataStoreRead: '<S904>/J24-DR-DO' */
    rtb_J24DRDO_l = VITALMAIN_DW.DO_J24_DR;

    /* DataStoreRead: '<S904>/JL10-DR-DO' */
    rtb_JL10DRDO_k = VITALMAIN_DW.DO_JL10_DR;

    /* DataStoreRead: '<S904>/JL20-DR-DO' */
    rtb_JL20DRDO_g = VITALMAIN_DW.DO_JL20_DR;

    /* DataStoreRead: '<S904>/JL10-GR-DO' */
    rtb_JL10GRDO_o4 = VITALMAIN_DW.DO_JL10_GR;

    /* DataStoreRead: '<S904>/JL20-GR-DO' */
    rtb_JL20GRDO_e = VITALMAIN_DW.DO_JL20_GR;

    /* DataStoreRead: '<S904>/W11A//21A-NWR-DO' */
    rtb_W11A21ANWRDO = VITALMAIN_DW.DO_NWR_W11A_21A;

    /* DataStoreRead: '<S904>/W11B//21B-NWR-DO' */
    rtb_W11B21BNWRDO = VITALMAIN_DW.DO_NWR_W11B_21B;

    /* DataStoreRead: '<S904>/W13A//23A-NWR-DO' */
    rtb_W13A23ANWRDO = VITALMAIN_DW.DO_NWR_W13A_23A;

    /* DataStoreRead: '<S904>/W13B//23B-NWR-DO' */
    rtb_W13B23BNWRDO = VITALMAIN_DW.DO_NWR_W13B_23B;

    /* DataStoreRead: '<S904>/W21C-NWR-DO' */
    rtb_W21CNWRDO = VITALMAIN_DW.DO_NWR_W21C;

    /* DataStoreRead: '<S904>/W11A//21A-RWR-DO' */
    rtb_W11A21ARWRDO = VITALMAIN_DW.DO_RWR_W11A_21A;

    /* DataStoreRead: '<S904>/W11B//21B-RWR-DO' */
    rtb_W11B21BRWRDO = VITALMAIN_DW.DO_RWR_W11B_21B;

    /* DataStoreRead: '<S904>/W13A//23A-RWR-DO' */
    rtb_W13A23ARWRDO = VITALMAIN_DW.DO_RWR_W13A_23A;

    /* DataStoreRead: '<S904>/W13B//23B-RWR-DO' */
    rtb_W13B23BRWRDO = VITALMAIN_DW.DO_RWR_W13B_23B;

    /* DataStoreRead: '<S904>/W21C-RWR-DO' */
    rtb_W21CRWRDO = VITALMAIN_DW.DO_RWR_W21C;

    /* DataStoreRead: '<S904>/W11A//21A-WLPR-DO' */
    rtb_W11A21AWLPRDO = VITALMAIN_DW.DO_WLPR_W11A_21A;

    /* DataStoreRead: '<S904>/W11B//21B-WLPR-DO' */
    rtb_W11B21BWLPRDO = VITALMAIN_DW.DO_WLPR_W11B_21B;

    /* DataStoreRead: '<S904>/W13A//23A-WLPR-DO' */
    rtb_W13A23AWLPRDO = VITALMAIN_DW.DO_WLPR_W13A_23A;

    /* DataStoreRead: '<S904>/W13B//23B-WLPR-DO' */
    rtb_W13B23BWLPRDO = VITALMAIN_DW.DO_WLPR_W13B_23B;

    /* DataStoreRead: '<S904>/W21C-WLPR-DO' */
    rtb_W21CWLPRDO = VITALMAIN_DW.DO_WLPR_W21C;

    /* DataStoreWrite: '<S1>/FALSE' incorporates:
     *  Constant: '<S4>/0'
     */
    VITALMAIN_DW.M_GV_FALSE = false;

    /* DiscretePulseGenerator: '<S4>/0.5S' */
    rtb_uS = ((VITALMAIN_DW.clockTickCounter < 5) &&
              (VITALMAIN_DW.clockTickCounter >= 0));
    if (VITALMAIN_DW.clockTickCounter >= 9) {
      VITALMAIN_DW.clockTickCounter = 0;
    } else {
      VITALMAIN_DW.clockTickCounter++;
    }

    /* End of DiscretePulseGenerator: '<S4>/0.5S' */

    /* DataStoreWrite: '<S1>/FLASH-0.5S' incorporates:
     *  DataTypeConversion: '<S4>/Data Type Conversion1'
     */
    VITALMAIN_DW.M_GV_FLASH_500 = (rtb_uS != 0);

    /* DiscretePulseGenerator: '<S4>/1S' */
    rtb_uS = ((VITALMAIN_DW.clockTickCounter_j < 10) &&
              (VITALMAIN_DW.clockTickCounter_j >= 0));
    if (VITALMAIN_DW.clockTickCounter_j >= 19) {
      VITALMAIN_DW.clockTickCounter_j = 0;
    } else {
      VITALMAIN_DW.clockTickCounter_j++;
    }

    /* End of DiscretePulseGenerator: '<S4>/1S' */

    /* DataStoreWrite: '<S1>/FLASH-1S' incorporates:
     *  DataTypeConversion: '<S4>/Data Type Conversion'
     */
    VITALMAIN_DW.M_GV_FLASH_1000 = (rtb_uS != 0);

    /* DataStoreWrite: '<S1>/SEMENTARA' incorporates:
     *  Constant: '<S4>/1'
     */
    VITALMAIN_DW.DO_VDR = true;

    /* DataStoreWrite: '<S1>/TRUE' incorporates:
     *  Constant: '<S4>/1'
     */
    VITALMAIN_DW.M_GV_TRUE = true;

    /* DataStoreRead: '<S16>/FALSE' */
    rtb_FALSE = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S16>/TmpSignal ConversionAtAPPROACH LOCKInport1' */
    rtb_TmpSignalConversionAtAPPROA = rtb_FALSE;

    /* DataStoreRead: '<S16>/DEP-GR-DO' */
    rtb_DEPGRDO = VITALMAIN_DW.M_DEP_GR_DO;

    /* DataStoreRead: '<S16>/DEP-TP' */
    rtb_DEPTP = VITALMAIN_DW.M_TP_DEP;

    /* DataStoreRead: '<S16>/21C-TP' */
    rtb_u1CTP = VITALMAIN_DW.M_TP_21C;

    /* DataStoreRead: '<S16>/RR' */
    rtb_RR = VITALMAIN_DW.M_RR;

    /* DataStoreRead: '<S16>/VDR-DI' */
    rtb_VDRDI_m = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S16>/APPROACH LOCK' */
  M_AS(VITALMAIN_M, rtb_TmpSignalConversionAtAPPROA, rtb_FALSE, rtb_DEPGRDO,
       rtb_DEPTP, rtb_u1CTP, rtb_RR, rtb_VDRDI_m, &VITALMAIN_B.APPROACHLOCK,
       &VITALMAIN_DW.APPROACHLOCK);

  /* End of Outputs for SubSystem: '<S16>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S16>/DEP-S-AS' */
    VITALMAIN_DW.M_AS_S_DEP = VITALMAIN_B.APPROACHLOCK.AND11;

    /* DataStoreRead: '<S17>/J12A-DR-DO' */
    rtb_J12ADRDO = VITALMAIN_DW.DO_J12A_DR;

    /* DataStoreRead: '<S17>/FALSE' */
    rtb_FALSE_n = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S17>/TmpSignal ConversionAtAPPROACH LOCKInport2' */
    rtb_TmpSignalConversionAtAPPR_n = rtb_FALSE_n;

    /* DataStoreRead: '<S17>/12A-TP' */
    rtb_u2ATP = VITALMAIN_DW.M_TP_12A;

    /* DataStoreRead: '<S17>/11B-TP' */
    rtb_u1BTP = VITALMAIN_DW.M_TP_11B;

    /* DataStoreRead: '<S17>/RR' */
    rtb_RR_h = VITALMAIN_DW.M_RR;

    /* DataStoreRead: '<S17>/VDR-DI' */
    rtb_VDRDI_e = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S17>/APPROACH LOCK' */
  M_AS(VITALMAIN_M, rtb_J12ADRDO, rtb_TmpSignalConversionAtAPPR_n, rtb_FALSE_n,
       rtb_u2ATP, rtb_u1BTP, rtb_RR_h, rtb_VDRDI_e, &VITALMAIN_B.APPROACHLOCK_c,
       &VITALMAIN_DW.APPROACHLOCK_c);

  /* End of Outputs for SubSystem: '<S17>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S17>/J12A-T-AS' */
    VITALMAIN_DW.M_AS_T_J12A = VITALMAIN_B.APPROACHLOCK_c.AND4;

    /* DataStoreRead: '<S18>/J12B-DR-DO' */
    rtb_J12BDRDO = VITALMAIN_DW.DO_J12B_DR;

    /* DataStoreRead: '<S18>/FALSE' */
    rtb_FALSE_h = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S18>/TmpSignal ConversionAtAPPROACH LOCKInport2' */
    rtb_TmpSignalConversionAtAPP_nm = rtb_FALSE_h;

    /* DataStoreRead: '<S18>/12E-TP' */
    rtb_u2ETP = VITALMAIN_DW.M_TP_12E;

    /* DataStoreRead: '<S18>/13A-TP' */
    rtb_u3ATP = VITALMAIN_DW.M_TP_13A;

    /* DataStoreRead: '<S18>/RR' */
    rtb_RR_a = VITALMAIN_DW.M_RR;

    /* DataStoreRead: '<S18>/VDR-DI' */
    rtb_VDRDI_i = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S18>/APPROACH LOCK' */
  M_AS(VITALMAIN_M, rtb_J12BDRDO, rtb_TmpSignalConversionAtAPP_nm, rtb_FALSE_h,
       rtb_u2ETP, rtb_u3ATP, rtb_RR_a, rtb_VDRDI_i, &VITALMAIN_B.APPROACHLOCK_h,
       &VITALMAIN_DW.APPROACHLOCK_h);

  /* End of Outputs for SubSystem: '<S18>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S18>/J12B-T-AS' */
    VITALMAIN_DW.M_AS_T_J12B = VITALMAIN_B.APPROACHLOCK_h.AND4;

    /* DataStoreRead: '<S19>/J14-DR-DO' */
    rtb_J14DRDO = VITALMAIN_DW.DO_J14_DR;

    /* DataStoreRead: '<S19>/FALSE' */
    rtb_FALSE_e = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S19>/TmpSignal ConversionAtAPPROACH LOCKInport2' */
    rtb_TmpSignalConversionAtAP_nmx = rtb_FALSE_e;

    /* DataStoreRead: '<S19>/14B-TP' */
    rtb_u4BTP = VITALMAIN_DW.M_TP_14B;

    /* DataStoreRead: '<S19>/14A-TP' */
    rtb_u4ATP = VITALMAIN_DW.M_TP_14A;

    /* DataStoreRead: '<S19>/RR' */
    rtb_RR_d = VITALMAIN_DW.M_RR;

    /* DataStoreRead: '<S19>/VDR-DI' */
    rtb_VDRDI_f = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S19>/APPROACH LOCK' */
  M_AS(VITALMAIN_M, rtb_J14DRDO, rtb_TmpSignalConversionAtAP_nmx, rtb_FALSE_e,
       rtb_u4BTP, rtb_u4ATP, rtb_RR_d, rtb_VDRDI_f, &VITALMAIN_B.APPROACHLOCK_o,
       &VITALMAIN_DW.APPROACHLOCK_o);

  /* End of Outputs for SubSystem: '<S19>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S19>/J14-T-AS' */
    VITALMAIN_DW.M_AS_T_J14 = VITALMAIN_B.APPROACHLOCK_o.AND4;

    /* DataStoreRead: '<S20>/J22A-DR-DO' */
    rtb_J22ADRDO = VITALMAIN_DW.DO_J22A_DR;

    /* DataStoreRead: '<S20>/FALSE' */
    rtb_FALSE_hg = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S20>/TmpSignal ConversionAtAPPROACH LOCKInport2' */
    rtb_TmpSignalConversionAtA_nmxm = rtb_FALSE_hg;

    /* DataStoreRead: '<S20>/22A-TP' */
    rtb_u2ATP_c = VITALMAIN_DW.M_TP_22A;

    /* DataStoreRead: '<S20>/21C-TP' */
    rtb_u1CTP_n = VITALMAIN_DW.M_TP_21C;

    /* DataStoreRead: '<S20>/RR' */
    rtb_RR_e = VITALMAIN_DW.M_RR;

    /* DataStoreRead: '<S20>/VDR-DI' */
    rtb_VDRDI_a = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S20>/APPROACH LOCK' */
  M_AS(VITALMAIN_M, rtb_J22ADRDO, rtb_TmpSignalConversionAtA_nmxm, rtb_FALSE_hg,
       rtb_u2ATP_c, rtb_u1CTP_n, rtb_RR_e, rtb_VDRDI_a,
       &VITALMAIN_B.APPROACHLOCK_d, &VITALMAIN_DW.APPROACHLOCK_d);

  /* End of Outputs for SubSystem: '<S20>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S20>/J22A-T-AS' */
    VITALMAIN_DW.M_AS_T_J22A = VITALMAIN_B.APPROACHLOCK_d.AND4;

    /* DataStoreRead: '<S21>/J22B-DR-DO' */
    rtb_J22BDRDO = VITALMAIN_DW.DO_J22B_DR;

    /* DataStoreRead: '<S21>/FALSE' */
    rtb_FALSE_f = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S21>/TmpSignal ConversionAtAPPROACH LOCKInport2' */
    rtb_TmpSignalConversionAt_nmxmn = rtb_FALSE_f;

    /* DataStoreRead: '<S21>/22A-TP' */
    rtb_u2ATP_cl = VITALMAIN_DW.M_TP_22E;

    /* DataStoreRead: '<S21>/23A-TP' */
    rtb_u3ATP_l = VITALMAIN_DW.M_TP_23A;

    /* DataStoreRead: '<S21>/RR' */
    rtb_RR_f = VITALMAIN_DW.M_RR;

    /* DataStoreRead: '<S21>/VDR-DI' */
    rtb_VDRDI_d = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S21>/APPROACH LOCK' */
  M_AS(VITALMAIN_M, rtb_J22BDRDO, rtb_TmpSignalConversionAt_nmxmn, rtb_FALSE_f,
       rtb_u2ATP_cl, rtb_u3ATP_l, rtb_RR_f, rtb_VDRDI_d,
       &VITALMAIN_B.APPROACHLOCK_h1, &VITALMAIN_DW.APPROACHLOCK_h1);

  /* End of Outputs for SubSystem: '<S21>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S21>/J22B-T-AS' */
    VITALMAIN_DW.M_AS_T_J22B = VITALMAIN_B.APPROACHLOCK_h1.AND4;

    /* DataStoreRead: '<S22>/J24-DR-DO' */
    rtb_J24DRDO = VITALMAIN_DW.DO_J24_DR;

    /* DataStoreRead: '<S22>/FALSE' */
    rtb_FALSE_g = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S22>/TmpSignal ConversionAtAPPROACH LOCKInport2' */
    rtb_TmpSignalConversionA_nmxmns = rtb_FALSE_g;

    /* DataStoreRead: '<S22>/24B-TP' */
    rtb_u4BTP_l = VITALMAIN_DW.M_TP_24B;

    /* DataStoreRead: '<S22>/24A-TP' */
    rtb_u4ATP_k = VITALMAIN_DW.M_TP_24A;

    /* DataStoreRead: '<S22>/RR' */
    rtb_RR_hx = VITALMAIN_DW.M_RR;

    /* DataStoreRead: '<S22>/VDR-DI' */
    rtb_VDRDI_iv = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S22>/APPROACH LOCK' */
  M_AS(VITALMAIN_M, rtb_J24DRDO, rtb_TmpSignalConversionA_nmxmns, rtb_FALSE_g,
       rtb_u4BTP_l, rtb_u4ATP_k, rtb_RR_hx, rtb_VDRDI_iv,
       &VITALMAIN_B.APPROACHLOCK_g, &VITALMAIN_DW.APPROACHLOCK_g);

  /* End of Outputs for SubSystem: '<S22>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S22>/J24-T-AS' */
    VITALMAIN_DW.M_AS_T_J24 = VITALMAIN_B.APPROACHLOCK_g.AND4;

    /* DataStoreRead: '<S23>/JL10-DR-DO' */
    rtb_JL10DRDO = VITALMAIN_DW.DO_JL10_DR;

    /* DataStoreRead: '<S23>/FALSE' */
    rtb_FALSE_m = VITALMAIN_DW.M_GV_FALSE;

    /* DataStoreRead: '<S23>/JL10-GR-DO' */
    rtb_JL10GRDO = VITALMAIN_DW.DO_JL10_GR;

    /* DataStoreRead: '<S23>/10A-TP' */
    rtb_u0ATP = VITALMAIN_DW.M_TP_10A;

    /* DataStoreRead: '<S23>/10B-TP' */
    rtb_u0BTP = VITALMAIN_DW.M_TP_10B;

    /* DataStoreRead: '<S23>/RR' */
    rtb_RR_g = VITALMAIN_DW.M_RR;

    /* DataStoreRead: '<S23>/VDR-DI' */
    rtb_VDRDI_k = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S23>/APPROACH LOCK' */
  M_AS(VITALMAIN_M, rtb_JL10DRDO, rtb_FALSE_m, rtb_JL10GRDO, rtb_u0ATP,
       rtb_u0BTP, rtb_RR_g, rtb_VDRDI_k, &VITALMAIN_B.APPROACHLOCK_e,
       &VITALMAIN_DW.APPROACHLOCK_e);

  /* End of Outputs for SubSystem: '<S23>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S23>/JL10-S-AS' */
    VITALMAIN_DW.M_AS_S_JL10 = VITALMAIN_B.APPROACHLOCK_e.AND11;

    /* DataStoreWrite: '<S23>/JL10-T-AS' */
    VITALMAIN_DW.M_AS_T_JL10 = VITALMAIN_B.APPROACHLOCK_e.AND4;

    /* DataStoreRead: '<S24>/JL20-DR-DO' */
    rtb_JL20DRDO = VITALMAIN_DW.DO_JL20_DR;

    /* DataStoreRead: '<S24>/FALSE' */
    rtb_FALSE_j = VITALMAIN_DW.M_GV_FALSE;

    /* DataStoreRead: '<S24>/JL10-GR-DO' */
    rtb_JL10GRDO_o = VITALMAIN_DW.DO_JL20_GR;

    /* DataStoreRead: '<S24>/20A-TP' */
    rtb_u0ATP_i = VITALMAIN_DW.M_TP_20A;

    /* DataStoreRead: '<S24>/20B-TP' */
    rtb_u0BTP_d = VITALMAIN_DW.M_TP_20B;

    /* DataStoreRead: '<S24>/RR' */
    rtb_RR_l = VITALMAIN_DW.M_RR;

    /* DataStoreRead: '<S24>/VDR-DI' */
    rtb_VDRDI_j = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S24>/APPROACH LOCK' */
  M_AS(VITALMAIN_M, rtb_JL20DRDO, rtb_FALSE_j, rtb_JL10GRDO_o, rtb_u0ATP_i,
       rtb_u0BTP_d, rtb_RR_l, rtb_VDRDI_j, &VITALMAIN_B.APPROACHLOCK_ok,
       &VITALMAIN_DW.APPROACHLOCK_ok);

  /* End of Outputs for SubSystem: '<S24>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S24>/JL20-S-AS' */
    VITALMAIN_DW.M_AS_S_JL20 = VITALMAIN_B.APPROACHLOCK_ok.AND11;

    /* DataStoreWrite: '<S24>/JL20-T-AS' */
    VITALMAIN_DW.M_AS_T_JL20 = VITALMAIN_B.APPROACHLOCK_ok.AND4;

    /* DataStoreRead: '<S169>/W11A//21A-SWRLSPB-CTRL' */
    rtb_W11A21ASWRLSPBCTRL = VITALMAIN_DW.M_W11A_21A_SWRLSPB_CTRL;

    /* Logic: '<S169>/AND1' incorporates:
     *  DataStoreRead: '<S169>/11A-S-ES'
     *  DataStoreRead: '<S169>/11A-S-WS'
     *  DataStoreRead: '<S169>/11A-T-ES'
     *  DataStoreRead: '<S169>/11A-T-WS'
     *  DataStoreRead: '<S169>/21A-S-ES'
     *  DataStoreRead: '<S169>/21A-S-WS'
     *  DataStoreRead: '<S169>/21A-T-ES'
     *  DataStoreRead: '<S169>/21A-T-WS'
     */
    rtb_AND1 = (VITALMAIN_DW.M_T_ES_11A && VITALMAIN_DW.M_T_ES_21A &&
                VITALMAIN_DW.M_T_WS_11A && VITALMAIN_DW.M_T_WS_21A &&
                VITALMAIN_DW.M_S_ES_11A && VITALMAIN_DW.M_S_ES_21A &&
                VITALMAIN_DW.M_S_WS_11A && VITALMAIN_DW.M_S_WS_21A);

    /* Logic: '<S169>/AND2' incorporates:
     *  DataStoreRead: '<S169>/11A-TP'
     *  DataStoreRead: '<S169>/21A-TP'
     */
    rtb_AND2 = (VITALMAIN_DW.M_TP_11A && VITALMAIN_DW.M_TP_21A);

    /* DataStoreRead: '<S169>/SWRLS' */
    rtb_SWRLS = VITALMAIN_DW.M_SWRLS_k;

    /* DataStoreRead: '<S169>/VDR-DI' */
    rtb_VDRDI_l = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S169>/EMERGENCY POINT RELEASE' */
  M_SWRLS(VITALMAIN_M, rtb_W11A21ASWRLSPBCTRL, rtb_AND1, rtb_AND2, rtb_SWRLS,
          rtb_VDRDI_l, &VITALMAIN_B.EMERGENCYPOINTRELEASE,
          &VITALMAIN_DW.EMERGENCYPOINTRELEASE);

  /* End of Outputs for SubSystem: '<S169>/EMERGENCY POINT RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S169>/W11A//21A-SWRLS' */
    VITALMAIN_DW.M_W11A_21A_SWRLS = VITALMAIN_B.EMERGENCYPOINTRELEASE.AND5;

    /* DataStoreWrite: '<S169>/W11A//21A-TPZ' */
    VITALMAIN_DW.M_W11A_21A_TPZ = VITALMAIN_B.EMERGENCYPOINTRELEASE.OR3;

    /* DataStoreRead: '<S170>/W11B//21B-SWRLSPB-CTRL' */
    rtb_W11B21BSWRLSPBCTRL = VITALMAIN_DW.M_W11B_21B_SWRLSPB_CTRL;

    /* Logic: '<S170>/AND1' incorporates:
     *  DataStoreRead: '<S170>/11B-S-ES'
     *  DataStoreRead: '<S170>/11B-S-WS'
     *  DataStoreRead: '<S170>/11B-T-ES'
     *  DataStoreRead: '<S170>/11B-T-WS'
     *  DataStoreRead: '<S170>/21B-S-ES'
     *  DataStoreRead: '<S170>/21B-S-WS'
     *  DataStoreRead: '<S170>/21B-T-ES'
     *  DataStoreRead: '<S170>/21B-T-WS'
     */
    rtb_AND1_o = (VITALMAIN_DW.M_T_ES_11B && VITALMAIN_DW.M_T_ES_21B &&
                  VITALMAIN_DW.M_T_WS_11B && VITALMAIN_DW.M_T_WS_21B &&
                  VITALMAIN_DW.M_S_ES_11B && VITALMAIN_DW.M_S_ES_21B &&
                  VITALMAIN_DW.M_S_WS_11B && VITALMAIN_DW.M_S_WS_21B);

    /* Logic: '<S170>/AND2' incorporates:
     *  DataStoreRead: '<S170>/11B-TP'
     *  DataStoreRead: '<S170>/21B-TP'
     */
    rtb_AND2_b = (VITALMAIN_DW.M_TP_11B && VITALMAIN_DW.M_TP_21B);

    /* DataStoreRead: '<S170>/SWRLS' */
    rtb_SWRLS_o = VITALMAIN_DW.M_SWRLS_k;

    /* DataStoreRead: '<S170>/VDR-DI' */
    rtb_VDRDI_b = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S170>/EMERGENCY POINT RELEASE' */
  M_SWRLS(VITALMAIN_M, rtb_W11B21BSWRLSPBCTRL, rtb_AND1_o, rtb_AND2_b,
          rtb_SWRLS_o, rtb_VDRDI_b, &VITALMAIN_B.EMERGENCYPOINTRELEASE_f,
          &VITALMAIN_DW.EMERGENCYPOINTRELEASE_f);

  /* End of Outputs for SubSystem: '<S170>/EMERGENCY POINT RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S170>/W11B//21B-SWRLS' */
    VITALMAIN_DW.M_W11B_21B_SWRLS = VITALMAIN_B.EMERGENCYPOINTRELEASE_f.AND5;

    /* DataStoreWrite: '<S170>/W11B//21B-TPZ' */
    VITALMAIN_DW.M_W11B_21B_TPZ = VITALMAIN_B.EMERGENCYPOINTRELEASE_f.OR3;

    /* DataStoreRead: '<S171>/W13A//23A-SWRLSPB-CTRL' */
    rtb_W13A23ASWRLSPBCTRL = VITALMAIN_DW.M_W13A_23A_SWRLSPB_CTRL;

    /* Logic: '<S171>/AND1' incorporates:
     *  DataStoreRead: '<S171>/13A-T-ES'
     *  DataStoreRead: '<S171>/13A-T-WS'
     *  DataStoreRead: '<S171>/23A-T-ES'
     *  DataStoreRead: '<S171>/23A-T-WS'
     */
    rtb_AND1_o5 = (VITALMAIN_DW.M_T_ES_13A && VITALMAIN_DW.M_T_ES_23A &&
                   VITALMAIN_DW.M_T_WS_13A && VITALMAIN_DW.M_T_WS_23A);

    /* Logic: '<S171>/AND2' incorporates:
     *  DataStoreRead: '<S171>/13A-TP'
     *  DataStoreRead: '<S171>/23A-TP'
     */
    rtb_AND2_k = (VITALMAIN_DW.M_TP_13A && VITALMAIN_DW.M_TP_23A);

    /* DataStoreRead: '<S171>/SWRLS' */
    rtb_SWRLS_l = VITALMAIN_DW.M_SWRLS_k;

    /* DataStoreRead: '<S171>/VDR-DI' */
    rtb_VDRDI_g = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S171>/EMERGENCY POINT RELEASE' */
  M_SWRLS(VITALMAIN_M, rtb_W13A23ASWRLSPBCTRL, rtb_AND1_o5, rtb_AND2_k,
          rtb_SWRLS_l, rtb_VDRDI_g, &VITALMAIN_B.EMERGENCYPOINTRELEASE_e,
          &VITALMAIN_DW.EMERGENCYPOINTRELEASE_e);

  /* End of Outputs for SubSystem: '<S171>/EMERGENCY POINT RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S171>/W13A//23A-SWRLS' */
    VITALMAIN_DW.M_W13A_23A_SWRLS = VITALMAIN_B.EMERGENCYPOINTRELEASE_e.AND5;

    /* DataStoreWrite: '<S171>/W13A//23A-TPZ' */
    VITALMAIN_DW.M_W13A_23A_TPZ = VITALMAIN_B.EMERGENCYPOINTRELEASE_e.OR3;

    /* DataStoreRead: '<S172>/W13B//23B-SWRLSPB-CTRL' */
    rtb_W13B23BSWRLSPBCTRL = VITALMAIN_DW.M_W13B_23B_SWRLSPB_CTRL;

    /* Logic: '<S172>/AND1' incorporates:
     *  DataStoreRead: '<S172>/13B-T-ES'
     *  DataStoreRead: '<S172>/13B-T-WS'
     *  DataStoreRead: '<S172>/23B-T-ES'
     *  DataStoreRead: '<S172>/23B-T-WS'
     */
    rtb_AND1_k = (VITALMAIN_DW.M_T_ES_13B && VITALMAIN_DW.M_T_ES_23B &&
                  VITALMAIN_DW.M_T_WS_13B && VITALMAIN_DW.M_T_WS_23B);

    /* Logic: '<S172>/AND2' incorporates:
     *  DataStoreRead: '<S172>/13B-TP'
     *  DataStoreRead: '<S172>/23B-TP'
     */
    rtb_AND2_n = (VITALMAIN_DW.M_TP_13B && VITALMAIN_DW.M_TP_23B);

    /* DataStoreRead: '<S172>/SWRLS' */
    rtb_SWRLS_m = VITALMAIN_DW.M_SWRLS_k;

    /* DataStoreRead: '<S172>/VDR-DI' */
    rtb_VDRDI_h = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S172>/EMERGENCY POINT RELEASE' */
  M_SWRLS(VITALMAIN_M, rtb_W13B23BSWRLSPBCTRL, rtb_AND1_k, rtb_AND2_n,
          rtb_SWRLS_m, rtb_VDRDI_h, &VITALMAIN_B.EMERGENCYPOINTRELEASE_d,
          &VITALMAIN_DW.EMERGENCYPOINTRELEASE_d);

  /* End of Outputs for SubSystem: '<S172>/EMERGENCY POINT RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S172>/W13B//23B-SWRLS' */
    VITALMAIN_DW.M_W13B_23B_SWRLS = VITALMAIN_B.EMERGENCYPOINTRELEASE_d.AND5;

    /* DataStoreWrite: '<S172>/W13B//23B-TPZ' */
    VITALMAIN_DW.M_W13B_23B_TPZ = VITALMAIN_B.EMERGENCYPOINTRELEASE_d.OR3;

    /* DataStoreRead: '<S173>/W21C-SWRLSPB-CTRL' */
    rtb_W21CSWRLSPBCTRL = VITALMAIN_DW.M_W21C_SWRLSPB_CTRL;

    /* Logic: '<S173>/AND1' incorporates:
     *  DataStoreRead: '<S173>/21C-S-ES'
     *  DataStoreRead: '<S173>/21C-S-WS'
     *  DataStoreRead: '<S173>/21C-T-ES'
     *  DataStoreRead: '<S173>/21C-T-WS'
     */
    rtb_AND1_a = (VITALMAIN_DW.M_T_ES_21C && VITALMAIN_DW.M_T_WS_21C &&
                  VITALMAIN_DW.M_S_ES_21C && VITALMAIN_DW.M_S_WS_21C);

    /* DataStoreRead: '<S173>/21C-TP' */
    rtb_u1CTP_b = VITALMAIN_DW.M_TP_21C;

    /* DataStoreRead: '<S173>/SWRLS' */
    rtb_SWRLS_g = VITALMAIN_DW.M_SWRLS_k;

    /* DataStoreRead: '<S173>/VDR-DI' */
    rtb_VDRDI_gs = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S173>/EMERGENCY POINT RELEASE' */
  M_SWRLS(VITALMAIN_M, rtb_W21CSWRLSPBCTRL, rtb_AND1_a, rtb_u1CTP_b, rtb_SWRLS_g,
          rtb_VDRDI_gs, &VITALMAIN_B.EMERGENCYPOINTRELEASE_m,
          &VITALMAIN_DW.EMERGENCYPOINTRELEASE_m);

  /* End of Outputs for SubSystem: '<S173>/EMERGENCY POINT RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S173>/W21C-SWRLS' */
    VITALMAIN_DW.M_W21C_SWRLS = VITALMAIN_B.EMERGENCYPOINTRELEASE_m.AND5;

    /* DataStoreWrite: '<S173>/W21C-TPZ' */
    VITALMAIN_DW.M_W21C_TPZ = VITALMAIN_B.EMERGENCYPOINTRELEASE_m.OR3;

    /* DataStoreRead: '<S229>/TRUE' */
    rtb_TRUE = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S229>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport1' */
    rtb_TmpSignalConversionAtEMERGE = rtb_TRUE;

    /* DataStoreRead: '<S229>/FALSE' */
    rtb_FALSE_a = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S229>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport2' */
    rtb_TmpSignalConversionAtEMER_m = rtb_FALSE_a;

    /* SignalConversion: '<S229>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport3' */
    rtb_TmpSignalConversionAtEMER_p = rtb_TRUE;

    /* Logic: '<S229>/AND1' incorporates:
     *  DataStoreRead: '<S229>/JL10-S-AS'
     *  DataStoreRead: '<S229>/JL20-S-AS'
     */
    rtb_AND1_ox = (VITALMAIN_DW.M_AS_S_JL10 && VITALMAIN_DW.M_AS_S_JL20);

    /* Logic: '<S229>/OR1' incorporates:
     *  DataStoreRead: '<S229>/JL10-DEP-S-REQ'
     *  DataStoreRead: '<S229>/JL20-DEP-S-REQ'
     */
    rtb_OR1 = (VITALMAIN_DW.M_REQ_S_10_DEP || VITALMAIN_DW.M_REQ_S_20_DEP);

    /* DataStoreRead: '<S229>/21C-S-ES' */
    rtb_u1CSES_o = VITALMAIN_DW.M_S_ES_21C;

    /* DataStoreRead: '<S229>/DEP-RRLSPB-CTRL' */
    rtb_DEPRRLSPBCTRL = VITALMAIN_DW.M_RRLSPB_CTRL_DEP;

    /* DataStoreRead: '<S229>/RRLS' */
    rtb_RRLS = VITALMAIN_DW.M_RRLS_l;

    /* DataStoreRead: '<S229>/VDR-DI' */
    rtb_VDRDI_jl = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S229>/EMERGENCY ROUTE RELEASE' */
  M_RRLS(VITALMAIN_M, rtb_TmpSignalConversionAtEMERGE,
         rtb_TmpSignalConversionAtEMER_m, rtb_TmpSignalConversionAtEMER_p,
         rtb_FALSE_a, rtb_AND1_ox, rtb_OR1, rtb_u1CSES_o, rtb_TRUE,
         rtb_DEPRRLSPBCTRL, rtb_RRLS, rtb_VDRDI_jl,
         &VITALMAIN_B.EMERGENCYROUTERELEASE, &VITALMAIN_DW.EMERGENCYROUTERELEASE);

  /* End of Outputs for SubSystem: '<S229>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S229>/DEP-RRLS-TE' */
    VITALMAIN_DW.M_RRLSTE_DEP = VITALMAIN_B.EMERGENCYROUTERELEASE.Memory1;

    /* DataStoreWrite: '<S229>/XDEP-RRLS' */
    VITALMAIN_DW.M_RRLS_XDEP = VITALMAIN_B.EMERGENCYROUTERELEASE.AND1;

    /* Logic: '<S230>/AND1' incorporates:
     *  DataStoreRead: '<S230>/J14-T-AS'
     *  DataStoreRead: '<S230>/J24-T-AS'
     */
    rtb_AND1_g = (VITALMAIN_DW.M_AS_T_J14 && VITALMAIN_DW.M_AS_T_J24);

    /* Logic: '<S230>/OR1' incorporates:
     *  DataStoreRead: '<S230>/J14-J12A-T-REQ'
     *  DataStoreRead: '<S230>/J24-J12A-T-REQ'
     */
    rtb_OR1_l = (VITALMAIN_DW.M_REQ_T_14_12 || VITALMAIN_DW.M_REQ_T_24_12);

    /* DataStoreRead: '<S230>/TRUE' */
    rtb_TRUE_a = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S230>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport3' */
    rtb_TmpSignalConversionAtEME_p5 = rtb_TRUE_a;

    /* DataStoreRead: '<S230>/FALSE' */
    rtb_FALSE_b = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S230>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport4' */
    rtb_TmpSignalConversionAtEMER_f = rtb_FALSE_b;

    /* SignalConversion: '<S230>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport5' */
    rtb_TmpSignalConversionAtEMER_g = rtb_TRUE_a;

    /* DataStoreRead: '<S230>/12B-T-WS' */
    rtb_u2BTWS = VITALMAIN_DW.M_T_WS_12B;

    /* DataStoreRead: '<S230>/J12A-RRLSPB-CTRL' */
    rtb_J12ARRLSPBCTRL = VITALMAIN_DW.M_RRLSPB_CTRL_J12A;

    /* DataStoreRead: '<S230>/RRLS' */
    rtb_RRLS_h = VITALMAIN_DW.M_RRLS_l;

    /* DataStoreRead: '<S230>/VDR-DI' */
    rtb_VDRDI_n = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S230>/EMERGENCY ROUTE RELEASE' */
  M_RRLS(VITALMAIN_M, rtb_AND1_g, rtb_OR1_l, rtb_TmpSignalConversionAtEME_p5,
         rtb_TmpSignalConversionAtEMER_f, rtb_TmpSignalConversionAtEMER_g,
         rtb_FALSE_b, rtb_u2BTWS, rtb_TRUE_a, rtb_J12ARRLSPBCTRL, rtb_RRLS_h,
         rtb_VDRDI_n, &VITALMAIN_B.EMERGENCYROUTERELEASE_b,
         &VITALMAIN_DW.EMERGENCYROUTERELEASE_b);

  /* End of Outputs for SubSystem: '<S230>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S230>/J12A-RRLS' */
    VITALMAIN_DW.M_RRLS_J12A = VITALMAIN_B.EMERGENCYROUTERELEASE_b.AND1;

    /* DataStoreWrite: '<S230>/J12A-RRLS-TE' */
    VITALMAIN_DW.M_RRLSTE_J12A = VITALMAIN_B.EMERGENCYROUTERELEASE_b.Memory1;

    /* Logic: '<S231>/AND1' incorporates:
     *  DataStoreRead: '<S231>/JL10-T-AS'
     *  DataStoreRead: '<S231>/JL20-T-AS'
     */
    rtb_AND1_au = (VITALMAIN_DW.M_AS_T_JL10 && VITALMAIN_DW.M_AS_T_JL20);

    /* Logic: '<S231>/OR1' incorporates:
     *  DataStoreRead: '<S231>/JL10-J12B-T-REQ'
     *  DataStoreRead: '<S231>/JL20-J12B-T-REQ'
     */
    rtb_OR1_m = (VITALMAIN_DW.M_REQ_T_10_12 || VITALMAIN_DW.M_REQ_T_20_12);

    /* DataStoreRead: '<S231>/TRUE' */
    rtb_TRUE_h = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S231>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport3' */
    rtb_TmpSignalConversionAtEM_p5l = rtb_TRUE_h;

    /* DataStoreRead: '<S231>/FALSE' */
    rtb_FALSE_ne = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S231>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport4' */
    rtb_TmpSignalConversionAtEME_fh = rtb_FALSE_ne;

    /* SignalConversion: '<S231>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport5' */
    rtb_TmpSignalConversionAtEME_gb = rtb_TRUE_h;

    /* DataStoreRead: '<S231>/12D-T-ES' */
    rtb_u2DTES = VITALMAIN_DW.M_T_ES_12D;

    /* DataStoreRead: '<S231>/J12B-RRLSPB-CTRL' */
    rtb_J12BRRLSPBCTRL = VITALMAIN_DW.M_RRLSPB_CTRL_J12B;

    /* DataStoreRead: '<S231>/RRLS' */
    rtb_RRLS_d = VITALMAIN_DW.M_RRLS_l;

    /* DataStoreRead: '<S231>/VDR-DI' */
    rtb_VDRDI_e1 = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S231>/EMERGENCY ROUTE RELEASE' */
  M_RRLS(VITALMAIN_M, rtb_AND1_au, rtb_OR1_m, rtb_TmpSignalConversionAtEM_p5l,
         rtb_TmpSignalConversionAtEME_fh, rtb_TmpSignalConversionAtEME_gb,
         rtb_FALSE_ne, rtb_u2DTES, rtb_TRUE_h, rtb_J12BRRLSPBCTRL, rtb_RRLS_d,
         rtb_VDRDI_e1, &VITALMAIN_B.EMERGENCYROUTERELEASE_bb,
         &VITALMAIN_DW.EMERGENCYROUTERELEASE_bb);

  /* End of Outputs for SubSystem: '<S231>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S231>/J12B-RRLS' */
    VITALMAIN_DW.M_RRLS_J12B = VITALMAIN_B.EMERGENCYROUTERELEASE_bb.AND1;

    /* DataStoreWrite: '<S231>/J12B-RRLS-TE' */
    VITALMAIN_DW.M_RRLSTE_J12B = VITALMAIN_B.EMERGENCYROUTERELEASE_bb.Memory1;

    /* Logic: '<S232>/AND1' incorporates:
     *  DataStoreRead: '<S232>/J14-T-AS'
     *  DataStoreRead: '<S232>/J24-T-AS'
     */
    rtb_AND1_ah = (VITALMAIN_DW.M_AS_T_J14 && VITALMAIN_DW.M_AS_T_J24);

    /* Logic: '<S232>/OR1' incorporates:
     *  DataStoreRead: '<S232>/J14-J22A-T-REQ'
     *  DataStoreRead: '<S232>/J24-J22A-T-REQ'
     */
    rtb_OR1_i = (VITALMAIN_DW.M_REQ_T_14_22 || VITALMAIN_DW.M_REQ_T_24_22);

    /* DataStoreRead: '<S232>/TRUE' */
    rtb_TRUE_j = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S232>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport3' */
    rtb_TmpSignalConversionAtE_p5ld = rtb_TRUE_j;

    /* DataStoreRead: '<S232>/FALSE' */
    rtb_FALSE_hx = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S232>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport4' */
    rtb_TmpSignalConversionAtEM_fh2 = rtb_FALSE_hx;

    /* SignalConversion: '<S232>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport5' */
    rtb_TmpSignalConversionAtEM_gb5 = rtb_TRUE_j;

    /* DataStoreRead: '<S232>/22B-T-WS' */
    rtb_u2BTWS_o = VITALMAIN_DW.M_T_WS_22B;

    /* DataStoreRead: '<S232>/J22A-RRLSPB-CTRL' */
    rtb_J22ARRLSPBCTRL = VITALMAIN_DW.M_RRLSPB_CTRL_J22A;

    /* DataStoreRead: '<S232>/RRLS' */
    rtb_RRLS_p = VITALMAIN_DW.M_RRLS_l;

    /* DataStoreRead: '<S232>/VDR-DI' */
    rtb_VDRDI_mg = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S232>/EMERGENCY ROUTE RELEASE' */
  M_RRLS(VITALMAIN_M, rtb_AND1_ah, rtb_OR1_i, rtb_TmpSignalConversionAtE_p5ld,
         rtb_TmpSignalConversionAtEM_fh2, rtb_TmpSignalConversionAtEM_gb5,
         rtb_FALSE_hx, rtb_u2BTWS_o, rtb_TRUE_j, rtb_J22ARRLSPBCTRL, rtb_RRLS_p,
         rtb_VDRDI_mg, &VITALMAIN_B.EMERGENCYROUTERELEASE_i,
         &VITALMAIN_DW.EMERGENCYROUTERELEASE_i);

  /* End of Outputs for SubSystem: '<S232>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S232>/J22A-RRLS' */
    VITALMAIN_DW.M_RRLS_J22A = VITALMAIN_B.EMERGENCYROUTERELEASE_i.AND1;

    /* DataStoreWrite: '<S232>/J22A-RRLS-TE' */
    VITALMAIN_DW.M_RRLSTE_J22A = VITALMAIN_B.EMERGENCYROUTERELEASE_i.Memory1;

    /* Logic: '<S233>/AND1' incorporates:
     *  DataStoreRead: '<S233>/JL10-T-AS'
     *  DataStoreRead: '<S233>/JL20-T-AS'
     */
    rtb_AND1_j = (VITALMAIN_DW.M_AS_T_JL10 && VITALMAIN_DW.M_AS_T_JL20);

    /* Logic: '<S233>/OR1' incorporates:
     *  DataStoreRead: '<S233>/JL10-J22B-T-REQ'
     *  DataStoreRead: '<S233>/JL20-J22B-T-REQ'
     */
    rtb_OR1_g = (VITALMAIN_DW.M_REQ_T_10_22 || VITALMAIN_DW.M_REQ_T_20_22);

    /* DataStoreRead: '<S233>/TRUE' */
    rtb_TRUE_m = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S233>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport3' */
    rtb_TmpSignalConversionAt_p5ld1 = rtb_TRUE_m;

    /* DataStoreRead: '<S233>/FALSE' */
    rtb_FALSE_bn = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S233>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport4' */
    rtb_TmpSignalConversionAtE_fh2c = rtb_FALSE_bn;

    /* SignalConversion: '<S233>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport5' */
    rtb_TmpSignalConversionAtE_gb52 = rtb_TRUE_m;

    /* DataStoreRead: '<S233>/22D-T-ES' */
    rtb_u2DTES_a = VITALMAIN_DW.M_T_ES_22D;

    /* DataStoreRead: '<S233>/J22B-RRLSPB-CTRL' */
    rtb_J22BRRLSPBCTRL = VITALMAIN_DW.M_RRLSPB_CTRL_J22B;

    /* DataStoreRead: '<S233>/RRLS' */
    rtb_RRLS_l = VITALMAIN_DW.M_RRLS_l;

    /* DataStoreRead: '<S233>/VDR-DI' */
    rtb_VDRDI_i4 = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S233>/EMERGENCY ROUTE RELEASE' */
  M_RRLS(VITALMAIN_M, rtb_AND1_j, rtb_OR1_g, rtb_TmpSignalConversionAt_p5ld1,
         rtb_TmpSignalConversionAtE_fh2c, rtb_TmpSignalConversionAtE_gb52,
         rtb_FALSE_bn, rtb_u2DTES_a, rtb_TRUE_m, rtb_J22BRRLSPBCTRL, rtb_RRLS_l,
         rtb_VDRDI_i4, &VITALMAIN_B.EMERGENCYROUTERELEASE_p,
         &VITALMAIN_DW.EMERGENCYROUTERELEASE_p);

  /* End of Outputs for SubSystem: '<S233>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S233>/J22B-RRLS' */
    VITALMAIN_DW.M_RRLS_J22B = VITALMAIN_B.EMERGENCYROUTERELEASE_p.AND1;

    /* DataStoreWrite: '<S233>/J22B-RRLS-TE' */
    VITALMAIN_DW.M_RRLSTE_J22B = VITALMAIN_B.EMERGENCYROUTERELEASE_p.Memory1;

    /* Logic: '<S234>/AND1' incorporates:
     *  DataStoreRead: '<S234>/J12A-T-AS'
     *  DataStoreRead: '<S234>/J22A-T-AS'
     */
    rtb_AND1_i = (VITALMAIN_DW.M_AS_T_J12A && VITALMAIN_DW.M_AS_T_J22A);

    /* Logic: '<S234>/OR1' incorporates:
     *  DataStoreRead: '<S234>/J12A-X10-T-REQ'
     *  DataStoreRead: '<S234>/J22A-X10-T-REQ'
     */
    rtb_OR1_g1 = (VITALMAIN_DW.M_REQ_T_12_10 || VITALMAIN_DW.M_REQ_T_22_10);

    /* DataStoreRead: '<S234>/TRUE' */
    rtb_TRUE_n = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S234>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport3' */
    rtb_TmpSignalConversionA_p5ld1y = rtb_TRUE_n;

    /* DataStoreRead: '<S234>/FALSE' */
    rtb_FALSE_d = VITALMAIN_DW.M_GV_FALSE;

    /* DataStoreRead: '<S234>/DEP-S-AS' */
    rtb_DEPSAS = VITALMAIN_DW.M_AS_S_DEP;

    /* DataStoreRead: '<S234>/DEP-X10-S-REQ' */
    rtb_DEPX10SREQ = VITALMAIN_DW.M_REQ_S_DEP_10;

    /* DataStoreRead: '<S234>/10B-T-WS' */
    rtb_u0BTWS = VITALMAIN_DW.M_T_WS_10B;

    /* DataStoreRead: '<S234>/X10-RRLSPB-CTRL' */
    rtb_X10RRLSPBCTRL = VITALMAIN_DW.M_RRLSPB_CTRL_X10;

    /* DataStoreRead: '<S234>/RRLS' */
    rtb_RRLS_i = VITALMAIN_DW.M_RRLS_l;

    /* DataStoreRead: '<S234>/VDR-DI' */
    rtb_VDRDI_c = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S234>/EMERGENCY ROUTE RELEASE' */
  M_RRLS(VITALMAIN_M, rtb_AND1_i, rtb_OR1_g1, rtb_TmpSignalConversionA_p5ld1y,
         rtb_FALSE_d, rtb_DEPSAS, rtb_DEPX10SREQ, rtb_u0BTWS, rtb_TRUE_n,
         rtb_X10RRLSPBCTRL, rtb_RRLS_i, rtb_VDRDI_c,
         &VITALMAIN_B.EMERGENCYROUTERELEASE_a,
         &VITALMAIN_DW.EMERGENCYROUTERELEASE_a);

  /* End of Outputs for SubSystem: '<S234>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S234>/X10-RRLS' */
    VITALMAIN_DW.M_RRLS_X10 = VITALMAIN_B.EMERGENCYROUTERELEASE_a.AND1;

    /* DataStoreWrite: '<S234>/X10-RRLS-TE' */
    VITALMAIN_DW.M_RRLSTE_X10 = VITALMAIN_B.EMERGENCYROUTERELEASE_a.Memory1;

    /* Logic: '<S235>/AND1' incorporates:
     *  DataStoreRead: '<S235>/J12B-T-AS'
     *  DataStoreRead: '<S235>/J22B-T-AS'
     */
    rtb_AND1_ac = (VITALMAIN_DW.M_AS_T_J12B && VITALMAIN_DW.M_AS_T_J22B);

    /* Logic: '<S235>/OR1' incorporates:
     *  DataStoreRead: '<S235>/J12-X14-T-REQ'
     *  DataStoreRead: '<S235>/J22-X14-T-REQ'
     */
    rtb_OR1_lj = (VITALMAIN_DW.M_REQ_T_12_14 || VITALMAIN_DW.M_REQ_T_22_14);

    /* DataStoreRead: '<S235>/TRUE' */
    rtb_TRUE_p = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S235>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport3' */
    rtb_TmpSignalConversion_p5ld1yk = rtb_TRUE_p;

    /* DataStoreRead: '<S235>/FALSE' */
    rtb_FALSE_k = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S235>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport4' */
    rtb_TmpSignalConversionAt_fh2cg = rtb_FALSE_k;

    /* SignalConversion: '<S235>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport5' */
    rtb_TmpSignalConversionAt_gb522 = rtb_TRUE_p;

    /* DataStoreRead: '<S235>/14A-T-ES' */
    rtb_u4ATES = VITALMAIN_DW.M_T_ES_14A;

    /* DataStoreRead: '<S235>/X14-RRLSPB-CTRL' */
    rtb_X14RRLSPBCTRL = VITALMAIN_DW.M_RRLSPB_CTRL_X14;

    /* DataStoreRead: '<S235>/RRLS' */
    rtb_RRLS_n = VITALMAIN_DW.M_RRLS_l;

    /* DataStoreRead: '<S235>/VDR-DI' */
    rtb_VDRDI_cg = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S235>/EMERGENCY ROUTE RELEASE' */
  M_RRLS(VITALMAIN_M, rtb_AND1_ac, rtb_OR1_lj, rtb_TmpSignalConversion_p5ld1yk,
         rtb_TmpSignalConversionAt_fh2cg, rtb_TmpSignalConversionAt_gb522,
         rtb_FALSE_k, rtb_u4ATES, rtb_TRUE_p, rtb_X14RRLSPBCTRL, rtb_RRLS_n,
         rtb_VDRDI_cg, &VITALMAIN_B.EMERGENCYROUTERELEASE_l,
         &VITALMAIN_DW.EMERGENCYROUTERELEASE_l);

  /* End of Outputs for SubSystem: '<S235>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S235>/X14-RRLS' */
    VITALMAIN_DW.M_RRLS_X14 = VITALMAIN_B.EMERGENCYROUTERELEASE_l.AND1;

    /* DataStoreWrite: '<S235>/X14-RRLS-TE' */
    VITALMAIN_DW.M_RRLSTE_X14 = VITALMAIN_B.EMERGENCYROUTERELEASE_l.Memory1;

    /* Logic: '<S236>/AND1' incorporates:
     *  DataStoreRead: '<S236>/J12A-T-AS'
     *  DataStoreRead: '<S236>/J22A-T-AS'
     */
    rtb_AND1_ob = (VITALMAIN_DW.M_AS_T_J12A && VITALMAIN_DW.M_AS_T_J22A);

    /* Logic: '<S236>/OR1' incorporates:
     *  DataStoreRead: '<S236>/J12A-X20-T-REQ'
     *  DataStoreRead: '<S236>/J22A-X20-T-REQ'
     */
    rtb_OR1_a = (VITALMAIN_DW.M_REQ_T_12_20 || VITALMAIN_DW.M_REQ_T_22_20);

    /* DataStoreRead: '<S236>/TRUE' */
    rtb_TRUE_g = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S236>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport3' */
    rtb_TmpSignalConversio_p5ld1ykq = rtb_TRUE_g;

    /* DataStoreRead: '<S236>/FALSE' */
    rtb_FALSE_en = VITALMAIN_DW.M_GV_FALSE;

    /* DataStoreRead: '<S236>/DEP-S-AS' */
    rtb_DEPSAS_f = VITALMAIN_DW.M_AS_S_DEP;

    /* DataStoreRead: '<S236>/DEP-X20-S-REQ' */
    rtb_DEPX20SREQ = VITALMAIN_DW.M_REQ_S_DEP_20;

    /* DataStoreRead: '<S236>/20B-T-WS' */
    rtb_u0BTWS_g = VITALMAIN_DW.M_T_WS_20B;

    /* DataStoreRead: '<S236>/X20-RRLSPB-CTRL' */
    rtb_X20RRLSPBCTRL = VITALMAIN_DW.M_RRLSPB_CTRL_X20;

    /* DataStoreRead: '<S236>/RRLS' */
    rtb_RRLS_k = VITALMAIN_DW.M_RRLS_l;

    /* DataStoreRead: '<S236>/VDR-DI' */
    rtb_VDRDI_ks = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S236>/EMERGENCY ROUTE RELEASE' */
  M_RRLS(VITALMAIN_M, rtb_AND1_ob, rtb_OR1_a, rtb_TmpSignalConversio_p5ld1ykq,
         rtb_FALSE_en, rtb_DEPSAS_f, rtb_DEPX20SREQ, rtb_u0BTWS_g, rtb_TRUE_g,
         rtb_X20RRLSPBCTRL, rtb_RRLS_k, rtb_VDRDI_ks,
         &VITALMAIN_B.EMERGENCYROUTERELEASE_m,
         &VITALMAIN_DW.EMERGENCYROUTERELEASE_m);

  /* End of Outputs for SubSystem: '<S236>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S236>/X20-RRLS' */
    VITALMAIN_DW.M_RRLS_X20 = VITALMAIN_B.EMERGENCYROUTERELEASE_m.AND1;

    /* DataStoreWrite: '<S236>/X20-RRLS-TE' */
    VITALMAIN_DW.M_RRLSTE_X20 = VITALMAIN_B.EMERGENCYROUTERELEASE_m.Memory1;

    /* Logic: '<S237>/AND1' incorporates:
     *  DataStoreRead: '<S237>/J12B-T-AS'
     *  DataStoreRead: '<S237>/J22B-T-AS'
     */
    rtb_AND1_im = (VITALMAIN_DW.M_AS_T_J12B && VITALMAIN_DW.M_AS_T_J22B);

    /* Logic: '<S237>/OR1' incorporates:
     *  DataStoreRead: '<S237>/J12-X24-T-REQ'
     *  DataStoreRead: '<S237>/J22-X24-T-REQ'
     */
    rtb_OR1_h = (VITALMAIN_DW.M_REQ_T_12_24 || VITALMAIN_DW.M_REQ_T_22_24);

    /* DataStoreRead: '<S237>/TRUE' */
    rtb_TRUE_c = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S237>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport3' */
    rtb_TmpSignalConversi_p5ld1ykqn = rtb_TRUE_c;

    /* DataStoreRead: '<S237>/FALSE' */
    rtb_FALSE_hf = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S237>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport4' */
    rtb_TmpSignalConversionA_fh2cgc = rtb_FALSE_hf;

    /* SignalConversion: '<S237>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport5' */
    rtb_TmpSignalConversionA_gb522p = rtb_TRUE_c;

    /* DataStoreRead: '<S237>/24A-T-ES' */
    rtb_u4ATES_d = VITALMAIN_DW.M_T_ES_24A;

    /* DataStoreRead: '<S237>/X24-RRLSPB-CTRL' */
    rtb_X24RRLSPBCTRL = VITALMAIN_DW.M_RRLSPB_CTRL_X24;

    /* DataStoreRead: '<S237>/RRLS' */
    rtb_RRLS_g = VITALMAIN_DW.M_RRLS_l;

    /* DataStoreRead: '<S237>/VDR-DI' */
    rtb_VDRDI_o = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S237>/EMERGENCY ROUTE RELEASE' */
  M_RRLS(VITALMAIN_M, rtb_AND1_im, rtb_OR1_h, rtb_TmpSignalConversi_p5ld1ykqn,
         rtb_TmpSignalConversionA_fh2cgc, rtb_TmpSignalConversionA_gb522p,
         rtb_FALSE_hf, rtb_u4ATES_d, rtb_TRUE_c, rtb_X24RRLSPBCTRL, rtb_RRLS_g,
         rtb_VDRDI_o, &VITALMAIN_B.EMERGENCYROUTERELEASE_o,
         &VITALMAIN_DW.EMERGENCYROUTERELEASE_o);

  /* End of Outputs for SubSystem: '<S237>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S237>/X24-RRLS' */
    VITALMAIN_DW.M_RRLS_X24 = VITALMAIN_B.EMERGENCYROUTERELEASE_o.AND1;

    /* DataStoreWrite: '<S237>/X24-RRLS-TE' */
    VITALMAIN_DW.M_RRLSTE_X24 = VITALMAIN_B.EMERGENCYROUTERELEASE_o.Memory1;

    /* DataStoreRead: '<S342>/DEP-X10-S-L' */
    rtb_DEPX10SL = VITALMAIN_DW.M_L_S_DEP_10;

    /* DataStoreRead: '<S342>/DEP-X10-RS' */
    rtb_DEPX10RS = VITALMAIN_DW.M_RS_DEP_10;

    /* Outputs for Atomic SubSystem: '<S342>/M-AS-SR' */
    M_AS_SR(rtb_DEPX10SL, rtb_DEPX10RS, &VITALMAIN_B.MASSR);

    /* End of Outputs for SubSystem: '<S342>/M-AS-SR' */

    /* DataStoreWrite: '<S342>/DEP-X10-S-AS-SR' */
    VITALMAIN_DW.M_AS_SR_S_DEP_10 = VITALMAIN_B.MASSR.AND1;

    /* DataStoreRead: '<S343>/DEP-X20-S-L' */
    rtb_DEPX20SL = VITALMAIN_DW.M_L_S_DEP_20;

    /* DataStoreRead: '<S343>/DEP-X20-RS' */
    rtb_DEPX20RS = VITALMAIN_DW.M_RS_DEP_20;

    /* Outputs for Atomic SubSystem: '<S343>/M-AS-SR' */
    M_AS_SR(rtb_DEPX20SL, rtb_DEPX20RS, &VITALMAIN_B.MASSR_g);

    /* End of Outputs for SubSystem: '<S343>/M-AS-SR' */

    /* DataStoreWrite: '<S343>/DEP-X20-S-AS-SR' */
    VITALMAIN_DW.M_AS_SR_S_DEP_20 = VITALMAIN_B.MASSR_g.AND1;

    /* DataStoreRead: '<S344>/JL10-DEP-S-L' */
    rtb_JL10DEPSL = VITALMAIN_DW.M_L_S_10_DEP;

    /* DataStoreRead: '<S344>/JL10-DEP-RS' */
    rtb_JL10DEPRS = VITALMAIN_DW.M_RS_10_DEP;

    /* Outputs for Atomic SubSystem: '<S344>/M-AS-SR' */
    M_AS_SR(rtb_JL10DEPSL, rtb_JL10DEPRS, &VITALMAIN_B.MASSR_j);

    /* End of Outputs for SubSystem: '<S344>/M-AS-SR' */

    /* DataStoreWrite: '<S344>/JL10-DEP-S-AS-SR' */
    VITALMAIN_DW.M_AS_SR_S_10_DEP = VITALMAIN_B.MASSR_j.AND1;

    /* DataStoreRead: '<S345>/JL20-DEP-S-L' */
    rtb_JL20DEPSL = VITALMAIN_DW.M_L_S_20_DEP;

    /* DataStoreRead: '<S345>/JL20-DEP-RS' */
    rtb_JL20DEPRS = VITALMAIN_DW.M_RS_20_DEP;

    /* Outputs for Atomic SubSystem: '<S345>/M-AS-SR' */
    M_AS_SR(rtb_JL20DEPSL, rtb_JL20DEPRS, &VITALMAIN_B.MASSR_e);

    /* End of Outputs for SubSystem: '<S345>/M-AS-SR' */

    /* DataStoreWrite: '<S345>/JL20-DEP-S-AS-SR' */
    VITALMAIN_DW.M_AS_SR_S_20_DEP = VITALMAIN_B.MASSR_e.AND1;

    /* DataStoreWrite: '<S350>/21C-T-WS-RL' incorporates:
     *  DataStoreRead: '<S350>/J22A-T-AS'
     *  DataStoreRead: '<S350>/J22A-X10-H'
     *  DataStoreRead: '<S350>/J22A-X20-H'
     *  Logic: '<S350>/NOT1'
     *  Logic: '<S350>/NOT2'
     *  Logic: '<S350>/OR2'
     */
    VITALMAIN_DW.M_RL_T_WS_21C = (VITALMAIN_DW.M_AS_T_J22A &&
      (!VITALMAIN_DW.M_R_H_22_10) && (!VITALMAIN_DW.M_R_H_22_20));

    /* DataStoreWrite: '<S351>/10B-S-ES-RL' incorporates:
     *  DataStoreRead: '<S351>/JL10-DEP-S'
     *  DataStoreRead: '<S351>/JL10-DEP-S-AS-SR'
     *  DataStoreRead: '<S351>/JL10-S-AS'
     *  Logic: '<S351>/AND1'
     *  Logic: '<S351>/NOT1'
     *  Logic: '<S351>/NOT2'
     */
    VITALMAIN_DW.M_RL_S_ES_10B = (VITALMAIN_DW.M_AS_S_JL10 &&
      (!VITALMAIN_DW.M_R_S_10_DEP) && (!VITALMAIN_DW.M_AS_SR_S_10_DEP));

    /* DataStoreWrite: '<S352>/10B-T-ES-RL' incorporates:
     *  DataStoreRead: '<S352>/JL10-J12B-D'
     *  DataStoreRead: '<S352>/JL10-J22B-D'
     *  DataStoreRead: '<S352>/JL10-T-AS'
     *  Logic: '<S352>/NOT1'
     *  Logic: '<S352>/NOT2'
     *  Logic: '<S352>/OR2'
     */
    VITALMAIN_DW.M_RL_T_ES_10B = (VITALMAIN_DW.M_AS_T_JL10 &&
      (!VITALMAIN_DW.M_R_D_10_12) && (!VITALMAIN_DW.M_R_D_10_22));

    /* DataStoreWrite: '<S353>/11B-T-WS-RL' incorporates:
     *  DataStoreRead: '<S353>/J12A-T-AS'
     *  DataStoreRead: '<S353>/J12A-X10-H'
     *  DataStoreRead: '<S353>/J12A-X20-H'
     *  Logic: '<S353>/NOT1'
     *  Logic: '<S353>/NOT2'
     *  Logic: '<S353>/OR2'
     */
    VITALMAIN_DW.M_RL_T_WS_11B = (VITALMAIN_DW.M_AS_T_J12A &&
      (!VITALMAIN_DW.M_R_H_12_10) && (!VITALMAIN_DW.M_R_H_12_20));

    /* DataStoreWrite: '<S354>/13A-T-ES-RL' incorporates:
     *  DataStoreRead: '<S354>/J12B-T-AS'
     *  DataStoreRead: '<S354>/J12B-X14-H'
     *  DataStoreRead: '<S354>/J12B-X24-H'
     *  Logic: '<S354>/NOT1'
     *  Logic: '<S354>/NOT2'
     *  Logic: '<S354>/OR2'
     */
    VITALMAIN_DW.M_RL_T_ES_13A = (VITALMAIN_DW.M_AS_T_J12B &&
      (!VITALMAIN_DW.M_R_H_12_14) && (!VITALMAIN_DW.M_R_H_12_24));

    /* DataStoreWrite: '<S355>/14A-T-WS-RL' incorporates:
     *  DataStoreRead: '<S355>/J14-J12A-D'
     *  DataStoreRead: '<S355>/J14-J22A-D'
     *  DataStoreRead: '<S355>/J14-T-AS'
     *  Logic: '<S355>/NOT1'
     *  Logic: '<S355>/NOT2'
     *  Logic: '<S355>/OR2'
     */
    VITALMAIN_DW.M_RL_T_WS_14A = (VITALMAIN_DW.M_AS_T_J14 &&
      (!VITALMAIN_DW.M_R_D_14_12) && (!VITALMAIN_DW.M_R_D_14_22));

    /* DataStoreWrite: '<S356>/10B-S-ES-RL' incorporates:
     *  DataStoreRead: '<S356>/JL20-DEP-S'
     *  DataStoreRead: '<S356>/JL20-DEP-S-AS-SR'
     *  DataStoreRead: '<S356>/JL20-S-AS'
     *  Logic: '<S356>/AND1'
     *  Logic: '<S356>/NOT1'
     *  Logic: '<S356>/NOT2'
     */
    VITALMAIN_DW.M_RL_S_ES_20B = (VITALMAIN_DW.M_AS_S_JL20 &&
      (!VITALMAIN_DW.M_R_S_20_DEP) && (!VITALMAIN_DW.M_AS_SR_S_20_DEP));

    /* DataStoreWrite: '<S357>/20B-T-ES-RL' incorporates:
     *  DataStoreRead: '<S357>/JL20-J12B-D'
     *  DataStoreRead: '<S357>/JL20-J22B-D'
     *  DataStoreRead: '<S357>/JL20-T-AS'
     *  Logic: '<S357>/NOT1'
     *  Logic: '<S357>/NOT2'
     *  Logic: '<S357>/OR2'
     */
    VITALMAIN_DW.M_RL_T_ES_20B = (VITALMAIN_DW.M_AS_T_JL20 &&
      (!VITALMAIN_DW.M_R_D_20_12) && (!VITALMAIN_DW.M_R_D_20_22));

    /* DataStoreWrite: '<S358>/21C-S-WS-RL' incorporates:
     *  DataStoreRead: '<S358>/DEP-S-AS'
     *  DataStoreRead: '<S358>/DEP-X10-S'
     *  DataStoreRead: '<S358>/DEP-X10-S-AS-SR'
     *  DataStoreRead: '<S358>/DEP-X20-S'
     *  DataStoreRead: '<S358>/DEP-X20-S-AS-SR'
     *  Logic: '<S358>/NOT1'
     *  Logic: '<S358>/NOT2'
     *  Logic: '<S358>/NOT3'
     *  Logic: '<S358>/NOT4'
     *  Logic: '<S358>/OR2'
     */
    VITALMAIN_DW.M_RL_S_WS_21C = (VITALMAIN_DW.M_AS_S_DEP &&
      (!VITALMAIN_DW.M_R_S_DEP_10) && (!VITALMAIN_DW.M_R_S_DEP_20) &&
      (!VITALMAIN_DW.M_AS_SR_S_DEP_10) && (!VITALMAIN_DW.M_AS_SR_S_DEP_20));

    /* DataStoreWrite: '<S359>/23A-T-ES-RL' incorporates:
     *  DataStoreRead: '<S359>/J22B-T-AS'
     *  DataStoreRead: '<S359>/J22B-X14-H'
     *  DataStoreRead: '<S359>/J22B-X24-H'
     *  Logic: '<S359>/NOT1'
     *  Logic: '<S359>/NOT2'
     *  Logic: '<S359>/OR2'
     */
    VITALMAIN_DW.M_RL_T_ES_23A = (VITALMAIN_DW.M_AS_T_J22B &&
      (!VITALMAIN_DW.M_R_H_22_14) && (!VITALMAIN_DW.M_R_H_22_24));

    /* DataStoreWrite: '<S360>/24A-T-WS-RL' incorporates:
     *  DataStoreRead: '<S360>/J24-J12A-D'
     *  DataStoreRead: '<S360>/J24-J22A-D'
     *  DataStoreRead: '<S360>/J24-T-AS'
     *  Logic: '<S360>/NOT1'
     *  Logic: '<S360>/NOT2'
     *  Logic: '<S360>/OR2'
     */
    VITALMAIN_DW.M_RL_T_WS_24A = (VITALMAIN_DW.M_AS_T_J24 &&
      (!VITALMAIN_DW.M_R_D_24_12) && (!VITALMAIN_DW.M_R_D_24_22));

    /* DataStoreRead: '<S361>/X10-RRLS-TE-FROM1' */
    rtb_X10RRLSTEFROM1 = VITALMAIN_DW.M_RRLSTE_X10;

    /* Outputs for Atomic SubSystem: '<S361>/M_RRLS5' */
    M_RRLS1(rtb_X10RRLSTEFROM1, &VITALMAIN_B.M_RRLS5);

    /* End of Outputs for SubSystem: '<S361>/M_RRLS5' */

    /* DataStoreRead: '<S361>/J12B-RRLS-TE-FROM1' */
    rtb_J12BRRLSTEFROM1 = VITALMAIN_DW.M_RRLSTE_J12B;

    /* DataStoreRead: '<S361>/W11A//21A-NWZ-FROM1' */
    rtb_W11A21ANWZFROM1 = VITALMAIN_DW.M_W11A_21A_NWZ;

    /* DataStoreRead: '<S361>/W11B//21B-NWZ-FROM1' */
    rtb_W11B21BNWZFROM1 = VITALMAIN_DW.M_W11B_21B_NWZ;

    /* Outputs for Atomic SubSystem: '<S361>/M_RRLS6' */
    M_RRLS3(rtb_J12BRRLSTEFROM1, rtb_W11A21ANWZFROM1, rtb_W11B21BNWZFROM1,
            &VITALMAIN_B.M_RRLS6);

    /* End of Outputs for SubSystem: '<S361>/M_RRLS6' */

    /* DataStoreRead: '<S361>/J22B-RRLS-TE-FROM1' */
    rtb_J22BRRLSTEFROM1 = VITALMAIN_DW.M_RRLSTE_J22B;

    /* DataStoreRead: '<S361>/W11A//21A-NWZ-FROM2' */
    rtb_W11A21ANWZFROM2 = VITALMAIN_DW.M_W11A_21A_NWZ;

    /* DataStoreRead: '<S361>/W11B//21B-RWZ-FROM1' */
    rtb_W11B21BRWZFROM1 = VITALMAIN_DW.M_W11B_21B_RWZ;

    /* DataStoreRead: '<S361>/W21C-NWZ-FROM1' */
    rtb_W21CNWZFROM1 = VITALMAIN_DW.M_W21C_NWZ;

    /* Outputs for Atomic SubSystem: '<S361>/M_RRLS7' */
    M_RRLS_4(rtb_J22BRRLSTEFROM1, rtb_W11A21ANWZFROM2, rtb_W11B21BRWZFROM1,
             rtb_W21CNWZFROM1, &VITALMAIN_B.M_RRLS7);

    /* End of Outputs for SubSystem: '<S361>/M_RRLS7' */

    /* DataStoreRead: '<S361>/DEP-RRLS-TE-FROM1' */
    rtb_DEPRRLSTEFROM1 = VITALMAIN_DW.M_RRLSTE_DEP;

    /* DataStoreRead: '<S361>/W11A//21A-NWZ-FROM3' */
    rtb_W11A21ANWZFROM3 = VITALMAIN_DW.M_W11A_21A_NWZ;

    /* DataStoreRead: '<S361>/W11B//21B-RWZ-FROM2' */
    rtb_W11B21BRWZFROM2 = VITALMAIN_DW.M_W11B_21B_RWZ;

    /* DataStoreRead: '<S361>/W21C-RWZ-FROM1' */
    rtb_W21CRWZFROM1 = VITALMAIN_DW.M_W21C_RWZ;

    /* Outputs for Atomic SubSystem: '<S361>/M_RRLS8' */
    M_RRLS_4(rtb_DEPRRLSTEFROM1, rtb_W11A21ANWZFROM3, rtb_W11B21BRWZFROM2,
             rtb_W21CRWZFROM1, &VITALMAIN_B.M_RRLS8);

    /* End of Outputs for SubSystem: '<S361>/M_RRLS8' */

    /* DataStoreWrite: '<S361>/10B-RLS' incorporates:
     *  Logic: '<S361>/OR1'
     */
    VITALMAIN_DW.M_RLS_10B = (VITALMAIN_B.M_RRLS5.RRLSTE ||
      VITALMAIN_B.M_RRLS6.AND1 || VITALMAIN_B.M_RRLS7.AND1 ||
      VITALMAIN_B.M_RRLS8.AND1);

    /* DataStoreRead: '<S362>/X10-RRLS-TE-FROM1' */
    rtb_X10RRLSTEFROM1_n = VITALMAIN_DW.M_RRLSTE_X10;

    /* DataStoreRead: '<S362>/W11A//21A-NWZ-FROM1' */
    rtb_W11A21ANWZFROM1_b = VITALMAIN_DW.M_W11A_21A_NWZ;

    /* Outputs for Atomic SubSystem: '<S362>/M_RRLS5' */
    M_RRLS2(rtb_X10RRLSTEFROM1_n, rtb_W11A21ANWZFROM1_b, &VITALMAIN_B.M_RRLS5_p);

    /* End of Outputs for SubSystem: '<S362>/M_RRLS5' */

    /* DataStoreRead: '<S362>/X20-RRLS-TE-FROM1' */
    rtb_X20RRLSTEFROM1 = VITALMAIN_DW.M_RRLSTE_X20;

    /* DataStoreRead: '<S362>/W11A//21A-RWZ-FROM1' */
    rtb_W11A21ARWZFROM1 = VITALMAIN_DW.M_W11A_21A_RWZ;

    /* Outputs for Atomic SubSystem: '<S362>/M_RRLS7' */
    M_RRLS2(rtb_X20RRLSTEFROM1, rtb_W11A21ARWZFROM1, &VITALMAIN_B.M_RRLS7_d);

    /* End of Outputs for SubSystem: '<S362>/M_RRLS7' */

    /* DataStoreRead: '<S362>/J12B-RRLS-TE-FROM1' */
    rtb_J12BRRLSTEFROM1_j = VITALMAIN_DW.M_RRLSTE_J12B;

    /* DataStoreRead: '<S362>/W11B//21B-NWZ-FROM1' */
    rtb_W11B21BNWZFROM1_b = VITALMAIN_DW.M_W11B_21B_NWZ;

    /* Outputs for Atomic SubSystem: '<S362>/M_RRLS8' */
    M_RRLS2(rtb_J12BRRLSTEFROM1_j, rtb_W11B21BNWZFROM1_b, &VITALMAIN_B.M_RRLS8_f);

    /* End of Outputs for SubSystem: '<S362>/M_RRLS8' */

    /* DataStoreRead: '<S362>/J22B-RRLS-TE-FROM1' */
    rtb_J22BRRLSTEFROM1_k = VITALMAIN_DW.M_RRLSTE_J22B;

    /* DataStoreRead: '<S362>/W11B//21B-RWZ-FROM1' */
    rtb_W11B21BRWZFROM1_j = VITALMAIN_DW.M_W11B_21B_RWZ;

    /* DataStoreRead: '<S362>/W21C-NWZ-FROM1' */
    rtb_W21CNWZFROM1_g = VITALMAIN_DW.M_W21C_NWZ;

    /* Outputs for Atomic SubSystem: '<S362>/M_RRLS6' */
    M_RRLS3(rtb_J22BRRLSTEFROM1_k, rtb_W11B21BRWZFROM1_j, rtb_W21CNWZFROM1_g,
            &VITALMAIN_B.M_RRLS6_o);

    /* End of Outputs for SubSystem: '<S362>/M_RRLS6' */

    /* DataStoreRead: '<S362>/DEP-RRLS-TE-FROM1' */
    rtb_DEPRRLSTEFROM1_j = VITALMAIN_DW.M_RRLSTE_DEP;

    /* DataStoreRead: '<S362>/W11B//21B-RWZ-FROM2' */
    rtb_W11B21BRWZFROM2_a = VITALMAIN_DW.M_W11B_21B_RWZ;

    /* DataStoreRead: '<S362>/W21C-RWZ-FROM1' */
    rtb_W21CRWZFROM1_l = VITALMAIN_DW.M_W21C_RWZ;

    /* Outputs for Atomic SubSystem: '<S362>/M_RRLS9' */
    M_RRLS3(rtb_DEPRRLSTEFROM1_j, rtb_W11B21BRWZFROM2_a, rtb_W21CRWZFROM1_l,
            &VITALMAIN_B.M_RRLS9);

    /* End of Outputs for SubSystem: '<S362>/M_RRLS9' */

    /* DataStoreWrite: '<S362>/11A-RLS' incorporates:
     *  Logic: '<S362>/OR1'
     */
    VITALMAIN_DW.M_RLS_11A = (VITALMAIN_B.M_RRLS5_p.AND1 ||
      VITALMAIN_B.M_RRLS7_d.AND1 || VITALMAIN_B.M_RRLS8_f.AND1 ||
      VITALMAIN_B.M_RRLS6_o.AND1 || VITALMAIN_B.M_RRLS9.AND1);

    /* DataStoreRead: '<S363>/X10-RRLS-TE-FROM1' */
    rtb_X10RRLSTEFROM1_o = VITALMAIN_DW.M_RRLSTE_X10;

    /* DataStoreRead: '<S363>/W11A//21A-NWZ-FROM1' */
    rtb_W11A21ANWZFROM1_f = VITALMAIN_DW.M_W11A_21A_NWZ;

    /* Outputs for Atomic SubSystem: '<S363>/M_RRLS5' */
    M_RRLS2(rtb_X10RRLSTEFROM1_o, rtb_W11A21ANWZFROM1_f, &VITALMAIN_B.M_RRLS5_a);

    /* End of Outputs for SubSystem: '<S363>/M_RRLS5' */

    /* DataStoreRead: '<S363>/X20-RRLS-TE-FROM1' */
    rtb_X20RRLSTEFROM1_h = VITALMAIN_DW.M_RRLSTE_X20;

    /* DataStoreRead: '<S363>/W11A//21A-RWZ-FROM1' */
    rtb_W11A21ARWZFROM1_e = VITALMAIN_DW.M_W11A_21A_RWZ;

    /* Outputs for Atomic SubSystem: '<S363>/M_RRLS7' */
    M_RRLS2(rtb_X20RRLSTEFROM1_h, rtb_W11A21ARWZFROM1_e, &VITALMAIN_B.M_RRLS7_e);

    /* End of Outputs for SubSystem: '<S363>/M_RRLS7' */

    /* DataStoreRead: '<S363>/J12B-RRLS-TE-FROM1' */
    rtb_J12BRRLSTEFROM1_g = VITALMAIN_DW.M_RRLSTE_J12B;

    /* DataStoreRead: '<S363>/W11B//21B-NWZ-FROM1' */
    rtb_W11B21BNWZFROM1_c = VITALMAIN_DW.M_W11B_21B_NWZ;

    /* Outputs for Atomic SubSystem: '<S363>/M_RRLS8' */
    M_RRLS2(rtb_J12BRRLSTEFROM1_g, rtb_W11B21BNWZFROM1_c, &VITALMAIN_B.M_RRLS8_a);

    /* End of Outputs for SubSystem: '<S363>/M_RRLS8' */

    /* DataStoreRead: '<S363>/J22B-RRLS-TE-FROM1' */
    rtb_J22BRRLSTEFROM1_c = VITALMAIN_DW.M_RRLSTE_J22B;

    /* DataStoreRead: '<S363>/W11B//21B-RWZ-FROM1' */
    rtb_W11B21BRWZFROM1_i = VITALMAIN_DW.M_W11B_21B_RWZ;

    /* DataStoreRead: '<S363>/W21C-NWZ-FROM1' */
    rtb_W21CNWZFROM1_l = VITALMAIN_DW.M_W21C_NWZ;

    /* Outputs for Atomic SubSystem: '<S363>/M_RRLS6' */
    M_RRLS3(rtb_J22BRRLSTEFROM1_c, rtb_W11B21BRWZFROM1_i, rtb_W21CNWZFROM1_l,
            &VITALMAIN_B.M_RRLS6_b);

    /* End of Outputs for SubSystem: '<S363>/M_RRLS6' */

    /* DataStoreRead: '<S363>/DEP-RRLS-TE-FROM1' */
    rtb_DEPRRLSTEFROM1_g = VITALMAIN_DW.M_RRLSTE_DEP;

    /* DataStoreRead: '<S363>/W11B//21B-RWZ-FROM2' */
    rtb_W11B21BRWZFROM2_g = VITALMAIN_DW.M_W11B_21B_RWZ;

    /* DataStoreRead: '<S363>/W21C-RWZ-FROM1' */
    rtb_W21CRWZFROM1_n = VITALMAIN_DW.M_W21C_RWZ;

    /* Outputs for Atomic SubSystem: '<S363>/M_RRLS9' */
    M_RRLS3(rtb_DEPRRLSTEFROM1_g, rtb_W11B21BRWZFROM2_g, rtb_W21CRWZFROM1_n,
            &VITALMAIN_B.M_RRLS9_o);

    /* End of Outputs for SubSystem: '<S363>/M_RRLS9' */

    /* DataStoreWrite: '<S363>/11B-RLS' incorporates:
     *  Logic: '<S363>/OR1'
     */
    VITALMAIN_DW.M_RLS_11B = (VITALMAIN_B.M_RRLS5_a.AND1 ||
      VITALMAIN_B.M_RRLS7_e.AND1 || VITALMAIN_B.M_RRLS8_a.AND1 ||
      VITALMAIN_B.M_RRLS6_b.AND1 || VITALMAIN_B.M_RRLS9_o.AND1);

    /* DataStoreRead: '<S364>/J12B-RRLS-TE-FROM1' */
    rtb_J12BRRLSTEFROM1_l = VITALMAIN_DW.M_RRLSTE_J12B;

    /* Outputs for Atomic SubSystem: '<S364>/M_RRLS5' */
    M_RRLS1(rtb_J12BRRLSTEFROM1_l, &VITALMAIN_B.M_RRLS5_m);

    /* End of Outputs for SubSystem: '<S364>/M_RRLS5' */

    /* DataStoreWrite: '<S364>/12A-RLS' */
    VITALMAIN_DW.M_RLS_12A = VITALMAIN_B.M_RRLS5_m.RRLSTE;

    /* DataStoreRead: '<S365>/J12A-RRLS-TE-FROM1' */
    rtb_J12ARRLSTEFROM1 = VITALMAIN_DW.M_RRLSTE_J12A;

    /* Outputs for Atomic SubSystem: '<S365>/M_RRLS5' */
    M_RRLS1(rtb_J12ARRLSTEFROM1, &VITALMAIN_B.M_RRLS5_f);

    /* End of Outputs for SubSystem: '<S365>/M_RRLS5' */

    /* DataStoreRead: '<S365>/J12B-RRLS-TE-FROM1' */
    rtb_J12BRRLSTEFROM1_e = VITALMAIN_DW.M_RRLSTE_J12B;

    /* Outputs for Atomic SubSystem: '<S365>/M_RRLS1' */
    M_RRLS1(rtb_J12BRRLSTEFROM1_e, &VITALMAIN_B.M_RRLS1_p);

    /* End of Outputs for SubSystem: '<S365>/M_RRLS1' */

    /* Logic: '<S365>/OR1' */
    rtb_TmpSignalConversionAtM_TP1O = (VITALMAIN_B.M_RRLS5_f.RRLSTE ||
      VITALMAIN_B.M_RRLS1_p.RRLSTE);

    /* DataStoreWrite: '<S365>/12B-RLS' */
    VITALMAIN_DW.M_RLS_12B = rtb_TmpSignalConversionAtM_TP1O;

    /* DataStoreWrite: '<S365>/12C-RLS' */
    VITALMAIN_DW.M_RLS_12C = rtb_TmpSignalConversionAtM_TP1O;

    /* DataStoreWrite: '<S365>/12D-RLS' */
    VITALMAIN_DW.M_RLS_12D = rtb_TmpSignalConversionAtM_TP1O;

    /* DataStoreRead: '<S366>/J12A-RRLS-TE-FROM1' */
    rtb_J12ARRLSTEFROM1_j = VITALMAIN_DW.M_RRLSTE_J12A;

    /* Outputs for Atomic SubSystem: '<S366>/M_RRLS5' */
    M_RRLS1(rtb_J12ARRLSTEFROM1_j, &VITALMAIN_B.M_RRLS5_l);

    /* End of Outputs for SubSystem: '<S366>/M_RRLS5' */

    /* DataStoreWrite: '<S366>/12E-RLS' */
    VITALMAIN_DW.M_RLS_12E = VITALMAIN_B.M_RRLS5_l.RRLSTE;

    /* DataStoreRead: '<S367>/J12A-RRLS-TE-FROM1' */
    rtb_J12ARRLSTEFROM1_e = VITALMAIN_DW.M_RRLSTE_J12A;

    /* Outputs for Atomic SubSystem: '<S367>/M_RRLS5' */
    M_RRLS1(rtb_J12ARRLSTEFROM1_e, &VITALMAIN_B.M_RRLS5_g);

    /* End of Outputs for SubSystem: '<S367>/M_RRLS5' */

    /* DataStoreRead: '<S367>/X14-RRLS-TE-FROM1' */
    rtb_X14RRLSTEFROM1 = VITALMAIN_DW.M_RRLSTE_X14;

    /* DataStoreRead: '<S367>/W13A//23A-NWZ-FROM1' */
    rtb_W13A23ANWZFROM1 = VITALMAIN_DW.M_W13A_23A_NWZ;

    /* DataStoreRead: '<S367>/W13B//23B-NWZ-FROM1' */
    rtb_W13B23BNWZFROM1 = VITALMAIN_DW.M_W13B_23B_NWZ;

    /* Outputs for Atomic SubSystem: '<S367>/M_RRLS6' */
    M_RRLS3(rtb_X14RRLSTEFROM1, rtb_W13A23ANWZFROM1, rtb_W13B23BNWZFROM1,
            &VITALMAIN_B.M_RRLS6_e);

    /* End of Outputs for SubSystem: '<S367>/M_RRLS6' */

    /* DataStoreRead: '<S367>/X24-RRLS-TE-FROM1' */
    rtb_X24RRLSTEFROM1 = VITALMAIN_DW.M_RRLSTE_X24;

    /* DataStoreRead: '<S367>/W13A//23A-RWZ-FROM1' */
    rtb_W13A23ARWZFROM1 = VITALMAIN_DW.M_W13A_23A_RWZ;

    /* DataStoreRead: '<S367>/W13B//23B-NWZ-FROM2' */
    rtb_W13B23BNWZFROM2 = VITALMAIN_DW.M_W13B_23B_NWZ;

    /* Outputs for Atomic SubSystem: '<S367>/M_RRLS1' */
    M_RRLS3(rtb_X24RRLSTEFROM1, rtb_W13A23ARWZFROM1, rtb_W13B23BNWZFROM2,
            &VITALMAIN_B.M_RRLS1_a);

    /* End of Outputs for SubSystem: '<S367>/M_RRLS1' */

    /* DataStoreWrite: '<S367>/13A-RLS' incorporates:
     *  Logic: '<S367>/OR1'
     */
    VITALMAIN_DW.M_RLS_13A = (VITALMAIN_B.M_RRLS5_g.RRLSTE ||
      VITALMAIN_B.M_RRLS6_e.AND1 || VITALMAIN_B.M_RRLS1_a.AND1);

    /* DataStoreRead: '<S368>/X14-RRLS-TE-FROM1' */
    rtb_X14RRLSTEFROM1_d = VITALMAIN_DW.M_RRLSTE_X14;

    /* Outputs for Atomic SubSystem: '<S368>/M_RRLS5' */
    M_RRLS1(rtb_X14RRLSTEFROM1_d, &VITALMAIN_B.M_RRLS5_n);

    /* End of Outputs for SubSystem: '<S368>/M_RRLS5' */

    /* DataStoreRead: '<S368>/J12A-RRLS-TE-FROM1' */
    rtb_J12ARRLSTEFROM1_d = VITALMAIN_DW.M_RRLSTE_J12A;

    /* DataStoreRead: '<S368>/W13B//23B-NWZ-FROM1' */
    rtb_W13B23BNWZFROM1_d = VITALMAIN_DW.M_W13B_23B_NWZ;

    /* DataStoreRead: '<S368>/W13A//23A-NWZ-FROM1' */
    rtb_W13A23ANWZFROM1_m = VITALMAIN_DW.M_W13A_23A_NWZ;

    /* Outputs for Atomic SubSystem: '<S368>/M_RRLS6' */
    M_RRLS3(rtb_J12ARRLSTEFROM1_d, rtb_W13B23BNWZFROM1_d, rtb_W13A23ANWZFROM1_m,
            &VITALMAIN_B.M_RRLS6_m);

    /* End of Outputs for SubSystem: '<S368>/M_RRLS6' */

    /* DataStoreRead: '<S368>/J22A-RRLS-TE-FROM1' */
    rtb_J22ARRLSTEFROM1 = VITALMAIN_DW.M_RRLSTE_J22A;

    /* DataStoreRead: '<S368>/W13B//23B-RWZ-FROM1' */
    rtb_W13B23BRWZFROM1 = VITALMAIN_DW.M_W13B_23B_RWZ;

    /* DataStoreRead: '<S368>/W13A//23A-NWZ-FROM2' */
    rtb_W13A23ANWZFROM2 = VITALMAIN_DW.M_W13A_23A_NWZ;

    /* Outputs for Atomic SubSystem: '<S368>/M_RRLS1' */
    M_RRLS3(rtb_J22ARRLSTEFROM1, rtb_W13B23BRWZFROM1, rtb_W13A23ANWZFROM2,
            &VITALMAIN_B.M_RRLS1_d);

    /* End of Outputs for SubSystem: '<S368>/M_RRLS1' */

    /* DataStoreWrite: '<S368>/13B-RLS' incorporates:
     *  Logic: '<S368>/OR1'
     */
    VITALMAIN_DW.M_RLS_13B = (VITALMAIN_B.M_RRLS5_n.RRLSTE ||
      VITALMAIN_B.M_RRLS6_m.AND1 || VITALMAIN_B.M_RRLS1_d.AND1);

    /* DataStoreRead: '<S369>/X14-RRLS-TE-FROM1' */
    rtb_X14RRLSTEFROM1_e = VITALMAIN_DW.M_RRLSTE_X14;

    /* Outputs for Atomic SubSystem: '<S369>/M_RRLS5' */
    M_RRLS1(rtb_X14RRLSTEFROM1_e, &VITALMAIN_B.M_RRLS5_k);

    /* End of Outputs for SubSystem: '<S369>/M_RRLS5' */

    /* DataStoreRead: '<S369>/J12A-RRLS-TE-FROM1' */
    rtb_J12ARRLSTEFROM1_dy = VITALMAIN_DW.M_RRLSTE_J12A;

    /* DataStoreRead: '<S369>/W13B//23B-NWZ-FROM1' */
    rtb_W13B23BNWZFROM1_k = VITALMAIN_DW.M_W13B_23B_NWZ;

    /* DataStoreRead: '<S369>/W13A//23A-NWZ-FROM1' */
    rtb_W13A23ANWZFROM1_h = VITALMAIN_DW.M_W13A_23A_NWZ;

    /* Outputs for Atomic SubSystem: '<S369>/M_RRLS6' */
    M_RRLS3(rtb_J12ARRLSTEFROM1_dy, rtb_W13B23BNWZFROM1_k, rtb_W13A23ANWZFROM1_h,
            &VITALMAIN_B.M_RRLS6_f);

    /* End of Outputs for SubSystem: '<S369>/M_RRLS6' */

    /* DataStoreRead: '<S369>/J22A-RRLS-TE-FROM1' */
    rtb_J22ARRLSTEFROM1_e = VITALMAIN_DW.M_RRLSTE_J22A;

    /* DataStoreRead: '<S369>/W13B//23B-RWZ-FROM1' */
    rtb_W13B23BRWZFROM1_l = VITALMAIN_DW.M_W13B_23B_RWZ;

    /* DataStoreRead: '<S369>/W13A//23A-NWZ-FROM2' */
    rtb_W13A23ANWZFROM2_i = VITALMAIN_DW.M_W13A_23A_NWZ;

    /* Outputs for Atomic SubSystem: '<S369>/M_RRLS1' */
    M_RRLS3(rtb_J22ARRLSTEFROM1_e, rtb_W13B23BRWZFROM1_l, rtb_W13A23ANWZFROM2_i,
            &VITALMAIN_B.M_RRLS1_e);

    /* End of Outputs for SubSystem: '<S369>/M_RRLS1' */

    /* DataStoreWrite: '<S369>/14A-RLS' incorporates:
     *  Logic: '<S369>/OR1'
     */
    VITALMAIN_DW.M_RLS_14A = (VITALMAIN_B.M_RRLS5_k.RRLSTE ||
      VITALMAIN_B.M_RRLS6_f.AND1 || VITALMAIN_B.M_RRLS1_e.AND1);

    /* DataStoreRead: '<S370>/X20-RRLS-TE-FROM1' */
    rtb_X20RRLSTEFROM1_k = VITALMAIN_DW.M_RRLSTE_X20;

    /* Outputs for Atomic SubSystem: '<S370>/M_RRLS5' */
    M_RRLS1(rtb_X20RRLSTEFROM1_k, &VITALMAIN_B.M_RRLS5_b);

    /* End of Outputs for SubSystem: '<S370>/M_RRLS5' */

    /* DataStoreRead: '<S370>/J12B-RRLS-TE-FROM1' */
    rtb_J12BRRLSTEFROM1_h = VITALMAIN_DW.M_RRLSTE_J12B;

    /* DataStoreRead: '<S370>/W11A//21A-RWZ-FROM1' */
    rtb_W11A21ARWZFROM1_h = VITALMAIN_DW.M_W11A_21A_RWZ;

    /* DataStoreRead: '<S370>/W11B//21B-NWZ-FROM1' */
    rtb_W11B21BNWZFROM1_f = VITALMAIN_DW.M_W11B_21B_NWZ;

    /* Outputs for Atomic SubSystem: '<S370>/M_RRLS6' */
    M_RRLS3(rtb_J12BRRLSTEFROM1_h, rtb_W11A21ARWZFROM1_h, rtb_W11B21BNWZFROM1_f,
            &VITALMAIN_B.M_RRLS6_mf);

    /* End of Outputs for SubSystem: '<S370>/M_RRLS6' */

    /* DataStoreRead: '<S370>/J22B-RRLS-TE-FROM1' */
    rtb_J22BRRLSTEFROM1_g = VITALMAIN_DW.M_RRLSTE_J22B;

    /* DataStoreRead: '<S370>/W11A//21A-NWZ-FROM1' */
    rtb_W11A21ANWZFROM1_h = VITALMAIN_DW.M_W11A_21A_NWZ;

    /* DataStoreRead: '<S370>/W11B//21B-NWZ-FROM2' */
    rtb_W11B21BNWZFROM2 = VITALMAIN_DW.M_W11B_21B_NWZ;

    /* DataStoreRead: '<S370>/W21C-NWZ-FROM1' */
    rtb_W21CNWZFROM1_p = VITALMAIN_DW.M_W21C_NWZ;

    /* Outputs for Atomic SubSystem: '<S370>/M_RRLS7' */
    M_RRLS_4(rtb_J22BRRLSTEFROM1_g, rtb_W11A21ANWZFROM1_h, rtb_W11B21BNWZFROM2,
             rtb_W21CNWZFROM1_p, &VITALMAIN_B.M_RRLS7_k);

    /* End of Outputs for SubSystem: '<S370>/M_RRLS7' */

    /* DataStoreRead: '<S370>/DEP-RRLS-TE-FROM1' */
    rtb_DEPRRLSTEFROM1_e = VITALMAIN_DW.M_RRLSTE_DEP;

    /* DataStoreRead: '<S370>/W11A//21A-NWZ-FROM2' */
    rtb_W11A21ANWZFROM2_m = VITALMAIN_DW.M_W11A_21A_NWZ;

    /* DataStoreRead: '<S370>/W11B//21B-NWZ-FROM3' */
    rtb_W11B21BNWZFROM3 = VITALMAIN_DW.M_W11B_21B_NWZ;

    /* DataStoreRead: '<S370>/W21C-RWZ-FROM1' */
    rtb_W21CRWZFROM1_b = VITALMAIN_DW.M_W21C_RWZ;

    /* Outputs for Atomic SubSystem: '<S370>/M_RRLS8' */
    M_RRLS_4(rtb_DEPRRLSTEFROM1_e, rtb_W11A21ANWZFROM2_m, rtb_W11B21BNWZFROM3,
             rtb_W21CRWZFROM1_b, &VITALMAIN_B.M_RRLS8_i);

    /* End of Outputs for SubSystem: '<S370>/M_RRLS8' */

    /* DataStoreWrite: '<S370>/20B-RLS' incorporates:
     *  Logic: '<S370>/OR1'
     */
    VITALMAIN_DW.M_RLS_20B = (VITALMAIN_B.M_RRLS5_b.RRLSTE ||
      VITALMAIN_B.M_RRLS6_mf.AND1 || VITALMAIN_B.M_RRLS7_k.AND1 ||
      VITALMAIN_B.M_RRLS8_i.AND1);

    /* DataStoreRead: '<S371>/X20-RRLS-TE-FROM1' */
    rtb_X20RRLSTEFROM1_d = VITALMAIN_DW.M_RRLSTE_X20;

    /* Outputs for Atomic SubSystem: '<S371>/M_RRLS5' */
    M_RRLS1(rtb_X20RRLSTEFROM1_d, &VITALMAIN_B.M_RRLS5_h);

    /* End of Outputs for SubSystem: '<S371>/M_RRLS5' */

    /* DataStoreRead: '<S371>/J12B-RRLS-TE-FROM1' */
    rtb_J12BRRLSTEFROM1_ec = VITALMAIN_DW.M_RRLSTE_J12B;

    /* DataStoreRead: '<S371>/W11A//21A-RWZ-FROM1' */
    rtb_W11A21ARWZFROM1_a = VITALMAIN_DW.M_W11A_21A_RWZ;

    /* DataStoreRead: '<S371>/W11B//21B-NWZ-FROM1' */
    rtb_W11B21BNWZFROM1_g = VITALMAIN_DW.M_W11B_21B_NWZ;

    /* Outputs for Atomic SubSystem: '<S371>/M_RRLS6' */
    M_RRLS3(rtb_J12BRRLSTEFROM1_ec, rtb_W11A21ARWZFROM1_a, rtb_W11B21BNWZFROM1_g,
            &VITALMAIN_B.M_RRLS6_oq);

    /* End of Outputs for SubSystem: '<S371>/M_RRLS6' */

    /* DataStoreRead: '<S371>/J22B-RRLS-TE-FROM1' */
    rtb_J22BRRLSTEFROM1_h = VITALMAIN_DW.M_RRLSTE_J22B;

    /* DataStoreRead: '<S371>/W11A//21A-NWZ-FROM1' */
    rtb_W11A21ANWZFROM1_hu = VITALMAIN_DW.M_W11A_21A_NWZ;

    /* DataStoreRead: '<S371>/W11B//21B-NWZ-FROM2' */
    rtb_W11B21BNWZFROM2_g = VITALMAIN_DW.M_W11B_21B_NWZ;

    /* DataStoreRead: '<S371>/W21C-NWZ-FROM1' */
    rtb_W21CNWZFROM1_n = VITALMAIN_DW.M_W21C_NWZ;

    /* Outputs for Atomic SubSystem: '<S371>/M_RRLS7' */
    M_RRLS_4(rtb_J22BRRLSTEFROM1_h, rtb_W11A21ANWZFROM1_hu,
             rtb_W11B21BNWZFROM2_g, rtb_W21CNWZFROM1_n, &VITALMAIN_B.M_RRLS7_d2);

    /* End of Outputs for SubSystem: '<S371>/M_RRLS7' */

    /* DataStoreRead: '<S371>/DEP-RRLS-TE-FROM1' */
    rtb_DEPRRLSTEFROM1_f = VITALMAIN_DW.M_RRLSTE_DEP;

    /* DataStoreRead: '<S371>/W11A//21A-NWZ-FROM2' */
    rtb_W11A21ANWZFROM2_e = VITALMAIN_DW.M_W11A_21A_NWZ;

    /* DataStoreRead: '<S371>/W11B//21B-NWZ-FROM3' */
    rtb_W11B21BNWZFROM3_c = VITALMAIN_DW.M_W11B_21B_NWZ;

    /* DataStoreRead: '<S371>/W21C-RWZ-FROM1' */
    rtb_W21CRWZFROM1_g = VITALMAIN_DW.M_W21C_RWZ;

    /* Outputs for Atomic SubSystem: '<S371>/M_RRLS8' */
    M_RRLS_4(rtb_DEPRRLSTEFROM1_f, rtb_W11A21ANWZFROM2_e, rtb_W11B21BNWZFROM3_c,
             rtb_W21CRWZFROM1_g, &VITALMAIN_B.M_RRLS8_g);

    /* End of Outputs for SubSystem: '<S371>/M_RRLS8' */

    /* DataStoreWrite: '<S371>/21A-RLS' incorporates:
     *  Logic: '<S371>/OR1'
     */
    VITALMAIN_DW.M_RLS_21A = (VITALMAIN_B.M_RRLS5_h.RRLSTE ||
      VITALMAIN_B.M_RRLS6_oq.AND1 || VITALMAIN_B.M_RRLS7_d2.AND1 ||
      VITALMAIN_B.M_RRLS8_g.AND1);

    /* DataStoreRead: '<S372>/DEP-RRLS-TE-FROM1' */
    rtb_DEPRRLSTEFROM1_fe = VITALMAIN_DW.M_RRLSTE_DEP;

    /* DataStoreRead: '<S372>/W21C-RWZ-FROM1' */
    rtb_W21CRWZFROM1_bf = VITALMAIN_DW.M_W21C_RWZ;

    /* Outputs for Atomic SubSystem: '<S372>/M_RRLS5' */
    M_RRLS2(rtb_DEPRRLSTEFROM1_fe, rtb_W21CRWZFROM1_bf, &VITALMAIN_B.M_RRLS5_i);

    /* End of Outputs for SubSystem: '<S372>/M_RRLS5' */

    /* DataStoreRead: '<S372>/J22B-RRLS-TE-FROM1' */
    rtb_J22BRRLSTEFROM1_d = VITALMAIN_DW.M_RRLSTE_J22B;

    /* DataStoreRead: '<S372>/W21C-NWZ-FROM1' */
    rtb_W21CNWZFROM1_e = VITALMAIN_DW.M_W21C_NWZ;

    /* Outputs for Atomic SubSystem: '<S372>/M_RRLS7' */
    M_RRLS2(rtb_J22BRRLSTEFROM1_d, rtb_W21CNWZFROM1_e, &VITALMAIN_B.M_RRLS7_g);

    /* End of Outputs for SubSystem: '<S372>/M_RRLS7' */

    /* DataStoreRead: '<S372>/X10-RRLS-TE-FROM1' */
    rtb_X10RRLSTEFROM1_e = VITALMAIN_DW.M_RRLSTE_X10;

    /* DataStoreRead: '<S372>/W11B//21B-RWZ-FROM1' */
    rtb_W11B21BRWZFROM1_o = VITALMAIN_DW.M_W11B_21B_RWZ;

    /* DataStoreRead: '<S372>/W11A//21A-NWZ-FROM1' */
    rtb_W11A21ANWZFROM1_e = VITALMAIN_DW.M_W11A_21A_NWZ;

    /* Outputs for Atomic SubSystem: '<S372>/M_RRLS6' */
    M_RRLS3(rtb_X10RRLSTEFROM1_e, rtb_W11B21BRWZFROM1_o, rtb_W11A21ANWZFROM1_e,
            &VITALMAIN_B.M_RRLS6_d);

    /* End of Outputs for SubSystem: '<S372>/M_RRLS6' */

    /* DataStoreRead: '<S372>/X20-RRLS-TE-FROM1' */
    rtb_X20RRLSTEFROM1_b = VITALMAIN_DW.M_RRLSTE_X20;

    /* DataStoreRead: '<S372>/W11B//21B-NWZ-FROM1' */
    rtb_W11B21BNWZFROM1_j = VITALMAIN_DW.M_W11B_21B_NWZ;

    /* DataStoreRead: '<S372>/W11A//21A-NWZ-FROM2' */
    rtb_W11A21ANWZFROM2_p = VITALMAIN_DW.M_W11A_21A_NWZ;

    /* Outputs for Atomic SubSystem: '<S372>/M_RRLS9' */
    M_RRLS3(rtb_X20RRLSTEFROM1_b, rtb_W11B21BNWZFROM1_j, rtb_W11A21ANWZFROM2_p,
            &VITALMAIN_B.M_RRLS9_d);

    /* End of Outputs for SubSystem: '<S372>/M_RRLS9' */

    /* DataStoreWrite: '<S372>/21B-RLS' incorporates:
     *  Logic: '<S372>/OR1'
     */
    VITALMAIN_DW.M_RLS_21B = (VITALMAIN_B.M_RRLS5_i.AND1 ||
      VITALMAIN_B.M_RRLS7_g.AND1 || VITALMAIN_B.M_RRLS6_d.AND1 ||
      VITALMAIN_B.M_RRLS9_d.AND1);

    /* DataStoreRead: '<S373>/DEP-RRLS-TE-FROM1' */
    rtb_DEPRRLSTEFROM1_k = VITALMAIN_DW.M_RRLSTE_DEP;

    /* DataStoreRead: '<S373>/W21C-RWZ-FROM1' */
    rtb_W21CRWZFROM1_j = VITALMAIN_DW.M_W21C_RWZ;

    /* Outputs for Atomic SubSystem: '<S373>/M_RRLS5' */
    M_RRLS2(rtb_DEPRRLSTEFROM1_k, rtb_W21CRWZFROM1_j, &VITALMAIN_B.M_RRLS5_d);

    /* End of Outputs for SubSystem: '<S373>/M_RRLS5' */

    /* DataStoreRead: '<S373>/J22B-RRLS-TE-FROM1' */
    rtb_J22BRRLSTEFROM1_l = VITALMAIN_DW.M_RRLSTE_J22B;

    /* DataStoreRead: '<S373>/W21C-NWZ-FROM1' */
    rtb_W21CNWZFROM1_b = VITALMAIN_DW.M_W21C_NWZ;

    /* Outputs for Atomic SubSystem: '<S373>/M_RRLS7' */
    M_RRLS2(rtb_J22BRRLSTEFROM1_l, rtb_W21CNWZFROM1_b, &VITALMAIN_B.M_RRLS7_f);

    /* End of Outputs for SubSystem: '<S373>/M_RRLS7' */

    /* DataStoreRead: '<S373>/X10-RRLS-TE-FROM1' */
    rtb_X10RRLSTEFROM1_m = VITALMAIN_DW.M_RRLSTE_X10;

    /* DataStoreRead: '<S373>/W11B//21B-RWZ-FROM1' */
    rtb_W11B21BRWZFROM1_if = VITALMAIN_DW.M_W11B_21B_RWZ;

    /* DataStoreRead: '<S373>/W11A//21A-NWZ-FROM1' */
    rtb_W11A21ANWZFROM1_k = VITALMAIN_DW.M_W11A_21A_NWZ;

    /* Outputs for Atomic SubSystem: '<S373>/M_RRLS6' */
    M_RRLS3(rtb_X10RRLSTEFROM1_m, rtb_W11B21BRWZFROM1_if, rtb_W11A21ANWZFROM1_k,
            &VITALMAIN_B.M_RRLS6_c);

    /* End of Outputs for SubSystem: '<S373>/M_RRLS6' */

    /* DataStoreRead: '<S373>/X20-RRLS-TE-FROM1' */
    rtb_X20RRLSTEFROM1_ko = VITALMAIN_DW.M_RRLSTE_X20;

    /* DataStoreRead: '<S373>/W11B//21B-NWZ-FROM1' */
    rtb_W11B21BNWZFROM1_l = VITALMAIN_DW.M_W11B_21B_NWZ;

    /* DataStoreRead: '<S373>/W11A//21A-NWZ-FROM2' */
    rtb_W11A21ANWZFROM2_j = VITALMAIN_DW.M_W11A_21A_NWZ;

    /* Outputs for Atomic SubSystem: '<S373>/M_RRLS9' */
    M_RRLS3(rtb_X20RRLSTEFROM1_ko, rtb_W11B21BNWZFROM1_l, rtb_W11A21ANWZFROM2_j,
            &VITALMAIN_B.M_RRLS9_e);

    /* End of Outputs for SubSystem: '<S373>/M_RRLS9' */

    /* DataStoreWrite: '<S373>/21C-RLS' incorporates:
     *  Logic: '<S373>/OR1'
     */
    VITALMAIN_DW.M_RLS_21C = (VITALMAIN_B.M_RRLS5_d.AND1 ||
      VITALMAIN_B.M_RRLS7_f.AND1 || VITALMAIN_B.M_RRLS6_c.AND1 ||
      VITALMAIN_B.M_RRLS9_e.AND1);

    /* DataStoreRead: '<S374>/J22B-RRLS-TE-FROM1' */
    rtb_J22BRRLSTEFROM1_e = VITALMAIN_DW.M_RRLSTE_J22B;

    /* Outputs for Atomic SubSystem: '<S374>/M_RRLS5' */
    M_RRLS1(rtb_J22BRRLSTEFROM1_e, &VITALMAIN_B.M_RRLS5_j);

    /* End of Outputs for SubSystem: '<S374>/M_RRLS5' */

    /* DataStoreWrite: '<S374>/22A-RLS' */
    VITALMAIN_DW.M_RLS_22A = VITALMAIN_B.M_RRLS5_j.RRLSTE;

    /* DataStoreRead: '<S375>/J22A-RRLS-TE-FROM1' */
    rtb_J22ARRLSTEFROM1_f = VITALMAIN_DW.M_RRLSTE_J22A;

    /* Outputs for Atomic SubSystem: '<S375>/M_RRLS5' */
    M_RRLS1(rtb_J22ARRLSTEFROM1_f, &VITALMAIN_B.M_RRLS5_ly);

    /* End of Outputs for SubSystem: '<S375>/M_RRLS5' */

    /* DataStoreRead: '<S375>/J22B-RRLS-TE-FROM1' */
    rtb_J22BRRLSTEFROM1_i = VITALMAIN_DW.M_RRLSTE_J22B;

    /* Outputs for Atomic SubSystem: '<S375>/M_RRLS1' */
    M_RRLS1(rtb_J22BRRLSTEFROM1_i, &VITALMAIN_B.M_RRLS1_m);

    /* End of Outputs for SubSystem: '<S375>/M_RRLS1' */

    /* Logic: '<S375>/OR1' */
    rtb_TmpSignalConversionAtM_TP1O = (VITALMAIN_B.M_RRLS5_ly.RRLSTE ||
      VITALMAIN_B.M_RRLS1_m.RRLSTE);

    /* DataStoreWrite: '<S375>/22B-RLS' */
    VITALMAIN_DW.M_RLS_22B = rtb_TmpSignalConversionAtM_TP1O;

    /* DataStoreWrite: '<S375>/22C-RLS' */
    VITALMAIN_DW.M_RLS_22C = rtb_TmpSignalConversionAtM_TP1O;

    /* DataStoreWrite: '<S375>/22D-RLS' */
    VITALMAIN_DW.M_RLS_22D = rtb_TmpSignalConversionAtM_TP1O;

    /* DataStoreRead: '<S376>/J22A-RRLS-TE-FROM1' */
    rtb_J22ARRLSTEFROM1_b = VITALMAIN_DW.M_RRLSTE_J22A;

    /* Outputs for Atomic SubSystem: '<S376>/M_RRLS5' */
    M_RRLS1(rtb_J22ARRLSTEFROM1_b, &VITALMAIN_B.M_RRLS5_jh);

    /* End of Outputs for SubSystem: '<S376>/M_RRLS5' */

    /* DataStoreWrite: '<S376>/22E-RLS' */
    VITALMAIN_DW.M_RLS_22E = VITALMAIN_B.M_RRLS5_jh.RRLSTE;

    /* DataStoreRead: '<S377>/J12A-RRLS-TE-FROM1' */
    rtb_J12ARRLSTEFROM1_ef = VITALMAIN_DW.M_RRLSTE_J12A;

    /* DataStoreRead: '<S377>/W13A//23A-RWZ-FROM1' */
    rtb_W13A23ARWZFROM1_i = VITALMAIN_DW.M_W13A_23A_RWZ;

    /* Outputs for Atomic SubSystem: '<S377>/M_RRLS7' */
    M_RRLS2(rtb_J12ARRLSTEFROM1_ef, rtb_W13A23ARWZFROM1_i,
            &VITALMAIN_B.M_RRLS7_j);

    /* End of Outputs for SubSystem: '<S377>/M_RRLS7' */

    /* DataStoreRead: '<S377>/J22A-RRLS-TE-FROM1' */
    rtb_J22ARRLSTEFROM1_bt = VITALMAIN_DW.M_RRLSTE_J22A;

    /* DataStoreRead: '<S377>/W13A//23A-NWZ-FROM1' */
    rtb_W13A23ANWZFROM1_l = VITALMAIN_DW.M_W13A_23A_NWZ;

    /* Outputs for Atomic SubSystem: '<S377>/M_RRLS8' */
    M_RRLS2(rtb_J22ARRLSTEFROM1_bt, rtb_W13A23ANWZFROM1_l,
            &VITALMAIN_B.M_RRLS8_c);

    /* End of Outputs for SubSystem: '<S377>/M_RRLS8' */

    /* DataStoreRead: '<S377>/X14-RRLS-TE-FROM1' */
    rtb_X14RRLSTEFROM1_do = VITALMAIN_DW.M_RRLSTE_X14;

    /* DataStoreRead: '<S377>/W13B//23B-RWZ-FROM1' */
    rtb_W13B23BRWZFROM1_f = VITALMAIN_DW.M_W13B_23B_RWZ;

    /* Outputs for Atomic SubSystem: '<S377>/M_RRLS1' */
    M_RRLS2(rtb_X14RRLSTEFROM1_do, rtb_W13B23BRWZFROM1_f, &VITALMAIN_B.M_RRLS1_g);

    /* End of Outputs for SubSystem: '<S377>/M_RRLS1' */

    /* DataStoreRead: '<S377>/X24-RRLS-TE-FROM1' */
    rtb_X24RRLSTEFROM1_e = VITALMAIN_DW.M_RRLSTE_X24;

    /* DataStoreRead: '<S377>/W13B//23B-NWZ-FROM1' */
    rtb_W13B23BNWZFROM1_g = VITALMAIN_DW.M_W13B_23B_NWZ;

    /* Outputs for Atomic SubSystem: '<S377>/M_RRLS2' */
    M_RRLS2(rtb_X24RRLSTEFROM1_e, rtb_W13B23BNWZFROM1_g, &VITALMAIN_B.M_RRLS2_c);

    /* End of Outputs for SubSystem: '<S377>/M_RRLS2' */

    /* DataStoreWrite: '<S377>/11A-RLS' incorporates:
     *  Logic: '<S377>/OR1'
     */
    VITALMAIN_DW.M_RLS_11A = (VITALMAIN_B.M_RRLS7_j.AND1 ||
      VITALMAIN_B.M_RRLS8_c.AND1 || VITALMAIN_B.M_RRLS1_g.AND1 ||
      VITALMAIN_B.M_RRLS2_c.AND1);

    /* DataStoreRead: '<S378>/J12A-RRLS-TE-FROM1' */
    rtb_J12ARRLSTEFROM1_m = VITALMAIN_DW.M_RRLSTE_J12A;

    /* DataStoreRead: '<S378>/W13A//23A-RWZ-FROM1' */
    rtb_W13A23ARWZFROM1_m = VITALMAIN_DW.M_W13A_23A_RWZ;

    /* Outputs for Atomic SubSystem: '<S378>/M_RRLS7' */
    M_RRLS2(rtb_J12ARRLSTEFROM1_m, rtb_W13A23ARWZFROM1_m, &VITALMAIN_B.M_RRLS7_m);

    /* End of Outputs for SubSystem: '<S378>/M_RRLS7' */

    /* DataStoreRead: '<S378>/J22A-RRLS-TE-FROM1' */
    rtb_J22ARRLSTEFROM1_o = VITALMAIN_DW.M_RRLSTE_J22A;

    /* DataStoreRead: '<S378>/W13A//23A-NWZ-FROM1' */
    rtb_W13A23ANWZFROM1_h0 = VITALMAIN_DW.M_W13A_23A_NWZ;

    /* Outputs for Atomic SubSystem: '<S378>/M_RRLS8' */
    M_RRLS2(rtb_J22ARRLSTEFROM1_o, rtb_W13A23ANWZFROM1_h0,
            &VITALMAIN_B.M_RRLS8_ch);

    /* End of Outputs for SubSystem: '<S378>/M_RRLS8' */

    /* DataStoreRead: '<S378>/X14-RRLS-TE-FROM1' */
    rtb_X14RRLSTEFROM1_a = VITALMAIN_DW.M_RRLSTE_X14;

    /* DataStoreRead: '<S378>/W13B//23B-RWZ-FROM1' */
    rtb_W13B23BRWZFROM1_k = VITALMAIN_DW.M_W13B_23B_RWZ;

    /* Outputs for Atomic SubSystem: '<S378>/M_RRLS1' */
    M_RRLS2(rtb_X14RRLSTEFROM1_a, rtb_W13B23BRWZFROM1_k, &VITALMAIN_B.M_RRLS1_dy);

    /* End of Outputs for SubSystem: '<S378>/M_RRLS1' */

    /* DataStoreRead: '<S378>/X24-RRLS-TE-FROM1' */
    rtb_X24RRLSTEFROM1_h = VITALMAIN_DW.M_RRLSTE_X24;

    /* DataStoreRead: '<S378>/W13B//23B-NWZ-FROM1' */
    rtb_W13B23BNWZFROM1_p = VITALMAIN_DW.M_W13B_23B_NWZ;

    /* Outputs for Atomic SubSystem: '<S378>/M_RRLS2' */
    M_RRLS2(rtb_X24RRLSTEFROM1_h, rtb_W13B23BNWZFROM1_p, &VITALMAIN_B.M_RRLS2_n);

    /* End of Outputs for SubSystem: '<S378>/M_RRLS2' */

    /* DataStoreWrite: '<S378>/11A-RLS' incorporates:
     *  Logic: '<S378>/OR1'
     */
    VITALMAIN_DW.M_RLS_11A = (VITALMAIN_B.M_RRLS7_m.AND1 ||
      VITALMAIN_B.M_RRLS8_ch.AND1 || VITALMAIN_B.M_RRLS1_dy.AND1 ||
      VITALMAIN_B.M_RRLS2_n.AND1);

    /* DataStoreRead: '<S379>/X24-RRLS-TE-FROM1' */
    rtb_X24RRLSTEFROM1_b = VITALMAIN_DW.M_RRLSTE_X24;

    /* Outputs for Atomic SubSystem: '<S379>/M_RRLS5' */
    M_RRLS1(rtb_X24RRLSTEFROM1_b, &VITALMAIN_B.M_RRLS5_hh);

    /* End of Outputs for SubSystem: '<S379>/M_RRLS5' */

    /* DataStoreRead: '<S379>/J12A-RRLS-TE-FROM1' */
    rtb_J12ARRLSTEFROM1_jl = VITALMAIN_DW.M_RRLSTE_J12A;

    /* DataStoreRead: '<S379>/W13B//23B-NWZ-FROM1' */
    rtb_W13B23BNWZFROM1_ge = VITALMAIN_DW.M_W13B_23B_NWZ;

    /* DataStoreRead: '<S379>/W13A//23A-RWZ-FROM1' */
    rtb_W13A23ARWZFROM1_h = VITALMAIN_DW.M_W13A_23A_RWZ;

    /* Outputs for Atomic SubSystem: '<S379>/M_RRLS6' */
    M_RRLS3(rtb_J12ARRLSTEFROM1_jl, rtb_W13B23BNWZFROM1_ge,
            rtb_W13A23ARWZFROM1_h, &VITALMAIN_B.M_RRLS6_i);

    /* End of Outputs for SubSystem: '<S379>/M_RRLS6' */

    /* DataStoreRead: '<S379>/J22A-RRLS-TE-FROM1' */
    rtb_J22ARRLSTEFROM1_c = VITALMAIN_DW.M_RRLSTE_J22A;

    /* DataStoreRead: '<S379>/W13B//23B-NWZ-FROM2' */
    rtb_W13B23BNWZFROM2_d = VITALMAIN_DW.M_W13B_23B_NWZ;

    /* DataStoreRead: '<S379>/W13A//23A-NWZ-FROM1' */
    rtb_W13A23ANWZFROM1_a = VITALMAIN_DW.M_W13A_23A_NWZ;

    /* Outputs for Atomic SubSystem: '<S379>/M_RRLS1' */
    M_RRLS3(rtb_J22ARRLSTEFROM1_c, rtb_W13B23BNWZFROM2_d, rtb_W13A23ANWZFROM1_a,
            &VITALMAIN_B.M_RRLS1_dn);

    /* End of Outputs for SubSystem: '<S379>/M_RRLS1' */

    /* DataStoreWrite: '<S379>/24A-RLS' incorporates:
     *  Logic: '<S379>/OR1'
     */
    VITALMAIN_DW.M_RLS_24A = (VITALMAIN_B.M_RRLS5_hh.RRLSTE ||
      VITALMAIN_B.M_RRLS6_i.AND1 || VITALMAIN_B.M_RRLS1_dn.AND1);

    /* DataStoreWrite: '<S340>/RRLS' incorporates:
     *  DataStoreRead: '<S340>/DEPOT-RRLS'
     *  DataStoreRead: '<S340>/J12A-RRLS'
     *  DataStoreRead: '<S340>/J12B-RRLS'
     *  DataStoreRead: '<S340>/J22A-RRLS'
     *  DataStoreRead: '<S340>/J22B-RRLS'
     *  DataStoreRead: '<S340>/ST-TO-DEP-RRLS'
     *  DataStoreRead: '<S340>/X10-RRLS'
     *  DataStoreRead: '<S340>/X14-RRLS'
     *  DataStoreRead: '<S340>/X20-RRLS'
     *  DataStoreRead: '<S340>/X24-RRLS'
     *  Logic: '<S340>/NOT1'
     *  Logic: '<S340>/OR1'
     */
    VITALMAIN_DW.M_RRLS_l = !(VITALMAIN_DW.M_RRLS_X10 || VITALMAIN_DW.M_RRLS_X20
      || VITALMAIN_DW.M_RRLS_J12A || VITALMAIN_DW.M_RRLS_J22A ||
      VITALMAIN_DW.M_RRLS_J12B || VITALMAIN_DW.M_RRLS_J22B ||
      VITALMAIN_DW.M_RRLS_X14 || VITALMAIN_DW.M_RRLS_X24 ||
      VITALMAIN_DW.M_RRLS_DEP || VITALMAIN_DW.M_RRLS_XDEP);

    /* DataStoreWrite: '<S341>/SWRLS' incorporates:
     *  DataStoreRead: '<S341>/SWRLS-DEP'
     *  DataStoreRead: '<S341>/W11A//21A-SWRLS'
     *  DataStoreRead: '<S341>/W11B//21B-SWRLS'
     *  DataStoreRead: '<S341>/W13A//23A-SWRLS'
     *  DataStoreRead: '<S341>/W13B//23B-SWRLS'
     *  DataStoreRead: '<S341>/W21C-SWRLS'
     *  Logic: '<S341>/NOT1'
     *  Logic: '<S341>/OR1'
     */
    VITALMAIN_DW.M_SWRLS_k = !(VITALMAIN_DW.M_W11A_21A_SWRLS ||
      VITALMAIN_DW.M_W11B_21B_SWRLS || VITALMAIN_DW.M_W21C_SWRLS ||
      VITALMAIN_DW.M_W13A_23A_SWRLS || VITALMAIN_DW.M_W13B_23B_SWRLS ||
      VITALMAIN_DW.M_SWRLS_DEP);

    /* DataStoreRead: '<S438>/W11A//21A-NWP-DI' */
    rtb_W11A21ANWPDI = VITALMAIN_DW.DI_NWP_W11A_21A;

    /* DataStoreRead: '<S438>/W11A//21A-RWP-DI' */
    rtb_W11A21ARWPDI = VITALMAIN_DW.DI_RWP_W11A_21A;

    /* DataStoreRead: '<S438>/W11A//21A-OOC' */
    rtb_W11A21AOOC = VITALMAIN_DW.M_W11A_21A_OOC;

    /* DataStoreRead: '<S438>/W11A//21A-L' */
    VITALMAIN_B.W11A21AL = VITALMAIN_DW.M_W11A_21A_L;

    /* DataStoreRead: '<S438>/W11A//21A-N-REQ' */
    rtb_W11A21ANREQ = VITALMAIN_DW.M_W11A_21A_N_REQ;

    /* DataStoreRead: '<S438>/W11A//21A-R-REQ' */
    rtb_W11A21ARREQ = VITALMAIN_DW.M_W11A_21A_R_REQ;

    /* Logic: '<S438>/AND1' incorporates:
     *  DataStoreRead: '<S438>/11A-TP'
     *  DataStoreRead: '<S438>/21A-TP'
     */
    rtb_AND1_h = (VITALMAIN_DW.M_TP_11A && VITALMAIN_DW.M_TP_21A);

    /* DataStoreRead: '<S438>/W11A//21A-TPZ' */
    rtb_W11A21ATPZ = VITALMAIN_DW.M_W11A_21A_TPZ;

    /* DataStoreRead: '<S438>/VDR-DI' */
    VITALMAIN_B.VDRDI = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S438>/POINT CONTROL' */
  M_SW_CTRL(VITALMAIN_M, rtb_W11A21ANWPDI, rtb_W11A21ARWPDI, rtb_W11A21AOOC,
            VITALMAIN_B.W11A21AL, rtb_W11A21ANREQ, rtb_W11A21ARREQ, rtb_AND1_h,
            rtb_W11A21ATPZ, VITALMAIN_B.VDRDI, &VITALMAIN_B.POINTCONTROL,
            &VITALMAIN_DW.POINTCONTROL);

  /* End of Outputs for SubSystem: '<S438>/POINT CONTROL' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S438>/W11A//21A-LS' */
    VITALMAIN_DW.M_W11A_21A_LS = VITALMAIN_B.POINTCONTROL.Memory3;

    /* DataStoreWrite: '<S438>/W11A//21A-NW-TE' incorporates:
     *  SignalConversion: '<S438>/TmpSignal ConversionAtPOINT CONTROLOutport11'
     */
    VITALMAIN_DW.M_W11A_21A_NW_TE =
      VITALMAIN_B.POINTCONTROL.MV_TON1.LogicalOperator2;

    /* DataStoreWrite: '<S438>/W11A//21A-NWC' */
    VITALMAIN_DW.M_W11A_21A_NWC = VITALMAIN_B.POINTCONTROL.AND7;

    /* DataStoreWrite: '<S438>/W11A//21A-NWP' */
    VITALMAIN_DW.M_W11A_21A_NWP = VITALMAIN_B.POINTCONTROL.AND1;

    /* DataStoreWrite: '<S438>/W11A//21A-NWR-DO' incorporates:
     *  SignalConversion: '<S438>/TmpSignal ConversionAtPOINT CONTROLOutport8'
     */
    VITALMAIN_DW.DO_NWR_W11A_21A = VITALMAIN_B.POINTCONTROL.AND22;

    /* DataStoreWrite: '<S438>/W11A//21A-NWZ' */
    VITALMAIN_DW.M_W11A_21A_NWZ = VITALMAIN_B.POINTCONTROL.Memory1;

    /* DataStoreWrite: '<S438>/W11A//21A-RW-TE' incorporates:
     *  SignalConversion: '<S438>/TmpSignal ConversionAtPOINT CONTROLOutport12'
     */
    VITALMAIN_DW.M_W11A_21A_RW_TE =
      VITALMAIN_B.POINTCONTROL.MV_TON2.LogicalOperator2;

    /* DataStoreWrite: '<S438>/W11A//21A-RWC' */
    VITALMAIN_DW.M_W11A_21A_RWC = VITALMAIN_B.POINTCONTROL.AND8;

    /* DataStoreWrite: '<S438>/W11A//21A-RWP' */
    VITALMAIN_DW.M_W11A_21A_RWP = VITALMAIN_B.POINTCONTROL.AND2;

    /* DataStoreWrite: '<S438>/W11A//21A-RWR-DO' incorporates:
     *  SignalConversion: '<S438>/TmpSignal ConversionAtPOINT CONTROLOutport9'
     */
    VITALMAIN_DW.DO_RWR_W11A_21A = VITALMAIN_B.POINTCONTROL.AND23;

    /* DataStoreWrite: '<S438>/W11A//21A-RWZ' */
    VITALMAIN_DW.M_W11A_21A_RWZ = VITALMAIN_B.POINTCONTROL.Memory2;

    /* DataStoreWrite: '<S438>/W11A//21A-WLPR-DO' incorporates:
     *  SignalConversion: '<S438>/TmpSignal ConversionAtPOINT CONTROLOutport10'
     */
    VITALMAIN_DW.DO_WLPR_W11A_21A = VITALMAIN_B.POINTCONTROL.AND24;

    /* DataStoreRead: '<S439>/W11B//21B-NWP-DI' */
    rtb_W11B21BNWPDI = VITALMAIN_DW.DI_NWP_W11B_21B;

    /* DataStoreRead: '<S439>/W11B//21B-RWP-DI' */
    rtb_W11B21BRWPDI = VITALMAIN_DW.DI_RWP_W11B_21B;

    /* DataStoreRead: '<S439>/W11B//21B-OOC' */
    rtb_W11B21BOOC = VITALMAIN_DW.M_W11B_21B_OOC;

    /* DataStoreRead: '<S439>/W11B//21B-L' */
    VITALMAIN_B.W11B21BL = VITALMAIN_DW.M_W11B_21B_L;

    /* DataStoreRead: '<S439>/W11B//21B-N-REQ' */
    rtb_W11B21BNREQ = VITALMAIN_DW.M_W11B_21B_N_REQ;

    /* DataStoreRead: '<S439>/W11B//21B-R-REQ' */
    rtb_W11B21BRREQ = VITALMAIN_DW.M_W11B_21B_R_REQ;

    /* Logic: '<S439>/AND1' incorporates:
     *  DataStoreRead: '<S439>/11B-TP'
     *  DataStoreRead: '<S439>/21B-TP'
     */
    rtb_AND1_d = (VITALMAIN_DW.M_TP_11B && VITALMAIN_DW.M_TP_21B);

    /* DataStoreRead: '<S439>/W11B//21B-TPZ' */
    rtb_W11B21BTPZ = VITALMAIN_DW.M_W11B_21B_TPZ;

    /* DataStoreRead: '<S439>/VDR-DI' */
    VITALMAIN_B.VDRDI_o = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S439>/POINT CONTROL' */
  M_SW_CTRL(VITALMAIN_M, rtb_W11B21BNWPDI, rtb_W11B21BRWPDI, rtb_W11B21BOOC,
            VITALMAIN_B.W11B21BL, rtb_W11B21BNREQ, rtb_W11B21BRREQ, rtb_AND1_d,
            rtb_W11B21BTPZ, VITALMAIN_B.VDRDI_o, &VITALMAIN_B.POINTCONTROL_c,
            &VITALMAIN_DW.POINTCONTROL_c);

  /* End of Outputs for SubSystem: '<S439>/POINT CONTROL' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S439>/W11B//21B-LS' */
    VITALMAIN_DW.M_W11B_21B_LS = VITALMAIN_B.POINTCONTROL_c.Memory3;

    /* DataStoreWrite: '<S439>/W11B//21B-NW-TE' incorporates:
     *  SignalConversion: '<S439>/TmpSignal ConversionAtPOINT CONTROLOutport11'
     */
    VITALMAIN_DW.M_W11B_21B_NW_TE =
      VITALMAIN_B.POINTCONTROL_c.MV_TON1.LogicalOperator2;

    /* DataStoreWrite: '<S439>/W11B//21B-NWC' */
    VITALMAIN_DW.M_W11B_21B_NWC = VITALMAIN_B.POINTCONTROL_c.AND7;

    /* DataStoreWrite: '<S439>/W11B//21B-NWP' */
    VITALMAIN_DW.M_W11B_21B_NWP = VITALMAIN_B.POINTCONTROL_c.AND1;

    /* DataStoreWrite: '<S439>/W11B//21B-NWR-DO' incorporates:
     *  SignalConversion: '<S439>/TmpSignal ConversionAtPOINT CONTROLOutport8'
     */
    VITALMAIN_DW.DO_NWR_W11B_21B = VITALMAIN_B.POINTCONTROL_c.AND22;

    /* DataStoreWrite: '<S439>/W11B//21B-NWZ' */
    VITALMAIN_DW.M_W11B_21B_NWZ = VITALMAIN_B.POINTCONTROL_c.Memory1;

    /* DataStoreWrite: '<S439>/W11B//21B-RW-TE' incorporates:
     *  SignalConversion: '<S439>/TmpSignal ConversionAtPOINT CONTROLOutport12'
     */
    VITALMAIN_DW.M_W11B_21B_RW_TE =
      VITALMAIN_B.POINTCONTROL_c.MV_TON2.LogicalOperator2;

    /* DataStoreWrite: '<S439>/W11B//21B-RWC' */
    VITALMAIN_DW.M_W11B_21B_RWC = VITALMAIN_B.POINTCONTROL_c.AND8;

    /* DataStoreWrite: '<S439>/W11B//21B-RWP' */
    VITALMAIN_DW.M_W11B_21B_RWP = VITALMAIN_B.POINTCONTROL_c.AND2;

    /* DataStoreWrite: '<S439>/W11B//21B-RWR-DO' incorporates:
     *  SignalConversion: '<S439>/TmpSignal ConversionAtPOINT CONTROLOutport9'
     */
    VITALMAIN_DW.DO_RWR_W11B_21B = VITALMAIN_B.POINTCONTROL_c.AND23;

    /* DataStoreWrite: '<S439>/W11B//21B-RWZ' */
    VITALMAIN_DW.M_W11B_21B_RWZ = VITALMAIN_B.POINTCONTROL_c.Memory2;

    /* DataStoreWrite: '<S439>/W11B//21B-WLPR-DO' incorporates:
     *  SignalConversion: '<S439>/TmpSignal ConversionAtPOINT CONTROLOutport10'
     */
    VITALMAIN_DW.DO_WLPR_W11B_21B = VITALMAIN_B.POINTCONTROL_c.AND24;

    /* DataStoreRead: '<S440>/W13A//23A-NWP-DI' */
    rtb_W13A23ANWPDI = VITALMAIN_DW.DI_NWP_W13A_23A;

    /* DataStoreRead: '<S440>/W13A//23A-RWP-DI' */
    rtb_W13A23ARWPDI = VITALMAIN_DW.DI_RWP_W13A_23A;

    /* DataStoreRead: '<S440>/W13A//23A-OOC' */
    rtb_W13A23AOOC = VITALMAIN_DW.M_W13A_23A_OOC;

    /* DataStoreRead: '<S440>/W13A//23A-L' */
    VITALMAIN_B.W13A23AL = VITALMAIN_DW.M_W13A_23A_L;

    /* DataStoreRead: '<S440>/W13A//23A-N-REQ' */
    rtb_W13A23ANREQ = VITALMAIN_DW.M_W13A_23A_N_REQ;

    /* DataStoreRead: '<S440>/W13A//23A-R-REQ' */
    rtb_W13A23ARREQ = VITALMAIN_DW.M_W13A_23A_R_REQ;

    /* Logic: '<S440>/AND1' incorporates:
     *  DataStoreRead: '<S440>/13A-TP'
     *  DataStoreRead: '<S440>/23A-TP'
     */
    rtb_AND1_m = (VITALMAIN_DW.M_TP_13A && VITALMAIN_DW.M_TP_23A);

    /* DataStoreRead: '<S440>/W13A//23A-TPZ' */
    rtb_W13A23ATPZ = VITALMAIN_DW.M_W13A_23A_TPZ;

    /* DataStoreRead: '<S440>/VDR-DI' */
    VITALMAIN_B.VDRDI_p = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S440>/POINT CONTROL' */
  M_SW_CTRL(VITALMAIN_M, rtb_W13A23ANWPDI, rtb_W13A23ARWPDI, rtb_W13A23AOOC,
            VITALMAIN_B.W13A23AL, rtb_W13A23ANREQ, rtb_W13A23ARREQ, rtb_AND1_m,
            rtb_W13A23ATPZ, VITALMAIN_B.VDRDI_p, &VITALMAIN_B.POINTCONTROL_a,
            &VITALMAIN_DW.POINTCONTROL_a);

  /* End of Outputs for SubSystem: '<S440>/POINT CONTROL' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S440>/W13A//23A-LS' */
    VITALMAIN_DW.M_W13A_23A_LS = VITALMAIN_B.POINTCONTROL_a.Memory3;

    /* DataStoreWrite: '<S440>/W13A//23A-NW-TE' incorporates:
     *  SignalConversion: '<S440>/TmpSignal ConversionAtPOINT CONTROLOutport11'
     */
    VITALMAIN_DW.M_W13A_23A_NW_TE =
      VITALMAIN_B.POINTCONTROL_a.MV_TON1.LogicalOperator2;

    /* DataStoreWrite: '<S440>/W13A//23A-NWC' */
    VITALMAIN_DW.M_W13A_23A_NWC = VITALMAIN_B.POINTCONTROL_a.AND7;

    /* DataStoreWrite: '<S440>/W13A//23A-NWP' */
    VITALMAIN_DW.M_W13A_23A_NWP = VITALMAIN_B.POINTCONTROL_a.AND1;

    /* DataStoreWrite: '<S440>/W13A//23A-NWR-DO' incorporates:
     *  SignalConversion: '<S440>/TmpSignal ConversionAtPOINT CONTROLOutport8'
     */
    VITALMAIN_DW.DO_NWR_W13A_23A = VITALMAIN_B.POINTCONTROL_a.AND22;

    /* DataStoreWrite: '<S440>/W13A//23A-NWZ' */
    VITALMAIN_DW.M_W13A_23A_NWZ = VITALMAIN_B.POINTCONTROL_a.Memory1;

    /* DataStoreWrite: '<S440>/W13A//23A-RW-TE' incorporates:
     *  SignalConversion: '<S440>/TmpSignal ConversionAtPOINT CONTROLOutport12'
     */
    VITALMAIN_DW.M_W13A_23A_RW_TE =
      VITALMAIN_B.POINTCONTROL_a.MV_TON2.LogicalOperator2;

    /* DataStoreWrite: '<S440>/W13A//23A-RWC' */
    VITALMAIN_DW.M_W13A_23A_RWC = VITALMAIN_B.POINTCONTROL_a.AND8;

    /* DataStoreWrite: '<S440>/W13A//23A-RWP' */
    VITALMAIN_DW.M_W13A_23A_RWP = VITALMAIN_B.POINTCONTROL_a.AND2;

    /* DataStoreWrite: '<S440>/W13A//23A-RWR-DO' incorporates:
     *  SignalConversion: '<S440>/TmpSignal ConversionAtPOINT CONTROLOutport9'
     */
    VITALMAIN_DW.DO_RWR_W13A_23A = VITALMAIN_B.POINTCONTROL_a.AND23;

    /* DataStoreWrite: '<S440>/W13A//23A-RWZ' */
    VITALMAIN_DW.M_W13A_23A_RWZ = VITALMAIN_B.POINTCONTROL_a.Memory2;

    /* DataStoreWrite: '<S440>/W13A//23A-WLPR-DO' incorporates:
     *  SignalConversion: '<S440>/TmpSignal ConversionAtPOINT CONTROLOutport10'
     */
    VITALMAIN_DW.DO_WLPR_W13A_23A = VITALMAIN_B.POINTCONTROL_a.AND24;

    /* DataStoreRead: '<S441>/W13B//23B-NWP-DI' */
    rtb_W13B23BNWPDI = VITALMAIN_DW.DI_NWP_W13B_23B;

    /* DataStoreRead: '<S441>/W13B//23B-RWP-DI' */
    rtb_W13B23BRWPDI = VITALMAIN_DW.DI_RWP_W13B_23B;

    /* DataStoreRead: '<S441>/W13B//23B-OOC' */
    rtb_W13B23BOOC = VITALMAIN_DW.M_W13B_23B_OOC;

    /* DataStoreRead: '<S441>/W13B//23B-L' */
    VITALMAIN_B.W13B23BL = VITALMAIN_DW.M_W13B_23B_L;

    /* DataStoreRead: '<S441>/W13B//23B-N-REQ' */
    rtb_W13B23BNREQ = VITALMAIN_DW.M_W13B_23B_N_REQ;

    /* DataStoreRead: '<S441>/W13B//23B-R-REQ' */
    rtb_W13B23BRREQ = VITALMAIN_DW.M_W13B_23B_R_REQ;

    /* Logic: '<S441>/AND1' incorporates:
     *  DataStoreRead: '<S441>/13B-TP'
     *  DataStoreRead: '<S441>/23B-TP'
     */
    rtb_AND1_at = (VITALMAIN_DW.M_TP_13B && VITALMAIN_DW.M_TP_23B);

    /* DataStoreRead: '<S441>/W13B//23B-TPZ' */
    rtb_W13B23BTPZ = VITALMAIN_DW.M_W13B_23B_TPZ;

    /* DataStoreRead: '<S441>/VDR-DI' */
    VITALMAIN_B.VDRDI_pw = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S441>/POINT CONTROL' */
  M_SW_CTRL(VITALMAIN_M, rtb_W13B23BNWPDI, rtb_W13B23BRWPDI, rtb_W13B23BOOC,
            VITALMAIN_B.W13B23BL, rtb_W13B23BNREQ, rtb_W13B23BRREQ, rtb_AND1_at,
            rtb_W13B23BTPZ, VITALMAIN_B.VDRDI_pw, &VITALMAIN_B.POINTCONTROL_j,
            &VITALMAIN_DW.POINTCONTROL_j);

  /* End of Outputs for SubSystem: '<S441>/POINT CONTROL' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S441>/W13B//23B-LS' */
    VITALMAIN_DW.M_W13B_23B_LS = VITALMAIN_B.POINTCONTROL_j.Memory3;

    /* DataStoreWrite: '<S441>/W13B//23B-NW-TE' incorporates:
     *  SignalConversion: '<S441>/TmpSignal ConversionAtPOINT CONTROLOutport11'
     */
    VITALMAIN_DW.M_W13B_23B_NW_TE =
      VITALMAIN_B.POINTCONTROL_j.MV_TON1.LogicalOperator2;

    /* DataStoreWrite: '<S441>/W13B//23B-NWC' */
    VITALMAIN_DW.M_W13B_23B_NWC = VITALMAIN_B.POINTCONTROL_j.AND7;

    /* DataStoreWrite: '<S441>/W13B//23B-NWP' */
    VITALMAIN_DW.M_W13B_23B_NWP = VITALMAIN_B.POINTCONTROL_j.AND1;

    /* DataStoreWrite: '<S441>/W13B//23B-NWR-DO' incorporates:
     *  SignalConversion: '<S441>/TmpSignal ConversionAtPOINT CONTROLOutport8'
     */
    VITALMAIN_DW.DO_NWR_W13B_23B = VITALMAIN_B.POINTCONTROL_j.AND22;

    /* DataStoreWrite: '<S441>/W13B//23B-NWZ' */
    VITALMAIN_DW.M_W13B_23B_NWZ = VITALMAIN_B.POINTCONTROL_j.Memory1;

    /* DataStoreWrite: '<S441>/W13B//23B-RW-TE' incorporates:
     *  SignalConversion: '<S441>/TmpSignal ConversionAtPOINT CONTROLOutport12'
     */
    VITALMAIN_DW.M_W13B_23B_RW_TE =
      VITALMAIN_B.POINTCONTROL_j.MV_TON2.LogicalOperator2;

    /* DataStoreWrite: '<S441>/W13B//23B-RWC' */
    VITALMAIN_DW.M_W13B_23B_RWC = VITALMAIN_B.POINTCONTROL_j.AND8;

    /* DataStoreWrite: '<S441>/W13B//23B-RWP' */
    VITALMAIN_DW.M_W13B_23B_RWP = VITALMAIN_B.POINTCONTROL_j.AND2;

    /* DataStoreWrite: '<S441>/W13B//23B-RWR-DO' incorporates:
     *  SignalConversion: '<S441>/TmpSignal ConversionAtPOINT CONTROLOutport9'
     */
    VITALMAIN_DW.DO_RWR_W13B_23B = VITALMAIN_B.POINTCONTROL_j.AND23;

    /* DataStoreWrite: '<S441>/W13B//23B-RWZ' */
    VITALMAIN_DW.M_W13B_23B_RWZ = VITALMAIN_B.POINTCONTROL_j.Memory2;

    /* DataStoreWrite: '<S441>/W13B//23B-WLPR-DO' incorporates:
     *  SignalConversion: '<S441>/TmpSignal ConversionAtPOINT CONTROLOutport10'
     */
    VITALMAIN_DW.DO_WLPR_W13B_23B = VITALMAIN_B.POINTCONTROL_j.AND24;

    /* DataStoreRead: '<S442>/W21C-NWP-DI' */
    rtb_W21CNWPDI = VITALMAIN_DW.DI_NWP_W21C;

    /* DataStoreRead: '<S442>/W21C-RWP-DI' */
    rtb_W21CRWPDI = VITALMAIN_DW.DI_RWP_W21C;

    /* DataStoreRead: '<S442>/W21C-OOC' */
    rtb_W21COOC = VITALMAIN_DW.M_W21C_OOC;

    /* DataStoreRead: '<S442>/W21C-L' */
    VITALMAIN_B.W21CL = VITALMAIN_DW.M_W21C_L;

    /* DataStoreRead: '<S442>/W21C-N-REQ' */
    rtb_W21CNREQ = VITALMAIN_DW.M_W21C_N_REQ;

    /* DataStoreRead: '<S442>/W21C-R-REQ' */
    rtb_W21CRREQ = VITALMAIN_DW.M_W21C_R_REQ;

    /* DataStoreRead: '<S442>/21C-TP' */
    rtb_u1CTP_n2 = VITALMAIN_DW.M_TP_21C;

    /* DataStoreRead: '<S442>/W21C-TPZ' */
    rtb_W21CTPZ = VITALMAIN_DW.M_W21C_TPZ;

    /* DataStoreRead: '<S442>/VDR-DI' */
    VITALMAIN_B.VDRDI_d = VITALMAIN_DW.DI_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S442>/POINT CONTROL' */
  M_SW_CTRL(VITALMAIN_M, rtb_W21CNWPDI, rtb_W21CRWPDI, rtb_W21COOC,
            VITALMAIN_B.W21CL, rtb_W21CNREQ, rtb_W21CRREQ, rtb_u1CTP_n2,
            rtb_W21CTPZ, VITALMAIN_B.VDRDI_d, &VITALMAIN_B.POINTCONTROL_h,
            &VITALMAIN_DW.POINTCONTROL_h);

  /* End of Outputs for SubSystem: '<S442>/POINT CONTROL' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S442>/W21C-LS' */
    VITALMAIN_DW.M_W21C_LS = VITALMAIN_B.POINTCONTROL_h.Memory3;

    /* DataStoreWrite: '<S442>/W21C-NW-TE' incorporates:
     *  SignalConversion: '<S442>/TmpSignal ConversionAtPOINT CONTROLOutport11'
     */
    VITALMAIN_DW.M_W21C_NW_TE =
      VITALMAIN_B.POINTCONTROL_h.MV_TON1.LogicalOperator2;

    /* DataStoreWrite: '<S442>/W21C-NWC' */
    VITALMAIN_DW.M_W21C_NWC = VITALMAIN_B.POINTCONTROL_h.AND7;

    /* DataStoreWrite: '<S442>/W21C-NWP' */
    VITALMAIN_DW.M_W21C_NWP = VITALMAIN_B.POINTCONTROL_h.AND1;

    /* DataStoreWrite: '<S442>/W21C-NWR-DO' incorporates:
     *  SignalConversion: '<S442>/TmpSignal ConversionAtPOINT CONTROLOutport8'
     */
    VITALMAIN_DW.DO_NWR_W21C = VITALMAIN_B.POINTCONTROL_h.AND22;

    /* DataStoreWrite: '<S442>/W21C-NWZ' */
    VITALMAIN_DW.M_W21C_NWZ = VITALMAIN_B.POINTCONTROL_h.Memory1;

    /* DataStoreWrite: '<S442>/W21C-RW-TE' incorporates:
     *  SignalConversion: '<S442>/TmpSignal ConversionAtPOINT CONTROLOutport12'
     */
    VITALMAIN_DW.M_W21C_RW_TE =
      VITALMAIN_B.POINTCONTROL_h.MV_TON2.LogicalOperator2;

    /* DataStoreWrite: '<S442>/W21C-RWC' */
    VITALMAIN_DW.M_W21C_RWC = VITALMAIN_B.POINTCONTROL_h.AND8;

    /* DataStoreWrite: '<S442>/W21C-RWP' */
    VITALMAIN_DW.M_W21C_RWP = VITALMAIN_B.POINTCONTROL_h.AND2;

    /* DataStoreWrite: '<S442>/W21C-RWR-DO' incorporates:
     *  SignalConversion: '<S442>/TmpSignal ConversionAtPOINT CONTROLOutport9'
     */
    VITALMAIN_DW.DO_RWR_W21C = VITALMAIN_B.POINTCONTROL_h.AND23;

    /* DataStoreWrite: '<S442>/W21C-RWZ' */
    VITALMAIN_DW.M_W21C_RWZ = VITALMAIN_B.POINTCONTROL_h.Memory2;

    /* DataStoreWrite: '<S442>/W21C-WLPR-DO' incorporates:
     *  SignalConversion: '<S442>/TmpSignal ConversionAtPOINT CONTROLOutport10'
     */
    VITALMAIN_DW.DO_WLPR_W21C = VITALMAIN_B.POINTCONTROL_h.AND24;

    /* Logic: '<S548>/AND1' incorporates:
     *  DataStoreRead: '<S548>/11A-T-ES'
     *  DataStoreRead: '<S548>/21A-T-ES'
     */
    rtb_AND1_b = (VITALMAIN_DW.M_T_ES_11A && VITALMAIN_DW.M_T_ES_21A);

    /* DataStoreRead: '<S548>/TRUE' */
    rtb_TRUE_k = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S548>/TmpSignal ConversionAtPOINT LOCKInport2' */
    rtb_TmpSignalConversionAtPOINTL = rtb_TRUE_k;

    /* Logic: '<S548>/AND2' incorporates:
     *  DataStoreRead: '<S548>/11A-S-ES'
     *  DataStoreRead: '<S548>/21A-S-ES'
     */
    rtb_AND2_nb = (VITALMAIN_DW.M_S_ES_11A && VITALMAIN_DW.M_S_ES_21A);

    /* Logic: '<S548>/AND3' incorporates:
     *  DataStoreRead: '<S548>/11A-T-WS'
     *  DataStoreRead: '<S548>/21A-T-WS'
     */
    rtb_AND3 = (VITALMAIN_DW.M_T_WS_11A && VITALMAIN_DW.M_T_WS_21A);

    /* SignalConversion: '<S548>/TmpSignal ConversionAtPOINT LOCKInport5' */
    rtb_TmpSignalConversionAtPOIN_a = rtb_TRUE_k;

    /* Logic: '<S548>/AND4' incorporates:
     *  DataStoreRead: '<S548>/11A-S-WS'
     *  DataStoreRead: '<S548>/21A-S-WS'
     */
    rtb_AND4 = (VITALMAIN_DW.M_S_WS_11A && VITALMAIN_DW.M_S_WS_21A);

    /* SignalConversion: '<S548>/TmpSignal ConversionAtPOINT LOCKInport7' */
    rtb_TmpSignalConversionAtPOIN_f = rtb_TRUE_k;

    /* Logic: '<S548>/AND5' incorporates:
     *  DataStoreRead: '<S548>/11A-TP'
     *  DataStoreRead: '<S548>/21A-TP'
     */
    rtb_AND5 = (VITALMAIN_DW.M_TP_11A && VITALMAIN_DW.M_TP_21A);

    /* DataStoreRead: '<S548>/W11A//21A-TPZ' */
    rtb_W11A21ATPZ_o = VITALMAIN_DW.M_W11A_21A_TPZ;

    /* Outputs for Atomic SubSystem: '<S548>/POINT LOCK' */
    M_SW_L(rtb_AND1_b, rtb_TmpSignalConversionAtPOINTL, rtb_AND2_nb, rtb_AND3,
           rtb_TmpSignalConversionAtPOIN_a, rtb_AND4,
           rtb_TmpSignalConversionAtPOIN_f, rtb_TRUE_k, rtb_AND5,
           rtb_W11A21ATPZ_o, &VITALMAIN_B.POINTLOCK);

    /* End of Outputs for SubSystem: '<S548>/POINT LOCK' */

    /* DataStoreWrite: '<S548>/W11A//21A-L' */
    VITALMAIN_DW.M_W11A_21A_L = VITALMAIN_B.POINTLOCK.AND1;

    /* Logic: '<S549>/AND1' incorporates:
     *  DataStoreRead: '<S549>/11B-T-ES'
     *  DataStoreRead: '<S549>/21B-T-ES'
     */
    rtb_AND1_m1 = (VITALMAIN_DW.M_T_ES_11B && VITALMAIN_DW.M_T_ES_21B);

    /* DataStoreRead: '<S549>/TRUE' */
    rtb_TRUE_j5 = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S549>/TmpSignal ConversionAtPOINT LOCKInport2' */
    rtb_TmpSignalConversionAtPOIN_l = rtb_TRUE_j5;

    /* Logic: '<S549>/AND2' incorporates:
     *  DataStoreRead: '<S549>/11B-S-ES'
     *  DataStoreRead: '<S549>/21B-S-ES'
     */
    rtb_AND2_a = (VITALMAIN_DW.M_S_ES_11B && VITALMAIN_DW.M_S_ES_21B);

    /* Logic: '<S549>/AND3' incorporates:
     *  DataStoreRead: '<S549>/11B-T-WS'
     *  DataStoreRead: '<S549>/21B-T-WS'
     */
    rtb_AND3_e = (VITALMAIN_DW.M_T_WS_11B && VITALMAIN_DW.M_T_WS_21B);

    /* SignalConversion: '<S549>/TmpSignal ConversionAtPOINT LOCKInport5' */
    rtb_TmpSignalConversionAtPOI_a1 = rtb_TRUE_j5;

    /* Logic: '<S549>/AND4' incorporates:
     *  DataStoreRead: '<S549>/11B-S-WS'
     *  DataStoreRead: '<S549>/21B-S-WS'
     */
    rtb_AND4_j = (VITALMAIN_DW.M_S_WS_11B && VITALMAIN_DW.M_S_WS_21B);

    /* SignalConversion: '<S549>/TmpSignal ConversionAtPOINT LOCKInport7' */
    rtb_TmpSignalConversionAtPOI_fe = rtb_TRUE_j5;

    /* Logic: '<S549>/AND5' incorporates:
     *  DataStoreRead: '<S549>/11B-TP'
     *  DataStoreRead: '<S549>/21B-TP'
     */
    rtb_AND5_g = (VITALMAIN_DW.M_TP_11B && VITALMAIN_DW.M_TP_21B);

    /* DataStoreRead: '<S549>/W11B//21B-TPZ' */
    rtb_W11B21BTPZ_o = VITALMAIN_DW.M_W11B_21B_TPZ;

    /* Outputs for Atomic SubSystem: '<S549>/POINT LOCK' */
    M_SW_L(rtb_AND1_m1, rtb_TmpSignalConversionAtPOIN_l, rtb_AND2_a, rtb_AND3_e,
           rtb_TmpSignalConversionAtPOI_a1, rtb_AND4_j,
           rtb_TmpSignalConversionAtPOI_fe, rtb_TRUE_j5, rtb_AND5_g,
           rtb_W11B21BTPZ_o, &VITALMAIN_B.POINTLOCK_m);

    /* End of Outputs for SubSystem: '<S549>/POINT LOCK' */

    /* DataStoreWrite: '<S549>/W11B//21B-L' */
    VITALMAIN_DW.M_W11B_21B_L = VITALMAIN_B.POINTLOCK_m.AND1;

    /* Logic: '<S550>/AND1' incorporates:
     *  DataStoreRead: '<S550>/13A-T-ES'
     *  DataStoreRead: '<S550>/23A-T-ES'
     */
    rtb_AND1_f = (VITALMAIN_DW.M_T_ES_13A && VITALMAIN_DW.M_T_ES_23A);

    /* DataStoreRead: '<S550>/TRUE' */
    rtb_TRUE_gn = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S550>/TmpSignal ConversionAtPOINT LOCKInport2' */
    rtb_TmpSignalConversionAtPOI_lj = rtb_TRUE_gn;

    /* SignalConversion: '<S550>/TmpSignal ConversionAtPOINT LOCKInport3' */
    rtb_TmpSignalConversionAtPOIN_g = rtb_TRUE_gn;

    /* Logic: '<S550>/AND3' incorporates:
     *  DataStoreRead: '<S550>/13A-T-WS'
     *  DataStoreRead: '<S550>/23A-T-WS'
     */
    rtb_AND3_d = (VITALMAIN_DW.M_T_WS_13A && VITALMAIN_DW.M_T_WS_23A);

    /* SignalConversion: '<S550>/TmpSignal ConversionAtPOINT LOCKInport5' */
    rtb_TmpSignalConversionAtPO_a1a = rtb_TRUE_gn;

    /* SignalConversion: '<S550>/TmpSignal ConversionAtPOINT LOCKInport6' */
    rtb_TmpSignalConversionAtPOI_fi = rtb_TRUE_gn;

    /* SignalConversion: '<S550>/TmpSignal ConversionAtPOINT LOCKInport7' */
    rtb_TmpSignalConversionAtPO_fee = rtb_TRUE_gn;

    /* Logic: '<S550>/AND5' incorporates:
     *  DataStoreRead: '<S550>/13A-TP'
     *  DataStoreRead: '<S550>/23A-TP'
     */
    rtb_AND5_p = (VITALMAIN_DW.M_TP_13A && VITALMAIN_DW.M_TP_23A);

    /* DataStoreRead: '<S550>/W13A//23A-TPZ' */
    rtb_W13A23ATPZ_a = VITALMAIN_DW.M_W13A_23A_TPZ;

    /* Outputs for Atomic SubSystem: '<S550>/POINT LOCK' */
    M_SW_L(rtb_AND1_f, rtb_TmpSignalConversionAtPOI_lj,
           rtb_TmpSignalConversionAtPOIN_g, rtb_AND3_d,
           rtb_TmpSignalConversionAtPO_a1a, rtb_TmpSignalConversionAtPOI_fi,
           rtb_TmpSignalConversionAtPO_fee, rtb_TRUE_gn, rtb_AND5_p,
           rtb_W13A23ATPZ_a, &VITALMAIN_B.POINTLOCK_p);

    /* End of Outputs for SubSystem: '<S550>/POINT LOCK' */

    /* DataStoreWrite: '<S550>/W13A//23A-L' */
    VITALMAIN_DW.M_W13A_23A_L = VITALMAIN_B.POINTLOCK_p.AND1;

    /* Logic: '<S551>/AND1' incorporates:
     *  DataStoreRead: '<S551>/13B-T-ES'
     *  DataStoreRead: '<S551>/23B-T-ES'
     */
    rtb_AND1_p = (VITALMAIN_DW.M_T_ES_13B && VITALMAIN_DW.M_T_ES_23B);

    /* DataStoreRead: '<S551>/TRUE' */
    rtb_TRUE_e = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S551>/TmpSignal ConversionAtPOINT LOCKInport2' */
    rtb_TmpSignalConversionAtPO_ljf = rtb_TRUE_e;

    /* SignalConversion: '<S551>/TmpSignal ConversionAtPOINT LOCKInport3' */
    rtb_TmpSignalConversionAtPOI_gm = rtb_TRUE_e;

    /* Logic: '<S551>/AND3' incorporates:
     *  DataStoreRead: '<S551>/13B-T-WS'
     *  DataStoreRead: '<S551>/23B-T-WS'
     */
    rtb_AND3_h = (VITALMAIN_DW.M_T_WS_13B && VITALMAIN_DW.M_T_WS_23B);

    /* SignalConversion: '<S551>/TmpSignal ConversionAtPOINT LOCKInport5' */
    rtb_TmpSignalConversionAtP_a1a5 = rtb_TRUE_e;

    /* SignalConversion: '<S551>/TmpSignal ConversionAtPOINT LOCKInport6' */
    rtb_TmpSignalConversionAtPO_fiy = rtb_TRUE_e;

    /* SignalConversion: '<S551>/TmpSignal ConversionAtPOINT LOCKInport7' */
    rtb_TmpSignalConversionAtP_feeu = rtb_TRUE_e;

    /* Logic: '<S551>/AND5' incorporates:
     *  DataStoreRead: '<S551>/13B-TP'
     *  DataStoreRead: '<S551>/23B-TP'
     */
    rtb_AND5_j = (VITALMAIN_DW.M_TP_13B && VITALMAIN_DW.M_TP_23B);

    /* DataStoreRead: '<S551>/W13B//23B-TPZ' */
    rtb_W13B23BTPZ_n = VITALMAIN_DW.M_W13B_23B_TPZ;

    /* Outputs for Atomic SubSystem: '<S551>/POINT LOCK' */
    M_SW_L(rtb_AND1_p, rtb_TmpSignalConversionAtPO_ljf,
           rtb_TmpSignalConversionAtPOI_gm, rtb_AND3_h,
           rtb_TmpSignalConversionAtP_a1a5, rtb_TmpSignalConversionAtPO_fiy,
           rtb_TmpSignalConversionAtP_feeu, rtb_TRUE_e, rtb_AND5_j,
           rtb_W13B23BTPZ_n, &VITALMAIN_B.POINTLOCK_o);

    /* End of Outputs for SubSystem: '<S551>/POINT LOCK' */

    /* DataStoreWrite: '<S551>/W13B//23B-L' */
    VITALMAIN_DW.M_W13B_23B_L = VITALMAIN_B.POINTLOCK_o.AND1;

    /* DataStoreRead: '<S552>/21C-T-ES' */
    rtb_u1CTES_c = VITALMAIN_DW.M_T_ES_21C;

    /* DataStoreRead: '<S552>/TRUE' */
    rtb_TRUE_o = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S552>/TmpSignal ConversionAtPOINT LOCKInport2' */
    rtb_TmpSignalConversionAtP_ljfq = rtb_TRUE_o;

    /* DataStoreRead: '<S552>/21C-S-ES' */
    rtb_u1CSES_i = VITALMAIN_DW.M_S_ES_21C;

    /* DataStoreRead: '<S552>/21C-T-WS' */
    rtb_u1CTWS_h = VITALMAIN_DW.M_T_WS_21C;

    /* SignalConversion: '<S552>/TmpSignal ConversionAtPOINT LOCKInport5' */
    rtb_TmpSignalConversionAt_a1a5b = rtb_TRUE_o;

    /* DataStoreRead: '<S552>/21C-S-WS' */
    rtb_u1CSWS_b = VITALMAIN_DW.M_S_WS_21C;

    /* SignalConversion: '<S552>/TmpSignal ConversionAtPOINT LOCKInport7' */
    rtb_TmpSignalConversionAt_feeux = rtb_TRUE_o;

    /* DataStoreRead: '<S552>/21C-TP' */
    rtb_u1CTP_p = VITALMAIN_DW.M_TP_21C;

    /* DataStoreRead: '<S552>/W21C-TPZ' */
    rtb_W21CTPZ_a = VITALMAIN_DW.M_W21C_TPZ;

    /* Outputs for Atomic SubSystem: '<S552>/POINT LOCK' */
    M_SW_L(rtb_u1CTES_c, rtb_TmpSignalConversionAtP_ljfq, rtb_u1CSES_i,
           rtb_u1CTWS_h, rtb_TmpSignalConversionAt_a1a5b, rtb_u1CSWS_b,
           rtb_TmpSignalConversionAt_feeux, rtb_TRUE_o, rtb_u1CTP_p,
           rtb_W21CTPZ_a, &VITALMAIN_B.POINTLOCK_mr);

    /* End of Outputs for SubSystem: '<S552>/POINT LOCK' */

    /* DataStoreWrite: '<S552>/W21C-L' */
    VITALMAIN_DW.M_W21C_L = VITALMAIN_B.POINTLOCK_mr.AND1;

    /* DataStoreRead: '<S558>/DEP-X10-REQ' */
    rtb_DEPX10REQ = VITALMAIN_DW.M_REQ_S_DEP_10;

    /* DataStoreRead: '<S558>/DEP-X10-S-L' */
    rtb_DEPX10SL_e = VITALMAIN_DW.M_L_S_DEP_10;

    /* Outputs for Atomic SubSystem: '<S558>/ROUTE CHECK' */
    M_H_D_S(rtb_DEPX10REQ, rtb_DEPX10SL_e, &VITALMAIN_B.ROUTECHECK);

    /* End of Outputs for SubSystem: '<S558>/ROUTE CHECK' */

    /* DataStoreWrite: '<S558>/DEP-X10-S' */
    VITALMAIN_DW.M_R_S_DEP_10 = VITALMAIN_B.ROUTECHECK.AND2;

    /* DataStoreRead: '<S559>/DEP-X20-REQ' */
    rtb_DEPX20REQ = VITALMAIN_DW.M_REQ_S_DEP_20;

    /* DataStoreRead: '<S559>/DEP-X20-S-L' */
    rtb_DEPX20SL_l = VITALMAIN_DW.M_L_S_DEP_20;

    /* Outputs for Atomic SubSystem: '<S559>/ROUTE CHECK' */
    M_H_D_S(rtb_DEPX20REQ, rtb_DEPX20SL_l, &VITALMAIN_B.ROUTECHECK_a);

    /* End of Outputs for SubSystem: '<S559>/ROUTE CHECK' */

    /* DataStoreWrite: '<S559>/DEP-X20-S' */
    VITALMAIN_DW.M_R_S_DEP_20 = VITALMAIN_B.ROUTECHECK_a.AND2;

    /* DataStoreRead: '<S560>/J12A-X10-REQ' */
    rtb_J12AX10REQ = VITALMAIN_DW.M_REQ_T_12_10;

    /* DataStoreRead: '<S560>/J12A-X10-L' */
    rtb_J12AX10L = VITALMAIN_DW.M_L_T_12_10;

    /* Outputs for Atomic SubSystem: '<S560>/ROUTE CHECK' */
    M_H_D_S(rtb_J12AX10REQ, rtb_J12AX10L, &VITALMAIN_B.ROUTECHECK_o);

    /* End of Outputs for SubSystem: '<S560>/ROUTE CHECK' */

    /* DataStoreWrite: '<S560>/J12A-X10-H' */
    VITALMAIN_DW.M_R_H_12_10 = VITALMAIN_B.ROUTECHECK_o.AND2;

    /* DataStoreRead: '<S561>/J12A-X20-REQ' */
    rtb_J12AX20REQ = VITALMAIN_DW.M_REQ_T_12_20;

    /* DataStoreRead: '<S561>/J12A-X20-L' */
    rtb_J12AX20L = VITALMAIN_DW.M_L_T_12_20;

    /* Outputs for Atomic SubSystem: '<S561>/ROUTE CHECK' */
    M_H_D_S(rtb_J12AX20REQ, rtb_J12AX20L, &VITALMAIN_B.ROUTECHECK_op);

    /* End of Outputs for SubSystem: '<S561>/ROUTE CHECK' */

    /* DataStoreWrite: '<S561>/J12A-X20-H' */
    VITALMAIN_DW.M_R_H_12_20 = VITALMAIN_B.ROUTECHECK_op.AND2;

    /* DataStoreRead: '<S562>/J12B-X14-REQ' */
    rtb_J12BX14REQ = VITALMAIN_DW.M_REQ_T_12_14;

    /* DataStoreRead: '<S562>/J12B-X14-L' */
    rtb_J12BX14L = VITALMAIN_DW.M_L_T_12_14;

    /* Outputs for Atomic SubSystem: '<S562>/ROUTE CHECK' */
    M_H_D_S(rtb_J12BX14REQ, rtb_J12BX14L, &VITALMAIN_B.ROUTECHECK_n);

    /* End of Outputs for SubSystem: '<S562>/ROUTE CHECK' */

    /* DataStoreWrite: '<S562>/J12B-X14-H' */
    VITALMAIN_DW.M_R_H_12_14 = VITALMAIN_B.ROUTECHECK_n.AND2;

    /* DataStoreRead: '<S563>/J12B-X24-REQ' */
    rtb_J12BX24REQ = VITALMAIN_DW.M_REQ_T_12_24;

    /* DataStoreRead: '<S563>/J12B-X24-L' */
    rtb_J12BX24L = VITALMAIN_DW.M_L_T_12_24;

    /* Outputs for Atomic SubSystem: '<S563>/ROUTE CHECK' */
    M_H_D_S(rtb_J12BX24REQ, rtb_J12BX24L, &VITALMAIN_B.ROUTECHECK_oe);

    /* End of Outputs for SubSystem: '<S563>/ROUTE CHECK' */

    /* DataStoreWrite: '<S563>/J12B-X24-H' */
    VITALMAIN_DW.M_R_H_12_24 = VITALMAIN_B.ROUTECHECK_oe.AND2;

    /* DataStoreRead: '<S564>/J14-J12A-REQ' */
    rtb_J14J12AREQ = VITALMAIN_DW.M_REQ_T_14_12;

    /* DataStoreRead: '<S564>/J14-J12A-L' */
    rtb_J14J12AL = VITALMAIN_DW.M_L_T_14_12;

    /* Outputs for Atomic SubSystem: '<S564>/ROUTE CHECK' */
    M_H_D_S(rtb_J14J12AREQ, rtb_J14J12AL, &VITALMAIN_B.ROUTECHECK_i);

    /* End of Outputs for SubSystem: '<S564>/ROUTE CHECK' */

    /* DataStoreWrite: '<S564>/J14-J12A-D' */
    VITALMAIN_DW.M_R_D_14_12 = VITALMAIN_B.ROUTECHECK_i.AND2;

    /* DataStoreRead: '<S565>/J14-J22A-REQ' */
    rtb_J14J22AREQ = VITALMAIN_DW.M_REQ_T_14_22;

    /* DataStoreRead: '<S565>/J14-J22A-L' */
    rtb_J14J22AL = VITALMAIN_DW.M_L_T_14_22;

    /* Outputs for Atomic SubSystem: '<S565>/ROUTE CHECK' */
    M_H_D_S(rtb_J14J22AREQ, rtb_J14J22AL, &VITALMAIN_B.ROUTECHECK_ny);

    /* End of Outputs for SubSystem: '<S565>/ROUTE CHECK' */

    /* DataStoreWrite: '<S565>/J14-J22A-D' */
    VITALMAIN_DW.M_R_D_14_22 = VITALMAIN_B.ROUTECHECK_ny.AND2;

    /* DataStoreRead: '<S566>/J22A-X10-REQ' */
    rtb_J22AX10REQ = VITALMAIN_DW.M_REQ_T_22_10;

    /* DataStoreRead: '<S566>/J22A-X10-L' */
    rtb_J22AX10L = VITALMAIN_DW.M_L_T_22_10;

    /* Outputs for Atomic SubSystem: '<S566>/ROUTE CHECK' */
    M_H_D_S(rtb_J22AX10REQ, rtb_J22AX10L, &VITALMAIN_B.ROUTECHECK_p);

    /* End of Outputs for SubSystem: '<S566>/ROUTE CHECK' */

    /* DataStoreWrite: '<S566>/J22A-X10-H' */
    VITALMAIN_DW.M_R_H_22_10 = VITALMAIN_B.ROUTECHECK_p.AND2;

    /* DataStoreRead: '<S567>/J22A-X20-REQ' */
    rtb_J22AX20REQ = VITALMAIN_DW.M_REQ_T_22_20;

    /* DataStoreRead: '<S567>/J22A-X20-L' */
    rtb_J22AX20L = VITALMAIN_DW.M_L_T_22_20;

    /* Outputs for Atomic SubSystem: '<S567>/ROUTE CHECK' */
    M_H_D_S(rtb_J22AX20REQ, rtb_J22AX20L, &VITALMAIN_B.ROUTECHECK_d);

    /* End of Outputs for SubSystem: '<S567>/ROUTE CHECK' */

    /* DataStoreWrite: '<S567>/J22A-X20-H' */
    VITALMAIN_DW.M_R_H_22_20 = VITALMAIN_B.ROUTECHECK_d.AND2;

    /* DataStoreRead: '<S568>/J22B-X14-REQ' */
    rtb_J22BX14REQ = VITALMAIN_DW.M_REQ_T_22_14;

    /* DataStoreRead: '<S568>/J22B-X14-L' */
    rtb_J22BX14L = VITALMAIN_DW.M_L_T_22_14;

    /* Outputs for Atomic SubSystem: '<S568>/ROUTE CHECK' */
    M_H_D_S(rtb_J22BX14REQ, rtb_J22BX14L, &VITALMAIN_B.ROUTECHECK_nw);

    /* End of Outputs for SubSystem: '<S568>/ROUTE CHECK' */

    /* DataStoreWrite: '<S568>/J22B-X14-H' */
    VITALMAIN_DW.M_R_H_22_14 = VITALMAIN_B.ROUTECHECK_nw.AND2;

    /* DataStoreRead: '<S569>/J22B-X24-REQ' */
    rtb_J22BX24REQ = VITALMAIN_DW.M_REQ_T_22_24;

    /* DataStoreRead: '<S569>/J22B-X24-L' */
    rtb_J22BX24L = VITALMAIN_DW.M_L_T_22_24;

    /* Outputs for Atomic SubSystem: '<S569>/ROUTE CHECK' */
    M_H_D_S(rtb_J22BX24REQ, rtb_J22BX24L, &VITALMAIN_B.ROUTECHECK_e);

    /* End of Outputs for SubSystem: '<S569>/ROUTE CHECK' */

    /* DataStoreWrite: '<S569>/J22B-X24-H' */
    VITALMAIN_DW.M_R_H_22_24 = VITALMAIN_B.ROUTECHECK_e.AND2;

    /* DataStoreRead: '<S570>/J24-J12A-REQ' */
    rtb_J24J12AREQ = VITALMAIN_DW.M_REQ_T_24_12;

    /* DataStoreRead: '<S570>/J24-J12A-L' */
    rtb_J24J12AL = VITALMAIN_DW.M_L_T_24_12;

    /* Outputs for Atomic SubSystem: '<S570>/ROUTE CHECK' */
    M_H_D_S(rtb_J24J12AREQ, rtb_J24J12AL, &VITALMAIN_B.ROUTECHECK_dk);

    /* End of Outputs for SubSystem: '<S570>/ROUTE CHECK' */

    /* DataStoreWrite: '<S570>/J24-J12A-D' */
    VITALMAIN_DW.M_R_D_24_12 = VITALMAIN_B.ROUTECHECK_dk.AND2;

    /* DataStoreRead: '<S571>/J24-J22A-REQ' */
    rtb_J24J22AREQ = VITALMAIN_DW.M_REQ_T_24_22;

    /* DataStoreRead: '<S571>/J24-J22A-L' */
    rtb_J24J22AL = VITALMAIN_DW.M_L_T_24_22;

    /* Outputs for Atomic SubSystem: '<S571>/ROUTE CHECK' */
    M_H_D_S(rtb_J24J22AREQ, rtb_J24J22AL, &VITALMAIN_B.ROUTECHECK_m);

    /* End of Outputs for SubSystem: '<S571>/ROUTE CHECK' */

    /* DataStoreWrite: '<S571>/J24-J22A-D' */
    VITALMAIN_DW.M_R_D_24_22 = VITALMAIN_B.ROUTECHECK_m.AND2;

    /* DataStoreRead: '<S572>/JL10-DEP-REQ' */
    rtb_JL10DEPREQ = VITALMAIN_DW.M_REQ_S_10_DEP;

    /* DataStoreRead: '<S572>/JL10-DEP-S-L' */
    rtb_JL10DEPSL_m = VITALMAIN_DW.M_L_S_10_DEP;

    /* Outputs for Atomic SubSystem: '<S572>/ROUTE CHECK' */
    M_H_D_S(rtb_JL10DEPREQ, rtb_JL10DEPSL_m, &VITALMAIN_B.ROUTECHECK_dd);

    /* End of Outputs for SubSystem: '<S572>/ROUTE CHECK' */

    /* DataStoreWrite: '<S572>/JL10-DEP-S' */
    VITALMAIN_DW.M_R_S_10_DEP = VITALMAIN_B.ROUTECHECK_dd.AND2;

    /* DataStoreRead: '<S573>/JL10-J12B-REQ' */
    rtb_JL10J12BREQ = VITALMAIN_DW.M_REQ_T_10_12;

    /* DataStoreRead: '<S573>/JL10-J12B-L' */
    rtb_JL10J12BL = VITALMAIN_DW.M_L_T_10_12;

    /* Outputs for Atomic SubSystem: '<S573>/ROUTE CHECK' */
    M_H_D_S(rtb_JL10J12BREQ, rtb_JL10J12BL, &VITALMAIN_B.ROUTECHECK_c);

    /* End of Outputs for SubSystem: '<S573>/ROUTE CHECK' */

    /* DataStoreWrite: '<S573>/JL10-J12B-D' */
    VITALMAIN_DW.M_R_D_10_12 = VITALMAIN_B.ROUTECHECK_c.AND2;

    /* DataStoreRead: '<S574>/JL10-J22B-REQ' */
    rtb_JL10J22BREQ = VITALMAIN_DW.M_REQ_T_10_22;

    /* DataStoreRead: '<S574>/JL10-J22B-L' */
    rtb_JL10J22BL = VITALMAIN_DW.M_L_T_10_22;

    /* Outputs for Atomic SubSystem: '<S574>/ROUTE CHECK' */
    M_H_D_S(rtb_JL10J22BREQ, rtb_JL10J22BL, &VITALMAIN_B.ROUTECHECK_eu);

    /* End of Outputs for SubSystem: '<S574>/ROUTE CHECK' */

    /* DataStoreWrite: '<S574>/JL10-J22B-D' */
    VITALMAIN_DW.M_R_D_10_22 = VITALMAIN_B.ROUTECHECK_eu.AND2;

    /* DataStoreRead: '<S575>/JL20-DEP-REQ' */
    rtb_JL20DEPREQ = VITALMAIN_DW.M_REQ_S_20_DEP;

    /* DataStoreRead: '<S575>/JL20-DEP-S-L' */
    rtb_JL20DEPSL_p = VITALMAIN_DW.M_L_S_20_DEP;

    /* Outputs for Atomic SubSystem: '<S575>/ROUTE CHECK' */
    M_H_D_S(rtb_JL20DEPREQ, rtb_JL20DEPSL_p, &VITALMAIN_B.ROUTECHECK_ii);

    /* End of Outputs for SubSystem: '<S575>/ROUTE CHECK' */

    /* DataStoreWrite: '<S575>/JL20-DEP-S' */
    VITALMAIN_DW.M_R_S_20_DEP = VITALMAIN_B.ROUTECHECK_ii.AND2;

    /* DataStoreRead: '<S576>/JL20-J12B-REQ' */
    rtb_JL20J12BREQ = VITALMAIN_DW.M_REQ_T_20_12;

    /* DataStoreRead: '<S576>/JL20-J12B-L' */
    rtb_JL20J12BL = VITALMAIN_DW.M_L_T_20_12;

    /* Outputs for Atomic SubSystem: '<S576>/ROUTE CHECK' */
    M_H_D_S(rtb_JL20J12BREQ, rtb_JL20J12BL, &VITALMAIN_B.ROUTECHECK_o4);

    /* End of Outputs for SubSystem: '<S576>/ROUTE CHECK' */

    /* DataStoreWrite: '<S576>/JL20-J12B-D' */
    VITALMAIN_DW.M_R_D_20_12 = VITALMAIN_B.ROUTECHECK_o4.AND2;

    /* DataStoreRead: '<S577>/JL20-J22B-REQ' */
    rtb_JL20J22BREQ = VITALMAIN_DW.M_REQ_T_20_22;

    /* DataStoreRead: '<S577>/JL20-J22B-L' */
    rtb_JL20J22BL = VITALMAIN_DW.M_L_T_20_22;

    /* Outputs for Atomic SubSystem: '<S577>/ROUTE CHECK' */
    M_H_D_S(rtb_JL20J22BREQ, rtb_JL20J22BL, &VITALMAIN_B.ROUTECHECK_ih);

    /* End of Outputs for SubSystem: '<S577>/ROUTE CHECK' */

    /* DataStoreWrite: '<S577>/JL20-J22B-D' */
    VITALMAIN_DW.M_R_D_20_22 = VITALMAIN_B.ROUTECHECK_ih.AND2;

    /* Logic: '<S598>/AND2' incorporates:
     *  DataStoreRead: '<S598>/21C-S-ES'
     *  DataStoreRead: '<S598>/21C-T-ES'
     */
    rtb_AND2_at = (VITALMAIN_DW.M_T_ES_21C && VITALMAIN_DW.M_S_ES_21C);

    /* Logic: '<S598>/AND1' incorporates:
     *  DataStoreRead: '<S598>/W11A//21A-NWC'
     *  DataStoreRead: '<S598>/W11B//21B-RWC'
     *  DataStoreRead: '<S598>/W21C-RWC'
     */
    rtb_AND1_m2 = (VITALMAIN_DW.M_W11A_21A_NWC && VITALMAIN_DW.M_W11B_21B_RWC &&
                   VITALMAIN_DW.M_W21C_RWC);

    /* Logic: '<S598>/AND3' incorporates:
     *  DataStoreRead: '<S598>/JL10-DR-DO'
     *  DataStoreRead: '<S598>/JL10-GR-DO'
     */
    rtb_AND3_hx = (VITALMAIN_DW.DO_JL10_DR || VITALMAIN_DW.DO_JL10_GR);

    /* Outputs for Atomic SubSystem: '<S598>/ROUTE CONFLICT' */
    M_R_L(rtb_AND2_at, rtb_AND1_m2, rtb_AND3_hx, &VITALMAIN_B.ROUTECONFLICT);

    /* End of Outputs for SubSystem: '<S598>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S598>/DEP-X10-S-L' */
    VITALMAIN_DW.M_L_S_DEP_10 = VITALMAIN_B.ROUTECONFLICT.AND1;

    /* Logic: '<S599>/AND2' incorporates:
     *  DataStoreRead: '<S599>/21C-S-ES'
     *  DataStoreRead: '<S599>/21C-T-ES'
     */
    rtb_AND2_m = (VITALMAIN_DW.M_T_ES_21C && VITALMAIN_DW.M_S_ES_21C);

    /* Logic: '<S599>/AND1' incorporates:
     *  DataStoreRead: '<S599>/W11A//21A-NWC'
     *  DataStoreRead: '<S599>/W11B//21B-NWC'
     *  DataStoreRead: '<S599>/W21C-RWC'
     */
    rtb_AND1_in = (VITALMAIN_DW.M_W11A_21A_NWC && VITALMAIN_DW.M_W11B_21B_NWC &&
                   VITALMAIN_DW.M_W21C_RWC);

    /* Logic: '<S599>/AND3' incorporates:
     *  DataStoreRead: '<S599>/JL20-DR-DO'
     *  DataStoreRead: '<S599>/JL20-GR-DO'
     */
    rtb_AND3_j = (VITALMAIN_DW.DO_JL20_DR || VITALMAIN_DW.DO_JL20_GR);

    /* Outputs for Atomic SubSystem: '<S599>/ROUTE CONFLICT' */
    M_R_L(rtb_AND2_m, rtb_AND1_in, rtb_AND3_j, &VITALMAIN_B.ROUTECONFLICT_h);

    /* End of Outputs for SubSystem: '<S599>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S599>/DEP-X20-S-L' */
    VITALMAIN_DW.M_L_S_DEP_20 = VITALMAIN_B.ROUTECONFLICT_h.AND1;

    /* DataStoreRead: '<S600>/11B-T-ES' */
    rtb_u1BTES_i = VITALMAIN_DW.M_T_ES_11B;

    /* Logic: '<S600>/AND1' incorporates:
     *  DataStoreRead: '<S600>/W11A//21A-NWC'
     *  DataStoreRead: '<S600>/W11B//21B-NWC'
     */
    rtb_AND1_bv = (VITALMAIN_DW.M_W11B_21B_NWC && VITALMAIN_DW.M_W11A_21A_NWC);

    /* Logic: '<S600>/OR1' incorporates:
     *  DataStoreRead: '<S600>/JL10-DR-DO'
     *  DataStoreRead: '<S600>/JL10-GR-DO'
     */
    rtb_OR1_az = (VITALMAIN_DW.DO_JL10_DR || VITALMAIN_DW.DO_JL10_GR);

    /* Outputs for Atomic SubSystem: '<S600>/ROUTE CONFLICT' */
    M_R_L(rtb_u1BTES_i, rtb_AND1_bv, rtb_OR1_az, &VITALMAIN_B.ROUTECONFLICT_a);

    /* End of Outputs for SubSystem: '<S600>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S600>/J12A-X10-T-L' */
    VITALMAIN_DW.M_L_T_12_10 = VITALMAIN_B.ROUTECONFLICT_a.AND1;

    /* DataStoreRead: '<S601>/11B-T-ES' */
    rtb_u1BTES_cc = VITALMAIN_DW.M_T_ES_11B;

    /* Logic: '<S601>/AND1' incorporates:
     *  DataStoreRead: '<S601>/W11A//21A-RWC'
     *  DataStoreRead: '<S601>/W11B//21B-NWC'
     */
    rtb_AND1_n5 = (VITALMAIN_DW.M_W11B_21B_NWC && VITALMAIN_DW.M_W11A_21A_RWC);

    /* Logic: '<S601>/AND2' incorporates:
     *  DataStoreRead: '<S601>/JL20-DR-DO'
     *  DataStoreRead: '<S601>/JL20-GR-DO'
     */
    rtb_AND2_g = (VITALMAIN_DW.DO_JL20_DR && VITALMAIN_DW.DO_JL20_GR);

    /* Outputs for Atomic SubSystem: '<S601>/ROUTE CONFLICT' */
    M_R_L(rtb_u1BTES_cc, rtb_AND1_n5, rtb_AND2_g, &VITALMAIN_B.ROUTECONFLICT_aw);

    /* End of Outputs for SubSystem: '<S601>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S601>/J12A-X20-T-L' */
    VITALMAIN_DW.M_L_T_12_20 = VITALMAIN_B.ROUTECONFLICT_aw.AND1;

    /* DataStoreRead: '<S602>/13A-T-WS' */
    rtb_u3ATWS_k = VITALMAIN_DW.M_T_WS_13A;

    /* Logic: '<S602>/AND1' incorporates:
     *  DataStoreRead: '<S602>/W13A//23A-NWC'
     *  DataStoreRead: '<S602>/W13B//23B-NWC'
     */
    rtb_AND1_pg = (VITALMAIN_DW.M_W13A_23A_NWC && VITALMAIN_DW.M_W13B_23B_NWC);

    /* DataStoreRead: '<S602>/J14-DR-DO' */
    rtb_J14DRDO_f = VITALMAIN_DW.DO_J14_DR;

    /* Outputs for Atomic SubSystem: '<S602>/ROUTE CONFLICT' */
    M_R_L(rtb_u3ATWS_k, rtb_AND1_pg, rtb_J14DRDO_f, &VITALMAIN_B.ROUTECONFLICT_p);

    /* End of Outputs for SubSystem: '<S602>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S602>/J12B-X14-T-L' */
    VITALMAIN_DW.M_L_T_12_14 = VITALMAIN_B.ROUTECONFLICT_p.AND1;

    /* DataStoreRead: '<S603>/13A-T-WS' */
    rtb_u3ATWS_i = VITALMAIN_DW.M_T_WS_13A;

    /* Logic: '<S603>/AND1' incorporates:
     *  DataStoreRead: '<S603>/W13A//23A-RWC'
     *  DataStoreRead: '<S603>/W13B//23B-NWC'
     */
    rtb_AND1_h1 = (VITALMAIN_DW.M_W13A_23A_RWC && VITALMAIN_DW.M_W13B_23B_NWC);

    /* DataStoreRead: '<S603>/J24-DR-DO' */
    rtb_J24DRDO_j = VITALMAIN_DW.DO_J24_DR;

    /* Outputs for Atomic SubSystem: '<S603>/ROUTE CONFLICT' */
    M_R_L(rtb_u3ATWS_i, rtb_AND1_h1, rtb_J24DRDO_j, &VITALMAIN_B.ROUTECONFLICT_b);

    /* End of Outputs for SubSystem: '<S603>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S603>/J12B-X24-T-L' */
    VITALMAIN_DW.M_L_T_12_24 = VITALMAIN_B.ROUTECONFLICT_b.AND1;

    /* DataStoreRead: '<S604>/14A-T-ES' */
    rtb_u4ATES_c = VITALMAIN_DW.M_T_ES_14A;

    /* Logic: '<S604>/AND1' incorporates:
     *  DataStoreRead: '<S604>/W13A//23A-NWC'
     *  DataStoreRead: '<S604>/W13B//23B-NWC'
     */
    rtb_AND1_e = (VITALMAIN_DW.M_W13B_23B_NWC && VITALMAIN_DW.M_W13A_23A_NWC);

    /* DataStoreRead: '<S604>/J12B-DR-DO' */
    rtb_J12BDRDO_c = VITALMAIN_DW.DO_J12B_DR;

    /* Outputs for Atomic SubSystem: '<S604>/ROUTE CONFLICT' */
    M_R_L(rtb_u4ATES_c, rtb_AND1_e, rtb_J12BDRDO_c,
          &VITALMAIN_B.ROUTECONFLICT_b5);

    /* End of Outputs for SubSystem: '<S604>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S604>/J14-J12A-T-L' */
    VITALMAIN_DW.M_L_T_14_12 = VITALMAIN_B.ROUTECONFLICT_b5.AND1;

    /* DataStoreRead: '<S605>/14A-T-ES' */
    rtb_u4ATES_o = VITALMAIN_DW.M_T_ES_14A;

    /* Logic: '<S605>/AND1' incorporates:
     *  DataStoreRead: '<S605>/W13A//23A-NWC'
     *  DataStoreRead: '<S605>/W13B//23B-RWC'
     */
    rtb_AND1_pl = (VITALMAIN_DW.M_W13B_23B_RWC && VITALMAIN_DW.M_W13A_23A_NWC);

    /* DataStoreRead: '<S605>/J22-DR-DO' */
    rtb_J22DRDO = VITALMAIN_DW.DO_J22B_DR;

    /* Outputs for Atomic SubSystem: '<S605>/ROUTE CONFLICT' */
    M_R_L(rtb_u4ATES_o, rtb_AND1_pl, rtb_J22DRDO, &VITALMAIN_B.ROUTECONFLICT_c);

    /* End of Outputs for SubSystem: '<S605>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S605>/J14-J22A-T-L' */
    VITALMAIN_DW.M_L_T_14_22 = VITALMAIN_B.ROUTECONFLICT_c.AND1;

    /* DataStoreRead: '<S606>/21C-T-ES' */
    rtb_u1CTES_a = VITALMAIN_DW.M_T_ES_21C;

    /* Logic: '<S606>/AND1' incorporates:
     *  DataStoreRead: '<S606>/W11A//21A-NWC'
     *  DataStoreRead: '<S606>/W11B//21B-RWC'
     *  DataStoreRead: '<S606>/W21C-NWC'
     */
    rtb_AND1_e1 = (VITALMAIN_DW.M_W11B_21B_RWC && VITALMAIN_DW.M_W11A_21A_NWC &&
                   VITALMAIN_DW.M_W21C_NWC);

    /* Logic: '<S606>/OR1' incorporates:
     *  DataStoreRead: '<S606>/JL10-DR-DO'
     *  DataStoreRead: '<S606>/JL10-GR-DO'
     */
    rtb_OR1_pi = (VITALMAIN_DW.DO_JL10_DR || VITALMAIN_DW.DO_JL10_GR);

    /* Outputs for Atomic SubSystem: '<S606>/ROUTE CONFLICT' */
    M_R_L(rtb_u1CTES_a, rtb_AND1_e1, rtb_OR1_pi, &VITALMAIN_B.ROUTECONFLICT_ad);

    /* End of Outputs for SubSystem: '<S606>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S606>/J22A-X10-T-L' */
    VITALMAIN_DW.M_L_T_22_10 = VITALMAIN_B.ROUTECONFLICT_ad.AND1;

    /* DataStoreRead: '<S607>/21C-T-ES' */
    rtb_u1CTES_o = VITALMAIN_DW.M_T_ES_21C;

    /* Logic: '<S607>/AND2' incorporates:
     *  DataStoreRead: '<S607>/W11A//21A-NWC'
     *  DataStoreRead: '<S607>/W11B//21B-NWC'
     *  DataStoreRead: '<S607>/W21C-NWC'
     */
    rtb_AND2_h = (VITALMAIN_DW.M_W11B_21B_NWC && VITALMAIN_DW.M_W11A_21A_NWC &&
                  VITALMAIN_DW.M_W21C_NWC);

    /* Logic: '<S607>/AND1' incorporates:
     *  DataStoreRead: '<S607>/JL20-DR-DO'
     *  DataStoreRead: '<S607>/JL20-GR-DO'
     */
    rtb_AND1_pgg = (VITALMAIN_DW.DO_JL20_DR && VITALMAIN_DW.DO_JL20_GR);

    /* Outputs for Atomic SubSystem: '<S607>/ROUTE CONFLICT' */
    M_R_L(rtb_u1CTES_o, rtb_AND2_h, rtb_AND1_pgg, &VITALMAIN_B.ROUTECONFLICT_i);

    /* End of Outputs for SubSystem: '<S607>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S607>/J22A-X20-T-L' */
    VITALMAIN_DW.M_L_T_22_20 = VITALMAIN_B.ROUTECONFLICT_i.AND1;

    /* DataStoreRead: '<S608>/23A-T-WS' */
    rtb_u3ATWS_p = VITALMAIN_DW.M_T_WS_23A;

    /* Logic: '<S608>/AND1' incorporates:
     *  DataStoreRead: '<S608>/W13A//23A-NWC'
     *  DataStoreRead: '<S608>/W13B//23B-RWC'
     */
    rtb_AND1_b4 = (VITALMAIN_DW.M_W13A_23A_NWC && VITALMAIN_DW.M_W13B_23B_RWC);

    /* DataStoreRead: '<S608>/J14-DR-DO' */
    rtb_J14DRDO_fl = VITALMAIN_DW.DO_J14_DR;

    /* Outputs for Atomic SubSystem: '<S608>/ROUTE CONFLICT' */
    M_R_L(rtb_u3ATWS_p, rtb_AND1_b4, rtb_J14DRDO_fl,
          &VITALMAIN_B.ROUTECONFLICT_k);

    /* End of Outputs for SubSystem: '<S608>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S608>/J22B-X14-T-L' */
    VITALMAIN_DW.M_L_T_22_14 = VITALMAIN_B.ROUTECONFLICT_k.AND1;

    /* DataStoreRead: '<S609>/23A-T-WS' */
    rtb_u3ATWS_a = VITALMAIN_DW.M_T_WS_23A;

    /* Logic: '<S609>/AND1' incorporates:
     *  DataStoreRead: '<S609>/W13A//23A-NWC'
     *  DataStoreRead: '<S609>/W13B//23B-NWC'
     */
    rtb_AND1_fd = (VITALMAIN_DW.M_W13A_23A_NWC && VITALMAIN_DW.M_W13B_23B_NWC);

    /* DataStoreRead: '<S609>/J24-DR-DO' */
    rtb_J24DRDO_e = VITALMAIN_DW.DO_J24_DR;

    /* Outputs for Atomic SubSystem: '<S609>/ROUTE CONFLICT' */
    M_R_L(rtb_u3ATWS_a, rtb_AND1_fd, rtb_J24DRDO_e,
          &VITALMAIN_B.ROUTECONFLICT_pg);

    /* End of Outputs for SubSystem: '<S609>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S609>/J22B-X24-T-L' */
    VITALMAIN_DW.M_L_T_22_24 = VITALMAIN_B.ROUTECONFLICT_pg.AND1;

    /* DataStoreRead: '<S610>/24A-T-ES' */
    rtb_u4ATES_p = VITALMAIN_DW.M_T_ES_24A;

    /* Logic: '<S610>/AND1' incorporates:
     *  DataStoreRead: '<S610>/W13A//23A-RWC'
     *  DataStoreRead: '<S610>/W13B//23B-NWC'
     */
    rtb_AND1_df = (VITALMAIN_DW.M_W13B_23B_NWC && VITALMAIN_DW.M_W13A_23A_RWC);

    /* DataStoreRead: '<S610>/J12B-DR-DO' */
    rtb_J12BDRDO_ct = VITALMAIN_DW.DO_J12B_DR;

    /* Outputs for Atomic SubSystem: '<S610>/ROUTE CONFLICT' */
    M_R_L(rtb_u4ATES_p, rtb_AND1_df, rtb_J12BDRDO_ct,
          &VITALMAIN_B.ROUTECONFLICT_o);

    /* End of Outputs for SubSystem: '<S610>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S610>/J24-J12A-T-L' */
    VITALMAIN_DW.M_L_T_24_12 = VITALMAIN_B.ROUTECONFLICT_o.AND1;

    /* DataStoreRead: '<S611>/24A-T-ES' */
    rtb_u4ATES_dt = VITALMAIN_DW.M_T_ES_24A;

    /* Logic: '<S611>/AND1' incorporates:
     *  DataStoreRead: '<S611>/W13A//23A-NWC'
     *  DataStoreRead: '<S611>/W13B//23B-NWC'
     */
    rtb_AND1_b3 = (VITALMAIN_DW.M_W13B_23B_NWC && VITALMAIN_DW.M_W13A_23A_NWC);

    /* DataStoreRead: '<S611>/J22B-DR-DO' */
    rtb_J22BDRDO_m = VITALMAIN_DW.DO_J22B_DR;

    /* Outputs for Atomic SubSystem: '<S611>/ROUTE CONFLICT' */
    M_R_L(rtb_u4ATES_dt, rtb_AND1_b3, rtb_J22BDRDO_m,
          &VITALMAIN_B.ROUTECONFLICT_e);

    /* End of Outputs for SubSystem: '<S611>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S611>/J24-J22A-T-L' */
    VITALMAIN_DW.M_L_T_24_22 = VITALMAIN_B.ROUTECONFLICT_e.AND1;

    /* Logic: '<S612>/AND2' incorporates:
     *  DataStoreRead: '<S612>/10B-S-WS'
     *  DataStoreRead: '<S612>/10B-T-WS'
     */
    rtb_AND2_ar = (VITALMAIN_DW.M_T_WS_10B && VITALMAIN_DW.M_S_WS_10B);

    /* Logic: '<S612>/AND1' incorporates:
     *  DataStoreRead: '<S612>/W11A//21A-NWC'
     *  DataStoreRead: '<S612>/W11B//21B-RWC'
     *  DataStoreRead: '<S612>/W21C-RWC'
     */
    rtb_AND1_po = (VITALMAIN_DW.M_W11A_21A_NWC && VITALMAIN_DW.M_W11B_21B_RWC &&
                   VITALMAIN_DW.M_W21C_RWC);

    /* DataStoreRead: '<S612>/DEP-GR-DO' */
    rtb_DEPGRDO_d = VITALMAIN_DW.M_DEP_GR_DO;

    /* Outputs for Atomic SubSystem: '<S612>/ROUTE CONFLICT' */
    M_R_L(rtb_AND2_ar, rtb_AND1_po, rtb_DEPGRDO_d, &VITALMAIN_B.ROUTECONFLICT_h1);

    /* End of Outputs for SubSystem: '<S612>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S612>/JL10-DEP-S-L' */
    VITALMAIN_DW.M_L_S_10_DEP = VITALMAIN_B.ROUTECONFLICT_h1.AND1;

    /* Logic: '<S613>/AND2' incorporates:
     *  DataStoreRead: '<S613>/10B-S-WS'
     *  DataStoreRead: '<S613>/10B-T-WS'
     */
    rtb_AND2_j = (VITALMAIN_DW.M_T_WS_10B && VITALMAIN_DW.M_S_WS_10B);

    /* Logic: '<S613>/AND1' incorporates:
     *  DataStoreRead: '<S613>/W11A//21A-NWC'
     *  DataStoreRead: '<S613>/W11B//21B-NWC'
     */
    rtb_AND1_pk = (VITALMAIN_DW.M_W11A_21A_NWC && VITALMAIN_DW.M_W11B_21B_NWC);

    /* DataStoreRead: '<S613>/J12A-DR-DO' */
    rtb_J12ADRDO_d = VITALMAIN_DW.DO_J12A_DR;

    /* Outputs for Atomic SubSystem: '<S613>/ROUTE CONFLICT' */
    M_R_L(rtb_AND2_j, rtb_AND1_pk, rtb_J12ADRDO_d, &VITALMAIN_B.ROUTECONFLICT_as);

    /* End of Outputs for SubSystem: '<S613>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S613>/JL10-J12B-T-L' */
    VITALMAIN_DW.M_L_T_10_12 = VITALMAIN_B.ROUTECONFLICT_as.AND1;

    /* Logic: '<S614>/AND2' incorporates:
     *  DataStoreRead: '<S614>/10B-S-WS'
     *  DataStoreRead: '<S614>/10B-T-WS'
     */
    rtb_AND2_b4 = (VITALMAIN_DW.M_T_WS_10B && VITALMAIN_DW.M_S_WS_10B);

    /* Logic: '<S614>/AND1' incorporates:
     *  DataStoreRead: '<S614>/W11A//21A-NWC'
     *  DataStoreRead: '<S614>/W11B//21B-RWC'
     *  DataStoreRead: '<S614>/W21C-NWC'
     */
    rtb_AND1_hc = (VITALMAIN_DW.M_W11A_21A_NWC && VITALMAIN_DW.M_W11B_21B_RWC &&
                   VITALMAIN_DW.M_W21C_NWC);

    /* DataStoreRead: '<S614>/J22A-DR-DO' */
    rtb_J22ADRDO_l = VITALMAIN_DW.DO_J22A_DR;

    /* Outputs for Atomic SubSystem: '<S614>/ROUTE CONFLICT' */
    M_R_L(rtb_AND2_b4, rtb_AND1_hc, rtb_J22ADRDO_l,
          &VITALMAIN_B.ROUTECONFLICT_kq);

    /* End of Outputs for SubSystem: '<S614>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S614>/JL10-J22B-T-L' */
    VITALMAIN_DW.M_L_T_10_22 = VITALMAIN_B.ROUTECONFLICT_kq.AND1;

    /* Logic: '<S615>/AND2' incorporates:
     *  DataStoreRead: '<S615>/10B-S-WS'
     *  DataStoreRead: '<S615>/10B-T-WS'
     */
    rtb_AND2_p = (VITALMAIN_DW.M_T_WS_10B && VITALMAIN_DW.M_S_WS_10B);

    /* Logic: '<S615>/AND1' incorporates:
     *  DataStoreRead: '<S615>/W11A//21A-NWC'
     *  DataStoreRead: '<S615>/W11B//21B-NWC'
     *  DataStoreRead: '<S615>/W21C-RWC'
     */
    rtb_AND1_on = (VITALMAIN_DW.M_W11A_21A_NWC && VITALMAIN_DW.M_W11B_21B_NWC &&
                   VITALMAIN_DW.M_W21C_RWC);

    /* DataStoreRead: '<S615>/DEP-GR-DO' */
    rtb_DEPGRDO_h = VITALMAIN_DW.M_DEP_GR_DO;

    /* Outputs for Atomic SubSystem: '<S615>/ROUTE CONFLICT' */
    M_R_L(rtb_AND2_p, rtb_AND1_on, rtb_DEPGRDO_h, &VITALMAIN_B.ROUTECONFLICT_p1);

    /* End of Outputs for SubSystem: '<S615>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S615>/JL20-DEP-S-L' */
    VITALMAIN_DW.M_L_S_20_DEP = VITALMAIN_B.ROUTECONFLICT_p1.AND1;

    /* Logic: '<S616>/AND2' incorporates:
     *  DataStoreRead: '<S616>/20B-S-WS'
     *  DataStoreRead: '<S616>/20B-T-WS'
     */
    rtb_AND2_i = (VITALMAIN_DW.M_T_WS_20B && VITALMAIN_DW.M_S_WS_20B);

    /* Logic: '<S616>/AND1' incorporates:
     *  DataStoreRead: '<S616>/W11A//21A-RWC'
     *  DataStoreRead: '<S616>/W11B//21B-NWC'
     */
    rtb_AND1_o3 = (VITALMAIN_DW.M_W11A_21A_RWC && VITALMAIN_DW.M_W11B_21B_NWC);

    /* DataStoreRead: '<S616>/J12A-DR-DO' */
    rtb_J12ADRDO_f = VITALMAIN_DW.DO_J12A_DR;

    /* Outputs for Atomic SubSystem: '<S616>/ROUTE CONFLICT' */
    M_R_L(rtb_AND2_i, rtb_AND1_o3, rtb_J12ADRDO_f, &VITALMAIN_B.ROUTECONFLICT_ob);

    /* End of Outputs for SubSystem: '<S616>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S616>/JL20-J12B-T-L' */
    VITALMAIN_DW.M_L_T_20_12 = VITALMAIN_B.ROUTECONFLICT_ob.AND1;

    /* Logic: '<S617>/AND2' incorporates:
     *  DataStoreRead: '<S617>/20B-S-WS'
     *  DataStoreRead: '<S617>/20B-T-WS'
     */
    rtb_AND2_h1 = (VITALMAIN_DW.M_T_WS_20B && VITALMAIN_DW.M_S_WS_20B);

    /* Logic: '<S617>/AND1' incorporates:
     *  DataStoreRead: '<S617>/W11A//21A-NWC'
     *  DataStoreRead: '<S617>/W11B//21B-NWC'
     *  DataStoreRead: '<S617>/W21C-NWC'
     */
    rtb_AND1_i4 = (VITALMAIN_DW.M_W11A_21A_NWC && VITALMAIN_DW.M_W11B_21B_NWC &&
                   VITALMAIN_DW.M_W21C_NWC);

    /* DataStoreRead: '<S617>/J22A-DR-DO' */
    rtb_J22ADRDO_n = VITALMAIN_DW.DO_J22A_DR;

    /* Outputs for Atomic SubSystem: '<S617>/ROUTE CONFLICT' */
    M_R_L(rtb_AND2_h1, rtb_AND1_i4, rtb_J22ADRDO_n, &VITALMAIN_B.ROUTECONFLICT_f);

    /* End of Outputs for SubSystem: '<S617>/ROUTE CONFLICT' */

    /* DataStoreWrite: '<S617>/JL20-J22B-T-L' */
    VITALMAIN_DW.M_L_T_20_22 = VITALMAIN_B.ROUTECONFLICT_f.AND1;

    /* DataStoreRead: '<S638>/10B-T-ES-RL' */
    rtb_u0BTESRL = VITALMAIN_DW.M_RL_T_ES_10B;

    /* DataStoreRead: '<S638>/TRUE' */
    rtb_TRUE_nq = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S638>/TmpSignal ConversionAtROUTE LOCKInport2' */
    rtb_TmpSignalConversionAtROUTEL = rtb_TRUE_nq;

    /* DataStoreRead: '<S638>/FALSE' */
    rtb_FALSE_mu = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S638>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalConversionAtROUT_g = rtb_FALSE_mu;

    /* SignalConversion: '<S638>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalConversionAtROUT_m = rtb_FALSE_mu;

    /* SignalConversion: '<S638>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalConversionAtROUT_c = rtb_FALSE_mu;

    /* SignalConversion: '<S638>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalConversionAtROU_gd = rtb_FALSE_mu;

    /* DataStoreRead: '<S638>/10B-S-ES-RL' */
    rtb_u0BSESRL = VITALMAIN_DW.M_RL_S_ES_10B;

    /* DataStoreRead: '<S638>/10B-TP' */
    rtb_u0BTP_b = VITALMAIN_DW.M_TP_10B;

    /* DataStoreRead: '<S638>/10B-RLS' */
    rtb_u0BRLS = VITALMAIN_DW.M_RLS_10B;

    /* Outputs for Atomic SubSystem: '<S638>/ROUTE LOCK' */
    M_ES_WS(rtb_u0BTESRL, rtb_TmpSignalConversionAtROUTEL,
            rtb_TmpSignalConversionAtROUT_g, rtb_TmpSignalConversionAtROUT_m,
            rtb_TmpSignalConversionAtROUT_c, rtb_TmpSignalConversionAtROU_gd,
            rtb_u0BSESRL, rtb_TRUE_nq, rtb_FALSE_mu, rtb_u0BTP_b, rtb_u0BRLS,
            &VITALMAIN_B.ROUTELOCK, &VITALMAIN_DW.ROUTELOCK);

    /* End of Outputs for SubSystem: '<S638>/ROUTE LOCK' */

    /* DataStoreWrite: '<S638>/10B-S-ES' */
    VITALMAIN_DW.M_S_ES_10B = VITALMAIN_B.ROUTELOCK.AND3;

    /* DataStoreWrite: '<S638>/10B-T-ES' */
    VITALMAIN_DW.M_T_ES_10B = VITALMAIN_B.ROUTELOCK.AND1;

    /* DataStoreRead: '<S639>/TRUE' */
    rtb_TRUE_px = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S639>/TmpSignal ConversionAtROUTE LOCKInport1' */
    rtb_TmpSignalConversionAtROU_g1 = rtb_TRUE_px;

    /* DataStoreRead: '<S639>/11A-T-WS' */
    rtb_u1ATWS_h = VITALMAIN_DW.M_T_WS_11A;

    /* DataStoreRead: '<S639>/W11A//21A-RWZ' */
    rtb_W11A21ARWZ = VITALMAIN_DW.M_W11A_21A_RWZ;

    /* SignalConversion: '<S639>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalConversionAtROU_gg = rtb_W11A21ARWZ;

    /* DataStoreRead: '<S639>/FALSE' */
    rtb_FALSE_eg = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S639>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalConversionAtROU_md = rtb_FALSE_eg;

    /* SignalConversion: '<S639>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalConversionAtROU_cc = rtb_FALSE_eg;

    /* DataStoreRead: '<S639>/11A-S-WS' */
    rtb_u1ASWS_b = VITALMAIN_DW.M_S_WS_11A;

    /* DataStoreRead: '<S639>/10B-TP' */
    rtb_u0BTP_f = VITALMAIN_DW.M_TP_10B;

    /* DataStoreRead: '<S639>/10B-RLS' */
    rtb_u0BRLS_e = VITALMAIN_DW.M_RLS_10B;

    /* Outputs for Atomic SubSystem: '<S639>/ROUTE LOCK' */
    M_ES_WS(rtb_TmpSignalConversionAtROU_g1, rtb_u1ATWS_h,
            rtb_TmpSignalConversionAtROU_gg, rtb_TmpSignalConversionAtROU_md,
            rtb_TmpSignalConversionAtROU_cc, rtb_FALSE_eg, rtb_TRUE_px,
            rtb_u1ASWS_b, rtb_W11A21ARWZ, rtb_u0BTP_f, rtb_u0BRLS_e,
            &VITALMAIN_B.ROUTELOCK_h, &VITALMAIN_DW.ROUTELOCK_h);

    /* End of Outputs for SubSystem: '<S639>/ROUTE LOCK' */

    /* DataStoreWrite: '<S639>/10B-S-WS' */
    VITALMAIN_DW.M_S_WS_10B = VITALMAIN_B.ROUTELOCK_h.AND3;

    /* DataStoreWrite: '<S639>/10B-T-WS' */
    VITALMAIN_DW.M_T_WS_10B = VITALMAIN_B.ROUTELOCK_h.AND1;

    /* DataStoreRead: '<S640>/TRUE' */
    rtb_TRUE_mq = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S640>/TmpSignal ConversionAtROUTE LOCKInport1' */
    rtb_TmpSignalConversionAtRO_g13 = rtb_TRUE_mq;

    /* Logic: '<S640>/OR2' incorporates:
     *  DataStoreRead: '<S640>/10B-T-ES'
     *  DataStoreRead: '<S640>/21A-T-ES'
     *  DataStoreRead: '<S640>/W11A//21A-NWZ'
     *  Logic: '<S640>/OR1'
     */
    rtb_OR2_j = (VITALMAIN_DW.M_T_ES_10B && (VITALMAIN_DW.M_T_ES_21A ||
      VITALMAIN_DW.M_W11A_21A_NWZ));

    /* DataStoreRead: '<S640>/FALSE' */
    rtb_FALSE_gs = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S640>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalConversionAtRO_ggh = rtb_FALSE_gs;

    /* SignalConversion: '<S640>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalConversionAtRO_mda = rtb_FALSE_gs;

    /* SignalConversion: '<S640>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalConversionAtRO_ccg = rtb_FALSE_gs;

    /* SignalConversion: '<S640>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalConversionAtRO_gdj = rtb_FALSE_gs;

    /* DataStoreRead: '<S640>/10B-S-ES' */
    rtb_u0BSES = VITALMAIN_DW.M_S_ES_10B;

    /* DataStoreRead: '<S640>/11A-TP' */
    rtb_u1ATP_n = VITALMAIN_DW.M_TP_11A;

    /* DataStoreRead: '<S640>/11A-RLS' */
    rtb_u1ARLS = VITALMAIN_DW.M_RLS_11A;

    /* Outputs for Atomic SubSystem: '<S640>/ROUTE LOCK' */
    M_ES_WS(rtb_TmpSignalConversionAtRO_g13, rtb_OR2_j,
            rtb_TmpSignalConversionAtRO_ggh, rtb_TmpSignalConversionAtRO_mda,
            rtb_TmpSignalConversionAtRO_ccg, rtb_TmpSignalConversionAtRO_gdj,
            rtb_TRUE_mq, rtb_u0BSES, rtb_FALSE_gs, rtb_u1ATP_n, rtb_u1ARLS,
            &VITALMAIN_B.ROUTELOCK_g, &VITALMAIN_DW.ROUTELOCK_g);

    /* End of Outputs for SubSystem: '<S640>/ROUTE LOCK' */

    /* DataStoreWrite: '<S640>/11A-S-ES' */
    VITALMAIN_DW.M_S_ES_11A = VITALMAIN_B.ROUTELOCK_g.AND3;

    /* DataStoreWrite: '<S640>/11A-T-ES' */
    VITALMAIN_DW.M_T_ES_11A = VITALMAIN_B.ROUTELOCK_g.AND1;

    /* DataStoreRead: '<S641>/TRUE' */
    rtb_TRUE_oh = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S641>/TmpSignal ConversionAtROUTE LOCKInport1' */
    rtb_TmpSignalConversionAtR_g13e = rtb_TRUE_oh;

    /* DataStoreRead: '<S641>/11B-T-WS' */
    rtb_u1BTWS_hl = VITALMAIN_DW.M_T_WS_11B;

    /* DataStoreRead: '<S641>/FALSE' */
    rtb_FALSE_gb = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S641>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalConversionAtR_ggho = rtb_FALSE_gb;

    /* SignalConversion: '<S641>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalConversionAtR_mda1 = rtb_FALSE_gb;

    /* SignalConversion: '<S641>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalConversionAtR_ccgp = rtb_FALSE_gb;

    /* SignalConversion: '<S641>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalConversionAtR_gdjd = rtb_FALSE_gb;

    /* DataStoreRead: '<S641>/11B-S-WS' */
    rtb_u1BSWS_k0 = VITALMAIN_DW.M_S_WS_11B;

    /* DataStoreRead: '<S641>/11A-TP' */
    rtb_u1ATP_ar = VITALMAIN_DW.M_TP_11A;

    /* DataStoreRead: '<S641>/11A-RLS' */
    rtb_u1ARLS_n = VITALMAIN_DW.M_RLS_11A;

    /* Outputs for Atomic SubSystem: '<S641>/ROUTE LOCK' */
    M_ES_WS(rtb_TmpSignalConversionAtR_g13e, rtb_u1BTWS_hl,
            rtb_TmpSignalConversionAtR_ggho, rtb_TmpSignalConversionAtR_mda1,
            rtb_TmpSignalConversionAtR_ccgp, rtb_TmpSignalConversionAtR_gdjd,
            rtb_TRUE_oh, rtb_u1BSWS_k0, rtb_FALSE_gb, rtb_u1ATP_ar, rtb_u1ARLS_n,
            &VITALMAIN_B.ROUTELOCK_c, &VITALMAIN_DW.ROUTELOCK_c);

    /* End of Outputs for SubSystem: '<S641>/ROUTE LOCK' */

    /* DataStoreWrite: '<S641>/11A-S-WS' */
    VITALMAIN_DW.M_S_WS_11A = VITALMAIN_B.ROUTELOCK_c.AND3;

    /* DataStoreWrite: '<S641>/11A-T-ES' */
    VITALMAIN_DW.M_T_WS_11A = VITALMAIN_B.ROUTELOCK_c.AND1;

    /* DataStoreRead: '<S642>/TRUE' */
    rtb_TRUE_g2 = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S642>/TmpSignal ConversionAtROUTE LOCKInport1' */
    rtb_TmpSignalConversionAt_g13en = rtb_TRUE_g2;

    /* DataStoreRead: '<S642>/11A-T-ES' */
    rtb_u1ATES_d = VITALMAIN_DW.M_T_ES_11A;

    /* DataStoreRead: '<S642>/FALSE' */
    rtb_FALSE_dy = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S642>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalConversionAt_gghok = rtb_FALSE_dy;

    /* SignalConversion: '<S642>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalConversionAt_mda10 = rtb_FALSE_dy;

    /* SignalConversion: '<S642>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalConversionAt_ccgp5 = rtb_FALSE_dy;

    /* SignalConversion: '<S642>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalConversionAt_gdjdy = rtb_FALSE_dy;

    /* DataStoreRead: '<S642>/11A-S-ES' */
    rtb_u1ASES_j = VITALMAIN_DW.M_S_ES_11A;

    /* DataStoreRead: '<S642>/11B-TP' */
    rtb_u1BTP_g = VITALMAIN_DW.M_TP_11B;

    /* DataStoreRead: '<S642>/11B-RLS' */
    rtb_u1BRLS = VITALMAIN_DW.M_RLS_11B;

    /* Outputs for Atomic SubSystem: '<S642>/ROUTE LOCK' */
    M_ES_WS(rtb_TmpSignalConversionAt_g13en, rtb_u1ATES_d,
            rtb_TmpSignalConversionAt_gghok, rtb_TmpSignalConversionAt_mda10,
            rtb_TmpSignalConversionAt_ccgp5, rtb_TmpSignalConversionAt_gdjdy,
            rtb_TRUE_g2, rtb_u1ASES_j, rtb_FALSE_dy, rtb_u1BTP_g, rtb_u1BRLS,
            &VITALMAIN_B.ROUTELOCK_b, &VITALMAIN_DW.ROUTELOCK_b);

    /* End of Outputs for SubSystem: '<S642>/ROUTE LOCK' */

    /* DataStoreWrite: '<S642>/11B-S-ES' */
    VITALMAIN_DW.M_S_ES_11B = VITALMAIN_B.ROUTELOCK_b.AND3;

    /* DataStoreWrite: '<S642>/11B-T-ES' */
    VITALMAIN_DW.M_T_ES_11B = VITALMAIN_B.ROUTELOCK_b.AND1;

    /* DataStoreRead: '<S643>/11B-T-WS-RL' */
    rtb_u1BTWSRL = VITALMAIN_DW.M_RL_T_WS_11B;

    /* DataStoreRead: '<S643>/21B-T-WS' */
    rtb_u1BTWS_p = VITALMAIN_DW.M_T_WS_21B;

    /* DataStoreRead: '<S643>/W11B//21B-NWZ' */
    rtb_W11B21BNWZ = VITALMAIN_DW.M_W11B_21B_NWZ;

    /* SignalConversion: '<S643>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalConversionA_gghokx = rtb_W11B21BNWZ;

    /* DataStoreRead: '<S643>/FALSE' */
    rtb_FALSE_bo = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S643>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalConversionA_mda10h = rtb_FALSE_bo;

    /* SignalConversion: '<S643>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalConversionA_ccgp5v = rtb_FALSE_bo;

    /* DataStoreRead: '<S643>/TRUE' */
    rtb_TRUE_d = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S643>/21B-S-WS' */
    rtb_u1BSWS_n = VITALMAIN_DW.M_S_WS_21B;

    /* DataStoreRead: '<S643>/11B-TP' */
    rtb_u1BTP_po = VITALMAIN_DW.M_TP_11B;

    /* DataStoreRead: '<S643>/11B-RLS' */
    rtb_u1BRLS_k = VITALMAIN_DW.M_RLS_11B;

    /* Outputs for Atomic SubSystem: '<S643>/ROUTE LOCK' */
    M_ES_WS(rtb_u1BTWSRL, rtb_u1BTWS_p, rtb_TmpSignalConversionA_gghokx,
            rtb_TmpSignalConversionA_mda10h, rtb_TmpSignalConversionA_ccgp5v,
            rtb_FALSE_bo, rtb_TRUE_d, rtb_u1BSWS_n, rtb_W11B21BNWZ, rtb_u1BTP_po,
            rtb_u1BRLS_k, &VITALMAIN_B.ROUTELOCK_p, &VITALMAIN_DW.ROUTELOCK_p);

    /* End of Outputs for SubSystem: '<S643>/ROUTE LOCK' */

    /* DataStoreWrite: '<S643>/11B-S-WS' */
    VITALMAIN_DW.M_S_WS_11B = VITALMAIN_B.ROUTELOCK_p.AND3;

    /* DataStoreWrite: '<S643>/11B-T-WS' */
    VITALMAIN_DW.M_T_WS_11B = VITALMAIN_B.ROUTELOCK_p.AND1;

    /* DataStoreRead: '<S644>/TRUE' */
    rtb_TRUE_l = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S644>/11B-T-ES' */
    rtb_u1BTES_f = VITALMAIN_DW.M_T_ES_11B;

    /* DataStoreRead: '<S644>/W11B//21B-RWZ' */
    rtb_W11B21BRWZ = VITALMAIN_DW.M_W11B_21B_RWZ;

    /* DataStoreRead: '<S644>/FALSE' */
    rtb_FALSE_fj = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S644>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalConversion_mda10hh = rtb_FALSE_fj;

    /* SignalConversion: '<S644>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalConversion_ccgp5v0 = rtb_FALSE_fj;

    /* SignalConversion: '<S644>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalConversionA_gdjdyz = rtb_FALSE_fj;

    /* SignalConversion: '<S644>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalConversionAtROUT_d = rtb_FALSE_fj;

    /* SignalConversion: '<S644>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalConversionAtROUT_h = rtb_FALSE_fj;

    /* DataStoreRead: '<S644>/12A-TP' */
    rtb_u2ATP_m = VITALMAIN_DW.M_TP_12A;

    /* DataStoreRead: '<S644>/12A-RLS' */
    rtb_u2ARLS = VITALMAIN_DW.M_RLS_12A;

    /* Outputs for Atomic SubSystem: '<S644>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_l, rtb_u1BTES_f, rtb_W11B21BRWZ,
            rtb_TmpSignalConversion_mda10hh, rtb_TmpSignalConversion_ccgp5v0,
            rtb_TmpSignalConversionA_gdjdyz, rtb_TmpSignalConversionAtROUT_d,
            rtb_TmpSignalConversionAtROUT_h, rtb_FALSE_fj, rtb_u2ATP_m,
            rtb_u2ARLS, &VITALMAIN_B.ROUTELOCK_k, &VITALMAIN_DW.ROUTELOCK_k);

    /* End of Outputs for SubSystem: '<S644>/ROUTE LOCK' */

    /* DataStoreWrite: '<S644>/12A-T-ES' */
    VITALMAIN_DW.M_T_ES_12A = VITALMAIN_B.ROUTELOCK_k.AND1;

    /* DataStoreRead: '<S645>/TRUE' */
    rtb_TRUE_mi = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S645>/12A-T-ES' */
    rtb_u2ATES = VITALMAIN_DW.M_T_ES_12A;

    /* DataStoreRead: '<S645>/FALSE' */
    rtb_FALSE_o = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S645>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalConversion_gghokxh = rtb_FALSE_o;

    /* SignalConversion: '<S645>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalConversio_mda10hh4 = rtb_FALSE_o;

    /* SignalConversion: '<S645>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalConversio_ccgp5v0t = rtb_FALSE_o;

    /* SignalConversion: '<S645>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalConversion_gdjdyzn = rtb_FALSE_o;

    /* SignalConversion: '<S645>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalConversionAtROU_dh = rtb_FALSE_o;

    /* SignalConversion: '<S645>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalConversionAtROU_hx = rtb_FALSE_o;

    /* DataStoreRead: '<S645>/12B-TP' */
    rtb_u2BTP = VITALMAIN_DW.M_TP_12B;

    /* DataStoreRead: '<S645>/12B-RLS' */
    rtb_u2BRLS = VITALMAIN_DW.M_RLS_12B;

    /* Outputs for Atomic SubSystem: '<S645>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_mi, rtb_u2ATES, rtb_TmpSignalConversion_gghokxh,
            rtb_TmpSignalConversio_mda10hh4, rtb_TmpSignalConversio_ccgp5v0t,
            rtb_TmpSignalConversion_gdjdyzn, rtb_TmpSignalConversionAtROU_dh,
            rtb_TmpSignalConversionAtROU_hx, rtb_FALSE_o, rtb_u2BTP, rtb_u2BRLS,
            &VITALMAIN_B.ROUTELOCK_i, &VITALMAIN_DW.ROUTELOCK_i);

    /* End of Outputs for SubSystem: '<S645>/ROUTE LOCK' */

    /* DataStoreWrite: '<S645>/12B-T-ES' */
    VITALMAIN_DW.M_T_ES_12B = VITALMAIN_B.ROUTELOCK_i.AND1;

    /* DataStoreRead: '<S646>/TRUE' */
    rtb_TRUE_ke = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S646>/12C-T-WS' */
    rtb_u2CTWS = VITALMAIN_DW.M_T_WS_12C;

    /* DataStoreRead: '<S646>/FALSE' */
    rtb_FALSE_c = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S646>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalConversio_gghokxhy = rtb_FALSE_c;

    /* SignalConversion: '<S646>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalConversi_mda10hh40 = rtb_FALSE_c;

    /* SignalConversion: '<S646>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalConversi_ccgp5v0tc = rtb_FALSE_c;

    /* SignalConversion: '<S646>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalConversio_gdjdyznj = rtb_FALSE_c;

    /* SignalConversion: '<S646>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalConversionAtRO_dhm = rtb_FALSE_c;

    /* SignalConversion: '<S646>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalConversionAtRO_hxy = rtb_FALSE_c;

    /* DataStoreRead: '<S646>/12B-TP' */
    rtb_u2BTP_g = VITALMAIN_DW.M_TP_12B;

    /* DataStoreRead: '<S646>/12B-RLS' */
    rtb_u2BRLS_b = VITALMAIN_DW.M_RLS_12B;

    /* Outputs for Atomic SubSystem: '<S646>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_ke, rtb_u2CTWS, rtb_TmpSignalConversio_gghokxhy,
            rtb_TmpSignalConversi_mda10hh40, rtb_TmpSignalConversi_ccgp5v0tc,
            rtb_TmpSignalConversio_gdjdyznj, rtb_TmpSignalConversionAtRO_dhm,
            rtb_TmpSignalConversionAtRO_hxy, rtb_FALSE_c, rtb_u2BTP_g,
            rtb_u2BRLS_b, &VITALMAIN_B.ROUTELOCK_l, &VITALMAIN_DW.ROUTELOCK_l);

    /* End of Outputs for SubSystem: '<S646>/ROUTE LOCK' */

    /* DataStoreWrite: '<S646>/12B-T-WS' */
    VITALMAIN_DW.M_T_WS_12B = VITALMAIN_B.ROUTELOCK_l.AND1;

    /* DataStoreRead: '<S647>/TRUE' */
    rtb_TRUE_jw = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S647>/12B-T-ES' */
    rtb_u2BTES = VITALMAIN_DW.M_T_ES_12B;

    /* DataStoreRead: '<S647>/FALSE' */
    rtb_FALSE_p = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S647>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalConversi_gghokxhyn = rtb_FALSE_p;

    /* SignalConversion: '<S647>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalConvers_mda10hh403 = rtb_FALSE_p;

    /* SignalConversion: '<S647>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalConvers_ccgp5v0tcu = rtb_FALSE_p;

    /* SignalConversion: '<S647>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalConversi_gdjdyznjj = rtb_FALSE_p;

    /* SignalConversion: '<S647>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalConversionAtR_dhmn = rtb_FALSE_p;

    /* SignalConversion: '<S647>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalConversionAtR_hxy2 = rtb_FALSE_p;

    /* DataStoreRead: '<S647>/12C-TP' */
    rtb_u2CTP = VITALMAIN_DW.M_TP_12C;

    /* DataStoreRead: '<S647>/12C-RLS' */
    rtb_u2CRLS = VITALMAIN_DW.M_RLS_12C;

    /* Outputs for Atomic SubSystem: '<S647>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_jw, rtb_u2BTES, rtb_TmpSignalConversi_gghokxhyn,
            rtb_TmpSignalConvers_mda10hh403, rtb_TmpSignalConvers_ccgp5v0tcu,
            rtb_TmpSignalConversi_gdjdyznjj, rtb_TmpSignalConversionAtR_dhmn,
            rtb_TmpSignalConversionAtR_hxy2, rtb_FALSE_p, rtb_u2CTP, rtb_u2CRLS,
            &VITALMAIN_B.ROUTELOCK_ls, &VITALMAIN_DW.ROUTELOCK_ls);

    /* End of Outputs for SubSystem: '<S647>/ROUTE LOCK' */

    /* DataStoreWrite: '<S647>/12C-T-ES' */
    VITALMAIN_DW.M_T_ES_12C = VITALMAIN_B.ROUTELOCK_ls.AND1;

    /* DataStoreRead: '<S648>/TRUE' */
    rtb_TRUE_of = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S648>/12D-T-WS' */
    rtb_u2DTWS = VITALMAIN_DW.M_T_WS_12D;

    /* DataStoreRead: '<S648>/FALSE' */
    rtb_FALSE_ku = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S648>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalConvers_gghokxhyny = rtb_FALSE_ku;

    /* SignalConversion: '<S648>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalConver_mda10hh403q = rtb_FALSE_ku;

    /* SignalConversion: '<S648>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalConver_ccgp5v0tcud = rtb_FALSE_ku;

    /* SignalConversion: '<S648>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalConvers_gdjdyznjj1 = rtb_FALSE_ku;

    /* SignalConversion: '<S648>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalConversionAt_dhmnr = rtb_FALSE_ku;

    /* SignalConversion: '<S648>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalConversionAt_hxy2n = rtb_FALSE_ku;

    /* DataStoreRead: '<S648>/12C-TP' */
    rtb_u2CTP_n = VITALMAIN_DW.M_TP_12C;

    /* DataStoreRead: '<S648>/12C-RLS' */
    rtb_u2CRLS_k = VITALMAIN_DW.M_RLS_12C;

    /* Outputs for Atomic SubSystem: '<S648>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_of, rtb_u2DTWS, rtb_TmpSignalConvers_gghokxhyny,
            rtb_TmpSignalConver_mda10hh403q, rtb_TmpSignalConver_ccgp5v0tcud,
            rtb_TmpSignalConvers_gdjdyznjj1, rtb_TmpSignalConversionAt_dhmnr,
            rtb_TmpSignalConversionAt_hxy2n, rtb_FALSE_ku, rtb_u2CTP_n,
            rtb_u2CRLS_k, &VITALMAIN_B.ROUTELOCK_f, &VITALMAIN_DW.ROUTELOCK_f);

    /* End of Outputs for SubSystem: '<S648>/ROUTE LOCK' */

    /* DataStoreWrite: '<S648>/12C-T-WS' */
    VITALMAIN_DW.M_T_WS_12C = VITALMAIN_B.ROUTELOCK_f.AND1;

    /* DataStoreRead: '<S649>/TRUE' */
    rtb_TRUE_oa = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S649>/12C-T-ES' */
    rtb_u2CTES = VITALMAIN_DW.M_T_ES_12C;

    /* DataStoreRead: '<S649>/FALSE' */
    rtb_FALSE_dh = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S649>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalConver_gghokxhynyy = rtb_FALSE_dh;

    /* SignalConversion: '<S649>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalConve_mda10hh403qq = rtb_FALSE_dh;

    /* SignalConversion: '<S649>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalConve_ccgp5v0tcudo = rtb_FALSE_dh;

    /* SignalConversion: '<S649>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalConver_gdjdyznjj1c = rtb_FALSE_dh;

    /* SignalConversion: '<S649>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalConversionA_dhmnr0 = rtb_FALSE_dh;

    /* SignalConversion: '<S649>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalConversionA_hxy2nw = rtb_FALSE_dh;

    /* DataStoreRead: '<S649>/12D-TP' */
    rtb_u2DTP = VITALMAIN_DW.M_TP_12D;

    /* DataStoreRead: '<S649>/12D-RLS' */
    rtb_u2DRLS = VITALMAIN_DW.M_RLS_12D;

    /* Outputs for Atomic SubSystem: '<S649>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_oa, rtb_u2CTES, rtb_TmpSignalConver_gghokxhynyy,
            rtb_TmpSignalConve_mda10hh403qq, rtb_TmpSignalConve_ccgp5v0tcudo,
            rtb_TmpSignalConver_gdjdyznjj1c, rtb_TmpSignalConversionA_dhmnr0,
            rtb_TmpSignalConversionA_hxy2nw, rtb_FALSE_dh, rtb_u2DTP, rtb_u2DRLS,
            &VITALMAIN_B.ROUTELOCK_cw, &VITALMAIN_DW.ROUTELOCK_cw);

    /* End of Outputs for SubSystem: '<S649>/ROUTE LOCK' */

    /* DataStoreWrite: '<S649>/12D-T-ES' */
    VITALMAIN_DW.M_T_ES_12D = VITALMAIN_B.ROUTELOCK_cw.AND1;

    /* DataStoreRead: '<S650>/TRUE' */
    rtb_TRUE_lq = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S650>/12E-T-WS' */
    rtb_u2ETWS = VITALMAIN_DW.M_T_WS_12E;

    /* DataStoreRead: '<S650>/FALSE' */
    rtb_FALSE_nd = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S650>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalConve_gghokxhynyyh = rtb_FALSE_nd;

    /* SignalConversion: '<S650>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalConv_mda10hh403qq5 = rtb_FALSE_nd;

    /* SignalConversion: '<S650>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalConv_ccgp5v0tcudoc = rtb_FALSE_nd;

    /* SignalConversion: '<S650>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalConve_gdjdyznjj1cn = rtb_FALSE_nd;

    /* SignalConversion: '<S650>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalConversion_dhmnr04 = rtb_FALSE_nd;

    /* SignalConversion: '<S650>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalConversion_hxy2nw3 = rtb_FALSE_nd;

    /* DataStoreRead: '<S650>/12D-TP' */
    rtb_u2DTP_a = VITALMAIN_DW.M_TP_12D;

    /* DataStoreRead: '<S650>/12D-RLS' */
    rtb_u2DRLS_d = VITALMAIN_DW.M_RLS_12D;

    /* Outputs for Atomic SubSystem: '<S650>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_lq, rtb_u2ETWS, rtb_TmpSignalConve_gghokxhynyyh,
            rtb_TmpSignalConv_mda10hh403qq5, rtb_TmpSignalConv_ccgp5v0tcudoc,
            rtb_TmpSignalConve_gdjdyznjj1cn, rtb_TmpSignalConversion_dhmnr04,
            rtb_TmpSignalConversion_hxy2nw3, rtb_FALSE_nd, rtb_u2DTP_a,
            rtb_u2DRLS_d, &VITALMAIN_B.ROUTELOCK_b4, &VITALMAIN_DW.ROUTELOCK_b4);

    /* End of Outputs for SubSystem: '<S650>/ROUTE LOCK' */

    /* DataStoreWrite: '<S650>/12D-T-WS' */
    VITALMAIN_DW.M_T_WS_12D = VITALMAIN_B.ROUTELOCK_b4.AND1;

    /* DataStoreRead: '<S651>/TRUE' */
    rtb_TRUE_n1 = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S651>/13A-T-WS' */
    rtb_u3ATWS_b = VITALMAIN_DW.M_T_WS_13A;

    /* DataStoreRead: '<S651>/FALSE' */
    rtb_FALSE_hs = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S651>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalConv_gghokxhynyyhh = rtb_FALSE_hs;

    /* SignalConversion: '<S651>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCon_mda10hh403qq5l = rtb_FALSE_hs;

    /* SignalConversion: '<S651>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCon_ccgp5v0tcudocs = rtb_FALSE_hs;

    /* SignalConversion: '<S651>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalConv_gdjdyznjj1cn5 = rtb_FALSE_hs;

    /* SignalConversion: '<S651>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalConversio_dhmnr04w = rtb_FALSE_hs;

    /* SignalConversion: '<S651>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalConversio_hxy2nw3n = rtb_FALSE_hs;

    /* DataStoreRead: '<S651>/12E-TP' */
    rtb_u2ETP_c = VITALMAIN_DW.M_TP_12E;

    /* DataStoreRead: '<S651>/12E-RLS' */
    rtb_u2ERLS = VITALMAIN_DW.M_RLS_12E;

    /* Outputs for Atomic SubSystem: '<S651>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_n1, rtb_u3ATWS_b, rtb_TmpSignalConv_gghokxhynyyhh,
            rtb_TmpSignalCon_mda10hh403qq5l, rtb_TmpSignalCon_ccgp5v0tcudocs,
            rtb_TmpSignalConv_gdjdyznjj1cn5, rtb_TmpSignalConversio_dhmnr04w,
            rtb_TmpSignalConversio_hxy2nw3n, rtb_FALSE_hs, rtb_u2ETP_c,
            rtb_u2ERLS, &VITALMAIN_B.ROUTELOCK_n, &VITALMAIN_DW.ROUTELOCK_n);

    /* End of Outputs for SubSystem: '<S651>/ROUTE LOCK' */

    /* DataStoreWrite: '<S651>/12E-T-WS' */
    VITALMAIN_DW.M_T_WS_12E = VITALMAIN_B.ROUTELOCK_n.AND1;

    /* DataStoreRead: '<S652>/13A-T-ES-RL' */
    rtb_u3ATESRL = VITALMAIN_DW.M_RL_T_ES_13A;

    /* DataStoreRead: '<S652>/TRUE' */
    rtb_TRUE_lh = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S652>/FALSE' */
    rtb_FALSE_na = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S652>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCon_gghokxhynyyhh5 = rtb_FALSE_na;

    /* SignalConversion: '<S652>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_mda10hh403qq5lk = rtb_FALSE_na;

    /* SignalConversion: '<S652>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_ccgp5v0tcudocsr = rtb_FALSE_na;

    /* SignalConversion: '<S652>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCon_gdjdyznjj1cn5h = rtb_FALSE_na;

    /* SignalConversion: '<S652>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalConversi_dhmnr04wa = rtb_FALSE_na;

    /* SignalConversion: '<S652>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalConversi_hxy2nw3nn = rtb_FALSE_na;

    /* DataStoreRead: '<S652>/13A-TP' */
    rtb_u3ATP_i = VITALMAIN_DW.M_TP_13A;

    /* DataStoreRead: '<S652>/13A-RLS' */
    rtb_u3ARLS = VITALMAIN_DW.M_RLS_13A;

    /* Outputs for Atomic SubSystem: '<S652>/ROUTE LOCK' */
    M_ES_WS(rtb_u3ATESRL, rtb_TRUE_lh, rtb_TmpSignalCon_gghokxhynyyhh5,
            rtb_TmpSignalCo_mda10hh403qq5lk, rtb_TmpSignalCo_ccgp5v0tcudocsr,
            rtb_TmpSignalCon_gdjdyznjj1cn5h, rtb_TmpSignalConversi_dhmnr04wa,
            rtb_TmpSignalConversi_hxy2nw3nn, rtb_FALSE_na, rtb_u3ATP_i,
            rtb_u3ARLS, &VITALMAIN_B.ROUTELOCK_gt, &VITALMAIN_DW.ROUTELOCK_gt);

    /* End of Outputs for SubSystem: '<S652>/ROUTE LOCK' */

    /* DataStoreWrite: '<S652>/13A-T-ES' */
    VITALMAIN_DW.M_T_ES_13A = VITALMAIN_B.ROUTELOCK_gt.AND1;

    /* DataStoreRead: '<S653>/TRUE' */
    rtb_TRUE_gk = VITALMAIN_DW.M_GV_TRUE;

    /* Logic: '<S653>/AND1' incorporates:
     *  DataStoreRead: '<S653>/13B-T-WS'
     *  DataStoreRead: '<S653>/23A-T-WS'
     *  DataStoreRead: '<S653>/W13A//23A-NWZ'
     *  DataStoreRead: '<S653>/W13B//23B-RWZ'
     *  Logic: '<S653>/OR1'
     *  Logic: '<S653>/OR3'
     */
    rtb_AND1_bs = ((VITALMAIN_DW.M_T_WS_13B || VITALMAIN_DW.M_W13B_23B_RWZ) &&
                   (VITALMAIN_DW.M_T_WS_23A || VITALMAIN_DW.M_W13A_23A_NWZ));

    /* DataStoreRead: '<S653>/FALSE' */
    rtb_FALSE_h5 = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S653>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_gghokxhynyyhh5w = rtb_FALSE_h5;

    /* SignalConversion: '<S653>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_g = rtb_FALSE_h5;

    /* SignalConversion: '<S653>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_gb = rtb_FALSE_h5;

    /* SignalConversion: '<S653>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_gdjdyznjj1cn5h1 = rtb_FALSE_h5;

    /* SignalConversion: '<S653>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalConvers_dhmnr04wa2 = rtb_FALSE_h5;

    /* SignalConversion: '<S653>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalConvers_hxy2nw3nnu = rtb_FALSE_h5;

    /* DataStoreRead: '<S653>/13A-TP' */
    rtb_u3ATP_e = VITALMAIN_DW.M_TP_13A;

    /* DataStoreRead: '<S653>/13A-RLS' */
    rtb_u3ARLS_l = VITALMAIN_DW.M_RLS_13A;

    /* Outputs for Atomic SubSystem: '<S653>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_gk, rtb_AND1_bs, rtb_TmpSignalCo_gghokxhynyyhh5w,
            rtb_TmpSignalCo_g, rtb_TmpSignalCo_gb,
            rtb_TmpSignalCo_gdjdyznjj1cn5h1, rtb_TmpSignalConvers_dhmnr04wa2,
            rtb_TmpSignalConvers_hxy2nw3nnu, rtb_FALSE_h5, rtb_u3ATP_e,
            rtb_u3ARLS_l, &VITALMAIN_B.ROUTELOCK_pn, &VITALMAIN_DW.ROUTELOCK_pn);

    /* End of Outputs for SubSystem: '<S653>/ROUTE LOCK' */

    /* DataStoreWrite: '<S653>/13A-T-WS' */
    VITALMAIN_DW.M_T_WS_13A = VITALMAIN_B.ROUTELOCK_pn.AND1;

    /* DataStoreRead: '<S654>/TRUE' */
    rtb_TRUE_au = VITALMAIN_DW.M_GV_TRUE;

    /* Logic: '<S654>/AND1' incorporates:
     *  DataStoreRead: '<S654>/13A-T-ES'
     *  DataStoreRead: '<S654>/23B-T-ES'
     *  DataStoreRead: '<S654>/W13A//23A-RWZ'
     *  DataStoreRead: '<S654>/W13B//23B-NWZ'
     *  Logic: '<S654>/OR1'
     *  Logic: '<S654>/OR2'
     */
    rtb_AND1_di = ((VITALMAIN_DW.M_T_ES_13A || VITALMAIN_DW.M_W13A_23A_RWZ) &&
                   (VITALMAIN_DW.M_T_ES_23B || VITALMAIN_DW.M_W13B_23B_NWZ));

    /* DataStoreRead: '<S654>/FALSE' */
    rtb_FALSE_de = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S654>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_n = rtb_FALSE_de;

    /* SignalConversion: '<S654>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_a = rtb_FALSE_de;

    /* SignalConversion: '<S654>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_g4 = rtb_FALSE_de;

    /* SignalConversion: '<S654>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_o = rtb_FALSE_de;

    /* SignalConversion: '<S654>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalConver_dhmnr04wa2u = rtb_FALSE_de;

    /* SignalConversion: '<S654>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalConver_hxy2nw3nnu5 = rtb_FALSE_de;

    /* DataStoreRead: '<S654>/13B-TP' */
    rtb_u3BTP_o = VITALMAIN_DW.M_TP_13B;

    /* DataStoreRead: '<S654>/13B-RLS' */
    rtb_u3BRLS = VITALMAIN_DW.M_RLS_13B;

    /* Outputs for Atomic SubSystem: '<S654>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_au, rtb_AND1_di, rtb_TmpSignalCo_n, rtb_TmpSignalCo_a,
            rtb_TmpSignalCo_g4, rtb_TmpSignalCo_o,
            rtb_TmpSignalConver_dhmnr04wa2u, rtb_TmpSignalConver_hxy2nw3nnu5,
            rtb_FALSE_de, rtb_u3BTP_o, rtb_u3BRLS, &VITALMAIN_B.ROUTELOCK_b0,
            &VITALMAIN_DW.ROUTELOCK_b0);

    /* End of Outputs for SubSystem: '<S654>/ROUTE LOCK' */

    /* DataStoreWrite: '<S654>/13B-T-ES' */
    VITALMAIN_DW.M_T_ES_13B = VITALMAIN_B.ROUTELOCK_b0.AND1;

    /* DataStoreRead: '<S655>/TRUE' */
    rtb_TRUE_ol = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S655>/14A-T-WS' */
    rtb_u4ATWS = VITALMAIN_DW.M_T_WS_14A;

    /* DataStoreRead: '<S655>/FALSE' */
    rtb_FALSE_i = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S655>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_c = rtb_FALSE_i;

    /* SignalConversion: '<S655>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_nj = rtb_FALSE_i;

    /* SignalConversion: '<S655>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_h = rtb_FALSE_i;

    /* SignalConversion: '<S655>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_hn = rtb_FALSE_i;

    /* SignalConversion: '<S655>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalConve_dhmnr04wa2uv = rtb_FALSE_i;

    /* SignalConversion: '<S655>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalConve_hxy2nw3nnu51 = rtb_FALSE_i;

    /* DataStoreRead: '<S655>/13B-TP' */
    rtb_u3BTP_f = VITALMAIN_DW.M_TP_13B;

    /* DataStoreRead: '<S655>/13B-RLS' */
    rtb_u3BRLS_j = VITALMAIN_DW.M_RLS_13B;

    /* Outputs for Atomic SubSystem: '<S655>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_ol, rtb_u4ATWS, rtb_TmpSignalCo_c, rtb_TmpSignalCo_nj,
            rtb_TmpSignalCo_h, rtb_TmpSignalCo_hn,
            rtb_TmpSignalConve_dhmnr04wa2uv, rtb_TmpSignalConve_hxy2nw3nnu51,
            rtb_FALSE_i, rtb_u3BTP_f, rtb_u3BRLS_j, &VITALMAIN_B.ROUTELOCK_ge,
            &VITALMAIN_DW.ROUTELOCK_ge);

    /* End of Outputs for SubSystem: '<S655>/ROUTE LOCK' */

    /* DataStoreWrite: '<S655>/13B-T-WS' */
    VITALMAIN_DW.M_T_WS_13B = VITALMAIN_B.ROUTELOCK_ge.AND1;

    /* DataStoreRead: '<S656>/TRUE' */
    rtb_TRUE_nk = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S656>/13B-T-ES' */
    rtb_u3BTES_h = VITALMAIN_DW.M_T_ES_13B;

    /* DataStoreRead: '<S656>/FALSE' */
    rtb_FALSE_gl = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S656>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_n3 = rtb_FALSE_gl;

    /* SignalConversion: '<S656>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_b = rtb_FALSE_gl;

    /* SignalConversion: '<S656>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_gg = rtb_FALSE_gl;

    /* SignalConversion: '<S656>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_nf = rtb_FALSE_gl;

    /* SignalConversion: '<S656>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalConv_dhmnr04wa2uvp = rtb_FALSE_gl;

    /* SignalConversion: '<S656>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalConv_hxy2nw3nnu510 = rtb_FALSE_gl;

    /* DataStoreRead: '<S656>/14A-TP' */
    rtb_u4ATP_g = VITALMAIN_DW.M_TP_14A;

    /* DataStoreRead: '<S656>/14A-RLS' */
    rtb_u4ARLS = VITALMAIN_DW.M_RLS_14A;

    /* Outputs for Atomic SubSystem: '<S656>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_nk, rtb_u3BTES_h, rtb_TmpSignalCo_n3, rtb_TmpSignalCo_b,
            rtb_TmpSignalCo_gg, rtb_TmpSignalCo_nf,
            rtb_TmpSignalConv_dhmnr04wa2uvp, rtb_TmpSignalConv_hxy2nw3nnu510,
            rtb_FALSE_gl, rtb_u4ATP_g, rtb_u4ARLS, &VITALMAIN_B.ROUTELOCK_pd,
            &VITALMAIN_DW.ROUTELOCK_pd);

    /* End of Outputs for SubSystem: '<S656>/ROUTE LOCK' */

    /* DataStoreWrite: '<S656>/14A-T-ES' */
    VITALMAIN_DW.M_T_ES_14A = VITALMAIN_B.ROUTELOCK_pd.AND1;

    /* DataStoreRead: '<S657>/14-T-WS-RL' */
    rtb_u4TWSRL = VITALMAIN_DW.M_RL_T_WS_14A;

    /* DataStoreRead: '<S657>/TRUE' */
    rtb_TRUE_mb = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S657>/FALSE' */
    rtb_FALSE_jm = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S657>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_hg = rtb_FALSE_jm;

    /* SignalConversion: '<S657>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_hw = rtb_FALSE_jm;

    /* SignalConversion: '<S657>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_i = rtb_FALSE_jm;

    /* SignalConversion: '<S657>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_ch = rtb_FALSE_jm;

    /* SignalConversion: '<S657>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalCon_dhmnr04wa2uvpn = rtb_FALSE_jm;

    /* SignalConversion: '<S657>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalCon_hxy2nw3nnu510j = rtb_FALSE_jm;

    /* DataStoreRead: '<S657>/14A-TP' */
    rtb_u4ATP_m = VITALMAIN_DW.M_TP_14A;

    /* DataStoreRead: '<S657>/14A-RLS' */
    rtb_u4ARLS_c = VITALMAIN_DW.M_RLS_14A;

    /* Outputs for Atomic SubSystem: '<S657>/ROUTE LOCK' */
    M_ES_WS(rtb_u4TWSRL, rtb_TRUE_mb, rtb_TmpSignalCo_hg, rtb_TmpSignalCo_hw,
            rtb_TmpSignalCo_i, rtb_TmpSignalCo_ch,
            rtb_TmpSignalCon_dhmnr04wa2uvpn, rtb_TmpSignalCon_hxy2nw3nnu510j,
            rtb_FALSE_jm, rtb_u4ATP_m, rtb_u4ARLS_c, &VITALMAIN_B.ROUTELOCK_nf,
            &VITALMAIN_DW.ROUTELOCK_nf);

    /* End of Outputs for SubSystem: '<S657>/ROUTE LOCK' */

    /* DataStoreWrite: '<S657>/14A-T-WS' */
    VITALMAIN_DW.M_T_WS_14A = VITALMAIN_B.ROUTELOCK_nf.AND1;

    /* DataStoreRead: '<S658>/20B-T-ES-RL' */
    rtb_u0BTESRL_m = VITALMAIN_DW.M_RL_T_ES_20B;

    /* DataStoreRead: '<S658>/TRUE' */
    rtb_TRUE_a2 = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S658>/TmpSignal ConversionAtROUTE LOCKInport2' */
    rtb_TmpSignalConversionAtROUT_k = rtb_TRUE_a2;

    /* DataStoreRead: '<S658>/FALSE' */
    rtb_FALSE_o4 = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S658>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_k = rtb_FALSE_o4;

    /* SignalConversion: '<S658>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_cw = rtb_FALSE_o4;

    /* SignalConversion: '<S658>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_j = rtb_FALSE_o4;

    /* SignalConversion: '<S658>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_jd = rtb_FALSE_o4;

    /* DataStoreRead: '<S658>/20B-S-ES-RL' */
    rtb_u0BSESRL_l = VITALMAIN_DW.M_RL_S_ES_20B;

    /* DataStoreRead: '<S658>/20B-TP' */
    rtb_u0BTP_e = VITALMAIN_DW.M_TP_20B;

    /* DataStoreRead: '<S658>/20B-RLS' */
    rtb_u0BRLS_p = VITALMAIN_DW.M_RLS_20B;

    /* Outputs for Atomic SubSystem: '<S658>/ROUTE LOCK' */
    M_ES_WS(rtb_u0BTESRL_m, rtb_TmpSignalConversionAtROUT_k, rtb_TmpSignalCo_k,
            rtb_TmpSignalCo_cw, rtb_TmpSignalCo_j, rtb_TmpSignalCo_jd,
            rtb_u0BSESRL_l, rtb_TRUE_a2, rtb_FALSE_o4, rtb_u0BTP_e, rtb_u0BRLS_p,
            &VITALMAIN_B.ROUTELOCK_lg, &VITALMAIN_DW.ROUTELOCK_lg);

    /* End of Outputs for SubSystem: '<S658>/ROUTE LOCK' */

    /* DataStoreWrite: '<S658>/20B-S-ES' */
    VITALMAIN_DW.M_S_ES_20B = VITALMAIN_B.ROUTELOCK_lg.AND3;

    /* DataStoreWrite: '<S658>/20B-T-ES' */
    VITALMAIN_DW.M_T_ES_20B = VITALMAIN_B.ROUTELOCK_lg.AND1;

    /* DataStoreRead: '<S659>/TRUE' */
    rtb_TRUE_m3 = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S659>/TmpSignal ConversionAtROUTE LOCKInport1' */
    rtb_TmpSignalConversionA_g13en3 = rtb_TRUE_m3;

    /* DataStoreRead: '<S659>/21A-T-WS' */
    rtb_u1ATWS_c = VITALMAIN_DW.M_T_WS_21A;

    /* DataStoreRead: '<S659>/FALSE' */
    rtb_FALSE_du = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S659>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_a1 = rtb_FALSE_du;

    /* SignalConversion: '<S659>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_kg = rtb_FALSE_du;

    /* SignalConversion: '<S659>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_l = rtb_FALSE_du;

    /* SignalConversion: '<S659>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_p = rtb_FALSE_du;

    /* DataStoreRead: '<S659>/21A-S-WS' */
    rtb_u1ASWS_n = VITALMAIN_DW.M_S_WS_21A;

    /* DataStoreRead: '<S659>/20B-TP' */
    rtb_u0BTP_l = VITALMAIN_DW.M_TP_20B;

    /* DataStoreRead: '<S659>/20B-RLS' */
    rtb_u0BRLS_l = VITALMAIN_DW.M_RLS_20B;

    /* Outputs for Atomic SubSystem: '<S659>/ROUTE LOCK' */
    M_ES_WS(rtb_TmpSignalConversionA_g13en3, rtb_u1ATWS_c, rtb_TmpSignalCo_a1,
            rtb_TmpSignalCo_kg, rtb_TmpSignalCo_l, rtb_TmpSignalCo_p,
            rtb_TRUE_m3, rtb_u1ASWS_n, rtb_FALSE_du, rtb_u0BTP_l, rtb_u0BRLS_l,
            &VITALMAIN_B.ROUTELOCK_c1, &VITALMAIN_DW.ROUTELOCK_c1);

    /* End of Outputs for SubSystem: '<S659>/ROUTE LOCK' */

    /* DataStoreWrite: '<S659>/20B-S-WS' */
    VITALMAIN_DW.M_S_WS_20B = VITALMAIN_B.ROUTELOCK_c1.AND3;

    /* DataStoreWrite: '<S659>/20B-T-WS' */
    VITALMAIN_DW.M_T_WS_20B = VITALMAIN_B.ROUTELOCK_c1.AND1;

    /* DataStoreRead: '<S660>/TRUE' */
    rtb_TRUE_lhp = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S660>/TmpSignal ConversionAtROUTE LOCKInport1' */
    rtb_TmpSignalConversion_g13en3h = rtb_TRUE_lhp;

    /* DataStoreRead: '<S660>/20B-T-ES' */
    rtb_u0BTES_f = VITALMAIN_DW.M_T_ES_20B;

    /* DataStoreRead: '<S660>/FALSE' */
    rtb_FALSE_i0 = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S660>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_e = rtb_FALSE_i0;

    /* SignalConversion: '<S660>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_n2 = rtb_FALSE_i0;

    /* SignalConversion: '<S660>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_ap = rtb_FALSE_i0;

    /* SignalConversion: '<S660>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_is = rtb_FALSE_i0;

    /* DataStoreRead: '<S660>/20B-S-ES' */
    rtb_u0BSES_k = VITALMAIN_DW.M_S_ES_20B;

    /* DataStoreRead: '<S660>/21A-TP' */
    rtb_u1ATP_f = VITALMAIN_DW.M_TP_21A;

    /* DataStoreRead: '<S660>/21A-RLS' */
    rtb_u1ARLS_k = VITALMAIN_DW.M_RLS_21A;

    /* Outputs for Atomic SubSystem: '<S660>/ROUTE LOCK' */
    M_ES_WS(rtb_TmpSignalConversion_g13en3h, rtb_u0BTES_f, rtb_TmpSignalCo_e,
            rtb_TmpSignalCo_n2, rtb_TmpSignalCo_ap, rtb_TmpSignalCo_is,
            rtb_TRUE_lhp, rtb_u0BSES_k, rtb_FALSE_i0, rtb_u1ATP_f, rtb_u1ARLS_k,
            &VITALMAIN_B.ROUTELOCK_a, &VITALMAIN_DW.ROUTELOCK_a);

    /* End of Outputs for SubSystem: '<S660>/ROUTE LOCK' */

    /* DataStoreWrite: '<S660>/21A-S-ES' */
    VITALMAIN_DW.M_S_ES_21A = VITALMAIN_B.ROUTELOCK_a.AND3;

    /* DataStoreWrite: '<S660>/21A-T-ES' */
    VITALMAIN_DW.M_T_ES_21A = VITALMAIN_B.ROUTELOCK_a.AND1;

    /* DataStoreRead: '<S661>/TRUE' */
    rtb_TRUE_k1 = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S661>/TmpSignal ConversionAtROUTE LOCKInport1' */
    rtb_TmpSignalConversio_g13en3hq = rtb_TRUE_k1;

    /* Logic: '<S661>/AND1' incorporates:
     *  DataStoreRead: '<S661>/11A-T-WS'
     *  DataStoreRead: '<S661>/21B-T-WS'
     *  DataStoreRead: '<S661>/W11A//21A-NWZ'
     *  DataStoreRead: '<S661>/W11B//21B-RWZ'
     *  Logic: '<S661>/OR1'
     *  Logic: '<S661>/OR3'
     */
    rtb_AND1_nb = ((VITALMAIN_DW.M_T_WS_21B || VITALMAIN_DW.M_W11B_21B_RWZ) &&
                   (VITALMAIN_DW.M_T_WS_11A || VITALMAIN_DW.M_W11A_21A_NWZ));

    /* DataStoreRead: '<S661>/FALSE' */
    rtb_FALSE_pm = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S661>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_pa = rtb_FALSE_pm;

    /* SignalConversion: '<S661>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_oq = rtb_FALSE_pm;

    /* SignalConversion: '<S661>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_hj = rtb_FALSE_pm;

    /* SignalConversion: '<S661>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_i0 = rtb_FALSE_pm;

    /* Logic: '<S661>/OR6' incorporates:
     *  DataStoreRead: '<S661>/21B-S-WS'
     *  DataStoreRead: '<S661>/W11B//21B-RWZ'
     */
    rtb_OR6 = (VITALMAIN_DW.M_S_WS_21B || VITALMAIN_DW.M_W11B_21B_RWZ);

    /* DataStoreRead: '<S661>/21A-TP' */
    rtb_u1ATP_i = VITALMAIN_DW.M_TP_21A;

    /* DataStoreRead: '<S661>/21A-RLS' */
    rtb_u1ARLS_g = VITALMAIN_DW.M_RLS_21A;

    /* Outputs for Atomic SubSystem: '<S661>/ROUTE LOCK' */
    M_ES_WS(rtb_TmpSignalConversio_g13en3hq, rtb_AND1_nb, rtb_TmpSignalCo_pa,
            rtb_TmpSignalCo_oq, rtb_TmpSignalCo_hj, rtb_TmpSignalCo_i0,
            rtb_TRUE_k1, rtb_OR6, rtb_FALSE_pm, rtb_u1ATP_i, rtb_u1ARLS_g,
            &VITALMAIN_B.ROUTELOCK_pb, &VITALMAIN_DW.ROUTELOCK_pb);

    /* End of Outputs for SubSystem: '<S661>/ROUTE LOCK' */

    /* DataStoreWrite: '<S661>/21A-S-WS' */
    VITALMAIN_DW.M_S_WS_21A = VITALMAIN_B.ROUTELOCK_pb.AND3;

    /* DataStoreWrite: '<S661>/21A-T-WS' */
    VITALMAIN_DW.M_T_WS_21A = VITALMAIN_B.ROUTELOCK_pb.AND1;

    /* DataStoreRead: '<S662>/TRUE' */
    rtb_TRUE_f = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S662>/TmpSignal ConversionAtROUTE LOCKInport1' */
    rtb_TmpSignalConversi_g13en3hqf = rtb_TRUE_f;

    /* Logic: '<S662>/AND1' incorporates:
     *  DataStoreRead: '<S662>/11B-T-ES'
     *  DataStoreRead: '<S662>/21A-T-ES'
     *  DataStoreRead: '<S662>/W11A//21A-RWZ'
     *  DataStoreRead: '<S662>/W11B//21B-NWZ'
     *  Logic: '<S662>/OR1'
     *  Logic: '<S662>/OR3'
     */
    rtb_AND1_bl = ((VITALMAIN_DW.M_T_ES_21A || VITALMAIN_DW.M_W11A_21A_RWZ) &&
                   (VITALMAIN_DW.M_T_ES_11B || VITALMAIN_DW.M_W11B_21B_NWZ));

    /* DataStoreRead: '<S662>/FALSE' */
    rtb_FALSE_bf = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S662>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_im = rtb_FALSE_bf;

    /* SignalConversion: '<S662>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_h0 = rtb_FALSE_bf;

    /* SignalConversion: '<S662>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_d = rtb_FALSE_bf;

    /* SignalConversion: '<S662>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_ho = rtb_FALSE_bf;

    /* Logic: '<S662>/AND2' incorporates:
     *  DataStoreRead: '<S662>/11B-S-ES'
     *  DataStoreRead: '<S662>/21A-S-ES'
     */
    rtb_AND2_ib = (VITALMAIN_DW.M_S_ES_21A && VITALMAIN_DW.M_S_ES_11B);

    /* DataStoreRead: '<S662>/21B-TP' */
    rtb_u1BTP_e = VITALMAIN_DW.M_TP_21B;

    /* DataStoreRead: '<S662>/21B-RLS' */
    rtb_u1BRLS_o = VITALMAIN_DW.M_RLS_21B;

    /* Outputs for Atomic SubSystem: '<S662>/ROUTE LOCK' */
    M_ES_WS(rtb_TmpSignalConversi_g13en3hqf, rtb_AND1_bl, rtb_TmpSignalCo_im,
            rtb_TmpSignalCo_h0, rtb_TmpSignalCo_d, rtb_TmpSignalCo_ho,
            rtb_TRUE_f, rtb_AND2_ib, rtb_FALSE_bf, rtb_u1BTP_e, rtb_u1BRLS_o,
            &VITALMAIN_B.ROUTELOCK_l4, &VITALMAIN_DW.ROUTELOCK_l4);

    /* End of Outputs for SubSystem: '<S662>/ROUTE LOCK' */

    /* DataStoreWrite: '<S662>/21B-S-ES' */
    VITALMAIN_DW.M_S_ES_21B = VITALMAIN_B.ROUTELOCK_l4.AND3;

    /* DataStoreWrite: '<S662>/21B-T-ES' */
    VITALMAIN_DW.M_T_ES_21B = VITALMAIN_B.ROUTELOCK_l4.AND1;

    /* DataStoreRead: '<S663>/TRUE' */
    rtb_TRUE_b = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S663>/TmpSignal ConversionAtROUTE LOCKInport1' */
    rtb_TmpSignalConvers_g13en3hqfo = rtb_TRUE_b;

    /* DataStoreRead: '<S663>/21C-T-WS' */
    rtb_u1CTWS_g = VITALMAIN_DW.M_T_WS_21C;

    /* DataStoreRead: '<S663>/FALSE' */
    rtb_FALSE_a5 = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S663>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_e4 = rtb_FALSE_a5;

    /* SignalConversion: '<S663>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_bu = rtb_FALSE_a5;

    /* SignalConversion: '<S663>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_lu = rtb_FALSE_a5;

    /* SignalConversion: '<S663>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_nr = rtb_FALSE_a5;

    /* DataStoreRead: '<S663>/21C-S-WS' */
    rtb_u1CSWS_l = VITALMAIN_DW.M_S_WS_21C;

    /* DataStoreRead: '<S663>/21B-TP' */
    rtb_u1BTP_h = VITALMAIN_DW.M_TP_21B;

    /* DataStoreRead: '<S663>/21B-RLS' */
    rtb_u1BRLS_b = VITALMAIN_DW.M_RLS_21B;

    /* Outputs for Atomic SubSystem: '<S663>/ROUTE LOCK' */
    M_ES_WS(rtb_TmpSignalConvers_g13en3hqfo, rtb_u1CTWS_g, rtb_TmpSignalCo_e4,
            rtb_TmpSignalCo_bu, rtb_TmpSignalCo_lu, rtb_TmpSignalCo_nr,
            rtb_TRUE_b, rtb_u1CSWS_l, rtb_FALSE_a5, rtb_u1BTP_h, rtb_u1BRLS_b,
            &VITALMAIN_B.ROUTELOCK_j, &VITALMAIN_DW.ROUTELOCK_j);

    /* End of Outputs for SubSystem: '<S663>/ROUTE LOCK' */

    /* DataStoreWrite: '<S663>/21B-S-WS' */
    VITALMAIN_DW.M_S_WS_21B = VITALMAIN_B.ROUTELOCK_j.AND3;

    /* DataStoreWrite: '<S663>/21B-T-WS' */
    VITALMAIN_DW.M_T_WS_21B = VITALMAIN_B.ROUTELOCK_j.AND1;

    /* DataStoreRead: '<S664>/TRUE' */
    rtb_TRUE_by = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S664>/TmpSignal ConversionAtROUTE LOCKInport1' */
    rtb_TmpSignalConver_g13en3hqfoe = rtb_TRUE_by;

    /* DataStoreRead: '<S664>/21B-T-ES' */
    rtb_u1BTES_g = VITALMAIN_DW.M_T_ES_21B;

    /* DataStoreRead: '<S664>/FALSE' */
    rtb_FALSE_g2 = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S664>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_pc = rtb_FALSE_g2;

    /* SignalConversion: '<S664>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_gq = rtb_FALSE_g2;

    /* SignalConversion: '<S664>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_p0 = rtb_FALSE_g2;

    /* SignalConversion: '<S664>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_iv = rtb_FALSE_g2;

    /* DataStoreRead: '<S664>/21B-S-ES' */
    rtb_u1BSES_e = VITALMAIN_DW.M_S_ES_21B;

    /* DataStoreRead: '<S664>/21C-TP' */
    rtb_u1CTP_bc = VITALMAIN_DW.M_TP_21C;

    /* DataStoreRead: '<S664>/21C-RLS' */
    rtb_u1CRLS = VITALMAIN_DW.M_RLS_21C;

    /* Outputs for Atomic SubSystem: '<S664>/ROUTE LOCK' */
    M_ES_WS(rtb_TmpSignalConver_g13en3hqfoe, rtb_u1BTES_g, rtb_TmpSignalCo_pc,
            rtb_TmpSignalCo_gq, rtb_TmpSignalCo_p0, rtb_TmpSignalCo_iv,
            rtb_TRUE_by, rtb_u1BSES_e, rtb_FALSE_g2, rtb_u1CTP_bc, rtb_u1CRLS,
            &VITALMAIN_B.ROUTELOCK_jd, &VITALMAIN_DW.ROUTELOCK_jd);

    /* End of Outputs for SubSystem: '<S664>/ROUTE LOCK' */

    /* DataStoreWrite: '<S664>/21C-S-ES' */
    VITALMAIN_DW.M_S_ES_21C = VITALMAIN_B.ROUTELOCK_jd.AND3;

    /* DataStoreWrite: '<S664>/21C-T-ES' */
    VITALMAIN_DW.M_T_ES_21C = VITALMAIN_B.ROUTELOCK_jd.AND1;

    /* DataStoreRead: '<S665>/21C-T-WS-RL' */
    rtb_u1CTWSRL = VITALMAIN_DW.M_RL_T_WS_21C;

    /* DataStoreRead: '<S665>/TRUE' */
    rtb_TRUE_eb = VITALMAIN_DW.M_GV_TRUE;

    /* SignalConversion: '<S665>/TmpSignal ConversionAtROUTE LOCKInport2' */
    rtb_TmpSignalConversionAtROU_kv = rtb_TRUE_eb;

    /* DataStoreRead: '<S665>/FALSE' */
    rtb_FALSE_b0 = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S665>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_bs = rtb_FALSE_b0;

    /* SignalConversion: '<S665>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_f = rtb_FALSE_b0;

    /* SignalConversion: '<S665>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_os = rtb_FALSE_b0;

    /* SignalConversion: '<S665>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_au = rtb_FALSE_b0;

    /* DataStoreRead: '<S665>/21C-S-WS-RL' */
    rtb_u1CSWSRL = VITALMAIN_DW.M_RL_S_WS_21C;

    /* DataStoreRead: '<S665>/21C-TP' */
    rtb_u1CTP_g = VITALMAIN_DW.M_TP_21C;

    /* DataStoreRead: '<S665>/21C-RLS' */
    rtb_u1CRLS_l = VITALMAIN_DW.M_RLS_21C;

    /* Outputs for Atomic SubSystem: '<S665>/ROUTE LOCK' */
    M_ES_WS(rtb_u1CTWSRL, rtb_TmpSignalConversionAtROU_kv, rtb_TmpSignalCo_bs,
            rtb_TmpSignalCo_f, rtb_TmpSignalCo_os, rtb_TmpSignalCo_au,
            rtb_u1CSWSRL, rtb_TRUE_eb, rtb_FALSE_b0, rtb_u1CTP_g, rtb_u1CRLS_l,
            &VITALMAIN_B.ROUTELOCK_ih, &VITALMAIN_DW.ROUTELOCK_ih);

    /* End of Outputs for SubSystem: '<S665>/ROUTE LOCK' */

    /* DataStoreWrite: '<S665>/21C-S-WS' */
    VITALMAIN_DW.M_S_WS_21C = VITALMAIN_B.ROUTELOCK_ih.AND3;

    /* DataStoreWrite: '<S665>/21C-T-WS' */
    VITALMAIN_DW.M_T_WS_21C = VITALMAIN_B.ROUTELOCK_ih.AND1;

    /* DataStoreRead: '<S666>/TRUE' */
    rtb_TRUE_o4 = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S666>/21C-T-ES' */
    rtb_u1CTES_kx = VITALMAIN_DW.M_T_ES_21C;

    /* DataStoreRead: '<S666>/W21C-RWZ' */
    rtb_W21CRWZ = VITALMAIN_DW.M_W21C_RWZ;

    /* DataStoreRead: '<S666>/FALSE' */
    rtb_FALSE_fr = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S666>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_k3 = rtb_FALSE_fr;

    /* SignalConversion: '<S666>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_ax = rtb_FALSE_fr;

    /* SignalConversion: '<S666>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_ew = rtb_FALSE_fr;

    /* SignalConversion: '<S666>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalCo_dhmnr04wa2uvpn1 = rtb_FALSE_fr;

    /* SignalConversion: '<S666>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalCo_hxy2nw3nnu510jd = rtb_FALSE_fr;

    /* DataStoreRead: '<S666>/22A-TP' */
    rtb_u2ATP_j = VITALMAIN_DW.M_TP_22A;

    /* DataStoreRead: '<S666>/22A-RLS' */
    rtb_u2ARLS_d = VITALMAIN_DW.M_RLS_22A;

    /* Outputs for Atomic SubSystem: '<S666>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_o4, rtb_u1CTES_kx, rtb_W21CRWZ, rtb_TmpSignalCo_k3,
            rtb_TmpSignalCo_ax, rtb_TmpSignalCo_ew,
            rtb_TmpSignalCo_dhmnr04wa2uvpn1, rtb_TmpSignalCo_hxy2nw3nnu510jd,
            rtb_FALSE_fr, rtb_u2ATP_j, rtb_u2ARLS_d, &VITALMAIN_B.ROUTELOCK_d,
            &VITALMAIN_DW.ROUTELOCK_d);

    /* End of Outputs for SubSystem: '<S666>/ROUTE LOCK' */

    /* DataStoreWrite: '<S666>/22A-T-ES' */
    VITALMAIN_DW.M_T_ES_22A = VITALMAIN_B.ROUTELOCK_d.AND1;

    /* DataStoreRead: '<S667>/TRUE' */
    rtb_TRUE_lu = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S667>/22A-T-ES' */
    rtb_u2ATES_a = VITALMAIN_DW.M_T_ES_22A;

    /* DataStoreRead: '<S667>/FALSE' */
    rtb_FALSE_pi = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S667>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_dj = rtb_FALSE_pi;

    /* SignalConversion: '<S667>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_ho5 = rtb_FALSE_pi;

    /* SignalConversion: '<S667>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_dr = rtb_FALSE_pi;

    /* SignalConversion: '<S667>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_dw = rtb_FALSE_pi;

    /* SignalConversion: '<S667>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalCo_gf = rtb_FALSE_pi;

    /* SignalConversion: '<S667>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalCo_gm = rtb_FALSE_pi;

    /* DataStoreRead: '<S667>/22B-TP' */
    rtb_u2BTP_i = VITALMAIN_DW.M_TP_22B;

    /* DataStoreRead: '<S667>/22B-RLS' */
    rtb_u2BRLS_p = VITALMAIN_DW.M_RLS_22B;

    /* Outputs for Atomic SubSystem: '<S667>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_lu, rtb_u2ATES_a, rtb_TmpSignalCo_dj, rtb_TmpSignalCo_ho5,
            rtb_TmpSignalCo_dr, rtb_TmpSignalCo_dw, rtb_TmpSignalCo_gf,
            rtb_TmpSignalCo_gm, rtb_FALSE_pi, rtb_u2BTP_i, rtb_u2BRLS_p,
            &VITALMAIN_B.ROUTELOCK_is, &VITALMAIN_DW.ROUTELOCK_is);

    /* End of Outputs for SubSystem: '<S667>/ROUTE LOCK' */

    /* DataStoreWrite: '<S667>/22B-T-ES' */
    VITALMAIN_DW.M_T_ES_22B = VITALMAIN_B.ROUTELOCK_is.AND1;

    /* DataStoreRead: '<S668>/TRUE' */
    rtb_TRUE_li = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S668>/22C-T-WS' */
    rtb_u2CTWS_i = VITALMAIN_DW.M_T_WS_22C;

    /* DataStoreRead: '<S668>/FALSE' */
    rtb_FALSE_l = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S668>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_kc = rtb_FALSE_l;

    /* SignalConversion: '<S668>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_m = rtb_FALSE_l;

    /* SignalConversion: '<S668>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_he = rtb_FALSE_l;

    /* SignalConversion: '<S668>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_lq = rtb_FALSE_l;

    /* SignalConversion: '<S668>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalCo_jp = rtb_FALSE_l;

    /* SignalConversion: '<S668>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalCo_d1 = rtb_FALSE_l;

    /* DataStoreRead: '<S668>/22B-TP' */
    rtb_u2BTP_k = VITALMAIN_DW.M_TP_22B;

    /* DataStoreRead: '<S668>/22B-RLS' */
    rtb_u2BRLS_pa = VITALMAIN_DW.M_RLS_22B;

    /* Outputs for Atomic SubSystem: '<S668>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_li, rtb_u2CTWS_i, rtb_TmpSignalCo_kc, rtb_TmpSignalCo_m,
            rtb_TmpSignalCo_he, rtb_TmpSignalCo_lq, rtb_TmpSignalCo_jp,
            rtb_TmpSignalCo_d1, rtb_FALSE_l, rtb_u2BTP_k, rtb_u2BRLS_pa,
            &VITALMAIN_B.ROUTELOCK_ir, &VITALMAIN_DW.ROUTELOCK_ir);

    /* End of Outputs for SubSystem: '<S668>/ROUTE LOCK' */

    /* DataStoreWrite: '<S668>/22B-T-WS' */
    VITALMAIN_DW.M_T_WS_22B = VITALMAIN_B.ROUTELOCK_ir.AND1;

    /* DataStoreRead: '<S669>/TRUE' */
    rtb_TRUE_eh = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S669>/22B-T-ES' */
    rtb_u2BTES_e = VITALMAIN_DW.M_T_ES_22B;

    /* DataStoreRead: '<S669>/FALSE' */
    rtb_FALSE_il = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S669>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_fy = rtb_FALSE_il;

    /* SignalConversion: '<S669>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_fx = rtb_FALSE_il;

    /* SignalConversion: '<S669>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_mq = rtb_FALSE_il;

    /* SignalConversion: '<S669>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_g1 = rtb_FALSE_il;

    /* SignalConversion: '<S669>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalCo_l4 = rtb_FALSE_il;

    /* SignalConversion: '<S669>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalCo_fm = rtb_FALSE_il;

    /* DataStoreRead: '<S669>/22C-TP' */
    rtb_u2CTP_k = VITALMAIN_DW.M_TP_22C;

    /* DataStoreRead: '<S669>/22C-RLS' */
    rtb_u2CRLS_e = VITALMAIN_DW.M_RLS_22C;

    /* Outputs for Atomic SubSystem: '<S669>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_eh, rtb_u2BTES_e, rtb_TmpSignalCo_fy, rtb_TmpSignalCo_fx,
            rtb_TmpSignalCo_mq, rtb_TmpSignalCo_g1, rtb_TmpSignalCo_l4,
            rtb_TmpSignalCo_fm, rtb_FALSE_il, rtb_u2CTP_k, rtb_u2CRLS_e,
            &VITALMAIN_B.ROUTELOCK_ct, &VITALMAIN_DW.ROUTELOCK_ct);

    /* End of Outputs for SubSystem: '<S669>/ROUTE LOCK' */

    /* DataStoreWrite: '<S669>/22C-T-ES' */
    VITALMAIN_DW.M_T_ES_22C = VITALMAIN_B.ROUTELOCK_ct.AND1;

    /* DataStoreRead: '<S670>/TRUE' */
    rtb_TRUE_jd = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S670>/22D-T-WS' */
    rtb_u2DTWS_b = VITALMAIN_DW.M_T_WS_22D;

    /* DataStoreRead: '<S670>/FALSE' */
    rtb_FALSE_mn = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S670>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_ej = rtb_FALSE_mn;

    /* SignalConversion: '<S670>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_do = rtb_FALSE_mn;

    /* SignalConversion: '<S670>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_pm = rtb_FALSE_mn;

    /* SignalConversion: '<S670>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_ll = rtb_FALSE_mn;

    /* SignalConversion: '<S670>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalCo_k5 = rtb_FALSE_mn;

    /* SignalConversion: '<S670>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalCo_mh = rtb_FALSE_mn;

    /* DataStoreRead: '<S670>/22C-TP' */
    rtb_u2CTP_p = VITALMAIN_DW.M_TP_22C;

    /* DataStoreRead: '<S670>/22C-RLS' */
    rtb_u2CRLS_n = VITALMAIN_DW.M_RLS_22C;

    /* Outputs for Atomic SubSystem: '<S670>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_jd, rtb_u2DTWS_b, rtb_TmpSignalCo_ej, rtb_TmpSignalCo_do,
            rtb_TmpSignalCo_pm, rtb_TmpSignalCo_ll, rtb_TmpSignalCo_k5,
            rtb_TmpSignalCo_mh, rtb_FALSE_mn, rtb_u2CTP_p, rtb_u2CRLS_n,
            &VITALMAIN_B.ROUTELOCK_h5, &VITALMAIN_DW.ROUTELOCK_h5);

    /* End of Outputs for SubSystem: '<S670>/ROUTE LOCK' */

    /* DataStoreWrite: '<S670>/22C-T-WS' */
    VITALMAIN_DW.M_T_WS_22C = VITALMAIN_B.ROUTELOCK_h5.AND1;

    /* DataStoreRead: '<S671>/TRUE' */
    rtb_TRUE_i = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S671>/22C-T-ES' */
    rtb_u2CTES_a = VITALMAIN_DW.M_T_ES_22C;

    /* DataStoreRead: '<S671>/FALSE' */
    rtb_FALSE_nr = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S671>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_fg = rtb_FALSE_nr;

    /* SignalConversion: '<S671>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_bw = rtb_FALSE_nr;

    /* SignalConversion: '<S671>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_jf = rtb_FALSE_nr;

    /* SignalConversion: '<S671>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_kgw = rtb_FALSE_nr;

    /* SignalConversion: '<S671>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalCo_j5 = rtb_FALSE_nr;

    /* SignalConversion: '<S671>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalCo_kb = rtb_FALSE_nr;

    /* DataStoreRead: '<S671>/22D-TP' */
    rtb_u2DTP_o = VITALMAIN_DW.M_TP_22D;

    /* DataStoreRead: '<S671>/22D-RLS' */
    rtb_u2DRLS_h = VITALMAIN_DW.M_RLS_22D;

    /* Outputs for Atomic SubSystem: '<S671>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_i, rtb_u2CTES_a, rtb_TmpSignalCo_fg, rtb_TmpSignalCo_bw,
            rtb_TmpSignalCo_jf, rtb_TmpSignalCo_kgw, rtb_TmpSignalCo_j5,
            rtb_TmpSignalCo_kb, rtb_FALSE_nr, rtb_u2DTP_o, rtb_u2DRLS_h,
            &VITALMAIN_B.ROUTELOCK_m, &VITALMAIN_DW.ROUTELOCK_m);

    /* End of Outputs for SubSystem: '<S671>/ROUTE LOCK' */

    /* DataStoreWrite: '<S671>/22D-T-ES' */
    VITALMAIN_DW.M_T_ES_22D = VITALMAIN_B.ROUTELOCK_m.AND1;

    /* DataStoreRead: '<S672>/TRUE' */
    rtb_TRUE_dv = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S672>/22E-T-WS' */
    rtb_u2ETWS_d = VITALMAIN_DW.M_T_WS_22E;

    /* DataStoreRead: '<S672>/FALSE' */
    rtb_FALSE_i02 = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S672>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_op = rtb_FALSE_i02;

    /* SignalConversion: '<S672>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_ms = rtb_FALSE_i02;

    /* SignalConversion: '<S672>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_ei = rtb_FALSE_i02;

    /* SignalConversion: '<S672>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_ec = rtb_FALSE_i02;

    /* SignalConversion: '<S672>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalCo_fs = rtb_FALSE_i02;

    /* SignalConversion: '<S672>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalCo_dz = rtb_FALSE_i02;

    /* DataStoreRead: '<S672>/22D-TP' */
    rtb_u2DTP_j = VITALMAIN_DW.M_TP_22D;

    /* DataStoreRead: '<S672>/22D-RLS' */
    rtb_u2DRLS_dv = VITALMAIN_DW.M_RLS_22D;

    /* Outputs for Atomic SubSystem: '<S672>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_dv, rtb_u2ETWS_d, rtb_TmpSignalCo_op, rtb_TmpSignalCo_ms,
            rtb_TmpSignalCo_ei, rtb_TmpSignalCo_ec, rtb_TmpSignalCo_fs,
            rtb_TmpSignalCo_dz, rtb_FALSE_i02, rtb_u2DTP_j, rtb_u2DRLS_dv,
            &VITALMAIN_B.ROUTELOCK_gt5, &VITALMAIN_DW.ROUTELOCK_gt5);

    /* End of Outputs for SubSystem: '<S672>/ROUTE LOCK' */

    /* DataStoreWrite: '<S672>/22D-T-WS' */
    VITALMAIN_DW.M_T_WS_22D = VITALMAIN_B.ROUTELOCK_gt5.AND1;

    /* DataStoreRead: '<S673>/TRUE' */
    rtb_TRUE_gy = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S673>/23A-T-WS' */
    rtb_u3ATWS_n = VITALMAIN_DW.M_T_WS_23A;

    /* DataStoreRead: '<S673>/W13A//23A-RWZ' */
    rtb_W13A23ARWZ_c = VITALMAIN_DW.M_W13A_23A_RWZ;

    /* DataStoreRead: '<S673>/FALSE' */
    rtb_FALSE_bi = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S673>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_ls = rtb_FALSE_bi;

    /* SignalConversion: '<S673>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_oe = rtb_FALSE_bi;

    /* SignalConversion: '<S673>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_kp = rtb_FALSE_bi;

    /* SignalConversion: '<S673>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalCo_p4 = rtb_FALSE_bi;

    /* SignalConversion: '<S673>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalCo_mi = rtb_FALSE_bi;

    /* DataStoreRead: '<S673>/22E-TP' */
    rtb_u2ETP_g = VITALMAIN_DW.M_TP_22E;

    /* DataStoreRead: '<S673>/22E-RLS' */
    rtb_u2ERLS_i = VITALMAIN_DW.M_RLS_22E;

    /* Outputs for Atomic SubSystem: '<S673>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_gy, rtb_u3ATWS_n, rtb_W13A23ARWZ_c, rtb_TmpSignalCo_ls,
            rtb_TmpSignalCo_oe, rtb_TmpSignalCo_kp, rtb_TmpSignalCo_p4,
            rtb_TmpSignalCo_mi, rtb_FALSE_bi, rtb_u2ETP_g, rtb_u2ERLS_i,
            &VITALMAIN_B.ROUTELOCK_gc, &VITALMAIN_DW.ROUTELOCK_gc);

    /* End of Outputs for SubSystem: '<S673>/ROUTE LOCK' */

    /* DataStoreWrite: '<S673>/22E-T-WS' */
    VITALMAIN_DW.M_T_WS_22E = VITALMAIN_B.ROUTELOCK_gc.AND1;

    /* DataStoreRead: '<S674>/23A-T-ES-RL' */
    rtb_u3ATESRL_p = VITALMAIN_DW.M_RL_T_ES_23A;

    /* DataStoreRead: '<S674>/13A-T-ES' */
    rtb_u3ATES_c = VITALMAIN_DW.M_T_ES_13A;

    /* DataStoreRead: '<S674>/W13A//23A-NWZ' */
    rtb_W13A23ANWZ_p = VITALMAIN_DW.M_W13A_23A_NWZ;

    /* DataStoreRead: '<S674>/FALSE' */
    rtb_FALSE_g0 = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S674>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_d3 = rtb_FALSE_g0;

    /* SignalConversion: '<S674>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_gk = rtb_FALSE_g0;

    /* SignalConversion: '<S674>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_me = rtb_FALSE_g0;

    /* SignalConversion: '<S674>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalCo_jm = rtb_FALSE_g0;

    /* SignalConversion: '<S674>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalCo_ln = rtb_FALSE_g0;

    /* DataStoreRead: '<S674>/23A-TP' */
    rtb_u3ATP_e4 = VITALMAIN_DW.M_TP_23A;

    /* DataStoreRead: '<S674>/23A-RLS' */
    rtb_u3ARLS_a = VITALMAIN_DW.M_RLS_23A;

    /* Outputs for Atomic SubSystem: '<S674>/ROUTE LOCK' */
    M_ES_WS(rtb_u3ATESRL_p, rtb_u3ATES_c, rtb_W13A23ANWZ_p, rtb_TmpSignalCo_d3,
            rtb_TmpSignalCo_gk, rtb_TmpSignalCo_me, rtb_TmpSignalCo_jm,
            rtb_TmpSignalCo_ln, rtb_FALSE_g0, rtb_u3ATP_e4, rtb_u3ARLS_a,
            &VITALMAIN_B.ROUTELOCK_p5, &VITALMAIN_DW.ROUTELOCK_p5);

    /* End of Outputs for SubSystem: '<S674>/ROUTE LOCK' */

    /* DataStoreWrite: '<S674>/23A-T-ES' */
    VITALMAIN_DW.M_T_ES_23A = VITALMAIN_B.ROUTELOCK_p5.AND1;

    /* DataStoreRead: '<S675>/TRUE' */
    rtb_TRUE_lh3 = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S675>/23B-T-WS' */
    rtb_u3BTWS_g = VITALMAIN_DW.M_T_WS_23B;

    /* DataStoreRead: '<S675>/FALSE' */
    rtb_FALSE_av = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S675>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_bv = rtb_FALSE_av;

    /* SignalConversion: '<S675>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_d4 = rtb_FALSE_av;

    /* SignalConversion: '<S675>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_aa = rtb_FALSE_av;

    /* SignalConversion: '<S675>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_k3l = rtb_FALSE_av;

    /* SignalConversion: '<S675>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalCo_ft = rtb_FALSE_av;

    /* SignalConversion: '<S675>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalCo_j4 = rtb_FALSE_av;

    /* DataStoreRead: '<S675>/23A-TP' */
    rtb_u3ATP_d = VITALMAIN_DW.M_TP_23A;

    /* DataStoreRead: '<S675>/23A-RLS' */
    rtb_u3ARLS_h = VITALMAIN_DW.M_RLS_23A;

    /* Outputs for Atomic SubSystem: '<S675>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_lh3, rtb_u3BTWS_g, rtb_TmpSignalCo_bv, rtb_TmpSignalCo_d4,
            rtb_TmpSignalCo_aa, rtb_TmpSignalCo_k3l, rtb_TmpSignalCo_ft,
            rtb_TmpSignalCo_j4, rtb_FALSE_av, rtb_u3ATP_d, rtb_u3ARLS_h,
            &VITALMAIN_B.ROUTELOCK_gq, &VITALMAIN_DW.ROUTELOCK_gq);

    /* End of Outputs for SubSystem: '<S675>/ROUTE LOCK' */

    /* DataStoreWrite: '<S675>/23A-T-WS' */
    VITALMAIN_DW.M_T_WS_23A = VITALMAIN_B.ROUTELOCK_gq.AND1;

    /* DataStoreRead: '<S676>/TRUE' */
    rtb_TRUE_af = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S676>/23A-T-ES' */
    rtb_u3ATES_ph = VITALMAIN_DW.M_T_ES_23A;

    /* DataStoreRead: '<S676>/FALSE' */
    rtb_FALSE_bq = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S676>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_kgc = rtb_FALSE_bq;

    /* SignalConversion: '<S676>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_ko = rtb_FALSE_bq;

    /* SignalConversion: '<S676>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_fk = rtb_FALSE_bq;

    /* SignalConversion: '<S676>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_h3 = rtb_FALSE_bq;

    /* SignalConversion: '<S676>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalCo_a5 = rtb_FALSE_bq;

    /* SignalConversion: '<S676>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalCo_k0 = rtb_FALSE_bq;

    /* DataStoreRead: '<S676>/23B-TP' */
    rtb_u3BTP_c = VITALMAIN_DW.M_TP_23B;

    /* DataStoreRead: '<S676>/23B-RLS' */
    rtb_u3BRLS_m = VITALMAIN_DW.M_RLS_23B;

    /* Outputs for Atomic SubSystem: '<S676>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_af, rtb_u3ATES_ph, rtb_TmpSignalCo_kgc, rtb_TmpSignalCo_ko,
            rtb_TmpSignalCo_fk, rtb_TmpSignalCo_h3, rtb_TmpSignalCo_a5,
            rtb_TmpSignalCo_k0, rtb_FALSE_bq, rtb_u3BTP_c, rtb_u3BRLS_m,
            &VITALMAIN_B.ROUTELOCK_fc, &VITALMAIN_DW.ROUTELOCK_fc);

    /* End of Outputs for SubSystem: '<S676>/ROUTE LOCK' */

    /* DataStoreWrite: '<S676>/23B-T-ES' */
    VITALMAIN_DW.M_T_ES_23B = VITALMAIN_B.ROUTELOCK_fc.AND1;

    /* DataStoreRead: '<S677>/TRUE' */
    rtb_TRUE_p3 = VITALMAIN_DW.M_GV_TRUE;

    /* Logic: '<S677>/OR2' incorporates:
     *  DataStoreRead: '<S677>/13B-T-WS'
     *  DataStoreRead: '<S677>/24A-T-WS'
     *  DataStoreRead: '<S677>/W13B//23B-NWZ'
     *  Logic: '<S677>/OR1'
     */
    rtb_OR2_kc = (VITALMAIN_DW.M_T_WS_24A && (VITALMAIN_DW.M_T_WS_13B ||
      VITALMAIN_DW.M_W13B_23B_NWZ));

    /* DataStoreRead: '<S677>/FALSE' */
    rtb_FALSE_jh = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S677>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_ch2 = rtb_FALSE_jh;

    /* SignalConversion: '<S677>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_cv = rtb_FALSE_jh;

    /* SignalConversion: '<S677>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_my = rtb_FALSE_jh;

    /* SignalConversion: '<S677>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_gr = rtb_FALSE_jh;

    /* SignalConversion: '<S677>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalCo_n1 = rtb_FALSE_jh;

    /* SignalConversion: '<S677>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalCo_pk = rtb_FALSE_jh;

    /* DataStoreRead: '<S677>/23B-TP' */
    rtb_u3BTP_e5 = VITALMAIN_DW.M_TP_23B;

    /* DataStoreRead: '<S677>/23B-RLS' */
    rtb_u3BRLS_o = VITALMAIN_DW.M_RLS_23B;

    /* Outputs for Atomic SubSystem: '<S677>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_p3, rtb_OR2_kc, rtb_TmpSignalCo_ch2, rtb_TmpSignalCo_cv,
            rtb_TmpSignalCo_my, rtb_TmpSignalCo_gr, rtb_TmpSignalCo_n1,
            rtb_TmpSignalCo_pk, rtb_FALSE_jh, rtb_u3BTP_e5, rtb_u3BRLS_o,
            &VITALMAIN_B.ROUTELOCK_ay, &VITALMAIN_DW.ROUTELOCK_ay);

    /* End of Outputs for SubSystem: '<S677>/ROUTE LOCK' */

    /* DataStoreWrite: '<S677>/23B-T-WS' */
    VITALMAIN_DW.M_T_WS_23B = VITALMAIN_B.ROUTELOCK_ay.AND1;

    /* DataStoreRead: '<S678>/TRUE' */
    rtb_TRUE_gi = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S678>/23B-T-ES' */
    rtb_u3BTES_d = VITALMAIN_DW.M_T_ES_23B;

    /* DataStoreRead: '<S678>/W13B//23B-RWZ' */
    rtb_W13B23BRWZ_c = VITALMAIN_DW.M_W13B_23B_RWZ;

    /* DataStoreRead: '<S678>/FALSE' */
    rtb_FALSE_oz = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S678>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_lb = rtb_FALSE_oz;

    /* SignalConversion: '<S678>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_lx = rtb_FALSE_oz;

    /* SignalConversion: '<S678>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_nb = rtb_FALSE_oz;

    /* SignalConversion: '<S678>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalCo_nc = rtb_FALSE_oz;

    /* SignalConversion: '<S678>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalCo_an = rtb_FALSE_oz;

    /* DataStoreRead: '<S678>/24A-TP' */
    rtb_u4ATP_l = VITALMAIN_DW.M_TP_24A;

    /* DataStoreRead: '<S678>/24A-RLS' */
    rtb_u4ARLS_f = VITALMAIN_DW.M_RLS_24A;

    /* Outputs for Atomic SubSystem: '<S678>/ROUTE LOCK' */
    M_ES_WS(rtb_TRUE_gi, rtb_u3BTES_d, rtb_W13B23BRWZ_c, rtb_TmpSignalCo_lb,
            rtb_TmpSignalCo_lx, rtb_TmpSignalCo_nb, rtb_TmpSignalCo_nc,
            rtb_TmpSignalCo_an, rtb_FALSE_oz, rtb_u4ATP_l, rtb_u4ARLS_f,
            &VITALMAIN_B.ROUTELOCK_nd, &VITALMAIN_DW.ROUTELOCK_nd);

    /* End of Outputs for SubSystem: '<S678>/ROUTE LOCK' */

    /* DataStoreWrite: '<S678>/24A-T-ES' */
    VITALMAIN_DW.M_T_ES_24A = VITALMAIN_B.ROUTELOCK_nd.AND1;

    /* DataStoreRead: '<S679>/24-T-WS-RL' */
    rtb_u4TWSRL_p = VITALMAIN_DW.M_RL_T_WS_24A;

    /* DataStoreRead: '<S679>/TRUE' */
    rtb_TRUE_kd = VITALMAIN_DW.M_GV_TRUE;

    /* DataStoreRead: '<S679>/FALSE' */
    rtb_FALSE_o4k = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S679>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalCo_pax = rtb_FALSE_o4k;

    /* SignalConversion: '<S679>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalCo_pl = rtb_FALSE_o4k;

    /* SignalConversion: '<S679>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalCo_ip = rtb_FALSE_o4k;

    /* SignalConversion: '<S679>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalCo_cw3 = rtb_FALSE_o4k;

    /* SignalConversion: '<S679>/TmpSignal ConversionAtROUTE LOCKInport7' */
    rtb_TmpSignalCo_m0 = rtb_FALSE_o4k;

    /* SignalConversion: '<S679>/TmpSignal ConversionAtROUTE LOCKInport8' */
    rtb_TmpSignalCo_n5 = rtb_FALSE_o4k;

    /* DataStoreRead: '<S679>/24A-TP' */
    rtb_u4ATP_h = VITALMAIN_DW.M_TP_24A;

    /* DataStoreRead: '<S679>/24A-RLS' */
    rtb_u4ARLS_g = VITALMAIN_DW.M_RLS_24A;

    /* Outputs for Atomic SubSystem: '<S679>/ROUTE LOCK' */
    M_ES_WS(rtb_u4TWSRL_p, rtb_TRUE_kd, rtb_TmpSignalCo_pax, rtb_TmpSignalCo_pl,
            rtb_TmpSignalCo_ip, rtb_TmpSignalCo_cw3, rtb_TmpSignalCo_m0,
            rtb_TmpSignalCo_n5, rtb_FALSE_o4k, rtb_u4ATP_h, rtb_u4ARLS_g,
            &VITALMAIN_B.ROUTELOCK_af, &VITALMAIN_DW.ROUTELOCK_af);

    /* End of Outputs for SubSystem: '<S679>/ROUTE LOCK' */

    /* DataStoreWrite: '<S679>/24A-T-WS' */
    VITALMAIN_DW.M_T_WS_24A = VITALMAIN_B.ROUTELOCK_af.AND1;

    /* DataStoreRead: '<S722>/FALSE' */
    rtb_FALSE_ib = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S722>/TmpSignal ConversionAtSIGNAL LIGHTINGInport1' */
    rtb_TmpSignalConversionAtSIGNAL = rtb_FALSE_ib;

    /* SignalConversion: '<S722>/TmpSignal ConversionAtSIGNAL LIGHTINGInport2' */
    rtb_TmpSignalConversionAtSIGN_m = rtb_FALSE_ib;

    /* Logic: '<S722>/OR1' incorporates:
     *  DataStoreRead: '<S722>/DEP-JL10-S'
     *  DataStoreRead: '<S722>/DEP-JL20-S'
     */
    rtb_OR1_mc = (VITALMAIN_DW.M_R_S_DEP_10 || VITALMAIN_DW.M_R_S_DEP_20);

    /* DataStoreRead: '<S722>/DEP-TP' */
    rtb_DEPTP_a = VITALMAIN_DW.M_TP_DEP;

    /* Outputs for Atomic SubSystem: '<S722>/SIGNAL LIGHTING' */
    M_SIG_CTRL(rtb_TmpSignalConversionAtSIGNAL, rtb_OR1_mc, rtb_DEPTP_a,
               &VITALMAIN_B.SIGNALLIGHTING);

    /* End of Outputs for SubSystem: '<S722>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S722>/DEP-GR-DO' */
    VITALMAIN_DW.M_DEP_GR_DO = VITALMAIN_B.SIGNALLIGHTING.AND19;

    /* Logic: '<S723>/OR1' incorporates:
     *  DataStoreRead: '<S723>/J12A-X10-H'
     *  DataStoreRead: '<S723>/J12A-X20-H'
     */
    rtb_OR1_af = (VITALMAIN_DW.M_R_H_12_10 || VITALMAIN_DW.M_R_H_12_20);

    /* DataStoreRead: '<S723>/FALSE' */
    rtb_FALSE_am = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S723>/TmpSignal ConversionAtSIGNAL LIGHTINGInport2' */
    rtb_TmpSignalConversionAtSIG_m3 = rtb_FALSE_am;

    /* SignalConversion: '<S723>/TmpSignal ConversionAtSIGNAL LIGHTINGInport3' */
    rtb_TmpSignalConversionAtSIGN_b = rtb_FALSE_am;

    /* DataStoreRead: '<S723>/12A-TP' */
    rtb_u2ATP_h = VITALMAIN_DW.M_TP_12A;

    /* Outputs for Atomic SubSystem: '<S723>/SIGNAL LIGHTING' */
    M_SIG_CTRL(rtb_OR1_af, rtb_TmpSignalConversionAtSIGN_b, rtb_u2ATP_h,
               &VITALMAIN_B.SIGNALLIGHTING_b);

    /* End of Outputs for SubSystem: '<S723>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S723>/J12A-DR-DO' */
    VITALMAIN_DW.DO_J12A_DR = VITALMAIN_B.SIGNALLIGHTING_b.D;

    /* Logic: '<S724>/OR1' incorporates:
     *  DataStoreRead: '<S724>/J12B-X14-H'
     *  DataStoreRead: '<S724>/J12B-X24-H'
     */
    rtb_OR1_b = (VITALMAIN_DW.M_R_H_12_14 || VITALMAIN_DW.M_R_H_12_24);

    /* DataStoreRead: '<S724>/FALSE' */
    rtb_FALSE_ll = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S724>/TmpSignal ConversionAtSIGNAL LIGHTINGInport2' */
    rtb_TmpSignalConversionAtSI_m3g = rtb_FALSE_ll;

    /* SignalConversion: '<S724>/TmpSignal ConversionAtSIGNAL LIGHTINGInport3' */
    rtb_TmpSignalConversionAtSIG_bu = rtb_FALSE_ll;

    /* DataStoreRead: '<S724>/12E-TP' */
    rtb_u2ETP_o = VITALMAIN_DW.M_TP_12E;

    /* Outputs for Atomic SubSystem: '<S724>/SIGNAL LIGHTING' */
    M_SIG_CTRL(rtb_OR1_b, rtb_TmpSignalConversionAtSIG_bu, rtb_u2ETP_o,
               &VITALMAIN_B.SIGNALLIGHTING_m);

    /* End of Outputs for SubSystem: '<S724>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S724>/J12B-DR-DO' */
    VITALMAIN_DW.DO_J12B_DR = VITALMAIN_B.SIGNALLIGHTING_m.D;

    /* Logic: '<S725>/OR1' incorporates:
     *  DataStoreRead: '<S725>/J14-J12A-D'
     *  DataStoreRead: '<S725>/J14-J22A-D'
     */
    rtb_OR1_l5 = (VITALMAIN_DW.M_R_D_14_12 || VITALMAIN_DW.M_R_D_14_22);

    /* DataStoreRead: '<S725>/FALSE' */
    rtb_FALSE_o4q = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S725>/TmpSignal ConversionAtSIGNAL LIGHTINGInport2' */
    rtb_TmpSignalConversionAtS_m3gy = rtb_FALSE_o4q;

    /* SignalConversion: '<S725>/TmpSignal ConversionAtSIGNAL LIGHTINGInport3' */
    rtb_TmpSignalConversionAtSI_buo = rtb_FALSE_o4q;

    /* DataStoreRead: '<S725>/14B-TP' */
    rtb_u4BTP_f = VITALMAIN_DW.M_TP_14B;

    /* Outputs for Atomic SubSystem: '<S725>/SIGNAL LIGHTING' */
    M_SIG_CTRL(rtb_OR1_l5, rtb_TmpSignalConversionAtSI_buo, rtb_u4BTP_f,
               &VITALMAIN_B.SIGNALLIGHTING_c);

    /* End of Outputs for SubSystem: '<S725>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S725>/J14-DR-DO' */
    VITALMAIN_DW.DO_J14_DR = VITALMAIN_B.SIGNALLIGHTING_c.D;

    /* Logic: '<S726>/OR1' incorporates:
     *  DataStoreRead: '<S726>/J22A-X10-H'
     *  DataStoreRead: '<S726>/J22A-X20-H'
     */
    rtb_OR1_b5 = (VITALMAIN_DW.M_R_H_22_10 || VITALMAIN_DW.M_R_H_22_20);

    /* DataStoreRead: '<S726>/FALSE' */
    rtb_FALSE_a3 = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S726>/TmpSignal ConversionAtSIGNAL LIGHTINGInport2' */
    rtb_TmpSignalConversionAt_m3gyu = rtb_FALSE_a3;

    /* SignalConversion: '<S726>/TmpSignal ConversionAtSIGNAL LIGHTINGInport3' */
    rtb_TmpSignalConversionAtS_buoj = rtb_FALSE_a3;

    /* DataStoreRead: '<S726>/22A-TP' */
    rtb_u2ATP_a = VITALMAIN_DW.M_TP_22A;

    /* Outputs for Atomic SubSystem: '<S726>/SIGNAL LIGHTING' */
    M_SIG_CTRL(rtb_OR1_b5, rtb_TmpSignalConversionAtS_buoj, rtb_u2ATP_a,
               &VITALMAIN_B.SIGNALLIGHTING_g);

    /* End of Outputs for SubSystem: '<S726>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S726>/J22A-DR-DO' */
    VITALMAIN_DW.DO_J22A_DR = VITALMAIN_B.SIGNALLIGHTING_g.D;

    /* Logic: '<S727>/OR1' incorporates:
     *  DataStoreRead: '<S727>/J22B-X14-H'
     *  DataStoreRead: '<S727>/J22B-X24-H'
     */
    rtb_OR1_ef = (VITALMAIN_DW.M_R_H_22_14 || VITALMAIN_DW.M_R_H_22_24);

    /* DataStoreRead: '<S727>/FALSE' */
    rtb_FALSE_bh = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S727>/TmpSignal ConversionAtSIGNAL LIGHTINGInport2' */
    rtb_TmpSignalConversionA_m3gyu4 = rtb_FALSE_bh;

    /* SignalConversion: '<S727>/TmpSignal ConversionAtSIGNAL LIGHTINGInport3' */
    rtb_TmpSignalConversionAt_buoj3 = rtb_FALSE_bh;

    /* DataStoreRead: '<S727>/22E-TP' */
    rtb_u2ETP_m = VITALMAIN_DW.M_TP_22E;

    /* Outputs for Atomic SubSystem: '<S727>/SIGNAL LIGHTING' */
    M_SIG_CTRL(rtb_OR1_ef, rtb_TmpSignalConversionAt_buoj3, rtb_u2ETP_m,
               &VITALMAIN_B.SIGNALLIGHTING_p);

    /* End of Outputs for SubSystem: '<S727>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S727>/J22B-HR-DO' */
    VITALMAIN_DW.DO_J22B_DR = VITALMAIN_B.SIGNALLIGHTING_p.D;

    /* Logic: '<S728>/OR1' incorporates:
     *  DataStoreRead: '<S728>/J24-J12A-D'
     *  DataStoreRead: '<S728>/JL24-J22A-D'
     */
    rtb_OR1_o4 = (VITALMAIN_DW.M_R_D_24_12 || VITALMAIN_DW.M_R_D_24_22);

    /* DataStoreRead: '<S728>/FALSE' */
    rtb_FALSE_f3 = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S728>/TmpSignal ConversionAtSIGNAL LIGHTINGInport2' */
    rtb_TmpSignalConversion_m3gyu4z = rtb_FALSE_f3;

    /* SignalConversion: '<S728>/TmpSignal ConversionAtSIGNAL LIGHTINGInport3' */
    rtb_TmpSignalConversionA_buoj3j = rtb_FALSE_f3;

    /* DataStoreRead: '<S728>/24-TP' */
    rtb_u4TP = VITALMAIN_DW.M_TP_24B;

    /* Outputs for Atomic SubSystem: '<S728>/SIGNAL LIGHTING' */
    M_SIG_CTRL(rtb_OR1_o4, rtb_TmpSignalConversionA_buoj3j, rtb_u4TP,
               &VITALMAIN_B.SIGNALLIGHTING_gc);

    /* End of Outputs for SubSystem: '<S728>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S728>/J24-DR-DO' */
    VITALMAIN_DW.DO_J24_DR = VITALMAIN_B.SIGNALLIGHTING_gc.D;

    /* Logic: '<S729>/OR1' incorporates:
     *  DataStoreRead: '<S729>/JL10-J12B-D'
     *  DataStoreRead: '<S729>/JL10-J22B-D'
     */
    rtb_OR1_f = (VITALMAIN_DW.M_R_D_10_12 || VITALMAIN_DW.M_R_D_10_22);

    /* DataStoreRead: '<S729>/FALSE' */
    rtb_FALSE_pma = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S729>/TmpSignal ConversionAtSIGNAL LIGHTINGInport2' */
    rtb_TmpSignalConversio_m3gyu4zg = rtb_FALSE_pma;

    /* DataStoreRead: '<S729>/JL10-DEP-S' */
    rtb_JL10DEPS_f = VITALMAIN_DW.M_R_S_10_DEP;

    /* DataStoreRead: '<S729>/10A-TP' */
    rtb_u0ATP_a = VITALMAIN_DW.M_TP_10A;

    /* Outputs for Atomic SubSystem: '<S729>/SIGNAL LIGHTING' */
    M_SIG_CTRL(rtb_OR1_f, rtb_JL10DEPS_f, rtb_u0ATP_a,
               &VITALMAIN_B.SIGNALLIGHTING_n);

    /* End of Outputs for SubSystem: '<S729>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S729>/JL10-DR-DO' */
    VITALMAIN_DW.DO_JL10_DR = VITALMAIN_B.SIGNALLIGHTING_n.D;

    /* DataStoreWrite: '<S729>/JL10-GR-DO' */
    VITALMAIN_DW.DO_JL10_GR = VITALMAIN_B.SIGNALLIGHTING_n.AND19;

    /* Logic: '<S730>/OR1' incorporates:
     *  DataStoreRead: '<S730>/JL20-J12B-D'
     *  DataStoreRead: '<S730>/JL20-J22B-D'
     */
    rtb_OR1_c = (VITALMAIN_DW.M_R_D_20_12 || VITALMAIN_DW.M_R_D_20_22);

    /* DataStoreRead: '<S730>/FALSE' */
    rtb_FALSE_b0w = VITALMAIN_DW.M_GV_FALSE;

    /* SignalConversion: '<S730>/TmpSignal ConversionAtSIGNAL LIGHTINGInport2' */
    rtb_TmpSignalConversi_m3gyu4zgx = rtb_FALSE_b0w;

    /* DataStoreRead: '<S730>/JL20-DEP-S' */
    rtb_JL20DEPS_j = VITALMAIN_DW.M_R_S_20_DEP;

    /* DataStoreRead: '<S730>/20A-TP' */
    rtb_u0ATP_ad = VITALMAIN_DW.M_TP_20A;

    /* Outputs for Atomic SubSystem: '<S730>/SIGNAL LIGHTING' */
    M_SIG_CTRL(rtb_OR1_c, rtb_JL20DEPS_j, rtb_u0ATP_ad,
               &VITALMAIN_B.SIGNALLIGHTING_cr);

    /* End of Outputs for SubSystem: '<S730>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S730>/JL20-DR-DO' */
    VITALMAIN_DW.DO_JL20_DR = VITALMAIN_B.SIGNALLIGHTING_cr.D;

    /* DataStoreWrite: '<S730>/JL20-GR-DO' */
    VITALMAIN_DW.DO_JL20_GR = VITALMAIN_B.SIGNALLIGHTING_cr.AND19;

    /* DataStoreRead: '<S15>/13B-TPR-DI' */
    VITALMAIN_B.u3BTPRDI = VITALMAIN_DW.DI_TPR_13B;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP9' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u3BTPRDI, &VITALMAIN_B.M_TP9,
       &VITALMAIN_DW.M_TP9);

  /* End of Outputs for SubSystem: '<S15>/M_TP9' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/13B-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP9Outport1'
     */
    VITALMAIN_DW.M_TP_13B = VITALMAIN_B.M_TP9.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/13A-TPR-DI' */
    VITALMAIN_B.u3ATPRDI = VITALMAIN_DW.DI_TPR_13A;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP8' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u3ATPRDI, &VITALMAIN_B.M_TP8,
       &VITALMAIN_DW.M_TP8);

  /* End of Outputs for SubSystem: '<S15>/M_TP8' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/13A-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP8Outport1'
     */
    VITALMAIN_DW.M_TP_13A = VITALMAIN_B.M_TP8.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/12C-TPR-DI' */
    VITALMAIN_B.u2CTPRDI = VITALMAIN_DW.DI_TPR_12C;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP7' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u2CTPRDI, &VITALMAIN_B.M_TP7,
       &VITALMAIN_DW.M_TP7);

  /* End of Outputs for SubSystem: '<S15>/M_TP7' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/12C-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP7Outport1'
     */
    VITALMAIN_DW.M_TP_12C = VITALMAIN_B.M_TP7.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/12B-TPR-DI' */
    VITALMAIN_B.u2BTPRDI = VITALMAIN_DW.DI_TPR_12B;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP6' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u2BTPRDI, &VITALMAIN_B.M_TP6,
       &VITALMAIN_DW.M_TP6);

  /* End of Outputs for SubSystem: '<S15>/M_TP6' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/12B-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP6Outport1'
     */
    VITALMAIN_DW.M_TP_12B = VITALMAIN_B.M_TP6.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/12A-TPR-DI' */
    VITALMAIN_B.u2ATPRDI = VITALMAIN_DW.DI_TPR_12A;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP5' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u2ATPRDI, &VITALMAIN_B.M_TP5,
       &VITALMAIN_DW.M_TP5);

  /* End of Outputs for SubSystem: '<S15>/M_TP5' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/12A-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP5Outport1'
     */
    VITALMAIN_DW.M_TP_12A = VITALMAIN_B.M_TP5.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/11B-TPR-DI' */
    VITALMAIN_B.u1BTPRDI = VITALMAIN_DW.DI_TPR_11B;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP4' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u1BTPRDI, &VITALMAIN_B.M_TP4,
       &VITALMAIN_DW.M_TP4);

  /* End of Outputs for SubSystem: '<S15>/M_TP4' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/11B-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP4Outport1'
     */
    VITALMAIN_DW.M_TP_11B = VITALMAIN_B.M_TP4.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/11A-TPR-DI' */
    VITALMAIN_B.u1ATPRDI = VITALMAIN_DW.DI_TPR_11A;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP3' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u1ATPRDI, &VITALMAIN_B.M_TP3,
       &VITALMAIN_DW.M_TP3);

  /* End of Outputs for SubSystem: '<S15>/M_TP3' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/11A-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP3Outport1'
     */
    VITALMAIN_DW.M_TP_11A = VITALMAIN_B.M_TP3.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/22E-TPR-DI' */
    VITALMAIN_B.u2ETPRDI = VITALMAIN_DW.DI_TPR_22E;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP27' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u2ETPRDI, &VITALMAIN_B.M_TP27,
       &VITALMAIN_DW.M_TP27);

  /* End of Outputs for SubSystem: '<S15>/M_TP27' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/22E-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP27Outport1'
     */
    VITALMAIN_DW.M_TP_22E = VITALMAIN_B.M_TP27.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/22D-TPR-DI' */
    VITALMAIN_B.u2DTPRDI = VITALMAIN_DW.DI_TPR_22D;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP26' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u2DTPRDI, &VITALMAIN_B.M_TP26,
       &VITALMAIN_DW.M_TP26);

  /* End of Outputs for SubSystem: '<S15>/M_TP26' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/22D-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP26Outport1'
     */
    VITALMAIN_DW.M_TP_22D = VITALMAIN_B.M_TP26.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/24B-TPR-DI' */
    VITALMAIN_B.u4BTPRDI = VITALMAIN_DW.DI_TPR_24B;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP25' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u4BTPRDI, &VITALMAIN_B.M_TP25,
       &VITALMAIN_DW.M_TP25);

  /* End of Outputs for SubSystem: '<S15>/M_TP25' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/24B-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP25Outport1'
     */
    VITALMAIN_DW.M_TP_24B = VITALMAIN_B.M_TP25.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/24A-TPR-DI' */
    VITALMAIN_B.u4ATPRDI = VITALMAIN_DW.DI_TPR_24A;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP24' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u4ATPRDI, &VITALMAIN_B.M_TP24,
       &VITALMAIN_DW.M_TP24);

  /* End of Outputs for SubSystem: '<S15>/M_TP24' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/24A-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP24Outport1'
     */
    VITALMAIN_DW.M_TP_24A = VITALMAIN_B.M_TP24.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/23B-TPR-DI' */
    VITALMAIN_B.u3BTPRDI_f = VITALMAIN_DW.DI_TPR_23B;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP23' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u3BTPRDI_f, &VITALMAIN_B.M_TP23,
       &VITALMAIN_DW.M_TP23);

  /* End of Outputs for SubSystem: '<S15>/M_TP23' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/23B-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP23Outport1'
     */
    VITALMAIN_DW.M_TP_23B = VITALMAIN_B.M_TP23.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/23A-TPR-DI' */
    VITALMAIN_B.u3ATPRDI_m = VITALMAIN_DW.DI_TPR_23A;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP22' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u3ATPRDI_m, &VITALMAIN_B.M_TP22,
       &VITALMAIN_DW.M_TP22);

  /* End of Outputs for SubSystem: '<S15>/M_TP22' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/23A-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP22Outport1'
     */
    VITALMAIN_DW.M_TP_23A = VITALMAIN_B.M_TP22.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/22C-TPR-DI' */
    VITALMAIN_B.u2CTPRDI_p = VITALMAIN_DW.DI_TPR_22C;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP21' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u2CTPRDI_p, &VITALMAIN_B.M_TP21,
       &VITALMAIN_DW.M_TP21);

  /* End of Outputs for SubSystem: '<S15>/M_TP21' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/22C-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP21Outport1'
     */
    VITALMAIN_DW.M_TP_22C = VITALMAIN_B.M_TP21.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/22B-TPR-DI' */
    VITALMAIN_B.u2BTPRDI_n = VITALMAIN_DW.DI_TPR_22B;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP20' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u2BTPRDI_n, &VITALMAIN_B.M_TP20,
       &VITALMAIN_DW.M_TP20);

  /* End of Outputs for SubSystem: '<S15>/M_TP20' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/22B-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP20Outport1'
     */
    VITALMAIN_DW.M_TP_22B = VITALMAIN_B.M_TP20.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/10B-TPR-DI' */
    VITALMAIN_B.u0BTPRDI = VITALMAIN_DW.DI_TPR_10B;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP2' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u0BTPRDI, &VITALMAIN_B.M_TP2,
       &VITALMAIN_DW.M_TP2);

  /* End of Outputs for SubSystem: '<S15>/M_TP2' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/10B-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP2Outport1'
     */
    VITALMAIN_DW.M_TP_10B = VITALMAIN_B.M_TP2.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/22A-TPR-DI' */
    VITALMAIN_B.u2ATPRDI_g = VITALMAIN_DW.DI_TPR_22A;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP19' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u2ATPRDI_g, &VITALMAIN_B.M_TP19,
       &VITALMAIN_DW.M_TP19);

  /* End of Outputs for SubSystem: '<S15>/M_TP19' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/22A-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP19Outport1'
     */
    VITALMAIN_DW.M_TP_22A = VITALMAIN_B.M_TP19.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/21C-TPR-DI' */
    VITALMAIN_B.u1CTPRDI = VITALMAIN_DW.DI_TPR_21C;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP18' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u1CTPRDI, &VITALMAIN_B.M_TP18,
       &VITALMAIN_DW.M_TP18);

  /* End of Outputs for SubSystem: '<S15>/M_TP18' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/21C-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP18Outport1'
     */
    VITALMAIN_DW.M_TP_21C = VITALMAIN_B.M_TP18.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/21B-TPR-DI' */
    VITALMAIN_B.u1BTPRDI_d = VITALMAIN_DW.DI_TPR_21B;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP17' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u1BTPRDI_d, &VITALMAIN_B.M_TP17,
       &VITALMAIN_DW.M_TP17);

  /* End of Outputs for SubSystem: '<S15>/M_TP17' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/21B-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP17Outport1'
     */
    VITALMAIN_DW.M_TP_21B = VITALMAIN_B.M_TP17.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/21A-TPR-DI' */
    VITALMAIN_B.u1ATPRDI_i = VITALMAIN_DW.DI_TPR_21A;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP16' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u1ATPRDI_i, &VITALMAIN_B.M_TP16,
       &VITALMAIN_DW.M_TP16);

  /* End of Outputs for SubSystem: '<S15>/M_TP16' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/21A-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP16Outport1'
     */
    VITALMAIN_DW.M_TP_21A = VITALMAIN_B.M_TP16.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/20B-TPR-DI' */
    VITALMAIN_B.u0BTPRDI_o = VITALMAIN_DW.DI_TPR_20B;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP15' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u0BTPRDI_o, &VITALMAIN_B.M_TP15,
       &VITALMAIN_DW.M_TP15);

  /* End of Outputs for SubSystem: '<S15>/M_TP15' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/20B-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP15Outport1'
     */
    VITALMAIN_DW.M_TP_20B = VITALMAIN_B.M_TP15.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/20A-TPR-DI' */
    VITALMAIN_B.u0ATPRDI = VITALMAIN_DW.DI_TPR_20A;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP14' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u0ATPRDI, &VITALMAIN_B.M_TP14,
       &VITALMAIN_DW.M_TP14);

  /* End of Outputs for SubSystem: '<S15>/M_TP14' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/20A-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP14Outport1'
     */
    VITALMAIN_DW.M_TP_20A = VITALMAIN_B.M_TP14.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/12E-TPR-DI' */
    VITALMAIN_B.u2ETPRDI_i = VITALMAIN_DW.DI_TPR_12E;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP13' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u2ETPRDI_i, &VITALMAIN_B.M_TP13,
       &VITALMAIN_DW.M_TP13);

  /* End of Outputs for SubSystem: '<S15>/M_TP13' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/12E-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP13Outport1'
     */
    VITALMAIN_DW.M_TP_12E = VITALMAIN_B.M_TP13.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/12D-TPR-DI' */
    VITALMAIN_B.u2DTPRDI_l = VITALMAIN_DW.DI_TPR_12D;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP12' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u2DTPRDI_l, &VITALMAIN_B.M_TP12,
       &VITALMAIN_DW.M_TP12);

  /* End of Outputs for SubSystem: '<S15>/M_TP12' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/12D-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP12Outport1'
     */
    VITALMAIN_DW.M_TP_12D = VITALMAIN_B.M_TP12.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/14B-TPR-DI' */
    VITALMAIN_B.u4BTPRDI_d = VITALMAIN_DW.DI_TPR_14B;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP11' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u4BTPRDI_d, &VITALMAIN_B.M_TP11,
       &VITALMAIN_DW.M_TP11);

  /* End of Outputs for SubSystem: '<S15>/M_TP11' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/14B-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP11Outport1'
     */
    VITALMAIN_DW.M_TP_14B = VITALMAIN_B.M_TP11.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/14A-TPR-DI' */
    VITALMAIN_B.u4ATPRDI_e = VITALMAIN_DW.DI_TPR_14A;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP10' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u4ATPRDI_e, &VITALMAIN_B.M_TP10,
       &VITALMAIN_DW.M_TP10);

  /* End of Outputs for SubSystem: '<S15>/M_TP10' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/14A-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP10Outport1'
     */
    VITALMAIN_DW.M_TP_14A = VITALMAIN_B.M_TP10.MV_TON1.LogicalOperator2;

    /* DataStoreRead: '<S15>/10A-TPR-DI' */
    VITALMAIN_B.u0ATPRDI_g = VITALMAIN_DW.DI_TPR_10A;
  }

  /* Outputs for Atomic SubSystem: '<S15>/M_TP1' */
  M_TP(VITALMAIN_M, VITALMAIN_B.u0ATPRDI_g, &VITALMAIN_B.M_TP1,
       &VITALMAIN_DW.M_TP1);

  /* End of Outputs for SubSystem: '<S15>/M_TP1' */
  if (rtmIsMajorTimeStep(VITALMAIN_M)) {
    /* DataStoreWrite: '<S15>/10A-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtM_TP1Outport1'
     */
    VITALMAIN_DW.M_TP_10A = VITALMAIN_B.M_TP1.MV_TON1.LogicalOperator2;

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
    rty_DRDO[0] = rtb_JL10DRDO_k;
    rty_DRDO[1] = rtb_JL20DRDO_g;
    rty_DRDO[2] = rtb_J12ADRDO_b;
    rty_DRDO[3] = rtb_J22ADRDO_o;
    rty_DRDO[4] = rtb_J12BDRDO_h;
    rty_DRDO[5] = rtb_J22BDRDO_a;
    rty_DRDO[6] = rtb_J14DRDO_h;
    rty_DRDO[7] = rtb_J24DRDO_l;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtGR-DO-TOInport1' */
    rty_GRDOTO[0] = rtb_JL10GRDO_c;
    rty_GRDOTO[1] = rtb_JL20GRDO_f;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtGR-DOInport1' */
    rty_GRDO[0] = rtb_JL10GRDO_o4;
    rty_GRDO[1] = rtb_JL20GRDO_e;

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

    /* SignalConversion: '<Root>/TmpSignal ConversionAtTO-DEPInport1' */
    rty_TODEP[0] = rtb_VDR_o;
    rty_TODEP[1] = rtb_RRLS_cm;
    rty_TODEP[2] = rtb_SWRLS_i;
    rty_TODEP[3] = rtb_DEPGRDO_o;
    rty_TODEP[4] = rtb_RR_j;
    rty_TODEP[5] = rtb_RRLSXDEP;

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
    rty_TPTO[9] = rtb_u3ATP_g;
    rty_TPTO[10] = rtb_u3BTP_i;
    rty_TPTO[11] = rtb_u4ATP_n1;
    rty_TPTO[12] = rtb_u4BTP_n;
    rty_TPTO[13] = rtb_u0ATP_g;
    rty_TPTO[14] = rtb_u0BTP_c;
    rty_TPTO[15] = rtb_u1ATP_o;
    rty_TPTO[16] = rtb_u1BTP_a;
    rty_TPTO[17] = rtb_u1CTP_dm;
    rty_TPTO[18] = rtb_u2ATP_mb;
    rty_TPTO[19] = rtb_u2BTP_a;
    rty_TPTO[20] = rtb_u2CTP_a;
    rty_TPTO[21] = rtb_u2DTP_e;
    rty_TPTO[22] = rtb_u2ETP_b;
    rty_TPTO[23] = rtb_u3ATP_o;
    rty_TPTO[24] = rtb_u3BTP_k4;
    rty_TPTO[25] = rtb_u4ATP_p;
    rty_TPTO[26] = rtb_u4BTP_d;

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
}

/* Update for referenced model: 'VITALMAIN' */
void VITALMAIN_Update(void)
{
  RT_MODEL_VITALMAIN_T *const VITALMAIN_M = &(VITALMAIN_MdlrefDW.rtm);

  /* Update for Atomic SubSystem: '<S16>/APPROACH LOCK' */
  M_AS_Update(VITALMAIN_M, &VITALMAIN_B.APPROACHLOCK, &VITALMAIN_DW.APPROACHLOCK);

  /* End of Update for SubSystem: '<S16>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S17>/APPROACH LOCK' */
  M_AS_Update(VITALMAIN_M, &VITALMAIN_B.APPROACHLOCK_c,
              &VITALMAIN_DW.APPROACHLOCK_c);

  /* End of Update for SubSystem: '<S17>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S18>/APPROACH LOCK' */
  M_AS_Update(VITALMAIN_M, &VITALMAIN_B.APPROACHLOCK_h,
              &VITALMAIN_DW.APPROACHLOCK_h);

  /* End of Update for SubSystem: '<S18>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S19>/APPROACH LOCK' */
  M_AS_Update(VITALMAIN_M, &VITALMAIN_B.APPROACHLOCK_o,
              &VITALMAIN_DW.APPROACHLOCK_o);

  /* End of Update for SubSystem: '<S19>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S20>/APPROACH LOCK' */
  M_AS_Update(VITALMAIN_M, &VITALMAIN_B.APPROACHLOCK_d,
              &VITALMAIN_DW.APPROACHLOCK_d);

  /* End of Update for SubSystem: '<S20>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S21>/APPROACH LOCK' */
  M_AS_Update(VITALMAIN_M, &VITALMAIN_B.APPROACHLOCK_h1,
              &VITALMAIN_DW.APPROACHLOCK_h1);

  /* End of Update for SubSystem: '<S21>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S22>/APPROACH LOCK' */
  M_AS_Update(VITALMAIN_M, &VITALMAIN_B.APPROACHLOCK_g,
              &VITALMAIN_DW.APPROACHLOCK_g);

  /* End of Update for SubSystem: '<S22>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S23>/APPROACH LOCK' */
  M_AS_Update(VITALMAIN_M, &VITALMAIN_B.APPROACHLOCK_e,
              &VITALMAIN_DW.APPROACHLOCK_e);

  /* End of Update for SubSystem: '<S23>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S24>/APPROACH LOCK' */
  M_AS_Update(VITALMAIN_M, &VITALMAIN_B.APPROACHLOCK_ok,
              &VITALMAIN_DW.APPROACHLOCK_ok);

  /* End of Update for SubSystem: '<S24>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S169>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Update(VITALMAIN_M, &VITALMAIN_B.EMERGENCYPOINTRELEASE,
                 &VITALMAIN_DW.EMERGENCYPOINTRELEASE);

  /* End of Update for SubSystem: '<S169>/EMERGENCY POINT RELEASE' */

  /* Update for Atomic SubSystem: '<S170>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Update(VITALMAIN_M, &VITALMAIN_B.EMERGENCYPOINTRELEASE_f,
                 &VITALMAIN_DW.EMERGENCYPOINTRELEASE_f);

  /* End of Update for SubSystem: '<S170>/EMERGENCY POINT RELEASE' */

  /* Update for Atomic SubSystem: '<S171>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Update(VITALMAIN_M, &VITALMAIN_B.EMERGENCYPOINTRELEASE_e,
                 &VITALMAIN_DW.EMERGENCYPOINTRELEASE_e);

  /* End of Update for SubSystem: '<S171>/EMERGENCY POINT RELEASE' */

  /* Update for Atomic SubSystem: '<S172>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Update(VITALMAIN_M, &VITALMAIN_B.EMERGENCYPOINTRELEASE_d,
                 &VITALMAIN_DW.EMERGENCYPOINTRELEASE_d);

  /* End of Update for SubSystem: '<S172>/EMERGENCY POINT RELEASE' */

  /* Update for Atomic SubSystem: '<S173>/EMERGENCY POINT RELEASE' */
  M_SWRLS_Update(VITALMAIN_M, &VITALMAIN_B.EMERGENCYPOINTRELEASE_m,
                 &VITALMAIN_DW.EMERGENCYPOINTRELEASE_m);

  /* End of Update for SubSystem: '<S173>/EMERGENCY POINT RELEASE' */

  /* Update for Atomic SubSystem: '<S229>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Update(VITALMAIN_M, &VITALMAIN_B.EMERGENCYROUTERELEASE,
                &VITALMAIN_DW.EMERGENCYROUTERELEASE);

  /* End of Update for SubSystem: '<S229>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S230>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Update(VITALMAIN_M, &VITALMAIN_B.EMERGENCYROUTERELEASE_b,
                &VITALMAIN_DW.EMERGENCYROUTERELEASE_b);

  /* End of Update for SubSystem: '<S230>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S231>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Update(VITALMAIN_M, &VITALMAIN_B.EMERGENCYROUTERELEASE_bb,
                &VITALMAIN_DW.EMERGENCYROUTERELEASE_bb);

  /* End of Update for SubSystem: '<S231>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S232>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Update(VITALMAIN_M, &VITALMAIN_B.EMERGENCYROUTERELEASE_i,
                &VITALMAIN_DW.EMERGENCYROUTERELEASE_i);

  /* End of Update for SubSystem: '<S232>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S233>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Update(VITALMAIN_M, &VITALMAIN_B.EMERGENCYROUTERELEASE_p,
                &VITALMAIN_DW.EMERGENCYROUTERELEASE_p);

  /* End of Update for SubSystem: '<S233>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S234>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Update(VITALMAIN_M, &VITALMAIN_B.EMERGENCYROUTERELEASE_a,
                &VITALMAIN_DW.EMERGENCYROUTERELEASE_a);

  /* End of Update for SubSystem: '<S234>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S235>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Update(VITALMAIN_M, &VITALMAIN_B.EMERGENCYROUTERELEASE_l,
                &VITALMAIN_DW.EMERGENCYROUTERELEASE_l);

  /* End of Update for SubSystem: '<S235>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S236>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Update(VITALMAIN_M, &VITALMAIN_B.EMERGENCYROUTERELEASE_m,
                &VITALMAIN_DW.EMERGENCYROUTERELEASE_m);

  /* End of Update for SubSystem: '<S236>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S237>/EMERGENCY ROUTE RELEASE' */
  M_RRLS_Update(VITALMAIN_M, &VITALMAIN_B.EMERGENCYROUTERELEASE_o,
                &VITALMAIN_DW.EMERGENCYROUTERELEASE_o);

  /* End of Update for SubSystem: '<S237>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S438>/POINT CONTROL' */
  M_SW_CTRL_Update(VITALMAIN_M, &VITALMAIN_B.POINTCONTROL,
                   &VITALMAIN_DW.POINTCONTROL);

  /* End of Update for SubSystem: '<S438>/POINT CONTROL' */

  /* Update for Atomic SubSystem: '<S439>/POINT CONTROL' */
  M_SW_CTRL_Update(VITALMAIN_M, &VITALMAIN_B.POINTCONTROL_c,
                   &VITALMAIN_DW.POINTCONTROL_c);

  /* End of Update for SubSystem: '<S439>/POINT CONTROL' */

  /* Update for Atomic SubSystem: '<S440>/POINT CONTROL' */
  M_SW_CTRL_Update(VITALMAIN_M, &VITALMAIN_B.POINTCONTROL_a,
                   &VITALMAIN_DW.POINTCONTROL_a);

  /* End of Update for SubSystem: '<S440>/POINT CONTROL' */

  /* Update for Atomic SubSystem: '<S441>/POINT CONTROL' */
  M_SW_CTRL_Update(VITALMAIN_M, &VITALMAIN_B.POINTCONTROL_j,
                   &VITALMAIN_DW.POINTCONTROL_j);

  /* End of Update for SubSystem: '<S441>/POINT CONTROL' */

  /* Update for Atomic SubSystem: '<S442>/POINT CONTROL' */
  M_SW_CTRL_Update(VITALMAIN_M, &VITALMAIN_B.POINTCONTROL_h,
                   &VITALMAIN_DW.POINTCONTROL_h);

  /* End of Update for SubSystem: '<S442>/POINT CONTROL' */

  /* Update for Atomic SubSystem: '<S15>/M_TP9' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u3BTPRDI, &VITALMAIN_B.M_TP9,
              &VITALMAIN_DW.M_TP9);

  /* End of Update for SubSystem: '<S15>/M_TP9' */

  /* Update for Atomic SubSystem: '<S15>/M_TP8' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u3ATPRDI, &VITALMAIN_B.M_TP8,
              &VITALMAIN_DW.M_TP8);

  /* End of Update for SubSystem: '<S15>/M_TP8' */

  /* Update for Atomic SubSystem: '<S15>/M_TP7' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u2CTPRDI, &VITALMAIN_B.M_TP7,
              &VITALMAIN_DW.M_TP7);

  /* End of Update for SubSystem: '<S15>/M_TP7' */

  /* Update for Atomic SubSystem: '<S15>/M_TP6' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u2BTPRDI, &VITALMAIN_B.M_TP6,
              &VITALMAIN_DW.M_TP6);

  /* End of Update for SubSystem: '<S15>/M_TP6' */

  /* Update for Atomic SubSystem: '<S15>/M_TP5' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u2ATPRDI, &VITALMAIN_B.M_TP5,
              &VITALMAIN_DW.M_TP5);

  /* End of Update for SubSystem: '<S15>/M_TP5' */

  /* Update for Atomic SubSystem: '<S15>/M_TP4' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u1BTPRDI, &VITALMAIN_B.M_TP4,
              &VITALMAIN_DW.M_TP4);

  /* End of Update for SubSystem: '<S15>/M_TP4' */

  /* Update for Atomic SubSystem: '<S15>/M_TP3' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u1ATPRDI, &VITALMAIN_B.M_TP3,
              &VITALMAIN_DW.M_TP3);

  /* End of Update for SubSystem: '<S15>/M_TP3' */

  /* Update for Atomic SubSystem: '<S15>/M_TP27' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u2ETPRDI, &VITALMAIN_B.M_TP27,
              &VITALMAIN_DW.M_TP27);

  /* End of Update for SubSystem: '<S15>/M_TP27' */

  /* Update for Atomic SubSystem: '<S15>/M_TP26' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u2DTPRDI, &VITALMAIN_B.M_TP26,
              &VITALMAIN_DW.M_TP26);

  /* End of Update for SubSystem: '<S15>/M_TP26' */

  /* Update for Atomic SubSystem: '<S15>/M_TP25' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u4BTPRDI, &VITALMAIN_B.M_TP25,
              &VITALMAIN_DW.M_TP25);

  /* End of Update for SubSystem: '<S15>/M_TP25' */

  /* Update for Atomic SubSystem: '<S15>/M_TP24' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u4ATPRDI, &VITALMAIN_B.M_TP24,
              &VITALMAIN_DW.M_TP24);

  /* End of Update for SubSystem: '<S15>/M_TP24' */

  /* Update for Atomic SubSystem: '<S15>/M_TP23' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u3BTPRDI_f, &VITALMAIN_B.M_TP23,
              &VITALMAIN_DW.M_TP23);

  /* End of Update for SubSystem: '<S15>/M_TP23' */

  /* Update for Atomic SubSystem: '<S15>/M_TP22' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u3ATPRDI_m, &VITALMAIN_B.M_TP22,
              &VITALMAIN_DW.M_TP22);

  /* End of Update for SubSystem: '<S15>/M_TP22' */

  /* Update for Atomic SubSystem: '<S15>/M_TP21' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u2CTPRDI_p, &VITALMAIN_B.M_TP21,
              &VITALMAIN_DW.M_TP21);

  /* End of Update for SubSystem: '<S15>/M_TP21' */

  /* Update for Atomic SubSystem: '<S15>/M_TP20' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u2BTPRDI_n, &VITALMAIN_B.M_TP20,
              &VITALMAIN_DW.M_TP20);

  /* End of Update for SubSystem: '<S15>/M_TP20' */

  /* Update for Atomic SubSystem: '<S15>/M_TP2' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u0BTPRDI, &VITALMAIN_B.M_TP2,
              &VITALMAIN_DW.M_TP2);

  /* End of Update for SubSystem: '<S15>/M_TP2' */

  /* Update for Atomic SubSystem: '<S15>/M_TP19' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u2ATPRDI_g, &VITALMAIN_B.M_TP19,
              &VITALMAIN_DW.M_TP19);

  /* End of Update for SubSystem: '<S15>/M_TP19' */

  /* Update for Atomic SubSystem: '<S15>/M_TP18' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u1CTPRDI, &VITALMAIN_B.M_TP18,
              &VITALMAIN_DW.M_TP18);

  /* End of Update for SubSystem: '<S15>/M_TP18' */

  /* Update for Atomic SubSystem: '<S15>/M_TP17' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u1BTPRDI_d, &VITALMAIN_B.M_TP17,
              &VITALMAIN_DW.M_TP17);

  /* End of Update for SubSystem: '<S15>/M_TP17' */

  /* Update for Atomic SubSystem: '<S15>/M_TP16' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u1ATPRDI_i, &VITALMAIN_B.M_TP16,
              &VITALMAIN_DW.M_TP16);

  /* End of Update for SubSystem: '<S15>/M_TP16' */

  /* Update for Atomic SubSystem: '<S15>/M_TP15' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u0BTPRDI_o, &VITALMAIN_B.M_TP15,
              &VITALMAIN_DW.M_TP15);

  /* End of Update for SubSystem: '<S15>/M_TP15' */

  /* Update for Atomic SubSystem: '<S15>/M_TP14' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u0ATPRDI, &VITALMAIN_B.M_TP14,
              &VITALMAIN_DW.M_TP14);

  /* End of Update for SubSystem: '<S15>/M_TP14' */

  /* Update for Atomic SubSystem: '<S15>/M_TP13' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u2ETPRDI_i, &VITALMAIN_B.M_TP13,
              &VITALMAIN_DW.M_TP13);

  /* End of Update for SubSystem: '<S15>/M_TP13' */

  /* Update for Atomic SubSystem: '<S15>/M_TP12' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u2DTPRDI_l, &VITALMAIN_B.M_TP12,
              &VITALMAIN_DW.M_TP12);

  /* End of Update for SubSystem: '<S15>/M_TP12' */

  /* Update for Atomic SubSystem: '<S15>/M_TP11' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u4BTPRDI_d, &VITALMAIN_B.M_TP11,
              &VITALMAIN_DW.M_TP11);

  /* End of Update for SubSystem: '<S15>/M_TP11' */

  /* Update for Atomic SubSystem: '<S15>/M_TP10' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u4ATPRDI_e, &VITALMAIN_B.M_TP10,
              &VITALMAIN_DW.M_TP10);

  /* End of Update for SubSystem: '<S15>/M_TP10' */

  /* Update for Atomic SubSystem: '<S15>/M_TP1' */
  M_TP_Update(VITALMAIN_M, VITALMAIN_B.u0ATPRDI_g, &VITALMAIN_B.M_TP1,
              &VITALMAIN_DW.M_TP1);

  /* End of Update for SubSystem: '<S15>/M_TP1' */
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

  /* block I/O */
  (void) memset(((void *) &VITALMAIN_B), 0,
                sizeof(B_VITALMAIN_c_T));

  /* states (dwork) */
  (void) memset((void *)&VITALMAIN_DW, 0,
                sizeof(DW_VITALMAIN_f_T));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
