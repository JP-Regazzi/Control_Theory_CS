/*
 * Implantation_Cmd_LQG.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Implantation_Cmd_LQG".
 *
 * Model version              : 1.103
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Thu Oct 19 12:27:52 2023
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Implantation_Cmd_LQG.h"
#include "rtwtypes.h"
#include <math.h>
#include "Implantation_Cmd_LQG_private.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "Implantation_Cmd_LQG_dt.h"

/* Block signals (default storage) */
B_Implantation_Cmd_LQG_T Implantation_Cmd_LQG_B;

/* Block states (default storage) */
DW_Implantation_Cmd_LQG_T Implantation_Cmd_LQG_DW;

/* Real-time model */
static RT_MODEL_Implantation_Cmd_LQG_T Implantation_Cmd_LQG_M_;
RT_MODEL_Implantation_Cmd_LQG_T *const Implantation_Cmd_LQG_M =
  &Implantation_Cmd_LQG_M_;
static void rate_monotonic_scheduler(void);
time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(Implantation_Cmd_LQG_M, 1);
  rtmSampleHitPtr[2] = rtmStepTask(Implantation_Cmd_LQG_M, 2);
  UNUSED_PARAMETER(rtmNumSampTimes);
  UNUSED_PARAMETER(rtmTimingData);
  UNUSED_PARAMETER(rtmPerTaskSampleHits);
  return(-1);
}

