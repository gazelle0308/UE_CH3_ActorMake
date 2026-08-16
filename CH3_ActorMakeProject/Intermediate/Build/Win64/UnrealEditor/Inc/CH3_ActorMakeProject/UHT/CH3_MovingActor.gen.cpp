// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovingActor/CH3_MovingActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCH3_MovingActor() {}

// ********** Begin Cross Module References ********************************************************
CH3_ACTORMAKEPROJECT_API UClass* Z_Construct_UClass_ACH3_MovingActor();
CH3_ACTORMAKEPROJECT_API UClass* Z_Construct_UClass_ACH3_MovingActor_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CH3_ActorMakeProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACH3_MovingActor *********************************************************
void ACH3_MovingActor::StaticRegisterNativesACH3_MovingActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACH3_MovingActor;
UClass* ACH3_MovingActor::GetPrivateStaticClass()
{
	using TClass = ACH3_MovingActor;
	if (!Z_Registration_Info_UClass_ACH3_MovingActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CH3_MovingActor"),
			Z_Registration_Info_UClass_ACH3_MovingActor.InnerSingleton,
			StaticRegisterNativesACH3_MovingActor,
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
	return Z_Registration_Info_UClass_ACH3_MovingActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ACH3_MovingActor_NoRegister()
{
	return ACH3_MovingActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACH3_MovingActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovingActor/CH3_MovingActor.h" },
		{ "ModuleRelativePath", "Public/MovingActor/CH3_MovingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThisActorData_MetaData[] = {
		{ "Category", "CH3_MovingActor" },
		{ "ModuleRelativePath", "Public/MovingActor/CH3_MovingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "CH3 Moving Actor|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovingActor/CH3_MovingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "CH3 Moving Actor|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovingActor/CH3_MovingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "CH3 Moving Actor|Properties" },
		{ "ModuleRelativePath", "Public/MovingActor/CH3_MovingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRangeToX_MetaData[] = {
		{ "Category", "CH3 Moving Actor|Properties" },
		{ "ModuleRelativePath", "Public/MovingActor/CH3_MovingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRangeToY_MetaData[] = {
		{ "Category", "CH3 Moving Actor|Properties" },
		{ "ModuleRelativePath", "Public/MovingActor/CH3_MovingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRangeToZ_MetaData[] = {
		{ "Category", "CH3 Moving Actor|Properties" },
		{ "ModuleRelativePath", "Public/MovingActor/CH3_MovingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "CH3 Moving Actor|Properties" },
		{ "ModuleRelativePath", "Public/MovingActor/CH3_MovingActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ThisActorData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRangeToX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRangeToY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRangeToZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACH3_MovingActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACH3_MovingActor_Statics::NewProp_ThisActorData = { "ThisActorData", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_MovingActor, ThisActorData), Z_Construct_UClass_UClass, Z_Construct_UClass_ACH3_MovingActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThisActorData_MetaData), NewProp_ThisActorData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_MovingActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_MovingActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_MovingActor_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_MovingActor, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACH3_MovingActor_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_MovingActor, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACH3_MovingActor_Statics::NewProp_MaxRangeToX = { "MaxRangeToX", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_MovingActor, MaxRangeToX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRangeToX_MetaData), NewProp_MaxRangeToX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACH3_MovingActor_Statics::NewProp_MaxRangeToY = { "MaxRangeToY", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_MovingActor, MaxRangeToY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRangeToY_MetaData), NewProp_MaxRangeToY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACH3_MovingActor_Statics::NewProp_MaxRangeToZ = { "MaxRangeToZ", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_MovingActor, MaxRangeToZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRangeToZ_MetaData), NewProp_MaxRangeToZ_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACH3_MovingActor_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_MovingActor, MaxRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACH3_MovingActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_MovingActor_Statics::NewProp_ThisActorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_MovingActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_MovingActor_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_MovingActor_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_MovingActor_Statics::NewProp_MaxRangeToX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_MovingActor_Statics::NewProp_MaxRangeToY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_MovingActor_Statics::NewProp_MaxRangeToZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_MovingActor_Statics::NewProp_MaxRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_MovingActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACH3_MovingActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_ActorMakeProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_MovingActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACH3_MovingActor_Statics::ClassParams = {
	&ACH3_MovingActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACH3_MovingActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_MovingActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_MovingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ACH3_MovingActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACH3_MovingActor()
{
	if (!Z_Registration_Info_UClass_ACH3_MovingActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACH3_MovingActor.OuterSingleton, Z_Construct_UClass_ACH3_MovingActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACH3_MovingActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACH3_MovingActor);
ACH3_MovingActor::~ACH3_MovingActor() {}
// ********** End Class ACH3_MovingActor ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_MovingActor_CH3_MovingActor_h__Script_CH3_ActorMakeProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACH3_MovingActor, ACH3_MovingActor::StaticClass, TEXT("ACH3_MovingActor"), &Z_Registration_Info_UClass_ACH3_MovingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACH3_MovingActor), 2166723542U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_MovingActor_CH3_MovingActor_h__Script_CH3_ActorMakeProject_4021052119(TEXT("/Script/CH3_ActorMakeProject"),
	Z_CompiledInDeferFile_FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_MovingActor_CH3_MovingActor_h__Script_CH3_ActorMakeProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_MovingActor_CH3_MovingActor_h__Script_CH3_ActorMakeProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
