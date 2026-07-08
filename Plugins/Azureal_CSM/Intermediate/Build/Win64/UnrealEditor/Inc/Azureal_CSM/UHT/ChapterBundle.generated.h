// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChapterBundle.h"

#ifdef AZUREAL_CSM_ChapterBundle_generated_h
#error "ChapterBundle.generated.h already included, missing '#pragma once' in ChapterBundle.h"
#endif
#define AZUREAL_CSM_ChapterBundle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChapterDef *******************************************************
struct Z_Construct_UScriptStruct_FChapterDef_Statics;
AZUREAL_CSM_API UScriptStruct* Z_Construct_UScriptStruct_FChapterDef(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterBundle_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChapterDef_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FChapterDef(ETypeConstructPhase::Inner); }


struct FChapterDef;
// ********** End ScriptStruct FChapterDef *********************************************************

// ********** Begin Class UChapterBundle ***********************************************************
struct Z_Construct_UClass_UChapterBundle_Statics;
AZUREAL_CSM_API UClass* Z_Construct_UClass_UChapterBundle(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterBundle_h_34_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UChapterBundle_Statics; \
	friend AZUREAL_CSM_API UClass* ::Z_Construct_UClass_UChapterBundle(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UChapterBundle, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Azureal_CSM"), Z_Construct_UClass_UChapterBundle) \
	DECLARE_SERIALIZER(UChapterBundle)


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterBundle_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChapterBundle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChapterBundle(UChapterBundle&&) = delete; \
	UChapterBundle(const UChapterBundle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChapterBundle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChapterBundle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChapterBundle) \
	NO_API virtual ~UChapterBundle();


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterBundle_h_31_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterBundle_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterBundle_h_34_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterBundle_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChapterBundle;

// ********** End Class UChapterBundle *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterBundle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
