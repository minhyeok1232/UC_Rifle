// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Weapons/CWeaponComponent.h"
#include "CAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class UC_RIFLE_API UCAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		float Speed;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		float Direction;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		float Pitch;

protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Weapons")
		EWeaponType WeaponType = EWeaponType::Max;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Weapons")
		bool bInAim = false;     // ���� Aim������?
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Weapons")
		bool bFiring = false;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Weapons")
		bool bUseHandIK = false;  // FABRIK : Forward and Backword Reaching Inverse Kinematic ����?
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Weapons")
		FVector LeftHandLocation; // �޼��� Offset�� ( Reaching)

	/** Executed when begin play is called on the owning component */
	//  UFUNCTION(BlueprintImplementableEvent)
	//	void BlueprintBeginPlay();
public: // C++���� �Լ��� �����, �����Լ� ����:  C++���� ������� override
	void NativeBeginPlay() override;
	void NativeUpdateAnimation(float DeltaSeconds) override;
private: // ���������͸� ���ε��Ϸ��� Argument����
	UFUNCTION()
		void OnWeaponTypeChanged(EWeaponType InPrevType, EWeaponType InNewType);
private: // ����ȭ(X)
	class ACPlayer* OwnerCharacter;
	class UCWeaponComponent* Weapon;
};
