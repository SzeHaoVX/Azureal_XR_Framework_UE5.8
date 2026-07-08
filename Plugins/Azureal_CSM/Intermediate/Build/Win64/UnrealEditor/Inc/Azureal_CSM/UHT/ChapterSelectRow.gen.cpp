// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChapterSelectRow.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeChapterSelectRow() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UUserWidget(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UButton(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UImage(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UTextBlock(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UChapterSelectRow(ETypeConstructPhase);
AZUREAL_CSM_API UEnum* Z_Construct_UEnum_Azureal_CSM_EChapterCompletionState(ETypeConstructPhase);
AZUREAL_CSM_API UEnum* Z_Construct_UEnum_Azureal_CSM_EChapterState(ETypeConstructPhase);
AZUREAL_CSM_API UFunction* Z_Construct_UDelegateFunction_Azureal_CSM_OnChapterRowClicked__DelegateSignature(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UChapterSelectRow(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EChapterState *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_Azureal_CSM_EChapterState_Statics
template<> AZUREAL_CSM_NON_ATTRIBUTED_API UEnum* StaticEnum<EChapterState>()
{
	return Z_Construct_UEnum_Azureal_CSM_EChapterState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The 3 Distinct Navigation States (Interaction)\n" },
#endif
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EChapterState::Idle" },
		{ "ModuleRelativePath", "Public/ChapterSelectRow.h" },
		{ "Selected.DisplayName", "Selected" },
		{ "Selected.Name", "EChapterState::Selected" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The 3 Distinct Navigation States (Interaction)" },
#endif
		{ "YouAreHere.DisplayName", "You Are Here" },
		{ "YouAreHere.Name", "EChapterState::YouAreHere" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChapterState::Idle", (int64)EChapterState::Idle },
		{ "EChapterState::Selected", (int64)EChapterState::Selected },
		{ "EChapterState::YouAreHere", (int64)EChapterState::YouAreHere },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
	nullptr,
	"EChapterState",
	"EChapterState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EChapterState;
UEnum* Z_Construct_UEnum_Azureal_CSM_EChapterState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EChapterState.OuterSingleton)
		{
			ZRIE_EChapterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Azureal_CSM_EChapterState, (UObject*)Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase::Outer), TEXT("EChapterState"));
		}
		return ZRIE_EChapterState.OuterSingleton;
	}
	if (!ZRIE_EChapterState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EChapterState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EChapterState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EChapterState ***************************************************************

// ********** Begin Enum EChapterCompletionState ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_Azureal_CSM_EChapterCompletionState_Statics
template<> AZUREAL_CSM_NON_ATTRIBUTED_API UEnum* StaticEnum<EChapterCompletionState>()
{
	return Z_Construct_UEnum_Azureal_CSM_EChapterCompletionState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- NEW: The 3 Distinct Completion States (Visual) ---\n" },
#endif
		{ "Completed.DisplayName", "Completed" },
		{ "Completed.Name", "EChapterCompletionState::Completed" },
		{ "Incomplete.DisplayName", "Incomplete" },
		{ "Incomplete.Name", "EChapterCompletionState::Incomplete" },
		{ "InProgress.DisplayName", "In Progress" },
		{ "InProgress.Name", "EChapterCompletionState::InProgress" },
		{ "ModuleRelativePath", "Public/ChapterSelectRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- NEW: The 3 Distinct Completion States (Visual) ---" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChapterCompletionState::Incomplete", (int64)EChapterCompletionState::Incomplete },
		{ "EChapterCompletionState::InProgress", (int64)EChapterCompletionState::InProgress },
		{ "EChapterCompletionState::Completed", (int64)EChapterCompletionState::Completed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
	nullptr,
	"EChapterCompletionState",
	"EChapterCompletionState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EChapterCompletionState;
UEnum* Z_Construct_UEnum_Azureal_CSM_EChapterCompletionState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EChapterCompletionState.OuterSingleton)
		{
			ZRIE_EChapterCompletionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Azureal_CSM_EChapterCompletionState, (UObject*)Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase::Outer), TEXT("EChapterCompletionState"));
		}
		return ZRIE_EChapterCompletionState.OuterSingleton;
	}
	if (!ZRIE_EChapterCompletionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EChapterCompletionState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EChapterCompletionState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EChapterCompletionState *****************************************************

// ********** Begin Delegate FOnChapterRowClicked **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_Azureal_CSM_OnChapterRowClicked__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_Azureal_CSM_eventOnChapterRowClicked_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChapterSelectRow.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnChapterRowClicked constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnChapterRowClicked constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnChapterRowClicked Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Azureal_CSM_eventOnChapterRowClicked_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnChapterRowClicked Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM, nullptr, "OnChapterRowClicked__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_Azureal_CSM_eventOnChapterRowClicked_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_Azureal_CSM_eventOnChapterRowClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Azureal_CSM_OnChapterRowClicked__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnChapterRowClicked ****************************************************

// ********** Begin Class UChapterSelectRow Function BroadcastClick ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSelectRow_BroadcastClick_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ChapterSelectRow.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BroadcastClick constinit property declarations ************************
// ********** End Function BroadcastClick constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSelectRow, nullptr, "BroadcastClick", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UChapterSelectRow_BroadcastClick(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSelectRow::execBroadcastClick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadcastClick();
	P_NATIVE_END;
}
// ********** End Class UChapterSelectRow Function BroadcastClick **********************************

// ********** Begin Class UChapterSelectRow Function OnStateChanged ********************************
struct ChapterSelectRow_eventOnStateChanged_Parms
{
	EChapterState NewState;
};
static FName NAME_UChapterSelectRow_OnStateChanged = FName(TEXT("OnStateChanged"));
void UChapterSelectRow::OnStateChanged(EChapterState NewState)
{
	ChapterSelectRow_eventOnStateChanged_Parms Parms;
	Parms.NewState=NewState;
	UFunction* Func = FindFunctionChecked(NAME_UChapterSelectRow_OnStateChanged);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSelectRow_OnStateChanged_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Visuals" },
		{ "ModuleRelativePath", "Public/ChapterSelectRow.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnStateChanged constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnStateChanged constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnStateChanged Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSelectRow_eventOnStateChanged_Parms, NewState), Z_Construct_UEnum_Azureal_CSM_EChapterState, METADATA_PARAMS(0, nullptr) }; // 949b4c67452ba3bf93d12bc73e7128dc71b3ced3
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnStateChanged Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSelectRow, nullptr, "OnStateChanged", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ChapterSelectRow_eventOnStateChanged_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ChapterSelectRow_eventOnStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSelectRow_OnStateChanged(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UChapterSelectRow Function OnStateChanged **********************************

// ********** Begin Class UChapterSelectRow Function SetRowState ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSelectRow_SetRowState_Statics
struct UHT_STATICS
{
	struct ChapterSelectRow_eventSetRowState_Parms
	{
		EChapterState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- INTERACTION ---\n" },
#endif
		{ "ModuleRelativePath", "Public/ChapterSelectRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- INTERACTION ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetRowState constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRowState constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRowState Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSelectRow_eventSetRowState_Parms, NewState), Z_Construct_UEnum_Azureal_CSM_EChapterState, METADATA_PARAMS(0, nullptr) }; // 949b4c67452ba3bf93d12bc73e7128dc71b3ced3
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetRowState Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSelectRow, nullptr, "SetRowState", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSelectRow_eventSetRowState_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSelectRow_eventSetRowState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSelectRow_SetRowState(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSelectRow::execSetRowState)
{
	P_GET_ENUM(EChapterState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRowState(EChapterState(Z_Param_NewState));
	P_NATIVE_END;
}
// ********** End Class UChapterSelectRow Function SetRowState *************************************

// ********** Begin Class UChapterSelectRow Function SetupSpecificRow ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSelectRow_SetupSpecificRow_Statics
struct UHT_STATICS
{
	struct ChapterSelectRow_eventSetupSpecificRow_Parms
	{
		int32 Index;
		FText Title;
		int32 CurrentSteps;
		int32 MaxSteps;
		bool bIsComplete;
		bool bIsCurrentLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- SETUP ---\n" },
#endif
		{ "ModuleRelativePath", "Public/ChapterSelectRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- SETUP ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetupSpecificRow constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentSteps;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSteps;
	static void NewProp_bIsComplete_SetBit(void* Obj)
	{
		((ChapterSelectRow_eventSetupSpecificRow_Parms*)Obj)->bIsComplete = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsComplete;
	static void NewProp_bIsCurrentLocation_SetBit(void* Obj)
	{
		((ChapterSelectRow_eventSetupSpecificRow_Parms*)Obj)->bIsCurrentLocation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCurrentLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetupSpecificRow constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetupSpecificRow Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSelectRow_eventSetupSpecificRow_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSelectRow_eventSetupSpecificRow_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CurrentSteps = { "CurrentSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSelectRow_eventSetupSpecificRow_Parms, CurrentSteps), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxSteps = { "MaxSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSelectRow_eventSetupSpecificRow_Parms, MaxSteps), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsComplete = { "bIsComplete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ChapterSelectRow_eventSetupSpecificRow_Parms), &UHT_STATICS::NewProp_bIsComplete_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsCurrentLocation = { "bIsCurrentLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ChapterSelectRow_eventSetupSpecificRow_Parms), &UHT_STATICS::NewProp_bIsCurrentLocation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsCurrentLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetupSpecificRow Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSelectRow, nullptr, "SetupSpecificRow", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChapterSelectRow_eventSetupSpecificRow_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChapterSelectRow_eventSetupSpecificRow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSelectRow_SetupSpecificRow(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChapterSelectRow::execSetupSpecificRow)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FTextProperty,Z_Param_Title);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentSteps);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxSteps);
	P_GET_UBOOL(Z_Param_bIsComplete);
	P_GET_UBOOL(Z_Param_bIsCurrentLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupSpecificRow(Z_Param_Index,Z_Param_Title,Z_Param_CurrentSteps,Z_Param_MaxSteps,Z_Param_bIsComplete,Z_Param_bIsCurrentLocation);
	P_NATIVE_END;
}
// ********** End Class UChapterSelectRow Function SetupSpecificRow ********************************

// ********** Begin Class UChapterSelectRow Function UpdateCompletionImage *************************
struct ChapterSelectRow_eventUpdateCompletionImage_Parms
{
	EChapterCompletionState State;
};
static FName NAME_UChapterSelectRow_UpdateCompletionImage = FName(TEXT("UpdateCompletionImage"));
void UChapterSelectRow::UpdateCompletionImage(EChapterCompletionState State)
{
	ChapterSelectRow_eventUpdateCompletionImage_Parms Parms;
	Parms.State=State;
	UFunction* Func = FindFunctionChecked(NAME_UChapterSelectRow_UpdateCompletionImage);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChapterSelectRow_UpdateCompletionImage_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- UPDATED EVENT ---\n" },
#endif
		{ "ModuleRelativePath", "Public/ChapterSelectRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- UPDATED EVENT ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateCompletionImage constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateCompletionImage constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateCompletionImage Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(ChapterSelectRow_eventUpdateCompletionImage_Parms, State), Z_Construct_UEnum_Azureal_CSM_EChapterCompletionState, METADATA_PARAMS(0, nullptr) }; // 9b8bcbfce14f2c84705e06e1eff54e0bd48f4275
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateCompletionImage Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChapterSelectRow, nullptr, "UpdateCompletionImage", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ChapterSelectRow_eventUpdateCompletionImage_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ChapterSelectRow_eventUpdateCompletionImage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChapterSelectRow_UpdateCompletionImage(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UChapterSelectRow Function UpdateCompletionImage ***************************

// ********** Begin Class UChapterSelectRow ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UChapterSelectRow_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "ChapterSelectRow.h" },
		{ "ModuleRelativePath", "Public/ChapterSelectRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRowClicked_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ChapterSelectRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssignedIndex_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ChapterSelectRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChapterNumberText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- WIDGET BINDINGS (MUST HAVE CATEGORY) ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChapterSelectRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- WIDGET BINDINGS (MUST HAVE CATEGORY) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChapterTitleText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChapterSelectRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChapterSelectRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusIconImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChapterSelectRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChapterButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChapterSelectRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletionStatusImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChapterSelectRow.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UChapterSelectRow constinit property declarations ************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRowClicked;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssignedIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChapterNumberText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChapterTitleText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusIconImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChapterButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompletionStatusImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UChapterSelectRow constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BroadcastClick"), .Pointer = &UChapterSelectRow::execBroadcastClick },
		{ .NameUTF8 = UTF8TEXT("SetRowState"), .Pointer = &UChapterSelectRow::execSetRowState },
		{ .NameUTF8 = UTF8TEXT("SetupSpecificRow"), .Pointer = &UChapterSelectRow::execSetupSpecificRow },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UChapterSelectRow_BroadcastClick, "BroadcastClick" }, // 6d848ab7835801d7e22429009ba8a2d4bd02cf79
		{ &Z_Construct_UFunction_UChapterSelectRow_OnStateChanged, "OnStateChanged" }, // 1079f748fda63327e8b192515d1fe7eb6dc87d7b
		{ &Z_Construct_UFunction_UChapterSelectRow_SetRowState, "SetRowState" }, // bd28652248cd87c40a319c8d6b893aa37e2b0a34
		{ &Z_Construct_UFunction_UChapterSelectRow_SetupSpecificRow, "SetupSpecificRow" }, // 47072833a677f0a736a55b2ceb20a17131fa9018
		{ &Z_Construct_UFunction_UChapterSelectRow_UpdateCompletionImage, "UpdateCompletionImage" }, // 9db7e5d0bf55fa228370c85a02f6f837b5c75af0
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChapterSelectRow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UChapterSelectRow Property Definitions ***********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRowClicked = { "OnRowClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UChapterSelectRow, OnRowClicked), Z_Construct_UDelegateFunction_Azureal_CSM_OnChapterRowClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRowClicked_MetaData), NewProp_OnRowClicked_MetaData) }; // 6606503c1344aa31ad06971823b87ea9347fb630
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_AssignedIndex = { "AssignedIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UChapterSelectRow, AssignedIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssignedIndex_MetaData), NewProp_AssignedIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ChapterNumberText = { "ChapterNumberText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UChapterSelectRow, ChapterNumberText), Z_Construct_UClass_UTextBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChapterNumberText_MetaData), NewProp_ChapterNumberText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ChapterTitleText = { "ChapterTitleText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UChapterSelectRow, ChapterTitleText), Z_Construct_UClass_UTextBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChapterTitleText_MetaData), NewProp_ChapterTitleText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ProgressText = { "ProgressText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UChapterSelectRow, ProgressText), Z_Construct_UClass_UTextBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressText_MetaData), NewProp_ProgressText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StatusIconImage = { "StatusIconImage", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UChapterSelectRow, StatusIconImage), Z_Construct_UClass_UImage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusIconImage_MetaData), NewProp_StatusIconImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ChapterButton = { "ChapterButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UChapterSelectRow, ChapterButton), Z_Construct_UClass_UButton, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChapterButton_MetaData), NewProp_ChapterButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CompletionStatusImage = { "CompletionStatusImage", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UChapterSelectRow, CompletionStatusImage), Z_Construct_UClass_UImage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletionStatusImage_MetaData), NewProp_CompletionStatusImage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRowClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssignedIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChapterNumberText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChapterTitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProgressText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StatusIconImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChapterButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CompletionStatusImage,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UChapterSelectRow Property Definitions *************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UUserWidget,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UChapterSelectRow,
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
static void UChapterSelectRow_StaticRegisterNativesUChapterSelectRow()
{
	UClass* Class = UChapterSelectRow::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UChapterSelectRow;
UClass* Z_Construct_UClass_UChapterSelectRow(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UChapterSelectRow;
		if (!Z_Registration_Info_UClass_UChapterSelectRow.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ChapterSelectRow"),
				Z_Registration_Info_UClass_UChapterSelectRow.InnerSingleton,
				UChapterSelectRow_StaticRegisterNativesUChapterSelectRow,
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
		return Z_Registration_Info_UClass_UChapterSelectRow.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UChapterSelectRow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChapterSelectRow.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UChapterSelectRow.OuterSingleton;
}
#undef UHT_STATICS
UChapterSelectRow::UChapterSelectRow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UChapterSelectRow);
UChapterSelectRow::~UChapterSelectRow() {}
// ********** End Class UChapterSelectRow **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSelectRow_h__Script_Azureal_CSM_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_Azureal_CSM_EChapterState, TEXT("EChapterState"), &ZRIE_EChapterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2493205607U) },
		{ Z_Construct_UEnum_Azureal_CSM_EChapterCompletionState, TEXT("EChapterCompletionState"), &ZRIE_EChapterCompletionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2609630204U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChapterSelectRow, TEXT("UChapterSelectRow"), &Z_Registration_Info_UClass_UChapterSelectRow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChapterSelectRow), 3279315058U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSelectRow_h__Script_Azureal_CSM_e49da0327d70ac735e91f86fdd2cece54134701e{
	TEXT("/Script/Azureal_CSM"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
