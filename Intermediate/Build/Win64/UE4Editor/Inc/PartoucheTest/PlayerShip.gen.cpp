// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PlayerShip.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerShip() {}
// Cross Module References
	PARTOUCHETEST_API UFunction* Z_Construct_UFunction_APlayerShip_Fire();
	PARTOUCHETEST_API UClass* Z_Construct_UClass_APlayerShip();
	PARTOUCHETEST_API UFunction* Z_Construct_UFunction_APlayerShip_TakeHullDamage();
	PARTOUCHETEST_API UClass* Z_Construct_UClass_APlayerShip_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_PartoucheTest();
// End Cross Module References
	static FName NAME_APlayerShip_Fire = FName(TEXT("Fire"));
	void APlayerShip::Fire()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_Fire),NULL);
	}
	void APlayerShip::StaticRegisterNativesAPlayerShip()
	{
		UClass* Class = APlayerShip::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "TakeHullDamage", (Native)&APlayerShip::execTakeHullDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_APlayerShip_Fire()
	{
		UObject* Outer = Z_Construct_UClass_APlayerShip();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Fire"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Fire"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("PlayerShip.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerShip_TakeHullDamage()
	{
		struct PlayerShip_eventTakeHullDamage_Parms
		{
			float Damage;
		};
		UObject* Outer = Z_Construct_UClass_APlayerShip();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TakeHullDamage"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(PlayerShip_eventTakeHullDamage_Parms));
			UProperty* NewProp_Damage = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Damage"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Damage, PlayerShip_eventTakeHullDamage_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Health"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("PlayerShip.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerShip_NoRegister()
	{
		return APlayerShip::StaticClass();
	}
	UClass* Z_Construct_UClass_APlayerShip()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_PartoucheTest();
			OuterClass = APlayerShip::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_APlayerShip_Fire());
				OuterClass->LinkChild(Z_Construct_UFunction_APlayerShip_TakeHullDamage());

				UProperty* NewProp_TimeBeforeDestruction = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TimeBeforeDestruction"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeBeforeDestruction, APlayerShip), 0x0020080000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsBeingDestroyed, APlayerShip);
				UProperty* NewProp_IsBeingDestroyed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IsBeingDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsBeingDestroyed, APlayerShip), 0x0020080000000015, CPP_BOOL_PROPERTY_BITMASK(IsBeingDestroyed, APlayerShip), sizeof(bool), true);
				UProperty* NewProp_InitialHealth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InitialHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(InitialHealth, APlayerShip), 0x0020080000000015);
				UProperty* NewProp_Health = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Health"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Health, APlayerShip), 0x0020080000000015);
				UProperty* NewProp_FireRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FireRate, APlayerShip), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCanFire, APlayerShip);
				UProperty* NewProp_bCanFire = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bCanFire"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCanFire, APlayerShip), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bCanFire, APlayerShip), sizeof(bool), true);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APlayerShip_Fire(), "Fire"); // 1292769642
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APlayerShip_TakeHullDamage(), "TakeHullDamage"); // 4271717624
				static TCppClassTypeInfo<TCppClassTypeTraits<APlayerShip> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PlayerShip.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PlayerShip.h"));
				MetaData->SetValue(NewProp_TimeBeforeDestruction, TEXT("Category"), TEXT("PlayerShip"));
				MetaData->SetValue(NewProp_TimeBeforeDestruction, TEXT("ModuleRelativePath"), TEXT("PlayerShip.h"));
				MetaData->SetValue(NewProp_IsBeingDestroyed, TEXT("Category"), TEXT("PlayerShip"));
				MetaData->SetValue(NewProp_IsBeingDestroyed, TEXT("ModuleRelativePath"), TEXT("PlayerShip.h"));
				MetaData->SetValue(NewProp_InitialHealth, TEXT("Category"), TEXT("PlayerShip"));
				MetaData->SetValue(NewProp_InitialHealth, TEXT("ModuleRelativePath"), TEXT("PlayerShip.h"));
				MetaData->SetValue(NewProp_Health, TEXT("Category"), TEXT("PlayerShip"));
				MetaData->SetValue(NewProp_Health, TEXT("ModuleRelativePath"), TEXT("PlayerShip.h"));
				MetaData->SetValue(NewProp_FireRate, TEXT("Category"), TEXT("PlayerShip"));
				MetaData->SetValue(NewProp_FireRate, TEXT("ModuleRelativePath"), TEXT("PlayerShip.h"));
				MetaData->SetValue(NewProp_bCanFire, TEXT("Category"), TEXT("PlayerShip"));
				MetaData->SetValue(NewProp_bCanFire, TEXT("ModuleRelativePath"), TEXT("PlayerShip.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerShip, 2167069156);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerShip(Z_Construct_UClass_APlayerShip, &APlayerShip::StaticClass, TEXT("/Script/PartoucheTest"), TEXT("APlayerShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
