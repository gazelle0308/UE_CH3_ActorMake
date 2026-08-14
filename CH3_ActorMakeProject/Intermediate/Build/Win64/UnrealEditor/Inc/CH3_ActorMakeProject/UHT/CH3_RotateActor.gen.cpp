// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RotateActor/CH3_RotateActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCH3_RotateActor() {}

// ********** Begin Cross Module References ********************************************************
CH3_ACTORMAKEPROJECT_API UClass* Z_Construct_UClass_ACH3_RotateActor();
CH3_ACTORMAKEPROJECT_API UClass* Z_Construct_UClass_ACH3_RotateActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CH3_ActorMakeProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACH3_RotateActor *********************************************************
void ACH3_RotateActor::StaticRegisterNativesACH3_RotateActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACH3_RotateActor;
UClass* ACH3_RotateActor::GetPrivateStaticClass()
{
	using TClass = ACH3_RotateActor;
	if (!Z_Registration_Info_UClass_ACH3_RotateActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CH3_RotateActor"),
			Z_Registration_Info_UClass_ACH3_RotateActor.InnerSingleton,
			StaticRegisterNativesACH3_RotateActor,
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
	return Z_Registration_Info_UClass_ACH3_RotateActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ACH3_RotateActor_NoRegister()
{
	return ACH3_RotateActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACH3_RotateActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RotateActor/CH3_RotateActor.h" },
		{ "ModuleRelativePath", "Public/RotateActor/CH3_RotateActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "CH3 Rotate Actor|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotateActor/CH3_RotateActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "CH3 Rotate Actor|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotateActor/CH3_RotateActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchRotate_MetaData[] = {
		{ "Category", "CH3 Rotate Actor|Properties" },
		{ "ModuleRelativePath", "Public/RotateActor/CH3_RotateActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawRotate_MetaData[] = {
		{ "Category", "CH3 Rotate Actor|Properties" },
		{ "ModuleRelativePath", "Public/RotateActor/CH3_RotateActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollRotate_MetaData[] = {
		{ "Category", "CH3 Rotate Actor|Properties" },
		{ "ModuleRelativePath", "Public/RotateActor/CH3_RotateActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchRotate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawRotate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollRotate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACH3_RotateActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_RotateActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_RotateActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_RotateActor_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_RotateActor, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACH3_RotateActor_Statics::NewProp_PitchRotate = { "PitchRotate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_RotateActor, PitchRotate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchRotate_MetaData), NewProp_PitchRotate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACH3_RotateActor_Statics::NewProp_YawRotate = { "YawRotate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_RotateActor, YawRotate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawRotate_MetaData), NewProp_YawRotate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACH3_RotateActor_Statics::NewProp_RollRotate = { "RollRotate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_RotateActor, RollRotate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollRotate_MetaData), NewProp_RollRotate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACH3_RotateActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_RotateActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_RotateActor_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_RotateActor_Statics::NewProp_PitchRotate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_RotateActor_Statics::NewProp_YawRotate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_RotateActor_Statics::NewProp_RollRotate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_RotateActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACH3_RotateActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_ActorMakeProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_RotateActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACH3_RotateActor_Statics::ClassParams = {
	&ACH3_RotateActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACH3_RotateActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_RotateActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_RotateActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ACH3_RotateActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACH3_RotateActor()
{
	if (!Z_Registration_Info_UClass_ACH3_RotateActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACH3_RotateActor.OuterSingleton, Z_Construct_UClass_ACH3_RotateActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACH3_RotateActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACH3_RotateActor);
ACH3_RotateActor::~ACH3_RotateActor() {}
// ********** End Class ACH3_RotateActor ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_RotateActor_CH3_RotateActor_h__Script_CH3_ActorMakeProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACH3_RotateActor, ACH3_RotateActor::StaticClass, TEXT("ACH3_RotateActor"), &Z_Registration_Info_UClass_ACH3_RotateActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACH3_RotateActor), 3768768182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_RotateActor_CH3_RotateActor_h__Script_CH3_ActorMakeProject_2344351788(TEXT("/Script/CH3_ActorMakeProject"),
	Z_CompiledInDeferFile_FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_RotateActor_CH3_RotateActor_h__Script_CH3_ActorMakeProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_RotateActor_CH3_RotateActor_h__Script_CH3_ActorMakeProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
