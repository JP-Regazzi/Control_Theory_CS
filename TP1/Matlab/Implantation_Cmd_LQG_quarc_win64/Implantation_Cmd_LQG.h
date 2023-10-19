/*
 * Implantation_Cmd_LQG.h
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

#ifndef RTW_HEADER_Implantation_Cmd_LQG_h_
#define RTW_HEADER_Implantation_Cmd_LQG_h_
#ifndef Implantation_Cmd_LQG_COMMON_INCLUDES_
#define Implantation_Cmd_LQG_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "hil.h"
#include "quanser_messages.h"
#include "quanser_extern.h"
#endif                               /* Implantation_Cmd_LQG_COMMON_INCLUDES_ */

#include "Implantation_Cmd_LQG_types.h"
#include "rt_defines.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "zero_crossing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
#define rtmGetChecksums(rtm)           ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
#define rtmSetChecksums(rtm, val)      ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
#define rtmGetConstBlockIO(rtm)        ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
#define rtmSetConstBlockIO(rtm, val)   ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
#define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
#define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
#define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
#define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
#define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
#define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ()
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ()
#endif

#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(rtm)        ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
#define rtmSetDefaultParam(rtm, val)   ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
#define rtmGetDirectFeedThrough(rtm)   ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
#define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
#define rtmGetErrorStatusFlag(rtm)     ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
#define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
#define rtmSetFinalTime(rtm, val)      ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
#define rtmGetFirstInitCondFlag(rtm)   ()
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ()
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ()
#endif

#ifndef rtmGetMdlRefGlobalRuntimeEventIndices
#define rtmGetMdlRefGlobalRuntimeEventIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalRuntimeEventIndices
#define rtmSetMdlRefGlobalRuntimeEventIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTID
#define rtmGetMdlRefGlobalTID(rtm)     ()
#endif

#ifndef rtmSetMdlRefGlobalTID
#define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTimerIndices
#define rtmGetMdlRefGlobalTimerIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalTimerIndices
#define rtmSetMdlRefGlobalTimerIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
#define rtmGetMdlRefTriggerTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefTriggerTID
#define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
#define rtmGetModelMappingInfo(rtm)    ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
#define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
#define rtmGetModelName(rtm)           ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
#define rtmSetModelName(rtm, val)      ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
#define rtmGetNonInlinedSFcns(rtm)     ()
#endif

#ifndef rtmSetNonInlinedSFcns
#define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
#define rtmGetNumBlockIO(rtm)          ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
#define rtmSetNumBlockIO(rtm, val)     ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
#define rtmGetNumBlockParams(rtm)      ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
#define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
#define rtmGetNumBlocks(rtm)           ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
#define rtmSetNumBlocks(rtm, val)      ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
#define rtmGetNumContStates(rtm)       ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
#define rtmSetNumContStates(rtm, val)  ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
#define rtmGetNumDWork(rtm)            ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
#define rtmSetNumDWork(rtm, val)       ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
#define rtmGetNumInputPorts(rtm)       ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
#define rtmSetNumInputPorts(rtm, val)  ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
#define rtmGetNumNonSampledZCs(rtm)    ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
#define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
#define rtmGetNumOutputPorts(rtm)      ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
#define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
#define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
#define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
#define rtmGetNumSFcnParams(rtm)       ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
#define rtmSetNumSFcnParams(rtm, val)  ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
#define rtmGetNumSFunctions(rtm)       ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
#define rtmSetNumSFunctions(rtm, val)  ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
#define rtmGetNumSampleTimes(rtm)      ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
#define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
#define rtmGetNumU(rtm)                ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
#define rtmSetNumU(rtm, val)           ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
#define rtmGetNumY(rtm)                ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
#define rtmSetNumY(rtm, val)           ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ()
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ()
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ()
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ()
#endif

#ifndef rtmGetOffsetTimeArray
#define rtmGetOffsetTimeArray(rtm)     ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
#define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
#define rtmGetOffsetTimePtr(rtm)       ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
#define rtmSetOffsetTimePtr(rtm, val)  ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
#define rtmGetOptions(rtm)             ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
#define rtmSetOptions(rtm, val)        ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
#define rtmGetParamIsMalloced(rtm)     ()
#endif

