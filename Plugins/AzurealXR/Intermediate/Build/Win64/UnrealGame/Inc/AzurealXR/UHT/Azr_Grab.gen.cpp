// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Grab.h"
#include "Azr_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Grab() {}

// ********** Begin Cross Module References ********************************************************
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_AttachTarget_NoRegister();
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Grab();
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Grab_NoRegister();
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_HandType();
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode();
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature();
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature();
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabEvent__DelegateSignature();
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabRemoved__DelegateSignature();
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature();
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabAttachConfig();
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabConfig();
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig();
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig();
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_TetherConfig();
CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AzurealXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAzr_HandType *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAzr_HandType;
static UEnum* EAzr_HandType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAzr_HandType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAzr_HandType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_HandType, (UObject*)Z_Construct_UPackage__Script_AzurealXR(), TEXT("EAzr_HandType"));
	}
	return Z_Registration_Info_UEnum_EAzr_HandType.OuterSingleton;
}
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_HandType>()
{
	return EAzr_HandType_StaticEnum();
}
struct Z_Construct_UEnum_AzurealXR_EAzr_HandType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
}; // struct Z_Construct_UEnum_AzurealXR_EAzr_HandType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzurealXR_EAzr_HandType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_HandType",
	"EAzr_HandType",
	Z_Construct_UEnum_AzurealXR_EAzr_HandType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AzurealXR_EAzr_HandType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AzurealXR_EAzr_HandType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AzurealXR_EAzr_HandType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_HandType()
{
	if (!Z_Registration_Info_UEnum_EAzr_HandType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAzr_HandType.InnerSingleton, Z_Construct_UEnum_AzurealXR_EAzr_HandType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAzr_HandType.InnerSingleton;
}
// ********** End Enum EAzr_HandType ***************************************************************

// ********** Begin Delegate FOnGrabEvent **********************************************************
struct Z_Construct_UDelegateFunction_AzurealXR_OnGrabEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AzurealXR_OnGrabEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnGrabEvent__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzurealXR_OnGrabEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AzurealXR_OnGrabEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AzurealXR_OnGrabEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGrabEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGrabEvent)
{
	OnGrabEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnGrabEvent ************************************************************

// ********** Begin Delegate FOnGrabAttachedEvent **************************************************
struct Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature_Statics
{
	struct _Script_AzurealXR_eventOnGrabAttachedEvent_Parms
	{
		int32 SequenceID;
		UAzr_AttachTarget* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature_Statics::NewProp_SequenceID = { "SequenceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnGrabAttachedEvent_Parms, SequenceID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnGrabAttachedEvent_Parms, Target), Z_Construct_UClass_UAzr_AttachTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature_Statics::NewProp_SequenceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGrabAttachedEvent Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnGrabAttachedEvent__DelegateSignature", 	Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature_Statics::_Script_AzurealXR_eventOnGrabAttachedEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature_Statics::_Script_AzurealXR_eventOnGrabAttachedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGrabAttachedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGrabAttachedEvent, int32 SequenceID, UAzr_AttachTarget* Target)
{
	struct _Script_AzurealXR_eventOnGrabAttachedEvent_Parms
	{
		int32 SequenceID;
		UAzr_AttachTarget* Target;
	};
	_Script_AzurealXR_eventOnGrabAttachedEvent_Parms Parms;
	Parms.SequenceID=SequenceID;
	Parms.Target=Target;
	OnGrabAttachedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGrabAttachedEvent ****************************************************

// ********** Begin Delegate FOnGrabDetachedEvent **************************************************
struct Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature_Statics
{
	struct _Script_AzurealXR_eventOnGrabDetachedEvent_Parms
	{
		int32 SequenceID;
		UAzr_AttachTarget* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature_Statics::NewProp_SequenceID = { "SequenceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnGrabDetachedEvent_Parms, SequenceID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnGrabDetachedEvent_Parms, Target), Z_Construct_UClass_UAzr_AttachTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature_Statics::NewProp_SequenceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGrabDetachedEvent Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnGrabDetachedEvent__DelegateSignature", 	Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature_Statics::_Script_AzurealXR_eventOnGrabDetachedEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature_Statics::_Script_AzurealXR_eventOnGrabDetachedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGrabDetachedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGrabDetachedEvent, int32 SequenceID, UAzr_AttachTarget* Target)
{
	struct _Script_AzurealXR_eventOnGrabDetachedEvent_Parms
	{
		int32 SequenceID;
		UAzr_AttachTarget* Target;
	};
	_Script_AzurealXR_eventOnGrabDetachedEvent_Parms Parms;
	Parms.SequenceID=SequenceID;
	Parms.Target=Target;
	OnGrabDetachedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGrabDetachedEvent ****************************************************

// ********** Begin Delegate FOnGrabRemoved ********************************************************
struct Z_Construct_UDelegateFunction_AzurealXR_OnGrabRemoved__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGrabRemoved constinit property declarations ************************
// ********** End Delegate FOnGrabRemoved constinit property declarations **************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AzurealXR_OnGrabRemoved__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnGrabRemoved__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzurealXR_OnGrabRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AzurealXR_OnGrabRemoved__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabRemoved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AzurealXR_OnGrabRemoved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGrabRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnGrabRemoved)
{
	OnGrabRemoved.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnGrabRemoved **********************************************************

// ********** Begin Delegate FOnGrabTriggerEvent ***************************************************
struct Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature_Statics
{
	struct _Script_AzurealXR_eventOnGrabTriggerEvent_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnGrabTriggerEvent_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGrabTriggerEvent Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnGrabTriggerEvent__DelegateSignature", 	Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature_Statics::_Script_AzurealXR_eventOnGrabTriggerEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature_Statics::_Script_AzurealXR_eventOnGrabTriggerEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGrabTriggerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGrabTriggerEvent, float Value)
{
	struct _Script_AzurealXR_eventOnGrabTriggerEvent_Parms
	{
		float Value;
	};
	_Script_AzurealXR_eventOnGrabTriggerEvent_Parms Parms;
	Parms.Value=Value;
	OnGrabTriggerEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGrabTriggerEvent *****************************************************

// ********** Begin ScriptStruct FAzr_GrabConfig ***************************************************
struct Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAzr_GrabConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAzr_GrabConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
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
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAzr_GrabConfig constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetMeshName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HighlightMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HighlightMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TetherSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAzr_GrabConfig constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzr_GrabConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAzr_GrabConfig;
class UScriptStruct* FAzr_GrabConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAzr_GrabConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAzr_GrabConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzr_GrabConfig, (UObject*)Z_Construct_UPackage__Script_AzurealXR(), TEXT("Azr_GrabConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FAzr_GrabConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FAzr_GrabConfig Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics::NewProp_TargetMeshName = { "TargetMeshName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_GrabConfig, TargetMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshName_MetaData), NewProp_TargetMeshName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics::NewProp_HighlightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics::NewProp_HighlightMode = { "HighlightMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_GrabConfig, HighlightMode), Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMode_MetaData), NewProp_HighlightMode_MetaData) }; // 3885943093
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics::NewProp_TetherSettings = { "TetherSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_GrabConfig, TetherSettings), Z_Construct_UScriptStruct_FAzr_TetherConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherSettings_MetaData), NewProp_TetherSettings_MetaData) }; // 3635324092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics::NewProp_TargetMeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics::NewProp_HighlightMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics::NewProp_HighlightMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics::NewProp_TetherSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAzr_GrabConfig Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	&NewStructOps,
	"Azr_GrabConfig",
	Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics::PropPointers),
	sizeof(FAzr_GrabConfig),
	alignof(FAzr_GrabConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FAzr_GrabConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAzr_GrabConfig.InnerSingleton, Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAzr_GrabConfig.InnerSingleton);
}
// ********** End ScriptStruct FAzr_GrabConfig *****************************************************

// ********** Begin ScriptStruct FAzr_GrabAttachConfig *********************************************
struct Z_Construct_UScriptStruct_FAzr_GrabAttachConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAzr_GrabAttachConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAzr_GrabAttachConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
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
}; // struct Z_Construct_UScriptStruct_FAzr_GrabAttachConfig_Statics
static_assert(std::is_polymorphic<FAzr_GrabAttachConfig>() == std::is_polymorphic<FAzr_GrabConfig>(), "USTRUCT FAzr_GrabAttachConfig cannot be polymorphic unless super FAzr_GrabConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAzr_GrabAttachConfig;
class UScriptStruct* FAzr_GrabAttachConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAzr_GrabAttachConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAzr_GrabAttachConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzr_GrabAttachConfig, (UObject*)Z_Construct_UPackage__Script_AzurealXR(), TEXT("Azr_GrabAttachConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FAzr_GrabAttachConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FAzr_GrabAttachConfig Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAzr_GrabAttachConfig_Statics::NewProp_SequenceID = { "SequenceID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_GrabAttachConfig, SequenceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceID_MetaData), NewProp_SequenceID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzr_GrabAttachConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_GrabAttachConfig_Statics::NewProp_SequenceID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzr_GrabAttachConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAzr_GrabAttachConfig Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzr_GrabAttachConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AzurealXR,
	Z_Construct_UScriptStruct_FAzr_GrabConfig,
	&NewStructOps,
	"Azr_GrabAttachConfig",
	Z_Construct_UScriptStruct_FAzr_GrabAttachConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzr_GrabAttachConfig_Statics::PropPointers),
	sizeof(FAzr_GrabAttachConfig),
	alignof(FAzr_GrabAttachConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzr_GrabAttachConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAzr_GrabAttachConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabAttachConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FAzr_GrabAttachConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAzr_GrabAttachConfig.InnerSingleton, Z_Construct_UScriptStruct_FAzr_GrabAttachConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAzr_GrabAttachConfig.InnerSingleton);
}
// ********** End ScriptStruct FAzr_GrabAttachConfig ***********************************************

// ********** Begin ScriptStruct FAzr_GrabRemoveConfig *********************************************
struct Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAzr_GrabRemoveConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAzr_GrabRemoveConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
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
}; // struct Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics
static_assert(std::is_polymorphic<FAzr_GrabRemoveConfig>() == std::is_polymorphic<FAzr_GrabConfig>(), "USTRUCT FAzr_GrabRemoveConfig cannot be polymorphic unless super FAzr_GrabConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAzr_GrabRemoveConfig;
class UScriptStruct* FAzr_GrabRemoveConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAzr_GrabRemoveConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAzr_GrabRemoveConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig, (UObject*)Z_Construct_UPackage__Script_AzurealXR(), TEXT("Azr_GrabRemoveConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FAzr_GrabRemoveConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FAzr_GrabRemoveConfig Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics::NewProp_RemovalDistance = { "RemovalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_GrabRemoveConfig, RemovalDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovalDistance_MetaData), NewProp_RemovalDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics::NewProp_ResetTransform = { "ResetTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_GrabRemoveConfig, ResetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetTransform_MetaData), NewProp_ResetTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics::NewProp_RemovalDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics::NewProp_ResetTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAzr_GrabRemoveConfig Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AzurealXR,
	Z_Construct_UScriptStruct_FAzr_GrabConfig,
	&NewStructOps,
	"Azr_GrabRemoveConfig",
	Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics::PropPointers),
	sizeof(FAzr_GrabRemoveConfig),
	alignof(FAzr_GrabRemoveConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FAzr_GrabRemoveConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAzr_GrabRemoveConfig.InnerSingleton, Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAzr_GrabRemoveConfig.InnerSingleton);
}
// ********** End ScriptStruct FAzr_GrabRemoveConfig ***********************************************

// ********** Begin ScriptStruct FAzr_GrabTriggerConfig ********************************************
struct Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAzr_GrabTriggerConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAzr_GrabTriggerConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration for Grab Trigger Mode\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration for Grab Trigger Mode" },
#endif
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Destination for the object if ResetTransform is called\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destination for the object if ResetTransform is called" },
#endif
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
}; // struct Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics
static_assert(std::is_polymorphic<FAzr_GrabTriggerConfig>() == std::is_polymorphic<FAzr_GrabConfig>(), "USTRUCT FAzr_GrabTriggerConfig cannot be polymorphic unless super FAzr_GrabConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAzr_GrabTriggerConfig;
class UScriptStruct* FAzr_GrabTriggerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAzr_GrabTriggerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAzr_GrabTriggerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig, (UObject*)Z_Construct_UPackage__Script_AzurealXR(), TEXT("Azr_GrabTriggerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FAzr_GrabTriggerConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FAzr_GrabTriggerConfig Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics::NewProp_TriggerHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics::NewProp_TriggerHand = { "TriggerHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_GrabTriggerConfig, TriggerHand), Z_Construct_UEnum_AzurealXR_EAzr_HandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerHand_MetaData), NewProp_TriggerHand_MetaData) }; // 2720552866
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics::NewProp_TriggerThreshold = { "TriggerThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_GrabTriggerConfig, TriggerThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerThreshold_MetaData), NewProp_TriggerThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics::NewProp_ResetTransform = { "ResetTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_GrabTriggerConfig, ResetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetTransform_MetaData), NewProp_ResetTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics::NewProp_TriggerHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics::NewProp_TriggerHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics::NewProp_TriggerThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics::NewProp_ResetTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAzr_GrabTriggerConfig Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AzurealXR,
	Z_Construct_UScriptStruct_FAzr_GrabConfig,
	&NewStructOps,
	"Azr_GrabTriggerConfig",
	Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics::PropPointers),
	sizeof(FAzr_GrabTriggerConfig),
	alignof(FAzr_GrabTriggerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FAzr_GrabTriggerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAzr_GrabTriggerConfig.InnerSingleton, Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAzr_GrabTriggerConfig.InnerSingleton);
}
// ********** End ScriptStruct FAzr_GrabTriggerConfig **********************************************

// ********** Begin Class UAzr_Grab Function DisableGrab *******************************************
struct Z_Construct_UFunction_UAzr_Grab_DisableGrab_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableGrab constinit property declarations ***************************
// ********** End Function DisableGrab constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Grab_DisableGrab_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Grab, nullptr, "DisableGrab", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_DisableGrab_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Grab_DisableGrab_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAzr_Grab_DisableGrab()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Grab_DisableGrab_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzr_Grab::execDisableGrab)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableGrab();
	P_NATIVE_END;
}
// ********** End Class UAzr_Grab Function DisableGrab *********************************************

// ********** Begin Class UAzr_Grab Function DisableGrabAttach *************************************
struct Z_Construct_UFunction_UAzr_Grab_DisableGrabAttach_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableGrabAttach constinit property declarations *********************
// ********** End Function DisableGrabAttach constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Grab_DisableGrabAttach_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Grab, nullptr, "DisableGrabAttach", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_DisableGrabAttach_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Grab_DisableGrabAttach_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAzr_Grab_DisableGrabAttach()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Grab_DisableGrabAttach_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzr_Grab::execDisableGrabAttach)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableGrabAttach();
	P_NATIVE_END;
}
// ********** End Class UAzr_Grab Function DisableGrabAttach ***************************************

