// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "NPCCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCCharacter() {}
// Cross Module References
	TESTPROJECTCPP_API UClass* Z_Construct_UClass_ANPCCharacter_NoRegister();
	TESTPROJECTCPP_API UClass* Z_Construct_UClass_ANPCCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TestProjectCpp();
	TESTPROJECTCPP_API UFunction* Z_Construct_UFunction_ANPCCharacter_CleanResurrecter();
	TESTPROJECTCPP_API UFunction* Z_Construct_UFunction_ANPCCharacter_CouldBeResurrected();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TESTPROJECTCPP_API UFunction* Z_Construct_UFunction_ANPCCharacter_FireAtActor();
	TESTPROJECTCPP_API UFunction* Z_Construct_UFunction_ANPCCharacter_GetHealth();
	TESTPROJECTCPP_API UFunction* Z_Construct_UFunction_ANPCCharacter_IsFallen();
	TESTPROJECTCPP_API UFunction* Z_Construct_UFunction_ANPCCharacter_Resurrect();
	TESTPROJECTCPP_API UFunction* Z_Construct_UFunction_ANPCCharacter_Sucide();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TESTPROJECTCPP_API UClass* Z_Construct_UClass_ATestProjectCppProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ANPCCharacter::StaticRegisterNativesANPCCharacter()
	{
		UClass* Class = ANPCCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CleanResurrecter", (Native)&ANPCCharacter::execCleanResurrecter },
			{ "CouldBeResurrected", (Native)&ANPCCharacter::execCouldBeResurrected },
			{ "FireAtActor", (Native)&ANPCCharacter::execFireAtActor },
			{ "GetHealth", (Native)&ANPCCharacter::execGetHealth },
			{ "IsFallen", (Native)&ANPCCharacter::execIsFallen },
			{ "Resurrect", (Native)&ANPCCharacter::execResurrect },
			{ "Sucide", (Native)&ANPCCharacter::execSucide },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ANPCCharacter_CleanResurrecter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "NPC Logic" },
				{ "ModuleRelativePath", "NPCCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, "CleanResurrecter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ANPCCharacter_CouldBeResurrected()
	{
		struct NPCCharacter_eventCouldBeResurrected_Parms
		{
			AActor* ResurrecterActor;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NPCCharacter_eventCouldBeResurrected_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NPCCharacter_eventCouldBeResurrected_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResurrecterActor = { UE4CodeGen_Private::EPropertyClass::Object, "ResurrecterActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NPCCharacter_eventCouldBeResurrected_Parms, ResurrecterActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResurrecterActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Fight Logic" },
				{ "ModuleRelativePath", "NPCCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, "CouldBeResurrected", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NPCCharacter_eventCouldBeResurrected_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ANPCCharacter_FireAtActor()
	{
		struct NPCCharacter_eventFireAtActor_Parms
		{
			AActor* FireTarget;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireTarget = { UE4CodeGen_Private::EPropertyClass::Object, "FireTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NPCCharacter_eventFireAtActor_Parms, FireTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireTarget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Fight Logic" },
				{ "ModuleRelativePath", "NPCCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, "FireAtActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(NPCCharacter_eventFireAtActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ANPCCharacter_GetHealth()
	{
		struct NPCCharacter_eventGetHealth_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NPCCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "NPC Logic" },
				{ "ModuleRelativePath", "NPCCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, "GetHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NPCCharacter_eventGetHealth_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ANPCCharacter_IsFallen()
	{
		struct NPCCharacter_eventIsFallen_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((NPCCharacter_eventIsFallen_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NPCCharacter_eventIsFallen_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Fight Logic" },
				{ "ModuleRelativePath", "NPCCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, "IsFallen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NPCCharacter_eventIsFallen_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ANPCCharacter_Resurrect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "NPC Logic" },
				{ "ModuleRelativePath", "NPCCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, "Resurrect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ANPCCharacter_Sucide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Fight Logic" },
				{ "ModuleRelativePath", "NPCCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, "Sucide", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANPCCharacter_NoRegister()
	{
		return ANPCCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ANPCCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_TestProjectCpp,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ANPCCharacter_CleanResurrecter, "CleanResurrecter" }, // 2714486144
				{ &Z_Construct_UFunction_ANPCCharacter_CouldBeResurrected, "CouldBeResurrected" }, // 860541974
				{ &Z_Construct_UFunction_ANPCCharacter_FireAtActor, "FireAtActor" }, // 2308045310
				{ &Z_Construct_UFunction_ANPCCharacter_GetHealth, "GetHealth" }, // 3430211719
				{ &Z_Construct_UFunction_ANPCCharacter_IsFallen, "IsFallen" }, // 2814549500
				{ &Z_Construct_UFunction_ANPCCharacter_Resurrect, "Resurrect" }, // 2134924695
				{ &Z_Construct_UFunction_ANPCCharacter_Sucide, "Sucide" }, // 363128972
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "NPCCharacter.h" },
				{ "ModuleRelativePath", "NPCCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
				{ "Category", "Fight Logic" },
				{ "ModuleRelativePath", "NPCCharacter.h" },
				{ "ToolTip", "Projectile class to spawn" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(ANPCCharacter, ProjectileClass), Z_Construct_UClass_ATestProjectCppProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ProjectileClass_MetaData, ARRAY_COUNT(NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleLocation_MetaData[] = {
				{ "Category", "Fight Logic" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "NPCCharacter.h" },
				{ "ToolTip", "Muzzle location to shoot projectile" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleLocation = { UE4CodeGen_Private::EPropertyClass::Object, "MuzzleLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ANPCCharacter, MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_MuzzleLocation_MetaData, ARRAY_COUNT(NewProp_MuzzleLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathPickUp_MetaData[] = {
				{ "Category", "Fight Logic" },
				{ "ModuleRelativePath", "NPCCharacter.h" },
				{ "ToolTip", "Objetc that we spawn on NPC place after he dies" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DeathPickUp = { UE4CodeGen_Private::EPropertyClass::Class, "DeathPickUp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(ANPCCharacter, DeathPickUp), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_DeathPickUp_MetaData, ARRAY_COUNT(NewProp_DeathPickUp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionObject_MetaData[] = {
				{ "Category", "Fight Logic" },
				{ "ModuleRelativePath", "NPCCharacter.h" },
				{ "ToolTip", "Object to  Spawn On NPCExplosion" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ExplosionObject = { UE4CodeGen_Private::EPropertyClass::Class, "ExplosionObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(ANPCCharacter, ExplosionObject), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ExplosionObject_MetaData, ARRAY_COUNT(NewProp_ExplosionObject_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[] = {
				{ "Category", "Fight Logic" },
				{ "ModuleRelativePath", "NPCCharacter.h" },
				{ "ToolTip", "Radius in which we hit targtes with damage on explosion" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionRadius = { UE4CodeGen_Private::EPropertyClass::Float, "ExplosionRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ANPCCharacter, ExplosionRadius), METADATA_PARAMS(NewProp_ExplosionRadius_MetaData, ARRAY_COUNT(NewProp_ExplosionRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallenTimeout_MetaData[] = {
				{ "Category", "Fight Logic" },
				{ "ModuleRelativePath", "NPCCharacter.h" },
				{ "ToolTip", "Time NPC spent in fallen state before they die" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FallenTimeout = { UE4CodeGen_Private::EPropertyClass::Float, "FallenTimeout", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ANPCCharacter, FallenTimeout), METADATA_PARAMS(NewProp_FallenTimeout_MetaData, ARRAY_COUNT(NewProp_FallenTimeout_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FractionOfMaxHithOnResurect_MetaData[] = {
				{ "Category", "Fight Logic" },
				{ "ModuleRelativePath", "NPCCharacter.h" },
				{ "ToolTip", "During ressurect MaxHitCount will be divided on this value to get new current health" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FractionOfMaxHithOnResurect = { UE4CodeGen_Private::EPropertyClass::Int, "FractionOfMaxHithOnResurect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ANPCCharacter, FractionOfMaxHithOnResurect), METADATA_PARAMS(NewProp_FractionOfMaxHithOnResurect_MetaData, ARRAY_COUNT(NewProp_FractionOfMaxHithOnResurect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHitCount_MetaData[] = {
				{ "Category", "Fight Logic" },
				{ "ModuleRelativePath", "NPCCharacter.h" },
				{ "ToolTip", "Max Amount of hit NPC could take before go into Fallen state" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxHitCount = { UE4CodeGen_Private::EPropertyClass::Int, "MaxHitCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ANPCCharacter, MaxHitCount), METADATA_PARAMS(NewProp_MaxHitCount_MetaData, ARRAY_COUNT(NewProp_MaxHitCount_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuzzleLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeathPickUp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplosionObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplosionRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FallenTimeout,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FractionOfMaxHithOnResurect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxHitCount,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ANPCCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ANPCCharacter::StaticClass,
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
	IMPLEMENT_CLASS(ANPCCharacter, 4041658209);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPCCharacter(Z_Construct_UClass_ANPCCharacter, &ANPCCharacter::StaticClass, TEXT("/Script/TestProjectCpp"), TEXT("ANPCCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
