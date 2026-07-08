// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FlowControlLibrary.h"

#ifdef AZUREAL_CSM_FlowControlLibrary_generated_h
#error "FlowControlLibrary.generated.h already included, missing '#pragma once' in FlowControlLibrary.h"
#endif
#define AZUREAL_CSM_FlowControlLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFlowMode : uint8;
enum class EFlowResult : uint8;

// ********** Begin Class UFlowControlLibrary ******************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_FlowControlLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFlowController);


struct Z_Construct_UClass_UFlowControlLibrary_Statics;
AZUREAL_CSM_API UClass* Z_Construct_UClass_UFlowControlLibrary(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_FlowControlLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UFlowControlLibrary_Statics; \
	friend AZUREAL_CSM_API UClass* ::Z_Construct_UClass_UFlowControlLibrary(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UFlowControlLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Azureal_CSM"), Z_Construct_UClass_UFlowControlLibrary) \
	DECLARE_SERIALIZER(UFlowControlLibrary)


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_FlowControlLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlowControlLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFlowControlLibrary(UFlowControlLibrary&&) = delete; \
	UFlowControlLibrary(const UFlowControlLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlowControlLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlowControlLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlowControlLibrary) \
	NO_API virtual ~UFlowControlLibrary();


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_FlowControlLibrary_h_25_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_FlowControlLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_FlowControlLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_FlowControlLibrary_h_28_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_FlowControlLibrary_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFlowControlLibrary;

// ********** End Class UFlowControlLibrary ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_FlowControlLibrary_h

// ********** Begin Enum EFlowMode *****************************************************************
#define FOREACH_ENUM_EFLOWMODE(op) \
	op(EFlowMode::Interaction) \
	op(EFlowMode::Explanation) 

enum class EFlowMode : uint8;
template<> struct TIsUEnumClass<EFlowMode> { enum { Value = true }; };
template<> UE_NODEBUG AZUREAL_CSM_NON_ATTRIBUTED_API UEnum* StaticEnum<EFlowMode>();
// ********** End Enum EFlowMode *******************************************************************

// ********** Begin Enum EFlowResult ***************************************************************
#define FOREACH_ENUM_EFLOWRESULT(op) \
	op(EFlowResult::RunStep) \
	op(EFlowResult::Skip) 

enum class EFlowResult : uint8;
template<> struct TIsUEnumClass<EFlowResult> { enum { Value = true }; };
template<> UE_NODEBUG AZUREAL_CSM_NON_ATTRIBUTED_API UEnum* StaticEnum<EFlowResult>();
// ********** End Enum EFlowResult *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
