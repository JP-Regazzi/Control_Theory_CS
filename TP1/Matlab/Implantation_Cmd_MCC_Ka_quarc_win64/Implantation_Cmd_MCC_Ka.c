/*
 * Implantation_Cmd_MCC_Ka.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Implantation_Cmd_MCC_Ka".
 *
 * Model version              : 9.0
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Thu Oct 19 10:26:00 2023
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Implantation_Cmd_MCC_Ka.h"
#include "rtwtypes.h"
#include "Implantation_Cmd_MCC_Ka_private.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "Implantation_Cmd_MCC_Ka_dt.h"

/* Block signals (default storage) */
B_Implantation_Cmd_MCC_Ka_T Implantation_Cmd_MCC_Ka_B;

/* Block states (default storage) */
DW_Implantation_Cmd_MCC_Ka_T Implantation_Cmd_MCC_Ka_DW;

/* Real-time model */
static RT_MODEL_Implantation_Cmd_MCC_T Implantation_Cmd_MCC_Ka_M_;
RT_MODEL_Implantation_Cmd_MCC_T *const Implantation_Cmd_MCC_Ka_M =
  &Implantation_Cmd_MCC_Ka_M_;

/* Model output function */
void Implantation_Cmd_MCC_Ka_output(void)
{
  /* local block i/o variables */
  real_T rtb_HILRead_o4;
  real_T rtb_HILRead_o10;
  real_T rtb_HILRead_o11;
  real_T rtb_HILRead_o12;
  real_T rtb_HILRead_o13;
  real_T rtb_HILRead_o14;
  real_T rtb_HILRead_o15;
  boolean_T rtb_HILRead_o5;
  boolean_T rtb_HILRead_o6;
  boolean_T rtb_HILRead_o7;
  real_T rtb_Add3;
  real_T rtb_Gain1;
  real_T rtb_Pitchcountstodeg;
  real_T rtb_PulseGenerator;

  /* S-Function (hil_read_block): '<S1>/HIL Read' */

  /* S-Function Block: Implantation_Cmd_MCC_Ka/Quanser Aero USB Interface/HIL Read (hil_read_block) */
  {
    t_error result = hil_read(Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card,
      Implantation_Cmd_MCC_Ka_P.HILRead_analog_channels, 2U,
      Implantation_Cmd_MCC_Ka_P.HILRead_encoder_channels, 2U,
      Implantation_Cmd_MCC_Ka_P.HILRead_digital_channels, 3U,
      Implantation_Cmd_MCC_Ka_P.HILRead_other_channels, 8U,
      &Implantation_Cmd_MCC_Ka_DW.HILRead_AnalogBuffer[0],
      &Implantation_Cmd_MCC_Ka_DW.HILRead_EncoderBuffer[0],
      &Implantation_Cmd_MCC_Ka_DW.HILRead_DigitalBuffer[0],
      &Implantation_Cmd_MCC_Ka_DW.HILRead_OtherBuffer[0]
      );
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Implantation_Cmd_MCC_Ka_M, _rt_error_message);
    } else {
      Implantation_Cmd_MCC_Ka_B.HILRead_o1 =
        Implantation_Cmd_MCC_Ka_DW.HILRead_AnalogBuffer[0];
      Implantation_Cmd_MCC_Ka_B.HILRead_o2 =
        Implantation_Cmd_MCC_Ka_DW.HILRead_AnalogBuffer[1];
      rtb_PulseGenerator = Implantation_Cmd_MCC_Ka_DW.HILRead_EncoderBuffer[0];
      rtb_HILRead_o4 = Implantation_Cmd_MCC_Ka_DW.HILRead_EncoderBuffer[1];
      rtb_HILRead_o5 = Implantation_Cmd_MCC_Ka_DW.HILRead_DigitalBuffer[0];
      rtb_HILRead_o6 = Implantation_Cmd_MCC_Ka_DW.HILRead_DigitalBuffer[1];
      rtb_HILRead_o7 = Implantation_Cmd_MCC_Ka_DW.HILRead_DigitalBuffer[2];
      rtb_Gain1 = Implantation_Cmd_MCC_Ka_DW.HILRead_OtherBuffer[0];
      rtb_Add3 = Implantation_Cmd_MCC_Ka_DW.HILRead_OtherBuffer[1];
      rtb_HILRead_o10 = Implantation_Cmd_MCC_Ka_DW.HILRead_OtherBuffer[2];
      rtb_HILRead_o11 = Implantation_Cmd_MCC_Ka_DW.HILRead_OtherBuffer[3];
      rtb_HILRead_o12 = Implantation_Cmd_MCC_Ka_DW.HILRead_OtherBuffer[4];
      rtb_HILRead_o13 = Implantation_Cmd_MCC_Ka_DW.HILRead_OtherBuffer[5];
      rtb_HILRead_o14 = Implantation_Cmd_MCC_Ka_DW.HILRead_OtherBuffer[6];
      rtb_HILRead_o15 = Implantation_Cmd_MCC_Ka_DW.HILRead_OtherBuffer[7];
    }
  }

  /* Gain: '<S1>/Pitch: counts to deg' */
  rtb_Pitchcountstodeg = Implantation_Cmd_MCC_Ka_P.Pitchcountstodeg_Gain *
    rtb_PulseGenerator;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (Implantation_Cmd_MCC_Ka_DW.clockTickCounter <
                        Implantation_Cmd_MCC_Ka_P.PulseGenerator_Duty) &&
    (Implantation_Cmd_MCC_Ka_DW.clockTickCounter >= 0) ?
    Implantation_Cmd_MCC_Ka_P.PulseGenerator_Amp : 0.0;
  if (Implantation_Cmd_MCC_Ka_DW.clockTickCounter >=
      Implantation_Cmd_MCC_Ka_P.PulseGenerator_Period - 1.0) {
    Implantation_Cmd_MCC_Ka_DW.clockTickCounter = 0;
  } else {
    Implantation_Cmd_MCC_Ka_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* Sum: '<Root>/Add1' incorporates:
   *  Constant: '<Root>/Constant'
   */
  Implantation_Cmd_MCC_Ka_B.omega_refrads = rtb_PulseGenerator -
    Implantation_Cmd_MCC_Ka_P.Constant_Value;

  /* Gain: '<Root>/Gain2' */
  Implantation_Cmd_MCC_Ka_B.Gain2[0] = Implantation_Cmd_MCC_Ka_P.Gain2_Gain *
    rtb_Gain1;
  Implantation_Cmd_MCC_Ka_B.Gain2[1] = Implantation_Cmd_MCC_Ka_P.Gain2_Gain *
    rtb_Add3;

  /* Sum: '<Root>/Add2' */
  rtb_Add3 = Implantation_Cmd_MCC_Ka_B.omega_refrads -
    Implantation_Cmd_MCC_Ka_B.Gain2[0];

  /* DiscreteTransferFcn: '<Root>/Integrateur1' incorporates:
   *  Gain: '<Root>/Gain3'
   */
  Implantation_Cmd_MCC_Ka_DW.Integrateur1_tmp = (Implantation_Cmd_MCC_Ka_P.Kz *
    rtb_Add3 - Implantation_Cmd_MCC_Ka_P.Integrateur1_DenCoef[1] *
    Implantation_Cmd_MCC_Ka_DW.Integrateur1_states) /
    Implantation_Cmd_MCC_Ka_P.Integrateur1_DenCoef[0];
  rtb_Add3 = Implantation_Cmd_MCC_Ka_P.Integrateur1_NumCoef[0] *
    Implantation_Cmd_MCC_Ka_DW.Integrateur1_tmp;

  /* Gain: '<Root>/Gain1' */
  rtb_Gain1 = Implantation_Cmd_MCC_Ka_P.Kw * Implantation_Cmd_MCC_Ka_B.Gain2[0];

  /* Sum: '<Root>/Add3' incorporates:
   *  DiscreteTransferFcn: '<Root>/Integrateur1'
   */
  rtb_PulseGenerator = (Implantation_Cmd_MCC_Ka_P.Integrateur1_NumCoef[1] *
                        Implantation_Cmd_MCC_Ka_DW.Integrateur1_states +
                        rtb_Add3) - rtb_Gain1;

  /* Saturate: '<Root>/+//- 24V' */
  if (rtb_PulseGenerator > Implantation_Cmd_MCC_Ka_P.u4V_UpperSat) {
    /* Saturate: '<Root>/+//- 24V' */
    Implantation_Cmd_MCC_Ka_B.u4V = Implantation_Cmd_MCC_Ka_P.u4V_UpperSat;
  } else if (rtb_PulseGenerator < Implantation_Cmd_MCC_Ka_P.u4V_LowerSat) {
    /* Saturate: '<Root>/+//- 24V' */
    Implantation_Cmd_MCC_Ka_B.u4V = Implantation_Cmd_MCC_Ka_P.u4V_LowerSat;
  } else {
    /* Saturate: '<Root>/+//- 24V' */
    Implantation_Cmd_MCC_Ka_B.u4V = rtb_PulseGenerator;
  }

  /* End of Saturate: '<Root>/+//- 24V' */

  /* S-Function (hil_write_block): '<S1>/HIL Write' incorporates:
   *  Constant: '<Root>/Pitch Motor Enable'
   *  Constant: '<Root>/Yaw Constant(deg)2'
   *  Constant: '<Root>/Yaw Enable Motor'
   *  Constant: '<S3>/Constant'
   */

  /* S-Function Block: Implantation_Cmd_MCC_Ka/Quanser Aero USB Interface/HIL Write (hil_write_block) */
  {
    t_error result;
    Implantation_Cmd_MCC_Ka_DW.HILWrite_AnalogBuffer[0] =
      Implantation_Cmd_MCC_Ka_B.u4V;
    Implantation_Cmd_MCC_Ka_DW.HILWrite_AnalogBuffer[1] =
      Implantation_Cmd_MCC_Ka_P.YawConstantdeg2_Value;
    Implantation_Cmd_MCC_Ka_DW.HILWrite_DigitalBuffer[0] =
      (Implantation_Cmd_MCC_Ka_P.PitchMotorEnable_Value != 0);
    Implantation_Cmd_MCC_Ka_DW.HILWrite_DigitalBuffer[1] =
      (Implantation_Cmd_MCC_Ka_P.YawEnableMotor_Value != 0);
    Implantation_Cmd_MCC_Ka_DW.HILWrite_OtherBuffer[0] =
      Implantation_Cmd_MCC_Ka_P.BaseLEDColour_color[0];
    Implantation_Cmd_MCC_Ka_DW.HILWrite_OtherBuffer[1] =
      Implantation_Cmd_MCC_Ka_P.BaseLEDColour_color[1];
    Implantation_Cmd_MCC_Ka_DW.HILWrite_OtherBuffer[2] =
      Implantation_Cmd_MCC_Ka_P.BaseLEDColour_color[2];
    result = hil_write(Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card,
                       Implantation_Cmd_MCC_Ka_P.HILWrite_analog_channels, 2U,
                       NULL, 0U,
                       Implantation_Cmd_MCC_Ka_P.HILWrite_digital_channels, 2U,
                       Implantation_Cmd_MCC_Ka_P.HILWrite_other_channels, 3U,
                       &Implantation_Cmd_MCC_Ka_DW.HILWrite_AnalogBuffer[0],
                       NULL,
                       &Implantation_Cmd_MCC_Ka_DW.HILWrite_DigitalBuffer[0],
                       &Implantation_Cmd_MCC_Ka_DW.HILWrite_OtherBuffer[0]
                       );
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Implantation_Cmd_MCC_Ka_M, _rt_error_message);
    }
  }

  /* Gain: '<S2>/Gain' */
  Implantation_Cmd_MCC_Ka_B.Gain = Implantation_Cmd_MCC_Ka_P.Gain_Gain *
    rtb_Pitchcountstodeg;

  /* Clock: '<Root>/Clock' */
  Implantation_Cmd_MCC_Ka_B.Clock = Implantation_Cmd_MCC_Ka_M->Timing.t[0];
}