/*
 *         This function updates active task flag for each subrate
 *         and rate transition flags for tasks that exchange data.
 *         The function assumes rate-monotonic multitasking scheduler.
 *         The function must be called at model base rate so that
 *         the generated code self-manages all its subrates and rate
 *         transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* To ensure a deterministic data transfer between two rates,
   * data is transferred at the priority of a fast task and the frequency
   * of the slow task.  The following flags indicate when the data transfer
   * happens.  That is, a rate interaction flag is set true when both rates
   * will run, and false otherwise.
   */

  /* tid 1 shares data with slower tid rate: 2 */
  if (Implantation_Cmd_LQG_M->Timing.TaskCounters.TID[1] == 0) {
    Implantation_Cmd_LQG_M->Timing.RateInteraction.TID1_2 =
      (Implantation_Cmd_LQG_M->Timing.TaskCounters.TID[2] == 0);

    /* update PerTaskSampleHits matrix for non-inline sfcn */
    Implantation_Cmd_LQG_M->Timing.perTaskSampleHits[5] =
      Implantation_Cmd_LQG_M->Timing.RateInteraction.TID1_2;
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Implantation_Cmd_LQG_M->Timing.TaskCounters.TID[2])++;
  if ((Implantation_Cmd_LQG_M->Timing.TaskCounters.TID[2]) > 9) {/* Sample time: [0.02s, 0.0s] */
    Implantation_Cmd_LQG_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/* Model output function for TID0 */
void Implantation_Cmd_LQG_output0(void) /* Sample time: [0.0s, 0.0s] */
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
  real_T rtb_Add3_m;
  real_T rtb_Pitchcountstodeg;
  real_T rtb_u4V;

  {                                    /* Sample time: [0.0s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* S-Function (hil_read_block): '<S1>/HIL Read' */

  /* S-Function Block: Implantation_Cmd_LQG/Quanser Aero USB Interface/HIL Read (hil_read_block) */
  {
    t_error result = hil_read(Implantation_Cmd_LQG_DW.HILInitialize_Card,
      Implantation_Cmd_LQG_P.HILRead_analog_channels, 2U,
      Implantation_Cmd_LQG_P.HILRead_encoder_channels, 2U,
      Implantation_Cmd_LQG_P.HILRead_digital_channels, 3U,
      Implantation_Cmd_LQG_P.HILRead_other_channels, 8U,
      &Implantation_Cmd_LQG_DW.HILRead_AnalogBuffer[0],
      &Implantation_Cmd_LQG_DW.HILRead_EncoderBuffer[0],
      &Implantation_Cmd_LQG_DW.HILRead_DigitalBuffer[0],
      &Implantation_Cmd_LQG_DW.HILRead_OtherBuffer[0]
      );
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Implantation_Cmd_LQG_M, _rt_error_message);
    } else {
      Implantation_Cmd_LQG_B.HILRead_o1 =
        Implantation_Cmd_LQG_DW.HILRead_AnalogBuffer[0];
      Implantation_Cmd_LQG_B.HILRead_o2 =
        Implantation_Cmd_LQG_DW.HILRead_AnalogBuffer[1];
      rtb_Pitchcountstodeg = Implantation_Cmd_LQG_DW.HILRead_EncoderBuffer[0];
      rtb_HILRead_o4 = Implantation_Cmd_LQG_DW.HILRead_EncoderBuffer[1];
      rtb_HILRead_o5 = Implantation_Cmd_LQG_DW.HILRead_DigitalBuffer[0];
      rtb_HILRead_o6 = Implantation_Cmd_LQG_DW.HILRead_DigitalBuffer[1];
      rtb_HILRead_o7 = Implantation_Cmd_LQG_DW.HILRead_DigitalBuffer[2];
      rtb_u4V = Implantation_Cmd_LQG_DW.HILRead_OtherBuffer[0];
      rtb_Add3_m = Implantation_Cmd_LQG_DW.HILRead_OtherBuffer[1];
      rtb_HILRead_o10 = Implantation_Cmd_LQG_DW.HILRead_OtherBuffer[2];
      rtb_HILRead_o11 = Implantation_Cmd_LQG_DW.HILRead_OtherBuffer[3];
      rtb_HILRead_o12 = Implantation_Cmd_LQG_DW.HILRead_OtherBuffer[4];
      rtb_HILRead_o13 = Implantation_Cmd_LQG_DW.HILRead_OtherBuffer[5];
      rtb_HILRead_o14 = Implantation_Cmd_LQG_DW.HILRead_OtherBuffer[6];
      rtb_HILRead_o15 = Implantation_Cmd_LQG_DW.HILRead_OtherBuffer[7];
    }
  }

  /* Gain: '<S1>/Pitch: counts to deg' */
  rtb_Pitchcountstodeg *= Implantation_Cmd_LQG_P.Pitchcountstodeg_Gain;

  /* RateTransition: '<Root>/Rate Transition' */
  if (Implantation_Cmd_LQG_M->Timing.RateInteraction.TID1_2) {
    /* RateTransition: '<Root>/Rate Transition' */
    Implantation_Cmd_LQG_B.RateTransition =
      Implantation_Cmd_LQG_DW.RateTransition_Buffer0;
  }

  /* End of RateTransition: '<Root>/Rate Transition' */

  /* Gain: '<Root>/Gain2' */
  Implantation_Cmd_LQG_B.Gain2[0] = Implantation_Cmd_LQG_P.Gain2_Gain * rtb_u4V;
  Implantation_Cmd_LQG_B.Gain2[1] = Implantation_Cmd_LQG_P.Gain2_Gain *
    rtb_Add3_m;

  /* Sum: '<S3>/Add2' */
  rtb_Add3_m = Implantation_Cmd_LQG_B.RateTransition -
    Implantation_Cmd_LQG_B.Gain2[0];

  /* Sum: '<S3>/Add1' incorporates:
   *  Gain: '<S3>/Gain2'
   *  Gain: '<S3>/Gain3'
   *  Gain: '<S3>/Gain4'
   *  UnitDelay: '<S3>/Unit Delay'
   *  UnitDelay: '<S3>/Unit Delay1'
   */
  Implantation_Cmd_LQG_B.Add1 = (Implantation_Cmd_LQG_P.Kz * rtb_Add3_m *
    Implantation_Cmd_LQG_P.Te1 - Implantation_Cmd_LQG_P.Gain2_Gain_f *
    Implantation_Cmd_LQG_DW.UnitDelay1_DSTATE) +
    Implantation_Cmd_LQG_DW.UnitDelay_DSTATE;

  /* Gain: '<S3>/Gain1' */
  rtb_Add3_m = Implantation_Cmd_LQG_P.Kw * Implantation_Cmd_LQG_B.Gain2[0];

  /* Sum: '<S3>/Add3' */
  rtb_Add3_m = Implantation_Cmd_LQG_B.Add1 - rtb_Add3_m;

  /* Saturate: '<S3>/+//- 24V' */
  if (rtb_Add3_m > Implantation_Cmd_LQG_P.u4V_UpperSat) {
    rtb_u4V = Implantation_Cmd_LQG_P.u4V_UpperSat;
  } else if (rtb_Add3_m < Implantation_Cmd_LQG_P.u4V_LowerSat) {
    rtb_u4V = Implantation_Cmd_LQG_P.u4V_LowerSat;
  } else {
    rtb_u4V = rtb_Add3_m;
  }

  /* End of Saturate: '<S3>/+//- 24V' */

  /* Saturate: '<Root>/+//- 24V' */
  if (rtb_u4V > Implantation_Cmd_LQG_P.u4V_UpperSat_n) {
    /* Saturate: '<Root>/+//- 24V' */
    Implantation_Cmd_LQG_B.u4V = Implantation_Cmd_LQG_P.u4V_UpperSat_n;
  } else if (rtb_u4V < Implantation_Cmd_LQG_P.u4V_LowerSat_o) {
    /* Saturate: '<Root>/+//- 24V' */
    Implantation_Cmd_LQG_B.u4V = Implantation_Cmd_LQG_P.u4V_LowerSat_o;
  } else {
    /* Saturate: '<Root>/+//- 24V' */
    Implantation_Cmd_LQG_B.u4V = rtb_u4V;
  }

  /* End of Saturate: '<Root>/+//- 24V' */

  /* S-Function (hil_write_block): '<S1>/HIL Write' incorporates:
   *  Constant: '<Root>/Pitch Motor Enable'
   *  Constant: '<Root>/Yaw Constant(deg)2'
   *  Constant: '<Root>/Yaw Enable Motor'
   *  Constant: '<S4>/Constant'
   */

  /* S-Function Block: Implantation_Cmd_LQG/Quanser Aero USB Interface/HIL Write (hil_write_block) */
  {
    t_error result;
    Implantation_Cmd_LQG_DW.HILWrite_AnalogBuffer[0] =
      Implantation_Cmd_LQG_B.u4V;
    Implantation_Cmd_LQG_DW.HILWrite_AnalogBuffer[1] =
      Implantation_Cmd_LQG_P.YawConstantdeg2_Value;
    Implantation_Cmd_LQG_DW.HILWrite_DigitalBuffer[0] =
      (Implantation_Cmd_LQG_P.PitchMotorEnable_Value != 0);
    Implantation_Cmd_LQG_DW.HILWrite_DigitalBuffer[1] =
      (Implantation_Cmd_LQG_P.YawEnableMotor_Value != 0);
    Implantation_Cmd_LQG_DW.HILWrite_OtherBuffer[0] =
      Implantation_Cmd_LQG_P.BaseLEDColour_color[0];
    Implantation_Cmd_LQG_DW.HILWrite_OtherBuffer[1] =
      Implantation_Cmd_LQG_P.BaseLEDColour_color[1];
    Implantation_Cmd_LQG_DW.HILWrite_OtherBuffer[2] =
      Implantation_Cmd_LQG_P.BaseLEDColour_color[2];
    result = hil_write(Implantation_Cmd_LQG_DW.HILInitialize_Card,
                       Implantation_Cmd_LQG_P.HILWrite_analog_channels, 2U,
                       NULL, 0U,
                       Implantation_Cmd_LQG_P.HILWrite_digital_channels, 2U,
                       Implantation_Cmd_LQG_P.HILWrite_other_channels, 3U,
                       &Implantation_Cmd_LQG_DW.HILWrite_AnalogBuffer[0],
                       NULL,
                       &Implantation_Cmd_LQG_DW.HILWrite_DigitalBuffer[0],
                       &Implantation_Cmd_LQG_DW.HILWrite_OtherBuffer[0]
                       );
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Implantation_Cmd_LQG_M, _rt_error_message);
    }
  }

  /* RateTransition: '<Root>/Rate Transition2' */
  if (Implantation_Cmd_LQG_M->Timing.RateInteraction.TID1_2) {
    Implantation_Cmd_LQG_DW.RateTransition2_Buffer = rtb_Pitchcountstodeg;
  }

  /* End of RateTransition: '<Root>/Rate Transition2' */

  /* Sum: '<S3>/Add4' */
  Implantation_Cmd_LQG_B.Add4 = rtb_Add3_m - rtb_u4V;

  /* Clock: '<Root>/Clock' */
  Implantation_Cmd_LQG_B.Clock = Implantation_Cmd_LQG_M->Timing.t[0];
}

