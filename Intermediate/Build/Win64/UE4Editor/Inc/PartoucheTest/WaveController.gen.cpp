// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "WaveController.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveController() {}
// Cross Module References
	PARTOUCHETEST_API UFunction* Z_Construct_UFunction_AWaveController_AddSquad();
	PARTOUCHETEST_API UClass* Z_Construct_UClass_AWaveController();
	PARTOUCHETEST_API UScriptStruct* Z_Construct_UScriptStruct_FSpaceshipSquad();
	PARTOUCHETEST_API UFunction* Z_Construct_UFunction_AWaveController_AddWave();
	PARTOUCHETEST_API UScriptStruct* Z_Construct_UScriptStruct_FSpaceshipWave();
	PARTOUCHETEST_API UFunction* Z_Construct_UFunction_AWaveController_DeleteSquad();
	PARTOUCHETEST_API UFunction* Z_Construct_UFunction_AWaveController_DeleteWave();
	PARTOUCHETEST_API UFunction* Z_Construct_UFunction_AWaveController_GenerateWave();
	PARTOUCHETEST_API UFunction* Z_Construct_UFunction_AWaveController_ModifySquad();
	PARTOUCHETEST_API UFunction* Z_Construct_UFunction_AWaveController_ModifyWave();
	PARTOUCHETEST_API UClass* Z_Construct_UClass_AWaveController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PartoucheTest();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void AWaveController::StaticRegisterNativesAWaveController()
	{
		UClass* Class = AWaveController::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddSquad", (Native)&AWaveController::execAddSquad },
			{ "AddWave", (Native)&AWaveController::execAddWave },
			{ "DeleteSquad", (Native)&AWaveController::execDeleteSquad },
			{ "DeleteWave", (Native)&AWaveController::execDeleteWave },
			{ "GenerateWave", (Native)&AWaveController::execGenerateWave },
			{ "ModifySquad", (Native)&AWaveController::execModifySquad },
			{ "ModifyWave", (Native)&AWaveController::execModifyWave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AWaveController_AddSquad()
	{
		struct WaveController_eventAddSquad_Parms
		{
			int32 numWave;
			FSpaceshipSquad spaceshipSquad;
		};
		UObject* Outer = Z_Construct_UClass_AWaveController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddSquad"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(WaveController_eventAddSquad_Parms));
			UProperty* NewProp_spaceshipSquad = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("spaceshipSquad"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(spaceshipSquad, WaveController_eventAddSquad_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FSpaceshipSquad());
			UProperty* NewProp_numWave = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("numWave"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(numWave, WaveController_eventAddSquad_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Wave"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WaveController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWaveController_AddWave()
	{
		struct WaveController_eventAddWave_Parms
		{
			FSpaceshipWave spaceshipWave;
		};
		UObject* Outer = Z_Construct_UClass_AWaveController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddWave"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(WaveController_eventAddWave_Parms));
			UProperty* NewProp_spaceshipWave = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("spaceshipWave"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(spaceshipWave, WaveController_eventAddWave_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FSpaceshipWave());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Wave"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WaveController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWaveController_DeleteSquad()
	{
		struct WaveController_eventDeleteSquad_Parms
		{
			int32 numWave;
			int32 numSquad;
		};
		UObject* Outer = Z_Construct_UClass_AWaveController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DeleteSquad"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(WaveController_eventDeleteSquad_Parms));
			UProperty* NewProp_numSquad = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("numSquad"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(numSquad, WaveController_eventDeleteSquad_Parms), 0x0010000000000080);
			UProperty* NewProp_numWave = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("numWave"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(numWave, WaveController_eventDeleteSquad_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Wave"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WaveController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWaveController_DeleteWave()
	{
		struct WaveController_eventDeleteWave_Parms
		{
			int32 numWave;
		};
		UObject* Outer = Z_Construct_UClass_AWaveController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DeleteWave"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(WaveController_eventDeleteWave_Parms));
			UProperty* NewProp_numWave = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("numWave"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(numWave, WaveController_eventDeleteWave_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Wave"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WaveController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWaveController_GenerateWave()
	{
		struct WaveController_eventGenerateWave_Parms
		{
			int32 numWave;
		};
		UObject* Outer = Z_Construct_UClass_AWaveController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GenerateWave"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(WaveController_eventGenerateWave_Parms));
			UProperty* NewProp_numWave = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("numWave"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(numWave, WaveController_eventGenerateWave_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Wave"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WaveController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWaveController_ModifySquad()
	{
		struct WaveController_eventModifySquad_Parms
		{
			int32 numWave;
			int32 numSquad;
			FSpaceshipSquad spaceshipSquad;
		};
		UObject* Outer = Z_Construct_UClass_AWaveController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ModifySquad"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(WaveController_eventModifySquad_Parms));
			UProperty* NewProp_spaceshipSquad = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("spaceshipSquad"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(spaceshipSquad, WaveController_eventModifySquad_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FSpaceshipSquad());
			UProperty* NewProp_numSquad = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("numSquad"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(numSquad, WaveController_eventModifySquad_Parms), 0x0010000000000080);
			UProperty* NewProp_numWave = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("numWave"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(numWave, WaveController_eventModifySquad_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Wave"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WaveController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWaveController_ModifyWave()
	{
		struct WaveController_eventModifyWave_Parms
		{
			int32 numWave;
			FSpaceshipWave spaceshipWave;
		};
		UObject* Outer = Z_Construct_UClass_AWaveController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ModifyWave"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(WaveController_eventModifyWave_Parms));
			UProperty* NewProp_spaceshipWave = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("spaceshipWave"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(spaceshipWave, WaveController_eventModifyWave_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FSpaceshipWave());
			UProperty* NewProp_numWave = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("numWave"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(numWave, WaveController_eventModifyWave_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Wave"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("WaveController.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWaveController_NoRegister()
	{
		return AWaveController::StaticClass();
	}
	UClass* Z_Construct_UClass_AWaveController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_PartoucheTest();
			OuterClass = AWaveController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AWaveController_AddSquad());
				OuterClass->LinkChild(Z_Construct_UFunction_AWaveController_AddWave());
				OuterClass->LinkChild(Z_Construct_UFunction_AWaveController_DeleteSquad());
				OuterClass->LinkChild(Z_Construct_UFunction_AWaveController_DeleteWave());
				OuterClass->LinkChild(Z_Construct_UFunction_AWaveController_GenerateWave());
				OuterClass->LinkChild(Z_Construct_UFunction_AWaveController_ModifySquad());
				OuterClass->LinkChild(Z_Construct_UFunction_AWaveController_ModifyWave());

				UProperty* NewProp_SpaceshipAdjacence = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpaceshipAdjacence"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SpaceshipAdjacence, AWaveController), 0x0010000000000005);
				UProperty* NewProp_FInitialSpawnPosition = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FInitialSpawnPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FInitialSpawnPosition, AWaveController), 0x0010000000000005, Z_Construct_UScriptStruct_FTransform());
				UProperty* NewProp_SpaceshipWaves = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpaceshipWaves"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SpaceshipWaves, AWaveController), 0x0010000000000015);
				UProperty* NewProp_SpaceshipWaves_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SpaceshipWaves, TEXT("SpaceshipWaves"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FSpaceshipWave());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWaveController_AddSquad(), "AddSquad"); // 1357443901
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWaveController_AddWave(), "AddWave"); // 2055380739
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWaveController_DeleteSquad(), "DeleteSquad"); // 3854603848
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWaveController_DeleteWave(), "DeleteWave"); // 1018712268
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWaveController_GenerateWave(), "GenerateWave"); // 1336823667
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWaveController_ModifySquad(), "ModifySquad"); // 3257765023
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWaveController_ModifyWave(), "ModifyWave"); // 3037938071
				static TCppClassTypeInfo<TCppClassTypeTraits<AWaveController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WaveController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("WaveController.h"));
				MetaData->SetValue(NewProp_SpaceshipAdjacence, TEXT("Category"), TEXT("WaveController"));
				MetaData->SetValue(NewProp_SpaceshipAdjacence, TEXT("ModuleRelativePath"), TEXT("WaveController.h"));
				MetaData->SetValue(NewProp_FInitialSpawnPosition, TEXT("Category"), TEXT("WaveController"));
				MetaData->SetValue(NewProp_FInitialSpawnPosition, TEXT("ModuleRelativePath"), TEXT("WaveController.h"));
				MetaData->SetValue(NewProp_SpaceshipWaves, TEXT("Category"), TEXT("WaveController"));
				MetaData->SetValue(NewProp_SpaceshipWaves, TEXT("ModuleRelativePath"), TEXT("WaveController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWaveController, 3111386437);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWaveController(Z_Construct_UClass_AWaveController, &AWaveController::StaticClass, TEXT("/Script/PartoucheTest"), TEXT("AWaveController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaveController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
