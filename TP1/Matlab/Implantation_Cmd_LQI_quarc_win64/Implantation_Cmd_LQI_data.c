/*
 * Implantation_Cmd_LQI_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Implantation_Cmd_LQI".
 *
 * Model version              : 9.6
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Thu Oct 19 12:03:16 2023
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Implantation_Cmd_LQI.h"

/* Block parameters (default storage) */
P_Implantation_Cmd_LQI_T Implantation_Cmd_LQI_P = {
  /* Variable: K_lqi
   * Referenced by:
   *   '<Root>/Gain4'
   *   '<Root>/Gain5'
   */
  { 2706.4253110288896, 1214.8009568250773, 3333.3333333333358 },

  /* Variable: Kw
   * Referenced by: '<S3>/Gain1'
   */
  0.24035010896248357,

  /* Variable: Kz
   * Referenced by: '<S3>/Gain4'
   */
  4.5789291565232038,

  /* Variable: Te1
   * Referenced by: '<S3>/Gain3'
   */
  0.002,

  /* Variable: Te2
   * Referenced by: '<Root>/Pulse Generator1'
   */
  0.02,

  /* Mask Parameter: BaseLEDColour_color
   * Referenced by: '<S4>/Constant'
   */
  { 0.0, 1.0, 0.0 },

  /* Mask Parameter: HILRead_analog_channels
   * Referenced by: '<S1>/HIL Read'
   */
  { 0U, 1U },

  /* Mask Parameter: HILWrite_analog_channels
   * Referenced by: '<S1>/HIL Write'
   */
  { 0U, 1U },

  /* Mask Parameter: HILRead_digital_channels
   * Referenced by: '<S1>/HIL Read'
   */
  { 0U, 1U, 2U },

  /* Mask Parameter: HILWrite_digital_channels
   * Referenced by: '<S1>/HIL Write'
   */
  { 0U, 1U },

  /* Mask Parameter: HILRead_encoder_channels
   * Referenced by: '<S1>/HIL Read'
   */
  { 2U, 3U },

  /* Mask Parameter: HILRead_other_channels
   * Referenced by: '<S1>/HIL Read'
   */
  { 14000U, 14001U, 3000U, 3001U, 3002U, 4000U, 4001U, 4002U },

  /* Mask Parameter: HILWrite_other_channels
   * Referenced by: '<S1>/HIL Write'
   */
  { 11000U, 11001U, 11002U },

  /* Expression: set_other_outputs_at_terminate
   * Referenced by: '<S1>/HIL Initialize'
   */
  1.0,

  /* Expression: set_other_outputs_at_switch_out
   * Referenced by: '<S1>/HIL Initialize'
   */
  0.0,

  /* Expression: set_other_outputs_at_start
   * Referenced by: '<S1>/HIL Initialize'
   */
  1.0,

  /* Expression: set_other_outputs_at_switch_in
   * Referenced by: '<S1>/HIL Initialize'
   */
  0.0,

  /* Expression: final_analog_outputs
   * Referenced by: '<S1>/HIL Initialize'
   */
  0.0,

  /* Expression: final_other_outputs
   * Referenced by: '<S1>/HIL Initialize'
   */
  { 1.0, 0.0, 0.0 },

  /* Expression: analog_input_maximums
   * Referenced by: '<S1>/HIL Initialize'
   */
  3.0,

  /* Expression: analog_input_minimums
   * Referenced by: '<S1>/HIL Initialize'
   */
  -3.0,

  /* Expression: analog_output_maximums
   * Referenced by: '<S1>/HIL Initialize'
   */
  24.0,

  /* Expression: analog_output_minimums
   * Referenced by: '<S1>/HIL Initialize'
   */
  -24.0,

  /* Expression: initial_analog_outputs
   * Referenced by: '<S1>/HIL Initialize'
   */
  0.0,

  /* Expression: watchdog_analog_outputs
   * Referenced by: '<S1>/HIL Initialize'
   */
  0.0,

  /* Expression: initial_other_outputs
   * Referenced by: '<S1>/HIL Initialize'
   */
  { 0.0, 1.0, 0.0 },

  /* Expression: watchdog_other_outputs
   * Referenced by: '<S1>/HIL Initialize'
   */
  { 0.0, 0.0, 1.0 },

  /* Expression: 2*pi/512/4
   * Referenced by: '<S1>/Pitch: counts to deg'
   */
  0.0030679615757712823,

  /* Expression: 0
   * Referenced by: '<Root>/Rate Transition1'
   */
  0.0,

  /* Expression: 2*pi/2048
   * Referenced by: '<Root>/Gain2'
   */
  0.0030679615757712823,

  /* Expression: 0
   * Referenced by: '<S3>/Unit Delay1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S3>/Gain2'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S3>/Unit Delay'
   */
  0.0,

  /* Expression: 24
   * Referenced by: '<S3>/+//- 24V'
   */
  24.0,

  /* Expression: -24
   * Referenced by: '<S3>/+//- 24V'
   */
  -24.0,

  /* Expression: 24
   * Referenced by: '<Root>/+//- 24V'
   */
  24.0,

  /* Expression: -24
   * Referenced by: '<Root>/+//- 24V'
   */
  -24.0,

  /* Expression: 0
   * Referenced by: '<Root>/Vy'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Pitch Motor Enable'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Yaw Enable Motor'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by:
   */
  0.0,

  /* Expression: 20
   * Referenced by: '<Root>/Pulse Generator1'
   */
  20.0,

  /* Expression: 0
   * Referenced by: '<Root>/Pulse Generator1'
   */
  0.0,

  /* Expression: 10
   * Referenced by: '<Root>/Constant1'
   */
  10.0,

  /* Expression: 180/pi
   * Referenced by: '<S2>/Gain'
   */
  57.295779513082323,

  /* Expression: pi/180
   * Referenced by: '<Root>/Gain6'
   */
  0.017453292519943295,

  /* Expression: [1 -1]
   * Referenced by: '<Root>/Discrete Filter2'
   */
  { 1.0, -1.0 },

  /* Expression: [Te2]
   * Referenced by: '<Root>/Discrete Filter2'
   */
  0.02,

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Filter2'
   */
  0.0,

  /* Computed Parameter: HILInitialize_CKChannels
   * Referenced by: '<S1>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOWatchdog
   * Referenced by: '<S1>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_EIInitial
   * Referenced by: '<S1>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AIChannels
   * Referenced by: '<S1>/HIL Initialize'
   */
  { 0U, 1U },

  /* Computed Parameter: HILInitialize_AOChannels
   * Referenced by: '<S1>/HIL Initialize'
   */
  { 0U, 1U },

  /* Computed Parameter: HILInitialize_DOChannels
   * Referenced by: '<S1>/HIL Initialize'
   */
  { 0U, 1U },

  /* Computed Parameter: HILInitialize_EIChannels
   * Referenced by: '<S1>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U },

  /* Computed Parameter: HILInitialize_EIQuadrature
   * Referenced by: '<S1>/HIL Initialize'
   */
  4U,

  /* Computed Parameter: HILInitialize_OOChannels
   * Referenced by: '<S1>/HIL Initialize'
   */
  { 11000U, 11001U, 11002U },

  /* Computed Parameter: HILInitialize_Active
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOTerminate
   * Referenced by: '<S1>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_AOExit
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOTerminate
   * Referenced by: '<S1>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_DOExit
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POTerminate
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POExit
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKPStart
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKPEnter
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKStart
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKEnter
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AIPStart
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AIPEnter
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOPStart
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOPEnter
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOStart
   * Referenced by: '<S1>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_AOEnter
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOReset
   * Referenced by: '<S1>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_DOPStart
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOPEnter
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOStart
   * Referenced by: '<S1>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_DOEnter
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOReset
   * Referenced by: '<S1>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_EIPStart
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_EIPEnter
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_EIStart
   * Referenced by: '<S1>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_EIEnter
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POPStart
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POPEnter
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POStart
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POEnter
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POReset
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_OOReset
   * Referenced by: '<S1>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_DOFinal
   * Referenced by: '<S1>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOInitial
   * Referenced by: '<S1>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILRead_Active
   * Referenced by: '<S1>/HIL Read'
   */
  true,

  /* Computed Parameter: HILWrite_Active
   * Referenced by: '<S1>/HIL Write'
   */
  false
};
