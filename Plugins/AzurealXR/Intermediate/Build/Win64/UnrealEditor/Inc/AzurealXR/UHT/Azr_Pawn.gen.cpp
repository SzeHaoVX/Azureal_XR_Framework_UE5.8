// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Pawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Pawn() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_APawn(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction(ETypeConstructPhase);
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext(ETypeConstructPhase);
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UWidgetComponent(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_AAzr_Pawn(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_LocomotionHand(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EBackBehavior(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EForwardBehavior(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_ETurnBehavior(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_ExplainWidget(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_HandAnimInstance(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_HandScanner(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_AAzr_Pawn(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Teleport(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EAzr_LocomotionHand *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AzurealXR_EAzr_LocomotionHand_Statics
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_LocomotionHand>()
{
	return Z_Construct_UEnum_AzurealXR_EAzr_LocomotionHand(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "BothHands.DisplayName", "Both Hands" },
		{ "BothHands.Name", "EAzr_LocomotionHand::BothHands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- NEW: LOCOMOTION HAND SETTING ---\n" },
#endif
		{ "LeftHand.DisplayName", "Left Hand (Southpaw)" },
		{ "LeftHand.Name", "EAzr_LocomotionHand::LeftHand" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
		{ "RightHand.DisplayName", "Right Hand (Standard)" },
		{ "RightHand.Name", "EAzr_LocomotionHand::RightHand" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- NEW: LOCOMOTION HAND SETTING ---" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAzr_LocomotionHand::LeftHand", (int64)EAzr_LocomotionHand::LeftHand },
		{ "EAzr_LocomotionHand::RightHand", (int64)EAzr_LocomotionHand::RightHand },
		{ "EAzr_LocomotionHand::BothHands", (int64)EAzr_LocomotionHand::BothHands },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_LocomotionHand",
	"EAzr_LocomotionHand",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAzr_LocomotionHand;
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_LocomotionHand(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAzr_LocomotionHand.OuterSingleton)
		{
			ZRIE_EAzr_LocomotionHand.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_LocomotionHand, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("EAzr_LocomotionHand"));
		}
		return ZRIE_EAzr_LocomotionHand.OuterSingleton;
	}
	if (!ZRIE_EAzr_LocomotionHand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAzr_LocomotionHand.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAzr_LocomotionHand.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAzr_LocomotionHand *********************************************************

// ********** Begin Enum EForwardBehavior **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AzurealXR_EForwardBehavior_Statics
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EForwardBehavior>()
{
	return Z_Construct_UEnum_AzurealXR_EForwardBehavior(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EForwardBehavior",
	"EForwardBehavior",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EForwardBehavior;
UEnum* Z_Construct_UEnum_AzurealXR_EForwardBehavior(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EForwardBehavior.OuterSingleton)
		{
			ZRIE_EForwardBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EForwardBehavior, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("EForwardBehavior"));
		}
		return ZRIE_EForwardBehavior.OuterSingleton;
	}
	if (!ZRIE_EForwardBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EForwardBehavior.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EForwardBehavior.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EForwardBehavior ************************************************************

// ********** Begin Enum ETurnBehavior *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AzurealXR_ETurnBehavior_Statics
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETurnBehavior>()
{
	return Z_Construct_UEnum_AzurealXR_ETurnBehavior(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"ETurnBehavior",
	"ETurnBehavior",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ETurnBehavior;
UEnum* Z_Construct_UEnum_AzurealXR_ETurnBehavior(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ETurnBehavior.OuterSingleton)
		{
			ZRIE_ETurnBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_ETurnBehavior, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("ETurnBehavior"));
		}
		return ZRIE_ETurnBehavior.OuterSingleton;
	}
	if (!ZRIE_ETurnBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ETurnBehavior.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ETurnBehavior.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ETurnBehavior ***************************************************************

// ********** Begin Enum EBackBehavior *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AzurealXR_EBackBehavior_Statics
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EBackBehavior>()
{
	return Z_Construct_UEnum_AzurealXR_EBackBehavior(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EBackBehavior",
	"EBackBehavior",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EBackBehavior;
UEnum* Z_Construct_UEnum_AzurealXR_EBackBehavior(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EBackBehavior.OuterSingleton)
		{
			ZRIE_EBackBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EBackBehavior, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("EBackBehavior"));
		}
		return ZRIE_EBackBehavior.OuterSingleton;
	}
	if (!ZRIE_EBackBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EBackBehavior.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EBackBehavior.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EBackBehavior ***************************************************************

// ********** Begin Class AAzr_Pawn Function DisableLocomotion *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAzr_Pawn_DisableLocomotion_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Locomotion" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableLocomotion constinit property declarations *********************
// ********** End Function DisableLocomotion constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAzr_Pawn, nullptr, "DisableLocomotion", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AAzr_Pawn_DisableLocomotion(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAzr_Pawn::execDisableLocomotion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableLocomotion();
	P_NATIVE_END;
}
// ********** End Class AAzr_Pawn Function DisableLocomotion ***************************************

// ********** Begin Class AAzr_Pawn Function EnableLocomotion **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAzr_Pawn_EnableLocomotion_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Locomotion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Enable/Disable LOCOMOTION STATE ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Enable/Disable LOCOMOTION STATE ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EnableLocomotion constinit property declarations **********************
// ********** End Function EnableLocomotion constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAzr_Pawn, nullptr, "EnableLocomotion", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AAzr_Pawn_EnableLocomotion(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAzr_Pawn::execEnableLocomotion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableLocomotion();
	P_NATIVE_END;
}
// ********** End Class AAzr_Pawn Function EnableLocomotion ****************************************

// ********** Begin Class AAzr_Pawn Function ExecuteRoomScaleTeleport ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAzr_Pawn_ExecuteRoomScaleTeleport_Statics
struct UHT_STATICS
{
	struct Azr_Pawn_eventExecuteRoomScaleTeleport_Parms
	{
		FVector TargetFloorLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Locomotion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- ROOM SCALE LOCOMOTION ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- ROOM SCALE LOCOMOTION ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ExecuteRoomScaleTeleport constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetFloorLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExecuteRoomScaleTeleport constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExecuteRoomScaleTeleport Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetFloorLocation = { "TargetFloorLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Pawn_eventExecuteRoomScaleTeleport_Parms, TargetFloorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetFloorLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ExecuteRoomScaleTeleport Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAzr_Pawn, nullptr, "ExecuteRoomScaleTeleport", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Pawn_eventExecuteRoomScaleTeleport_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Pawn_eventExecuteRoomScaleTeleport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAzr_Pawn_ExecuteRoomScaleTeleport(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAzr_Pawn::execExecuteRoomScaleTeleport)
{
	P_GET_STRUCT(FVector,Z_Param_TargetFloorLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteRoomScaleTeleport(Z_Param_TargetFloorLocation);
	P_NATIVE_END;
}
// ********** End Class AAzr_Pawn Function ExecuteRoomScaleTeleport ********************************

// ********** Begin Class AAzr_Pawn Function ScriptedMoveTo ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAzr_Pawn_ScriptedMoveTo_Statics
struct UHT_STATICS
{
	struct Azr_Pawn_eventScriptedMoveTo_Parms
	{
		FVector TargetFloorLocation;
		FRotator TargetRotation;
		float MoveSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Locomotion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- CONFIGURATION ---\n// NEW: Master Control for Ambidextrous Support\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- CONFIGURATION ---\nNEW: Master Control for Ambidextrous Support" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ScriptedMoveTo constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetFloorLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ScriptedMoveTo constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ScriptedMoveTo Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetFloorLocation = { "TargetFloorLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Pawn_eventScriptedMoveTo_Parms, TargetFloorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Pawn_eventScriptedMoveTo_Parms, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Pawn_eventScriptedMoveTo_Parms, MoveSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetFloorLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MoveSpeed,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ScriptedMoveTo Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAzr_Pawn, nullptr, "ScriptedMoveTo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Pawn_eventScriptedMoveTo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Pawn_eventScriptedMoveTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAzr_Pawn_ScriptedMoveTo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAzr_Pawn::execScriptedMoveTo)
{
	P_GET_STRUCT(FVector,Z_Param_TargetFloorLocation);
	P_GET_STRUCT(FRotator,Z_Param_TargetRotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MoveSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScriptedMoveTo(Z_Param_TargetFloorLocation,Z_Param_TargetRotation,Z_Param_MoveSpeed);
	P_NATIVE_END;
}
// ********** End Class AAzr_Pawn Function ScriptedMoveTo ******************************************

// ********** Begin Class AAzr_Pawn Function SetLeftHandMesh ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAzr_Pawn_SetLeftHandMesh_Statics
struct UHT_STATICS
{
	struct Azr_Pawn_eventSetLeftHandMesh_Parms
	{
		USkeletalMesh* NewMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Pawn_eventSetLeftHandMesh_Parms, NewMesh), Z_Construct_UClass_USkeletalMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewMesh,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetLeftHandMesh Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAzr_Pawn, nullptr, "SetLeftHandMesh", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Pawn_eventSetLeftHandMesh_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Pawn_eventSetLeftHandMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAzr_Pawn_SetLeftHandMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAzr_Pawn_SetRightHandMesh_Statics
struct UHT_STATICS
{
	struct Azr_Pawn_eventSetRightHandMesh_Parms
	{
		USkeletalMesh* NewMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Pawn_eventSetRightHandMesh_Parms, NewMesh), Z_Construct_UClass_USkeletalMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewMesh,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetRightHandMesh Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAzr_Pawn, nullptr, "SetRightHandMesh", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Pawn_eventSetRightHandMesh_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Pawn_eventSetRightHandMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAzr_Pawn_SetRightHandMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAzr_Pawn::execSetRightHandMesh)
{
	P_GET_OBJECT(USkeletalMesh,Z_Param_NewMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRightHandMesh(Z_Param_NewMesh);
	P_NATIVE_END;
}
// ********** End Class AAzr_Pawn Function SetRightHandMesh ****************************************

// ********** Begin Class AAzr_Pawn Function TeleportPlayer ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAzr_Pawn_TeleportPlayer_Statics
struct UHT_STATICS
{
	struct Azr_Pawn_eventTeleportPlayer_Parms
	{
		FVector TargetLocation;
		FRotator TargetRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Locomotion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EVENT TELEPORT ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EVENT TELEPORT ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function TeleportPlayer constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TeleportPlayer constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TeleportPlayer Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Pawn_eventTeleportPlayer_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Pawn_eventTeleportPlayer_Parms, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRotation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TeleportPlayer Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAzr_Pawn, nullptr, "TeleportPlayer", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Pawn_eventTeleportPlayer_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Pawn_eventTeleportPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAzr_Pawn_TeleportPlayer(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAzr_Pawn::execTeleportPlayer)
{
	P_GET_STRUCT(FVector,Z_Param_TargetLocation);
	P_GET_STRUCT(FRotator,Z_Param_TargetRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TeleportPlayer(Z_Param_TargetLocation,Z_Param_TargetRotation);
	P_NATIVE_END;
}
// ********** End Class AAzr_Pawn Function TeleportPlayer ******************************************

// ********** Begin Class AAzr_Pawn ****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AAzr_Pawn_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GazeReticleWidget_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftWidgetInteraction_MetaData[] = {
		{ "Category", "Azureal|UI Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- NEW: WIDGET INTERACTION (SMART LASERS) ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- NEW: WIDGET INTERACTION (SMART LASERS) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightWidgetInteraction_MetaData[] = {
		{ "Category", "Azureal|UI Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftLaserBeam_MetaData[] = {
		{ "Category", "Azureal|UI Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightLaserBeam_MetaData[] = {
		{ "Category", "Azureal|UI Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftLaserReticle_MetaData[] = {
		{ "Category", "Azureal|UI Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightLaserReticle_MetaData[] = {
		{ "Category", "Azureal|UI Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLaserDistance_MetaData[] = {
		{ "Category", "Azureal|UI Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- UI INTERACTION CONFIG ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- UI INTERACTION CONFIG ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaserTraceChannel_MetaData[] = {
		{ "Category", "Azureal|UI Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set this to the exact Trace Channel that your Azr_Collision profile blocks!\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set this to the exact Trace Channel that your Azr_Collision profile blocks!" },
#endif
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
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Trigger_Right_MetaData[] = {
		{ "Category", "Azureal|Input" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DominantLocomotionHand_MetaData[] = {
		{ "Category", "Azureal|Locomotion Config" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardInput_MetaData[] = {
		{ "Category", "Azureal|Locomotion Config" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GazeTraceDistance_MetaData[] = {
		{ "Category", "Azureal|Gaze Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- GAZE CONFIGURATION ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- GAZE CONFIGURATION ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GazeTraceRadius_MetaData[] = {
		{ "Category", "Azureal|Gaze Config" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowGazeDebug_MetaData[] = {
		{ "Category", "Azureal|Gaze Config" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsScriptedMoving_MetaData[] = {
		{ "Category", "Azureal|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- NEW: SCRIPTED MOVEMENT TRACKERS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- NEW: SCRIPTED MOVEMENT TRACKERS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastHoveredLeftWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastHoveredRightWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pawn.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAzr_Pawn constinit property declarations ********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VROrigin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GazeReticleWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftMotionController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightMotionController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHandMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHandMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHandScanner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHandScanner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftWidgetInteraction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightWidgetInteraction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftLaserBeam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightLaserBeam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftLaserReticle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightLaserReticle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLaserDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LaserTraceChannel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Move;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Look;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Grab_Left;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Grab_Right;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Trigger_Left;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Trigger_Right;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DominantLocomotionHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DominantLocomotionHand;
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GazeTraceDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GazeTraceRadius;
	static void NewProp_bShowGazeDebug_SetBit(void* Obj)
	{
		((AAzr_Pawn*)Obj)->bShowGazeDebug = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGazeDebug;
	static void NewProp_bIsVRMode_SetBit(void* Obj)
	{
		((AAzr_Pawn*)Obj)->bIsVRMode = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVRMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedTeleportComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHandAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHandAnim;
	static void NewProp_bIsScriptedMoving_SetBit(void* Obj)
	{
		((AAzr_Pawn*)Obj)->bIsScriptedMoving = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsScriptedMoving;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastHoveredLeftWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastHoveredRightWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAzr_Pawn constinit property declarations **********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DisableLocomotion"), .Pointer = &AAzr_Pawn::execDisableLocomotion },
		{ .NameUTF8 = UTF8TEXT("EnableLocomotion"), .Pointer = &AAzr_Pawn::execEnableLocomotion },
		{ .NameUTF8 = UTF8TEXT("ExecuteRoomScaleTeleport"), .Pointer = &AAzr_Pawn::execExecuteRoomScaleTeleport },
		{ .NameUTF8 = UTF8TEXT("ScriptedMoveTo"), .Pointer = &AAzr_Pawn::execScriptedMoveTo },
		{ .NameUTF8 = UTF8TEXT("SetLeftHandMesh"), .Pointer = &AAzr_Pawn::execSetLeftHandMesh },
		{ .NameUTF8 = UTF8TEXT("SetRightHandMesh"), .Pointer = &AAzr_Pawn::execSetRightHandMesh },
		{ .NameUTF8 = UTF8TEXT("TeleportPlayer"), .Pointer = &AAzr_Pawn::execTeleportPlayer },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAzr_Pawn_DisableLocomotion, "DisableLocomotion" }, // 82166d01fd076a8d77b810e013d929e18675cd5d
		{ &Z_Construct_UFunction_AAzr_Pawn_EnableLocomotion, "EnableLocomotion" }, // 7d9388c97268bf32ed80c0893c73100264b3463c
		{ &Z_Construct_UFunction_AAzr_Pawn_ExecuteRoomScaleTeleport, "ExecuteRoomScaleTeleport" }, // 05aab39f8b744db9ceb629b0d8d2b8c9ed5c1c23
		{ &Z_Construct_UFunction_AAzr_Pawn_ScriptedMoveTo, "ScriptedMoveTo" }, // 14fdb72db05773cc50010d92642b145555418873
		{ &Z_Construct_UFunction_AAzr_Pawn_SetLeftHandMesh, "SetLeftHandMesh" }, // 224de84c1b17fe58a63202e8f1a790df9131c0d4
		{ &Z_Construct_UFunction_AAzr_Pawn_SetRightHandMesh, "SetRightHandMesh" }, // a509af94f6dbfcb4da52a8145c40ebbc57cdd24e
		{ &Z_Construct_UFunction_AAzr_Pawn_TeleportPlayer, "TeleportPlayer" }, // 90a6932ed1513c42639d36a89dbec4d4b223bbc8
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAzr_Pawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AAzr_Pawn Property Definitions *******************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_VROrigin = { "VROrigin", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, VROrigin), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VROrigin_MetaData), NewProp_VROrigin_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, Camera), Z_Construct_UClass_UCameraComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GazeReticleWidget = { "GazeReticleWidget", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, GazeReticleWidget), Z_Construct_UClass_UWidgetComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GazeReticleWidget_MetaData), NewProp_GazeReticleWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LeftMotionController = { "LeftMotionController", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, LeftMotionController), Z_Construct_UClass_UMotionControllerComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftMotionController_MetaData), NewProp_LeftMotionController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RightMotionController = { "RightMotionController", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, RightMotionController), Z_Construct_UClass_UMotionControllerComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightMotionController_MetaData), NewProp_RightMotionController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LeftHandMesh = { "LeftHandMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, LeftHandMesh), Z_Construct_UClass_USkeletalMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandMesh_MetaData), NewProp_LeftHandMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RightHandMesh = { "RightHandMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, RightHandMesh), Z_Construct_UClass_USkeletalMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandMesh_MetaData), NewProp_RightHandMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LeftHandScanner = { "LeftHandScanner", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, LeftHandScanner), Z_Construct_UClass_UAzr_HandScanner, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandScanner_MetaData), NewProp_LeftHandScanner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RightHandScanner = { "RightHandScanner", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, RightHandScanner), Z_Construct_UClass_UAzr_HandScanner, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandScanner_MetaData), NewProp_RightHandScanner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LeftWidgetInteraction = { "LeftWidgetInteraction", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, LeftWidgetInteraction), Z_Construct_UClass_UWidgetInteractionComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftWidgetInteraction_MetaData), NewProp_LeftWidgetInteraction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RightWidgetInteraction = { "RightWidgetInteraction", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, RightWidgetInteraction), Z_Construct_UClass_UWidgetInteractionComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightWidgetInteraction_MetaData), NewProp_RightWidgetInteraction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LeftLaserBeam = { "LeftLaserBeam", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, LeftLaserBeam), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftLaserBeam_MetaData), NewProp_LeftLaserBeam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RightLaserBeam = { "RightLaserBeam", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, RightLaserBeam), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightLaserBeam_MetaData), NewProp_RightLaserBeam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LeftLaserReticle = { "LeftLaserReticle", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, LeftLaserReticle), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftLaserReticle_MetaData), NewProp_LeftLaserReticle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RightLaserReticle = { "RightLaserReticle", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, RightLaserReticle), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightLaserReticle_MetaData), NewProp_RightLaserReticle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxLaserDistance = { "MaxLaserDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, MaxLaserDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLaserDistance_MetaData), NewProp_MaxLaserDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LaserTraceChannel = { "LaserTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, LaserTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaserTraceChannel_MetaData), NewProp_LaserTraceChannel_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_IA_Move = { "IA_Move", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, IA_Move), Z_Construct_UClass_UInputAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Move_MetaData), NewProp_IA_Move_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_IA_Look = { "IA_Look", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, IA_Look), Z_Construct_UClass_UInputAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Look_MetaData), NewProp_IA_Look_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_IA_Grab_Left = { "IA_Grab_Left", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, IA_Grab_Left), Z_Construct_UClass_UInputAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Grab_Left_MetaData), NewProp_IA_Grab_Left_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_IA_Grab_Right = { "IA_Grab_Right", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, IA_Grab_Right), Z_Construct_UClass_UInputAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Grab_Right_MetaData), NewProp_IA_Grab_Right_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_IA_Trigger_Left = { "IA_Trigger_Left", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, IA_Trigger_Left), Z_Construct_UClass_UInputAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Trigger_Left_MetaData), NewProp_IA_Trigger_Left_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_IA_Trigger_Right = { "IA_Trigger_Right", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, IA_Trigger_Right), Z_Construct_UClass_UInputAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Trigger_Right_MetaData), NewProp_IA_Trigger_Right_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DominantLocomotionHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DominantLocomotionHand = { "DominantLocomotionHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, DominantLocomotionHand), Z_Construct_UEnum_AzurealXR_EAzr_LocomotionHand, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DominantLocomotionHand_MetaData), NewProp_DominantLocomotionHand_MetaData) }; // 5169fd01ea5a0db05026580d5f67292bc0eebc25
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ForwardInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ForwardInput = { "ForwardInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, ForwardInput), Z_Construct_UEnum_AzurealXR_EForwardBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardInput_MetaData), NewProp_ForwardInput_MetaData) }; // 4cbcec3d9a5a2a09432dac798ecea643702f51b6
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_TurnInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_TurnInput = { "TurnInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, TurnInput), Z_Construct_UEnum_AzurealXR_ETurnBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnInput_MetaData), NewProp_TurnInput_MetaData) }; // 6f4ca4ccf862f481d17bd78843d6313cba384067
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BackwardInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BackwardInput = { "BackwardInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, BackwardInput), Z_Construct_UEnum_AzurealXR_EBackBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackwardInput_MetaData), NewProp_BackwardInput_MetaData) }; // 12363e131f428818a0cb599ea7f1e0e2cb2dface
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SnapTurnAngle = { "SnapTurnAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, SnapTurnAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapTurnAngle_MetaData), NewProp_SnapTurnAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SmoothTurnSpeed = { "SmoothTurnSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, SmoothTurnSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothTurnSpeed_MetaData), NewProp_SmoothTurnSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SmoothMoveSpeed = { "SmoothMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, SmoothMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothMoveSpeed_MetaData), NewProp_SmoothMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BlinkStepDistance = { "BlinkStepDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, BlinkStepDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlinkStepDistance_MetaData), NewProp_BlinkStepDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HandAnimSpeed = { "HandAnimSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, HandAnimSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandAnimSpeed_MetaData), NewProp_HandAnimSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GazeTraceDistance = { "GazeTraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, GazeTraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GazeTraceDistance_MetaData), NewProp_GazeTraceDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GazeTraceRadius = { "GazeTraceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, GazeTraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GazeTraceRadius_MetaData), NewProp_GazeTraceRadius_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowGazeDebug = { "bShowGazeDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AAzr_Pawn), &UHT_STATICS::NewProp_bShowGazeDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowGazeDebug_MetaData), NewProp_bShowGazeDebug_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsVRMode = { "bIsVRMode", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AAzr_Pawn), &UHT_STATICS::NewProp_bIsVRMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVRMode_MetaData), NewProp_bIsVRMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CachedTeleportComp = { "CachedTeleportComp", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, CachedTeleportComp), Z_Construct_UClass_UAzr_Teleport, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTeleportComp_MetaData), NewProp_CachedTeleportComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LeftHandAnim = { "LeftHandAnim", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, LeftHandAnim), Z_Construct_UClass_UAzr_HandAnimInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandAnim_MetaData), NewProp_LeftHandAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RightHandAnim = { "RightHandAnim", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, RightHandAnim), Z_Construct_UClass_UAzr_HandAnimInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandAnim_MetaData), NewProp_RightHandAnim_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsScriptedMoving = { "bIsScriptedMoving", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AAzr_Pawn), &UHT_STATICS::NewProp_bIsScriptedMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsScriptedMoving_MetaData), NewProp_bIsScriptedMoving_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LastHoveredLeftWidget = { "LastHoveredLeftWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, LastHoveredLeftWidget), Z_Construct_UClass_UAzr_ExplainWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastHoveredLeftWidget_MetaData), NewProp_LastHoveredLeftWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LastHoveredRightWidget = { "LastHoveredRightWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Pawn, LastHoveredRightWidget), Z_Construct_UClass_UAzr_ExplainWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastHoveredRightWidget_MetaData), NewProp_LastHoveredRightWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VROrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GazeReticleWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftMotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightMotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftHandMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightHandMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftHandScanner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightHandScanner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftWidgetInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightWidgetInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftLaserBeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightLaserBeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftLaserReticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightLaserReticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxLaserDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaserTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IA_Move,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IA_Look,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IA_Grab_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IA_Grab_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IA_Trigger_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IA_Trigger_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DominantLocomotionHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DominantLocomotionHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ForwardInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ForwardInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurnInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurnInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BackwardInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BackwardInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SnapTurnAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SmoothTurnSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SmoothMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlinkStepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HandAnimSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GazeTraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GazeTraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowGazeDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsVRMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedTeleportComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftHandAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightHandAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsScriptedMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LastHoveredLeftWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LastHoveredRightWidget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AAzr_Pawn Property Definitions *********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_APawn,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AAzr_Pawn,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void AAzr_Pawn_StaticRegisterNativesAAzr_Pawn()
{
	UClass* Class = AAzr_Pawn::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAzr_Pawn;
UClass* Z_Construct_UClass_AAzr_Pawn(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AAzr_Pawn;
		if (!Z_Registration_Info_UClass_AAzr_Pawn.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_Pawn"),
				Z_Registration_Info_UClass_AAzr_Pawn.InnerSingleton,
				AAzr_Pawn_StaticRegisterNativesAAzr_Pawn,
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
		return Z_Registration_Info_UClass_AAzr_Pawn.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AAzr_Pawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAzr_Pawn.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AAzr_Pawn.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAzr_Pawn);
AAzr_Pawn::~AAzr_Pawn() {}
// ********** End Class AAzr_Pawn ******************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_AzurealXR_EAzr_LocomotionHand, TEXT("EAzr_LocomotionHand"), &ZRIE_EAzr_LocomotionHand, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1365900545U) },
		{ Z_Construct_UEnum_AzurealXR_EForwardBehavior, TEXT("EForwardBehavior"), &ZRIE_EForwardBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1287449661U) },
		{ Z_Construct_UEnum_AzurealXR_ETurnBehavior, TEXT("ETurnBehavior"), &ZRIE_ETurnBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1867293900U) },
		{ Z_Construct_UEnum_AzurealXR_EBackBehavior, TEXT("EBackBehavior"), &ZRIE_EBackBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 305544723U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAzr_Pawn, TEXT("AAzr_Pawn"), &Z_Registration_Info_UClass_AAzr_Pawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAzr_Pawn), 1493573356U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h__Script_AzurealXR_d0729ec8c4cfc4c135b565f153d693c746ca8011{
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
