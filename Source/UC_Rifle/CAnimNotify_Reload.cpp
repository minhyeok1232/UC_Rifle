// Fill out your copyright notice in the Description page of Project Settings.


#include "CAnimNotify_Reload.h"
#include  "Global.h"
#include "Weapons/CWeaponComponent.h"
FString UCAnimNotify_Reload::GetNotifyName_Implementation() const
{
	return "Reload";
}
void UCAnimNotify_Reload::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);

	CheckNull(MeshComp);
	CheckNull(MeshComp->GetOwner());
	UCWeaponComponent* weapon = CHelpers::GetComponent<UCWeaponComponent>(MeshComp->GetOwner());
	CheckNull(weapon);

	switch (ActionType)
	{
	case ERoadActionType::Eject:   weapon->Eject_Magazine(); break;
	case ERoadActionType::Spawn:   weapon->Spawn_Magazine(); break;
	case ERoadActionType::Load:    weapon->Load_Magazine();  break;
	case ERoadActionType::End:     weapon->End_Reload();     break;
	}

}
