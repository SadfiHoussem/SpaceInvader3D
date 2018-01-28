// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AIEnemyShip.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIEnemyShip() {}
// Cross Module References
	PARTOUCHETEST_API UFunction* Z_Construct_UFunction_AAIEnemyShip_ChangeFireRate();
	PARTOUCHETEST_API UClass* Z_Construct_UClass_AAIEnemyShip();
	PARTOUCHETEST_API UFunction* Z_Construct_UFunction_AAIEnemyShip_Fire();
	PARTOUCHETEST_API UFunction* Z_Construct_UFunction_AAIEnemyShip_FireWeapon();
	PARTOUCHETEST_API UFunction* Z_Construct_UFunction_AAIEnemyShip_TakeHullDamage();
	PARTOUCHETEST_API UClass* Z_Construct_UClass_AAIEnemyShip_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_PartoucheTest();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_AAIEnemyShip_Fire = FName(TEXT("Fire"));
	void AAIEnemyShip::Fire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAIEnemyShip_Fire),NULL);
	}
	void AAIEnemyShip::StaticRegisterNativesAAIEnemyShip()
	{
		UClass* Class = AAIEnemyShip::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ChangeFireRate", (Native)&AAIEnemyShip::execChangeFireRate },
			{ "FireWeapon", (Native)&AAIEnemyShip::execFireWeapon },
			{ "TakeHullDamage", (Native)&AAIEnemyShip::execTakeHullDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AAIEnemyShip_ChangeFireRate()
	{
		UObject* Outer = Z_Construct_UClass_AAIEnemyShip();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ChangeFireRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Fire"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AIEnemyShip.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIEnemyShip_Fire()
	{
		UObject* Outer = Z_Construct_UClass_AAIEnemyShip();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Fire"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Fire"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AIEnemyShip.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIEnemyShip_FireWeapon()
	{
		UObject* Outer = Z_Construct_UClass_AAIEnemyShip();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FireWeapon"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Fire"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AIEnemyShip.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIEnemyShip_TakeHullDamage()
	{
		struct AIEnemyShip_eventTakeHullDamage_Parms
		{
			float Damage;
		};
		UObject* Outer = Z_Construct_UClass_AAIEnemyShip();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TakeHullDamage"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AIEnemyShip_eventTakeHullDamage_Parms));
			UProperty* NewProp_Damage = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Damage"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Damage, AIEnemyShip_eventTakeHullDamage_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Health"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AIEnemyShip.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAIEnemyShip_NoRegister()
	{
		return AAIEnemyShip::StaticClass();
	}
	UClass* Z_Construct_UClass_AAIEnemyShip()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_PartoucheTest();
			OuterClass = AAIEnemyShip::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AAIEnemyShip_ChangeFireRate());
				OuterClass->LinkChild(Z_Construct_UFunction_AAIEnemyShip_Fire());
				OuterClass->LinkChild(Z_Construct_UFunction_AAIEnemyShip_FireWeapon());
				OuterClass->LinkChild(Z_Construct_UFunction_AAIEnemyShip_TakeHullDamage());

				UProperty* NewProp_TimeBeforeDestruction = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TimeBeforeDestruction"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeBeforeDestruction, AAIEnemyShip), 0x0020080000000005);
				UProperty* NewProp_TimerHandler_FireWeapon = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TimerHandler_FireWeapon"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TimerHandler_FireWeapon, AAIEnemyShip), 0x0020080000000005, Z_Construct_UScriptStruct_FTimerHandle());
				UProperty* NewProp_MaxFireRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxFireRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxFireRate, AAIEnemyShip), 0x0020080000000005);
				UProperty* NewProp_MinFireRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MinFireRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MinFireRate, AAIEnemyShip), 0x0020080000000005);
				UProperty* NewProp_ShipSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ShipSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ShipSpeed, AAIEnemyShip), 0x0020080000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsBeingDestroyed, AAIEnemyShip);
				UProperty* NewProp_IsBeingDestroyed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IsBeingDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsBeingDestroyed, AAIEnemyShip), 0x0020080000000015, CPP_BOOL_PROPERTY_BITMASK(IsBeingDestroyed, AAIEnemyShip), sizeof(bool), true);
				UProperty* NewProp_InitialHealth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InitialHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(InitialHealth, AAIEnemyShip), 0x0020080000000015);
				UProperty* NewProp_Health = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Health"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Health, AAIEnemyShip), 0x0020080000000015);
				UProperty* NewProp_EnemyShipMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EnemyShipMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(EnemyShipMesh, AAIEnemyShip), 0x002008000008000d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_MaxMovementDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxMovementDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxMovementDistance, AAIEnemyShip), 0x0020080000000005);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AAIEnemyShip_ChangeFireRate(), "ChangeFireRate"); // 4146874142
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AAIEnemyShip_Fire(), "Fire"); // 2908662768
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AAIEnemyShip_FireWeapon(), "FireWeapon"); // 1779740250
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AAIEnemyShip_TakeHullDamage(), "TakeHullDamage"); // 634335115
				static TCppClassTypeInfo<TCppClassTypeTraits<AAIEnemyShip> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AIEnemyShip.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AIEnemyShip.h"));
				MetaData->SetValue(NewProp_TimeBeforeDestruction, TEXT("Category"), TEXT("AIEnemyShip"));
				MetaData->SetValue(NewProp_TimeBeforeDestruction, TEXT("ModuleRelativePath"), TEXT("AIEnemyShip.h"));
				MetaData->SetValue(NewProp_TimerHandler_FireWeapon, TEXT("Category"), TEXT("AIEnemyShip"));
				MetaData->SetValue(NewProp_TimerHandler_FireWeapon, TEXT("ModuleRelativePath"), TEXT("AIEnemyShip.h"));
				MetaData->SetValue(NewProp_MaxFireRate, TEXT("Category"), TEXT("AIEnemyShip"));
				MetaData->SetValue(NewProp_MaxFireRate, TEXT("ModuleRelativePath"), TEXT("AIEnemyShip.h"));
				MetaData->SetValue(NewProp_MinFireRate, TEXT("Category"), TEXT("AIEnemyShip"));
				MetaData->SetValue(NewProp_MinFireRate, TEXT("ModuleRelativePath"), TEXT("AIEnemyShip.h"));
				MetaData->SetValue(NewProp_ShipSpeed, TEXT("Category"), TEXT("AIEnemyShip"));
				MetaData->SetValue(NewProp_ShipSpeed, TEXT("ModuleRelativePath"), TEXT("AIEnemyShip.h"));
				MetaData->SetValue(NewProp_IsBeingDestroyed, TEXT("Category"), TEXT("AIEnemyShip"));
				MetaData->SetValue(NewProp_IsBeingDestroyed, TEXT("ModuleRelativePath"), TEXT("AIEnemyShip.h"));
				MetaData->SetValue(NewProp_InitialHealth, TEXT("Category"), TEXT("AIEnemyShip"));
				MetaData->SetValue(NewProp_InitialHealth, TEXT("ModuleRelativePath"), TEXT("AIEnemyShip.h"));
				MetaData->SetValue(NewProp_Health, TEXT("Category"), TEXT("AIEnemyShip"));
				MetaData->SetValue(NewProp_Health, TEXT("ModuleRelativePath"), TEXT("AIEnemyShip.h"));
				MetaData->SetValue(NewProp_EnemyShipMesh, TEXT("Category"), TEXT("AIEnemyShip"));
				MetaData->SetValue(NewProp_EnemyShipMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_EnemyShipMesh, TEXT("ModuleRelativePath"), TEXT("AIEnemyShip.h"));
				MetaData->SetValue(NewProp_MaxMovementDistance, TEXT("Category"), TEXT("AIEnemyShip"));
				MetaData->SetValue(NewProp_MaxMovementDistance, TEXT("ModuleRelativePath"), TEXT("AIEnemyShip.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIEnemyShip, 1565095939);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIEnemyShip(Z_Construct_UClass_AAIEnemyShip, &AAIEnemyShip::StaticClass, TEXT("/Script/PartoucheTest"), TEXT("AAIEnemyShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIEnemyShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
