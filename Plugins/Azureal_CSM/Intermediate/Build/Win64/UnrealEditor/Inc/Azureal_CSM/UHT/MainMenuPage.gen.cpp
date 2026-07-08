// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MainMenuPage.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMainMenuPage() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UUserWidget(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UButton(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UPanelWidget(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UTextBlock(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UWidget(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UMainMenuPage(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UChapterBundle(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UChapterSelectRow(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UMainMenuPage(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UMainMenuPage Function GenerateChapterList *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMainMenuPage_GenerateChapterList_Statics
struct UHT_STATICS
{
	struct MainMenuPage_eventGenerateChapterList_Parms
	{
		UChapterBundle* DataAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Menu Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- GENERATION ---\n" },
#endif
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- GENERATION ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateChapterList constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateChapterList constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateChapterList Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuPage_eventGenerateChapterList_Parms, DataAsset), Z_Construct_UClass_UChapterBundle, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DataAsset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateChapterList Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMainMenuPage, nullptr, "GenerateChapterList", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MainMenuPage_eventGenerateChapterList_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MainMenuPage_eventGenerateChapterList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuPage_GenerateChapterList(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMainMenuPage::execGenerateChapterList)
{
	P_GET_OBJECT(UChapterBundle,Z_Param_DataAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateChapterList(Z_Param_DataAsset);
	P_NATIVE_END;
}
// ********** End Class UMainMenuPage Function GenerateChapterList *********************************

// ********** Begin Class UMainMenuPage Function GetCurrentChapterRestartText **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMainMenuPage_GetCurrentChapterRestartText_Statics
struct UHT_STATICS
{
	struct MainMenuPage_eventGetCurrentChapterRestartText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Menu Logic" },
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentChapterRestartText constinit property declarations **********
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentChapterRestartText constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentChapterRestartText Property Definitions *********************
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuPage_eventGetCurrentChapterRestartText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurrentChapterRestartText Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMainMenuPage, nullptr, "GetCurrentChapterRestartText", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MainMenuPage_eventGetCurrentChapterRestartText_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MainMenuPage_eventGetCurrentChapterRestartText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuPage_GetCurrentChapterRestartText(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMainMenuPage::execGetCurrentChapterRestartText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetCurrentChapterRestartText();
	P_NATIVE_END;
}
// ********** End Class UMainMenuPage Function GetCurrentChapterRestartText ************************

// ********** Begin Class UMainMenuPage Function GetModuleCompletionText ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMainMenuPage_GetModuleCompletionText_Statics
struct UHT_STATICS
{
	struct MainMenuPage_eventGetModuleCompletionText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Menu Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- TEXT HELPERS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- TEXT HELPERS ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetModuleCompletionText constinit property declarations ***************
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetModuleCompletionText constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetModuleCompletionText Property Definitions **************************
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuPage_eventGetModuleCompletionText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetModuleCompletionText Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMainMenuPage, nullptr, "GetModuleCompletionText", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MainMenuPage_eventGetModuleCompletionText_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MainMenuPage_eventGetModuleCompletionText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuPage_GetModuleCompletionText(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMainMenuPage::execGetModuleCompletionText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetModuleCompletionText();
	P_NATIVE_END;
}
// ********** End Class UMainMenuPage Function GetModuleCompletionText *****************************

// ********** Begin Class UMainMenuPage Function GetSelectedChapterIndex ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMainMenuPage_GetSelectedChapterIndex_Statics
struct UHT_STATICS
{
	struct MainMenuPage_eventGetSelectedChapterIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Menu Logic" },
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSelectedChapterIndex constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSelectedChapterIndex constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSelectedChapterIndex Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuPage_eventGetSelectedChapterIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSelectedChapterIndex Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMainMenuPage, nullptr, "GetSelectedChapterIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MainMenuPage_eventGetSelectedChapterIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MainMenuPage_eventGetSelectedChapterIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuPage_GetSelectedChapterIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMainMenuPage::execGetSelectedChapterIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSelectedChapterIndex();
	P_NATIVE_END;
}
// ********** End Class UMainMenuPage Function GetSelectedChapterIndex *****************************

// ********** Begin Class UMainMenuPage Function HandleRowClicked **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMainMenuPage_HandleRowClicked_Statics
struct UHT_STATICS
{
	struct MainMenuPage_eventHandleRowClicked_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleRowClicked constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleRowClicked constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleRowClicked Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuPage_eventHandleRowClicked_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleRowClicked Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMainMenuPage, nullptr, "HandleRowClicked", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MainMenuPage_eventHandleRowClicked_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MainMenuPage_eventHandleRowClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuPage_HandleRowClicked(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMainMenuPage::execHandleRowClicked)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleRowClicked(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UMainMenuPage Function HandleRowClicked ************************************

// ********** Begin Class UMainMenuPage Function IsAllChaptersCompleted ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMainMenuPage_IsAllChaptersCompleted_Statics
struct UHT_STATICS
{
	struct MainMenuPage_eventIsAllChaptersCompleted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Menu Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- NEW: MODULE STATUS CHECKER ---\n" },
#endif
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- NEW: MODULE STATUS CHECKER ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsAllChaptersCompleted constinit property declarations ****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MainMenuPage_eventIsAllChaptersCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsAllChaptersCompleted constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsAllChaptersCompleted Property Definitions ***************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MainMenuPage_eventIsAllChaptersCompleted_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsAllChaptersCompleted Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMainMenuPage, nullptr, "IsAllChaptersCompleted", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MainMenuPage_eventIsAllChaptersCompleted_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MainMenuPage_eventIsAllChaptersCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuPage_IsAllChaptersCompleted(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMainMenuPage::execIsAllChaptersCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAllChaptersCompleted();
	P_NATIVE_END;
}
// ********** End Class UMainMenuPage Function IsAllChaptersCompleted ******************************

// ********** Begin Class UMainMenuPage Function IsProceedButtonEnabled ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMainMenuPage_IsProceedButtonEnabled_Statics
struct UHT_STATICS
{
	struct MainMenuPage_eventIsProceedButtonEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Menu Logic" },
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsProceedButtonEnabled constinit property declarations ****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MainMenuPage_eventIsProceedButtonEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsProceedButtonEnabled constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsProceedButtonEnabled Property Definitions ***************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MainMenuPage_eventIsProceedButtonEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsProceedButtonEnabled Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMainMenuPage, nullptr, "IsProceedButtonEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MainMenuPage_eventIsProceedButtonEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MainMenuPage_eventIsProceedButtonEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuPage_IsProceedButtonEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMainMenuPage::execIsProceedButtonEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsProceedButtonEnabled();
	P_NATIVE_END;
}
// ********** End Class UMainMenuPage Function IsProceedButtonEnabled ******************************

// ********** Begin Class UMainMenuPage Function IsStartScreenActive *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMainMenuPage_IsStartScreenActive_Statics
struct UHT_STATICS
{
	struct MainMenuPage_eventIsStartScreenActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Menu Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- VISIBILITY & STATE ---\n" },
#endif
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- VISIBILITY & STATE ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsStartScreenActive constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MainMenuPage_eventIsStartScreenActive_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsStartScreenActive constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsStartScreenActive Property Definitions ******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MainMenuPage_eventIsStartScreenActive_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsStartScreenActive Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMainMenuPage, nullptr, "IsStartScreenActive", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MainMenuPage_eventIsStartScreenActive_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MainMenuPage_eventIsStartScreenActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainMenuPage_IsStartScreenActive(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMainMenuPage::execIsStartScreenActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStartScreenActive();
	P_NATIVE_END;
}
// ********** End Class UMainMenuPage Function IsStartScreenActive *********************************

// ********** Begin Class UMainMenuPage Function LoadCurrentChapter ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMainMenuPage_LoadCurrentChapter_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Menu Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- CURRENT CHAPTER RESTART LOGIC ---\n" },
#endif
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- CURRENT CHAPTER RESTART LOGIC ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function LoadCurrentChapter constinit property declarations ********************
// ********** End Function LoadCurrentChapter constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMainMenuPage, nullptr, "LoadCurrentChapter", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMainMenuPage_LoadCurrentChapter(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMainMenuPage::execLoadCurrentChapter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadCurrentChapter();
	P_NATIVE_END;
}
// ********** End Class UMainMenuPage Function LoadCurrentChapter **********************************

// ********** Begin Class UMainMenuPage Function OnRestartCancelled ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMainMenuPage_OnRestartCancelled_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRestartCancelled constinit property declarations ********************
// ********** End Function OnRestartCancelled constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMainMenuPage, nullptr, "OnRestartCancelled", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMainMenuPage_OnRestartCancelled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMainMenuPage::execOnRestartCancelled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRestartCancelled();
	P_NATIVE_END;
}
// ********** End Class UMainMenuPage Function OnRestartCancelled **********************************

// ********** Begin Class UMainMenuPage Function OnRestartConfirmed ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMainMenuPage_OnRestartConfirmed_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- RESTART LOGIC (Selected Chapter) ---\n" },
#endif
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- RESTART LOGIC (Selected Chapter) ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnRestartConfirmed constinit property declarations ********************
// ********** End Function OnRestartConfirmed constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMainMenuPage, nullptr, "OnRestartConfirmed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMainMenuPage_OnRestartConfirmed(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMainMenuPage::execOnRestartConfirmed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRestartConfirmed();
	P_NATIVE_END;
}
// ********** End Class UMainMenuPage Function OnRestartConfirmed **********************************

// ********** Begin Class UMainMenuPage Function OnStartButtonClicked ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMainMenuPage_OnStartButtonClicked_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Menu Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- START SCREEN LOGIC ---\n" },
#endif
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- START SCREEN LOGIC ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnStartButtonClicked constinit property declarations ******************
// ********** End Function OnStartButtonClicked constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMainMenuPage, nullptr, "OnStartButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMainMenuPage_OnStartButtonClicked(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMainMenuPage::execOnStartButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStartButtonClicked();
	P_NATIVE_END;
}
// ********** End Class UMainMenuPage Function OnStartButtonClicked ********************************

// ********** Begin Class UMainMenuPage Function ProceedToSelectedChapter **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMainMenuPage_ProceedToSelectedChapter_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Menu Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- NAVIGATION ---\n" },
#endif
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- NAVIGATION ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ProceedToSelectedChapter constinit property declarations **************
// ********** End Function ProceedToSelectedChapter constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMainMenuPage, nullptr, "ProceedToSelectedChapter", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMainMenuPage_ProceedToSelectedChapter(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMainMenuPage::execProceedToSelectedChapter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProceedToSelectedChapter();
	P_NATIVE_END;
}
// ********** End Class UMainMenuPage Function ProceedToSelectedChapter ****************************

// ********** Begin Class UMainMenuPage Function RefreshChapterRows ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMainMenuPage_RefreshChapterRows_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Menu Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- VISUAL UPDATE ---\n" },
#endif
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- VISUAL UPDATE ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RefreshChapterRows constinit property declarations ********************
// ********** End Function RefreshChapterRows constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMainMenuPage, nullptr, "RefreshChapterRows", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMainMenuPage_RefreshChapterRows(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMainMenuPage::execRefreshChapterRows)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshChapterRows();
	P_NATIVE_END;
}
// ********** End Class UMainMenuPage Function RefreshChapterRows **********************************

// ********** Begin Class UMainMenuPage Function ResetSelection ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMainMenuPage_ResetSelection_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Menu Logic" },
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetSelection constinit property declarations ************************
// ********** End Function ResetSelection constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMainMenuPage, nullptr, "ResetSelection", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMainMenuPage_ResetSelection(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMainMenuPage::execResetSelection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetSelection();
	P_NATIVE_END;
}
// ********** End Class UMainMenuPage Function ResetSelection **************************************

// ********** Begin Class UMainMenuPage Function RestartWholeModule ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMainMenuPage_RestartWholeModule_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Menu Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- MODULE RESET ---\n" },
#endif
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- MODULE RESET ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RestartWholeModule constinit property declarations ********************
// ********** End Function RestartWholeModule constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMainMenuPage, nullptr, "RestartWholeModule", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMainMenuPage_RestartWholeModule(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMainMenuPage::execRestartWholeModule)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestartWholeModule();
	P_NATIVE_END;
}
// ********** End Class UMainMenuPage Function RestartWholeModule **********************************

