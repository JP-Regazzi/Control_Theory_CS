/*
 * Identification_F.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Identification_F".
 *
 * Model version              : 9.2
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Thu Oct 19 10:31:03 2023
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Identification_F.h"
#include "rtwtypes.h"
#include "Identification_F_private.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "Identification_F_dt.h"

/* Block signals (default storage) */
B_Identification_F_T Identification_F_B;

/* Block states (default storage) */
DW_Identification_F_T Identification_F_DW;

/* Real-time model */
static RT_MODEL_Identification_F_T Identification_F_M_;
RT_MODEL_Identification_F_T *const Identification_F_M = &Identification_F_M_;

/* Model output function */
void Identification_F_output(void)
{
  /* local block i/o variables */
  real_T rtb_FromWs;
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
  real_T rtb_HILRead_o3;

  /* S-Function (hil_read_block): '<S1>/HIL Read' */

  /* S-Function Block: Identification_F/Quanser Aero USB Interface/HIL Read (hil_read_block) */
  {
    t_error result = hil_read(Identification_F_DW.HILInitialize_Card,
      Identification_F_P.HILRead_analog_channels, 2U,
      Identification_F_P.HILRead_encoder_channels, 2U,
      Identification_F_P.HILRead_digital_channels, 3U,
      Identification_F_P.HILRead_other_channels, 8U,
      &Identification_F_DW.HILRead_AnalogBuffer[0],
      &Identification_F_DW.HILRead_EncoderBuffer[0],
      &Identification_F_DW.HILRead_DigitalBuffer[0],
      &Identification_F_DW.HILRead_OtherBuffer[0]
      );
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Identification_F_M, _rt_error_message);
    } else {
      Identification_F_B.HILRead_o1 = Identification_F_DW.HILRead_AnalogBuffer[0];
      Identification_F_B.HILRead_o2 = Identification_F_DW.HILRead_AnalogBuffer[1];
      rtb_HILRead_o3 = Identification_F_DW.HILRead_EncoderBuffer[0];
      rtb_HILRead_o4 = Identification_F_DW.HILRead_EncoderBuffer[1];
      rtb_HILRead_o5 = Identification_F_DW.HILRead_DigitalBuffer[0];
      rtb_HILRead_o6 = Identification_F_DW.HILRead_DigitalBuffer[1];
      rtb_HILRead_o7 = Identification_F_DW.HILRead_DigitalBuffer[2];
      rtb_Gain1 = Identification_F_DW.HILRead_OtherBuffer[0];
      rtb_Add3 = Identification_F_DW.HILRead_OtherBuffer[1];
      rtb_HILRead_o10 = Identification_F_DW.HILRead_OtherBuffer[2];
      rtb_HILRead_o11 = Identification_F_DW.HILRead_OtherBuffer[3];
      rtb_HILRead_o12 = Identification_F_DW.HILRead_OtherBuffer[4];
      rtb_HILRead_o13 = Identification_F_DW.HILRead_OtherBuffer[5];
      rtb_HILRead_o14 = Identification_F_DW.HILRead_OtherBuffer[6];
      rtb_HILRead_o15 = Identification_F_DW.HILRead_OtherBuffer[7];
    }
  }

  /* FromWorkspace: '<S3>/FromWs' */
  {
    real_T *pDataValues = (real_T *) Identification_F_DW.FromWs_PWORK.DataPtr;
    real_T *pTimeValues = (real_T *) Identification_F_DW.FromWs_PWORK.TimePtr;
    int_T currTimeIndex = Identification_F_DW.FromWs_IWORK.PrevIndex;
    real_T t = Identification_F_M->Timing.t[0];

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[13]) {
      currTimeIndex = 12;
    } else {
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }
    }

    Identification_F_DW.FromWs_IWORK.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          rtb_FromWs = pDataValues[currTimeIndex];
        } else {
          rtb_FromWs = pDataValues[currTimeIndex + 1];
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex = currTimeIndex;
        d1 = pDataValues[TimeIndex];
        d2 = pDataValues[TimeIndex + 1];
        rtb_FromWs = (real_T) rtInterpolate(d1, d2, f1, f2);
        pDataValues += 14;
      }
    }
  }

  /* ManualSwitch: '<Root>/Manual Switch' incorporates:
   *  Step: '<Root>/Step'
   */
  if (Identification_F_P.ManualSwitch_CurrentSetting == 1) {
    /* ManualSwitch: '<Root>/Manual Switch' */
    Identification_F_B.ManualSwitch = rtb_FromWs;
  } else if (Identification_F_M->Timing.t[0] < Identification_F_P.Step_Time) {
    /* Step: '<Root>/Step' incorporates:
     *  ManualSwitch: '<Root>/Manual Switch'
     */
    Identification_F_B.ManualSwitch = Identification_F_P.Step_Y0;
  } else {
    /* ManualSwitch: '<Root>/Manual Switch' incorporates:
     *  Step: '<Root>/Step'
     */
    Identification_F_B.ManualSwitch = Identification_F_P.Step_YFinal;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch' */

  /* Gain: '<Root>/Gain2' */
  Identification_F_B.Gain2[0] = Identification_F_P.Gain2_Gain * rtb_Gain1;
  Identification_F_B.Gain2[1] = Identification_F_P.Gain2_Gain * rtb_Add3;

  /* Gain: '<Root>/Gain3' incorporates:
   *  Sum: '<Root>/Add2'
   */
  Identification_F_B.Gain3 = (Identification_F_B.ManualSwitch -
    Identification_F_B.Gain2[0]) * Identification_F_P.Kz;

  /* DiscreteTransferFcn: '<Root>/Integrateur' */
  rtb_Gain1 = Identification_F_B.Gain3;
  Identification_F_DW.Integrateur_tmp = (rtb_Gain1 -
    Identification_F_P.Integrateur_DenCoef[1] *
    Identification_F_DW.Integrateur_states) /
    Identification_F_P.Integrateur_DenCoef[0];
  rtb_Add3 = Identification_F_P.Integrateur_NumCoef[0] *
    Identification_F_DW.Integrateur_tmp;

  /* Gain: '<Root>/Gain1' */
  rtb_Gain1 = Identification_F_P.Kw * Identification_F_B.Gain2[0];

  /* Sum: '<Root>/Add3' incorporates:
   *  DiscreteTransferFcn: '<Root>/Integrateur'
   */
  rtb_Gain1 = (Identification_F_P.Integrateur_NumCoef[1] *
               Identification_F_DW.Integrateur_states + rtb_Add3) - rtb_Gain1;

  /* Saturate: '<Root>/+//- 24V' */
  if (rtb_Gain1 > Identification_F_P.u4V_UpperSat) {
    /* Saturate: '<Root>/+//- 24V' */
    Identification_F_B.VpVolts = Identification_F_P.u4V_UpperSat;
  } else if (rtb_Gain1 < Identification_F_P.u4V_LowerSat) {
    /* Saturate: '<Root>/+//- 24V' */
    Identification_F_B.VpVolts = Identification_F_P.u4V_LowerSat;
  } else {
    /* Saturate: '<Root>/+//- 24V' */
    Identification_F_B.VpVolts = rtb_Gain1;
  }

  /* End of Saturate: '<Root>/+//- 24V' */

  /* S-Function (hil_write_block): '<S1>/HIL Write' incorporates:
   *  Constant: '<Root>/Pitch Motor Enable'
   *  Constant: '<Root>/Yaw Constant(deg)2'
   *  Constant: '<Root>/Yaw Enable Motor'
   *  Constant: '<S4>/Constant'
   */

  /* S-Function Block: Identification_F/Quanser Aero USB Interface/HIL Write (hil_write_block) */
  {
    t_error result;
    Identification_F_DW.HILWrite_AnalogBuffer[0] = Identification_F_B.VpVolts;
    Identification_F_DW.HILWrite_AnalogBuffer[1] =
      Identification_F_P.YawConstantdeg2_Value;
    Identification_F_DW.HILWrite_DigitalBuffer[0] =
      (Identification_F_P.PitchMotorEnable_Value != 0);
    Identification_F_DW.HILWrite_DigitalBuffer[1] =
      (Identification_F_P.YawEnableMotor_Value != 0);
    Identification_F_DW.HILWrite_OtherBuffer[0] =
      Identification_F_P.BaseLEDColour_color[0];
    Identification_F_DW.HILWrite_OtherBuffer[1] =
      Identification_F_P.BaseLEDColour_color[1];
    Identification_F_DW.HILWrite_OtherBuffer[2] =
      Identification_F_P.BaseLEDColour_color[2];
    result = hil_write(Identification_F_DW.HILInitialize_Card,
                       Identification_F_P.HILWrite_analog_channels, 2U,
                       NULL, 0U,
                       Identification_F_P.HILWrite_digital_channels, 2U,
                       Identification_F_P.HILWrite_other_channels, 3U,
                       &Identification_F_DW.HILWrite_AnalogBuffer[0],
                       NULL,
                       &Identification_F_DW.HILWrite_DigitalBuffer[0],
                       &Identification_F_DW.HILWrite_OtherBuffer[0]
                       );
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Identification_F_M, _rt_error_message);
    }
  }

  /* Gain: '<S2>/Gain' incorporates:
   *  Gain: '<S1>/Pitch: counts to deg'
   */
  Identification_F_B.Gain = Identification_F_P.Pitchcountstodeg_Gain *
    rtb_HILRead_o3 * Identification_F_P.Gain_Gain;

  /* Clock: '<Root>/Clock' */
  Identification_F_B.Clock = Identification_F_M->Timing.t[0];
}

