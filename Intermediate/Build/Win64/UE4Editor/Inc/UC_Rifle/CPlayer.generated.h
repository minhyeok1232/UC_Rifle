// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UC_RIFLE_CPlayer_generated_h
#error "CPlayer.generated.h already included, missing '#pragma once' in CPlayer.h"
#endif
#define UC_RIFLE_CPlayer_generated_h

#define UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_SPARSE_DATA
#define UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_RPC_WRAPPERS
#define UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_EVENT_PARMS
#define UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_CALLBACK_WRAPPERS
#define UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlayer(); \
	friend struct Z_Construct_UClass_ACPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UC_Rifle"), NO_API) \
	DECLARE_SERIALIZER(ACPlayer)


#define UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACPlayer(); \
	friend struct Z_Construct_UClass_ACPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UC_Rifle"), NO_API) \
	DECLARE_SERIALIZER(ACPlayer)


#define UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayer(ACPlayer&&); \
	NO_API ACPlayer(const ACPlayer&); \
public:


#define UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayer(ACPlayer&&); \
	NO_API ACPlayer(const ACPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPlayer)


#define UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ACPlayer, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ACPlayer, Camera); } \
	FORCEINLINE static uint32 __PPO__Weapon() { return STRUCT_OFFSET(ACPlayer, Weapon); } \
	FORCEINLINE static uint32 __PPO__Backpack() { return STRUCT_OFFSET(ACPlayer, Backpack); } \
	FORCEINLINE static uint32 __PPO__Arms() { return STRUCT_OFFSET(ACPlayer, Arms); }


#define UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_9_PROLOG \
	UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_EVENT_PARMS


#define UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_SPARSE_DATA \
	UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_RPC_WRAPPERS \
	UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_CALLBACK_WRAPPERS \
	UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_INCLASS \
	UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_SPARSE_DATA \
	UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_CALLBACK_WRAPPERS \
	UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_INCLASS_NO_PURE_DECLS \
	UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UC_RIFLE_API UClass* StaticClass<class ACPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UC_Rifle_Source_UC_Rifle_Characters_CPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
