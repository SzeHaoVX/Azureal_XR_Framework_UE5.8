// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Azr_Pawn.h"

#ifdef AZUREALXR_Azr_Pawn_generated_h
#error "Azr_Pawn.generated.h already included, missing '#pragma once' in Azr_Pawn.h"
#endif
#define AZUREALXR_Azr_Pawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;

// ********** Begin Class AAzr_Pawn ****************************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisableLocomotion); \
	DECLARE_FUNCTION(execEnableLocomotion); \
	DECLARE_FUNCTION(execTeleportPlayer); \
	DECLARE_FUNCTION(execExecuteRoomScaleTeleport); \
	DECLARE_FUNCTION(execSetRightHandMesh); \
	DECLARE_FUNCTION(execSetLeftHandMesh); \
	DECLARE_FUNCTION(execScriptedMoveTo);


struct Z_Construct_UClass_AAzr_Pawn_Statics;
AZUREALXR_API UClass* Z_Construct_UClass_AAzr_Pawn(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h_51_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_AAzr_Pawn_Statics; \
	friend AZUREALXR_API UClass* ::Z_Construct_UClass_AAzr_Pawn(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(AAzr_Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AzurealXR"), Z_Construct_UClass_AAzr_Pawn) \
	DECLARE_SERIALIZER(AAzr_Pawn)


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h_51_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAzr_Pawn(AAzr_Pawn&&) = delete; \
	AAzr_Pawn(const AAzr_Pawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAzr_Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAzr_Pawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAzr_Pawn) \
	NO_API virtual ~AAzr_Pawn();


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h_49_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h_51_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAzr_Pawn;

// ********** End Class AAzr_Pawn ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h

// ********** Begin Enum EAzr_LocomotionHand *******************************************************
#define FOREACH_ENUM_EAZR_LOCOMOTIONHAND(op) \
	op(EAzr_LocomotionHand::LeftHand) \
	op(EAzr_LocomotionHand::RightHand) \
	op(EAzr_LocomotionHand::BothHands) 

enum class EAzr_LocomotionHand : uint8;
template<> struct TIsUEnumClass<EAzr_LocomotionHand> { enum { Value = true }; };
template<> UE_NODEBUG AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_LocomotionHand>();
// ********** End Enum EAzr_LocomotionHand *********************************************************

// ********** Begin Enum EForwardBehavior **********************************************************
#define FOREACH_ENUM_EFORWARDBEHAVIOR(op) \
	op(EForwardBehavior::Teleport) \
	op(EForwardBehavior::SmoothMove) 

enum class EForwardBehavior : uint8;
template<> struct TIsUEnumClass<EForwardBehavior> { enum { Value = true }; };
template<> UE_NODEBUG AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EForwardBehavior>();
// ********** End Enum EForwardBehavior ************************************************************

// ********** Begin Enum ETurnBehavior *************************************************************
#define FOREACH_ENUM_ETURNBEHAVIOR(op) \
	op(ETurnBehavior::SnapTurn) \
	op(ETurnBehavior::SmoothTurn) 

enum class ETurnBehavior : uint8;
template<> struct TIsUEnumClass<ETurnBehavior> { enum { Value = true }; };
template<> UE_NODEBUG AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETurnBehavior>();
// ********** End Enum ETurnBehavior ***************************************************************

// ********** Begin Enum EBackBehavior *************************************************************
#define FOREACH_ENUM_EBACKBEHAVIOR(op) \
	op(EBackBehavior::BlinkStep) \
	op(EBackBehavior::SmoothMove) \
	op(EBackBehavior::None) 

enum class EBackBehavior : uint8;
template<> struct TIsUEnumClass<EBackBehavior> { enum { Value = true }; };
template<> UE_NODEBUG AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EBackBehavior>();
// ********** End Enum EBackBehavior ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
