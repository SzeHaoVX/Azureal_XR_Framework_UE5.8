// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Azr_HandScanner.h"

#ifdef AZUREALXR_Azr_HandScanner_generated_h
#error "Azr_HandScanner.generated.h already included, missing '#pragma once' in Azr_HandScanner.h"
#endif
#define AZUREALXR_Azr_HandScanner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class UAzr_HandScanner *********************************************************
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandScanner_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCapsuleEndOverlap); \
	DECLARE_FUNCTION(execOnCapsuleOverlap); \
	DECLARE_FUNCTION(execProcessGrabInput);


struct Z_Construct_UClass_UAzr_HandScanner_Statics;
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_HandScanner_NoRegister();

#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandScanner_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAzr_HandScanner(); \
	friend struct ::Z_Construct_UClass_UAzr_HandScanner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AZUREALXR_API UClass* ::Z_Construct_UClass_UAzr_HandScanner_NoRegister(); \
public: \
	DECLARE_CLASS2(UAzr_HandScanner, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AzurealXR"), Z_Construct_UClass_UAzr_HandScanner_NoRegister) \
	DECLARE_SERIALIZER(UAzr_HandScanner)


#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandScanner_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAzr_HandScanner(UAzr_HandScanner&&) = delete; \
	UAzr_HandScanner(const UAzr_HandScanner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzr_HandScanner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzr_HandScanner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAzr_HandScanner) \
	NO_API virtual ~UAzr_HandScanner();


#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandScanner_h_12_PROLOG
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandScanner_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandScanner_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandScanner_h_15_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandScanner_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAzr_HandScanner;

// ********** End Class UAzr_HandScanner ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandScanner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
