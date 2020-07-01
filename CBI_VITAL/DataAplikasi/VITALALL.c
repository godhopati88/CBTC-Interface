/*
 * File: VITALALL.c
 *
 * Code generated for Simulink model 'VITALALL'.
 *
 * Model version                  : 1.441
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Nov 06 10:57:39 2017
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

#include "VITALALL.h"
#include "VITALALL_private.h"

rtTimingBridge VITALALL_TimingBrdg;

/* Block signals and states (auto storage) */
DW_VITALALL_T VITALALL_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_VITALALL_T VITALALL_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_VITALALL_T VITALALL_Y;

/* Real-time model */
RT_MODEL_VITALALL_T VITALALL_M_;
RT_MODEL_VITALALL_T *const VITALALL_M = &VITALALL_M_;

/*
 * Output and update for atomic system:
 *    '<S47>/ROUTE'
 *    '<S48>/ROUTE'
 *    '<S49>/ROUTE'
 *    '<S50>/ROUTE'
 *    '<S51>/ROUTE'
 *    '<S52>/ROUTE'
 *    '<S53>/ROUTE'
 *    '<S54>/ROUTE'
 *    '<S55>/ROUTE'
 *    '<S56>/ROUTE1'
 *    ...
 */
void ROUTE(boolean_T rtu_SIG, boolean_T rtu_PM1, boolean_T rtu_PM2, boolean_T
           rtu_PM3, boolean_T rtu_L, boolean_T rtu_RST, boolean_T rtu_RRLS,
           DW_ROUTE_T *localDW)
{
  boolean_T Memory_PreviousInput;

  /* Memory: '<S68>/Memory' */
  Memory_PreviousInput = localDW->Memory_PreviousInput;
  localDW->Memory = Memory_PreviousInput;

  /* Logic: '<S68>/AND2' incorporates:
   *  Logic: '<S68>/AND1'
   *  Logic: '<S68>/NOT1'
   *  Logic: '<S68>/NOT2'
   *  Logic: '<S68>/NOT3'
   *  Logic: '<S68>/OR1'
   */
  Memory_PreviousInput = ((Memory_PreviousInput || (rtu_SIG && rtu_PM1 &&
    rtu_PM2 && rtu_PM3)) && (!rtu_L) && (!rtu_RST) && (!rtu_RRLS));

  /* Memory: '<S68>/Memory' */
  localDW->Memory_PreviousInput = Memory_PreviousInput;
}