// ********** Begin Class UAzr_Grab Function DisableGrabRemove *************************************
struct Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove_Statics
{
	struct Azr_Grab_eventDisableGrabRemove_Parms
	{
		bool bResetTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableGrabRemove constinit property declarations *********************
	static void NewProp_bResetTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DisableGrabRemove constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DisableGrabRemove Property Definitions ********************************
void Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove_Statics::NewProp_bResetTransform_SetBit(void* Obj)
{
	((Azr_Grab_eventDisableGrabRemove_Parms*)Obj)->bResetTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove_Statics::NewProp_bResetTransform = { "bResetTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_Grab_eventDisableGrabRemove_Parms), &Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove_Statics::NewProp_bResetTransform_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove_Statics::NewProp_bResetTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove_Statics::PropPointers) < 2048);
// ********** End Function DisableGrabRemove Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Grab, nullptr, "DisableGrabRemove", 	Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove_Statics::Azr_Grab_eventDisableGrabRemove_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove_Statics::Azr_Grab_eventDisableGrabRemove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
struct Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger_Statics
{
	struct Azr_Grab_eventDisableGrabTrigger_Parms
	{
		bool bResetTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableGrabTrigger constinit property declarations ********************
	static void NewProp_bResetTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DisableGrabTrigger constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DisableGrabTrigger Property Definitions *******************************
void Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger_Statics::NewProp_bResetTransform_SetBit(void* Obj)
{
	((Azr_Grab_eventDisableGrabTrigger_Parms*)Obj)->bResetTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger_Statics::NewProp_bResetTransform = { "bResetTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_Grab_eventDisableGrabTrigger_Parms), &Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger_Statics::NewProp_bResetTransform_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger_Statics::NewProp_bResetTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger_Statics::PropPointers) < 2048);
// ********** End Function DisableGrabTrigger Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Grab, nullptr, "DisableGrabTrigger", 	Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger_Statics::Azr_Grab_eventDisableGrabTrigger_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger_Statics::Azr_Grab_eventDisableGrabTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
struct Z_Construct_UFunction_UAzr_Grab_EnableGrab_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Grab_EnableGrab_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Grab, nullptr, "EnableGrab", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_EnableGrab_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Grab_EnableGrab_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAzr_Grab_EnableGrab()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Grab_EnableGrab_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzr_Grab::execEnableGrab)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableGrab();
	P_NATIVE_END;
}
// ********** End Class UAzr_Grab Function EnableGrab **********************************************

// ********** Begin Class UAzr_Grab Function EnableGrabAttach **************************************
struct Z_Construct_UFunction_UAzr_Grab_EnableGrabAttach_Statics
{
	struct Azr_Grab_eventEnableGrabAttach_Parms
	{
		int32 SequenceID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzr_Grab_EnableGrabAttach_Statics::NewProp_SequenceID = { "SequenceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Grab_eventEnableGrabAttach_Parms, SequenceID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzr_Grab_EnableGrabAttach_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_Grab_EnableGrabAttach_Statics::NewProp_SequenceID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_EnableGrabAttach_Statics::PropPointers) < 2048);
// ********** End Function EnableGrabAttach Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Grab_EnableGrabAttach_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Grab, nullptr, "EnableGrabAttach", 	Z_Construct_UFunction_UAzr_Grab_EnableGrabAttach_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_EnableGrabAttach_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAzr_Grab_EnableGrabAttach_Statics::Azr_Grab_eventEnableGrabAttach_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_EnableGrabAttach_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Grab_EnableGrabAttach_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAzr_Grab_EnableGrabAttach_Statics::Azr_Grab_eventEnableGrabAttach_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Grab_EnableGrabAttach()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Grab_EnableGrabAttach_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
struct Z_Construct_UFunction_UAzr_Grab_EnableGrabRemove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableGrabRemove constinit property declarations **********************
// ********** End Function EnableGrabRemove constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Grab_EnableGrabRemove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Grab, nullptr, "EnableGrabRemove", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_EnableGrabRemove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Grab_EnableGrabRemove_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAzr_Grab_EnableGrabRemove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Grab_EnableGrabRemove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzr_Grab::execEnableGrabRemove)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableGrabRemove();
	P_NATIVE_END;
}
// ********** End Class UAzr_Grab Function EnableGrabRemove ****************************************

// ********** Begin Class UAzr_Grab Function EnableGrabTrigger *************************************
struct Z_Construct_UFunction_UAzr_Grab_EnableGrabTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableGrabTrigger constinit property declarations *********************
// ********** End Function EnableGrabTrigger constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Grab_EnableGrabTrigger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Grab, nullptr, "EnableGrabTrigger", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_EnableGrabTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Grab_EnableGrabTrigger_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAzr_Grab_EnableGrabTrigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Grab_EnableGrabTrigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzr_Grab::execEnableGrabTrigger)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableGrabTrigger();
	P_NATIVE_END;
}
// ********** End Class UAzr_Grab Function EnableGrabTrigger ***************************************

// ********** Begin Class UAzr_Grab Function SetTriggerHand ****************************************
struct Z_Construct_UFunction_UAzr_Grab_SetTriggerHand_Statics
{
	struct Azr_Grab_eventSetTriggerHand_Parms
	{
		EAzr_HandType NewHand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- RUNTIME SETTERS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- RUNTIME SETTERS ---" },
#endif
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAzr_Grab_SetTriggerHand_Statics::NewProp_NewHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAzr_Grab_SetTriggerHand_Statics::NewProp_NewHand = { "NewHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Grab_eventSetTriggerHand_Parms, NewHand), Z_Construct_UEnum_AzurealXR_EAzr_HandType, METADATA_PARAMS(0, nullptr) }; // 2720552866
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzr_Grab_SetTriggerHand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_Grab_SetTriggerHand_Statics::NewProp_NewHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_Grab_SetTriggerHand_Statics::NewProp_NewHand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_SetTriggerHand_Statics::PropPointers) < 2048);
// ********** End Function SetTriggerHand Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Grab_SetTriggerHand_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Grab, nullptr, "SetTriggerHand", 	Z_Construct_UFunction_UAzr_Grab_SetTriggerHand_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_SetTriggerHand_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAzr_Grab_SetTriggerHand_Statics::Azr_Grab_eventSetTriggerHand_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_SetTriggerHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Grab_SetTriggerHand_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAzr_Grab_SetTriggerHand_Statics::Azr_Grab_eventSetTriggerHand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Grab_SetTriggerHand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Grab_SetTriggerHand_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
struct Z_Construct_UFunction_UAzr_Grab_SetTriggerThreshold_Statics
{
	struct Azr_Grab_eventSetTriggerThreshold_Parms
	{
		float NewThreshold;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAzr_Grab_SetTriggerThreshold_Statics::NewProp_NewThreshold = { "NewThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Grab_eventSetTriggerThreshold_Parms, NewThreshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzr_Grab_SetTriggerThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_Grab_SetTriggerThreshold_Statics::NewProp_NewThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_SetTriggerThreshold_Statics::PropPointers) < 2048);
// ********** End Function SetTriggerThreshold Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Grab_SetTriggerThreshold_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Grab, nullptr, "SetTriggerThreshold", 	Z_Construct_UFunction_UAzr_Grab_SetTriggerThreshold_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_SetTriggerThreshold_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAzr_Grab_SetTriggerThreshold_Statics::Azr_Grab_eventSetTriggerThreshold_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Grab_SetTriggerThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Grab_SetTriggerThreshold_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAzr_Grab_SetTriggerThreshold_Statics::Azr_Grab_eventSetTriggerThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Grab_SetTriggerThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Grab_SetTriggerThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_Grab;
UClass* UAzr_Grab::GetPrivateStaticClass()
{
	using TClass = UAzr_Grab;
	if (!Z_Registration_Info_UClass_UAzr_Grab.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Azr_Grab"),
			Z_Registration_Info_UClass_UAzr_Grab.InnerSingleton,
			StaticRegisterNativesUAzr_Grab,
			sizeof(TClass),
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
UClass* Z_Construct_UClass_UAzr_Grab_NoRegister()
{
	return UAzr_Grab::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAzr_Grab_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
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
		{ "DisplayName", "Grab" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- CONFIGS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabAttach_MetaData[] = {
		{ "Category", "Grab Configuration" },
		{ "DisplayName", "Grab Attach" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabRemove_MetaData[] = {
		{ "Category", "Grab Configuration" },
		{ "DisplayName", "Grab Remove" },
		{ "ModuleRelativePath", "Public/Azr_Grab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabTrigger_MetaData[] = {
		{ "Category", "Grab Configuration" },
		{ "DisplayName", "Grab Trigger" },
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
		{ .NameUTF8 = UTF8TEXT("SetTriggerHand"), .Pointer = &UAzr_Grab::execSetTriggerHand },
		{ .NameUTF8 = UTF8TEXT("SetTriggerThreshold"), .Pointer = &UAzr_Grab::execSetTriggerThreshold },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_Grab_DisableGrab, "DisableGrab" }, // 600446620
		{ &Z_Construct_UFunction_UAzr_Grab_DisableGrabAttach, "DisableGrabAttach" }, // 1670469439
		{ &Z_Construct_UFunction_UAzr_Grab_DisableGrabRemove, "DisableGrabRemove" }, // 110603135
		{ &Z_Construct_UFunction_UAzr_Grab_DisableGrabTrigger, "DisableGrabTrigger" }, // 3376089499
		{ &Z_Construct_UFunction_UAzr_Grab_EnableGrab, "EnableGrab" }, // 4133215232
		{ &Z_Construct_UFunction_UAzr_Grab_EnableGrabAttach, "EnableGrabAttach" }, // 2287919435
		{ &Z_Construct_UFunction_UAzr_Grab_EnableGrabRemove, "EnableGrabRemove" }, // 1325594200
		{ &Z_Construct_UFunction_UAzr_Grab_EnableGrabTrigger, "EnableGrabTrigger" }, // 2076282305
		{ &Z_Construct_UFunction_UAzr_Grab_SetTriggerHand, "SetTriggerHand" }, // 716101384
		{ &Z_Construct_UFunction_UAzr_Grab_SetTriggerThreshold, "SetTriggerThreshold" }, // 4206076326
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_Grab>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAzr_Grab_Statics

// ********** Begin Class UAzr_Grab Property Definitions *******************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_HighlightSpeed = { "HighlightSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, HighlightSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightSpeed_MetaData), NewProp_HighlightSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_SnapSpeed = { "SnapSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, SnapSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapSpeed_MetaData), NewProp_SnapSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_SnapThreshold = { "SnapThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, SnapThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapThreshold_MetaData), NewProp_SnapThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_Grab = { "Grab", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, Grab), Z_Construct_UScriptStruct_FAzr_GrabConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grab_MetaData), NewProp_Grab_MetaData) }; // 1278002675
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_GrabAttach = { "GrabAttach", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, GrabAttach), Z_Construct_UScriptStruct_FAzr_GrabAttachConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabAttach_MetaData), NewProp_GrabAttach_MetaData) }; // 2469099576
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_GrabRemove = { "GrabRemove", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, GrabRemove), Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabRemove_MetaData), NewProp_GrabRemove_MetaData) }; // 3470078325
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_GrabTrigger = { "GrabTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, GrabTrigger), Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabTrigger_MetaData), NewProp_GrabTrigger_MetaData) }; // 2231591666
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_SoundHighlightStart = { "SoundHighlightStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, SoundHighlightStart), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundHighlightStart_MetaData), NewProp_SoundHighlightStart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_SoundHighlightEnd = { "SoundHighlightEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, SoundHighlightEnd), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundHighlightEnd_MetaData), NewProp_SoundHighlightEnd_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_OnGrabbed = { "OnGrabbed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, OnGrabbed), Z_Construct_UDelegateFunction_AzurealXR_OnGrabEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrabbed_MetaData), NewProp_OnGrabbed_MetaData) }; // 2968266703
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_OnReleased = { "OnReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, OnReleased), Z_Construct_UDelegateFunction_AzurealXR_OnGrabEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReleased_MetaData), NewProp_OnReleased_MetaData) }; // 2968266703
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_OnGrabAttached = { "OnGrabAttached", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, OnGrabAttached), Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrabAttached_MetaData), NewProp_OnGrabAttached_MetaData) }; // 2389308809
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_OnGrabDetached = { "OnGrabDetached", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, OnGrabDetached), Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrabDetached_MetaData), NewProp_OnGrabDetached_MetaData) }; // 2649915174
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_OnGrabRemoved = { "OnGrabRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, OnGrabRemoved), Z_Construct_UDelegateFunction_AzurealXR_OnGrabRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrabRemoved_MetaData), NewProp_OnGrabRemoved_MetaData) }; // 3041622655
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_OnGrabTriggered = { "OnGrabTriggered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, OnGrabTriggered), Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrabTriggered_MetaData), NewProp_OnGrabTriggered_MetaData) }; // 2061118985
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_OnGrabTriggerReleased = { "OnGrabTriggerReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, OnGrabTriggerReleased), Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrabTriggerReleased_MetaData), NewProp_OnGrabTriggerReleased_MetaData) }; // 2061118985
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_StartAnchor = { "StartAnchor", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, StartAnchor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAnchor_MetaData), NewProp_StartAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_EndAnchor = { "EndAnchor", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, EndAnchor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndAnchor_MetaData), NewProp_EndAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_TetherCable = { "TetherCable", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, TetherCable), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherCable_MetaData), NewProp_TetherCable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_HighlightMPC = { "HighlightMPC", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, HighlightMPC), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMPC_MetaData), NewProp_HighlightMPC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_CurrentHand = { "CurrentHand", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, CurrentHand), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHand_MetaData), NewProp_CurrentHand_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_CurrentTargetMesh = { "CurrentTargetMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, CurrentTargetMesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTargetMesh_MetaData), NewProp_CurrentTargetMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_AutoDetectedMesh = { "AutoDetectedMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, AutoDetectedMesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoDetectedMesh_MetaData), NewProp_AutoDetectedMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_CurrentTargetWidget = { "CurrentTargetWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, CurrentTargetWidget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTargetWidget_MetaData), NewProp_CurrentTargetWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Grab_Statics::NewProp_CachedCameraManager = { "CachedCameraManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Grab, CachedCameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCameraManager_MetaData), NewProp_CachedCameraManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAzr_Grab_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_HighlightSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_SnapSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_SnapThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_Grab,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_GrabAttach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_GrabRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_GrabTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_SoundHighlightStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_SoundHighlightEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_OnGrabbed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_OnReleased,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_OnGrabAttached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_OnGrabDetached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_OnGrabRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_OnGrabTriggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_OnGrabTriggerReleased,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_StartAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_EndAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_TetherCable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_HighlightMPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_CurrentHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_CurrentTargetMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_AutoDetectedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_CurrentTargetWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Grab_Statics::NewProp_CachedCameraManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Grab_Statics::PropPointers) < 2048);
// ********** End Class UAzr_Grab Property Definitions *********************************************
UObject* (*const Z_Construct_UClass_UAzr_Grab_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Grab_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzr_Grab_Statics::ClassParams = {
	&UAzr_Grab::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAzr_Grab_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Grab_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Grab_Statics::Class_MetaDataParams), Z_Construct_UClass_UAzr_Grab_Statics::Class_MetaDataParams)
};
void UAzr_Grab::StaticRegisterNativesUAzr_Grab()
{
	UClass* Class = UAzr_Grab::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAzr_Grab_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAzr_Grab()
{
	if (!Z_Registration_Info_UClass_UAzr_Grab.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_Grab.OuterSingleton, Z_Construct_UClass_UAzr_Grab_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_Grab.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_Grab);
UAzr_Grab::~UAzr_Grab() {}
// ********** End Class UAzr_Grab ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h__Script_AzurealXR_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAzr_HandType_StaticEnum, TEXT("EAzr_HandType"), &Z_Registration_Info_UEnum_EAzr_HandType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2720552866U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAzr_GrabConfig::StaticStruct, Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics::NewStructOps, TEXT("Azr_GrabConfig"),&Z_Registration_Info_UScriptStruct_FAzr_GrabConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzr_GrabConfig), 1278002675U) },
		{ FAzr_GrabAttachConfig::StaticStruct, Z_Construct_UScriptStruct_FAzr_GrabAttachConfig_Statics::NewStructOps, TEXT("Azr_GrabAttachConfig"),&Z_Registration_Info_UScriptStruct_FAzr_GrabAttachConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzr_GrabAttachConfig), 2469099576U) },
		{ FAzr_GrabRemoveConfig::StaticStruct, Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics::NewStructOps, TEXT("Azr_GrabRemoveConfig"),&Z_Registration_Info_UScriptStruct_FAzr_GrabRemoveConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzr_GrabRemoveConfig), 3470078325U) },
		{ FAzr_GrabTriggerConfig::StaticStruct, Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics::NewStructOps, TEXT("Azr_GrabTriggerConfig"),&Z_Registration_Info_UScriptStruct_FAzr_GrabTriggerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzr_GrabTriggerConfig), 2231591666U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_Grab, UAzr_Grab::StaticClass, TEXT("UAzr_Grab"), &Z_Registration_Info_UClass_UAzr_Grab, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_Grab), 4180499873U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h__Script_AzurealXR_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h__Script_AzurealXR_3558361755{
	TEXT("/Script/AzurealXR"),
	Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h__Script_AzurealXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h__Script_AzurealXR_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h__Script_AzurealXR_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h__Script_AzurealXR_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h__Script_AzurealXR_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h__Script_AzurealXR_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
