/*
 * File: VITALDEPOT.c
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

#include "VITALDEPOT.h"
#include "VITALDEPOT_private.h"

int_T VITALDEPOT_GlobalTID[2];
const rtTimingBridge *VITALDEPOT_TimingBrdg;
MdlrefDW_VITALDEPOT_T VITALDEPOT_MdlrefDW;

/* Block signals (auto storage) */
B_VITALDEPOT_c_T VITALDEPOT_B;

/* Block states (auto storage) */
DW_VITALDEPOT_f_T VITALDEPOT_DW;

/*
 * Initial conditions for atomic system:
 *    '<S23>/DV_TON1'
 *    '<S23>/DV_TON2'
 *    '<S23>/DV_TON3'
 *    '<S39>/DV_TON1'
 *    '<S39>/DV_TON2'
 *    '<S39>/DV_TON3'
 *    '<S55>/DV_TON1'
 *    '<S55>/DV_TON2'
 *    '<S55>/DV_TON3'
 *    '<S71>/DV_TON1'
 *    ...
 */
void DV_TON_Init(DW_DV_TON_T *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<S24>/TON' */
  /* InitializeConditions for Memory: '<S30>/memory' */
  localDW->memory_PreviousInput = -1.0E+99;

  /* End of InitializeConditions for SubSystem: '<S24>/TON' */
}

/*
 * Outputs for atomic system:
 *    '<S23>/DV_TON1'
 *    '<S23>/DV_TON2'
 *    '<S23>/DV_TON3'
 *    '<S39>/DV_TON1'
 *    '<S39>/DV_TON2'
 *    '<S39>/DV_TON3'
 *    '<S55>/DV_TON1'
 *    '<S55>/DV_TON2'
 *    '<S55>/DV_TON3'
 *    '<S71>/DV_TON1'
 *    ...
 */
void DV_TON(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_IN,
            B_DV_TON_T *localB, DW_DV_TON_T *localDW, real_T rtp_TIME)
{
  /* local block i/o variables */
  real_T rtb_CLOCK;

  /* Clock: '<S24>/CLOCK' */
  rtb_CLOCK = (*(VITALDEPOT_TimingBrdg->taskTime[VITALDEPOT_GlobalTID[0]]));

  /* Outputs for Atomic SubSystem: '<S24>/TON' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Logic: '<S27>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S28>/FixPt Relational Operator'
     *  RelationalOperator: '<S29>/FixPt Relational Operator'
     *  UnitDelay: '<S28>/Delay Input1'
     *  UnitDelay: '<S29>/Delay Input1'
     */
    localB->LogicalOperator1 = (((int32_T)rtu_IN > (int32_T)
      localDW->DelayInput1_DSTATE_p) || ((int32_T)rtu_IN < (int32_T)
      localDW->DelayInput1_DSTATE));

    /* Memory: '<S30>/memory' */
    localB->memory = localDW->memory_PreviousInput;
  }

  /* Switch: '<S30>/Switch' */
  if (localB->LogicalOperator1) {
    localB->Switch = rtb_CLOCK;
  } else {
    localB->Switch = localB->memory;
  }

  /* End of Switch: '<S30>/Switch' */

  /* Logic: '<S27>/Logical Operator2' incorporates:
   *  Constant: '<S24>/TIME'
   *  RelationalOperator: '<S27>/Relational Operator'
   *  Sum: '<S27>/Sum'
   */
  localB->LogicalOperator2 = ((rtb_CLOCK >= localB->Switch + rtp_TIME) && rtu_IN);

  /* End of Outputs for SubSystem: '<S24>/TON' */
}

/*
 * Update for atomic system:
 *    '<S23>/DV_TON1'
 *    '<S23>/DV_TON2'
 *    '<S23>/DV_TON3'
 *    '<S39>/DV_TON1'
 *    '<S39>/DV_TON2'
 *    '<S39>/DV_TON3'
 *    '<S55>/DV_TON1'
 *    '<S55>/DV_TON2'
 *    '<S55>/DV_TON3'
 *    '<S71>/DV_TON1'
 *    ...
 */
void DV_TON_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_IN,
                   B_DV_TON_T *localB, DW_DV_TON_T *localDW)
{
  /* Update for Atomic SubSystem: '<S24>/TON' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Update for UnitDelay: '<S28>/Delay Input1' */
    localDW->DelayInput1_DSTATE = rtu_IN;

    /* Update for UnitDelay: '<S29>/Delay Input1' */
    localDW->DelayInput1_DSTATE_p = rtu_IN;

    /* Update for Memory: '<S30>/memory' */
    localDW->memory_PreviousInput = localB->Switch;
  }

  /* End of Update for SubSystem: '<S24>/TON' */
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
 */
void D_AS_Init(DW_D_AS_T *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<S23>/DV_TON1' */
  DV_TON_Init(&localDW->DV_TON1);

  /* End of InitializeConditions for SubSystem: '<S23>/DV_TON1' */

  /* InitializeConditions for Atomic SubSystem: '<S23>/DV_TON2' */
  DV_TON_Init(&localDW->DV_TON2);

  /* End of InitializeConditions for SubSystem: '<S23>/DV_TON2' */

  /* InitializeConditions for Atomic SubSystem: '<S23>/DV_TON3' */
  DV_TON_Init(&localDW->DV_TON3);

  /* End of InitializeConditions for SubSystem: '<S23>/DV_TON3' */
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
 */
void D_AS(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_HRDR,
          boolean_T rtu_ER, boolean_T rtu_GR, boolean_T rtu_TPF, boolean_T
          rtu_TPB, boolean_T rtu_RR, boolean_T rtu_VDR, B_D_AS_T *localB,
          DW_D_AS_T *localDW)
{
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Logic: '<S23>/AND4' incorporates:
     *  Logic: '<S23>/AND5'
     *  Logic: '<S23>/NOT1'
     *  Logic: '<S23>/OR7'
     *  Memory: '<S23>/Memory3'
     *  Memory: '<S23>/Memory4'
     */
    localB->AND4 = ((!rtu_HRDR) && rtu_RR && (localDW->Memory3_PreviousInput ||
      (rtu_TPF && rtu_TPB) || localDW->Memory4_PreviousInput));

    /* Logic: '<S23>/AND1' incorporates:
     *  Logic: '<S23>/NOT2'
     *  Logic: '<S23>/NOT3'
     */
    localB->AND1 = ((!rtu_HRDR) && rtu_RR && (!localB->AND4) && rtu_VDR);

    /* Logic: '<S23>/AND11' incorporates:
     *  Logic: '<S23>/AND12'
     *  Logic: '<S23>/NOT12'
     *  Logic: '<S23>/OR9'
     *  Memory: '<S23>/Memory7'
     *  Memory: '<S23>/Memory8'
     */
    localB->AND11 = ((!rtu_GR) && rtu_RR && (localDW->Memory7_PreviousInput ||
      (rtu_TPF && rtu_TPB) || localDW->Memory8_PreviousInput));

    /* Logic: '<S23>/AND7' incorporates:
     *  Logic: '<S23>/AND8'
     *  Logic: '<S23>/NOT4'
     *  Logic: '<S23>/OR8'
     *  Memory: '<S23>/Memory5'
     *  Memory: '<S23>/Memory6'
     */
    localB->AND7 = ((!rtu_ER) && rtu_RR && (localDW->Memory5_PreviousInput ||
      (rtu_TPF && rtu_TPB) || localDW->Memory6_PreviousInput));

    /* Logic: '<S23>/AND2' incorporates:
     *  Logic: '<S23>/NOT5'
     *  Logic: '<S23>/NOT6'
     */
    localB->AND2 = ((!rtu_ER) && rtu_RR && (!localB->AND7) && rtu_VDR);

    /* Logic: '<S23>/AND3' incorporates:
     *  Logic: '<S23>/NOT13'
     *  Logic: '<S23>/NOT14'
     */
    localB->AND3 = ((!rtu_GR) && rtu_RR && (!localB->AND11) && rtu_VDR);
  }

  /* Outputs for Atomic SubSystem: '<S23>/DV_TON1' */
  DV_TON(VITALDEPOT_M, localB->AND2, &localB->DV_TON1, &localDW->DV_TON1, 90.0);

  /* End of Outputs for SubSystem: '<S23>/DV_TON1' */

  /* Outputs for Atomic SubSystem: '<S23>/DV_TON2' */
  DV_TON(VITALDEPOT_M, localB->AND1, &localB->DV_TON2, &localDW->DV_TON2, 90.0);

  /* End of Outputs for SubSystem: '<S23>/DV_TON2' */

  /* Outputs for Atomic SubSystem: '<S23>/DV_TON3' */
  DV_TON(VITALDEPOT_M, localB->AND3, &localB->DV_TON3, &localDW->DV_TON3, 90.0);

  /* End of Outputs for SubSystem: '<S23>/DV_TON3' */
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
 */
void D_AS_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, B_D_AS_T *localB,
                 DW_D_AS_T *localDW)
{
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Update for Memory: '<S23>/Memory3' */
    localDW->Memory3_PreviousInput = localB->AND4;

    /* Update for Memory: '<S23>/Memory4' */
    localDW->Memory4_PreviousInput = localB->DV_TON2.LogicalOperator2;

    /* Update for Memory: '<S23>/Memory7' */
    localDW->Memory7_PreviousInput = localB->AND11;

    /* Update for Memory: '<S23>/Memory8' */
    localDW->Memory8_PreviousInput = localB->DV_TON3.LogicalOperator2;

    /* Update for Memory: '<S23>/Memory5' */
    localDW->Memory5_PreviousInput = localB->AND7;

    /* Update for Memory: '<S23>/Memory6' */
    localDW->Memory6_PreviousInput = localB->DV_TON1.LogicalOperator2;
  }

  /* Update for Atomic SubSystem: '<S23>/DV_TON1' */
  DV_TON_Update(VITALDEPOT_M, localB->AND2, &localB->DV_TON1, &localDW->DV_TON1);

  /* End of Update for SubSystem: '<S23>/DV_TON1' */

  /* Update for Atomic SubSystem: '<S23>/DV_TON2' */
  DV_TON_Update(VITALDEPOT_M, localB->AND1, &localB->DV_TON2, &localDW->DV_TON2);

  /* End of Update for SubSystem: '<S23>/DV_TON2' */

  /* Update for Atomic SubSystem: '<S23>/DV_TON3' */
  DV_TON_Update(VITALDEPOT_M, localB->AND3, &localB->DV_TON3, &localDW->DV_TON3);

  /* End of Update for SubSystem: '<S23>/DV_TON3' */
}

/*
 * Initial conditions for atomic system:
 *    '<S135>/EMERGENCY POINT RELEASE'
 *    '<S136>/EMERGENCY POINT RELEASE'
 *    '<S137>/EMERGENCY POINT RELEASE'
 *    '<S138>/EMERGENCY POINT RELEASE'
 */
void D_SWRLS_Init(DW_D_SWRLS_T *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<S139>/DV_TON1' */
  DV_TON_Init(&localDW->DV_TON1);

  /* End of InitializeConditions for SubSystem: '<S139>/DV_TON1' */

  /* InitializeConditions for Atomic SubSystem: '<S139>/DV_TON4' */
  DV_TON_Init(&localDW->DV_TON4);

  /* End of InitializeConditions for SubSystem: '<S139>/DV_TON4' */
}

/*
 * Outputs for atomic system:
 *    '<S135>/EMERGENCY POINT RELEASE'
 *    '<S136>/EMERGENCY POINT RELEASE'
 *    '<S137>/EMERGENCY POINT RELEASE'
 *    '<S138>/EMERGENCY POINT RELEASE'
 */
void D_SWRLS(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_SWRLSCTRL,
             boolean_T rtu_ESWS, boolean_T rtu_TP, boolean_T rtu_SWRLS,
             boolean_T rtu_VDR, B_D_SWRLS_T *localB, DW_D_SWRLS_T *localDW)
{
  boolean_T rtb_Memory2;
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Memory: '<S139>/Memory3' */
    rtb_Memory2 = localDW->Memory3_PreviousInput;

    /* Logic: '<S139>/OR3' incorporates:
     *  Logic: '<S139>/AND10'
     *  Logic: '<S139>/AND9'
     *  Logic: '<S139>/NOT4'
     *  Logic: '<S139>/NOT8'
     *  Memory: '<S139>/Memory4'
     *  Memory: '<S139>/Memory5'
     */
    localB->OR3 = ((rtb_Memory2 && (!rtu_TP)) ||
                   ((!localDW->Memory5_PreviousInput) &&
                    localDW->Memory4_PreviousInput));

    /* Logic: '<S139>/AND11' */
    localB->AND11 = (localB->OR3 && rtu_VDR);

    /* Logic: '<S139>/AND5' incorporates:
     *  Logic: '<S139>/AND4'
     *  Logic: '<S139>/AND7'
     *  Logic: '<S139>/NOT1'
     *  Logic: '<S139>/OR2'
     *  Memory: '<S139>/Memory2'
     */
    localB->AND5 = (rtu_ESWS && ((rtu_SWRLSCTRL && rtu_SWRLS) || ((!rtb_Memory2)
      && localDW->Memory2_PreviousInput)));

    /* Logic: '<S139>/AND8' */
    localB->AND8 = (localB->AND5 && rtu_VDR);
  }

  /* Outputs for Atomic SubSystem: '<S139>/DV_TON1' */
  DV_TON(VITALDEPOT_M, localB->AND11, &localB->DV_TON1, &localDW->DV_TON1, 60.0);

  /* End of Outputs for SubSystem: '<S139>/DV_TON1' */

  /* Outputs for Atomic SubSystem: '<S139>/DV_TON4' */
  DV_TON(VITALDEPOT_M, localB->AND8, &localB->DV_TON4, &localDW->DV_TON4, 60.0);

  /* End of Outputs for SubSystem: '<S139>/DV_TON4' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* SignalConversion: '<S139>/TmpSignal ConversionAtDV_TON1Outport1' */
    localB->TmpSignalConversionAtDV_TON1Out = localB->DV_TON1.LogicalOperator2;

    /* SignalConversion: '<S139>/TmpSignal ConversionAtDV_TON4Outport1' */
    localB->TmpSignalConversionAtDV_TON4Out = localB->DV_TON4.LogicalOperator2;
  }
}

/*
 * Update for atomic system:
 *    '<S135>/EMERGENCY POINT RELEASE'
 *    '<S136>/EMERGENCY POINT RELEASE'
 *    '<S137>/EMERGENCY POINT RELEASE'
 *    '<S138>/EMERGENCY POINT RELEASE'
 */
void D_SWRLS_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, B_D_SWRLS_T
                    *localB, DW_D_SWRLS_T *localDW)
{
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Update for Memory: '<S139>/Memory5' */
    localDW->Memory5_PreviousInput = localB->TmpSignalConversionAtDV_TON1Out;

    /* Update for Memory: '<S139>/Memory4' */
    localDW->Memory4_PreviousInput = localB->OR3;

    /* Update for Memory: '<S139>/Memory3' */
    localDW->Memory3_PreviousInput = localB->TmpSignalConversionAtDV_TON4Out;

    /* Update for Memory: '<S139>/Memory2' */
    localDW->Memory2_PreviousInput = localB->AND5;
  }

  /* Update for Atomic SubSystem: '<S139>/DV_TON1' */
  DV_TON_Update(VITALDEPOT_M, localB->AND11, &localB->DV_TON1, &localDW->DV_TON1);

  /* End of Update for SubSystem: '<S139>/DV_TON1' */

  /* Update for Atomic SubSystem: '<S139>/DV_TON4' */
  DV_TON_Update(VITALDEPOT_M, localB->AND8, &localB->DV_TON4, &localDW->DV_TON4);

  /* End of Update for SubSystem: '<S139>/DV_TON4' */
}

/*
 * Initial conditions for atomic system:
 *    '<S190>/DV_TOF1'
 *    '<S201>/DV_TOF1'
 *    '<S212>/DV_TOF1'
 *    '<S223>/DV_TOF1'
 *    '<S234>/DV_TOF1'
 *    '<S245>/DV_TOF1'
 *    '<S256>/DV_TOF1'
 *    '<S320>/DV_TOF'
 *    '<S320>/DV_TOF1'
 *    '<S341>/DV_TOF'
 *    ...
 */
void DV_TOF_Init(DW_DV_TOF_T *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<S191>/TOF' */
  /* InitializeConditions for Memory: '<S196>/memory' */
  localDW->memory_PreviousInput = -1.0E+99;

  /* End of InitializeConditions for SubSystem: '<S191>/TOF' */
}

/*
 * Outputs for atomic system:
 *    '<S190>/DV_TOF1'
 *    '<S201>/DV_TOF1'
 *    '<S212>/DV_TOF1'
 *    '<S223>/DV_TOF1'
 *    '<S234>/DV_TOF1'
 *    '<S245>/DV_TOF1'
 *    '<S256>/DV_TOF1'
 *    '<S320>/DV_TOF'
 *    '<S320>/DV_TOF1'
 *    '<S341>/DV_TOF'
 *    ...
 */
void DV_TOF(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_IN,
            B_DV_TOF_T *localB, DW_DV_TOF_T *localDW, real_T rtp_TIME)
{
  /* local block i/o variables */
  real_T rtb_CLOCK_p;

  /* Clock: '<S191>/CLOCK' */
  rtb_CLOCK_p = (*(VITALDEPOT_TimingBrdg->taskTime[VITALDEPOT_GlobalTID[0]]));

  /* Outputs for Atomic SubSystem: '<S191>/TOF' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Logic: '<S193>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S194>/FixPt Relational Operator'
     *  RelationalOperator: '<S195>/FixPt Relational Operator'
     *  UnitDelay: '<S194>/Delay Input1'
     *  UnitDelay: '<S195>/Delay Input1'
     */
    localB->LogicalOperator1 = (((int32_T)rtu_IN > (int32_T)
      localDW->DelayInput1_DSTATE_o) || ((int32_T)rtu_IN < (int32_T)
      localDW->DelayInput1_DSTATE));

    /* Memory: '<S196>/memory' */
    localB->memory = localDW->memory_PreviousInput;

    /* Logic: '<S193>/Logical Operator3' */
    localB->LogicalOperator3 = !rtu_IN;
  }

  /* Switch: '<S196>/Switch' */
  if (localB->LogicalOperator1) {
    localB->Switch = rtb_CLOCK_p;
  } else {
    localB->Switch = localB->memory;
  }

  /* End of Switch: '<S196>/Switch' */

  /* Logic: '<S193>/Logical Operator4' incorporates:
   *  Constant: '<S191>/TIME'
   *  Logic: '<S193>/Logical Operator2'
   *  RelationalOperator: '<S193>/Relational Operator'
   *  Sum: '<S193>/Sum'
   */
  localB->LogicalOperator4 = !((rtb_CLOCK_p >= localB->Switch + rtp_TIME) &&
    localB->LogicalOperator3);

  /* End of Outputs for SubSystem: '<S191>/TOF' */
}

/*
 * Update for atomic system:
 *    '<S190>/DV_TOF1'
 *    '<S201>/DV_TOF1'
 *    '<S212>/DV_TOF1'
 *    '<S223>/DV_TOF1'
 *    '<S234>/DV_TOF1'
 *    '<S245>/DV_TOF1'
 *    '<S256>/DV_TOF1'
 *    '<S320>/DV_TOF'
 *    '<S320>/DV_TOF1'
 *    '<S341>/DV_TOF'
 *    ...
 */
void DV_TOF_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_IN,
                   B_DV_TOF_T *localB, DW_DV_TOF_T *localDW)
{
  /* Update for Atomic SubSystem: '<S191>/TOF' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Update for UnitDelay: '<S194>/Delay Input1' */
    localDW->DelayInput1_DSTATE = rtu_IN;

    /* Update for UnitDelay: '<S195>/Delay Input1' */
    localDW->DelayInput1_DSTATE_o = rtu_IN;

    /* Update for Memory: '<S196>/memory' */
    localDW->memory_PreviousInput = localB->Switch;
  }

  /* End of Update for SubSystem: '<S191>/TOF' */
}

/*
 * Initial conditions for atomic system:
 *    '<S190>/DV_TON1'
 *    '<S201>/DV_TON1'
 *    '<S212>/DV_TON1'
 *    '<S223>/DV_TON1'
 *    '<S234>/DV_TON1'
 *    '<S245>/DV_TON1'
 *    '<S256>/DV_TON1'
 */
void VITALDEPOT_DV_TON_Init(DW_DV_TON_h_T *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<S192>/TON' */
  /* InitializeConditions for Memory: '<S200>/memory' */
  localDW->memory_PreviousInput = -1.0E+99;

  /* End of InitializeConditions for SubSystem: '<S192>/TON' */
}

/*
 * Outputs for atomic system:
 *    '<S190>/DV_TON1'
 *    '<S201>/DV_TON1'
 *    '<S212>/DV_TON1'
 *    '<S223>/DV_TON1'
 *    '<S234>/DV_TON1'
 *    '<S245>/DV_TON1'
 *    '<S256>/DV_TON1'
 */
void VITALDEPOT_DV_TON(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T
  rtu_IN, B_DV_TON_p_T *localB, DW_DV_TON_h_T *localDW, real_T rtp_TIME)
{
  /* local block i/o variables */
  real_T rtb_CLOCK_o;

  /* Clock: '<S192>/CLOCK' */
  rtb_CLOCK_o = (*(VITALDEPOT_TimingBrdg->taskTime[VITALDEPOT_GlobalTID[0]]));

  /* Outputs for Atomic SubSystem: '<S192>/TON' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* UnitDelay: '<S198>/Delay Input1' */
    localB->Uk1 = localDW->DelayInput1_DSTATE;

    /* UnitDelay: '<S199>/Delay Input1' */
    localB->Uk1_i = localDW->DelayInput1_DSTATE_k;

    /* Memory: '<S200>/memory' */
    localB->memory = localDW->memory_PreviousInput;
  }

  /* Switch: '<S200>/Switch' incorporates:
   *  Logic: '<S197>/Logical Operator1'
   *  RelationalOperator: '<S198>/FixPt Relational Operator'
   *  RelationalOperator: '<S199>/FixPt Relational Operator'
   */
  if (((int32_T)rtu_IN > (int32_T)localB->Uk1_i) || ((int32_T)rtu_IN < (int32_T)
       localB->Uk1)) {
    localB->Switch = rtb_CLOCK_o;
  } else {
    localB->Switch = localB->memory;
  }

  /* End of Switch: '<S200>/Switch' */

  /* Logic: '<S197>/Logical Operator2' incorporates:
   *  Constant: '<S192>/TIME'
   *  RelationalOperator: '<S197>/Relational Operator'
   *  Sum: '<S197>/Sum'
   */
  localB->LogicalOperator2 = ((rtb_CLOCK_o >= localB->Switch + rtp_TIME) &&
    rtu_IN);

  /* End of Outputs for SubSystem: '<S192>/TON' */
}

/*
 * Update for atomic system:
 *    '<S190>/DV_TON1'
 *    '<S201>/DV_TON1'
 *    '<S212>/DV_TON1'
 *    '<S223>/DV_TON1'
 *    '<S234>/DV_TON1'
 *    '<S245>/DV_TON1'
 *    '<S256>/DV_TON1'
 */
void VITALDEPOT_DV_TON_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M,
  boolean_T rtu_IN, B_DV_TON_p_T *localB, DW_DV_TON_h_T *localDW)
{
  /* Update for Atomic SubSystem: '<S192>/TON' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Update for UnitDelay: '<S198>/Delay Input1' */
    localDW->DelayInput1_DSTATE = rtu_IN;

    /* Update for UnitDelay: '<S199>/Delay Input1' */
    localDW->DelayInput1_DSTATE_k = rtu_IN;

    /* Update for Memory: '<S200>/memory' */
    localDW->memory_PreviousInput = localB->Switch;
  }

  /* End of Update for SubSystem: '<S192>/TON' */
}

/*
 * Initial conditions for atomic system:
 *    '<S183>/EMERGENCY ROUTE RELEASE'
 *    '<S184>/EMERGENCY ROUTE RELEASE'
 *    '<S185>/EMERGENCY ROUTE RELEASE'
 *    '<S186>/EMERGENCY ROUTE RELEASE'
 *    '<S187>/EMERGENCY ROUTE RELEASE'
 *    '<S188>/EMERGENCY ROUTE RELEASE'
 *    '<S189>/EMERGENCY ROUTE RELEASE'
 */
void D_RRLS_Init(DW_D_RRLS_T *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<S190>/DV_TOF1' */
  DV_TOF_Init(&localDW->DV_TOF1);

  /* End of InitializeConditions for SubSystem: '<S190>/DV_TOF1' */

  /* InitializeConditions for Atomic SubSystem: '<S190>/DV_TON1' */
  VITALDEPOT_DV_TON_Init(&localDW->DV_TON1);

  /* End of InitializeConditions for SubSystem: '<S190>/DV_TON1' */
}

/*
 * Outputs for atomic system:
 *    '<S183>/EMERGENCY ROUTE RELEASE'
 *    '<S184>/EMERGENCY ROUTE RELEASE'
 *    '<S185>/EMERGENCY ROUTE RELEASE'
 *    '<S186>/EMERGENCY ROUTE RELEASE'
 *    '<S187>/EMERGENCY ROUTE RELEASE'
 *    '<S188>/EMERGENCY ROUTE RELEASE'
 *    '<S189>/EMERGENCY ROUTE RELEASE'
 */
void D_RRLS(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_TAS,
            boolean_T rtu_TREQ, boolean_T rtu_EAS, boolean_T rtu_EREQ, boolean_T
            rtu_SAS, boolean_T rtu_SREQ, boolean_T rtu_ESWS, boolean_T
            rtu_NWZRWZ, boolean_T rtu_RRLSCTRL, boolean_T rtu_RRLS, boolean_T
            rtu_VDR, B_D_RRLS_T *localB, DW_D_RRLS_T *localDW)
{
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Memory: '<S190>/Memory1' */
    localB->Memory1 = localDW->Memory1_PreviousInput;

    /* Logic: '<S190>/AND1' incorporates:
     *  Logic: '<S190>/AND2'
     *  Logic: '<S190>/AND3'
     *  Logic: '<S190>/NOT2'
     *  Logic: '<S190>/NOT3'
     *  Logic: '<S190>/NOT5'
     *  Logic: '<S190>/NOT6'
     *  Logic: '<S190>/NOT7'
     *  Logic: '<S190>/OR1'
     *  Memory: '<S190>/Memory'
     */
    localB->AND1 = (rtu_TAS && (!rtu_TREQ) && rtu_EAS && (!rtu_EREQ) && rtu_SAS &&
                    (!rtu_SREQ) && (!rtu_ESWS) && rtu_NWZRWZ && ((rtu_RRLSCTRL &&
      rtu_RRLS) || ((!localB->Memory1) && localDW->Memory_PreviousInput)));

    /* Logic: '<S190>/AND6' */
    localB->AND6 = (localB->AND1 && rtu_VDR);
  }

  /* Outputs for Atomic SubSystem: '<S190>/DV_TOF1' */
  DV_TOF(VITALDEPOT_M, localB->AND6, &localB->DV_TOF1, &localDW->DV_TOF1, 2.0);

  /* End of Outputs for SubSystem: '<S190>/DV_TOF1' */

  /* Outputs for Atomic SubSystem: '<S190>/DV_TON1' */
  VITALDEPOT_DV_TON(VITALDEPOT_M, localB->DV_TOF1.LogicalOperator4,
                    &localB->DV_TON1, &localDW->DV_TON1, 60.0);

  /* End of Outputs for SubSystem: '<S190>/DV_TON1' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* SignalConversion: '<S190>/TmpSignal ConversionAtDV_TON1Outport1' */
    localB->TmpSignalConversionAtDV_TON1Out = localB->DV_TON1.LogicalOperator2;
  }
}

/*
 * Update for atomic system:
 *    '<S183>/EMERGENCY ROUTE RELEASE'
 *    '<S184>/EMERGENCY ROUTE RELEASE'
 *    '<S185>/EMERGENCY ROUTE RELEASE'
 *    '<S186>/EMERGENCY ROUTE RELEASE'
 *    '<S187>/EMERGENCY ROUTE RELEASE'
 *    '<S188>/EMERGENCY ROUTE RELEASE'
 *    '<S189>/EMERGENCY ROUTE RELEASE'
 */
void D_RRLS_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, B_D_RRLS_T
                   *localB, DW_D_RRLS_T *localDW)
{
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Update for Memory: '<S190>/Memory1' */
    localDW->Memory1_PreviousInput = localB->TmpSignalConversionAtDV_TON1Out;

    /* Update for Memory: '<S190>/Memory' */
    localDW->Memory_PreviousInput = localB->AND1;
  }

  /* Update for Atomic SubSystem: '<S190>/DV_TOF1' */
  DV_TOF_Update(VITALDEPOT_M, localB->AND6, &localB->DV_TOF1, &localDW->DV_TOF1);

  /* End of Update for SubSystem: '<S190>/DV_TOF1' */

  /* Update for Atomic SubSystem: '<S190>/DV_TON1' */
  VITALDEPOT_DV_TON_Update(VITALDEPOT_M, localB->DV_TOF1.LogicalOperator4,
    &localB->DV_TON1, &localDW->DV_TON1);

  /* End of Update for SubSystem: '<S190>/DV_TON1' */
}

/*
 * Output and update for atomic system:
 *    '<S272>/AS_SR'
 *    '<S273>/AS_SR'
 *    '<S274>/AS_SR'
 *    '<S275>/AS_SR'
 *    '<S276>/AS_SR'
 *    '<S277>/AS_SR'
 *    '<S278>/AS_SR'
 *    '<S279>/AS_SR'
 *    '<S280>/AS_SR'
 *    '<S281>/AS_SR'
 *    ...
 */
void D_AS_SR(boolean_T rtu_L, boolean_T rtu_RS, B_D_AS_SR_T *localB)
{
  /* Logic: '<S284>/AND1' incorporates:
   *  Logic: '<S284>/OR1'
   *  Memory: '<S284>/MEM1'
   */
  localB->AND1 = ((localB->AND1 || rtu_L) && rtu_RS);
}

/*
 * Output and update for atomic system:
 *    '<S300>/D_RRLS1'
 *    '<S300>/D_RRLS7'
 *    '<S301>/D_RRLS1'
 *    '<S302>/D_RRLS1'
 *    '<S302>/D_RRLS2'
 */
void D_RRLS3(boolean_T rtu_RRLSTE, boolean_T rtu_NWZRWZ1, boolean_T rtu_NWZRWZ2,
             B_D_RRLS3_T *localB)
{
  /* Logic: '<S303>/AND1' */
  localB->AND1 = (rtu_RRLSTE && rtu_NWZRWZ1 && rtu_NWZRWZ2);
}

/*
 * Output and update for atomic system:
 *    '<S300>/D_RRLS5'
 *    '<S301>/D_RRLS5'
 *    '<S302>/D_RRLS5'
 */
void D_RRLS1(boolean_T rtu_RRLSTE, B_D_RRLS1_T *localB)
{
  /* Inport: '<S304>/RRLS-TE' */
  localB->RRLSTE = rtu_RRLSTE;
}

/*
 * Output and update for atomic system:
 *    '<S300>/D_RRLS6'
 *    '<S301>/D_RRLS6'
 *    '<S302>/D_RRLS6'
 */
void D_RRLS2(boolean_T rtu_RRLSTE, boolean_T rtu_NWZRWZ1, B_D_RRLS2_T *localB)
{
  /* Logic: '<S305>/AND1' */
  localB->AND1 = (rtu_RRLSTE && rtu_NWZRWZ1);
}

/*
 * Output and update for atomic system:
 *    '<S301>/D_RRLS2'
 *    '<S301>/D_RRLS8'
 */
void D_RRLS_4(boolean_T rtu_RRLSTE, boolean_T rtu_NWZRWZ1, boolean_T rtu_NWZRWZ2,
              boolean_T rtu_NWZRWZ3, B_D_RRLS_4_T *localB)
{
  /* Logic: '<S308>/AND1' */
  localB->AND1 = (rtu_RRLSTE && rtu_NWZRWZ1 && rtu_NWZRWZ2 && rtu_NWZRWZ3);
}

/*
 * Initial conditions for atomic system:
 *    '<S316>/POINT CONTROL'
 *    '<S317>/POINT CONTROL'
 *    '<S318>/POINT CONTROL'
 *    '<S319>/POINT CONTROL'
 */
void D_SW_CTRL_Init(DW_D_SW_CTRL_T *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<S320>/DV_TOF1' */
  DV_TOF_Init(&localDW->DV_TOF1);

  /* End of InitializeConditions for SubSystem: '<S320>/DV_TOF1' */

  /* InitializeConditions for Atomic SubSystem: '<S320>/DV_TOF' */
  DV_TOF_Init(&localDW->DV_TOF_e);

  /* End of InitializeConditions for SubSystem: '<S320>/DV_TOF' */

  /* InitializeConditions for Atomic SubSystem: '<S320>/DV_TON' */
  DV_TON_Init(&localDW->DV_TON_a);

  /* End of InitializeConditions for SubSystem: '<S320>/DV_TON' */

  /* InitializeConditions for Atomic SubSystem: '<S320>/DV_TON1' */
  DV_TON_Init(&localDW->DV_TON1);

  /* End of InitializeConditions for SubSystem: '<S320>/DV_TON1' */
}

/*
 * Outputs for atomic system:
 *    '<S316>/POINT CONTROL'
 *    '<S317>/POINT CONTROL'
 *    '<S318>/POINT CONTROL'
 *    '<S319>/POINT CONTROL'
 */
