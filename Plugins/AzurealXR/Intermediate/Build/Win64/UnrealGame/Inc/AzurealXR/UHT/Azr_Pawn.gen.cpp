// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Pawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Pawn() {}

// ********** Begin Cross Module References ********************************************************
AZUREALXR_API UClass* Z_Construct_UClass_AAzr_Pawn();
AZUREALXR_API UClass* Z_Construct_UClass_AAzr_Pawn_NoRegister();
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_HandAnimInstance_NoRegister();
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_HandScanner_NoRegister();
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Teleport_NoRegister();
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EBackBehavior();
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EForwardBehavior();
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_ETurnBehavior();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AzurealXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EForwardBehavior **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EForwardBehavior;
static UEnum* EForwardBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EForwardBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EForwardBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EForwardBehavior, (UObject*)Z_Construct_UPackage__Script_AzurealXR(), TEXT("EForwardBehavior"));
	}
	return Z_Registration_Info_UEnum_EForwardBehavior.OuterSingleton;
}
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EForwardBehavior>()
{
	return EForwardBehavior_StaticEnum();
}
struct Z_Construct_UEnum_AzurealXR_EForwardBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
		{ "SmoothMove.DisplayName", "Smooth Movement" },
		{ "SmoothMove.Name", "EForwardBehavior::SmoothMove" },
		{ "Teleport.DisplayName", "Teleport" },
		{ "Teleport.Name", "EForwardBehavior::Teleport" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EForwardBehavior::Teleport", (int64)EForwardBehavior::Teleport },
		{ "EForwardBehavior::SmoothMove", (int64)EForwardBehavior::SmoothMove },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_AzurealXR_EForwardBehavior_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzurealXR_EForwardBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EForwardBehavior",
	"EForwardBehavior",
	Z_Construct_UEnum_AzurealXR_EForwardBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AzurealXR_EForwardBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AzurealXR_EForwardBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AzurealXR_EForwardBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AzurealXR_EForwardBehavior()
{
	if (!Z_Registration_Info_UEnum_EForwardBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EForwardBehavior.InnerSingleton, Z_Construct_UEnum_AzurealXR_EForwardBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EForwardBehavior.InnerSingleton;
}
// ********** End Enum EForwardBehavior ************************************************************

// ********** Begin Enum ETurnBehavior *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETurnBehavior;
static UEnum* ETurnBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETurnBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETurnBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_ETurnBehavior, (UObject*)Z_Construct_UPackage__Script_AzurealXR(), TEXT("ETurnBehavior"));
	}
	return Z_Registration_Info_UEnum_ETurnBehavior.OuterSingleton;
}
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETurnBehavior>()
{
	return ETurnBehavior_StaticEnum();
}
struct Z_Construct_UEnum_AzurealXR_ETurnBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
		{ "SmoothTurn.DisplayName", "Smooth Turn" },
		{ "SmoothTurn.Name", "ETurnBehavior::SmoothTurn" },
		{ "SnapTurn.DisplayName", "Snap Turn" },
		{ "SnapTurn.Name", "ETurnBehavior::SnapTurn" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETurnBehavior::SnapTurn", (int64)ETurnBehavior::SnapTurn },
		{ "ETurnBehavior::SmoothTurn", (int64)ETurnBehavior::SmoothTurn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_AzurealXR_ETurnBehavior_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzurealXR_ETurnBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"ETurnBehavior",
	"ETurnBehavior",
	Z_Construct_UEnum_AzurealXR_ETurnBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AzurealXR_ETurnBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AzurealXR_ETurnBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AzurealXR_ETurnBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AzurealXR_ETurnBehavior()
{
	if (!Z_Registration_Info_UEnum_ETurnBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETurnBehavior.InnerSingleton, Z_Construct_UEnum_AzurealXR_ETurnBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETurnBehavior.InnerSingleton;
}
// ********** End Enum ETurnBehavior ***************************************************************

// ********** Begin Enum EBackBehavior *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBackBehavior;
static UEnum* EBackBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBackBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBackBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EBackBehavior, (UObject*)Z_Construct_UPackage__Script_AzurealXR(), TEXT("EBackBehavior"));
	}
	return Z_Registration_Info_UEnum_EBackBehavior.OuterSingleton;
}
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EBackBehavior>()
{
	return EBackBehavior_StaticEnum();
}
struct Z_Construct_UEnum_AzurealXR_EBackBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlinkStep.DisplayName", "Blink Step (Fade Back)" },
		{ "BlinkStep.Name", "EBackBehavior::BlinkStep" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
		{ "None.DisplayName", "Do Nothing" },
		{ "None.Name", "EBackBehavior::None" },
		{ "SmoothMove.DisplayName", "Smooth Move Back" },
		{ "SmoothMove.Name", "EBackBehavior::SmoothMove" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBackBehavior::BlinkStep", (int64)EBackBehavior::BlinkStep },
		{ "EBackBehavior::SmoothMove", (int64)EBackBehavior::SmoothMove },
		{ "EBackBehavior::None", (int64)EBackBehavior::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_AzurealXR_EBackBehavior_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzurealXR_EBackBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EBackBehavior",
	"EBackBehavior",
	Z_Construct_UEnum_AzurealXR_EBackBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AzurealXR_EBackBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AzurealXR_EBackBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AzurealXR_EBackBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AzurealXR_EBackBehavior()
{
	if (!Z_Registration_Info_UEnum_EBackBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBackBehavior.InnerSingleton, Z_Construct_UEnum_AzurealXR_EBackBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBackBehavior.InnerSingleton;
}
// ********** End Enum EBackBehavior ***************************************************************

// ********** Begin Class AAzr_Pawn Function SetLeftHandMesh ***************************************
struct Z_Construct_UFunction_AAzr_Pawn_SetLeftHandMesh_Statics
{
	struct Azr_Pawn_eventSetLeftHandMesh_Parms
	{
		USkeletalMesh* NewMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLeftHandMesh constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLeftHandMesh constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLeftHandMesh Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAzr_Pawn_SetLeftHandMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Pawn_eventSetLeftHandMesh_Parms, NewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAzr_Pawn_SetLeftHandMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAzr_Pawn_SetLeftHandMesh_Statics::NewProp_NewMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Pawn_SetLeftHandMesh_Statics::PropPointers) < 2048);
// ********** End Function SetLeftHandMesh Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAzr_Pawn_SetLeftHandMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAzr_Pawn, nullptr, "SetLeftHandMesh", 	Z_Construct_UFunction_AAzr_Pawn_SetLeftHandMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Pawn_SetLeftHandMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AAzr_Pawn_SetLeftHandMesh_Statics::Azr_Pawn_eventSetLeftHandMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Pawn_SetLeftHandMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAzr_Pawn_SetLeftHandMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAzr_Pawn_SetLeftHandMesh_Statics::Azr_Pawn_eventSetLeftHandMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAzr_Pawn_SetLeftHandMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAzr_Pawn_SetLeftHandMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAzr_Pawn::execSetLeftHandMesh)
{
	P_GET_OBJECT(USkeletalMesh,Z_Param_NewMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLeftHandMesh(Z_Param_NewMesh);
	P_NATIVE_END;
}
// ********** End Class AAzr_Pawn Function SetLeftHandMesh *****************************************

// ********** Begin Class AAzr_Pawn Function SetRightHandMesh **************************************
struct Z_Construct_UFunction_AAzr_Pawn_SetRightHandMesh_Statics
{
	struct Azr_Pawn_eventSetRightHandMesh_Parms
	{
		USkeletalMesh* NewMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetRightHandMesh constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRightHandMesh constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRightHandMesh Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAzr_Pawn_SetRightHandMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Pawn_eventSetRightHandMesh_Parms, NewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAzr_Pawn_SetRightHandMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAzr_Pawn_SetRightHandMesh_Statics::NewProp_NewMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Pawn_SetRightHandMesh_Statics::PropPointers) < 2048);
// ********** End Function SetRightHandMesh Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAzr_Pawn_SetRightHandMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAzr_Pawn, nullptr, "SetRightHandMesh", 	Z_Construct_UFunction_AAzr_Pawn_SetRightHandMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Pawn_SetRightHandMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AAzr_Pawn_SetRightHandMesh_Statics::Azr_Pawn_eventSetRightHandMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Pawn_SetRightHandMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAzr_Pawn_SetRightHandMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAzr_Pawn_SetRightHandMesh_Statics::Azr_Pawn_eventSetRightHandMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAzr_Pawn_SetRightHandMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAzr_Pawn_SetRightHandMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAzr_Pawn::execSetRightHandMesh)
{
	P_GET_OBJECT(USkeletalMesh,Z_Param_NewMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRightHandMesh(Z_Param_NewMesh);
	P_NATIVE_END;
}
// ********** End Class AAzr_Pawn Function SetRightHandMesh ****************************************

// ********** Begin Class AAzr_Pawn ****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AAzr_Pawn;
UClass* AAzr_Pawn::GetPrivateStaticClass()
{
	using TClass = AAzr_Pawn;
	if (!Z_Registration_Info_UClass_AAzr_Pawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Azr_Pawn"),
			Z_Registration_Info_UClass_AAzr_Pawn.InnerSingleton,
			StaticRegisterNativesAAzr_Pawn,
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
	return Z_Registration_Info_UClass_AAzr_Pawn.InnerSingleton;
}
UClass* Z_Construct_UClass_AAzr_Pawn_NoRegister()
{
	return AAzr_Pawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAzr_Pawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AzurealXR" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Azr_Pawn.h" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VROrigin_MetaData[] = {
		{ "Category", "Azureal|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- COMPONENTS ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- COMPONENTS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Azureal|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftMotionController_MetaData[] = {
		{ "Category", "Azureal|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightMotionController_MetaData[] = {
		{ "Category", "Azureal|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandMesh_MetaData[] = {
		{ "Category", "Azureal|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandMesh_MetaData[] = {
		{ "Category", "Azureal|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandScanner_MetaData[] = {
		{ "Category", "Azureal|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandScanner_MetaData[] = {
		{ "Category", "Azureal|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Azureal|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- INPUT ACTIONS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- INPUT ACTIONS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Move_MetaData[] = {
		{ "Category", "Azureal|Input" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Look_MetaData[] = {
		{ "Category", "Azureal|Input" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Grab_Left_MetaData[] = {
		{ "Category", "Azureal|Input" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Grab_Right_MetaData[] = {
		{ "Category", "Azureal|Input" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Trigger_Left_MetaData[] = {
		{ "Category", "Azureal|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TRIGGER INPUTS\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TRIGGER INPUTS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Trigger_Right_MetaData[] = {
		{ "Category", "Azureal|Input" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardInput_MetaData[] = {
		{ "Category", "Azureal|Locomotion Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- CONFIGURATION ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- CONFIGURATION ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnInput_MetaData[] = {
		{ "Category", "Azureal|Locomotion Config" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackwardInput_MetaData[] = {
		{ "Category", "Azureal|Locomotion Config" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapTurnAngle_MetaData[] = {
		{ "Category", "Azureal|Locomotion Config" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothTurnSpeed_MetaData[] = {
		{ "Category", "Azureal|Locomotion Config" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothMoveSpeed_MetaData[] = {
		{ "Category", "Azureal|Locomotion Config" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlinkStepDistance_MetaData[] = {
		{ "Category", "Azureal|Locomotion Config" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandAnimSpeed_MetaData[] = {
		{ "Category", "Azureal|Animation" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVRMode_MetaData[] = {
		{ "Category", "Azureal|State" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedTeleportComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandAnim_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandAnim_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAzr_Pawn constinit property declarations ********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VROrigin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftMotionController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightMotionController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHandMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHandMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHandScanner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHandScanner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Move;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Look;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Grab_Left;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Grab_Right;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Trigger_Left;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Trigger_Right;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ForwardInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ForwardInput;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TurnInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TurnInput;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BackwardInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BackwardInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapTurnAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothTurnSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlinkStepDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HandAnimSpeed;
	static void NewProp_bIsVRMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVRMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedTeleportComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHandAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHandAnim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAzr_Pawn constinit property declarations **********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetLeftHandMesh"), .Pointer = &AAzr_Pawn::execSetLeftHandMesh },
		{ .NameUTF8 = UTF8TEXT("SetRightHandMesh"), .Pointer = &AAzr_Pawn::execSetRightHandMesh },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAzr_Pawn_SetLeftHandMesh, "SetLeftHandMesh" }, // 1319681168
		{ &Z_Construct_UFunction_AAzr_Pawn_SetRightHandMesh, "SetRightHandMesh" }, // 105950043
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAzr_Pawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAzr_Pawn_Statics

// ********** Begin Class AAzr_Pawn Property Definitions *******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_VROrigin = { "VROrigin", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, VROrigin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VROrigin_MetaData), NewProp_VROrigin_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_LeftMotionController = { "LeftMotionController", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, LeftMotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftMotionController_MetaData), NewProp_LeftMotionController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_RightMotionController = { "RightMotionController", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, RightMotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightMotionController_MetaData), NewProp_RightMotionController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_LeftHandMesh = { "LeftHandMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, LeftHandMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandMesh_MetaData), NewProp_LeftHandMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_RightHandMesh = { "RightHandMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, RightHandMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandMesh_MetaData), NewProp_RightHandMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_LeftHandScanner = { "LeftHandScanner", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, LeftHandScanner), Z_Construct_UClass_UAzr_HandScanner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandScanner_MetaData), NewProp_LeftHandScanner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_RightHandScanner = { "RightHandScanner", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, RightHandScanner), Z_Construct_UClass_UAzr_HandScanner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandScanner_MetaData), NewProp_RightHandScanner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_IA_Move = { "IA_Move", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, IA_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Move_MetaData), NewProp_IA_Move_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_IA_Look = { "IA_Look", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, IA_Look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Look_MetaData), NewProp_IA_Look_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_IA_Grab_Left = { "IA_Grab_Left", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, IA_Grab_Left), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Grab_Left_MetaData), NewProp_IA_Grab_Left_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_IA_Grab_Right = { "IA_Grab_Right", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, IA_Grab_Right), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Grab_Right_MetaData), NewProp_IA_Grab_Right_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_IA_Trigger_Left = { "IA_Trigger_Left", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, IA_Trigger_Left), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Trigger_Left_MetaData), NewProp_IA_Trigger_Left_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_IA_Trigger_Right = { "IA_Trigger_Right", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, IA_Trigger_Right), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Trigger_Right_MetaData), NewProp_IA_Trigger_Right_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_ForwardInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_ForwardInput = { "ForwardInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, ForwardInput), Z_Construct_UEnum_AzurealXR_EForwardBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardInput_MetaData), NewProp_ForwardInput_MetaData) }; // 148808680
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_TurnInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_TurnInput = { "TurnInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, TurnInput), Z_Construct_UEnum_AzurealXR_ETurnBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnInput_MetaData), NewProp_TurnInput_MetaData) }; // 3424375638
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_BackwardInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_BackwardInput = { "BackwardInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, BackwardInput), Z_Construct_UEnum_AzurealXR_EBackBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackwardInput_MetaData), NewProp_BackwardInput_MetaData) }; // 3476218216
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_SnapTurnAngle = { "SnapTurnAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, SnapTurnAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapTurnAngle_MetaData), NewProp_SnapTurnAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_SmoothTurnSpeed = { "SmoothTurnSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, SmoothTurnSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothTurnSpeed_MetaData), NewProp_SmoothTurnSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_SmoothMoveSpeed = { "SmoothMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, SmoothMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothMoveSpeed_MetaData), NewProp_SmoothMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_BlinkStepDistance = { "BlinkStepDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, BlinkStepDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlinkStepDistance_MetaData), NewProp_BlinkStepDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_HandAnimSpeed = { "HandAnimSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, HandAnimSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandAnimSpeed_MetaData), NewProp_HandAnimSpeed_MetaData) };
void Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_bIsVRMode_SetBit(void* Obj)
{
	((AAzr_Pawn*)Obj)->bIsVRMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_bIsVRMode = { "bIsVRMode", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAzr_Pawn), &Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_bIsVRMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVRMode_MetaData), NewProp_bIsVRMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_CachedTeleportComp = { "CachedTeleportComp", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, CachedTeleportComp), Z_Construct_UClass_UAzr_Teleport_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTeleportComp_MetaData), NewProp_CachedTeleportComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_LeftHandAnim = { "LeftHandAnim", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, LeftHandAnim), Z_Construct_UClass_UAzr_HandAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandAnim_MetaData), NewProp_LeftHandAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_RightHandAnim = { "RightHandAnim", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, RightHandAnim), Z_Construct_UClass_UAzr_HandAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandAnim_MetaData), NewProp_RightHandAnim_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAzr_Pawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_VROrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_LeftMotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_RightMotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_LeftHandMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_RightHandMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_LeftHandScanner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_RightHandScanner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_IA_Move,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_IA_Look,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_IA_Grab_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_IA_Grab_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_IA_Trigger_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_IA_Trigger_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_ForwardInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_ForwardInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_TurnInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_TurnInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_BackwardInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_BackwardInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_SnapTurnAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_SmoothTurnSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_SmoothMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_BlinkStepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_HandAnimSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_bIsVRMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_CachedTeleportComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_LeftHandAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Pawn_Statics::NewProp_RightHandAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAzr_Pawn_Statics::PropPointers) < 2048);
// ********** End Class AAzr_Pawn Property Definitions *********************************************
UObject* (*const Z_Construct_UClass_AAzr_Pawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAzr_Pawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAzr_Pawn_Statics::ClassParams = {
	&AAzr_Pawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAzr_Pawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAzr_Pawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAzr_Pawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AAzr_Pawn_Statics::Class_MetaDataParams)
};
void AAzr_Pawn::StaticRegisterNativesAAzr_Pawn()
{
	UClass* Class = AAzr_Pawn::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AAzr_Pawn_Statics::Funcs));
}
UClass* Z_Construct_UClass_AAzr_Pawn()
{
	if (!Z_Registration_Info_UClass_AAzr_Pawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAzr_Pawn.OuterSingleton, Z_Construct_UClass_AAzr_Pawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAzr_Pawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAzr_Pawn);
AAzr_Pawn::~AAzr_Pawn() {}
// ********** End Class AAzr_Pawn ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h__Script_AzurealXR_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EForwardBehavior_StaticEnum, TEXT("EForwardBehavior"), &Z_Registration_Info_UEnum_EForwardBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 148808680U) },
		{ ETurnBehavior_StaticEnum, TEXT("ETurnBehavior"), &Z_Registration_Info_UEnum_ETurnBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3424375638U) },
		{ EBackBehavior_StaticEnum, TEXT("EBackBehavior"), &Z_Registration_Info_UEnum_EBackBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3476218216U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAzr_Pawn, AAzr_Pawn::StaticClass, TEXT("AAzr_Pawn"), &Z_Registration_Info_UClass_AAzr_Pawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAzr_Pawn), 3504670342U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h__Script_AzurealXR_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h__Script_AzurealXR_253655331{
	TEXT("/Script/AzurealXR"),
	Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h__Script_AzurealXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h__Script_AzurealXR_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h__Script_AzurealXR_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h__Script_AzurealXR_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
