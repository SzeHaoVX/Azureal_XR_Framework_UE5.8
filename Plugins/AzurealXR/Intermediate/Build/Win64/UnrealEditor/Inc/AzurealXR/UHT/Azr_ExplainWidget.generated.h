// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Azr_ExplainWidget.h"

#ifdef AZUREALXR_Azr_ExplainWidget_generated_h
#error "Azr_ExplainWidget.generated.h already included, missing '#pragma once' in Azr_ExplainWidget.h"
#endif
#define AZUREALXR_Azr_ExplainWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAzr_ExplainStepType : uint8;

// ********** Begin Class UAzr_ExplainWidget *******************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ExplainWidget_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnInteractionButtonUnhovered); \
	DECLARE_FUNCTION(execOnInteractionButtonHovered); \
	DECLARE_FUNCTION(execOnInteractionButtonClicked); \
	DECLARE_FUNCTION(execSetHoveredByRightHand); \
	DECLARE_FUNCTION(execSetHoveredByLeftHand); \
	DECLARE_FUNCTION(execSetPlaybackCompleted); \
	DECLARE_FUNCTION(execSetAudioProgress); \
	DECLARE_FUNCTION(execSetExplainText); \
	DECLARE_FUNCTION(execInitializeStep);


struct Z_Construct_UClass_UAzr_ExplainWidget_Statics;
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_ExplainWidget(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ExplainWidget_h_42_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAzr_ExplainWidget_Statics; \
	friend AZUREALXR_API UClass* ::Z_Construct_UClass_UAzr_ExplainWidget(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAzr_ExplainWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AzurealXR"), Z_Construct_UClass_UAzr_ExplainWidget) \
	DECLARE_SERIALIZER(UAzr_ExplainWidget)


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ExplainWidget_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzr_ExplainWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAzr_ExplainWidget(UAzr_ExplainWidget&&) = delete; \
	UAzr_ExplainWidget(const UAzr_ExplainWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzr_ExplainWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzr_ExplainWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzr_ExplainWidget) \
	NO_API virtual ~UAzr_ExplainWidget();


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ExplainWidget_h_40_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ExplainWidget_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ExplainWidget_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ExplainWidget_h_42_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ExplainWidget_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAzr_ExplainWidget;

// ********** End Class UAzr_ExplainWidget *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ExplainWidget_h

// ********** Begin Enum EAzr_ExplainStepType ******************************************************
#define FOREACH_ENUM_EAZR_EXPLAINSTEPTYPE(op) \
	op(EAzr_ExplainStepType::Single) \
	op(EAzr_ExplainStepType::Start) \
	op(EAzr_ExplainStepType::Middle) \
	op(EAzr_ExplainStepType::End) 

enum class EAzr_ExplainStepType : uint8;
template<> struct TIsUEnumClass<EAzr_ExplainStepType> { enum { Value = true }; };
template<> UE_NODEBUG AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_ExplainStepType>();
// ********** End Enum EAzr_ExplainStepType ********************************************************

// ********** Begin Enum EAzr_ExplainWidgetState ***************************************************
#define FOREACH_ENUM_EAZR_EXPLAINWIDGETSTATE(op) \
	op(EAzr_ExplainWidgetState::Idle) \
	op(EAzr_ExplainWidgetState::Playing) \
	op(EAzr_ExplainWidgetState::Completed) 

enum class EAzr_ExplainWidgetState : uint8;
template<> struct TIsUEnumClass<EAzr_ExplainWidgetState> { enum { Value = true }; };
template<> UE_NODEBUG AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_ExplainWidgetState>();
// ********** End Enum EAzr_ExplainWidgetState *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
