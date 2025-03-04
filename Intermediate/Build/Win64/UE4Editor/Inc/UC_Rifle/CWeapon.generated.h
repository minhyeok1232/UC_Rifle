// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UC_RIFLE_CWeapon_generated_h
#error "CWeapon.generated.h already included, missing '#pragma once' in CWeapon.h"
#endif
#define UC_RIFLE_CWeapon_generated_h

#define UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponAimData_Statics; \
	UC_RIFLE_API static class UScriptStruct* StaticStruct();


template<> UC_RIFLE_API UScriptStruct* StaticStruct<struct FWeaponAimData>();

#define UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_SPARSE_DATA
#define UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAiming); \
	DECLARE_FUNCTION(execOnFiring);


#define UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAiming); \
	DECLARE_FUNCTION(execOnFiring);


#define UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACWeapon(); \
	friend struct Z_Construct_UClass_ACWeapon_Statics; \
public: \
	DECLARE_CLASS(ACWeapon, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UC_Rifle"), NO_API) \
	DECLARE_SERIALIZER(ACWeapon)


#define UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_INCLASS \
private: \
	static void StaticRegisterNativesACWeapon(); \
	friend struct Z_Construct_UClass_ACWeapon_Statics; \
public: \
	DECLARE_CLASS(ACWeapon, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UC_Rifle"), NO_API) \
	DECLARE_SERIALIZER(ACWeapon)


#define UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACWeapon(ACWeapon&&); \
	NO_API ACWeapon(const ACWeapon&); \
public:


#define UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACWeapon(ACWeapon&&); \
	NO_API ACWeapon(const ACWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACWeapon)


#define UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(ACWeapon, Root); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ACWeapon, Mesh); } \
	FORCEINLINE static uint32 __PPO__Timeline() { return STRUCT_OFFSET(ACWeapon, Timeline); } \
	FORCEINLINE static uint32 __PPO__HolsterSocketName() { return STRUCT_OFFSET(ACWeapon, HolsterSocketName); } \
	FORCEINLINE static uint32 __PPO__EquipMontage() { return STRUCT_OFFSET(ACWeapon, EquipMontage); } \
	FORCEINLINE static uint32 __PPO__EquipMontage_PlayRate() { return STRUCT_OFFSET(ACWeapon, EquipMontage_PlayRate); } \
	FORCEINLINE static uint32 __PPO__RightHandSocketName() { return STRUCT_OFFSET(ACWeapon, RightHandSocketName); } \
	FORCEINLINE static uint32 __PPO__AimData() { return STRUCT_OFFSET(ACWeapon, AimData); } \
	FORCEINLINE static uint32 __PPO__BaseData() { return STRUCT_OFFSET(ACWeapon, BaseData); } \
	FORCEINLINE static uint32 __PPO__AimCurve() { return STRUCT_OFFSET(ACWeapon, AimCurve); } \
	FORCEINLINE static uint32 __PPO__AimSpeed() { return STRUCT_OFFSET(ACWeapon, AimSpeed); } \
	FORCEINLINE static uint32 __PPO__LeftHandLocation() { return STRUCT_OFFSET(ACWeapon, LeftHandLocation); } \
	FORCEINLINE static uint32 __PPO__HitDecal() { return STRUCT_OFFSET(ACWeapon, HitDecal); } \
	FORCEINLINE static uint32 __PPO__HitDistance() { return STRUCT_OFFSET(ACWeapon, HitDistance); } \
	FORCEINLINE static uint32 __PPO__HitParticle() { return STRUCT_OFFSET(ACWeapon, HitParticle); } \
	FORCEINLINE static uint32 __PPO__RecoilAngle() { return STRUCT_OFFSET(ACWeapon, RecoilAngle); } \
	FORCEINLINE static uint32 __PPO__RecoilRate() { return STRUCT_OFFSET(ACWeapon, RecoilRate); } \
	FORCEINLINE static uint32 __PPO__SpreadSpeed() { return STRUCT_OFFSET(ACWeapon, SpreadSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxSpreadAlignment() { return STRUCT_OFFSET(ACWeapon, MaxSpreadAlignment); } \
	FORCEINLINE static uint32 __PPO__FlashParticle() { return STRUCT_OFFSET(ACWeapon, FlashParticle); } \
	FORCEINLINE static uint32 __PPO__EjectParticle() { return STRUCT_OFFSET(ACWeapon, EjectParticle); } \
	FORCEINLINE static uint32 __PPO__FireSound() { return STRUCT_OFFSET(ACWeapon, FireSound); } \
	FORCEINLINE static uint32 __PPO__CameraShakeClass() { return STRUCT_OFFSET(ACWeapon, CameraShakeClass); } \
	FORCEINLINE static uint32 __PPO__AutoFireInterval() { return STRUCT_OFFSET(ACWeapon, AutoFireInterval); } \
	FORCEINLINE static uint32 __PPO__BulletClass() { return STRUCT_OFFSET(ACWeapon, BulletClass); } \
	FORCEINLINE static uint32 __PPO__MaxMagazineCount() { return STRUCT_OFFSET(ACWeapon, MaxMagazineCount); } \
	FORCEINLINE static uint32 __PPO__ReloadMontage() { return STRUCT_OFFSET(ACWeapon, ReloadMontage); } \
	FORCEINLINE static uint32 __PPO__ReloadMontage_PlayRate() { return STRUCT_OFFSET(ACWeapon, ReloadMontage_PlayRate); } \
	FORCEINLINE static uint32 __PPO__MagazineBoneName() { return STRUCT_OFFSET(ACWeapon, MagazineBoneName); } \
	FORCEINLINE static uint32 __PPO__MagazineSocketName() { return STRUCT_OFFSET(ACWeapon, MagazineSocketName); } \
	FORCEINLINE static uint32 __PPO__MagazineClass() { return STRUCT_OFFSET(ACWeapon, MagazineClass); } \
	FORCEINLINE static uint32 __PPO__CrossHairClass() { return STRUCT_OFFSET(ACWeapon, CrossHairClass); } \
	FORCEINLINE static uint32 __PPO__ArmsLeftHandTransform() { return STRUCT_OFFSET(ACWeapon, ArmsLeftHandTransform); } \
	FORCEINLINE static uint32 __PPO__ArmsMeshTransform() { return STRUCT_OFFSET(ACWeapon, ArmsMeshTransform); }


#define UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_33_PROLOG
#define UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_PRIVATE_PROPERTY_OFFSET \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_SPARSE_DATA \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_RPC_WRAPPERS \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_INCLASS \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_PRIVATE_PROPERTY_OFFSET \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_SPARSE_DATA \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_INCLASS_NO_PURE_DECLS \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UC_RIFLE_API UClass* StaticClass<class ACWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UC_Rifle_Source_UC_Rifle_Weapons_CWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
