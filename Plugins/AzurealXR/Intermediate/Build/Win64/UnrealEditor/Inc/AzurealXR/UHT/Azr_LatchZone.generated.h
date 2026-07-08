// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Azr_LatchZone.h"

#ifdef AZUREALXR_Azr_LatchZone_generated_h
#error "Azr_LatchZone.generated.h already included, missing '#pragma once' in Azr_LatchZone.h"
#endif
#define AZUREALXR_Azr_LatchZone_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class UAzr_LatchZone ***********************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_LatchZone_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnLatchZoneEndOverlap); \
	DECLARE_FUNCTION(execOnLatchZoneBeginOverlap);


struct Z_Construct_UClass_UAzr_LatchZone_Statics;
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_LatchZone(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_LatchZone_h_24_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAzr_LatchZone_Statics; \
	friend AZUREALXR_API UClass* ::Z_Construct_UClass_UAzr_LatchZone(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAzr_LatchZone, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AzurealXR"), Z_Construct_UClass_UAzr_LatchZone) \
	DECLARE_SERIALIZER(UAzr_LatchZone)


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_LatchZone_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAzr_LatchZone(UAzr_LatchZone&&) = delete; \
	UAzr_LatchZone(const UAzr_LatchZone&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzr_LatchZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzr_LatchZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAzr_LatchZone) \
	NO_API virtual ~UAzr_LatchZone();


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_LatchZone_h_21_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_LatchZone_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_LatchZone_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_LatchZone_h_24_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_LatchZone_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAzr_LatchZone;

// ********** End Class UAzr_LatchZone *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_LatchZone_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
