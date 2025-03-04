// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UC_RIFLE_CAnimNotify_Reload_generated_h
#error "CAnimNotify_Reload.generated.h already included, missing '#pragma once' in CAnimNotify_Reload.h"
#endif
#define UC_RIFLE_CAnimNotify_Reload_generated_h

#define UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_SPARSE_DATA
#define UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_RPC_WRAPPERS
#define UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCAnimNotify_Reload(); \
	friend struct Z_Construct_UClass_UCAnimNotify_Reload_Statics; \
public: \
	DECLARE_CLASS(UCAnimNotify_Reload, UAnimNotify, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UC_Rifle"), NO_API) \
	DECLARE_SERIALIZER(UCAnimNotify_Reload)


#define UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCAnimNotify_Reload(); \
	friend struct Z_Construct_UClass_UCAnimNotify_Reload_Statics; \
public: \
	DECLARE_CLASS(UCAnimNotify_Reload, UAnimNotify, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UC_Rifle"), NO_API) \
	DECLARE_SERIALIZER(UCAnimNotify_Reload)


#define UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCAnimNotify_Reload(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCAnimNotify_Reload) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCAnimNotify_Reload); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCAnimNotify_Reload); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCAnimNotify_Reload(UCAnimNotify_Reload&&); \
	NO_API UCAnimNotify_Reload(const UCAnimNotify_Reload&); \
public:


#define UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCAnimNotify_Reload(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCAnimNotify_Reload(UCAnimNotify_Reload&&); \
	NO_API UCAnimNotify_Reload(const UCAnimNotify_Reload&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCAnimNotify_Reload); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCAnimNotify_Reload); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCAnimNotify_Reload)


#define UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActionType() { return STRUCT_OFFSET(UCAnimNotify_Reload, ActionType); }


#define UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_15_PROLOG
#define UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_PRIVATE_PROPERTY_OFFSET \
	UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_SPARSE_DATA \
	UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_RPC_WRAPPERS \
	UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_INCLASS \
	UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_PRIVATE_PROPERTY_OFFSET \
	UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_SPARSE_DATA \
	UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_INCLASS_NO_PURE_DECLS \
	UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UC_RIFLE_API UClass* StaticClass<class UCAnimNotify_Reload>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UC_Rifle_Source_UC_Rifle_CAnimNotify_Reload_h


#define FOREACH_ENUM_EROADACTIONTYPE(op) \
	op(ERoadActionType::Eject) \
	op(ERoadActionType::Spawn) \
	op(ERoadActionType::Load) \
	op(ERoadActionType::End) 

enum class ERoadActionType : uint8;
template<> UC_RIFLE_API UEnum* StaticEnum<ERoadActionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
