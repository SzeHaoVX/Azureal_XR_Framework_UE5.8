// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrainingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeTrainingTypes() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase);
AZUREAL_CSM_API UEnum* Z_Construct_UEnum_Azureal_CSM_EMasterStepType(ETypeConstructPhase);
AZUREAL_CSM_API UEnum* Z_Construct_UEnum_Azureal_CSM_EStepType(ETypeConstructPhase);
AZUREAL_CSM_API UEnum* Z_Construct_UEnum_Azureal_CSM_ESubStepState(ETypeConstructPhase);
AZUREAL_CSM_API UScriptStruct* Z_Construct_UScriptStruct_FQuizAnswerData(ETypeConstructPhase);
AZUREAL_CSM_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeStep(ETypeConstructPhase);
AZUREAL_CSM_API UScriptStruct* Z_Construct_UScriptStruct_FStepData(ETypeConstructPhase);
AZUREAL_CSM_API UScriptStruct* Z_Construct_UScriptStruct_FSubStepData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ESubStepState *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_Azureal_CSM_ESubStepState_Statics
template<> AZUREAL_CSM_NON_ATTRIBUTED_API UEnum* StaticEnum<ESubStepState>()
{
	return Z_Construct_UEnum_Azureal_CSM_ESubStepState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Active.DisplayName", "Active" },
		{ "Active.Name", "ESubStepState::Active" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- ENUMS ---\n" },
#endif
		{ "Completed.DisplayName", "Completed" },
		{ "Completed.Name", "ESubStepState::Completed" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "ESubStepState::Idle" },
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- ENUMS ---" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESubStepState::Idle", (int64)ESubStepState::Idle },
		{ "ESubStepState::Active", (int64)ESubStepState::Active },
		{ "ESubStepState::Completed", (int64)ESubStepState::Completed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
	nullptr,
	"ESubStepState",
	"ESubStepState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ESubStepState;
UEnum* Z_Construct_UEnum_Azureal_CSM_ESubStepState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ESubStepState.OuterSingleton)
		{
			ZRIE_ESubStepState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Azureal_CSM_ESubStepState, (UObject*)Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase::Outer), TEXT("ESubStepState"));
		}
		return ZRIE_ESubStepState.OuterSingleton;
	}
	if (!ZRIE_ESubStepState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ESubStepState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ESubStepState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ESubStepState ***************************************************************

// ********** Begin Enum EStepType *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_Azureal_CSM_EStepType_Statics
template<> AZUREAL_CSM_NON_ATTRIBUTED_API UEnum* StaticEnum<EStepType>()
{
	return Z_Construct_UEnum_Azureal_CSM_EStepType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Explanation.DisplayName", "Explanation (Skippable)" },
		{ "Explanation.Name", "EStepType::Explanation" },
		{ "Interaction.DisplayName", "Interaction (Cannot Skip)" },
		{ "Interaction.Name", "EStepType::Interaction" },
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStepType::Interaction", (int64)EStepType::Interaction },
		{ "EStepType::Explanation", (int64)EStepType::Explanation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
	nullptr,
	"EStepType",
	"EStepType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EStepType;
UEnum* Z_Construct_UEnum_Azureal_CSM_EStepType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EStepType.OuterSingleton)
		{
			ZRIE_EStepType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Azureal_CSM_EStepType, (UObject*)Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase::Outer), TEXT("EStepType"));
		}
		return ZRIE_EStepType.OuterSingleton;
	}
	if (!ZRIE_EStepType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EStepType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EStepType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EStepType *******************************************************************

// ********** Begin Enum EMasterStepType ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_Azureal_CSM_EMasterStepType_Statics
template<> AZUREAL_CSM_NON_ATTRIBUTED_API UEnum* StaticEnum<EMasterStepType>()
{
	return Z_Construct_UEnum_Azureal_CSM_EMasterStepType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tells the page whether to load standard instructions or the quiz UI\n" },
#endif
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
		{ "Quiz.DisplayName", "Multiple Choice Quiz" },
		{ "Quiz.Name", "EMasterStepType::Quiz" },
		{ "Standard.DisplayName", "Standard Instructions" },
		{ "Standard.Name", "EMasterStepType::Standard" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tells the page whether to load standard instructions or the quiz UI" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMasterStepType::Standard", (int64)EMasterStepType::Standard },
		{ "EMasterStepType::Quiz", (int64)EMasterStepType::Quiz },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
	nullptr,
	"EMasterStepType",
	"EMasterStepType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMasterStepType;
UEnum* Z_Construct_UEnum_Azureal_CSM_EMasterStepType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMasterStepType.OuterSingleton)
		{
			ZRIE_EMasterStepType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Azureal_CSM_EMasterStepType, (UObject*)Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase::Outer), TEXT("EMasterStepType"));
		}
		return ZRIE_EMasterStepType.OuterSingleton;
	}
	if (!ZRIE_EMasterStepType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMasterStepType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMasterStepType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMasterStepType *************************************************************

// ********** Begin ScriptStruct FSubStepData ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FSubStepData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FSubStepData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSubStepData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- STRUCTS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- STRUCTS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSubStepData constinit property declarations **********************
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSubStepData constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubStepData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FSubStepData Property Definitions *********************************
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FSubStepData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FSubStepData, Type), Z_Construct_UEnum_Azureal_CSM_EStepType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // eea749338d9e5873eef9c1f20e2816f63b2053df
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FSubStepData Property Definitions ***********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
	nullptr,
	&NewStructOps,
	"SubStepData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FSubStepData>(),
	alignof(FSubStepData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSubStepData;
UScriptStruct* Z_Construct_UScriptStruct_FSubStepData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FSubStepData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FSubStepData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubStepData, (UObject*)Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase::Outer), TEXT("SubStepData"));
		}
		return Z_Registration_Info_UScriptStruct_FSubStepData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FSubStepData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSubStepData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSubStepData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FSubStepData ********************************************************

