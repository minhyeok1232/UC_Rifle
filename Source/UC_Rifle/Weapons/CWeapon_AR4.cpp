// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/CWeapon_AR4.h"
#include  "Global.h"
#include  "Animation/AnimMontage.h"
#include  "Camera/CameraShake.h"
#include  "Components/SkeletalMeshComponent.h"
#include "Widgets/CUserWidget_CrossHair.h"
#include "Weapons/CMagazine.h"

ACWeapon_AR4::ACWeapon_AR4()
{
	// Root,Mesh만들어진 상태이므로 해당되는 애셋만 Assign
	
	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/FPS_Weapon_Bundle/Weapons/Meshes/AR4/SK_AR4.SK_AR4'");
	Mesh->SetSkeletalMesh(mesh);

	// Equip
	{
	//     	// AR4,AK47,Pistol Data를 입력
	//     protected:
	//     	UPROPERTY(EditDefaultsOnly, Category = "Equip")
	//     		FName  HolsterSocketName;           // 무기를 장착할 Socket명
	//     	UPROPERTY(EditDefaultsOnly, Category = "Equip")
	//     		class  UAnimMontage* EquipMontage;  // Play할 몽타쥬
	//     	UPROPERTY(EditDefaultsOnly, Category = "Equip")
	//     		float  EquipMontage_PlayRate = 1.0f; // 몽타쥬플레이시간
	//     	UPROPERTY(EditDefaultsOnly, Category = "Equip")
	//     		FName  RightHandSocketName;          // Equip  Socket명
		HolsterSocketName = "Rifle_AR4_Holster";
		RightHandSocketName = "Rifle_AR4_RightHand";  // 2번키가 눌려지면 무기위치 변경될 소켓
		CHelpers::GetAsset<UAnimMontage>(&EquipMontage, "AnimMontage'/Game/Character/Montages/Rifle_Equip_AR4_Montage.Rifle_Equip_AR4_Montage'");
		EquipMontage_PlayRate = 1.5f;
	}

	// Aim관련된 정보
	{
		BaseData.TargetArmLength = 200;
		BaseData.SocketOffset = FVector(0, 50, 15);
		BaseData.FieldOfView = 90;

		AimData.TargetArmLength = 80;
		AimData.SocketOffset = FVector(0, 55, 10);
		AimData.FieldOfView = 65;

		LeftHandLocation = FVector(-32.5f, 15.5f, 7.0f);

	}

	// Fire
	{
		RecoilAngle = 0.75f;
		RecoilRate = 0.05f;
		SpreadSpeed = 2.0f;
		MaxSpreadAlignment = 2.0f;
		AutoFireInterval = 0.15f;
		CHelpers::GetClass<UMatineeCameraShake>(&CameraShakeClass, "Blueprint'/Game/Weapons/BP_CameraShake-_AR4.BP_CameraShake-_AR4_C'");

	}
	// 메가진
	{
		MaxMagazineCount = 30;
		CHelpers::GetAsset<UAnimMontage>(&ReloadMontage, "AnimMontage'/Game/Character/Montages/Rifle_Reload_Montage.Rifle_Reload_Montage'");
		ReloadMontage_PlayRate = 1.5f;
		this->MagazineBoneName = "b_gun_mag";
		this->MagazineSocketName = "Rifle_Magazine";
		CHelpers::GetClass<ACMagazine>(&MagazineClass, "Blueprint'/Game/Weapons/BP_CMagazine_AR4.BP_CMagazine_AR4_C'");
	}
}