/*
 * Implantation_Cmd_LQI_dt.h
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

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(int32_T),
  sizeof(t_card),
  sizeof(t_boolean),
  sizeof(uint_T),
  sizeof(char_T),
  sizeof(uchar_T),
  sizeof(time_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "physical_connection",
  "t_card",
  "t_boolean",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&Implantation_Cmd_LQI_B.HILRead_o1), 0, 0, 13 }
  ,

  { (char_T *)(&Implantation_Cmd_LQI_DW.UnitDelay1_DSTATE), 0, 0, 37 },

  { (char_T *)(&Implantation_Cmd_LQI_DW.HILInitialize_Card), 15, 0, 1 },

  { (char_T *)(&Implantation_Cmd_LQI_DW.HILRead_PWORK), 11, 0, 12 },

  { (char_T *)(&Implantation_Cmd_LQI_DW.HILInitialize_ClockModes), 6, 0, 14 },

  { (char_T *)(&Implantation_Cmd_LQI_DW.HILInitialize_DOBits[0]), 8, 0, 2 },

  { (char_T *)(&Implantation_Cmd_LQI_DW.HILRead_DigitalBuffer[0]), 16, 0, 5 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  7U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&Implantation_Cmd_LQI_P.K_lqi[0]), 0, 0, 10 },

  { (char_T *)(&Implantation_Cmd_LQI_P.HILRead_analog_channels[0]), 7, 0, 22 },

  { (char_T *)(&Implantation_Cmd_LQI_P.HILInitialize_OOTerminate), 0, 0, 44 },

  { (char_T *)(&Implantation_Cmd_LQI_P.HILInitialize_CKChannels), 6, 0, 3 },

  { (char_T *)(&Implantation_Cmd_LQI_P.HILInitialize_AIChannels[0]), 7, 0, 14 },

  { (char_T *)(&Implantation_Cmd_LQI_P.HILInitialize_Active), 8, 0, 37 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  6U,
  rtPTransitions
};

/* [EOF] Implantation_Cmd_LQI_dt.h */
