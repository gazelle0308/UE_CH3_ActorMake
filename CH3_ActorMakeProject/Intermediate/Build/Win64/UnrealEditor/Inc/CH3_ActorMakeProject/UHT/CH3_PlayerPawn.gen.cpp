// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerPawn/CH3_PlayerPawn.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCH3_PlayerPawn() {}

// ********** Begin Cross Module References ********************************************************
CH3_ACTORMAKEPROJECT_API UClass* Z_Construct_UClass_ACH3_PlayerPawn();
CH3_ACTORMAKEPROJECT_API UClass* Z_Construct_UClass_ACH3_PlayerPawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_CH3_ActorMakeProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACH3_PlayerPawn Function Fly *********************************************
struct Z_Construct_UFunction_ACH3_PlayerPawn_Fly_Statics
{
	struct CH3_PlayerPawn_eventFly_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerPawn/CH3_PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACH3_PlayerPawn_Fly_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CH3_PlayerPawn_eventFly_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACH3_PlayerPawn_Fly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACH3_PlayerPawn_Fly_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_PlayerPawn_Fly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACH3_PlayerPawn_Fly_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACH3_PlayerPawn, nullptr, "Fly", Z_Construct_UFunction_ACH3_PlayerPawn_Fly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_PlayerPawn_Fly_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACH3_PlayerPawn_Fly_Statics::CH3_PlayerPawn_eventFly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_PlayerPawn_Fly_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACH3_PlayerPawn_Fly_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACH3_PlayerPawn_Fly_Statics::CH3_PlayerPawn_eventFly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACH3_PlayerPawn_Fly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACH3_PlayerPawn_Fly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACH3_PlayerPawn::execFly)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fly(Z_Param_Out_value);
	P_NATIVE_END;
}
// ********** End Class ACH3_PlayerPawn Function Fly ***********************************************

// ********** Begin Class ACH3_PlayerPawn Function Look ********************************************
struct Z_Construct_UFunction_ACH3_PlayerPawn_Look_Statics
{
	struct CH3_PlayerPawn_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerPawn/CH3_PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACH3_PlayerPawn_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CH3_PlayerPawn_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACH3_PlayerPawn_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACH3_PlayerPawn_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_PlayerPawn_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACH3_PlayerPawn_Look_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACH3_PlayerPawn, nullptr, "Look", Z_Construct_UFunction_ACH3_PlayerPawn_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_PlayerPawn_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACH3_PlayerPawn_Look_Statics::CH3_PlayerPawn_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_PlayerPawn_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACH3_PlayerPawn_Look_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACH3_PlayerPawn_Look_Statics::CH3_PlayerPawn_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACH3_PlayerPawn_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACH3_PlayerPawn_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACH3_PlayerPawn::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// ********** End Class ACH3_PlayerPawn Function Look **********************************************

// ********** Begin Class ACH3_PlayerPawn Function Move ********************************************
struct Z_Construct_UFunction_ACH3_PlayerPawn_Move_Statics
{
	struct CH3_PlayerPawn_eventMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerPawn/CH3_PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACH3_PlayerPawn_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CH3_PlayerPawn_eventMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACH3_PlayerPawn_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACH3_PlayerPawn_Move_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_PlayerPawn_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACH3_PlayerPawn_Move_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACH3_PlayerPawn, nullptr, "Move", Z_Construct_UFunction_ACH3_PlayerPawn_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_PlayerPawn_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACH3_PlayerPawn_Move_Statics::CH3_PlayerPawn_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_PlayerPawn_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACH3_PlayerPawn_Move_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACH3_PlayerPawn_Move_Statics::CH3_PlayerPawn_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACH3_PlayerPawn_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACH3_PlayerPawn_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACH3_PlayerPawn::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_value);
	P_NATIVE_END;
}
// ********** End Class ACH3_PlayerPawn Function Move **********************************************

// ********** Begin Class ACH3_PlayerPawn Function Roll ********************************************
struct Z_Construct_UFunction_ACH3_PlayerPawn_Roll_Statics
{
	struct CH3_PlayerPawn_eventRoll_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerPawn/CH3_PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACH3_PlayerPawn_Roll_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CH3_PlayerPawn_eventRoll_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACH3_PlayerPawn_Roll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACH3_PlayerPawn_Roll_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_PlayerPawn_Roll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACH3_PlayerPawn_Roll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACH3_PlayerPawn, nullptr, "Roll", Z_Construct_UFunction_ACH3_PlayerPawn_Roll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_PlayerPawn_Roll_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACH3_PlayerPawn_Roll_Statics::CH3_PlayerPawn_eventRoll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_PlayerPawn_Roll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACH3_PlayerPawn_Roll_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACH3_PlayerPawn_Roll_Statics::CH3_PlayerPawn_eventRoll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACH3_PlayerPawn_Roll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACH3_PlayerPawn_Roll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACH3_PlayerPawn::execRoll)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Roll(Z_Param_Out_value);
	P_NATIVE_END;
}
// ********** End Class ACH3_PlayerPawn Function Roll **********************************************

