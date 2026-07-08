// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChapterSubsystem.h"
#include "Engine/GameInstance.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeChapterSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UChapterSubsystem(ETypeConstructPhase);
AZUREAL_CSM_API UFunction* Z_Construct_UDelegateFunction_Azureal_CSM_OnChapterDataUpdated__DelegateSignature(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UChapterBundle(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UChapterSubsystem(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UTrainingCurriculum(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOnChapterDataUpdated *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_Azureal_CSM_OnChapterDataUpdated__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- DECLARE EVENT ---\n" },
#endif
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- DECLARE EVENT ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnChapterDataUpdated constinit property declarations *****************
// ********** End Delegate FOnChapterDataUpdated constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM, nullptr, "OnChapterDataUpdated__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_Azureal_CSM_OnChapterDataUpdated__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnChapterDataUpdated ***************************************************

// ********** Begin Class UChapterSubsystem Function GetChapterProgress ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_GetChapterProgress_Statics
struct UHT_STATICS
{
	struct ChapterSubsystem_eventGetChapterProgress_Parms
	{
		int32 Index;
		int32 OutCurrent;
		int32 OutMax;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Chapter System" },
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetChapterProgress constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutCurrent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetChapterProgress constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetChapterProgress Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventGetChapterProgress_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OutCurrent = { "OutCurrent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventGetChapterProgress_Parms, OutCurrent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OutMax = { "OutMax", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventGetChapterProgress_Parms, OutMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutCurrent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutMax,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetChapterProgress Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "GetChapterProgress", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSubsystem_eventGetChapterProgress_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSubsystem_eventGetChapterProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSubsystem_GetChapterProgress(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execGetChapterProgress)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutCurrent);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetChapterProgress(Z_Param_Index,Z_Param_Out_OutCurrent,Z_Param_Out_OutMax);
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function GetChapterProgress ******************************

// ********** Begin Class UChapterSubsystem Function GetCurrentChapterGameManagerClass *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_GetCurrentChapterGameManagerClass_Statics
struct UHT_STATICS
{
	struct ChapterSubsystem_eventGetCurrentChapterGameManagerClass_Parms
	{
		TSubclassOf<AActor> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Chapter System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- NEW: MANAGER HELPER ---\n" },
#endif
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- NEW: MANAGER HELPER ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentChapterGameManagerClass constinit property declarations *****
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentChapterGameManagerClass constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentChapterGameManagerClass Property Definitions ****************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventGetCurrentChapterGameManagerClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurrentChapterGameManagerClass Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "GetCurrentChapterGameManagerClass", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSubsystem_eventGetCurrentChapterGameManagerClass_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSubsystem_eventGetCurrentChapterGameManagerClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSubsystem_GetCurrentChapterGameManagerClass(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execGetCurrentChapterGameManagerClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<AActor>*)Z_Param__Result=P_THIS->GetCurrentChapterGameManagerClass();
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function GetCurrentChapterGameManagerClass ***************

// ********** Begin Class UChapterSubsystem Function GetCurrentChapterIndex ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_GetCurrentChapterIndex_Statics
struct UHT_STATICS
{
	struct ChapterSubsystem_eventGetCurrentChapterIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Chapter System" },
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentChapterIndex constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentChapterIndex constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentChapterIndex Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventGetCurrentChapterIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurrentChapterIndex Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "GetCurrentChapterIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSubsystem_eventGetCurrentChapterIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSubsystem_eventGetCurrentChapterIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSubsystem_GetCurrentChapterIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execGetCurrentChapterIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentChapterIndex();
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function GetCurrentChapterIndex **************************

// ********** Begin Class UChapterSubsystem Function GetCurrentChapterInfo *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_GetCurrentChapterInfo_Statics
struct UHT_STATICS
{
	struct ChapterSubsystem_eventGetCurrentChapterInfo_Parms
	{
		int32 OutChapterNumber;
		FText OutChapterTitle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Chapter System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- INFO HELPERS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- INFO HELPERS ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentChapterInfo constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutChapterNumber;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutChapterTitle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentChapterInfo constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentChapterInfo Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OutChapterNumber = { "OutChapterNumber", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventGetCurrentChapterInfo_Parms, OutChapterNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_OutChapterTitle = { "OutChapterTitle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventGetCurrentChapterInfo_Parms, OutChapterTitle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutChapterNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutChapterTitle,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurrentChapterInfo Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "GetCurrentChapterInfo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSubsystem_eventGetCurrentChapterInfo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSubsystem_eventGetCurrentChapterInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSubsystem_GetCurrentChapterInfo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execGetCurrentChapterInfo)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutChapterNumber);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutChapterTitle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCurrentChapterInfo(Z_Param_Out_OutChapterNumber,Z_Param_Out_OutChapterTitle);
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function GetCurrentChapterInfo ***************************

// ********** Begin Class UChapterSubsystem Function GetCurrentStepData ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_GetCurrentStepData_Statics
struct UHT_STATICS
{
	struct ChapterSubsystem_eventGetCurrentStepData_Parms
	{
		UTrainingCurriculum* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Chapter System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- DATA HELPERS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- DATA HELPERS ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentStepData constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentStepData constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentStepData Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventGetCurrentStepData_Parms, ReturnValue), Z_Construct_UClass_UTrainingCurriculum, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurrentStepData Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "GetCurrentStepData", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSubsystem_eventGetCurrentStepData_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSubsystem_eventGetCurrentStepData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSubsystem_GetCurrentStepData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execGetCurrentStepData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTrainingCurriculum**)Z_Param__Result=P_THIS->GetCurrentStepData();
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function GetCurrentStepData ******************************

// ********** Begin Class UChapterSubsystem Function GetModuleCompletionStatus *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_GetModuleCompletionStatus_Statics
struct UHT_STATICS
{
	struct ChapterSubsystem_eventGetModuleCompletionStatus_Parms
	{
		int32 OutCompletedCount;
		int32 OutTotalCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Chapter System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns current progress for the whole module (e.g. 3 out of 5 chapters completed). */" },
#endif
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns current progress for the whole module (e.g. 3 out of 5 chapters completed)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetModuleCompletionStatus constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutCompletedCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutTotalCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetModuleCompletionStatus constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetModuleCompletionStatus Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OutCompletedCount = { "OutCompletedCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventGetModuleCompletionStatus_Parms, OutCompletedCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OutTotalCount = { "OutTotalCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventGetModuleCompletionStatus_Parms, OutTotalCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutCompletedCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutTotalCount,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetModuleCompletionStatus Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "GetModuleCompletionStatus", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSubsystem_eventGetModuleCompletionStatus_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSubsystem_eventGetModuleCompletionStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSubsystem_GetModuleCompletionStatus(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execGetModuleCompletionStatus)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutCompletedCount);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutTotalCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetModuleCompletionStatus(Z_Param_Out_OutCompletedCount,Z_Param_Out_OutTotalCount);
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function GetModuleCompletionStatus ***********************

// ********** Begin Class UChapterSubsystem Function GetNextUnplayedChapterIndex *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_GetNextUnplayedChapterIndex_Statics
struct UHT_STATICS
{
	struct ChapterSubsystem_eventGetNextUnplayedChapterIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Chapter System" },
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNextUnplayedChapterIndex constinit property declarations ***********
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNextUnplayedChapterIndex constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNextUnplayedChapterIndex Property Definitions **********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventGetNextUnplayedChapterIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNextUnplayedChapterIndex Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "GetNextUnplayedChapterIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSubsystem_eventGetNextUnplayedChapterIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSubsystem_eventGetNextUnplayedChapterIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSubsystem_GetNextUnplayedChapterIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execGetNextUnplayedChapterIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNextUnplayedChapterIndex();
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function GetNextUnplayedChapterIndex *********************

// ********** Begin Class UChapterSubsystem Function GetStepDataForIndex ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_GetStepDataForIndex_Statics
struct UHT_STATICS
{
	struct ChapterSubsystem_eventGetStepDataForIndex_Parms
	{
		int32 Index;
		UTrainingCurriculum* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Chapter System" },
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStepDataForIndex constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStepDataForIndex constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStepDataForIndex Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventGetStepDataForIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventGetStepDataForIndex_Parms, ReturnValue), Z_Construct_UClass_UTrainingCurriculum, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetStepDataForIndex Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "GetStepDataForIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSubsystem_eventGetStepDataForIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSubsystem_eventGetStepDataForIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSubsystem_GetStepDataForIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execGetStepDataForIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTrainingCurriculum**)Z_Param__Result=P_THIS->GetStepDataForIndex(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function GetStepDataForIndex *****************************

// ********** Begin Class UChapterSubsystem Function GetTotalChapterCount **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_GetTotalChapterCount_Statics
struct UHT_STATICS
{
	struct ChapterSubsystem_eventGetTotalChapterCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Chapter System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- STATISTICS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- STATISTICS ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetTotalChapterCount constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTotalChapterCount constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTotalChapterCount Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventGetTotalChapterCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTotalChapterCount Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "GetTotalChapterCount", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSubsystem_eventGetTotalChapterCount_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSubsystem_eventGetTotalChapterCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSubsystem_GetTotalChapterCount(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execGetTotalChapterCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTotalChapterCount();
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function GetTotalChapterCount ****************************

// ********** Begin Class UChapterSubsystem Function GetTotalMasterStepCount ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_GetTotalMasterStepCount_Statics
struct UHT_STATICS
{
	struct ChapterSubsystem_eventGetTotalMasterStepCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Chapter System" },
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTotalMasterStepCount constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTotalMasterStepCount constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTotalMasterStepCount Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventGetTotalMasterStepCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTotalMasterStepCount Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "GetTotalMasterStepCount", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSubsystem_eventGetTotalMasterStepCount_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSubsystem_eventGetTotalMasterStepCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSubsystem_GetTotalMasterStepCount(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execGetTotalMasterStepCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTotalMasterStepCount();
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function GetTotalMasterStepCount *************************

// ********** Begin Class UChapterSubsystem Function HasPassedStartScreen **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_HasPassedStartScreen_Statics
struct UHT_STATICS
{
	struct ChapterSubsystem_eventHasPassedStartScreen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Session State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- SESSION STATE ---\n" },
#endif
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- SESSION STATE ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function HasPassedStartScreen constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChapterSubsystem_eventHasPassedStartScreen_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasPassedStartScreen constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasPassedStartScreen Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ChapterSubsystem_eventHasPassedStartScreen_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasPassedStartScreen Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "HasPassedStartScreen", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSubsystem_eventHasPassedStartScreen_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSubsystem_eventHasPassedStartScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSubsystem_HasPassedStartScreen(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execHasPassedStartScreen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasPassedStartScreen();
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function HasPassedStartScreen ****************************

// ********** Begin Class UChapterSubsystem Function InitializeChapters ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_InitializeChapters_Statics
struct UHT_STATICS
{
	struct ChapterSubsystem_eventInitializeChapters_Parms
	{
		UChapterBundle* MasterList;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Chapter System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- SETUP ---\n" },
#endif
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- SETUP ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeChapters constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeChapters constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeChapters Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MasterList = { "MasterList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventInitializeChapters_Parms, MasterList), Z_Construct_UClass_UChapterBundle, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MasterList,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function InitializeChapters Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "InitializeChapters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSubsystem_eventInitializeChapters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSubsystem_eventInitializeChapters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSubsystem_InitializeChapters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execInitializeChapters)
{
	P_GET_OBJECT(UChapterBundle,Z_Param_MasterList);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeChapters(Z_Param_MasterList);
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function InitializeChapters ******************************

// ********** Begin Class UChapterSubsystem Function IsChapterComplete *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_IsChapterComplete_Statics
struct UHT_STATICS
{
	struct ChapterSubsystem_eventIsChapterComplete_Parms
	{
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Chapter System" },
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsChapterComplete constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChapterSubsystem_eventIsChapterComplete_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsChapterComplete constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsChapterComplete Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventIsChapterComplete_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ChapterSubsystem_eventIsChapterComplete_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsChapterComplete Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "IsChapterComplete", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSubsystem_eventIsChapterComplete_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSubsystem_eventIsChapterComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSubsystem_IsChapterComplete(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execIsChapterComplete)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsChapterComplete(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function IsChapterComplete *******************************

// ********** Begin Class UChapterSubsystem Function IsModuleFullyComplete *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_IsModuleFullyComplete_Statics
struct UHT_STATICS
{
	struct ChapterSubsystem_eventIsModuleFullyComplete_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Chapter System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns TRUE if every single chapter in the bundle has been completed. */" },
#endif
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns TRUE if every single chapter in the bundle has been completed." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsModuleFullyComplete constinit property declarations *****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChapterSubsystem_eventIsModuleFullyComplete_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsModuleFullyComplete constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsModuleFullyComplete Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ChapterSubsystem_eventIsModuleFullyComplete_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsModuleFullyComplete Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "IsModuleFullyComplete", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSubsystem_eventIsModuleFullyComplete_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSubsystem_eventIsModuleFullyComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSubsystem_IsModuleFullyComplete(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execIsModuleFullyComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsModuleFullyComplete();
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function IsModuleFullyComplete ***************************

// ********** Begin Class UChapterSubsystem Function MarkCurrentChapterComplete ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_MarkCurrentChapterComplete_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Chapter System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- COMPLETION & PROGRESS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- COMPLETION & PROGRESS ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function MarkCurrentChapterComplete constinit property declarations ************
// ********** End Function MarkCurrentChapterComplete constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "MarkCurrentChapterComplete", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UChapterSubsystem_MarkCurrentChapterComplete(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execMarkCurrentChapterComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MarkCurrentChapterComplete();
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function MarkCurrentChapterComplete **********************

// ********** Begin Class UChapterSubsystem Function ResetAllModuleProgress ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_ResetAllModuleProgress_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Chapter System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wipes ALL progress and resets session. */" },
#endif
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wipes ALL progress and resets session." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ResetAllModuleProgress constinit property declarations ****************
// ********** End Function ResetAllModuleProgress constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "ResetAllModuleProgress", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UChapterSubsystem_ResetAllModuleProgress(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execResetAllModuleProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAllModuleProgress();
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function ResetAllModuleProgress **************************

// ********** Begin Class UChapterSubsystem Function ResetChapterProgress **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_ResetChapterProgress_Statics
struct UHT_STATICS
{
	struct ChapterSubsystem_eventResetChapterProgress_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Chapter System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Completely wipes progress for a specific chapter. */" },
#endif
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Completely wipes progress for a specific chapter." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ResetChapterProgress constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResetChapterProgress constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResetChapterProgress Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventResetChapterProgress_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ResetChapterProgress Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "ResetChapterProgress", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSubsystem_eventResetChapterProgress_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSubsystem_eventResetChapterProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSubsystem_ResetChapterProgress(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execResetChapterProgress)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetChapterProgress(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function ResetChapterProgress ****************************

// ********** Begin Class UChapterSubsystem Function SelectChapter *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_SelectChapter_Statics
struct UHT_STATICS
{
	struct ChapterSubsystem_eventSelectChapter_Parms
	{
		int32 Index;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Chapter System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- NAVIGATION ---\n" },
#endif
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- NAVIGATION ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SelectChapter constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SelectChapter constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SelectChapter Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventSelectChapter_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventSelectChapter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SelectChapter Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "SelectChapter", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSubsystem_eventSelectChapter_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSubsystem_eventSelectChapter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSubsystem_SelectChapter(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execSelectChapter)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->SelectChapter(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function SelectChapter ***********************************

// ********** Begin Class UChapterSubsystem Function SetHasPassedStartScreen ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_SetHasPassedStartScreen_Statics
struct UHT_STATICS
{
	struct ChapterSubsystem_eventSetHasPassedStartScreen_Parms
	{
		bool bValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Session State" },
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHasPassedStartScreen constinit property declarations ***************
	static void NewProp_bValue_SetBit(void* Obj)
	{
		((ChapterSubsystem_eventSetHasPassedStartScreen_Parms*)Obj)->bValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHasPassedStartScreen constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHasPassedStartScreen Property Definitions **************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ChapterSubsystem_eventSetHasPassedStartScreen_Parms), &UHT_STATICS::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetHasPassedStartScreen Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "SetHasPassedStartScreen", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSubsystem_eventSetHasPassedStartScreen_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSubsystem_eventSetHasPassedStartScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSubsystem_SetHasPassedStartScreen(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execSetHasPassedStartScreen)
{
	P_GET_UBOOL(Z_Param_bValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHasPassedStartScreen(Z_Param_bValue);
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function SetHasPassedStartScreen *************************

// ********** Begin Class UChapterSubsystem Function UpdateChapterProgress *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSubsystem_UpdateChapterProgress_Statics
struct UHT_STATICS
{
	struct ChapterSubsystem_eventUpdateChapterProgress_Parms
	{
		int32 StepIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Chapter System" },
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateChapterProgress constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_StepIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateChapterProgress constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateChapterProgress Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StepIndex = { "StepIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSubsystem_eventUpdateChapterProgress_Parms, StepIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StepIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateChapterProgress Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSubsystem, nullptr, "UpdateChapterProgress", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSubsystem_eventUpdateChapterProgress_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSubsystem_eventUpdateChapterProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSubsystem_UpdateChapterProgress(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSubsystem::execUpdateChapterProgress)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StepIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateChapterProgress(Z_Param_StepIndex);
	P_NATIVE_END;
}
// ********** End Class UChapterSubsystem Function UpdateChapterProgress ***************************

// ********** Begin Class UChapterSubsystem ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UChapterSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "ChapterSubsystem.h" },
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChapterDataUpdated_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EVENT DISPATCHER ---\n" },
#endif
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EVENT DISPATCHER ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveBundle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChapterSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UChapterSubsystem constinit property declarations ************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChapterDataUpdated;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveBundle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UChapterSubsystem constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetChapterProgress"), .Pointer = &UChapterSubsystem::execGetChapterProgress },
		{ .NameUTF8 = UTF8TEXT("GetCurrentChapterGameManagerClass"), .Pointer = &UChapterSubsystem::execGetCurrentChapterGameManagerClass },
		{ .NameUTF8 = UTF8TEXT("GetCurrentChapterIndex"), .Pointer = &UChapterSubsystem::execGetCurrentChapterIndex },
		{ .NameUTF8 = UTF8TEXT("GetCurrentChapterInfo"), .Pointer = &UChapterSubsystem::execGetCurrentChapterInfo },
		{ .NameUTF8 = UTF8TEXT("GetCurrentStepData"), .Pointer = &UChapterSubsystem::execGetCurrentStepData },
		{ .NameUTF8 = UTF8TEXT("GetModuleCompletionStatus"), .Pointer = &UChapterSubsystem::execGetModuleCompletionStatus },
		{ .NameUTF8 = UTF8TEXT("GetNextUnplayedChapterIndex"), .Pointer = &UChapterSubsystem::execGetNextUnplayedChapterIndex },
		{ .NameUTF8 = UTF8TEXT("GetStepDataForIndex"), .Pointer = &UChapterSubsystem::execGetStepDataForIndex },
		{ .NameUTF8 = UTF8TEXT("GetTotalChapterCount"), .Pointer = &UChapterSubsystem::execGetTotalChapterCount },
		{ .NameUTF8 = UTF8TEXT("GetTotalMasterStepCount"), .Pointer = &UChapterSubsystem::execGetTotalMasterStepCount },
		{ .NameUTF8 = UTF8TEXT("HasPassedStartScreen"), .Pointer = &UChapterSubsystem::execHasPassedStartScreen },
		{ .NameUTF8 = UTF8TEXT("InitializeChapters"), .Pointer = &UChapterSubsystem::execInitializeChapters },
		{ .NameUTF8 = UTF8TEXT("IsChapterComplete"), .Pointer = &UChapterSubsystem::execIsChapterComplete },
		{ .NameUTF8 = UTF8TEXT("IsModuleFullyComplete"), .Pointer = &UChapterSubsystem::execIsModuleFullyComplete },
		{ .NameUTF8 = UTF8TEXT("MarkCurrentChapterComplete"), .Pointer = &UChapterSubsystem::execMarkCurrentChapterComplete },
		{ .NameUTF8 = UTF8TEXT("ResetAllModuleProgress"), .Pointer = &UChapterSubsystem::execResetAllModuleProgress },
		{ .NameUTF8 = UTF8TEXT("ResetChapterProgress"), .Pointer = &UChapterSubsystem::execResetChapterProgress },
		{ .NameUTF8 = UTF8TEXT("SelectChapter"), .Pointer = &UChapterSubsystem::execSelectChapter },
		{ .NameUTF8 = UTF8TEXT("SetHasPassedStartScreen"), .Pointer = &UChapterSubsystem::execSetHasPassedStartScreen },
		{ .NameUTF8 = UTF8TEXT("UpdateChapterProgress"), .Pointer = &UChapterSubsystem::execUpdateChapterProgress },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UChapterSubsystem_GetChapterProgress, "GetChapterProgress" }, // eb4a0312b58b1d39a02b55905cc0153eb22935ea
		{ &Z_Construct_UFunction_UChapterSubsystem_GetCurrentChapterGameManagerClass, "GetCurrentChapterGameManagerClass" }, // c27abb19a713096c19f3a6d3023d8dde9311a904
		{ &Z_Construct_UFunction_UChapterSubsystem_GetCurrentChapterIndex, "GetCurrentChapterIndex" }, // 3cf1b43b7285e7074bd0e50db38f9488e54df10c
		{ &Z_Construct_UFunction_UChapterSubsystem_GetCurrentChapterInfo, "GetCurrentChapterInfo" }, // 76e71d10378f92c38190b18a0dc5dff4ef20c206
		{ &Z_Construct_UFunction_UChapterSubsystem_GetCurrentStepData, "GetCurrentStepData" }, // d29b485618dadb2a617d7b55cbe1da5cf3da3a83
		{ &Z_Construct_UFunction_UChapterSubsystem_GetModuleCompletionStatus, "GetModuleCompletionStatus" }, // fff74655cef9f056e504495782d61087f11e730e
		{ &Z_Construct_UFunction_UChapterSubsystem_GetNextUnplayedChapterIndex, "GetNextUnplayedChapterIndex" }, // 4974cabff11eebd2f55cc875ed80b63477c3bbf5
		{ &Z_Construct_UFunction_UChapterSubsystem_GetStepDataForIndex, "GetStepDataForIndex" }, // a53d577365c7a33e91f52463f488069819f2b1b0
		{ &Z_Construct_UFunction_UChapterSubsystem_GetTotalChapterCount, "GetTotalChapterCount" }, // 9ec78502cfc537ad73c0faefeb383f940e9e4be6
		{ &Z_Construct_UFunction_UChapterSubsystem_GetTotalMasterStepCount, "GetTotalMasterStepCount" }, // 46264857f9b99fe1134c74920e9c226c3b240bd5
		{ &Z_Construct_UFunction_UChapterSubsystem_HasPassedStartScreen, "HasPassedStartScreen" }, // b81ebc63806c5437f08a24bbbe2bb53b45cab132
		{ &Z_Construct_UFunction_UChapterSubsystem_InitializeChapters, "InitializeChapters" }, // 7c18da15a762905ec57c5440200dafcf57ce495c
		{ &Z_Construct_UFunction_UChapterSubsystem_IsChapterComplete, "IsChapterComplete" }, // 9bfc41f143adde483ae60e1b4fe9a40f30858a4d
		{ &Z_Construct_UFunction_UChapterSubsystem_IsModuleFullyComplete, "IsModuleFullyComplete" }, // 4d06436d3fc33dd6ba709ba6768753bd6409b562
		{ &Z_Construct_UFunction_UChapterSubsystem_MarkCurrentChapterComplete, "MarkCurrentChapterComplete" }, // 1657593ee83e51c9a9cd215c2a122d675c1c6a17
		{ &Z_Construct_UFunction_UChapterSubsystem_ResetAllModuleProgress, "ResetAllModuleProgress" }, // baa63d1e0261ffd4fc51f4cc63cba16a872f2256
		{ &Z_Construct_UFunction_UChapterSubsystem_ResetChapterProgress, "ResetChapterProgress" }, // ae7b55a0703994fd1cfcfca71bd19a7d8a3e40bd
		{ &Z_Construct_UFunction_UChapterSubsystem_SelectChapter, "SelectChapter" }, // f995338cc67f671b243d851d67316e094ca15d66
		{ &Z_Construct_UFunction_UChapterSubsystem_SetHasPassedStartScreen, "SetHasPassedStartScreen" }, // 535b3f82d10653bc475fb86f8ae833a5c27fdbaa
		{ &Z_Construct_UFunction_UChapterSubsystem_UpdateChapterProgress, "UpdateChapterProgress" }, // 51aa3fbdc251c1801bd5038b094a358ad69899d9
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChapterSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UChapterSubsystem Property Definitions ***********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnChapterDataUpdated = { "OnChapterDataUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UChapterSubsystem, OnChapterDataUpdated), Z_Construct_UDelegateFunction_Azureal_CSM_OnChapterDataUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChapterDataUpdated_MetaData), NewProp_OnChapterDataUpdated_MetaData) }; // 6287eef95df8d95594ea64ed3bca2ed85acf7e8c
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveBundle = { "ActiveBundle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UChapterSubsystem, ActiveBundle), Z_Construct_UClass_UChapterBundle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveBundle_MetaData), NewProp_ActiveBundle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnChapterDataUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveBundle,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UChapterSubsystem Property Definitions *************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UGameInstanceSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UChapterSubsystem,
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
static void UChapterSubsystem_StaticRegisterNativesUChapterSubsystem()
{
	UClass* Class = UChapterSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UChapterSubsystem;
UClass* Z_Construct_UClass_UChapterSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UChapterSubsystem;
		if (!Z_Registration_Info_UClass_UChapterSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ChapterSubsystem"),
				Z_Registration_Info_UClass_UChapterSubsystem.InnerSingleton,
				UChapterSubsystem_StaticRegisterNativesUChapterSubsystem,
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
		return Z_Registration_Info_UClass_UChapterSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UChapterSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChapterSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UChapterSubsystem.OuterSingleton;
}
#undef UHT_STATICS
UChapterSubsystem::UChapterSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UChapterSubsystem);
UChapterSubsystem::~UChapterSubsystem() {}
// ********** End Class UChapterSubsystem **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSubsystem_h__Script_Azureal_CSM_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChapterSubsystem, TEXT("UChapterSubsystem"), &Z_Registration_Info_UClass_UChapterSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChapterSubsystem), 1930546470U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSubsystem_h__Script_Azureal_CSM_17b567b02111d014d10d4a79b3dfe21edee60200{
	TEXT("/Script/Azureal_CSM"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
