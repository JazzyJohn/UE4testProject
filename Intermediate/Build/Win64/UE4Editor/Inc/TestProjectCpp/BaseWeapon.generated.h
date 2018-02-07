// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECTCPP_BaseWeapon_generated_h
#error "BaseWeapon.generated.h already included, missing '#pragma once' in BaseWeapon.h"
#endif
#define TESTPROJECTCPP_BaseWeapon_generated_h

#define TestProjectCpp_Source_TestProjectCpp_BaseWeapon_h_13_RPC_WRAPPERS
#define TestProjectCpp_Source_TestProjectCpp_BaseWeapon_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TestProjectCpp_Source_TestProjectCpp_BaseWeapon_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseWeapon(); \
	friend TESTPROJECTCPP_API class UClass* Z_Construct_UClass_UBaseWeapon(); \
public: \
	DECLARE_CLASS(UBaseWeapon, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(UBaseWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestProjectCpp_Source_TestProjectCpp_BaseWeapon_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBaseWeapon(); \
	friend TESTPROJECTCPP_API class UClass* Z_Construct_UClass_UBaseWeapon(); \
public: \
	DECLARE_CLASS(UBaseWeapon, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestProjectCpp"), NO_API) \
	DECLARE_SERIALIZER(UBaseWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestProjectCpp_Source_TestProjectCpp_BaseWeapon_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseWeapon(UBaseWeapon&&); \
	NO_API UBaseWeapon(const UBaseWeapon&); \
public:


#define TestProjectCpp_Source_TestProjectCpp_BaseWeapon_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseWeapon(UBaseWeapon&&); \
	NO_API UBaseWeapon(const UBaseWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseWeapon)


#define TestProjectCpp_Source_TestProjectCpp_BaseWeapon_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ForceOfImpact() { return STRUCT_OFFSET(UBaseWeapon, ForceOfImpact); } \
	FORCEINLINE static uint32 __PPO__WeaponRange() { return STRUCT_OFFSET(UBaseWeapon, WeaponRange); } \
	FORCEINLINE static uint32 __PPO__DamageAmount() { return STRUCT_OFFSET(UBaseWeapon, DamageAmount); } \
	FORCEINLINE static uint32 __PPO__SpreadAngle() { return STRUCT_OFFSET(UBaseWeapon, SpreadAngle); } \
	FORCEINLINE static uint32 __PPO__HitObject() { return STRUCT_OFFSET(UBaseWeapon, HitObject); }


#define TestProjectCpp_Source_TestProjectCpp_BaseWeapon_h_10_PROLOG
#define TestProjectCpp_Source_TestProjectCpp_BaseWeapon_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProjectCpp_Source_TestProjectCpp_BaseWeapon_h_13_PRIVATE_PROPERTY_OFFSET \
	TestProjectCpp_Source_TestProjectCpp_BaseWeapon_h_13_RPC_WRAPPERS \
	TestProjectCpp_Source_TestProjectCpp_BaseWeapon_h_13_INCLASS \
	TestProjectCpp_Source_TestProjectCpp_BaseWeapon_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProjectCpp_Source_TestProjectCpp_BaseWeapon_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProjectCpp_Source_TestProjectCpp_BaseWeapon_h_13_PRIVATE_PROPERTY_OFFSET \
	TestProjectCpp_Source_TestProjectCpp_BaseWeapon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProjectCpp_Source_TestProjectCpp_BaseWeapon_h_13_INCLASS_NO_PURE_DECLS \
	TestProjectCpp_Source_TestProjectCpp_BaseWeapon_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProjectCpp_Source_TestProjectCpp_BaseWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