/* Model update function */
void Identification_F_update(void)
{
  /* Update for DiscreteTransferFcn: '<Root>/Integrateur' */
  Identification_F_DW.Integrateur_states = Identification_F_DW.Integrateur_tmp;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Identification_F_M->Timing.clockTick0)) {
    ++Identification_F_M->Timing.clockTickH0;
  }

  Identification_F_M->Timing.t[0] = Identification_F_M->Timing.clockTick0 *
    Identification_F_M->Timing.stepSize0 +
    Identification_F_M->Timing.clockTickH0 *
    Identification_F_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.002s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++Identification_F_M->Timing.clockTick1)) {
      ++Identification_F_M->Timing.clockTickH1;
    }

    Identification_F_M->Timing.t[1] = Identification_F_M->Timing.clockTick1 *
      Identification_F_M->Timing.stepSize1 +
      Identification_F_M->Timing.clockTickH1 *
      Identification_F_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void Identification_F_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<S1>/HIL Initialize' */

  /* S-Function Block: Identification_F/Quanser Aero USB Interface/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("quanser_aero_usb", "0",
                      &Identification_F_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Identification_F_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_watchdog_clear(Identification_F_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Identification_F_M, _rt_error_message);
      return;
    }

    if ((Identification_F_P.HILInitialize_AIPStart && !is_switching) ||
        (Identification_F_P.HILInitialize_AIPEnter && is_switching)) {
      Identification_F_DW.HILInitialize_AIMinimums[0] =
        (Identification_F_P.HILInitialize_AILow);
      Identification_F_DW.HILInitialize_AIMinimums[1] =
        (Identification_F_P.HILInitialize_AILow);
      Identification_F_DW.HILInitialize_AIMaximums[0] =
        Identification_F_P.HILInitialize_AIHigh;
      Identification_F_DW.HILInitialize_AIMaximums[1] =
        Identification_F_P.HILInitialize_AIHigh;
      result = hil_set_analog_input_ranges
        (Identification_F_DW.HILInitialize_Card,
         Identification_F_P.HILInitialize_AIChannels, 2U,
         &Identification_F_DW.HILInitialize_AIMinimums[0],
         &Identification_F_DW.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Identification_F_M, _rt_error_message);
        return;
      }
    }

    if ((Identification_F_P.HILInitialize_AOPStart && !is_switching) ||
        (Identification_F_P.HILInitialize_AOPEnter && is_switching)) {
      Identification_F_DW.HILInitialize_AOMinimums[0] =
        (Identification_F_P.HILInitialize_AOLow);
      Identification_F_DW.HILInitialize_AOMinimums[1] =
        (Identification_F_P.HILInitialize_AOLow);
      Identification_F_DW.HILInitialize_AOMaximums[0] =
        Identification_F_P.HILInitialize_AOHigh;
      Identification_F_DW.HILInitialize_AOMaximums[1] =
        Identification_F_P.HILInitialize_AOHigh;
      result = hil_set_analog_output_ranges
        (Identification_F_DW.HILInitialize_Card,
         Identification_F_P.HILInitialize_AOChannels, 2U,
         &Identification_F_DW.HILInitialize_AOMinimums[0],
         &Identification_F_DW.HILInitialize_AOMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Identification_F_M, _rt_error_message);
        return;
      }
    }

    if ((Identification_F_P.HILInitialize_AOStart && !is_switching) ||
        (Identification_F_P.HILInitialize_AOEnter && is_switching)) {
      Identification_F_DW.HILInitialize_AOVoltages[0] =
        Identification_F_P.HILInitialize_AOInitial;
      Identification_F_DW.HILInitialize_AOVoltages[1] =
        Identification_F_P.HILInitialize_AOInitial;
      result = hil_write_analog(Identification_F_DW.HILInitialize_Card,
        Identification_F_P.HILInitialize_AOChannels, 2U,
        &Identification_F_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Identification_F_M, _rt_error_message);
        return;
      }
    }

    if (Identification_F_P.HILInitialize_AOReset) {
      Identification_F_DW.HILInitialize_AOVoltages[0] =
        Identification_F_P.HILInitialize_AOWatchdog;
      Identification_F_DW.HILInitialize_AOVoltages[1] =
        Identification_F_P.HILInitialize_AOWatchdog;
      result = hil_watchdog_set_analog_expiration_state
        (Identification_F_DW.HILInitialize_Card,
         Identification_F_P.HILInitialize_AOChannels, 2U,
         &Identification_F_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Identification_F_M, _rt_error_message);
        return;
      }
    }

    result = hil_set_digital_directions(Identification_F_DW.HILInitialize_Card,
      NULL, 0U, Identification_F_P.HILInitialize_DOChannels, 2U);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Identification_F_M, _rt_error_message);
      return;
    }

    if ((Identification_F_P.HILInitialize_DOStart && !is_switching) ||
        (Identification_F_P.HILInitialize_DOEnter && is_switching)) {
      Identification_F_DW.HILInitialize_DOBits[0] =
        Identification_F_P.HILInitialize_DOInitial;
      Identification_F_DW.HILInitialize_DOBits[1] =
        Identification_F_P.HILInitialize_DOInitial;
      result = hil_write_digital(Identification_F_DW.HILInitialize_Card,
        Identification_F_P.HILInitialize_DOChannels, 2U, (t_boolean *)
        &Identification_F_DW.HILInitialize_DOBits[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Identification_F_M, _rt_error_message);
        return;
      }
    }

    if (Identification_F_P.HILInitialize_DOReset) {
      Identification_F_DW.HILInitialize_DOStates[0] =
        Identification_F_P.HILInitialize_DOWatchdog;
      Identification_F_DW.HILInitialize_DOStates[1] =
        Identification_F_P.HILInitialize_DOWatchdog;
      result = hil_watchdog_set_digital_expiration_state
        (Identification_F_DW.HILInitialize_Card,
         Identification_F_P.HILInitialize_DOChannels, 2U, (const t_digital_state
          *) &Identification_F_DW.HILInitialize_DOStates[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Identification_F_M, _rt_error_message);
        return;
      }
    }

    if ((Identification_F_P.HILInitialize_EIPStart && !is_switching) ||
        (Identification_F_P.HILInitialize_EIPEnter && is_switching)) {
      Identification_F_DW.HILInitialize_QuadratureModes[0] =
        Identification_F_P.HILInitialize_EIQuadrature;
      Identification_F_DW.HILInitialize_QuadratureModes[1] =
        Identification_F_P.HILInitialize_EIQuadrature;
      Identification_F_DW.HILInitialize_QuadratureModes[2] =
        Identification_F_P.HILInitialize_EIQuadrature;
      Identification_F_DW.HILInitialize_QuadratureModes[3] =
        Identification_F_P.HILInitialize_EIQuadrature;
      result = hil_set_encoder_quadrature_mode
        (Identification_F_DW.HILInitialize_Card,
         Identification_F_P.HILInitialize_EIChannels, 4U,
         (t_encoder_quadrature_mode *)
         &Identification_F_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Identification_F_M, _rt_error_message);
        return;
      }
    }

    if ((Identification_F_P.HILInitialize_EIStart && !is_switching) ||
        (Identification_F_P.HILInitialize_EIEnter && is_switching)) {
      Identification_F_DW.HILInitialize_InitialEICounts[0] =
        Identification_F_P.HILInitialize_EIInitial;
      Identification_F_DW.HILInitialize_InitialEICounts[1] =
        Identification_F_P.HILInitialize_EIInitial;
      Identification_F_DW.HILInitialize_InitialEICounts[2] =
        Identification_F_P.HILInitialize_EIInitial;
      Identification_F_DW.HILInitialize_InitialEICounts[3] =
        Identification_F_P.HILInitialize_EIInitial;
      result = hil_set_encoder_counts(Identification_F_DW.HILInitialize_Card,
        Identification_F_P.HILInitialize_EIChannels, 4U,
        &Identification_F_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Identification_F_M, _rt_error_message);
        return;
      }
    }

    if ((Identification_F_P.HILInitialize_OOStart && !is_switching) ||
        (Identification_F_P.HILInitialize_OOEnter && is_switching)) {
      result = hil_write_other(Identification_F_DW.HILInitialize_Card,
        Identification_F_P.HILInitialize_OOChannels, 3U,
        Identification_F_P.HILInitialize_OOInitial);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Identification_F_M, _rt_error_message);
        return;
      }
    }

    if (Identification_F_P.HILInitialize_OOReset) {
      result = hil_watchdog_set_other_expiration_state
        (Identification_F_DW.HILInitialize_Card,
         Identification_F_P.HILInitialize_OOChannels, 3U,
         Identification_F_P.HILInitialize_OOWatchdog);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Identification_F_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for FromWorkspace: '<S3>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 1.0, 1.0, 60.0, 60.0, 80.0, 80.0,
      100.0, 100.0, 140.0, 140.0, 160.0, 160.0, 180.0 } ;

    static real_T pDataValues0[] = { 0.0, 0.0, -250.0, -250.0, -200.0, -200.0,
      -150.0, -150.0, 150.0, 150.0, 200.0, 200.0, 250.0, 250.0 } ;

    Identification_F_DW.FromWs_PWORK.TimePtr = (void *) pTimeValues0;
    Identification_F_DW.FromWs_PWORK.DataPtr = (void *) pDataValues0;
    Identification_F_DW.FromWs_IWORK.PrevIndex = 0;
  }

  /* InitializeConditions for DiscreteTransferFcn: '<Root>/Integrateur' */
  Identification_F_DW.Integrateur_states =
    Identification_F_P.Integrateur_InitialStates;
}