#ifndef rtmSetParamIsMalloced
#define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
#define rtmGetPath(rtm)                ((rtm)->path)
#endif

#ifndef rtmSetPath
#define rtmSetPath(rtm, val)           ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
#define rtmGetPerTaskSampleHits(rtm)   ((rtm)->Timing.RateInteraction)
#endif

#ifndef rtmSetPerTaskSampleHits
#define rtmSetPerTaskSampleHits(rtm, val) ((rtm)->Timing.RateInteraction = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsArray
#define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
#define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
#define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
#define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
#define rtmGetPrevZCSigState(rtm)      ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
#define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
#define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
#define rtmGetRTWGeneratedSFcn(rtm)    ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
#define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ()
#endif

#ifndef rtmSetRTWLogInfo
#define rtmSetRTWLogInfo(rtm, val)     ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
#define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
#define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
#define rtmGetRTWSfcnInfo(rtm)         ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
#define rtmSetRTWSfcnInfo(rtm, val)    ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
#define rtmGetRTWSolverInfo(rtm)       ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
#define rtmSetRTWSolverInfo(rtm, val)  ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
#define rtmGetRTWSolverInfoPtr(rtm)    ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
#define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
#define rtmGetReservedForXPC(rtm)      ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
#define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
#define rtmGetSFunctions(rtm)          ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
#define rtmSetSFunctions(rtm, val)     ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
#define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
#define rtmGetSampleHitPtr(rtm)        ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
#define rtmSetSampleHitPtr(rtm, val)   ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
#define rtmGetSampleTimeArray(rtm)     ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
#define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
#define rtmGetSampleTimePtr(rtm)       ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
#define rtmSetSampleTimePtr(rtm, val)  ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
#define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
#define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
#define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
#define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
#define rtmGetSelf(rtm)                ()
#endif

#ifndef rtmSetSelf
#define rtmSetSelf(rtm, val)           ()
#endif

#ifndef rtmGetSimMode
#define rtmGetSimMode(rtm)             ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
#define rtmSetSimMode(rtm, val)        ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
#define rtmGetSimTimeStep(rtm)         ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
#define rtmSetSimTimeStep(rtm, val)    ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
#define rtmGetStartTime(rtm)           ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
#define rtmSetStartTime(rtm, val)      ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
#define rtmSetStepSize(rtm, val)       ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
#define rtmGetStopRequestedFlag(rtm)   ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
#define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
#define rtmGetTaskCounters(rtm)        ((rtm)->Timing.TaskCounters)
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ((rtm)->Timing.TaskCounters = (val))
#endif

#ifndef rtmGetTaskTimeArray
#define rtmGetTaskTimeArray(rtm)       ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
#define rtmSetTaskTimeArray(rtm, val)  ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
#define rtmGetTimePtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
#define rtmSetTimePtr(rtm, val)        ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
#define rtmGetTimingData(rtm)          ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
#define rtmSetTimingData(rtm, val)     ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
#define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
#define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
#define rtmGetZCSignalValues(rtm)      ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
#define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
#define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
#define rtmGettimingBridge(rtm)        ()
#endif

#ifndef rtmSettimingBridge
#define rtmSettimingBridge(rtm, val)   ()
#endif

#ifndef rtmGetChecksumVal
#define rtmGetChecksumVal(rtm, idx)    ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
#define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
#define rtmGetDWork(rtm, idx)          ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
#define rtmSetDWork(rtm, idx, val)     ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
#define rtmGetOffsetTime(rtm, idx)     ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
#define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
#define rtmGetSFunction(rtm, idx)      ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
#define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
#define rtmGetSampleTime(rtm, idx)     ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
#define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
#define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
#define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
#define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
#define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
#define rtmIsContinuousTask(rtm, tid)  ((tid) <= 1)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  (((rtm)->Timing.sampleTimeTaskIDPtr[sti] == (tid)))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
#define rtmSetT(rtm, val)                                        /* Do Nothing */
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
#define rtmSetTStart(rtm, val)         ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti)       (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val)  (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define Implantation_Cmd_LQG_rtModel   RT_MODEL_Implantation_Cmd_LQG_T

