// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Highlight.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Highlight() {}

// ********** Begin Cross Module References ********************************************************
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Highlight();
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Highlight_NoRegister();
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_AzurealXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAzr_Highlight Function DisableHighlight *********************************
struct Z_Construct_UFunction_UAzr_Highlight_DisableHighlight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Highlight.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableHighlight constinit property declarations **********************
// ********** End Function DisableHighlight constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Highlight_DisableHighlight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Highlight, nullptr, "DisableHighlight", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Highlight_DisableHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Highlight_DisableHighlight_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAzr_Highlight_DisableHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Highlight_DisableHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzr_Highlight::execDisableHighlight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableHighlight();
	P_NATIVE_END;
}
// ********** End Class UAzr_Highlight Function DisableHighlight ***********************************

// ********** Begin Class UAzr_Highlight Function EnableHighlight **********************************
struct Z_Construct_UFunction_UAzr_Highlight_EnableHighlight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- API ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Highlight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- API ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EnableHighlight constinit property declarations ***********************
// ********** End Function EnableHighlight constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Highlight_EnableHighlight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Highlight, nullptr, "EnableHighlight", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Highlight_EnableHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Highlight_EnableHighlight_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAzr_Highlight_EnableHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Highlight_EnableHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzr_Highlight::execEnableHighlight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableHighlight();
	P_NATIVE_END;
}
// ********** End Class UAzr_Highlight Function EnableHighlight ************************************

// ********** Begin Class UAzr_Highlight ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_Highlight;
UClass* UAzr_Highlight::GetPrivateStaticClass()
{
	using TClass = UAzr_Highlight;
	if (!Z_Registration_Info_UClass_UAzr_Highlight.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Azr_Highlight"),
			Z_Registration_Info_UClass_UAzr_Highlight.InnerSingleton,
			StaticRegisterNativesUAzr_Highlight,
			sizeof(TClass),
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
	return Z_Registration_Info_UClass_UAzr_Highlight.InnerSingleton;
}
UClass* Z_Construct_UClass_UAzr_Highlight_NoRegister()
{
	return UAzr_Highlight::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAzr_Highlight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AzurealXR" },
		{ "IncludePath", "Azr_Highlight.h" },
		{ "ModuleRelativePath", "Public/Azr_Highlight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshName_MetaData[] = {
		{ "Category", "Azureal|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- CONFIGURATION ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Highlight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- CONFIGURATION ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMode_MetaData[] = {
		{ "Category", "Azureal|Config" },
		{ "ModuleRelativePath", "Public/Azr_Highlight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightSpeed_MetaData[] = {
		{ "Category", "Azureal|Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- AUDIO SETTINGS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Highlight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- AUDIO SETTINGS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundHighlightStart_MetaData[] = {
		{ "Category", "Azureal|Audio" },
		{ "ModuleRelativePath", "Public/Azr_Highlight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundHighlightEnd_MetaData[] = {
		{ "Category", "Azureal|Audio" },
		{ "ModuleRelativePath", "Public/Azr_Highlight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMPC_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- INTERNAL REFERENCES ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Highlight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- INTERNAL REFERENCES ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Highlight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoDetectedMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Highlight.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_Highlight constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetMeshName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HighlightMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HighlightMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighlightSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundHighlightStart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundHighlightEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightMPC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTargetMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AutoDetectedMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_Highlight constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DisableHighlight"), .Pointer = &UAzr_Highlight::execDisableHighlight },
		{ .NameUTF8 = UTF8TEXT("EnableHighlight"), .Pointer = &UAzr_Highlight::execEnableHighlight },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_Highlight_DisableHighlight, "DisableHighlight" }, // 841062324
		{ &Z_Construct_UFunction_UAzr_Highlight_EnableHighlight, "EnableHighlight" }, // 3501682981
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_Highlight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAzr_Highlight_Statics

// ********** Begin Class UAzr_Highlight Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAzr_Highlight_Statics::NewProp_TargetMeshName = { "TargetMeshName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Highlight, TargetMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshName_MetaData), NewProp_TargetMeshName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAzr_Highlight_Statics::NewProp_HighlightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAzr_Highlight_Statics::NewProp_HighlightMode = { "HighlightMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Highlight, HighlightMode), Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMode_MetaData), NewProp_HighlightMode_MetaData) }; // 3885943093
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Highlight_Statics::NewProp_HighlightSpeed = { "HighlightSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Highlight, HighlightSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightSpeed_MetaData), NewProp_HighlightSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Highlight_Statics::NewProp_SoundHighlightStart = { "SoundHighlightStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Highlight, SoundHighlightStart), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundHighlightStart_MetaData), NewProp_SoundHighlightStart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Highlight_Statics::NewProp_SoundHighlightEnd = { "SoundHighlightEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Highlight, SoundHighlightEnd), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundHighlightEnd_MetaData), NewProp_SoundHighlightEnd_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Highlight_Statics::NewProp_HighlightMPC = { "HighlightMPC", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Highlight, HighlightMPC), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMPC_MetaData), NewProp_HighlightMPC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Highlight_Statics::NewProp_CurrentTargetMesh = { "CurrentTargetMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Highlight, CurrentTargetMesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTargetMesh_MetaData), NewProp_CurrentTargetMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Highlight_Statics::NewProp_AutoDetectedMesh = { "AutoDetectedMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Highlight, AutoDetectedMesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoDetectedMesh_MetaData), NewProp_AutoDetectedMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAzr_Highlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Highlight_Statics::NewProp_TargetMeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Highlight_Statics::NewProp_HighlightMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Highlight_Statics::NewProp_HighlightMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Highlight_Statics::NewProp_HighlightSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Highlight_Statics::NewProp_SoundHighlightStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Highlight_Statics::NewProp_SoundHighlightEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Highlight_Statics::NewProp_HighlightMPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Highlight_Statics::NewProp_CurrentTargetMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Highlight_Statics::NewProp_AutoDetectedMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Highlight_Statics::PropPointers) < 2048);
// ********** End Class UAzr_Highlight Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_UAzr_Highlight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Highlight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzr_Highlight_Statics::ClassParams = {
	&UAzr_Highlight::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAzr_Highlight_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Highlight_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Highlight_Statics::Class_MetaDataParams), Z_Construct_UClass_UAzr_Highlight_Statics::Class_MetaDataParams)
};
void UAzr_Highlight::StaticRegisterNativesUAzr_Highlight()
{
	UClass* Class = UAzr_Highlight::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAzr_Highlight_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAzr_Highlight()
{
	if (!Z_Registration_Info_UClass_UAzr_Highlight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_Highlight.OuterSingleton, Z_Construct_UClass_UAzr_Highlight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_Highlight.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_Highlight);
UAzr_Highlight::~UAzr_Highlight() {}
// ********** End Class UAzr_Highlight *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Highlight_h__Script_AzurealXR_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_Highlight, UAzr_Highlight::StaticClass, TEXT("UAzr_Highlight"), &Z_Registration_Info_UClass_UAzr_Highlight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_Highlight), 658906511U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Highlight_h__Script_AzurealXR_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Highlight_h__Script_AzurealXR_3282120506{
	TEXT("/Script/AzurealXR"),
	Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Highlight_h__Script_AzurealXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Highlight_h__Script_AzurealXR_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
