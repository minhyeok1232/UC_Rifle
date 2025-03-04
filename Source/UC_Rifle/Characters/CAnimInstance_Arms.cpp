// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/CAnimInstance_Arms.h"
#include "Global.h"
#include "Characters/CPlayer.h"

void UCAnimInstance_Arms::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	OwnerCharacter = Cast<ACPlayer>(TryGetPawnOwner());
	CheckNull(OwnerCharacter); // InGame,ABP
	Weapon = CHelpers::GetComponent<UCWeaponComponent>(OwnerCharacter); // InGame¿¡¼­ setting
	if (!!Weapon)
		Weapon->OnWeaponTypeChanged.AddDynamic(this, &UCAnimInstance_Arms::OnWeaponTypeChanged);
}

void UCAnimInstance_Arms::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	CheckNull(OwnerCharacter); // InGame,ABP
	ArmsLeftHandTransform = Weapon->GetArmsLeftHandTransform();
//	ArmsLeftHandTransform.SetLocation(FVector(0, 11, 0));
//	ArmsLeftHandTransform.SetRotation(FQuat(FRotator(0, 180, 180)));

}

void UCAnimInstance_Arms::OnWeaponTypeChanged(EWeaponType InPrevType, EWeaponType InNewType)
{
	WeaponType = InNewType;
}
