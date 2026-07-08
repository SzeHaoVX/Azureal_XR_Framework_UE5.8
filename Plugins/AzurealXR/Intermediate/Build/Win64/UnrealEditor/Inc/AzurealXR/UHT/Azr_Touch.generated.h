// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Azr_Touch.h"

#ifdef AZUREALXR_Azr_Touch_generated_h
#error "Azr_Touch.generated.h already included, missing '#pragma once' in Azr_Touch.h"
#endif
#define AZUREALXR_Azr_Touch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class UAzr_Touch ***************************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Touch_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTouchZoneEndOverlap); \
	DECLARE_FUNCTION(execOnTouchZoneBeginOverlap); \
	DECLARE_FUNCTION(execDisableTouch); \
	DECLARE_FUNCTION(execEnableTouch);


struct Z_Construct_UClass_UAzr_Touch_Statics;
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Touch(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Touch_h_29_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAzr_Touch_Statics; \
	friend AZUREALXR_API UClass* ::Z_Construct_UClass_UAzr_Touch(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAzr_Touch, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AzurealXR"), Z_Construct_UClass_UAzr_Touch) \
	DECLARE_SERIALIZER(UAzr_Touch)


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Touch_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAzr_Touch(UAzr_Touch&&) = delete; \
	UAzr_Touch(const UAzr_Touch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzr_Touch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzr_Touch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAzr_Touch) \
	NO_API virtual ~UAzr_Touch();


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Touch_h_26_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Touch_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Touch_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Touch_h_29_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Touch_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAzr_Touch;

// ********** End Class UAzr_Touch *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Touch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
