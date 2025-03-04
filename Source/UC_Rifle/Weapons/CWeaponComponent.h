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

// ���������� ����
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponTypeChanged, EWeaponType, InPrevType, EWeaponType, InNewType);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponAim_Arms_Begin, class ACWeapon*, InThisWeapon);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWeaponAim_Arms_End);

//UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
// �����󿡼� ������Ʋ Spaw���� ���ϰ� �ϱ�

UCLASS(ClassGroup =(Weapon))
class UC_RIFLE_API UCWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	//UPROPERTY(VisibleAnywhere, Category = "Settings")
	UPROPERTY(EditAnywhere, Category = "Settings")  // ActorComponent���� Visible�� ���� ����ƿ
		TArray<TSubclassOf<class ACWeapon>> WeaponClasses;
	UPROPERTY(EditAnywhere, Category = "Settings")  // ActorComponent���� Visible�� ���� ����ƿ
		TSubclassOf<class UCUserWidget_HUD> HUDClass;

public:  //�����������Լ�
	UFUNCTION()
		void OnAim_Arms_Begin(class ACWeapon* InThisWeapon); // AIM��     1��Ī���� ���Ҷ� ���� ���������
	UFUNCTION()
		void OnAim_Arms_End();// AIM������ 3��Ī���� ���Ҷ� ���� ���̱�����
 

public:
	UCWeaponComponent();

protected:
	virtual void BeginPlay() override;
public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


public:    // Player�� Ű���� �Է½� ����
	void   SetUnarmedMode();
	void   SetAR4Mode();
	void   SetAK47Mode();
	void   SetPistolMode();
private:   // ������������ ����κ�
	void   SetMode(EWeaponType InType);
	void   ChangeType(EWeaponType InType);
public:    // AnimationNotifyState_Equip���� �ҷ����� �Լ�
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
	FTransform  GetArmsLeftHandTransform(); // Arms���� �Լ�
public:
	void   ToggleAutoFire();

// �������Լ�  : CAnimnotify_Reload()���� ȣ��Ǵ� �Լ�
public:
	void	Eject_Magazine();
	void	Spawn_Magazine();
	void	Load_Magazine();
	void	End_Reload();



private:
	class  ACWeapon* GetCurrentWeapon();


public: // �����Ծ� ����
	FWeaponTypeChanged      OnWeaponTypeChanged;        // Player,AnimInstance
	FWeaponAim_Arms_Begin   OnWeaponAim_Arms_Begin;     // AIM��     1��Ī���� ���Ҷ� ���� ���������
	FWeaponAim_Arms_End     OnWeaponAim_Arms_End;       // AIM������ 3��Ī���� ���Ҷ� ���� ���̱�����


private:
	EWeaponType Type = EWeaponType::Max;

private:
	class ACPlayer* OwnerCharacter;    // �÷��̾� ����
	TArray<class ACWeapon*>  Weapons;  // Weapon Spawn�� �����ϴ� ����
	class UCUserWidget_HUD*   HUD;     // HUD Spawn�� �����ϴ� ����


public:  // inline�Լ�  : _inline, __inline(������)
	FORCEINLINE bool IsUnarmedMode() { return Type == EWeaponType::Max; }
	FORCEINLINE bool IsAR4Mode()     { return Type == EWeaponType::AR4; }
	FORCEINLINE bool IsAK47Mode()    { return Type == EWeaponType::AK47; }
	FORCEINLINE bool IsPistolMode()  { return Type == EWeaponType::Pistol; }
	
		
};
