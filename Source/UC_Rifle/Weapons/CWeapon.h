// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CWeapon.generated.h"

// Aim을 하기위해 구조체 선언 : 멤버,멤버함수
USTRUCT(BlueprintType)
struct FWeaponAimData
{
	GENERATED_BODY()

public: // 에디터에서 변경가능하도록 직렬화
	UPROPERTY(EditAnywhere)
		float  TargetArmLength;
	UPROPERTY(EditAnywhere)
		FVector  SocketOffset;
	UPROPERTY(EditAnywhere)
		float  FieldOfView;

public:
	void SetData(class ACharacter* InOwner);             // 현재카메라의 데이터를 Setting
	void SetDataByNoneCurve(class ACharacter* InOwner);  // Curve사용 없이 현재카메라의 데이터를 Setting
};




// 언리얼에서는 추상클래스를 이렇게 선언, 특징은 배치안됨(Spawn == Instance )
// 일반C++에서 추상클래스 Instance화 안됨 : virtual void A() = 0;
UCLASS(Abstract)  
class UC_RIFLE_API ACWeapon : public AActor
{
	GENERATED_BODY()


// 공통 컴포넌트
private:
	UPROPERTY(VisibleAnywhere)
		class USceneComponent* Root;
protected: 
	UPROPERTY(VisibleAnywhere)
		class USkeletalMeshComponent* Mesh; // 자식에서 수정
protected:
	UPROPERTY(VisibleAnywhere)
		class UTimelineComponent* Timeline; // 자식에서 수정


// AR4,AK47,Pistol Data를 입력
protected:  
	UPROPERTY(EditDefaultsOnly, Category = "Equip")
		FName  HolsterSocketName;           // 무기를 장착할 Socket명
	UPROPERTY(EditDefaultsOnly, Category = "Equip")
		class  UAnimMontage* EquipMontage;  // Play할 몽타쥬
	UPROPERTY(EditDefaultsOnly, Category = "Equip")
		float  EquipMontage_PlayRate = 1.0f; // 몽타쥬플레이시간
	UPROPERTY(EditDefaultsOnly, Category = "Equip")
		FName  RightHandSocketName;          // Equip  Socket명

// Aim관련 
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Aim")
		FWeaponAimData  AimData;           // Aim시의 사용할 데이터
	UPROPERTY(EditDefaultsOnly, Category = "Aim")
		FWeaponAimData  BaseData;           // Aim이 끝난후 데이터
	UPROPERTY(EditDefaultsOnly, Category = "Aim")
		class  UCurveFloat*    AimCurve;    // 블프에 Curve만들고 Assign : 1-0
	UPROPERTY(EditDefaultsOnly, Category = "Aim")
		float AimSpeed = 200;               // Curve나온값 배율
	UPROPERTY(EditDefaultsOnly, Category = "Aim")
		FVector LeftHandLocation;            // FABRIK에서 사용 값


// Hit관련
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Hit")
		class  UMaterialInstanceConstant* HitDecal;  // 탄흔을 데칼을 이용하여 렌더링
	UPROPERTY(EditDefaultsOnly, Category = "Hit")
		float  HitDistance = 3000.0f;               // camera -> 3000 떨어진곳의 Hit
	UPROPERTY(EditDefaultsOnly, Category = "Hit")
		class  UParticleSystem* HitParticle;

// Fire관련
 protected:		
	UPROPERTY(EditDefaultsOnly, Category = "Fire")
		float       RecoilAngle; // 총의 반동관련 
	UPROPERTY(EditDefaultsOnly, Category = "Fire")
		float       RecoilRate;
	// 조준관련 UI를 핸들링 하기 위한 변수
	UPROPERTY(EditDefaultsOnly, Category = "Fire")
		float       SpreadSpeed;
	UPROPERTY(EditDefaultsOnly, Category = "Fire")
		float       MaxSpreadAlignment;
// Fire관련 
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
		float       AutoFireInterval = 0.15f; // Auto시 Time
	UPROPERTY(EditDefaultsOnly, Category = "Fire")
		TSubclassOf<class ACBullet> BulletClass;

// 메가진 관련 
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Magazine")
		uint8 MaxMagazineCount;

	UPROPERTY(EditDefaultsOnly, Category = "Magazine")
		class UAnimMontage* ReloadMontage;    // 재장전모습

	UPROPERTY(EditDefaultsOnly, Category = "Magazine")
		float  ReloadMontage_PlayRate;    // 재장전모습

	UPROPERTY(EditDefaultsOnly, Category = "Magazine")
		FName  MagazineBoneName;

	UPROPERTY(EditDefaultsOnly, Category = "Magazine")
		FName  MagazineSocketName;

   UPROPERTY(EditDefaultsOnly, Category = "Magazine")
   	   TSubclassOf<class ACMagazine>      MagazineClass;

// UI관련
protected: // UI
	UPROPERTY(EditDefaultsOnly, Category = "UI")
		TSubclassOf<class UCUserWidget_CrossHair> CrossHairClass;

// Arms관련  IK용
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
	bool CanEquip();              // 무기를 장착할수 있는가?
	void Equip();

	virtual void Begin_Equip();   // 상속받은곳에서 처리  : AR4,AK47,Pistol
	virtual void End_Equip();     // 상속받은곳에서 처리
public: // UnEquip
	bool CanUnequip();
	virtual void Unequip();

public: // Fire
	bool           CanFire();
	void           Beign_Fire();
	void           End_Fire();
	void           ToggleAutoFire();
public: // Fire : 타이머를 사용하기 위해 작렬화
	UFUNCTION()
		void       OnFiring();
private:
	FTimerHandle   AutoFireHandle;

// Aim관련 함수
public: 
	bool CanAim();
	virtual void Begin_Aim();
	virtual void End_Aim();
public: // Timeline을  동작하기위해 직렬화
	UFUNCTION()
		void       OnAiming(float Output);

// 재장전함수
public:
	bool CanReload();  
	void Reload();
// 재장전함수  : CAnimnotify_Reload()에서 호출되는 함수
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
	bool  bEquipping = false;   // 장착중(T), 장착완료(F)
	bool  bInAim     = false;   // 조준
	bool  bFiring    = false;   // 발사
	bool  bReload    = false;   // 재장전 
	bool  bAutoFire  = true;    // 자동발사
public:
// inline함수 : 용어를 배우기 위해  
	FORCEINLINE  bool IsInAim()    { return bInAim; }
	FORCEINLINE  bool IsFiring()   { return bFiring; }     
	FORCEINLINE  bool IsAutoFire() { return bAutoFire; }    
	FORCEINLINE  FVector           GetLeftHandLocation() { return LeftHandLocation; }
	FORCEINLINE  FTransform        GetArmsLeftHandTransform() { return ArmsLeftHandTransform; }

	FORCEINLINE  uint8  GetCurrMagazineCount() { return CurrMagazineCount; }
	FORCEINLINE  uint8  GetMaxMagazineCount()  { return MaxMagazineCount; }

};
