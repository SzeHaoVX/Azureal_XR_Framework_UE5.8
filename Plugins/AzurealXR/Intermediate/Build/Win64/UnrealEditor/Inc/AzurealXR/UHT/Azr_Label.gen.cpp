// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Label.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Label() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UWidgetComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Label(ETypeConstructPhase);
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_LabelPayload(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Label(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FAzr_LabelPayload *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAzr_LabelPayload_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAzr_LabelPayload>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAzr_LabelPayload); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- STRUCTS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Label.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- STRUCTS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetName_MetaData[] = {
		{ "Category", "Label Payload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The exact name of the Widget Component on the Actor\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Label.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The exact name of the Widget Component on the Actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelText_MetaData[] = {
		{ "Category", "Label Payload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The text you want to inject into that specific widget\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Label.h" },
		{ "MultiLine", "TRUE" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The text you want to inject into that specific widget" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAzr_LabelPayload constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_WidgetName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LabelText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAzr_LabelPayload constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzr_LabelPayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAzr_LabelPayload Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_WidgetName = { "WidgetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_LabelPayload, WidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetName_MetaData), NewProp_WidgetName_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_LabelText = { "LabelText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FAzr_LabelPayload, LabelText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelText_MetaData), NewProp_LabelText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LabelText,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAzr_LabelPayload Property Definitions ******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	&NewStructOps,
	"Azr_LabelPayload",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAzr_LabelPayload>(),
	alignof(FAzr_LabelPayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAzr_LabelPayload;
UScriptStruct* Z_Construct_UScriptStruct_FAzr_LabelPayload(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAzr_LabelPayload.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAzr_LabelPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzr_LabelPayload, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("Azr_LabelPayload"));
		}
		return Z_Registration_Info_UScriptStruct_FAzr_LabelPayload.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAzr_LabelPayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAzr_LabelPayload.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAzr_LabelPayload.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAzr_LabelPayload ***************************************************

// ********** Begin Class UAzr_Label Function DisableLabel *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Label_DisableLabel_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Label.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableLabel constinit property declarations **************************
// ********** End Function DisableLabel constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Label, nullptr, "DisableLabel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Label_DisableLabel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Label::execDisableLabel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableLabel();
	P_NATIVE_END;
}
// ********** End Class UAzr_Label Function DisableLabel *******************************************

// ********** Begin Class UAzr_Label Function EnableLabel ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Label_EnableLabel_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- API ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Label.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- API ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EnableLabel constinit property declarations ***************************
// ********** End Function EnableLabel constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Label, nullptr, "EnableLabel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Label_EnableLabel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Label::execEnableLabel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableLabel();
	P_NATIVE_END;
}
// ********** End Class UAzr_Label Function EnableLabel ********************************************

// ********** Begin Class UAzr_Label ***************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_Label_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AzurealXR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAzr_Label\n * The logic manager for AzurealXR passive labels.\n * Handles visibility toggling and billboarding (always facing the player).\n */" },
#endif
		{ "DisplayName", "Azr Label Logic" },
		{ "IncludePath", "Azr_Label.h" },
		{ "ModuleRelativePath", "Public/Azr_Label.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAzr_Label\nThe logic manager for AzurealXR passive labels.\nHandles visibility toggling and billboarding (always facing the player)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractID_MetaData[] = {
		{ "Category", "Label Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- CORE SETTINGS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Label.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- CORE SETTINGS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelPayloads_MetaData[] = {
		{ "Category", "Label Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add as many widgets and texts as needed here\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Label.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add as many widgets and texts as needed here" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveWidgetComps_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// We cache the successfully found widgets so we don't have to look them up every frame on Tick\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Label.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "We cache the successfully found widgets so we don't have to look them up every frame on Tick" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_Label constinit property declarations *******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InteractID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelPayloads_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LabelPayloads;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveWidgetComps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveWidgetComps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_Label constinit property declarations *********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DisableLabel"), .Pointer = &UAzr_Label::execDisableLabel },
		{ .NameUTF8 = UTF8TEXT("EnableLabel"), .Pointer = &UAzr_Label::execEnableLabel },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_Label_DisableLabel, "DisableLabel" }, // d041b8b371bf56e85529854efe8ba52bc853c8a8
		{ &Z_Construct_UFunction_UAzr_Label_EnableLabel, "EnableLabel" }, // f6cd1014b14e740efbe263fe38ea810357af5849
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_Label>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_Label Property Definitions ******************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InteractID = { "InteractID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Label, InteractID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractID_MetaData), NewProp_InteractID_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LabelPayloads_Inner = { "LabelPayloads", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAzr_LabelPayload, METADATA_PARAMS(0, nullptr) }; // 7dbf81540ce0194d6ced1dbcf6da2e86fd1bc97b
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LabelPayloads = { "LabelPayloads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Label, LabelPayloads), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelPayloads_MetaData), NewProp_LabelPayloads_MetaData) }; // 7dbf81540ce0194d6ced1dbcf6da2e86fd1bc97b
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveWidgetComps_Inner = { "ActiveWidgetComps", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWidgetComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ActiveWidgetComps = { "ActiveWidgetComps", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Label, ActiveWidgetComps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveWidgetComps_MetaData), NewProp_ActiveWidgetComps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LabelPayloads_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LabelPayloads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveWidgetComps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveWidgetComps,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_Label Property Definitions ********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_Label,
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
static void UAzr_Label_StaticRegisterNativesUAzr_Label()
{
	UClass* Class = UAzr_Label::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_Label;
UClass* Z_Construct_UClass_UAzr_Label(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_Label;
		if (!Z_Registration_Info_UClass_UAzr_Label.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_Label"),
				Z_Registration_Info_UClass_UAzr_Label.InnerSingleton,
				UAzr_Label_StaticRegisterNativesUAzr_Label,
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
		return Z_Registration_Info_UClass_UAzr_Label.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_Label.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_Label.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_Label.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_Label);
UAzr_Label::~UAzr_Label() {}
// ********** End Class UAzr_Label *****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Label_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAzr_LabelPayload, Z_Construct_UScriptStruct_FAzr_LabelPayload_Statics::NewStructOps, TEXT("Azr_LabelPayload"),&Z_Registration_Info_UScriptStruct_FAzr_LabelPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzr_LabelPayload), 2109702484U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_Label, TEXT("UAzr_Label"), &Z_Registration_Info_UClass_UAzr_Label, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_Label), 817104155U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Label_h__Script_AzurealXR_78dcc5c7d81f22ab5d2b69b4690058e4b165d671{
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
