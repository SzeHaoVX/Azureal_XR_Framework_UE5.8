// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Azr_Interactable.h"

#ifdef AZUREALXR_Azr_Interactable_generated_h
#error "Azr_Interactable.generated.h already included, missing '#pragma once' in Azr_Interactable.h"
#endif
#define AZUREALXR_Azr_Interactable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
class USceneComponent;
struct FHitResult;

// ********** Begin Class AAzr_Interactable ********************************************************
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Interactable_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnGrabZoneEndOverlap); \
	DECLARE_FUNCTION(execOnGrabZoneBeginOverlap); \
	DECLARE_FUNCTION(execGetSnapPoint); \
	DECLARE_FUNCTION(execDisablePointer); \
	DECLARE_FUNCTION(execEnablePointer); \
	DECLARE_FUNCTION(execGetGlobalHiveSpeed); \
	DECLARE_FUNCTION(execSetGlobalHiveSpeed);


struct Z_Construct_UClass_AAzr_Interactable_Statics;
AZUREALXR_API UClass* Z_Construct_UClass_AAzr_Interactable_NoRegister();

#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Interactable_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAzr_Interactable(); \
	friend struct ::Z_Construct_UClass_AAzr_Interactable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AZUREALXR_API UClass* ::Z_Construct_UClass_AAzr_Interactable_NoRegister(); \
public: \
	DECLARE_CLASS2(AAzr_Interactable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AzurealXR"), Z_Construct_UClass_AAzr_Interactable_NoRegister) \
	DECLARE_SERIALIZER(AAzr_Interactable)


#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Interactable_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAzr_Interactable(AAzr_Interactable&&) = delete; \
	AAzr_Interactable(const AAzr_Interactable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAzr_Interactable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAzr_Interactable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAzr_Interactable) \
	NO_API virtual ~AAzr_Interactable();


#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Interactable_h_14_PROLOG
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Interactable_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Interactable_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Interactable_h_17_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Interactable_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAzr_Interactable;

// ********** End Class AAzr_Interactable **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Interactable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
