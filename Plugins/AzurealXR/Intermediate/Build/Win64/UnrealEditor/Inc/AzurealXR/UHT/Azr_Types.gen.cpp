// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Types() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_ExplainStep(ETypeConstructPhase);
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_TetherConfig(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_ExplainMode(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_PointerTarget(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_TetherPos(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EAzr_PointerTarget ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AzurealXR_EAzr_PointerTarget_Statics
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_PointerTarget>()
{
	return Z_Construct_UEnum_AzurealXR_EAzr_PointerTarget(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- NEW: POINTER TARGET ENUM ---\n" },
#endif
		{ "Mesh.DisplayName", "Target Mesh" },
		{ "Mesh.Name", "EAzr_PointerTarget::Mesh" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- NEW: POINTER TARGET ENUM ---" },
#endif
		{ "Widget.DisplayName", "UI Widget" },
		{ "Widget.Name", "EAzr_PointerTarget::Widget" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAzr_PointerTarget::Mesh", (int64)EAzr_PointerTarget::Mesh },
		{ "EAzr_PointerTarget::Widget", (int64)EAzr_PointerTarget::Widget },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_PointerTarget",
	"EAzr_PointerTarget",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAzr_PointerTarget;
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_PointerTarget(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAzr_PointerTarget.OuterSingleton)
		{
			ZRIE_EAzr_PointerTarget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_PointerTarget, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("EAzr_PointerTarget"));
		}
		return ZRIE_EAzr_PointerTarget.OuterSingleton;
	}
	if (!ZRIE_EAzr_PointerTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAzr_PointerTarget.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAzr_PointerTarget.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAzr_PointerTarget **********************************************************

// ********** Begin Enum EAzr_HighlightMode ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode_Statics
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_HighlightMode>()
{
	return Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_HighlightMode",
	"EAzr_HighlightMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAzr_HighlightMode;
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAzr_HighlightMode.OuterSingleton)
		{
			ZRIE_EAzr_HighlightMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("EAzr_HighlightMode"));
		}
		return ZRIE_EAzr_HighlightMode.OuterSingleton;
	}
	if (!ZRIE_EAzr_HighlightMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAzr_HighlightMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAzr_HighlightMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAzr_HighlightMode **********************************************************

// ********** Begin Enum EAzr_TetherPos ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AzurealXR_EAzr_TetherPos_Statics
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_TetherPos>()
{
	return Z_Construct_UEnum_AzurealXR_EAzr_TetherPos(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_TetherPos",
	"EAzr_TetherPos",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAzr_TetherPos;
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_TetherPos(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAzr_TetherPos.OuterSingleton)
		{
			ZRIE_EAzr_TetherPos.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_TetherPos, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("EAzr_TetherPos"));
		}
		return ZRIE_EAzr_TetherPos.OuterSingleton;
	}
	if (!ZRIE_EAzr_TetherPos.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAzr_TetherPos.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAzr_TetherPos.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAzr_TetherPos **************************************************************

// ********** Begin ScriptStruct FAzr_TetherConfig *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAzr_TetherConfig>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAzr_TetherConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IGNORED IN EXPLAIN SYSTEM - Uses the Step's WidgetName instead." },
#endif
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
		{ "Comment", "// --- VISUALS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- VISUALS ---" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CableHang_MetaData[] = {
		{ "Category", "Tether" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CableMaterial_MetaData[] = {
		{ "Category", "Tether" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAzr_TetherConfig constinit property declarations *****************
	static void NewProp_bEnableTether_SetBit(void* Obj)
	{
		((FAzr_TetherConfig*)Obj)->bEnableTether = 1;
	}
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CableHang;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CableMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAzr_TetherConfig constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzr_TetherConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAzr_TetherConfig Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableTether = { "bEnableTether", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAzr_TetherConfig), &UHT_STATICS::NewProp_bEnableTether_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTether_MetaData), NewProp_bEnableTether_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TargetWidgetName = { "TargetWidgetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, TargetWidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWidgetName_MetaData), NewProp_TargetWidgetName_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_MeshAnchorPos_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_MeshAnchorPos = { "MeshAnchorPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, MeshAnchorPos), Z_Construct_UEnum_AzurealXR_EAzr_TetherPos, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshAnchorPos_MetaData), NewProp_MeshAnchorPos_MetaData) }; // e7f64812a2a232419a4ec08860ad12caf1d70ac1
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_WidgetAnchorPos_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_WidgetAnchorPos = { "WidgetAnchorPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, WidgetAnchorPos), Z_Construct_UEnum_AzurealXR_EAzr_TetherPos, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetAnchorPos_MetaData), NewProp_WidgetAnchorPos_MetaData) }; // e7f64812a2a232419a4ec08860ad12caf1d70ac1
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_WidgetGap_Vertical = { "WidgetGap_Vertical", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, WidgetGap_Vertical), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetGap_Vertical_MetaData), NewProp_WidgetGap_Vertical_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_WidgetGap_Horizontal = { "WidgetGap_Horizontal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, WidgetGap_Horizontal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetGap_Horizontal_MetaData), NewProp_WidgetGap_Horizontal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MeshOffset_Vertical = { "MeshOffset_Vertical", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, MeshOffset_Vertical), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshOffset_Vertical_MetaData), NewProp_MeshOffset_Vertical_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MeshOffset_Horizontal = { "MeshOffset_Horizontal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, MeshOffset_Horizontal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshOffset_Horizontal_MetaData), NewProp_MeshOffset_Horizontal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MeshSurfaceOffset = { "MeshSurfaceOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, MeshSurfaceOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshSurfaceOffset_MetaData), NewProp_MeshSurfaceOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AnchorMesh = { "AnchorMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, AnchorMesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorMesh_MetaData), NewProp_AnchorMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AnchorScale = { "AnchorScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, AnchorScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorScale_MetaData), NewProp_AnchorScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CableWidth = { "CableWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, CableWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CableWidth_MetaData), NewProp_CableWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CableHang = { "CableHang", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, CableHang), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CableHang_MetaData), NewProp_CableHang_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CableMaterial = { "CableMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_TetherConfig, CableMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CableMaterial_MetaData), NewProp_CableMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableTether,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetWidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshAnchorPos_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshAnchorPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WidgetAnchorPos_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WidgetAnchorPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WidgetGap_Vertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WidgetGap_Horizontal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshOffset_Vertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshOffset_Horizontal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshSurfaceOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnchorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnchorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CableWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CableHang,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CableMaterial,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAzr_TetherConfig Property Definitions ******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	&NewStructOps,
	"Azr_TetherConfig",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAzr_TetherConfig>(),
	alignof(FAzr_TetherConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAzr_TetherConfig;
UScriptStruct* Z_Construct_UScriptStruct_FAzr_TetherConfig(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAzr_TetherConfig.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAzr_TetherConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzr_TetherConfig, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("Azr_TetherConfig"));
		}
		return Z_Registration_Info_UScriptStruct_FAzr_TetherConfig.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAzr_TetherConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAzr_TetherConfig.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAzr_TetherConfig.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAzr_TetherConfig ***************************************************

// ********** Begin Enum EAzr_ExplainMode **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AzurealXR_EAzr_ExplainMode_Statics
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_ExplainMode>()
{
	return Z_Construct_UEnum_AzurealXR_EAzr_ExplainMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Audio.DisplayName", "Sync with Audio Length" },
		{ "Audio.Name", "EAzr_ExplainMode::Audio" },
		{ "BlueprintType", "true" },
		{ "CustomTimer.DisplayName", "Use Custom Timer" },
		{ "CustomTimer.Name", "EAzr_ExplainMode::CustomTimer" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAzr_ExplainMode::Audio", (int64)EAzr_ExplainMode::Audio },
		{ "EAzr_ExplainMode::CustomTimer", (int64)EAzr_ExplainMode::CustomTimer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_ExplainMode",
	"EAzr_ExplainMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAzr_ExplainMode;
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_ExplainMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAzr_ExplainMode.OuterSingleton)
		{
			ZRIE_EAzr_ExplainMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_ExplainMode, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("EAzr_ExplainMode"));
		}
		return ZRIE_EAzr_ExplainMode.OuterSingleton;
	}
	if (!ZRIE_EAzr_ExplainMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAzr_ExplainMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAzr_ExplainMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAzr_ExplainMode ************************************************************

// ********** Begin ScriptStruct FAzr_ExplainStep **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAzr_ExplainStep_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAzr_ExplainStep>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAzr_ExplainStep); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetName_MetaData[] = {
		{ "Category", "Explain Step" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplainText_MetaData[] = {
		{ "Category", "Explain Step" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioTrack_MetaData[] = {
		{ "Category", "Explain Step" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplainMode_MetaData[] = {
		{ "Category", "Explain Step" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTimerDuration_MetaData[] = {
		{ "Category", "Explain Step" },
		{ "EditCondition", "ExplainMode == EAzr_ExplainMode::CustomTimer" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalTargetActor_MetaData[] = {
		{ "Category", "Explain Step|Visuals" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshName_MetaData[] = {
		{ "Category", "Explain Step|Visuals" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerTarget_MetaData[] = {
		{ "Category", "Explain Step|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- NEW: THE POINTER TARGET ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- NEW: THE POINTER TARGET ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMode_MetaData[] = {
		{ "Category", "Explain Step|Visuals" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightSpeed_MetaData[] = {
		{ "Category", "Explain Step|Visuals" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherSettings_MetaData[] = {
		{ "Category", "Explain Step|Visuals" },
		{ "ModuleRelativePath", "Public/Azr_Types.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAzr_ExplainStep constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_WidgetName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ExplainText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioTrack;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExplainMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExplainMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomTimerDuration;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ExternalTargetActor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetMeshName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PointerTarget_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PointerTarget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HighlightMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HighlightMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighlightSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TetherSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAzr_ExplainStep constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzr_ExplainStep>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAzr_ExplainStep Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_WidgetName = { "WidgetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_ExplainStep, WidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetName_MetaData), NewProp_WidgetName_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_ExplainText = { "ExplainText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_ExplainStep, ExplainText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplainText_MetaData), NewProp_ExplainText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AudioTrack = { "AudioTrack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_ExplainStep, AudioTrack), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioTrack_MetaData), NewProp_AudioTrack_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ExplainMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ExplainMode = { "ExplainMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_ExplainStep, ExplainMode), Z_Construct_UEnum_AzurealXR_EAzr_ExplainMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplainMode_MetaData), NewProp_ExplainMode_MetaData) }; // 6e9454e57264d8d817b1920856c5178981ea388b
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CustomTimerDuration = { "CustomTimerDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_ExplainStep, CustomTimerDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTimerDuration_MetaData), NewProp_CustomTimerDuration_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_ExternalTargetActor = { "ExternalTargetActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_ExplainStep, ExternalTargetActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalTargetActor_MetaData), NewProp_ExternalTargetActor_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TargetMeshName = { "TargetMeshName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_ExplainStep, TargetMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshName_MetaData), NewProp_TargetMeshName_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PointerTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PointerTarget = { "PointerTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_ExplainStep, PointerTarget), Z_Construct_UEnum_AzurealXR_EAzr_PointerTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerTarget_MetaData), NewProp_PointerTarget_MetaData) }; // a0b97dad14f44aaed5a3af2a4986f3f98e7d31e4
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_HighlightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_HighlightMode = { "HighlightMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_ExplainStep, HighlightMode), Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMode_MetaData), NewProp_HighlightMode_MetaData) }; // b89e1d1bf6c66a6d04c6838e8255ec9637161cd7
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HighlightSpeed = { "HighlightSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_ExplainStep, HighlightSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightSpeed_MetaData), NewProp_HighlightSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TetherSettings = { "TetherSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_ExplainStep, TetherSettings), Z_Construct_UScriptStruct_FAzr_TetherConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherSettings_MetaData), NewProp_TetherSettings_MetaData) }; // fb5a713d666a24a11bdd9b60341f31d15bb45b94
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExplainText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExplainMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExplainMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomTimerDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExternalTargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetMeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointerTarget_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointerTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TetherSettings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAzr_ExplainStep Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	&NewStructOps,
	"Azr_ExplainStep",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAzr_ExplainStep>(),
	alignof(FAzr_ExplainStep),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAzr_ExplainStep;
UScriptStruct* Z_Construct_UScriptStruct_FAzr_ExplainStep(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAzr_ExplainStep.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAzr_ExplainStep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzr_ExplainStep, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("Azr_ExplainStep"));
		}
		return Z_Registration_Info_UScriptStruct_FAzr_ExplainStep.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAzr_ExplainStep.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAzr_ExplainStep.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAzr_ExplainStep.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAzr_ExplainStep ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Types_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_AzurealXR_EAzr_PointerTarget, TEXT("EAzr_PointerTarget"), &ZRIE_EAzr_PointerTarget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2696510893U) },
		{ Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode, TEXT("EAzr_HighlightMode"), &ZRIE_EAzr_HighlightMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3097369883U) },
		{ Z_Construct_UEnum_AzurealXR_EAzr_TetherPos, TEXT("EAzr_TetherPos"), &ZRIE_EAzr_TetherPos, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3891677202U) },
		{ Z_Construct_UEnum_AzurealXR_EAzr_ExplainMode, TEXT("EAzr_ExplainMode"), &ZRIE_EAzr_ExplainMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1855214821U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAzr_TetherConfig, Z_Construct_UScriptStruct_FAzr_TetherConfig_Statics::NewStructOps, TEXT("Azr_TetherConfig"),&Z_Registration_Info_UScriptStruct_FAzr_TetherConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzr_TetherConfig), 4217008445U) },
		{ Z_Construct_UScriptStruct_FAzr_ExplainStep, Z_Construct_UScriptStruct_FAzr_ExplainStep_Statics::NewStructOps, TEXT("Azr_ExplainStep"),&Z_Registration_Info_UScriptStruct_FAzr_ExplainStep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzr_ExplainStep), 1017380837U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Types_h__Script_AzurealXR_e9ead97d3d93661cece703dad8fb558d96fdbc4f{
	TEXT("/Script/AzurealXR"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
