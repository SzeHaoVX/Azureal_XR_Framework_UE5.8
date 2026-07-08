// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Types() {}

// ********** Begin Cross Module References ********************************************************
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode();
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_TetherPos();
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_TetherConfig();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_AzurealXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAzr_HighlightMode ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAzr_HighlightMode;
static UEnum* EAzr_HighlightMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAzr_HighlightMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAzr_HighlightMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode, (UObject*)Z_Construct_UPackage__Script_AzurealXR(), TEXT("EAzr_HighlightMode"));
	}
	return Z_Registration_Info_UEnum_EAzr_HighlightMode.OuterSingleton;
}
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_HighlightMode>()
{
	return EAzr_HighlightMode_StaticEnum();
}
struct Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllComponents.Name", "EAzr_HighlightMode::AllComponents" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
		{ "None.Name", "EAzr_HighlightMode::None" },
		{ "TargetMeshOnly.Name", "EAzr_HighlightMode::TargetMeshOnly" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAzr_HighlightMode::None", (int64)EAzr_HighlightMode::None },
		{ "EAzr_HighlightMode::TargetMeshOnly", (int64)EAzr_HighlightMode::TargetMeshOnly },
		{ "EAzr_HighlightMode::AllComponents", (int64)EAzr_HighlightMode::AllComponents },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_HighlightMode",
	"EAzr_HighlightMode",
	Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode()
{
	if (!Z_Registration_Info_UEnum_EAzr_HighlightMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAzr_HighlightMode.InnerSingleton, Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAzr_HighlightMode.InnerSingleton;
}
// ********** End Enum EAzr_HighlightMode **********************************************************

// ********** Begin Enum EAzr_TetherPos ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAzr_TetherPos;
static UEnum* EAzr_TetherPos_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAzr_TetherPos.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAzr_TetherPos.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_TetherPos, (UObject*)Z_Construct_UPackage__Script_AzurealXR(), TEXT("EAzr_TetherPos"));
	}
	return Z_Registration_Info_UEnum_EAzr_TetherPos.OuterSingleton;
}
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_TetherPos>()
{
	return EAzr_TetherPos_StaticEnum();
}
struct Z_Construct_UEnum_AzurealXR_EAzr_TetherPos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Back.Name", "EAzr_TetherPos::Back" },
		{ "BlueprintType", "true" },
		{ "Bottom.Name", "EAzr_TetherPos::Bottom" },
		{ "Center.Name", "EAzr_TetherPos::Center" },
		{ "Front.Name", "EAzr_TetherPos::Front" },
		{ "Left.Name", "EAzr_TetherPos::Left" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
		{ "Right.Name", "EAzr_TetherPos::Right" },
		{ "Top.Name", "EAzr_TetherPos::Top" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAzr_TetherPos::Center", (int64)EAzr_TetherPos::Center },
		{ "EAzr_TetherPos::Top", (int64)EAzr_TetherPos::Top },
		{ "EAzr_TetherPos::Bottom", (int64)EAzr_TetherPos::Bottom },
		{ "EAzr_TetherPos::Left", (int64)EAzr_TetherPos::Left },
		{ "EAzr_TetherPos::Right", (int64)EAzr_TetherPos::Right },
		{ "EAzr_TetherPos::Front", (int64)EAzr_TetherPos::Front },
		{ "EAzr_TetherPos::Back", (int64)EAzr_TetherPos::Back },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_AzurealXR_EAzr_TetherPos_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzurealXR_EAzr_TetherPos_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_TetherPos",
	"EAzr_TetherPos",
	Z_Construct_UEnum_AzurealXR_EAzr_TetherPos_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AzurealXR_EAzr_TetherPos_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AzurealXR_EAzr_TetherPos_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AzurealXR_EAzr_TetherPos_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_TetherPos()
{
	if (!Z_Registration_Info_UEnum_EAzr_TetherPos.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAzr_TetherPos.InnerSingleton, Z_Construct_UEnum_AzurealXR_EAzr_TetherPos_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAzr_TetherPos.InnerSingleton;
}
// ********** End Enum EAzr_TetherPos **************************************************************

// ********** Begin ScriptStruct FAzr_TetherConfig *************************************************
struct Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAzr_TetherConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAzr_TetherConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- SHARED TETHER CONFIGURATION ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- SHARED TETHER CONFIGURATION ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTether_MetaData[] = {
		{ "Category", "Tether" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetWidgetName_MetaData[] = {
		{ "Category", "Tether" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshAnchorPos_MetaData[] = {
		{ "Category", "Tether" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetAnchorPos_MetaData[] = {
		{ "Category", "Tether" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetGap_Vertical_MetaData[] = {
		{ "Category", "Tether|Adjustments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- ADJUSTMENTS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- ADJUSTMENTS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetGap_Horizontal_MetaData[] = {
		{ "Category", "Tether|Adjustments" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshOffset_Vertical_MetaData[] = {
		{ "Category", "Tether|Adjustments" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshOffset_Horizontal_MetaData[] = {
		{ "Category", "Tether|Adjustments" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshSurfaceOffset_MetaData[] = {
		{ "Category", "Tether|Adjustments" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorMesh_MetaData[] = {
		{ "Category", "Tether" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- VISUALS ---\n// FIX: Initialize to nullptr to prevent garbage memory crashes\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- VISUALS ---\nFIX: Initialize to nullptr to prevent garbage memory crashes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorScale_MetaData[] = {
		{ "Category", "Tether" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CableWidth_MetaData[] = {
		{ "Category", "Tether" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CableMaterial_MetaData[] = {
		{ "Category", "Tether" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FIX: Initialize to nullptr to prevent garbage memory crashes\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FIX: Initialize to nullptr to prevent garbage memory crashes" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAzr_TetherConfig constinit property declarations *****************
	static void NewProp_bEnableTether_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTether;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetWidgetName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeshAnchorPos_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshAnchorPos;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WidgetAnchorPos_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WidgetAnchorPos;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WidgetGap_Vertical;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WidgetGap_Horizontal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeshOffset_Vertical;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeshOffset_Horizontal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeshSurfaceOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnchorMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnchorScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CableWidth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CableMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAzr_TetherConfig constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzr_TetherConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAzr_TetherConfig;
class UScriptStruct* FAzr_TetherConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAzr_TetherConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAzr_TetherConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzr_TetherConfig, (UObject*)Z_Construct_UPackage__Script_AzurealXR(), TEXT("Azr_TetherConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FAzr_TetherConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FAzr_TetherConfig Property Definitions ****************************
void Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_bEnableTether_SetBit(void* Obj)
{
	((FAzr_TetherConfig*)Obj)->bEnableTether = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_bEnableTether = { "bEnableTether", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAzr_TetherConfig), &Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_bEnableTether_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTether_MetaData), NewProp_bEnableTether_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_TargetWidgetName = { "TargetWidgetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, TargetWidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWidgetName_MetaData), NewProp_TargetWidgetName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_MeshAnchorPos_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_MeshAnchorPos = { "MeshAnchorPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, MeshAnchorPos), Z_Construct_UEnum_AzurealXR_EAzr_TetherPos, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshAnchorPos_MetaData), NewProp_MeshAnchorPos_MetaData) }; // 3824421123
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_WidgetAnchorPos_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_WidgetAnchorPos = { "WidgetAnchorPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, WidgetAnchorPos), Z_Construct_UEnum_AzurealXR_EAzr_TetherPos, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetAnchorPos_MetaData), NewProp_WidgetAnchorPos_MetaData) }; // 3824421123
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_WidgetGap_Vertical = { "WidgetGap_Vertical", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, WidgetGap_Vertical), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetGap_Vertical_MetaData), NewProp_WidgetGap_Vertical_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_WidgetGap_Horizontal = { "WidgetGap_Horizontal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, WidgetGap_Horizontal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetGap_Horizontal_MetaData), NewProp_WidgetGap_Horizontal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_MeshOffset_Vertical = { "MeshOffset_Vertical", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, MeshOffset_Vertical), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshOffset_Vertical_MetaData), NewProp_MeshOffset_Vertical_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_MeshOffset_Horizontal = { "MeshOffset_Horizontal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, MeshOffset_Horizontal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshOffset_Horizontal_MetaData), NewProp_MeshOffset_Horizontal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_MeshSurfaceOffset = { "MeshSurfaceOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, MeshSurfaceOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshSurfaceOffset_MetaData), NewProp_MeshSurfaceOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_AnchorMesh = { "AnchorMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, AnchorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorMesh_MetaData), NewProp_AnchorMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_AnchorScale = { "AnchorScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, AnchorScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorScale_MetaData), NewProp_AnchorScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_CableWidth = { "CableWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, CableWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CableWidth_MetaData), NewProp_CableWidth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_CableMaterial = { "CableMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, CableMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CableMaterial_MetaData), NewProp_CableMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_bEnableTether,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_TargetWidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_MeshAnchorPos_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_MeshAnchorPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_WidgetAnchorPos_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_WidgetAnchorPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_WidgetGap_Vertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_WidgetGap_Horizontal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_MeshOffset_Vertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_MeshOffset_Horizontal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_MeshSurfaceOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_AnchorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_AnchorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_CableWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewProp_CableMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAzr_TetherConfig Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	&NewStructOps,
	"Azr_TetherConfig",
	Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::PropPointers),
	sizeof(FAzr_TetherConfig),
	alignof(FAzr_TetherConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAzr_TetherConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FAzr_TetherConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAzr_TetherConfig.InnerSingleton, Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAzr_TetherConfig.InnerSingleton);
}
// ********** End ScriptStruct FAzr_TetherConfig ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Types_h__Script_AzurealXR_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAzr_HighlightMode_StaticEnum, TEXT("EAzr_HighlightMode"), &Z_Registration_Info_UEnum_EAzr_HighlightMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3885943093U) },
		{ EAzr_TetherPos_StaticEnum, TEXT("EAzr_TetherPos"), &Z_Registration_Info_UEnum_EAzr_TetherPos, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3824421123U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAzr_TetherConfig::StaticStruct, Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewStructOps, TEXT("Azr_TetherConfig"),&Z_Registration_Info_UScriptStruct_FAzr_TetherConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzr_TetherConfig), 3635324092U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Types_h__Script_AzurealXR_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Types_h__Script_AzurealXR_259691353{
	TEXT("/Script/AzurealXR"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Types_h__Script_AzurealXR_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Types_h__Script_AzurealXR_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Types_h__Script_AzurealXR_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Types_h__Script_AzurealXR_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
