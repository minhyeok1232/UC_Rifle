// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/CWeapon.h"
#include  "Global.h"
#include  "Characters/CPlayer.h"
#include  "Components/SkeletalMeshComponent.h"
#include  "Components/DecalComponent.h"
#include  "Materials/MaterialInstanceConstant.h"
#include  "Camera/CameraComponent.h"
#include  "Gameframework/SpringArmComponent.h"      // 1<->
#include  "Components/TimelineComponent.h"
#include  "Curves/CurveFloat.h"
#include  "Particles/ParticleSystem.h"
#include  "Sound/SoundWave.h"
#include  "Widgets/CUserWidget_CrossHair.h"
#include  "Weapons/CBullet.h"
#include  "Weapons/CMagazine.h"


void FWeaponAimData::SetData(ACharacter* InOwner)
{
	USpringArmComponent* springArm = CHelpers::GetComponent<USpringArmComponent>(InOwner);
	springArm->TargetArmLength = TargetArmLength;
	springArm->SocketOffset = SocketOffset;
}

void FWeaponAimData::SetDataByNoneCurve(ACharacter* InOwner)
{
	USpringArmComponent* springArm = CHelpers::GetComponent<USpringArmComponent>(InOwner);
	springArm->TargetArmLength = TargetArmLength;
	springArm->SocketOffset = SocketOffset;

	UCameraComponent* camera = CHelpers::GetComponent<UCameraComponent>(InOwner);
	camera->FieldOfView = FieldOfView;



}
//////////////////////////////////////////////////////////////////////////////////




// Sets default values
ACWeapon::ACWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CHelpers::CreateComponent<USceneComponent>(this, &Root, "Root");
	CHelpers::CreateComponent<USkeletalMeshComponent>(this, &Mesh, "Mesh",Root);

	// Timeline
	CHelpers::CreateActorComponent<UTimelineComponent>(this, &Timeline, "Timeline");
	CHelpers::GetAsset<UCurveFloat>(&AimCurve, "CurveFloat'/Game/Weapons/Curve_Aim.Curve_Aim'");

	// �Ѿ�
	CHelpers::GetAsset<UMaterialInstanceConstant>(&HitDecal, "MaterialInstanceConstant'/Game/Materials/M_Decal_Inst.M_Decal_Inst'");
	CHelpers::GetAsset<UParticleSystem>(&HitParticle, "ParticleSystem'/Game/Effects/P_Impact_Default.P_Impact_Default'");
	CHelpers::GetAsset<UParticleSystem>(&EjectParticle, "ParticleSystem'/Game/Effects/P_Eject_bullet.P_Eject_bullet'");
	CHelpers::GetAsset<UParticleSystem>(&FlashParticle, "ParticleSystem'/Game/Effects/P_Muzzleflash.P_Muzzleflash'");
	CHelpers::GetAsset<USoundWave>(&FireSound, "SoundWave'/Game/Sounds/S_RifleShoot.S_RifleShoot'");
	CHelpers::GetClass<ACBullet>(&BulletClass, "Blueprint'/Game/Weapons/BP_CBullet.BP_CBullet_C'");
	// UI
	CHelpers::GetClass<UCUserWidget_CrossHair>(&CrossHairClass, "WidgetBlueprint'/Game/Widgets/WB_CrossHair.WB_CrossHair_C'");

	
}




