#include "Weapons/CWeaponComponent.h"
#include  "Global.h"
#include "CWeapon.h"
#include "Characters/CPlayer.h"
#include  "Widgets/CUserWidget_HUD.h"

// 생성자: 초기화 작업 수행
UCWeaponComponent::UCWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = true; // 매 프레임 Tick 함수를 호출하도록 설정
	CHelpers::GetClass<UCUserWidget_HUD>(&HUDClass, "WidgetBlueprint'/Game/Widgets/WB_HUD.WB_HUD_C'");
}

// BeginPlay: 게임 시작 시 호출
void UCWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	// 컴포넌트를 소유한 캐릭터를 설정
	OwnerCharacter = Cast<ACPlayer>(GetOwner());
	CheckNull(OwnerCharacter);

	// 무기 클래스에서 무기 스폰
	for (TSubclassOf<ACWeapon> weaponClass : WeaponClasses)
	{
		FActorSpawnParameters params;
		params.Owner = OwnerCharacter;
		params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		if (!!weaponClass) // weaponClass가 유효한 경우
		{
			ACWeapon* weapon = OwnerCharacter->GetWorld()->SpawnActor<ACWeapon>(weaponClass, params);
			Weapons.Add(weapon); // 무기 배열에 추가
		}
		else
		{
			Weapons.Add(nullptr); // 유효하지 않은 경우 null 추가
		}
	}

	// HUD 생성 및 뷰포트에 추가
	if(!!HUDClass)
	{
		HUD = CreateWidget<UCUserWidget_HUD, APlayerController>(OwnerCharacter->GetController<APlayerController>(), HUDClass);
		HUD->AddToViewport();
		HUD->SetVisibility(ESlateVisibility::Visible);
	}

	// 델리게이트 바인딩
	OnWeaponAim_Arms_Begin.AddDynamic(this, &UCWeaponComponent::OnAim_Arms_Begin);
	OnWeaponAim_Arms_End.AddDynamic(this, &UCWeaponComponent::OnAim_Arms_End);
}

// TickComponent: 매 프레임 호출
void UCWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// 현재 무기가 없는 경우 HUD 업데이트 및 종료
	if (!GetCurrentWeapon())
	{
		HUD->UpdatNoWeapon();
		return;
	}
	CheckNull(HUD);

	// 현재 무기의 자동 사격 여부를 HUD에 반영
	GetCurrentWeapon()->IsAutoFire() ? HUD->OnAutoFire() : HUD->OffAutoFire();

	// 탄창 상태 업데이트
	uint8 currCount = GetCurrentWeapon()->GetCurrMagazineCount();
	uint8 maxCount = GetCurrentWeapon()->GetMaxMagazineCount();

	HUD->UpdateMagzine(currCount, maxCount);
	HUD->UpdateWeaponType(Type);
}

// 조준 시작 시 호출
void UCWeaponComponent::OnAim_Arms_Begin(ACWeapon* InThisWeapon)
{
	for (ACWeapon* weapon : Weapons)
	{
		if (!!weapon)
		{
			if (weapon == InThisWeapon) continue; // 현재 무기는 숨기지 않음
			weapon->SetHidden(true); // 다른 무기를 숨김
		}
	}
}

// 조준 종료 시 호출
void UCWeaponComponent::OnAim_Arms_End()
{
	for (ACWeapon* weapon : Weapons)
	{
		if(!!weapon)
			weapon->SetHidden(false); // 모든 무기를 다시 보이게 설정
	}
}

// 무기 관련 상태 설정
void UCWeaponComponent::SetUnarmedMode()
{
	CheckFalse(GetCurrentWeapon()->CanUnequip());  // 무기 해제 가능 여부 확인
	GetCurrentWeapon()->Unequip(); 
	ChangeType(EWeaponType::Max); // 비무장 모드로 설정
}

void UCWeaponComponent::SetAR4Mode()
{
	SetMode(EWeaponType::AR4); // AR4 모드 설정
}

void UCWeaponComponent::SetAK47Mode()
{
	SetMode(EWeaponType::AK47); // AK47 모드 설정
}

void UCWeaponComponent::SetPistolMode()
{
	SetMode(EWeaponType::Pistol); // Pistol 모드 설정
}