/* Block signals (default storage) */
typedef struct {
  real_T HILRead_o1;                   /* '<S1>/HIL Read' */
  real_T HILRead_o2;                   /* '<S1>/HIL Read' */
  real_T RateTransition;               /* '<Root>/Rate Transition' */
  real_T Gain2[2];                     /* '<Root>/Gain2' */
  real_T Add1;                         /* '<S3>/Add1' */
  real_T u4V;                          /* '<Root>/+//- 24V' */
  real_T Add4;                         /* '<S3>/Add4' */
  real_T Clock;                        /* '<Root>/Clock' */
  real_T Theta_refdegrs;               /* '<Root>/Add1' */
  real_T Gain;                         /* '<S2>/Gain' */
  real_T DiscreteStateSpace[2];        /* '<Root>/Discrete State-Space' */
  real_T TmpSignalConversionAtDiscreteSt[2];
} B_Implantation_Cmd_LQG_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay1_DSTATE;            /* '<S3>/Unit Delay1' */
  real_T UnitDelay_DSTATE;             /* '<S3>/Unit Delay' */
  real_T DiscreteStateSpace_DSTATE[2]; /* '<Root>/Discrete State-Space' */
  real_T HILInitialize_AIMinimums[2];  /* '<S1>/HIL Initialize' */
  real_T HILInitialize_AIMaximums[2];  /* '<S1>/HIL Initialize' */
  real_T HILInitialize_AOMinimums[2];  /* '<S1>/HIL Initialize' */
  real_T HILInitialize_AOMaximums[2];  /* '<S1>/HIL Initialize' */
  real_T HILInitialize_AOVoltages[2];  /* '<S1>/HIL Initialize' */
  real_T HILInitialize_FilterFrequency[4];/* '<S1>/HIL Initialize' */
  real_T HILRead_AnalogBuffer[2];      /* '<S1>/HIL Read' */
  real_T HILRead_OtherBuffer[8];       /* '<S1>/HIL Read' */
  real_T RateTransition_Buffer0;       /* '<Root>/Rate Transition' */
  real_T HILWrite_AnalogBuffer[2];     /* '<S1>/HIL Write' */
  real_T HILWrite_OtherBuffer[3];      /* '<S1>/HIL Write' */
  real_T RateTransition2_Buffer;       /* '<Root>/Rate Transition2' */
  t_card HILInitialize_Card;           /* '<S1>/HIL Initialize' */
  void *HILRead_PWORK;                 /* '<S1>/HIL Read' */
  void *HILWrite_PWORK;                /* '<S1>/HIL Write' */
  struct {
    void *LoggedData;
  } CommandeVp_PWORK;                  /* '<Root>/Commande Vp' */

  struct {
    void *LoggedData;
  } CurrentA_PWORK;                    /* '<Root>/Current (A)' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<Root>/To Workspace1' */

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK;                /* '<Root>/To Workspace3' */

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                /* '<Root>/To Workspace4' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<Root>/To Workspace2' */

  struct {
    void *LoggedData;
  } PitchEncoderdeg_PWORK;             /* '<Root>/Pitch Encoder (deg)' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<Root>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace5_PWORK;                /* '<Root>/To Workspace5' */

  struct {
    void *LoggedData;
  } ToWorkspace6_PWORK;                /* '<Root>/To Workspace6' */

  struct {
    void *LoggedData;
  } ToWorkspace7_PWORK;                /* '<Root>/To Workspace7' */

  int32_T HILInitialize_ClockModes;    /* '<S1>/HIL Initialize' */
  int32_T HILInitialize_DOStates[2];   /* '<S1>/HIL Initialize' */
  int32_T HILInitialize_QuadratureModes[4];/* '<S1>/HIL Initialize' */
  int32_T HILInitialize_InitialEICounts[4];/* '<S1>/HIL Initialize' */
  int32_T HILRead_EncoderBuffer[2];    /* '<S1>/HIL Read' */
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
  boolean_T HILInitialize_DOBits[2];   /* '<S1>/HIL Initialize' */
  t_boolean HILRead_DigitalBuffer[3];  /* '<S1>/HIL Read' */
  t_boolean HILWrite_DigitalBuffer[2]; /* '<S1>/HIL Write' */
} DW_Implantation_Cmd_LQG_T;

