// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Azr_Action.h"

#ifdef AZUREALXR_Azr_Action_generated_h
#error "Azr_Action.generated.h already included, missing '#pragma once' in Azr_Action.h"
#endif
#define AZUREALXR_Azr_Action_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAzr_ActionAnimPayload ********************************************
struct Z_Construct_UScriptStruct_FAzr_ActionAnimPayload_Statics;
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_ActionAnimPayload(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Action_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAzr_ActionAnimPayload_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FAzr_ActionAnimPayload(ETypeConstructPhase::Inner); }


struct FAzr_ActionAnimPayload;
// ********** End ScriptStruct FAzr_ActionAnimPayload **********************************************

// ********** Begin Class UAzr_Action **************************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Action_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCompletedClicked); \
	DECLARE_FUNCTION(execHandleExecuteClicked); \
	DECLARE_FUNCTION(execDisableAction); \
	DECLARE_FUNCTION(execEnableAction);


struct Z_Construct_UClass_UAzr_Action_Statics;
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Action(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Action_h_50_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAzr_Action_Statics; \
	friend AZUREALXR_API UClass* ::Z_Construct_UClass_UAzr_Action(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAzr_Action, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AzurealXR"), Z_Construct_UClass_UAzr_Action) \
	DECLARE_SERIALIZER(UAzr_Action)


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Action_h_50_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAzr_Action(UAzr_Action&&) = delete; \
	UAzr_Action(const UAzr_Action&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzr_Action); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzr_Action); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAzr_Action) \
	NO_API virtual ~UAzr_Action();


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Action_h_47_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Action_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Action_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Action_h_50_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Action_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAzr_Action;

// ********** End Class UAzr_Action ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Action_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
