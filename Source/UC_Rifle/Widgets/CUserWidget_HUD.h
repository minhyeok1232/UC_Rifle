// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CUserWidget_HUD.generated.h"

/**
 *  Weapon,WeaponComponent
 * 
 */
UCLASS()
class UC_RIFLE_API UCUserWidget_HUD : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintImplementableEvent) // C에서 가상함수 만들로 B/P알아서 쓰세요
		void OnAutoFire();
	UFUNCTION(BlueprintImplementableEvent)
		void OffAutoFire();

public:
	UFUNCTION(BlueprintImplementableEvent)
		void UpdateMagzine(uint8 InCurr, uint8 InMax);
	UFUNCTION(BlueprintImplementableEvent)
		void UpdateWeaponType(EWeaponType InType);
	UFUNCTION(BlueprintImplementableEvent)
		void UpdatNoWeapon();


};
