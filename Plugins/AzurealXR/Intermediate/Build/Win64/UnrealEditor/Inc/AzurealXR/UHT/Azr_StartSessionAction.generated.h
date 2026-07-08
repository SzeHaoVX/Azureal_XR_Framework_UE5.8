// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Azr_StartSessionAction.h"

#ifdef AZUREALXR_Azr_StartSessionAction_generated_h
#error "Azr_StartSessionAction.generated.h already included, missing '#pragma once' in Azr_StartSessionAction.h"
#endif
#define AZUREALXR_Azr_StartSessionAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAzr_StartSessionAction;
class UObject;

// ********** Begin Class UAzr_StartSessionAction **************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_StartSessionAction_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleFailure); \
	DECLARE_FUNCTION(execHandleSuccess); \
	DECLARE_FUNCTION(execStartAzurealSession);


struct Z_Construct_UClass_UAzr_StartSessionAction_Statics;
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_StartSessionAction(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_StartSessionAction_h_20_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAzr_StartSessionAction_Statics; \
	friend AZUREALXR_API UClass* ::Z_Construct_UClass_UAzr_StartSessionAction(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAzr_StartSessionAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AzurealXR"), Z_Construct_UClass_UAzr_StartSessionAction) \
	DECLARE_SERIALIZER(UAzr_StartSessionAction)


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_StartSessionAction_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzr_StartSessionAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAzr_StartSessionAction(UAzr_StartSessionAction&&) = delete; \
	UAzr_StartSessionAction(const UAzr_StartSessionAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzr_StartSessionAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzr_StartSessionAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzr_StartSessionAction) \
	NO_API virtual ~UAzr_StartSessionAction();


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_StartSessionAction_h_17_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_StartSessionAction_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_StartSessionAction_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_StartSessionAction_h_20_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_StartSessionAction_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAzr_StartSessionAction;

// ********** End Class UAzr_StartSessionAction ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_StartSessionAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
