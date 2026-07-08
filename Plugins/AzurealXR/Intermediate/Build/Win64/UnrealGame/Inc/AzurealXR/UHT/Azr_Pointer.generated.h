// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Azr_Pointer.h"

#ifdef AZUREALXR_Azr_Pointer_generated_h
#error "Azr_Pointer.generated.h already included, missing '#pragma once' in Azr_Pointer.h"
#endif
#define AZUREALXR_Azr_Pointer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;

// ********** Begin Class UAzr_Pointer *************************************************************
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pointer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisablePointer); \
	DECLARE_FUNCTION(execEnablePointer_TargetLocation); \
	DECLARE_FUNCTION(execEnablePointer_TargetComponent);


struct Z_Construct_UClass_UAzr_Pointer_Statics;
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Pointer_NoRegister();

#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pointer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAzr_Pointer(); \
	friend struct ::Z_Construct_UClass_UAzr_Pointer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AZUREALXR_API UClass* ::Z_Construct_UClass_UAzr_Pointer_NoRegister(); \
public: \
	DECLARE_CLASS2(UAzr_Pointer, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AzurealXR"), Z_Construct_UClass_UAzr_Pointer_NoRegister) \
	DECLARE_SERIALIZER(UAzr_Pointer)


#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pointer_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAzr_Pointer(UAzr_Pointer&&) = delete; \
	UAzr_Pointer(const UAzr_Pointer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzr_Pointer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzr_Pointer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAzr_Pointer) \
	NO_API virtual ~UAzr_Pointer();


#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pointer_h_9_PROLOG
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pointer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pointer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pointer_h_12_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pointer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAzr_Pointer;

// ********** End Class UAzr_Pointer ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pointer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
