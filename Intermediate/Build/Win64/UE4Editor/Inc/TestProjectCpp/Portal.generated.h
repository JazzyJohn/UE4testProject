// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TESTPROJECTCPP_Portal_generated_h
#error "Portal.generated.h already included, missing '#pragma once' in Portal.h"
#endif
#define TESTPROJECTCPP_Portal_generated_h

#define TestProjectCpp_Source_TestProjectCpp_Portal_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BeginOverlap(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleport) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Teleport(Z_Param_ActorToTeleport); \
		P_NATIVE_END; \
	}


#define TestProjectCpp_Source_TestProjectCpp_Portal_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BeginOverlap(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleport) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Teleport(Z_Param_ActorToTeleport); \
		P_NATIVE_END; \
	}


#define TestProjectCpp_Source_TestProjectCpp_Portal_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortal(); \
	friend TESTPROJECTCPP_API class UClass* Z_Construct_UClass_APortal(); \
public: \
	DECLARE_CLASS(APortal, ATriggerBox, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(APortal) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestProjectCpp_Source_TestProjectCpp_Portal_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPortal(); \
	friend TESTPROJECTCPP_API class UClass* Z_Construct_UClass_APortal(); \
public: \
	DECLARE_CLASS(APortal, ATriggerBox, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(APortal) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestProjectCpp_Source_TestProjectCpp_Portal_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APortal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APortal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APortal(APortal&&); \
	NO_API APortal(const APortal&); \
public:


#define TestProjectCpp_Source_TestProjectCpp_Portal_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APortal(APortal&&); \
	NO_API APortal(const APortal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APortal)


#define TestProjectCpp_Source_TestProjectCpp_Portal_h_16_PRIVATE_PROPERTY_OFFSET
#define TestProjectCpp_Source_TestProjectCpp_Portal_h_13_PROLOG
#define TestProjectCpp_Source_TestProjectCpp_Portal_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProjectCpp_Source_TestProjectCpp_Portal_h_16_PRIVATE_PROPERTY_OFFSET \
	TestProjectCpp_Source_TestProjectCpp_Portal_h_16_RPC_WRAPPERS \
	TestProjectCpp_Source_TestProjectCpp_Portal_h_16_INCLASS \
	TestProjectCpp_Source_TestProjectCpp_Portal_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProjectCpp_Source_TestProjectCpp_Portal_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProjectCpp_Source_TestProjectCpp_Portal_h_16_PRIVATE_PROPERTY_OFFSET \
	TestProjectCpp_Source_TestProjectCpp_Portal_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProjectCpp_Source_TestProjectCpp_Portal_h_16_INCLASS_NO_PURE_DECLS \
	TestProjectCpp_Source_TestProjectCpp_Portal_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProjectCpp_Source_TestProjectCpp_Portal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
