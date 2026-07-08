// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuizAnswerRow.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeQuizAnswerRow() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UUserWidget(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UButton(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UImage(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UTextBlock(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase);
AZUREAL_CSM_API UEnum* Z_Construct_UEnum_Azureal_CSM_EQuizAnswerState(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UQuizAnswerRow(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UQuizAnswerRow(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UTrainingStepPage(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EQuizAnswerState **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_Azureal_CSM_EQuizAnswerState_Statics
template<> AZUREAL_CSM_NON_ATTRIBUTED_API UEnum* StaticEnum<EQuizAnswerState>()
{
	return Z_Construct_UEnum_Azureal_CSM_EQuizAnswerState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Correct.DisplayName", "Correct (Green Check)" },
		{ "Correct.Name", "EQuizAnswerState::Correct" },
		{ "Idle.DisplayName", "Idle (Default/Unclicked)" },
		{ "Idle.Name", "EQuizAnswerState::Idle" },
		{ "ModuleRelativePath", "Public/QuizAnswerRow.h" },
		{ "Selected.DisplayName", "Selected (Highlighted)" },
		{ "Selected.Name", "EQuizAnswerState::Selected" },
		{ "Unselected.DisplayName", "Unselected (Dimmed)" },
		{ "Unselected.Name", "EQuizAnswerState::Unselected" },
		{ "Wrong.DisplayName", "Wrong (Red X)" },
		{ "Wrong.Name", "EQuizAnswerState::Wrong" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQuizAnswerState::Idle", (int64)EQuizAnswerState::Idle },
		{ "EQuizAnswerState::Selected", (int64)EQuizAnswerState::Selected },
		{ "EQuizAnswerState::Unselected", (int64)EQuizAnswerState::Unselected },
		{ "EQuizAnswerState::Correct", (int64)EQuizAnswerState::Correct },
		{ "EQuizAnswerState::Wrong", (int64)EQuizAnswerState::Wrong },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
	nullptr,
	"EQuizAnswerState",
	"EQuizAnswerState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EQuizAnswerState;
UEnum* Z_Construct_UEnum_Azureal_CSM_EQuizAnswerState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EQuizAnswerState.OuterSingleton)
		{
			ZRIE_EQuizAnswerState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Azureal_CSM_EQuizAnswerState, (UObject*)Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase::Outer), TEXT("EQuizAnswerState"));
		}
		return ZRIE_EQuizAnswerState.OuterSingleton;
	}
	if (!ZRIE_EQuizAnswerState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EQuizAnswerState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EQuizAnswerState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EQuizAnswerState ************************************************************

// ********** Begin Class UQuizAnswerRow Function OnButtonPressed **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UQuizAnswerRow_OnButtonPressed_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuizAnswerRow.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnButtonPressed constinit property declarations ***********************
// ********** End Function OnButtonPressed constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UQuizAnswerRow, nullptr, "OnButtonPressed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UQuizAnswerRow_OnButtonPressed(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UQuizAnswerRow::execOnButtonPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnButtonPressed();
	P_NATIVE_END;
}
// ********** End Class UQuizAnswerRow Function OnButtonPressed ************************************

// ********** Begin Class UQuizAnswerRow Function OnStateChanged ***********************************
struct QuizAnswerRow_eventOnStateChanged_Parms
{
	EQuizAnswerState NewState;
};
static FName NAME_UQuizAnswerRow_OnStateChanged = FName(TEXT("OnStateChanged"));
void UQuizAnswerRow::OnStateChanged(EQuizAnswerState NewState)
{
	QuizAnswerRow_eventOnStateChanged_Parms Parms;
	Parms.NewState=NewState;
	UFunction* Func = FindFunctionChecked(NAME_UQuizAnswerRow_OnStateChanged);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UQuizAnswerRow_OnStateChanged_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Quiz Events" },
		{ "ModuleRelativePath", "Public/QuizAnswerRow.h" },
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
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(QuizAnswerRow_eventOnStateChanged_Parms, NewState), Z_Construct_UEnum_Azureal_CSM_EQuizAnswerState, METADATA_PARAMS(0, nullptr) }; // 5664a1c1bf7e8433f1f3f8422c7b10590bfe77a8
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnStateChanged Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UQuizAnswerRow, nullptr, "OnStateChanged", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<QuizAnswerRow_eventOnStateChanged_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(QuizAnswerRow_eventOnStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuizAnswerRow_OnStateChanged(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UQuizAnswerRow Function OnStateChanged *************************************

// ********** Begin Class UQuizAnswerRow Function SetButtonEnabled *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UQuizAnswerRow_SetButtonEnabled_Statics
struct UHT_STATICS
{
	struct QuizAnswerRow_eventSetButtonEnabled_Parms
	{
		bool bInEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Quiz Logic" },
		{ "ModuleRelativePath", "Public/QuizAnswerRow.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetButtonEnabled constinit property declarations **********************
	static void NewProp_bInEnabled_SetBit(void* Obj)
	{
		((QuizAnswerRow_eventSetButtonEnabled_Parms*)Obj)->bInEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetButtonEnabled constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetButtonEnabled Property Definitions *********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInEnabled = { "bInEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(QuizAnswerRow_eventSetButtonEnabled_Parms), &UHT_STATICS::NewProp_bInEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInEnabled,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetButtonEnabled Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UQuizAnswerRow, nullptr, "SetButtonEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::QuizAnswerRow_eventSetButtonEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::QuizAnswerRow_eventSetButtonEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuizAnswerRow_SetButtonEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UQuizAnswerRow::execSetButtonEnabled)
{
	P_GET_UBOOL(Z_Param_bInEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetButtonEnabled(Z_Param_bInEnabled);
	P_NATIVE_END;
}
// ********** End Class UQuizAnswerRow Function SetButtonEnabled ***********************************

// ********** Begin Class UQuizAnswerRow Function SetRowState **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UQuizAnswerRow_SetRowState_Statics
struct UHT_STATICS
{
	struct QuizAnswerRow_eventSetRowState_Parms
	{
		EQuizAnswerState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Quiz Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called by C++ to change the color/icon\n" },
#endif
		{ "ModuleRelativePath", "Public/QuizAnswerRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called by C++ to change the color/icon" },
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
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(QuizAnswerRow_eventSetRowState_Parms, NewState), Z_Construct_UEnum_Azureal_CSM_EQuizAnswerState, METADATA_PARAMS(0, nullptr) }; // 5664a1c1bf7e8433f1f3f8422c7b10590bfe77a8
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetRowState Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UQuizAnswerRow, nullptr, "SetRowState", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::QuizAnswerRow_eventSetRowState_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::QuizAnswerRow_eventSetRowState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuizAnswerRow_SetRowState(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UQuizAnswerRow::execSetRowState)
{
	P_GET_ENUM(EQuizAnswerState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRowState(EQuizAnswerState(Z_Param_NewState));
	P_NATIVE_END;
}
// ********** End Class UQuizAnswerRow Function SetRowState ****************************************

// ********** Begin Class UQuizAnswerRow Function SetupRow *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UQuizAnswerRow_SetupRow_Statics
struct UHT_STATICS
{
	struct QuizAnswerRow_eventSetupRow_Parms
	{
		int32 InIndex;
		FText InAnswerText;
		UTrainingStepPage* InParent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Quiz Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called by C++ to build the widget\n" },
#endif
		{ "ModuleRelativePath", "Public/QuizAnswerRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called by C++ to build the widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetupRow constinit property declarations ******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InAnswerText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InParent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetupRow constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetupRow Property Definitions *****************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(QuizAnswerRow_eventSetupRow_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_InAnswerText = { "InAnswerText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(QuizAnswerRow_eventSetupRow_Parms, InAnswerText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(QuizAnswerRow_eventSetupRow_Parms, InParent), Z_Construct_UClass_UTrainingStepPage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParent_MetaData), NewProp_InParent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InAnswerText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InParent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetupRow Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UQuizAnswerRow, nullptr, "SetupRow", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::QuizAnswerRow_eventSetupRow_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::QuizAnswerRow_eventSetupRow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuizAnswerRow_SetupRow(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UQuizAnswerRow::execSetupRow)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_GET_PROPERTY(FTextProperty,Z_Param_InAnswerText);
	P_GET_OBJECT(UTrainingStepPage,Z_Param_InParent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupRow(Z_Param_InIndex,Z_Param_InAnswerText,Z_Param_InParent);
	P_NATIVE_END;
}
// ********** End Class UQuizAnswerRow Function SetupRow *******************************************

// ********** Begin Class UQuizAnswerRow ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UQuizAnswerRow_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "QuizAnswerRow.h" },
		{ "ModuleRelativePath", "Public/QuizAnswerRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnswerIndex_MetaData[] = {
		{ "Category", "Quiz Data" },
		{ "ModuleRelativePath", "Public/QuizAnswerRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnswerButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- BINDINGS ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuizAnswerRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- BINDINGS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnswerText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuizAnswerRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultIcon_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuizAnswerRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowTickIndicator_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuizAnswerRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentPage_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuizAnswerRow.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UQuizAnswerRow constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AnswerIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnswerButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnswerText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowTickIndicator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentPage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UQuizAnswerRow constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnButtonPressed"), .Pointer = &UQuizAnswerRow::execOnButtonPressed },
		{ .NameUTF8 = UTF8TEXT("SetButtonEnabled"), .Pointer = &UQuizAnswerRow::execSetButtonEnabled },
		{ .NameUTF8 = UTF8TEXT("SetRowState"), .Pointer = &UQuizAnswerRow::execSetRowState },
		{ .NameUTF8 = UTF8TEXT("SetupRow"), .Pointer = &UQuizAnswerRow::execSetupRow },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuizAnswerRow_OnButtonPressed, "OnButtonPressed" }, // 438a640ea67ab012f8734ae7f9f636623dd33568
		{ &Z_Construct_UFunction_UQuizAnswerRow_OnStateChanged, "OnStateChanged" }, // 0adcd192065ba1ad41cde2ab3a9d46ddf5268700
		{ &Z_Construct_UFunction_UQuizAnswerRow_SetButtonEnabled, "SetButtonEnabled" }, // 54958d7cb1c7d8080beebd93c5e768519601a0aa
		{ &Z_Construct_UFunction_UQuizAnswerRow_SetRowState, "SetRowState" }, // 9d937669986b7e18e713254649d35941f8fe9c71
		{ &Z_Construct_UFunction_UQuizAnswerRow_SetupRow, "SetupRow" }, // f37d8ad50d71cb3146bd81350afb70afd7676934
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuizAnswerRow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UQuizAnswerRow Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_AnswerIndex = { "AnswerIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UQuizAnswerRow, AnswerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnswerIndex_MetaData), NewProp_AnswerIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AnswerButton = { "AnswerButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UQuizAnswerRow, AnswerButton), Z_Construct_UClass_UButton, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnswerButton_MetaData), NewProp_AnswerButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AnswerText = { "AnswerText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UQuizAnswerRow, AnswerText), Z_Construct_UClass_UTextBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnswerText_MetaData), NewProp_AnswerText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ResultIcon = { "ResultIcon", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UQuizAnswerRow, ResultIcon), Z_Construct_UClass_UImage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultIcon_MetaData), NewProp_ResultIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ArrowTickIndicator = { "ArrowTickIndicator", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UQuizAnswerRow, ArrowTickIndicator), Z_Construct_UClass_UImage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowTickIndicator_MetaData), NewProp_ArrowTickIndicator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ParentPage = { "ParentPage", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UQuizAnswerRow, ParentPage), Z_Construct_UClass_UTrainingStepPage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentPage_MetaData), NewProp_ParentPage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnswerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnswerButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnswerText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResultIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArrowTickIndicator,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParentPage,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UQuizAnswerRow Property Definitions ****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UUserWidget,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UQuizAnswerRow,
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
static void UQuizAnswerRow_StaticRegisterNativesUQuizAnswerRow()
{
	UClass* Class = UQuizAnswerRow::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UQuizAnswerRow;
UClass* Z_Construct_UClass_UQuizAnswerRow(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UQuizAnswerRow;
		if (!Z_Registration_Info_UClass_UQuizAnswerRow.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("QuizAnswerRow"),
				Z_Registration_Info_UClass_UQuizAnswerRow.InnerSingleton,
				UQuizAnswerRow_StaticRegisterNativesUQuizAnswerRow,
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
		return Z_Registration_Info_UClass_UQuizAnswerRow.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UQuizAnswerRow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuizAnswerRow.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuizAnswerRow.OuterSingleton;
}
#undef UHT_STATICS
UQuizAnswerRow::UQuizAnswerRow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UQuizAnswerRow);
UQuizAnswerRow::~UQuizAnswerRow() {}
// ********** End Class UQuizAnswerRow *************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_QuizAnswerRow_h__Script_Azureal_CSM_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_Azureal_CSM_EQuizAnswerState, TEXT("EQuizAnswerState"), &ZRIE_EQuizAnswerState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1449435585U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuizAnswerRow, TEXT("UQuizAnswerRow"), &Z_Registration_Info_UClass_UQuizAnswerRow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuizAnswerRow), 827935925U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_QuizAnswerRow_h__Script_Azureal_CSM_2bc74738a7b12219aa9193864bb1c9ce897d3ec0{
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
