// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TestProjectCppGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestProjectCppGameMode() {}
// Cross Module References
	TESTPROJECTCPP_API UClass* Z_Construct_UClass_ATestProjectCppGameMode_NoRegister();
	TESTPROJECTCPP_API UClass* Z_Construct_UClass_ATestProjectCppGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TestProjectCpp();
// End Cross Module References
	void ATestProjectCppGameMode::StaticRegisterNativesATestProjectCppGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATestProjectCppGameMode_NoRegister()
	{
		return ATestProjectCppGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ATestProjectCppGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_TestProjectCpp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "TestProjectCppGameMode.h" },
				{ "ModuleRelativePath", "TestProjectCppGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATestProjectCppGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATestProjectCppGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestProjectCppGameMode, 3190505261);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestProjectCppGameMode(Z_Construct_UClass_ATestProjectCppGameMode, &ATestProjectCppGameMode::StaticClass, TEXT("/Script/TestProjectCpp"), TEXT("ATestProjectCppGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestProjectCppGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
