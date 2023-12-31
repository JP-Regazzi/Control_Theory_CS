/*
 * Implantation_Cmd_MCC_Ka_dt.h
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
  { (char_T *)(&Implantation_Cmd_MCC_Ka_B.HILRead_o1), 0, 0, 8 }
  ,

  { (char_T *)(&Implantation_Cmd_MCC_Ka_DW.Integrateur1_states), 0, 0, 31 },

  { (char_T *)(&Implantation_Cmd_MCC_Ka_DW.HILInitialize_Card), 15, 0, 1 },

  { (char_T *)(&Implantation_Cmd_MCC_Ka_DW.HILRead_PWORK), 11, 0, 10 },

  { (char_T *)(&Implantation_Cmd_MCC_Ka_DW.HILInitialize_ClockModes), 6, 0, 14 },

  { (char_T *)(&Implantation_Cmd_MCC_Ka_DW.HILInitialize_DOBits[0]), 8, 0, 2 },

  { (char_T *)(&Implantation_Cmd_MCC_Ka_DW.HILRead_DigitalBuffer[0]), 16, 0, 5 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  7U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&Implantation_Cmd_MCC_Ka_P.Kw), 0, 0, 5 },

  { (char_T *)(&Implantation_Cmd_MCC_Ka_P.HILRead_analog_channels[0]), 7, 0, 22
  },

  { (char_T *)(&Implantation_Cmd_MCC_Ka_P.HILInitialize_OOTerminate), 0, 0, 38 },

  { (char_T *)(&Implantation_Cmd_MCC_Ka_P.HILInitialize_CKChannels), 6, 0, 3 },

  { (char_T *)(&Implantation_Cmd_MCC_Ka_P.HILInitialize_AIChannels[0]), 7, 0, 14
  },

  { (char_T *)(&Implantation_Cmd_MCC_Ka_P.HILInitialize_Active), 8, 0, 37 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  6U,
  rtPTransitions
};

/* [EOF] Implantation_Cmd_MCC_Ka_dt.h */
