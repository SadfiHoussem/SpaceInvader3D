// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSpaceshipWave;
struct FSpaceshipSquad;
#ifdef PARTOUCHETEST_WaveController_generated_h
#error "WaveController.generated.h already included, missing '#pragma once' in WaveController.h"
#endif
#define PARTOUCHETEST_WaveController_generated_h

#define PartoucheTest_Source_PartoucheTest_WaveController_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateWave) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numWave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GenerateWave(Z_Param_numWave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteWave) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numWave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DeleteWave(Z_Param_numWave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModifyWave) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numWave); \
		P_GET_STRUCT(FSpaceshipWave,Z_Param_spaceshipWave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ModifyWave(Z_Param_numWave,Z_Param_spaceshipWave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddWave) \
	{ \
		P_GET_STRUCT(FSpaceshipWave,Z_Param_spaceshipWave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddWave(Z_Param_spaceshipWave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteSquad) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numWave); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numSquad); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DeleteSquad(Z_Param_numWave,Z_Param_numSquad); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModifySquad) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numWave); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numSquad); \
		P_GET_STRUCT(FSpaceshipSquad,Z_Param_spaceshipSquad); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ModifySquad(Z_Param_numWave,Z_Param_numSquad,Z_Param_spaceshipSquad); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSquad) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numWave); \
		P_GET_STRUCT(FSpaceshipSquad,Z_Param_spaceshipSquad); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddSquad(Z_Param_numWave,Z_Param_spaceshipSquad); \
		P_NATIVE_END; \
	}


#define PartoucheTest_Source_PartoucheTest_WaveController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateWave) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numWave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GenerateWave(Z_Param_numWave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteWave) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numWave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DeleteWave(Z_Param_numWave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModifyWave) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numWave); \
		P_GET_STRUCT(FSpaceshipWave,Z_Param_spaceshipWave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ModifyWave(Z_Param_numWave,Z_Param_spaceshipWave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddWave) \
	{ \
		P_GET_STRUCT(FSpaceshipWave,Z_Param_spaceshipWave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddWave(Z_Param_spaceshipWave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteSquad) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numWave); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numSquad); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DeleteSquad(Z_Param_numWave,Z_Param_numSquad); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModifySquad) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numWave); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numSquad); \
		P_GET_STRUCT(FSpaceshipSquad,Z_Param_spaceshipSquad); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ModifySquad(Z_Param_numWave,Z_Param_numSquad,Z_Param_spaceshipSquad); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSquad) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numWave); \
		P_GET_STRUCT(FSpaceshipSquad,Z_Param_spaceshipSquad); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddSquad(Z_Param_numWave,Z_Param_spaceshipSquad); \
		P_NATIVE_END; \
	}


#define PartoucheTest_Source_PartoucheTest_WaveController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaveController(); \
	friend PARTOUCHETEST_API class UClass* Z_Construct_UClass_AWaveController(); \
public: \
	DECLARE_CLASS(AWaveController, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PartoucheTest"), NO_API) \
	DECLARE_SERIALIZER(AWaveController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PartoucheTest_Source_PartoucheTest_WaveController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAWaveController(); \
	friend PARTOUCHETEST_API class UClass* Z_Construct_UClass_AWaveController(); \
public: \
	DECLARE_CLASS(AWaveController, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PartoucheTest"), NO_API) \
	DECLARE_SERIALIZER(AWaveController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PartoucheTest_Source_PartoucheTest_WaveController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaveController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaveController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaveController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaveController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaveController(AWaveController&&); \
	NO_API AWaveController(const AWaveController&); \
public:


#define PartoucheTest_Source_PartoucheTest_WaveController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaveController(AWaveController&&); \
	NO_API AWaveController(const AWaveController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaveController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaveController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWaveController)


#define PartoucheTest_Source_PartoucheTest_WaveController_h_13_PRIVATE_PROPERTY_OFFSET
#define PartoucheTest_Source_PartoucheTest_WaveController_h_10_PROLOG
#define PartoucheTest_Source_PartoucheTest_WaveController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PartoucheTest_Source_PartoucheTest_WaveController_h_13_PRIVATE_PROPERTY_OFFSET \
	PartoucheTest_Source_PartoucheTest_WaveController_h_13_RPC_WRAPPERS \
	PartoucheTest_Source_PartoucheTest_WaveController_h_13_INCLASS \
	PartoucheTest_Source_PartoucheTest_WaveController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PartoucheTest_Source_PartoucheTest_WaveController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PartoucheTest_Source_PartoucheTest_WaveController_h_13_PRIVATE_PROPERTY_OFFSET \
	PartoucheTest_Source_PartoucheTest_WaveController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PartoucheTest_Source_PartoucheTest_WaveController_h_13_INCLASS_NO_PURE_DECLS \
	PartoucheTest_Source_PartoucheTest_WaveController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PartoucheTest_Source_PartoucheTest_WaveController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
