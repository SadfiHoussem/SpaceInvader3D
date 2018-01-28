// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARTOUCHETEST_AIEnemyShip_generated_h
#error "AIEnemyShip.generated.h already included, missing '#pragma once' in AIEnemyShip.h"
#endif
#define PARTOUCHETEST_AIEnemyShip_generated_h

#define PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeHullDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TakeHullDamage(Z_Param_Damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeFireRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeFireRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FireWeapon(); \
		P_NATIVE_END; \
	}


#define PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeHullDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TakeHullDamage(Z_Param_Damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeFireRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeFireRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FireWeapon(); \
		P_NATIVE_END; \
	}


#define PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_EVENT_PARMS
#define PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_CALLBACK_WRAPPERS
#define PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIEnemyShip(); \
	friend PARTOUCHETEST_API class UClass* Z_Construct_UClass_AAIEnemyShip(); \
public: \
	DECLARE_CLASS(AAIEnemyShip, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PartoucheTest"), NO_API) \
	DECLARE_SERIALIZER(AAIEnemyShip) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAIEnemyShip(); \
	friend PARTOUCHETEST_API class UClass* Z_Construct_UClass_AAIEnemyShip(); \
public: \
	DECLARE_CLASS(AAIEnemyShip, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PartoucheTest"), NO_API) \
	DECLARE_SERIALIZER(AAIEnemyShip) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIEnemyShip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIEnemyShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIEnemyShip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIEnemyShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIEnemyShip(AAIEnemyShip&&); \
	NO_API AAIEnemyShip(const AAIEnemyShip&); \
public:


#define PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIEnemyShip(AAIEnemyShip&&); \
	NO_API AAIEnemyShip(const AAIEnemyShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIEnemyShip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIEnemyShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIEnemyShip)


#define PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxMovementDistance() { return STRUCT_OFFSET(AAIEnemyShip, MaxMovementDistance); } \
	FORCEINLINE static uint32 __PPO__EnemyShipMesh() { return STRUCT_OFFSET(AAIEnemyShip, EnemyShipMesh); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AAIEnemyShip, Health); } \
	FORCEINLINE static uint32 __PPO__InitialHealth() { return STRUCT_OFFSET(AAIEnemyShip, InitialHealth); } \
	FORCEINLINE static uint32 __PPO__IsBeingDestroyed() { return STRUCT_OFFSET(AAIEnemyShip, IsBeingDestroyed); } \
	FORCEINLINE static uint32 __PPO__ShipSpeed() { return STRUCT_OFFSET(AAIEnemyShip, ShipSpeed); } \
	FORCEINLINE static uint32 __PPO__MinFireRate() { return STRUCT_OFFSET(AAIEnemyShip, MinFireRate); } \
	FORCEINLINE static uint32 __PPO__MaxFireRate() { return STRUCT_OFFSET(AAIEnemyShip, MaxFireRate); } \
	FORCEINLINE static uint32 __PPO__TimerHandler_FireWeapon() { return STRUCT_OFFSET(AAIEnemyShip, TimerHandler_FireWeapon); } \
	FORCEINLINE static uint32 __PPO__TimeBeforeDestruction() { return STRUCT_OFFSET(AAIEnemyShip, TimeBeforeDestruction); }


#define PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_9_PROLOG \
	PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_EVENT_PARMS


#define PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_PRIVATE_PROPERTY_OFFSET \
	PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_RPC_WRAPPERS \
	PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_CALLBACK_WRAPPERS \
	PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_INCLASS \
	PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_PRIVATE_PROPERTY_OFFSET \
	PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_CALLBACK_WRAPPERS \
	PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_INCLASS_NO_PURE_DECLS \
	PartoucheTest_Source_PartoucheTest_AIEnemyShip_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PartoucheTest_Source_PartoucheTest_AIEnemyShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
