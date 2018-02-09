// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TESTPROJECTCPP_NPCCharacter_generated_h
#error "NPCCharacter.generated.h already included, missing '#pragma once' in NPCCharacter.h"
#endif
#define TESTPROJECTCPP_NPCCharacter_generated_h

#define TestProjectCpp_Source_TestProjectCpp_NPCCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCleanResurrecter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CleanResurrecter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResurrect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Resurrect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCouldBeResurrected) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ResurrecterActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CouldBeResurrected(Z_Param_ResurrecterActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFallen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsFallen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSucide) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Sucide(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireAtActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_FireTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FireAtActor(Z_Param_FireTarget); \
		P_NATIVE_END; \
	}


#define TestProjectCpp_Source_TestProjectCpp_NPCCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCleanResurrecter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CleanResurrecter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResurrect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Resurrect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCouldBeResurrected) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ResurrecterActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CouldBeResurrected(Z_Param_ResurrecterActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFallen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsFallen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSucide) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Sucide(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireAtActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_FireTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FireAtActor(Z_Param_FireTarget); \
		P_NATIVE_END; \
	}


#define TestProjectCpp_Source_TestProjectCpp_NPCCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPCCharacter(); \
	friend TESTPROJECTCPP_API class UClass* Z_Construct_UClass_ANPCCharacter(); \
public: \
	DECLARE_CLASS(ANPCCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(ANPCCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestProjectCpp_Source_TestProjectCpp_NPCCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesANPCCharacter(); \
	friend TESTPROJECTCPP_API class UClass* Z_Construct_UClass_ANPCCharacter(); \
public: \
	DECLARE_CLASS(ANPCCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(ANPCCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestProjectCpp_Source_TestProjectCpp_NPCCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPCCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPCCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCCharacter(ANPCCharacter&&); \
	NO_API ANPCCharacter(const ANPCCharacter&); \
public:


#define TestProjectCpp_Source_TestProjectCpp_NPCCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCCharacter(ANPCCharacter&&); \
	NO_API ANPCCharacter(const ANPCCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPCCharacter)


#define TestProjectCpp_Source_TestProjectCpp_NPCCharacter_h_14_PRIVATE_PROPERTY_OFFSET
#define TestProjectCpp_Source_TestProjectCpp_NPCCharacter_h_11_PROLOG
#define TestProjectCpp_Source_TestProjectCpp_NPCCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProjectCpp_Source_TestProjectCpp_NPCCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TestProjectCpp_Source_TestProjectCpp_NPCCharacter_h_14_RPC_WRAPPERS \
	TestProjectCpp_Source_TestProjectCpp_NPCCharacter_h_14_INCLASS \
	TestProjectCpp_Source_TestProjectCpp_NPCCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProjectCpp_Source_TestProjectCpp_NPCCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProjectCpp_Source_TestProjectCpp_NPCCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TestProjectCpp_Source_TestProjectCpp_NPCCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProjectCpp_Source_TestProjectCpp_NPCCharacter_h_14_INCLASS_NO_PURE_DECLS \
	TestProjectCpp_Source_TestProjectCpp_NPCCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProjectCpp_Source_TestProjectCpp_NPCCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
