// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrainingStepPage.h"
#include "TrainingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeTrainingStepPage() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UUserWidget(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundBase(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UPanelWidget(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UScrollBox(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UTextBlock(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase);
AZUREAL_CSM_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeStep(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UTrainingStepPage(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UQuizAnswerRow(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UTrainingStepPage(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UTrainingStepPage Function AdvanceProgress *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_AdvanceProgress_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- MAIN LOGIC ---\n" },
#endif
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- MAIN LOGIC ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AdvanceProgress constinit property declarations ***********************
// ********** End Function AdvanceProgress constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "AdvanceProgress", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UTrainingStepPage_AdvanceProgress(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execAdvanceProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AdvanceProgress();
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function AdvanceProgress *********************************

// ********** Begin Class UTrainingStepPage Function ConfirmQuizAnswer *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_ConfirmQuizAnswer_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Quiz Logic" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConfirmQuizAnswer constinit property declarations *********************
// ********** End Function ConfirmQuizAnswer constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "ConfirmQuizAnswer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UTrainingStepPage_ConfirmQuizAnswer(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execConfirmQuizAnswer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfirmQuizAnswer();
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function ConfirmQuizAnswer *******************************

// ********** Begin Class UTrainingStepPage Function ForceQuizStateFromBlueprint *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_ForceQuizStateFromBlueprint_Statics
struct UHT_STATICS
{
	struct TrainingStepPage_eventForceQuizStateFromBlueprint_Parms
	{
		bool bIsQuiz;
		int32 CorrectAnswerIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Quiz Logic" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceQuizStateFromBlueprint constinit property declarations ***********
	static void NewProp_bIsQuiz_SetBit(void* Obj)
	{
		((TrainingStepPage_eventForceQuizStateFromBlueprint_Parms*)Obj)->bIsQuiz = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsQuiz;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CorrectAnswerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ForceQuizStateFromBlueprint constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ForceQuizStateFromBlueprint Property Definitions **********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsQuiz = { "bIsQuiz", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TrainingStepPage_eventForceQuizStateFromBlueprint_Parms), &UHT_STATICS::NewProp_bIsQuiz_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CorrectAnswerIndex = { "CorrectAnswerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(TrainingStepPage_eventForceQuizStateFromBlueprint_Parms, CorrectAnswerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsQuiz,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CorrectAnswerIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ForceQuizStateFromBlueprint Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "ForceQuizStateFromBlueprint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TrainingStepPage_eventForceQuizStateFromBlueprint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TrainingStepPage_eventForceQuizStateFromBlueprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingStepPage_ForceQuizStateFromBlueprint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execForceQuizStateFromBlueprint)
{
	P_GET_UBOOL(Z_Param_bIsQuiz);
	P_GET_PROPERTY(FIntProperty,Z_Param_CorrectAnswerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceQuizStateFromBlueprint(Z_Param_bIsQuiz,Z_Param_CorrectAnswerIndex);
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function ForceQuizStateFromBlueprint *********************

// ********** Begin Class UTrainingStepPage Function GetMasterProgressText *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_GetMasterProgressText_Statics
struct UHT_STATICS
{
	struct TrainingStepPage_eventGetMasterProgressText_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Results" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMasterProgressText constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMasterProgressText constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMasterProgressText Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(TrainingStepPage_eventGetMasterProgressText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMasterProgressText Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "GetMasterProgressText", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TrainingStepPage_eventGetMasterProgressText_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TrainingStepPage_eventGetMasterProgressText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingStepPage_GetMasterProgressText(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execGetMasterProgressText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetMasterProgressText();
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function GetMasterProgressText ***************************

// ********** Begin Class UTrainingStepPage Function GetQuizAnswerForAPI ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_GetQuizAnswerForAPI_Statics
struct UHT_STATICS
{
	struct TrainingStepPage_eventGetQuizAnswerForAPI_Parms
	{
		int32 OutStepNumber;
		int32 OutSelectedOption;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Quiz Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- SETUP ---\n" },
#endif
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- SETUP ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetQuizAnswerForAPI constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutStepNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutSelectedOption;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TrainingStepPage_eventGetQuizAnswerForAPI_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetQuizAnswerForAPI constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetQuizAnswerForAPI Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OutStepNumber = { "OutStepNumber", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(TrainingStepPage_eventGetQuizAnswerForAPI_Parms, OutStepNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OutSelectedOption = { "OutSelectedOption", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(TrainingStepPage_eventGetQuizAnswerForAPI_Parms, OutSelectedOption), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TrainingStepPage_eventGetQuizAnswerForAPI_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutStepNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSelectedOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetQuizAnswerForAPI Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "GetQuizAnswerForAPI", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TrainingStepPage_eventGetQuizAnswerForAPI_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TrainingStepPage_eventGetQuizAnswerForAPI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingStepPage_GetQuizAnswerForAPI(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execGetQuizAnswerForAPI)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutStepNumber);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutSelectedOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetQuizAnswerForAPI(Z_Param_Out_OutStepNumber,Z_Param_Out_OutSelectedOption);
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function GetQuizAnswerForAPI *****************************

// ********** Begin Class UTrainingStepPage Function GetSessionTimeText ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_GetSessionTimeText_Statics
struct UHT_STATICS
{
	struct TrainingStepPage_eventGetSessionTimeText_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Results" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- DATA GETTERS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- DATA GETTERS ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetSessionTimeText constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSessionTimeText constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSessionTimeText Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(TrainingStepPage_eventGetSessionTimeText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSessionTimeText Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "GetSessionTimeText", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TrainingStepPage_eventGetSessionTimeText_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TrainingStepPage_eventGetSessionTimeText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingStepPage_GetSessionTimeText(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execGetSessionTimeText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSessionTimeText();
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function GetSessionTimeText ******************************

// ********** Begin Class UTrainingStepPage Function GetStepProgressText ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_GetStepProgressText_Statics
struct UHT_STATICS
{
	struct TrainingStepPage_eventGetStepProgressText_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Results" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStepProgressText constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStepProgressText constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStepProgressText Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(TrainingStepPage_eventGetStepProgressText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetStepProgressText Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "GetStepProgressText", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TrainingStepPage_eventGetStepProgressText_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TrainingStepPage_eventGetStepProgressText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingStepPage_GetStepProgressText(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execGetStepProgressText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStepProgressText();
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function GetStepProgressText *****************************

// ********** Begin Class UTrainingStepPage Function GoBackPage ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_GoBackPage_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Navigation" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GoBackPage constinit property declarations ****************************
// ********** End Function GoBackPage constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "GoBackPage", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UTrainingStepPage_GoBackPage(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execGoBackPage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GoBackPage();
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function GoBackPage **************************************

// ********** Begin Class UTrainingStepPage Function GoNextPage ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_GoNextPage_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- NAVIGATION ---\n" },
#endif
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- NAVIGATION ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GoNextPage constinit property declarations ****************************
// ********** End Function GoNextPage constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "GoNextPage", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UTrainingStepPage_GoNextPage(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execGoNextPage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GoNextPage();
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function GoNextPage **************************************

// ********** Begin Class UTrainingStepPage Function InitializePageData ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_InitializePageData_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Setup" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializePageData constinit property declarations ********************
// ********** End Function InitializePageData constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "InitializePageData", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UTrainingStepPage_InitializePageData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execInitializePageData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializePageData();
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function InitializePageData ******************************

// ********** Begin Class UTrainingStepPage Function IsBackButtonEnabled ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_IsBackButtonEnabled_Statics
struct UHT_STATICS
{
	struct TrainingStepPage_eventIsBackButtonEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Navigation" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsBackButtonEnabled constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TrainingStepPage_eventIsBackButtonEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsBackButtonEnabled constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsBackButtonEnabled Property Definitions ******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TrainingStepPage_eventIsBackButtonEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsBackButtonEnabled Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "IsBackButtonEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TrainingStepPage_eventIsBackButtonEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TrainingStepPage_eventIsBackButtonEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingStepPage_IsBackButtonEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execIsBackButtonEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBackButtonEnabled();
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function IsBackButtonEnabled *****************************

// ********** Begin Class UTrainingStepPage Function IsFlipButtonVisible ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_IsFlipButtonVisible_Statics
struct UHT_STATICS
{
	struct TrainingStepPage_eventIsFlipButtonVisible_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Navigation" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsFlipButtonVisible constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TrainingStepPage_eventIsFlipButtonVisible_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsFlipButtonVisible constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsFlipButtonVisible Property Definitions ******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TrainingStepPage_eventIsFlipButtonVisible_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsFlipButtonVisible Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "IsFlipButtonVisible", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TrainingStepPage_eventIsFlipButtonVisible_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TrainingStepPage_eventIsFlipButtonVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingStepPage_IsFlipButtonVisible(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execIsFlipButtonVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFlipButtonVisible();
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function IsFlipButtonVisible *****************************

// ********** Begin Class UTrainingStepPage Function IsNextButtonEnabled ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_IsNextButtonEnabled_Statics
struct UHT_STATICS
{
	struct TrainingStepPage_eventIsNextButtonEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Navigation" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsNextButtonEnabled constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TrainingStepPage_eventIsNextButtonEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsNextButtonEnabled constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsNextButtonEnabled Property Definitions ******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TrainingStepPage_eventIsNextButtonEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsNextButtonEnabled Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "IsNextButtonEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TrainingStepPage_eventIsNextButtonEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TrainingStepPage_eventIsNextButtonEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingStepPage_IsNextButtonEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execIsNextButtonEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsNextButtonEnabled();
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function IsNextButtonEnabled *****************************

// ********** Begin Class UTrainingStepPage Function IsOnResultPage ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_IsOnResultPage_Statics
struct UHT_STATICS
{
	struct TrainingStepPage_eventIsOnResultPage_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Navigation" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsOnResultPage constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TrainingStepPage_eventIsOnResultPage_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsOnResultPage constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsOnResultPage Property Definitions ***********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TrainingStepPage_eventIsOnResultPage_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsOnResultPage Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "IsOnResultPage", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TrainingStepPage_eventIsOnResultPage_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TrainingStepPage_eventIsOnResultPage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingStepPage_IsOnResultPage(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execIsOnResultPage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOnResultPage();
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function IsOnResultPage **********************************

// ********** Begin Class UTrainingStepPage Function JumpToCurrentPage *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_JumpToCurrentPage_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Navigation" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function JumpToCurrentPage constinit property declarations *********************
// ********** End Function JumpToCurrentPage constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "JumpToCurrentPage", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UTrainingStepPage_JumpToCurrentPage(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execJumpToCurrentPage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JumpToCurrentPage();
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function JumpToCurrentPage *******************************

// ********** Begin Class UTrainingStepPage Function OnChapterCompleted ****************************
static FName NAME_UTrainingStepPage_OnChapterCompleted = FName(TEXT("OnChapterCompleted"));
void UTrainingStepPage::OnChapterCompleted()
{
	UFunction* Func = FindFunctionChecked(NAME_UTrainingStepPage_OnChapterCompleted);
	ProcessEvent(Func,NULL);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_OnChapterCompleted_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Events" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnChapterCompleted constinit property declarations ********************
// ********** End Function OnChapterCompleted constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "OnChapterCompleted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UTrainingStepPage_OnChapterCompleted(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UTrainingStepPage Function OnChapterCompleted ******************************

// ********** Begin Class UTrainingStepPage Function OnMasterStepCompleted *************************
struct TrainingStepPage_eventOnMasterStepCompleted_Parms
{
	int32 CompletedStepIndex;
};
static FName NAME_UTrainingStepPage_OnMasterStepCompleted = FName(TEXT("OnMasterStepCompleted"));
void UTrainingStepPage::OnMasterStepCompleted(int32 CompletedStepIndex)
{
	TrainingStepPage_eventOnMasterStepCompleted_Parms Parms;
	Parms.CompletedStepIndex=CompletedStepIndex;
	UFunction* Func = FindFunctionChecked(NAME_UTrainingStepPage_OnMasterStepCompleted);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_OnMasterStepCompleted_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Events" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnMasterStepCompleted constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompletedStepIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnMasterStepCompleted constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnMasterStepCompleted Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CompletedStepIndex = { "CompletedStepIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(TrainingStepPage_eventOnMasterStepCompleted_Parms, CompletedStepIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CompletedStepIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnMasterStepCompleted Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "OnMasterStepCompleted", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<TrainingStepPage_eventOnMasterStepCompleted_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(TrainingStepPage_eventOnMasterStepCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingStepPage_OnMasterStepCompleted(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UTrainingStepPage Function OnMasterStepCompleted ***************************

// ********** Begin Class UTrainingStepPage Function OnNextStepTrigger *****************************
struct TrainingStepPage_eventOnNextStepTrigger_Parms
{
	int32 NewMasterStepIndex;
};
static FName NAME_UTrainingStepPage_OnNextStepTrigger = FName(TEXT("OnNextStepTrigger"));
void UTrainingStepPage::OnNextStepTrigger(int32 NewMasterStepIndex)
{
	TrainingStepPage_eventOnNextStepTrigger_Parms Parms;
	Parms.NewMasterStepIndex=NewMasterStepIndex;
	UFunction* Func = FindFunctionChecked(NAME_UTrainingStepPage_OnNextStepTrigger);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_OnNextStepTrigger_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Events" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnNextStepTrigger constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewMasterStepIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnNextStepTrigger constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnNextStepTrigger Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NewMasterStepIndex = { "NewMasterStepIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(TrainingStepPage_eventOnNextStepTrigger_Parms, NewMasterStepIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewMasterStepIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnNextStepTrigger Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "OnNextStepTrigger", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<TrainingStepPage_eventOnNextStepTrigger_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(TrainingStepPage_eventOnNextStepTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingStepPage_OnNextStepTrigger(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UTrainingStepPage Function OnNextStepTrigger *******************************

// ********** Begin Class UTrainingStepPage Function OnPageChanged *********************************
struct TrainingStepPage_eventOnPageChanged_Parms
{
	int32 NewPageIndex;
};
static FName NAME_UTrainingStepPage_OnPageChanged = FName(TEXT("OnPageChanged"));
void UTrainingStepPage::OnPageChanged(int32 NewPageIndex)
{
	TrainingStepPage_eventOnPageChanged_Parms Parms;
	Parms.NewPageIndex=NewPageIndex;
	UFunction* Func = FindFunctionChecked(NAME_UTrainingStepPage_OnPageChanged);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_OnPageChanged_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EVENTS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EVENTS ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnPageChanged constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewPageIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnPageChanged constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnPageChanged Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NewPageIndex = { "NewPageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(TrainingStepPage_eventOnPageChanged_Parms, NewPageIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewPageIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnPageChanged Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "OnPageChanged", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<TrainingStepPage_eventOnPageChanged_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(TrainingStepPage_eventOnPageChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingStepPage_OnPageChanged(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UTrainingStepPage Function OnPageChanged ***********************************

// ********** Begin Class UTrainingStepPage Function OnQuizAnswerSubmitted *************************
struct TrainingStepPage_eventOnQuizAnswerSubmitted_Parms
{
	int32 StepNumber;
	int32 SelectedOption;
};
static FName NAME_UTrainingStepPage_OnQuizAnswerSubmitted = FName(TEXT("OnQuizAnswerSubmitted"));
void UTrainingStepPage::OnQuizAnswerSubmitted(int32 StepNumber, int32 SelectedOption)
{
	TrainingStepPage_eventOnQuizAnswerSubmitted_Parms Parms;
	Parms.StepNumber=StepNumber;
	Parms.SelectedOption=SelectedOption;
	UFunction* Func = FindFunctionChecked(NAME_UTrainingStepPage_OnQuizAnswerSubmitted);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_OnQuizAnswerSubmitted_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Quiz Events" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnQuizAnswerSubmitted constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_StepNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnQuizAnswerSubmitted constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnQuizAnswerSubmitted Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StepNumber = { "StepNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(TrainingStepPage_eventOnQuizAnswerSubmitted_Parms, StepNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SelectedOption = { "SelectedOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(TrainingStepPage_eventOnQuizAnswerSubmitted_Parms, SelectedOption), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StepNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedOption,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnQuizAnswerSubmitted Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "OnQuizAnswerSubmitted", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<TrainingStepPage_eventOnQuizAnswerSubmitted_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(TrainingStepPage_eventOnQuizAnswerSubmitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingStepPage_OnQuizAnswerSubmitted(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UTrainingStepPage Function OnQuizAnswerSubmitted ***************************

// ********** Begin Class UTrainingStepPage Function OnQuizStateEntered ****************************
struct TrainingStepPage_eventOnQuizStateEntered_Parms
{
	bool bIsQuiz;
};
static FName NAME_UTrainingStepPage_OnQuizStateEntered = FName(TEXT("OnQuizStateEntered"));
void UTrainingStepPage::OnQuizStateEntered(bool bIsQuiz)
{
	TrainingStepPage_eventOnQuizStateEntered_Parms Parms;
	Parms.bIsQuiz=bIsQuiz ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UTrainingStepPage_OnQuizStateEntered);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_OnQuizStateEntered_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Quiz Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The event that tells Blueprints to flip the Widget Switcher\n" },
#endif
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The event that tells Blueprints to flip the Widget Switcher" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnQuizStateEntered constinit property declarations ********************
	static void NewProp_bIsQuiz_SetBit(void* Obj)
	{
		((TrainingStepPage_eventOnQuizStateEntered_Parms*)Obj)->bIsQuiz = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsQuiz;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnQuizStateEntered constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnQuizStateEntered Property Definitions *******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsQuiz = { "bIsQuiz", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TrainingStepPage_eventOnQuizStateEntered_Parms), &UHT_STATICS::NewProp_bIsQuiz_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsQuiz,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnQuizStateEntered Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "OnQuizStateEntered", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<TrainingStepPage_eventOnQuizStateEntered_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(TrainingStepPage_eventOnQuizStateEntered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingStepPage_OnQuizStateEntered(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UTrainingStepPage Function OnQuizStateEntered ******************************

// ********** Begin Class UTrainingStepPage Function OnUpdateNavigationButtons *********************
static FName NAME_UTrainingStepPage_OnUpdateNavigationButtons = FName(TEXT("OnUpdateNavigationButtons"));
void UTrainingStepPage::OnUpdateNavigationButtons()
{
	UFunction* Func = FindFunctionChecked(NAME_UTrainingStepPage_OnUpdateNavigationButtons);
	ProcessEvent(Func,NULL);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_OnUpdateNavigationButtons_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Events" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnUpdateNavigationButtons constinit property declarations *************
// ********** End Function OnUpdateNavigationButtons constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "OnUpdateNavigationButtons", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UTrainingStepPage_OnUpdateNavigationButtons(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UTrainingStepPage Function OnUpdateNavigationButtons ***********************

// ********** Begin Class UTrainingStepPage Function RefreshList ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_RefreshList_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Logic" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RefreshList constinit property declarations ***************************
// ********** End Function RefreshList constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "RefreshList", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UTrainingStepPage_RefreshList(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execRefreshList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshList();
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function RefreshList *************************************

// ********** Begin Class UTrainingStepPage Function ResetAllProgress ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_ResetAllProgress_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Logic" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetAllProgress constinit property declarations **********************
// ********** End Function ResetAllProgress constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "ResetAllProgress", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UTrainingStepPage_ResetAllProgress(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execResetAllProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAllProgress();
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function ResetAllProgress ********************************

// ********** Begin Class UTrainingStepPage Function RestoreQuizVisualStates ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_RestoreQuizVisualStates_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Quiz Logic" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RestoreQuizVisualStates constinit property declarations ***************
// ********** End Function RestoreQuizVisualStates constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "RestoreQuizVisualStates", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UTrainingStepPage_RestoreQuizVisualStates(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execRestoreQuizVisualStates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestoreQuizVisualStates();
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function RestoreQuizVisualStates *************************

// ********** Begin Class UTrainingStepPage Function SelectQuizAnswer ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_SelectQuizAnswer_Statics
struct UHT_STATICS
{
	struct TrainingStepPage_eventSelectQuizAnswer_Parms
	{
		int32 AnswerIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Quiz Logic" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SelectQuizAnswer constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AnswerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SelectQuizAnswer constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SelectQuizAnswer Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_AnswerIndex = { "AnswerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(TrainingStepPage_eventSelectQuizAnswer_Parms, AnswerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnswerIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SelectQuizAnswer Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "SelectQuizAnswer", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TrainingStepPage_eventSelectQuizAnswer_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TrainingStepPage_eventSelectQuizAnswer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingStepPage_SelectQuizAnswer(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execSelectQuizAnswer)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AnswerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectQuizAnswer(Z_Param_AnswerIndex);
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function SelectQuizAnswer ********************************

// ********** Begin Class UTrainingStepPage Function SetTotalSessionSteps **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_SetTotalSessionSteps_Statics
struct UHT_STATICS
{
	struct TrainingStepPage_eventSetTotalSessionSteps_Parms
	{
		int32 NewTotalSteps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Setup" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTotalSessionSteps constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewTotalSteps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTotalSessionSteps constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTotalSessionSteps Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NewTotalSteps = { "NewTotalSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(TrainingStepPage_eventSetTotalSessionSteps_Parms, NewTotalSteps), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTotalSteps,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTotalSessionSteps Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "SetTotalSessionSteps", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TrainingStepPage_eventSetTotalSessionSteps_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TrainingStepPage_eventSetTotalSessionSteps_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingStepPage_SetTotalSessionSteps(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execSetTotalSessionSteps)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewTotalSteps);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTotalSessionSteps(Z_Param_NewTotalSteps);
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function SetTotalSessionSteps ****************************

// ********** Begin Class UTrainingStepPage Function StartGM ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_StartGM_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Step Logic" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartGM constinit property declarations *******************************
// ********** End Function StartGM constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "StartGM", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UTrainingStepPage_StartGM(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execStartGM)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGM();
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function StartGM *****************************************

// ********** Begin Class UTrainingStepPage Function TriggerMainStepFade ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingStepPage_TriggerMainStepFade_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- UI ANIMATION (NEW) ---\n// Call this from Blueprint right after you SetText!\n" },
#endif
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- UI ANIMATION (NEW) ---\nCall this from Blueprint right after you SetText!" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function TriggerMainStepFade constinit property declarations *******************
// ********** End Function TriggerMainStepFade constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingStepPage, nullptr, "TriggerMainStepFade", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UTrainingStepPage_TriggerMainStepFade(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingStepPage::execTriggerMainStepFade)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerMainStepFade();
	P_NATIVE_END;
}
// ********** End Class UTrainingStepPage Function TriggerMainStepFade *****************************

// ********** Begin Class UTrainingStepPage ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UTrainingStepPage_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "TrainingStepPage.h" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepAdvanceSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuizCorrectSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuizWrongSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionSteps_MetaData[] = {
		{ "Category", "Training Data" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAwaitingQuizConfirm_MetaData[] = {
		{ "Category", "Quiz State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- QUIZ LOGIC ---\n" },
#endif
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- QUIZ LOGIC ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedQuizAnswerIndex_MetaData[] = {
		{ "Category", "Quiz State" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCurrentPageAQuiz_MetaData[] = {
		{ "Category", "Quiz State" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentQuizCorrectAnswer_MetaData[] = {
		{ "Category", "Quiz State" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- WIDGET BINDINGS ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- WIDGET BINDINGS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicListContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepProgressText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainStepText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- NEW: Bind the Main Step Text ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- NEW: Bind the Main Step Text ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextButtonText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuizContainerBox_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The panel where C++ will automatically spawn the Quiz Buttons\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The panel where C++ will automatically spawn the Quiz Buttons" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuizButtonClass_MetaData[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The class to spawn (You will select WBP_QuizAnswerRow in the details panel)\n" },
#endif
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class to spawn (You will select WBP_QuizAnswerRow in the details panel)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedQuizRows_MetaData[] = {
		{ "Category", "Quiz Internal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Internal memory of the spawned rows (Exposed so Blueprint can register rows)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TrainingStepPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal memory of the spawned rows (Exposed so Blueprint can register rows)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UTrainingStepPage constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StepAdvanceSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuizCorrectSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuizWrongSound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSteps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SessionSteps;
	static void NewProp_bIsAwaitingQuizConfirm_SetBit(void* Obj)
	{
		((UTrainingStepPage*)Obj)->bIsAwaitingQuizConfirm = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAwaitingQuizConfirm;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedQuizAnswerIndex;
	static void NewProp_bIsCurrentPageAQuiz_SetBit(void* Obj)
	{
		((UTrainingStepPage*)Obj)->bIsCurrentPageAQuiz = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCurrentPageAQuiz;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentQuizCorrectAnswer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainScrollBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicListContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StepProgressText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainStepText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextButtonText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuizContainerBox;
	static const UECodeGen_Private::FClassPropertyParams NewProp_QuizButtonClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedQuizRows_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedQuizRows;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UTrainingStepPage constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AdvanceProgress"), .Pointer = &UTrainingStepPage::execAdvanceProgress },
		{ .NameUTF8 = UTF8TEXT("ConfirmQuizAnswer"), .Pointer = &UTrainingStepPage::execConfirmQuizAnswer },
		{ .NameUTF8 = UTF8TEXT("ForceQuizStateFromBlueprint"), .Pointer = &UTrainingStepPage::execForceQuizStateFromBlueprint },
		{ .NameUTF8 = UTF8TEXT("GetMasterProgressText"), .Pointer = &UTrainingStepPage::execGetMasterProgressText },
		{ .NameUTF8 = UTF8TEXT("GetQuizAnswerForAPI"), .Pointer = &UTrainingStepPage::execGetQuizAnswerForAPI },
		{ .NameUTF8 = UTF8TEXT("GetSessionTimeText"), .Pointer = &UTrainingStepPage::execGetSessionTimeText },
		{ .NameUTF8 = UTF8TEXT("GetStepProgressText"), .Pointer = &UTrainingStepPage::execGetStepProgressText },
		{ .NameUTF8 = UTF8TEXT("GoBackPage"), .Pointer = &UTrainingStepPage::execGoBackPage },
		{ .NameUTF8 = UTF8TEXT("GoNextPage"), .Pointer = &UTrainingStepPage::execGoNextPage },
		{ .NameUTF8 = UTF8TEXT("InitializePageData"), .Pointer = &UTrainingStepPage::execInitializePageData },
		{ .NameUTF8 = UTF8TEXT("IsBackButtonEnabled"), .Pointer = &UTrainingStepPage::execIsBackButtonEnabled },
		{ .NameUTF8 = UTF8TEXT("IsFlipButtonVisible"), .Pointer = &UTrainingStepPage::execIsFlipButtonVisible },
		{ .NameUTF8 = UTF8TEXT("IsNextButtonEnabled"), .Pointer = &UTrainingStepPage::execIsNextButtonEnabled },
		{ .NameUTF8 = UTF8TEXT("IsOnResultPage"), .Pointer = &UTrainingStepPage::execIsOnResultPage },
		{ .NameUTF8 = UTF8TEXT("JumpToCurrentPage"), .Pointer = &UTrainingStepPage::execJumpToCurrentPage },
		{ .NameUTF8 = UTF8TEXT("RefreshList"), .Pointer = &UTrainingStepPage::execRefreshList },
		{ .NameUTF8 = UTF8TEXT("ResetAllProgress"), .Pointer = &UTrainingStepPage::execResetAllProgress },
		{ .NameUTF8 = UTF8TEXT("RestoreQuizVisualStates"), .Pointer = &UTrainingStepPage::execRestoreQuizVisualStates },
		{ .NameUTF8 = UTF8TEXT("SelectQuizAnswer"), .Pointer = &UTrainingStepPage::execSelectQuizAnswer },
		{ .NameUTF8 = UTF8TEXT("SetTotalSessionSteps"), .Pointer = &UTrainingStepPage::execSetTotalSessionSteps },
		{ .NameUTF8 = UTF8TEXT("StartGM"), .Pointer = &UTrainingStepPage::execStartGM },
		{ .NameUTF8 = UTF8TEXT("TriggerMainStepFade"), .Pointer = &UTrainingStepPage::execTriggerMainStepFade },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrainingStepPage_AdvanceProgress, "AdvanceProgress" }, // 6ae040bd20198915907bdd6a30bf7c105f468e9a
		{ &Z_Construct_UFunction_UTrainingStepPage_ConfirmQuizAnswer, "ConfirmQuizAnswer" }, // 7e5bbe92a1f7f6bcf04c1a08caa233065bb156e0
		{ &Z_Construct_UFunction_UTrainingStepPage_ForceQuizStateFromBlueprint, "ForceQuizStateFromBlueprint" }, // 2a3aa39af7c6f056075205f31f9fbf04c7b253a1
		{ &Z_Construct_UFunction_UTrainingStepPage_GetMasterProgressText, "GetMasterProgressText" }, // 1e27ba95af51012cf8e40ea86e35de3eb72d38fb
		{ &Z_Construct_UFunction_UTrainingStepPage_GetQuizAnswerForAPI, "GetQuizAnswerForAPI" }, // ebf6fabe246060fcb52ca273289a0adaaf1afa7d
		{ &Z_Construct_UFunction_UTrainingStepPage_GetSessionTimeText, "GetSessionTimeText" }, // bc7b0209e3dbf0b999acd362806662aa84a1882a
		{ &Z_Construct_UFunction_UTrainingStepPage_GetStepProgressText, "GetStepProgressText" }, // 887592fb46b7150b7a224f2be956dcc6f125910c
		{ &Z_Construct_UFunction_UTrainingStepPage_GoBackPage, "GoBackPage" }, // ec065b2b11b99379b3943979b1619e33d95794d2
		{ &Z_Construct_UFunction_UTrainingStepPage_GoNextPage, "GoNextPage" }, // ca4aee729e1f557285b97685fb939edf376bd6c6
		{ &Z_Construct_UFunction_UTrainingStepPage_InitializePageData, "InitializePageData" }, // a36c0592825159dc5ccf0b3561cb41dd1474bd93
		{ &Z_Construct_UFunction_UTrainingStepPage_IsBackButtonEnabled, "IsBackButtonEnabled" }, // 9b7673de9a3f93e32065b830722978ee4587e5e8
		{ &Z_Construct_UFunction_UTrainingStepPage_IsFlipButtonVisible, "IsFlipButtonVisible" }, // 47573f657c809f423c501bcea31afef01b5de0bc
		{ &Z_Construct_UFunction_UTrainingStepPage_IsNextButtonEnabled, "IsNextButtonEnabled" }, // d7c30fa0d1eb8b2f715759d991b9d46441021342
		{ &Z_Construct_UFunction_UTrainingStepPage_IsOnResultPage, "IsOnResultPage" }, // b6f437e079d06747610db8eef52331900ef9e105
		{ &Z_Construct_UFunction_UTrainingStepPage_JumpToCurrentPage, "JumpToCurrentPage" }, // fa532e44b534bc421ef124ad1854419f2494e135
		{ &Z_Construct_UFunction_UTrainingStepPage_OnChapterCompleted, "OnChapterCompleted" }, // 8cd95a40d822fe7578fdbbf828626a565c1d308e
		{ &Z_Construct_UFunction_UTrainingStepPage_OnMasterStepCompleted, "OnMasterStepCompleted" }, // 5a832d6be2362bc55e2b46f03a90b4587a91fe67
		{ &Z_Construct_UFunction_UTrainingStepPage_OnNextStepTrigger, "OnNextStepTrigger" }, // 6f6a67a76b8b777a32fb8c5e7eb225a7f169f4f7
		{ &Z_Construct_UFunction_UTrainingStepPage_OnPageChanged, "OnPageChanged" }, // eca27029b15068d92d6d40780046bb9410d28b88
		{ &Z_Construct_UFunction_UTrainingStepPage_OnQuizAnswerSubmitted, "OnQuizAnswerSubmitted" }, // 42533070eca02421a0296a8ba5a7a8808cf49eca
		{ &Z_Construct_UFunction_UTrainingStepPage_OnQuizStateEntered, "OnQuizStateEntered" }, // 78953f87fccfbfe8447b87c54df31723bc887467
		{ &Z_Construct_UFunction_UTrainingStepPage_OnUpdateNavigationButtons, "OnUpdateNavigationButtons" }, // 0f31a67b5fccb2419f0f12bbd098bb7c133288f9
		{ &Z_Construct_UFunction_UTrainingStepPage_RefreshList, "RefreshList" }, // ec6bfc035df6d1d0e03356230d701334786d4f94
		{ &Z_Construct_UFunction_UTrainingStepPage_ResetAllProgress, "ResetAllProgress" }, // 97a44d4f24e96b13e18148454323fa190e15a39c
		{ &Z_Construct_UFunction_UTrainingStepPage_RestoreQuizVisualStates, "RestoreQuizVisualStates" }, // 767ef24ec2469e94681d6777c6ee88d74a122138
		{ &Z_Construct_UFunction_UTrainingStepPage_SelectQuizAnswer, "SelectQuizAnswer" }, // 4930249cc278848eabb3148c2ef38bccd9b0e4f9
		{ &Z_Construct_UFunction_UTrainingStepPage_SetTotalSessionSteps, "SetTotalSessionSteps" }, // ea507e1e750a797583bc4629e5abe90172cee698
		{ &Z_Construct_UFunction_UTrainingStepPage_StartGM, "StartGM" }, // e49e29a2ce1644dc78d1c9aa182b484632918d82
		{ &Z_Construct_UFunction_UTrainingStepPage_TriggerMainStepFade, "TriggerMainStepFade" }, // f1720c928a9699aac7a3e7ccf10ea4b66e29d926
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrainingStepPage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UTrainingStepPage Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StepAdvanceSound = { "StepAdvanceSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainingStepPage, StepAdvanceSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepAdvanceSound_MetaData), NewProp_StepAdvanceSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_QuizCorrectSound = { "QuizCorrectSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainingStepPage, QuizCorrectSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuizCorrectSound_MetaData), NewProp_QuizCorrectSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_QuizWrongSound = { "QuizWrongSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainingStepPage, QuizWrongSound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuizWrongSound_MetaData), NewProp_QuizWrongSound_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SessionSteps_Inner = { "SessionSteps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRuntimeStep, METADATA_PARAMS(0, nullptr) }; // daeacb9403da96a4069905c24efb72c969cb5c71
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SessionSteps = { "SessionSteps", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainingStepPage, SessionSteps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionSteps_MetaData), NewProp_SessionSteps_MetaData) }; // daeacb9403da96a4069905c24efb72c969cb5c71
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsAwaitingQuizConfirm = { "bIsAwaitingQuizConfirm", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UTrainingStepPage), &UHT_STATICS::NewProp_bIsAwaitingQuizConfirm_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAwaitingQuizConfirm_MetaData), NewProp_bIsAwaitingQuizConfirm_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SelectedQuizAnswerIndex = { "SelectedQuizAnswerIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainingStepPage, SelectedQuizAnswerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedQuizAnswerIndex_MetaData), NewProp_SelectedQuizAnswerIndex_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsCurrentPageAQuiz = { "bIsCurrentPageAQuiz", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UTrainingStepPage), &UHT_STATICS::NewProp_bIsCurrentPageAQuiz_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCurrentPageAQuiz_MetaData), NewProp_bIsCurrentPageAQuiz_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CurrentQuizCorrectAnswer = { "CurrentQuizCorrectAnswer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainingStepPage, CurrentQuizCorrectAnswer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentQuizCorrectAnswer_MetaData), NewProp_CurrentQuizCorrectAnswer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MainScrollBox = { "MainScrollBox", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainingStepPage, MainScrollBox), Z_Construct_UClass_UScrollBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainScrollBox_MetaData), NewProp_MainScrollBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DynamicListContainer = { "DynamicListContainer", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainingStepPage, DynamicListContainer), Z_Construct_UClass_UPanelWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicListContainer_MetaData), NewProp_DynamicListContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StepProgressText = { "StepProgressText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainingStepPage, StepProgressText), Z_Construct_UClass_UTextBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepProgressText_MetaData), NewProp_StepProgressText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MainStepText = { "MainStepText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainingStepPage, MainStepText), Z_Construct_UClass_UTextBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainStepText_MetaData), NewProp_MainStepText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NextButtonText = { "NextButtonText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainingStepPage, NextButtonText), Z_Construct_UClass_UTextBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextButtonText_MetaData), NewProp_NextButtonText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_QuizContainerBox = { "QuizContainerBox", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainingStepPage, QuizContainerBox), Z_Construct_UClass_UPanelWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuizContainerBox_MetaData), NewProp_QuizContainerBox_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_QuizButtonClass = { "QuizButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainingStepPage, QuizButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuizAnswerRow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuizButtonClass_MetaData), NewProp_QuizButtonClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SpawnedQuizRows_Inner = { "SpawnedQuizRows", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuizAnswerRow, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SpawnedQuizRows = { "SpawnedQuizRows", nullptr, (EPropertyFlags)0x002008800000000c, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainingStepPage, SpawnedQuizRows), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedQuizRows_MetaData), NewProp_SpawnedQuizRows_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StepAdvanceSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_QuizCorrectSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_QuizWrongSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SessionSteps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SessionSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsAwaitingQuizConfirm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedQuizAnswerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsCurrentPageAQuiz,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentQuizCorrectAnswer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MainScrollBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DynamicListContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StepProgressText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MainStepText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NextButtonText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_QuizContainerBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_QuizButtonClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnedQuizRows_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnedQuizRows,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UTrainingStepPage Property Definitions *************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UUserWidget,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UTrainingStepPage,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UTrainingStepPage_StaticRegisterNativesUTrainingStepPage()
{
	UClass* Class = UTrainingStepPage::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTrainingStepPage;
UClass* Z_Construct_UClass_UTrainingStepPage(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UTrainingStepPage;
		if (!Z_Registration_Info_UClass_UTrainingStepPage.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("TrainingStepPage"),
				Z_Registration_Info_UClass_UTrainingStepPage.InnerSingleton,
				UTrainingStepPage_StaticRegisterNativesUTrainingStepPage,
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
		return Z_Registration_Info_UClass_UTrainingStepPage.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UTrainingStepPage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrainingStepPage.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UTrainingStepPage.OuterSingleton;
}
#undef UHT_STATICS
UTrainingStepPage::UTrainingStepPage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTrainingStepPage);
UTrainingStepPage::~UTrainingStepPage() {}
// ********** End Class UTrainingStepPage **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingStepPage_h__Script_Azureal_CSM_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTrainingStepPage, TEXT("UTrainingStepPage"), &Z_Registration_Info_UClass_UTrainingStepPage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrainingStepPage), 220239831U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingStepPage_h__Script_Azureal_CSM_23b4afc1840df60134b2f31eaddb5a59743ba89a{
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