// Called when the game starts or when spawned
void ACWeapon::BeginPlay()
{
	Super::BeginPlay();
	Owner = Cast<ACPlayer>(GetOwner()); // �ѹ��� Casting

	// ���⸶�� �ݺ����� �߻� : Pistol 60, AR4 90
	BaseData.SetDataByNoneCurve(Owner);

	// Weapon_AR4
	if (HolsterSocketName.IsValid())
		CHelpers::AttachTo(this, Owner->GetMesh(), HolsterSocketName);
	
	// Timeline�� CurveAsset ���ε�
	if (!!AimCurve)
	{
		FOnTimelineFloat timeline;
		timeline.BindUFunction(this, "OnAiming");      // OnAiming ����ȭ
		Timeline->AddInterpFloat(AimCurve, timeline);  // Asset & Bind����
		Timeline->SetLooping(false);                   // Timeline Activate off
		Timeline->SetPlayRate(AimSpeed);               // 200 * (0-20)
	}
	// UI�� ������ ��Ű��, AddViewPort(), SetVisibility
	if (!!CrossHairClass)
	{
	
	   // compoent,object 1���� ���ø��� �䱸
	   // AActor* actor = CreateDefaultSubobject<AActor>("Test");
		CrossHair = CreateWidget<UCUserWidget_CrossHair, APlayerController>(Owner->GetController<APlayerController>(), CrossHairClass);
		CrossHair->AddToViewport();
		CrossHair->SetVisibility(ESlateVisibility::Hidden);
		CrossHair->UpdateSpreadRange(CurrSpreadRadius, MaxSpreadAlignment);
	//	CrossHair->SetVisibility(ESlateVisibility::Visible);
	   // �������巹���� ����
	}
	CurrMagazineCount = MaxMagazineCount;

}

// Called every frame
void ACWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (LastAddSpreadTime >= 0.0f)
	{
		// �� 0.4�İ� �帣�� Cross_hair�� Alignment ����
		if ((GetWorld()->GetTimeSeconds() - LastAddSpreadTime) >= (AutoFireInterval + 0.25f))
		{
			CurrSpreadRadius   = 0.0f;
			LastAddSpreadTime  = 0.0f;
			if (!!CrossHair)
				CrossHair->UpdateSpreadRange(CurrSpreadRadius, MaxSpreadAlignment);

		}
	}

}

void ACWeapon::OnFiring()
{
	UCameraComponent* camera = CHelpers::GetComponent<UCameraComponent>(Owner);
	FVector direction = camera->GetForwardVector();
	FTransform transform = camera->GetComponentToWorld();  // ����󿡼� SRT

	FVector  start = transform.GetLocation() + direction;  // Gap�� ����
	FVector  end;
	
	direction = UKismetMathLibrary::RandomUnitVectorInConeInDegrees(direction, RecoilAngle);
	end = transform.GetLocation() + direction * HitDistance;


	// ź��,ź���� : LineTrace()??���� ������ Hit�� ǥ��
	// DrawDebugLine(GetWorld(), start, end, FColor::Red, true, 2);
	// ETraceTypeQuery:: --> ������Ʈ���� �������� : Visibilty(1),Camera(2),.......



	TArray<AActor*> ignores;
	ignores.Add(Owner);

	FHitResult hitResult;
	UKismetSystemLibrary::LineTraceSingle(GetWorld(), start, end, ETraceTypeQuery::TraceTypeQuery1, false, ignores, EDrawDebugTrace::None, hitResult, true);

	if (hitResult.bBlockingHit)
	{
		FRotator rotator = hitResult.ImpactNormal.Rotation(); // ǥ���� Normat�� �̿��Ͽ� rotation
		if (!!HitDecal)
		{
			UDecalComponent* decal;
			decal = UGameplayStatics::SpawnDecalAtLocation(GetWorld(), HitDecal, FVector(5),
				hitResult.Location, rotator, 4);
			decal->SetFadeScreenSize(0);  // Fade�̸� : �Ÿ������ ������
		}
		if (!!HitParticle)
		{
			FRotator impcatRotation = UKismetMathLibrary::FindLookAtRotation(hitResult.Location,
				hitResult.TraceStart);
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitParticle, hitResult.Location, impcatRotation);

		}
    }

	// ź�ǹ���
	if (!!EjectParticle)
	{
		UGameplayStatics::SpawnEmitterAttached(EjectParticle, Mesh, "Eject", FVector::ZeroVector,
			FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset);
	}
	// �ѱ� Effect
	if (!!FlashParticle)
	{
		UGameplayStatics::SpawnEmitterAttached(FlashParticle, Mesh, "Muzzle", FVector::ZeroVector,
			FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset);
	}

	// Sound
	if (!!FireSound)
	{
		FVector muzzleLocation = Mesh->GetSocketLocation("Muzzle");
		UGameplayStatics::SpawnSoundAtLocation(GetWorld(), FireSound, muzzleLocation);
	}

	// CameraShake�� run�ϸ� ��Ʈ�ѷ��� �ʿ���
	if (!!CameraShakeClass)
	{
		APlayerController* controller = Owner->GetController<APlayerController>();
		if (!!controller)
			controller->PlayerCameraManager->StartCameraShake(CameraShakeClass);

	}

	// �ݵ��ֱ� : -�� �ִ� ����: 
	Owner->AddControllerPitchInput(-RecoilRate * UKismetMathLibrary::RandomFloatInRange(0.8, 1.2));


	// cross_hair
	{
		if (CurrSpreadRadius <= 1.0f)
		{
			CurrSpreadRadius += SpreadSpeed * GetWorld()->GetDeltaSeconds();
			if (!!CrossHair)
				CrossHair->UpdateSpreadRange(CurrSpreadRadius, MaxSpreadAlignment);
		}
		LastAddSpreadTime = GetWorld()->GetRealTimeSeconds();
	}

	// Bullet
	if(!!BulletClass)
	{
		FVector bulletLocation = Mesh->GetSocketLocation("Muzzle_Bullet");
		FActorSpawnParameters params;
		params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		ACBullet* bullet = GetWorld()->SpawnActor<ACBullet>(BulletClass, bulletLocation, direction.Rotation(), params);
		if (!!bullet)
			bullet->Shoot(direction);
	}

	CurrMagazineCount--;
	if (CurrMagazineCount <= 0)
	{
		if (CanReload())
			Reload();
	}

}