// ********** Begin Class ACH3_PlayerPawn **********************************************************
void ACH3_PlayerPawn::StaticRegisterNativesACH3_PlayerPawn()
{
	UClass* Class = ACH3_PlayerPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fly", &ACH3_PlayerPawn::execFly },
		{ "Look", &ACH3_PlayerPawn::execLook },
		{ "Move", &ACH3_PlayerPawn::execMove },
		{ "Roll", &ACH3_PlayerPawn::execRoll },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACH3_PlayerPawn;
UClass* ACH3_PlayerPawn::GetPrivateStaticClass()
{
	using TClass = ACH3_PlayerPawn;
	if (!Z_Registration_Info_UClass_ACH3_PlayerPawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CH3_PlayerPawn"),
			Z_Registration_Info_UClass_ACH3_PlayerPawn.InnerSingleton,
			StaticRegisterNativesACH3_PlayerPawn,
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
	return Z_Registration_Info_UClass_ACH3_PlayerPawn.InnerSingleton;
}
UClass* Z_Construct_UClass_ACH3_PlayerPawn_NoRegister()
{
	return ACH3_PlayerPawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACH3_PlayerPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerPawn/CH3_PlayerPawn.h" },
		{ "ModuleRelativePath", "Public/PlayerPawn/CH3_PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsualRoot_MetaData[] = {
		{ "Category", "CH3 Player Pawn|Coponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn/CH3_PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComp_MetaData[] = {
		{ "Category", "CH3 Player Pawn|Coponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn/CH3_PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "CH3 Player Pawn|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn/CH3_PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "CH3 Player Pawn|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn/CH3_PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFly_MetaData[] = {
		{ "Category", "CH3 Player Pawn|Properties" },
		{ "ModuleRelativePath", "Public/PlayerPawn/CH3_PlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsualRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static void NewProp_IsFly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACH3_PlayerPawn_Fly, "Fly" }, // 1103525491
		{ &Z_Construct_UFunction_ACH3_PlayerPawn_Look, "Look" }, // 1252470599
		{ &Z_Construct_UFunction_ACH3_PlayerPawn_Move, "Move" }, // 3679292724
		{ &Z_Construct_UFunction_ACH3_PlayerPawn_Roll, "Roll" }, // 2611206424
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACH3_PlayerPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_PlayerPawn_Statics::NewProp_CapsualRoot = { "CapsualRoot", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_PlayerPawn, CapsualRoot), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsualRoot_MetaData), NewProp_CapsualRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_PlayerPawn_Statics::NewProp_SkeletalMeshComp = { "SkeletalMeshComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_PlayerPawn, SkeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComp_MetaData), NewProp_SkeletalMeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_PlayerPawn_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_PlayerPawn, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_PlayerPawn_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_PlayerPawn, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
void Z_Construct_UClass_ACH3_PlayerPawn_Statics::NewProp_IsFly_SetBit(void* Obj)
{
	((ACH3_PlayerPawn*)Obj)->IsFly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACH3_PlayerPawn_Statics::NewProp_IsFly = { "IsFly", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACH3_PlayerPawn), &Z_Construct_UClass_ACH3_PlayerPawn_Statics::NewProp_IsFly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFly_MetaData), NewProp_IsFly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACH3_PlayerPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_PlayerPawn_Statics::NewProp_CapsualRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_PlayerPawn_Statics::NewProp_SkeletalMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_PlayerPawn_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_PlayerPawn_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_PlayerPawn_Statics::NewProp_IsFly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_PlayerPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACH3_PlayerPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_ActorMakeProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_PlayerPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACH3_PlayerPawn_Statics::ClassParams = {
	&ACH3_PlayerPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACH3_PlayerPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_PlayerPawn_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_PlayerPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ACH3_PlayerPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACH3_PlayerPawn()
{
	if (!Z_Registration_Info_UClass_ACH3_PlayerPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACH3_PlayerPawn.OuterSingleton, Z_Construct_UClass_ACH3_PlayerPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACH3_PlayerPawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACH3_PlayerPawn);
ACH3_PlayerPawn::~ACH3_PlayerPawn() {}
// ********** End Class ACH3_PlayerPawn ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_PlayerPawn_CH3_PlayerPawn_h__Script_CH3_ActorMakeProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACH3_PlayerPawn, ACH3_PlayerPawn::StaticClass, TEXT("ACH3_PlayerPawn"), &Z_Registration_Info_UClass_ACH3_PlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACH3_PlayerPawn), 3706906580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_PlayerPawn_CH3_PlayerPawn_h__Script_CH3_ActorMakeProject_2633103224(TEXT("/Script/CH3_ActorMakeProject"),
	Z_CompiledInDeferFile_FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_PlayerPawn_CH3_PlayerPawn_h__Script_CH3_ActorMakeProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_PlayerPawn_CH3_PlayerPawn_h__Script_CH3_ActorMakeProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
