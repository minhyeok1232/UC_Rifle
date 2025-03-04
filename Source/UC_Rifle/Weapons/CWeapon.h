// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CWeapon.generated.h"

// Aim�� �ϱ����� ����ü ���� : ���,����Լ�
USTRUCT(BlueprintType)
struct FWeaponAimData
{
	GENERATED_BODY()

public: // �����Ϳ��� ���氡���ϵ��� ����ȭ
	UPROPERTY(EditAnywhere)
		float  TargetArmLength;
	UPROPERTY(EditAnywhere)
		FVector  SocketOffset;
	UPROPERTY(EditAnywhere)
		float  FieldOfView;

public:
	void SetData(class ACharacter* InOwner);             // ����ī�޶��� �����͸� Setting
	void SetDataByNoneCurve(class ACharacter* InOwner);  // Curve��� ���� ����ī�޶��� �����͸� Setting
};




// �𸮾󿡼��� �߻�Ŭ������ �̷��� ����, Ư¡�� ��ġ�ȵ�(Spawn == Instance )
// �Ϲ�C++���� �߻�Ŭ���� Instanceȭ �ȵ� : virtual void A() = 0;
UCLASS(Abstract)  
class UC_RIFLE_API ACWeapon : public AActor
{
	GENERATED_BODY()


// ���� ������Ʈ
private:
	UPROPERTY(VisibleAnywhere)
		class USceneComponent* Root;
protected: 
	UPROPERTY(VisibleAnywhere)
		class USkeletalMeshComponent* Mesh; // �ڽĿ��� ����
protected:
	UPROPERTY(VisibleAnywhere)
		class UTimelineComponent* Timeline; // �ڽĿ��� ����


// AR4,AK47,Pistol Data�� �Է�
protected:  
	UPROPERTY(EditDefaultsOnly, Category = "Equip")
		FName  HolsterSocketName;           // ���⸦ ������ Socket��
	UPROPERTY(EditDefaultsOnly, Category = "Equip")
		class  UAnimMontage* EquipMontage;  // Play�� ��Ÿ��
	UPROPERTY(EditDefaultsOnly, Category = "Equip")
		float  EquipMontage_PlayRate = 1.0f; // ��Ÿ���÷��̽ð�
	UPROPERTY(EditDefaultsOnly, Category = "Equip")
		FName  RightHandSocketName;          // Equip  Socket��

// Aim���� 
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Aim")
		FWeaponAimData  AimData;           // Aim���� ����� ������
	UPROPERTY(EditDefaultsOnly, Category = "Aim")
		FWeaponAimData  BaseData;           // Aim�� ������ ������
	UPROPERTY(EditDefaultsOnly, Category = "Aim")
		class  UCurveFloat*    AimCurve;    // ������ Curve����� Assign : 1-0
	UPROPERTY(EditDefaultsOnly, Category = "Aim")
		float AimSpeed = 200;               // Curve���°� ����
	UPROPERTY(EditDefaultsOnly, Category = "Aim")
		FVector LeftHandLocation;            // FABRIK���� ��� ��


// Hit����
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Hit")
		class  UMaterialInstanceConstant* HitDecal;  // ź���� ��Į�� �̿��Ͽ� ������
	UPROPERTY(EditDefaultsOnly, Category = "Hit")
		float  HitDistance = 3000.0f;               // camera -> 3000 ���������� Hit
	UPROPERTY(EditDefaultsOnly, Category = "Hit")
		class  UParticleSystem* HitParticle;

// Fire����
 protected:		
	UPROPERTY(EditDefaultsOnly, Category = "Fire")
		float       RecoilAngle; // ���� �ݵ����� 
	UPROPERTY(EditDefaultsOnly, Category = "Fire")
		float       RecoilRate;
	// ���ذ��� UI�� �ڵ鸵 �ϱ� ���� ����
	UPROPERTY(EditDefaultsOnly, Category = "Fire")
		float       SpreadSpeed;
	UPROPERTY(EditDefaultsOnly, Category = "Fire")
		float       MaxSpreadAlignment;
// Fire���� 
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Fire")
		class  UParticleSystem* FlashParticle;
	UPROPERTY(EditDefaultsOnly, Category = "Fire")
		class  UParticleSystem* EjectParticle;
	UPROPERTY(EditDefaultsOnly, Category = "Fire")
		class  USoundWave* FireSound;

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Fire")
		TSubclassOf<class UMatineeCameraShake> CameraShakeClass;
	UPROPERTY(EditDefaultsOnly, Category = "Fire")
		float       AutoFireInterval = 0.15f; // Auto�� Time
	UPROPERTY(EditDefaultsOnly, Category = "Fire")
		TSubclassOf<class ACBullet> BulletClass;

// �ް��� ���� 
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Magazine")
		uint8 MaxMagazineCount;

