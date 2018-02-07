// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BaseWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseWeapon() {}
// Cross Module References
	TESTPROJECTCPP_API UClass* Z_Construct_UClass_UBaseWeapon_NoRegister();
	TESTPROJECTCPP_API UClass* Z_Construct_UClass_UBaseWeapon();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TestProjectCpp();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UBaseWeapon::StaticRegisterNativesUBaseWeapon()
	{
	}
	UClass* Z_Construct_UClass_UBaseWeapon_NoRegister()
	{
		return UBaseWeapon::StaticClass();
	}
	UClass* Z_Construct_UClass_UBaseWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_TestProjectCpp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "BaseWeapon.h" },
				{ "ModuleRelativePath", "BaseWeapon.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitObject_MetaData[] = {
				{ "Category", "Weapon Logic" },
				{ "ModuleRelativePath", "BaseWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_HitObject = { UE4CodeGen_Private::EPropertyClass::Class, "HitObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000001, 1, nullptr, STRUCT_OFFSET(UBaseWeapon, HitObject), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_HitObject_MetaData, ARRAY_COUNT(NewProp_HitObject_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadAngle_MetaData[] = {
				{ "Category", "Weapon Logic" },
				{ "ClampMax", "90.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "BaseWeapon.h" },
				{ "ToolTip", "Spread are generating by generating direction with picth and yaw random in range -SpreadAngle:SpreadAngle" },
				{ "UIMax", "90.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpreadAngle = { UE4CodeGen_Private::EPropertyClass::Float, "SpreadAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UBaseWeapon, SpreadAngle), METADATA_PARAMS(NewProp_SpreadAngle_MetaData, ARRAY_COUNT(NewProp_SpreadAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[] = {
				{ "Category", "Weapon Logic" },
				{ "ModuleRelativePath", "BaseWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount = { UE4CodeGen_Private::EPropertyClass::Float, "DamageAmount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UBaseWeapon, DamageAmount), METADATA_PARAMS(NewProp_DamageAmount_MetaData, ARRAY_COUNT(NewProp_DamageAmount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponRange_MetaData[] = {
				{ "Category", "Weapon Logic" },
				{ "ModuleRelativePath", "BaseWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponRange = { UE4CodeGen_Private::EPropertyClass::Float, "WeaponRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UBaseWeapon, WeaponRange), METADATA_PARAMS(NewProp_WeaponRange_MetaData, ARRAY_COUNT(NewProp_WeaponRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceOfImpact_MetaData[] = {
				{ "Category", "Weapon Logic" },
				{ "ModuleRelativePath", "BaseWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceOfImpact = { UE4CodeGen_Private::EPropertyClass::Float, "ForceOfImpact", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UBaseWeapon, ForceOfImpact), METADATA_PARAMS(NewProp_ForceOfImpact_MetaData, ARRAY_COUNT(NewProp_ForceOfImpact_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpreadAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageAmount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeaponRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForceOfImpact,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBaseWeapon>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBaseWeapon::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseWeapon, 1552772748);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseWeapon(Z_Construct_UClass_UBaseWeapon, &UBaseWeapon::StaticClass, TEXT("/Script/TestProjectCpp"), TEXT("UBaseWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