// ********** Begin Class UMainMenuPage Function UpdateVisibilityByChapter *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMainMenuPage_UpdateVisibilityByChapter_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Menu Logic" },
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateVisibilityByChapter constinit property declarations *************
// ********** End Function UpdateVisibilityByChapter constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMainMenuPage, nullptr, "UpdateVisibilityByChapter", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMainMenuPage_UpdateVisibilityByChapter(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMainMenuPage::execUpdateVisibilityByChapter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateVisibilityByChapter();
	P_NATIVE_END;
}
// ********** End Class UMainMenuPage Function UpdateVisibilityByChapter ***************************

// ********** Begin Class UMainMenuPage ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMainMenuPage_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "MainMenuPage.h" },
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProgressionIndex_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- WIDGET BINDINGS (MUST HAVE CATEGORY) ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- WIDGET BINDINGS (MUST HAVE CATEGORY) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepPageContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectChapterPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChapterListContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestartChapterCompletedPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- RESTART PANEL WIDGETS ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- RESTART PANEL WIDGETS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestartMessageText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Btn_ConfirmRestart_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Btn_CancelRestart_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChapterRowClass_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedRows_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedDataAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/MainMenuPage.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMainMenuPage constinit property declarations ****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgressionIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StepPageContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectChapterPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChapterListContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RestartChapterCompletedPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RestartMessageText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Btn_ConfirmRestart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Btn_CancelRestart;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChapterRowClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedRows_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedRows;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SavedDataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMainMenuPage constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GenerateChapterList"), .Pointer = &UMainMenuPage::execGenerateChapterList },
		{ .NameUTF8 = UTF8TEXT("GetCurrentChapterRestartText"), .Pointer = &UMainMenuPage::execGetCurrentChapterRestartText },
		{ .NameUTF8 = UTF8TEXT("GetModuleCompletionText"), .Pointer = &UMainMenuPage::execGetModuleCompletionText },
		{ .NameUTF8 = UTF8TEXT("GetSelectedChapterIndex"), .Pointer = &UMainMenuPage::execGetSelectedChapterIndex },
		{ .NameUTF8 = UTF8TEXT("HandleRowClicked"), .Pointer = &UMainMenuPage::execHandleRowClicked },
		{ .NameUTF8 = UTF8TEXT("IsAllChaptersCompleted"), .Pointer = &UMainMenuPage::execIsAllChaptersCompleted },
		{ .NameUTF8 = UTF8TEXT("IsProceedButtonEnabled"), .Pointer = &UMainMenuPage::execIsProceedButtonEnabled },
		{ .NameUTF8 = UTF8TEXT("IsStartScreenActive"), .Pointer = &UMainMenuPage::execIsStartScreenActive },
		{ .NameUTF8 = UTF8TEXT("LoadCurrentChapter"), .Pointer = &UMainMenuPage::execLoadCurrentChapter },
		{ .NameUTF8 = UTF8TEXT("OnRestartCancelled"), .Pointer = &UMainMenuPage::execOnRestartCancelled },
		{ .NameUTF8 = UTF8TEXT("OnRestartConfirmed"), .Pointer = &UMainMenuPage::execOnRestartConfirmed },
		{ .NameUTF8 = UTF8TEXT("OnStartButtonClicked"), .Pointer = &UMainMenuPage::execOnStartButtonClicked },
		{ .NameUTF8 = UTF8TEXT("ProceedToSelectedChapter"), .Pointer = &UMainMenuPage::execProceedToSelectedChapter },
		{ .NameUTF8 = UTF8TEXT("RefreshChapterRows"), .Pointer = &UMainMenuPage::execRefreshChapterRows },
		{ .NameUTF8 = UTF8TEXT("ResetSelection"), .Pointer = &UMainMenuPage::execResetSelection },
		{ .NameUTF8 = UTF8TEXT("RestartWholeModule"), .Pointer = &UMainMenuPage::execRestartWholeModule },
		{ .NameUTF8 = UTF8TEXT("UpdateVisibilityByChapter"), .Pointer = &UMainMenuPage::execUpdateVisibilityByChapter },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenuPage_GenerateChapterList, "GenerateChapterList" }, // b12f931d4c353bc11dc3111c4a8feb23d42708f2
		{ &Z_Construct_UFunction_UMainMenuPage_GetCurrentChapterRestartText, "GetCurrentChapterRestartText" }, // 551732349f6f5c6522566bdbf7b1e8bd3cd3d047
		{ &Z_Construct_UFunction_UMainMenuPage_GetModuleCompletionText, "GetModuleCompletionText" }, // e30e67ac8b0a73977a0a19af6e33f8c59fa4282e
		{ &Z_Construct_UFunction_UMainMenuPage_GetSelectedChapterIndex, "GetSelectedChapterIndex" }, // 0a8f4aae92e78611cb34a0d07eac6509640cacde
		{ &Z_Construct_UFunction_UMainMenuPage_HandleRowClicked, "HandleRowClicked" }, // 56dd4c8c44e84cf601ac977ea9c869b0c94d7791
		{ &Z_Construct_UFunction_UMainMenuPage_IsAllChaptersCompleted, "IsAllChaptersCompleted" }, // c684c60c79d7efd87935478952b43916f44802bb
		{ &Z_Construct_UFunction_UMainMenuPage_IsProceedButtonEnabled, "IsProceedButtonEnabled" }, // 57f722080f60444b1eb310ae1b0695aca24fca3c
		{ &Z_Construct_UFunction_UMainMenuPage_IsStartScreenActive, "IsStartScreenActive" }, // f216b53b64f0cd34ad048e7b7fa13417ad85ae2e
		{ &Z_Construct_UFunction_UMainMenuPage_LoadCurrentChapter, "LoadCurrentChapter" }, // a6c790c1d6423598644919b29d21a132aa4dfffa
		{ &Z_Construct_UFunction_UMainMenuPage_OnRestartCancelled, "OnRestartCancelled" }, // 411eac881e357403db8225db51de5a79bc1a5a55
		{ &Z_Construct_UFunction_UMainMenuPage_OnRestartConfirmed, "OnRestartConfirmed" }, // b57cb7efd1b2d587105c03d2aa6ee6780b3a2dc7
		{ &Z_Construct_UFunction_UMainMenuPage_OnStartButtonClicked, "OnStartButtonClicked" }, // b3d1192dd15b6322f0a49b61e0b92181d3b19123
		{ &Z_Construct_UFunction_UMainMenuPage_ProceedToSelectedChapter, "ProceedToSelectedChapter" }, // 906b4135153fa074ee0be32fcc69a5065f024c80
		{ &Z_Construct_UFunction_UMainMenuPage_RefreshChapterRows, "RefreshChapterRows" }, // 56d67420ce21051d281e6f496b928461a2e2373e
		{ &Z_Construct_UFunction_UMainMenuPage_ResetSelection, "ResetSelection" }, // 4369cdb94f5d7c8b5aa197bbf5774105f54e17b0
		{ &Z_Construct_UFunction_UMainMenuPage_RestartWholeModule, "RestartWholeModule" }, // bfee031b0732a6fc12ff68549ebe0336ae8d970e
		{ &Z_Construct_UFunction_UMainMenuPage_UpdateVisibilityByChapter, "UpdateVisibilityByChapter" }, // 0cc9e0bb757892db501234e08f52c95e7e8cb207
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuPage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMainMenuPage Property Definitions ***************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CurrentProgressionIndex = { "CurrentProgressionIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuPage, CurrentProgressionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentProgressionIndex_MetaData), NewProp_CurrentProgressionIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StartPanel = { "StartPanel", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuPage, StartPanel), Z_Construct_UClass_UWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPanel_MetaData), NewProp_StartPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StepPageContainer = { "StepPageContainer", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuPage, StepPageContainer), Z_Construct_UClass_UWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepPageContainer_MetaData), NewProp_StepPageContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectChapterPanel = { "SelectChapterPanel", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuPage, SelectChapterPanel), Z_Construct_UClass_UWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectChapterPanel_MetaData), NewProp_SelectChapterPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ChapterListContainer = { "ChapterListContainer", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuPage, ChapterListContainer), Z_Construct_UClass_UPanelWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChapterListContainer_MetaData), NewProp_ChapterListContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RestartChapterCompletedPanel = { "RestartChapterCompletedPanel", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuPage, RestartChapterCompletedPanel), Z_Construct_UClass_UWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestartChapterCompletedPanel_MetaData), NewProp_RestartChapterCompletedPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RestartMessageText = { "RestartMessageText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuPage, RestartMessageText), Z_Construct_UClass_UTextBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestartMessageText_MetaData), NewProp_RestartMessageText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Btn_ConfirmRestart = { "Btn_ConfirmRestart", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuPage, Btn_ConfirmRestart), Z_Construct_UClass_UButton, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Btn_ConfirmRestart_MetaData), NewProp_Btn_ConfirmRestart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Btn_CancelRestart = { "Btn_CancelRestart", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuPage, Btn_CancelRestart), Z_Construct_UClass_UButton, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Btn_CancelRestart_MetaData), NewProp_Btn_CancelRestart_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ChapterRowClass = { "ChapterRowClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuPage, ChapterRowClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UChapterSelectRow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChapterRowClass_MetaData), NewProp_ChapterRowClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SpawnedRows_Inner = { "SpawnedRows", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UChapterSelectRow, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SpawnedRows = { "SpawnedRows", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuPage, SpawnedRows), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedRows_MetaData), NewProp_SpawnedRows_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SavedDataAsset = { "SavedDataAsset", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuPage, SavedDataAsset), Z_Construct_UClass_UChapterBundle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedDataAsset_MetaData), NewProp_SavedDataAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentProgressionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StepPageContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectChapterPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChapterListContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RestartChapterCompletedPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RestartMessageText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Btn_ConfirmRestart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Btn_CancelRestart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChapterRowClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnedRows_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnedRows,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SavedDataAsset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMainMenuPage Property Definitions *****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UUserWidget,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMainMenuPage,
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
static void UMainMenuPage_StaticRegisterNativesUMainMenuPage()
{
	UClass* Class = UMainMenuPage::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMainMenuPage;
UClass* Z_Construct_UClass_UMainMenuPage(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMainMenuPage;
		if (!Z_Registration_Info_UClass_UMainMenuPage.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MainMenuPage"),
				Z_Registration_Info_UClass_UMainMenuPage.InnerSingleton,
				UMainMenuPage_StaticRegisterNativesUMainMenuPage,
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
		return Z_Registration_Info_UClass_UMainMenuPage.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMainMenuPage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenuPage.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainMenuPage.OuterSingleton;
}
#undef UHT_STATICS
UMainMenuPage::UMainMenuPage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMainMenuPage);
UMainMenuPage::~UMainMenuPage() {}
// ********** End Class UMainMenuPage **************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_MainMenuPage_h__Script_Azureal_CSM_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenuPage, TEXT("UMainMenuPage"), &Z_Registration_Info_UClass_UMainMenuPage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenuPage), 141686173U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_MainMenuPage_h__Script_Azureal_CSM_e2a69f7920b5ea03f69b7593491cd8cfb7a08dce{
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