/* Model update function for TID0 */
void Implantation_Cmd_LQG_update0(void) /* Sample time: [0.0s, 0.0s] */
{
  /* Update for UnitDelay: '<S3>/Unit Delay1' */
  Implantation_Cmd_LQG_DW.UnitDelay1_DSTATE = Implantation_Cmd_LQG_B.Add4;

  /* Update for UnitDelay: '<S3>/Unit Delay' */
  Implantation_Cmd_LQG_DW.UnitDelay_DSTATE = Implantation_Cmd_LQG_B.Add1;

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Implantation_Cmd_LQG_M->Timing.clockTick0)) {
    ++Implantation_Cmd_LQG_M->Timing.clockTickH0;
  }

  Implantation_Cmd_LQG_M->Timing.t[0] =
    Implantation_Cmd_LQG_M->Timing.clockTick0 *
    Implantation_Cmd_LQG_M->Timing.stepSize0 +
    Implantation_Cmd_LQG_M->Timing.clockTickH0 *
    Implantation_Cmd_LQG_M->Timing.stepSize0 * 4294967296.0;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick1"
   * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Implantation_Cmd_LQG_M->Timing.clockTick1)) {
    ++Implantation_Cmd_LQG_M->Timing.clockTickH1;
  }

  Implantation_Cmd_LQG_M->Timing.t[1] =
    Implantation_Cmd_LQG_M->Timing.clockTick1 *
    Implantation_Cmd_LQG_M->Timing.stepSize1 +
    Implantation_Cmd_LQG_M->Timing.clockTickH1 *
    Implantation_Cmd_LQG_M->Timing.stepSize1 * 4294967296.0;
}