bool ACWeapon::CanAim()
{
	bool b = false;
	b = b | bEquipping;   // ������
	b = b | bReload;      // źâ������
	b = b | bFiring;      // �ѼҴ���
	b = b | bInAim; 
	return !b;
}

void ACWeapon::Begin_Aim()
{
	bInAim = true;

	if (!!CrossHair)
		CrossHair->SetVisibility(ESlateVisibility::Visible);
	if (!!AimCurve)
	{
		Timeline->PlayFromStart();
		AimData.SetData(Owner);
		return;
	}
	AimData.SetDataByNoneCurve(Owner);
}

void ACWeapon::End_Aim()
{
	CheckFalse(bInAim);
	bInAim = false;

	if (!!CrossHair)
		CrossHair->SetVisibility(ESlateVisibility::Hidden);

	if (!!AimCurve)
	{
		Timeline->ReverseFromEnd();
		BaseData.SetData(Owner);
		return;
	}
	BaseData.SetDataByNoneCurve(Owner);
}
// Timeline�� interpfloat()������ �����Ͱ� Output
void ACWeapon::OnAiming(float Output)
{
	UCameraComponent* camera = CHelpers::GetComponent<UCameraComponent>(Owner);
	camera->FieldOfView = FMath::Lerp<float>(AimData.FieldOfView, BaseData.FieldOfView, Output);
}

bool ACWeapon::CanReload()
{
	bool b = false;
	b |= bEquipping;
	b |= bReload;
	return !b;
}

void ACWeapon::Reload()
{
	bReload = true;
	End_Aim();
	End_Fire();


	if (!!ReloadMontage)
	{
	//	Owner->Test();
		Owner->PlayAnimMontage(ReloadMontage, ReloadMontage_PlayRate);
	
	}
		
}