/* Model step function */
void VITALALL_step(void)
{
  {
    boolean_T rtb_NOT1;
    boolean_T rtb_NOT2;
    boolean_T rtb_NOT4;
    boolean_T rtb_NOT5;
    int32_T i;

    /* Memory: '<S11>/Memory' */
    for (i = 0; i < 2; i++) {
      VITALALL_DW.Memory[i] = VITALALL_DW.Memory_PreviousInput[i];
    }

    /* End of Memory: '<S11>/Memory' */

    /* Logic: '<S22>/AND' incorporates:
     *  Inport: '<Root>/INT3'
     *  Inport: '<Root>/INTIB'
     */
    VITALALL_DW.AND = (VITALALL_U.INTIB[0] && VITALALL_U.INT3[0]);

    /* SignalConversion: '<S11>/TmpSignal ConversionAtVITAL MAINLINEInport13' incorporates:
     *  Inport: '<Root>/DATAFROMZC'
     */
    for (i = 0; i < 13; i++) {
      VITALALL_DW.TmpSignalConversionAtVITALMAINL[i] = VITALALL_U.DATAFROMZC[i +
        14];
    }

    for (i = 0; i < 14; i++) {
      VITALALL_DW.TmpSignalConversionAtVITALMAINL[i + 13] =
        VITALALL_U.DATAFROMZC[i];
    }

    /* End of SignalConversion: '<S11>/TmpSignal ConversionAtVITAL MAINLINEInport13' */

    /* SignalConversion: '<S11>/TmpSignal ConversionAtVITAL MAINLINEInport14' incorporates:
     *  Inport: '<Root>/INT3'
     *  Inport: '<Root>/INTIB'
     */
    VITALALL_DW.TmpSignalConversionAtVITALMAI_a[0] = VITALALL_U.INTIB[2];
    VITALALL_DW.TmpSignalConversionAtVITALMAI_a[1] = VITALALL_U.INTIB[4];
    VITALALL_DW.TmpSignalConversionAtVITALMAI_a[2] = VITALALL_U.INTIB[6];
    VITALALL_DW.TmpSignalConversionAtVITALMAI_a[3] = VITALALL_U.INT3[2];
    VITALALL_DW.TmpSignalConversionAtVITALMAI_a[4] = VITALALL_U.INT3[4];

    /* SignalConversion: '<S11>/TmpSignal ConversionAtVITAL MAINLINEInport15' incorporates:
     *  Inport: '<Root>/INT3'
     *  Inport: '<Root>/INTIB'
     */
    VITALALL_DW.TmpSignalConversionAtVITALMAI_l[0] = VITALALL_U.INTIB[3];
    VITALALL_DW.TmpSignalConversionAtVITALMAI_l[1] = VITALALL_U.INTIB[5];
    VITALALL_DW.TmpSignalConversionAtVITALMAI_l[2] = VITALALL_U.INTIB[7];
    VITALALL_DW.TmpSignalConversionAtVITALMAI_l[3] = VITALALL_U.INT3[3];
    VITALALL_DW.TmpSignalConversionAtVITALMAI_l[4] = VITALALL_U.INT3[5];

    /* ModelReference: '<S11>/VITAL MAINLINE' */
    VITALMAIN(&VITALALL_DW.Memory[0], &VITALALL_U.DATAFROMNV[0],
              &VITALALL_U.DATAFROMNV[1], &VITALALL_U.DATAFROMNV[2],
              &VITALALL_U.DATAFROMNV[18], &VITALALL_U.DATAFROMNV[23],
              &VITALALL_U.DATAFROMNV[28], &VITALALL_U.DATAFROMNV[33],
              &VITALALL_U.DATAFROMNV[41], &VITALALL_U.DATAFROMNV[46],
              &VITALALL_U.DATAFROMNV[54], &VITALALL_DW.AND,
              &VITALALL_DW.TmpSignalConversionAtVITALMAINL[0],
              &VITALALL_DW.TmpSignalConversionAtVITALMAI_a[0],
              &VITALALL_DW.TmpSignalConversionAtVITALMAI_l[0],
              &VITALALL_U.CBISYSTEM[0], &VITALALL_DW.VITALMAINLINE_o1[0],
              &VITALALL_DW.VITALMAINLINE_o2, &VITALALL_DW.VITALMAINLINE_o3,
              &VITALALL_DW.VITALMAINLINE_o4[0], &VITALALL_DW.VITALMAINLINE_o5[0],
              &VITALALL_DW.VITALMAINLINE_o6[0], &VITALALL_DW.VITALMAINLINE_o7[0],
              &VITALALL_DW.VITALMAINLINE_o8[0], &VITALALL_DW.VITALMAINLINE_o9[0],
              &VITALALL_DW.VITALMAINLINE_o10[0], &VITALALL_DW.VITALMAINLINE_o11
              [0], &VITALALL_DW.VITALMAINLINE_o12[0],
              &VITALALL_DW.VITALMAINLINE_o13[0], &VITALALL_DW.VITALMAINLINE_o14
              [0], &VITALALL_DW.VITALMAINLINE_o15[0],
              &VITALALL_DW.VITALMAINLINE_o16[0], &VITALALL_DW.VITALMAINLINE_o17
              [0], &VITALALL_DW.VITALMAINLINE_o18[0],
              &VITALALL_DW.VITALMAINLINE_o19[0], &VITALALL_DW.VITALMAINLINE_o20
              [0], &VITALALL_DW.VITALMAINLINE_o21[0],
              &VITALALL_DW.VITALMAINLINE_o22[0], &VITALALL_DW.VITALMAINLINE_o23
              [0], &VITALALL_DW.VITALMAINLINE_o24[0],
              &VITALALL_DW.VITALMAINLINE_o25[0], &VITALALL_DW.VITALMAINLINE_o26,
              &VITALALL_DW.VITALMAINLINE_o27[0], &VITALALL_DW.VITALMAINLINE_o28
              [0], &VITALALL_DW.VITALMAINLINE_o29[0],
              &VITALALL_DW.VITALMAINLINE_o30[0], &VITALALL_DW.VITALMAINLINE_o31
              [0]);

    /* SignalConversion: '<S11>/TmpSignal ConversionAtVITAL DEPOTInport12' incorporates:
     *  Inport: '<Root>/INDEP'
     */
    VITALALL_DW.TmpSignalConversionAtVITALDEPOT[0] = VITALALL_U.INDEP[16];
    VITALALL_DW.TmpSignalConversionAtVITALDEPOT[1] = VITALALL_U.INDEP[48];
    VITALALL_DW.TmpSignalConversionAtVITALDEPOT[2] = VITALALL_U.INDEP[56];
    VITALALL_DW.TmpSignalConversionAtVITALDEPOT[3] = VITALALL_U.INDEP[17];
    for (i = 0; i < 2; i++) {
      VITALALL_DW.TmpSignalConversionAtVITALDEPOT[i + 4] = VITALALL_U.INDEP[i +
        20];
    }

    VITALALL_DW.TmpSignalConversionAtVITALDEPOT[6] = VITALALL_U.INDEP[18];
    VITALALL_DW.TmpSignalConversionAtVITALDEPOT[7] = VITALALL_U.INDEP[52];
    VITALALL_DW.TmpSignalConversionAtVITALDEPOT[8] = VITALALL_U.INDEP[32];
    VITALALL_DW.TmpSignalConversionAtVITALDEPOT[9] = VITALALL_U.INDEP[22];

    /* End of SignalConversion: '<S11>/TmpSignal ConversionAtVITAL DEPOTInport12' */

    /* SignalConversion: '<S11>/TmpSignal ConversionAtVITAL DEPOTInport13' incorporates:
     *  Inport: '<Root>/INDEP'
     */
    VITALALL_DW.TmpSignalConversionAtVITALDEP_c[0] = VITALALL_U.INDEP[64];
    VITALALL_DW.TmpSignalConversionAtVITALDEP_c[1] = VITALALL_U.INDEP[72];
    VITALALL_DW.TmpSignalConversionAtVITALDEP_c[2] = VITALALL_U.INDEP[66];
    VITALALL_DW.TmpSignalConversionAtVITALDEP_c[3] = VITALALL_U.INDEP[68];

    /* SignalConversion: '<S11>/TmpSignal ConversionAtVITAL DEPOTInport14' incorporates:
     *  Inport: '<Root>/INDEP'
     */
    VITALALL_DW.TmpSignalConversionAtVITALDEP_p[0] = VITALALL_U.INDEP[65];
    VITALALL_DW.TmpSignalConversionAtVITALDEP_p[1] = VITALALL_U.INDEP[73];
    VITALALL_DW.TmpSignalConversionAtVITALDEP_p[2] = VITALALL_U.INDEP[67];
    VITALALL_DW.TmpSignalConversionAtVITALDEP_p[3] = VITALALL_U.INDEP[69];

    /* ModelReference: '<S11>/VITAL DEPOT' */
    VITALDEPOT(&VITALALL_DW.VITALMAINLINE_o1[0], &VITALALL_U.DATAFROMNV[63],
               &VITALALL_U.DATAFROMNV[64], &VITALALL_U.DATAFROMNV[76],
               &VITALALL_U.DATAFROMNV[80], &VITALALL_U.DATAFROMNV[84],
               &VITALALL_U.DATAFROMNV[88], &VITALALL_U.DATAFROMNV[96],
               &VITALALL_U.DATAFROMNV[100], &VITALALL_U.DATAFROMNV[112],
               &VITALALL_U.INDEP[0],
               &VITALALL_DW.TmpSignalConversionAtVITALDEPOT[0],
               &VITALALL_DW.TmpSignalConversionAtVITALDEP_c[0],
               &VITALALL_DW.TmpSignalConversionAtVITALDEP_p[0],
               &VITALALL_U.CBISYSTEM[0], &VITALALL_DW.VITALDEPOT_o1[0],
               &VITALALL_DW.VITALDEPOT_o2, &VITALALL_DW.VITALDEPOT_o3,
               &VITALALL_DW.VITALDEPOT_o4[0], &VITALALL_DW.VITALDEPOT_o5[0],
               &VITALALL_DW.VITALDEPOT_o6[0], &VITALALL_DW.VITALDEPOT_o7[0],
               &VITALALL_DW.VITALDEPOT_o8[0], &VITALALL_DW.VITALDEPOT_o9[0],
               &VITALALL_DW.VITALDEPOT_o10[0], &VITALALL_DW.VITALDEPOT_o11[0],
               &VITALALL_DW.VITALDEPOT_o12[0], &VITALALL_DW.VITALDEPOT_o13[0],
               &VITALALL_DW.VITALDEPOT_o14[0], &VITALALL_DW.VITALDEPOT_o15[0],
               &VITALALL_DW.VITALDEPOT_o16[0], &VITALALL_DW.VITALDEPOT_o17[0],
               &VITALALL_DW.VITALDEPOT_o18[0], &VITALALL_DW.VITALDEPOT_o19[0],
               &VITALALL_DW.VITALDEPOT_o20[0], &VITALALL_DW.VITALDEPOT_o21[0],
               &VITALALL_DW.VITALDEPOT_o22, &VITALALL_DW.VITALDEPOT_o23[0],
               &VITALALL_DW.VITALDEPOT_o24[0], &VITALALL_DW.VITALDEPOT_o25[0],
               &VITALALL_DW.VITALDEPOT_o26[0]);

    /* Outport: '<Root>/DATATONV' incorporates:
     *  Inport: '<Root>/CBISYSTEM'
     *  Inport: '<Root>/INDEP'
     *  Inport: '<Root>/INT1'
     *  Inport: '<Root>/INT2'
     *  Inport: '<Root>/INT3'
     *  Inport: '<Root>/INTIB'
     */
    VITALALL_Y.DATATONV[0] = VITALALL_DW.VITALMAINLINE_o2;
    VITALALL_Y.DATATONV[1] = VITALALL_DW.VITALMAINLINE_o3;
    for (i = 0; i < 27; i++) {
      VITALALL_Y.DATATONV[i + 2] = VITALALL_DW.VITALMAINLINE_o4[i];
    }

    for (i = 0; i < 25; i++) {
      VITALALL_Y.DATATONV[i + 29] = VITALALL_DW.VITALMAINLINE_o5[i];
      VITALALL_Y.DATATONV[i + 54] = VITALALL_DW.VITALMAINLINE_o6[i];
    }

    for (i = 0; i < 7; i++) {
      VITALALL_Y.DATATONV[i + 79] = VITALALL_DW.VITALMAINLINE_o7[i];
    }

    for (i = 0; i < 9; i++) {
      VITALALL_Y.DATATONV[i + 86] = VITALALL_DW.VITALMAINLINE_o8[i];
    }

    for (i = 0; i < 5; i++) {
      VITALALL_Y.DATATONV[i + 95] = VITALALL_DW.VITALMAINLINE_o9[i];
      VITALALL_Y.DATATONV[i + 100] = VITALALL_DW.VITALMAINLINE_o10[i];
      VITALALL_Y.DATATONV[i + 105] = VITALALL_DW.VITALMAINLINE_o11[i];
      VITALALL_Y.DATATONV[i + 110] = VITALALL_DW.VITALMAINLINE_o12[i];
      VITALALL_Y.DATATONV[i + 115] = VITALALL_DW.VITALMAINLINE_o13[i];
      VITALALL_Y.DATATONV[i + 120] = VITALALL_DW.VITALMAINLINE_o14[i];
      VITALALL_Y.DATATONV[i + 125] = VITALALL_DW.VITALMAINLINE_o15[i];
      VITALALL_Y.DATATONV[i + 130] = VITALALL_DW.VITALMAINLINE_o16[i];
      VITALALL_Y.DATATONV[i + 135] = VITALALL_DW.VITALMAINLINE_o17[i];
      VITALALL_Y.DATATONV[i + 140] = VITALALL_DW.VITALMAINLINE_o18[i];
      VITALALL_Y.DATATONV[i + 145] = VITALALL_DW.VITALMAINLINE_o19[i];
      VITALALL_Y.DATATONV[i + 150] = VITALALL_DW.VITALMAINLINE_o20[i];
    }

    for (i = 0; i < 8; i++) {
      VITALALL_Y.DATATONV[i + 155] = VITALALL_DW.VITALMAINLINE_o21[i];
    }

    for (i = 0; i < 2; i++) {
      VITALALL_Y.DATATONV[i + 163] = VITALALL_DW.VITALMAINLINE_o22[i];
    }

    for (i = 0; i < 8; i++) {
      VITALALL_Y.DATATONV[i + 165] = VITALALL_DW.VITALMAINLINE_o23[i];
    }

    for (i = 0; i < 3; i++) {
      VITALALL_Y.DATATONV[i + 173] = VITALALL_DW.VITALMAINLINE_o24[i];
    }

    for (i = 0; i < 8; i++) {
      VITALALL_Y.DATATONV[i + 176] = VITALALL_DW.VITALMAINLINE_o25[i];
    }

    VITALALL_Y.DATATONV[184] = VITALALL_DW.VITALDEPOT_o2;
    VITALALL_Y.DATATONV[185] = VITALALL_DW.VITALDEPOT_o3;
    for (i = 0; i < 10; i++) {
      VITALALL_Y.DATATONV[i + 186] = VITALALL_DW.VITALDEPOT_o4[i];
    }

    for (i = 0; i < 3; i++) {
      VITALALL_Y.DATATONV[i + 196] = VITALALL_DW.VITALDEPOT_o5[i];
      VITALALL_Y.DATATONV[i + 199] = VITALALL_DW.VITALDEPOT_o6[i];
    }

    for (i = 0; i < 4; i++) {
      VITALALL_Y.DATATONV[i + 202] = VITALALL_DW.VITALDEPOT_o7[i];
      VITALALL_Y.DATATONV[i + 206] = VITALALL_DW.VITALDEPOT_o8[i];
      VITALALL_Y.DATATONV[i + 210] = VITALALL_DW.VITALDEPOT_o9[i];
      VITALALL_Y.DATATONV[i + 214] = VITALALL_DW.VITALDEPOT_o10[i];
      VITALALL_Y.DATATONV[i + 218] = VITALALL_DW.VITALDEPOT_o11[i];
      VITALALL_Y.DATATONV[i + 222] = VITALALL_DW.VITALDEPOT_o12[i];
      VITALALL_Y.DATATONV[i + 226] = VITALALL_DW.VITALDEPOT_o13[i];
      VITALALL_Y.DATATONV[i + 230] = VITALALL_DW.VITALDEPOT_o14[i];
      VITALALL_Y.DATATONV[i + 234] = VITALALL_DW.VITALDEPOT_o15[i];
      VITALALL_Y.DATATONV[i + 238] = VITALALL_DW.VITALDEPOT_o16[i];
      VITALALL_Y.DATATONV[i + 242] = VITALALL_DW.VITALDEPOT_o17[i];
      VITALALL_Y.DATATONV[i + 246] = VITALALL_DW.VITALDEPOT_o18[i];
    }

    for (i = 0; i < 8; i++) {
      VITALALL_Y.DATATONV[i + 250] = VITALALL_DW.VITALDEPOT_o19[i];
      VITALALL_Y.DATATONV[i + 258] = VITALALL_DW.VITALDEPOT_o20[i];
      VITALALL_Y.DATATONV[i + 266] = VITALALL_DW.VITALDEPOT_o21[i];
    }

    VITALALL_Y.DATATONV[274] = VITALALL_U.INT1[2];
    VITALALL_Y.DATATONV[275] = VITALALL_U.INT1[10];
    VITALALL_Y.DATATONV[276] = VITALALL_U.INTIB[18];
    VITALALL_Y.DATATONV[277] = VITALALL_U.INTIB[26];
    VITALALL_Y.DATATONV[278] = VITALALL_U.INT2[2];
    VITALALL_Y.DATATONV[279] = VITALALL_U.INT2[10];
    VITALALL_Y.DATATONV[280] = VITALALL_U.INT3[10];
    VITALALL_Y.DATATONV[281] = VITALALL_U.INT3[27];
    VITALALL_Y.DATATONV[282] = VITALALL_U.INT1[5];
    VITALALL_Y.DATATONV[283] = VITALALL_U.INT1[13];
    VITALALL_Y.DATATONV[284] = VITALALL_U.INTIB[21];
    VITALALL_Y.DATATONV[285] = VITALALL_U.INTIB[29];
    VITALALL_Y.DATATONV[286] = VITALALL_U.INT2[5];
    VITALALL_Y.DATATONV[287] = VITALALL_U.INT2[13];
    VITALALL_Y.DATATONV[288] = VITALALL_U.INT3[22];
    VITALALL_Y.DATATONV[289] = VITALALL_U.INT3[29];
    for (i = 0; i < 2; i++) {
      VITALALL_Y.DATATONV[i + 290] = VITALALL_U.INT1[i + 6];
      VITALALL_Y.DATATONV[i + 292] = VITALALL_U.INT1[i + 14];
      VITALALL_Y.DATATONV[i + 294] = VITALALL_U.INTIB[i + 22];
      VITALALL_Y.DATATONV[i + 296] = VITALALL_U.INTIB[i + 30];
      VITALALL_Y.DATATONV[i + 298] = VITALALL_U.INT2[i + 6];
      VITALALL_Y.DATATONV[i + 300] = VITALALL_U.INT2[i + 14];
      VITALALL_Y.DATATONV[i + 302] = VITALALL_U.INT3[i + 23];
      VITALALL_Y.DATATONV[i + 304] = VITALALL_U.INT3[i + 30];
    }

    VITALALL_Y.DATATONV[306] = VITALALL_U.INDEP[74];
    for (i = 0; i < 4; i++) {
      VITALALL_Y.DATATONV[i + 307] = VITALALL_U.CBISYSTEM[i];
    }

    /* End of Outport: '<Root>/DATATONV' */

    /* Outputs for Atomic SubSystem: '<S56>/ROUTE1' */

    /* Inport: '<Root>/INTIB' incorporates:
     *  Constant: '<S5>/ONE'
     *  Inport: '<Root>/DATAFROMNV'
     */
    ROUTE(VITALALL_DW.VITALMAINLINE_o27[1], VITALALL_U.INTIB[3],
          VITALALL_U.INTIB[4], true, VITALALL_DW.VITALMAINLINE_o5[6],
          VITALALL_U.DATAFROMNV[55], VITALALL_DW.VITALMAINLINE_o25[4],
          &VITALALL_DW.ROUTE1);

    /* End of Outputs for SubSystem: '<S56>/ROUTE1' */

    /* Outputs for Atomic SubSystem: '<S51>/ROUTE' */

    /* Inport: '<Root>/INT3' incorporates:
     *  Constant: '<S5>/ONE'
     *  Inport: '<Root>/DATAFROMNV'
     */
    ROUTE(VITALALL_DW.VITALMAINLINE_o27[4], VITALALL_U.INT3[2], VITALALL_U.INT3
          [4], true, VITALALL_DW.VITALMAINLINE_o5[9], VITALALL_U.DATAFROMNV[58],
          VITALALL_DW.VITALMAINLINE_o25[6], &VITALALL_DW.ROUTE_b);

    /* End of Outputs for SubSystem: '<S51>/ROUTE' */

    /* Outputs for Atomic SubSystem: '<S55>/ROUTE' */
    ROUTE(VITALALL_DW.VITALMAINLINE_o27[6], VITALALL_U.INT3[2], VITALALL_U.INT3
          [5], true, VITALALL_DW.VITALMAINLINE_o6[14], VITALALL_U.DATAFROMNV[60],
          VITALALL_DW.VITALMAINLINE_o25[3], &VITALALL_DW.ROUTE_k);

    /* End of Outputs for SubSystem: '<S55>/ROUTE' */

    /* Outputs for Atomic SubSystem: '<S61>/ROUTE1' */

    /* Inport: '<Root>/INTIB' incorporates:
     *  Inport: '<Root>/DATAFROMNV'
     */
    ROUTE(VITALALL_DW.VITALMAINLINE_o27[3], VITALALL_U.INTIB[2],
          VITALALL_U.INTIB[4], VITALALL_U.INTIB[6],
          VITALALL_DW.VITALMAINLINE_o6[10], VITALALL_U.DATAFROMNV[57],
          VITALALL_DW.VITALMAINLINE_o25[1], &VITALALL_DW.ROUTE1_d);

    /* End of Outputs for SubSystem: '<S61>/ROUTE1' */

    /* Outputs for Atomic SubSystem: '<S58>/ROUTE1' */
    ROUTE(VITALALL_DW.VITALMAINLINE_o28[1], VITALALL_U.INTIB[2],
          VITALALL_U.INTIB[4], VITALALL_U.INTIB[7],
          VITALALL_DW.VITALMAINLINE_o7[6], VITALALL_U.DATAFROMNV[55],
          VITALALL_DW.VITALDEPOT_o21[6], &VITALALL_DW.ROUTE1_j);

    /* End of Outputs for SubSystem: '<S58>/ROUTE1' */

    /* Outputs for Atomic SubSystem: '<S66>/ROUTE1' */
    ROUTE(VITALALL_DW.VITALDEPOT_o23[7], VITALALL_U.INTIB[2], VITALALL_U.INTIB[4],
          VITALALL_U.INTIB[7], VITALALL_DW.VITALMAINLINE_o8[3],
          VITALALL_U.DATAFROMNV[62], VITALALL_DW.VITALMAINLINE_o25[1],
          &VITALALL_DW.ROUTE1_b);

    /* End of Outputs for SubSystem: '<S66>/ROUTE1' */

    /* Logic: '<S39>/NOT1' incorporates:
     *  Inport: '<Root>/DATAFROMNV'
     */
    rtb_NOT1 = !VITALALL_U.DATAFROMNV[28];

    /* Logic: '<S39>/NOT2' incorporates:
     *  Inport: '<Root>/DATAFROMNV'
     */
    rtb_NOT2 = !VITALALL_U.DATAFROMNV[29];

    /* Logic: '<S39>/NOT4' incorporates:
     *  Inport: '<Root>/DATAFROMNV'
     */
    rtb_NOT4 = !VITALALL_U.DATAFROMNV[31];

    /* Logic: '<S39>/NOT5' incorporates:
     *  Inport: '<Root>/DATAFROMNV'
     */
    rtb_NOT5 = !VITALALL_U.DATAFROMNV[32];

    /* Outport: '<Root>/DATATOZC' incorporates:
     *  Inport: '<Root>/DATAFROMNV'
     *  Inport: '<Root>/INT1'
     *  Inport: '<Root>/INT2'
     *  Inport: '<Root>/INT3'
     *  Inport: '<Root>/INTIB'
     *  Logic: '<S39>/NOT3'
     */
    VITALALL_Y.DATATOZC[0] = VITALALL_DW.ROUTE1.Memory;
    VITALALL_Y.DATATOZC[1] = VITALALL_DW.ROUTE_b.Memory;
    VITALALL_Y.DATATOZC[2] = VITALALL_DW.ROUTE_k.Memory;
    VITALALL_Y.DATATOZC[3] = VITALALL_DW.ROUTE1_d.Memory;
    VITALALL_Y.DATATOZC[4] = VITALALL_DW.ROUTE1_j.Memory;
    VITALALL_Y.DATATOZC[5] = VITALALL_DW.ROUTE1_b.Memory;
    VITALALL_Y.DATATOZC[6] = rtb_NOT1;
    VITALALL_Y.DATATOZC[7] = rtb_NOT2;
    VITALALL_Y.DATATOZC[8] = rtb_NOT1;
    VITALALL_Y.DATATOZC[9] = rtb_NOT2;
    VITALALL_Y.DATATOZC[10] = rtb_NOT4;
    VITALALL_Y.DATATOZC[11] = rtb_NOT5;
    VITALALL_Y.DATATOZC[12] = rtb_NOT4;
    VITALALL_Y.DATATOZC[13] = rtb_NOT5;
    VITALALL_Y.DATATOZC[14] = !VITALALL_U.DATAFROMNV[30];
    VITALALL_Y.DATATOZC[15] = VITALALL_U.INT1[2];
    VITALALL_Y.DATATOZC[16] = VITALALL_U.INT1[10];
    VITALALL_Y.DATATOZC[17] = VITALALL_U.INTIB[18];
    VITALALL_Y.DATATOZC[18] = VITALALL_U.INTIB[26];
    VITALALL_Y.DATATOZC[19] = VITALALL_U.INT2[2];
    VITALALL_Y.DATATOZC[20] = VITALALL_U.INT2[10];
    VITALALL_Y.DATATOZC[21] = VITALALL_U.INT3[10];
    VITALALL_Y.DATATOZC[22] = VITALALL_U.INT3[27];
    VITALALL_Y.DATATOZC[23] = VITALALL_U.INT1[5];
    VITALALL_Y.DATATOZC[24] = VITALALL_U.INT1[13];
    VITALALL_Y.DATATOZC[25] = VITALALL_U.INTIB[21];
    VITALALL_Y.DATATOZC[26] = VITALALL_U.INTIB[29];
    VITALALL_Y.DATATOZC[27] = VITALALL_U.INT2[5];
    VITALALL_Y.DATATOZC[28] = VITALALL_U.INT2[13];
    VITALALL_Y.DATATOZC[29] = VITALALL_U.INT3[22];
    VITALALL_Y.DATATOZC[30] = VITALALL_U.INT3[29];
    for (i = 0; i < 32; i++) {
      VITALALL_Y.DATATOZC[i + 31] = VITALALL_U.DATAFROMNV[i + 119];
    }

    VITALALL_Y.DATATOZC[63] = VITALALL_U.INT1[0];
    VITALALL_Y.DATATOZC[64] = VITALALL_U.INT1[8];
    VITALALL_Y.DATATOZC[65] = VITALALL_U.INTIB[16];
    VITALALL_Y.DATATOZC[66] = VITALALL_U.INTIB[24];
    VITALALL_Y.DATATOZC[67] = VITALALL_U.INT2[0];
    VITALALL_Y.DATATOZC[68] = VITALALL_U.INT2[8];
    VITALALL_Y.DATATOZC[69] = VITALALL_U.INT3[8];
    VITALALL_Y.DATATOZC[70] = VITALALL_U.INT3[25];
    VITALALL_Y.DATATOZC[71] = VITALALL_U.INT1[1];
    VITALALL_Y.DATATOZC[72] = VITALALL_U.INT1[9];
    VITALALL_Y.DATATOZC[73] = VITALALL_U.INTIB[17];
    VITALALL_Y.DATATOZC[74] = VITALALL_U.INTIB[25];
    VITALALL_Y.DATATOZC[75] = VITALALL_U.INT2[1];
    VITALALL_Y.DATATOZC[76] = VITALALL_U.INT2[9];
    VITALALL_Y.DATATOZC[77] = VITALALL_U.INT3[9];
    VITALALL_Y.DATATOZC[78] = VITALALL_U.INT3[26];
    VITALALL_Y.DATATOZC[79] = VITALALL_U.INT1[3];
    VITALALL_Y.DATATOZC[80] = VITALALL_U.INT1[11];
    VITALALL_Y.DATATOZC[81] = VITALALL_U.INTIB[19];
    VITALALL_Y.DATATOZC[82] = VITALALL_U.INTIB[27];
    VITALALL_Y.DATATOZC[83] = VITALALL_U.INT2[3];
    VITALALL_Y.DATATOZC[84] = VITALALL_U.INT2[11];
    VITALALL_Y.DATATOZC[85] = VITALALL_U.INT3[11];
    VITALALL_Y.DATATOZC[86] = VITALALL_U.INT3[28];
    VITALALL_Y.DATATOZC[95] = VITALALL_DW.VITALMAINLINE_o10[2];
    for (i = 0; i < 2; i++) {
      VITALALL_Y.DATATOZC[i + 87] = VITALALL_DW.VITALMAINLINE_o10[i];
      VITALALL_Y.DATATOZC[i + 89] = VITALALL_DW.VITALMAINLINE_o10[i];
      VITALALL_Y.DATATOZC[i + 91] = VITALALL_DW.VITALMAINLINE_o10[i + 3];
      VITALALL_Y.DATATOZC[i + 93] = VITALALL_DW.VITALMAINLINE_o10[i + 3];
      VITALALL_Y.DATATOZC[i + 96] = VITALALL_DW.VITALMAINLINE_o14[i];
      VITALALL_Y.DATATOZC[i + 98] = VITALALL_DW.VITALMAINLINE_o14[i];
      VITALALL_Y.DATATOZC[i + 100] = VITALALL_DW.VITALMAINLINE_o14[i + 3];
      VITALALL_Y.DATATOZC[i + 102] = VITALALL_DW.VITALMAINLINE_o14[i + 3];
    }

    VITALALL_Y.DATATOZC[104] = VITALALL_DW.VITALMAINLINE_o14[2];
    for (i = 0; i < 25; i++) {
      VITALALL_Y.DATATOZC[i + 105] = VITALALL_DW.VITALMAINLINE_o5[i];
      VITALALL_Y.DATATOZC[i + 130] = VITALALL_DW.VITALMAINLINE_o6[i];
    }

    for (i = 0; i < 7; i++) {
      VITALALL_Y.DATATOZC[i + 155] = VITALALL_DW.VITALMAINLINE_o7[i];
    }

    for (i = 0; i < 9; i++) {
      VITALALL_Y.DATATOZC[i + 162] = VITALALL_DW.VITALMAINLINE_o8[i];
    }

    /* End of Outport: '<Root>/DATATOZC' */

    /* Outport: '<Root>/OUTT1' incorporates:
     *  Constant: '<S5>/ZERO'
     *  Inport: '<Root>/DATAFROMZC'
     */
    VITALALL_Y.OUTT1[0] = VITALALL_U.DATAFROMZC[27];
    VITALALL_Y.OUTT1[1] = VITALALL_U.DATAFROMZC[35];
    VITALALL_Y.OUTT1[2] = false;
    VITALALL_Y.OUTT1[3] = false;
    VITALALL_Y.OUTT1[4] = VITALALL_U.DATAFROMZC[28];
    VITALALL_Y.OUTT1[5] = VITALALL_U.DATAFROMZC[36];
    VITALALL_Y.OUTT1[6] = false;
    VITALALL_Y.OUTT1[7] = false;

    /* Outport: '<Root>/OUTTIB' incorporates:
     *  Constant: '<S5>/ZERO'
     *  Inport: '<Root>/DATAFROMZC'
     */
    VITALALL_Y.OUTTIB[0] = VITALALL_DW.VITALMAINLINE_o26;
    VITALALL_Y.OUTTIB[1] = false;
    VITALALL_Y.OUTTIB[2] = false;
    VITALALL_Y.OUTTIB[3] = false;
    VITALALL_Y.OUTTIB[4] = false;
    VITALALL_Y.OUTTIB[5] = false;
    VITALALL_Y.OUTTIB[6] = false;
    VITALALL_Y.OUTTIB[7] = false;
    VITALALL_Y.OUTTIB[8] = VITALALL_DW.VITALMAINLINE_o30[0];
    VITALALL_Y.OUTTIB[9] = VITALALL_DW.VITALMAINLINE_o29[0];
    VITALALL_Y.OUTTIB[10] = VITALALL_DW.VITALMAINLINE_o30[0];
    VITALALL_Y.OUTTIB[11] = VITALALL_DW.VITALMAINLINE_o29[0];
    VITALALL_Y.OUTTIB[12] = VITALALL_DW.VITALMAINLINE_o30[1];
    VITALALL_Y.OUTTIB[13] = VITALALL_DW.VITALMAINLINE_o29[1];
    VITALALL_Y.OUTTIB[14] = VITALALL_DW.VITALMAINLINE_o30[1];
    VITALALL_Y.OUTTIB[15] = VITALALL_DW.VITALMAINLINE_o29[1];
    VITALALL_Y.OUTTIB[16] = VITALALL_DW.VITALMAINLINE_o30[2];
    VITALALL_Y.OUTTIB[17] = VITALALL_DW.VITALMAINLINE_o29[2];
    VITALALL_Y.OUTTIB[18] = false;
    VITALALL_Y.OUTTIB[19] = false;
    VITALALL_Y.OUTTIB[20] = false;
    VITALALL_Y.OUTTIB[21] = false;
    VITALALL_Y.OUTTIB[22] = false;
    VITALALL_Y.OUTTIB[23] = false;
    VITALALL_Y.OUTTIB[24] = VITALALL_U.DATAFROMZC[29];
    VITALALL_Y.OUTTIB[25] = VITALALL_U.DATAFROMZC[37];
    VITALALL_Y.OUTTIB[26] = false;
    VITALALL_Y.OUTTIB[27] = false;
    VITALALL_Y.OUTTIB[28] = VITALALL_U.DATAFROMZC[30];
    VITALALL_Y.OUTTIB[29] = VITALALL_U.DATAFROMZC[38];
    VITALALL_Y.OUTTIB[30] = false;
    VITALALL_Y.OUTTIB[31] = false;

    /* Outport: '<Root>/OUTT2' incorporates:
     *  Constant: '<S5>/ZERO'
     *  Inport: '<Root>/DATAFROMZC'
     */
    VITALALL_Y.OUTT2[0] = VITALALL_U.DATAFROMZC[31];
    VITALALL_Y.OUTT2[1] = VITALALL_U.DATAFROMZC[39];
    VITALALL_Y.OUTT2[2] = false;
    VITALALL_Y.OUTT2[3] = false;
    VITALALL_Y.OUTT2[4] = VITALALL_U.DATAFROMZC[32];
    VITALALL_Y.OUTT2[5] = VITALALL_U.DATAFROMZC[40];
    VITALALL_Y.OUTT2[6] = false;
    VITALALL_Y.OUTT2[7] = false;

    /* Outport: '<Root>/OUTT3' incorporates:
     *  Constant: '<S5>/ZERO'
     *  Inport: '<Root>/DATAFROMZC'
     */
    VITALALL_Y.OUTT3[0] = VITALALL_DW.VITALMAINLINE_o30[3];
    VITALALL_Y.OUTT3[1] = VITALALL_DW.VITALMAINLINE_o29[3];
    VITALALL_Y.OUTT3[2] = VITALALL_DW.VITALMAINLINE_o30[3];
    VITALALL_Y.OUTT3[3] = VITALALL_DW.VITALMAINLINE_o29[3];
    VITALALL_Y.OUTT3[4] = VITALALL_DW.VITALMAINLINE_o30[4];
    VITALALL_Y.OUTT3[5] = VITALALL_DW.VITALMAINLINE_o29[4];
    VITALALL_Y.OUTT3[6] = VITALALL_DW.VITALMAINLINE_o30[4];
    VITALALL_Y.OUTT3[7] = VITALALL_DW.VITALMAINLINE_o29[4];
    VITALALL_Y.OUTT3[8] = VITALALL_DW.VITALMAINLINE_o26;
    VITALALL_Y.OUTT3[9] = false;
    VITALALL_Y.OUTT3[10] = false;
    VITALALL_Y.OUTT3[11] = false;
    VITALALL_Y.OUTT3[12] = VITALALL_U.DATAFROMZC[33];
    VITALALL_Y.OUTT3[13] = VITALALL_U.DATAFROMZC[41];
    VITALALL_Y.OUTT3[14] = false;
    VITALALL_Y.OUTT3[15] = false;
    VITALALL_Y.OUTT3[16] = VITALALL_U.DATAFROMZC[34];
    VITALALL_Y.OUTT3[17] = VITALALL_U.DATAFROMZC[42];
    VITALALL_Y.OUTT3[18] = false;
    VITALALL_Y.OUTT3[19] = false;
    VITALALL_Y.OUTT3[20] = false;
    VITALALL_Y.OUTT3[21] = false;
    VITALALL_Y.OUTT3[22] = false;
    VITALALL_Y.OUTT3[23] = false;

    /* Outport: '<Root>/OUTDEP' incorporates:
     *  Constant: '<S5>/ZERO'
     */
    VITALALL_Y.OUTDEP[0] = VITALALL_DW.VITALDEPOT_o22;
    VITALALL_Y.OUTDEP[1] = false;
    VITALALL_Y.OUTDEP[2] = false;
    VITALALL_Y.OUTDEP[3] = false;
    VITALALL_Y.OUTDEP[4] = false;
    VITALALL_Y.OUTDEP[5] = false;
    VITALALL_Y.OUTDEP[6] = false;
    VITALALL_Y.OUTDEP[7] = false;
    for (i = 0; i < 6; i++) {
      VITALALL_Y.OUTDEP[i + 8] = VITALALL_DW.VITALDEPOT_o23[i];
    }

    VITALALL_Y.OUTDEP[14] = false;
    VITALALL_Y.OUTDEP[15] = false;
    for (i = 0; i < 2; i++) {
      VITALALL_Y.OUTDEP[i + 16] = VITALALL_DW.VITALDEPOT_o23[i + 6];
    }

    VITALALL_Y.OUTDEP[18] = false;
    VITALALL_Y.OUTDEP[19] = false;
    VITALALL_Y.OUTDEP[20] = false;
    VITALALL_Y.OUTDEP[21] = false;
    VITALALL_Y.OUTDEP[22] = false;
    VITALALL_Y.OUTDEP[23] = false;
    VITALALL_Y.OUTDEP[24] = VITALALL_DW.VITALDEPOT_o25[0];
    VITALALL_Y.OUTDEP[25] = VITALALL_DW.VITALDEPOT_o24[0];
    VITALALL_Y.OUTDEP[26] = VITALALL_DW.VITALDEPOT_o25[2];
    VITALALL_Y.OUTDEP[27] = VITALALL_DW.VITALDEPOT_o24[2];
    VITALALL_Y.OUTDEP[28] = VITALALL_DW.VITALDEPOT_o25[3];
    VITALALL_Y.OUTDEP[29] = VITALALL_DW.VITALDEPOT_o24[3];
    VITALALL_Y.OUTDEP[30] = false;
    VITALALL_Y.OUTDEP[31] = false;
    VITALALL_Y.OUTDEP[32] = VITALALL_DW.VITALDEPOT_o25[1];
    VITALALL_Y.OUTDEP[33] = VITALALL_DW.VITALDEPOT_o24[1];
    VITALALL_Y.OUTDEP[34] = VITALALL_DW.VITALDEPOT_o25[1];
    VITALALL_Y.OUTDEP[35] = VITALALL_DW.VITALDEPOT_o24[1];
    VITALALL_Y.OUTDEP[36] = false;
    VITALALL_Y.OUTDEP[37] = false;
    VITALALL_Y.OUTDEP[38] = false;
    VITALALL_Y.OUTDEP[39] = false;

    /* End of Outport: '<Root>/OUTDEP' */

    /* Outport: '<Root>/SIMULATION' */
    VITALALL_Y.SIMULATION[0] = VITALALL_DW.VITALMAINLINE_o26;
    VITALALL_Y.SIMULATION[1] = VITALALL_DW.VITALDEPOT_o22;
    for (i = 0; i < 8; i++) {
      VITALALL_Y.SIMULATION[i + 2] = VITALALL_DW.VITALMAINLINE_o27[i];
    }

    for (i = 0; i < 2; i++) {
      VITALALL_Y.SIMULATION[i + 10] = VITALALL_DW.VITALMAINLINE_o28[i];
    }

    for (i = 0; i < 8; i++) {
      VITALALL_Y.SIMULATION[i + 12] = VITALALL_DW.VITALDEPOT_o23[i];
    }

    for (i = 0; i < 5; i++) {
      VITALALL_Y.SIMULATION[i + 20] = VITALALL_DW.VITALMAINLINE_o29[i];
    }

    for (i = 0; i < 4; i++) {
      VITALALL_Y.SIMULATION[i + 25] = VITALALL_DW.VITALDEPOT_o24[i];
    }

    for (i = 0; i < 5; i++) {
      VITALALL_Y.SIMULATION[i + 29] = VITALALL_DW.VITALMAINLINE_o30[i];
    }

    for (i = 0; i < 4; i++) {
      VITALALL_Y.SIMULATION[i + 34] = VITALALL_DW.VITALDEPOT_o25[i];
    }

    for (i = 0; i < 5; i++) {
      VITALALL_Y.SIMULATION[i + 38] = VITALALL_DW.VITALMAINLINE_o31[i];
    }

    for (i = 0; i < 4; i++) {
      VITALALL_Y.SIMULATION[i + 43] = VITALALL_DW.VITALDEPOT_o26[i];
    }

    /* End of Outport: '<Root>/SIMULATION' */

    /* Outputs for Atomic SubSystem: '<S47>/ROUTE' */

    /* Inport: '<Root>/INTIB' incorporates:
     *  Constant: '<S5>/ONE'
     *  Inport: '<Root>/DATAFROMNV'
     */
    ROUTE(VITALALL_DW.VITALMAINLINE_o27[0], VITALALL_U.INTIB[2],
          VITALALL_U.INTIB[4], true, VITALALL_DW.VITALMAINLINE_o5[6],
          VITALALL_U.DATAFROMNV[54], VITALALL_DW.VITALMAINLINE_o25[4],
          &VITALALL_DW.ROUTE_n);

    /* End of Outputs for SubSystem: '<S47>/ROUTE' */

    /* Outputs for Atomic SubSystem: '<S48>/ROUTE' */
    ROUTE(VITALALL_DW.VITALMAINLINE_o27[0], VITALALL_U.INTIB[2],
          VITALALL_U.INTIB[5], VITALALL_U.INTIB[6],
          VITALALL_DW.VITALMAINLINE_o5[17], VITALALL_U.DATAFROMNV[54],
          VITALALL_DW.VITALMAINLINE_o25[5], &VITALALL_DW.ROUTE_d);

    /* End of Outputs for SubSystem: '<S48>/ROUTE' */

    /* Outputs for Atomic SubSystem: '<S49>/ROUTE' */
    ROUTE(VITALALL_DW.VITALMAINLINE_o28[0], VITALALL_U.INTIB[2],
          VITALALL_U.INTIB[5], VITALALL_U.INTIB[7],
          VITALALL_DW.VITALMAINLINE_o7[6], VITALALL_U.DATAFROMNV[54],
          VITALALL_DW.VITALDEPOT_o21[6], &VITALALL_DW.ROUTE_dj);

    /* End of Outputs for SubSystem: '<S49>/ROUTE' */

    /* Outputs for Atomic SubSystem: '<S50>/ROUTE' */
    ROUTE(VITALALL_DW.VITALMAINLINE_o27[2], VITALALL_U.INTIB[2],
          VITALALL_U.INTIB[4], true, VITALALL_DW.VITALMAINLINE_o6[0],
          VITALALL_U.DATAFROMNV[56], VITALALL_DW.VITALMAINLINE_o25[0],
          &VITALALL_DW.ROUTE_h);

    /* End of Outputs for SubSystem: '<S50>/ROUTE' */

    /* Outputs for Atomic SubSystem: '<S52>/ROUTE' */
    ROUTE(VITALALL_DW.VITALMAINLINE_o27[2], VITALALL_U.INTIB[3],
          VITALALL_U.INTIB[4], true, VITALALL_DW.VITALMAINLINE_o6[10],
          VITALALL_U.DATAFROMNV[56], VITALALL_DW.VITALMAINLINE_o25[1],
          &VITALALL_DW.ROUTE_p);

    /* End of Outputs for SubSystem: '<S52>/ROUTE' */

    /* Outputs for Atomic SubSystem: '<S53>/ROUTE' */

    /* Inport: '<Root>/INT3' incorporates:
     *  Constant: '<S5>/ONE'
     *  Inport: '<Root>/DATAFROMNV'
     */
    ROUTE(VITALALL_DW.VITALMAINLINE_o27[4], VITALALL_U.INT3[3], VITALALL_U.INT3
          [4], true, VITALALL_DW.VITALMAINLINE_o5[20], VITALALL_U.DATAFROMNV[58],
          VITALALL_DW.VITALMAINLINE_o25[7], &VITALALL_DW.ROUTE_e);

    /* End of Outputs for SubSystem: '<S53>/ROUTE' */

    /* Outputs for Atomic SubSystem: '<S54>/ROUTE' */
    ROUTE(VITALALL_DW.VITALMAINLINE_o27[6], VITALALL_U.INT3[2], VITALALL_U.INT3
          [4], true, VITALALL_DW.VITALMAINLINE_o6[3], VITALALL_U.DATAFROMNV[60],
          VITALALL_DW.VITALMAINLINE_o25[2], &VITALALL_DW.ROUTE_a);

    /* End of Outputs for SubSystem: '<S54>/ROUTE' */

    /* Outputs for Atomic SubSystem: '<S57>/ROUTE' */

    /* Inport: '<Root>/INTIB' incorporates:
     *  Inport: '<Root>/DATAFROMNV'
     */
    ROUTE(VITALALL_DW.VITALMAINLINE_o27[1], VITALALL_U.INTIB[2],
          VITALALL_U.INTIB[4], VITALALL_U.INTIB[6],
          VITALALL_DW.VITALMAINLINE_o5[17], VITALALL_U.DATAFROMNV[55],
          VITALALL_DW.VITALMAINLINE_o25[5], &VITALALL_DW.ROUTE_f);

    /* End of Outputs for SubSystem: '<S57>/ROUTE' */

    /* Outputs for Atomic SubSystem: '<S59>/ROUTE' */
    ROUTE(VITALALL_DW.VITALMAINLINE_o27[3], VITALALL_U.INTIB[2],
          VITALALL_U.INTIB[5], VITALALL_U.INTIB[6],
          VITALALL_DW.VITALMAINLINE_o6[0], VITALALL_U.DATAFROMNV[57],
          VITALALL_DW.VITALMAINLINE_o25[0], &VITALALL_DW.ROUTE_j);

    /* End of Outputs for SubSystem: '<S59>/ROUTE' */

    /* Outputs for Atomic SubSystem: '<S60>/ROUTE' */

    /* Inport: '<Root>/INT3' incorporates:
     *  Constant: '<S5>/ONE'
     *  Inport: '<Root>/DATAFROMNV'
     */
    ROUTE(VITALALL_DW.VITALMAINLINE_o27[5], VITALALL_U.INT3[2], VITALALL_U.INT3
          [5], true, VITALALL_DW.VITALMAINLINE_o5[9], VITALALL_U.DATAFROMNV[59],
          VITALALL_DW.VITALMAINLINE_o25[6], &VITALALL_DW.ROUTE_aw);

    /* End of Outputs for SubSystem: '<S60>/ROUTE' */

    /* Outputs for Atomic SubSystem: '<S62>/ROUTE' */
    ROUTE(VITALALL_DW.VITALMAINLINE_o27[5], VITALALL_U.INT3[2], VITALALL_U.INT3
          [4], true, VITALALL_DW.VITALMAINLINE_o5[20], VITALALL_U.DATAFROMNV[59],
          VITALALL_DW.VITALMAINLINE_o25[7], &VITALALL_DW.ROUTE_i);

    /* End of Outputs for SubSystem: '<S62>/ROUTE' */

    /* Outputs for Atomic SubSystem: '<S63>/ROUTE' */
    ROUTE(VITALALL_DW.VITALMAINLINE_o27[7], VITALALL_U.INT3[3], VITALALL_U.INT3
          [4], true, VITALALL_DW.VITALMAINLINE_o6[3], VITALALL_U.DATAFROMNV[61],
          VITALALL_DW.VITALMAINLINE_o25[2], &VITALALL_DW.ROUTE_f0);

    /* End of Outputs for SubSystem: '<S63>/ROUTE' */

    /* Outputs for Atomic SubSystem: '<S64>/ROUTE' */
    ROUTE(VITALALL_DW.VITALMAINLINE_o27[7], VITALALL_U.INT3[2], VITALALL_U.INT3
          [4], true, VITALALL_DW.VITALMAINLINE_o6[14], VITALALL_U.DATAFROMNV[61],
          VITALALL_DW.VITALMAINLINE_o25[3], &VITALALL_DW.ROUTE_h3);

    /* End of Outputs for SubSystem: '<S64>/ROUTE' */

    /* Outputs for Atomic SubSystem: '<S65>/ROUTE' */

    /* Inport: '<Root>/INTIB' incorporates:
     *  Inport: '<Root>/DATAFROMNV'
     */
    ROUTE(VITALALL_DW.VITALDEPOT_o23[7], VITALALL_U.INTIB[2], VITALALL_U.INTIB[5],
          VITALALL_U.INTIB[7], VITALALL_DW.VITALMAINLINE_o8[0],
          VITALALL_U.DATAFROMNV[62], VITALALL_DW.VITALMAINLINE_o25[0],
          &VITALALL_DW.ROUTE_g);

    /* End of Outputs for SubSystem: '<S65>/ROUTE' */
  }

  {
    int32_T i;

    /* Update for Memory: '<S11>/Memory' */
    for (i = 0; i < 2; i++) {
      VITALALL_DW.Memory_PreviousInput[i] = VITALALL_DW.VITALDEPOT_o1[i];
    }

    /* End of Update for Memory: '<S11>/Memory' */
    /* Update for ModelReference: '<S11>/VITAL MAINLINE' */
    VITALMAIN_Update();

    /* Update for ModelReference: '<S11>/VITAL DEPOT' */
    VITALDEPOT_Update();
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  VITALALL_M->Timing.t[0] =
    (++VITALALL_M->Timing.clockTick0) * VITALALL_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.1s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.1, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    VITALALL_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void VITALALL_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&VITALALL_M->solverInfo,
                          &VITALALL_M->Timing.simTimeStep);
    rtsiSetTPtr(&VITALALL_M->solverInfo, &rtmGetTPtr(VITALALL_M));
    rtsiSetStepSizePtr(&VITALALL_M->solverInfo, &VITALALL_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&VITALALL_M->solverInfo, ((const char_T **)
      (&rtmGetErrorStatus(VITALALL_M))));
    rtsiSetRTModelPtr(&VITALALL_M->solverInfo, VITALALL_M);
  }

  rtsiSetSimTimeStep(&VITALALL_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&VITALALL_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(VITALALL_M, &VITALALL_M->Timing.tArray[0]);
  VITALALL_M->Timing.stepSize0 = 0.1;

  {
    static uint32_T *clockTickPtrs[2];
    static real_T *taskTimePtrs[2];
    VITALALL_TimingBrdg.nTasks = 2;
    clockTickPtrs[0] = &(VITALALL_M->Timing.clockTick0);
    clockTickPtrs[1] = &(VITALALL_M->Timing.clockTick1);
    VITALALL_TimingBrdg.clockTick = clockTickPtrs;
    VITALALL_TimingBrdg.clockTickH = (NULL);
    taskTimePtrs[0] = &(VITALALL_M->Timing.t[0]);
    taskTimePtrs[1] = (NULL);
    VITALALL_TimingBrdg.taskTime = taskTimePtrs;
  }

  /* Model Initialize fcn for ModelReference Block: '<S11>/VITAL DEPOT' */
  VITALDEPOT_initialize(rtmGetErrorStatusPointer(VITALALL_M),
                        &(VITALALL_M->solverInfo), &VITALALL_TimingBrdg, 0, 1);

  /* Model Initialize fcn for ModelReference Block: '<S11>/VITAL MAINLINE' */
  VITALMAIN_initialize(rtmGetErrorStatusPointer(VITALALL_M),
                       &(VITALALL_M->solverInfo), &VITALALL_TimingBrdg, 0, 1);

  /* SystemInitialize for ModelReference: '<S11>/VITAL MAINLINE' */
  VITALMAIN_Init();

  /* SystemInitialize for ModelReference: '<S11>/VITAL DEPOT' */
  VITALDEPOT_Init();
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
