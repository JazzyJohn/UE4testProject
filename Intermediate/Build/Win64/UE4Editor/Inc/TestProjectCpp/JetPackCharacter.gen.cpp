// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "JetPack/JetPackCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJetPackCharacter() {}
// Cross Module References
	TESTPROJECTCPP_API UClass* Z_Construct_UClass_AJetPackCharacter_NoRegister();
	TESTPROJECTCPP_API UClass* Z_Construct_UClass_AJetPackCharacter();
	TESTPROJECTCPP_API UClass* Z_Construct_UClass_ATestProjectCppCharacter();
	UPackage* Z_Construct_UPackage__Script_TestProjectCpp();
	TESTPROJECTCPP_API UClass* Z_Construct_UClass_UBaseWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AJetPackCharacter::StaticRegisterNativesAJetPackCharacter()
	{
	}
	UClass* Z_Construct_UClass_AJetPackCharacter_NoRegister()
	{
		return AJetPackCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AJetPackCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ATestProjectCppCharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_TestProjectCpp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "JetPack/JetPackCharacter.h" },
				{ "ModuleRelativePath", "JetPack/JetPackCharacter.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseWeapon_MetaData[] = {
				{ "Category", "Movement Logic" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "JetPack/JetPackCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseWeapon = { UE4CodeGen_Private::EPropertyClass::Object, "BaseWeapon", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(AJetPackCharacter, BaseWeapon), Z_Construct_UClass_UBaseWeapon_NoRegister, METADATA_PARAMS(NewProp_BaseWeapon_MetaData, ARRAY_COUNT(NewProp_BaseWeapon_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
				{ "Category", "Movement Logic" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "JetPack/JetPackCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(AJetPackCharacter, CameraComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_CameraComponent_MetaData, ARRAY_COUNT(NewProp_CameraComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseWeapon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AJetPackCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AJetPackCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AJetPackCharacter, 2828076532);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJetPackCharacter(Z_Construct_UClass_AJetPackCharacter, &AJetPackCharacter::StaticClass, TEXT("/Script/TestProjectCpp"), TEXT("AJetPackCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJetPackCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
