#include "Weapons/CWeaponComponent.h"
#include  "Global.h"
#include "CWeapon.h"
#include "Characters/CPlayer.h"
#include  "Widgets/CUserWidget_HUD.h"

// ������: �ʱ�ȭ �۾� ����
UCWeaponComponent::UCWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = true; // �� ������ Tick �Լ��� ȣ���ϵ��� ����
	CHelpers::GetClass<UCUserWidget_HUD>(&HUDClass, "WidgetBlueprint'/Game/Widgets/WB_HUD.WB_HUD_C'");
}

// BeginPlay: ���� ���� �� ȣ��
void UCWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	// ������Ʈ�� ������ ĳ���͸� ����
	OwnerCharacter = Cast<ACPlayer>(GetOwner());
	CheckNull(OwnerCharacter);

	// ���� Ŭ�������� ���� ����
	for (TSubclassOf<ACWeapon> weaponClass : WeaponClasses)
	{
		FActorSpawnParameters params;
		params.Owner = OwnerCharacter;
		params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		if (!!weaponClass) // weaponClass�� ��ȿ�� ���
		{
			ACWeapon* weapon = OwnerCharacter->GetWorld()->SpawnActor<ACWeapon>(weaponClass, params);
			Weapons.Add(weapon); // ���� �迭�� �߰�
		}
		else
		{
			Weapons.Add(nullptr); // ��ȿ���� ���� ��� null �߰�
		}
	}

	// HUD ���� �� ����Ʈ�� �߰�
	if(!!HUDClass)
	{
		HUD = CreateWidget<UCUserWidget_HUD, APlayerController>(OwnerCharacter->GetController<APlayerController>(), HUDClass);
		HUD->AddToViewport();
		HUD->SetVisibility(ESlateVisibility::Visible);
	}

	// ��������Ʈ ���ε�
	OnWeaponAim_Arms_Begin.AddDynamic(this, &UCWeaponComponent::OnAim_Arms_Begin);
	OnWeaponAim_Arms_End.AddDynamic(this, &UCWeaponComponent::OnAim_Arms_End);
}

// TickComponent: �� ������ ȣ��
void UCWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ���� ���Ⱑ ���� ��� HUD ������Ʈ �� ����
	if (!GetCurrentWeapon())
	{
		HUD->UpdatNoWeapon();
		return;
	}
	CheckNull(HUD);

	// ���� ������ �ڵ� ��� ���θ� HUD�� �ݿ�
	GetCurrentWeapon()->IsAutoFire() ? HUD->OnAutoFire() : HUD->OffAutoFire();

	// źâ ���� ������Ʈ
	uint8 currCount = GetCurrentWeapon()->GetCurrMagazineCount();
	uint8 maxCount = GetCurrentWeapon()->GetMaxMagazineCount();

	HUD->UpdateMagzine(currCount, maxCount);
	HUD->UpdateWeaponType(Type);
}

// ���� ���� �� ȣ��
void UCWeaponComponent::OnAim_Arms_Begin(ACWeapon* InThisWeapon)
{
	for (ACWeapon* weapon : Weapons)
	{
		if (!!weapon)
		{
			if (weapon == InThisWeapon) continue; // ���� ����� ������ ����
			weapon->SetHidden(true); // �ٸ� ���⸦ ����
		}
	}
}

// ���� ���� �� ȣ��
void UCWeaponComponent::OnAim_Arms_End()
{
	for (ACWeapon* weapon : Weapons)
	{
		if(!!weapon)
			weapon->SetHidden(false); // ��� ���⸦ �ٽ� ���̰� ����
	}
}

// ���� ���� ���� ����
void UCWeaponComponent::SetUnarmedMode()
{
	CheckFalse(GetCurrentWeapon()->CanUnequip());  // ���� ���� ���� ���� Ȯ��
	GetCurrentWeapon()->Unequip(); 
	ChangeType(EWeaponType::Max); // ���� ���� ����
}

void UCWeaponComponent::SetAR4Mode()
{
	SetMode(EWeaponType::AR4); // AR4 ��� ����
}

void UCWeaponComponent::SetAK47Mode()
{
	SetMode(EWeaponType::AK47); // AK47 ��� ����
}

void UCWeaponComponent::SetPistolMode()
{
	SetMode(EWeaponType::Pistol); // Pistol ��� ����
}

void UCWeaponComponent::SetMode(EWeaponType InType)
{
	// ������ ���Ⱑ ���� ����� ������ ���
	if (Type == InType)
	{
		SetUnarmedMode(); // ���� ���� ��ȯ
		return;
	}

	// ���� ���Ⱑ �ִ� ��� ����
	else if (IsUnarmedMode() == false)
	{
		CheckFalse(GetCurrentWeapon()->CanUnequip());
		GetCurrentWeapon()->Unequip(); 
	}

	CheckNull(Weapons[(int32)InType]);  // ������ ���Ⱑ �����ϴ��� Ȯ��
	CheckFalse(Weapons[(int32)InType]->CanEquip());
	Weapons[(int32)InType]->Equip(); // ������ ���⸦ ����
	ChangeType(InType); // ���� Ÿ�� ����
}

// ���� Ÿ�� ���� ó��
void UCWeaponComponent::ChangeType(EWeaponType InType)
{
	EWeaponType prevType = Type; // ���� Ÿ�� ����
	Type = InType; // ���ο� Ÿ�� ����

	// ��������Ʈ ȣ��
	if (OnWeaponTypeChanged.IsBound())
		OnWeaponTypeChanged.Broadcast(prevType, InType);
}

// ���� ���� ����/���� ó��
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

// ���� �߻� ó��
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
    return false; // �߻� ���¸� ��ȯ (���� �ʿ�)
}

// ���� ó��
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
    return GetCurrentWeapon()->IsInAim(); // ���� ���� ��ȯ
}

// �޼� ��ġ ��ȯ
FVector UCWeaponComponent::GetLeftHandLocation()
{
	CheckNullResult(GetCurrentWeapon(), FVector::ZeroVector);
    return GetCurrentWeapon()->GetLeftHandLocation();
}

// �� ��ġ ��ȯ
FTransform UCWeaponComponent::GetArmsLeftHandTransform()
{
	CheckNullResult(GetCurrentWeapon(), FTransform());
	return GetCurrentWeapon()->GetArmsLeftHandTransform();
}

// �ڵ� �߻� ��� ��ȯ
void UCWeaponComponent::ToggleAutoFire()
{
	CheckNull(GetCurrentWeapon());
	GetCurrentWeapon()->ToggleAutoFire();
}

// źâ ����
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

// ���� ���� ��ȯ
ACWeapon* UCWeaponComponent::GetCurrentWeapon()
{
	// ���� ����� ��� nullptr ��ȯ
	if (IsUnarmedMode())
		return nullptr;

	return Weapons[(int)Type]; // ���� ���� ��ȯ
}