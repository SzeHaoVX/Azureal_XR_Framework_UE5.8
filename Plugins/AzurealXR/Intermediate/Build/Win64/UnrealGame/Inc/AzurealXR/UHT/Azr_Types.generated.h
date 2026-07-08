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
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAzr_TetherConfig *************************************************
struct Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics;
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Types_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics; \
	AZUREALXR_API static class UScriptStruct* StaticStruct();


struct FAzr_TetherConfig;
// ********** End ScriptStruct FAzr_TetherConfig ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Types_h

// ********** Begin Enum EAzr_HighlightMode ********************************************************
#define FOREACH_ENUM_EAZR_HIGHLIGHTMODE(op) \
	op(EAzr_HighlightMode::None) \
	op(EAzr_HighlightMode::TargetMeshOnly) \
	op(EAzr_HighlightMode::AllComponents) 

enum class EAzr_HighlightMode : uint8;
template<> struct TIsUEnumClass<EAzr_HighlightMode> { enum { Value = true }; };
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_HighlightMode>();
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
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_TetherPos>();
// ********** End Enum EAzr_TetherPos **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
