// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Latch.h"
#include "Azr_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Latch() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_APawn(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Latch(ETypeConstructPhase);
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_TetherConfig(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_AllowedHand(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_Axis(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_LatchTrigger(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_LatchType(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnLatchEvent__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Latch(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_LatchZone(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOnLatchEvent *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnLatchEvent__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EVENTS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EVENTS ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLatchEvent constinit property declarations *************************
// ********** End Delegate FOnLatchEvent constinit property declarations ***************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnLatchEvent__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnLatchEvent__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnLatchEvent ***********************************************************

// ********** Begin Delegate FOnLatchUpdateEvent ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_AzurealXR_eventOnLatchUpdateEvent_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLatchUpdateEvent constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLatchUpdateEvent constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLatchUpdateEvent Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnLatchUpdateEvent_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnLatchUpdateEvent Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnLatchUpdateEvent__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_AzurealXR_eventOnLatchUpdateEvent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_AzurealXR_eventOnLatchUpdateEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnLatchUpdateEvent *****************************************************

// ********** Begin Enum EAzr_LatchType ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AzurealXR_EAzr_LatchType_Statics
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_LatchType>()
{
	return Z_Construct_UEnum_AzurealXR_EAzr_LatchType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Angular.DisplayName", "Angular (Lever / Door)" },
		{ "Angular.Name", "EAzr_LatchType::Angular" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- ENUMS ---\n" },
#endif
		{ "Linear.DisplayName", "Linear (Slider / Drawer / Bolt)" },
		{ "Linear.Name", "EAzr_LatchType::Linear" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
		{ "Rotation.DisplayName", "Rotation (Valve / Doorknob)" },
		{ "Rotation.Name", "EAzr_LatchType::Rotation" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- ENUMS ---" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAzr_LatchType::Angular", (int64)EAzr_LatchType::Angular },
		{ "EAzr_LatchType::Linear", (int64)EAzr_LatchType::Linear },
		{ "EAzr_LatchType::Rotation", (int64)EAzr_LatchType::Rotation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_LatchType",
	"EAzr_LatchType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAzr_LatchType;
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_LatchType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAzr_LatchType.OuterSingleton)
		{
			ZRIE_EAzr_LatchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_LatchType, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("EAzr_LatchType"));
		}
		return ZRIE_EAzr_LatchType.OuterSingleton;
	}
	if (!ZRIE_EAzr_LatchType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAzr_LatchType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAzr_LatchType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAzr_LatchType **************************************************************

// ********** Begin Enum EAzr_Axis *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AzurealXR_EAzr_Axis_Statics
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_Axis>()
{
	return Z_Construct_UEnum_AzurealXR_EAzr_Axis(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
		{ "X_Axis.DisplayName", "X Axis (Red)" },
		{ "X_Axis.Name", "EAzr_Axis::X_Axis" },
		{ "Y_Axis.DisplayName", "Y Axis (Green)" },
		{ "Y_Axis.Name", "EAzr_Axis::Y_Axis" },
		{ "Z_Axis.DisplayName", "Z Axis (Blue)" },
		{ "Z_Axis.Name", "EAzr_Axis::Z_Axis" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAzr_Axis::X_Axis", (int64)EAzr_Axis::X_Axis },
		{ "EAzr_Axis::Y_Axis", (int64)EAzr_Axis::Y_Axis },
		{ "EAzr_Axis::Z_Axis", (int64)EAzr_Axis::Z_Axis },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_Axis",
	"EAzr_Axis",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAzr_Axis;
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_Axis(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAzr_Axis.OuterSingleton)
		{
			ZRIE_EAzr_Axis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_Axis, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("EAzr_Axis"));
		}
		return ZRIE_EAzr_Axis.OuterSingleton;
	}
	if (!ZRIE_EAzr_Axis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAzr_Axis.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAzr_Axis.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAzr_Axis *******************************************************************

// ********** Begin Enum EAzr_LatchTrigger *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AzurealXR_EAzr_LatchTrigger_Statics
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_LatchTrigger>()
{
	return Z_Construct_UEnum_AzurealXR_EAzr_LatchTrigger(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "BothHands.DisplayName", "Both Hands" },
		{ "BothHands.Name", "EAzr_LatchTrigger::BothHands" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EAzr_LatchTrigger::Disabled" },
		{ "LeftHand.DisplayName", "Left Hand" },
		{ "LeftHand.Name", "EAzr_LatchTrigger::LeftHand" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
		{ "RightHand.DisplayName", "Right Hand" },
		{ "RightHand.Name", "EAzr_LatchTrigger::RightHand" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAzr_LatchTrigger::Disabled", (int64)EAzr_LatchTrigger::Disabled },
		{ "EAzr_LatchTrigger::LeftHand", (int64)EAzr_LatchTrigger::LeftHand },
		{ "EAzr_LatchTrigger::RightHand", (int64)EAzr_LatchTrigger::RightHand },
		{ "EAzr_LatchTrigger::BothHands", (int64)EAzr_LatchTrigger::BothHands },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_LatchTrigger",
	"EAzr_LatchTrigger",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAzr_LatchTrigger;
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_LatchTrigger(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAzr_LatchTrigger.OuterSingleton)
		{
			ZRIE_EAzr_LatchTrigger.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_LatchTrigger, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("EAzr_LatchTrigger"));
		}
		return ZRIE_EAzr_LatchTrigger.OuterSingleton;
	}
	if (!ZRIE_EAzr_LatchTrigger.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAzr_LatchTrigger.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAzr_LatchTrigger.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAzr_LatchTrigger ***********************************************************

// ********** Begin Enum EAzr_AllowedHand **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AzurealXR_EAzr_AllowedHand_Statics
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_AllowedHand>()
{
	return Z_Construct_UEnum_AzurealXR_EAzr_AllowedHand(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "BothHands.DisplayName", "Both Hands" },
		{ "BothHands.Name", "EAzr_AllowedHand::BothHands" },
		{ "LeftHand.DisplayName", "Left Hand Only" },
		{ "LeftHand.Name", "EAzr_AllowedHand::LeftHand" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
		{ "RightHand.DisplayName", "Right Hand Only" },
		{ "RightHand.Name", "EAzr_AllowedHand::RightHand" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAzr_AllowedHand::BothHands", (int64)EAzr_AllowedHand::BothHands },
		{ "EAzr_AllowedHand::LeftHand", (int64)EAzr_AllowedHand::LeftHand },
		{ "EAzr_AllowedHand::RightHand", (int64)EAzr_AllowedHand::RightHand },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_AllowedHand",
	"EAzr_AllowedHand",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAzr_AllowedHand;
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_AllowedHand(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAzr_AllowedHand.OuterSingleton)
		{
			ZRIE_EAzr_AllowedHand.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_AllowedHand, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("EAzr_AllowedHand"));
		}
		return ZRIE_EAzr_AllowedHand.OuterSingleton;
	}
	if (!ZRIE_EAzr_AllowedHand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAzr_AllowedHand.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAzr_AllowedHand.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAzr_AllowedHand ************************************************************

// ********** Begin Class UAzr_Latch Function DisableLatch *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Latch_DisableLatch_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableLatch constinit property declarations **************************
// ********** End Function DisableLatch constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Latch, nullptr, "DisableLatch", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Latch_DisableLatch(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Latch::execDisableLatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableLatch();
	P_NATIVE_END;
}
// ********** End Class UAzr_Latch Function DisableLatch *******************************************

// ********** Begin Class UAzr_Latch Function EnableLatch ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Latch_EnableLatch_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- API ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- API ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EnableLatch constinit property declarations ***************************
// ********** End Function EnableLatch constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Latch, nullptr, "EnableLatch", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Latch_EnableLatch(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Latch::execEnableLatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableLatch();
	P_NATIVE_END;
}
// ********** End Class UAzr_Latch Function EnableLatch ********************************************

// ********** Begin Class UAzr_Latch Function ForceLatchRelease ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Latch_ForceLatchRelease_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceLatchRelease constinit property declarations *********************
// ********** End Function ForceLatchRelease constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Latch, nullptr, "ForceLatchRelease", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Latch_ForceLatchRelease(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Latch::execForceLatchRelease)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceLatchRelease();
	P_NATIVE_END;
}
// ********** End Class UAzr_Latch Function ForceLatchRelease **************************************

// ********** Begin Class UAzr_Latch Function HandleTriggerInput ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Latch_HandleTriggerInput_Statics
struct UHT_STATICS
{
	struct Azr_Latch_eventHandleTriggerInput_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleTriggerInput constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleTriggerInput constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleTriggerInput Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Latch_eventHandleTriggerInput_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleTriggerInput Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Latch, nullptr, "HandleTriggerInput", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Latch_eventHandleTriggerInput_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Latch_eventHandleTriggerInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Latch_HandleTriggerInput(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Latch::execHandleTriggerInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTriggerInput(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UAzr_Latch Function HandleTriggerInput *************************************

// ********** Begin Class UAzr_Latch Function SetLatchConfig ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Latch_SetLatchConfig_Statics
struct UHT_STATICS
{
	struct Azr_Latch_eventSetLatchConfig_Parms
	{
		EAzr_LatchType NewType;
		EAzr_Axis NewAxis;
		float NewMin;
		float NewMax;
		float NewStartValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use this to safely change math rules at runtime without breaking the handle's pivot point.\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this to safely change math rules at runtime without breaking the handle's pivot point." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetLatchConfig constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewStartValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLatchConfig constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLatchConfig Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewType = { "NewType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Latch_eventSetLatchConfig_Parms, NewType), Z_Construct_UEnum_AzurealXR_EAzr_LatchType, METADATA_PARAMS(0, nullptr) }; // 85b5a044c5949fcaf03365abbc2195d83bbe774c
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NewAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewAxis = { "NewAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Latch_eventSetLatchConfig_Parms, NewAxis), Z_Construct_UEnum_AzurealXR_EAzr_Axis, METADATA_PARAMS(0, nullptr) }; // a22e2ed84b9cbf78a4f8ca56cd4c2dc1b140c453
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewMin = { "NewMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Latch_eventSetLatchConfig_Parms, NewMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewMax = { "NewMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Latch_eventSetLatchConfig_Parms, NewMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewStartValue = { "NewStartValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Latch_eventSetLatchConfig_Parms, NewStartValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewStartValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetLatchConfig Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Latch, nullptr, "SetLatchConfig", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Latch_eventSetLatchConfig_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Latch_eventSetLatchConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Latch_SetLatchConfig(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Latch::execSetLatchConfig)
{
	P_GET_ENUM(EAzr_LatchType,Z_Param_NewType);
	P_GET_ENUM(EAzr_Axis,Z_Param_NewAxis);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMax);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewStartValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLatchConfig(EAzr_LatchType(Z_Param_NewType),EAzr_Axis(Z_Param_NewAxis),Z_Param_NewMin,Z_Param_NewMax,Z_Param_NewStartValue);
	P_NATIVE_END;
}
// ********** End Class UAzr_Latch Function SetLatchConfig *****************************************

// ********** Begin Class UAzr_Latch ***************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_Latch_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AzurealXR" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Azr_Latch.h" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractID_MetaData[] = {
		{ "Category", "Latch Configuration|Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- THE MODULAR ID ---\n// Matches the InteractID on the Azr_LatchZone and Azr_LatchSnap to establish a link.\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- THE MODULAR ID ---\nMatches the InteractID on the Azr_LatchZone and Azr_LatchSnap to establish a link." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedGrabHand_MetaData[] = {
		{ "Category", "Latch Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- CONFIGURATION ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- CONFIGURATION ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatchType_MetaData[] = {
		{ "Category", "Latch Configuration" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionAxis_MetaData[] = {
		{ "Category", "Latch Configuration" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartValue_MetaData[] = {
		{ "Category", "Latch Configuration" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitMin_MetaData[] = {
		{ "Category", "Latch Configuration" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitMax_MetaData[] = {
		{ "Category", "Latch Configuration" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatchTrigger_MetaData[] = {
		{ "Category", "Latch Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- TRIGGER SETTINGS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- TRIGGER SETTINGS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerThreshold_MetaData[] = {
		{ "Category", "Latch Configuration" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRelease_MetaData[] = {
		{ "Category", "Latch Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Auto Release Toggle\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto Release Toggle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAutoReturn_MetaData[] = {
		{ "Category", "Latch Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- AUTO RETURN ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- AUTO RETURN ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "Category", "Latch Configuration" },
		{ "EditCondition", "bUseAutoReturn" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnSpeed_MetaData[] = {
		{ "Category", "Latch Configuration" },
		{ "EditCondition", "bUseAutoReturn" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[] = {
		{ "Category", "Latch Configuration" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleMeshName_MetaData[] = {
		{ "Category", "Latch Configuration|Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- SETUP ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- SETUP ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLatchSnapHand_MetaData[] = {
		{ "Category", "Latch Configuration|Setup" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLeverArmLength_MetaData[] = {
		{ "Category", "Latch Configuration|Setup" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBreakDistance_MetaData[] = {
		{ "Category", "Latch Configuration|Setup" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandFlyDuration_MetaData[] = {
		{ "Category", "Latch Configuration|Setup" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMode_MetaData[] = {
		{ "Category", "Latch Configuration|Setup" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherSettings_MetaData[] = {
		{ "Category", "Latch Configuration|Setup" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatchDescription_MetaData[] = {
		{ "Category", "Latch Configuration|Setup" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightSpeed_MetaData[] = {
		{ "Category", "Latch Configuration|Setup" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHapticOnStep_MetaData[] = {
		{ "Category", "Latch Configuration|Haptics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- HAPTICS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- HAPTICS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[] = {
		{ "Category", "Latch Configuration|Haptics" },
		{ "EditCondition", "bHapticOnStep" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HapticEffect_MetaData[] = {
		{ "Category", "Latch Configuration|Haptics" },
		{ "EditCondition", "bHapticOnStep" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HapticIntensity_MetaData[] = {
		{ "Category", "Latch Configuration|Haptics" },
		{ "EditCondition", "bHapticOnStep" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundHighlightStart_MetaData[] = {
		{ "Category", "Latch Configuration|Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- AUDIO ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- AUDIO ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundHighlightEnd_MetaData[] = {
		{ "Category", "Latch Configuration|Audio" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundOnLatch_MetaData[] = {
		{ "Category", "Latch Configuration|Audio" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundOnRelease_MetaData[] = {
		{ "Category", "Latch Configuration|Audio" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[] = {
		{ "Category", "Azureal|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EVENTS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EVENTS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRawValueChanged_MetaData[] = {
		{ "Category", "Azureal|Events" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLatched_MetaData[] = {
		{ "Category", "Azureal|Events" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLatchReleased_MetaData[] = {
		{ "Category", "Azureal|Events" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartAnchor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- INTERNAL COMPONENTS ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- INTERNAL COMPONENTS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndAnchor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherCable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMPC_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- HIGHLIGHT ENGINE ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- HIGHLIGHT ENGINE ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveHands_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGhostHands_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetHandleMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoDetectedMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedLatchZone_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPlayerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomLeftSnap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomRightSnap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_Latch constinit property declarations *******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InteractID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedGrabHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedGrabHand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LatchType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LatchType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LimitMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LimitMax;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LatchTrigger_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LatchTrigger;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerThreshold;
	static void NewProp_bAutoRelease_SetBit(void* Obj)
	{
		((UAzr_Latch*)Obj)->bAutoRelease = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRelease;
	static void NewProp_bUseAutoReturn_SetBit(void* Obj)
	{
		((UAzr_Latch*)Obj)->bUseAutoReturn = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAutoReturn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HandleMeshName;
	static void NewProp_bUseLatchSnapHand_SetBit(void* Obj)
	{
		((UAzr_Latch*)Obj)->bUseLatchSnapHand = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLatchSnapHand;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLeverArmLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBreakDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HandFlyDuration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HighlightMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HighlightMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TetherSettings;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LatchDescription;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighlightSpeed;
	static void NewProp_bHapticOnStep_SetBit(void* Obj)
	{
		((UAzr_Latch*)Obj)->bHapticOnStep = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHapticOnStep;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HapticEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HapticIntensity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundHighlightStart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundHighlightEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundOnLatch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundOnRelease;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRawValueChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLatched;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLatchReleased;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartAnchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndAnchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TetherCable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightMPC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveHands_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveHands;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveGhostHands_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveGhostHands;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetHandleMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AutoDetectedMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTargetWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkedLatchZone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedPlayerPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomLeftSnap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomRightSnap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_Latch constinit property declarations *********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DisableLatch"), .Pointer = &UAzr_Latch::execDisableLatch },
		{ .NameUTF8 = UTF8TEXT("EnableLatch"), .Pointer = &UAzr_Latch::execEnableLatch },
		{ .NameUTF8 = UTF8TEXT("ForceLatchRelease"), .Pointer = &UAzr_Latch::execForceLatchRelease },
		{ .NameUTF8 = UTF8TEXT("HandleTriggerInput"), .Pointer = &UAzr_Latch::execHandleTriggerInput },
		{ .NameUTF8 = UTF8TEXT("SetLatchConfig"), .Pointer = &UAzr_Latch::execSetLatchConfig },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_Latch_DisableLatch, "DisableLatch" }, // c1c05873f61c859674ff56fefa69cf030f2a4431
		{ &Z_Construct_UFunction_UAzr_Latch_EnableLatch, "EnableLatch" }, // bb1c1ff154cff78659b131f2d656e588934721f9
		{ &Z_Construct_UFunction_UAzr_Latch_ForceLatchRelease, "ForceLatchRelease" }, // 3b9f28d1e116f2c262af8304633ee4d02164fb5c
		{ &Z_Construct_UFunction_UAzr_Latch_HandleTriggerInput, "HandleTriggerInput" }, // 3b55e564620d15583a02bb914df03c9a5bf59eba
		{ &Z_Construct_UFunction_UAzr_Latch_SetLatchConfig, "SetLatchConfig" }, // bd5db620526a7ef43573c2eafe948c60d60c5b4c
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_Latch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_Latch Property Definitions ******************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InteractID = { "InteractID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, InteractID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractID_MetaData), NewProp_InteractID_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_AllowedGrabHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_AllowedGrabHand = { "AllowedGrabHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, AllowedGrabHand), Z_Construct_UEnum_AzurealXR_EAzr_AllowedHand, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedGrabHand_MetaData), NewProp_AllowedGrabHand_MetaData) }; // e2de50f149a3c5a8b6e65eb0c2e6bcb1d26f2fc8
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_LatchType = { "LatchType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, LatchType), Z_Construct_UEnum_AzurealXR_EAzr_LatchType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatchType_MetaData), NewProp_LatchType_MetaData) }; // 85b5a044c5949fcaf03365abbc2195d83bbe774c
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InteractionAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InteractionAxis = { "InteractionAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, InteractionAxis), Z_Construct_UEnum_AzurealXR_EAzr_Axis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionAxis_MetaData), NewProp_InteractionAxis_MetaData) }; // a22e2ed84b9cbf78a4f8ca56cd4c2dc1b140c453
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StartValue = { "StartValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, StartValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartValue_MetaData), NewProp_StartValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LimitMin = { "LimitMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, LimitMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitMin_MetaData), NewProp_LimitMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LimitMax = { "LimitMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, LimitMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitMax_MetaData), NewProp_LimitMax_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LatchTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_LatchTrigger = { "LatchTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, LatchTrigger), Z_Construct_UEnum_AzurealXR_EAzr_LatchTrigger, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatchTrigger_MetaData), NewProp_LatchTrigger_MetaData) }; // 6becbdd073cc0dbd27c4d0eb23bcd048a9ff7b03
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TriggerThreshold = { "TriggerThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, TriggerThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerThreshold_MetaData), NewProp_TriggerThreshold_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoRelease = { "bAutoRelease", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAzr_Latch), &UHT_STATICS::NewProp_bAutoRelease_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoRelease_MetaData), NewProp_bAutoRelease_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseAutoReturn = { "bUseAutoReturn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAzr_Latch), &UHT_STATICS::NewProp_bUseAutoReturn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAutoReturn_MetaData), NewProp_bUseAutoReturn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnSpeed = { "ReturnSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, ReturnSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnSpeed_MetaData), NewProp_ReturnSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, Damping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damping_MetaData), NewProp_Damping_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_HandleMeshName = { "HandleMeshName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, HandleMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleMeshName_MetaData), NewProp_HandleMeshName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseLatchSnapHand = { "bUseLatchSnapHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAzr_Latch), &UHT_STATICS::NewProp_bUseLatchSnapHand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLatchSnapHand_MetaData), NewProp_bUseLatchSnapHand_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinLeverArmLength = { "MinLeverArmLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, MinLeverArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLeverArmLength_MetaData), NewProp_MinLeverArmLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxBreakDistance = { "MaxBreakDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, MaxBreakDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBreakDistance_MetaData), NewProp_MaxBreakDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HandFlyDuration = { "HandFlyDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, HandFlyDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandFlyDuration_MetaData), NewProp_HandFlyDuration_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_HighlightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_HighlightMode = { "HighlightMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, HighlightMode), Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMode_MetaData), NewProp_HighlightMode_MetaData) }; // b89e1d1bf6c66a6d04c6838e8255ec9637161cd7
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TetherSettings = { "TetherSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, TetherSettings), Z_Construct_UScriptStruct_FAzr_TetherConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherSettings_MetaData), NewProp_TetherSettings_MetaData) }; // fb5a713d666a24a11bdd9b60341f31d15bb45b94
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_LatchDescription = { "LatchDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, LatchDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatchDescription_MetaData), NewProp_LatchDescription_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HighlightSpeed = { "HighlightSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, HighlightSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightSpeed_MetaData), NewProp_HighlightSpeed_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHapticOnStep = { "bHapticOnStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAzr_Latch), &UHT_STATICS::NewProp_bHapticOnStep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHapticOnStep_MetaData), NewProp_bHapticOnStep_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, StepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepSize_MetaData), NewProp_StepSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HapticEffect = { "HapticEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, HapticEffect), Z_Construct_UClass_UHapticFeedbackEffect_Base, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HapticEffect_MetaData), NewProp_HapticEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HapticIntensity = { "HapticIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, HapticIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HapticIntensity_MetaData), NewProp_HapticIntensity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundHighlightStart = { "SoundHighlightStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, SoundHighlightStart), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundHighlightStart_MetaData), NewProp_SoundHighlightStart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundHighlightEnd = { "SoundHighlightEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, SoundHighlightEnd), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundHighlightEnd_MetaData), NewProp_SoundHighlightEnd_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundOnLatch = { "SoundOnLatch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, SoundOnLatch), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundOnLatch_MetaData), NewProp_SoundOnLatch_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundOnRelease = { "SoundOnRelease", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, SoundOnRelease), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundOnRelease_MetaData), NewProp_SoundOnRelease_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, OnValueChanged), Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnValueChanged_MetaData), NewProp_OnValueChanged_MetaData) }; // a8cd5699f95a51df13a9aca8d4f042fbf14b5996
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRawValueChanged = { "OnRawValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, OnRawValueChanged), Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRawValueChanged_MetaData), NewProp_OnRawValueChanged_MetaData) }; // a8cd5699f95a51df13a9aca8d4f042fbf14b5996
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnLatched = { "OnLatched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, OnLatched), Z_Construct_UDelegateFunction_AzurealXR_OnLatchEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLatched_MetaData), NewProp_OnLatched_MetaData) }; // 4211acc75614065c15adbef112cf18744022721a
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnLatchReleased = { "OnLatchReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, OnLatchReleased), Z_Construct_UDelegateFunction_AzurealXR_OnLatchEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLatchReleased_MetaData), NewProp_OnLatchReleased_MetaData) }; // 4211acc75614065c15adbef112cf18744022721a
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StartAnchor = { "StartAnchor", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, StartAnchor), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAnchor_MetaData), NewProp_StartAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EndAnchor = { "EndAnchor", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, EndAnchor), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndAnchor_MetaData), NewProp_EndAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TetherCable = { "TetherCable", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, TetherCable), Z_Construct_UClass_UCableComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherCable_MetaData), NewProp_TetherCable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HighlightMPC = { "HighlightMPC", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, HighlightMPC), Z_Construct_UClass_UMaterialParameterCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMPC_MetaData), NewProp_HighlightMPC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveHands_Inner = { "ActiveHands", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ActiveHands = { "ActiveHands", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, ActiveHands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveHands_MetaData), NewProp_ActiveHands_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveGhostHands_Inner = { "ActiveGhostHands", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ActiveGhostHands = { "ActiveGhostHands", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, ActiveGhostHands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveGhostHands_MetaData), NewProp_ActiveGhostHands_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetHandleMesh = { "TargetHandleMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, TargetHandleMesh), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetHandleMesh_MetaData), NewProp_TargetHandleMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AutoDetectedMesh = { "AutoDetectedMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, AutoDetectedMesh), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoDetectedMesh_MetaData), NewProp_AutoDetectedMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurrentTargetWidget = { "CurrentTargetWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, CurrentTargetWidget), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTargetWidget_MetaData), NewProp_CurrentTargetWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LinkedLatchZone = { "LinkedLatchZone", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, LinkedLatchZone), Z_Construct_UClass_UAzr_LatchZone, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedLatchZone_MetaData), NewProp_LinkedLatchZone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CachedPlayerPawn = { "CachedPlayerPawn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, CachedPlayerPawn), Z_Construct_UClass_APawn, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPlayerPawn_MetaData), NewProp_CachedPlayerPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CustomLeftSnap = { "CustomLeftSnap", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, CustomLeftSnap), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomLeftSnap_MetaData), NewProp_CustomLeftSnap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CustomRightSnap = { "CustomRightSnap", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, CustomRightSnap), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomRightSnap_MetaData), NewProp_CustomRightSnap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AllowedGrabHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AllowedGrabHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LatchType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LatchType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractionAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractionAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LimitMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LimitMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LatchTrigger_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LatchTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TriggerThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoRelease,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseAutoReturn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Damping,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HandleMeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseLatchSnapHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinLeverArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxBreakDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HandFlyDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TetherSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LatchDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHapticOnStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StepSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HapticEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HapticIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundHighlightStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundHighlightEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundOnLatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundOnRelease,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnValueChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRawValueChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnLatched,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnLatchReleased,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TetherCable,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightMPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveHands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveHands,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveGhostHands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveGhostHands,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetHandleMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AutoDetectedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentTargetWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LinkedLatchZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedPlayerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomLeftSnap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomRightSnap,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_Latch Property Definitions ********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_USceneComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_Latch,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAzr_Latch_StaticRegisterNativesUAzr_Latch()
{
	UClass* Class = UAzr_Latch::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_Latch;
UClass* Z_Construct_UClass_UAzr_Latch(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_Latch;
		if (!Z_Registration_Info_UClass_UAzr_Latch.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_Latch"),
				Z_Registration_Info_UClass_UAzr_Latch.InnerSingleton,
				UAzr_Latch_StaticRegisterNativesUAzr_Latch,
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
		return Z_Registration_Info_UClass_UAzr_Latch.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_Latch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_Latch.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_Latch.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_Latch);
UAzr_Latch::~UAzr_Latch() {}
// ********** End Class UAzr_Latch *****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Latch_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_AzurealXR_EAzr_LatchType, TEXT("EAzr_LatchType"), &ZRIE_EAzr_LatchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2243272772U) },
		{ Z_Construct_UEnum_AzurealXR_EAzr_Axis, TEXT("EAzr_Axis"), &ZRIE_EAzr_Axis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2720935640U) },
		{ Z_Construct_UEnum_AzurealXR_EAzr_LatchTrigger, TEXT("EAzr_LatchTrigger"), &ZRIE_EAzr_LatchTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1810677200U) },
		{ Z_Construct_UEnum_AzurealXR_EAzr_AllowedHand, TEXT("EAzr_AllowedHand"), &ZRIE_EAzr_AllowedHand, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3806220529U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_Latch, TEXT("UAzr_Latch"), &Z_Registration_Info_UClass_UAzr_Latch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_Latch), 3259029334U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Latch_h__Script_AzurealXR_f1268935a0b423f9a991f20bc3e5f8851f95d386{
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
