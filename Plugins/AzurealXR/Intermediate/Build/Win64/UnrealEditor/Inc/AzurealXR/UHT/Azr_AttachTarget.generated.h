// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Azr_AttachTarget.h"

#ifdef AZUREALXR_Azr_AttachTarget_generated_h
#error "Azr_AttachTarget.generated.h already included, missing '#pragma once' in Azr_AttachTarget.h"
#endif
#define AZUREALXR_Azr_AttachTarget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class UAzr_AttachTarget ********************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_AttachTarget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTriggerOverlap); \
	DECLARE_FUNCTION(execNotifyObjectDetached); \
	DECLARE_FUNCTION(execSetGhostVisibility); \
	DECLARE_FUNCTION(execSetSlotFilled);


struct Z_Construct_UClass_UAzr_AttachTarget_Statics;
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_AttachTarget(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_AttachTarget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAzr_AttachTarget_Statics; \
	friend AZUREALXR_API UClass* ::Z_Construct_UClass_UAzr_AttachTarget(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAzr_AttachTarget, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AzurealXR"), Z_Construct_UClass_UAzr_AttachTarget) \
	DECLARE_SERIALIZER(UAzr_AttachTarget)


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_AttachTarget_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAzr_AttachTarget(UAzr_AttachTarget&&) = delete; \
	UAzr_AttachTarget(const UAzr_AttachTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzr_AttachTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzr_AttachTarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAzr_AttachTarget) \
	NO_API virtual ~UAzr_AttachTarget();


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_AttachTarget_h_12_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_AttachTarget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_AttachTarget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_AttachTarget_h_15_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_AttachTarget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAzr_AttachTarget;

// ********** End Class UAzr_AttachTarget **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_AttachTarget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
