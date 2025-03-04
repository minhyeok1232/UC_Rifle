// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/CWeapon.h"
#include "CWeapon_AK47.generated.h"

/**
 * 
 */
UCLASS()
class UC_RIFLE_API ACWeapon_AK47 : public ACWeapon
{
	GENERATED_BODY()
	
private:
	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* Sight;
	UPROPERTY(EditDefaultsOnly, Category = "Equip")
		FName LeftHandSocketName;
public:
	ACWeapon_AK47();
public:
	void  Begin_Equip() override;
	void  End_Equip()   override;

	void  Begin_Aim()   override;
	void  End_Aim()     override;

};