void D_SW_CTRL(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_NWPDI,
               boolean_T rtu_RWPDI, boolean_T rtu_OOC, boolean_T rtu_L,
               boolean_T rtu_NREQ, boolean_T rtu_RREQ, boolean_T rtu_TP,
               boolean_T rtu_TPZ, boolean_T rtu_VDR, B_D_SW_CTRL_T *localB,
               DW_D_SW_CTRL_T *localDW)
{
  boolean_T rtb_AND10_l;
  boolean_T rtb_AND11;
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Memory: '<S320>/Memory2' */
    localB->Memory2 = localDW->Memory2_PreviousInput;

    /* Logic: '<S320>/AND1' incorporates:
     *  Logic: '<S320>/NOT1'
     *  Logic: '<S320>/OR1'
     */
    localB->AND1 = (rtu_NWPDI && (rtu_OOC || (!localB->Memory2)));

    /* Memory: '<S320>/Memory1' */
    localB->Memory1 = localDW->Memory1_PreviousInput;

    /* Logic: '<S320>/AND2' incorporates:
     *  Logic: '<S320>/NOT2'
     *  Logic: '<S320>/OR2'
     */
    localB->AND2 = (rtu_RWPDI && (rtu_OOC || (!localB->Memory1)));
  }

  /* Outputs for Atomic SubSystem: '<S320>/DV_TOF1' */
  DV_TOF(VITALDEPOT_M, localB->AND2, &localB->DV_TOF1, &localDW->DV_TOF1, 0.2);

  /* End of Outputs for SubSystem: '<S320>/DV_TOF1' */

  /* Logic: '<S320>/AND10' */
  rtb_AND10_l = (localB->DV_TOF1.LogicalOperator4 && localB->Memory1);
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Logic: '<S320>/NOT9' */
    localB->NOT9 = !localB->Memory1;
  }

  /* Logic: '<S320>/AND11' incorporates:
   *  Logic: '<S320>/NOT8'
   */
  rtb_AND11 = ((!localB->DV_TOF1.LogicalOperator4) && localB->NOT9);

  /* Outputs for Atomic SubSystem: '<S320>/DV_TOF' */
  DV_TOF(VITALDEPOT_M, localB->AND1, &localB->DV_TOF_e, &localDW->DV_TOF_e, 0.2);

  /* End of Outputs for SubSystem: '<S320>/DV_TOF' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Logic: '<S320>/NOT10' */
    localB->NOT10 = !localB->Memory2;

    /* Logic: '<S320>/NOT11' */
    localB->NOT11 = !rtu_OOC;

    /* Logic: '<S320>/OR6' */
    localB->OR6 = (rtu_TP || rtu_TPZ);

    /* Memory: '<S320>/Memory3' */
    localB->Memory3 = localDW->Memory3_PreviousInput;
  }

  /* Logic: '<S320>/AND15' incorporates:
   *  Logic: '<S320>/AND12'
   *  Logic: '<S320>/AND13'
   *  Logic: '<S320>/AND14'
   *  Logic: '<S320>/AND9'
   *  Logic: '<S320>/NOT7'
   *  Logic: '<S320>/OR7'
   *  Logic: '<S320>/OR8'
   *  Logic: '<S320>/OR9'
   */
  localB->AND15 = (((((localB->DV_TOF_e.LogicalOperator4 && localB->Memory2) ||
                      rtb_AND10_l) && localB->NOT11 && localB->OR6) ||
                    ((rtb_AND11 || ((!localB->DV_TOF_e.LogicalOperator4) &&
    localB->NOT10)) && localB->Memory3)) && rtu_VDR);
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Logic: '<S320>/AND16' incorporates:
     *  Logic: '<S320>/NOT12'
     */
    localB->AND16 = ((!localB->AND1) && localB->Memory1);

    /* Logic: '<S320>/AND17' incorporates:
     *  Logic: '<S320>/NOT13'
     */
    localB->AND17 = ((!localB->AND2) && localB->Memory2);

    /* Logic: '<S320>/AND18' */
    rtb_AND10_l = (localB->Memory3 && rtu_VDR);

    /* Logic: '<S320>/AND20' */
    localB->AND20 = (localB->AND16 && rtb_AND10_l);

    /* Logic: '<S320>/AND21' */
    localB->AND21 = (localB->AND17 && rtb_AND10_l);
  }

  /* Outputs for Atomic SubSystem: '<S320>/DV_TON' */
  DV_TON(VITALDEPOT_M, localB->AND20, &localB->DV_TON_a, &localDW->DV_TON_a,
         10.0);

  /* End of Outputs for SubSystem: '<S320>/DV_TON' */

  /* Logic: '<S320>/AND22' incorporates:
   *  Logic: '<S320>/NOT14'
   */
  localB->AND22 = ((!localB->DV_TON_a.LogicalOperator2) && localB->Memory3 &&
                   localB->AND16);

  /* Outputs for Atomic SubSystem: '<S320>/DV_TON1' */
  DV_TON(VITALDEPOT_M, localB->AND21, &localB->DV_TON1, &localDW->DV_TON1, 10.0);

  /* End of Outputs for SubSystem: '<S320>/DV_TON1' */

  /* Logic: '<S320>/AND23' incorporates:
   *  Logic: '<S320>/NOT15'
   */
  localB->AND23 = ((!localB->DV_TON1.LogicalOperator2) && localB->Memory3 &&
                   localB->AND17);

  /* Logic: '<S320>/AND24' incorporates:
   *  Logic: '<S320>/OR10'
   */
  localB->AND24 = ((localB->AND22 || localB->AND23) && rtu_L);
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Logic: '<S320>/OR3' */
    rtb_AND10_l = (localB->AND1 || localB->AND2 || localB->Memory3 || rtu_OOC);

    /* Logic: '<S320>/AND3' incorporates:
     *  Logic: '<S320>/NOT4'
     */
    rtb_AND11 = (rtu_L && rtu_NREQ && (!rtu_RREQ) && rtb_AND10_l);

    /* Logic: '<S320>/AND4' incorporates:
     *  Logic: '<S320>/NOT3'
     */
    rtb_AND10_l = (rtu_L && (!rtu_NREQ) && rtu_RREQ && rtb_AND10_l);

    /* Logic: '<S320>/AND5' incorporates:
     *  Logic: '<S320>/NOT6'
     *  Logic: '<S320>/OR4'
     */
    localB->AND5 = ((localB->Memory1 || rtb_AND11) && (!rtb_AND10_l));

    /* Logic: '<S320>/AND6' incorporates:
     *  Logic: '<S320>/NOT5'
     *  Logic: '<S320>/OR5'
     */
    localB->AND6 = ((!rtb_AND11) && (rtb_AND10_l || localB->Memory2));

    /* Logic: '<S320>/AND7' */
    localB->AND7 = (localB->AND1 && localB->Memory1);

    /* Logic: '<S320>/AND8' */
    localB->AND8 = (localB->AND2 && localB->Memory2);
  }
}

/*
 * Update for atomic system:
 *    '<S316>/POINT CONTROL'
 *    '<S317>/POINT CONTROL'
 *    '<S318>/POINT CONTROL'
 *    '<S319>/POINT CONTROL'
 */
void D_SW_CTRL_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, B_D_SW_CTRL_T *
                      localB, DW_D_SW_CTRL_T *localDW)
{
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Update for Memory: '<S320>/Memory2' */
    localDW->Memory2_PreviousInput = localB->AND6;

    /* Update for Memory: '<S320>/Memory1' */
    localDW->Memory1_PreviousInput = localB->AND5;
  }

  /* Update for Atomic SubSystem: '<S320>/DV_TOF1' */
  DV_TOF_Update(VITALDEPOT_M, localB->AND2, &localB->DV_TOF1, &localDW->DV_TOF1);

  /* End of Update for SubSystem: '<S320>/DV_TOF1' */

  /* Update for Atomic SubSystem: '<S320>/DV_TOF' */
  DV_TOF_Update(VITALDEPOT_M, localB->AND1, &localB->DV_TOF_e,
                &localDW->DV_TOF_e);

  /* End of Update for SubSystem: '<S320>/DV_TOF' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* Update for Memory: '<S320>/Memory3' */
    localDW->Memory3_PreviousInput = localB->AND15;
  }

  /* Update for Atomic SubSystem: '<S320>/DV_TON' */
  DV_TON_Update(VITALDEPOT_M, localB->AND20, &localB->DV_TON_a,
                &localDW->DV_TON_a);

  /* End of Update for SubSystem: '<S320>/DV_TON' */

  /* Update for Atomic SubSystem: '<S320>/DV_TON1' */
  DV_TON_Update(VITALDEPOT_M, localB->AND21, &localB->DV_TON1, &localDW->DV_TON1);

  /* End of Update for SubSystem: '<S320>/DV_TON1' */
}

/*
 * Output and update for atomic system:
 *    '<S404>/POINT LOCK'
 *    '<S405>/POINT LOCK'
 *    '<S406>/POINT LOCK'
 *    '<S407>/POINT LOCK'
 */
void D_SW_L(boolean_T rtu_TES, boolean_T rtu_EES, boolean_T rtu_SES, boolean_T
            rtu_TWS, boolean_T rtu_EWS, boolean_T rtu_SWS, boolean_T rtu_TELAS,
            boolean_T rtu_TWLAS, boolean_T rtu_TP, boolean_T rtu_TPZ, B_D_SW_L_T
            *localB)
{
  /* Logic: '<S408>/AND1' incorporates:
   *  Logic: '<S408>/OR1'
   */
  localB->AND1 = (rtu_TES && rtu_EES && rtu_SES && rtu_TWS && rtu_EWS && rtu_SWS
                  && rtu_TELAS && rtu_TWLAS && (rtu_TP || rtu_TPZ));
}

/*
 * Output and update for atomic system:
 *    '<S412>/ROUTE CHECK'
 *    '<S413>/ROUTE CHECK'
 *    '<S414>/ROUTE CHECK'
 *    '<S415>/ROUTE CHECK'
 *    '<S416>/ROUTE CHECK'
 *    '<S417>/ROUTE CHECK'
 *    '<S418>/ROUTE CHECK'
 *    '<S419>/ROUTE CHECK'
 *    '<S420>/ROUTE CHECK'
 *    '<S421>/ROUTE CHECK'
 *    ...
 */
void D_H_D_S(boolean_T rtu_REQ, boolean_T rtu_L, B_D_H_D_S_T *localB)
{
  /* Logic: '<S424>/AND2' */
  localB->AND2 = (rtu_REQ && rtu_L);
}

/*
 * Output and update for atomic system:
 *    '<S436>/ROUTE CONFLICT LOCK'
 *    '<S437>/ROUTE CONFLICT LOCK'
 *    '<S438>/ROUTE CONFLICT LOCK'
 *    '<S439>/ROUTE CONFLICT LOCK'
 *    '<S440>/ROUTE CONFLICT LOCK'
 *    '<S441>/ROUTE CONFLICT LOCK'
 *    '<S442>/ROUTE CONFLICT LOCK'
 *    '<S443>/ROUTE CONFLICT LOCK'
 *    '<S444>/ROUTE CONFLICT LOCK'
 *    '<S445>/ROUTE CONFLICT LOCK'
 *    ...
 */
void D_R_L(boolean_T rtu_ESWS, boolean_T rtu_NWCRWC, boolean_T rtu_GRDRDO,
           B_D_R_L_T *localB)
{
  /* Logic: '<S448>/AND1' incorporates:
   *  Logic: '<S448>/NOT1'
   */
  localB->AND1 = (rtu_ESWS && rtu_NWCRWC && (!rtu_GRDRDO));
}

/*
 * Output and update for atomic system:
 *    '<S460>/ROUTE LOCK'
 *    '<S461>/ROUTE LOCK'
 *    '<S462>/ROUTE LOCK'
 *    '<S463>/ROUTE LOCK'
 *    '<S464>/ROUTE LOCK'
 *    '<S465>/ROUTE LOCK'
 */
void D_ES_WS(boolean_T rtu_TRL, boolean_T rtu_TESWSB, boolean_T rtu_TNWZRWZ,
             boolean_T rtu_ERL, boolean_T rtu_EESWSB, boolean_T rtu_ENWZRWZ,
             boolean_T rtu_SRL, boolean_T rtu_SESWSB, boolean_T rtu_SNWZRWZ,
             boolean_T rtu_TP, boolean_T rtu_RLS, B_D_ES_WS_T *localB,
             DW_D_ES_WS_T *localDW)
{
  /* Logic: '<S466>/AND3' incorporates:
   *  Logic: '<S466>/OR5'
   *  Logic: '<S466>/OR6'
   *  Memory: '<S466>/Memory2'
   */
  localB->AND3 = (rtu_SRL && (rtu_SESWSB || rtu_SNWZRWZ) && (rtu_TP || rtu_RLS ||
    localB->AND3));

  /* Update for Memory: '<S466>/Memory' incorporates:
   *  Logic: '<S466>/AND1'
   *  Logic: '<S466>/OR1'
   *  Logic: '<S466>/OR2'
   *  Memory: '<S466>/Memory'
   */
  localDW->Memory_PreviousInput = (rtu_TRL && (rtu_TESWSB || rtu_TNWZRWZ) &&
    (rtu_TP || rtu_RLS || localDW->Memory_PreviousInput));

  /* Update for Memory: '<S466>/Memory1' incorporates:
   *  Logic: '<S466>/AND2'
   *  Logic: '<S466>/OR3'
   *  Logic: '<S466>/OR4'
   *  Memory: '<S466>/Memory1'
   */
  localDW->Memory1_PreviousInput = (rtu_ERL && (rtu_EESWSB || rtu_ENWZRWZ) &&
    (rtu_TP || rtu_RLS || localDW->Memory1_PreviousInput));
}

/*
 * Output and update for atomic system:
 *    '<S472>/SIGNAL LIGHTING'
 *    '<S473>/SIGNAL LIGHTING'
 *    '<S474>/SIGNAL LIGHTING'
 *    '<S475>/SIGNAL LIGHTING'
 *    '<S476>/SIGNAL LIGHTING'
 *    '<S477>/SIGNAL LIGHTING'
 *    '<S478>/SIGNAL LIGHTING'
 */
void D_SIG_CTRL(boolean_T rtu_S, boolean_T rtu_TP, B_D_SIG_CTRL_T *localB)
{
  /* Logic: '<S479>/AND19' incorporates:
   *  Logic: '<S479>/NOT16'
   */
  localB->AND19 = (rtu_S && (!rtu_TP));
}

/*
 * Initial conditions for atomic system:
 *    '<S15>/D_TP1'
 *    '<S15>/D_TP10'
 *    '<S15>/D_TP2'
 *    '<S15>/D_TP3'
 *    '<S15>/D_TP4'
 *    '<S15>/D_TP5'
 *    '<S15>/D_TP6'
 *    '<S15>/D_TP7'
 *    '<S15>/D_TP8'
 *    '<S15>/D_TP9'
 */
void D_TP_Init(DW_D_TP_T *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<S486>/DV_TON' */
  DV_TON_Init(&localDW->DV_TON_d);

  /* End of InitializeConditions for SubSystem: '<S486>/DV_TON' */
}

/*
 * Outputs for atomic system:
 *    '<S15>/D_TP1'
 *    '<S15>/D_TP10'
 *    '<S15>/D_TP2'
 *    '<S15>/D_TP3'
 *    '<S15>/D_TP4'
 *    '<S15>/D_TP5'
 *    '<S15>/D_TP6'
 *    '<S15>/D_TP7'
 *    '<S15>/D_TP8'
 *    '<S15>/D_TP9'
 */
void D_TP(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_TPR,
          B_D_TP_T *localB, DW_D_TP_T *localDW)
{
  /* Outputs for Atomic SubSystem: '<S486>/DV_TON' */
  DV_TON(VITALDEPOT_M, rtu_TPR, &localB->DV_TON_d, &localDW->DV_TON_d, 5.0);

  /* End of Outputs for SubSystem: '<S486>/DV_TON' */
}

/*
 * Update for atomic system:
 *    '<S15>/D_TP1'
 *    '<S15>/D_TP10'
 *    '<S15>/D_TP2'
 *    '<S15>/D_TP3'
 *    '<S15>/D_TP4'
 *    '<S15>/D_TP5'
 *    '<S15>/D_TP6'
 *    '<S15>/D_TP7'
 *    '<S15>/D_TP8'
 *    '<S15>/D_TP9'
 */
void D_TP_Update(RT_MODEL_VITALDEPOT_T * const VITALDEPOT_M, boolean_T rtu_TPR,
                 B_D_TP_T *localB, DW_D_TP_T *localDW)
{
  /* Update for Atomic SubSystem: '<S486>/DV_TON' */
  DV_TON_Update(VITALDEPOT_M, rtu_TPR, &localB->DV_TON_d, &localDW->DV_TON_d);

  /* End of Update for SubSystem: '<S486>/DV_TON' */
}

/* Initial conditions for referenced model: 'VITALDEPOT' */
void VITALDEPOT_Init(void)
{
  /* InitializeConditions for Atomic SubSystem: '<S16>/APPROACH LOCK' */
  D_AS_Init(&VITALDEPOT_DW.APPROACHLOCK);

  /* End of InitializeConditions for SubSystem: '<S16>/APPROACH LOCK' */

  /* InitializeConditions for Atomic SubSystem: '<S17>/APPROACH LOCK' */
  D_AS_Init(&VITALDEPOT_DW.APPROACHLOCK_p);

  /* End of InitializeConditions for SubSystem: '<S17>/APPROACH LOCK' */

  /* InitializeConditions for Atomic SubSystem: '<S18>/APPROACH LOCK' */
  D_AS_Init(&VITALDEPOT_DW.APPROACHLOCK_a);

  /* End of InitializeConditions for SubSystem: '<S18>/APPROACH LOCK' */

  /* InitializeConditions for Atomic SubSystem: '<S19>/APPROACH LOCK' */
  D_AS_Init(&VITALDEPOT_DW.APPROACHLOCK_j);

  /* End of InitializeConditions for SubSystem: '<S19>/APPROACH LOCK' */

  /* InitializeConditions for Atomic SubSystem: '<S20>/APPROACH LOCK' */
  D_AS_Init(&VITALDEPOT_DW.APPROACHLOCK_e);

  /* End of InitializeConditions for SubSystem: '<S20>/APPROACH LOCK' */

  /* InitializeConditions for Atomic SubSystem: '<S21>/APPROACH LOCK' */
  D_AS_Init(&VITALDEPOT_DW.APPROACHLOCK_f);

  /* End of InitializeConditions for SubSystem: '<S21>/APPROACH LOCK' */

  /* InitializeConditions for Atomic SubSystem: '<S22>/APPROACH LOCK' */
  D_AS_Init(&VITALDEPOT_DW.APPROACHLOCK_o);

  /* End of InitializeConditions for SubSystem: '<S22>/APPROACH LOCK' */

  /* InitializeConditions for Atomic SubSystem: '<S135>/EMERGENCY POINT RELEASE' */
  D_SWRLS_Init(&VITALDEPOT_DW.EMERGENCYPOINTRELEASE);

  /* End of InitializeConditions for SubSystem: '<S135>/EMERGENCY POINT RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S136>/EMERGENCY POINT RELEASE' */
  D_SWRLS_Init(&VITALDEPOT_DW.EMERGENCYPOINTRELEASE_l);

  /* End of InitializeConditions for SubSystem: '<S136>/EMERGENCY POINT RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S137>/EMERGENCY POINT RELEASE' */
  D_SWRLS_Init(&VITALDEPOT_DW.EMERGENCYPOINTRELEASE_p);

  /* End of InitializeConditions for SubSystem: '<S137>/EMERGENCY POINT RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S138>/EMERGENCY POINT RELEASE' */
  D_SWRLS_Init(&VITALDEPOT_DW.EMERGENCYPOINTRELEASE_b);

  /* End of InitializeConditions for SubSystem: '<S138>/EMERGENCY POINT RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S183>/EMERGENCY ROUTE RELEASE' */
  D_RRLS_Init(&VITALDEPOT_DW.EMERGENCYROUTERELEASE);

  /* End of InitializeConditions for SubSystem: '<S183>/EMERGENCY ROUTE RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S184>/EMERGENCY ROUTE RELEASE' */
  D_RRLS_Init(&VITALDEPOT_DW.EMERGENCYROUTERELEASE_g);

  /* End of InitializeConditions for SubSystem: '<S184>/EMERGENCY ROUTE RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S185>/EMERGENCY ROUTE RELEASE' */
  D_RRLS_Init(&VITALDEPOT_DW.EMERGENCYROUTERELEASE_a);

  /* End of InitializeConditions for SubSystem: '<S185>/EMERGENCY ROUTE RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S186>/EMERGENCY ROUTE RELEASE' */
  D_RRLS_Init(&VITALDEPOT_DW.EMERGENCYROUTERELEASE_k);

  /* End of InitializeConditions for SubSystem: '<S186>/EMERGENCY ROUTE RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S187>/EMERGENCY ROUTE RELEASE' */
  D_RRLS_Init(&VITALDEPOT_DW.EMERGENCYROUTERELEASE_c);

  /* End of InitializeConditions for SubSystem: '<S187>/EMERGENCY ROUTE RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S188>/EMERGENCY ROUTE RELEASE' */
  D_RRLS_Init(&VITALDEPOT_DW.EMERGENCYROUTERELEASE_j);

  /* End of InitializeConditions for SubSystem: '<S188>/EMERGENCY ROUTE RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S189>/EMERGENCY ROUTE RELEASE' */
  D_RRLS_Init(&VITALDEPOT_DW.EMERGENCYROUTERELEASE_ah);

  /* End of InitializeConditions for SubSystem: '<S189>/EMERGENCY ROUTE RELEASE' */

  /* InitializeConditions for Atomic SubSystem: '<S316>/POINT CONTROL' */
  D_SW_CTRL_Init(&VITALDEPOT_DW.POINTCONTROL);

  /* End of InitializeConditions for SubSystem: '<S316>/POINT CONTROL' */

  /* InitializeConditions for Atomic SubSystem: '<S317>/POINT CONTROL' */
  D_SW_CTRL_Init(&VITALDEPOT_DW.POINTCONTROL_b);

  /* End of InitializeConditions for SubSystem: '<S317>/POINT CONTROL' */

  /* InitializeConditions for Atomic SubSystem: '<S318>/POINT CONTROL' */
  D_SW_CTRL_Init(&VITALDEPOT_DW.POINTCONTROL_m);

  /* End of InitializeConditions for SubSystem: '<S318>/POINT CONTROL' */

  /* InitializeConditions for Atomic SubSystem: '<S319>/POINT CONTROL' */
  D_SW_CTRL_Init(&VITALDEPOT_DW.POINTCONTROL_d);

  /* End of InitializeConditions for SubSystem: '<S319>/POINT CONTROL' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/D_TP9' */
  D_TP_Init(&VITALDEPOT_DW.D_TP9);

  /* End of InitializeConditions for SubSystem: '<S15>/D_TP9' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/D_TP8' */
  D_TP_Init(&VITALDEPOT_DW.D_TP8);

  /* End of InitializeConditions for SubSystem: '<S15>/D_TP8' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/D_TP7' */
  D_TP_Init(&VITALDEPOT_DW.D_TP7);

  /* End of InitializeConditions for SubSystem: '<S15>/D_TP7' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/D_TP6' */
  D_TP_Init(&VITALDEPOT_DW.D_TP6);

  /* End of InitializeConditions for SubSystem: '<S15>/D_TP6' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/D_TP5' */
  D_TP_Init(&VITALDEPOT_DW.D_TP5);

  /* End of InitializeConditions for SubSystem: '<S15>/D_TP5' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/D_TP4' */
  D_TP_Init(&VITALDEPOT_DW.D_TP4);

  /* End of InitializeConditions for SubSystem: '<S15>/D_TP4' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/D_TP3' */
  D_TP_Init(&VITALDEPOT_DW.D_TP3);

  /* End of InitializeConditions for SubSystem: '<S15>/D_TP3' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/D_TP2' */
  D_TP_Init(&VITALDEPOT_DW.D_TP2);

  /* End of InitializeConditions for SubSystem: '<S15>/D_TP2' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/D_TP10' */
  D_TP_Init(&VITALDEPOT_DW.D_TP10);

  /* End of InitializeConditions for SubSystem: '<S15>/D_TP10' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/D_TP1' */
  D_TP_Init(&VITALDEPOT_DW.D_TP1);

  /* End of InitializeConditions for SubSystem: '<S15>/D_TP1' */
}

/* Start for referenced model: 'VITALDEPOT' */
void VITALDEPOT_Start(void)
{
  /* Start for DiscretePulseGenerator: '<S4>/0.5S' */
  VITALDEPOT_DW.clockTickCounter = 0;

  /* Start for DiscretePulseGenerator: '<S4>/1S' */
  VITALDEPOT_DW.clockTickCounter_b = 0;
}

