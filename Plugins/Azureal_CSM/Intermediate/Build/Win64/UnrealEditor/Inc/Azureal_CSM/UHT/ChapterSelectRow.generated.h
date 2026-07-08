// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChapterSelectRow.h"

#ifdef AZUREAL_CSM_ChapterSelectRow_generated_h
#error "ChapterSelectRow.generated.h already included, missing '#pragma once' in ChapterSelectRow.h"
#endif
#define AZUREAL_CSM_ChapterSelectRow_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EChapterCompletionState : uint8;
enum class EChapterState : uint8;

// ********** Begin Class UChapterSelectRow ********************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSelectRow_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBroadcastClick); \
	DECLARE_FUNCTION(execSetRowState); \
	DECLARE_FUNCTION(execSetupSpecificRow);


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSelectRow_h_35_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UChapterSelectRow_Statics;
AZUREAL_CSM_API UClass* Z_Construct_UClass_UChapterSelectRow(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSelectRow_h_35_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UChapterSelectRow_Statics; \
	friend AZUREAL_CSM_API UClass* ::Z_Construct_UClass_UChapterSelectRow(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UChapterSelectRow, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Azureal_CSM"), Z_Construct_UClass_UChapterSelectRow) \
	DECLARE_SERIALIZER(UChapterSelectRow)


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSelectRow_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChapterSelectRow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChapterSelectRow(UChapterSelectRow&&) = delete; \
	UChapterSelectRow(const UChapterSelectRow&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChapterSelectRow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChapterSelectRow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChapterSelectRow) \
	NO_API virtual ~UChapterSelectRow();


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSelectRow_h_32_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSelectRow_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSelectRow_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSelectRow_h_35_CALLBACK_WRAPPERS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSelectRow_h_35_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSelectRow_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChapterSelectRow;

// ********** End Class UChapterSelectRow **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterSelectRow_h

// ********** Begin Enum EChapterState *************************************************************
#define FOREACH_ENUM_ECHAPTERSTATE(op) \
	op(EChapterState::Idle) \
	op(EChapterState::Selected) \
	op(EChapterState::YouAreHere) 

enum class EChapterState : uint8;
template<> struct TIsUEnumClass<EChapterState> { enum { Value = true }; };
template<> UE_NODEBUG AZUREAL_CSM_NON_ATTRIBUTED_API UEnum* StaticEnum<EChapterState>();
// ********** End Enum EChapterState ***************************************************************

// ********** Begin Enum EChapterCompletionState ***************************************************
#define FOREACH_ENUM_ECHAPTERCOMPLETIONSTATE(op) \
	op(EChapterCompletionState::Incomplete) \
	op(EChapterCompletionState::InProgress) \
	op(EChapterCompletionState::Completed) 

enum class EChapterCompletionState : uint8;
template<> struct TIsUEnumClass<EChapterCompletionState> { enum { Value = true }; };
template<> UE_NODEBUG AZUREAL_CSM_NON_ATTRIBUTED_API UEnum* StaticEnum<EChapterCompletionState>();
// ********** End Enum EChapterCompletionState *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
