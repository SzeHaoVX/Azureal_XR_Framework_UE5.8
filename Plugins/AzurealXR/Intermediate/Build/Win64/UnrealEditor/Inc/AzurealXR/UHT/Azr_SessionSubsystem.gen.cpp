// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_SessionSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_SessionSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_SessionSubsystem(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_SessionType(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnSessionError__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnSessionResponse__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnUpdateResponse__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_SessionSubsystem(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EAzr_SessionType **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AzurealXR_EAzr_SessionType_Statics
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_SessionType>()
{
	return Z_Construct_UEnum_AzurealXR_EAzr_SessionType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Course.Name", "EAzr_SessionType::Course" },
		{ "Event.Name", "EAzr_SessionType::Event" },
		{ "ModuleRelativePath", "Public/Azr_SessionSubsystem.h" },
		{ "Training.Name", "EAzr_SessionType::Training" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAzr_SessionType::Training", (int64)EAzr_SessionType::Training },
		{ "EAzr_SessionType::Event", (int64)EAzr_SessionType::Event },
		{ "EAzr_SessionType::Course", (int64)EAzr_SessionType::Course },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_SessionType",
	"EAzr_SessionType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAzr_SessionType;
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_SessionType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAzr_SessionType.OuterSingleton)
		{
			ZRIE_EAzr_SessionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_SessionType, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("EAzr_SessionType"));
		}
		return ZRIE_EAzr_SessionType.OuterSingleton;
	}
	if (!ZRIE_EAzr_SessionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAzr_SessionType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAzr_SessionType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAzr_SessionType ************************************************************

// ********** Begin Delegate FOnSessionResponse ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnSessionResponse__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_AzurealXR_eventOnSessionResponse_Parms
	{
		FString SessionId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_SessionSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSessionResponse constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSessionResponse constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSessionResponse Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnSessionResponse_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SessionId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnSessionResponse Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnSessionResponse__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_AzurealXR_eventOnSessionResponse_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_AzurealXR_eventOnSessionResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnSessionResponse__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnSessionResponse ******************************************************

// ********** Begin Delegate FOnUpdateResponse *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnUpdateResponse__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_AzurealXR_eventOnUpdateResponse_Parms
	{
		float ScorePercentage;
		FString SessionStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_SessionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUpdateResponse constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScorePercentage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUpdateResponse constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUpdateResponse Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ScorePercentage = { "ScorePercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnUpdateResponse_Parms, ScorePercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SessionStatus = { "SessionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnUpdateResponse_Parms, SessionStatus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionStatus_MetaData), NewProp_SessionStatus_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScorePercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SessionStatus,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnUpdateResponse Property Definitions **********************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnUpdateResponse__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_AzurealXR_eventOnUpdateResponse_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_AzurealXR_eventOnUpdateResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnUpdateResponse__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnUpdateResponse *******************************************************

// ********** Begin Delegate FOnSessionError *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnSessionError__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_AzurealXR_eventOnSessionError_Parms
	{
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_SessionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSessionError constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSessionError constinit property declarations *************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSessionError Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnSessionError_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnSessionError Property Definitions ************************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnSessionError__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_AzurealXR_eventOnSessionError_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_AzurealXR_eventOnSessionError_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnSessionError__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnSessionError *********************************************************

// ********** Begin Class UAzr_SessionSubsystem Function GetCurrentSessionId ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_SessionSubsystem_GetCurrentSessionId_Statics
struct UHT_STATICS
{
	struct Azr_SessionSubsystem_eventGetCurrentSessionId_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Session" },
		{ "ModuleRelativePath", "Public/Azr_SessionSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentSessionId constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentSessionId constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentSessionId Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_SessionSubsystem_eventGetCurrentSessionId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurrentSessionId Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_SessionSubsystem, nullptr, "GetCurrentSessionId", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_SessionSubsystem_eventGetCurrentSessionId_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_SessionSubsystem_eventGetCurrentSessionId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_SessionSubsystem_GetCurrentSessionId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_SessionSubsystem::execGetCurrentSessionId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCurrentSessionId();
	P_NATIVE_END;
}
// ********** End Class UAzr_SessionSubsystem Function GetCurrentSessionId *************************

// ********** Begin Class UAzr_SessionSubsystem Function GetSessionLanguage ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_SessionSubsystem_GetSessionLanguage_Statics
struct UHT_STATICS
{
	struct Azr_SessionSubsystem_eventGetSessionLanguage_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Session" },
		{ "ModuleRelativePath", "Public/Azr_SessionSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSessionLanguage constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSessionLanguage constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSessionLanguage Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_SessionSubsystem_eventGetSessionLanguage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSessionLanguage Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_SessionSubsystem, nullptr, "GetSessionLanguage", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_SessionSubsystem_eventGetSessionLanguage_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_SessionSubsystem_eventGetSessionLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_SessionSubsystem_GetSessionLanguage(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_SessionSubsystem::execGetSessionLanguage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSessionLanguage();
	P_NATIVE_END;
}
// ********** End Class UAzr_SessionSubsystem Function GetSessionLanguage **************************

// ********** Begin Class UAzr_SessionSubsystem Function IsExplainedMode ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_SessionSubsystem_IsExplainedMode_Statics
struct UHT_STATICS
{
	struct Azr_SessionSubsystem_eventIsExplainedMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- BLUEPRINT API ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_SessionSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- BLUEPRINT API ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsExplainedMode constinit property declarations ***********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Azr_SessionSubsystem_eventIsExplainedMode_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsExplainedMode constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsExplainedMode Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_SessionSubsystem_eventIsExplainedMode_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsExplainedMode Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_SessionSubsystem, nullptr, "IsExplainedMode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_SessionSubsystem_eventIsExplainedMode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_SessionSubsystem_eventIsExplainedMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_SessionSubsystem_IsExplainedMode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_SessionSubsystem::execIsExplainedMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsExplainedMode();
	P_NATIVE_END;
}
// ********** End Class UAzr_SessionSubsystem Function IsExplainedMode *****************************

// ********** Begin Class UAzr_SessionSubsystem Function IsOnlineMode ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_SessionSubsystem_IsOnlineMode_Statics
struct UHT_STATICS
{
	struct Azr_SessionSubsystem_eventIsOnlineMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Session" },
		{ "ModuleRelativePath", "Public/Azr_SessionSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsOnlineMode constinit property declarations **************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Azr_SessionSubsystem_eventIsOnlineMode_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsOnlineMode constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsOnlineMode Property Definitions *************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_SessionSubsystem_eventIsOnlineMode_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsOnlineMode Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_SessionSubsystem, nullptr, "IsOnlineMode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_SessionSubsystem_eventIsOnlineMode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_SessionSubsystem_eventIsOnlineMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_SessionSubsystem_IsOnlineMode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_SessionSubsystem::execIsOnlineMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOnlineMode();
	P_NATIVE_END;
}
// ********** End Class UAzr_SessionSubsystem Function IsOnlineMode ********************************

// ********** Begin Class UAzr_SessionSubsystem ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_SessionSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Azr_SessionSubsystem.h" },
		{ "ModuleRelativePath", "Public/Azr_SessionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- BROADCASTS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_SessionSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- BROADCASTS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_SessionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_SessionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_SessionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_SessionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_SessionSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_SessionSubsystem constinit property declarations ********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartFailure;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateFailure;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_SessionSubsystem constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCurrentSessionId"), .Pointer = &UAzr_SessionSubsystem::execGetCurrentSessionId },
		{ .NameUTF8 = UTF8TEXT("GetSessionLanguage"), .Pointer = &UAzr_SessionSubsystem::execGetSessionLanguage },
		{ .NameUTF8 = UTF8TEXT("IsExplainedMode"), .Pointer = &UAzr_SessionSubsystem::execIsExplainedMode },
		{ .NameUTF8 = UTF8TEXT("IsOnlineMode"), .Pointer = &UAzr_SessionSubsystem::execIsOnlineMode },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_SessionSubsystem_GetCurrentSessionId, "GetCurrentSessionId" }, // 7abdf69b561af1a7a9e9c7c872690b8237c7d0b3
		{ &Z_Construct_UFunction_UAzr_SessionSubsystem_GetSessionLanguage, "GetSessionLanguage" }, // f89eb83dc4ae79e4977c01f6ca025d8ef3e56723
		{ &Z_Construct_UFunction_UAzr_SessionSubsystem_IsExplainedMode, "IsExplainedMode" }, // c320a880ddf191f9bff8d76d635c16de02a63b2a
		{ &Z_Construct_UFunction_UAzr_SessionSubsystem_IsOnlineMode, "IsOnlineMode" }, // 092399b1d3361a81fe5dc39ce5bdd471647682a0
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_SessionSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_SessionSubsystem Property Definitions *******************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnStartSuccess = { "OnStartSuccess", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_SessionSubsystem, OnStartSuccess), Z_Construct_UDelegateFunction_AzurealXR_OnSessionResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartSuccess_MetaData), NewProp_OnStartSuccess_MetaData) }; // c7a5716ae3ef86b227990637dfb2b5991561a46b
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnStartFailure = { "OnStartFailure", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_SessionSubsystem, OnStartFailure), Z_Construct_UDelegateFunction_AzurealXR_OnSessionError__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartFailure_MetaData), NewProp_OnStartFailure_MetaData) }; // 1e9ecbb2c072fee74e361d6f60b91ef68627eb7d
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnUpdateSuccess = { "OnUpdateSuccess", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_SessionSubsystem, OnUpdateSuccess), Z_Construct_UDelegateFunction_AzurealXR_OnUpdateResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUpdateSuccess_MetaData), NewProp_OnUpdateSuccess_MetaData) }; // a312da0e7d1d664cc354177d26ab0e056c8203d0
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnUpdateFailure = { "OnUpdateFailure", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_SessionSubsystem, OnUpdateFailure), Z_Construct_UDelegateFunction_AzurealXR_OnSessionError__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUpdateFailure_MetaData), NewProp_OnUpdateFailure_MetaData) }; // 1e9ecbb2c072fee74e361d6f60b91ef68627eb7d
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnEndSuccess = { "OnEndSuccess", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_SessionSubsystem, OnEndSuccess), Z_Construct_UDelegateFunction_AzurealXR_OnUpdateResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndSuccess_MetaData), NewProp_OnEndSuccess_MetaData) }; // a312da0e7d1d664cc354177d26ab0e056c8203d0
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnEndFailure = { "OnEndFailure", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_SessionSubsystem, OnEndFailure), Z_Construct_UDelegateFunction_AzurealXR_OnSessionError__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndFailure_MetaData), NewProp_OnEndFailure_MetaData) }; // 1e9ecbb2c072fee74e361d6f60b91ef68627eb7d
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnStartSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnStartFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnUpdateSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnUpdateFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnEndSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnEndFailure,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_SessionSubsystem Property Definitions *********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UGameInstanceSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_SessionSubsystem,
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
static void UAzr_SessionSubsystem_StaticRegisterNativesUAzr_SessionSubsystem()
{
	UClass* Class = UAzr_SessionSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_SessionSubsystem;
UClass* Z_Construct_UClass_UAzr_SessionSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_SessionSubsystem;
		if (!Z_Registration_Info_UClass_UAzr_SessionSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_SessionSubsystem"),
				Z_Registration_Info_UClass_UAzr_SessionSubsystem.InnerSingleton,
				UAzr_SessionSubsystem_StaticRegisterNativesUAzr_SessionSubsystem,
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
		return Z_Registration_Info_UClass_UAzr_SessionSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_SessionSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_SessionSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_SessionSubsystem.OuterSingleton;
}
#undef UHT_STATICS
UAzr_SessionSubsystem::UAzr_SessionSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_SessionSubsystem);
UAzr_SessionSubsystem::~UAzr_SessionSubsystem() {}
// ********** End Class UAzr_SessionSubsystem ******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_SessionSubsystem_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_AzurealXR_EAzr_SessionType, TEXT("EAzr_SessionType"), &ZRIE_EAzr_SessionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4278394509U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_SessionSubsystem, TEXT("UAzr_SessionSubsystem"), &Z_Registration_Info_UClass_UAzr_SessionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_SessionSubsystem), 4266988423U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_SessionSubsystem_h__Script_AzurealXR_892538c5d8bfadf894df7dbd0b139ac4a600f467{
	TEXT("/Script/AzurealXR"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
