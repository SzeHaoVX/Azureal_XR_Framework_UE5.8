// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Latch.h"
#include "Azr_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Latch() {}

// ********** Begin Cross Module References ********************************************************
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Latch();
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Latch_NoRegister();
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_Axis();
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode();
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_LatchTrigger();
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_LatchType();
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnLatchEvent__DelegateSignature();
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature();
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_TetherConfig();
CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AzurealXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnLatchEvent *********************************************************
struct Z_Construct_UDelegateFunction_AzurealXR_OnLatchEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AzurealXR_OnLatchEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnLatchEvent__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzurealXR_OnLatchEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AzurealXR_OnLatchEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnLatchEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AzurealXR_OnLatchEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLatchEvent_DelegateWrapper(const FMulticastScriptDelegate& OnLatchEvent)
{
	OnLatchEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnLatchEvent ***********************************************************

// ********** Begin Delegate FOnLatchUpdateEvent ***************************************************
struct Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature_Statics
{
	struct _Script_AzurealXR_eventOnLatchUpdateEvent_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnLatchUpdateEvent_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLatchUpdateEvent Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnLatchUpdateEvent__DelegateSignature", 	Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature_Statics::_Script_AzurealXR_eventOnLatchUpdateEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature_Statics::_Script_AzurealXR_eventOnLatchUpdateEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLatchUpdateEvent_DelegateWrapper(const FMulticastScriptDelegate& OnLatchUpdateEvent, float Value)
{
	struct _Script_AzurealXR_eventOnLatchUpdateEvent_Parms
	{
		float Value;
	};
	_Script_AzurealXR_eventOnLatchUpdateEvent_Parms Parms;
	Parms.Value=Value;
	OnLatchUpdateEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLatchUpdateEvent *****************************************************

// ********** Begin Enum EAzr_LatchType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAzr_LatchType;
static UEnum* EAzr_LatchType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAzr_LatchType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAzr_LatchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_LatchType, (UObject*)Z_Construct_UPackage__Script_AzurealXR(), TEXT("EAzr_LatchType"));
	}
	return Z_Registration_Info_UEnum_EAzr_LatchType.OuterSingleton;
}
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_LatchType>()
{
	return EAzr_LatchType_StaticEnum();
}
struct Z_Construct_UEnum_AzurealXR_EAzr_LatchType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
}; // struct Z_Construct_UEnum_AzurealXR_EAzr_LatchType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzurealXR_EAzr_LatchType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_LatchType",
	"EAzr_LatchType",
	Z_Construct_UEnum_AzurealXR_EAzr_LatchType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AzurealXR_EAzr_LatchType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AzurealXR_EAzr_LatchType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AzurealXR_EAzr_LatchType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_LatchType()
{
	if (!Z_Registration_Info_UEnum_EAzr_LatchType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAzr_LatchType.InnerSingleton, Z_Construct_UEnum_AzurealXR_EAzr_LatchType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAzr_LatchType.InnerSingleton;
}
// ********** End Enum EAzr_LatchType **************************************************************

// ********** Begin Enum EAzr_Axis *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAzr_Axis;
static UEnum* EAzr_Axis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAzr_Axis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAzr_Axis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_Axis, (UObject*)Z_Construct_UPackage__Script_AzurealXR(), TEXT("EAzr_Axis"));
	}
	return Z_Registration_Info_UEnum_EAzr_Axis.OuterSingleton;
}
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_Axis>()
{
	return EAzr_Axis_StaticEnum();
}
struct Z_Construct_UEnum_AzurealXR_EAzr_Axis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
}; // struct Z_Construct_UEnum_AzurealXR_EAzr_Axis_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzurealXR_EAzr_Axis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_Axis",
	"EAzr_Axis",
	Z_Construct_UEnum_AzurealXR_EAzr_Axis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AzurealXR_EAzr_Axis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AzurealXR_EAzr_Axis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AzurealXR_EAzr_Axis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_Axis()
{
	if (!Z_Registration_Info_UEnum_EAzr_Axis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAzr_Axis.InnerSingleton, Z_Construct_UEnum_AzurealXR_EAzr_Axis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAzr_Axis.InnerSingleton;
}
// ********** End Enum EAzr_Axis *******************************************************************

// ********** Begin Enum EAzr_LatchTrigger *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAzr_LatchTrigger;
static UEnum* EAzr_LatchTrigger_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAzr_LatchTrigger.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAzr_LatchTrigger.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_LatchTrigger, (UObject*)Z_Construct_UPackage__Script_AzurealXR(), TEXT("EAzr_LatchTrigger"));
	}
	return Z_Registration_Info_UEnum_EAzr_LatchTrigger.OuterSingleton;
}
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_LatchTrigger>()
{
	return EAzr_LatchTrigger_StaticEnum();
}
struct Z_Construct_UEnum_AzurealXR_EAzr_LatchTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
}; // struct Z_Construct_UEnum_AzurealXR_EAzr_LatchTrigger_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzurealXR_EAzr_LatchTrigger_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_LatchTrigger",
	"EAzr_LatchTrigger",
	Z_Construct_UEnum_AzurealXR_EAzr_LatchTrigger_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AzurealXR_EAzr_LatchTrigger_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AzurealXR_EAzr_LatchTrigger_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AzurealXR_EAzr_LatchTrigger_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_LatchTrigger()
{
	if (!Z_Registration_Info_UEnum_EAzr_LatchTrigger.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAzr_LatchTrigger.InnerSingleton, Z_Construct_UEnum_AzurealXR_EAzr_LatchTrigger_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAzr_LatchTrigger.InnerSingleton;
}
// ********** End Enum EAzr_LatchTrigger ***********************************************************

// ********** Begin Class UAzr_Latch Function DisableLatch *****************************************
struct Z_Construct_UFunction_UAzr_Latch_DisableLatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableLatch constinit property declarations **************************
// ********** End Function DisableLatch constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Latch_DisableLatch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Latch, nullptr, "DisableLatch", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Latch_DisableLatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Latch_DisableLatch_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAzr_Latch_DisableLatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Latch_DisableLatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzr_Latch::execDisableLatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableLatch();
	P_NATIVE_END;
}
// ********** End Class UAzr_Latch Function DisableLatch *******************************************

