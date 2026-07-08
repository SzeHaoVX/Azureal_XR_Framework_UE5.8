// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChapterSubsystem.h"

#ifdef AZUREAL_CSM_ChapterSubsystem_generated_h
#error "ChapterSubsystem.generated.h already included, missing '#pragma once' in ChapterSubsystem.h"
#endif
#define AZUREAL_CSM_ChapterSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UChapterBundle;
class UClass;
class UTrainingCurriculum;

// ********** Begin Class UChapterSubsystem ********************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetModuleCompletionStatus); \
	DECLARE_FUNCTION(execGetTotalMasterStepCount); \
	DECLARE_FUNCTION(execGetTotalChapterCount); \
	DECLARE_FUNCTION(execGetCurrentChapterInfo); \
	DECLARE_FUNCTION(execGetCurrentChapterGameManagerClass); \
	DECLARE_FUNCTION(execGetStepDataForIndex); \
	DECLARE_FUNCTION(execGetCurrentStepData); \
	DECLARE_FUNCTION(execGetChapterProgress); \
	DECLARE_FUNCTION(execIsModuleFullyComplete); \
	DECLARE_FUNCTION(execIsChapterComplete); \
	DECLARE_FUNCTION(execResetAllModuleProgress); \
	DECLARE_FUNCTION(execResetChapterProgress); \
	DECLARE_FUNCTION(execUpdateChapterProgress); \
	DECLARE_FUNCTION(execMarkCurrentChapterComplete); \
	DECLARE_FUNCTION(execGetNextUnplayedChapterIndex); \
	DECLARE_FUNCTION(execGetCurrentChapterIndex); \
	DECLARE_FUNCTION(execSelectChapter); \
	DECLARE_FUNCTION(execInitializeChapters); \
	DECLARE_FUNCTION(execSetHasPassedStartScreen); \
	DECLARE_FUNCTION(execHasPassedStartScreen);


struct Z_Construct_UClass_UChapterSubsystem_Statics;
AZUREAL_CSM_API UClass* Z_Construct_UClass_UChapterSubsystem(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UChapterSubsystem_Statics; \
	friend AZUREAL_CSM_API UClass* ::Z_Construct_UClass_UChapterSubsystem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UChapterSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Azureal_CSM"), Z_Construct_UClass_UChapterSubsystem) \
	DECLARE_SERIALIZER(UChapterSubsystem)


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSubsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChapterSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChapterSubsystem(UChapterSubsystem&&) = delete; \
	UChapterSubsystem(const UChapterSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChapterSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChapterSubsystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChapterSubsystem) \
	NO_API virtual ~UChapterSubsystem();


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSubsystem_h_15_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChapterSubsystem;

// ********** End Class UChapterSubsystem **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