void ACWeapon::Eject_Magazine()
{
	// ���̷����� ���� ����
	if (MagazineBoneName.IsValid())
		Mesh->HideBoneByName(MagazineBoneName, EPhysBodyOp::PBO_None);
	// �������� ���� : Empty,full
	// ACMagazine : BeginPlay() --> bEject�� true�̸� Full ǥ��
	// SpawnActorDeferred() : Spawn�Ǳ��� ....�� ������ �Ҽ� �ִ�
	// SetEject()�� Call --> bEject fasse
	//                       BeginPlay() --> bEject�� false 
	FTransform transform = Mesh->GetSocketTransform(MagazineBoneName);
	ACMagazine* magazine = GetWorld()->SpawnActorDeferred<ACMagazine>(MagazineClass, transform, nullptr, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	// FinishSpawning���� ���ؾ߸� �� �ϵ� ����
	{
		magazine->SetEject();
		magazine->SetLifeSpan(5.0f);
	}
	magazine->FinishSpawning(transform); // ACMagazine::BeginPlay()
	magazine->SetEject();
}

void ACWeapon::Spawn_Magazine()
{
	CheckNull(MagazineClass);

	FActorSpawnParameters params;
	params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	Magazine = GetWorld()->SpawnActor<ACMagazine>(MagazineClass, params);
	CHelpers::AttachTo(Magazine, Owner->GetMesh(), MagazineSocketName);
}

void ACWeapon::Load_Magazine()
{
	CurrMagazineCount = MaxMagazineCount;
	// ���� Gun�� �ִ� �޽��� ����
	if (MagazineBoneName.IsValid())
		Mesh->UnHideBoneByName(MagazineBoneName);
	if (!!Magazine)
	{
		Magazine->Destroy();
		Magazine = nullptr;
	}
		
}

void ACWeapon::End_Reload()
{
	bReload = false;




}

bool ACWeapon::CanEquip()
{
	bool b = false;
	b = b | bEquipping;   // ������
	b = b | bReload;      // źâ������
	b = b | bFiring;      // �ѼҴ���
	return !b;
}

void ACWeapon::Equip()
{
	bEquipping = true;
	// ��Ÿ�� run�ô� slot�� �̿��Ͽ��� �Ѵ�
	if (!!EquipMontage)
		Owner->PlayAnimMontage(EquipMontage, EquipMontage_PlayRate);

	//if (!!ReloadMontage)
	//{
	//	CLog::Print("Reload");
	//	Owner->PlayAnimMontage(ReloadMontage, ReloadMontage_PlayRate);
	//}



}
// Pistol�� ���� override
void ACWeapon::Begin_Equip()
{
	if (RightHandSocketName.IsValid())
		CHelpers::AttachTo(this, Owner->GetMesh(), RightHandSocketName);
}

void ACWeapon::End_Equip()
{
	bEquipping = false;
}


bool ACWeapon::CanUnequip()
{
	// �����ϴ� ���ΰ�    Check
	// źâ�� ���� ���ΰ� Check
	// ������ Unequip ���ϰ�

	bool b = false;
	b = b | bEquipping;  // False || True --> True
	b = b | bReload;

	return !b;  // b = true
}
// ������ ��� ����ġ�� �ϴ� ������ ����
void ACWeapon::Unequip()
{
	if (HolsterSocketName.IsValid())
		CHelpers::AttachTo(this, Owner->GetMesh(), HolsterSocketName);
}

bool ACWeapon::CanFire()
{
	// �����ϴ� ���ΰ�    Check
	// źâ�� ���� ���ΰ� Check
	// ������ Unequip ���ϰ�

	bool b = false;
	b = b | bEquipping;  // False || True --> True
	b = b | bReload;
	b = b | bFiring;
	return !b;
}

void ACWeapon::Beign_Fire()
{
	bFiring = true;
	// timer�� �̿��Ͽ� AutoFire�� �ǵ����Ѵ� --> �Լ��� ����ȭ �������־���Ѵ�
	
	if (bAutoFire)
	{
		GetWorld()->GetTimerManager().SetTimer(AutoFireHandle, this, &ACWeapon::OnFiring, AutoFireInterval, true, 0.0f);
		return;
	}

	OnFiring();

}

void ACWeapon::End_Fire()
{
	bFiring = false;
	if(AutoFireHandle.IsValid())
		GetWorld()->GetTimerManager().ClearTimer(AutoFireHandle);
}

void ACWeapon::ToggleAutoFire()
{
	bAutoFire = !bAutoFire;
	if (AutoFireHandle.IsValid())
		GetWorld()->GetTimerManager().ClearTimer(AutoFireHandle);
}
