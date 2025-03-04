// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Weapons/CWeaponComponent.h"
#include "CAnimInstance_Arms.generated.h"

/**
 * 
 */
UCLASS()
class UC_RIFLE_API UCAnimInstance_Arms : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Weapons")
		EWeaponType WeaponType = EWeaponType::Max;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Weapons")
		FTransform ArmsLeftHandTransform; // 왼손의 Offset값 ( Reaching)

	/** Executed when begin play is called on the owning component */
	//  UFUNCTION(BlueprintImplementableEvent)
	//	void BlueprintBeginPlay();
public: // C++에서 함수를 만들고, 블프함수 만듬:  C++에서 만든것을 override
	void NativeBeginPlay() override;
	void NativeUpdateAnimation(float DeltaSeconds) override;
private: // 델리게이터를 바인딩하려면 Argument동일
	UFUNCTION()
		void OnWeaponTypeChanged(EWeaponType InPrevType, EWeaponType InNewType);
private: // 직렬화(X)
	class ACPlayer* OwnerCharacter;
	class UCWeaponComponent* Weapon;
};
