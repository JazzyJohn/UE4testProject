// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECTCPP_JetPackMovementComponent_generated_h
#error "JetPackMovementComponent.generated.h already included, missing '#pragma once' in JetPackMovementComponent.h"
#endif
#define TESTPROJECTCPP_JetPackMovementComponent_generated_h

#define TestProjectCpp_Source_TestProjectCpp_JetPack_JetPackMovementComponent_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRechargeJetPack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RechargeJetPack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRechargeOfJetPack) \
	{ \
		P_GET_UBOOL(Z_Param_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRechargeOfJetPack(Z_Param_state); \
		P_NATIVE_END; \
	}


#define TestProjectCpp_Source_TestProjectCpp_JetPack_JetPackMovementComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRechargeJetPack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RechargeJetPack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRechargeOfJetPack) \
	{ \
		P_GET_UBOOL(Z_Param_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRechargeOfJetPack(Z_Param_state); \
		P_NATIVE_END; \
	}


#define TestProjectCpp_Source_TestProjectCpp_JetPack_JetPackMovementComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJetPackMovementComponent(); \
	friend TESTPROJECTCPP_API class UClass* Z_Construct_UClass_UJetPackMovementComponent(); \
public: \
	DECLARE_CLASS(UJetPackMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/TestProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(UJetPackMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestProjectCpp_Source_TestProjectCpp_JetPack_JetPackMovementComponent_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUJetPackMovementComponent(); \
	friend TESTPROJECTCPP_API class UClass* Z_Construct_UClass_UJetPackMovementComponent(); \
public: \
	DECLARE_CLASS(UJetPackMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/TestProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(UJetPackMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestProjectCpp_Source_TestProjectCpp_JetPack_JetPackMovementComponent_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJetPackMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJetPackMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJetPackMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJetPackMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJetPackMovementComponent(UJetPackMovementComponent&&); \
	NO_API UJetPackMovementComponent(const UJetPackMovementComponent&); \
public:


#define TestProjectCpp_Source_TestProjectCpp_JetPack_JetPackMovementComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJetPackMovementComponent(UJetPackMovementComponent&&); \
	NO_API UJetPackMovementComponent(const UJetPackMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJetPackMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJetPackMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UJetPackMovementComponent)


#define TestProjectCpp_Source_TestProjectCpp_JetPack_JetPackMovementComponent_h_33_PRIVATE_PROPERTY_OFFSET
#define TestProjectCpp_Source_TestProjectCpp_JetPack_JetPackMovementComponent_h_30_PROLOG
#define TestProjectCpp_Source_TestProjectCpp_JetPack_JetPackMovementComponent_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProjectCpp_Source_TestProjectCpp_JetPack_JetPackMovementComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	TestProjectCpp_Source_TestProjectCpp_JetPack_JetPackMovementComponent_h_33_RPC_WRAPPERS \
	TestProjectCpp_Source_TestProjectCpp_JetPack_JetPackMovementComponent_h_33_INCLASS \
	TestProjectCpp_Source_TestProjectCpp_JetPack_JetPackMovementComponent_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProjectCpp_Source_TestProjectCpp_JetPack_JetPackMovementComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProjectCpp_Source_TestProjectCpp_JetPack_JetPackMovementComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	TestProjectCpp_Source_TestProjectCpp_JetPack_JetPackMovementComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProjectCpp_Source_TestProjectCpp_JetPack_JetPackMovementComponent_h_33_INCLASS_NO_PURE_DECLS \
	TestProjectCpp_Source_TestProjectCpp_JetPack_JetPackMovementComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProjectCpp_Source_TestProjectCpp_JetPack_JetPackMovementComponent_h


#define FOREACH_ENUM_EWALLRUN(op) \
	op(EWallRun::None) \
	op(EWallRun::Up) \
	op(EWallRun::Right) 
#define FOREACH_ENUM_EJETPACKSTATUS(op) \
	op(EJetPackStatus::None) \
	op(EJetPackStatus::Burst) \
	op(EJetPackStatus::BurstFly) \
	op(EJetPackStatus::Fly) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
