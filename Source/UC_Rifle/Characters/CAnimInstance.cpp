// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/CAnimInstance.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "CPlayer.h"
#include "Weapons/CWeaponComponent.h"

void UCAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	OwnerCharacter = Cast<ACPlayer>(TryGetPawnOwner());
	// TSubclassOf
	UActorComponent* comp = OwnerCharacter->GetComponentByClass(UCWeaponComponent::StaticClass());
	Weapon = Cast<UCWeaponComponent>(comp);
	if (!!Weapon)
		Weapon->OnWeaponTypeChanged.AddDynamic(this, &UCAnimInstance::OnWeaponTypeChanged);

}
// InGame, 애니메이션 블프에디터
void UCAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	CheckNull(OwnerCharacter);

	Speed     = OwnerCharacter->GetVelocity().Size2D();
	Direction = CalculateDirection(OwnerCharacter->GetVelocity(), OwnerCharacter->GetActorRotation());

	Pitch = UKismetMathLibrary::FInterpTo(Pitch, OwnerCharacter->GetBaseAimRotation().Pitch,
		DeltaSeconds, 25);


	bInAim = Weapon->IsInAim();
	LeftHandLocation = Weapon->GetLeftHandLocation();
	// IK가 가능한지 Check
	if(Weapon->IsUnarmedMode())
	   bUseHandIK = false;
	else
	   bUseHandIK = true;
}

void UCAnimInstance::OnWeaponTypeChanged(EWeaponType InPrevType, EWeaponType InNewType)
{
	WeaponType = InNewType;
	PrintLine();
}
