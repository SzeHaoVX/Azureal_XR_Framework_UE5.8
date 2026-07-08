// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Grab.h"
#include "Azr_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Grab() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Grab(ETypeConstructPhase);
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabAttachConfig(ETypeConstructPhase);
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabConfig(ETypeConstructPhase);
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig(ETypeConstructPhase);
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig(ETypeConstructPhase);
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_TetherConfig(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_HandType(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabEvent__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabRemoved__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_AttachTarget(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Grab(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EAzr_HandType *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AzurealXR_EAzr_HandType_Statics
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_HandType>()
{
	return Z_Construct_UEnum_AzurealXR_EAzr_HandType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Both.DisplayName", "Both Hands" },
		{ "Both.Name", "EAzr_HandType::Both" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- ENUMS ---\n" },
#endif
		{ "Left.DisplayName", "Left Hand" },
		{ "Left.Name", "EAzr_HandType::Left" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
		{ "Right.DisplayName", "Right Hand" },
		{ "Right.Name", "EAzr_HandType::Right" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- ENUMS ---" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAzr_HandType::Left", (int64)EAzr_HandType::Left },
		{ "EAzr_HandType::Right", (int64)EAzr_HandType::Right },
		{ "EAzr_HandType::Both", (int64)EAzr_HandType::Both },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_HandType",
	"EAzr_HandType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAzr_HandType;
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_HandType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAzr_HandType.OuterSingleton)
		{
			ZRIE_EAzr_HandType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_HandType, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("EAzr_HandType"));
		}
		return ZRIE_EAzr_HandType.OuterSingleton;
	}
	if (!ZRIE_EAzr_HandType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAzr_HandType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAzr_HandType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAzr_HandType ***************************************************************

// ********** Begin Delegate FOnGrabEvent **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnGrabEvent__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EVENTS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EVENTS ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGrabEvent constinit property declarations **************************
// ********** End Delegate FOnGrabEvent constinit property declarations ****************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnGrabEvent__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabEvent__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnGrabEvent ************************************************************

// ********** Begin Delegate FOnGrabAttachedEvent **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_AzurealXR_eventOnGrabAttachedEvent_Parms
	{
		int32 SequenceID;
		UAzr_AttachTarget* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGrabAttachedEvent constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SequenceID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGrabAttachedEvent constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGrabAttachedEvent Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SequenceID = { "SequenceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnGrabAttachedEvent_Parms, SequenceID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnGrabAttachedEvent_Parms, Target), Z_Construct_UClass_UAzr_AttachTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SequenceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnGrabAttachedEvent Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnGrabAttachedEvent__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_AzurealXR_eventOnGrabAttachedEvent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_AzurealXR_eventOnGrabAttachedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnGrabAttachedEvent ****************************************************

// ********** Begin Delegate FOnGrabDetachedEvent **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_AzurealXR_eventOnGrabDetachedEvent_Parms
	{
		int32 SequenceID;
		UAzr_AttachTarget* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGrabDetachedEvent constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SequenceID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGrabDetachedEvent constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGrabDetachedEvent Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SequenceID = { "SequenceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnGrabDetachedEvent_Parms, SequenceID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnGrabDetachedEvent_Parms, Target), Z_Construct_UClass_UAzr_AttachTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SequenceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnGrabDetachedEvent Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnGrabDetachedEvent__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_AzurealXR_eventOnGrabDetachedEvent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_AzurealXR_eventOnGrabDetachedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnGrabDetachedEvent ****************************************************

// ********** Begin Delegate FOnGrabRemoved ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnGrabRemoved__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGrabRemoved constinit property declarations ************************
// ********** End Delegate FOnGrabRemoved constinit property declarations **************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnGrabRemoved__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabRemoved__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnGrabRemoved **********************************************************

// ********** Begin Delegate FOnGrabTriggerEvent ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_AzurealXR_eventOnGrabTriggerEvent_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGrabTriggerEvent constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGrabTriggerEvent constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGrabTriggerEvent Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnGrabTriggerEvent_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnGrabTriggerEvent Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnGrabTriggerEvent__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_AzurealXR_eventOnGrabTriggerEvent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_AzurealXR_eventOnGrabTriggerEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnGrabTriggerEvent *****************************************************

// ********** Begin ScriptStruct FAzr_GrabConfig ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAzr_GrabConfig>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAzr_GrabConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMode_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherSettings_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDistanceGrab_MetaData[] = {
		{ "Category", "Config" },
		{ "DisplayName", "Use Distance Grab" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this object responds to the hand's larger Distance Capsule, so it can be grabbed/highlighted from a distance. (Ignored for Grab Trigger.)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAzr_GrabConfig constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetMeshName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HighlightMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HighlightMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TetherSettings;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static void NewProp_bUseDistanceGrab_SetBit(void* Obj)
	{
		((FAzr_GrabConfig*)Obj)->bUseDistanceGrab = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDistanceGrab;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAzr_GrabConfig constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzr_GrabConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAzr_GrabConfig Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TargetMeshName = { "TargetMeshName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_GrabConfig, TargetMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshName_MetaData), NewProp_TargetMeshName_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_HighlightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_HighlightMode = { "HighlightMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_GrabConfig, HighlightMode), Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMode_MetaData), NewProp_HighlightMode_MetaData) }; // b89e1d1bf6c66a6d04c6838e8255ec9637161cd7
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TetherSettings = { "TetherSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_GrabConfig, TetherSettings), Z_Construct_UScriptStruct_FAzr_TetherConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherSettings_MetaData), NewProp_TetherSettings_MetaData) }; // fb5a713d666a24a11bdd9b60341f31d15bb45b94
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_GrabConfig, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseDistanceGrab = { "bUseDistanceGrab", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAzr_GrabConfig), &UHT_STATICS::NewProp_bUseDistanceGrab_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDistanceGrab_MetaData), NewProp_bUseDistanceGrab_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetMeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TetherSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseDistanceGrab,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAzr_GrabConfig Property Definitions ********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	&NewStructOps,
	"Azr_GrabConfig",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAzr_GrabConfig>(),
	alignof(FAzr_GrabConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAzr_GrabConfig;
UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabConfig(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAzr_GrabConfig.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAzr_GrabConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzr_GrabConfig, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("Azr_GrabConfig"));
		}
		return Z_Registration_Info_UScriptStruct_FAzr_GrabConfig.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAzr_GrabConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAzr_GrabConfig.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAzr_GrabConfig.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAzr_GrabConfig *****************************************************

// ********** Begin ScriptStruct FAzr_GrabAttachConfig *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAzr_GrabAttachConfig_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAzr_GrabAttachConfig>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAzr_GrabAttachConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceID_MetaData[] = {
		{ "Category", "Config" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAzr_GrabAttachConfig constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SequenceID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAzr_GrabAttachConfig constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzr_GrabAttachConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAzr_GrabAttachConfig>() == std::is_polymorphic<FAzr_GrabConfig>(), "USTRUCT FAzr_GrabAttachConfig cannot be polymorphic unless super FAzr_GrabConfig is polymorphic");

// ********** Begin ScriptStruct FAzr_GrabAttachConfig Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SequenceID = { "SequenceID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_GrabAttachConfig, SequenceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceID_MetaData), NewProp_SequenceID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SequenceID,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAzr_GrabAttachConfig Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	Z_Construct_UScriptStruct_FAzr_GrabConfig,
	&NewStructOps,
	"Azr_GrabAttachConfig",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAzr_GrabAttachConfig>(),
	alignof(FAzr_GrabAttachConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAzr_GrabAttachConfig;
UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabAttachConfig(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAzr_GrabAttachConfig.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAzr_GrabAttachConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzr_GrabAttachConfig, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("Azr_GrabAttachConfig"));
		}
		return Z_Registration_Info_UScriptStruct_FAzr_GrabAttachConfig.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAzr_GrabAttachConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAzr_GrabAttachConfig.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAzr_GrabAttachConfig.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAzr_GrabAttachConfig ***********************************************

// ********** Begin ScriptStruct FAzr_GrabRemoveConfig *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAzr_GrabRemoveConfig>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAzr_GrabRemoveConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovalDistance_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetTransform_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAzr_GrabRemoveConfig constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemovalDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResetTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAzr_GrabRemoveConfig constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzr_GrabRemoveConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAzr_GrabRemoveConfig>() == std::is_polymorphic<FAzr_GrabConfig>(), "USTRUCT FAzr_GrabRemoveConfig cannot be polymorphic unless super FAzr_GrabConfig is polymorphic");

// ********** Begin ScriptStruct FAzr_GrabRemoveConfig Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RemovalDistance = { "RemovalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_GrabRemoveConfig, RemovalDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovalDistance_MetaData), NewProp_RemovalDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ResetTransform = { "ResetTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_GrabRemoveConfig, ResetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetTransform_MetaData), NewProp_ResetTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RemovalDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResetTransform,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAzr_GrabRemoveConfig Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	Z_Construct_UScriptStruct_FAzr_GrabConfig,
	&NewStructOps,
	"Azr_GrabRemoveConfig",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAzr_GrabRemoveConfig>(),
	alignof(FAzr_GrabRemoveConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAzr_GrabRemoveConfig;
UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAzr_GrabRemoveConfig.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAzr_GrabRemoveConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("Azr_GrabRemoveConfig"));
		}
		return Z_Registration_Info_UScriptStruct_FAzr_GrabRemoveConfig.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAzr_GrabRemoveConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAzr_GrabRemoveConfig.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAzr_GrabRemoveConfig.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAzr_GrabRemoveConfig ***********************************************

// ********** Begin ScriptStruct FAzr_GrabTriggerConfig ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAzr_GrabTriggerConfig>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAzr_GrabTriggerConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerHand_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerThreshold_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetTransform_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAzr_GrabTriggerConfig constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerHand;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResetTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAzr_GrabTriggerConfig constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzr_GrabTriggerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAzr_GrabTriggerConfig>() == std::is_polymorphic<FAzr_GrabConfig>(), "USTRUCT FAzr_GrabTriggerConfig cannot be polymorphic unless super FAzr_GrabConfig is polymorphic");

// ********** Begin ScriptStruct FAzr_GrabTriggerConfig Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_TriggerHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_TriggerHand = { "TriggerHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_GrabTriggerConfig, TriggerHand), Z_Construct_UEnum_AzurealXR_EAzr_HandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerHand_MetaData), NewProp_TriggerHand_MetaData) }; // 3d8a402ec66a785063d01b53a610167cc345564b
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TriggerThreshold = { "TriggerThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_GrabTriggerConfig, TriggerThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerThreshold_MetaData), NewProp_TriggerThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ResetTransform = { "ResetTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_GrabTriggerConfig, ResetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetTransform_MetaData), NewProp_ResetTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TriggerHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TriggerHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TriggerThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResetTransform,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAzr_GrabTriggerConfig Property Definitions *************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	Z_Construct_UScriptStruct_FAzr_GrabConfig,
	&NewStructOps,
	"Azr_GrabTriggerConfig",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAzr_GrabTriggerConfig>(),
	alignof(FAzr_GrabTriggerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAzr_GrabTriggerConfig;
UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAzr_GrabTriggerConfig.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAzr_GrabTriggerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("Azr_GrabTriggerConfig"));
		}
		return Z_Registration_Info_UScriptStruct_FAzr_GrabTriggerConfig.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAzr_GrabTriggerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAzr_GrabTriggerConfig.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAzr_GrabTriggerConfig.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAzr_GrabTriggerConfig **********************************************

// ********** Begin Class UAzr_Grab Function DisableGrab *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Grab_DisableGrab_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableGrab constinit property declarations ***************************
// ********** End Function DisableGrab constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Grab, nullptr, "DisableGrab", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Grab_DisableGrab(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Grab::execDisableGrab)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableGrab();
	P_NATIVE_END;
}
// ********** End Class UAzr_Grab Function DisableGrab *********************************************

// ********** Begin Class UAzr_Grab Function DisableGrabAttach *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Grab_DisableGrabAttach_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableGrabAttach constinit property declarations *********************
// ********** End Function DisableGrabAttach constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Grab, nullptr, "DisableGrabAttach", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Grab_DisableGrabAttach(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Grab::execDisableGrabAttach)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableGrabAttach();
	P_NATIVE_END;
}
// ********** End Class UAzr_Grab Function DisableGrabAttach ***************************************

// ********** Begin Class UAzr_Grab Function DisableGrabRemove *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove_Statics
struct UHT_STATICS
{
	struct Azr_Grab_eventDisableGrabRemove_Parms
	{
		bool bResetTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableGrabRemove constinit property declarations *********************
	static void NewProp_bResetTransform_SetBit(void* Obj)
	{
		((Azr_Grab_eventDisableGrabRemove_Parms*)Obj)->bResetTransform = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DisableGrabRemove constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DisableGrabRemove Property Definitions ********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bResetTransform = { "bResetTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_Grab_eventDisableGrabRemove_Parms), &UHT_STATICS::NewProp_bResetTransform_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bResetTransform,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DisableGrabRemove Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Grab, nullptr, "DisableGrabRemove", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Grab_eventDisableGrabRemove_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Grab_eventDisableGrabRemove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Grab::execDisableGrabRemove)
{
	P_GET_UBOOL(Z_Param_bResetTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableGrabRemove(Z_Param_bResetTransform);
	P_NATIVE_END;
}
// ********** End Class UAzr_Grab Function DisableGrabRemove ***************************************

// ********** Begin Class UAzr_Grab Function DisableGrabTrigger ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger_Statics
struct UHT_STATICS
{
	struct Azr_Grab_eventDisableGrabTrigger_Parms
	{
		bool bResetTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableGrabTrigger constinit property declarations ********************
	static void NewProp_bResetTransform_SetBit(void* Obj)
	{
		((Azr_Grab_eventDisableGrabTrigger_Parms*)Obj)->bResetTransform = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DisableGrabTrigger constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DisableGrabTrigger Property Definitions *******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bResetTransform = { "bResetTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_Grab_eventDisableGrabTrigger_Parms), &UHT_STATICS::NewProp_bResetTransform_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bResetTransform,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DisableGrabTrigger Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Grab, nullptr, "DisableGrabTrigger", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Grab_eventDisableGrabTrigger_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Grab_eventDisableGrabTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Grab::execDisableGrabTrigger)
{
	P_GET_UBOOL(Z_Param_bResetTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableGrabTrigger(Z_Param_bResetTransform);
	P_NATIVE_END;
}
// ********** End Class UAzr_Grab Function DisableGrabTrigger **************************************

// ********** Begin Class UAzr_Grab Function EnableGrab ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Grab_EnableGrab_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- API ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- API ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EnableGrab constinit property declarations ****************************
// ********** End Function EnableGrab constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Grab, nullptr, "EnableGrab", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Grab_EnableGrab(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Grab::execEnableGrab)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableGrab();
	P_NATIVE_END;
}
// ********** End Class UAzr_Grab Function EnableGrab **********************************************

// ********** Begin Class UAzr_Grab Function EnableGrabAttach **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Grab_EnableGrabAttach_Statics
struct UHT_STATICS
{
	struct Azr_Grab_eventEnableGrabAttach_Parms
	{
		int32 SequenceID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "CPP_Default_SequenceID", "1" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableGrabAttach constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SequenceID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnableGrabAttach constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnableGrabAttach Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SequenceID = { "SequenceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Grab_eventEnableGrabAttach_Parms, SequenceID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SequenceID,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EnableGrabAttach Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Grab, nullptr, "EnableGrabAttach", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Grab_eventEnableGrabAttach_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Grab_eventEnableGrabAttach_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Grab_EnableGrabAttach(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Grab::execEnableGrabAttach)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SequenceID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableGrabAttach(Z_Param_SequenceID);
	P_NATIVE_END;
}
// ********** End Class UAzr_Grab Function EnableGrabAttach ****************************************

// ********** Begin Class UAzr_Grab Function EnableGrabRemove **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Grab_EnableGrabRemove_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableGrabRemove constinit property declarations **********************
// ********** End Function EnableGrabRemove constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Grab, nullptr, "EnableGrabRemove", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Grab_EnableGrabRemove(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Grab::execEnableGrabRemove)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableGrabRemove();
	P_NATIVE_END;
}
// ********** End Class UAzr_Grab Function EnableGrabRemove ****************************************

// ********** Begin Class UAzr_Grab Function EnableGrabTrigger *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Grab_EnableGrabTrigger_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableGrabTrigger constinit property declarations *********************
// ********** End Function EnableGrabTrigger constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Grab, nullptr, "EnableGrabTrigger", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Grab_EnableGrabTrigger(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Grab::execEnableGrabTrigger)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableGrabTrigger();
	P_NATIVE_END;
}
// ********** End Class UAzr_Grab Function EnableGrabTrigger ***************************************

// ********** Begin Class UAzr_Grab Function IsHeld ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Grab_IsHeld_Statics
struct UHT_STATICS
{
	struct Azr_Grab_eventIsHeld_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True while some hand is currently holding this object. Used to stop a second hand from\n// stealing an object that is already grabbed (see SnapActorToHand + UAzr_HandScanner).\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True while some hand is currently holding this object. Used to stop a second hand from\nstealing an object that is already grabbed (see SnapActorToHand + UAzr_HandScanner)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsHeld constinit property declarations ********************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Azr_Grab_eventIsHeld_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsHeld constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsHeld Property Definitions *******************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_Grab_eventIsHeld_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsHeld Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Grab, nullptr, "IsHeld", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Grab_eventIsHeld_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Grab_eventIsHeld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Grab_IsHeld(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Grab::execIsHeld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHeld();
	P_NATIVE_END;
}
// ********** End Class UAzr_Grab Function IsHeld **************************************************

// ********** Begin Class UAzr_Grab Function SetTriggerHand ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Grab_SetTriggerHand_Statics
struct UHT_STATICS
{
	struct Azr_Grab_eventSetTriggerHand_Parms
	{
		EAzr_HandType NewHand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Settings" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTriggerHand constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewHand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTriggerHand constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTriggerHand Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NewHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewHand = { "NewHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Grab_eventSetTriggerHand_Parms, NewHand), Z_Construct_UEnum_AzurealXR_EAzr_HandType, METADATA_PARAMS(0, nullptr) }; // 3d8a402ec66a785063d01b53a610167cc345564b
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewHand,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTriggerHand Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Grab, nullptr, "SetTriggerHand", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Grab_eventSetTriggerHand_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Grab_eventSetTriggerHand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Grab_SetTriggerHand(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Grab::execSetTriggerHand)
{
	P_GET_ENUM(EAzr_HandType,Z_Param_NewHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTriggerHand(EAzr_HandType(Z_Param_NewHand));
	P_NATIVE_END;
}
// ********** End Class UAzr_Grab Function SetTriggerHand ******************************************

// ********** Begin Class UAzr_Grab Function SetTriggerThreshold ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Grab_SetTriggerThreshold_Statics
struct UHT_STATICS
{
	struct Azr_Grab_eventSetTriggerThreshold_Parms
	{
		float NewThreshold;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Settings" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTriggerThreshold constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTriggerThreshold constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTriggerThreshold Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewThreshold = { "NewThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Grab_eventSetTriggerThreshold_Parms, NewThreshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewThreshold,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTriggerThreshold Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Grab, nullptr, "SetTriggerThreshold", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Grab_eventSetTriggerThreshold_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Grab_eventSetTriggerThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Grab_SetTriggerThreshold(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Grab::execSetTriggerThreshold)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewThreshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTriggerThreshold(Z_Param_NewThreshold);
	P_NATIVE_END;
}
// ********** End Class UAzr_Grab Function SetTriggerThreshold *************************************

// ********** Begin Class UAzr_Grab ****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_Grab_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AzurealXR" },
		{ "IncludePath", "Azr_Grab.h" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightSpeed_MetaData[] = {
		{ "Category", "Grab Configuration|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- SETTINGS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- SETTINGS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapSpeed_MetaData[] = {
		{ "Category", "Grab Configuration|Settings" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapThreshold_MetaData[] = {
		{ "Category", "Grab Configuration|Settings" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grab_MetaData[] = {
		{ "Category", "Grab Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- CONFIGS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- CONFIGS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabAttach_MetaData[] = {
		{ "Category", "Grab Configuration" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabRemove_MetaData[] = {
		{ "Category", "Grab Configuration" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabTrigger_MetaData[] = {
		{ "Category", "Grab Configuration" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundHighlightStart_MetaData[] = {
		{ "Category", "Grab Configuration|Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- AUDIO ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- AUDIO ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundHighlightEnd_MetaData[] = {
		{ "Category", "Grab Configuration|Audio" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundOnGrab_MetaData[] = {
		{ "Category", "Grab Configuration|Audio" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundOnRelease_MetaData[] = {
		{ "Category", "Grab Configuration|Audio" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundOnAttach_MetaData[] = {
		{ "Category", "Grab Configuration|Audio" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundOnRemove_MetaData[] = {
		{ "Category", "Grab Configuration|Audio" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HapticOnGrab_MetaData[] = {
		{ "Category", "Grab Configuration|Haptics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- HAPTICS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- HAPTICS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HapticOnRelease_MetaData[] = {
		{ "Category", "Grab Configuration|Haptics" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HapticOnAttach_MetaData[] = {
		{ "Category", "Grab Configuration|Haptics" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HapticOnRemove_MetaData[] = {
		{ "Category", "Grab Configuration|Haptics" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HapticOnTrigger_MetaData[] = {
		{ "Category", "Grab Configuration|Haptics" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGrabbed_MetaData[] = {
		{ "Category", "Azureal|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EVENTS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EVENTS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReleased_MetaData[] = {
		{ "Category", "Azureal|Events" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGrabAttached_MetaData[] = {
		{ "Category", "Azureal|Events" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGrabDetached_MetaData[] = {
		{ "Category", "Azureal|Events" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGrabRemoved_MetaData[] = {
		{ "Category", "Azureal|Events" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGrabTriggered_MetaData[] = {
		{ "Category", "Azureal|Events" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGrabTriggerReleased_MetaData[] = {
		{ "Category", "Azureal|Events" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartAnchor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndAnchor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherCable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMPC_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHand_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoDetectedMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCameraManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_Grab constinit property declarations ********************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighlightSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Grab;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrabAttach;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrabRemove;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrabTrigger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundHighlightStart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundHighlightEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundOnGrab;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundOnRelease;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundOnAttach;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundOnRemove;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HapticOnGrab;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HapticOnRelease;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HapticOnAttach;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HapticOnRemove;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HapticOnTrigger;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGrabbed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReleased;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGrabAttached;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGrabDetached;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGrabRemoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGrabTriggered;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGrabTriggerReleased;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartAnchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndAnchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TetherCable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightMPC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentHand;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTargetMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AutoDetectedMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTargetWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedCameraManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_Grab constinit property declarations **********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DisableGrab"), .Pointer = &UAzr_Grab::execDisableGrab },
		{ .NameUTF8 = UTF8TEXT("DisableGrabAttach"), .Pointer = &UAzr_Grab::execDisableGrabAttach },
		{ .NameUTF8 = UTF8TEXT("DisableGrabRemove"), .Pointer = &UAzr_Grab::execDisableGrabRemove },
		{ .NameUTF8 = UTF8TEXT("DisableGrabTrigger"), .Pointer = &UAzr_Grab::execDisableGrabTrigger },
		{ .NameUTF8 = UTF8TEXT("EnableGrab"), .Pointer = &UAzr_Grab::execEnableGrab },
		{ .NameUTF8 = UTF8TEXT("EnableGrabAttach"), .Pointer = &UAzr_Grab::execEnableGrabAttach },
		{ .NameUTF8 = UTF8TEXT("EnableGrabRemove"), .Pointer = &UAzr_Grab::execEnableGrabRemove },
		{ .NameUTF8 = UTF8TEXT("EnableGrabTrigger"), .Pointer = &UAzr_Grab::execEnableGrabTrigger },
		{ .NameUTF8 = UTF8TEXT("IsHeld"), .Pointer = &UAzr_Grab::execIsHeld },
		{ .NameUTF8 = UTF8TEXT("SetTriggerHand"), .Pointer = &UAzr_Grab::execSetTriggerHand },
		{ .NameUTF8 = UTF8TEXT("SetTriggerThreshold"), .Pointer = &UAzr_Grab::execSetTriggerThreshold },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_Grab_DisableGrab, "DisableGrab" }, // 7ee3499ae99444f7a54c8d18e2dbacdb290ca459
		{ &Z_Construct_UFunction_UAzr_Grab_DisableGrabAttach, "DisableGrabAttach" }, // 4853dbc8736746d8bc653d60758d5f617ccee28e
		{ &Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove, "DisableGrabRemove" }, // 2df2bb95861886abfc878d5551f58f25fa1d0278
		{ &Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger, "DisableGrabTrigger" }, // 19d99cbfaf38cd35e293728413243d8cbfa51101
		{ &Z_Construct_UFunction_UAzr_Grab_EnableGrab, "EnableGrab" }, // def86871c5dddd444a4a0de1d00e4547354b76f4
		{ &Z_Construct_UFunction_UAzr_Grab_EnableGrabAttach, "EnableGrabAttach" }, // 9cc98a6200972552f1b8692135af5d6dede8c73b
		{ &Z_Construct_UFunction_UAzr_Grab_EnableGrabRemove, "EnableGrabRemove" }, // 8736a46485a2c286452a68609d8c81efd90636ed
		{ &Z_Construct_UFunction_UAzr_Grab_EnableGrabTrigger, "EnableGrabTrigger" }, // 228c36424e33c071804cea4ce1304663c5e43466
		{ &Z_Construct_UFunction_UAzr_Grab_IsHeld, "IsHeld" }, // af047a5d85364796592f3fff0a87bcce6f9a810d
		{ &Z_Construct_UFunction_UAzr_Grab_SetTriggerHand, "SetTriggerHand" }, // 376617d5a1a1f37b51deb400d4b4ac577002570d
		{ &Z_Construct_UFunction_UAzr_Grab_SetTriggerThreshold, "SetTriggerThreshold" }, // c59093c0f32df4814387372c66784474eb102145
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_Grab>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_Grab Property Definitions *******************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HighlightSpeed = { "HighlightSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, HighlightSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightSpeed_MetaData), NewProp_HighlightSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SnapSpeed = { "SnapSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, SnapSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapSpeed_MetaData), NewProp_SnapSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SnapThreshold = { "SnapThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, SnapThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapThreshold_MetaData), NewProp_SnapThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Grab = { "Grab", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, Grab), Z_Construct_UScriptStruct_FAzr_GrabConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grab_MetaData), NewProp_Grab_MetaData) }; // 93d44ff9f4015ed506e47b46489337584fad3515
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GrabAttach = { "GrabAttach", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, GrabAttach), Z_Construct_UScriptStruct_FAzr_GrabAttachConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabAttach_MetaData), NewProp_GrabAttach_MetaData) }; // 11171c85754f97bbe9a54ba8c10d271f0db59fd8
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GrabRemove = { "GrabRemove", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, GrabRemove), Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabRemove_MetaData), NewProp_GrabRemove_MetaData) }; // 23f3da72de70fb90fe9db337eaa2f0b72de81629
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GrabTrigger = { "GrabTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, GrabTrigger), Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabTrigger_MetaData), NewProp_GrabTrigger_MetaData) }; // dfb1f309de3e3ce5e416792c4ded099cf1958053
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundHighlightStart = { "SoundHighlightStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, SoundHighlightStart), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundHighlightStart_MetaData), NewProp_SoundHighlightStart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundHighlightEnd = { "SoundHighlightEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, SoundHighlightEnd), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundHighlightEnd_MetaData), NewProp_SoundHighlightEnd_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundOnGrab = { "SoundOnGrab", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, SoundOnGrab), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundOnGrab_MetaData), NewProp_SoundOnGrab_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundOnRelease = { "SoundOnRelease", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, SoundOnRelease), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundOnRelease_MetaData), NewProp_SoundOnRelease_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundOnAttach = { "SoundOnAttach", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, SoundOnAttach), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundOnAttach_MetaData), NewProp_SoundOnAttach_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundOnRemove = { "SoundOnRemove", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, SoundOnRemove), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundOnRemove_MetaData), NewProp_SoundOnRemove_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HapticOnGrab = { "HapticOnGrab", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, HapticOnGrab), Z_Construct_UClass_UHapticFeedbackEffect_Base, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HapticOnGrab_MetaData), NewProp_HapticOnGrab_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HapticOnRelease = { "HapticOnRelease", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, HapticOnRelease), Z_Construct_UClass_UHapticFeedbackEffect_Base, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HapticOnRelease_MetaData), NewProp_HapticOnRelease_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HapticOnAttach = { "HapticOnAttach", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, HapticOnAttach), Z_Construct_UClass_UHapticFeedbackEffect_Base, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HapticOnAttach_MetaData), NewProp_HapticOnAttach_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HapticOnRemove = { "HapticOnRemove", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, HapticOnRemove), Z_Construct_UClass_UHapticFeedbackEffect_Base, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HapticOnRemove_MetaData), NewProp_HapticOnRemove_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HapticOnTrigger = { "HapticOnTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, HapticOnTrigger), Z_Construct_UClass_UHapticFeedbackEffect_Base, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HapticOnTrigger_MetaData), NewProp_HapticOnTrigger_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnGrabbed = { "OnGrabbed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, OnGrabbed), Z_Construct_UDelegateFunction_AzurealXR_OnGrabEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrabbed_MetaData), NewProp_OnGrabbed_MetaData) }; // cd96eb301f1f3b2b51d895c0fb3202afa2a83b00
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnReleased = { "OnReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, OnReleased), Z_Construct_UDelegateFunction_AzurealXR_OnGrabEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReleased_MetaData), NewProp_OnReleased_MetaData) }; // cd96eb301f1f3b2b51d895c0fb3202afa2a83b00
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnGrabAttached = { "OnGrabAttached", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, OnGrabAttached), Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrabAttached_MetaData), NewProp_OnGrabAttached_MetaData) }; // 347c52a8aaaae728503a33264de3763a002dcc67
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnGrabDetached = { "OnGrabDetached", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, OnGrabDetached), Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrabDetached_MetaData), NewProp_OnGrabDetached_MetaData) }; // fd968b931b8e91a84f37955bcbd803f05fd3183c
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnGrabRemoved = { "OnGrabRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, OnGrabRemoved), Z_Construct_UDelegateFunction_AzurealXR_OnGrabRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrabRemoved_MetaData), NewProp_OnGrabRemoved_MetaData) }; // 409a166d88f84d15028f0de206522a9957f2878a
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnGrabTriggered = { "OnGrabTriggered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, OnGrabTriggered), Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrabTriggered_MetaData), NewProp_OnGrabTriggered_MetaData) }; // fed3378fa19e148b466d90f067a377fcd5293cef
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnGrabTriggerReleased = { "OnGrabTriggerReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, OnGrabTriggerReleased), Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrabTriggerReleased_MetaData), NewProp_OnGrabTriggerReleased_MetaData) }; // fed3378fa19e148b466d90f067a377fcd5293cef
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StartAnchor = { "StartAnchor", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, StartAnchor), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAnchor_MetaData), NewProp_StartAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EndAnchor = { "EndAnchor", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, EndAnchor), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndAnchor_MetaData), NewProp_EndAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TetherCable = { "TetherCable", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, TetherCable), Z_Construct_UClass_UCableComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherCable_MetaData), NewProp_TetherCable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HighlightMPC = { "HighlightMPC", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, HighlightMPC), Z_Construct_UClass_UMaterialParameterCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMPC_MetaData), NewProp_HighlightMPC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurrentHand = { "CurrentHand", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, CurrentHand), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHand_MetaData), NewProp_CurrentHand_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurrentTargetMesh = { "CurrentTargetMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, CurrentTargetMesh), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTargetMesh_MetaData), NewProp_CurrentTargetMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AutoDetectedMesh = { "AutoDetectedMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, AutoDetectedMesh), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoDetectedMesh_MetaData), NewProp_AutoDetectedMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurrentTargetWidget = { "CurrentTargetWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, CurrentTargetWidget), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTargetWidget_MetaData), NewProp_CurrentTargetWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CachedCameraManager = { "CachedCameraManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, CachedCameraManager), Z_Construct_UClass_APlayerCameraManager, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCameraManager_MetaData), NewProp_CachedCameraManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SnapSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SnapThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Grab,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrabAttach,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrabRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrabTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundHighlightStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundHighlightEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundOnGrab,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundOnRelease,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundOnAttach,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundOnRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HapticOnGrab,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HapticOnRelease,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HapticOnAttach,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HapticOnRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HapticOnTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnGrabbed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnReleased,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnGrabAttached,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnGrabDetached,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnGrabRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnGrabTriggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnGrabTriggerReleased,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TetherCable,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightMPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentTargetMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AutoDetectedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentTargetWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedCameraManager,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_Grab Property Definitions *********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_Grab,
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
static void UAzr_Grab_StaticRegisterNativesUAzr_Grab()
{
	UClass* Class = UAzr_Grab::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_Grab;
UClass* Z_Construct_UClass_UAzr_Grab(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_Grab;
		if (!Z_Registration_Info_UClass_UAzr_Grab.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_Grab"),
				Z_Registration_Info_UClass_UAzr_Grab.InnerSingleton,
				UAzr_Grab_StaticRegisterNativesUAzr_Grab,
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
		return Z_Registration_Info_UClass_UAzr_Grab.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_Grab.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_Grab.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_Grab.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_Grab);
UAzr_Grab::~UAzr_Grab() {}
// ********** End Class UAzr_Grab ******************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_AzurealXR_EAzr_HandType, TEXT("EAzr_HandType"), &ZRIE_EAzr_HandType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1032470574U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAzr_GrabConfig, Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics::NewStructOps, TEXT("Azr_GrabConfig"),&Z_Registration_Info_UScriptStruct_FAzr_GrabConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzr_GrabConfig), 2480164857U) },
		{ Z_Construct_UScriptStruct_FAzr_GrabAttachConfig, Z_Construct_UScriptStruct_FAzr_GrabAttachConfig_Statics::NewStructOps, TEXT("Azr_GrabAttachConfig"),&Z_Registration_Info_UScriptStruct_FAzr_GrabAttachConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzr_GrabAttachConfig), 286727301U) },
		{ Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig, Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics::NewStructOps, TEXT("Azr_GrabRemoveConfig"),&Z_Registration_Info_UScriptStruct_FAzr_GrabRemoveConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzr_GrabRemoveConfig), 603183730U) },
		{ Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig, Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics::NewStructOps, TEXT("Azr_GrabTriggerConfig"),&Z_Registration_Info_UScriptStruct_FAzr_GrabTriggerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzr_GrabTriggerConfig), 3752981257U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_Grab, TEXT("UAzr_Grab"), &Z_Registration_Info_UClass_UAzr_Grab, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_Grab), 1544039834U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h__Script_AzurealXR_7f3d7efd112f476bedd885ab750ee281ffdbfda0{
	TEXT("/Script/AzurealXR"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