/* Outputs for referenced model: 'VITALDEPOT' */
void VITALDEPOT(const boolean_T rtu_FROMMAIN[6], const boolean_T rtu_SREQFROM[12],
                const boolean_T rtu_NREQFROM[4], const boolean_T rtu_RREQFROM[4],
                const boolean_T rtu_OOCFROM[4], const boolean_T
                rtu_RRLSPBCTRLFROM[8], const boolean_T rtu_SWRLSPBCTRLFROM[4],
                const boolean_T rtu_DEPVARFROM[12], const boolean_T rtu_RSTFROM
                [7], const boolean_T rtu_TPRDI[10], const boolean_T rtu_NWPDI[4],
                const boolean_T rtu_RWPDI[4], boolean_T rty_TOMAIN[4], boolean_T
                rty_TPTO[10], boolean_T rty_SESTO[3], boolean_T rty_SWSTO[3],
                boolean_T rty_NWCTO[4], boolean_T rty_NWPTO[4], boolean_T
                rty_NWZTO[4], boolean_T rty_NWTETO[4], boolean_T rty_RWCTO[4],
                boolean_T rty_RWPTO[4], boolean_T rty_RWZTO[4], boolean_T
                rty_RWTETO[4], boolean_T rty_LTO[4], boolean_T rty_LSTO[4],
                boolean_T rty_SWRLSTO[4], boolean_T rty_TPZTO[4], boolean_T
                rty_GRDOTO[8], boolean_T rty_SASTO[8], boolean_T rty_RRLSTO[8],
                boolean_T rty_GRDO[8], boolean_T rty_NWRDO[4], boolean_T
                rty_RWRDO[4], boolean_T rty_WLPRDO[4])
{
  RT_MODEL_VITALDEPOT_T *const VITALDEPOT_M = &(VITALDEPOT_MdlrefDW.rtm);

  /* local block i/o variables */
  boolean_T rtb_FALSE;
  boolean_T rtb_TmpSignalConversionAtAPPROA;
  boolean_T rtb_L12GRDO;
  boolean_T rtb_u2TP;
  boolean_T rtb_u3TP;
  boolean_T rtb_RR;
  boolean_T rtb_VDR;
  boolean_T rtb_FALSE_f;
  boolean_T rtb_TmpSignalConversionAtAPPR_h;
  boolean_T rtb_L14AGRDO;
  boolean_T rtb_u4TP;
  boolean_T rtb_u3TP_a;
  boolean_T rtb_RR_k;
  boolean_T rtb_VDR_i;
  boolean_T rtb_FALSE_n;
  boolean_T rtb_TmpSignalConversionAtAPP_hi;
  boolean_T rtb_L32GRDO;
  boolean_T rtb_u2TP_h;
  boolean_T rtb_u3TP_e;
  boolean_T rtb_RR_g;
  boolean_T rtb_VDR_f;
  boolean_T rtb_FALSE_m;
  boolean_T rtb_TmpSignalConversionAtAP_hik;
  boolean_T rtb_L34GRDO;
  boolean_T rtb_u4TP_k;
  boolean_T rtb_u3BTP;
  boolean_T rtb_RR_f;
  boolean_T rtb_VDR_d;
  boolean_T rtb_FALSE_fj;
  boolean_T rtb_TmpSignalConversionAtA_hiki;
  boolean_T rtb_L54GRDO;
  boolean_T rtb_u4TP_n;
  boolean_T rtb_u3BTP_i;
  boolean_T rtb_RR_a;
  boolean_T rtb_VDR_c;
  boolean_T rtb_FALSE_n2;
  boolean_T rtb_TmpSignalConversionAt_hikip;
  boolean_T rtb_L72GRDO;
  boolean_T rtb_u2TP_hs;
  boolean_T rtb_u3ATP;
  boolean_T rtb_RR_o;
  boolean_T rtb_VDR_a;
  boolean_T rtb_FALSE_k;
  boolean_T rtb_TmpSignalConversionA_hikipq;
  boolean_T rtb_L74GRDO;
  boolean_T rtb_u4TP_g;
  boolean_T rtb_u3BTP_l;
  boolean_T rtb_RR_j;
  boolean_T rtb_VDR_fa;
  boolean_T rtb_W13ASWRLSPBCTRL;
  boolean_T rtb_AND1;
  boolean_T rtb_u3TP_j;
  boolean_T rtb_SWRLS;
  boolean_T rtb_VDR_e;
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
  boolean_T rtb_TRUE;
  boolean_T rtb_TmpSignalConversionAtEMERGE;
  boolean_T rtb_FALSE_a;
  boolean_T rtb_TmpSignalConversionAtEMER_m;
  boolean_T rtb_TmpSignalConversionAtEMER_p;
  boolean_T rtb_AND1_gm;
  boolean_T rtb_AND2_m;
  boolean_T rtb_u3SES_i;
  boolean_T rtb_L14BRRLSPBCTRL;
  boolean_T rtb_RRLS;
  boolean_T rtb_VDR_m;
  boolean_T rtb_TRUE_j;
  boolean_T rtb_TmpSignalConversionAtEMER_n;
  boolean_T rtb_FALSE_d;
  boolean_T rtb_TmpSignalConversionAtEME_m3;
  boolean_T rtb_L14ASAS;
  boolean_T rtb_L14AX12SREQ;
  boolean_T rtb_u3SWS_j;
  boolean_T rtb_AND4;
  boolean_T rtb_X12RRLSPBCTRL;
  boolean_T rtb_RRLS_h;
  boolean_T rtb_VDR_l;
  boolean_T rtb_TRUE_b;
  boolean_T rtb_TmpSignalConversionAtEME_n2;
  boolean_T rtb_FALSE_c;
  boolean_T rtb_TmpSignalConversionAtEM_m3f;
  boolean_T rtb_L14ASAS_h;
  boolean_T rtb_L14AX32SREQ;
  boolean_T rtb_u3SWS_h;
  boolean_T rtb_AND4_m;
  boolean_T rtb_X32RRLSPBCTRL;
  boolean_T rtb_RRLS_o;
  boolean_T rtb_VDR_k;
  boolean_T rtb_TRUE_o;
  boolean_T rtb_TmpSignalConversionAtEM_n2n;
  boolean_T rtb_FALSE_fji;
  boolean_T rtb_TmpSignalConversionAtE_m3fp;
  boolean_T rtb_L72SAS_n;
  boolean_T rtb_L72X34SREQ;
  boolean_T rtb_u3BSES_f;
  boolean_T rtb_AND4_b;
  boolean_T rtb_X34RRLSPBCTRL;
  boolean_T rtb_RRLS_o1;
  boolean_T rtb_VDR_o;
  boolean_T rtb_TRUE_jz;
  boolean_T rtb_TmpSignalConversionAtE_n2nj;
  boolean_T rtb_FALSE_l;
  boolean_T rtb_TmpSignalConversionAt_m3fpz;
  boolean_T rtb_L72SAS_o;
  boolean_T rtb_L72X54SREQ;
  boolean_T rtb_u3BSES_b;
  boolean_T rtb_AND4_mc;
  boolean_T rtb_X54RRLSPBCTRL;
  boolean_T rtb_RRLS_hh;
  boolean_T rtb_VDR_ht;
  boolean_T rtb_TRUE_b2;
  boolean_T rtb_TmpSignalConversionAt_n2nj2;
  boolean_T rtb_FALSE_dz;
  boolean_T rtb_TmpSignalConversionA_m3fpzw;
  boolean_T rtb_TmpSignalConversionAtEME_p5;
  boolean_T rtb_AND1_l;
  boolean_T rtb_AND2_d;
  boolean_T rtb_u3ASWS_c;
  boolean_T rtb_X72RRLSPBCTRL;
  boolean_T rtb_RRLS_g;
  boolean_T rtb_VDR_p;
  boolean_T rtb_TRUE_n;
  boolean_T rtb_TmpSignalConversionA_n2nj2k;
  boolean_T rtb_FALSE_n4;
  boolean_T rtb_TmpSignalConversion_m3fpzw4;
  boolean_T rtb_L72SAS_b;
  boolean_T rtb_L72X74SREQ;
  boolean_T rtb_u3BSES_a;
  boolean_T rtb_AND4_j;
  boolean_T rtb_X74RRLSPBCTRL;
  boolean_T rtb_RRLS_p;
  boolean_T rtb_VDR_jv;
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
  boolean_T rtb_TRUE_nr;
  boolean_T rtb_TmpSignalConversionAtPOINTL;
  boolean_T rtb_TmpSignalConversionAtPOIN_l;
  boolean_T rtb_u3SES_ec;
  boolean_T rtb_TmpSignalConversionAtPOIN_g;
  boolean_T rtb_TmpSignalConversionAtPOIN_a;
  boolean_T rtb_u3SWS_c;
  boolean_T rtb_TmpSignalConversionAtPOIN_f;
  boolean_T rtb_u3TP_c;
  boolean_T rtb_AND1_n;
  boolean_T rtb_TRUE_l;
  boolean_T rtb_TmpSignalConversionAtPOIN_p;
  boolean_T rtb_TmpSignalConversionAtPOI_lj;
  boolean_T rtb_AND2_l;
  boolean_T rtb_TmpSignalConversionAtPOI_gh;
  boolean_T rtb_TmpSignalConversionAtPOI_a1;
  boolean_T rtb_AND4_p;
  boolean_T rtb_TmpSignalConversionAtPOI_fe;
  boolean_T rtb_AND5;
  boolean_T rtb_AND1_gz;
  boolean_T rtb_TRUE_i;
  boolean_T rtb_TmpSignalConversionAtPOI_pq;
  boolean_T rtb_TmpSignalConversionAtPO_ljf;
  boolean_T rtb_u3BSES_a4;
  boolean_T rtb_TmpSignalConversionAtPO_ghw;
  boolean_T rtb_TmpSignalConversionAtPO_a1a;
  boolean_T rtb_u3BSWS_b;
  boolean_T rtb_TmpSignalConversionAtPO_fee;
  boolean_T rtb_u3BTP_d;
  boolean_T rtb_AND1_j;
  boolean_T rtb_TRUE_a;
  boolean_T rtb_TmpSignalConversionAtPO_pqp;
  boolean_T rtb_TmpSignalConversionAtP_ljfq;
  boolean_T rtb_u3BSES_o;
  boolean_T rtb_TmpSignalConversionAtP_ghwz;
  boolean_T rtb_TmpSignalConversionAtP_a1a5;
  boolean_T rtb_u3BSWS_h;
  boolean_T rtb_TmpSignalConversionAtP_feeu;
  boolean_T rtb_u3BTP_f;
  boolean_T rtb_AND1_pi;
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
  boolean_T rtb_u3SES_k;
  boolean_T rtb_AND1_gr;
  boolean_T rtb_L12GRDO_f;
  boolean_T rtb_u3SES_eu;
  boolean_T rtb_AND1_g0;
  boolean_T rtb_L32GRDO_l;
  boolean_T rtb_u3SES_i2;
  boolean_T rtb_W13B73ARWC;
  boolean_T rtb_L72GRDO_e;
  boolean_T rtb_u3SWS_g;
  boolean_T rtb_AND1_b;
  boolean_T rtb_L14AGRDO_f;
  boolean_T rtb_u3BSES_c;
  boolean_T rtb_AND1_m;
  boolean_T rtb_L72GRDO_j;
  boolean_T rtb_u3BSES_h;
  boolean_T rtb_AND1_i;
  boolean_T rtb_L72GRDO_k;
  boolean_T rtb_u3ASWS_e;
  boolean_T rtb_W13B73ARWC_m;
  boolean_T rtb_L14AGRDO_i;
  boolean_T rtb_u3ASWS_h;
  boolean_T rtb_AND1_nv;
  boolean_T rtb_L54GRDO_k;
  boolean_T rtb_u3ASWS_l;
  boolean_T rtb_AND1_el;
  boolean_T rtb_L74GRDO_g;
  boolean_T rtb_u3ASWS_h3;
  boolean_T rtb_AND1_f;
  boolean_T rtb_L34GRDO_a;
  boolean_T rtb_u3BSES_k;
  boolean_T rtb_AND1_l0;
  boolean_T rtb_L72GRDO_a;
  boolean_T rtb_FALSE_kq;
  boolean_T rtb_TmpSignalConversionAtROUTEL;
  boolean_T rtb_TmpSignalConversionAtROUT_k;
  boolean_T rtb_TmpSignalConversionAtROUT_g;
  boolean_T rtb_TmpSignalConversionAtROUT_m;
  boolean_T rtb_TmpSignalConversionAtROUT_c;
  boolean_T rtb_u3SESRL;
  boolean_T rtb_u3ASES_p;
  boolean_T rtb_W13B73ANWZ_po;
  boolean_T rtb_u3TP_d;
  boolean_T rtb_u3RLS;
  boolean_T rtb_FALSE_h;
  boolean_T rtb_TmpSignalConversionAtROU_g1;
  boolean_T rtb_TmpSignalConversionAtROU_kv;
  boolean_T rtb_TmpSignalConversionAtROU_gg;
  boolean_T rtb_TmpSignalConversionAtROU_md;
  boolean_T rtb_TmpSignalConversionAtROU_cc;
  boolean_T rtb_TmpSignalConversionAtROU_gd;
  boolean_T rtb_u3SWSRL;
  boolean_T rtb_TRUE_m;
  boolean_T rtb_u3TP_n;
  boolean_T rtb_u3RLS_i;
  boolean_T rtb_FALSE_de;
  boolean_T rtb_TmpSignalConversionAtRO_g13;
  boolean_T rtb_TmpSignalConversionAtRO_kvg;
  boolean_T rtb_TmpSignalConversionAtRO_ggh;
  boolean_T rtb_TmpSignalConversionAtRO_mda;
  boolean_T rtb_TmpSignalConversionAtRO_ccg;
  boolean_T rtb_TmpSignalConversionAtRO_gdj;
  boolean_T rtb_u3ASESRL;
  boolean_T rtb_TRUE_c;
  boolean_T rtb_u3ATP_h;
  boolean_T rtb_u3ARLS;
  boolean_T rtb_FALSE_nc;
  boolean_T rtb_TmpSignalConversionAtR_g13e;
  boolean_T rtb_TmpSignalConversionAtR_kvg1;
  boolean_T rtb_TmpSignalConversionAtR_ggho;
  boolean_T rtb_TmpSignalConversionAtR_mda1;
  boolean_T rtb_TmpSignalConversionAtR_ccgp;
  boolean_T rtb_TmpSignalConversionAtR_gdjd;
  boolean_T rtb_TRUE_g;
  boolean_T rtb_OR2_p;
  boolean_T rtb_u3ATP_n;
  boolean_T rtb_u3ARLS_o;
  boolean_T rtb_FALSE_e;
  boolean_T rtb_TmpSignalConversionAt_g13en;
  boolean_T rtb_TmpSignalConversionAt_kvg1q;
  boolean_T rtb_TmpSignalConversionAt_gghok;
  boolean_T rtb_TmpSignalConversionAt_mda10;
  boolean_T rtb_TmpSignalConversionAt_ccgp5;
  boolean_T rtb_TRUE_nv;
  boolean_T rtb_u3ASES_h;
  boolean_T rtb_W13B73ARWZ;
  boolean_T rtb_u3BTP_c;
  boolean_T rtb_u3BRLS;
  boolean_T rtb_FALSE_lk;
  boolean_T rtb_TmpSignalConversionA_g13en3;
  boolean_T rtb_TmpSignalConversionA_kvg1ql;
  boolean_T rtb_TmpSignalConversionA_gghokx;
  boolean_T rtb_TmpSignalConversionA_mda10h;
  boolean_T rtb_TmpSignalConversionA_ccgp5v;
  boolean_T rtb_TmpSignalConversionAt_gdjdy;
  boolean_T rtb_u3BSWSRL;
  boolean_T rtb_TRUE_ow;
  boolean_T rtb_u3BTP_h;
  boolean_T rtb_u3BRLS_p;
  boolean_T rtb_FALSE_mx;
  boolean_T rtb_TmpSignalConversionAtSIGNAL;
  boolean_T rtb_TmpSignalConversionAtSIGN_m;
  boolean_T rtb_L12L14BS_p;
  boolean_T rtb_u2TP_p;
  boolean_T rtb_FALSE_p;
  boolean_T rtb_TmpSignalConversionAtSIGN_g;
  boolean_T rtb_TmpSignalConversionAtSIG_m3;
  boolean_T rtb_AND1_ee;
  boolean_T rtb_u4TP_f;
  boolean_T rtb_FALSE_o;
  boolean_T rtb_TmpSignalConversionAtSIG_gb;
  boolean_T rtb_TmpSignalConversionAtSI_m3g;
  boolean_T rtb_L32L14BS_k;
  boolean_T rtb_u2TP_f;
  boolean_T rtb_FALSE_ncv;
  boolean_T rtb_TmpSignalConversionAtSI_gbq;
  boolean_T rtb_TmpSignalConversionAtS_m3gy;
  boolean_T rtb_L34X72S_k;
  boolean_T rtb_u4TP_m;
  boolean_T rtb_FALSE_ka;
  boolean_T rtb_TmpSignalConversionAtS_gbqi;
  boolean_T rtb_TmpSignalConversionAt_m3gyu;
  boolean_T rtb_L54X72S_e;
  boolean_T rtb_u4TP_e;
  boolean_T rtb_FALSE_al;
  boolean_T rtb_TmpSignalConversionAt_gbqi5;
  boolean_T rtb_TmpSignalConversionA_m3gyu4;
  boolean_T rtb_AND1_gw;
  boolean_T rtb_u2TP_a;
  boolean_T rtb_FALSE_g;
  boolean_T rtb_TmpSignalConversionA_gbqi5w;
  boolean_T rtb_TmpSignalConversion_m3gyu4z;
  boolean_T rtb_L74X72S_k;
  boolean_T rtb_u4TP_j;
  boolean_T rtb_u4TP_l;
  boolean_T rtb_u4ARRLSPBCTRL;
  boolean_T rtb_RRLSDEP;
  boolean_T rtb_SWRLSDEP;
  boolean_T rtb_u2TP_d;
  boolean_T rtb_u3TP_kg;
  boolean_T rtb_u4TP_h;
  boolean_T rtb_u2TP_o;
  boolean_T rtb_u4TP_bb;
  boolean_T rtb_u4TP_lo;
  boolean_T rtb_u2TP_i;
  boolean_T rtb_u3ATP_p;
  boolean_T rtb_u3BTP_jy;
  boolean_T rtb_u4TP_gu;
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
  boolean_T rtb_L14BSAS;
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
  boolean_T rtb_L12GRDO_i;
  boolean_T rtb_L14AGRDO_m;
  boolean_T rtb_L14BGRDO_n;
  boolean_T rtb_L32GRDO_m;
  boolean_T rtb_L34GRDO_l;
  boolean_T rtb_L54GRDO_b;
  boolean_T rtb_L72GRDO_fl;
  boolean_T rtb_L74GRDO_k;
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
  int32_T rtb_uS;
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S551>/L14A-RRLS' */
    VITALDEPOT_DW.M_RRLS_L14A = rtu_FROMMAIN[5];

    /* DataStoreWrite: '<S551>/L14B-GR-DO' */
    VITALDEPOT_DW.DO_L14B_GR = rtu_FROMMAIN[3];

    /* DataStoreWrite: '<S551>/RR' */
    VITALDEPOT_DW.M_RR = rtu_FROMMAIN[4];

    /* DataStoreWrite: '<S551>/RRLS' */
    VITALDEPOT_DW.M_RRLS = rtu_FROMMAIN[1];

    /* DataStoreWrite: '<S551>/SWRLS' */
    VITALDEPOT_DW.M_SWRLS = rtu_FROMMAIN[2];

    /* DataStoreWrite: '<S551>/VDR' */
    VITALDEPOT_DW.M_VDR = rtu_FROMMAIN[0];

    /* DataStoreWrite: '<S548>/L12-L14B-S-REQ' */
    VITALDEPOT_DW.M_REQ_S_12_14 = rtu_SREQFROM[0];

    /* DataStoreWrite: '<S548>/L14A-X12-S-REQ' */
    VITALDEPOT_DW.M_REQ_S_14_12 = rtu_SREQFROM[6];

    /* DataStoreWrite: '<S548>/L14A-X32-S-REQ' */
    VITALDEPOT_DW.M_REQ_S_14_32 = rtu_SREQFROM[7];

    /* DataStoreWrite: '<S548>/L14A-X72-S-REQ' */
    VITALDEPOT_DW.M_REQ_S_14_72 = rtu_SREQFROM[8];

    /* DataStoreWrite: '<S548>/L32-L14B-S-REQ' */
    VITALDEPOT_DW.M_REQ_S_32_14 = rtu_SREQFROM[1];

    /* DataStoreWrite: '<S548>/L34-X72-S-REQ' */
    VITALDEPOT_DW.M_REQ_S_34_72 = rtu_SREQFROM[9];

    /* DataStoreWrite: '<S548>/L54-X72-S-REQ' */
    VITALDEPOT_DW.M_REQ_S_54_72 = rtu_SREQFROM[10];

    /* DataStoreWrite: '<S548>/L72-L14B-S-REQ' */
    VITALDEPOT_DW.M_REQ_S_72_14 = rtu_SREQFROM[2];

    /* DataStoreWrite: '<S548>/L72-X34-S-REQ' */
    VITALDEPOT_DW.M_REQ_S_72_34 = rtu_SREQFROM[3];

    /* DataStoreWrite: '<S548>/L72-X54-S-REQ' */
    VITALDEPOT_DW.M_REQ_S_72_54 = rtu_SREQFROM[4];

    /* DataStoreWrite: '<S548>/L72-X74-S-REQ' */
    VITALDEPOT_DW.M_REQ_S_72_74 = rtu_SREQFROM[5];

    /* DataStoreWrite: '<S548>/L74-X72-S-REQ' */
    VITALDEPOT_DW.M_REQ_S_74_72 = rtu_SREQFROM[11];

    /* DataStoreWrite: '<S548>/W13A-N-REQ' */
    VITALDEPOT_DW.M_W13A_N_REQ = rtu_NREQFROM[0];

    /* DataStoreWrite: '<S548>/W13B//73A-N-REQ' */
    VITALDEPOT_DW.M_W13B_73A_N_REQ = rtu_NREQFROM[1];

    /* DataStoreWrite: '<S548>/W54-N-REQ' */
    VITALDEPOT_DW.M_W54_N_REQ = rtu_NREQFROM[2];

    /* DataStoreWrite: '<S548>/W73B-N-REQ' */
    VITALDEPOT_DW.M_W73B_N_REQ = rtu_NREQFROM[3];

    /* DataStoreWrite: '<S548>/W13A-R-REQ' */
    VITALDEPOT_DW.M_W13A_R_REQ = rtu_RREQFROM[0];

    /* DataStoreWrite: '<S548>/W13B//73A-R-REQ' */
    VITALDEPOT_DW.M_W13B_73A_R_REQ = rtu_RREQFROM[1];

    /* DataStoreWrite: '<S548>/W54-R-REQ' */
    VITALDEPOT_DW.M_W54_R_REQ = rtu_RREQFROM[2];

    /* DataStoreWrite: '<S548>/W73B-R-REQ' */
    VITALDEPOT_DW.M_W73B_R_REQ = rtu_RREQFROM[3];

    /* DataStoreWrite: '<S548>/W13A-OOC' */
    VITALDEPOT_DW.M_W13A_OOC = rtu_OOCFROM[0];

    /* DataStoreWrite: '<S548>/W13B//73A-OOC' */
    VITALDEPOT_DW.M_W13B_73A_OOC = rtu_OOCFROM[1];

    /* DataStoreWrite: '<S548>/W54-OOC' */
    VITALDEPOT_DW.M_W54_OOC = rtu_OOCFROM[2];

    /* DataStoreWrite: '<S548>/W73B-OOC' */
    VITALDEPOT_DW.M_W73B_OOC = rtu_OOCFROM[3];

    /* DataStoreWrite: '<S548>/L14A-RRLSPB-CTRL' */
    VITALDEPOT_DW.M_RRLSPB_CTRL_L14A = rtu_RRLSPBCTRLFROM[6];

    /* DataStoreWrite: '<S548>/L14B-RRLSPB-CTRL' */
    VITALDEPOT_DW.M_RRLSPB_CTRL_L14B = rtu_RRLSPBCTRLFROM[7];

    /* DataStoreWrite: '<S548>/X12-RRLSPB-CTRL' */
    VITALDEPOT_DW.M_RRLSPB_CTRL_X12 = rtu_RRLSPBCTRLFROM[0];

    /* DataStoreWrite: '<S548>/X32-RRLSPB-CTRL' */
    VITALDEPOT_DW.M_RRLSPB_CTRL_X32 = rtu_RRLSPBCTRLFROM[1];

    /* DataStoreWrite: '<S548>/X34-RRLSPB-CTRL' */
    VITALDEPOT_DW.M_RRLSPB_CTRL_X34 = rtu_RRLSPBCTRLFROM[3];

    /* DataStoreWrite: '<S548>/X54-RRLSPB-CTRL' */
    VITALDEPOT_DW.M_RRLSPB_CTRL_X54 = rtu_RRLSPBCTRLFROM[4];

    /* DataStoreWrite: '<S548>/X72-RRLSPB-CTRL' */
    VITALDEPOT_DW.M_RRLSPB_CTRL_X72 = rtu_RRLSPBCTRLFROM[2];

    /* DataStoreWrite: '<S548>/X74-RRLSPB-CTRL' */
    VITALDEPOT_DW.M_RRLSPB_CTRL_X74 = rtu_RRLSPBCTRLFROM[5];

    /* DataStoreWrite: '<S548>/W13A-SWRLSPB-CTRL' */
    VITALDEPOT_DW.M_W13A_SWRLSPB_CTRL = rtu_SWRLSPBCTRLFROM[0];

    /* DataStoreWrite: '<S548>/W13B//73A-SWRLSPB-CTRL' */
    VITALDEPOT_DW.M_W13B_73A_SWRLSPB_CTRL = rtu_SWRLSPBCTRLFROM[1];

    /* DataStoreWrite: '<S548>/W54-SWRLSPB-CTRL' */
    VITALDEPOT_DW.M_W54_SWRLSPB_CTRL = rtu_SWRLSPBCTRLFROM[2];

    /* DataStoreWrite: '<S548>/W73B-SWRLSPB-CTRL' */
    VITALDEPOT_DW.M_W73B_SWRLSPB_CTRL = rtu_SWRLSPBCTRLFROM[3];

    /* DataStoreWrite: '<S548>/L12-L14B-RS' */
    VITALDEPOT_DW.M_RS_12_14 = rtu_DEPVARFROM[0];

    /* DataStoreWrite: '<S548>/L14A-X12-RS' */
    VITALDEPOT_DW.M_RS_14_12 = rtu_DEPVARFROM[6];

    /* DataStoreWrite: '<S548>/L14A-X32-RS' */
    VITALDEPOT_DW.M_RS_14_32 = rtu_DEPVARFROM[7];

    /* DataStoreWrite: '<S548>/L14A-X72-RS' */
    VITALDEPOT_DW.M_RS_14_72 = rtu_DEPVARFROM[8];

    /* DataStoreWrite: '<S548>/L32-L14B-RS' */
    VITALDEPOT_DW.M_RS_32_14 = rtu_DEPVARFROM[1];

    /* DataStoreWrite: '<S548>/L34-X72-RS' */
    VITALDEPOT_DW.M_RS_34_72 = rtu_DEPVARFROM[9];

    /* DataStoreWrite: '<S548>/L54-X72-RS' */
    VITALDEPOT_DW.M_RS_54_72 = rtu_DEPVARFROM[10];

    /* DataStoreWrite: '<S548>/L72-L14B-RS' */
    VITALDEPOT_DW.M_RS_72_14 = rtu_DEPVARFROM[2];

    /* DataStoreWrite: '<S548>/L72-L34B-RS' */
    VITALDEPOT_DW.M_RS_72_34 = rtu_DEPVARFROM[3];

    /* DataStoreWrite: '<S548>/L72-L54B-RS' */
    VITALDEPOT_DW.M_RS_72_54 = rtu_DEPVARFROM[4];

    /* DataStoreWrite: '<S548>/L72-L74B-RS' */
    VITALDEPOT_DW.M_RS_72_74 = rtu_DEPVARFROM[5];

    /* DataStoreWrite: '<S548>/L74-X72-RS' */
    VITALDEPOT_DW.M_RS_74_72 = rtu_DEPVARFROM[11];

    /* DataStoreWrite: '<S552>/L12-RST' */
    VITALDEPOT_DW.M_RST_L12 = rtu_RSTFROM[0];

    /* DataStoreWrite: '<S552>/L14A-RST' */
    VITALDEPOT_DW.M_RST_L14A = rtu_RSTFROM[6];

    /* DataStoreWrite: '<S552>/L32-RST' */
    VITALDEPOT_DW.M_RST_L32 = rtu_RSTFROM[1];

    /* DataStoreWrite: '<S552>/L34-RST' */
    VITALDEPOT_DW.M_RST_L34 = rtu_RSTFROM[3];

    /* DataStoreWrite: '<S552>/L54-RST' */
    VITALDEPOT_DW.M_RST_L54 = rtu_RSTFROM[4];

    /* DataStoreWrite: '<S552>/L72-RST' */
    VITALDEPOT_DW.M_RST_L72 = rtu_RSTFROM[2];

    /* DataStoreWrite: '<S552>/L74-RST' */
    VITALDEPOT_DW.M_RST_L74 = rtu_RSTFROM[5];

    /* DataStoreWrite: '<S546>/12-TPR-DI' */
    VITALDEPOT_DW.DI_TPR_12 = rtu_TPRDI[0];

    /* DataStoreWrite: '<S546>/13-TPR-DI' */
    VITALDEPOT_DW.DI_TPR_13 = rtu_TPRDI[1];

    /* DataStoreWrite: '<S546>/14-TPR-DI' */
    VITALDEPOT_DW.DI_TPR_14 = rtu_TPRDI[2];

    /* DataStoreWrite: '<S546>/32-TPR-DI' */
    VITALDEPOT_DW.DI_TPR_32 = rtu_TPRDI[3];

    /* DataStoreWrite: '<S546>/34-TPR-DI' */
    VITALDEPOT_DW.DI_TPR_34 = rtu_TPRDI[4];

    /* DataStoreWrite: '<S546>/54-TPR-DI' */
    VITALDEPOT_DW.DI_TPR_54 = rtu_TPRDI[5];

    /* DataStoreWrite: '<S546>/72-TPR-DI' */
    VITALDEPOT_DW.DI_TPR_72 = rtu_TPRDI[6];

    /* DataStoreWrite: '<S546>/73A-TPR-DI' */
    VITALDEPOT_DW.DI_TPR_73A = rtu_TPRDI[7];

    /* DataStoreWrite: '<S546>/73B-TPR-DI' */
    VITALDEPOT_DW.DI_TPR_73B = rtu_TPRDI[8];

    /* DataStoreWrite: '<S546>/74-TPR-DI' */
    VITALDEPOT_DW.DI_TPR_74 = rtu_TPRDI[9];

    /* DataStoreWrite: '<S546>/W13A-NWP-DI' */
    VITALDEPOT_DW.DI_NWP_W13A = rtu_NWPDI[0];

    /* DataStoreWrite: '<S546>/W13B//73A-NWP-DI' */
    VITALDEPOT_DW.DI_NWP_W13B_73A = rtu_NWPDI[1];

    /* DataStoreWrite: '<S546>/W54-NWP-DI' */
    VITALDEPOT_DW.DI_NWP_W54 = rtu_NWPDI[2];

    /* DataStoreWrite: '<S546>/W73B-NWP-DI' */
    VITALDEPOT_DW.DI_NWP_W73B = rtu_NWPDI[3];

    /* DataStoreWrite: '<S546>/W13A-RWP-DI' */
    VITALDEPOT_DW.DI_RWP_W13A = rtu_RWPDI[0];

    /* DataStoreWrite: '<S546>/W13B//73A-RWP-DI' */
    VITALDEPOT_DW.DI_RWP_W13B_73A = rtu_RWPDI[1];

    /* DataStoreWrite: '<S546>/W54-RWP-DI' */
    VITALDEPOT_DW.DI_RWP_W54 = rtu_RWPDI[2];

    /* DataStoreWrite: '<S546>/W73B-RWP-DI' */
    VITALDEPOT_DW.DI_RWP_W73B = rtu_RWPDI[3];

    /* DataStoreRead: '<S549>/14-TP' */
    rtb_u4TP_l = VITALDEPOT_DW.M_TP_14;

    /* DataStoreRead: '<S549>/14A-RRLSPB-CTRL' */
    rtb_u4ARRLSPBCTRL = VITALDEPOT_DW.M_RRLSPB_CTRL_L14A;

    /* DataStoreRead: '<S549>/RRLS-DEP' */
    rtb_RRLSDEP = VITALDEPOT_DW.M_RRLS_DEP;

    /* DataStoreRead: '<S549>/SWRLS-DEP' */
    rtb_SWRLSDEP = VITALDEPOT_DW.M_SWRLS_DEP;

    /* DataStoreRead: '<S550>/12-TP' */
    rtb_u2TP_d = VITALDEPOT_DW.M_TP_12;

    /* DataStoreRead: '<S550>/13-TP' */
    rtb_u3TP_kg = VITALDEPOT_DW.M_TP_13;

    /* DataStoreRead: '<S550>/14-TP' */
    rtb_u4TP_h = VITALDEPOT_DW.M_TP_14;

    /* DataStoreRead: '<S550>/32-TP' */
    rtb_u2TP_o = VITALDEPOT_DW.M_TP_32;

    /* DataStoreRead: '<S550>/34-TP' */
    rtb_u4TP_bb = VITALDEPOT_DW.M_TP_34;

    /* DataStoreRead: '<S550>/54-TP' */
    rtb_u4TP_lo = VITALDEPOT_DW.M_TP_54;

    /* DataStoreRead: '<S550>/72-TP' */
    rtb_u2TP_i = VITALDEPOT_DW.M_TP_72;

    /* DataStoreRead: '<S550>/73A-TP' */
    rtb_u3ATP_p = VITALDEPOT_DW.M_TP_73A;

    /* DataStoreRead: '<S550>/73B-TP' */
    rtb_u3BTP_jy = VITALDEPOT_DW.M_TP_73B;

    /* DataStoreRead: '<S550>/74-TP' */
    rtb_u4TP_gu = VITALDEPOT_DW.M_TP_74;

    /* DataStoreRead: '<S550>/13-S-ES' */
    rtb_u3SES_f = VITALDEPOT_DW.M_S_ES_13;

    /* DataStoreRead: '<S550>/73A-S-ES' */
    rtb_u3ASES_e = VITALDEPOT_DW.M_S_ES_73A;

    /* DataStoreRead: '<S550>/73B-S-ES' */
    rtb_u3BSES_j = VITALDEPOT_DW.M_S_ES_73B;

    /* DataStoreRead: '<S550>/13-S-WS' */
    rtb_u3SWS_l = VITALDEPOT_DW.M_S_WS_13;

    /* DataStoreRead: '<S550>/73A-S-WS' */
    rtb_u3ASWS_b = VITALDEPOT_DW.M_S_WS_73A;

    /* DataStoreRead: '<S550>/73B-S-WS' */
    rtb_u3BSWS_f = VITALDEPOT_DW.M_S_WS_73B;

    /* DataStoreRead: '<S550>/W13A-NWC' */
    rtb_W13ANWC_k = VITALDEPOT_DW.M_W13A_NWC;

    /* DataStoreRead: '<S550>/W13B//73A-NWC' */
    rtb_W13B73ANWC_cl = VITALDEPOT_DW.M_W13B_73A_NWC;

    /* DataStoreRead: '<S550>/W54-NWC' */
    rtb_W54NWC_g = VITALDEPOT_DW.M_W54_NWC;

    /* DataStoreRead: '<S550>/W73B-NWC' */
    rtb_W73BNWC_c = VITALDEPOT_DW.M_W73B_NWC;

    /* DataStoreRead: '<S550>/W13A-NWP' */
    rtb_W13ANWP = VITALDEPOT_DW.M_W13A_NWP;

    /* DataStoreRead: '<S550>/W13B//73A-NWP' */
    rtb_W13B73ANWP = VITALDEPOT_DW.M_W13B_73A_NWP;

    /* DataStoreRead: '<S550>/W54-NWP' */
    rtb_W54NWP = VITALDEPOT_DW.M_W54_NWP;

    /* DataStoreRead: '<S550>/W73B-NWP' */
    rtb_W73BNWP = VITALDEPOT_DW.M_W73B_NWP;

    /* DataStoreRead: '<S550>/W13A-NWZ' */
    rtb_W13ANWZ_g = VITALDEPOT_DW.M_W13A_NWZ;

    /* DataStoreRead: '<S550>/W13B//73A-NWZ' */
    rtb_W13B73ANWZ_o = VITALDEPOT_DW.M_W13B_73A_NWZ;

    /* DataStoreRead: '<S550>/W54-NWZ' */
    rtb_W54NWZ_a = VITALDEPOT_DW.M_W54_NWZ;

    /* DataStoreRead: '<S550>/W73B-NWZ' */
    rtb_W73BNWZ_f = VITALDEPOT_DW.M_W73B_NWZ;

    /* DataStoreRead: '<S550>/W13A-NW-TE' */
    rtb_W13ANWTE = VITALDEPOT_DW.M_W13A_NW_TE;

    /* DataStoreRead: '<S550>/W13B//73A-NW-TE' */
    rtb_W13B73ANWTE = VITALDEPOT_DW.M_W13B_73A_NW_TE;

    /* DataStoreRead: '<S550>/W54-NW-TE' */
    rtb_W54NWTE = VITALDEPOT_DW.M_W54_NW_TE;

    /* DataStoreRead: '<S550>/W73B-NW-TE' */
    rtb_W73BNWTE = VITALDEPOT_DW.M_W73B_NW_TE;

    /* DataStoreRead: '<S550>/W13A-RWC' */
    rtb_W13ARWC_dj = VITALDEPOT_DW.M_W13A_RWC;

    /* DataStoreRead: '<S550>/W13B//73A-RWC' */
    rtb_W13B73ARWC_l = VITALDEPOT_DW.M_W13B_73A_RWC;

    /* DataStoreRead: '<S550>/W54-RWC' */
    rtb_W54RWC_k = VITALDEPOT_DW.M_W54_RWC;

    /* DataStoreRead: '<S550>/W73B-RWC' */
    rtb_W73BRWC_jj = VITALDEPOT_DW.M_W73B_RWC;

    /* DataStoreRead: '<S550>/W13A-RWP' */
    rtb_W13ARWP = VITALDEPOT_DW.M_W13A_RWP;

    /* DataStoreRead: '<S550>/W13B//73A-RWP' */
    rtb_W13B73ARWP = VITALDEPOT_DW.M_W13B_73A_RWP;

    /* DataStoreRead: '<S550>/W54-RWP' */
    rtb_W54RWP = VITALDEPOT_DW.M_W54_RWP;

    /* DataStoreRead: '<S550>/W73B-RWP' */
    rtb_W73BRWP = VITALDEPOT_DW.M_W73B_RWP;

    /* DataStoreRead: '<S550>/W13A-RWZ' */
    rtb_W13ARWZ_k = VITALDEPOT_DW.M_W13A_RWZ;

    /* DataStoreRead: '<S550>/W13B//73A-RWZ' */
    rtb_W13B73ARWZ_b = VITALDEPOT_DW.M_W13B_73A_RWZ;

    /* DataStoreRead: '<S550>/W54-RWZ' */
    rtb_W54RWZ_m = VITALDEPOT_DW.M_W54_RWZ;

    /* DataStoreRead: '<S550>/W73B-RWZ' */
    rtb_W73BRWZ_p = VITALDEPOT_DW.M_W73B_RWZ;

    /* DataStoreRead: '<S550>/W13A-RW-TE' */
    rtb_W13ARWTE = VITALDEPOT_DW.M_W13A_RW_TE;

    /* DataStoreRead: '<S550>/W13B//73A-RW-TE' */
    rtb_W13B73ARWTE = VITALDEPOT_DW.M_W13B_73A_RW_TE;

    /* DataStoreRead: '<S550>/W54-RW-TE' */
    rtb_W54RWTE = VITALDEPOT_DW.M_W54_RW_TE;

    /* DataStoreRead: '<S550>/W73B-RW-TE' */
    rtb_W73BRWTE = VITALDEPOT_DW.M_W73B_RW_TE;

    /* DataStoreRead: '<S550>/W13A-L' */
    rtb_W13AL = VITALDEPOT_DW.M_W13A_L;

    /* DataStoreRead: '<S550>/W13B//73A-L' */
    rtb_W13B73AL = VITALDEPOT_DW.M_W13B_73A_L;

    /* DataStoreRead: '<S550>/W54-L' */
    rtb_W54L = VITALDEPOT_DW.M_W54_L;

    /* DataStoreRead: '<S550>/W73B-L' */
    rtb_W73BL = VITALDEPOT_DW.M_W73B_L;

    /* DataStoreRead: '<S550>/W13A-LS' */
    rtb_W13ALS = VITALDEPOT_DW.M_W13A_LS;

    /* DataStoreRead: '<S550>/W13B//73A-LS' */
    rtb_W13B73ALS = VITALDEPOT_DW.M_W13B_73A_LS;

    /* DataStoreRead: '<S550>/W54-LS' */
    rtb_W54LS = VITALDEPOT_DW.M_W54_LS;

    /* DataStoreRead: '<S550>/W73B-LS' */
    rtb_W73BLS = VITALDEPOT_DW.M_W73B_LS;

    /* DataStoreRead: '<S550>/W13A-SWRLS' */
    rtb_W13ASWRLS_p = VITALDEPOT_DW.M_W13A_SWRLS;

    /* DataStoreRead: '<S550>/W13B//73A-SWRLS' */
    rtb_W13B73ASWRLS = VITALDEPOT_DW.M_W13B_73A_SWRLS;

    /* DataStoreRead: '<S550>/W54-SWRLS' */
    rtb_W54SWRLS_o = VITALDEPOT_DW.M_W54_SWRLS;

    /* DataStoreRead: '<S550>/W73B-SWRLS' */
    rtb_W73BSWRLS_i = VITALDEPOT_DW.M_W73B_SWRLS;

    /* DataStoreRead: '<S550>/W13A-TPZ' */
    rtb_W13ATPZ_e = VITALDEPOT_DW.M_W13A_TPZ;

    /* DataStoreRead: '<S550>/W13B//73A-TPZ' */
    rtb_W13B73ATPZ_bt = VITALDEPOT_DW.M_W13B_73A_TPZ;

    /* DataStoreRead: '<S550>/W54-TPZ' */
    rtb_W54TPZ_in = VITALDEPOT_DW.M_W54_TPZ;

    /* DataStoreRead: '<S550>/W73B-TPZ' */
    rtb_W73BTPZ_e = VITALDEPOT_DW.M_W73B_TPZ;

    /* DataStoreRead: '<S550>/L12-GR-DO' */
    rtb_L12GRDO_m = VITALDEPOT_DW.DO_L12_GR;

    /* DataStoreRead: '<S550>/L14A-GR-DO' */
    rtb_L14AGRDO_e = VITALDEPOT_DW.DO_L14A_GR;

    /* DataStoreRead: '<S550>/L14B-GR-DO' */
    rtb_L14BGRDO = VITALDEPOT_DW.DO_L14B_GR;

    /* DataStoreRead: '<S550>/L32-GR-DO' */
    rtb_L32GRDO_ld = VITALDEPOT_DW.DO_L32_GR;

    /* DataStoreRead: '<S550>/L34-GR-DO' */
    rtb_L34GRDO_e = VITALDEPOT_DW.DO_L34_GR;

    /* DataStoreRead: '<S550>/L54-GR-DO' */
    rtb_L54GRDO_i = VITALDEPOT_DW.DO_L54_GR;

    /* DataStoreRead: '<S550>/L72-GR-DO' */
    rtb_L72GRDO_io = VITALDEPOT_DW.DO_L72_GR;

    /* DataStoreRead: '<S550>/L74-GR-DO' */
    rtb_L74GRDO_ai = VITALDEPOT_DW.DO_L74_GR;

    /* DataStoreRead: '<S550>/L12-S-AS' */
    rtb_L12SAS_j = VITALDEPOT_DW.M_AS_S_L12;

    /* DataStoreRead: '<S550>/L14A-S-AS' */
    rtb_L14ASAS_m = VITALDEPOT_DW.M_AS_S_L14A;

    /* DataStoreRead: '<S550>/L14B-S-AS' */
    rtb_L14BSAS = VITALDEPOT_DW.M_AS_S_L14B;

    /* DataStoreRead: '<S550>/L32-S-AS' */
    rtb_L32SAS_o = VITALDEPOT_DW.M_AS_S_L32;

    /* DataStoreRead: '<S550>/L34-S-AS' */
    rtb_L34SAS_n = VITALDEPOT_DW.M_AS_S_L34;

    /* DataStoreRead: '<S550>/L54-S-AS' */
    rtb_L54SAS_o = VITALDEPOT_DW.M_AS_S_L54;

    /* DataStoreRead: '<S550>/L72-S-AS' */
    rtb_L72SAS_p = VITALDEPOT_DW.M_AS_S_L72;

    /* DataStoreRead: '<S550>/L74-S-AS' */
    rtb_L74SAS_e = VITALDEPOT_DW.M_AS_S_L74;

    /* DataStoreRead: '<S550>/L14A-RRLS' */
    rtb_L14ARRLS_f = VITALDEPOT_DW.M_RRLS_L14A;

    /* DataStoreRead: '<S550>/L14B-RRLS' */
    rtb_L14BRRLS_g = VITALDEPOT_DW.M_RRLS_L14B;

    /* DataStoreRead: '<S550>/X12-RRLS' */
    rtb_X12RRLS_a = VITALDEPOT_DW.M_RRLS_X12;

    /* DataStoreRead: '<S550>/X32-RRLS' */
    rtb_X32RRLS_l = VITALDEPOT_DW.M_RRLS_X32;

    /* DataStoreRead: '<S550>/X34-RRLS' */
    rtb_X34RRLS_e = VITALDEPOT_DW.M_RRLS_X34;

    /* DataStoreRead: '<S550>/X54-RRLS' */
    rtb_X54RRLS_n = VITALDEPOT_DW.M_RRLS_X54;

    /* DataStoreRead: '<S550>/X72-RRLS' */
    rtb_X72RRLS_f = VITALDEPOT_DW.M_RRLS_X72;

    /* DataStoreRead: '<S550>/X74-RRLS' */
    rtb_X74RRLS_a = VITALDEPOT_DW.M_RRLS_X74;

    /* DataStoreRead: '<S547>/L12-GR-DO' */
    rtb_L12GRDO_i = VITALDEPOT_DW.DO_L12_GR;

    /* DataStoreRead: '<S547>/L14A-GR-DO' */
    rtb_L14AGRDO_m = VITALDEPOT_DW.DO_L14A_GR;

    /* DataStoreRead: '<S547>/L14B-GR-DO' */
    rtb_L14BGRDO_n = VITALDEPOT_DW.DO_L14B_GR;

    /* DataStoreRead: '<S547>/L32-GR-DO' */
    rtb_L32GRDO_m = VITALDEPOT_DW.DO_L32_GR;

    /* DataStoreRead: '<S547>/L34-GR-DO' */
    rtb_L34GRDO_l = VITALDEPOT_DW.DO_L34_GR;

    /* DataStoreRead: '<S547>/L54-GR-DO' */
    rtb_L54GRDO_b = VITALDEPOT_DW.DO_L54_GR;

    /* DataStoreRead: '<S547>/L72-GR-DO' */
    rtb_L72GRDO_fl = VITALDEPOT_DW.DO_L72_GR;

    /* DataStoreRead: '<S547>/L74-GR-DO' */
    rtb_L74GRDO_k = VITALDEPOT_DW.DO_L74_GR;

    /* DataStoreRead: '<S547>/W13A-NWR-DO' */
    rtb_W13ANWRDO = VITALDEPOT_DW.DO_NWR_W13A;

    /* DataStoreRead: '<S547>/W13B//73A-NWR-DO' */
    rtb_W13B73ANWRDO = VITALDEPOT_DW.DO_NWR_W13B_73A;

    /* DataStoreRead: '<S547>/W54-NWR-DO' */
    rtb_W54NWRDO = VITALDEPOT_DW.DO_NWR_W54;

    /* DataStoreRead: '<S547>/W73B-NWR-DO' */
    rtb_W73BNWRDO = VITALDEPOT_DW.DO_NWR_W73B;

    /* DataStoreRead: '<S547>/W13A-RWR-DO' */
    rtb_W13ARWRDO = VITALDEPOT_DW.DO_RWR_W13A;

    /* DataStoreRead: '<S547>/W13B//73A-RWR-DO' */
    rtb_W13B73ARWRDO = VITALDEPOT_DW.DO_RWR_W13B_73A;

    /* DataStoreRead: '<S547>/W54-RWR-DO' */
    rtb_W54RWRDO = VITALDEPOT_DW.DO_RWR_W54;

    /* DataStoreRead: '<S547>/W73B-RWR-DO' */
    rtb_W73BRWRDO = VITALDEPOT_DW.DO_RWR_W73B;

    /* DataStoreRead: '<S547>/W13A-WLPR-DO' */
    rtb_W13AWLPRDO = VITALDEPOT_DW.DO_WLPR_W13A;

    /* DataStoreRead: '<S547>/W13B//73A-WLPR-DO' */
    rtb_W13B73AWLPRDO = VITALDEPOT_DW.DO_WLPR_W13B_73A;

    /* DataStoreRead: '<S547>/W54-WLPR-DO' */
    rtb_W54WLPRDO = VITALDEPOT_DW.DO_WLPR_W54;

    /* DataStoreRead: '<S547>/W73B-WLPR-DO' */
    rtb_W73BWLPRDO = VITALDEPOT_DW.DO_WLPR_W73B;

    /* DataStoreWrite: '<S1>/FALSE' incorporates:
     *  Constant: '<S4>/0'
     */
    VITALDEPOT_DW.M_GV_FALSE = false;

    /* DiscretePulseGenerator: '<S4>/0.5S' */
    rtb_uS = ((VITALDEPOT_DW.clockTickCounter < 5) &&
              (VITALDEPOT_DW.clockTickCounter >= 0));
    if (VITALDEPOT_DW.clockTickCounter >= 9) {
      VITALDEPOT_DW.clockTickCounter = 0;
    } else {
      VITALDEPOT_DW.clockTickCounter++;
    }

    /* End of DiscretePulseGenerator: '<S4>/0.5S' */

    /* DataStoreWrite: '<S1>/FLASH-0.5S' incorporates:
     *  DataTypeConversion: '<S4>/Data Type Conversion1'
     */
    VITALDEPOT_DW.M_GV_FLASH_500 = (rtb_uS != 0);

    /* DiscretePulseGenerator: '<S4>/1S' */
    rtb_uS = ((VITALDEPOT_DW.clockTickCounter_b < 10) &&
              (VITALDEPOT_DW.clockTickCounter_b >= 0));
    if (VITALDEPOT_DW.clockTickCounter_b >= 19) {
      VITALDEPOT_DW.clockTickCounter_b = 0;
    } else {
      VITALDEPOT_DW.clockTickCounter_b++;
    }

    /* End of DiscretePulseGenerator: '<S4>/1S' */

    /* DataStoreWrite: '<S1>/FLASH-1S' incorporates:
     *  DataTypeConversion: '<S4>/Data Type Conversion'
     */
    VITALDEPOT_DW.M_GV_FLASH_1000 = (rtb_uS != 0);

    /* DataStoreWrite: '<S1>/TRUE' incorporates:
     *  Constant: '<S4>/1'
     */
    VITALDEPOT_DW.M_GV_TRUE = true;

    /* DataStoreRead: '<S16>/FALSE' */
    rtb_FALSE = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S16>/TmpSignal ConversionAtAPPROACH LOCKInport1' */
    rtb_TmpSignalConversionAtAPPROA = rtb_FALSE;

    /* DataStoreRead: '<S16>/L12-GR-DO' */
    rtb_L12GRDO = VITALDEPOT_DW.DO_L12_GR;

    /* DataStoreRead: '<S16>/12-TP' */
    rtb_u2TP = VITALDEPOT_DW.M_TP_12;

    /* DataStoreRead: '<S16>/13-TP' */
    rtb_u3TP = VITALDEPOT_DW.M_TP_13;

    /* DataStoreRead: '<S16>/RR' */
    rtb_RR = VITALDEPOT_DW.M_RR;

    /* DataStoreRead: '<S16>/VDR' */
    rtb_VDR = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S16>/APPROACH LOCK' */
  D_AS(VITALDEPOT_M, rtb_TmpSignalConversionAtAPPROA, rtb_FALSE, rtb_L12GRDO,
       rtb_u2TP, rtb_u3TP, rtb_RR, rtb_VDR, &VITALDEPOT_B.APPROACHLOCK,
       &VITALDEPOT_DW.APPROACHLOCK);

  /* End of Outputs for SubSystem: '<S16>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S16>/L12-S-AS' */
    VITALDEPOT_DW.M_AS_S_L12 = VITALDEPOT_B.APPROACHLOCK.AND11;

    /* DataStoreRead: '<S17>/FALSE' */
    rtb_FALSE_f = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S17>/TmpSignal ConversionAtAPPROACH LOCKInport1' */
    rtb_TmpSignalConversionAtAPPR_h = rtb_FALSE_f;

    /* DataStoreRead: '<S17>/L14A-GR-DO' */
    rtb_L14AGRDO = VITALDEPOT_DW.DO_L14A_GR;

    /* DataStoreRead: '<S17>/14-TP' */
    rtb_u4TP = VITALDEPOT_DW.M_TP_14;

    /* DataStoreRead: '<S17>/13-TP' */
    rtb_u3TP_a = VITALDEPOT_DW.M_TP_13;

    /* DataStoreRead: '<S17>/RR' */
    rtb_RR_k = VITALDEPOT_DW.M_RR;

    /* DataStoreRead: '<S17>/VDR' */
    rtb_VDR_i = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S17>/APPROACH LOCK' */
  D_AS(VITALDEPOT_M, rtb_TmpSignalConversionAtAPPR_h, rtb_FALSE_f, rtb_L14AGRDO,
       rtb_u4TP, rtb_u3TP_a, rtb_RR_k, rtb_VDR_i, &VITALDEPOT_B.APPROACHLOCK_p,
       &VITALDEPOT_DW.APPROACHLOCK_p);

  /* End of Outputs for SubSystem: '<S17>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S17>/L14A-S-AS' */
    VITALDEPOT_DW.M_AS_S_L14A = VITALDEPOT_B.APPROACHLOCK_p.AND11;

    /* DataStoreRead: '<S18>/FALSE' */
    rtb_FALSE_n = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S18>/TmpSignal ConversionAtAPPROACH LOCKInport1' */
    rtb_TmpSignalConversionAtAPP_hi = rtb_FALSE_n;

    /* DataStoreRead: '<S18>/L32-GR-DO' */
    rtb_L32GRDO = VITALDEPOT_DW.DO_L32_GR;

    /* DataStoreRead: '<S18>/32-TP' */
    rtb_u2TP_h = VITALDEPOT_DW.M_TP_32;

    /* DataStoreRead: '<S18>/13-TP' */
    rtb_u3TP_e = VITALDEPOT_DW.M_TP_13;

    /* DataStoreRead: '<S18>/RR' */
    rtb_RR_g = VITALDEPOT_DW.M_RR;

    /* DataStoreRead: '<S18>/VDR' */
    rtb_VDR_f = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S18>/APPROACH LOCK' */
  D_AS(VITALDEPOT_M, rtb_TmpSignalConversionAtAPP_hi, rtb_FALSE_n, rtb_L32GRDO,
       rtb_u2TP_h, rtb_u3TP_e, rtb_RR_g, rtb_VDR_f, &VITALDEPOT_B.APPROACHLOCK_a,
       &VITALDEPOT_DW.APPROACHLOCK_a);

  /* End of Outputs for SubSystem: '<S18>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S18>/L32-S-AS' */
    VITALDEPOT_DW.M_AS_S_L32 = VITALDEPOT_B.APPROACHLOCK_a.AND11;

    /* DataStoreRead: '<S19>/FALSE' */
    rtb_FALSE_m = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S19>/TmpSignal ConversionAtAPPROACH LOCKInport1' */
    rtb_TmpSignalConversionAtAP_hik = rtb_FALSE_m;

    /* DataStoreRead: '<S19>/L34-GR-DO' */
    rtb_L34GRDO = VITALDEPOT_DW.DO_L34_GR;

    /* DataStoreRead: '<S19>/34-TP' */
    rtb_u4TP_k = VITALDEPOT_DW.M_TP_34;

    /* DataStoreRead: '<S19>/73B-TP' */
    rtb_u3BTP = VITALDEPOT_DW.M_TP_73B;

    /* DataStoreRead: '<S19>/RR' */
    rtb_RR_f = VITALDEPOT_DW.M_RR;

    /* DataStoreRead: '<S19>/VDR' */
    rtb_VDR_d = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S19>/APPROACH LOCK' */
  D_AS(VITALDEPOT_M, rtb_TmpSignalConversionAtAP_hik, rtb_FALSE_m, rtb_L34GRDO,
       rtb_u4TP_k, rtb_u3BTP, rtb_RR_f, rtb_VDR_d, &VITALDEPOT_B.APPROACHLOCK_j,
       &VITALDEPOT_DW.APPROACHLOCK_j);

  /* End of Outputs for SubSystem: '<S19>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S19>/L34-S-AS' */
    VITALDEPOT_DW.M_AS_S_L34 = VITALDEPOT_B.APPROACHLOCK_j.AND11;

    /* DataStoreRead: '<S20>/FALSE' */
    rtb_FALSE_fj = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S20>/TmpSignal ConversionAtAPPROACH LOCKInport1' */
    rtb_TmpSignalConversionAtA_hiki = rtb_FALSE_fj;

    /* DataStoreRead: '<S20>/L54-GR-DO' */
    rtb_L54GRDO = VITALDEPOT_DW.DO_L54_GR;

    /* DataStoreRead: '<S20>/54-TP' */
    rtb_u4TP_n = VITALDEPOT_DW.M_TP_54;

    /* DataStoreRead: '<S20>/73B-TP' */
    rtb_u3BTP_i = VITALDEPOT_DW.M_TP_73B;

    /* DataStoreRead: '<S20>/RR' */
    rtb_RR_a = VITALDEPOT_DW.M_RR;

    /* DataStoreRead: '<S20>/VDR' */
    rtb_VDR_c = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S20>/APPROACH LOCK' */
  D_AS(VITALDEPOT_M, rtb_TmpSignalConversionAtA_hiki, rtb_FALSE_fj, rtb_L54GRDO,
       rtb_u4TP_n, rtb_u3BTP_i, rtb_RR_a, rtb_VDR_c,
       &VITALDEPOT_B.APPROACHLOCK_e, &VITALDEPOT_DW.APPROACHLOCK_e);

  /* End of Outputs for SubSystem: '<S20>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S20>/L54-S-AS' */
    VITALDEPOT_DW.M_AS_S_L54 = VITALDEPOT_B.APPROACHLOCK_e.AND11;

    /* DataStoreRead: '<S21>/FALSE' */
    rtb_FALSE_n2 = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S21>/TmpSignal ConversionAtAPPROACH LOCKInport1' */
    rtb_TmpSignalConversionAt_hikip = rtb_FALSE_n2;

    /* DataStoreRead: '<S21>/L72-GR-DO' */
    rtb_L72GRDO = VITALDEPOT_DW.DO_L72_GR;

    /* DataStoreRead: '<S21>/72-TP' */
    rtb_u2TP_hs = VITALDEPOT_DW.M_TP_72;

    /* DataStoreRead: '<S21>/73A-TP' */
    rtb_u3ATP = VITALDEPOT_DW.M_TP_73A;

    /* DataStoreRead: '<S21>/RR' */
    rtb_RR_o = VITALDEPOT_DW.M_RR;

    /* DataStoreRead: '<S21>/VDR' */
    rtb_VDR_a = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S21>/APPROACH LOCK' */
  D_AS(VITALDEPOT_M, rtb_TmpSignalConversionAt_hikip, rtb_FALSE_n2, rtb_L72GRDO,
       rtb_u2TP_hs, rtb_u3ATP, rtb_RR_o, rtb_VDR_a, &VITALDEPOT_B.APPROACHLOCK_f,
       &VITALDEPOT_DW.APPROACHLOCK_f);

  /* End of Outputs for SubSystem: '<S21>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S21>/L72-S-AS' */
    VITALDEPOT_DW.M_AS_S_L72 = VITALDEPOT_B.APPROACHLOCK_f.AND11;

    /* DataStoreRead: '<S22>/FALSE' */
    rtb_FALSE_k = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S22>/TmpSignal ConversionAtAPPROACH LOCKInport1' */
    rtb_TmpSignalConversionA_hikipq = rtb_FALSE_k;

    /* DataStoreRead: '<S22>/L74-GR-DO' */
    rtb_L74GRDO = VITALDEPOT_DW.DO_L74_GR;

    /* DataStoreRead: '<S22>/74-TP' */
    rtb_u4TP_g = VITALDEPOT_DW.M_TP_74;

    /* DataStoreRead: '<S22>/73B-TP' */
    rtb_u3BTP_l = VITALDEPOT_DW.M_TP_73B;

    /* DataStoreRead: '<S22>/RR' */
    rtb_RR_j = VITALDEPOT_DW.M_RR;

    /* DataStoreRead: '<S22>/VDR' */
    rtb_VDR_fa = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S22>/APPROACH LOCK' */
  D_AS(VITALDEPOT_M, rtb_TmpSignalConversionA_hikipq, rtb_FALSE_k, rtb_L74GRDO,
       rtb_u4TP_g, rtb_u3BTP_l, rtb_RR_j, rtb_VDR_fa,
       &VITALDEPOT_B.APPROACHLOCK_o, &VITALDEPOT_DW.APPROACHLOCK_o);

  /* End of Outputs for SubSystem: '<S22>/APPROACH LOCK' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S22>/L74-S-AS' */
    VITALDEPOT_DW.M_AS_S_L74 = VITALDEPOT_B.APPROACHLOCK_o.AND11;

    /* DataStoreRead: '<S135>/W13A-SWRLSPB-CTRL' */
    rtb_W13ASWRLSPBCTRL = VITALDEPOT_DW.M_W13A_SWRLSPB_CTRL;

    /* Logic: '<S135>/AND1' incorporates:
     *  DataStoreRead: '<S135>/13-S-ES'
     *  DataStoreRead: '<S135>/13-S-WS'
     */
    rtb_AND1 = (VITALDEPOT_DW.M_S_ES_13 && VITALDEPOT_DW.M_S_WS_13);

    /* DataStoreRead: '<S135>/13-TP' */
    rtb_u3TP_j = VITALDEPOT_DW.M_TP_13;

    /* DataStoreRead: '<S135>/SWRLS' */
    rtb_SWRLS = VITALDEPOT_DW.M_SWRLS;

    /* DataStoreRead: '<S135>/VDR' */
    rtb_VDR_e = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S135>/EMERGENCY POINT RELEASE' */
  D_SWRLS(VITALDEPOT_M, rtb_W13ASWRLSPBCTRL, rtb_AND1, rtb_u3TP_j, rtb_SWRLS,
          rtb_VDR_e, &VITALDEPOT_B.EMERGENCYPOINTRELEASE,
          &VITALDEPOT_DW.EMERGENCYPOINTRELEASE);

  /* End of Outputs for SubSystem: '<S135>/EMERGENCY POINT RELEASE' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S135>/W13A-SWRLS' */
    VITALDEPOT_DW.M_W13A_SWRLS = VITALDEPOT_B.EMERGENCYPOINTRELEASE.AND5;

    /* DataStoreWrite: '<S135>/W13A-TPZ' */
    VITALDEPOT_DW.M_W13A_TPZ = VITALDEPOT_B.EMERGENCYPOINTRELEASE.OR3;

    /* DataStoreRead: '<S136>/W13B//73A-SWRLSPB-CTRL' */
    rtb_W13B73ASWRLSPBCTRL = VITALDEPOT_DW.M_W13B_73A_SWRLSPB_CTRL;

    /* Logic: '<S136>/AND1' incorporates:
     *  DataStoreRead: '<S136>/13-S-ES'
     *  DataStoreRead: '<S136>/13-S-WS'
     *  DataStoreRead: '<S136>/73A-S-ES'
     *  DataStoreRead: '<S136>/73A-S-WS'
     */
    rtb_AND1_d = (VITALDEPOT_DW.M_S_ES_13 && VITALDEPOT_DW.M_S_WS_13 &&
                  VITALDEPOT_DW.M_S_ES_73A && VITALDEPOT_DW.M_S_WS_73A);

    /* Logic: '<S136>/AND2' incorporates:
     *  DataStoreRead: '<S136>/13-TP'
     *  DataStoreRead: '<S136>/73A-TP'
     */
    rtb_AND2 = (VITALDEPOT_DW.M_TP_13 && VITALDEPOT_DW.M_TP_73A);

    /* DataStoreRead: '<S136>/SWRLS' */
    rtb_SWRLS_c = VITALDEPOT_DW.M_SWRLS;

    /* DataStoreRead: '<S136>/VDR' */
    rtb_VDR_cf = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S136>/EMERGENCY POINT RELEASE' */
  D_SWRLS(VITALDEPOT_M, rtb_W13B73ASWRLSPBCTRL, rtb_AND1_d, rtb_AND2,
          rtb_SWRLS_c, rtb_VDR_cf, &VITALDEPOT_B.EMERGENCYPOINTRELEASE_l,
          &VITALDEPOT_DW.EMERGENCYPOINTRELEASE_l);

  /* End of Outputs for SubSystem: '<S136>/EMERGENCY POINT RELEASE' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S136>/W13B//73A-SWRLS' */
    VITALDEPOT_DW.M_W13B_73A_SWRLS = VITALDEPOT_B.EMERGENCYPOINTRELEASE_l.AND5;

    /* DataStoreWrite: '<S136>/W13B//73A-TPZ' */
    VITALDEPOT_DW.M_W13B_73A_TPZ = VITALDEPOT_B.EMERGENCYPOINTRELEASE_l.OR3;

    /* DataStoreRead: '<S137>/W54-SWRLSPB-CTRL' */
    rtb_W54SWRLSPBCTRL = VITALDEPOT_DW.M_W54_SWRLSPB_CTRL;

    /* Logic: '<S137>/AND1' incorporates:
     *  DataStoreRead: '<S137>/73B-S-ES'
     *  DataStoreRead: '<S137>/73B-S-WS'
     */
    rtb_AND1_e = (VITALDEPOT_DW.M_S_ES_73B && VITALDEPOT_DW.M_S_WS_73B);

    /* DataStoreRead: '<S137>/73B-TP' */
    rtb_u3BTP_m = VITALDEPOT_DW.M_TP_73B;

    /* DataStoreRead: '<S137>/SWRLS' */
    rtb_SWRLS_j = VITALDEPOT_DW.M_SWRLS;

    /* DataStoreRead: '<S137>/VDR' */
    rtb_VDR_j = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S137>/EMERGENCY POINT RELEASE' */
  D_SWRLS(VITALDEPOT_M, rtb_W54SWRLSPBCTRL, rtb_AND1_e, rtb_u3BTP_m, rtb_SWRLS_j,
          rtb_VDR_j, &VITALDEPOT_B.EMERGENCYPOINTRELEASE_p,
          &VITALDEPOT_DW.EMERGENCYPOINTRELEASE_p);

  /* End of Outputs for SubSystem: '<S137>/EMERGENCY POINT RELEASE' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S137>/W54-SWRLS' */
    VITALDEPOT_DW.M_W54_SWRLS = VITALDEPOT_B.EMERGENCYPOINTRELEASE_p.AND5;

    /* DataStoreWrite: '<S137>/W54-TPZ' */
    VITALDEPOT_DW.M_W54_TPZ = VITALDEPOT_B.EMERGENCYPOINTRELEASE_p.OR3;

    /* DataStoreRead: '<S138>/W73B-SWRLSPB-CTRL' */
    rtb_W73BSWRLSPBCTRL = VITALDEPOT_DW.M_W73B_SWRLSPB_CTRL;

    /* Logic: '<S138>/AND1' incorporates:
     *  DataStoreRead: '<S138>/73B-S-ES'
     *  DataStoreRead: '<S138>/73B-S-WS'
     */
    rtb_AND1_g = (VITALDEPOT_DW.M_S_ES_73B && VITALDEPOT_DW.M_S_WS_73B);

    /* DataStoreRead: '<S138>/73B-TP' */
    rtb_u3BTP_o = VITALDEPOT_DW.M_TP_73B;

    /* DataStoreRead: '<S138>/SWRLS' */
    rtb_SWRLS_k = VITALDEPOT_DW.M_SWRLS;

    /* DataStoreRead: '<S138>/VDR' */
    rtb_VDR_h = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S138>/EMERGENCY POINT RELEASE' */
  D_SWRLS(VITALDEPOT_M, rtb_W73BSWRLSPBCTRL, rtb_AND1_g, rtb_u3BTP_o,
          rtb_SWRLS_k, rtb_VDR_h, &VITALDEPOT_B.EMERGENCYPOINTRELEASE_b,
          &VITALDEPOT_DW.EMERGENCYPOINTRELEASE_b);

  /* End of Outputs for SubSystem: '<S138>/EMERGENCY POINT RELEASE' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S138>/W73B-SWRLS' */
    VITALDEPOT_DW.M_W73B_SWRLS = VITALDEPOT_B.EMERGENCYPOINTRELEASE_b.AND5;

    /* DataStoreWrite: '<S138>/W73B-TPZ' */
    VITALDEPOT_DW.M_W73B_TPZ = VITALDEPOT_B.EMERGENCYPOINTRELEASE_b.OR3;

    /* DataStoreRead: '<S183>/TRUE' */
    rtb_TRUE = VITALDEPOT_DW.M_GV_TRUE;

    /* SignalConversion: '<S183>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport1' */
    rtb_TmpSignalConversionAtEMERGE = rtb_TRUE;

    /* DataStoreRead: '<S183>/FALSE' */
    rtb_FALSE_a = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S183>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport2' */
    rtb_TmpSignalConversionAtEMER_m = rtb_FALSE_a;

    /* SignalConversion: '<S183>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport3' */
    rtb_TmpSignalConversionAtEMER_p = rtb_TRUE;

    /* Logic: '<S183>/AND1' incorporates:
     *  DataStoreRead: '<S183>/L12-S-AS'
     *  DataStoreRead: '<S183>/L32-S-AS'
     *  DataStoreRead: '<S183>/L72-S-AS'
     */
    rtb_AND1_gm = (VITALDEPOT_DW.M_AS_S_L12 && VITALDEPOT_DW.M_AS_S_L32 &&
                   VITALDEPOT_DW.M_AS_S_L72);

    /* Logic: '<S183>/AND2' incorporates:
     *  DataStoreRead: '<S183>/L12-L14B-S-REQ'
     *  DataStoreRead: '<S183>/L32-L14B-S-REQ'
     *  DataStoreRead: '<S183>/L72-L14B-S-REQ'
     */
    rtb_AND2_m = (VITALDEPOT_DW.M_REQ_S_12_14 || VITALDEPOT_DW.M_REQ_S_32_14 ||
                  VITALDEPOT_DW.M_REQ_S_72_14);

    /* DataStoreRead: '<S183>/13-S-ES' */
    rtb_u3SES_i = VITALDEPOT_DW.M_S_ES_13;

    /* DataStoreRead: '<S183>/L14B-RRLSPB-CTRL' */
    rtb_L14BRRLSPBCTRL = VITALDEPOT_DW.M_RRLSPB_CTRL_L14B;

    /* DataStoreRead: '<S183>/RRLS' */
    rtb_RRLS = VITALDEPOT_DW.M_RRLS;

    /* DataStoreRead: '<S183>/VDR' */
    rtb_VDR_m = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S183>/EMERGENCY ROUTE RELEASE' */
  D_RRLS(VITALDEPOT_M, rtb_TmpSignalConversionAtEMERGE,
         rtb_TmpSignalConversionAtEMER_m, rtb_TmpSignalConversionAtEMER_p,
         rtb_FALSE_a, rtb_AND1_gm, rtb_AND2_m, rtb_u3SES_i, rtb_TRUE,
         rtb_L14BRRLSPBCTRL, rtb_RRLS, rtb_VDR_m,
         &VITALDEPOT_B.EMERGENCYROUTERELEASE,
         &VITALDEPOT_DW.EMERGENCYROUTERELEASE);

  /* End of Outputs for SubSystem: '<S183>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S183>/L14B-RRLS' */
    VITALDEPOT_DW.M_RRLS_L14B = VITALDEPOT_B.EMERGENCYROUTERELEASE.AND1;

    /* DataStoreWrite: '<S183>/L14B-RRLS-TE' */
    VITALDEPOT_DW.M_RRLSTE_L14B = VITALDEPOT_B.EMERGENCYROUTERELEASE.Memory1;

    /* DataStoreRead: '<S184>/TRUE' */
    rtb_TRUE_j = VITALDEPOT_DW.M_GV_TRUE;

    /* SignalConversion: '<S184>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport1' */
    rtb_TmpSignalConversionAtEMER_n = rtb_TRUE_j;

    /* DataStoreRead: '<S184>/FALSE' */
    rtb_FALSE_d = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S184>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport2' */
    rtb_TmpSignalConversionAtEME_m3 = rtb_FALSE_d;

    /* DataStoreRead: '<S184>/L14A-S-AS' */
    rtb_L14ASAS = VITALDEPOT_DW.M_AS_S_L14A;

    /* DataStoreRead: '<S184>/L14A-X12-S-REQ' */
    rtb_L14AX12SREQ = VITALDEPOT_DW.M_REQ_S_14_12;

    /* DataStoreRead: '<S184>/13-S-WS' */
    rtb_u3SWS_j = VITALDEPOT_DW.M_S_WS_13;

    /* Logic: '<S184>/AND4' incorporates:
     *  DataStoreRead: '<S184>/W13A-NWZ'
     *  DataStoreRead: '<S184>/W13B//73A-NWZ'
     */
    rtb_AND4 = (VITALDEPOT_DW.M_W13A_NWZ && VITALDEPOT_DW.M_W13B_73A_NWZ);

    /* DataStoreRead: '<S184>/X12-RRLSPB-CTRL' */
    rtb_X12RRLSPBCTRL = VITALDEPOT_DW.M_RRLSPB_CTRL_X12;

    /* DataStoreRead: '<S184>/RRLS' */
    rtb_RRLS_h = VITALDEPOT_DW.M_RRLS;

    /* DataStoreRead: '<S184>/VDR' */
    rtb_VDR_l = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S184>/EMERGENCY ROUTE RELEASE' */
  D_RRLS(VITALDEPOT_M, rtb_TmpSignalConversionAtEMER_n,
         rtb_TmpSignalConversionAtEME_m3, rtb_TRUE_j, rtb_FALSE_d, rtb_L14ASAS,
         rtb_L14AX12SREQ, rtb_u3SWS_j, rtb_AND4, rtb_X12RRLSPBCTRL, rtb_RRLS_h,
         rtb_VDR_l, &VITALDEPOT_B.EMERGENCYROUTERELEASE_g,
         &VITALDEPOT_DW.EMERGENCYROUTERELEASE_g);

  /* End of Outputs for SubSystem: '<S184>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S184>/X12-RRLS' */
    VITALDEPOT_DW.M_RRLS_X12 = VITALDEPOT_B.EMERGENCYROUTERELEASE_g.AND1;

    /* DataStoreWrite: '<S184>/X12-RRLS-TE' */
    VITALDEPOT_DW.M_RRLSTE_X12 = VITALDEPOT_B.EMERGENCYROUTERELEASE_g.Memory1;

    /* DataStoreRead: '<S185>/TRUE' */
    rtb_TRUE_b = VITALDEPOT_DW.M_GV_TRUE;

    /* SignalConversion: '<S185>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport1' */
    rtb_TmpSignalConversionAtEME_n2 = rtb_TRUE_b;

    /* DataStoreRead: '<S185>/FALSE' */
    rtb_FALSE_c = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S185>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport2' */
    rtb_TmpSignalConversionAtEM_m3f = rtb_FALSE_c;

    /* DataStoreRead: '<S185>/L14A-S-AS' */
    rtb_L14ASAS_h = VITALDEPOT_DW.M_AS_S_L14A;

    /* DataStoreRead: '<S185>/L14A-X32-S-REQ' */
    rtb_L14AX32SREQ = VITALDEPOT_DW.M_REQ_S_14_32;

    /* DataStoreRead: '<S185>/13-S-WS' */
    rtb_u3SWS_h = VITALDEPOT_DW.M_S_WS_13;

    /* Logic: '<S185>/AND4' incorporates:
     *  DataStoreRead: '<S185>/W13A-RWZ'
     *  DataStoreRead: '<S185>/W13B//73A-NWZ'
     */
    rtb_AND4_m = (VITALDEPOT_DW.M_W13A_RWZ && VITALDEPOT_DW.M_W13B_73A_NWZ);

    /* DataStoreRead: '<S185>/X32-RRLSPB-CTRL' */
    rtb_X32RRLSPBCTRL = VITALDEPOT_DW.M_RRLSPB_CTRL_X32;

    /* DataStoreRead: '<S185>/RRLS' */
    rtb_RRLS_o = VITALDEPOT_DW.M_RRLS;

    /* DataStoreRead: '<S185>/VDR' */
    rtb_VDR_k = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S185>/EMERGENCY ROUTE RELEASE' */
  D_RRLS(VITALDEPOT_M, rtb_TmpSignalConversionAtEME_n2,
         rtb_TmpSignalConversionAtEM_m3f, rtb_TRUE_b, rtb_FALSE_c, rtb_L14ASAS_h,
         rtb_L14AX32SREQ, rtb_u3SWS_h, rtb_AND4_m, rtb_X32RRLSPBCTRL, rtb_RRLS_o,
         rtb_VDR_k, &VITALDEPOT_B.EMERGENCYROUTERELEASE_a,
         &VITALDEPOT_DW.EMERGENCYROUTERELEASE_a);

  /* End of Outputs for SubSystem: '<S185>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S185>/X32-RRLS' */
    VITALDEPOT_DW.M_RRLS_X32 = VITALDEPOT_B.EMERGENCYROUTERELEASE_a.AND1;

    /* DataStoreWrite: '<S185>/X32-RRLS-TE' */
    VITALDEPOT_DW.M_RRLSTE_X32 = VITALDEPOT_B.EMERGENCYROUTERELEASE_a.Memory1;

    /* DataStoreRead: '<S186>/TRUE' */
    rtb_TRUE_o = VITALDEPOT_DW.M_GV_TRUE;

    /* SignalConversion: '<S186>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport1' */
    rtb_TmpSignalConversionAtEM_n2n = rtb_TRUE_o;

    /* DataStoreRead: '<S186>/FALSE' */
    rtb_FALSE_fji = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S186>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport2' */
    rtb_TmpSignalConversionAtE_m3fp = rtb_FALSE_fji;

    /* DataStoreRead: '<S186>/L72-S-AS' */
    rtb_L72SAS_n = VITALDEPOT_DW.M_AS_S_L72;

    /* DataStoreRead: '<S186>/L72-X34-S-REQ' */
    rtb_L72X34SREQ = VITALDEPOT_DW.M_REQ_S_72_34;

    /* DataStoreRead: '<S186>/73B-S-ES' */
    rtb_u3BSES_f = VITALDEPOT_DW.M_S_ES_73B;

    /* Logic: '<S186>/AND4' incorporates:
     *  DataStoreRead: '<S186>/W13B//73A-NWZ'
     *  DataStoreRead: '<S186>/W54-RWZ'
     *  DataStoreRead: '<S186>/W73B-RWZ'
     */
    rtb_AND4_b = (VITALDEPOT_DW.M_W54_RWZ && VITALDEPOT_DW.M_W73B_RWZ &&
                  VITALDEPOT_DW.M_W13B_73A_NWZ);

    /* DataStoreRead: '<S186>/X34-RRLSPB-CTRL' */
    rtb_X34RRLSPBCTRL = VITALDEPOT_DW.M_RRLSPB_CTRL_X34;

    /* DataStoreRead: '<S186>/RRLS' */
    rtb_RRLS_o1 = VITALDEPOT_DW.M_RRLS;

    /* DataStoreRead: '<S186>/VDR' */
    rtb_VDR_o = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S186>/EMERGENCY ROUTE RELEASE' */
  D_RRLS(VITALDEPOT_M, rtb_TmpSignalConversionAtEM_n2n,
         rtb_TmpSignalConversionAtE_m3fp, rtb_TRUE_o, rtb_FALSE_fji,
         rtb_L72SAS_n, rtb_L72X34SREQ, rtb_u3BSES_f, rtb_AND4_b,
         rtb_X34RRLSPBCTRL, rtb_RRLS_o1, rtb_VDR_o,
         &VITALDEPOT_B.EMERGENCYROUTERELEASE_k,
         &VITALDEPOT_DW.EMERGENCYROUTERELEASE_k);

  /* End of Outputs for SubSystem: '<S186>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S186>/X34-RRLS' */
    VITALDEPOT_DW.M_RRLS_X34 = VITALDEPOT_B.EMERGENCYROUTERELEASE_k.AND1;

    /* DataStoreWrite: '<S186>/X34-RRLS-TE' */
    VITALDEPOT_DW.M_RRLSTE_X34 = VITALDEPOT_B.EMERGENCYROUTERELEASE_k.Memory1;

    /* DataStoreRead: '<S187>/TRUE' */
    rtb_TRUE_jz = VITALDEPOT_DW.M_GV_TRUE;

    /* SignalConversion: '<S187>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport1' */
    rtb_TmpSignalConversionAtE_n2nj = rtb_TRUE_jz;

    /* DataStoreRead: '<S187>/FALSE' */
    rtb_FALSE_l = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S187>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport2' */
    rtb_TmpSignalConversionAt_m3fpz = rtb_FALSE_l;

    /* DataStoreRead: '<S187>/L72-S-AS' */
    rtb_L72SAS_o = VITALDEPOT_DW.M_AS_S_L72;

    /* DataStoreRead: '<S187>/L72-X54-S-REQ' */
    rtb_L72X54SREQ = VITALDEPOT_DW.M_REQ_S_72_54;

    /* DataStoreRead: '<S187>/73B-S-ES' */
    rtb_u3BSES_b = VITALDEPOT_DW.M_S_ES_73B;

    /* Logic: '<S187>/AND4' incorporates:
     *  DataStoreRead: '<S187>/W13B//73A-NWZ'
     *  DataStoreRead: '<S187>/W54-NWZ'
     *  DataStoreRead: '<S187>/W73B-RWZ'
     */
    rtb_AND4_mc = (VITALDEPOT_DW.M_W54_NWZ && VITALDEPOT_DW.M_W73B_RWZ &&
                   VITALDEPOT_DW.M_W13B_73A_NWZ);

    /* DataStoreRead: '<S187>/X54-RRLSPB-CTRL' */
    rtb_X54RRLSPBCTRL = VITALDEPOT_DW.M_RRLSPB_CTRL_X54;

    /* DataStoreRead: '<S187>/RRLS' */
    rtb_RRLS_hh = VITALDEPOT_DW.M_RRLS;

    /* DataStoreRead: '<S187>/VDR' */
    rtb_VDR_ht = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S187>/EMERGENCY ROUTE RELEASE' */
  D_RRLS(VITALDEPOT_M, rtb_TmpSignalConversionAtE_n2nj,
         rtb_TmpSignalConversionAt_m3fpz, rtb_TRUE_jz, rtb_FALSE_l, rtb_L72SAS_o,
         rtb_L72X54SREQ, rtb_u3BSES_b, rtb_AND4_mc, rtb_X54RRLSPBCTRL,
         rtb_RRLS_hh, rtb_VDR_ht, &VITALDEPOT_B.EMERGENCYROUTERELEASE_c,
         &VITALDEPOT_DW.EMERGENCYROUTERELEASE_c);

  /* End of Outputs for SubSystem: '<S187>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S187>/X54-RRLS' */
    VITALDEPOT_DW.M_RRLS_X54 = VITALDEPOT_B.EMERGENCYROUTERELEASE_c.AND1;

    /* DataStoreWrite: '<S187>/X54-RRLS-TE' */
    VITALDEPOT_DW.M_RRLSTE_X54 = VITALDEPOT_B.EMERGENCYROUTERELEASE_c.Memory1;

    /* DataStoreRead: '<S188>/TRUE' */
    rtb_TRUE_b2 = VITALDEPOT_DW.M_GV_TRUE;

    /* SignalConversion: '<S188>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport1' */
    rtb_TmpSignalConversionAt_n2nj2 = rtb_TRUE_b2;

    /* DataStoreRead: '<S188>/FALSE' */
    rtb_FALSE_dz = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S188>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport2' */
    rtb_TmpSignalConversionA_m3fpzw = rtb_FALSE_dz;

    /* SignalConversion: '<S188>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport3' */
    rtb_TmpSignalConversionAtEME_p5 = rtb_TRUE_b2;

    /* Logic: '<S188>/AND1' incorporates:
     *  DataStoreRead: '<S188>/L14A-S-AS'
     *  DataStoreRead: '<S188>/L34-S-AS'
     *  DataStoreRead: '<S188>/L54-S-AS'
     *  DataStoreRead: '<S188>/L74-S-AS'
     */
    rtb_AND1_l = (VITALDEPOT_DW.M_AS_S_L14A && VITALDEPOT_DW.M_AS_S_L34 &&
                  VITALDEPOT_DW.M_AS_S_L54 && VITALDEPOT_DW.M_AS_S_L74);

    /* Logic: '<S188>/AND2' incorporates:
     *  DataStoreRead: '<S188>/L14A-X72-S-REQ'
     *  DataStoreRead: '<S188>/L34-X72-S-REQ'
     *  DataStoreRead: '<S188>/L54-X72-S-REQ'
     *  DataStoreRead: '<S188>/L74-X72-S-REQ'
     */
    rtb_AND2_d = (VITALDEPOT_DW.M_REQ_S_14_72 || VITALDEPOT_DW.M_REQ_S_34_72 ||
                  VITALDEPOT_DW.M_REQ_S_54_72 || VITALDEPOT_DW.M_REQ_S_74_72);

    /* DataStoreRead: '<S188>/73A-S-WS' */
    rtb_u3ASWS_c = VITALDEPOT_DW.M_S_WS_73A;

    /* DataStoreRead: '<S188>/X72-RRLSPB-CTRL' */
    rtb_X72RRLSPBCTRL = VITALDEPOT_DW.M_RRLSPB_CTRL_X72;

    /* DataStoreRead: '<S188>/RRLS' */
    rtb_RRLS_g = VITALDEPOT_DW.M_RRLS;

    /* DataStoreRead: '<S188>/VDR' */
    rtb_VDR_p = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S188>/EMERGENCY ROUTE RELEASE' */
  D_RRLS(VITALDEPOT_M, rtb_TmpSignalConversionAt_n2nj2,
         rtb_TmpSignalConversionA_m3fpzw, rtb_TmpSignalConversionAtEME_p5,
         rtb_FALSE_dz, rtb_AND1_l, rtb_AND2_d, rtb_u3ASWS_c, rtb_TRUE_b2,
         rtb_X72RRLSPBCTRL, rtb_RRLS_g, rtb_VDR_p,
         &VITALDEPOT_B.EMERGENCYROUTERELEASE_j,
         &VITALDEPOT_DW.EMERGENCYROUTERELEASE_j);

  /* End of Outputs for SubSystem: '<S188>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S188>/X72-RRLS' */
    VITALDEPOT_DW.M_RRLS_X72 = VITALDEPOT_B.EMERGENCYROUTERELEASE_j.AND1;

    /* DataStoreWrite: '<S188>/X72-RRLS-TE' */
    VITALDEPOT_DW.M_RRLSTE_X72 = VITALDEPOT_B.EMERGENCYROUTERELEASE_j.Memory1;

    /* DataStoreRead: '<S189>/TRUE' */
    rtb_TRUE_n = VITALDEPOT_DW.M_GV_TRUE;

    /* SignalConversion: '<S189>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport1' */
    rtb_TmpSignalConversionA_n2nj2k = rtb_TRUE_n;

    /* DataStoreRead: '<S189>/FALSE' */
    rtb_FALSE_n4 = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S189>/TmpSignal ConversionAtEMERGENCY ROUTE RELEASEInport2' */
    rtb_TmpSignalConversion_m3fpzw4 = rtb_FALSE_n4;

    /* DataStoreRead: '<S189>/L72-S-AS' */
    rtb_L72SAS_b = VITALDEPOT_DW.M_AS_S_L72;

    /* DataStoreRead: '<S189>/L72-X74-S-REQ' */
    rtb_L72X74SREQ = VITALDEPOT_DW.M_REQ_S_72_74;

    /* DataStoreRead: '<S189>/73B-S-ES' */
    rtb_u3BSES_a = VITALDEPOT_DW.M_S_ES_73B;

    /* Logic: '<S189>/AND4' incorporates:
     *  DataStoreRead: '<S189>/W13B//73A-NWZ'
     *  DataStoreRead: '<S189>/W73B-NWZ'
     */
    rtb_AND4_j = (VITALDEPOT_DW.M_W73B_NWZ && VITALDEPOT_DW.M_W13B_73A_NWZ);

    /* DataStoreRead: '<S189>/X74-RRLSPB-CTRL' */
    rtb_X74RRLSPBCTRL = VITALDEPOT_DW.M_RRLSPB_CTRL_X74;

    /* DataStoreRead: '<S189>/RRLS' */
    rtb_RRLS_p = VITALDEPOT_DW.M_RRLS;

    /* DataStoreRead: '<S189>/VDR' */
    rtb_VDR_jv = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S189>/EMERGENCY ROUTE RELEASE' */
  D_RRLS(VITALDEPOT_M, rtb_TmpSignalConversionA_n2nj2k,
         rtb_TmpSignalConversion_m3fpzw4, rtb_TRUE_n, rtb_FALSE_n4, rtb_L72SAS_b,
         rtb_L72X74SREQ, rtb_u3BSES_a, rtb_AND4_j, rtb_X74RRLSPBCTRL, rtb_RRLS_p,
         rtb_VDR_jv, &VITALDEPOT_B.EMERGENCYROUTERELEASE_ah,
         &VITALDEPOT_DW.EMERGENCYROUTERELEASE_ah);

  /* End of Outputs for SubSystem: '<S189>/EMERGENCY ROUTE RELEASE' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S189>/X74-RRLS' */
    VITALDEPOT_DW.M_RRLS_X74 = VITALDEPOT_B.EMERGENCYROUTERELEASE_ah.AND1;

    /* DataStoreWrite: '<S189>/X74-RRLS-TE' */
    VITALDEPOT_DW.M_RRLSTE_X74 = VITALDEPOT_B.EMERGENCYROUTERELEASE_ah.Memory1;

    /* DataStoreRead: '<S272>/L12-L14B-S-L' */
    rtb_L12L14BSL = VITALDEPOT_DW.M_L_S_12_14;

    /* DataStoreRead: '<S272>/L12-L14B-RS' */
    rtb_L12L14BRS = VITALDEPOT_DW.M_RS_12_14;

    /* Outputs for Atomic SubSystem: '<S272>/AS_SR' */
    D_AS_SR(rtb_L12L14BSL, rtb_L12L14BRS, &VITALDEPOT_B.AS_SR);

    /* End of Outputs for SubSystem: '<S272>/AS_SR' */

    /* DataStoreWrite: '<S272>/L12-L14B-S-AS-SR' */
    VITALDEPOT_DW.M_AS_SR_S_12_14 = VITALDEPOT_B.AS_SR.AND1;

    /* DataStoreRead: '<S273>/L14A-X12-S-L' */
    rtb_L14AX12SL = VITALDEPOT_DW.M_L_S_14_12;

    /* DataStoreRead: '<S273>/L14A-X12-RS' */
    rtb_L14AX12RS = VITALDEPOT_DW.M_RS_14_12;

    /* Outputs for Atomic SubSystem: '<S273>/AS_SR' */
    D_AS_SR(rtb_L14AX12SL, rtb_L14AX12RS, &VITALDEPOT_B.AS_SR_e);

    /* End of Outputs for SubSystem: '<S273>/AS_SR' */

    /* DataStoreWrite: '<S273>/L14A-X12-S-AS-SR' */
    VITALDEPOT_DW.M_AS_SR_S_14_12 = VITALDEPOT_B.AS_SR_e.AND1;

    /* DataStoreRead: '<S274>/L14A-X32-S-L' */
    rtb_L14AX32SL = VITALDEPOT_DW.M_L_S_14_32;

    /* DataStoreRead: '<S274>/L14A-X32-RS' */
    rtb_L14AX32RS = VITALDEPOT_DW.M_RS_14_32;

    /* Outputs for Atomic SubSystem: '<S274>/AS_SR' */
    D_AS_SR(rtb_L14AX32SL, rtb_L14AX32RS, &VITALDEPOT_B.AS_SR_d);

    /* End of Outputs for SubSystem: '<S274>/AS_SR' */

    /* DataStoreWrite: '<S274>/L14A-X32-S-AS-SR' */
    VITALDEPOT_DW.M_AS_SR_S_14_32 = VITALDEPOT_B.AS_SR_d.AND1;

    /* DataStoreRead: '<S275>/L14A-X72-S-L' */
    rtb_L14AX72SL = VITALDEPOT_DW.M_L_S_14_72;

    /* DataStoreRead: '<S275>/L14A-X72-RS' */
    rtb_L14AX72RS = VITALDEPOT_DW.M_RS_14_72;

    /* Outputs for Atomic SubSystem: '<S275>/AS_SR' */
    D_AS_SR(rtb_L14AX72SL, rtb_L14AX72RS, &VITALDEPOT_B.AS_SR_a);

    /* End of Outputs for SubSystem: '<S275>/AS_SR' */

    /* DataStoreWrite: '<S275>/L14A-X72-S-AS-SR' */
    VITALDEPOT_DW.M_AS_SR_S_14_72 = VITALDEPOT_B.AS_SR_a.AND1;

    /* DataStoreRead: '<S276>/L32-L14B-S-L' */
    rtb_L32L14BSL = VITALDEPOT_DW.M_L_S_32_14;

    /* DataStoreRead: '<S276>/L32-L14B-RS' */
    rtb_L32L14BRS = VITALDEPOT_DW.M_RS_32_14;

    /* Outputs for Atomic SubSystem: '<S276>/AS_SR' */
    D_AS_SR(rtb_L32L14BSL, rtb_L32L14BRS, &VITALDEPOT_B.AS_SR_i);

    /* End of Outputs for SubSystem: '<S276>/AS_SR' */

    /* DataStoreWrite: '<S276>/L32-L14B-S-AS-SR' */
    VITALDEPOT_DW.M_AS_SR_S_32_14 = VITALDEPOT_B.AS_SR_i.AND1;

    /* DataStoreRead: '<S277>/L34-X72-S-L' */
    rtb_L34X72SL = VITALDEPOT_DW.M_L_S_34_72;

    /* DataStoreRead: '<S277>/L34-X72-RS' */
    rtb_L34X72RS = VITALDEPOT_DW.M_RS_34_72;

    /* Outputs for Atomic SubSystem: '<S277>/AS_SR' */
    D_AS_SR(rtb_L34X72SL, rtb_L34X72RS, &VITALDEPOT_B.AS_SR_g);

    /* End of Outputs for SubSystem: '<S277>/AS_SR' */

    /* DataStoreWrite: '<S277>/L34-X72-S-AS-SR' */
    VITALDEPOT_DW.M_AS_SR_S_34_72 = VITALDEPOT_B.AS_SR_g.AND1;

    /* DataStoreRead: '<S278>/L54-X72-S-L' */
    rtb_L54X72SL = VITALDEPOT_DW.M_L_S_54_72;

    /* DataStoreRead: '<S278>/L54-X72-RS' */
    rtb_L54X72RS = VITALDEPOT_DW.M_RS_54_72;

    /* Outputs for Atomic SubSystem: '<S278>/AS_SR' */
    D_AS_SR(rtb_L54X72SL, rtb_L54X72RS, &VITALDEPOT_B.AS_SR_b);

    /* End of Outputs for SubSystem: '<S278>/AS_SR' */

    /* DataStoreWrite: '<S278>/L54-X72-S-AS-SR' */
    VITALDEPOT_DW.M_AS_SR_S_54_72 = VITALDEPOT_B.AS_SR_b.AND1;

    /* DataStoreRead: '<S279>/L72-L14B-S-L' */
    rtb_L72L14BSL = VITALDEPOT_DW.M_L_S_72_14;

    /* DataStoreRead: '<S279>/L72-L14B-RS' */
    rtb_L72L14BRS = VITALDEPOT_DW.M_RS_72_14;

    /* Outputs for Atomic SubSystem: '<S279>/AS_SR' */
    D_AS_SR(rtb_L72L14BSL, rtb_L72L14BRS, &VITALDEPOT_B.AS_SR_m);

    /* End of Outputs for SubSystem: '<S279>/AS_SR' */

    /* DataStoreWrite: '<S279>/L72-L14B-S-AS-SR' */
    VITALDEPOT_DW.M_AS_SR_S_72_14 = VITALDEPOT_B.AS_SR_m.AND1;

    /* DataStoreRead: '<S280>/L72-X34-S-L' */
    rtb_L72X34SL = VITALDEPOT_DW.M_L_S_72_34;

    /* DataStoreRead: '<S280>/L72-X34-RS' */
    rtb_L72X34RS = VITALDEPOT_DW.M_RS_72_34;

    /* Outputs for Atomic SubSystem: '<S280>/AS_SR' */
    D_AS_SR(rtb_L72X34SL, rtb_L72X34RS, &VITALDEPOT_B.AS_SR_e4);

    /* End of Outputs for SubSystem: '<S280>/AS_SR' */

    /* DataStoreWrite: '<S280>/L72-X34-S-AS-SR' */
    VITALDEPOT_DW.M_AS_SR_S_72_34 = VITALDEPOT_B.AS_SR_e4.AND1;

    /* DataStoreRead: '<S281>/L72-X54-S-L' */
    rtb_L72X54SL = VITALDEPOT_DW.M_L_S_72_54;

    /* DataStoreRead: '<S281>/L72-X54-RS' */
    rtb_L72X54RS = VITALDEPOT_DW.M_RS_72_54;

    /* Outputs for Atomic SubSystem: '<S281>/AS_SR' */
    D_AS_SR(rtb_L72X54SL, rtb_L72X54RS, &VITALDEPOT_B.AS_SR_f);

    /* End of Outputs for SubSystem: '<S281>/AS_SR' */

    /* DataStoreWrite: '<S281>/L72-X54-S-AS-SR' */
    VITALDEPOT_DW.M_AS_SR_S_72_54 = VITALDEPOT_B.AS_SR_f.AND1;

    /* DataStoreRead: '<S282>/L72-X74-S-L' */
    rtb_L72X74SL = VITALDEPOT_DW.M_L_S_72_74;

    /* DataStoreRead: '<S282>/L72-X74-RS' */
    rtb_L72X74RS = VITALDEPOT_DW.M_RS_72_74;

    /* Outputs for Atomic SubSystem: '<S282>/AS_SR' */
    D_AS_SR(rtb_L72X74SL, rtb_L72X74RS, &VITALDEPOT_B.AS_SR_ip);

    /* End of Outputs for SubSystem: '<S282>/AS_SR' */

    /* DataStoreWrite: '<S282>/L72-X74-S-AS-SR' */
    VITALDEPOT_DW.M_AS_SR_S_72_74 = VITALDEPOT_B.AS_SR_ip.AND1;

    /* DataStoreRead: '<S283>/L74-X72-S-L' */
    rtb_L74X72SL = VITALDEPOT_DW.M_L_S_74_72;

    /* DataStoreRead: '<S283>/L74-X72-RS' */
    rtb_L74X72RS = VITALDEPOT_DW.M_RS_74_72;

    /* Outputs for Atomic SubSystem: '<S283>/AS_SR' */
    D_AS_SR(rtb_L74X72SL, rtb_L74X72RS, &VITALDEPOT_B.AS_SR_ec);

    /* End of Outputs for SubSystem: '<S283>/AS_SR' */

    /* DataStoreWrite: '<S283>/L74-X72-S-AS-SR' */
    VITALDEPOT_DW.M_AS_SR_S_74_72 = VITALDEPOT_B.AS_SR_ec.AND1;

    /* DataStoreWrite: '<S296>/13-S-ES-RL' incorporates:
     *  DataStoreRead: '<S296>/L12-L14B-AS-SR'
     *  DataStoreRead: '<S296>/L12-L14B-S'
     *  DataStoreRead: '<S296>/L12-S-AS'
     *  DataStoreRead: '<S296>/L32-L14B-AS-SR'
     *  DataStoreRead: '<S296>/L32-L14B-S'
     *  DataStoreRead: '<S296>/L32-S-AS'
     *  Logic: '<S296>/NOT2'
     *  Logic: '<S296>/NOT3'
     *  Logic: '<S296>/NOT5'
     *  Logic: '<S296>/NOT6'
     *  Logic: '<S296>/OR2'
     */
    VITALDEPOT_DW.M_RL_S_ES_13 = (VITALDEPOT_DW.M_AS_S_L12 &&
      VITALDEPOT_DW.M_AS_S_L32 && (!VITALDEPOT_DW.M_R_S_12_14) &&
      (!VITALDEPOT_DW.M_R_S_32_14) && (!VITALDEPOT_DW.M_AS_SR_S_12_14) &&
      (!VITALDEPOT_DW.M_AS_SR_S_32_14));

    /* DataStoreWrite: '<S297>/13-S-WS-RL' incorporates:
     *  DataStoreRead: '<S297>/L14A-T-AS'
     *  DataStoreRead: '<S297>/L14A-X12-AS-SR'
     *  DataStoreRead: '<S297>/L14A-X12-S'
     *  DataStoreRead: '<S297>/L14A-X32-AS-SR'
     *  DataStoreRead: '<S297>/L14A-X32-S'
     *  DataStoreRead: '<S297>/L14A-X72-AS-SR'
     *  DataStoreRead: '<S297>/L14A-X72-S'
     *  Logic: '<S297>/NOT1'
     *  Logic: '<S297>/NOT2'
     *  Logic: '<S297>/NOT3'
     *  Logic: '<S297>/NOT5'
     *  Logic: '<S297>/NOT6'
     *  Logic: '<S297>/NOT7'
     *  Logic: '<S297>/OR2'
     */
    VITALDEPOT_DW.M_RL_S_WS_13 = (VITALDEPOT_DW.M_AS_S_L14A &&
      (!VITALDEPOT_DW.M_R_S_14_12) && (!VITALDEPOT_DW.M_R_S_14_32) &&
      (!VITALDEPOT_DW.M_R_S_14_72) && (!VITALDEPOT_DW.M_AS_SR_S_14_12) &&
      (!VITALDEPOT_DW.M_AS_SR_S_14_32) && (!VITALDEPOT_DW.M_AS_SR_S_14_72));

    /* DataStoreWrite: '<S298>/73A-S-ES-RL' incorporates:
     *  DataStoreRead: '<S298>/L72-L14B-AS-SR'
     *  DataStoreRead: '<S298>/L72-L14B-S'
     *  DataStoreRead: '<S298>/L72-T-AS'
     *  DataStoreRead: '<S298>/L72-X34-AS-SR'
     *  DataStoreRead: '<S298>/L72-X34-S'
     *  DataStoreRead: '<S298>/L72-X54-AS-SR'
     *  DataStoreRead: '<S298>/L72-X54-S'
     *  DataStoreRead: '<S298>/L72-X74-AS-SR'
     *  DataStoreRead: '<S298>/L72-X74-S'
     *  Logic: '<S298>/NOT1'
     *  Logic: '<S298>/NOT2'
     *  Logic: '<S298>/NOT3'
     *  Logic: '<S298>/NOT4'
     *  Logic: '<S298>/NOT5'
     *  Logic: '<S298>/NOT6'
     *  Logic: '<S298>/NOT7'
     *  Logic: '<S298>/NOT8'
     *  Logic: '<S298>/OR2'
     */
    VITALDEPOT_DW.M_RL_S_ES_73A = (VITALDEPOT_DW.M_AS_S_L72 &&
      (!VITALDEPOT_DW.M_R_S_72_14) && (!VITALDEPOT_DW.M_R_S_72_34) &&
      (!VITALDEPOT_DW.M_R_S_72_54) && (!VITALDEPOT_DW.M_R_S_72_74) &&
      (!VITALDEPOT_DW.M_AS_SR_S_72_14) && (!VITALDEPOT_DW.M_AS_SR_S_72_34) &&
      (!VITALDEPOT_DW.M_AS_SR_S_72_54) && (!VITALDEPOT_DW.M_AS_SR_S_72_74));

    /* DataStoreWrite: '<S299>/73B-S-WS-RL' incorporates:
     *  DataStoreRead: '<S299>/L34-S-AS'
     *  DataStoreRead: '<S299>/L34-X72-AS-SR'
     *  DataStoreRead: '<S299>/L34-X72-S'
     *  DataStoreRead: '<S299>/L54-S-AS'
     *  DataStoreRead: '<S299>/L54-X72-AS-SR'
     *  DataStoreRead: '<S299>/L54-X72-S'
     *  DataStoreRead: '<S299>/L74-S-AS'
     *  DataStoreRead: '<S299>/L74-X72-AS-SR'
     *  DataStoreRead: '<S299>/L74-X72-S'
     *  Logic: '<S299>/NOT2'
     *  Logic: '<S299>/NOT3'
     *  Logic: '<S299>/NOT4'
     *  Logic: '<S299>/NOT5'
     *  Logic: '<S299>/NOT6'
     *  Logic: '<S299>/NOT7'
     *  Logic: '<S299>/OR2'
     */
    VITALDEPOT_DW.M_RL_S_WS_73B = (VITALDEPOT_DW.M_AS_S_L34 &&
      VITALDEPOT_DW.M_AS_S_L54 && VITALDEPOT_DW.M_AS_S_L74 &&
      (!VITALDEPOT_DW.M_R_S_34_72) && (!VITALDEPOT_DW.M_R_S_54_72) &&
      (!VITALDEPOT_DW.M_R_S_74_72) && (!VITALDEPOT_DW.M_AS_SR_S_34_72) &&
      (!VITALDEPOT_DW.M_AS_SR_S_54_72) && (!VITALDEPOT_DW.M_AS_SR_S_74_72));

    /* DataStoreRead: '<S300>/L14B-RRLS-TE-FROM1' */
    rtb_L14BRRLSTEFROM1 = VITALDEPOT_DW.M_RRLSTE_L14B;

    /* Outputs for Atomic SubSystem: '<S300>/D_RRLS5' */
    D_RRLS1(rtb_L14BRRLSTEFROM1, &VITALDEPOT_B.D_RRLS5);

    /* End of Outputs for SubSystem: '<S300>/D_RRLS5' */

    /* DataStoreRead: '<S300>/X12-RRLS-TE-FROM1' */
    rtb_X12RRLSTEFROM1 = VITALDEPOT_DW.M_RRLSTE_X12;

    /* DataStoreRead: '<S300>/W13A-NWZ-FROM1' */
    rtb_W13ANWZFROM1 = VITALDEPOT_DW.M_W13A_NWZ;

    /* DataStoreRead: '<S300>/W13B//73A-NWZ-FROM1' */
    rtb_W13B73ANWZFROM1 = VITALDEPOT_DW.M_W13B_73A_NWZ;

    /* Outputs for Atomic SubSystem: '<S300>/D_RRLS7' */
    D_RRLS3(rtb_X12RRLSTEFROM1, rtb_W13ANWZFROM1, rtb_W13B73ANWZFROM1,
            &VITALDEPOT_B.D_RRLS7);

    /* End of Outputs for SubSystem: '<S300>/D_RRLS7' */

    /* DataStoreRead: '<S300>/X32-RRLS-TE-FROM1' */
    rtb_X32RRLSTEFROM1 = VITALDEPOT_DW.M_RRLSTE_X32;

    /* DataStoreRead: '<S300>/W13A-RWZ-FROM1' */
    rtb_W13ARWZFROM1 = VITALDEPOT_DW.M_W13A_RWZ;

    /* Outputs for Atomic SubSystem: '<S300>/D_RRLS1' */
    D_RRLS3(rtb_X32RRLSTEFROM1, rtb_W13ARWZFROM1, rtb_W13B73ANWZFROM1,
            &VITALDEPOT_B.D_RRLS1_j);

    /* End of Outputs for SubSystem: '<S300>/D_RRLS1' */

    /* DataStoreRead: '<S300>/X72-RRLS-TE-FROM1' */
    rtb_X72RRLSTEFROM1 = VITALDEPOT_DW.M_RRLSTE_X72;

    /* DataStoreRead: '<S300>/W13B//73A-RWZ-FROM1' */
    rtb_W13B73ARWZFROM1 = VITALDEPOT_DW.M_W13B_73A_RWZ;

    /* Outputs for Atomic SubSystem: '<S300>/D_RRLS6' */
    D_RRLS2(rtb_X72RRLSTEFROM1, rtb_W13B73ARWZFROM1, &VITALDEPOT_B.D_RRLS6);

    /* End of Outputs for SubSystem: '<S300>/D_RRLS6' */

    /* DataStoreWrite: '<S300>/13-RLS' incorporates:
     *  Logic: '<S300>/OR1'
     */
    VITALDEPOT_DW.M_RLS_13 = (VITALDEPOT_B.D_RRLS5.RRLSTE ||
      VITALDEPOT_B.D_RRLS7.AND1 || VITALDEPOT_B.D_RRLS1_j.AND1 ||
      VITALDEPOT_B.D_RRLS6.AND1);

    /* DataStoreRead: '<S301>/X72-RRLS-TE-FROM1' */
    rtb_X72RRLSTEFROM1_b = VITALDEPOT_DW.M_RRLSTE_X72;

    /* Outputs for Atomic SubSystem: '<S301>/D_RRLS5' */
    D_RRLS1(rtb_X72RRLSTEFROM1_b, &VITALDEPOT_B.D_RRLS5_j);

    /* End of Outputs for SubSystem: '<S301>/D_RRLS5' */

    /* DataStoreRead: '<S301>/L14B-RRLS-TE-FROM1' */
    rtb_L14BRRLSTEFROM1_f = VITALDEPOT_DW.M_RRLSTE_L14B;

    /* DataStoreRead: '<S301>/W13B//73A-RWZ-FROM1' */
    rtb_W13B73ARWZFROM1_j = VITALDEPOT_DW.M_W13B_73A_RWZ;

    /* Outputs for Atomic SubSystem: '<S301>/D_RRLS6' */
    D_RRLS2(rtb_L14BRRLSTEFROM1_f, rtb_W13B73ARWZFROM1_j,
            &VITALDEPOT_B.D_RRLS6_l);

    /* End of Outputs for SubSystem: '<S301>/D_RRLS6' */

    /* DataStoreRead: '<S301>/X74-RRLS-TE-FROM1' */
    rtb_X74RRLSTEFROM1 = VITALDEPOT_DW.M_RRLSTE_X74;

    /* DataStoreRead: '<S301>/W13B//73A-NWZ-FROM1' */
    rtb_W13B73ANWZFROM1_m = VITALDEPOT_DW.M_W13B_73A_NWZ;

    /* DataStoreRead: '<S301>/W73B-NWZ-FROM1' */
    rtb_W73BNWZFROM1 = VITALDEPOT_DW.M_W73B_NWZ;

    /* Outputs for Atomic SubSystem: '<S301>/D_RRLS1' */
    D_RRLS3(rtb_X74RRLSTEFROM1, rtb_W13B73ANWZFROM1_m, rtb_W73BNWZFROM1,
            &VITALDEPOT_B.D_RRLS1_k);

    /* End of Outputs for SubSystem: '<S301>/D_RRLS1' */

    /* DataStoreRead: '<S301>/X34-RRLS-TE-FROM1' */
    rtb_X34RRLSTEFROM1 = VITALDEPOT_DW.M_RRLSTE_X34;

    /* DataStoreRead: '<S301>/W73B-RWZ-FROM1' */
    rtb_W73BRWZFROM1 = VITALDEPOT_DW.M_W73B_RWZ;

    /* DataStoreRead: '<S301>/W54-RWZ-FROM1' */
    rtb_W54RWZFROM1 = VITALDEPOT_DW.M_W54_RWZ;

    /* Outputs for Atomic SubSystem: '<S301>/D_RRLS2' */
    D_RRLS_4(rtb_X34RRLSTEFROM1, rtb_W13B73ANWZFROM1_m, rtb_W73BRWZFROM1,
             rtb_W54RWZFROM1, &VITALDEPOT_B.D_RRLS2_m);

    /* End of Outputs for SubSystem: '<S301>/D_RRLS2' */

    /* DataStoreRead: '<S301>/X54-RRLS-TE-FROM1' */
    rtb_X54RRLSTEFROM1 = VITALDEPOT_DW.M_RRLSTE_X54;

    /* DataStoreRead: '<S301>/W54-NWZ-FROM1' */
    rtb_W54NWZFROM1 = VITALDEPOT_DW.M_W54_NWZ;

    /* Outputs for Atomic SubSystem: '<S301>/D_RRLS8' */
    D_RRLS_4(rtb_X54RRLSTEFROM1, rtb_W13B73ANWZFROM1_m, rtb_W54RWZFROM1,
             rtb_W54NWZFROM1, &VITALDEPOT_B.D_RRLS8);

    /* End of Outputs for SubSystem: '<S301>/D_RRLS8' */

    /* DataStoreWrite: '<S301>/73A-RLS' incorporates:
     *  Logic: '<S301>/OR1'
     */
    VITALDEPOT_DW.M_RLS_73A = (VITALDEPOT_B.D_RRLS5_j.RRLSTE ||
      VITALDEPOT_B.D_RRLS6_l.AND1 || VITALDEPOT_B.D_RRLS1_k.AND1 ||
      VITALDEPOT_B.D_RRLS2_m.AND1 || VITALDEPOT_B.D_RRLS8.AND1);

    /* DataStoreRead: '<S302>/X72-RRLS-TE-FROM1' */
    rtb_X72RRLSTEFROM1_d = VITALDEPOT_DW.M_RRLSTE_X72;

    /* Outputs for Atomic SubSystem: '<S302>/D_RRLS5' */
    D_RRLS1(rtb_X72RRLSTEFROM1_d, &VITALDEPOT_B.D_RRLS5_m);

    /* End of Outputs for SubSystem: '<S302>/D_RRLS5' */

    /* DataStoreRead: '<S302>/X74-RRLS-TE-FROM1' */
    rtb_X74RRLSTEFROM1_o = VITALDEPOT_DW.M_RRLSTE_X74;

    /* DataStoreRead: '<S302>/W73B-NWZ-FROM1' */
    rtb_W73BNWZFROM1_j = VITALDEPOT_DW.M_W73B_NWZ;

    /* Outputs for Atomic SubSystem: '<S302>/D_RRLS6' */
    D_RRLS2(rtb_X74RRLSTEFROM1_o, rtb_W73BNWZFROM1_j, &VITALDEPOT_B.D_RRLS6_o);

    /* End of Outputs for SubSystem: '<S302>/D_RRLS6' */

    /* DataStoreRead: '<S302>/X34-RRLS-TE-FROM1' */
    rtb_X34RRLSTEFROM1_i = VITALDEPOT_DW.M_RRLSTE_X34;

    /* DataStoreRead: '<S302>/W73B-RWZ-FROM1' */
    rtb_W73BRWZFROM1_c = VITALDEPOT_DW.M_W73B_RWZ;

    /* DataStoreRead: '<S302>/W54-RWZ-FROM1' */
    rtb_W54RWZFROM1_h = VITALDEPOT_DW.M_W54_RWZ;

    /* Outputs for Atomic SubSystem: '<S302>/D_RRLS1' */
    D_RRLS3(rtb_X34RRLSTEFROM1_i, rtb_W73BRWZFROM1_c, rtb_W54RWZFROM1_h,
            &VITALDEPOT_B.D_RRLS1_g);

    /* End of Outputs for SubSystem: '<S302>/D_RRLS1' */

    /* DataStoreRead: '<S302>/X54-RRLS-TE-FROM1' */
    rtb_X54RRLSTEFROM1_p = VITALDEPOT_DW.M_RRLSTE_X54;

    /* DataStoreRead: '<S302>/W54-NWZ-FROM1' */
    rtb_W54NWZFROM1_j = VITALDEPOT_DW.M_W54_NWZ;

    /* Outputs for Atomic SubSystem: '<S302>/D_RRLS2' */
    D_RRLS3(rtb_X54RRLSTEFROM1_p, rtb_W73BRWZFROM1_c, rtb_W54NWZFROM1_j,
            &VITALDEPOT_B.D_RRLS2_o);

    /* End of Outputs for SubSystem: '<S302>/D_RRLS2' */

    /* DataStoreWrite: '<S302>/73B-RLS' incorporates:
     *  Logic: '<S302>/OR1'
     */
    VITALDEPOT_DW.M_RLS_73B = (VITALDEPOT_B.D_RRLS5_m.RRLSTE ||
      VITALDEPOT_B.D_RRLS6_o.AND1 || VITALDEPOT_B.D_RRLS1_g.AND1 ||
      VITALDEPOT_B.D_RRLS2_o.AND1);

    /* DataStoreWrite: '<S270>/RRLS-DEP' incorporates:
     *  DataStoreRead: '<S270>/L14A-RRLS'
     *  DataStoreRead: '<S270>/L14B-RRLS'
     *  DataStoreRead: '<S270>/X12-RRLS'
     *  DataStoreRead: '<S270>/X32-RRLS'
     *  DataStoreRead: '<S270>/X34-RRLS'
     *  DataStoreRead: '<S270>/X54-RRLS'
     *  DataStoreRead: '<S270>/X72-RRLS'
     *  DataStoreRead: '<S270>/X74-RRLS'
     *  Logic: '<S270>/OR1'
     */
    VITALDEPOT_DW.M_RRLS_DEP = (VITALDEPOT_DW.M_RRLS_X12 ||
      VITALDEPOT_DW.M_RRLS_X32 || VITALDEPOT_DW.M_RRLS_X72 ||
      VITALDEPOT_DW.M_RRLS_X34 || VITALDEPOT_DW.M_RRLS_X54 ||
      VITALDEPOT_DW.M_RRLS_X74 || VITALDEPOT_DW.M_RRLS_L14A ||
      VITALDEPOT_DW.M_RRLS_L14B);

    /* DataStoreWrite: '<S271>/SWRLS-DEP' incorporates:
     *  DataStoreRead: '<S271>/W13A-SWRLS'
     *  DataStoreRead: '<S271>/W13B_73A-SWRLS'
     *  DataStoreRead: '<S271>/W54-SWRLS'
     *  DataStoreRead: '<S271>/W73B-SWRLS'
     *  Logic: '<S271>/OR1'
     */
    VITALDEPOT_DW.M_SWRLS_DEP = (VITALDEPOT_DW.M_W13A_SWRLS ||
      VITALDEPOT_DW.M_W13B_73A_SWRLS || VITALDEPOT_DW.M_W54_SWRLS ||
      VITALDEPOT_DW.M_W73B_SWRLS);

    /* DataStoreRead: '<S316>/W13A-NWP-DI' */
    rtb_W13ANWPDI = VITALDEPOT_DW.DI_NWP_W13A;

    /* DataStoreRead: '<S316>/W13A-RWP-DI' */
    rtb_W13ARWPDI = VITALDEPOT_DW.DI_RWP_W13A;

    /* DataStoreRead: '<S316>/W13A-OOC' */
    rtb_W13AOOC = VITALDEPOT_DW.M_W13A_OOC;

    /* DataStoreRead: '<S316>/W13A-L' */
    VITALDEPOT_B.W13AL = VITALDEPOT_DW.M_W13A_L;

    /* DataStoreRead: '<S316>/W13A-N-REQ' */
    rtb_W13ANREQ = VITALDEPOT_DW.M_W13A_N_REQ;

    /* DataStoreRead: '<S316>/W13A-R-REQ' */
    rtb_W13ARREQ = VITALDEPOT_DW.M_W13A_R_REQ;

    /* DataStoreRead: '<S316>/13-TP' */
    rtb_u3TP_o = VITALDEPOT_DW.M_TP_13;

    /* Logic: '<S316>/AND1' incorporates:
     *  DataStoreRead: '<S316>/W13A-TPZ'
     *  DataStoreRead: '<S316>/W13B//73A-TPZ'
     */
    rtb_AND1_di = (VITALDEPOT_DW.M_W13A_TPZ && VITALDEPOT_DW.M_W13B_73A_TPZ);

    /* DataStoreRead: '<S316>/VDR' */
    VITALDEPOT_B.VDR = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S316>/POINT CONTROL' */
  D_SW_CTRL(VITALDEPOT_M, rtb_W13ANWPDI, rtb_W13ARWPDI, rtb_W13AOOC,
            VITALDEPOT_B.W13AL, rtb_W13ANREQ, rtb_W13ARREQ, rtb_u3TP_o,
            rtb_AND1_di, VITALDEPOT_B.VDR, &VITALDEPOT_B.POINTCONTROL,
            &VITALDEPOT_DW.POINTCONTROL);

  /* End of Outputs for SubSystem: '<S316>/POINT CONTROL' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S316>/W13A-LS' */
    VITALDEPOT_DW.M_W13A_LS = VITALDEPOT_B.POINTCONTROL.Memory3;

    /* DataStoreWrite: '<S316>/W13A-NW-TE' incorporates:
     *  SignalConversion: '<S316>/TmpSignal ConversionAtPOINT CONTROLOutport11'
     */
    VITALDEPOT_DW.M_W13A_NW_TE =
      VITALDEPOT_B.POINTCONTROL.DV_TON_a.LogicalOperator2;

    /* DataStoreWrite: '<S316>/W13A-NWC' */
    VITALDEPOT_DW.M_W13A_NWC = VITALDEPOT_B.POINTCONTROL.AND7;

    /* DataStoreWrite: '<S316>/W13A-NWP' */
    VITALDEPOT_DW.M_W13A_NWP = VITALDEPOT_B.POINTCONTROL.AND1;

    /* DataStoreWrite: '<S316>/W13A-NWR-DO' incorporates:
     *  SignalConversion: '<S316>/TmpSignal ConversionAtPOINT CONTROLOutport8'
     */
    VITALDEPOT_DW.DO_NWR_W13A = VITALDEPOT_B.POINTCONTROL.AND22;

    /* DataStoreWrite: '<S316>/W13A-NWZ' */
    VITALDEPOT_DW.M_W13A_NWZ = VITALDEPOT_B.POINTCONTROL.Memory1;

    /* DataStoreWrite: '<S316>/W13A-RW-TE' incorporates:
     *  SignalConversion: '<S316>/TmpSignal ConversionAtPOINT CONTROLOutport12'
     */
    VITALDEPOT_DW.M_W13A_RW_TE =
      VITALDEPOT_B.POINTCONTROL.DV_TON1.LogicalOperator2;

    /* DataStoreWrite: '<S316>/W13A-RWC' */
    VITALDEPOT_DW.M_W13A_RWC = VITALDEPOT_B.POINTCONTROL.AND8;

    /* DataStoreWrite: '<S316>/W13A-RWP' */
    VITALDEPOT_DW.M_W13A_RWP = VITALDEPOT_B.POINTCONTROL.AND2;

    /* DataStoreWrite: '<S316>/W13A-RWR-DO' incorporates:
     *  SignalConversion: '<S316>/TmpSignal ConversionAtPOINT CONTROLOutport9'
     */
    VITALDEPOT_DW.DO_RWR_W13A = VITALDEPOT_B.POINTCONTROL.AND23;

    /* DataStoreWrite: '<S316>/W13A-RWZ' */
    VITALDEPOT_DW.M_W13A_RWZ = VITALDEPOT_B.POINTCONTROL.Memory2;

    /* DataStoreWrite: '<S316>/W13A-WLPR-DO' incorporates:
     *  SignalConversion: '<S316>/TmpSignal ConversionAtPOINT CONTROLOutport10'
     */
    VITALDEPOT_DW.DO_WLPR_W13A = VITALDEPOT_B.POINTCONTROL.AND24;

    /* DataStoreRead: '<S317>/W13B//73A-NWP-DI' */
    rtb_W13B73ANWPDI = VITALDEPOT_DW.DI_NWP_W13B_73A;

    /* DataStoreRead: '<S317>/W13B//73A-RWP-DI' */
    rtb_W13B73ARWPDI = VITALDEPOT_DW.DI_RWP_W13B_73A;

    /* DataStoreRead: '<S317>/W13B//73A-OOC' */
    rtb_W13B73AOOC = VITALDEPOT_DW.M_W13B_73A_OOC;

    /* DataStoreRead: '<S317>/W13B//73A-L' */
    VITALDEPOT_B.W13B73AL = VITALDEPOT_DW.M_W13B_73A_L;

    /* DataStoreRead: '<S317>/W13B//73A-N-REQ' */
    rtb_W13B73ANREQ = VITALDEPOT_DW.M_W13B_73A_N_REQ;

    /* DataStoreRead: '<S317>/W13B//73A-R-REQ' */
    rtb_W13B73ARREQ = VITALDEPOT_DW.M_W13B_73A_R_REQ;

    /* Logic: '<S317>/AND2' incorporates:
     *  DataStoreRead: '<S317>/13-TP'
     *  DataStoreRead: '<S317>/73A-TP'
     */
    rtb_AND2_k = (VITALDEPOT_DW.M_TP_13 && VITALDEPOT_DW.M_TP_73A);

    /* Logic: '<S317>/AND1' incorporates:
     *  DataStoreRead: '<S317>/W13A-TPZ'
     *  DataStoreRead: '<S317>/W13B//73A-TPZ'
     */
    rtb_AND1_ef = (VITALDEPOT_DW.M_W13A_TPZ && VITALDEPOT_DW.M_W13B_73A_TPZ);

    /* DataStoreRead: '<S317>/VDR' */
    VITALDEPOT_B.VDR_f = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S317>/POINT CONTROL' */
  D_SW_CTRL(VITALDEPOT_M, rtb_W13B73ANWPDI, rtb_W13B73ARWPDI, rtb_W13B73AOOC,
            VITALDEPOT_B.W13B73AL, rtb_W13B73ANREQ, rtb_W13B73ARREQ, rtb_AND2_k,
            rtb_AND1_ef, VITALDEPOT_B.VDR_f, &VITALDEPOT_B.POINTCONTROL_b,
            &VITALDEPOT_DW.POINTCONTROL_b);

  /* End of Outputs for SubSystem: '<S317>/POINT CONTROL' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S317>/W13B//73A-LS' */
    VITALDEPOT_DW.M_W13B_73A_LS = VITALDEPOT_B.POINTCONTROL_b.Memory3;

    /* DataStoreWrite: '<S317>/W13B//73A-NW-TE' incorporates:
     *  SignalConversion: '<S317>/TmpSignal ConversionAtPOINT CONTROLOutport11'
     */
    VITALDEPOT_DW.M_W13B_73A_NW_TE =
      VITALDEPOT_B.POINTCONTROL_b.DV_TON_a.LogicalOperator2;

    /* DataStoreWrite: '<S317>/W13B//73A-NWC' */
    VITALDEPOT_DW.M_W13B_73A_NWC = VITALDEPOT_B.POINTCONTROL_b.AND7;

    /* DataStoreWrite: '<S317>/W13B//73A-NWP' */
    VITALDEPOT_DW.M_W13B_73A_NWP = VITALDEPOT_B.POINTCONTROL_b.AND1;

    /* DataStoreWrite: '<S317>/W13B//73A-NWR-DO' incorporates:
     *  SignalConversion: '<S317>/TmpSignal ConversionAtPOINT CONTROLOutport8'
     */
    VITALDEPOT_DW.DO_NWR_W13B_73A = VITALDEPOT_B.POINTCONTROL_b.AND22;

    /* DataStoreWrite: '<S317>/W13B//73A-NWZ' */
    VITALDEPOT_DW.M_W13B_73A_NWZ = VITALDEPOT_B.POINTCONTROL_b.Memory1;

    /* DataStoreWrite: '<S317>/W13B//73A-RW-TE' incorporates:
     *  SignalConversion: '<S317>/TmpSignal ConversionAtPOINT CONTROLOutport12'
     */
    VITALDEPOT_DW.M_W13B_73A_RW_TE =
      VITALDEPOT_B.POINTCONTROL_b.DV_TON1.LogicalOperator2;

    /* DataStoreWrite: '<S317>/W13B//73A-RWC' */
    VITALDEPOT_DW.M_W13B_73A_RWC = VITALDEPOT_B.POINTCONTROL_b.AND8;

    /* DataStoreWrite: '<S317>/W13B//73A-RWP' */
    VITALDEPOT_DW.M_W13B_73A_RWP = VITALDEPOT_B.POINTCONTROL_b.AND2;

    /* DataStoreWrite: '<S317>/W13B//73A-RWR-DO' incorporates:
     *  SignalConversion: '<S317>/TmpSignal ConversionAtPOINT CONTROLOutport9'
     */
    VITALDEPOT_DW.DO_RWR_W13B_73A = VITALDEPOT_B.POINTCONTROL_b.AND23;

    /* DataStoreWrite: '<S317>/W13B//73A-RWZ' */
    VITALDEPOT_DW.M_W13B_73A_RWZ = VITALDEPOT_B.POINTCONTROL_b.Memory2;

    /* DataStoreWrite: '<S317>/W13B//73A-WLPR-DO' incorporates:
     *  SignalConversion: '<S317>/TmpSignal ConversionAtPOINT CONTROLOutport10'
     */
    VITALDEPOT_DW.DO_WLPR_W13B_73A = VITALDEPOT_B.POINTCONTROL_b.AND24;

    /* DataStoreRead: '<S318>/W54-NWP-DI' */
    rtb_W54NWPDI = VITALDEPOT_DW.DI_NWP_W54;

    /* DataStoreRead: '<S318>/W54-RWP-DI' */
    rtb_W54RWPDI = VITALDEPOT_DW.DI_RWP_W54;

    /* DataStoreRead: '<S318>/W54-OOC' */
    rtb_W54OOC = VITALDEPOT_DW.M_W54_OOC;

    /* DataStoreRead: '<S318>/W54-L' */
    VITALDEPOT_B.W54L = VITALDEPOT_DW.M_W54_L;

    /* DataStoreRead: '<S318>/W54-N-REQ' */
    rtb_W54NREQ = VITALDEPOT_DW.M_W54_N_REQ;

    /* DataStoreRead: '<S318>/W54-R-REQ' */
    rtb_W54RREQ = VITALDEPOT_DW.M_W54_R_REQ;

    /* DataStoreRead: '<S318>/73B-TP' */
    rtb_u3BTP_e = VITALDEPOT_DW.M_TP_73B;

    /* Logic: '<S318>/AND1' incorporates:
     *  DataStoreRead: '<S318>/W54-TPZ'
     *  DataStoreRead: '<S318>/W73BTPZ'
     */
    rtb_AND1_o = (VITALDEPOT_DW.M_W54_TPZ && VITALDEPOT_DW.M_W73B_TPZ);

    /* DataStoreRead: '<S318>/VDR' */
    VITALDEPOT_B.VDR_e = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S318>/POINT CONTROL' */
  D_SW_CTRL(VITALDEPOT_M, rtb_W54NWPDI, rtb_W54RWPDI, rtb_W54OOC,
            VITALDEPOT_B.W54L, rtb_W54NREQ, rtb_W54RREQ, rtb_u3BTP_e, rtb_AND1_o,
            VITALDEPOT_B.VDR_e, &VITALDEPOT_B.POINTCONTROL_m,
            &VITALDEPOT_DW.POINTCONTROL_m);

  /* End of Outputs for SubSystem: '<S318>/POINT CONTROL' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S318>/W54-LS' */
    VITALDEPOT_DW.M_W54_LS = VITALDEPOT_B.POINTCONTROL_m.Memory3;

    /* DataStoreWrite: '<S318>/W54-NW-TE' incorporates:
     *  SignalConversion: '<S318>/TmpSignal ConversionAtPOINT CONTROLOutport11'
     */
    VITALDEPOT_DW.M_W54_NW_TE =
      VITALDEPOT_B.POINTCONTROL_m.DV_TON_a.LogicalOperator2;

    /* DataStoreWrite: '<S318>/W54-NWC' */
    VITALDEPOT_DW.M_W54_NWC = VITALDEPOT_B.POINTCONTROL_m.AND7;

    /* DataStoreWrite: '<S318>/W54-NWP' */
    VITALDEPOT_DW.M_W54_NWP = VITALDEPOT_B.POINTCONTROL_m.AND1;

    /* DataStoreWrite: '<S318>/W54-NWR-DO' incorporates:
     *  SignalConversion: '<S318>/TmpSignal ConversionAtPOINT CONTROLOutport8'
     */
    VITALDEPOT_DW.DO_NWR_W54 = VITALDEPOT_B.POINTCONTROL_m.AND22;

    /* DataStoreWrite: '<S318>/W54-NWZ' */
    VITALDEPOT_DW.M_W54_NWZ = VITALDEPOT_B.POINTCONTROL_m.Memory1;

    /* DataStoreWrite: '<S318>/W54-RW-TE' incorporates:
     *  SignalConversion: '<S318>/TmpSignal ConversionAtPOINT CONTROLOutport12'
     */
    VITALDEPOT_DW.M_W54_RW_TE =
      VITALDEPOT_B.POINTCONTROL_m.DV_TON1.LogicalOperator2;

    /* DataStoreWrite: '<S318>/W54-RWC' */
    VITALDEPOT_DW.M_W54_RWC = VITALDEPOT_B.POINTCONTROL_m.AND8;

    /* DataStoreWrite: '<S318>/W54-RWP' */
    VITALDEPOT_DW.M_W54_RWP = VITALDEPOT_B.POINTCONTROL_m.AND2;

    /* DataStoreWrite: '<S318>/W54-RWR-DO' incorporates:
     *  SignalConversion: '<S318>/TmpSignal ConversionAtPOINT CONTROLOutport9'
     */
    VITALDEPOT_DW.DO_RWR_W54 = VITALDEPOT_B.POINTCONTROL_m.AND23;

    /* DataStoreWrite: '<S318>/W54-RWZ' */
    VITALDEPOT_DW.M_W54_RWZ = VITALDEPOT_B.POINTCONTROL_m.Memory2;

    /* DataStoreWrite: '<S318>/W54-WLPR-DO' incorporates:
     *  SignalConversion: '<S318>/TmpSignal ConversionAtPOINT CONTROLOutport10'
     */
    VITALDEPOT_DW.DO_WLPR_W54 = VITALDEPOT_B.POINTCONTROL_m.AND24;

    /* DataStoreRead: '<S319>/W73B-NWP-DI' */
    rtb_W73BNWPDI = VITALDEPOT_DW.DI_NWP_W73B;

    /* DataStoreRead: '<S319>/W73B-RWP-DI' */
    rtb_W73BRWPDI = VITALDEPOT_DW.DI_RWP_W73B;

    /* DataStoreRead: '<S319>/W73B-OOC' */
    rtb_W73BOOC = VITALDEPOT_DW.M_W73B_OOC;

    /* DataStoreRead: '<S319>/W73B-L' */
    VITALDEPOT_B.W73BL = VITALDEPOT_DW.M_W73B_L;

    /* DataStoreRead: '<S319>/W73B-N-REQ' */
    rtb_W73BNREQ = VITALDEPOT_DW.M_W73B_N_REQ;

    /* DataStoreRead: '<S319>/W73B-R-REQ' */
    rtb_W73BRREQ = VITALDEPOT_DW.M_W73B_R_REQ;

    /* DataStoreRead: '<S319>/73B-TP' */
    rtb_u3BTP_io = VITALDEPOT_DW.M_TP_73B;

    /* Logic: '<S319>/AND1' incorporates:
     *  DataStoreRead: '<S319>/W54-TPZ'
     *  DataStoreRead: '<S319>/W73BTPZ'
     */
    rtb_AND1_p = (VITALDEPOT_DW.M_W54_TPZ && VITALDEPOT_DW.M_W73B_TPZ);

    /* DataStoreRead: '<S319>/VDR' */
    VITALDEPOT_B.VDR_h = VITALDEPOT_DW.M_VDR;
  }

  /* Outputs for Atomic SubSystem: '<S319>/POINT CONTROL' */
  D_SW_CTRL(VITALDEPOT_M, rtb_W73BNWPDI, rtb_W73BRWPDI, rtb_W73BOOC,
            VITALDEPOT_B.W73BL, rtb_W73BNREQ, rtb_W73BRREQ, rtb_u3BTP_io,
            rtb_AND1_p, VITALDEPOT_B.VDR_h, &VITALDEPOT_B.POINTCONTROL_d,
            &VITALDEPOT_DW.POINTCONTROL_d);

  /* End of Outputs for SubSystem: '<S319>/POINT CONTROL' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S319>/W73B-LS' */
    VITALDEPOT_DW.M_W73B_LS = VITALDEPOT_B.POINTCONTROL_d.Memory3;

    /* DataStoreWrite: '<S319>/W73B-NW-TE' incorporates:
     *  SignalConversion: '<S319>/TmpSignal ConversionAtPOINT CONTROLOutport11'
     */
    VITALDEPOT_DW.M_W73B_NW_TE =
      VITALDEPOT_B.POINTCONTROL_d.DV_TON_a.LogicalOperator2;

    /* DataStoreWrite: '<S319>/W73B-NWC' */
    VITALDEPOT_DW.M_W73B_NWC = VITALDEPOT_B.POINTCONTROL_d.AND7;

    /* DataStoreWrite: '<S319>/W73B-NWP' */
    VITALDEPOT_DW.M_W73B_NWP = VITALDEPOT_B.POINTCONTROL_d.AND1;

    /* DataStoreWrite: '<S319>/W73B-NWR-DO' incorporates:
     *  SignalConversion: '<S319>/TmpSignal ConversionAtPOINT CONTROLOutport8'
     */
    VITALDEPOT_DW.DO_NWR_W73B = VITALDEPOT_B.POINTCONTROL_d.AND22;

    /* DataStoreWrite: '<S319>/W73B-NWZ' */
    VITALDEPOT_DW.M_W73B_NWZ = VITALDEPOT_B.POINTCONTROL_d.Memory1;

    /* DataStoreWrite: '<S319>/W73B-RW-TE' incorporates:
     *  SignalConversion: '<S319>/TmpSignal ConversionAtPOINT CONTROLOutport12'
     */
    VITALDEPOT_DW.M_W73B_RW_TE =
      VITALDEPOT_B.POINTCONTROL_d.DV_TON1.LogicalOperator2;

    /* DataStoreWrite: '<S319>/W73B-RWC' */
    VITALDEPOT_DW.M_W73B_RWC = VITALDEPOT_B.POINTCONTROL_d.AND8;

    /* DataStoreWrite: '<S319>/W73B-RWP' */
    VITALDEPOT_DW.M_W73B_RWP = VITALDEPOT_B.POINTCONTROL_d.AND2;

    /* DataStoreWrite: '<S319>/W73B-RWR-DO' incorporates:
     *  SignalConversion: '<S319>/TmpSignal ConversionAtPOINT CONTROLOutport9'
     */
    VITALDEPOT_DW.DO_RWR_W73B = VITALDEPOT_B.POINTCONTROL_d.AND23;

    /* DataStoreWrite: '<S319>/W73B-RWZ' */
    VITALDEPOT_DW.M_W73B_RWZ = VITALDEPOT_B.POINTCONTROL_d.Memory2;

    /* DataStoreWrite: '<S319>/W73B-WLPR-DO' incorporates:
     *  SignalConversion: '<S319>/TmpSignal ConversionAtPOINT CONTROLOutport10'
     */
    VITALDEPOT_DW.DO_WLPR_W73B = VITALDEPOT_B.POINTCONTROL_d.AND24;

    /* DataStoreRead: '<S404>/TRUE' */
    rtb_TRUE_nr = VITALDEPOT_DW.M_GV_TRUE;

    /* SignalConversion: '<S404>/TmpSignal ConversionAtPOINT LOCKInport1' */
    rtb_TmpSignalConversionAtPOINTL = rtb_TRUE_nr;

    /* SignalConversion: '<S404>/TmpSignal ConversionAtPOINT LOCKInport2' */
    rtb_TmpSignalConversionAtPOIN_l = rtb_TRUE_nr;

    /* DataStoreRead: '<S404>/13-S-ES' */
    rtb_u3SES_ec = VITALDEPOT_DW.M_S_ES_13;

    /* SignalConversion: '<S404>/TmpSignal ConversionAtPOINT LOCKInport4' */
    rtb_TmpSignalConversionAtPOIN_g = rtb_TRUE_nr;

    /* SignalConversion: '<S404>/TmpSignal ConversionAtPOINT LOCKInport5' */
    rtb_TmpSignalConversionAtPOIN_a = rtb_TRUE_nr;

    /* DataStoreRead: '<S404>/13-S-WS' */
    rtb_u3SWS_c = VITALDEPOT_DW.M_S_WS_13;

    /* SignalConversion: '<S404>/TmpSignal ConversionAtPOINT LOCKInport7' */
    rtb_TmpSignalConversionAtPOIN_f = rtb_TRUE_nr;

    /* DataStoreRead: '<S404>/13-TP' */
    rtb_u3TP_c = VITALDEPOT_DW.M_TP_13;

    /* Logic: '<S404>/AND1' incorporates:
     *  DataStoreRead: '<S404>/W13A-TPZ'
     *  DataStoreRead: '<S404>/W13B//73A-TPZ'
     */
    rtb_AND1_n = (VITALDEPOT_DW.M_W13A_TPZ && VITALDEPOT_DW.M_W13B_73A_TPZ);

    /* Outputs for Atomic SubSystem: '<S404>/POINT LOCK' */
    D_SW_L(rtb_TmpSignalConversionAtPOINTL, rtb_TmpSignalConversionAtPOIN_l,
           rtb_u3SES_ec, rtb_TmpSignalConversionAtPOIN_g,
           rtb_TmpSignalConversionAtPOIN_a, rtb_u3SWS_c,
           rtb_TmpSignalConversionAtPOIN_f, rtb_TRUE_nr, rtb_u3TP_c, rtb_AND1_n,
           &VITALDEPOT_B.POINTLOCK);

    /* End of Outputs for SubSystem: '<S404>/POINT LOCK' */

    /* DataStoreWrite: '<S404>/W13A-L' */
    VITALDEPOT_DW.M_W13A_L = VITALDEPOT_B.POINTLOCK.AND1;

    /* DataStoreRead: '<S405>/TRUE' */
    rtb_TRUE_l = VITALDEPOT_DW.M_GV_TRUE;

    /* SignalConversion: '<S405>/TmpSignal ConversionAtPOINT LOCKInport1' */
    rtb_TmpSignalConversionAtPOIN_p = rtb_TRUE_l;

    /* SignalConversion: '<S405>/TmpSignal ConversionAtPOINT LOCKInport2' */
    rtb_TmpSignalConversionAtPOI_lj = rtb_TRUE_l;

    /* Logic: '<S405>/AND2' incorporates:
     *  DataStoreRead: '<S405>/13-S-ES'
     *  DataStoreRead: '<S405>/73A-S-ES'
     */
    rtb_AND2_l = (VITALDEPOT_DW.M_S_ES_13 && VITALDEPOT_DW.M_S_ES_73A);

    /* SignalConversion: '<S405>/TmpSignal ConversionAtPOINT LOCKInport4' */
    rtb_TmpSignalConversionAtPOI_gh = rtb_TRUE_l;

    /* SignalConversion: '<S405>/TmpSignal ConversionAtPOINT LOCKInport5' */
    rtb_TmpSignalConversionAtPOI_a1 = rtb_TRUE_l;

    /* Logic: '<S405>/AND4' incorporates:
     *  DataStoreRead: '<S405>/13-S-WS'
     *  DataStoreRead: '<S405>/73A-S-WS'
     */
    rtb_AND4_p = (VITALDEPOT_DW.M_S_WS_13 && VITALDEPOT_DW.M_S_WS_73A);

    /* SignalConversion: '<S405>/TmpSignal ConversionAtPOINT LOCKInport7' */
    rtb_TmpSignalConversionAtPOI_fe = rtb_TRUE_l;

    /* Logic: '<S405>/AND5' incorporates:
     *  DataStoreRead: '<S405>/13-TP'
     *  DataStoreRead: '<S405>/73A-TP'
     */
    rtb_AND5 = (VITALDEPOT_DW.M_TP_13 && VITALDEPOT_DW.M_TP_73A);

    /* Logic: '<S405>/AND1' incorporates:
     *  DataStoreRead: '<S405>/W13A-TPZ'
     *  DataStoreRead: '<S405>/W13B//73A-TPZ'
     */
    rtb_AND1_gz = (VITALDEPOT_DW.M_W13A_TPZ && VITALDEPOT_DW.M_W13B_73A_TPZ);

    /* Outputs for Atomic SubSystem: '<S405>/POINT LOCK' */
    D_SW_L(rtb_TmpSignalConversionAtPOIN_p, rtb_TmpSignalConversionAtPOI_lj,
           rtb_AND2_l, rtb_TmpSignalConversionAtPOI_gh,
           rtb_TmpSignalConversionAtPOI_a1, rtb_AND4_p,
           rtb_TmpSignalConversionAtPOI_fe, rtb_TRUE_l, rtb_AND5, rtb_AND1_gz,
           &VITALDEPOT_B.POINTLOCK_p);

    /* End of Outputs for SubSystem: '<S405>/POINT LOCK' */

    /* DataStoreWrite: '<S405>/W13B//73A-L' */
    VITALDEPOT_DW.M_W13B_73A_L = VITALDEPOT_B.POINTLOCK_p.AND1;

    /* DataStoreRead: '<S406>/TRUE' */
    rtb_TRUE_i = VITALDEPOT_DW.M_GV_TRUE;

    /* SignalConversion: '<S406>/TmpSignal ConversionAtPOINT LOCKInport1' */
    rtb_TmpSignalConversionAtPOI_pq = rtb_TRUE_i;

    /* SignalConversion: '<S406>/TmpSignal ConversionAtPOINT LOCKInport2' */
    rtb_TmpSignalConversionAtPO_ljf = rtb_TRUE_i;

    /* DataStoreRead: '<S406>/73B-S-ES' */
    rtb_u3BSES_a4 = VITALDEPOT_DW.M_S_ES_73B;

    /* SignalConversion: '<S406>/TmpSignal ConversionAtPOINT LOCKInport4' */
    rtb_TmpSignalConversionAtPO_ghw = rtb_TRUE_i;

    /* SignalConversion: '<S406>/TmpSignal ConversionAtPOINT LOCKInport5' */
    rtb_TmpSignalConversionAtPO_a1a = rtb_TRUE_i;

    /* DataStoreRead: '<S406>/73B-S-WS' */
    rtb_u3BSWS_b = VITALDEPOT_DW.M_S_WS_73B;

    /* SignalConversion: '<S406>/TmpSignal ConversionAtPOINT LOCKInport7' */
    rtb_TmpSignalConversionAtPO_fee = rtb_TRUE_i;

    /* DataStoreRead: '<S406>/73B-TP' */
    rtb_u3BTP_d = VITALDEPOT_DW.M_TP_73B;

    /* Logic: '<S406>/AND1' incorporates:
     *  DataStoreRead: '<S406>/W54-TPZ'
     *  DataStoreRead: '<S406>/W73BTPZ'
     */
    rtb_AND1_j = (VITALDEPOT_DW.M_W54_TPZ && VITALDEPOT_DW.M_W73B_TPZ);

    /* Outputs for Atomic SubSystem: '<S406>/POINT LOCK' */
    D_SW_L(rtb_TmpSignalConversionAtPOI_pq, rtb_TmpSignalConversionAtPO_ljf,
           rtb_u3BSES_a4, rtb_TmpSignalConversionAtPO_ghw,
           rtb_TmpSignalConversionAtPO_a1a, rtb_u3BSWS_b,
           rtb_TmpSignalConversionAtPO_fee, rtb_TRUE_i, rtb_u3BTP_d, rtb_AND1_j,
           &VITALDEPOT_B.POINTLOCK_c);

    /* End of Outputs for SubSystem: '<S406>/POINT LOCK' */

    /* DataStoreWrite: '<S406>/W54-L' */
    VITALDEPOT_DW.M_W54_L = VITALDEPOT_B.POINTLOCK_c.AND1;

    /* DataStoreRead: '<S407>/TRUE' */
    rtb_TRUE_a = VITALDEPOT_DW.M_GV_TRUE;

    /* SignalConversion: '<S407>/TmpSignal ConversionAtPOINT LOCKInport1' */
    rtb_TmpSignalConversionAtPO_pqp = rtb_TRUE_a;

    /* SignalConversion: '<S407>/TmpSignal ConversionAtPOINT LOCKInport2' */
    rtb_TmpSignalConversionAtP_ljfq = rtb_TRUE_a;

    /* DataStoreRead: '<S407>/73B-S-ES' */
    rtb_u3BSES_o = VITALDEPOT_DW.M_S_ES_73B;

    /* SignalConversion: '<S407>/TmpSignal ConversionAtPOINT LOCKInport4' */
    rtb_TmpSignalConversionAtP_ghwz = rtb_TRUE_a;

    /* SignalConversion: '<S407>/TmpSignal ConversionAtPOINT LOCKInport5' */
    rtb_TmpSignalConversionAtP_a1a5 = rtb_TRUE_a;

    /* DataStoreRead: '<S407>/73B-S-WS' */
    rtb_u3BSWS_h = VITALDEPOT_DW.M_S_WS_73B;

    /* SignalConversion: '<S407>/TmpSignal ConversionAtPOINT LOCKInport7' */
    rtb_TmpSignalConversionAtP_feeu = rtb_TRUE_a;

    /* DataStoreRead: '<S407>/73B-TP' */
    rtb_u3BTP_f = VITALDEPOT_DW.M_TP_73B;

    /* Logic: '<S407>/AND1' incorporates:
     *  DataStoreRead: '<S407>/W54-TPZ'
     *  DataStoreRead: '<S407>/W73BTPZ'
     */
    rtb_AND1_pi = (VITALDEPOT_DW.M_W54_TPZ && VITALDEPOT_DW.M_W73B_TPZ);

    /* Outputs for Atomic SubSystem: '<S407>/POINT LOCK' */
    D_SW_L(rtb_TmpSignalConversionAtPO_pqp, rtb_TmpSignalConversionAtP_ljfq,
           rtb_u3BSES_o, rtb_TmpSignalConversionAtP_ghwz,
           rtb_TmpSignalConversionAtP_a1a5, rtb_u3BSWS_h,
           rtb_TmpSignalConversionAtP_feeu, rtb_TRUE_a, rtb_u3BTP_f, rtb_AND1_pi,
           &VITALDEPOT_B.POINTLOCK_l);

    /* End of Outputs for SubSystem: '<S407>/POINT LOCK' */

    /* DataStoreWrite: '<S407>/W73B-L' */
    VITALDEPOT_DW.M_W73B_L = VITALDEPOT_B.POINTLOCK_l.AND1;

    /* DataStoreRead: '<S412>/L12-L14B-REQ' */
    rtb_L12L14BREQ = VITALDEPOT_DW.M_REQ_S_12_14;

    /* DataStoreRead: '<S412>/L12-L14B-S-L' */
    rtb_L12L14BSL_j = VITALDEPOT_DW.M_L_S_12_14;

    /* Outputs for Atomic SubSystem: '<S412>/ROUTE CHECK' */
    D_H_D_S(rtb_L12L14BREQ, rtb_L12L14BSL_j, &VITALDEPOT_B.ROUTECHECK);

    /* End of Outputs for SubSystem: '<S412>/ROUTE CHECK' */

    /* DataStoreWrite: '<S412>/L12-L14B-S' */
    VITALDEPOT_DW.M_R_S_12_14 = VITALDEPOT_B.ROUTECHECK.AND2;

    /* DataStoreRead: '<S413>/L14A-X12-REQ' */
    rtb_L14AX12REQ = VITALDEPOT_DW.M_REQ_S_14_12;

    /* DataStoreRead: '<S413>/L14A-X12-S-L' */
    rtb_L14AX12SL_g = VITALDEPOT_DW.M_L_S_14_12;

    /* Outputs for Atomic SubSystem: '<S413>/ROUTE CHECK' */
    D_H_D_S(rtb_L14AX12REQ, rtb_L14AX12SL_g, &VITALDEPOT_B.ROUTECHECK_f);

    /* End of Outputs for SubSystem: '<S413>/ROUTE CHECK' */

    /* DataStoreWrite: '<S413>/L14A-X12-D' */
    VITALDEPOT_DW.M_R_S_14_12 = VITALDEPOT_B.ROUTECHECK_f.AND2;

    /* DataStoreRead: '<S414>/L14A-X32-REQ' */
    rtb_L14AX32REQ = VITALDEPOT_DW.M_REQ_S_14_32;

    /* DataStoreRead: '<S414>/L14A-X32-S-L' */
    rtb_L14AX32SL_g = VITALDEPOT_DW.M_L_S_14_32;

    /* Outputs for Atomic SubSystem: '<S414>/ROUTE CHECK' */
    D_H_D_S(rtb_L14AX32REQ, rtb_L14AX32SL_g, &VITALDEPOT_B.ROUTECHECK_l);

    /* End of Outputs for SubSystem: '<S414>/ROUTE CHECK' */

    /* DataStoreWrite: '<S414>/L14A-X32-D' */
    VITALDEPOT_DW.M_R_S_14_32 = VITALDEPOT_B.ROUTECHECK_l.AND2;

    /* DataStoreRead: '<S415>/L14A-X72-REQ' */
    rtb_L14AX72REQ = VITALDEPOT_DW.M_REQ_S_14_72;

    /* DataStoreRead: '<S415>/L14A-X72-S-L' */
    rtb_L14AX72SL_d = VITALDEPOT_DW.M_L_S_14_72;

    /* Outputs for Atomic SubSystem: '<S415>/ROUTE CHECK' */
    D_H_D_S(rtb_L14AX72REQ, rtb_L14AX72SL_d, &VITALDEPOT_B.ROUTECHECK_h);

    /* End of Outputs for SubSystem: '<S415>/ROUTE CHECK' */

    /* DataStoreWrite: '<S415>/L14A-X72-D' */
    VITALDEPOT_DW.M_R_S_14_72 = VITALDEPOT_B.ROUTECHECK_h.AND2;

    /* DataStoreRead: '<S416>/L32-L14B-REQ' */
    rtb_L32L14BREQ = VITALDEPOT_DW.M_REQ_S_32_14;

    /* DataStoreRead: '<S416>/L32-L14B-S-L' */
    rtb_L32L14BSL_h = VITALDEPOT_DW.M_L_S_32_14;

    /* Outputs for Atomic SubSystem: '<S416>/ROUTE CHECK' */
    D_H_D_S(rtb_L32L14BREQ, rtb_L32L14BSL_h, &VITALDEPOT_B.ROUTECHECK_p);

    /* End of Outputs for SubSystem: '<S416>/ROUTE CHECK' */

    /* DataStoreWrite: '<S416>/L32-L14B-D' */
    VITALDEPOT_DW.M_R_S_32_14 = VITALDEPOT_B.ROUTECHECK_p.AND2;

    /* DataStoreRead: '<S417>/L34A-X72-REQ' */
    rtb_L34AX72REQ = VITALDEPOT_DW.M_REQ_S_34_72;

    /* DataStoreRead: '<S417>/L34A-X72-S-L' */
    rtb_L34AX72SL = VITALDEPOT_DW.M_L_S_34_72;

    /* Outputs for Atomic SubSystem: '<S417>/ROUTE CHECK' */
    D_H_D_S(rtb_L34AX72REQ, rtb_L34AX72SL, &VITALDEPOT_B.ROUTECHECK_o);

    /* End of Outputs for SubSystem: '<S417>/ROUTE CHECK' */

    /* DataStoreWrite: '<S417>/L34-X72-D' */
    VITALDEPOT_DW.M_R_S_34_72 = VITALDEPOT_B.ROUTECHECK_o.AND2;

    /* DataStoreRead: '<S418>/L54A-X72-REQ' */
    rtb_L54AX72REQ = VITALDEPOT_DW.M_REQ_S_54_72;

    /* DataStoreRead: '<S418>/L54A-X72-S-L' */
    rtb_L54AX72SL = VITALDEPOT_DW.M_L_S_54_72;

    /* Outputs for Atomic SubSystem: '<S418>/ROUTE CHECK' */
    D_H_D_S(rtb_L54AX72REQ, rtb_L54AX72SL, &VITALDEPOT_B.ROUTECHECK_m);

    /* End of Outputs for SubSystem: '<S418>/ROUTE CHECK' */

    /* DataStoreWrite: '<S418>/L54A-X72-D' */
    VITALDEPOT_DW.M_R_S_54_72 = VITALDEPOT_B.ROUTECHECK_m.AND2;

    /* DataStoreRead: '<S419>/L72-L14B-REQ' */
    rtb_L72L14BREQ = VITALDEPOT_DW.M_REQ_S_72_14;

    /* DataStoreRead: '<S419>/L72-L14B-S-L' */
    rtb_L72L14BSL_e = VITALDEPOT_DW.M_L_S_72_14;

    /* Outputs for Atomic SubSystem: '<S419>/ROUTE CHECK' */
    D_H_D_S(rtb_L72L14BREQ, rtb_L72L14BSL_e, &VITALDEPOT_B.ROUTECHECK_i);

    /* End of Outputs for SubSystem: '<S419>/ROUTE CHECK' */

    /* DataStoreWrite: '<S419>/L72-L14B-D' */
    VITALDEPOT_DW.M_R_S_72_14 = VITALDEPOT_B.ROUTECHECK_i.AND2;

    /* DataStoreRead: '<S420>/L72-X34-REQ' */
    rtb_L72X34REQ = VITALDEPOT_DW.M_REQ_S_72_34;

    /* DataStoreRead: '<S420>/L72-X34-S-L' */
    rtb_L72X34SL_p = VITALDEPOT_DW.M_L_S_72_34;

    /* Outputs for Atomic SubSystem: '<S420>/ROUTE CHECK' */
    D_H_D_S(rtb_L72X34REQ, rtb_L72X34SL_p, &VITALDEPOT_B.ROUTECHECK_b);

    /* End of Outputs for SubSystem: '<S420>/ROUTE CHECK' */

    /* DataStoreWrite: '<S420>/L72-X34-D' */
    VITALDEPOT_DW.M_R_S_72_34 = VITALDEPOT_B.ROUTECHECK_b.AND2;

    /* DataStoreRead: '<S421>/L72-X54-REQ' */
    rtb_L72X54REQ = VITALDEPOT_DW.M_REQ_S_72_54;

    /* DataStoreRead: '<S421>/L72-X54-S-L' */
    rtb_L72X54SL_b = VITALDEPOT_DW.M_L_S_72_54;

    /* Outputs for Atomic SubSystem: '<S421>/ROUTE CHECK' */
    D_H_D_S(rtb_L72X54REQ, rtb_L72X54SL_b, &VITALDEPOT_B.ROUTECHECK_k);

    /* End of Outputs for SubSystem: '<S421>/ROUTE CHECK' */

    /* DataStoreWrite: '<S421>/L72-X54-D' */
    VITALDEPOT_DW.M_R_S_72_54 = VITALDEPOT_B.ROUTECHECK_k.AND2;

    /* DataStoreRead: '<S422>/L72-X74-REQ' */
    rtb_L72X74REQ = VITALDEPOT_DW.M_REQ_S_72_74;

    /* DataStoreRead: '<S422>/L72-X74-S-L' */
    rtb_L72X74SL_c = VITALDEPOT_DW.M_L_S_72_74;

    /* Outputs for Atomic SubSystem: '<S422>/ROUTE CHECK' */
    D_H_D_S(rtb_L72X74REQ, rtb_L72X74SL_c, &VITALDEPOT_B.ROUTECHECK_g);

    /* End of Outputs for SubSystem: '<S422>/ROUTE CHECK' */

    /* DataStoreWrite: '<S422>/L72-X74-D' */
    VITALDEPOT_DW.M_R_S_72_74 = VITALDEPOT_B.ROUTECHECK_g.AND2;

    /* DataStoreRead: '<S423>/L74A-X72-REQ' */
    rtb_L74AX72REQ = VITALDEPOT_DW.M_REQ_S_74_72;

    /* DataStoreRead: '<S423>/L74A-X72-S-L' */
    rtb_L74AX72SL = VITALDEPOT_DW.M_L_S_74_72;

    /* Outputs for Atomic SubSystem: '<S423>/ROUTE CHECK' */
    D_H_D_S(rtb_L74AX72REQ, rtb_L74AX72SL, &VITALDEPOT_B.ROUTECHECK_a);

    /* End of Outputs for SubSystem: '<S423>/ROUTE CHECK' */

    /* DataStoreWrite: '<S423>/L74A-X72-D' */
    VITALDEPOT_DW.M_R_S_74_72 = VITALDEPOT_B.ROUTECHECK_a.AND2;

    /* DataStoreRead: '<S436>/13-S-WS' */
    rtb_u3SWS_e = VITALDEPOT_DW.M_S_WS_13;

    /* Logic: '<S436>/AND1' incorporates:
     *  DataStoreRead: '<S436>/W13A-NWC'
     *  DataStoreRead: '<S436>/W13B//73A-NWC'
     */
    rtb_AND1_h = (VITALDEPOT_DW.M_W13A_NWC && VITALDEPOT_DW.M_W13B_73A_NWC);

    /* DataStoreRead: '<S436>/L14A-GR-DO' */
    rtb_L14AGRDO_k = VITALDEPOT_DW.DO_L14A_GR;

    /* Outputs for Atomic SubSystem: '<S436>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3SWS_e, rtb_AND1_h, rtb_L14AGRDO_k,
          &VITALDEPOT_B.ROUTECONFLICTLOCK);

    /* End of Outputs for SubSystem: '<S436>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S436>/L12-L14B-S-L' */
    VITALDEPOT_DW.M_L_S_12_14 = VITALDEPOT_B.ROUTECONFLICTLOCK.AND1;

    /* DataStoreRead: '<S437>/13-S-ES' */
    rtb_u3SES_k = VITALDEPOT_DW.M_S_ES_13;

    /* Logic: '<S437>/AND1' incorporates:
     *  DataStoreRead: '<S437>/W13A-NWC'
     *  DataStoreRead: '<S437>/W13B//73A-NWC'
     */
    rtb_AND1_gr = (VITALDEPOT_DW.M_W13A_NWC && VITALDEPOT_DW.M_W13B_73A_NWC);

    /* DataStoreRead: '<S437>/L12-GR-DO' */
    rtb_L12GRDO_f = VITALDEPOT_DW.DO_L12_GR;

    /* Outputs for Atomic SubSystem: '<S437>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3SES_k, rtb_AND1_gr, rtb_L12GRDO_f,
          &VITALDEPOT_B.ROUTECONFLICTLOCK_m);

    /* End of Outputs for SubSystem: '<S437>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S437>/L14A-X12-S-L' */
    VITALDEPOT_DW.M_L_S_14_12 = VITALDEPOT_B.ROUTECONFLICTLOCK_m.AND1;

    /* DataStoreRead: '<S438>/13-S-ES' */
    rtb_u3SES_eu = VITALDEPOT_DW.M_S_ES_13;

    /* Logic: '<S438>/AND1' incorporates:
     *  DataStoreRead: '<S438>/W13A-RWC'
     *  DataStoreRead: '<S438>/W13B//73A-NWC'
     */
    rtb_AND1_g0 = (VITALDEPOT_DW.M_W13A_RWC && VITALDEPOT_DW.M_W13B_73A_NWC);

    /* DataStoreRead: '<S438>/L32-GR-DO' */
    rtb_L32GRDO_l = VITALDEPOT_DW.DO_L32_GR;

    /* Outputs for Atomic SubSystem: '<S438>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3SES_eu, rtb_AND1_g0, rtb_L32GRDO_l,
          &VITALDEPOT_B.ROUTECONFLICTLOCK_e);

    /* End of Outputs for SubSystem: '<S438>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S438>/L14A-X32-S-L' */
    VITALDEPOT_DW.M_L_S_14_32 = VITALDEPOT_B.ROUTECONFLICTLOCK_e.AND1;

    /* DataStoreRead: '<S439>/13-S-ES' */
    rtb_u3SES_i2 = VITALDEPOT_DW.M_S_ES_13;

    /* DataStoreRead: '<S439>/W13B//73A-RWC' */
    rtb_W13B73ARWC = VITALDEPOT_DW.M_W13B_73A_RWC;

    /* DataStoreRead: '<S439>/L72-GR-DO' */
    rtb_L72GRDO_e = VITALDEPOT_DW.DO_L72_GR;

    /* Outputs for Atomic SubSystem: '<S439>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3SES_i2, rtb_W13B73ARWC, rtb_L72GRDO_e,
          &VITALDEPOT_B.ROUTECONFLICTLOCK_h);

    /* End of Outputs for SubSystem: '<S439>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S439>/L14A-X72-S-L' */
    VITALDEPOT_DW.M_L_S_14_72 = VITALDEPOT_B.ROUTECONFLICTLOCK_h.AND1;

    /* DataStoreRead: '<S440>/13-S-WS' */
    rtb_u3SWS_g = VITALDEPOT_DW.M_S_WS_13;

    /* Logic: '<S440>/AND1' incorporates:
     *  DataStoreRead: '<S440>/W13A-RWC'
     *  DataStoreRead: '<S440>/W13B//73A-NWC'
     */
    rtb_AND1_b = (VITALDEPOT_DW.M_W13A_RWC && VITALDEPOT_DW.M_W13B_73A_NWC);

    /* DataStoreRead: '<S440>/L14A-GR-DO' */
    rtb_L14AGRDO_f = VITALDEPOT_DW.DO_L14A_GR;

    /* Outputs for Atomic SubSystem: '<S440>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3SWS_g, rtb_AND1_b, rtb_L14AGRDO_f,
          &VITALDEPOT_B.ROUTECONFLICTLOCK_k);

    /* End of Outputs for SubSystem: '<S440>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S440>/L32-L14B-S-L' */
    VITALDEPOT_DW.M_L_S_32_14 = VITALDEPOT_B.ROUTECONFLICTLOCK_k.AND1;

    /* DataStoreRead: '<S441>/73B-S-ES' */
    rtb_u3BSES_c = VITALDEPOT_DW.M_S_ES_73B;

    /* Logic: '<S441>/AND1' incorporates:
     *  DataStoreRead: '<S441>/W13B//73A-NWC'
     *  DataStoreRead: '<S441>/W54-RWC'
     *  DataStoreRead: '<S441>/W73B-RWC'
     */
    rtb_AND1_m = (VITALDEPOT_DW.M_W13B_73A_NWC && VITALDEPOT_DW.M_W73B_RWC &&
                  VITALDEPOT_DW.M_W54_RWC);

    /* DataStoreRead: '<S441>/L72-GR-DO' */
    rtb_L72GRDO_j = VITALDEPOT_DW.DO_L72_GR;

    /* Outputs for Atomic SubSystem: '<S441>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3BSES_c, rtb_AND1_m, rtb_L72GRDO_j,
          &VITALDEPOT_B.ROUTECONFLICTLOCK_b);

    /* End of Outputs for SubSystem: '<S441>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S441>/L34-X72-S-L' */
    VITALDEPOT_DW.M_L_S_34_72 = VITALDEPOT_B.ROUTECONFLICTLOCK_b.AND1;

    /* DataStoreRead: '<S442>/73B-S-ES' */
    rtb_u3BSES_h = VITALDEPOT_DW.M_S_ES_73B;

    /* Logic: '<S442>/AND1' incorporates:
     *  DataStoreRead: '<S442>/W13B//73A-NWC'
     *  DataStoreRead: '<S442>/W54-NWC'
     *  DataStoreRead: '<S442>/W73B-RWC'
     */
    rtb_AND1_i = (VITALDEPOT_DW.M_W13B_73A_NWC && VITALDEPOT_DW.M_W73B_RWC &&
                  VITALDEPOT_DW.M_W54_NWC);

    /* DataStoreRead: '<S442>/L72-GR-DO' */
    rtb_L72GRDO_k = VITALDEPOT_DW.DO_L72_GR;

    /* Outputs for Atomic SubSystem: '<S442>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3BSES_h, rtb_AND1_i, rtb_L72GRDO_k,
          &VITALDEPOT_B.ROUTECONFLICTLOCK_c);

    /* End of Outputs for SubSystem: '<S442>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S442>/L54-X72-S-L' */
    VITALDEPOT_DW.M_L_S_54_72 = VITALDEPOT_B.ROUTECONFLICTLOCK_c.AND1;

    /* DataStoreRead: '<S443>/73A-S-WS' */
    rtb_u3ASWS_e = VITALDEPOT_DW.M_S_WS_73A;

    /* DataStoreRead: '<S443>/W13B//73A-RWC' */
    rtb_W13B73ARWC_m = VITALDEPOT_DW.M_W13B_73A_RWC;

    /* DataStoreRead: '<S443>/L14A-GR-DO' */
    rtb_L14AGRDO_i = VITALDEPOT_DW.DO_L14A_GR;

    /* Outputs for Atomic SubSystem: '<S443>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3ASWS_e, rtb_W13B73ARWC_m, rtb_L14AGRDO_i,
          &VITALDEPOT_B.ROUTECONFLICTLOCK_d);

    /* End of Outputs for SubSystem: '<S443>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S443>/L72-L14B-S-L' */
    VITALDEPOT_DW.M_L_S_72_14 = VITALDEPOT_B.ROUTECONFLICTLOCK_d.AND1;

    /* DataStoreRead: '<S444>/73A-S-WS' */
    rtb_u3ASWS_h = VITALDEPOT_DW.M_S_WS_73A;

    /* Logic: '<S444>/AND1' incorporates:
     *  DataStoreRead: '<S444>/W13B//73A-NWC'
     *  DataStoreRead: '<S444>/W54-NWC'
     *  DataStoreRead: '<S444>/W73B-RWC'
     */
    rtb_AND1_nv = (VITALDEPOT_DW.M_W13B_73A_NWC && VITALDEPOT_DW.M_W73B_RWC &&
                   VITALDEPOT_DW.M_W54_NWC);

    /* DataStoreRead: '<S444>/L54-GR-DO' */
    rtb_L54GRDO_k = VITALDEPOT_DW.DO_L54_GR;

    /* Outputs for Atomic SubSystem: '<S444>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3ASWS_h, rtb_AND1_nv, rtb_L54GRDO_k,
          &VITALDEPOT_B.ROUTECONFLICTLOCK_bp);

    /* End of Outputs for SubSystem: '<S444>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S444>/L72-X54-S-L' */
    VITALDEPOT_DW.M_L_S_72_54 = VITALDEPOT_B.ROUTECONFLICTLOCK_bp.AND1;

    /* DataStoreRead: '<S445>/73A-S-WS' */
    rtb_u3ASWS_l = VITALDEPOT_DW.M_S_WS_73A;

    /* Logic: '<S445>/AND1' incorporates:
     *  DataStoreRead: '<S445>/W13B//73A-NWC'
     *  DataStoreRead: '<S445>/W73B-NWC'
     */
    rtb_AND1_el = (VITALDEPOT_DW.M_W13B_73A_NWC && VITALDEPOT_DW.M_W73B_NWC);

    /* DataStoreRead: '<S445>/L74-GR-DO' */
    rtb_L74GRDO_g = VITALDEPOT_DW.DO_L74_GR;

    /* Outputs for Atomic SubSystem: '<S445>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3ASWS_l, rtb_AND1_el, rtb_L74GRDO_g,
          &VITALDEPOT_B.ROUTECONFLICTLOCK_e0);

    /* End of Outputs for SubSystem: '<S445>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S445>/L72-X74-S-L' */
    VITALDEPOT_DW.M_L_S_72_74 = VITALDEPOT_B.ROUTECONFLICTLOCK_e0.AND1;

    /* DataStoreRead: '<S446>/73A-S-WS' */
    rtb_u3ASWS_h3 = VITALDEPOT_DW.M_S_WS_73A;

    /* Logic: '<S446>/AND1' incorporates:
     *  DataStoreRead: '<S446>/W13B//73A-NWC'
     *  DataStoreRead: '<S446>/W54-RWC'
     *  DataStoreRead: '<S446>/W73B-RWC'
     */
    rtb_AND1_f = (VITALDEPOT_DW.M_W13B_73A_NWC && VITALDEPOT_DW.M_W73B_RWC &&
                  VITALDEPOT_DW.M_W54_RWC);

    /* DataStoreRead: '<S446>/L34-GR-DO' */
    rtb_L34GRDO_a = VITALDEPOT_DW.DO_L34_GR;

    /* Outputs for Atomic SubSystem: '<S446>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3ASWS_h3, rtb_AND1_f, rtb_L34GRDO_a,
          &VITALDEPOT_B.ROUTECONFLICTLOCK_l);

    /* End of Outputs for SubSystem: '<S446>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S446>/L72-X34-S-L' */
    VITALDEPOT_DW.M_L_S_72_34 = VITALDEPOT_B.ROUTECONFLICTLOCK_l.AND1;

    /* DataStoreRead: '<S447>/73B-S-ES' */
    rtb_u3BSES_k = VITALDEPOT_DW.M_S_ES_73B;

    /* Logic: '<S447>/AND1' incorporates:
     *  DataStoreRead: '<S447>/W13B//73A-NWC'
     *  DataStoreRead: '<S447>/W73B-NWC'
     */
    rtb_AND1_l0 = (VITALDEPOT_DW.M_W13B_73A_NWC && VITALDEPOT_DW.M_W73B_NWC);

    /* DataStoreRead: '<S447>/L72-GR-DO' */
    rtb_L72GRDO_a = VITALDEPOT_DW.DO_L72_GR;

    /* Outputs for Atomic SubSystem: '<S447>/ROUTE CONFLICT LOCK' */
    D_R_L(rtb_u3BSES_k, rtb_AND1_l0, rtb_L72GRDO_a,
          &VITALDEPOT_B.ROUTECONFLICTLOCK_k2);

    /* End of Outputs for SubSystem: '<S447>/ROUTE CONFLICT LOCK' */

    /* DataStoreWrite: '<S447>/L74-X72-S-L' */
    VITALDEPOT_DW.M_L_S_74_72 = VITALDEPOT_B.ROUTECONFLICTLOCK_k2.AND1;

    /* DataStoreRead: '<S460>/FALSE' */
    rtb_FALSE_kq = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S460>/TmpSignal ConversionAtROUTE LOCKInport1' */
    rtb_TmpSignalConversionAtROUTEL = rtb_FALSE_kq;

    /* SignalConversion: '<S460>/TmpSignal ConversionAtROUTE LOCKInport2' */
    rtb_TmpSignalConversionAtROUT_k = rtb_FALSE_kq;

    /* SignalConversion: '<S460>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalConversionAtROUT_g = rtb_FALSE_kq;

    /* SignalConversion: '<S460>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalConversionAtROUT_m = rtb_FALSE_kq;

    /* SignalConversion: '<S460>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalConversionAtROUT_c = rtb_FALSE_kq;

    /* DataStoreRead: '<S460>/13-S-ES-RL' */
    rtb_u3SESRL = VITALDEPOT_DW.M_RL_S_ES_13;

    /* DataStoreRead: '<S460>/73A-S-ES' */
    rtb_u3ASES_p = VITALDEPOT_DW.M_S_ES_73A;

    /* DataStoreRead: '<S460>/W13B//73A-NWZ' */
    rtb_W13B73ANWZ_po = VITALDEPOT_DW.M_W13B_73A_NWZ;

    /* DataStoreRead: '<S460>/13-TP' */
    rtb_u3TP_d = VITALDEPOT_DW.M_TP_13;

    /* DataStoreRead: '<S460>/13-RLS' */
    rtb_u3RLS = VITALDEPOT_DW.M_RLS_13;

    /* Outputs for Atomic SubSystem: '<S460>/ROUTE LOCK' */
    D_ES_WS(rtb_TmpSignalConversionAtROUTEL, rtb_TmpSignalConversionAtROUT_k,
            rtb_TmpSignalConversionAtROUT_g, rtb_TmpSignalConversionAtROUT_m,
            rtb_TmpSignalConversionAtROUT_c, rtb_FALSE_kq, rtb_u3SESRL,
            rtb_u3ASES_p, rtb_W13B73ANWZ_po, rtb_u3TP_d, rtb_u3RLS,
            &VITALDEPOT_B.ROUTELOCK, &VITALDEPOT_DW.ROUTELOCK);

    /* End of Outputs for SubSystem: '<S460>/ROUTE LOCK' */

    /* DataStoreWrite: '<S460>/13-S-ES' */
    VITALDEPOT_DW.M_S_ES_13 = VITALDEPOT_B.ROUTELOCK.AND3;

    /* DataStoreRead: '<S461>/FALSE' */
    rtb_FALSE_h = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S461>/TmpSignal ConversionAtROUTE LOCKInport1' */
    rtb_TmpSignalConversionAtROU_g1 = rtb_FALSE_h;

    /* SignalConversion: '<S461>/TmpSignal ConversionAtROUTE LOCKInport2' */
    rtb_TmpSignalConversionAtROU_kv = rtb_FALSE_h;

    /* SignalConversion: '<S461>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalConversionAtROU_gg = rtb_FALSE_h;

    /* SignalConversion: '<S461>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalConversionAtROU_md = rtb_FALSE_h;

    /* SignalConversion: '<S461>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalConversionAtROU_cc = rtb_FALSE_h;

    /* SignalConversion: '<S461>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalConversionAtROU_gd = rtb_FALSE_h;

    /* DataStoreRead: '<S461>/13-S-WS-RL' */
    rtb_u3SWSRL = VITALDEPOT_DW.M_RL_S_WS_13;

    /* DataStoreRead: '<S461>/TRUE' */
    rtb_TRUE_m = VITALDEPOT_DW.M_GV_TRUE;

    /* DataStoreRead: '<S461>/13-TP' */
    rtb_u3TP_n = VITALDEPOT_DW.M_TP_13;

    /* DataStoreRead: '<S461>/13-RLS' */
    rtb_u3RLS_i = VITALDEPOT_DW.M_RLS_13;

    /* Outputs for Atomic SubSystem: '<S461>/ROUTE LOCK' */
    D_ES_WS(rtb_TmpSignalConversionAtROU_g1, rtb_TmpSignalConversionAtROU_kv,
            rtb_TmpSignalConversionAtROU_gg, rtb_TmpSignalConversionAtROU_md,
            rtb_TmpSignalConversionAtROU_cc, rtb_TmpSignalConversionAtROU_gd,
            rtb_u3SWSRL, rtb_TRUE_m, rtb_FALSE_h, rtb_u3TP_n, rtb_u3RLS_i,
            &VITALDEPOT_B.ROUTELOCK_c, &VITALDEPOT_DW.ROUTELOCK_c);

    /* End of Outputs for SubSystem: '<S461>/ROUTE LOCK' */

    /* DataStoreWrite: '<S461>/13-S-WS' */
    VITALDEPOT_DW.M_S_WS_13 = VITALDEPOT_B.ROUTELOCK_c.AND3;

    /* DataStoreRead: '<S462>/FALSE' */
    rtb_FALSE_de = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S462>/TmpSignal ConversionAtROUTE LOCKInport1' */
    rtb_TmpSignalConversionAtRO_g13 = rtb_FALSE_de;

    /* SignalConversion: '<S462>/TmpSignal ConversionAtROUTE LOCKInport2' */
    rtb_TmpSignalConversionAtRO_kvg = rtb_FALSE_de;

    /* SignalConversion: '<S462>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalConversionAtRO_ggh = rtb_FALSE_de;

    /* SignalConversion: '<S462>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalConversionAtRO_mda = rtb_FALSE_de;

    /* SignalConversion: '<S462>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalConversionAtRO_ccg = rtb_FALSE_de;

    /* SignalConversion: '<S462>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalConversionAtRO_gdj = rtb_FALSE_de;

    /* DataStoreRead: '<S462>/73A-S-ES-RL' */
    rtb_u3ASESRL = VITALDEPOT_DW.M_RL_S_ES_73A;

    /* DataStoreRead: '<S462>/TRUE' */
    rtb_TRUE_c = VITALDEPOT_DW.M_GV_TRUE;

    /* DataStoreRead: '<S462>/73A-TP' */
    rtb_u3ATP_h = VITALDEPOT_DW.M_TP_73A;

    /* DataStoreRead: '<S462>/73A-RLS' */
    rtb_u3ARLS = VITALDEPOT_DW.M_RLS_73A;

    /* Outputs for Atomic SubSystem: '<S462>/ROUTE LOCK' */
    D_ES_WS(rtb_TmpSignalConversionAtRO_g13, rtb_TmpSignalConversionAtRO_kvg,
            rtb_TmpSignalConversionAtRO_ggh, rtb_TmpSignalConversionAtRO_mda,
            rtb_TmpSignalConversionAtRO_ccg, rtb_TmpSignalConversionAtRO_gdj,
            rtb_u3ASESRL, rtb_TRUE_c, rtb_FALSE_de, rtb_u3ATP_h, rtb_u3ARLS,
            &VITALDEPOT_B.ROUTELOCK_p, &VITALDEPOT_DW.ROUTELOCK_p);

    /* End of Outputs for SubSystem: '<S462>/ROUTE LOCK' */

    /* DataStoreWrite: '<S462>/73A-S-ES' */
    VITALDEPOT_DW.M_S_ES_73A = VITALDEPOT_B.ROUTELOCK_p.AND3;

    /* DataStoreRead: '<S463>/FALSE' */
    rtb_FALSE_nc = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S463>/TmpSignal ConversionAtROUTE LOCKInport1' */
    rtb_TmpSignalConversionAtR_g13e = rtb_FALSE_nc;

    /* SignalConversion: '<S463>/TmpSignal ConversionAtROUTE LOCKInport2' */
    rtb_TmpSignalConversionAtR_kvg1 = rtb_FALSE_nc;

    /* SignalConversion: '<S463>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalConversionAtR_ggho = rtb_FALSE_nc;

    /* SignalConversion: '<S463>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalConversionAtR_mda1 = rtb_FALSE_nc;

    /* SignalConversion: '<S463>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalConversionAtR_ccgp = rtb_FALSE_nc;

    /* SignalConversion: '<S463>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalConversionAtR_gdjd = rtb_FALSE_nc;

    /* DataStoreRead: '<S463>/TRUE' */
    rtb_TRUE_g = VITALDEPOT_DW.M_GV_TRUE;

    /* Logic: '<S463>/OR2' incorporates:
     *  DataStoreRead: '<S463>/13-S-WS'
     *  DataStoreRead: '<S463>/73B-S-WS'
     *  DataStoreRead: '<S463>/W13B//73A-NWZ'
     *  Logic: '<S463>/OR3'
     */
    rtb_OR2_p = ((VITALDEPOT_DW.M_S_WS_13 || VITALDEPOT_DW.M_W13B_73A_NWZ) &&
                 VITALDEPOT_DW.M_S_WS_73B);

    /* DataStoreRead: '<S463>/73A-TP' */
    rtb_u3ATP_n = VITALDEPOT_DW.M_TP_73A;

    /* DataStoreRead: '<S463>/73A-RLS' */
    rtb_u3ARLS_o = VITALDEPOT_DW.M_RLS_73A;

    /* Outputs for Atomic SubSystem: '<S463>/ROUTE LOCK' */
    D_ES_WS(rtb_TmpSignalConversionAtR_g13e, rtb_TmpSignalConversionAtR_kvg1,
            rtb_TmpSignalConversionAtR_ggho, rtb_TmpSignalConversionAtR_mda1,
            rtb_TmpSignalConversionAtR_ccgp, rtb_TmpSignalConversionAtR_gdjd,
            rtb_TRUE_g, rtb_OR2_p, rtb_FALSE_nc, rtb_u3ATP_n, rtb_u3ARLS_o,
            &VITALDEPOT_B.ROUTELOCK_f, &VITALDEPOT_DW.ROUTELOCK_f);

    /* End of Outputs for SubSystem: '<S463>/ROUTE LOCK' */

    /* DataStoreWrite: '<S463>/73A-S-WS' */
    VITALDEPOT_DW.M_S_WS_73A = VITALDEPOT_B.ROUTELOCK_f.AND3;

    /* DataStoreRead: '<S464>/FALSE' */
    rtb_FALSE_e = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S464>/TmpSignal ConversionAtROUTE LOCKInport1' */
    rtb_TmpSignalConversionAt_g13en = rtb_FALSE_e;

    /* SignalConversion: '<S464>/TmpSignal ConversionAtROUTE LOCKInport2' */
    rtb_TmpSignalConversionAt_kvg1q = rtb_FALSE_e;

    /* SignalConversion: '<S464>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalConversionAt_gghok = rtb_FALSE_e;

    /* SignalConversion: '<S464>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalConversionAt_mda10 = rtb_FALSE_e;

    /* SignalConversion: '<S464>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalConversionAt_ccgp5 = rtb_FALSE_e;

    /* DataStoreRead: '<S464>/TRUE' */
    rtb_TRUE_nv = VITALDEPOT_DW.M_GV_TRUE;

    /* DataStoreRead: '<S464>/73A-S-ES' */
    rtb_u3ASES_h = VITALDEPOT_DW.M_S_ES_73A;

    /* DataStoreRead: '<S464>/W13B//73A-RWZ' */
    rtb_W13B73ARWZ = VITALDEPOT_DW.M_W13B_73A_RWZ;

    /* DataStoreRead: '<S464>/73B-TP' */
    rtb_u3BTP_c = VITALDEPOT_DW.M_TP_73B;

    /* DataStoreRead: '<S464>/73B-RLS' */
    rtb_u3BRLS = VITALDEPOT_DW.M_RLS_73B;

    /* Outputs for Atomic SubSystem: '<S464>/ROUTE LOCK' */
    D_ES_WS(rtb_TmpSignalConversionAt_g13en, rtb_TmpSignalConversionAt_kvg1q,
            rtb_TmpSignalConversionAt_gghok, rtb_TmpSignalConversionAt_mda10,
            rtb_TmpSignalConversionAt_ccgp5, rtb_FALSE_e, rtb_TRUE_nv,
            rtb_u3ASES_h, rtb_W13B73ARWZ, rtb_u3BTP_c, rtb_u3BRLS,
            &VITALDEPOT_B.ROUTELOCK_d, &VITALDEPOT_DW.ROUTELOCK_d);

    /* End of Outputs for SubSystem: '<S464>/ROUTE LOCK' */

    /* DataStoreWrite: '<S464>/73B-S-ES' */
    VITALDEPOT_DW.M_S_ES_73B = VITALDEPOT_B.ROUTELOCK_d.AND3;

    /* DataStoreRead: '<S465>/FALSE' */
    rtb_FALSE_lk = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S465>/TmpSignal ConversionAtROUTE LOCKInport1' */
    rtb_TmpSignalConversionA_g13en3 = rtb_FALSE_lk;

    /* SignalConversion: '<S465>/TmpSignal ConversionAtROUTE LOCKInport2' */
    rtb_TmpSignalConversionA_kvg1ql = rtb_FALSE_lk;

    /* SignalConversion: '<S465>/TmpSignal ConversionAtROUTE LOCKInport3' */
    rtb_TmpSignalConversionA_gghokx = rtb_FALSE_lk;

    /* SignalConversion: '<S465>/TmpSignal ConversionAtROUTE LOCKInport4' */
    rtb_TmpSignalConversionA_mda10h = rtb_FALSE_lk;

    /* SignalConversion: '<S465>/TmpSignal ConversionAtROUTE LOCKInport5' */
    rtb_TmpSignalConversionA_ccgp5v = rtb_FALSE_lk;

    /* SignalConversion: '<S465>/TmpSignal ConversionAtROUTE LOCKInport6' */
    rtb_TmpSignalConversionAt_gdjdy = rtb_FALSE_lk;

    /* DataStoreRead: '<S465>/73B-S-WS-RL' */
    rtb_u3BSWSRL = VITALDEPOT_DW.M_RL_S_WS_73B;

    /* DataStoreRead: '<S465>/TRUE' */
    rtb_TRUE_ow = VITALDEPOT_DW.M_GV_TRUE;

    /* DataStoreRead: '<S465>/73B-TP' */
    rtb_u3BTP_h = VITALDEPOT_DW.M_TP_73B;

    /* DataStoreRead: '<S465>/73B-RLS' */
    rtb_u3BRLS_p = VITALDEPOT_DW.M_RLS_73B;

    /* Outputs for Atomic SubSystem: '<S465>/ROUTE LOCK' */
    D_ES_WS(rtb_TmpSignalConversionA_g13en3, rtb_TmpSignalConversionA_kvg1ql,
            rtb_TmpSignalConversionA_gghokx, rtb_TmpSignalConversionA_mda10h,
            rtb_TmpSignalConversionA_ccgp5v, rtb_TmpSignalConversionAt_gdjdy,
            rtb_u3BSWSRL, rtb_TRUE_ow, rtb_FALSE_lk, rtb_u3BTP_h, rtb_u3BRLS_p,
            &VITALDEPOT_B.ROUTELOCK_i, &VITALDEPOT_DW.ROUTELOCK_i);

    /* End of Outputs for SubSystem: '<S465>/ROUTE LOCK' */

    /* DataStoreWrite: '<S465>/73B-S-WS' */
    VITALDEPOT_DW.M_S_WS_73B = VITALDEPOT_B.ROUTELOCK_i.AND3;

    /* DataStoreRead: '<S472>/FALSE' */
    rtb_FALSE_mx = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S472>/TmpSignal ConversionAtSIGNAL LIGHTINGInport1' */
    rtb_TmpSignalConversionAtSIGNAL = rtb_FALSE_mx;

    /* SignalConversion: '<S472>/TmpSignal ConversionAtSIGNAL LIGHTINGInport2' */
    rtb_TmpSignalConversionAtSIGN_m = rtb_FALSE_mx;

    /* DataStoreRead: '<S472>/L12-L14B-S' */
    rtb_L12L14BS_p = VITALDEPOT_DW.M_R_S_12_14;

    /* DataStoreRead: '<S472>/12-TP' */
    rtb_u2TP_p = VITALDEPOT_DW.M_TP_12;

    /* Outputs for Atomic SubSystem: '<S472>/SIGNAL LIGHTING' */
    D_SIG_CTRL(rtb_L12L14BS_p, rtb_u2TP_p, &VITALDEPOT_B.SIGNALLIGHTING);

    /* End of Outputs for SubSystem: '<S472>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S472>/L12-GR-DO' */
    VITALDEPOT_DW.DO_L12_GR = VITALDEPOT_B.SIGNALLIGHTING.AND19;

    /* DataStoreRead: '<S473>/FALSE' */
    rtb_FALSE_p = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S473>/TmpSignal ConversionAtSIGNAL LIGHTINGInport1' */
    rtb_TmpSignalConversionAtSIGN_g = rtb_FALSE_p;

    /* SignalConversion: '<S473>/TmpSignal ConversionAtSIGNAL LIGHTINGInport2' */
    rtb_TmpSignalConversionAtSIG_m3 = rtb_FALSE_p;

    /* Logic: '<S473>/AND1' incorporates:
     *  DataStoreRead: '<S473>/L14A-X12-S'
     *  DataStoreRead: '<S473>/L14A-X32-S'
     *  DataStoreRead: '<S473>/L14A-X72-S'
     */
    rtb_AND1_ee = (VITALDEPOT_DW.M_R_S_14_12 || VITALDEPOT_DW.M_R_S_14_32 ||
                   VITALDEPOT_DW.M_R_S_14_72);

    /* DataStoreRead: '<S473>/14-TP' */
    rtb_u4TP_f = VITALDEPOT_DW.M_TP_14;

    /* Outputs for Atomic SubSystem: '<S473>/SIGNAL LIGHTING' */
    D_SIG_CTRL(rtb_AND1_ee, rtb_u4TP_f, &VITALDEPOT_B.SIGNALLIGHTING_a);

    /* End of Outputs for SubSystem: '<S473>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S473>/L14A-GR-DO' */
    VITALDEPOT_DW.DO_L14A_GR = VITALDEPOT_B.SIGNALLIGHTING_a.AND19;

    /* DataStoreRead: '<S474>/FALSE' */
    rtb_FALSE_o = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S474>/TmpSignal ConversionAtSIGNAL LIGHTINGInport1' */
    rtb_TmpSignalConversionAtSIG_gb = rtb_FALSE_o;

    /* SignalConversion: '<S474>/TmpSignal ConversionAtSIGNAL LIGHTINGInport2' */
    rtb_TmpSignalConversionAtSI_m3g = rtb_FALSE_o;

    /* DataStoreRead: '<S474>/L32-L14B-S' */
    rtb_L32L14BS_k = VITALDEPOT_DW.M_R_S_32_14;

    /* DataStoreRead: '<S474>/32-TP' */
    rtb_u2TP_f = VITALDEPOT_DW.M_TP_32;

    /* Outputs for Atomic SubSystem: '<S474>/SIGNAL LIGHTING' */
    D_SIG_CTRL(rtb_L32L14BS_k, rtb_u2TP_f, &VITALDEPOT_B.SIGNALLIGHTING_o);

    /* End of Outputs for SubSystem: '<S474>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S474>/L32-GR-DO' */
    VITALDEPOT_DW.DO_L32_GR = VITALDEPOT_B.SIGNALLIGHTING_o.AND19;

    /* DataStoreRead: '<S475>/FALSE' */
    rtb_FALSE_ncv = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S475>/TmpSignal ConversionAtSIGNAL LIGHTINGInport1' */
    rtb_TmpSignalConversionAtSI_gbq = rtb_FALSE_ncv;

    /* SignalConversion: '<S475>/TmpSignal ConversionAtSIGNAL LIGHTINGInport2' */
    rtb_TmpSignalConversionAtS_m3gy = rtb_FALSE_ncv;

    /* DataStoreRead: '<S475>/L34-X72-S' */
    rtb_L34X72S_k = VITALDEPOT_DW.M_R_S_34_72;

    /* DataStoreRead: '<S475>/34-TP' */
    rtb_u4TP_m = VITALDEPOT_DW.M_TP_34;

    /* Outputs for Atomic SubSystem: '<S475>/SIGNAL LIGHTING' */
    D_SIG_CTRL(rtb_L34X72S_k, rtb_u4TP_m, &VITALDEPOT_B.SIGNALLIGHTING_k);

    /* End of Outputs for SubSystem: '<S475>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S475>/L34-GR-DO' */
    VITALDEPOT_DW.DO_L34_GR = VITALDEPOT_B.SIGNALLIGHTING_k.AND19;

    /* DataStoreRead: '<S476>/FALSE' */
    rtb_FALSE_ka = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S476>/TmpSignal ConversionAtSIGNAL LIGHTINGInport1' */
    rtb_TmpSignalConversionAtS_gbqi = rtb_FALSE_ka;

    /* SignalConversion: '<S476>/TmpSignal ConversionAtSIGNAL LIGHTINGInport2' */
    rtb_TmpSignalConversionAt_m3gyu = rtb_FALSE_ka;

    /* DataStoreRead: '<S476>/L54-X72-S' */
    rtb_L54X72S_e = VITALDEPOT_DW.M_R_S_54_72;

    /* DataStoreRead: '<S476>/54-TP' */
    rtb_u4TP_e = VITALDEPOT_DW.M_TP_54;

    /* Outputs for Atomic SubSystem: '<S476>/SIGNAL LIGHTING' */
    D_SIG_CTRL(rtb_L54X72S_e, rtb_u4TP_e, &VITALDEPOT_B.SIGNALLIGHTING_ae);

    /* End of Outputs for SubSystem: '<S476>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S476>/L54-GR-DO' */
    VITALDEPOT_DW.DO_L54_GR = VITALDEPOT_B.SIGNALLIGHTING_ae.AND19;

    /* DataStoreRead: '<S477>/FALSE' */
    rtb_FALSE_al = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S477>/TmpSignal ConversionAtSIGNAL LIGHTINGInport1' */
    rtb_TmpSignalConversionAt_gbqi5 = rtb_FALSE_al;

    /* SignalConversion: '<S477>/TmpSignal ConversionAtSIGNAL LIGHTINGInport2' */
    rtb_TmpSignalConversionA_m3gyu4 = rtb_FALSE_al;

    /* Logic: '<S477>/AND1' incorporates:
     *  DataStoreRead: '<S477>/L72-L14B-S'
     *  DataStoreRead: '<S477>/L72-X34-S'
     *  DataStoreRead: '<S477>/L72-X54-S'
     *  DataStoreRead: '<S477>/L72-X74-S'
     */
    rtb_AND1_gw = (VITALDEPOT_DW.M_R_S_72_14 || VITALDEPOT_DW.M_R_S_72_34 ||
                   VITALDEPOT_DW.M_R_S_72_54 || VITALDEPOT_DW.M_R_S_72_74);

    /* DataStoreRead: '<S477>/72-TP' */
    rtb_u2TP_a = VITALDEPOT_DW.M_TP_72;

    /* Outputs for Atomic SubSystem: '<S477>/SIGNAL LIGHTING' */
    D_SIG_CTRL(rtb_AND1_gw, rtb_u2TP_a, &VITALDEPOT_B.SIGNALLIGHTING_e);

    /* End of Outputs for SubSystem: '<S477>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S477>/L72-GR-DO' */
    VITALDEPOT_DW.DO_L72_GR = VITALDEPOT_B.SIGNALLIGHTING_e.AND19;

    /* DataStoreRead: '<S478>/FALSE' */
    rtb_FALSE_g = VITALDEPOT_DW.M_GV_FALSE;

    /* SignalConversion: '<S478>/TmpSignal ConversionAtSIGNAL LIGHTINGInport1' */
    rtb_TmpSignalConversionA_gbqi5w = rtb_FALSE_g;

    /* SignalConversion: '<S478>/TmpSignal ConversionAtSIGNAL LIGHTINGInport2' */
    rtb_TmpSignalConversion_m3gyu4z = rtb_FALSE_g;

    /* DataStoreRead: '<S478>/L74-X72-S' */
    rtb_L74X72S_k = VITALDEPOT_DW.M_R_S_74_72;

    /* DataStoreRead: '<S478>/74-TP' */
    rtb_u4TP_j = VITALDEPOT_DW.M_TP_74;

    /* Outputs for Atomic SubSystem: '<S478>/SIGNAL LIGHTING' */
    D_SIG_CTRL(rtb_L74X72S_k, rtb_u4TP_j, &VITALDEPOT_B.SIGNALLIGHTING_k0);

    /* End of Outputs for SubSystem: '<S478>/SIGNAL LIGHTING' */

    /* DataStoreWrite: '<S478>/L74-GR-DO' */
    VITALDEPOT_DW.DO_L74_GR = VITALDEPOT_B.SIGNALLIGHTING_k0.AND19;

    /* DataStoreRead: '<S15>/73B-TPR-DI' */
    VITALDEPOT_B.u3BTPRDI = VITALDEPOT_DW.DI_TPR_73B;
  }

  /* Outputs for Atomic SubSystem: '<S15>/D_TP9' */
  D_TP(VITALDEPOT_M, VITALDEPOT_B.u3BTPRDI, &VITALDEPOT_B.D_TP9,
       &VITALDEPOT_DW.D_TP9);

  /* End of Outputs for SubSystem: '<S15>/D_TP9' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S15>/73B-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtD_TP9Outport1'
     */
    VITALDEPOT_DW.M_TP_73B = VITALDEPOT_B.D_TP9.DV_TON_d.LogicalOperator2;

    /* DataStoreRead: '<S15>/73A-TPR-DI' */
    VITALDEPOT_B.u3ATPRDI = VITALDEPOT_DW.DI_TPR_73A;
  }

  /* Outputs for Atomic SubSystem: '<S15>/D_TP8' */
  D_TP(VITALDEPOT_M, VITALDEPOT_B.u3ATPRDI, &VITALDEPOT_B.D_TP8,
       &VITALDEPOT_DW.D_TP8);

  /* End of Outputs for SubSystem: '<S15>/D_TP8' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S15>/73A-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtD_TP8Outport1'
     */
    VITALDEPOT_DW.M_TP_73A = VITALDEPOT_B.D_TP8.DV_TON_d.LogicalOperator2;

    /* DataStoreRead: '<S15>/72-TPR-DI' */
    VITALDEPOT_B.u2TPRDI = VITALDEPOT_DW.DI_TPR_72;
  }

  /* Outputs for Atomic SubSystem: '<S15>/D_TP7' */
  D_TP(VITALDEPOT_M, VITALDEPOT_B.u2TPRDI, &VITALDEPOT_B.D_TP7,
       &VITALDEPOT_DW.D_TP7);

  /* End of Outputs for SubSystem: '<S15>/D_TP7' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S15>/72-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtD_TP7Outport1'
     */
    VITALDEPOT_DW.M_TP_72 = VITALDEPOT_B.D_TP7.DV_TON_d.LogicalOperator2;

    /* DataStoreRead: '<S15>/54-TPR-DI' */
    VITALDEPOT_B.u4TPRDI = VITALDEPOT_DW.DI_TPR_54;
  }

  /* Outputs for Atomic SubSystem: '<S15>/D_TP6' */
  D_TP(VITALDEPOT_M, VITALDEPOT_B.u4TPRDI, &VITALDEPOT_B.D_TP6,
       &VITALDEPOT_DW.D_TP6);

  /* End of Outputs for SubSystem: '<S15>/D_TP6' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S15>/54-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtD_TP6Outport1'
     */
    VITALDEPOT_DW.M_TP_54 = VITALDEPOT_B.D_TP6.DV_TON_d.LogicalOperator2;

    /* DataStoreRead: '<S15>/34-TPR-DI' */
    VITALDEPOT_B.u4TPRDI_c = VITALDEPOT_DW.DI_TPR_34;
  }

  /* Outputs for Atomic SubSystem: '<S15>/D_TP5' */
  D_TP(VITALDEPOT_M, VITALDEPOT_B.u4TPRDI_c, &VITALDEPOT_B.D_TP5,
       &VITALDEPOT_DW.D_TP5);

  /* End of Outputs for SubSystem: '<S15>/D_TP5' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S15>/34-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtD_TP5Outport1'
     */
    VITALDEPOT_DW.M_TP_34 = VITALDEPOT_B.D_TP5.DV_TON_d.LogicalOperator2;

    /* DataStoreRead: '<S15>/32-TPR-DI' */
    VITALDEPOT_B.u2TPRDI_i = VITALDEPOT_DW.DI_TPR_32;
  }

  /* Outputs for Atomic SubSystem: '<S15>/D_TP4' */
  D_TP(VITALDEPOT_M, VITALDEPOT_B.u2TPRDI_i, &VITALDEPOT_B.D_TP4,
       &VITALDEPOT_DW.D_TP4);

  /* End of Outputs for SubSystem: '<S15>/D_TP4' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S15>/32-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtD_TP4Outport1'
     */
    VITALDEPOT_DW.M_TP_32 = VITALDEPOT_B.D_TP4.DV_TON_d.LogicalOperator2;

    /* DataStoreRead: '<S15>/14-TPR-DI' */
    VITALDEPOT_B.u4TPRDI_h = VITALDEPOT_DW.DI_TPR_14;
  }

  /* Outputs for Atomic SubSystem: '<S15>/D_TP3' */
  D_TP(VITALDEPOT_M, VITALDEPOT_B.u4TPRDI_h, &VITALDEPOT_B.D_TP3,
       &VITALDEPOT_DW.D_TP3);

  /* End of Outputs for SubSystem: '<S15>/D_TP3' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S15>/14-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtD_TP3Outport1'
     */
    VITALDEPOT_DW.M_TP_14 = VITALDEPOT_B.D_TP3.DV_TON_d.LogicalOperator2;

    /* DataStoreRead: '<S15>/13-TPR-DI' */
    VITALDEPOT_B.u3TPRDI = VITALDEPOT_DW.DI_TPR_13;
  }

  /* Outputs for Atomic SubSystem: '<S15>/D_TP2' */
  D_TP(VITALDEPOT_M, VITALDEPOT_B.u3TPRDI, &VITALDEPOT_B.D_TP2,
       &VITALDEPOT_DW.D_TP2);

  /* End of Outputs for SubSystem: '<S15>/D_TP2' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S15>/13-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtD_TP2Outport1'
     */
    VITALDEPOT_DW.M_TP_13 = VITALDEPOT_B.D_TP2.DV_TON_d.LogicalOperator2;

    /* DataStoreRead: '<S15>/74-TPR-DI' */
    VITALDEPOT_B.u4TPRDI_e = VITALDEPOT_DW.DI_TPR_74;
  }

  /* Outputs for Atomic SubSystem: '<S15>/D_TP10' */
  D_TP(VITALDEPOT_M, VITALDEPOT_B.u4TPRDI_e, &VITALDEPOT_B.D_TP10,
       &VITALDEPOT_DW.D_TP10);

  /* End of Outputs for SubSystem: '<S15>/D_TP10' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S15>/74-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtD_TP10Outport1'
     */
    VITALDEPOT_DW.M_TP_74 = VITALDEPOT_B.D_TP10.DV_TON_d.LogicalOperator2;

    /* DataStoreRead: '<S15>/12-TPR-DI' */
    VITALDEPOT_B.u2TPRDI_b = VITALDEPOT_DW.DI_TPR_12;
  }

  /* Outputs for Atomic SubSystem: '<S15>/D_TP1' */
  D_TP(VITALDEPOT_M, VITALDEPOT_B.u2TPRDI_b, &VITALDEPOT_B.D_TP1,
       &VITALDEPOT_DW.D_TP1);

  /* End of Outputs for SubSystem: '<S15>/D_TP1' */
  if (rtmIsMajorTimeStep(VITALDEPOT_M)) {
    /* DataStoreWrite: '<S15>/12-TP' incorporates:
     *  SignalConversion: '<S15>/TmpSignal ConversionAtD_TP1Outport1'
     */
    VITALDEPOT_DW.M_TP_12 = VITALDEPOT_B.D_TP1.DV_TON_d.LogicalOperator2;

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
    rty_GRDO[0] = rtb_L12GRDO_i;
    rty_GRDO[1] = rtb_L32GRDO_m;
    rty_GRDO[2] = rtb_L72GRDO_fl;
    rty_GRDO[3] = rtb_L14AGRDO_m;
    rty_GRDO[4] = rtb_L34GRDO_l;
    rty_GRDO[5] = rtb_L54GRDO_b;
    rty_GRDO[6] = rtb_L74GRDO_k;
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
    rty_SASTO[7] = rtb_L14BSAS;

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
    rty_TOMAIN[0] = rtb_RRLSDEP;
    rty_TOMAIN[1] = rtb_SWRLSDEP;
    rty_TOMAIN[2] = rtb_u4TP_l;
    rty_TOMAIN[3] = rtb_u4ARRLSPBCTRL;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtTP-TOInport1' */
    rty_TPTO[0] = rtb_u2TP_d;
    rty_TPTO[1] = rtb_u3TP_kg;
    rty_TPTO[2] = rtb_u4TP_h;
    rty_TPTO[3] = rtb_u2TP_o;
    rty_TPTO[4] = rtb_u4TP_bb;
    rty_TPTO[5] = rtb_u4TP_lo;
    rty_TPTO[6] = rtb_u2TP_i;
    rty_TPTO[7] = rtb_u3ATP_p;
    rty_TPTO[8] = rtb_u3BTP_jy;
    rty_TPTO[9] = rtb_u4TP_gu;

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
}

