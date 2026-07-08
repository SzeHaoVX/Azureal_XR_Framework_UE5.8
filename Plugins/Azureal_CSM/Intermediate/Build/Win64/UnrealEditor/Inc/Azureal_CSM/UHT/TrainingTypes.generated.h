// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TrainingTypes.h"

#ifdef AZUREAL_CSM_TrainingTypes_generated_h
#error "TrainingTypes.generated.h already included, missing '#pragma once' in TrainingTypes.h"
#endif
#define AZUREAL_CSM_TrainingTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSubStepData ******************************************************
struct Z_Construct_UScriptStruct_FSubStepData_Statics;
AZUREAL_CSM_API UScriptStruct* Z_Construct_UScriptStruct_FSubStepData(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingTypes_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSubStepData_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FSubStepData(ETypeConstructPhase::Inner); }


struct FSubStepData;
// ********** End ScriptStruct FSubStepData ********************************************************

// ********** Begin ScriptStruct FQuizAnswerData ***************************************************
struct Z_Construct_UScriptStruct_FQuizAnswerData_Statics;
AZUREAL_CSM_API UScriptStruct* Z_Construct_UScriptStruct_FQuizAnswerData(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingTypes_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FQuizAnswerData_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FQuizAnswerData(ETypeConstructPhase::Inner); }


struct FQuizAnswerData;
// ********** End ScriptStruct FQuizAnswerData *****************************************************

// ********** Begin ScriptStruct FStepData *********************************************************
struct Z_Construct_UScriptStruct_FStepData_Statics;
AZUREAL_CSM_API UScriptStruct* Z_Construct_UScriptStruct_FStepData(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingTypes_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStepData_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FStepData(ETypeConstructPhase::Inner); }


struct FStepData;
// ********** End ScriptStruct FStepData ***********************************************************

// ********** Begin ScriptStruct FRuntimeStep ******************************************************
struct Z_Construct_UScriptStruct_FRuntimeStep_Statics;
AZUREAL_CSM_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeStep(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingTypes_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRuntimeStep_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRuntimeStep(ETypeConstructPhase::Inner); }


struct FRuntimeStep;
// ********** End ScriptStruct FRuntimeStep ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingTypes_h

// ********** Begin Enum ESubStepState *************************************************************
#define FOREACH_ENUM_ESUBSTEPSTATE(op) \
	op(ESubStepState::Idle) \
	op(ESubStepState::Active) \
	op(ESubStepState::Completed) 

enum class ESubStepState : uint8;
template<> struct TIsUEnumClass<ESubStepState> { enum { Value = true }; };
template<> UE_NODEBUG AZUREAL_CSM_NON_ATTRIBUTED_API UEnum* StaticEnum<ESubStepState>();
// ********** End Enum ESubStepState ***************************************************************

// ********** Begin Enum EStepType *****************************************************************
#define FOREACH_ENUM_ESTEPTYPE(op) \
	op(EStepType::Interaction) \
	op(EStepType::Explanation) 

enum class EStepType : uint8;
template<> struct TIsUEnumClass<EStepType> { enum { Value = true }; };
template<> UE_NODEBUG AZUREAL_CSM_NON_ATTRIBUTED_API UEnum* StaticEnum<EStepType>();
// ********** End Enum EStepType *******************************************************************

// ********** Begin Enum EMasterStepType ***********************************************************
#define FOREACH_ENUM_EMASTERSTEPTYPE(op) \
	op(EMasterStepType::Standard) \
	op(EMasterStepType::Quiz) 

enum class EMasterStepType : uint8;
template<> struct TIsUEnumClass<EMasterStepType> { enum { Value = true }; };
template<> UE_NODEBUG AZUREAL_CSM_NON_ATTRIBUTED_API UEnum* StaticEnum<EMasterStepType>();
// ********** End Enum EMasterStepType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