// ********** Begin ScriptStruct FQuizAnswerData ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FQuizAnswerData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FQuizAnswerData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FQuizAnswerData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- NEW STRUCT: Purely for a clean Quiz inspector layout ---\n" },
#endif
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- NEW STRUCT: Purely for a clean Quiz inspector layout ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnswerText_MetaData[] = {
		{ "Category", "Data" },
		{ "DisplayName", "Answer Option Text" },
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FQuizAnswerData constinit property declarations *******************
	static const UECodeGen_Private::FTextPropertyParams NewProp_AnswerText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FQuizAnswerData constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuizAnswerData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FQuizAnswerData Property Definitions ******************************
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_AnswerText = { "AnswerText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FQuizAnswerData, AnswerText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnswerText_MetaData), NewProp_AnswerText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnswerText,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FQuizAnswerData Property Definitions ********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
	nullptr,
	&NewStructOps,
	"QuizAnswerData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FQuizAnswerData>(),
	alignof(FQuizAnswerData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FQuizAnswerData;
UScriptStruct* Z_Construct_UScriptStruct_FQuizAnswerData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FQuizAnswerData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FQuizAnswerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuizAnswerData, (UObject*)Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase::Outer), TEXT("QuizAnswerData"));
		}
		return Z_Registration_Info_UScriptStruct_FQuizAnswerData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FQuizAnswerData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FQuizAnswerData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FQuizAnswerData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FQuizAnswerData *****************************************************

