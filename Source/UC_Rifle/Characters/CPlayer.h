// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CPlayer.generated.h"

UCLASS()
class UC_RIFLE_API ACPlayer : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere)
		class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere)
		class UCameraComponent* Camera;

private:
	UPROPERTY(VisibleAnywhere)
		class UCWeaponComponent* Weapon;
private:
	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* Backpack;
private:
	UPROPERTY(VisibleAnywhere)
		class USkeletalMeshComponent* Arms;


public:
	ACPlayer();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:  // 이벤트디스페쳐(델리게이터) --> 접두사 On
	void  OnMoveForward(float InAxisValue);
	void  OnMoveRight(float InAxisValue);
	void  OnHorizontalLook(float InAxisValue);
	void  OnVerticalLook(float InAxisValue);

	void  OnRun();
	void  OffRun();

public:
	UFUNCTION(BlueprintImplementableEvent)
	void Test();

public:
	FORCEINLINE  class  UStaticMeshComponent* GetBackpack() { return Backpack; }
	FORCEINLINE  class  USkeletalMeshComponent* GetArms()   { return Arms; }

};
