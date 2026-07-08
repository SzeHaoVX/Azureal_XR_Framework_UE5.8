// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Azr_Label.h"

#ifdef AZUREALXR_Azr_Label_generated_h
#error "Azr_Label.generated.h already included, missing '#pragma once' in Azr_Label.h"
#endif
#define AZUREALXR_Azr_Label_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAzr_LabelPayload *************************************************
struct Z_Construct_UScriptStruct_FAzr_LabelPayload_Statics;
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_LabelPayload(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Label_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAzr_LabelPayload_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FAzr_LabelPayload(ETypeConstructPhase::Inner); }


struct FAzr_LabelPayload;
// ********** End ScriptStruct FAzr_LabelPayload ***************************************************

// ********** Begin Class UAzr_Label ***************************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Label_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisableLabel); \
	DECLARE_FUNCTION(execEnableLabel);


struct Z_Construct_UClass_UAzr_Label_Statics;
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Label(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Label_h_36_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAzr_Label_Statics; \
	friend AZUREALXR_API UClass* ::Z_Construct_UClass_UAzr_Label(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAzr_Label, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AzurealXR"), Z_Construct_UClass_UAzr_Label) \
	DECLARE_SERIALIZER(UAzr_Label)


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Label_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAzr_Label(UAzr_Label&&) = delete; \
	UAzr_Label(const UAzr_Label&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzr_Label); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzr_Label); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAzr_Label) \
	NO_API virtual ~UAzr_Label();


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Label_h_33_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Label_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Label_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Label_h_36_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Label_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAzr_Label;

// ********** End Class UAzr_Label *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Label_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
