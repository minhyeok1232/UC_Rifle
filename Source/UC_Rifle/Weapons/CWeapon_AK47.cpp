// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/CWeapon_AK47.h"
#include  "Global.h"
#include  "Animation/AnimMontage.h"
#include  "Camera/CameraShake.h"
#include  "Components/SkeletalMeshComponent.h"
#include "Widgets/CUserWidget_CrossHair.h"
#include "Weapons/CMagazine.h"
#include "Characters/CPlayer.h"
#include "Weapons/CWeaponComponent.h"

ACWeapon_AK47::ACWeapon_AK47()
{

	// Root,Mesh만들어진 상태이므로 해당되는 애셋만 Assign

	{
		USkeletalMesh* mesh;
		CHelpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/FPS_Weapon_Bundle/Weapons/Meshes/Ka47/SK_KA47.SK_KA47'");
		Mesh->SetSkeletalMesh(mesh);
	}

	{
		CHelpers::CreateComponent<UStaticMeshComponent>(this, &Sight, "Sight", Mesh, "DotSight");
		
		UStaticMesh* staticMesh;

		CHelpers::GetAsset<UStaticMesh>(&staticMesh, "StaticMesh'/Game/FPS_Weapon_Bundle/Weapons/Meshes/Accessories/SM_T4_Sight.SM_T4_Sight'");
		Sight->SetStaticMesh(staticMesh);
		Sight->SetRelativeScale3D(FVector(1, 0.95f, 1));
		Sight->SetCollisionProfileName("NoCollision");
	}



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
		HolsterSocketName = "Rifle_AK47_Holster";
		CHelpers::GetAsset<UAnimMontage>(&EquipMontage, "AnimMontage'/Game/Character/Montages/Rifle_Equip_AK47_Montage.Rifle_Equip_AK47_Montage'");
		EquipMontage_PlayRate = 1.5f;
		RightHandSocketName = "Rifle_AK47_RightHand";
		LeftHandSocketName = "Rifle_AK47_LeftHand";   // 추가
	}

	// Aim관련된 정보
	{
		BaseData.TargetArmLength = 100;
		BaseData.SocketOffset = FVector(0, 50, 15);
		BaseData.FieldOfView = 90;

		AimData.TargetArmLength = 30;
		AimData.SocketOffset = FVector(-55, 0, 10);
		AimData.FieldOfView = 55;

		LeftHandLocation = FVector(-35.0f, 15.5f, 4.0f); // IK

	}

	// Fire
	{
		RecoilAngle = 0.75f;
		RecoilRate = 0.05f;
		SpreadSpeed = 2.0f;
		MaxSpreadAlignment = 2.0f;
		AutoFireInterval = 0.175f;
		CHelpers::GetClass<UMatineeCameraShake>(&CameraShakeClass, "Blueprint'/Game/Weapons/BP_CameraShake-_AK47.BP_CameraShake-_AK47_C'");

	}
	// 메가진
	{
		MaxMagazineCount = 30;
		CHelpers::GetAsset<UAnimMontage>(&ReloadMontage, "AnimMontage'/Game/Character/Montages/Rifle_Reload_Montage.Rifle_Reload_Montage'");
		ReloadMontage_PlayRate = 1.5f;
		this->MagazineBoneName = "b_gun_mag";
		this->MagazineSocketName = "Rifle_Magazine";
		CHelpers::GetClass<ACMagazine>(&MagazineClass, "Blueprint'/Game/Weapons/BP_CMagazine_AK47.BP_CMagazine_AK47_C'");
	}


}
// 왼손을 이용하여 Equip
void ACWeapon_AK47::Begin_Equip()
{
	if (LeftHandSocketName.IsValid())
		CHelpers::AttachTo(this, Owner->GetMesh(), LeftHandSocketName);
}

void ACWeapon_AK47::End_Equip()
{
//	bEquipping = false;                  --> Super::End_Equip();
//	if (RightHandSocketName.IsValid())   --> Super::Begin_Equip();
//		CHelpers::AttachTo(this, Owner->GetMesh(), RightHandSocketName);

	Super::Begin_Equip();
	Super::End_Equip();
}

void ACWeapon_AK47::Begin_Aim()
{
	Super::Begin_Aim();
	if (!!CrossHair)
		CrossHair->SetVisibility(ESlateVisibility::Hidden);
	Owner->GetMesh()->SetVisibility(false);
	Owner->GetArms()->SetVisibility(true);
	Owner->GetBackpack()->SetVisibility(false);
	CHelpers::AttachTo(this, Owner->GetArms(), RightHandSocketName);

	UCWeaponComponent* wc = CHelpers::GetComponent<UCWeaponComponent>(Owner);
	CheckNull(wc);
	wc->OnWeaponAim_Arms_Begin.Broadcast(this);
}

void ACWeapon_AK47::End_Aim()
{
	Super::End_Aim();
	if (!!CrossHair)
		CrossHair->SetVisibility(ESlateVisibility::Visible);
	
	Owner->GetMesh()->SetVisibility(true);
	Owner->GetArms()->SetVisibility(false);
	Owner->GetBackpack()->SetVisibility(true);

	CHelpers::AttachTo(this, Owner->GetMesh(), RightHandSocketName);


	UCWeaponComponent* wc = CHelpers::GetComponent<UCWeaponComponent>(Owner);
	CheckNull(wc);
	wc->OnWeaponAim_Arms_End.Broadcast();
}