// ********** Begin Class UAzr_Latch Function EnableLatch ******************************************
struct Z_Construct_UFunction_UAzr_Latch_EnableLatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Latch_EnableLatch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Latch, nullptr, "EnableLatch", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Latch_EnableLatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Latch_EnableLatch_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAzr_Latch_EnableLatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Latch_EnableLatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzr_Latch::execEnableLatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableLatch();
	P_NATIVE_END;
}
// ********** End Class UAzr_Latch Function EnableLatch ********************************************

// ********** Begin Class UAzr_Latch Function HandleTriggerInput ***********************************
struct Z_Construct_UFunction_UAzr_Latch_HandleTriggerInput_Statics
{
	struct Azr_Latch_eventHandleTriggerInput_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAzr_Latch_HandleTriggerInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Latch_eventHandleTriggerInput_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzr_Latch_HandleTriggerInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_Latch_HandleTriggerInput_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Latch_HandleTriggerInput_Statics::PropPointers) < 2048);
// ********** End Function HandleTriggerInput Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Latch_HandleTriggerInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Latch, nullptr, "HandleTriggerInput", 	Z_Construct_UFunction_UAzr_Latch_HandleTriggerInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Latch_HandleTriggerInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAzr_Latch_HandleTriggerInput_Statics::Azr_Latch_eventHandleTriggerInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Latch_HandleTriggerInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Latch_HandleTriggerInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAzr_Latch_HandleTriggerInput_Statics::Azr_Latch_eventHandleTriggerInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Latch_HandleTriggerInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Latch_HandleTriggerInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzr_Latch::execHandleTriggerInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTriggerInput(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UAzr_Latch Function HandleTriggerInput *************************************

