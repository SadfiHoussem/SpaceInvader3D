// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARTOUCHETEST_PlayerShip_generated_h
#error "PlayerShip.generated.h already included, missing '#pragma once' in PlayerShip.h"
#endif
#define PARTOUCHETEST_PlayerShip_generated_h

#define PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeHullDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TakeHullDamage(Z_Param_Damage); \
		P_NATIVE_END; \
	}


#define PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeHullDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TakeHullDamage(Z_Param_Damage); \
		P_NATIVE_END; \
	}


#define PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_EVENT_PARMS
#define PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_CALLBACK_WRAPPERS
#define PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerShip(); \
	friend PARTOUCHETEST_API class UClass* Z_Construct_UClass_APlayerShip(); \
public: \
	DECLARE_CLASS(APlayerShip, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PartoucheTest"), NO_API) \
	DECLARE_SERIALIZER(APlayerShip) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerShip(); \
	friend PARTOUCHETEST_API class UClass* Z_Construct_UClass_APlayerShip(); \
public: \
	DECLARE_CLASS(APlayerShip, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PartoucheTest"), NO_API) \
	DECLARE_SERIALIZER(APlayerShip) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerShip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerShip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerShip(APlayerShip&&); \
	NO_API APlayerShip(const APlayerShip&); \
public:


#define PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerShip(APlayerShip&&); \
	NO_API APlayerShip(const APlayerShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerShip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerShip)


#define PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(APlayerShip, Health); } \
	FORCEINLINE static uint32 __PPO__InitialHealth() { return STRUCT_OFFSET(APlayerShip, InitialHealth); } \
	FORCEINLINE static uint32 __PPO__IsBeingDestroyed() { return STRUCT_OFFSET(APlayerShip, IsBeingDestroyed); } \
	FORCEINLINE static uint32 __PPO__TimeBeforeDestruction() { return STRUCT_OFFSET(APlayerShip, TimeBeforeDestruction); }


#define PartoucheTest_Source_PartoucheTest_PlayerShip_h_9_PROLOG \
	PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_EVENT_PARMS


#define PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_PRIVATE_PROPERTY_OFFSET \
	PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_RPC_WRAPPERS \
	PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_CALLBACK_WRAPPERS \
	PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_INCLASS \
	PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_PRIVATE_PROPERTY_OFFSET \
	PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_CALLBACK_WRAPPERS \
	PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_INCLASS_NO_PURE_DECLS \
	PartoucheTest_Source_PartoucheTest_PlayerShip_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PartoucheTest_Source_PartoucheTest_PlayerShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
