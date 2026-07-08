// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_AzurealUpdate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_AzurealUpdate() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_AzurealEndSession(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_AzurealQuizUpdate(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_AzurealUpdate(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_AzurealUpdatePin__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_AzurealEndSession(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_AzurealQuizUpdate(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_AzurealUpdate(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FAzurealUpdatePin *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_AzurealUpdatePin__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_AzurealXR_eventAzurealUpdatePin_Parms
	{
		float ScorePercentage;
		FString SessionStatus;
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shared delegate for Physical Actions, Quizzes, and End Session\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shared delegate for Physical Actions, Quizzes, and End Session" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FAzurealUpdatePin constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScorePercentage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionStatus;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FAzurealUpdatePin constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FAzurealUpdatePin Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ScorePercentage = { "ScorePercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventAzurealUpdatePin_Parms, ScorePercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SessionStatus = { "SessionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventAzurealUpdatePin_Parms, SessionStatus), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventAzurealUpdatePin_Parms, ErrorMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScorePercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SessionStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FAzurealUpdatePin Property Definitions **********************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "AzurealUpdatePin__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_AzurealXR_eventAzurealUpdatePin_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_AzurealXR_eventAzurealUpdatePin_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AzurealXR_AzurealUpdatePin__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FAzurealUpdatePin *******************************************************

// ********** Begin Class UAzr_AzurealUpdate Function AzurealUpdate ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_AzurealUpdate_AzurealUpdate_Statics
struct UHT_STATICS
{
	struct Azr_AzurealUpdate_eventAzurealUpdate_Parms
	{
		UObject* WorldContextObject;
		int32 ChapterNumber;
		int32 StepNumber;
		int32 SubStepNumber;
		bool bCompleted;
		UAzr_AzurealUpdate* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Azureal|Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Records a completed or failed action step to the Azureal Server. */" },
#endif
		{ "DisplayName", "Azureal - Record Action" },
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Records a completed or failed action step to the Azureal Server." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function AzurealUpdate constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChapterNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StepNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubStepNumber;
	static void NewProp_bCompleted_SetBit(void* Obj)
	{
		((Azr_AzurealUpdate_eventAzurealUpdate_Parms*)Obj)->bCompleted = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompleted;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AzurealUpdate constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AzurealUpdate Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealUpdate_eventAzurealUpdate_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ChapterNumber = { "ChapterNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealUpdate_eventAzurealUpdate_Parms, ChapterNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StepNumber = { "StepNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealUpdate_eventAzurealUpdate_Parms, StepNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SubStepNumber = { "SubStepNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealUpdate_eventAzurealUpdate_Parms, SubStepNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCompleted = { "bCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_AzurealUpdate_eventAzurealUpdate_Parms), &UHT_STATICS::NewProp_bCompleted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealUpdate_eventAzurealUpdate_Parms, ReturnValue), Z_Construct_UClass_UAzr_AzurealUpdate, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChapterNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StepNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SubStepNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AzurealUpdate Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_AzurealUpdate, nullptr, "AzurealUpdate", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_AzurealUpdate_eventAzurealUpdate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_AzurealUpdate_eventAzurealUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_AzurealUpdate_AzurealUpdate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_AzurealUpdate::execAzurealUpdate)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_ChapterNumber);
	P_GET_PROPERTY(FIntProperty,Z_Param_StepNumber);
	P_GET_PROPERTY(FIntProperty,Z_Param_SubStepNumber);
	P_GET_UBOOL(Z_Param_bCompleted);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAzr_AzurealUpdate**)Z_Param__Result=UAzr_AzurealUpdate::AzurealUpdate(Z_Param_WorldContextObject,Z_Param_ChapterNumber,Z_Param_StepNumber,Z_Param_SubStepNumber,Z_Param_bCompleted);
	P_NATIVE_END;
}
// ********** End Class UAzr_AzurealUpdate Function AzurealUpdate **********************************

// ********** Begin Class UAzr_AzurealUpdate Function HandleFailure ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_AzurealUpdate_HandleFailure_Statics
struct UHT_STATICS
{
	struct Azr_AzurealUpdate_eventHandleFailure_Parms
	{
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleFailure constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleFailure constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleFailure Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealUpdate_eventHandleFailure_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleFailure Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_AzurealUpdate, nullptr, "HandleFailure", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_AzurealUpdate_eventHandleFailure_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_AzurealUpdate_eventHandleFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_AzurealUpdate_HandleFailure(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_AzurealUpdate::execHandleFailure)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Error);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFailure(Z_Param_Error);
	P_NATIVE_END;
}
// ********** End Class UAzr_AzurealUpdate Function HandleFailure **********************************

// ********** Begin Class UAzr_AzurealUpdate Function HandleSuccess ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_AzurealUpdate_HandleSuccess_Statics
struct UHT_STATICS
{
	struct Azr_AzurealUpdate_eventHandleSuccess_Parms
	{
		float ScorePercentage;
		FString SessionStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSuccess constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScorePercentage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleSuccess constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleSuccess Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ScorePercentage = { "ScorePercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealUpdate_eventHandleSuccess_Parms, ScorePercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SessionStatus = { "SessionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealUpdate_eventHandleSuccess_Parms, SessionStatus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionStatus_MetaData), NewProp_SessionStatus_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScorePercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SessionStatus,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleSuccess Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_AzurealUpdate, nullptr, "HandleSuccess", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_AzurealUpdate_eventHandleSuccess_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_AzurealUpdate_eventHandleSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_AzurealUpdate_HandleSuccess(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_AzurealUpdate::execHandleSuccess)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScorePercentage);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionStatus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSuccess(Z_Param_ScorePercentage,Z_Param_SessionStatus);
	P_NATIVE_END;
}
// ********** End Class UAzr_AzurealUpdate Function HandleSuccess **********************************

// ********** Begin Class UAzr_AzurealUpdate Function RecordCurrentTime ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_AzurealUpdate_RecordCurrentTime_Statics
struct UHT_STATICS
{
	struct Azr_AzurealUpdate_eventRecordCurrentTime_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Explicitly marks the current time. Used at the start of a Step to ignore previous dead time. */" },
#endif
		{ "DisplayName", "Azureal - Record Time" },
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Explicitly marks the current time. Used at the start of a Step to ignore previous dead time." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RecordCurrentTime constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RecordCurrentTime constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RecordCurrentTime Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealUpdate_eventRecordCurrentTime_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RecordCurrentTime Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_AzurealUpdate, nullptr, "RecordCurrentTime", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_AzurealUpdate_eventRecordCurrentTime_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_AzurealUpdate_eventRecordCurrentTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_AzurealUpdate_RecordCurrentTime(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_AzurealUpdate::execRecordCurrentTime)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAzr_AzurealUpdate::RecordCurrentTime(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UAzr_AzurealUpdate Function RecordCurrentTime ******************************

// ********** Begin Class UAzr_AzurealUpdate *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_AzurealUpdate_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==============================================================================\n// PHYSICAL ACTION NODE\n// ==============================================================================\n" },
#endif
		{ "IncludePath", "Azr_AzurealUpdate.h" },
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PHYSICAL ACTION NODE" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_AzurealUpdate constinit property declarations ***********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_AzurealUpdate constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AzurealUpdate"), .Pointer = &UAzr_AzurealUpdate::execAzurealUpdate },
		{ .NameUTF8 = UTF8TEXT("HandleFailure"), .Pointer = &UAzr_AzurealUpdate::execHandleFailure },
		{ .NameUTF8 = UTF8TEXT("HandleSuccess"), .Pointer = &UAzr_AzurealUpdate::execHandleSuccess },
		{ .NameUTF8 = UTF8TEXT("RecordCurrentTime"), .Pointer = &UAzr_AzurealUpdate::execRecordCurrentTime },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_AzurealUpdate_AzurealUpdate, "AzurealUpdate" }, // 23e40bd7c1038fecddddfb07e8bee1991f28c970
		{ &Z_Construct_UFunction_UAzr_AzurealUpdate_HandleFailure, "HandleFailure" }, // 14b6f7b546fb3f3d95b8d61c734895bd441ab563
		{ &Z_Construct_UFunction_UAzr_AzurealUpdate_HandleSuccess, "HandleSuccess" }, // 41feb12713624eb0716f588a19495f859aa17522
		{ &Z_Construct_UFunction_UAzr_AzurealUpdate_RecordCurrentTime, "RecordCurrentTime" }, // df3d80cad741dc5fd818d07c3a813843d4bb19e1
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_AzurealUpdate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_AzurealUpdate Property Definitions **********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AzurealUpdate, OnSuccess), Z_Construct_UDelegateFunction_AzurealXR_AzurealUpdatePin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // e5beead20b0428cac17efeb2ea082a98de1996a9
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AzurealUpdate, OnFailure), Z_Construct_UDelegateFunction_AzurealXR_AzurealUpdatePin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // e5beead20b0428cac17efeb2ea082a98de1996a9
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AzurealUpdate, WorldContext), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContext,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_AzurealUpdate Property Definitions ************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintAsyncActionBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_AzurealUpdate,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAzr_AzurealUpdate_StaticRegisterNativesUAzr_AzurealUpdate()
{
	UClass* Class = UAzr_AzurealUpdate::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_AzurealUpdate;
UClass* Z_Construct_UClass_UAzr_AzurealUpdate(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_AzurealUpdate;
		if (!Z_Registration_Info_UClass_UAzr_AzurealUpdate.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_AzurealUpdate"),
				Z_Registration_Info_UClass_UAzr_AzurealUpdate.InnerSingleton,
				UAzr_AzurealUpdate_StaticRegisterNativesUAzr_AzurealUpdate,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UAzr_AzurealUpdate.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_AzurealUpdate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_AzurealUpdate.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_AzurealUpdate.OuterSingleton;
}
#undef UHT_STATICS
UAzr_AzurealUpdate::UAzr_AzurealUpdate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_AzurealUpdate);
UAzr_AzurealUpdate::~UAzr_AzurealUpdate() {}
// ********** End Class UAzr_AzurealUpdate *********************************************************

// ********** Begin Class UAzr_AzurealQuizUpdate Function AzurealQuizUpdate ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_AzurealQuizUpdate_AzurealQuizUpdate_Statics
struct UHT_STATICS
{
	struct Azr_AzurealQuizUpdate_eventAzurealQuizUpdate_Parms
	{
		UObject* WorldContextObject;
		int32 ChapterNumber;
		int32 StepNumber;
		int32 SubStepNumber;
		int32 SelectedOptionNumber;
		UAzr_AzurealQuizUpdate* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Azureal|Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Records a quiz answer to the Azureal Server. Pass 0 for SelectedOptionNumber if unanswered. */" },
#endif
		{ "DisplayName", "Azureal - Quiz Update" },
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Records a quiz answer to the Azureal Server. Pass 0 for SelectedOptionNumber if unanswered." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function AzurealQuizUpdate constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChapterNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StepNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubStepNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedOptionNumber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AzurealQuizUpdate constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AzurealQuizUpdate Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealQuizUpdate_eventAzurealQuizUpdate_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ChapterNumber = { "ChapterNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealQuizUpdate_eventAzurealQuizUpdate_Parms, ChapterNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StepNumber = { "StepNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealQuizUpdate_eventAzurealQuizUpdate_Parms, StepNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SubStepNumber = { "SubStepNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealQuizUpdate_eventAzurealQuizUpdate_Parms, SubStepNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SelectedOptionNumber = { "SelectedOptionNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealQuizUpdate_eventAzurealQuizUpdate_Parms, SelectedOptionNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealQuizUpdate_eventAzurealQuizUpdate_Parms, ReturnValue), Z_Construct_UClass_UAzr_AzurealQuizUpdate, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChapterNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StepNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SubStepNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedOptionNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AzurealQuizUpdate Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_AzurealQuizUpdate, nullptr, "AzurealQuizUpdate", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_AzurealQuizUpdate_eventAzurealQuizUpdate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_AzurealQuizUpdate_eventAzurealQuizUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_AzurealQuizUpdate_AzurealQuizUpdate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_AzurealQuizUpdate::execAzurealQuizUpdate)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_ChapterNumber);
	P_GET_PROPERTY(FIntProperty,Z_Param_StepNumber);
	P_GET_PROPERTY(FIntProperty,Z_Param_SubStepNumber);
	P_GET_PROPERTY(FIntProperty,Z_Param_SelectedOptionNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAzr_AzurealQuizUpdate**)Z_Param__Result=UAzr_AzurealQuizUpdate::AzurealQuizUpdate(Z_Param_WorldContextObject,Z_Param_ChapterNumber,Z_Param_StepNumber,Z_Param_SubStepNumber,Z_Param_SelectedOptionNumber);
	P_NATIVE_END;
}
// ********** End Class UAzr_AzurealQuizUpdate Function AzurealQuizUpdate **************************

// ********** Begin Class UAzr_AzurealQuizUpdate Function HandleFailure ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_AzurealQuizUpdate_HandleFailure_Statics
struct UHT_STATICS
{
	struct Azr_AzurealQuizUpdate_eventHandleFailure_Parms
	{
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleFailure constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleFailure constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleFailure Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealQuizUpdate_eventHandleFailure_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleFailure Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_AzurealQuizUpdate, nullptr, "HandleFailure", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_AzurealQuizUpdate_eventHandleFailure_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_AzurealQuizUpdate_eventHandleFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_AzurealQuizUpdate_HandleFailure(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_AzurealQuizUpdate::execHandleFailure)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Error);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFailure(Z_Param_Error);
	P_NATIVE_END;
}
// ********** End Class UAzr_AzurealQuizUpdate Function HandleFailure ******************************

// ********** Begin Class UAzr_AzurealQuizUpdate Function HandleSuccess ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_AzurealQuizUpdate_HandleSuccess_Statics
struct UHT_STATICS
{
	struct Azr_AzurealQuizUpdate_eventHandleSuccess_Parms
	{
		float ScorePercentage;
		FString SessionStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSuccess constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScorePercentage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleSuccess constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleSuccess Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ScorePercentage = { "ScorePercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealQuizUpdate_eventHandleSuccess_Parms, ScorePercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SessionStatus = { "SessionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealQuizUpdate_eventHandleSuccess_Parms, SessionStatus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionStatus_MetaData), NewProp_SessionStatus_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScorePercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SessionStatus,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleSuccess Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_AzurealQuizUpdate, nullptr, "HandleSuccess", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_AzurealQuizUpdate_eventHandleSuccess_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_AzurealQuizUpdate_eventHandleSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_AzurealQuizUpdate_HandleSuccess(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_AzurealQuizUpdate::execHandleSuccess)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScorePercentage);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionStatus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSuccess(Z_Param_ScorePercentage,Z_Param_SessionStatus);
	P_NATIVE_END;
}
// ********** End Class UAzr_AzurealQuizUpdate Function HandleSuccess ******************************

// ********** Begin Class UAzr_AzurealQuizUpdate ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_AzurealQuizUpdate_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==============================================================================\n// QUIZ QUESTION NODE\n// ==============================================================================\n" },
#endif
		{ "IncludePath", "Azr_AzurealUpdate.h" },
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "QUIZ QUESTION NODE" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_AzurealQuizUpdate constinit property declarations *******************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_AzurealQuizUpdate constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AzurealQuizUpdate"), .Pointer = &UAzr_AzurealQuizUpdate::execAzurealQuizUpdate },
		{ .NameUTF8 = UTF8TEXT("HandleFailure"), .Pointer = &UAzr_AzurealQuizUpdate::execHandleFailure },
		{ .NameUTF8 = UTF8TEXT("HandleSuccess"), .Pointer = &UAzr_AzurealQuizUpdate::execHandleSuccess },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_AzurealQuizUpdate_AzurealQuizUpdate, "AzurealQuizUpdate" }, // 32ba5f4e1cc2f72b47101a96dd7056ee3c011577
		{ &Z_Construct_UFunction_UAzr_AzurealQuizUpdate_HandleFailure, "HandleFailure" }, // a2d673497085782792cf20ba138f00f3c05d8f99
		{ &Z_Construct_UFunction_UAzr_AzurealQuizUpdate_HandleSuccess, "HandleSuccess" }, // 128023f74e18cc25e503d2d5d5087ef0053a3925
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_AzurealQuizUpdate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_AzurealQuizUpdate Property Definitions ******************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AzurealQuizUpdate, OnSuccess), Z_Construct_UDelegateFunction_AzurealXR_AzurealUpdatePin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // e5beead20b0428cac17efeb2ea082a98de1996a9
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AzurealQuizUpdate, OnFailure), Z_Construct_UDelegateFunction_AzurealXR_AzurealUpdatePin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // e5beead20b0428cac17efeb2ea082a98de1996a9
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AzurealQuizUpdate, WorldContext), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContext,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_AzurealQuizUpdate Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintAsyncActionBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_AzurealQuizUpdate,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAzr_AzurealQuizUpdate_StaticRegisterNativesUAzr_AzurealQuizUpdate()
{
	UClass* Class = UAzr_AzurealQuizUpdate::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_AzurealQuizUpdate;
UClass* Z_Construct_UClass_UAzr_AzurealQuizUpdate(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_AzurealQuizUpdate;
		if (!Z_Registration_Info_UClass_UAzr_AzurealQuizUpdate.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_AzurealQuizUpdate"),
				Z_Registration_Info_UClass_UAzr_AzurealQuizUpdate.InnerSingleton,
				UAzr_AzurealQuizUpdate_StaticRegisterNativesUAzr_AzurealQuizUpdate,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UAzr_AzurealQuizUpdate.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_AzurealQuizUpdate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_AzurealQuizUpdate.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_AzurealQuizUpdate.OuterSingleton;
}
#undef UHT_STATICS
UAzr_AzurealQuizUpdate::UAzr_AzurealQuizUpdate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_AzurealQuizUpdate);
UAzr_AzurealQuizUpdate::~UAzr_AzurealQuizUpdate() {}
// ********** End Class UAzr_AzurealQuizUpdate *****************************************************

// ********** Begin Class UAzr_AzurealEndSession Function AzurealEndSession ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_AzurealEndSession_AzurealEndSession_Statics
struct UHT_STATICS
{
	struct Azr_AzurealEndSession_eventAzurealEndSession_Parms
	{
		UObject* WorldContextObject;
		UAzr_AzurealEndSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Azureal|Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ends the current Azureal session and returns the final score and pass/fail status. */" },
#endif
		{ "DisplayName", "Azureal - End Session" },
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ends the current Azureal session and returns the final score and pass/fail status." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function AzurealEndSession constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AzurealEndSession constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AzurealEndSession Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealEndSession_eventAzurealEndSession_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealEndSession_eventAzurealEndSession_Parms, ReturnValue), Z_Construct_UClass_UAzr_AzurealEndSession, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AzurealEndSession Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_AzurealEndSession, nullptr, "AzurealEndSession", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_AzurealEndSession_eventAzurealEndSession_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_AzurealEndSession_eventAzurealEndSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_AzurealEndSession_AzurealEndSession(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_AzurealEndSession::execAzurealEndSession)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAzr_AzurealEndSession**)Z_Param__Result=UAzr_AzurealEndSession::AzurealEndSession(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UAzr_AzurealEndSession Function AzurealEndSession **************************

// ********** Begin Class UAzr_AzurealEndSession Function HandleFailure ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_AzurealEndSession_HandleFailure_Statics
struct UHT_STATICS
{
	struct Azr_AzurealEndSession_eventHandleFailure_Parms
	{
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleFailure constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleFailure constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleFailure Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealEndSession_eventHandleFailure_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleFailure Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_AzurealEndSession, nullptr, "HandleFailure", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_AzurealEndSession_eventHandleFailure_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_AzurealEndSession_eventHandleFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_AzurealEndSession_HandleFailure(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_AzurealEndSession::execHandleFailure)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Error);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFailure(Z_Param_Error);
	P_NATIVE_END;
}
// ********** End Class UAzr_AzurealEndSession Function HandleFailure ******************************

// ********** Begin Class UAzr_AzurealEndSession Function HandleSuccess ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_AzurealEndSession_HandleSuccess_Statics
struct UHT_STATICS
{
	struct Azr_AzurealEndSession_eventHandleSuccess_Parms
	{
		float ScorePercentage;
		FString SessionStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSuccess constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScorePercentage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleSuccess constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleSuccess Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ScorePercentage = { "ScorePercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealEndSession_eventHandleSuccess_Parms, ScorePercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SessionStatus = { "SessionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AzurealEndSession_eventHandleSuccess_Parms, SessionStatus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionStatus_MetaData), NewProp_SessionStatus_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScorePercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SessionStatus,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleSuccess Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_AzurealEndSession, nullptr, "HandleSuccess", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_AzurealEndSession_eventHandleSuccess_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_AzurealEndSession_eventHandleSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_AzurealEndSession_HandleSuccess(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_AzurealEndSession::execHandleSuccess)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScorePercentage);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionStatus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSuccess(Z_Param_ScorePercentage,Z_Param_SessionStatus);
	P_NATIVE_END;
}
// ********** End Class UAzr_AzurealEndSession Function HandleSuccess ******************************

// ********** Begin Class UAzr_AzurealEndSession ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_AzurealEndSession_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAzr_AzurealEndSession\n * Async Blueprint node to end the session and fetch the final grade.\n */" },
#endif
		{ "IncludePath", "Azr_AzurealUpdate.h" },
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAzr_AzurealEndSession\nAsync Blueprint node to end the session and fetch the final grade." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_AzurealUpdate.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_AzurealEndSession constinit property declarations *******************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_AzurealEndSession constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AzurealEndSession"), .Pointer = &UAzr_AzurealEndSession::execAzurealEndSession },
		{ .NameUTF8 = UTF8TEXT("HandleFailure"), .Pointer = &UAzr_AzurealEndSession::execHandleFailure },
		{ .NameUTF8 = UTF8TEXT("HandleSuccess"), .Pointer = &UAzr_AzurealEndSession::execHandleSuccess },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_AzurealEndSession_AzurealEndSession, "AzurealEndSession" }, // cf546a4cc2f2082a0a889f3ca2209c5a10f1f48d
		{ &Z_Construct_UFunction_UAzr_AzurealEndSession_HandleFailure, "HandleFailure" }, // 141ee007f474588358345a837c152177c0e907ce
		{ &Z_Construct_UFunction_UAzr_AzurealEndSession_HandleSuccess, "HandleSuccess" }, // 00bc93348bdb5f13d4a11aa6ae1528eccdaf1ec9
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_AzurealEndSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_AzurealEndSession Property Definitions ******************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AzurealEndSession, OnSuccess), Z_Construct_UDelegateFunction_AzurealXR_AzurealUpdatePin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // e5beead20b0428cac17efeb2ea082a98de1996a9
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AzurealEndSession, OnFailure), Z_Construct_UDelegateFunction_AzurealXR_AzurealUpdatePin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // e5beead20b0428cac17efeb2ea082a98de1996a9
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AzurealEndSession, WorldContext), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContext,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_AzurealEndSession Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintAsyncActionBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_AzurealEndSession,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAzr_AzurealEndSession_StaticRegisterNativesUAzr_AzurealEndSession()
{
	UClass* Class = UAzr_AzurealEndSession::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_AzurealEndSession;
UClass* Z_Construct_UClass_UAzr_AzurealEndSession(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_AzurealEndSession;
		if (!Z_Registration_Info_UClass_UAzr_AzurealEndSession.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_AzurealEndSession"),
				Z_Registration_Info_UClass_UAzr_AzurealEndSession.InnerSingleton,
				UAzr_AzurealEndSession_StaticRegisterNativesUAzr_AzurealEndSession,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UAzr_AzurealEndSession.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_AzurealEndSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_AzurealEndSession.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_AzurealEndSession.OuterSingleton;
}
#undef UHT_STATICS
UAzr_AzurealEndSession::UAzr_AzurealEndSession(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_AzurealEndSession);
UAzr_AzurealEndSession::~UAzr_AzurealEndSession() {}
// ********** End Class UAzr_AzurealEndSession *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_AzurealUpdate_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_AzurealUpdate, TEXT("UAzr_AzurealUpdate"), &Z_Registration_Info_UClass_UAzr_AzurealUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_AzurealUpdate), 78530495U) },
		{ Z_Construct_UClass_UAzr_AzurealQuizUpdate, TEXT("UAzr_AzurealQuizUpdate"), &Z_Registration_Info_UClass_UAzr_AzurealQuizUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_AzurealQuizUpdate), 754792411U) },
		{ Z_Construct_UClass_UAzr_AzurealEndSession, TEXT("UAzr_AzurealEndSession"), &Z_Registration_Info_UClass_UAzr_AzurealEndSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_AzurealEndSession), 4281442330U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_AzurealUpdate_h__Script_AzurealXR_54f90cc002092e1f91a88a311cac1f4a24fb5f41{
	TEXT("/Script/AzurealXR"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