// ********** Begin ScriptStruct FStepData *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FStepData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FStepData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStepData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepType_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepTitle_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// =========================================================================\n// STANDARD STEP PROPERTIES (Only visible if Standard Instructions is chosen)\n// =========================================================================\n" },
#endif
		{ "EditCondition", "StepType == EMasterStepType::Standard" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "STANDARD STEP PROPERTIES (Only visible if Standard Instructions is chosen)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubSteps_MetaData[] = {
		{ "Category", "Data" },
		{ "EditCondition", "StepType == EMasterStepType::Standard" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuizTitle_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// =========================================================================\n// QUIZ STEP PROPERTIES (Only visible if Multiple Choice Quiz is chosen)\n// =========================================================================\n" },
#endif
		{ "DisplayName", "Quiz Question" },
		{ "EditCondition", "StepType == EMasterStepType::Quiz" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "QUIZ STEP PROPERTIES (Only visible if Multiple Choice Quiz is chosen)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CorrectAnswerIndex_MetaData[] = {
		{ "Category", "Data" },
		{ "DisplayName", "Correct Answer Index" },
		{ "EditCondition", "StepType == EMasterStepType::Quiz" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuizAnswers_MetaData[] = {
		{ "Category", "Data" },
		{ "DisplayName", "Answers List" },
		{ "EditCondition", "StepType == EMasterStepType::Quiz" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStepData constinit property declarations *************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_StepType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StepType;
	static const UECodeGen_Private::FTextPropertyParams NewProp_StepTitle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubSteps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubSteps;
	static const UECodeGen_Private::FTextPropertyParams NewProp_QuizTitle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CorrectAnswerIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuizAnswers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuizAnswers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStepData constinit property declarations ***************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStepData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FStepData Property Definitions ************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_StepType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_StepType = { "StepType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FStepData, StepType), Z_Construct_UEnum_Azureal_CSM_EMasterStepType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepType_MetaData), NewProp_StepType_MetaData) }; // 7ae73e00fe5f8819ddddff4378d344f3c5ebfd73
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_StepTitle = { "StepTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FStepData, StepTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepTitle_MetaData), NewProp_StepTitle_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SubSteps_Inner = { "SubSteps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSubStepData, METADATA_PARAMS(0, nullptr) }; // 61b734200195a39e2462f547c8c6a2c1b4d1e057
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SubSteps = { "SubSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FStepData, SubSteps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubSteps_MetaData), NewProp_SubSteps_MetaData) }; // 61b734200195a39e2462f547c8c6a2c1b4d1e057
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_QuizTitle = { "QuizTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FStepData, QuizTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuizTitle_MetaData), NewProp_QuizTitle_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CorrectAnswerIndex = { "CorrectAnswerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStepData, CorrectAnswerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CorrectAnswerIndex_MetaData), NewProp_CorrectAnswerIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_QuizAnswers_Inner = { "QuizAnswers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuizAnswerData, METADATA_PARAMS(0, nullptr) }; // ccfe68b64743974a7a610d96bd1309e78dd89470
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_QuizAnswers = { "QuizAnswers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FStepData, QuizAnswers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuizAnswers_MetaData), NewProp_QuizAnswers_MetaData) }; // ccfe68b64743974a7a610d96bd1309e78dd89470
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StepType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StepType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StepTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SubSteps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SubSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_QuizTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CorrectAnswerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_QuizAnswers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_QuizAnswers,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FStepData Property Definitions **************************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
	nullptr,
	&NewStructOps,
	"StepData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FStepData>(),
	alignof(FStepData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStepData;
UScriptStruct* Z_Construct_UScriptStruct_FStepData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FStepData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FStepData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStepData, (UObject*)Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase::Outer), TEXT("StepData"));
		}
		return Z_Registration_Info_UScriptStruct_FStepData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FStepData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStepData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStepData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FStepData ***********************************************************

// ********** Begin ScriptStruct FRuntimeStep ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRuntimeStep_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRuntimeStep>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRuntimeStep); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The clean data struct used at runtime (Kept unmodified to ensure zero Blueprint breaking changes)\n" },
#endif
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The clean data struct used at runtime (Kept unmodified to ensure zero Blueprint breaking changes)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepType_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayNumber_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepTitle_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CorrectAnswerIndex_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSubSteps_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/TrainingTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRuntimeStep constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_StepType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StepType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DisplayNumber;
	static const UECodeGen_Private::FTextPropertyParams NewProp_StepTitle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CorrectAnswerIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveSubSteps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveSubSteps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRuntimeStep constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeStep>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRuntimeStep Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_StepType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_StepType = { "StepType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeStep, StepType), Z_Construct_UEnum_Azureal_CSM_EMasterStepType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepType_MetaData), NewProp_StepType_MetaData) }; // 7ae73e00fe5f8819ddddff4378d344f3c5ebfd73
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_DisplayNumber = { "DisplayNumber", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeStep, DisplayNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayNumber_MetaData), NewProp_DisplayNumber_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_StepTitle = { "StepTitle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeStep, StepTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepTitle_MetaData), NewProp_StepTitle_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CorrectAnswerIndex = { "CorrectAnswerIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeStep, CorrectAnswerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CorrectAnswerIndex_MetaData), NewProp_CorrectAnswerIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ActiveSubSteps_Inner = { "ActiveSubSteps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSubStepData, METADATA_PARAMS(0, nullptr) }; // 61b734200195a39e2462f547c8c6a2c1b4d1e057
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ActiveSubSteps = { "ActiveSubSteps", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeStep, ActiveSubSteps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveSubSteps_MetaData), NewProp_ActiveSubSteps_MetaData) }; // 61b734200195a39e2462f547c8c6a2c1b4d1e057
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StepType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StepType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DisplayNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StepTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CorrectAnswerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveSubSteps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveSubSteps,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRuntimeStep Property Definitions ***********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
	nullptr,
	&NewStructOps,
	"RuntimeStep",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRuntimeStep>(),
	alignof(FRuntimeStep),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRuntimeStep;
UScriptStruct* Z_Construct_UScriptStruct_FRuntimeStep(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRuntimeStep.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRuntimeStep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeStep, (UObject*)Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase::Outer), TEXT("RuntimeStep"));
		}
		return Z_Registration_Info_UScriptStruct_FRuntimeStep.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRuntimeStep.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRuntimeStep.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRuntimeStep.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRuntimeStep ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingTypes_h__Script_Azureal_CSM_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_Azureal_CSM_ESubStepState, TEXT("ESubStepState"), &ZRIE_ESubStepState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1901598582U) },
		{ Z_Construct_UEnum_Azureal_CSM_EStepType, TEXT("EStepType"), &ZRIE_EStepType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4003940659U) },
		{ Z_Construct_UEnum_Azureal_CSM_EMasterStepType, TEXT("EMasterStepType"), &ZRIE_EMasterStepType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2061975040U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FSubStepData, Z_Construct_UScriptStruct_FSubStepData_Statics::NewStructOps, TEXT("SubStepData"),&Z_Registration_Info_UScriptStruct_FSubStepData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubStepData), 1639396384U) },
		{ Z_Construct_UScriptStruct_FQuizAnswerData, Z_Construct_UScriptStruct_FQuizAnswerData_Statics::NewStructOps, TEXT("QuizAnswerData"),&Z_Registration_Info_UScriptStruct_FQuizAnswerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuizAnswerData), 3439225014U) },
		{ Z_Construct_UScriptStruct_FStepData, Z_Construct_UScriptStruct_FStepData_Statics::NewStructOps, TEXT("StepData"),&Z_Registration_Info_UScriptStruct_FStepData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStepData), 438780328U) },
		{ Z_Construct_UScriptStruct_FRuntimeStep, Z_Construct_UScriptStruct_FRuntimeStep_Statics::NewStructOps, TEXT("RuntimeStep"),&Z_Registration_Info_UScriptStruct_FRuntimeStep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeStep), 3672820628U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingTypes_h__Script_Azureal_CSM_986a537a748d8840ed7d502af43bec8b4854501d{
	TEXT("/Script/Azureal_CSM"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
