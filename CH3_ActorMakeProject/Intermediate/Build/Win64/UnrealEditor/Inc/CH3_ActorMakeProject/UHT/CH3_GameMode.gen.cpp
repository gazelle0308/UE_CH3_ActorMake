// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMode/CH3_GameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCH3_GameMode() {}

// ********** Begin Cross Module References ********************************************************
CH3_ACTORMAKEPROJECT_API UClass* Z_Construct_UClass_ACH3_GameMode();
CH3_ACTORMAKEPROJECT_API UClass* Z_Construct_UClass_ACH3_GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
UPackage* Z_Construct_UPackage__Script_CH3_ActorMakeProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACH3_GameMode ************************************************************
void ACH3_GameMode::StaticRegisterNativesACH3_GameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACH3_GameMode;
UClass* ACH3_GameMode::GetPrivateStaticClass()
{
	using TClass = ACH3_GameMode;
	if (!Z_Registration_Info_UClass_ACH3_GameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CH3_GameMode"),
			Z_Registration_Info_UClass_ACH3_GameMode.InnerSingleton,
			StaticRegisterNativesACH3_GameMode,
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
	return Z_Registration_Info_UClass_ACH3_GameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACH3_GameMode_NoRegister()
{
	return ACH3_GameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACH3_GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/CH3_GameMode.h" },
		{ "ModuleRelativePath", "Public/GameMode/CH3_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACH3_GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACH3_GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_ActorMakeProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACH3_GameMode_Statics::ClassParams = {
	&ACH3_GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACH3_GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACH3_GameMode()
{
	if (!Z_Registration_Info_UClass_ACH3_GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACH3_GameMode.OuterSingleton, Z_Construct_UClass_ACH3_GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACH3_GameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACH3_GameMode);
ACH3_GameMode::~ACH3_GameMode() {}
// ********** End Class ACH3_GameMode **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_GameMode_CH3_GameMode_h__Script_CH3_ActorMakeProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACH3_GameMode, ACH3_GameMode::StaticClass, TEXT("ACH3_GameMode"), &Z_Registration_Info_UClass_ACH3_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACH3_GameMode), 713618876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_GameMode_CH3_GameMode_h__Script_CH3_ActorMakeProject_888986745(TEXT("/Script/CH3_ActorMakeProject"),
	Z_CompiledInDeferFile_FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_GameMode_CH3_GameMode_h__Script_CH3_ActorMakeProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_GameMode_CH3_GameMode_h__Script_CH3_ActorMakeProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
