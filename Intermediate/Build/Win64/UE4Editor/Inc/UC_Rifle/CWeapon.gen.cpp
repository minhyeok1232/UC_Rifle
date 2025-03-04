// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UC_Rifle/Weapons/CWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCWeapon() {}
// Cross Module References
	UC_RIFLE_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponAimData();
	UPackage* Z_Construct_UPackage__Script_UC_Rifle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UC_RIFLE_API UClass* Z_Construct_UClass_ACWeapon_NoRegister();
	UC_RIFLE_API UClass* Z_Construct_UClass_ACWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UMatineeCameraShake_NoRegister();
	UC_RIFLE_API UClass* Z_Construct_UClass_ACBullet_NoRegister();
	UC_RIFLE_API UClass* Z_Construct_UClass_ACMagazine_NoRegister();
	UC_RIFLE_API UClass* Z_Construct_UClass_UCUserWidget_CrossHair_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FWeaponAimData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UC_RIFLE_API uint32 Get_Z_Construct_UScriptStruct_FWeaponAimData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponAimData, Z_Construct_UPackage__Script_UC_Rifle(), TEXT("WeaponAimData"), sizeof(FWeaponAimData), Get_Z_Construct_UScriptStruct_FWeaponAimData_Hash());
	}
	return Singleton;
}
template<> UC_RIFLE_API UScriptStruct* StaticStruct<FWeaponAimData>()
{
	return FWeaponAimData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponAimData(FWeaponAimData::StaticStruct, TEXT("/Script/UC_Rifle"), TEXT("WeaponAimData"), false, nullptr, nullptr);
static struct FScriptStruct_UC_Rifle_StaticRegisterNativesFWeaponAimData
{
	FScriptStruct_UC_Rifle_StaticRegisterNativesFWeaponAimData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeaponAimData")),new UScriptStruct::TCppStructOps<FWeaponAimData>);
	}
} ScriptStruct_UC_Rifle_StaticRegisterNativesFWeaponAimData;
	struct Z_Construct_UScriptStruct_FWeaponAimData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAimData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Aim?? ?\xcf\xb1????? ????\xc3\xbc ???? : ????,?????\xd4\xbc?\n" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
		{ "ToolTip", "Aim?? ?\xcf\xb1????? ????\xc3\xbc ???? : ????,?????\xd4\xbc?" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponAimData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponAimData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAimData_Statics::NewProp_TargetArmLength_MetaData[] = {
		{ "Category", "WeaponAimData" },
		{ "Comment", "// ?????\xcd\xbf??? ???\xe6\xb0\xa1???\xcf\xb5??? ????\xc8\xad\n" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
		{ "ToolTip", "?????\xcd\xbf??? ???\xe6\xb0\xa1???\xcf\xb5??? ????\xc8\xad" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponAimData_Statics::NewProp_TargetArmLength = { "TargetArmLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponAimData, TargetArmLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAimData_Statics::NewProp_TargetArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAimData_Statics::NewProp_TargetArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAimData_Statics::NewProp_SocketOffset_MetaData[] = {
		{ "Category", "WeaponAimData" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponAimData_Statics::NewProp_SocketOffset = { "SocketOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponAimData, SocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAimData_Statics::NewProp_SocketOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAimData_Statics::NewProp_SocketOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAimData_Statics::NewProp_FieldOfView_MetaData[] = {
		{ "Category", "WeaponAimData" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponAimData_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponAimData, FieldOfView), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAimData_Statics::NewProp_FieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAimData_Statics::NewProp_FieldOfView_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponAimData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAimData_Statics::NewProp_TargetArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAimData_Statics::NewProp_SocketOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAimData_Statics::NewProp_FieldOfView,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponAimData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UC_Rifle,
		nullptr,
		&NewStructOps,
		"WeaponAimData",
		sizeof(FWeaponAimData),
		alignof(FWeaponAimData),
		Z_Construct_UScriptStruct_FWeaponAimData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAimData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAimData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAimData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponAimData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponAimData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UC_Rifle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponAimData"), sizeof(FWeaponAimData), Get_Z_Construct_UScriptStruct_FWeaponAimData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponAimData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponAimData_Hash() { return 2650948832U; }
	DEFINE_FUNCTION(ACWeapon::execOnAiming)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAiming(Z_Param_Output);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACWeapon::execOnFiring)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFiring();
		P_NATIVE_END;
	}
	void ACWeapon::StaticRegisterNativesACWeapon()
	{
		UClass* Class = ACWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAiming", &ACWeapon::execOnAiming },
			{ "OnFiring", &ACWeapon::execOnFiring },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACWeapon_OnAiming_Statics
	{
		struct CWeapon_eventOnAiming_Parms
		{
			float Output;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Output;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACWeapon_OnAiming_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CWeapon_eventOnAiming_Parms, Output), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACWeapon_OnAiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACWeapon_OnAiming_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACWeapon_OnAiming_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Timeline??  ?????\xcf\xb1????? ????\xc8\xad\n" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
		{ "ToolTip", "Timeline??  ?????\xcf\xb1????? ????\xc8\xad" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACWeapon_OnAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACWeapon, nullptr, "OnAiming", nullptr, nullptr, sizeof(CWeapon_eventOnAiming_Parms), Z_Construct_UFunction_ACWeapon_OnAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACWeapon_OnAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACWeapon_OnAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACWeapon_OnAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACWeapon_OnAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACWeapon_OnAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACWeapon_OnFiring_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACWeapon_OnFiring_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Fire : \xc5\xb8?\xcc\xb8\xd3\xb8? ?????\xcf\xb1? ???? ?\xdb\xb7?\xc8\xad\n" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
		{ "ToolTip", "Fire : \xc5\xb8?\xcc\xb8\xd3\xb8? ?????\xcf\xb1? ???? ?\xdb\xb7?\xc8\xad" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACWeapon_OnFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACWeapon, nullptr, "OnFiring", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACWeapon_OnFiring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACWeapon_OnFiring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACWeapon_OnFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACWeapon_OnFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACWeapon_NoRegister()
	{
		return ACWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ACWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Timeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HolsterSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HolsterSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipMontage_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EquipMontage_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightHandSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AimData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDecal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitDecal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoilAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoilRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpreadSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpreadAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpreadAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlashParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlashParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EjectParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EjectParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShakeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CameraShakeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoFireInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoFireInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BulletClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMagazineCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxMagazineCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadMontage_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadMontage_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MagazineBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MagazineSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MagazineClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossHairClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CrossHairClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmsLeftHandTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArmsLeftHandTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmsMeshTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArmsMeshTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UC_Rifle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACWeapon_OnAiming, "OnAiming" }, // 3215177022
		{ &Z_Construct_UFunction_ACWeapon_OnFiring, "OnFiring" }, // 1926488773
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ?\xf0\xb8\xae\xbe\xf3\xbf\xa1\xbc??? ?\xdf\xbb?\xc5\xac?????? ?\xcc\xb7??? ????, \xc6\xaf\xc2\xa1?? ??\xc4\xa1?\xc8\xb5?(Spawn == Instance )\n// ?\xcf\xb9?C++???? ?\xdf\xbb?\xc5\xac???? Instance\xc8\xad ?\xc8\xb5? : virtual void A() = 0;\n" },
		{ "IncludePath", "Weapons/CWeapon.h" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
		{ "ToolTip", "?\xf0\xb8\xae\xbe\xf3\xbf\xa1\xbc??? ?\xdf\xbb?\xc5\xac?????? ?\xcc\xb7??? ????, \xc6\xaf\xc2\xa1?? ??\xc4\xa1?\xc8\xb5?(Spawn == Instance )\n?\xcf\xb9?C++???? ?\xdf\xbb?\xc5\xac???? Instance\xc8\xad ?\xc8\xb5? : virtual void A() = 0;" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "CWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "CWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_Timeline_MetaData[] = {
		{ "Category", "CWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_Timeline = { "Timeline", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, Timeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_Timeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_Timeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_HolsterSocketName_MetaData[] = {
		{ "Category", "Equip" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_HolsterSocketName = { "HolsterSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, HolsterSocketName), METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_HolsterSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_HolsterSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_EquipMontage_MetaData[] = {
		{ "Category", "Equip" },
		{ "Comment", "// ???\xe2\xb8\xa6 ?????? Socket??\n" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
		{ "ToolTip", "???\xe2\xb8\xa6 ?????? Socket??" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_EquipMontage = { "EquipMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, EquipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_EquipMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_EquipMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_EquipMontage_PlayRate_MetaData[] = {
		{ "Category", "Equip" },
		{ "Comment", "// Play?? ??\xc5\xb8??\n" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
		{ "ToolTip", "Play?? ??\xc5\xb8??" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_EquipMontage_PlayRate = { "EquipMontage_PlayRate", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, EquipMontage_PlayRate), METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_EquipMontage_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_EquipMontage_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_RightHandSocketName_MetaData[] = {
		{ "Category", "Equip" },
		{ "Comment", "// ??\xc5\xb8???\xc3\xb7??\xcc\xbd\xc3\xb0?\n" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
		{ "ToolTip", "??\xc5\xb8???\xc3\xb7??\xcc\xbd\xc3\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_RightHandSocketName = { "RightHandSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, RightHandSocketName), METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_RightHandSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_RightHandSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_AimData_MetaData[] = {
		{ "Category", "Aim" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_AimData = { "AimData", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, AimData), Z_Construct_UScriptStruct_FWeaponAimData, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_AimData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_AimData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_BaseData_MetaData[] = {
		{ "Category", "Aim" },
		{ "Comment", "// Aim???? ?????? ??????\n" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
		{ "ToolTip", "Aim???? ?????? ??????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_BaseData = { "BaseData", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, BaseData), Z_Construct_UScriptStruct_FWeaponAimData, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_BaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_BaseData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_AimCurve_MetaData[] = {
		{ "Category", "Aim" },
		{ "Comment", "// Aim?? ?????? ??????\n" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
		{ "ToolTip", "Aim?? ?????? ??????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_AimCurve = { "AimCurve", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, AimCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_AimCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_AimCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_AimSpeed_MetaData[] = {
		{ "Category", "Aim" },
		{ "Comment", "// ?????? Curve?????? Assign : 1-0\n" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
		{ "ToolTip", "?????? Curve?????? Assign : 1-0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_AimSpeed = { "AimSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, AimSpeed), METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_AimSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_AimSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_LeftHandLocation_MetaData[] = {
		{ "Category", "Aim" },
		{ "Comment", "// Curve???\xc2\xb0? ????\n" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
		{ "ToolTip", "Curve???\xc2\xb0? ????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_LeftHandLocation = { "LeftHandLocation", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, LeftHandLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_LeftHandLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_LeftHandLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_HitDecal_MetaData[] = {
		{ "Category", "Hit" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_HitDecal = { "HitDecal", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, HitDecal), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_HitDecal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_HitDecal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_HitDistance_MetaData[] = {
		{ "Category", "Hit" },
		{ "Comment", "// \xc5\xba???? ??\xc4\xae?? ?\xcc\xbf??\xcf\xbf? ??????\n" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
		{ "ToolTip", "\xc5\xba???? ??\xc4\xae?? ?\xcc\xbf??\xcf\xbf? ??????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_HitDistance = { "HitDistance", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, HitDistance), METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_HitDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_HitDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_HitParticle_MetaData[] = {
		{ "Category", "Hit" },
		{ "Comment", "// camera -> 3000 ?????????? Hit\n" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
		{ "ToolTip", "camera -> 3000 ?????????? Hit" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_HitParticle = { "HitParticle", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, HitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_HitParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_HitParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_RecoilAngle_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_RecoilAngle = { "RecoilAngle", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, RecoilAngle), METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_RecoilAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_RecoilAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_RecoilRate_MetaData[] = {
		{ "Category", "Fire" },
		{ "Comment", "// ???? ?\xdd\xb5????? \n" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
		{ "ToolTip", "???? ?\xdd\xb5?????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_RecoilRate = { "RecoilRate", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, RecoilRate), METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_RecoilRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_RecoilRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_SpreadSpeed_MetaData[] = {
		{ "Category", "Fire" },
		{ "Comment", "// ???\xd8\xb0??? UI?? ?\xda\xb5\xe9\xb8\xb5 ?\xcf\xb1? ???? ????\n" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
		{ "ToolTip", "???\xd8\xb0??? UI?? ?\xda\xb5\xe9\xb8\xb5 ?\xcf\xb1? ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_SpreadSpeed = { "SpreadSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, SpreadSpeed), METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_SpreadSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_SpreadSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_MaxSpreadAlignment_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_MaxSpreadAlignment = { "MaxSpreadAlignment", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, MaxSpreadAlignment), METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_MaxSpreadAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_MaxSpreadAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_FlashParticle_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_FlashParticle = { "FlashParticle", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, FlashParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_FlashParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_FlashParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_EjectParticle_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_EjectParticle = { "EjectParticle", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, EjectParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_EjectParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_EjectParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, FireSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_CameraShakeClass_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_CameraShakeClass = { "CameraShakeClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, CameraShakeClass), Z_Construct_UClass_UMatineeCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_CameraShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_CameraShakeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_AutoFireInterval_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_AutoFireInterval = { "AutoFireInterval", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, AutoFireInterval), METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_AutoFireInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_AutoFireInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_BulletClass_MetaData[] = {
		{ "Category", "Fire" },
		{ "Comment", "// Auto?? Time\n" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
		{ "ToolTip", "Auto?? Time" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, BulletClass), Z_Construct_UClass_ACBullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_BulletClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_BulletClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_MaxMagazineCount_MetaData[] = {
		{ "Category", "Magazine" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_MaxMagazineCount = { "MaxMagazineCount", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, MaxMagazineCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_MaxMagazineCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_MaxMagazineCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_ReloadMontage_MetaData[] = {
		{ "Category", "Magazine" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_ReloadMontage = { "ReloadMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, ReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_ReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_ReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_ReloadMontage_PlayRate_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "// ??????????\n" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_ReloadMontage_PlayRate = { "ReloadMontage_PlayRate", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, ReloadMontage_PlayRate), METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_ReloadMontage_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_ReloadMontage_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_MagazineBoneName_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "// ??????????\n" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_MagazineBoneName = { "MagazineBoneName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, MagazineBoneName), METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_MagazineBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_MagazineBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_MagazineSocketName_MetaData[] = {
		{ "Category", "Magazine" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_MagazineSocketName = { "MagazineSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, MagazineSocketName), METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_MagazineSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_MagazineSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_MagazineClass_MetaData[] = {
		{ "Category", "Magazine" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_MagazineClass = { "MagazineClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, MagazineClass), Z_Construct_UClass_ACMagazine_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_MagazineClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_MagazineClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_CrossHairClass_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "// UI\n" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
		{ "ToolTip", "UI" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_CrossHairClass = { "CrossHairClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, CrossHairClass), Z_Construct_UClass_UCUserWidget_CrossHair_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_CrossHairClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_CrossHairClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_ArmsLeftHandTransform_MetaData[] = {
		{ "Category", "Arms" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_ArmsLeftHandTransform = { "ArmsLeftHandTransform", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, ArmsLeftHandTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_ArmsLeftHandTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_ArmsLeftHandTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Statics::NewProp_ArmsMeshTransform_MetaData[] = {
		{ "Category", "Arms" },
		{ "ModuleRelativePath", "Weapons/CWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACWeapon_Statics::NewProp_ArmsMeshTransform = { "ArmsMeshTransform", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon, ArmsMeshTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::NewProp_ArmsMeshTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::NewProp_ArmsMeshTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_Timeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_HolsterSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_EquipMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_EquipMontage_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_RightHandSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_AimData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_BaseData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_AimCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_AimSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_LeftHandLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_HitDecal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_HitDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_HitParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_RecoilAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_RecoilRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_SpreadSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_MaxSpreadAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_FlashParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_EjectParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_CameraShakeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_AutoFireInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_BulletClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_MaxMagazineCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_ReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_ReloadMontage_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_MagazineBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_MagazineSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_MagazineClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_CrossHairClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_ArmsLeftHandTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_Statics::NewProp_ArmsMeshTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACWeapon_Statics::ClassParams = {
		&ACWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACWeapon, 3667945433);
	template<> UC_RIFLE_API UClass* StaticClass<ACWeapon>()
	{
		return ACWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACWeapon(Z_Construct_UClass_ACWeapon, &ACWeapon::StaticClass, TEXT("/Script/UC_Rifle"), TEXT("ACWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
