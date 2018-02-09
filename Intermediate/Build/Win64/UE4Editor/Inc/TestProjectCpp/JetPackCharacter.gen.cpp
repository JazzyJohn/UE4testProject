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
	TESTPROJECTCPP_API UFunction* Z_Construct_UFunction_AJetPackCharacter_OnTeleport();
	TESTPROJECTCPP_API UClass* Z_Construct_UClass_UBaseWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AJetPackCharacter::StaticRegisterNativesAJetPackCharacter()
	{
		UClass* Class = AJetPackCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTeleport", (Native)&AJetPackCharacter::execOnTeleport },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AJetPackCharacter_OnTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "JetPack/JetPackCharacter.h" },
				{ "ToolTip", "triggers when Character is teleported by Portal" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AJetPackCharacter, "OnTeleport", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AJetPackCharacter_OnTeleport, "OnTeleport" }, // 391200800
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
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
				{ "Category", "Fight Logic" },
				{ "ModuleRelativePath", "JetPack/JetPackCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxHealth = { UE4CodeGen_Private::EPropertyClass::Int, "MaxHealth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AJetPackCharacter, MaxHealth), METADATA_PARAMS(NewProp_MaxHealth_MetaData, ARRAY_COUNT(NewProp_MaxHealth_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseWeapon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxHealth,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AJetPackCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AJetPackCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AJetPackCharacter, 270057770);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJetPackCharacter(Z_Construct_UClass_AJetPackCharacter, &AJetPackCharacter::StaticClass, TEXT("/Script/TestProjectCpp"), TEXT("AJetPackCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJetPackCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
