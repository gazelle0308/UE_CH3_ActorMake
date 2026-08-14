// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerPawn/CH3_PlayerPawn.h"

#ifdef CH3_ACTORMAKEPROJECT_CH3_PlayerPawn_generated_h
#error "CH3_PlayerPawn.generated.h already included, missing '#pragma once' in CH3_PlayerPawn.h"
#endif
#define CH3_ACTORMAKEPROJECT_CH3_PlayerPawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FInputActionValue;

// ********** Begin Class ACH3_PlayerPawn **********************************************************
#define FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_PlayerPawn_CH3_PlayerPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove);


CH3_ACTORMAKEPROJECT_API UClass* Z_Construct_UClass_ACH3_PlayerPawn_NoRegister();

#define FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_PlayerPawn_CH3_PlayerPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACH3_PlayerPawn(); \
	friend struct Z_Construct_UClass_ACH3_PlayerPawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CH3_ACTORMAKEPROJECT_API UClass* Z_Construct_UClass_ACH3_PlayerPawn_NoRegister(); \
public: \
	DECLARE_CLASS2(ACH3_PlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH3_ActorMakeProject"), Z_Construct_UClass_ACH3_PlayerPawn_NoRegister) \
	DECLARE_SERIALIZER(ACH3_PlayerPawn)


#define FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_PlayerPawn_CH3_PlayerPawn_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACH3_PlayerPawn(ACH3_PlayerPawn&&) = delete; \
	ACH3_PlayerPawn(const ACH3_PlayerPawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACH3_PlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACH3_PlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACH3_PlayerPawn) \
	NO_API virtual ~ACH3_PlayerPawn();


#define FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_PlayerPawn_CH3_PlayerPawn_h_14_PROLOG
#define FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_PlayerPawn_CH3_PlayerPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_PlayerPawn_CH3_PlayerPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_PlayerPawn_CH3_PlayerPawn_h_17_INCLASS_NO_PURE_DECLS \
	FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_PlayerPawn_CH3_PlayerPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACH3_PlayerPawn;

// ********** End Class ACH3_PlayerPawn ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_UE_CH3_ActorMake_CH3_ActorMakeProject_Source_CH3_ActorMakeProject_Public_PlayerPawn_CH3_PlayerPawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
