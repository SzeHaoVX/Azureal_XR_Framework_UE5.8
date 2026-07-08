// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuizAnswerRow.h"

#ifdef AZUREAL_CSM_QuizAnswerRow_generated_h
#error "QuizAnswerRow.generated.h already included, missing '#pragma once' in QuizAnswerRow.h"
#endif
#define AZUREAL_CSM_QuizAnswerRow_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTrainingStepPage;
enum class EQuizAnswerState : uint8;

// ********** Begin Class UQuizAnswerRow ***********************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_QuizAnswerRow_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnButtonPressed); \
	DECLARE_FUNCTION(execSetRowState); \
	DECLARE_FUNCTION(execSetupRow); \
	DECLARE_FUNCTION(execSetButtonEnabled);


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_QuizAnswerRow_h_27_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UQuizAnswerRow_Statics;
AZUREAL_CSM_API UClass* Z_Construct_UClass_UQuizAnswerRow(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_QuizAnswerRow_h_27_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UQuizAnswerRow_Statics; \
	friend AZUREAL_CSM_API UClass* ::Z_Construct_UClass_UQuizAnswerRow(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UQuizAnswerRow, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Azureal_CSM"), Z_Construct_UClass_UQuizAnswerRow) \
	DECLARE_SERIALIZER(UQuizAnswerRow)


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_QuizAnswerRow_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuizAnswerRow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UQuizAnswerRow(UQuizAnswerRow&&) = delete; \
	UQuizAnswerRow(const UQuizAnswerRow&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuizAnswerRow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuizAnswerRow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuizAnswerRow) \
	NO_API virtual ~UQuizAnswerRow();


#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_QuizAnswerRow_h_24_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_QuizAnswerRow_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_QuizAnswerRow_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_QuizAnswerRow_h_27_CALLBACK_WRAPPERS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_QuizAnswerRow_h_27_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_QuizAnswerRow_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UQuizAnswerRow;

// ********** End Class UQuizAnswerRow *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_QuizAnswerRow_h

// ********** Begin Enum EQuizAnswerState **********************************************************
#define FOREACH_ENUM_EQUIZANSWERSTATE(op) \
	op(EQuizAnswerState::Idle) \
	op(EQuizAnswerState::Selected) \
	op(EQuizAnswerState::Unselected) \
	op(EQuizAnswerState::Correct) \
	op(EQuizAnswerState::Wrong) 

enum class EQuizAnswerState : uint8;
template<> struct TIsUEnumClass<EQuizAnswerState> { enum { Value = true }; };
template<> UE_NODEBUG AZUREAL_CSM_NON_ATTRIBUTED_API UEnum* StaticEnum<EQuizAnswerState>();
// ********** End Enum EQuizAnswerState ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
