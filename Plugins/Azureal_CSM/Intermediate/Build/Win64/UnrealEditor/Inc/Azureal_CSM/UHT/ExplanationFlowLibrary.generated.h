// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExplanationFlowLibrary.h"

#ifdef AZUREAL_CSM_ExplanationFlowLibrary_generated_h
#error "ExplanationFlowLibrary.generated.h already included, missing '#pragma once' in ExplanationFlowLibrary.h"
#endif
#define AZUREAL_CSM_ExplanationFlowLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EExplanationResult : uint8;

// ********** Begin Class UExplanationFlowLibrary **************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ExplanationFlowLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExplanationFlowController); \
	DECLARE_FUNCTION(execIsExplanationEnabled); \
	DECLARE_FUNCTION(execSetExplanationBoolean);


struct Z_Construct_UClass_UExplanationFlowLibrary_Statics;
AZUREAL_CSM_API UClass* Z_Construct_UClass_UExplanationFlowLibrary(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ExplanationFlowLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UExplanationFlowLibrary_Statics; \
	friend AZUREAL_CSM_API UClass* ::Z_Construct_UClass_UExplanationFlowLibrary(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UExplanationFlowLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Azureal_CSM"), Z_Construct_UClass_UExplanationFlowLibrary) \
	DECLARE_SERIALIZER(UExplanationFlowLibrary)


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ExplanationFlowLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExplanationFlowLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExplanationFlowLibrary(UExplanationFlowLibrary&&) = delete; \
	UExplanationFlowLibrary(const UExplanationFlowLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExplanationFlowLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExplanationFlowLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExplanationFlowLibrary) \
	NO_API virtual ~UExplanationFlowLibrary();


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ExplanationFlowLibrary_h_17_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ExplanationFlowLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ExplanationFlowLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ExplanationFlowLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ExplanationFlowLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExplanationFlowLibrary;

// ********** End Class UExplanationFlowLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ExplanationFlowLibrary_h

// ********** Begin Enum EExplanationResult ********************************************************
#define FOREACH_ENUM_EEXPLANATIONRESULT(op) \
	op(EExplanationResult::RunStep) \
	op(EExplanationResult::Skip) 

enum class EExplanationResult : uint8;
template<> struct TIsUEnumClass<EExplanationResult> { enum { Value = true }; };
template<> UE_NODEBUG AZUREAL_CSM_NON_ATTRIBUTED_API UEnum* StaticEnum<EExplanationResult>();
// ********** End Enum EExplanationResult **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