/* Model update function */
void Implantation_Cmd_MCC_Ka_update(void)
{
  /* Update for DiscreteTransferFcn: '<Root>/Integrateur1' */
  Implantation_Cmd_MCC_Ka_DW.Integrateur1_states =
    Implantation_Cmd_MCC_Ka_DW.Integrateur1_tmp;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Implantation_Cmd_MCC_Ka_M->Timing.clockTick0)) {
    ++Implantation_Cmd_MCC_Ka_M->Timing.clockTickH0;
  }

  Implantation_Cmd_MCC_Ka_M->Timing.t[0] =
    Implantation_Cmd_MCC_Ka_M->Timing.clockTick0 *
    Implantation_Cmd_MCC_Ka_M->Timing.stepSize0 +
    Implantation_Cmd_MCC_Ka_M->Timing.clockTickH0 *
    Implantation_Cmd_MCC_Ka_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.05s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++Implantation_Cmd_MCC_Ka_M->Timing.clockTick1)) {
      ++Implantation_Cmd_MCC_Ka_M->Timing.clockTickH1;
    }

    Implantation_Cmd_MCC_Ka_M->Timing.t[1] =
      Implantation_Cmd_MCC_Ka_M->Timing.clockTick1 *
      Implantation_Cmd_MCC_Ka_M->Timing.stepSize1 +
      Implantation_Cmd_MCC_Ka_M->Timing.clockTickH1 *
      Implantation_Cmd_MCC_Ka_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void Implantation_Cmd_MCC_Ka_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<S1>/HIL Initialize' */

  /* S-Function Block: Implantation_Cmd_MCC_Ka/Quanser Aero USB Interface/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("quanser_aero_usb", "0",
                      &Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Implantation_Cmd_MCC_Ka_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_watchdog_clear(Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Implantation_Cmd_MCC_Ka_M, _rt_error_message);
      return;
    }

    if ((Implantation_Cmd_MCC_Ka_P.HILInitialize_AIPStart && !is_switching) ||
        (Implantation_Cmd_MCC_Ka_P.HILInitialize_AIPEnter && is_switching)) {
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_AIMinimums[0] =
        (Implantation_Cmd_MCC_Ka_P.HILInitialize_AILow);
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_AIMinimums[1] =
        (Implantation_Cmd_MCC_Ka_P.HILInitialize_AILow);
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_AIMaximums[0] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_AIHigh;
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_AIMaximums[1] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_AIHigh;
      result = hil_set_analog_input_ranges
        (Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card,
         Implantation_Cmd_MCC_Ka_P.HILInitialize_AIChannels, 2U,
         &Implantation_Cmd_MCC_Ka_DW.HILInitialize_AIMinimums[0],
         &Implantation_Cmd_MCC_Ka_DW.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_MCC_Ka_M, _rt_error_message);
        return;
      }
    }

    if ((Implantation_Cmd_MCC_Ka_P.HILInitialize_AOPStart && !is_switching) ||
        (Implantation_Cmd_MCC_Ka_P.HILInitialize_AOPEnter && is_switching)) {
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_AOMinimums[0] =
        (Implantation_Cmd_MCC_Ka_P.HILInitialize_AOLow);
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_AOMinimums[1] =
        (Implantation_Cmd_MCC_Ka_P.HILInitialize_AOLow);
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_AOMaximums[0] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_AOHigh;
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_AOMaximums[1] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_AOHigh;
      result = hil_set_analog_output_ranges
        (Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card,
         Implantation_Cmd_MCC_Ka_P.HILInitialize_AOChannels, 2U,
         &Implantation_Cmd_MCC_Ka_DW.HILInitialize_AOMinimums[0],
         &Implantation_Cmd_MCC_Ka_DW.HILInitialize_AOMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_MCC_Ka_M, _rt_error_message);
        return;
      }
    }

    if ((Implantation_Cmd_MCC_Ka_P.HILInitialize_AOStart && !is_switching) ||
        (Implantation_Cmd_MCC_Ka_P.HILInitialize_AOEnter && is_switching)) {
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_AOVoltages[0] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_AOInitial;
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_AOVoltages[1] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_AOInitial;
      result = hil_write_analog(Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card,
        Implantation_Cmd_MCC_Ka_P.HILInitialize_AOChannels, 2U,
        &Implantation_Cmd_MCC_Ka_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_MCC_Ka_M, _rt_error_message);
        return;
      }
    }

    if (Implantation_Cmd_MCC_Ka_P.HILInitialize_AOReset) {
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_AOVoltages[0] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_AOWatchdog;
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_AOVoltages[1] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_AOWatchdog;
      result = hil_watchdog_set_analog_expiration_state
        (Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card,
         Implantation_Cmd_MCC_Ka_P.HILInitialize_AOChannels, 2U,
         &Implantation_Cmd_MCC_Ka_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_MCC_Ka_M, _rt_error_message);
        return;
      }
    }

    result = hil_set_digital_directions
      (Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card, NULL, 0U,
       Implantation_Cmd_MCC_Ka_P.HILInitialize_DOChannels, 2U);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Implantation_Cmd_MCC_Ka_M, _rt_error_message);
      return;
    }

    if ((Implantation_Cmd_MCC_Ka_P.HILInitialize_DOStart && !is_switching) ||
        (Implantation_Cmd_MCC_Ka_P.HILInitialize_DOEnter && is_switching)) {
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_DOBits[0] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_DOInitial;
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_DOBits[1] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_DOInitial;
      result = hil_write_digital(Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card,
        Implantation_Cmd_MCC_Ka_P.HILInitialize_DOChannels, 2U, (t_boolean *)
        &Implantation_Cmd_MCC_Ka_DW.HILInitialize_DOBits[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_MCC_Ka_M, _rt_error_message);
        return;
      }
    }

    if (Implantation_Cmd_MCC_Ka_P.HILInitialize_DOReset) {
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_DOStates[0] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_DOWatchdog;
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_DOStates[1] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_DOWatchdog;
      result = hil_watchdog_set_digital_expiration_state
        (Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card,
         Implantation_Cmd_MCC_Ka_P.HILInitialize_DOChannels, 2U, (const
          t_digital_state *) &Implantation_Cmd_MCC_Ka_DW.HILInitialize_DOStates
         [0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_MCC_Ka_M, _rt_error_message);
        return;
      }
    }

    if ((Implantation_Cmd_MCC_Ka_P.HILInitialize_EIPStart && !is_switching) ||
        (Implantation_Cmd_MCC_Ka_P.HILInitialize_EIPEnter && is_switching)) {
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_QuadratureModes[0] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_EIQuadrature;
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_QuadratureModes[1] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_EIQuadrature;
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_QuadratureModes[2] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_EIQuadrature;
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_QuadratureModes[3] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_EIQuadrature;
      result = hil_set_encoder_quadrature_mode
        (Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card,
         Implantation_Cmd_MCC_Ka_P.HILInitialize_EIChannels, 4U,
         (t_encoder_quadrature_mode *)
         &Implantation_Cmd_MCC_Ka_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_MCC_Ka_M, _rt_error_message);
        return;
      }
    }

    if ((Implantation_Cmd_MCC_Ka_P.HILInitialize_EIStart && !is_switching) ||
        (Implantation_Cmd_MCC_Ka_P.HILInitialize_EIEnter && is_switching)) {
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_InitialEICounts[0] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_EIInitial;
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_InitialEICounts[1] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_EIInitial;
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_InitialEICounts[2] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_EIInitial;
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_InitialEICounts[3] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_EIInitial;
      result = hil_set_encoder_counts
        (Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card,
         Implantation_Cmd_MCC_Ka_P.HILInitialize_EIChannels, 4U,
         &Implantation_Cmd_MCC_Ka_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_MCC_Ka_M, _rt_error_message);
        return;
      }
    }

    if ((Implantation_Cmd_MCC_Ka_P.HILInitialize_OOStart && !is_switching) ||
        (Implantation_Cmd_MCC_Ka_P.HILInitialize_OOEnter && is_switching)) {
      result = hil_write_other(Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card,
        Implantation_Cmd_MCC_Ka_P.HILInitialize_OOChannels, 3U,
        Implantation_Cmd_MCC_Ka_P.HILInitialize_OOInitial);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_MCC_Ka_M, _rt_error_message);
        return;
      }
    }

    if (Implantation_Cmd_MCC_Ka_P.HILInitialize_OOReset) {
      result = hil_watchdog_set_other_expiration_state
        (Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card,
         Implantation_Cmd_MCC_Ka_P.HILInitialize_OOChannels, 3U,
         Implantation_Cmd_MCC_Ka_P.HILInitialize_OOWatchdog);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_MCC_Ka_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator' */
  Implantation_Cmd_MCC_Ka_DW.clockTickCounter = 0;

  /* InitializeConditions for DiscreteTransferFcn: '<Root>/Integrateur1' */
  Implantation_Cmd_MCC_Ka_DW.Integrateur1_states =
    Implantation_Cmd_MCC_Ka_P.Integrateur1_InitialStates;
}

