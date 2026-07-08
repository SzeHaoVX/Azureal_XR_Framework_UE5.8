// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Azr_Types.h"

#ifdef AZUREALXR_Azr_Types_generated_h
#error "Azr_Types.generated.h already included, missing '#pragma once' in Azr_Types.h"
#endif
#define AZUREALXR_Azr_Types_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAzr_TetherConfig *************************************************
struct Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics;
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_TetherConfig(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Types_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FAzr_TetherConfig(ETypeConstructPhase::Inner); }


struct FAzr_TetherConfig;
// ********** End ScriptStruct FAzr_TetherConfig ***************************************************

// ********** Begin ScriptStruct FAzr_ExplainStep **************************************************
struct Z_Construct_UScriptStruct_FAzr_ExplainStep_Statics;
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_ExplainStep(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Types_h_104_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAzr_ExplainStep_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FAzr_ExplainStep(ETypeConstructPhase::Inner); }


struct FAzr_ExplainStep;
// ********** End ScriptStruct FAzr_ExplainStep ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Types_h

// ********** Begin Enum EAzr_PointerTarget ********************************************************
#define FOREACH_ENUM_EAZR_POINTERTARGET(op) \
	op(EAzr_PointerTarget::Mesh) \
	op(EAzr_PointerTarget::Widget) 

enum class EAzr_PointerTarget : uint8;
template<> struct TIsUEnumClass<EAzr_PointerTarget> { enum { Value = true }; };
template<> UE_NODEBUG AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_PointerTarget>();
// ********** End Enum EAzr_PointerTarget **********************************************************

// ********** Begin Enum EAzr_HighlightMode ********************************************************
#define FOREACH_ENUM_EAZR_HIGHLIGHTMODE(op) \
	op(EAzr_HighlightMode::None) \
	op(EAzr_HighlightMode::TargetMeshOnly) \
	op(EAzr_HighlightMode::AllComponents) 

enum class EAzr_HighlightMode : uint8;
template<> struct TIsUEnumClass<EAzr_HighlightMode> { enum { Value = true }; };
template<> UE_NODEBUG AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_HighlightMode>();
// ********** End Enum EAzr_HighlightMode **********************************************************

// ********** Begin Enum EAzr_TetherPos ************************************************************
#define FOREACH_ENUM_EAZR_TETHERPOS(op) \
	op(EAzr_TetherPos::Center) \
	op(EAzr_TetherPos::Top) \
	op(EAzr_TetherPos::Bottom) \
	op(EAzr_TetherPos::Left) \
	op(EAzr_TetherPos::Right) \
	op(EAzr_TetherPos::Front) \
	op(EAzr_TetherPos::Back) 

enum class EAzr_TetherPos : uint8;
template<> struct TIsUEnumClass<EAzr_TetherPos> { enum { Value = true }; };
template<> UE_NODEBUG AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_TetherPos>();
// ********** End Enum EAzr_TetherPos **************************************************************

// ********** Begin Enum EAzr_ExplainMode **********************************************************
#define FOREACH_ENUM_EAZR_EXPLAINMODE(op) \
	op(EAzr_ExplainMode::Audio) \
	op(EAzr_ExplainMode::CustomTimer) 

enum class EAzr_ExplainMode : uint8;
template<> struct TIsUEnumClass<EAzr_ExplainMode> { enum { Value = true }; };
template<> UE_NODEBUG AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_ExplainMode>();
// ********** End Enum EAzr_ExplainMode ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
