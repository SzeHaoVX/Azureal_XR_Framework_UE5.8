// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManualVRPluginBPLibrary.h"

#ifdef MANUALVRPLUGIN_ManualVRPluginBPLibrary_generated_h
#error "ManualVRPluginBPLibrary.generated.h already included, missing '#pragma once' in ManualVRPluginBPLibrary.h"
#endif
#define MANUALVRPLUGIN_ManualVRPluginBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSop **************************************************************
struct Z_Construct_UScriptStruct_FSop_Statics;
MANUALVRPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSop(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSop_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FSop(ETypeConstructPhase::Inner); }


struct FSop;
// ********** End ScriptStruct FSop ****************************************************************

// ********** Begin Class UManualVRPluginBPLibrary *************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h_35_RPC_WRAPPERS \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execEnd); \
	DECLARE_FUNCTION(execResume); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execCreateSession); \
	DECLARE_FUNCTION(execInitializeCommandLine);


struct Z_Construct_UClass_UManualVRPluginBPLibrary_Statics;
MANUALVRPLUGIN_API UClass* Z_Construct_UClass_UManualVRPluginBPLibrary(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h_35_INCLASS \
private: \
	friend struct ::Z_Construct_UClass_UManualVRPluginBPLibrary_Statics; \
	friend MANUALVRPLUGIN_API UClass* ::Z_Construct_UClass_UManualVRPluginBPLibrary(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UManualVRPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ManualVRPlugin"), Z_Construct_UClass_UManualVRPluginBPLibrary) \
	DECLARE_SERIALIZER(UManualVRPluginBPLibrary)


#define FID_GitHub_Azureal_XR_V2_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManualVRPluginBPLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManualVRPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManualVRPluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManualVRPluginBPLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UManualVRPluginBPLibrary(UManualVRPluginBPLibrary&&) = delete; \
	UManualVRPluginBPLibrary(const UManualVRPluginBPLibrary&) = delete; \
	NO_API virtual ~UManualVRPluginBPLibrary();


#define FID_GitHub_Azureal_XR_V2_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h_32_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h_35_RPC_WRAPPERS \
	FID_GitHub_Azureal_XR_V2_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h_35_INCLASS \
	FID_GitHub_Azureal_XR_V2_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UManualVRPluginBPLibrary;

// ********** End Class UManualVRPluginBPLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