/* Model output function for TID2 */
void Implantation_Cmd_LQG_output2(void) /* Sample time: [0.02s, 0.0s] */
{
  real_T rtb_Gain1;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_Gain1 = (Implantation_Cmd_LQG_DW.clockTickCounter < ceil(10.0 /
    Implantation_Cmd_LQG_P.Te2)) && (Implantation_Cmd_LQG_DW.clockTickCounter >=
    0) ? Implantation_Cmd_LQG_P.PulseGenerator_Amp : 0.0;
  if (Implantation_Cmd_LQG_DW.clockTickCounter >= ceil(20.0 /
       Implantation_Cmd_LQG_P.Te2) - 1.0) {
    Implantation_Cmd_LQG_DW.clockTickCounter = 0;
  } else {
    Implantation_Cmd_LQG_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* Sum: '<Root>/Add1' incorporates:
   *  Constant: '<Root>/Constant'
   */
  Implantation_Cmd_LQG_B.Theta_refdegrs = rtb_Gain1 -
    Implantation_Cmd_LQG_P.Constant_Value;

  /* Gain: '<S2>/Gain' incorporates:
   *  RateTransition: '<Root>/Rate Transition2'
   */
  Implantation_Cmd_LQG_B.Gain = Implantation_Cmd_LQG_P.Gain_Gain *
    Implantation_Cmd_LQG_DW.RateTransition2_Buffer;

  /* DiscreteStateSpace: '<Root>/Discrete State-Space' */
  Implantation_Cmd_LQG_B.DiscreteStateSpace[0] = 0.0;
  Implantation_Cmd_LQG_B.DiscreteStateSpace[0] +=
    Implantation_Cmd_LQG_P.DiscreteStateSpace_C[0] *
    Implantation_Cmd_LQG_DW.DiscreteStateSpace_DSTATE[0];
  Implantation_Cmd_LQG_B.DiscreteStateSpace[0] +=
    Implantation_Cmd_LQG_DW.DiscreteStateSpace_DSTATE[1] *
    Implantation_Cmd_LQG_P.DiscreteStateSpace_C[2];
  Implantation_Cmd_LQG_B.DiscreteStateSpace[1] = 0.0;
  Implantation_Cmd_LQG_B.DiscreteStateSpace[1] +=
    Implantation_Cmd_LQG_DW.DiscreteStateSpace_DSTATE[0] *
    Implantation_Cmd_LQG_P.DiscreteStateSpace_C[1];
  Implantation_Cmd_LQG_B.DiscreteStateSpace[1] +=
    Implantation_Cmd_LQG_DW.DiscreteStateSpace_DSTATE[1] *
    Implantation_Cmd_LQG_P.DiscreteStateSpace_C[3];

  /* Sum: '<Root>/Add3' incorporates:
   *  Gain: '<Root>/Gain1'
   *  Gain: '<Root>/Gain4'
   *  Gain: '<Root>/Gain6'
   */
  rtb_Gain1 = Implantation_Cmd_LQG_P.Gain6_Gain *
    Implantation_Cmd_LQG_B.Theta_refdegrs * Implantation_Cmd_LQG_P.M_lq -
    (Implantation_Cmd_LQG_P.K_lq[0] * Implantation_Cmd_LQG_B.DiscreteStateSpace
     [0] + Implantation_Cmd_LQG_P.K_lq[1] *
     Implantation_Cmd_LQG_B.DiscreteStateSpace[1]);

  /* RateTransition: '<Root>/Rate Transition' */
  Implantation_Cmd_LQG_DW.RateTransition_Buffer0 = rtb_Gain1;

  /* SignalConversion generated from: '<Root>/Discrete State-Space' incorporates:
   *  RateTransition: '<Root>/Rate Transition2'
   */
  Implantation_Cmd_LQG_B.TmpSignalConversionAtDiscreteSt[0] = rtb_Gain1;
  Implantation_Cmd_LQG_B.TmpSignalConversionAtDiscreteSt[1] =
    Implantation_Cmd_LQG_DW.RateTransition2_Buffer;
}

/* Model update function for TID2 */
void Implantation_Cmd_LQG_update2(void) /* Sample time: [0.02s, 0.0s] */
{
  real_T xnew;

  /* Update for DiscreteStateSpace: '<Root>/Discrete State-Space' */
  xnew = (Implantation_Cmd_LQG_P.A[1] - 214.77578562514924) *
    Implantation_Cmd_LQG_P.Te2 *
    Implantation_Cmd_LQG_DW.DiscreteStateSpace_DSTATE[0];
  Implantation_Cmd_LQG_DW.DiscreteStateSpace_DSTATE[0] =
    ((((Implantation_Cmd_LQG_P.A[0] - 26.683623769858372) *
       Implantation_Cmd_LQG_P.Te2 + 1.0) *
      Implantation_Cmd_LQG_DW.DiscreteStateSpace_DSTATE[0] +
      Implantation_Cmd_LQG_P.A[2] * Implantation_Cmd_LQG_P.Te2 *
      Implantation_Cmd_LQG_DW.DiscreteStateSpace_DSTATE[1]) + 0.0 *
     Implantation_Cmd_LQG_P.Te2 *
     Implantation_Cmd_LQG_B.TmpSignalConversionAtDiscreteSt[0]) +
    26.683623769858372 * Implantation_Cmd_LQG_P.Te2 *
    Implantation_Cmd_LQG_B.TmpSignalConversionAtDiscreteSt[1];
  Implantation_Cmd_LQG_DW.DiscreteStateSpace_DSTATE[1] =
    (((Implantation_Cmd_LQG_P.A[3] * Implantation_Cmd_LQG_P.Te2 + 1.0) *
      Implantation_Cmd_LQG_DW.DiscreteStateSpace_DSTATE[1] + xnew) +
     0.003147016434554228 * Implantation_Cmd_LQG_P.Te2 *
     Implantation_Cmd_LQG_B.TmpSignalConversionAtDiscreteSt[0]) +
    214.77578562514924 * Implantation_Cmd_LQG_P.Te2 *
    Implantation_Cmd_LQG_B.TmpSignalConversionAtDiscreteSt[1];

  /* Update absolute time */
  /* The "clockTick2" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick2"
   * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick2 and the high bits
   * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Implantation_Cmd_LQG_M->Timing.clockTick2)) {
    ++Implantation_Cmd_LQG_M->Timing.clockTickH2;
  }

  Implantation_Cmd_LQG_M->Timing.t[2] =
    Implantation_Cmd_LQG_M->Timing.clockTick2 *
    Implantation_Cmd_LQG_M->Timing.stepSize2 +
    Implantation_Cmd_LQG_M->Timing.clockTickH2 *
    Implantation_Cmd_LQG_M->Timing.stepSize2 * 4294967296.0;
}

/* Use this function only if you need to maintain compatibility with an existing static main program. */
void Implantation_Cmd_LQG_output(int_T tid)
{
  switch (tid) {
   case 0 :
    Implantation_Cmd_LQG_output0();
    break;

   case 2 :
    Implantation_Cmd_LQG_output2();
    break;

   default :
    /* do nothing */
    break;
  }
}

/* Use this function only if you need to maintain compatibility with an existing static main program. */
void Implantation_Cmd_LQG_update(int_T tid)
{
  switch (tid) {
   case 0 :
    Implantation_Cmd_LQG_update0();
    break;

   case 2 :
    Implantation_Cmd_LQG_update2();
    break;

   default :
    /* do nothing */
    break;
  }
}

/* Model initialize function */
void Implantation_Cmd_LQG_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<S1>/HIL Initialize' */

  /* S-Function Block: Implantation_Cmd_LQG/Quanser Aero USB Interface/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("quanser_aero_usb", "0",
                      &Implantation_Cmd_LQG_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Implantation_Cmd_LQG_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_watchdog_clear(Implantation_Cmd_LQG_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Implantation_Cmd_LQG_M, _rt_error_message);
      return;
    }

    if ((Implantation_Cmd_LQG_P.HILInitialize_AIPStart && !is_switching) ||
        (Implantation_Cmd_LQG_P.HILInitialize_AIPEnter && is_switching)) {
      Implantation_Cmd_LQG_DW.HILInitialize_AIMinimums[0] =
        (Implantation_Cmd_LQG_P.HILInitialize_AILow);
      Implantation_Cmd_LQG_DW.HILInitialize_AIMinimums[1] =
        (Implantation_Cmd_LQG_P.HILInitialize_AILow);
      Implantation_Cmd_LQG_DW.HILInitialize_AIMaximums[0] =
        Implantation_Cmd_LQG_P.HILInitialize_AIHigh;
      Implantation_Cmd_LQG_DW.HILInitialize_AIMaximums[1] =
        Implantation_Cmd_LQG_P.HILInitialize_AIHigh;
      result = hil_set_analog_input_ranges
        (Implantation_Cmd_LQG_DW.HILInitialize_Card,
         Implantation_Cmd_LQG_P.HILInitialize_AIChannels, 2U,
         &Implantation_Cmd_LQG_DW.HILInitialize_AIMinimums[0],
         &Implantation_Cmd_LQG_DW.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_LQG_M, _rt_error_message);
        return;
      }
    }

    if ((Implantation_Cmd_LQG_P.HILInitialize_AOPStart && !is_switching) ||
        (Implantation_Cmd_LQG_P.HILInitialize_AOPEnter && is_switching)) {
      Implantation_Cmd_LQG_DW.HILInitialize_AOMinimums[0] =
        (Implantation_Cmd_LQG_P.HILInitialize_AOLow);
      Implantation_Cmd_LQG_DW.HILInitialize_AOMinimums[1] =
        (Implantation_Cmd_LQG_P.HILInitialize_AOLow);
      Implantation_Cmd_LQG_DW.HILInitialize_AOMaximums[0] =
        Implantation_Cmd_LQG_P.HILInitialize_AOHigh;
      Implantation_Cmd_LQG_DW.HILInitialize_AOMaximums[1] =
        Implantation_Cmd_LQG_P.HILInitialize_AOHigh;
      result = hil_set_analog_output_ranges
        (Implantation_Cmd_LQG_DW.HILInitialize_Card,
         Implantation_Cmd_LQG_P.HILInitialize_AOChannels, 2U,
         &Implantation_Cmd_LQG_DW.HILInitialize_AOMinimums[0],
         &Implantation_Cmd_LQG_DW.HILInitialize_AOMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_LQG_M, _rt_error_message);
        return;
      }
    }

    if ((Implantation_Cmd_LQG_P.HILInitialize_AOStart && !is_switching) ||
        (Implantation_Cmd_LQG_P.HILInitialize_AOEnter && is_switching)) {
      Implantation_Cmd_LQG_DW.HILInitialize_AOVoltages[0] =
        Implantation_Cmd_LQG_P.HILInitialize_AOInitial;
      Implantation_Cmd_LQG_DW.HILInitialize_AOVoltages[1] =
        Implantation_Cmd_LQG_P.HILInitialize_AOInitial;
      result = hil_write_analog(Implantation_Cmd_LQG_DW.HILInitialize_Card,
        Implantation_Cmd_LQG_P.HILInitialize_AOChannels, 2U,
        &Implantation_Cmd_LQG_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_LQG_M, _rt_error_message);
        return;
      }
    }

    if (Implantation_Cmd_LQG_P.HILInitialize_AOReset) {
      Implantation_Cmd_LQG_DW.HILInitialize_AOVoltages[0] =
        Implantation_Cmd_LQG_P.HILInitialize_AOWatchdog;
      Implantation_Cmd_LQG_DW.HILInitialize_AOVoltages[1] =
        Implantation_Cmd_LQG_P.HILInitialize_AOWatchdog;
      result = hil_watchdog_set_analog_expiration_state
        (Implantation_Cmd_LQG_DW.HILInitialize_Card,
         Implantation_Cmd_LQG_P.HILInitialize_AOChannels, 2U,
         &Implantation_Cmd_LQG_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_LQG_M, _rt_error_message);
        return;
      }
    }

    result = hil_set_digital_directions
      (Implantation_Cmd_LQG_DW.HILInitialize_Card, NULL, 0U,
       Implantation_Cmd_LQG_P.HILInitialize_DOChannels, 2U);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Implantation_Cmd_LQG_M, _rt_error_message);
      return;
    }

    if ((Implantation_Cmd_LQG_P.HILInitialize_DOStart && !is_switching) ||
        (Implantation_Cmd_LQG_P.HILInitialize_DOEnter && is_switching)) {
      Implantation_Cmd_LQG_DW.HILInitialize_DOBits[0] =
        Implantation_Cmd_LQG_P.HILInitialize_DOInitial;
      Implantation_Cmd_LQG_DW.HILInitialize_DOBits[1] =
        Implantation_Cmd_LQG_P.HILInitialize_DOInitial;
      result = hil_write_digital(Implantation_Cmd_LQG_DW.HILInitialize_Card,
        Implantation_Cmd_LQG_P.HILInitialize_DOChannels, 2U, (t_boolean *)
        &Implantation_Cmd_LQG_DW.HILInitialize_DOBits[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_LQG_M, _rt_error_message);
        return;
      }
    }

    if (Implantation_Cmd_LQG_P.HILInitialize_DOReset) {
      Implantation_Cmd_LQG_DW.HILInitialize_DOStates[0] =
        Implantation_Cmd_LQG_P.HILInitialize_DOWatchdog;
      Implantation_Cmd_LQG_DW.HILInitialize_DOStates[1] =
        Implantation_Cmd_LQG_P.HILInitialize_DOWatchdog;
      result = hil_watchdog_set_digital_expiration_state
        (Implantation_Cmd_LQG_DW.HILInitialize_Card,
         Implantation_Cmd_LQG_P.HILInitialize_DOChannels, 2U, (const
          t_digital_state *) &Implantation_Cmd_LQG_DW.HILInitialize_DOStates[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_LQG_M, _rt_error_message);
        return;
      }
    }

    if ((Implantation_Cmd_LQG_P.HILInitialize_EIPStart && !is_switching) ||
        (Implantation_Cmd_LQG_P.HILInitialize_EIPEnter && is_switching)) {
      Implantation_Cmd_LQG_DW.HILInitialize_QuadratureModes[0] =
        Implantation_Cmd_LQG_P.HILInitialize_EIQuadrature;
      Implantation_Cmd_LQG_DW.HILInitialize_QuadratureModes[1] =
        Implantation_Cmd_LQG_P.HILInitialize_EIQuadrature;
      Implantation_Cmd_LQG_DW.HILInitialize_QuadratureModes[2] =
        Implantation_Cmd_LQG_P.HILInitialize_EIQuadrature;
      Implantation_Cmd_LQG_DW.HILInitialize_QuadratureModes[3] =
        Implantation_Cmd_LQG_P.HILInitialize_EIQuadrature;
      result = hil_set_encoder_quadrature_mode
        (Implantation_Cmd_LQG_DW.HILInitialize_Card,
         Implantation_Cmd_LQG_P.HILInitialize_EIChannels, 4U,
         (t_encoder_quadrature_mode *)
         &Implantation_Cmd_LQG_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_LQG_M, _rt_error_message);
        return;
      }
    }

    if ((Implantation_Cmd_LQG_P.HILInitialize_EIStart && !is_switching) ||
        (Implantation_Cmd_LQG_P.HILInitialize_EIEnter && is_switching)) {
      Implantation_Cmd_LQG_DW.HILInitialize_InitialEICounts[0] =
        Implantation_Cmd_LQG_P.HILInitialize_EIInitial;
      Implantation_Cmd_LQG_DW.HILInitialize_InitialEICounts[1] =
        Implantation_Cmd_LQG_P.HILInitialize_EIInitial;
      Implantation_Cmd_LQG_DW.HILInitialize_InitialEICounts[2] =
        Implantation_Cmd_LQG_P.HILInitialize_EIInitial;
      Implantation_Cmd_LQG_DW.HILInitialize_InitialEICounts[3] =
        Implantation_Cmd_LQG_P.HILInitialize_EIInitial;
      result = hil_set_encoder_counts(Implantation_Cmd_LQG_DW.HILInitialize_Card,
        Implantation_Cmd_LQG_P.HILInitialize_EIChannels, 4U,
        &Implantation_Cmd_LQG_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_LQG_M, _rt_error_message);
        return;
      }
    }

    if ((Implantation_Cmd_LQG_P.HILInitialize_OOStart && !is_switching) ||
        (Implantation_Cmd_LQG_P.HILInitialize_OOEnter && is_switching)) {
      result = hil_write_other(Implantation_Cmd_LQG_DW.HILInitialize_Card,
        Implantation_Cmd_LQG_P.HILInitialize_OOChannels, 3U,
        Implantation_Cmd_LQG_P.HILInitialize_OOInitial);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_LQG_M, _rt_error_message);
        return;
      }
    }

    if (Implantation_Cmd_LQG_P.HILInitialize_OOReset) {
      result = hil_watchdog_set_other_expiration_state
        (Implantation_Cmd_LQG_DW.HILInitialize_Card,
         Implantation_Cmd_LQG_P.HILInitialize_OOChannels, 3U,
         Implantation_Cmd_LQG_P.HILInitialize_OOWatchdog);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Implantation_Cmd_LQG_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for RateTransition: '<Root>/Rate Transition' */
  Implantation_Cmd_LQG_B.RateTransition =
    Implantation_Cmd_LQG_P.RateTransition_InitialCondition;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  Implantation_Cmd_LQG_DW.RateTransition_Buffer0 =
    Implantation_Cmd_LQG_P.RateTransition_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay1' */
  Implantation_Cmd_LQG_DW.UnitDelay1_DSTATE =
    Implantation_Cmd_LQG_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
  Implantation_Cmd_LQG_DW.UnitDelay_DSTATE =
    Implantation_Cmd_LQG_P.UnitDelay_InitialCondition;

  /* InitializeConditions for DiscretePulseGenerator: '<Root>/Pulse Generator' */
  Implantation_Cmd_LQG_DW.clockTickCounter = 0;

  /* InitializeConditions for DiscreteStateSpace: '<Root>/Discrete State-Space' */
  Implantation_Cmd_LQG_DW.DiscreteStateSpace_DSTATE[0] =
    Implantation_Cmd_LQG_P.DiscreteStateSpace_InitialCondi;
  Implantation_Cmd_LQG_DW.DiscreteStateSpace_DSTATE[1] =
    Implantation_Cmd_LQG_P.DiscreteStateSpace_InitialCondi;
}

/* Model terminate function */
void Implantation_Cmd_LQG_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<S1>/HIL Initialize' */

  /* S-Function Block: Implantation_Cmd_LQG/Quanser Aero USB Interface/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_analog_outputs = 0;
    t_uint32 num_final_digital_outputs = 0;
    t_uint32 num_final_other_outputs = 0;
    hil_task_stop_all(Implantation_Cmd_LQG_DW.HILInitialize_Card);
    hil_monitor_stop_all(Implantation_Cmd_LQG_DW.HILInitialize_Card);
    is_switching = false;
    if ((Implantation_Cmd_LQG_P.HILInitialize_AOTerminate && !is_switching) ||
        (Implantation_Cmd_LQG_P.HILInitialize_AOExit && is_switching)) {
      Implantation_Cmd_LQG_DW.HILInitialize_AOVoltages[0] =
        Implantation_Cmd_LQG_P.HILInitialize_AOFinal;
      Implantation_Cmd_LQG_DW.HILInitialize_AOVoltages[1] =
        Implantation_Cmd_LQG_P.HILInitialize_AOFinal;
      num_final_analog_outputs = 2U;
    } else {
      num_final_analog_outputs = 0;
    }

    if ((Implantation_Cmd_LQG_P.HILInitialize_DOTerminate && !is_switching) ||
        (Implantation_Cmd_LQG_P.HILInitialize_DOExit && is_switching)) {
      Implantation_Cmd_LQG_DW.HILInitialize_DOBits[0] =
        Implantation_Cmd_LQG_P.HILInitialize_DOFinal;
      Implantation_Cmd_LQG_DW.HILInitialize_DOBits[1] =
        Implantation_Cmd_LQG_P.HILInitialize_DOFinal;
      num_final_digital_outputs = 2U;
    } else {
      num_final_digital_outputs = 0;
    }

    if ((Implantation_Cmd_LQG_P.HILInitialize_OOTerminate && !is_switching) ||
        (Implantation_Cmd_LQG_P.HILInitialize_OOExit && is_switching)) {
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
      result = hil_write(Implantation_Cmd_LQG_DW.HILInitialize_Card
                         , Implantation_Cmd_LQG_P.HILInitialize_AOChannels,
                         num_final_analog_outputs
                         , NULL, 0
                         , Implantation_Cmd_LQG_P.HILInitialize_DOChannels,
                         num_final_digital_outputs
                         , Implantation_Cmd_LQG_P.HILInitialize_OOChannels,
                         num_final_other_outputs
                         , &Implantation_Cmd_LQG_DW.HILInitialize_AOVoltages[0]
                         , NULL
                         , (t_boolean *)
                         &Implantation_Cmd_LQG_DW.HILInitialize_DOBits[0]
                         , Implantation_Cmd_LQG_P.HILInitialize_OOFinal
                         );
      if (result == -QERR_HIL_WRITE_NOT_SUPPORTED) {
        t_error local_result;
        result = 0;

        /* The hil_write operation is not supported by this card. Write final outputs for each channel type */
        if (num_final_analog_outputs > 0) {
          local_result = hil_write_analog
            (Implantation_Cmd_LQG_DW.HILInitialize_Card,
             Implantation_Cmd_LQG_P.HILInitialize_AOChannels,
             num_final_analog_outputs,
             &Implantation_Cmd_LQG_DW.HILInitialize_AOVoltages[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_digital_outputs > 0) {
          local_result = hil_write_digital
            (Implantation_Cmd_LQG_DW.HILInitialize_Card,
             Implantation_Cmd_LQG_P.HILInitialize_DOChannels,
             num_final_digital_outputs, (t_boolean *)
             &Implantation_Cmd_LQG_DW.HILInitialize_DOBits[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_other_outputs > 0) {
          local_result = hil_write_other
            (Implantation_Cmd_LQG_DW.HILInitialize_Card,
             Implantation_Cmd_LQG_P.HILInitialize_OOChannels,
             num_final_other_outputs,
             Implantation_Cmd_LQG_P.HILInitialize_OOFinal);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(Implantation_Cmd_LQG_M, _rt_error_message);
        }
      }
    }

    hil_task_delete_all(Implantation_Cmd_LQG_DW.HILInitialize_Card);
    hil_monitor_delete_all(Implantation_Cmd_LQG_DW.HILInitialize_Card);
    hil_close(Implantation_Cmd_LQG_DW.HILInitialize_Card);
    Implantation_Cmd_LQG_DW.HILInitialize_Card = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  if (tid == 1)
    tid = 0;
  Implantation_Cmd_LQG_output(tid);
}

void MdlUpdate(int_T tid)
{
  if (tid == 1)
    tid = 0;
  Implantation_Cmd_LQG_update(tid);
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
  Implantation_Cmd_LQG_initialize();
}

void MdlTerminate(void)
{
  Implantation_Cmd_LQG_terminate();
}

/* Registration function */
RT_MODEL_Implantation_Cmd_LQG_T *Implantation_Cmd_LQG(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Implantation_Cmd_LQG_M, 0,
                sizeof(RT_MODEL_Implantation_Cmd_LQG_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Implantation_Cmd_LQG_M->solverInfo,
                          &Implantation_Cmd_LQG_M->Timing.simTimeStep);
    rtsiSetTPtr(&Implantation_Cmd_LQG_M->solverInfo, &rtmGetTPtr
                (Implantation_Cmd_LQG_M));
    rtsiSetStepSizePtr(&Implantation_Cmd_LQG_M->solverInfo,
                       &Implantation_Cmd_LQG_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Implantation_Cmd_LQG_M->solverInfo,
                          (&rtmGetErrorStatus(Implantation_Cmd_LQG_M)));
    rtsiSetRTModelPtr(&Implantation_Cmd_LQG_M->solverInfo,
                      Implantation_Cmd_LQG_M);
  }

  rtsiSetSimTimeStep(&Implantation_Cmd_LQG_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&Implantation_Cmd_LQG_M->solverInfo,"FixedStepDiscrete");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Implantation_Cmd_LQG_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "Implantation_Cmd_LQG_M points to
       static memory which is guaranteed to be non-NULL" */
    Implantation_Cmd_LQG_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Implantation_Cmd_LQG_M->Timing.sampleTimes =
      (&Implantation_Cmd_LQG_M->Timing.sampleTimesArray[0]);
    Implantation_Cmd_LQG_M->Timing.offsetTimes =
      (&Implantation_Cmd_LQG_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Implantation_Cmd_LQG_M->Timing.sampleTimes[0] = (0.0);
    Implantation_Cmd_LQG_M->Timing.sampleTimes[1] = (0.002);
    Implantation_Cmd_LQG_M->Timing.sampleTimes[2] = (0.02);

    /* task offsets */
    Implantation_Cmd_LQG_M->Timing.offsetTimes[0] = (0.0);
    Implantation_Cmd_LQG_M->Timing.offsetTimes[1] = (0.0);
    Implantation_Cmd_LQG_M->Timing.offsetTimes[2] = (0.0);
  }

  rtmSetTPtr(Implantation_Cmd_LQG_M, &Implantation_Cmd_LQG_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Implantation_Cmd_LQG_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits =
      Implantation_Cmd_LQG_M->Timing.perTaskSampleHitsArray;
    Implantation_Cmd_LQG_M->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    Implantation_Cmd_LQG_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Implantation_Cmd_LQG_M, 30.0);
  Implantation_Cmd_LQG_M->Timing.stepSize0 = 0.002;
  Implantation_Cmd_LQG_M->Timing.stepSize1 = 0.002;
  Implantation_Cmd_LQG_M->Timing.stepSize2 = 0.02;

  /* External mode info */
  Implantation_Cmd_LQG_M->Sizes.checksums[0] = (1609556039U);
  Implantation_Cmd_LQG_M->Sizes.checksums[1] = (3805405871U);
  Implantation_Cmd_LQG_M->Sizes.checksums[2] = (842302721U);
  Implantation_Cmd_LQG_M->Sizes.checksums[3] = (4221120297U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    Implantation_Cmd_LQG_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Implantation_Cmd_LQG_M->extModeInfo,
      &Implantation_Cmd_LQG_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Implantation_Cmd_LQG_M->extModeInfo,
                        Implantation_Cmd_LQG_M->Sizes.checksums);
    rteiSetTPtr(Implantation_Cmd_LQG_M->extModeInfo, rtmGetTPtr
                (Implantation_Cmd_LQG_M));
  }

  Implantation_Cmd_LQG_M->solverInfoPtr = (&Implantation_Cmd_LQG_M->solverInfo);
  Implantation_Cmd_LQG_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&Implantation_Cmd_LQG_M->solverInfo, 0.002);
  rtsiSetSolverMode(&Implantation_Cmd_LQG_M->solverInfo,
                    SOLVER_MODE_MULTITASKING);

  /* block I/O */
  Implantation_Cmd_LQG_M->blockIO = ((void *) &Implantation_Cmd_LQG_B);
  (void) memset(((void *) &Implantation_Cmd_LQG_B), 0,
                sizeof(B_Implantation_Cmd_LQG_T));

  /* parameters */
  Implantation_Cmd_LQG_M->defaultParam = ((real_T *)&Implantation_Cmd_LQG_P);

  /* states (dwork) */
  Implantation_Cmd_LQG_M->dwork = ((void *) &Implantation_Cmd_LQG_DW);
  (void) memset((void *)&Implantation_Cmd_LQG_DW, 0,
                sizeof(DW_Implantation_Cmd_LQG_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Implantation_Cmd_LQG_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 21;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  Implantation_Cmd_LQG_M->Sizes.numContStates = (0);/* Number of continuous states */
  Implantation_Cmd_LQG_M->Sizes.numY = (0);/* Number of model outputs */
  Implantation_Cmd_LQG_M->Sizes.numU = (0);/* Number of model inputs */
  Implantation_Cmd_LQG_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Implantation_Cmd_LQG_M->Sizes.numSampTimes = (3);/* Number of sample times */
  Implantation_Cmd_LQG_M->Sizes.numBlocks = (45);/* Number of blocks */
  Implantation_Cmd_LQG_M->Sizes.numBlockIO = (12);/* Number of block outputs */
  Implantation_Cmd_LQG_M->Sizes.numBlockPrms = (137);/* Sum of parameter "widths" */
  return Implantation_Cmd_LQG_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