/* Model terminate function */
void Identification_F_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<S1>/HIL Initialize' */

  /* S-Function Block: Identification_F/Quanser Aero USB Interface/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_analog_outputs = 0;
    t_uint32 num_final_digital_outputs = 0;
    t_uint32 num_final_other_outputs = 0;
    hil_task_stop_all(Identification_F_DW.HILInitialize_Card);
    hil_monitor_stop_all(Identification_F_DW.HILInitialize_Card);
    is_switching = false;
    if ((Identification_F_P.HILInitialize_AOTerminate && !is_switching) ||
        (Identification_F_P.HILInitialize_AOExit && is_switching)) {
      Identification_F_DW.HILInitialize_AOVoltages[0] =
        Identification_F_P.HILInitialize_AOFinal;
      Identification_F_DW.HILInitialize_AOVoltages[1] =
        Identification_F_P.HILInitialize_AOFinal;
      num_final_analog_outputs = 2U;
    } else {
      num_final_analog_outputs = 0;
    }

    if ((Identification_F_P.HILInitialize_DOTerminate && !is_switching) ||
        (Identification_F_P.HILInitialize_DOExit && is_switching)) {
      Identification_F_DW.HILInitialize_DOBits[0] =
        Identification_F_P.HILInitialize_DOFinal;
      Identification_F_DW.HILInitialize_DOBits[1] =
        Identification_F_P.HILInitialize_DOFinal;
      num_final_digital_outputs = 2U;
    } else {
      num_final_digital_outputs = 0;
    }

    if ((Identification_F_P.HILInitialize_OOTerminate && !is_switching) ||
        (Identification_F_P.HILInitialize_OOExit && is_switching)) {
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
      result = hil_write(Identification_F_DW.HILInitialize_Card
                         , Identification_F_P.HILInitialize_AOChannels,
                         num_final_analog_outputs
                         , NULL, 0
                         , Identification_F_P.HILInitialize_DOChannels,
                         num_final_digital_outputs
                         , Identification_F_P.HILInitialize_OOChannels,
                         num_final_other_outputs
                         , &Identification_F_DW.HILInitialize_AOVoltages[0]
                         , NULL
                         , (t_boolean *)
                         &Identification_F_DW.HILInitialize_DOBits[0]
                         , Identification_F_P.HILInitialize_OOFinal
                         );
      if (result == -QERR_HIL_WRITE_NOT_SUPPORTED) {
        t_error local_result;
        result = 0;

        /* The hil_write operation is not supported by this card. Write final outputs for each channel type */
        if (num_final_analog_outputs > 0) {
          local_result = hil_write_analog(Identification_F_DW.HILInitialize_Card,
            Identification_F_P.HILInitialize_AOChannels,
            num_final_analog_outputs,
            &Identification_F_DW.HILInitialize_AOVoltages[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_digital_outputs > 0) {
          local_result = hil_write_digital
            (Identification_F_DW.HILInitialize_Card,
             Identification_F_P.HILInitialize_DOChannels,
             num_final_digital_outputs, (t_boolean *)
             &Identification_F_DW.HILInitialize_DOBits[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_other_outputs > 0) {
          local_result = hil_write_other(Identification_F_DW.HILInitialize_Card,
            Identification_F_P.HILInitialize_OOChannels, num_final_other_outputs,
            Identification_F_P.HILInitialize_OOFinal);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(Identification_F_M, _rt_error_message);
        }
      }
    }

    hil_task_delete_all(Identification_F_DW.HILInitialize_Card);
    hil_monitor_delete_all(Identification_F_DW.HILInitialize_Card);
    hil_close(Identification_F_DW.HILInitialize_Card);
    Identification_F_DW.HILInitialize_Card = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  Identification_F_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  Identification_F_update();
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
  Identification_F_initialize();
}

void MdlTerminate(void)
{
  Identification_F_terminate();
}

/* Registration function */
RT_MODEL_Identification_F_T *Identification_F(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Identification_F_M, 0,
                sizeof(RT_MODEL_Identification_F_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Identification_F_M->solverInfo,
                          &Identification_F_M->Timing.simTimeStep);
    rtsiSetTPtr(&Identification_F_M->solverInfo, &rtmGetTPtr(Identification_F_M));
    rtsiSetStepSizePtr(&Identification_F_M->solverInfo,
                       &Identification_F_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Identification_F_M->solverInfo, (&rtmGetErrorStatus
      (Identification_F_M)));
    rtsiSetRTModelPtr(&Identification_F_M->solverInfo, Identification_F_M);
  }

  rtsiSetSimTimeStep(&Identification_F_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&Identification_F_M->solverInfo,"FixedStepDiscrete");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Identification_F_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "Identification_F_M points to
       static memory which is guaranteed to be non-NULL" */
    Identification_F_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Identification_F_M->Timing.sampleTimes =
      (&Identification_F_M->Timing.sampleTimesArray[0]);
    Identification_F_M->Timing.offsetTimes =
      (&Identification_F_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Identification_F_M->Timing.sampleTimes[0] = (0.0);
    Identification_F_M->Timing.sampleTimes[1] = (0.002);

    /* task offsets */
    Identification_F_M->Timing.offsetTimes[0] = (0.0);
    Identification_F_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(Identification_F_M, &Identification_F_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Identification_F_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    Identification_F_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Identification_F_M, 180.0);
  Identification_F_M->Timing.stepSize0 = 0.002;
  Identification_F_M->Timing.stepSize1 = 0.002;

  /* External mode info */
  Identification_F_M->Sizes.checksums[0] = (285804101U);
  Identification_F_M->Sizes.checksums[1] = (1073697494U);
  Identification_F_M->Sizes.checksums[2] = (4204978548U);
  Identification_F_M->Sizes.checksums[3] = (3183951388U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    Identification_F_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Identification_F_M->extModeInfo,
      &Identification_F_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Identification_F_M->extModeInfo,
                        Identification_F_M->Sizes.checksums);
    rteiSetTPtr(Identification_F_M->extModeInfo, rtmGetTPtr(Identification_F_M));
  }

  Identification_F_M->solverInfoPtr = (&Identification_F_M->solverInfo);
  Identification_F_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&Identification_F_M->solverInfo, 0.002);
  rtsiSetSolverMode(&Identification_F_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  Identification_F_M->blockIO = ((void *) &Identification_F_B);
  (void) memset(((void *) &Identification_F_B), 0,
                sizeof(B_Identification_F_T));

  /* parameters */
  Identification_F_M->defaultParam = ((real_T *)&Identification_F_P);

  /* states (dwork) */
  Identification_F_M->dwork = ((void *) &Identification_F_DW);
  (void) memset((void *)&Identification_F_DW, 0,
                sizeof(DW_Identification_F_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Identification_F_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 21;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  Identification_F_M->Sizes.numContStates = (0);/* Number of continuous states */
  Identification_F_M->Sizes.numY = (0);/* Number of model outputs */
  Identification_F_M->Sizes.numU = (0);/* Number of model inputs */
  Identification_F_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Identification_F_M->Sizes.numSampTimes = (2);/* Number of sample times */
  Identification_F_M->Sizes.numBlocks = (27);/* Number of blocks */
  Identification_F_M->Sizes.numBlockIO = (8);/* Number of block outputs */
  Identification_F_M->Sizes.numBlockPrms = (118);/* Sum of parameter "widths" */
  return Identification_F_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
