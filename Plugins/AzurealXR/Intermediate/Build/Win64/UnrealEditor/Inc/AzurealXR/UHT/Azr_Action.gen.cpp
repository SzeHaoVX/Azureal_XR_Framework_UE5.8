// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Action.h"
#include "Azr_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Action() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UWidgetComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Action(ETypeConstructPhase);
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_ActionAnimPayload(ETypeConstructPhase);
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_TetherConfig(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_ActionMode(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_PointerTarget(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnActionFinished__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Action(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_ActionWidget(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FAzr_ActionAnimPayload ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAzr_ActionAnimPayload_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAzr_ActionAnimPayload>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAzr_ActionAnimPayload); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- STRUCTS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- STRUCTS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "Animation Payload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use a Soft Object Pointer so the Eyedropper works perfectly in Components!\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use a Soft Object Pointer so the Eyedropper works perfectly in Components!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponentName_MetaData[] = {
		{ "Category", "Animation Payload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NEW: The exact name of the Skeletal Mesh Component (leave as \"None\" to just use the first one found)\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NEW: The exact name of the Skeletal Mesh Component (leave as \"None\" to just use the first one found)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimToPlay_MetaData[] = {
		{ "Category", "Animation Payload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The animation to play on that Actor\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The animation to play on that Actor" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAzr_ActionAnimPayload constinit property declarations ************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetComponentName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimToPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAzr_ActionAnimPayload constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzr_ActionAnimPayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAzr_ActionAnimPayload Property Definitions ***********************
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_ActionAnimPayload, TargetActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TargetComponentName = { "TargetComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_ActionAnimPayload, TargetComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetComponentName_MetaData), NewProp_TargetComponentName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AnimToPlay = { "AnimToPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_ActionAnimPayload, AnimToPlay), Z_Construct_UClass_UAnimSequence, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimToPlay_MetaData), NewProp_AnimToPlay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimToPlay,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAzr_ActionAnimPayload Property Definitions *************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	&NewStructOps,
	"Azr_ActionAnimPayload",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAzr_ActionAnimPayload>(),
	alignof(FAzr_ActionAnimPayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAzr_ActionAnimPayload;
UScriptStruct* Z_Construct_UScriptStruct_FAzr_ActionAnimPayload(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAzr_ActionAnimPayload.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAzr_ActionAnimPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzr_ActionAnimPayload, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("Azr_ActionAnimPayload"));
		}
		return Z_Registration_Info_UScriptStruct_FAzr_ActionAnimPayload.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAzr_ActionAnimPayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAzr_ActionAnimPayload.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAzr_ActionAnimPayload.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAzr_ActionAnimPayload **********************************************

// ********** Begin Delegate FOnActionFinished *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnActionFinished__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EVENTS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EVENTS ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnActionFinished constinit property declarations *********************
// ********** End Delegate FOnActionFinished constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnActionFinished__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnActionFinished__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnActionFinished *******************************************************

// ********** Begin Class UAzr_Action Function DisableAction ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Action_DisableAction_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableAction constinit property declarations *************************
// ********** End Function DisableAction constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Action, nullptr, "DisableAction", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Action_DisableAction(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Action::execDisableAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableAction();
	P_NATIVE_END;
}
// ********** End Class UAzr_Action Function DisableAction *****************************************

// ********** Begin Class UAzr_Action Function EnableAction ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Action_EnableAction_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- API ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- API ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EnableAction constinit property declarations **************************
// ********** End Function EnableAction constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Action, nullptr, "EnableAction", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Action_EnableAction(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Action::execEnableAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableAction();
	P_NATIVE_END;
}
// ********** End Class UAzr_Action Function EnableAction ******************************************

// ********** Begin Class UAzr_Action Function HandleCompletedClicked ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Action_HandleCompletedClicked_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCompletedClicked constinit property declarations ****************
// ********** End Function HandleCompletedClicked constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Action, nullptr, "HandleCompletedClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Action_HandleCompletedClicked(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Action::execHandleCompletedClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCompletedClicked();
	P_NATIVE_END;
}
// ********** End Class UAzr_Action Function HandleCompletedClicked ********************************

// ********** Begin Class UAzr_Action Function HandleExecuteClicked ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Action_HandleExecuteClicked_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- CORE LOGIC HANDLERS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- CORE LOGIC HANDLERS ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function HandleExecuteClicked constinit property declarations ******************
// ********** End Function HandleExecuteClicked constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Action, nullptr, "HandleExecuteClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Action_HandleExecuteClicked(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Action::execHandleExecuteClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleExecuteClicked();
	P_NATIVE_END;
}
// ********** End Class UAzr_Action Function HandleExecuteClicked **********************************

// ********** Begin Class UAzr_Action **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_Action_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AzurealXR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAzr_Action\n * The logic manager for AzurealXR active executions (Teleport, Animations, Custom Timers).\n */" },
#endif
		{ "DisplayName", "Azr Action Logic" },
		{ "IncludePath", "Azr_Action.h" },
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAzr_Action\nThe logic manager for AzurealXR active executions (Teleport, Animations, Custom Timers)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractID_MetaData[] = {
		{ "Category", "Action Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- CORE SETTINGS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- CORE SETTINGS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionMode_MetaData[] = {
		{ "Category", "Action Settings|Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Determines the behavior of this action when clicked\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines the behavior of this action when clicked" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportTargetPoint_MetaData[] = {
		{ "Category", "Action Settings|Teleport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- 1. TELEPORT MODE ---\n// Target point in the level to teleport the player to (Use Eyedropper)\n" },
#endif
		{ "EditCondition", "ActionMode == EAzr_ActionMode::Teleport" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- 1. TELEPORT MODE ---\nTarget point in the level to teleport the player to (Use Eyedropper)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimPayloads_MetaData[] = {
		{ "Category", "Action Settings|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- 2. ANIMATION MODE ---\n" },
#endif
		{ "EditCondition", "ActionMode == EAzr_ActionMode::Animation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- 2. ANIMATION MODE ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDuration_MetaData[] = {
		{ "Category", "Action Settings|Custom Timer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- 3. CUSTOM TIMER MODE ---\n" },
#endif
		{ "EditCondition", "ActionMode == EAzr_ActionMode::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- 3. CUSTOM TIMER MODE ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionDescription_MetaData[] = {
		{ "Category", "Action Settings|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NEW: The written explanation text to display on the UI\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
		{ "MultiLine", "TRUE" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NEW: The written explanation text to display on the UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerTarget_MetaData[] = {
		{ "Category", "Action Settings|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- VISUAL SETUP ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- VISUAL SETUP ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetName_MetaData[] = {
		{ "Category", "Action Settings|Visuals" },
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshName_MetaData[] = {
		{ "Category", "Action Settings|Visuals" },
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMode_MetaData[] = {
		{ "Category", "Action Settings|Visuals" },
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightSpeed_MetaData[] = {
		{ "Category", "Action Settings|Visuals" },
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherSettings_MetaData[] = {
		{ "Category", "Action Settings|Visuals" },
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundHighlightStart_MetaData[] = {
		{ "Category", "Action Settings|Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- AUDIO ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- AUDIO ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundHighlightEnd_MetaData[] = {
		{ "Category", "Action Settings|Audio" },
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActionCompleted_MetaData[] = {
		{ "Category", "Azureal|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EVENTS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EVENTS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartButtonPressed_MetaData[] = {
		{ "Category", "Azureal|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fires automatically when the progress bar hits 100%\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires automatically when the progress bar hits 100%" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompletedButtonPressed_MetaData[] = {
		{ "Category", "Azureal|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fires when the player clicks \"Start/Teleport\"\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires when the player clicks \"Start/Teleport\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartAnchor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- INTERNAL COMPONENTS ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- INTERNAL COMPONENTS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndAnchor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherCable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMPC_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveWidgetComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveActionUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Action.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_Action constinit property declarations ******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InteractID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionMode;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TeleportTargetPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimPayloads_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimPayloads;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomDuration;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ActionDescription;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PointerTarget_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PointerTarget;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WidgetName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetMeshName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HighlightMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HighlightMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighlightSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TetherSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundHighlightStart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundHighlightEnd;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartButtonPressed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompletedButtonPressed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartAnchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndAnchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TetherCable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightMPC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveWidgetComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveActionUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_Action constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DisableAction"), .Pointer = &UAzr_Action::execDisableAction },
		{ .NameUTF8 = UTF8TEXT("EnableAction"), .Pointer = &UAzr_Action::execEnableAction },
		{ .NameUTF8 = UTF8TEXT("HandleCompletedClicked"), .Pointer = &UAzr_Action::execHandleCompletedClicked },
		{ .NameUTF8 = UTF8TEXT("HandleExecuteClicked"), .Pointer = &UAzr_Action::execHandleExecuteClicked },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_Action_DisableAction, "DisableAction" }, // accedef45489aa1e114556b674bf942fd5f6bb48
		{ &Z_Construct_UFunction_UAzr_Action_EnableAction, "EnableAction" }, // 773ffd1e9c521c906751b94a71516ab56581444e
		{ &Z_Construct_UFunction_UAzr_Action_HandleCompletedClicked, "HandleCompletedClicked" }, // aebc734903b54e5b07a22ad7bd222ccfbc50b66c
		{ &Z_Construct_UFunction_UAzr_Action_HandleExecuteClicked, "HandleExecuteClicked" }, // 9332cdae1d048f7a33d5381076ef716603c226ee
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_Action>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_Action Property Definitions *****************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InteractID = { "InteractID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, InteractID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractID_MetaData), NewProp_InteractID_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ActionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ActionMode = { "ActionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, ActionMode), Z_Construct_UEnum_AzurealXR_EAzr_ActionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionMode_MetaData), NewProp_ActionMode_MetaData) }; // d3c0e9e32a28adbe8b96868cc0437a431b423aef
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_TeleportTargetPoint = { "TeleportTargetPoint", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, TeleportTargetPoint), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportTargetPoint_MetaData), NewProp_TeleportTargetPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AnimPayloads_Inner = { "AnimPayloads", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAzr_ActionAnimPayload, METADATA_PARAMS(0, nullptr) }; // d8a9a0f19aae01a7b7618a42a6c7f649e3a4981e
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_AnimPayloads = { "AnimPayloads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, AnimPayloads), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimPayloads_MetaData), NewProp_AnimPayloads_MetaData) }; // d8a9a0f19aae01a7b7618a42a6c7f649e3a4981e
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CustomDuration = { "CustomDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, CustomDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDuration_MetaData), NewProp_CustomDuration_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_ActionDescription = { "ActionDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, ActionDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionDescription_MetaData), NewProp_ActionDescription_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PointerTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PointerTarget = { "PointerTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, PointerTarget), Z_Construct_UEnum_AzurealXR_EAzr_PointerTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerTarget_MetaData), NewProp_PointerTarget_MetaData) }; // a0b97dad14f44aaed5a3af2a4986f3f98e7d31e4
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_WidgetName = { "WidgetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, WidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetName_MetaData), NewProp_WidgetName_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TargetMeshName = { "TargetMeshName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, TargetMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshName_MetaData), NewProp_TargetMeshName_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_HighlightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_HighlightMode = { "HighlightMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, HighlightMode), Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMode_MetaData), NewProp_HighlightMode_MetaData) }; // b89e1d1bf6c66a6d04c6838e8255ec9637161cd7
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HighlightSpeed = { "HighlightSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, HighlightSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightSpeed_MetaData), NewProp_HighlightSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TetherSettings = { "TetherSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, TetherSettings), Z_Construct_UScriptStruct_FAzr_TetherConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherSettings_MetaData), NewProp_TetherSettings_MetaData) }; // fb5a713d666a24a11bdd9b60341f31d15bb45b94
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundHighlightStart = { "SoundHighlightStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, SoundHighlightStart), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundHighlightStart_MetaData), NewProp_SoundHighlightStart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundHighlightEnd = { "SoundHighlightEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, SoundHighlightEnd), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundHighlightEnd_MetaData), NewProp_SoundHighlightEnd_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnActionCompleted = { "OnActionCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, OnActionCompleted), Z_Construct_UDelegateFunction_AzurealXR_OnActionFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActionCompleted_MetaData), NewProp_OnActionCompleted_MetaData) }; // aaca598deeadf462fb34e554e413d730c72fb80c
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnStartButtonPressed = { "OnStartButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, OnStartButtonPressed), Z_Construct_UDelegateFunction_AzurealXR_OnActionFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartButtonPressed_MetaData), NewProp_OnStartButtonPressed_MetaData) }; // aaca598deeadf462fb34e554e413d730c72fb80c
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnCompletedButtonPressed = { "OnCompletedButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, OnCompletedButtonPressed), Z_Construct_UDelegateFunction_AzurealXR_OnActionFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompletedButtonPressed_MetaData), NewProp_OnCompletedButtonPressed_MetaData) }; // aaca598deeadf462fb34e554e413d730c72fb80c
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StartAnchor = { "StartAnchor", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, StartAnchor), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAnchor_MetaData), NewProp_StartAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EndAnchor = { "EndAnchor", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, EndAnchor), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndAnchor_MetaData), NewProp_EndAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TetherCable = { "TetherCable", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, TetherCable), Z_Construct_UClass_UCableComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherCable_MetaData), NewProp_TetherCable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HighlightMPC = { "HighlightMPC", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, HighlightMPC), Z_Construct_UClass_UMaterialParameterCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMPC_MetaData), NewProp_HighlightMPC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, TargetMesh), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMesh_MetaData), NewProp_TargetMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveWidgetComp = { "ActiveWidgetComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, ActiveWidgetComp), Z_Construct_UClass_UWidgetComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveWidgetComp_MetaData), NewProp_ActiveWidgetComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveActionUI = { "ActiveActionUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Action, ActiveActionUI), Z_Construct_UClass_UAzr_ActionWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveActionUI_MetaData), NewProp_ActiveActionUI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TeleportTargetPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimPayloads_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimPayloads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActionDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointerTarget_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointerTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetMeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TetherSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundHighlightStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundHighlightEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnActionCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnStartButtonPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnCompletedButtonPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TetherCable,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightMPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveWidgetComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveActionUI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_Action Property Definitions *******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_Action,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAzr_Action_StaticRegisterNativesUAzr_Action()
{
	UClass* Class = UAzr_Action::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_Action;
UClass* Z_Construct_UClass_UAzr_Action(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_Action;
		if (!Z_Registration_Info_UClass_UAzr_Action.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_Action"),
				Z_Registration_Info_UClass_UAzr_Action.InnerSingleton,
				UAzr_Action_StaticRegisterNativesUAzr_Action,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UAzr_Action.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_Action.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_Action.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_Action.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_Action);
UAzr_Action::~UAzr_Action() {}
// ********** End Class UAzr_Action ****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Action_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAzr_ActionAnimPayload, Z_Construct_UScriptStruct_FAzr_ActionAnimPayload_Statics::NewStructOps, TEXT("Azr_ActionAnimPayload"),&Z_Registration_Info_UScriptStruct_FAzr_ActionAnimPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzr_ActionAnimPayload), 3634995441U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_Action, TEXT("UAzr_Action"), &Z_Registration_Info_UClass_UAzr_Action, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_Action), 3768859702U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Action_h__Script_AzurealXR_61685e1bc75f1c88230578435505d2d5b9702436{
	TEXT("/Script/AzurealXR"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