/* Backward compatible GRT Identifiers */
#define rtB                            Implantation_Cmd_LQG_B
#define BlockIO                        B_Implantation_Cmd_LQG_T
#define rtP                            Implantation_Cmd_LQG_P
#define Parameters                     P_Implantation_Cmd_LQG_T
#define rtDWork                        Implantation_Cmd_LQG_DW
#define D_Work                         DW_Implantation_Cmd_LQG_T

/* Parameters (default storage) */
struct P_Implantation_Cmd_LQG_T_ {
  real_T A[4];                         /* Variable: A
                                        * Referenced by: '<Root>/Discrete State-Space'
                                        */
  real_T K_lq[2];                      /* Variable: K_lq
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Kw;                           /* Variable: Kw
                                        * Referenced by: '<S3>/Gain1'
                                        */
  real_T Kz;                           /* Variable: Kz
                                        * Referenced by: '<S3>/Gain4'
                                        */
  real_T M_lq;                         /* Variable: M_lq
                                        * Referenced by: '<Root>/Gain4'
                                        */
  real_T Te1;                          /* Variable: Te1
                                        * Referenced by: '<S3>/Gain3'
                                        */
  real_T Te2;                          /* Variable: Te2
                                        * Referenced by:
                                        *   '<Root>/Pulse Generator'
                                        *   '<Root>/Discrete State-Space'
                                        */
  real_T BaseLEDColour_color[3];       /* Mask Parameter: BaseLEDColour_color
                                        * Referenced by: '<S4>/Constant'
                                        */
  uint32_T HILRead_analog_channels[2];/* Mask Parameter: HILRead_analog_channels
                                       * Referenced by: '<S1>/HIL Read'
                                       */
  uint32_T HILWrite_analog_channels[2];
                                     /* Mask Parameter: HILWrite_analog_channels
                                      * Referenced by: '<S1>/HIL Write'
                                      */
  uint32_T HILRead_digital_channels[3];
                                     /* Mask Parameter: HILRead_digital_channels
                                      * Referenced by: '<S1>/HIL Read'
                                      */
  uint32_T HILWrite_digital_channels[2];
                                    /* Mask Parameter: HILWrite_digital_channels
                                     * Referenced by: '<S1>/HIL Write'
                                     */
  uint32_T HILRead_encoder_channels[2];
                                     /* Mask Parameter: HILRead_encoder_channels
                                      * Referenced by: '<S1>/HIL Read'
                                      */
  uint32_T HILRead_other_channels[8];  /* Mask Parameter: HILRead_other_channels
                                        * Referenced by: '<S1>/HIL Read'
                                        */
  uint32_T HILWrite_other_channels[3];/* Mask Parameter: HILWrite_other_channels
                                       * Referenced by: '<S1>/HIL Write'
                                       */
  real_T HILInitialize_OOTerminate;/* Expression: set_other_outputs_at_terminate
                                    * Referenced by: '<S1>/HIL Initialize'
                                    */
  real_T HILInitialize_OOExit;    /* Expression: set_other_outputs_at_switch_out
                                   * Referenced by: '<S1>/HIL Initialize'
                                   */
  real_T HILInitialize_OOStart;        /* Expression: set_other_outputs_at_start
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_OOEnter;    /* Expression: set_other_outputs_at_switch_in
                                    * Referenced by: '<S1>/HIL Initialize'
                                    */
  real_T HILInitialize_AOFinal;        /* Expression: final_analog_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_OOFinal[3];     /* Expression: final_other_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AIHigh;         /* Expression: analog_input_maximums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AILow;          /* Expression: analog_input_minimums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AOHigh;         /* Expression: analog_output_maximums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AOLow;          /* Expression: analog_output_minimums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AOInitial;      /* Expression: initial_analog_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AOWatchdog;     /* Expression: watchdog_analog_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_OOInitial[3];   /* Expression: initial_other_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_OOWatchdog[3];  /* Expression: watchdog_other_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T Pitchcountstodeg_Gain;        /* Expression: 2*pi/512/4
                                        * Referenced by: '<S1>/Pitch: counts to deg'
                                        */
  real_T RateTransition_InitialCondition;/* Expression: 0
                                          * Referenced by: '<Root>/Rate Transition'
                                          */
  real_T Gain2_Gain;                   /* Expression: 2*pi/2048
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S3>/Unit Delay1'
                                        */
  real_T Gain2_Gain_f;                 /* Expression: 1
                                        * Referenced by: '<S3>/Gain2'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S3>/Unit Delay'
                                        */
  real_T u4V_UpperSat;                 /* Expression: 24
                                        * Referenced by: '<S3>/+//- 24V'
                                        */
  real_T u4V_LowerSat;                 /* Expression: -24
                                        * Referenced by: '<S3>/+//- 24V'
                                        */
  real_T u4V_UpperSat_n;               /* Expression: 24
                                        * Referenced by: '<Root>/+//- 24V'
                                        */
  real_T u4V_LowerSat_o;               /* Expression: -24
                                        * Referenced by: '<Root>/+//- 24V'
                                        */
  real_T YawConstantdeg2_Value;        /* Expression: 0
                                        * Referenced by: '<Root>/Yaw Constant(deg)2'
                                        */
  real_T PitchMotorEnable_Value;       /* Expression: 1
                                        * Referenced by: '<Root>/Pitch Motor Enable'
                                        */
  real_T YawEnableMotor_Value;         /* Expression: 1
                                        * Referenced by: '<Root>/Yaw Enable Motor'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 20
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T Constant_Value;               /* Expression: 10
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Gain_Gain;                    /* Expression: 180/pi
                                        * Referenced by: '<S2>/Gain'
                                        */
  real_T DiscreteStateSpace_C[4];      /* Expression: eye(2)
                                        * Referenced by: '<Root>/Discrete State-Space'
                                        */
  real_T DiscreteStateSpace_D[4];      /* Expression: zeros(2,2)
                                        * Referenced by: '<Root>/Discrete State-Space'
                                        */
  real_T DiscreteStateSpace_InitialCondi;/* Expression: 0
                                          * Referenced by: '<Root>/Discrete State-Space'
                                          */
  real_T Gain6_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<Root>/Gain6'
                                        */
  int32_T HILInitialize_CKChannels;
                                 /* Computed Parameter: HILInitialize_CKChannels
                                  * Referenced by: '<S1>/HIL Initialize'
                                  */
  int32_T HILInitialize_DOWatchdog;
                                 /* Computed Parameter: HILInitialize_DOWatchdog
                                  * Referenced by: '<S1>/HIL Initialize'
                                  */
  int32_T HILInitialize_EIInitial;/* Computed Parameter: HILInitialize_EIInitial
                                   * Referenced by: '<S1>/HIL Initialize'
                                   */
  uint32_T HILInitialize_AIChannels[2];
                                 /* Computed Parameter: HILInitialize_AIChannels
                                  * Referenced by: '<S1>/HIL Initialize'
                                  */
  uint32_T HILInitialize_AOChannels[2];
                                 /* Computed Parameter: HILInitialize_AOChannels
                                  * Referenced by: '<S1>/HIL Initialize'
                                  */
  uint32_T HILInitialize_DOChannels[2];
                                 /* Computed Parameter: HILInitialize_DOChannels
                                  * Referenced by: '<S1>/HIL Initialize'
                                  */
  uint32_T HILInitialize_EIChannels[4];
                                 /* Computed Parameter: HILInitialize_EIChannels
                                  * Referenced by: '<S1>/HIL Initialize'
                                  */
  uint32_T HILInitialize_EIQuadrature;
                               /* Computed Parameter: HILInitialize_EIQuadrature
                                * Referenced by: '<S1>/HIL Initialize'
                                */
  uint32_T HILInitialize_OOChannels[3];
                                 /* Computed Parameter: HILInitialize_OOChannels
                                  * Referenced by: '<S1>/HIL Initialize'
                                  */
  boolean_T HILInitialize_Active;    /* Computed Parameter: HILInitialize_Active
                                      * Referenced by: '<S1>/HIL Initialize'
                                      */
  boolean_T HILInitialize_AOTerminate;
                                /* Computed Parameter: HILInitialize_AOTerminate
                                 * Referenced by: '<S1>/HIL Initialize'
                                 */
  boolean_T HILInitialize_AOExit;    /* Computed Parameter: HILInitialize_AOExit
                                      * Referenced by: '<S1>/HIL Initialize'
                                      */
  boolean_T HILInitialize_DOTerminate;
                                /* Computed Parameter: HILInitialize_DOTerminate
                                 * Referenced by: '<S1>/HIL Initialize'
                                 */
  boolean_T HILInitialize_DOExit;    /* Computed Parameter: HILInitialize_DOExit
                                      * Referenced by: '<S1>/HIL Initialize'
                                      */
  boolean_T HILInitialize_POTerminate;
                                /* Computed Parameter: HILInitialize_POTerminate
                                 * Referenced by: '<S1>/HIL Initialize'
                                 */
  boolean_T HILInitialize_POExit;    /* Computed Parameter: HILInitialize_POExit
                                      * Referenced by: '<S1>/HIL Initialize'
                                      */
  boolean_T HILInitialize_CKPStart;/* Computed Parameter: HILInitialize_CKPStart
                                    * Referenced by: '<S1>/HIL Initialize'
                                    */
  boolean_T HILInitialize_CKPEnter;/* Computed Parameter: HILInitialize_CKPEnter
                                    * Referenced by: '<S1>/HIL Initialize'
                                    */
  boolean_T HILInitialize_CKStart;  /* Computed Parameter: HILInitialize_CKStart
                                     * Referenced by: '<S1>/HIL Initialize'
                                     */
  boolean_T HILInitialize_CKEnter;  /* Computed Parameter: HILInitialize_CKEnter
                                     * Referenced by: '<S1>/HIL Initialize'
                                     */
  boolean_T HILInitialize_AIPStart;/* Computed Parameter: HILInitialize_AIPStart
                                    * Referenced by: '<S1>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AIPEnter;/* Computed Parameter: HILInitialize_AIPEnter
                                    * Referenced by: '<S1>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AOPStart;/* Computed Parameter: HILInitialize_AOPStart
                                    * Referenced by: '<S1>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AOPEnter;/* Computed Parameter: HILInitialize_AOPEnter
                                    * Referenced by: '<S1>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AOStart;  /* Computed Parameter: HILInitialize_AOStart
                                     * Referenced by: '<S1>/HIL Initialize'
                                     */
  boolean_T HILInitialize_AOEnter;  /* Computed Parameter: HILInitialize_AOEnter
                                     * Referenced by: '<S1>/HIL Initialize'
                                     */
  boolean_T HILInitialize_AOReset;  /* Computed Parameter: HILInitialize_AOReset
                                     * Referenced by: '<S1>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOPStart;/* Computed Parameter: HILInitialize_DOPStart
                                    * Referenced by: '<S1>/HIL Initialize'
                                    */
  boolean_T HILInitialize_DOPEnter;/* Computed Parameter: HILInitialize_DOPEnter
                                    * Referenced by: '<S1>/HIL Initialize'
                                    */
  boolean_T HILInitialize_DOStart;  /* Computed Parameter: HILInitialize_DOStart
                                     * Referenced by: '<S1>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOEnter;  /* Computed Parameter: HILInitialize_DOEnter
                                     * Referenced by: '<S1>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOReset;  /* Computed Parameter: HILInitialize_DOReset
                                     * Referenced by: '<S1>/HIL Initialize'
                                     */
  boolean_T HILInitialize_EIPStart;/* Computed Parameter: HILInitialize_EIPStart
                                    * Referenced by: '<S1>/HIL Initialize'
                                    */
  boolean_T HILInitialize_EIPEnter;/* Computed Parameter: HILInitialize_EIPEnter
                                    * Referenced by: '<S1>/HIL Initialize'
                                    */
  boolean_T HILInitialize_EIStart;  /* Computed Parameter: HILInitialize_EIStart
                                     * Referenced by: '<S1>/HIL Initialize'
                                     */
  boolean_T HILInitialize_EIEnter;  /* Computed Parameter: HILInitialize_EIEnter
                                     * Referenced by: '<S1>/HIL Initialize'
                                     */
  boolean_T HILInitialize_POPStart;/* Computed Parameter: HILInitialize_POPStart
                                    * Referenced by: '<S1>/HIL Initialize'
                                    */
  boolean_T HILInitialize_POPEnter;/* Computed Parameter: HILInitialize_POPEnter
                                    * Referenced by: '<S1>/HIL Initialize'
                                    */
  boolean_T HILInitialize_POStart;  /* Computed Parameter: HILInitialize_POStart
                                     * Referenced by: '<S1>/HIL Initialize'
                                     */
  boolean_T HILInitialize_POEnter;  /* Computed Parameter: HILInitialize_POEnter
                                     * Referenced by: '<S1>/HIL Initialize'
                                     */
  boolean_T HILInitialize_POReset;  /* Computed Parameter: HILInitialize_POReset
                                     * Referenced by: '<S1>/HIL Initialize'
                                     */
  boolean_T HILInitialize_OOReset;  /* Computed Parameter: HILInitialize_OOReset
                                     * Referenced by: '<S1>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOFinal;  /* Computed Parameter: HILInitialize_DOFinal
                                     * Referenced by: '<S1>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOInitial;
                                  /* Computed Parameter: HILInitialize_DOInitial
                                   * Referenced by: '<S1>/HIL Initialize'
                                   */
  boolean_T HILRead_Active;            /* Computed Parameter: HILRead_Active
                                        * Referenced by: '<S1>/HIL Read'
                                        */
  boolean_T HILWrite_Active;           /* Computed Parameter: HILWrite_Active
                                        * Referenced by: '<S1>/HIL Write'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Implantation_Cmd_LQG_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;
  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  void *dwork;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    struct {
      uint8_T TID[3];
    } TaskCounters;

    struct {
      boolean_T TID1_2;
    } RateInteraction;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[3];
    time_T offsetTimesArray[3];
    int_T sampleTimeTaskIDArray[3];
    int_T sampleHitArray[3];
    int_T perTaskSampleHitsArray[9];
    time_T tArray[3];
  } Timing;
};

/* Block parameters (default storage) */
extern P_Implantation_Cmd_LQG_T Implantation_Cmd_LQG_P;

/* Block signals (default storage) */
extern B_Implantation_Cmd_LQG_T Implantation_Cmd_LQG_B;

/* Block states (default storage) */
extern DW_Implantation_Cmd_LQG_T Implantation_Cmd_LQG_DW;

/* External function called from main */
extern time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
  ;

/* Model entry point functions */
extern void Implantation_Cmd_LQG_initialize(void);
extern void Implantation_Cmd_LQG_output0(void);
extern void Implantation_Cmd_LQG_update0(void);
extern void Implantation_Cmd_LQG_output2(void);
extern void Implantation_Cmd_LQG_update2(void);
extern void Implantation_Cmd_LQG_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern Implantation_Cmd_LQG_rtModel *Implantation_Cmd_LQG(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_Implantation_Cmd_LQG_T *const Implantation_Cmd_LQG_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Implantation_Cmd_LQG'
 * '<S1>'   : 'Implantation_Cmd_LQG/Quanser Aero USB Interface'
 * '<S2>'   : 'Implantation_Cmd_LQG/Radians to Degrees2'
 * '<S3>'   : 'Implantation_Cmd_LQG/Retour etat w'
 * '<S4>'   : 'Implantation_Cmd_LQG/Quanser Aero USB Interface/Base LED Colour'
 */
#endif                                 /* RTW_HEADER_Implantation_Cmd_LQG_h_ */