void UCWeaponComponent::SetMode(EWeaponType InType)
{
	// 선택한 무기가 현재 무기와 동일한 경우
	if (Type == InType)
	{
		SetUnarmedMode(); // 비무장 모드로 전환
		return;
	}

	// 현재 무기가 있는 경우 해제
	else if (IsUnarmedMode() == false)
	{
		CheckFalse(GetCurrentWeapon()->CanUnequip());
		GetCurrentWeapon()->Unequip(); 
	}

	CheckNull(Weapons[(int32)InType]);  // 선택한 무기가 존재하는지 확인
	CheckFalse(Weapons[(int32)InType]->CanEquip());
	Weapons[(int32)InType]->Equip(); // 선택한 무기를 장착
	ChangeType(InType); // 무기 타입 변경
}

// 무기 타입 변경 처리
void UCWeaponComponent::ChangeType(EWeaponType InType)
{
	EWeaponType prevType = Type; // 이전 타입 저장
	Type = InType; // 새로운 타입 설정

	// 델리게이트 호출
	if (OnWeaponTypeChanged.IsBound())
		OnWeaponTypeChanged.Broadcast(prevType, InType);
}

// 무기 장착 시작/종료 처리
void UCWeaponComponent::Begin_Equip()
{
	CheckNull(GetCurrentWeapon());
	GetCurrentWeapon()->Begin_Equip();
}

void UCWeaponComponent::End_Equip()
{
	CheckNull(GetCurrentWeapon());
	GetCurrentWeapon()->End_Equip();
}

// 무기 발사 처리
void UCWeaponComponent::Begin_Fire()
{
	CheckNull(GetCurrentWeapon());
	CheckFalse(GetCurrentWeapon()->CanFire());
	GetCurrentWeapon()->Beign_Fire();
}

void UCWeaponComponent::End_Fire()
{
	CheckNull(GetCurrentWeapon());
	GetCurrentWeapon()->End_Fire();
}

bool UCWeaponComponent::IsFiring()
{
    return false; // 발사 상태를 반환 (구현 필요)
}

// 조준 처리
void UCWeaponComponent::Begin_Aim()
{
	CheckNull(GetCurrentWeapon());
	CheckFalse(GetCurrentWeapon()->CanAim());
	GetCurrentWeapon()->Begin_Aim();
}

void UCWeaponComponent::End_Aim()
{
	CheckNull(GetCurrentWeapon());
	GetCurrentWeapon()->End_Aim();
}

bool UCWeaponComponent::IsInAim()
{
	CheckNullResult(GetCurrentWeapon(), false);
    return GetCurrentWeapon()->IsInAim(); // 조준 상태 반환
}

// 왼손 위치 반환
FVector UCWeaponComponent::GetLeftHandLocation()
{
	CheckNullResult(GetCurrentWeapon(), FVector::ZeroVector);
    return GetCurrentWeapon()->GetLeftHandLocation();
}

// 팔 위치 반환
FTransform UCWeaponComponent::GetArmsLeftHandTransform()
{
	CheckNullResult(GetCurrentWeapon(), FTransform());
	return GetCurrentWeapon()->GetArmsLeftHandTransform();
}

// 자동 발사 모드 전환
void UCWeaponComponent::ToggleAutoFire()
{
	CheckNull(GetCurrentWeapon());
	GetCurrentWeapon()->ToggleAutoFire();
}

// 탄창 조작
void UCWeaponComponent::Eject_Magazine()
{
	CheckNull(GetCurrentWeapon());
	GetCurrentWeapon()->Eject_Magazine();
}

void UCWeaponComponent::Spawn_Magazine()
{
	CheckNull(GetCurrentWeapon());
	GetCurrentWeapon()->Spawn_Magazine();
}

void UCWeaponComponent::Load_Magazine()
{
	CheckNull(GetCurrentWeapon());
	GetCurrentWeapon()->Load_Magazine();
}

void UCWeaponComponent::End_Reload()
{
	CheckNull(GetCurrentWeapon());
	GetCurrentWeapon()->End_Reload();
}

// 현재 무기 반환
ACWeapon* UCWeaponComponent::GetCurrentWeapon()
{
	// 비무장 모드인 경우 nullptr 반환
	if (IsUnarmedMode())
		return nullptr;

	return Weapons[(int)Type]; // 현재 무기 반환
}