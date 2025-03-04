// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWeaponType : uint8;
#ifdef UC_RIFLE_CUserWidget_HUD_generated_h
#error "CUserWidget_HUD.generated.h already included, missing '#pragma once' in CUserWidget_HUD.h"
#endif
#define UC_RIFLE_CUserWidget_HUD_generated_h

#define UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_SPARSE_DATA
#define UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_RPC_WRAPPERS
#define UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_EVENT_PARMS \
	struct CUserWidget_HUD_eventUpdateMagzine_Parms \
	{ \
		uint8 InCurr; \
		uint8 InMax; \
	}; \
	struct CUserWidget_HUD_eventUpdateWeaponType_Parms \
	{ \
		EWeaponType InType; \
	};


#define UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_CALLBACK_WRAPPERS
#define UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCUserWidget_HUD(); \
	friend struct Z_Construct_UClass_UCUserWidget_HUD_Statics; \
public: \
	DECLARE_CLASS(UCUserWidget_HUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UC_Rifle"), NO_API) \
	DECLARE_SERIALIZER(UCUserWidget_HUD)


#define UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCUserWidget_HUD(); \
	friend struct Z_Construct_UClass_UCUserWidget_HUD_Statics; \
public: \
	DECLARE_CLASS(UCUserWidget_HUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UC_Rifle"), NO_API) \
	DECLARE_SERIALIZER(UCUserWidget_HUD)


#define UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCUserWidget_HUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCUserWidget_HUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCUserWidget_HUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCUserWidget_HUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCUserWidget_HUD(UCUserWidget_HUD&&); \
	NO_API UCUserWidget_HUD(const UCUserWidget_HUD&); \
public:


#define UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCUserWidget_HUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCUserWidget_HUD(UCUserWidget_HUD&&); \
	NO_API UCUserWidget_HUD(const UCUserWidget_HUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCUserWidget_HUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCUserWidget_HUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCUserWidget_HUD)


#define UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_PRIVATE_PROPERTY_OFFSET
#define UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_13_PROLOG \
	UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_EVENT_PARMS


#define UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_PRIVATE_PROPERTY_OFFSET \
	UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_SPARSE_DATA \
	UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_RPC_WRAPPERS \
	UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_CALLBACK_WRAPPERS \
	UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_INCLASS \
	UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_PRIVATE_PROPERTY_OFFSET \
	UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_SPARSE_DATA \
	UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_CALLBACK_WRAPPERS \
	UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_INCLASS_NO_PURE_DECLS \
	UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UC_RIFLE_API UClass* StaticClass<class UCUserWidget_HUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UC_Rifle_Source_UC_Rifle_Widgets_CUserWidget_HUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
