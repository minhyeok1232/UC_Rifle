// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACWeapon;
enum class EWeaponType : uint8;
#ifdef UC_RIFLE_CWeaponComponent_generated_h
#error "CWeaponComponent.generated.h already included, missing '#pragma once' in CWeaponComponent.h"
#endif
#define UC_RIFLE_CWeaponComponent_generated_h

#define UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_18_DELEGATE \
static inline void FWeaponAim_Arms_End_DelegateWrapper(const FMulticastScriptDelegate& WeaponAim_Arms_End) \
{ \
	WeaponAim_Arms_End.ProcessMulticastDelegate<UObject>(NULL); \
}


#define UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_17_DELEGATE \
struct _Script_UC_Rifle_eventWeaponAim_Arms_Begin_Parms \
{ \
	ACWeapon* InThisWeapon; \
}; \
static inline void FWeaponAim_Arms_Begin_DelegateWrapper(const FMulticastScriptDelegate& WeaponAim_Arms_Begin, ACWeapon* InThisWeapon) \
{ \
	_Script_UC_Rifle_eventWeaponAim_Arms_Begin_Parms Parms; \
	Parms.InThisWeapon=InThisWeapon; \
	WeaponAim_Arms_Begin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_16_DELEGATE \
struct _Script_UC_Rifle_eventWeaponTypeChanged_Parms \
{ \
	EWeaponType InPrevType; \
	EWeaponType InNewType; \
}; \
static inline void FWeaponTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& WeaponTypeChanged, EWeaponType InPrevType, EWeaponType InNewType) \
{ \
	_Script_UC_Rifle_eventWeaponTypeChanged_Parms Parms; \
	Parms.InPrevType=InPrevType; \
	Parms.InNewType=InNewType; \
	WeaponTypeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_SPARSE_DATA
#define UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAim_Arms_End); \
	DECLARE_FUNCTION(execOnAim_Arms_Begin);


#define UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAim_Arms_End); \
	DECLARE_FUNCTION(execOnAim_Arms_Begin);


#define UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCWeaponComponent(); \
	friend struct Z_Construct_UClass_UCWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UCWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UC_Rifle"), NO_API) \
	DECLARE_SERIALIZER(UCWeaponComponent)


#define UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUCWeaponComponent(); \
	friend struct Z_Construct_UClass_UCWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UCWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UC_Rifle"), NO_API) \
	DECLARE_SERIALIZER(UCWeaponComponent)


#define UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCWeaponComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCWeaponComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCWeaponComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCWeaponComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCWeaponComponent(UCWeaponComponent&&); \
	NO_API UCWeaponComponent(const UCWeaponComponent&); \
public:


#define UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCWeaponComponent(UCWeaponComponent&&); \
	NO_API UCWeaponComponent(const UCWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCWeaponComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCWeaponComponent)


#define UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponClasses() { return STRUCT_OFFSET(UCWeaponComponent, WeaponClasses); } \
	FORCEINLINE static uint32 __PPO__HUDClass() { return STRUCT_OFFSET(UCWeaponComponent, HUDClass); }


#define UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_23_PROLOG
#define UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_SPARSE_DATA \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_RPC_WRAPPERS \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_INCLASS \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_SPARSE_DATA \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_INCLASS_NO_PURE_DECLS \
	UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UC_RIFLE_API UClass* StaticClass<class UCWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UC_Rifle_Source_UC_Rifle_Weapons_CWeaponComponent_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::AR4) \
	op(EWeaponType::AK47) \
	op(EWeaponType::Pistol) \
	op(EWeaponType::Max) 

enum class EWeaponType : uint8;
template<> UC_RIFLE_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