// ********** Begin Class UAzr_Latch ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_Latch;
UClass* UAzr_Latch::GetPrivateStaticClass()
{
	using TClass = UAzr_Latch;
	if (!Z_Registration_Info_UClass_UAzr_Latch.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Azr_Latch"),
			Z_Registration_Info_UClass_UAzr_Latch.InnerSingleton,
			StaticRegisterNativesUAzr_Latch,
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
	return Z_Registration_Info_UClass_UAzr_Latch.InnerSingleton;
}
UClass* Z_Construct_UClass_UAzr_Latch_NoRegister()
{
	return UAzr_Latch::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAzr_Latch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AzurealXR" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Azr_Latch.h" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatchType_MetaData[] = {
		{ "Category", "Latch Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- CONFIGURATION ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- CONFIGURATION ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionAxis_MetaData[] = {
		{ "Category", "Latch Configuration" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertRotation_MetaData[] = {
		{ "Category", "Latch Configuration" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLeverArmLength_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalZoneParent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalLeftSnapParent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalRightSnapParent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Latch.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_Latch constinit property declarations *******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_LatchType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LatchType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionAxis;
	static void NewProp_bInvertRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLeverArmLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LimitMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LimitMax;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LatchTrigger_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LatchTrigger;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerThreshold;
	static void NewProp_bUseAutoReturn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAutoReturn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HandleMeshName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBreakDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HandFlyDuration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HighlightMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HighlightMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TetherSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighlightSpeed;
	static void NewProp_bHapticOnStep_SetBit(void* Obj);
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalZoneParent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalLeftSnapParent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalRightSnapParent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_Latch constinit property declarations *********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DisableLatch"), .Pointer = &UAzr_Latch::execDisableLatch },
		{ .NameUTF8 = UTF8TEXT("EnableLatch"), .Pointer = &UAzr_Latch::execEnableLatch },
		{ .NameUTF8 = UTF8TEXT("HandleTriggerInput"), .Pointer = &UAzr_Latch::execHandleTriggerInput },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_Latch_DisableLatch, "DisableLatch" }, // 429715560
		{ &Z_Construct_UFunction_UAzr_Latch_EnableLatch, "EnableLatch" }, // 196487916
		{ &Z_Construct_UFunction_UAzr_Latch_HandleTriggerInput, "HandleTriggerInput" }, // 413683216
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_Latch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAzr_Latch_Statics

// ********** Begin Class UAzr_Latch Property Definitions ******************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_LatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_LatchType = { "LatchType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, LatchType), Z_Construct_UEnum_AzurealXR_EAzr_LatchType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatchType_MetaData), NewProp_LatchType_MetaData) }; // 3193543223
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_InteractionAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_InteractionAxis = { "InteractionAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, InteractionAxis), Z_Construct_UEnum_AzurealXR_EAzr_Axis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionAxis_MetaData), NewProp_InteractionAxis_MetaData) }; // 597361715
void Z_Construct_UClass_UAzr_Latch_Statics::NewProp_bInvertRotation_SetBit(void* Obj)
{
	((UAzr_Latch*)Obj)->bInvertRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_bInvertRotation = { "bInvertRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAzr_Latch), &Z_Construct_UClass_UAzr_Latch_Statics::NewProp_bInvertRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertRotation_MetaData), NewProp_bInvertRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_MinLeverArmLength = { "MinLeverArmLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, MinLeverArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLeverArmLength_MetaData), NewProp_MinLeverArmLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_StartValue = { "StartValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, StartValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartValue_MetaData), NewProp_StartValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_LimitMin = { "LimitMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, LimitMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitMin_MetaData), NewProp_LimitMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_LimitMax = { "LimitMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, LimitMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitMax_MetaData), NewProp_LimitMax_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_LatchTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_LatchTrigger = { "LatchTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, LatchTrigger), Z_Construct_UEnum_AzurealXR_EAzr_LatchTrigger, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatchTrigger_MetaData), NewProp_LatchTrigger_MetaData) }; // 769717544
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_TriggerThreshold = { "TriggerThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, TriggerThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerThreshold_MetaData), NewProp_TriggerThreshold_MetaData) };
void Z_Construct_UClass_UAzr_Latch_Statics::NewProp_bUseAutoReturn_SetBit(void* Obj)
{
	((UAzr_Latch*)Obj)->bUseAutoReturn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_bUseAutoReturn = { "bUseAutoReturn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAzr_Latch), &Z_Construct_UClass_UAzr_Latch_Statics::NewProp_bUseAutoReturn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAutoReturn_MetaData), NewProp_bUseAutoReturn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_ReturnSpeed = { "ReturnSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, ReturnSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnSpeed_MetaData), NewProp_ReturnSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, Damping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damping_MetaData), NewProp_Damping_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_HandleMeshName = { "HandleMeshName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, HandleMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleMeshName_MetaData), NewProp_HandleMeshName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_MaxBreakDistance = { "MaxBreakDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, MaxBreakDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBreakDistance_MetaData), NewProp_MaxBreakDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_HandFlyDuration = { "HandFlyDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, HandFlyDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandFlyDuration_MetaData), NewProp_HandFlyDuration_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_HighlightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_HighlightMode = { "HighlightMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, HighlightMode), Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMode_MetaData), NewProp_HighlightMode_MetaData) }; // 3885943093
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_TetherSettings = { "TetherSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, TetherSettings), Z_Construct_UScriptStruct_FAzr_TetherConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherSettings_MetaData), NewProp_TetherSettings_MetaData) }; // 3635324092
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_HighlightSpeed = { "HighlightSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, HighlightSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightSpeed_MetaData), NewProp_HighlightSpeed_MetaData) };
void Z_Construct_UClass_UAzr_Latch_Statics::NewProp_bHapticOnStep_SetBit(void* Obj)
{
	((UAzr_Latch*)Obj)->bHapticOnStep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_bHapticOnStep = { "bHapticOnStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAzr_Latch), &Z_Construct_UClass_UAzr_Latch_Statics::NewProp_bHapticOnStep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHapticOnStep_MetaData), NewProp_bHapticOnStep_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, StepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepSize_MetaData), NewProp_StepSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_HapticEffect = { "HapticEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, HapticEffect), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HapticEffect_MetaData), NewProp_HapticEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_HapticIntensity = { "HapticIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, HapticIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HapticIntensity_MetaData), NewProp_HapticIntensity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_SoundHighlightStart = { "SoundHighlightStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, SoundHighlightStart), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundHighlightStart_MetaData), NewProp_SoundHighlightStart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_SoundHighlightEnd = { "SoundHighlightEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, SoundHighlightEnd), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundHighlightEnd_MetaData), NewProp_SoundHighlightEnd_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_SoundOnLatch = { "SoundOnLatch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, SoundOnLatch), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundOnLatch_MetaData), NewProp_SoundOnLatch_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_SoundOnRelease = { "SoundOnRelease", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, SoundOnRelease), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundOnRelease_MetaData), NewProp_SoundOnRelease_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, OnValueChanged), Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnValueChanged_MetaData), NewProp_OnValueChanged_MetaData) }; // 1033878773
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_OnRawValueChanged = { "OnRawValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, OnRawValueChanged), Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRawValueChanged_MetaData), NewProp_OnRawValueChanged_MetaData) }; // 1033878773
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_OnLatched = { "OnLatched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, OnLatched), Z_Construct_UDelegateFunction_AzurealXR_OnLatchEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLatched_MetaData), NewProp_OnLatched_MetaData) }; // 3063510502
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_OnLatchReleased = { "OnLatchReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, OnLatchReleased), Z_Construct_UDelegateFunction_AzurealXR_OnLatchEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLatchReleased_MetaData), NewProp_OnLatchReleased_MetaData) }; // 3063510502
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_StartAnchor = { "StartAnchor", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, StartAnchor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAnchor_MetaData), NewProp_StartAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_EndAnchor = { "EndAnchor", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, EndAnchor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndAnchor_MetaData), NewProp_EndAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_TetherCable = { "TetherCable", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, TetherCable), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherCable_MetaData), NewProp_TetherCable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_HighlightMPC = { "HighlightMPC", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, HighlightMPC), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMPC_MetaData), NewProp_HighlightMPC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_ActiveHands_Inner = { "ActiveHands", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_ActiveHands = { "ActiveHands", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, ActiveHands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveHands_MetaData), NewProp_ActiveHands_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_ActiveGhostHands_Inner = { "ActiveGhostHands", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_ActiveGhostHands = { "ActiveGhostHands", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, ActiveGhostHands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveGhostHands_MetaData), NewProp_ActiveGhostHands_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_TargetHandleMesh = { "TargetHandleMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, TargetHandleMesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetHandleMesh_MetaData), NewProp_TargetHandleMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_AutoDetectedMesh = { "AutoDetectedMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, AutoDetectedMesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoDetectedMesh_MetaData), NewProp_AutoDetectedMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_CurrentTargetWidget = { "CurrentTargetWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, CurrentTargetWidget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTargetWidget_MetaData), NewProp_CurrentTargetWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_OriginalZoneParent = { "OriginalZoneParent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, OriginalZoneParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalZoneParent_MetaData), NewProp_OriginalZoneParent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_OriginalLeftSnapParent = { "OriginalLeftSnapParent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, OriginalLeftSnapParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalLeftSnapParent_MetaData), NewProp_OriginalLeftSnapParent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Latch_Statics::NewProp_OriginalRightSnapParent = { "OriginalRightSnapParent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Latch, OriginalRightSnapParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalRightSnapParent_MetaData), NewProp_OriginalRightSnapParent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAzr_Latch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_LatchType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_LatchType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_InteractionAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_InteractionAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_bInvertRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_MinLeverArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_StartValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_LimitMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_LimitMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_LatchTrigger_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_LatchTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_TriggerThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_bUseAutoReturn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_ReturnSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_Damping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_HandleMeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_MaxBreakDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_HandFlyDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_HighlightMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_HighlightMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_TetherSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_HighlightSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_bHapticOnStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_StepSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_HapticEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_HapticIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_SoundHighlightStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_SoundHighlightEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_SoundOnLatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_SoundOnRelease,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_OnValueChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_OnRawValueChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_OnLatched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_OnLatchReleased,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_StartAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_EndAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_TetherCable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_HighlightMPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_ActiveHands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_ActiveHands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_ActiveGhostHands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_ActiveGhostHands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_TargetHandleMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_AutoDetectedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_CurrentTargetWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_OriginalZoneParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_OriginalLeftSnapParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Latch_Statics::NewProp_OriginalRightSnapParent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Latch_Statics::PropPointers) < 2048);
// ********** End Class UAzr_Latch Property Definitions ********************************************
UObject* (*const Z_Construct_UClass_UAzr_Latch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Latch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzr_Latch_Statics::ClassParams = {
	&UAzr_Latch::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAzr_Latch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Latch_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Latch_Statics::Class_MetaDataParams), Z_Construct_UClass_UAzr_Latch_Statics::Class_MetaDataParams)
};
void UAzr_Latch::StaticRegisterNativesUAzr_Latch()
{
	UClass* Class = UAzr_Latch::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAzr_Latch_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAzr_Latch()
{
	if (!Z_Registration_Info_UClass_UAzr_Latch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_Latch.OuterSingleton, Z_Construct_UClass_UAzr_Latch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_Latch.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_Latch);
UAzr_Latch::~UAzr_Latch() {}
// ********** End Class UAzr_Latch *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Latch_h__Script_AzurealXR_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAzr_LatchType_StaticEnum, TEXT("EAzr_LatchType"), &Z_Registration_Info_UEnum_EAzr_LatchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3193543223U) },
		{ EAzr_Axis_StaticEnum, TEXT("EAzr_Axis"), &Z_Registration_Info_UEnum_EAzr_Axis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 597361715U) },
		{ EAzr_LatchTrigger_StaticEnum, TEXT("EAzr_LatchTrigger"), &Z_Registration_Info_UEnum_EAzr_LatchTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 769717544U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_Latch, UAzr_Latch::StaticClass, TEXT("UAzr_Latch"), &Z_Registration_Info_UClass_UAzr_Latch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_Latch), 1833733725U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Latch_h__Script_AzurealXR_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Latch_h__Script_AzurealXR_1084695681{
	TEXT("/Script/AzurealXR"),
	Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Latch_h__Script_AzurealXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Latch_h__Script_AzurealXR_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Latch_h__Script_AzurealXR_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Latch_h__Script_AzurealXR_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