	UPROPERTY(EditDefaultsOnly, Category = "Magazine")
		class UAnimMontage* ReloadMontage;    // ���������

	UPROPERTY(EditDefaultsOnly, Category = "Magazine")
		float  ReloadMontage_PlayRate;    // ���������

	UPROPERTY(EditDefaultsOnly, Category = "Magazine")
		FName  MagazineBoneName;

	UPROPERTY(EditDefaultsOnly, Category = "Magazine")
		FName  MagazineSocketName;

   UPROPERTY(EditDefaultsOnly, Category = "Magazine")
   	   TSubclassOf<class ACMagazine>      MagazineClass;

// UI����
protected: // UI
	UPROPERTY(EditDefaultsOnly, Category = "UI")
		TSubclassOf<class UCUserWidget_CrossHair> CrossHairClass;

// Arms����  IK��
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Arms")
		FTransform ArmsLeftHandTransform;
	UPROPERTY(EditDefaultsOnly, Category = "Arms")
		FTransform ArmsMeshTransform;
public:
	ACWeapon();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public: // Equip
	bool CanEquip();              // ���⸦ �����Ҽ� �ִ°�?
	void Equip();

	virtual void Begin_Equip();   // ��ӹ��������� ó��  : AR4,AK47,Pistol
	virtual void End_Equip();     // ��ӹ��������� ó��
public: // UnEquip
	bool CanUnequip();
	virtual void Unequip();

public: // Fire
	bool           CanFire();
	void           Beign_Fire();
	void           End_Fire();
	void           ToggleAutoFire();
public: // Fire : Ÿ�̸Ӹ� ����ϱ� ���� �۷�ȭ
	UFUNCTION()
		void       OnFiring();
private:
	FTimerHandle   AutoFireHandle;

// Aim���� �Լ�
public: 
	bool CanAim();
	virtual void Begin_Aim();
	virtual void End_Aim();
public: // Timeline��  �����ϱ����� ����ȭ
	UFUNCTION()
		void       OnAiming(float Output);

// �������Լ�
public:
	bool CanReload();  
	void Reload();
// �������Լ�  : CAnimnotify_Reload()���� ȣ��Ǵ� �Լ�
public:
	void Eject_Magazine();
	void Spawn_Magazine();
	void Load_Magazine();
	void End_Reload();


protected:
	class ACPlayer* Owner;
protected:
	class UCUserWidget_CrossHair* CrossHair;
	class ACMagazine* Magazine;
	float CurrSpreadRadius = 0.0f;
	float LastAddSpreadTime = 0.0f;
protected:
	uint8 CurrMagazineCount = 0;


private:
	bool  bEquipping = false;   // ������(T), �����Ϸ�(F)
	bool  bInAim     = false;   // ����
	bool  bFiring    = false;   // �߻�
	bool  bReload    = false;   // ������ 
	bool  bAutoFire  = true;    // �ڵ��߻�
public:
// inline�Լ� : �� ���� ����  
	FORCEINLINE  bool IsInAim()    { return bInAim; }
	FORCEINLINE  bool IsFiring()   { return bFiring; }     
	FORCEINLINE  bool IsAutoFire() { return bAutoFire; }    
	FORCEINLINE  FVector           GetLeftHandLocation() { return LeftHandLocation; }
	FORCEINLINE  FTransform        GetArmsLeftHandTransform() { return ArmsLeftHandTransform; }

	FORCEINLINE  uint8  GetCurrMagazineCount() { return CurrMagazineCount; }
	FORCEINLINE  uint8  GetMaxMagazineCount()  { return MaxMagazineCount; }

};
