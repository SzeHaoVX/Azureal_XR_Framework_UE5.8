// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainMenuPage.h"

#ifdef AZUREAL_CSM_MainMenuPage_generated_h
#error "MainMenuPage.generated.h already included, missing '#pragma once' in MainMenuPage.h"
#endif
#define AZUREAL_CSM_MainMenuPage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChapterBundle;

// ********** Begin Class UMainMenuPage ************************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_MainMenuPage_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleRowClicked); \
	DECLARE_FUNCTION(execIsAllChaptersCompleted); \
	DECLARE_FUNCTION(execGetCurrentChapterRestartText); \
	DECLARE_FUNCTION(execGetModuleCompletionText); \
	DECLARE_FUNCTION(execGetSelectedChapterIndex); \
	DECLARE_FUNCTION(execIsProceedButtonEnabled); \
	DECLARE_FUNCTION(execResetSelection); \
	DECLARE_FUNCTION(execProceedToSelectedChapter); \
	DECLARE_FUNCTION(execGenerateChapterList); \
	DECLARE_FUNCTION(execRefreshChapterRows); \
	DECLARE_FUNCTION(execUpdateVisibilityByChapter); \
	DECLARE_FUNCTION(execIsStartScreenActive); \
	DECLARE_FUNCTION(execOnRestartCancelled); \
	DECLARE_FUNCTION(execOnRestartConfirmed); \
	DECLARE_FUNCTION(execLoadCurrentChapter); \
	DECLARE_FUNCTION(execRestartWholeModule); \
	DECLARE_FUNCTION(execOnStartButtonClicked);


struct Z_Construct_UClass_UMainMenuPage_Statics;
AZUREAL_CSM_API UClass* Z_Construct_UClass_UMainMenuPage(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_MainMenuPage_h_17_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UMainMenuPage_Statics; \
	friend AZUREAL_CSM_API UClass* ::Z_Construct_UClass_UMainMenuPage(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UMainMenuPage, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Azureal_CSM"), Z_Construct_UClass_UMainMenuPage) \
	DECLARE_SERIALIZER(UMainMenuPage)


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_MainMenuPage_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuPage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMainMenuPage(UMainMenuPage&&) = delete; \
	UMainMenuPage(const UMainMenuPage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuPage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuPage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuPage) \
	NO_API virtual ~UMainMenuPage();


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_MainMenuPage_h_14_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_MainMenuPage_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_MainMenuPage_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_MainMenuPage_h_17_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_MainMenuPage_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMainMenuPage;

// ********** End Class UMainMenuPage **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_MainMenuPage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
