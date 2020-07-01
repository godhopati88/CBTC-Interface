/*
 * File: NONVITALALL.c
 *
 * Code generated for Simulink model 'NONVITALALL'.
 *
 * Model version                  : 1.339
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Jun 24 22:55:04 2020
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

#include "NONVITALALL.h"
#include "NONVITALALL_private.h"

rtTimingBridge NONVITALALL_TimingBrdg;

/* Block signals and states (auto storage) */
DW_NONVITALALL_T NONVITALALL_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_NONVITALALL_T NONVITALALL_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_NONVITALALL_T NONVITALALL_Y;

/* Real-time model */
RT_MODEL_NONVITALALL_T NONVITALALL_M_;
RT_MODEL_NONVITALALL_T *const NONVITALALL_M = &NONVITALALL_M_;

/* Model step function */
void NONVITALALL_step(void)
{
  /* local block i/o variables */
  boolean_T rtb_Switch2[160];

  {
    boolean_T rtb_LogicalOperator;
    int32_T i;

    /* Memory: '<S1>/Memory' */
    for (i = 0; i < 6; i++) {
      NONVITALALL_DW.Memory[i] = NONVITALALL_DW.Memory_PreviousInput[i];
    }

    /* End of Memory: '<S1>/Memory' */

    /* Logic: '<S3>/Logical Operator' incorporates:
     *  Inport: '<Root>/NV-COMM'
     */
    rtb_LogicalOperator = (NONVITALALL_U.NVCOMM[0] || NONVITALALL_U.NVCOMM[1]);

    /* Switch: '<S4>/Switch3' incorporates:
     *  Inport: '<Root>/DATAFROMV'
     *  Memory: '<S4>/Memory1'
     */
    if (rtb_LogicalOperator) {
      memcpy(&NONVITALALL_DW.Switch3[0], &NONVITALALL_U.DATAFROMV[0], 331U *
             sizeof(boolean_T));
    } else {
      memcpy(&NONVITALALL_DW.Switch3[0], &NONVITALALL_DW.Memory1_PreviousInput[0],
             331U * sizeof(boolean_T));
    }

    /* End of Switch: '<S4>/Switch3' */

    /* SignalConversion: '<S1>/TmpSignal ConversionAtNONVITAL DEPOTInport23' incorporates:
     *  Inport: '<Root>/NV-COMM'
     */
    for (i = 0; i < 2; i++) {
      NONVITALALL_DW.TmpSignalConversionAtNONVITALDEPOTInport23[i] =
        NONVITALALL_DW.Switch3[i + 327];
      NONVITALALL_DW.TmpSignalConversionAtNONVITALDEPOTInport23[i + 2] =
        NONVITALALL_U.NVCOMM[i];
    }

    /* End of SignalConversion: '<S1>/TmpSignal ConversionAtNONVITAL DEPOTInport23' */

    /* ModelReference: '<S1>/NONVITAL MAINLINE' */
    NONVITALMAIN(&NONVITALALL_DW.Memory[0], &NONVITALALL_DW.Switch3[0],
                 &NONVITALALL_DW.Switch3[1], &NONVITALALL_DW.Switch3[2],
                 &NONVITALALL_DW.Switch3[29], &NONVITALALL_DW.Switch3[54],
                 &NONVITALALL_DW.Switch3[79], &NONVITALALL_DW.Switch3[86],
                 &NONVITALALL_DW.Switch3[95], &NONVITALALL_DW.Switch3[100],
                 &NONVITALALL_DW.Switch3[105], &NONVITALALL_DW.Switch3[110],
                 &NONVITALALL_DW.Switch3[115], &NONVITALALL_DW.Switch3[120],
                 &NONVITALALL_DW.Switch3[125], &NONVITALALL_DW.Switch3[130],
                 &NONVITALALL_DW.Switch3[135], &NONVITALALL_DW.Switch3[140],
                 &NONVITALALL_DW.Switch3[145], &NONVITALALL_DW.Switch3[150],
                 &NONVITALALL_DW.Switch3[155], &NONVITALALL_DW.Switch3[163],
                 &NONVITALALL_DW.Switch3[165], &NONVITALALL_DW.Switch3[173],
                 &NONVITALALL_DW.Switch3[176], &NONVITALALL_DW.Switch3[184],
                 &NONVITALALL_DW.Switch3[294],
                 &NONVITALALL_DW.TmpSignalConversionAtNONVITALDEPOTInport23[0],
                 &NONVITALALL_U.DATAFROMARS[0], &NONVITALALL_U.MAINLINEDI[0],
                 &NONVITALALL_U.MAINLINEDI[4], &NONVITALALL_U.MAINLINEDI[9],
                 &NONVITALALL_U.MAINLINEDI[10], &NONVITALALL_U.MAINLINEDI[22],
                 &NONVITALALL_U.MAINLINEDI[27],
                 &NONVITALALL_DW.NONVITALMAINLINE_o1[0],
                 &NONVITALALL_DW.NONVITALMAINLINE_o2,
                 &NONVITALALL_DW.NONVITALMAINLINE_o3,
                 &NONVITALALL_DW.NONVITALMAINLINE_o4[0],
                 &NONVITALALL_DW.NONVITALMAINLINE_o5[0],
                 &NONVITALALL_DW.NONVITALMAINLINE_o6[0],
                 &NONVITALALL_DW.NONVITALMAINLINE_o7[0],
                 &NONVITALALL_DW.NONVITALMAINLINE_o8[0],
                 &NONVITALALL_DW.NONVITALMAINLINE_o9[0],
                 &NONVITALALL_DW.NONVITALMAINLINE_o10[0],
                 &NONVITALALL_DW.NONVITALMAINLINE_o11[0],
                 &NONVITALALL_DW.NONVITALMAINLINE_o12[0],
                 &NONVITALALL_DW.NONVITALMAINLINE_o13[0],
                 &NONVITALALL_DW.NONVITALMAINLINE_o14[0],
                 &NONVITALALL_DW.NONVITALMAINLINE_o15[0],
                 &NONVITALALL_DW.NONVITALMAINLINE_o16[0],
                 &NONVITALALL_DW.NONVITALMAINLINE_o17[0],
                 &NONVITALALL_DW.NONVITALMAINLINE_o18[0],
                 &NONVITALALL_DW.NONVITALMAINLINE_o19[0],
                 &NONVITALALL_Y.DATATOARS[0]);

    /* ModelReference: '<S1>/NONVITAL DEPOT' */
    NONVITALDEPOT(&NONVITALALL_DW.NONVITALMAINLINE_o1[0],
                  &NONVITALALL_DW.Switch3[204], &NONVITALALL_DW.Switch3[205],
                  &NONVITALALL_DW.Switch3[206], &NONVITALALL_DW.Switch3[216],
                  &NONVITALALL_DW.Switch3[219], &NONVITALALL_DW.Switch3[222],
                  &NONVITALALL_DW.Switch3[226], &NONVITALALL_DW.Switch3[230],
                  &NONVITALALL_DW.Switch3[234], &NONVITALALL_DW.Switch3[238],
                  &NONVITALALL_DW.Switch3[242], &NONVITALALL_DW.Switch3[246],
                  &NONVITALALL_DW.Switch3[250], &NONVITALALL_DW.Switch3[254],
                  &NONVITALALL_DW.Switch3[258], &NONVITALALL_DW.Switch3[262],
                  &NONVITALALL_DW.Switch3[266], &NONVITALALL_DW.Switch3[270],
                  &NONVITALALL_DW.Switch3[278], &NONVITALALL_DW.Switch3[286],
                  &NONVITALALL_DW.Switch3[326],
                  &NONVITALALL_DW.TmpSignalConversionAtNONVITALDEPOTInport23[0],
                  &NONVITALALL_U.DEPOTDI[0], &NONVITALALL_U.DEPOTDI[4],
                  &NONVITALALL_U.DEPOTDI[9], &NONVITALALL_U.DEPOTDI[10],
                  &NONVITALALL_U.DEPOTDI[24], &NONVITALALL_U.DEPOTDI[28],
                  &NONVITALALL_DW.NONVITALDEPOT_o1[0],
                  &NONVITALALL_DW.NONVITALDEPOT_o2,
                  &NONVITALALL_DW.NONVITALDEPOT_o3[0],
                  &NONVITALALL_DW.NONVITALDEPOT_o4[0],
                  &NONVITALALL_DW.NONVITALDEPOT_o5[0],
                  &NONVITALALL_DW.NONVITALDEPOT_o6[0],
                  &NONVITALALL_DW.NONVITALDEPOT_o7[0],
                  &NONVITALALL_DW.NONVITALDEPOT_o8[0],
                  &NONVITALALL_DW.NONVITALDEPOT_o9[0],
                  &NONVITALALL_DW.NONVITALDEPOT_o10[0],
                  &NONVITALALL_DW.NONVITALDEPOT_o11[0],
                  &NONVITALALL_DW.NONVITALDEPOT_o12,
                  &NONVITALALL_DW.NONVITALDEPOT_o13[0],
                  &NONVITALALL_DW.NONVITALDEPOT_o14[0],
                  &NONVITALALL_DW.NONVITALDEPOT_o15[0],
                  &NONVITALALL_DW.NONVITALDEPOT_o16[0],
                  &NONVITALALL_DW.NONVITALDEPOT_o17[0],
                  &NONVITALALL_DW.NONVITALDEPOT_o18[0]);

    /* Switch: '<S5>/Switch2' incorporates:
     *  Memory: '<S5>/Memory'
     */
    if (rtb_LogicalOperator) {
      rtb_Switch2[0] = NONVITALALL_DW.NONVITALMAINLINE_o2;
      rtb_Switch2[1] = NONVITALALL_DW.NONVITALMAINLINE_o3;
    } else {
      rtb_Switch2[0] = NONVITALALL_DW.Memory_PreviousInput_f[0];
      rtb_Switch2[1] = NONVITALALL_DW.Memory_PreviousInput_f[1];
    }

    for (i = 0; i < 16; i++) {
      if (rtb_LogicalOperator) {
        rtb_Switch2[i + 2] = NONVITALALL_DW.NONVITALMAINLINE_o4[i];
      } else {
        rtb_Switch2[i + 2] = NONVITALALL_DW.Memory_PreviousInput_f[i + 2];
      }
    }

    for (i = 0; i < 5; i++) {
      if (rtb_LogicalOperator) {
        rtb_Switch2[i + 18] = NONVITALALL_DW.NONVITALMAINLINE_o5[i];
        rtb_Switch2[i + 23] = NONVITALALL_DW.NONVITALMAINLINE_o6[i];
        rtb_Switch2[i + 28] = NONVITALALL_DW.NONVITALMAINLINE_o7[i];
      } else {
        rtb_Switch2[i + 18] = NONVITALALL_DW.Memory_PreviousInput_f[i + 18];
        rtb_Switch2[i + 23] = NONVITALALL_DW.Memory_PreviousInput_f[i + 23];
        rtb_Switch2[i + 28] = NONVITALALL_DW.Memory_PreviousInput_f[i + 28];
      }
    }

    for (i = 0; i < 8; i++) {
      if (rtb_LogicalOperator) {
        rtb_Switch2[i + 33] = NONVITALALL_DW.NONVITALMAINLINE_o8[i];
      } else {
        rtb_Switch2[i + 33] = NONVITALALL_DW.Memory_PreviousInput_f[i + 33];
      }
    }

    for (i = 0; i < 5; i++) {
      if (rtb_LogicalOperator) {
        rtb_Switch2[i + 41] = NONVITALALL_DW.NONVITALMAINLINE_o9[i];
        rtb_Switch2[i + 46] = NONVITALALL_DW.NONVITALMAINLINE_o10[i];
      } else {
        rtb_Switch2[i + 41] = NONVITALALL_DW.Memory_PreviousInput_f[i + 41];
        rtb_Switch2[i + 46] = NONVITALALL_DW.Memory_PreviousInput_f[i + 46];
      }
    }

    for (i = 0; i < 9; i++) {
      if (rtb_LogicalOperator) {
        rtb_Switch2[i + 51] = NONVITALALL_DW.NONVITALMAINLINE_o11[i];
      } else {
        rtb_Switch2[i + 51] = NONVITALALL_DW.Memory_PreviousInput_f[i + 51];
      }
    }

    for (i = 0; i < 8; i++) {
      if (rtb_LogicalOperator) {
        rtb_Switch2[i + 60] = NONVITALALL_DW.NONVITALMAINLINE_o12[i];
      } else {
        rtb_Switch2[i + 60] = NONVITALALL_DW.Memory_PreviousInput_f[i + 60];
      }
    }

    if (rtb_LogicalOperator) {
      rtb_Switch2[68] = NONVITALALL_DW.NONVITALDEPOT_o2;
    } else {
      rtb_Switch2[68] = NONVITALALL_DW.Memory_PreviousInput_f[68];
    }

    for (i = 0; i < 12; i++) {
      if (rtb_LogicalOperator) {
        rtb_Switch2[i + 69] = NONVITALALL_DW.NONVITALDEPOT_o3[i];
      } else {
        rtb_Switch2[i + 69] = NONVITALALL_DW.Memory_PreviousInput_f[i + 69];
      }
    }

    for (i = 0; i < 4; i++) {
      if (rtb_LogicalOperator) {
        rtb_Switch2[i + 81] = NONVITALALL_DW.NONVITALDEPOT_o4[i];
        rtb_Switch2[i + 85] = NONVITALALL_DW.NONVITALDEPOT_o5[i];
        rtb_Switch2[i + 89] = NONVITALALL_DW.NONVITALDEPOT_o6[i];
      } else {
        rtb_Switch2[i + 81] = NONVITALALL_DW.Memory_PreviousInput_f[i + 81];
        rtb_Switch2[i + 85] = NONVITALALL_DW.Memory_PreviousInput_f[i + 85];
        rtb_Switch2[i + 89] = NONVITALALL_DW.Memory_PreviousInput_f[i + 89];
      }
    }

    for (i = 0; i < 8; i++) {
      if (rtb_LogicalOperator) {
        rtb_Switch2[i + 93] = NONVITALALL_DW.NONVITALDEPOT_o7[i];
      } else {
        rtb_Switch2[i + 93] = NONVITALALL_DW.Memory_PreviousInput_f[i + 93];
      }
    }

    for (i = 0; i < 4; i++) {
      if (rtb_LogicalOperator) {
        rtb_Switch2[i + 101] = NONVITALALL_DW.NONVITALDEPOT_o8[i];
        rtb_Switch2[i + 105] = NONVITALALL_DW.NONVITALDEPOT_o9[i];
      } else {
        rtb_Switch2[i + 101] = NONVITALALL_DW.Memory_PreviousInput_f[i + 101];
        rtb_Switch2[i + 105] = NONVITALALL_DW.Memory_PreviousInput_f[i + 105];
      }
    }

    for (i = 0; i < 7; i++) {
      if (rtb_LogicalOperator) {
        rtb_Switch2[i + 109] = NONVITALALL_DW.NONVITALDEPOT_o10[i];
      } else {
        rtb_Switch2[i + 109] = NONVITALALL_DW.Memory_PreviousInput_f[i + 109];
      }
    }

    for (i = 0; i < 12; i++) {
      if (rtb_LogicalOperator) {
        rtb_Switch2[i + 116] = NONVITALALL_DW.NONVITALDEPOT_o11[i];
      } else {
        rtb_Switch2[i + 116] = NONVITALALL_DW.Memory_PreviousInput_f[i + 116];
      }
    }

    for (i = 0; i < 31; i++) {
      if (rtb_LogicalOperator) {
        rtb_Switch2[i + 128] = NONVITALALL_DW.NONVITALMAINLINE_o13[i];
      } else {
        rtb_Switch2[i + 128] = NONVITALALL_DW.Memory_PreviousInput_f[i + 128];
      }
    }

    if (rtb_LogicalOperator) {
      rtb_Switch2[159] = NONVITALALL_DW.NONVITALDEPOT_o12;
    } else {
      rtb_Switch2[159] = NONVITALALL_DW.Memory_PreviousInput_f[159];
    }

    /* End of Switch: '<S5>/Switch2' */

    /* Outport: '<Root>/DATATOV' */
    memcpy(&NONVITALALL_Y.DATATOV[0], &rtb_Switch2[0], 160U * sizeof(boolean_T));

    /* Outport: '<Root>/MAINLINEDO' */
    for (i = 0; i < 7; i++) {
      NONVITALALL_Y.MAINLINEDO[i] = NONVITALALL_DW.NONVITALMAINLINE_o14[i];
    }

    for (i = 0; i < 18; i++) {
      NONVITALALL_Y.MAINLINEDO[i + 7] = NONVITALALL_DW.NONVITALMAINLINE_o15[i];
    }

    memcpy(&NONVITALALL_Y.MAINLINEDO[25], &NONVITALALL_DW.NONVITALMAINLINE_o16[0],
           144U * sizeof(boolean_T));
    memcpy(&NONVITALALL_Y.MAINLINEDO[169], &NONVITALALL_DW.NONVITALMAINLINE_o17
           [0], 81U * sizeof(boolean_T));
    for (i = 0; i < 20; i++) {
      NONVITALALL_Y.MAINLINEDO[i + 250] = NONVITALALL_DW.NONVITALMAINLINE_o18[i];
    }

    for (i = 0; i < 42; i++) {
      NONVITALALL_Y.MAINLINEDO[i + 270] = NONVITALALL_DW.NONVITALMAINLINE_o19[i];
    }

    /* End of Outport: '<Root>/MAINLINEDO' */

    /* Outport: '<Root>/DEPOTDO' */
    for (i = 0; i < 7; i++) {
      NONVITALALL_Y.DEPOTDO[i] = NONVITALALL_DW.NONVITALDEPOT_o13[i];
    }

    for (i = 0; i < 16; i++) {
      NONVITALALL_Y.DEPOTDO[i + 7] = NONVITALALL_DW.NONVITALDEPOT_o14[i];
    }

    for (i = 0; i < 60; i++) {
      NONVITALALL_Y.DEPOTDO[i + 23] = NONVITALALL_DW.NONVITALDEPOT_o15[i];
    }

    for (i = 0; i < 20; i++) {
      NONVITALALL_Y.DEPOTDO[i + 83] = NONVITALALL_DW.NONVITALDEPOT_o16[i];
    }

    for (i = 0; i < 15; i++) {
      NONVITALALL_Y.DEPOTDO[i + 103] = NONVITALALL_DW.NONVITALDEPOT_o17[i];
    }

    for (i = 0; i < 11; i++) {
      NONVITALALL_Y.DEPOTDO[i + 118] = NONVITALALL_DW.NONVITALDEPOT_o18[i];
    }

    /* End of Outport: '<Root>/DEPOTDO' */

    /* Outport: '<Root>/DATATOLOGM' incorporates:
     *  Inport: '<Root>/MAINLINEDI'
     */
    for (i = 0; i < 61; i++) {
      NONVITALALL_Y.DATATOLOGM[i] = NONVITALALL_U.MAINLINEDI[i];
    }

    for (i = 0; i < 7; i++) {
      NONVITALALL_Y.DATATOLOGM[i + 61] = NONVITALALL_DW.NONVITALMAINLINE_o14[i];
    }

    for (i = 0; i < 18; i++) {
      NONVITALALL_Y.DATATOLOGM[i + 68] = NONVITALALL_DW.NONVITALMAINLINE_o15[i];
    }

    memcpy(&NONVITALALL_Y.DATATOLOGM[86], &NONVITALALL_DW.NONVITALMAINLINE_o16[0],
           144U * sizeof(boolean_T));
    memcpy(&NONVITALALL_Y.DATATOLOGM[230], &NONVITALALL_DW.NONVITALMAINLINE_o17
           [0], 81U * sizeof(boolean_T));
    for (i = 0; i < 20; i++) {
      NONVITALALL_Y.DATATOLOGM[i + 311] = NONVITALALL_DW.NONVITALMAINLINE_o18[i];
    }

    for (i = 0; i < 42; i++) {
      NONVITALALL_Y.DATATOLOGM[i + 331] = NONVITALALL_DW.NONVITALMAINLINE_o19[i];
    }

    NONVITALALL_Y.DATATOLOGM[373] = NONVITALALL_DW.NONVITALMAINLINE_o2;
    NONVITALALL_Y.DATATOLOGM[374] = NONVITALALL_DW.NONVITALMAINLINE_o3;
    for (i = 0; i < 16; i++) {
      NONVITALALL_Y.DATATOLOGM[i + 375] = NONVITALALL_DW.NONVITALMAINLINE_o4[i];
    }

    for (i = 0; i < 5; i++) {
      NONVITALALL_Y.DATATOLOGM[i + 391] = NONVITALALL_DW.NONVITALMAINLINE_o5[i];
      NONVITALALL_Y.DATATOLOGM[i + 396] = NONVITALALL_DW.NONVITALMAINLINE_o6[i];
      NONVITALALL_Y.DATATOLOGM[i + 401] = NONVITALALL_DW.NONVITALMAINLINE_o7[i];
    }

    for (i = 0; i < 8; i++) {
      NONVITALALL_Y.DATATOLOGM[i + 406] = NONVITALALL_DW.NONVITALMAINLINE_o8[i];
    }

    for (i = 0; i < 5; i++) {
      NONVITALALL_Y.DATATOLOGM[i + 414] = NONVITALALL_DW.NONVITALMAINLINE_o9[i];
      NONVITALALL_Y.DATATOLOGM[i + 419] = NONVITALALL_DW.NONVITALMAINLINE_o10[i];
    }

    for (i = 0; i < 9; i++) {
      NONVITALALL_Y.DATATOLOGM[i + 424] = NONVITALALL_DW.NONVITALMAINLINE_o11[i];
    }

    for (i = 0; i < 8; i++) {
      NONVITALALL_Y.DATATOLOGM[i + 433] = NONVITALALL_DW.NONVITALMAINLINE_o12[i];
    }

    for (i = 0; i < 31; i++) {
      NONVITALALL_Y.DATATOLOGM[i + 441] = NONVITALALL_DW.NONVITALMAINLINE_o13[i];
    }

    NONVITALALL_Y.DATATOLOGM[472] = NONVITALALL_DW.NONVITALDEPOT_o12;
    memcpy(&NONVITALALL_Y.DATATOLOGM[473], &NONVITALALL_DW.Switch3[0], 204U *
           sizeof(boolean_T));
    for (i = 0; i < 33; i++) {
      NONVITALALL_Y.DATATOLOGM[i + 677] = NONVITALALL_DW.Switch3[i + 294];
    }

    /* End of Outport: '<Root>/DATATOLOGM' */

    /* Outport: '<Root>/DATATOLOGD' incorporates:
     *  Inport: '<Root>/DEPOTDI'
     */
    for (i = 0; i < 29; i++) {
      NONVITALALL_Y.DATATOLOGD[i] = NONVITALALL_U.DEPOTDI[i];
    }

    for (i = 0; i < 7; i++) {
      NONVITALALL_Y.DATATOLOGD[i + 29] = NONVITALALL_DW.NONVITALDEPOT_o13[i];
    }

    for (i = 0; i < 16; i++) {
      NONVITALALL_Y.DATATOLOGD[i + 36] = NONVITALALL_DW.NONVITALDEPOT_o14[i];
    }

    for (i = 0; i < 60; i++) {
      NONVITALALL_Y.DATATOLOGD[i + 52] = NONVITALALL_DW.NONVITALDEPOT_o15[i];
    }

    for (i = 0; i < 20; i++) {
      NONVITALALL_Y.DATATOLOGD[i + 112] = NONVITALALL_DW.NONVITALDEPOT_o16[i];
    }

    for (i = 0; i < 15; i++) {
      NONVITALALL_Y.DATATOLOGD[i + 132] = NONVITALALL_DW.NONVITALDEPOT_o17[i];
    }

    for (i = 0; i < 11; i++) {
      NONVITALALL_Y.DATATOLOGD[i + 147] = NONVITALALL_DW.NONVITALDEPOT_o18[i];
    }

    NONVITALALL_Y.DATATOLOGD[158] = NONVITALALL_DW.NONVITALDEPOT_o2;
    for (i = 0; i < 12; i++) {
      NONVITALALL_Y.DATATOLOGD[i + 159] = NONVITALALL_DW.NONVITALDEPOT_o3[i];
    }

    for (i = 0; i < 4; i++) {
      NONVITALALL_Y.DATATOLOGD[i + 171] = NONVITALALL_DW.NONVITALDEPOT_o4[i];
      NONVITALALL_Y.DATATOLOGD[i + 175] = NONVITALALL_DW.NONVITALDEPOT_o5[i];
      NONVITALALL_Y.DATATOLOGD[i + 179] = NONVITALALL_DW.NONVITALDEPOT_o6[i];
    }

    for (i = 0; i < 8; i++) {
      NONVITALALL_Y.DATATOLOGD[i + 183] = NONVITALALL_DW.NONVITALDEPOT_o7[i];
    }

    for (i = 0; i < 4; i++) {
      NONVITALALL_Y.DATATOLOGD[i + 191] = NONVITALALL_DW.NONVITALDEPOT_o8[i];
      NONVITALALL_Y.DATATOLOGD[i + 195] = NONVITALALL_DW.NONVITALDEPOT_o9[i];
    }

    for (i = 0; i < 7; i++) {
      NONVITALALL_Y.DATATOLOGD[i + 199] = NONVITALALL_DW.NONVITALDEPOT_o10[i];
    }

    for (i = 0; i < 12; i++) {
      NONVITALALL_Y.DATATOLOGD[i + 206] = NONVITALALL_DW.NONVITALDEPOT_o11[i];
    }

    memcpy(&NONVITALALL_Y.DATATOLOGD[218], &NONVITALALL_DW.Switch3[204], 90U *
           sizeof(boolean_T));

    /* End of Outport: '<Root>/DATATOLOGD' */

    /* Outport: '<Root>/REVISI' incorporates:
     *  Constant: '<Root>/Constant'
     */
    NONVITALALL_Y.REVISI = 12.0;
  }

  {
    int32_T i;

    /* Update for Memory: '<S1>/Memory' */
    for (i = 0; i < 6; i++) {
      NONVITALALL_DW.Memory_PreviousInput[i] = NONVITALALL_DW.NONVITALDEPOT_o1[i];
    }

    /* End of Update for Memory: '<S1>/Memory' */

    /* Update for Memory: '<S4>/Memory1' */
    memcpy(&NONVITALALL_DW.Memory1_PreviousInput[0], &NONVITALALL_DW.Switch3[0],
           331U * sizeof(boolean_T));

    /* Update for ModelReference: '<S1>/NONVITAL MAINLINE' */
    NONVITALMAIN_Update();

    /* Update for ModelReference: '<S1>/NONVITAL DEPOT' */
    NONVITALDEPOT_Update();

    /* Update for Memory: '<S5>/Memory' */
    memcpy(&NONVITALALL_DW.Memory_PreviousInput_f[0], &rtb_Switch2[0], 160U *
           sizeof(boolean_T));
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  NONVITALALL_M->Timing.t[0] =
    (++NONVITALALL_M->Timing.clockTick0) * NONVITALALL_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.05s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.05, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    NONVITALALL_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void NONVITALALL_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)NONVITALALL_M, 0,
                sizeof(RT_MODEL_NONVITALALL_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&NONVITALALL_M->solverInfo,
                          &NONVITALALL_M->Timing.simTimeStep);
    rtsiSetTPtr(&NONVITALALL_M->solverInfo, &rtmGetTPtr(NONVITALALL_M));
    rtsiSetStepSizePtr(&NONVITALALL_M->solverInfo,
                       &NONVITALALL_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&NONVITALALL_M->solverInfo, ((const char_T **)
      (&rtmGetErrorStatus(NONVITALALL_M))));
    rtsiSetRTModelPtr(&NONVITALALL_M->solverInfo, NONVITALALL_M);
  }

  rtsiSetSimTimeStep(&NONVITALALL_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&NONVITALALL_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(NONVITALALL_M, &NONVITALALL_M->Timing.tArray[0]);
  NONVITALALL_M->Timing.stepSize0 = 0.05;

  /* states (dwork) */
  (void) memset((void *)&NONVITALALL_DW, 0,
                sizeof(DW_NONVITALALL_T));

  /* external inputs */
  (void)memset((void *)&NONVITALALL_U, 0, sizeof(ExtU_NONVITALALL_T));

  /* external outputs */
  (void) memset((void *)&NONVITALALL_Y, 0,
                sizeof(ExtY_NONVITALALL_T));

  {
    static uint32_T *clockTickPtrs[2];
    static real_T *taskTimePtrs[2];
    NONVITALALL_TimingBrdg.nTasks = 2;
    clockTickPtrs[0] = &(NONVITALALL_M->Timing.clockTick0);
    clockTickPtrs[1] = &(NONVITALALL_M->Timing.clockTick1);
    NONVITALALL_TimingBrdg.clockTick = clockTickPtrs;
    NONVITALALL_TimingBrdg.clockTickH = (NULL);
    taskTimePtrs[0] = &(NONVITALALL_M->Timing.t[0]);
    taskTimePtrs[1] = (NULL);
    NONVITALALL_TimingBrdg.taskTime = taskTimePtrs;
  }

  /* Model Initialize fcn for ModelReference Block: '<S1>/NONVITAL DEPOT' */
  NONVITALDEPOT_initialize(rtmGetErrorStatusPointer(NONVITALALL_M),
    &(NONVITALALL_M->solverInfo), &NONVITALALL_TimingBrdg, 0, 1);

  /* Model Initialize fcn for ModelReference Block: '<S1>/NONVITAL MAINLINE' */
  NONVITALMAIN_initialize(rtmGetErrorStatusPointer(NONVITALALL_M),
    &(NONVITALALL_M->solverInfo), &NONVITALALL_TimingBrdg, 0, 1);

  /* Start for ModelReference: '<S1>/NONVITAL MAINLINE' */
  NONVITALMAIN_Start();

  /* Start for ModelReference: '<S1>/NONVITAL DEPOT' */
  NONVITALDEPOT_Start();

  /* SystemInitialize for ModelReference: '<S1>/NONVITAL MAINLINE' */
  NONVITALMAIN_Init();

  /* SystemInitialize for ModelReference: '<S1>/NONVITAL DEPOT' */
  NONVITALDEPOT_Init();
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
