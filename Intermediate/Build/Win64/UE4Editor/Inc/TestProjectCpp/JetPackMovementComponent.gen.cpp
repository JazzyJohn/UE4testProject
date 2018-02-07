// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "JetPack/JetPackMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJetPackMovementComponent() {}
// Cross Module References
	TESTPROJECTCPP_API UEnum* Z_Construct_UEnum_TestProjectCpp_EWallRun();
	UPackage* Z_Construct_UPackage__Script_TestProjectCpp();
	TESTPROJECTCPP_API UEnum* Z_Construct_UEnum_TestProjectCpp_EJetPackStatus();
	TESTPROJECTCPP_API UClass* Z_Construct_UClass_UJetPackMovementComponent_NoRegister();
	TESTPROJECTCPP_API UClass* Z_Construct_UClass_UJetPackMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	TESTPROJECTCPP_API UFunction* Z_Construct_UFunction_UJetPackMovementComponent_RechargeJetPack();
	TESTPROJECTCPP_API UFunction* Z_Construct_UFunction_UJetPackMovementComponent_SetRechargeOfJetPack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	static UEnum* EWallRun_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TestProjectCpp_EWallRun, Z_Construct_UPackage__Script_TestProjectCpp(), TEXT("EWallRun"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWallRun(EWallRun_StaticEnum, TEXT("/Script/TestProjectCpp"), TEXT("EWallRun"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TestProjectCpp_EWallRun_CRC() { return 2836747756U; }
	UEnum* Z_Construct_UEnum_TestProjectCpp_EWallRun()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TestProjectCpp();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWallRun"), 0, Get_Z_Construct_UEnum_TestProjectCpp_EWallRun_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWallRun::None", (int64)EWallRun::None },
				{ "EWallRun::Up", (int64)EWallRun::Up },
				{ "EWallRun::Right", (int64)EWallRun::Right },
				{ "EWallRun::Left", (int64)EWallRun::Left },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TestProjectCpp,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWallRun",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EWallRun",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EJetPackStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TestProjectCpp_EJetPackStatus, Z_Construct_UPackage__Script_TestProjectCpp(), TEXT("EJetPackStatus"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJetPackStatus(EJetPackStatus_StaticEnum, TEXT("/Script/TestProjectCpp"), TEXT("EJetPackStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TestProjectCpp_EJetPackStatus_CRC() { return 3086719392U; }
	UEnum* Z_Construct_UEnum_TestProjectCpp_EJetPackStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TestProjectCpp();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJetPackStatus"), 0, Get_Z_Construct_UEnum_TestProjectCpp_EJetPackStatus_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJetPackStatus::None", (int64)EJetPackStatus::None },
				{ "EJetPackStatus::Burst", (int64)EJetPackStatus::Burst },
				{ "EJetPackStatus::BurstFly", (int64)EJetPackStatus::BurstFly },
				{ "EJetPackStatus::Fly", (int64)EJetPackStatus::Fly },
				{ "EJetPackStatus::WallRun", (int64)EJetPackStatus::WallRun },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TestProjectCpp,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EJetPackStatus",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EJetPackStatus",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UJetPackMovementComponent::StaticRegisterNativesUJetPackMovementComponent()
	{
		UClass* Class = UJetPackMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RechargeJetPack", (Native)&UJetPackMovementComponent::execRechargeJetPack },
			{ "SetRechargeOfJetPack", (Native)&UJetPackMovementComponent::execSetRechargeOfJetPack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UJetPackMovementComponent_RechargeJetPack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Jet Pack" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
				{ "ToolTip", "Set JetPack Chrage at Max*" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJetPackMovementComponent, "RechargeJetPack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJetPackMovementComponent_SetRechargeOfJetPack()
	{
		struct JetPackMovementComponent_eventSetRechargeOfJetPack_Parms
		{
			bool state;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_state_SetBit = [](void* Obj){ ((JetPackMovementComponent_eventSetRechargeOfJetPack_Parms*)Obj)->state = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_state = { UE4CodeGen_Private::EPropertyClass::Bool, "state", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JetPackMovementComponent_eventSetRechargeOfJetPack_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_state_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_state,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Jet Pack" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
				{ "ToolTip", "Set state of recharge of jetPAck over time, when set to flase, jet pack recharging only by picking fuel cell*" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJetPackMovementComponent, "SetRechargeOfJetPack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(JetPackMovementComponent_eventSetRechargeOfJetPack_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJetPackMovementComponent_NoRegister()
	{
		return UJetPackMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UJetPackMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_TestProjectCpp,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UJetPackMovementComponent_RechargeJetPack, "RechargeJetPack" }, // 3888690616
				{ &Z_Construct_UFunction_UJetPackMovementComponent_SetRechargeOfJetPack, "SetRechargeOfJetPack" }, // 540747493
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "JetPack/JetPackMovementComponent.h" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstObject_MetaData[] = {
				{ "Category", "Weapon Logic" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
				{ "ToolTip", "Particles to sapwn each time we Burst" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_BurstObject = { UE4CodeGen_Private::EPropertyClass::Class, "BurstObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UJetPackMovementComponent, BurstObject), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_BurstObject_MetaData, ARRAY_COUNT(NewProp_BurstObject_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstSound_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
				{ "ToolTip", "Sound to play each time we Burst" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BurstSound = { UE4CodeGen_Private::EPropertyClass::Object, "BurstSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UJetPackMovementComponent, BurstSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(NewProp_BurstSound_MetaData, ARRAY_COUNT(NewProp_BurstSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
				{ "Category", "Jet Pack" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AudioComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(UJetPackMovementComponent, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(NewProp_AudioComponent_MetaData, ARRAY_COUNT(NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRechargeOnTouch_MetaData[] = {
				{ "Category", "Jet Pack" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
			};
#endif
			auto NewProp_bRechargeOnTouch_SetBit = [](void* Obj){ ((UJetPackMovementComponent*)Obj)->bRechargeOnTouch = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRechargeOnTouch = { UE4CodeGen_Private::EPropertyClass::Bool, "bRechargeOnTouch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UJetPackMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRechargeOnTouch_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRechargeOnTouch_MetaData, ARRAY_COUNT(NewProp_bRechargeOnTouch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastSize_MetaData[] = {
				{ "Category", "Jet Pack" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CastSize = { UE4CodeGen_Private::EPropertyClass::Float, "CastSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UJetPackMovementComponent, CastSize), METADATA_PARAMS(NewProp_CastSize_MetaData, ARRAY_COUNT(NewProp_CastSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallSpeedVerticalVelocity_MetaData[] = {
				{ "Category", "Jet Pack" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallSpeedVerticalVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "WallSpeedVerticalVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UJetPackMovementComponent, WallSpeedVerticalVelocity), METADATA_PARAMS(NewProp_WallSpeedVerticalVelocity_MetaData, ARRAY_COUNT(NewProp_WallSpeedVerticalVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallRunSpeed_MetaData[] = {
				{ "Category", "Jet Pack" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallRunSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "WallRunSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UJetPackMovementComponent, WallRunSpeed), METADATA_PARAMS(NewProp_WallRunSpeed_MetaData, ARRAY_COUNT(NewProp_WallRunSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallRunChargePerSecond_MetaData[] = {
				{ "Category", "Jet Pack" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallRunChargePerSecond = { UE4CodeGen_Private::EPropertyClass::Float, "WallRunChargePerSecond", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UJetPackMovementComponent, WallRunChargePerSecond), METADATA_PARAMS(NewProp_WallRunChargePerSecond_MetaData, ARRAY_COUNT(NewProp_WallRunChargePerSecond_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWallJumpBurst_MetaData[] = {
				{ "Category", "Jet Pack" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxWallJumpBurst = { UE4CodeGen_Private::EPropertyClass::Float, "MaxWallJumpBurst", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UJetPackMovementComponent, MaxWallJumpBurst), METADATA_PARAMS(NewProp_MaxWallJumpBurst_MetaData, ARRAY_COUNT(NewProp_MaxWallJumpBurst_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallJumpSpeed_MetaData[] = {
				{ "Category", "Jet Pack" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallJumpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "WallJumpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UJetPackMovementComponent, WallJumpSpeed), METADATA_PARAMS(NewProp_WallJumpSpeed_MetaData, ARRAY_COUNT(NewProp_WallJumpSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlySpeed_MetaData[] = {
				{ "Category", "Jet Pack" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlySpeed = { UE4CodeGen_Private::EPropertyClass::Float, "FlySpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UJetPackMovementComponent, FlySpeed), METADATA_PARAMS(NewProp_FlySpeed_MetaData, ARRAY_COUNT(NewProp_FlySpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlyChargePerSecond_MetaData[] = {
				{ "Category", "Jet Pack" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlyChargePerSecond = { UE4CodeGen_Private::EPropertyClass::Float, "FlyChargePerSecond", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UJetPackMovementComponent, FlyChargePerSecond), METADATA_PARAMS(NewProp_FlyChargePerSecond_MetaData, ARRAY_COUNT(NewProp_FlyChargePerSecond_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstVerticalFactor_MetaData[] = {
				{ "Category", "Jet Pack" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BurstVerticalFactor = { UE4CodeGen_Private::EPropertyClass::Float, "BurstVerticalFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UJetPackMovementComponent, BurstVerticalFactor), METADATA_PARAMS(NewProp_BurstVerticalFactor_MetaData, ARRAY_COUNT(NewProp_BurstVerticalFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstSpeed_MetaData[] = {
				{ "Category", "Jet Pack" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BurstSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "BurstSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UJetPackMovementComponent, BurstSpeed), METADATA_PARAMS(NewProp_BurstSpeed_MetaData, ARRAY_COUNT(NewProp_BurstSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstCharge_MetaData[] = {
				{ "Category", "Jet Pack" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BurstCharge = { UE4CodeGen_Private::EPropertyClass::Float, "BurstCharge", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UJetPackMovementComponent, BurstCharge), METADATA_PARAMS(NewProp_BurstCharge_MetaData, ARRAY_COUNT(NewProp_BurstCharge_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCharge_MetaData[] = {
				{ "Category", "Jet Pack" },
				{ "ModuleRelativePath", "JetPack/JetPackMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCharge = { UE4CodeGen_Private::EPropertyClass::Float, "MaxCharge", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UJetPackMovementComponent, MaxCharge), METADATA_PARAMS(NewProp_MaxCharge_MetaData, ARRAY_COUNT(NewProp_MaxCharge_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BurstObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BurstSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRechargeOnTouch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CastSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WallSpeedVerticalVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WallRunSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WallRunChargePerSecond,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxWallJumpBurst,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WallJumpSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FlySpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FlyChargePerSecond,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BurstVerticalFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BurstSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BurstCharge,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxCharge,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UJetPackMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UJetPackMovementComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00084u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJetPackMovementComponent, 1297860835);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJetPackMovementComponent(Z_Construct_UClass_UJetPackMovementComponent, &UJetPackMovementComponent::StaticClass, TEXT("/Script/TestProjectCpp"), TEXT("UJetPackMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJetPackMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
