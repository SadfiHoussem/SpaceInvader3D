// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameStatics.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameStatics() {}
// Cross Module References
	PARTOUCHETEST_API UScriptStruct* Z_Construct_UScriptStruct_FSpaceshipWave();
	UPackage* Z_Construct_UPackage__Script_PartoucheTest();
	PARTOUCHETEST_API UScriptStruct* Z_Construct_UScriptStruct_FSpaceshipSquad();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PARTOUCHETEST_API UClass* Z_Construct_UClass_UGameStatics_NoRegister();
	PARTOUCHETEST_API UClass* Z_Construct_UClass_UGameStatics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
class UScriptStruct* FSpaceshipWave::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PARTOUCHETEST_API uint32 Get_Z_Construct_UScriptStruct_FSpaceshipWave_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpaceshipWave, Z_Construct_UPackage__Script_PartoucheTest(), TEXT("SpaceshipWave"), sizeof(FSpaceshipWave), Get_Z_Construct_UScriptStruct_FSpaceshipWave_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpaceshipWave(FSpaceshipWave::StaticStruct, TEXT("/Script/PartoucheTest"), TEXT("SpaceshipWave"), false, nullptr, nullptr);
static struct FScriptStruct_PartoucheTest_StaticRegisterNativesFSpaceshipWave
{
	FScriptStruct_PartoucheTest_StaticRegisterNativesFSpaceshipWave()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpaceshipWave")),new UScriptStruct::TCppStructOps<FSpaceshipWave>);
	}
} ScriptStruct_PartoucheTest_StaticRegisterNativesFSpaceshipWave;
	UScriptStruct* Z_Construct_UScriptStruct_FSpaceshipWave()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_PartoucheTest();
		extern uint32 Get_Z_Construct_UScriptStruct_FSpaceshipWave_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpaceshipWave"), sizeof(FSpaceshipWave), Get_Z_Construct_UScriptStruct_FSpaceshipWave_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SpaceshipWave"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSpaceshipWave>, EStructFlags(0x00000001));
			UProperty* NewProp_spawnTime = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("spawnTime"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(spawnTime, FSpaceshipWave), 0x0010000000000005);
			UProperty* NewProp_spaceshipSquads = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("spaceshipSquads"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(spaceshipSquads, FSpaceshipWave), 0x0010000000000005);
			UProperty* NewProp_spaceshipSquads_Inner = new(EC_InternalUseOnlyConstructor, NewProp_spaceshipSquads, TEXT("spaceshipSquads"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FSpaceshipSquad());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("GameStatics.h"));
			MetaData->SetValue(NewProp_spawnTime, TEXT("Category"), TEXT("SpaceshipWave"));
			MetaData->SetValue(NewProp_spawnTime, TEXT("ModuleRelativePath"), TEXT("GameStatics.h"));
			MetaData->SetValue(NewProp_spaceshipSquads, TEXT("Category"), TEXT("SpaceshipWave"));
			MetaData->SetValue(NewProp_spaceshipSquads, TEXT("ModuleRelativePath"), TEXT("GameStatics.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpaceshipWave_CRC() { return 3240906049U; }
class UScriptStruct* FSpaceshipSquad::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PARTOUCHETEST_API uint32 Get_Z_Construct_UScriptStruct_FSpaceshipSquad_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpaceshipSquad, Z_Construct_UPackage__Script_PartoucheTest(), TEXT("SpaceshipSquad"), sizeof(FSpaceshipSquad), Get_Z_Construct_UScriptStruct_FSpaceshipSquad_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpaceshipSquad(FSpaceshipSquad::StaticStruct, TEXT("/Script/PartoucheTest"), TEXT("SpaceshipSquad"), false, nullptr, nullptr);
static struct FScriptStruct_PartoucheTest_StaticRegisterNativesFSpaceshipSquad
{
	FScriptStruct_PartoucheTest_StaticRegisterNativesFSpaceshipSquad()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpaceshipSquad")),new UScriptStruct::TCppStructOps<FSpaceshipSquad>);
	}
} ScriptStruct_PartoucheTest_StaticRegisterNativesFSpaceshipSquad;
	UScriptStruct* Z_Construct_UScriptStruct_FSpaceshipSquad()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_PartoucheTest();
		extern uint32 Get_Z_Construct_UScriptStruct_FSpaceshipSquad_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpaceshipSquad"), sizeof(FSpaceshipSquad), Get_Z_Construct_UScriptStruct_FSpaceshipSquad_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SpaceshipSquad"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSpaceshipSquad>, EStructFlags(0x00000001));
			UProperty* NewProp_numberOfMembers = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("numberOfMembers"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(numberOfMembers, FSpaceshipSquad), 0x0010000000000005);
			UProperty* NewProp_spaceshipClass = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("spaceshipClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(spaceshipClass, FSpaceshipSquad), 0x0014000000000005, Z_Construct_UClass_AActor_NoRegister(), Z_Construct_UClass_UClass());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("GameStatics.h"));
			MetaData->SetValue(NewProp_numberOfMembers, TEXT("Category"), TEXT("SpaceshipSquad"));
			MetaData->SetValue(NewProp_numberOfMembers, TEXT("ModuleRelativePath"), TEXT("GameStatics.h"));
			MetaData->SetValue(NewProp_spaceshipClass, TEXT("Category"), TEXT("SpaceshipSquad"));
			MetaData->SetValue(NewProp_spaceshipClass, TEXT("ModuleRelativePath"), TEXT("GameStatics.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpaceshipSquad_CRC() { return 2822192038U; }
	void UGameStatics::StaticRegisterNativesUGameStatics()
	{
	}
	UClass* Z_Construct_UClass_UGameStatics_NoRegister()
	{
		return UGameStatics::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameStatics()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_PartoucheTest();
			OuterClass = UGameStatics::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UGameStatics> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GameStatics.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("GameStatics.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameStatics, 2723602847);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameStatics(Z_Construct_UClass_UGameStatics, &UGameStatics::StaticClass, TEXT("/Script/PartoucheTest"), TEXT("UGameStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