/* Update for referenced model: 'VITALDEPOT' */
void VITALDEPOT_Update(void)
{
  RT_MODEL_VITALDEPOT_T *const VITALDEPOT_M = &(VITALDEPOT_MdlrefDW.rtm);

  /* Update for Atomic SubSystem: '<S16>/APPROACH LOCK' */
  D_AS_Update(VITALDEPOT_M, &VITALDEPOT_B.APPROACHLOCK,
              &VITALDEPOT_DW.APPROACHLOCK);

  /* End of Update for SubSystem: '<S16>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S17>/APPROACH LOCK' */
  D_AS_Update(VITALDEPOT_M, &VITALDEPOT_B.APPROACHLOCK_p,
              &VITALDEPOT_DW.APPROACHLOCK_p);

  /* End of Update for SubSystem: '<S17>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S18>/APPROACH LOCK' */
  D_AS_Update(VITALDEPOT_M, &VITALDEPOT_B.APPROACHLOCK_a,
              &VITALDEPOT_DW.APPROACHLOCK_a);

  /* End of Update for SubSystem: '<S18>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S19>/APPROACH LOCK' */
  D_AS_Update(VITALDEPOT_M, &VITALDEPOT_B.APPROACHLOCK_j,
              &VITALDEPOT_DW.APPROACHLOCK_j);

  /* End of Update for SubSystem: '<S19>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S20>/APPROACH LOCK' */
  D_AS_Update(VITALDEPOT_M, &VITALDEPOT_B.APPROACHLOCK_e,
              &VITALDEPOT_DW.APPROACHLOCK_e);

  /* End of Update for SubSystem: '<S20>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S21>/APPROACH LOCK' */
  D_AS_Update(VITALDEPOT_M, &VITALDEPOT_B.APPROACHLOCK_f,
              &VITALDEPOT_DW.APPROACHLOCK_f);

  /* End of Update for SubSystem: '<S21>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S22>/APPROACH LOCK' */
  D_AS_Update(VITALDEPOT_M, &VITALDEPOT_B.APPROACHLOCK_o,
              &VITALDEPOT_DW.APPROACHLOCK_o);

  /* End of Update for SubSystem: '<S22>/APPROACH LOCK' */

  /* Update for Atomic SubSystem: '<S135>/EMERGENCY POINT RELEASE' */
  D_SWRLS_Update(VITALDEPOT_M, &VITALDEPOT_B.EMERGENCYPOINTRELEASE,
                 &VITALDEPOT_DW.EMERGENCYPOINTRELEASE);

  /* End of Update for SubSystem: '<S135>/EMERGENCY POINT RELEASE' */

  /* Update for Atomic SubSystem: '<S136>/EMERGENCY POINT RELEASE' */
  D_SWRLS_Update(VITALDEPOT_M, &VITALDEPOT_B.EMERGENCYPOINTRELEASE_l,
                 &VITALDEPOT_DW.EMERGENCYPOINTRELEASE_l);

  /* End of Update for SubSystem: '<S136>/EMERGENCY POINT RELEASE' */

  /* Update for Atomic SubSystem: '<S137>/EMERGENCY POINT RELEASE' */
  D_SWRLS_Update(VITALDEPOT_M, &VITALDEPOT_B.EMERGENCYPOINTRELEASE_p,
                 &VITALDEPOT_DW.EMERGENCYPOINTRELEASE_p);

  /* End of Update for SubSystem: '<S137>/EMERGENCY POINT RELEASE' */

  /* Update for Atomic SubSystem: '<S138>/EMERGENCY POINT RELEASE' */
  D_SWRLS_Update(VITALDEPOT_M, &VITALDEPOT_B.EMERGENCYPOINTRELEASE_b,
                 &VITALDEPOT_DW.EMERGENCYPOINTRELEASE_b);

  /* End of Update for SubSystem: '<S138>/EMERGENCY POINT RELEASE' */

  /* Update for Atomic SubSystem: '<S183>/EMERGENCY ROUTE RELEASE' */
  D_RRLS_Update(VITALDEPOT_M, &VITALDEPOT_B.EMERGENCYROUTERELEASE,
                &VITALDEPOT_DW.EMERGENCYROUTERELEASE);

  /* End of Update for SubSystem: '<S183>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S184>/EMERGENCY ROUTE RELEASE' */
  D_RRLS_Update(VITALDEPOT_M, &VITALDEPOT_B.EMERGENCYROUTERELEASE_g,
                &VITALDEPOT_DW.EMERGENCYROUTERELEASE_g);

  /* End of Update for SubSystem: '<S184>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S185>/EMERGENCY ROUTE RELEASE' */
  D_RRLS_Update(VITALDEPOT_M, &VITALDEPOT_B.EMERGENCYROUTERELEASE_a,
                &VITALDEPOT_DW.EMERGENCYROUTERELEASE_a);

  /* End of Update for SubSystem: '<S185>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S186>/EMERGENCY ROUTE RELEASE' */
  D_RRLS_Update(VITALDEPOT_M, &VITALDEPOT_B.EMERGENCYROUTERELEASE_k,
                &VITALDEPOT_DW.EMERGENCYROUTERELEASE_k);

  /* End of Update for SubSystem: '<S186>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S187>/EMERGENCY ROUTE RELEASE' */
  D_RRLS_Update(VITALDEPOT_M, &VITALDEPOT_B.EMERGENCYROUTERELEASE_c,
                &VITALDEPOT_DW.EMERGENCYROUTERELEASE_c);

  /* End of Update for SubSystem: '<S187>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S188>/EMERGENCY ROUTE RELEASE' */
  D_RRLS_Update(VITALDEPOT_M, &VITALDEPOT_B.EMERGENCYROUTERELEASE_j,
                &VITALDEPOT_DW.EMERGENCYROUTERELEASE_j);

  /* End of Update for SubSystem: '<S188>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S189>/EMERGENCY ROUTE RELEASE' */
  D_RRLS_Update(VITALDEPOT_M, &VITALDEPOT_B.EMERGENCYROUTERELEASE_ah,
                &VITALDEPOT_DW.EMERGENCYROUTERELEASE_ah);

  /* End of Update for SubSystem: '<S189>/EMERGENCY ROUTE RELEASE' */

  /* Update for Atomic SubSystem: '<S316>/POINT CONTROL' */
  D_SW_CTRL_Update(VITALDEPOT_M, &VITALDEPOT_B.POINTCONTROL,
                   &VITALDEPOT_DW.POINTCONTROL);

  /* End of Update for SubSystem: '<S316>/POINT CONTROL' */

  /* Update for Atomic SubSystem: '<S317>/POINT CONTROL' */
  D_SW_CTRL_Update(VITALDEPOT_M, &VITALDEPOT_B.POINTCONTROL_b,
                   &VITALDEPOT_DW.POINTCONTROL_b);

  /* End of Update for SubSystem: '<S317>/POINT CONTROL' */

  /* Update for Atomic SubSystem: '<S318>/POINT CONTROL' */
  D_SW_CTRL_Update(VITALDEPOT_M, &VITALDEPOT_B.POINTCONTROL_m,
                   &VITALDEPOT_DW.POINTCONTROL_m);

  /* End of Update for SubSystem: '<S318>/POINT CONTROL' */

  /* Update for Atomic SubSystem: '<S319>/POINT CONTROL' */
  D_SW_CTRL_Update(VITALDEPOT_M, &VITALDEPOT_B.POINTCONTROL_d,
                   &VITALDEPOT_DW.POINTCONTROL_d);

  /* End of Update for SubSystem: '<S319>/POINT CONTROL' */

  /* Update for Atomic SubSystem: '<S15>/D_TP9' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_B.u3BTPRDI, &VITALDEPOT_B.D_TP9,
              &VITALDEPOT_DW.D_TP9);

  /* End of Update for SubSystem: '<S15>/D_TP9' */

  /* Update for Atomic SubSystem: '<S15>/D_TP8' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_B.u3ATPRDI, &VITALDEPOT_B.D_TP8,
              &VITALDEPOT_DW.D_TP8);

  /* End of Update for SubSystem: '<S15>/D_TP8' */

  /* Update for Atomic SubSystem: '<S15>/D_TP7' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_B.u2TPRDI, &VITALDEPOT_B.D_TP7,
              &VITALDEPOT_DW.D_TP7);

  /* End of Update for SubSystem: '<S15>/D_TP7' */

  /* Update for Atomic SubSystem: '<S15>/D_TP6' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_B.u4TPRDI, &VITALDEPOT_B.D_TP6,
              &VITALDEPOT_DW.D_TP6);

  /* End of Update for SubSystem: '<S15>/D_TP6' */

  /* Update for Atomic SubSystem: '<S15>/D_TP5' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_B.u4TPRDI_c, &VITALDEPOT_B.D_TP5,
              &VITALDEPOT_DW.D_TP5);

  /* End of Update for SubSystem: '<S15>/D_TP5' */

  /* Update for Atomic SubSystem: '<S15>/D_TP4' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_B.u2TPRDI_i, &VITALDEPOT_B.D_TP4,
              &VITALDEPOT_DW.D_TP4);

  /* End of Update for SubSystem: '<S15>/D_TP4' */

  /* Update for Atomic SubSystem: '<S15>/D_TP3' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_B.u4TPRDI_h, &VITALDEPOT_B.D_TP3,
              &VITALDEPOT_DW.D_TP3);

  /* End of Update for SubSystem: '<S15>/D_TP3' */

  /* Update for Atomic SubSystem: '<S15>/D_TP2' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_B.u3TPRDI, &VITALDEPOT_B.D_TP2,
              &VITALDEPOT_DW.D_TP2);

  /* End of Update for SubSystem: '<S15>/D_TP2' */

  /* Update for Atomic SubSystem: '<S15>/D_TP10' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_B.u4TPRDI_e, &VITALDEPOT_B.D_TP10,
              &VITALDEPOT_DW.D_TP10);

  /* End of Update for SubSystem: '<S15>/D_TP10' */

  /* Update for Atomic SubSystem: '<S15>/D_TP1' */
  D_TP_Update(VITALDEPOT_M, VITALDEPOT_B.u2TPRDI_b, &VITALDEPOT_B.D_TP1,
              &VITALDEPOT_DW.D_TP1);

  /* End of Update for SubSystem: '<S15>/D_TP1' */
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

  /* block I/O */
  (void) memset(((void *) &VITALDEPOT_B), 0,
                sizeof(B_VITALDEPOT_c_T));

  /* states (dwork) */
  (void) memset((void *)&VITALDEPOT_DW, 0,
                sizeof(DW_VITALDEPOT_f_T));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