/* Model terminate function */
void Implantation_Cmd_MCC_Ka_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<S1>/HIL Initialize' */

  /* S-Function Block: Implantation_Cmd_MCC_Ka/Quanser Aero USB Interface/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_analog_outputs = 0;
    t_uint32 num_final_digital_outputs = 0;
    t_uint32 num_final_other_outputs = 0;
    hil_task_stop_all(Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card);
    hil_monitor_stop_all(Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card);
    is_switching = false;
    if ((Implantation_Cmd_MCC_Ka_P.HILInitialize_AOTerminate && !is_switching) ||
        (Implantation_Cmd_MCC_Ka_P.HILInitialize_AOExit && is_switching)) {
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_AOVoltages[0] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_AOFinal;
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_AOVoltages[1] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_AOFinal;
      num_final_analog_outputs = 2U;
    } else {
      num_final_analog_outputs = 0;
    }

    if ((Implantation_Cmd_MCC_Ka_P.HILInitialize_DOTerminate && !is_switching) ||
        (Implantation_Cmd_MCC_Ka_P.HILInitialize_DOExit && is_switching)) {
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_DOBits[0] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_DOFinal;
      Implantation_Cmd_MCC_Ka_DW.HILInitialize_DOBits[1] =
        Implantation_Cmd_MCC_Ka_P.HILInitialize_DOFinal;
      num_final_digital_outputs = 2U;
    } else {
      num_final_digital_outputs = 0;
    }

    if ((Implantation_Cmd_MCC_Ka_P.HILInitialize_OOTerminate && !is_switching) ||
        (Implantation_Cmd_MCC_Ka_P.HILInitialize_OOExit && is_switching)) {
      num_final_other_outputs = 3U;
    } else {
      num_final_other_outputs = 0;
    }

    if (0
        || num_final_analog_outputs > 0
        || num_final_digital_outputs > 0
        || num_final_other_outputs > 0
        ) {
      /* Attempt to write the final outputs atomically (due to firmware issue in old Q2-USB). Otherwise write channels individually */
      result = hil_write(Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card
                         , Implantation_Cmd_MCC_Ka_P.HILInitialize_AOChannels,
                         num_final_analog_outputs
                         , NULL, 0
                         , Implantation_Cmd_MCC_Ka_P.HILInitialize_DOChannels,
                         num_final_digital_outputs
                         , Implantation_Cmd_MCC_Ka_P.HILInitialize_OOChannels,
                         num_final_other_outputs
                         , &Implantation_Cmd_MCC_Ka_DW.HILInitialize_AOVoltages
                         [0]
                         , NULL
                         , (t_boolean *)
                         &Implantation_Cmd_MCC_Ka_DW.HILInitialize_DOBits[0]
                         , Implantation_Cmd_MCC_Ka_P.HILInitialize_OOFinal
                         );
      if (result == -QERR_HIL_WRITE_NOT_SUPPORTED) {
        t_error local_result;
        result = 0;

        /* The hil_write operation is not supported by this card. Write final outputs for each channel type */
        if (num_final_analog_outputs > 0) {
          local_result = hil_write_analog
            (Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card,
             Implantation_Cmd_MCC_Ka_P.HILInitialize_AOChannels,
             num_final_analog_outputs,
             &Implantation_Cmd_MCC_Ka_DW.HILInitialize_AOVoltages[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_digital_outputs > 0) {
          local_result = hil_write_digital
            (Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card,
             Implantation_Cmd_MCC_Ka_P.HILInitialize_DOChannels,
             num_final_digital_outputs, (t_boolean *)
             &Implantation_Cmd_MCC_Ka_DW.HILInitialize_DOBits[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_other_outputs > 0) {
          local_result = hil_write_other
            (Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card,
             Implantation_Cmd_MCC_Ka_P.HILInitialize_OOChannels,
             num_final_other_outputs,
             Implantation_Cmd_MCC_Ka_P.HILInitialize_OOFinal);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(Implantation_Cmd_MCC_Ka_M, _rt_error_message);
        }
      }
    }

    hil_task_delete_all(Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card);
    hil_monitor_delete_all(Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card);
    hil_close(Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card);
    Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  Implantation_Cmd_MCC_Ka_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  Implantation_Cmd_MCC_Ka_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  Implantation_Cmd_MCC_Ka_initialize();
}

void MdlTerminate(void)
{
  Implantation_Cmd_MCC_Ka_terminate();
}

/* Registration function */
RT_MODEL_Implantation_Cmd_MCC_T *Implantation_Cmd_MCC_Ka(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Implantation_Cmd_MCC_Ka_M, 0,
                sizeof(RT_MODEL_Implantation_Cmd_MCC_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Implantation_Cmd_MCC_Ka_M->solverInfo,
                          &Implantation_Cmd_MCC_Ka_M->Timing.simTimeStep);
    rtsiSetTPtr(&Implantation_Cmd_MCC_Ka_M->solverInfo, &rtmGetTPtr
                (Implantation_Cmd_MCC_Ka_M));
    rtsiSetStepSizePtr(&Implantation_Cmd_MCC_Ka_M->solverInfo,
                       &Implantation_Cmd_MCC_Ka_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Implantation_Cmd_MCC_Ka_M->solverInfo,
                          (&rtmGetErrorStatus(Implantation_Cmd_MCC_Ka_M)));
    rtsiSetRTModelPtr(&Implantation_Cmd_MCC_Ka_M->solverInfo,
                      Implantation_Cmd_MCC_Ka_M);
  }

  rtsiSetSimTimeStep(&Implantation_Cmd_MCC_Ka_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&Implantation_Cmd_MCC_Ka_M->solverInfo,"FixedStepDiscrete");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Implantation_Cmd_MCC_Ka_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "Implantation_Cmd_MCC_Ka_M points to
       static memory which is guaranteed to be non-NULL" */
    Implantation_Cmd_MCC_Ka_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Implantation_Cmd_MCC_Ka_M->Timing.sampleTimes =
      (&Implantation_Cmd_MCC_Ka_M->Timing.sampleTimesArray[0]);
    Implantation_Cmd_MCC_Ka_M->Timing.offsetTimes =
      (&Implantation_Cmd_MCC_Ka_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Implantation_Cmd_MCC_Ka_M->Timing.sampleTimes[0] = (0.0);
    Implantation_Cmd_MCC_Ka_M->Timing.sampleTimes[1] = (0.05);

    /* task offsets */
    Implantation_Cmd_MCC_Ka_M->Timing.offsetTimes[0] = (0.0);
    Implantation_Cmd_MCC_Ka_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(Implantation_Cmd_MCC_Ka_M,
             &Implantation_Cmd_MCC_Ka_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Implantation_Cmd_MCC_Ka_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    Implantation_Cmd_MCC_Ka_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Implantation_Cmd_MCC_Ka_M, 15.0);
  Implantation_Cmd_MCC_Ka_M->Timing.stepSize0 = 0.05;
  Implantation_Cmd_MCC_Ka_M->Timing.stepSize1 = 0.05;

  /* External mode info */
  Implantation_Cmd_MCC_Ka_M->Sizes.checksums[0] = (2503478335U);
  Implantation_Cmd_MCC_Ka_M->Sizes.checksums[1] = (340419387U);
  Implantation_Cmd_MCC_Ka_M->Sizes.checksums[2] = (3482254984U);
  Implantation_Cmd_MCC_Ka_M->Sizes.checksums[3] = (1012447363U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    Implantation_Cmd_MCC_Ka_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Implantation_Cmd_MCC_Ka_M->extModeInfo,
      &Implantation_Cmd_MCC_Ka_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Implantation_Cmd_MCC_Ka_M->extModeInfo,
                        Implantation_Cmd_MCC_Ka_M->Sizes.checksums);
    rteiSetTPtr(Implantation_Cmd_MCC_Ka_M->extModeInfo, rtmGetTPtr
                (Implantation_Cmd_MCC_Ka_M));
  }

  Implantation_Cmd_MCC_Ka_M->solverInfoPtr =
    (&Implantation_Cmd_MCC_Ka_M->solverInfo);
  Implantation_Cmd_MCC_Ka_M->Timing.stepSize = (0.05);
  rtsiSetFixedStepSize(&Implantation_Cmd_MCC_Ka_M->solverInfo, 0.05);
  rtsiSetSolverMode(&Implantation_Cmd_MCC_Ka_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  Implantation_Cmd_MCC_Ka_M->blockIO = ((void *) &Implantation_Cmd_MCC_Ka_B);
  (void) memset(((void *) &Implantation_Cmd_MCC_Ka_B), 0,
                sizeof(B_Implantation_Cmd_MCC_Ka_T));

  /* parameters */
  Implantation_Cmd_MCC_Ka_M->defaultParam = ((real_T *)
    &Implantation_Cmd_MCC_Ka_P);

  /* states (dwork) */
  Implantation_Cmd_MCC_Ka_M->dwork = ((void *) &Implantation_Cmd_MCC_Ka_DW);
  (void) memset((void *)&Implantation_Cmd_MCC_Ka_DW, 0,
                sizeof(DW_Implantation_Cmd_MCC_Ka_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Implantation_Cmd_MCC_Ka_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 21;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  Implantation_Cmd_MCC_Ka_M->Sizes.numContStates = (0);/* Number of continuous states */
  Implantation_Cmd_MCC_Ka_M->Sizes.numY = (0);/* Number of model outputs */
  Implantation_Cmd_MCC_Ka_M->Sizes.numU = (0);/* Number of model inputs */
  Implantation_Cmd_MCC_Ka_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Implantation_Cmd_MCC_Ka_M->Sizes.numSampTimes = (2);/* Number of sample times */
  Implantation_Cmd_MCC_Ka_M->Sizes.numBlocks = (28);/* Number of blocks */
  Implantation_Cmd_MCC_Ka_M->Sizes.numBlockIO = (8);/* Number of block outputs */
  Implantation_Cmd_MCC_Ka_M->Sizes.numBlockPrms = (119);/* Sum of parameter "widths" */
  return Implantation_Cmd_MCC_Ka_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
