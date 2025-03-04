#include "Weapons/CWeapon_Pistol.h"
#include  "Global.h"
#include  "Animation/AnimMontage.h"
#include  "Camera/CameraShake.h"
#include  "Components/SkeletalMeshComponent.h"
#include "Widgets/CUserWidget_CrossHair.h"
#include "Weapons/CMagazine.h"
#include "Characters/CPlayer.h"
#include "Weapons/CWeaponComponent.h"


ACWeapon_Pistol::ACWeapon_Pistol()
{
	// Root,Mesh만들어진 상태이므로 해당되는 애셋만 Assign

	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/MilitaryWeapSilver/Weapons/Pistols_A.Pistols_A'");
	Mesh->SetSkeletalMesh(mesh);

	// Equip
	{
		HolsterSocketName = "NAME_None";
		RightHandSocketName = "Pistol_RightHand";  // 2번키가 눌려지면 무기위치 변경될 소켓
		CHelpers::GetAsset<UAnimMontage>(&EquipMontage, "AnimMontage'/Game/Character/Montages/Pistol_Equip_Montage.Pistol_Equip_Montage'");
		EquipMontage_PlayRate = 1.5f;
	}

	// Aim관련된 정보
	{
		BaseData.TargetArmLength = 200;
		BaseData.SocketOffset = FVector(0, 50, 15);
		BaseData.FieldOfView = 90;

		AimData.TargetArmLength = 30;
		AimData.SocketOffset = FVector(-55, 0, 10);
		AimData.FieldOfView = 55;

		LeftHandLocation = FVector(0.0f, 12.5f, 0.0f);

	}

	// Fire
	{
		RecoilAngle = 1.5f;
		RecoilRate = 0.08f;
		SpreadSpeed = 8.0f;
		MaxSpreadAlignment = 2.0f;
		AutoFireInterval = 1.5f;
		// 수정
		CHelpers::GetClass<UMatineeCameraShake>(&CameraShakeClass, "Blueprint'/Game/Weapons/BP_CameraShake-_AR4.BP_CameraShake-_AR4_C'");

	}
	// 메가진
	{
		MaxMagazineCount = 5;
		CHelpers::GetAsset<UAnimMontage>(&ReloadMontage, "AnimMontage'/Game/Character/Montages/Pistol_Reload_Montage.Pistol_Reload_Montage'");
		ReloadMontage_PlayRate = 1.5f;
		this->MagazineBoneName = "b_gun_mag";
		this->MagazineSocketName = "Pistol_Magazine";
		// 수정
		CHelpers::GetClass<ACMagazine>(&MagazineClass, "Blueprint'/Game/Weapons/BP_CMagazine_Pistol.BP_CMagazine_Pistol_C'");
	}
	//Arms
	{
		ArmsMeshTransform.SetLocation(FVector(0, 5.1f, -156.6));
		ArmsMeshTransform.SetRotation(FQuat(FRotator(0, -4.8f, 0)));

		ArmsLeftHandTransform.SetLocation(FVector(0, 11, 0));
		ArmsLeftHandTransform.SetRotation(FQuat(FRotator(0, 180, 180)));

	}
}
void ACWeapon_Pistol::BeginPlay()
{
	Super::BeginPlay();
	Mesh->SetVisibility(false);
}

void ACWeapon_Pistol::Begin_Equip()
{
	LeftHandLocation = FVector(0.0f, 12.5f, 0.0f);
	Super::Begin_Equip();
	Mesh->SetVisibility(true);
	Owner->GetArms()->SetRelativeTransform(ArmsMeshTransform);
}

void ACWeapon_Pistol::Begin_Aim()
{
	Super::Begin_Aim();

	ArmsMeshTransform.SetLocation(FVector(0, 5.1f, -156.6));
	ArmsMeshTransform.SetRotation(FQuat(FRotator(0, -4.8f, 0)));

	ArmsLeftHandTransform.SetLocation(FVector(0, 11, 0));
	ArmsLeftHandTransform.SetRotation(FQuat(FRotator(0, 180, 180)));



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

void ACWeapon_Pistol::End_Aim()
{
	Super::End_Aim();
	if (!!CrossHair)
		CrossHair->SetVisibility(ESlateVisibility::Visible);

	Owner->GetMesh()->SetVisibility(true);
	Owner->GetBackpack()->SetVisibility(true);
	Owner->GetArms()->SetVisibility(false);

	CHelpers::AttachTo(this, Owner->GetMesh(), RightHandSocketName);


	UCWeaponComponent* wc = CHelpers::GetComponent<UCWeaponComponent>(Owner);
	CheckNull(wc);
	wc->OnWeaponAim_Arms_End.Broadcast();
}
