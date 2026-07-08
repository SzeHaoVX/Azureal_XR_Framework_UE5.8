// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Azr_ActionWidget.h"

#ifdef AZUREALXR_Azr_ActionWidget_generated_h
#error "Azr_ActionWidget.generated.h already included, missing '#pragma once' in Azr_ActionWidget.h"
#endif
#define AZUREALXR_Azr_ActionWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAzr_ActionMode : uint8;

// ********** Begin Class UAzr_ActionWidget ********************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ActionWidget_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnActionButtonUnhovered); \
	DECLARE_FUNCTION(execOnActionButtonHovered); \
	DECLARE_FUNCTION(execOnActionButtonClicked); \
	DECLARE_FUNCTION(execSetActionDescription); \
	DECLARE_FUNCTION(execSetHoveredByRightHand); \
	DECLARE_FUNCTION(execSetHoveredByLeftHand); \
	DECLARE_FUNCTION(execSetActionCompleted); \
	DECLARE_FUNCTION(execSetActionProgress); \
	DECLARE_FUNCTION(execInitializeAction);


struct Z_Construct_UClass_UAzr_ActionWidget_Statics;
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_ActionWidget(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ActionWidget_h_40_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAzr_ActionWidget_Statics; \
	friend AZUREALXR_API UClass* ::Z_Construct_UClass_UAzr_ActionWidget(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAzr_ActionWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AzurealXR"), Z_Construct_UClass_UAzr_ActionWidget) \
	DECLARE_SERIALIZER(UAzr_ActionWidget)


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ActionWidget_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzr_ActionWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAzr_ActionWidget(UAzr_ActionWidget&&) = delete; \
	UAzr_ActionWidget(const UAzr_ActionWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzr_ActionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzr_ActionWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzr_ActionWidget) \
	NO_API virtual ~UAzr_ActionWidget();


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ActionWidget_h_38_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ActionWidget_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ActionWidget_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ActionWidget_h_40_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ActionWidget_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAzr_ActionWidget;

// ********** End Class UAzr_ActionWidget **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ActionWidget_h

// ********** Begin Enum EAzr_ActionMode ***********************************************************
#define FOREACH_ENUM_EAZR_ACTIONMODE(op) \
	op(EAzr_ActionMode::Teleport) \
	op(EAzr_ActionMode::Animation) \
	op(EAzr_ActionMode::Custom) 

enum class EAzr_ActionMode : uint8;
template<> struct TIsUEnumClass<EAzr_ActionMode> { enum { Value = true }; };
template<> UE_NODEBUG AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_ActionMode>();
// ********** End Enum EAzr_ActionMode *************************************************************

// ********** Begin Enum EAzr_ActionWidgetState ****************************************************
#define FOREACH_ENUM_EAZR_ACTIONWIDGETSTATE(op) \
	op(EAzr_ActionWidgetState::Idle) \
	op(EAzr_ActionWidgetState::Processing) \
	op(EAzr_ActionWidgetState::Completed) 

enum class EAzr_ActionWidgetState : uint8;
template<> struct TIsUEnumClass<EAzr_ActionWidgetState> { enum { Value = true }; };
template<> UE_NODEBUG AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_ActionWidgetState>();
// ********** End Enum EAzr_ActionWidgetState ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
