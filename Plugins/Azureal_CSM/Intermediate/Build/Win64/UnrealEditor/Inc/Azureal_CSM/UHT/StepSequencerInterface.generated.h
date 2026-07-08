// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StepSequencerInterface.h"

#ifdef AZUREAL_CSM_StepSequencerInterface_generated_h
#error "StepSequencerInterface.generated.h already included, missing '#pragma once' in StepSequencerInterface.h"
#endif
#define AZUREAL_CSM_StepSequencerInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UStepSequencerInterface **********************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_StepSequencerInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RunStepsOrder_Implementation() {}; \
	DECLARE_FUNCTION(execRunStepsOrder);


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_StepSequencerInterface_h_13_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UStepSequencerInterface_Statics;
AZUREAL_CSM_API UClass* Z_Construct_UClass_UStepSequencerInterface(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_StepSequencerInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AZUREAL_CSM_API UStepSequencerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStepSequencerInterface(UStepSequencerInterface&&) = delete; \
	UStepSequencerInterface(const UStepSequencerInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AZUREAL_CSM_API, UStepSequencerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStepSequencerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStepSequencerInterface) \
	virtual ~UStepSequencerInterface() = default;


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_StepSequencerInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	friend struct ::Z_Construct_UClass_UStepSequencerInterface_Statics; \
	friend AZUREAL_CSM_API UClass* ::Z_Construct_UClass_UStepSequencerInterface(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UStepSequencerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Azureal_CSM"), Z_Construct_UClass_UStepSequencerInterface) \
	DECLARE_SERIALIZER(UStepSequencerInterface)


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_StepSequencerInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_StepSequencerInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_StepSequencerInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_StepSequencerInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStepSequencerInterface() {} \
public: \
	typedef UStepSequencerInterface UClassType; \
	typedef IStepSequencerInterface ThisClass; \
	static void Execute_RunStepsOrder(UObject* O); \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const { return nullptr; }


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_StepSequencerInterface_h_10_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_StepSequencerInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_StepSequencerInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_StepSequencerInterface_h_13_CALLBACK_WRAPPERS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_StepSequencerInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStepSequencerInterface;

// ********** End Interface UStepSequencerInterface ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_StepSequencerInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
