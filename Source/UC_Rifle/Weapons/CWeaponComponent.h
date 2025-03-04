// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CWeaponComponent.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	AR4,AK47,Pistol,Max
};

// 델리게이터 선언
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponTypeChanged, EWeaponType, InPrevType, EWeaponType, InNewType);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponAim_Arms_Begin, class ACWeapon*, InThisWeapon);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWeaponAim_Arms_End);

//UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
// 블프상에서 컴포넌틀 Spaw하지 못하게 하기

UCLASS(ClassGroup =(Weapon))
class UC_RIFLE_API UCWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	//UPROPERTY(VisibleAnywhere, Category = "Settings")
	UPROPERTY(EditAnywhere, Category = "Settings")  // ActorComponent에서 Visible을 쓰면 에디틸
		TArray<TSubclassOf<class ACWeapon>> WeaponClasses;
	UPROPERTY(EditAnywhere, Category = "Settings")  // ActorComponent에서 Visible을 쓰면 에디틸
		TSubclassOf<class UCUserWidget_HUD> HUDClass;

public:  //델리게이터함수
	UFUNCTION()
		void OnAim_Arms_Begin(class ACWeapon* InThisWeapon); // AIM시     1인칭으로 변할때 무기 숨기기위해
	UFUNCTION()
		void OnAim_Arms_End();// AIM종료후 3인칭으로 변할때 무기 보이기위해
 

public:
	UCWeaponComponent();

protected:
	virtual void BeginPlay() override;
public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


public:    // Player에 키보드 입력시 연결
	void   SetUnarmedMode();
	void   SetAR4Mode();
	void   SetAK47Mode();
	void   SetPistolMode();
private:   // 무기장착시의 공통부분
	void   SetMode(EWeaponType InType);
	void   ChangeType(EWeaponType InType);
public:    // AnimationNotifyState_Equip에서 불려지는 함수
	void   Begin_Equip();
	void   End_Equip();

public:
	void   Begin_Fire();
	void   End_Fire();
	bool   IsFiring();

public:   // Aiming
	void   Begin_Aim();
	void   End_Aim();
	bool   IsInAim();
	FVector GetLeftHandLocation();
	FTransform  GetArmsLeftHandTransform(); // Arms관련 함수
public:
	void   ToggleAutoFire();

// 재장전함수  : CAnimnotify_Reload()에서 호출되는 함수
public:
	void	Eject_Magazine();
	void	Spawn_Magazine();
	void	Load_Magazine();
	void	End_Reload();



private:
	class  ACWeapon* GetCurrentWeapon();


public: // 델리게어 선언
	FWeaponTypeChanged      OnWeaponTypeChanged;        // Player,AnimInstance
	FWeaponAim_Arms_Begin   OnWeaponAim_Arms_Begin;     // AIM시     1인칭으로 변할때 무기 숨기기위해
	FWeaponAim_Arms_End     OnWeaponAim_Arms_End;       // AIM종료후 3인칭으로 변할때 무기 보이기위해


private:
	EWeaponType Type = EWeaponType::Max;

private:
	class ACPlayer* OwnerCharacter;    // 플레이어 변수
	TArray<class ACWeapon*>  Weapons;  // Weapon Spawn후 저장하는 변수
	class UCUserWidget_HUD*   HUD;     // HUD Spawn후 저장하는 변수


public:  // inline함수  : _inline, __inline(무조건)
	FORCEINLINE bool IsUnarmedMode() { return Type == EWeaponType::Max; }
	FORCEINLINE bool IsAR4Mode()     { return Type == EWeaponType::AR4; }
	FORCEINLINE bool IsAK47Mode()    { return Type == EWeaponType::AK47; }
	FORCEINLINE bool IsPistolMode()  { return Type == EWeaponType::Pistol; }
	
		
};
