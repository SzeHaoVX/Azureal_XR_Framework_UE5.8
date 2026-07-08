// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TrainingStepPage.h"

#ifdef AZUREAL_CSM_TrainingStepPage_generated_h
#error "TrainingStepPage.generated.h already included, missing '#pragma once' in TrainingStepPage.h"
#endif
#define AZUREAL_CSM_TrainingStepPage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTrainingStepPage ********************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingStepPage_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsFlipButtonVisible); \
	DECLARE_FUNCTION(execIsBackButtonEnabled); \
	DECLARE_FUNCTION(execIsNextButtonEnabled); \
	DECLARE_FUNCTION(execIsOnResultPage); \
	DECLARE_FUNCTION(execGetStepProgressText); \
	DECLARE_FUNCTION(execGetMasterProgressText); \
	DECLARE_FUNCTION(execGetSessionTimeText); \
	DECLARE_FUNCTION(execTriggerMainStepFade); \
	DECLARE_FUNCTION(execForceQuizStateFromBlueprint); \
	DECLARE_FUNCTION(execConfirmQuizAnswer); \
	DECLARE_FUNCTION(execSelectQuizAnswer); \
	DECLARE_FUNCTION(execJumpToCurrentPage); \
	DECLARE_FUNCTION(execGoBackPage); \
	DECLARE_FUNCTION(execGoNextPage); \
	DECLARE_FUNCTION(execSetTotalSessionSteps); \
	DECLARE_FUNCTION(execResetAllProgress); \
	DECLARE_FUNCTION(execRefreshList); \
	DECLARE_FUNCTION(execAdvanceProgress); \
	DECLARE_FUNCTION(execStartGM); \
	DECLARE_FUNCTION(execInitializePageData); \
	DECLARE_FUNCTION(execRestoreQuizVisualStates); \
	DECLARE_FUNCTION(execGetQuizAnswerForAPI);


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingStepPage_h_19_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UTrainingStepPage_Statics;
AZUREAL_CSM_API UClass* Z_Construct_UClass_UTrainingStepPage(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingStepPage_h_19_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UTrainingStepPage_Statics; \
	friend AZUREAL_CSM_API UClass* ::Z_Construct_UClass_UTrainingStepPage(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UTrainingStepPage, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Azureal_CSM"), Z_Construct_UClass_UTrainingStepPage) \
	DECLARE_SERIALIZER(UTrainingStepPage)


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingStepPage_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTrainingStepPage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTrainingStepPage(UTrainingStepPage&&) = delete; \
	UTrainingStepPage(const UTrainingStepPage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrainingStepPage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrainingStepPage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrainingStepPage) \
	NO_API virtual ~UTrainingStepPage();


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingStepPage_h_16_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingStepPage_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingStepPage_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingStepPage_h_19_CALLBACK_WRAPPERS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingStepPage_h_19_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingStepPage_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTrainingStepPage;

// ********** End Class UTrainingStepPage **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingStepPage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
