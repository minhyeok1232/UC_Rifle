#include "Characters/CPlayer.h"
#include "Global.h"
#include "CAnimInstance.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Weapons/CWeaponComponent.h"
#include "CAnimInstance_Arms.h"




ACPlayer::ACPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
	
	// General Component
	{
		CHelpers::CreateComponent<USpringArmComponent>(this, &SpringArm, "SpringArm", GetMesh());
		CHelpers::CreateComponent<UCameraComponent>(this, &Camera, "Camera", SpringArm);
		CHelpers::CreateComponent<UStaticMeshComponent>(this, &Backpack, "Backpack", GetMesh(),"backPack");
		CHelpers::CreateComponent<USkeletalMeshComponent>(this, &Arms, "Arms", Camera);
	}
	
	// User Component
	{
		CHelpers::CreateActorComponent<UCWeaponComponent>(this, &Weapon, "Weapon");

	}

	//Mesh에 Asset assign
	{
		USkeletalMesh* mesh;
		CHelpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Character/Mesh/SK_Mannequin.SK_Mannequin'");
		GetMesh()->SetSkeletalMesh(mesh);
		GetMesh()->SetRelativeLocation(FVector(0, 0, -90));      // 디자인시 0,0,0 : 절반을 내림
		GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));     // PitchYawRoll BP X(Roll) Y(Pitch) Z(Yaw)
	}

	// MovementComponent
	{
		//this->bUseControllerRotationYaw = false;                   // 회전시 콘트롤러(X), 폰의 방향(확인)
		GetCharacterMovement()->bOrientRotationToMovement = true;  // 회전시 콘트롤러(X), 폰의 방향
		GetCharacterMovement()->MaxWalkSpeed = 400;
	}
	// Camera & SpringArm assign
	{
		SpringArm->SetRelativeLocation(FVector(0, 0, 150));
		SpringArm->SetRelativeRotation(FRotator(0, 90, 0));
		SpringArm->TargetArmLength = 300;
		SpringArm->bUsePawnControlRotation = true;   // 회전시 콘트롤러(X), 폰의 방향
		SpringArm->bDoCollisionTest = false;

		Camera->SetRelativeLocation(FVector(-30, 0, 0));
		Camera->bUsePawnControlRotation = false;
	}

	// ABP_Character Assign
	{
		TSubclassOf<UCAnimInstance> animInstance;
		CHelpers::GetClass<UCAnimInstance>(&animInstance, "AnimBlueprint'/Game/ABP_Character.ABP_Character_C'");
		GetMesh()->SetAnimClass(animInstance);

	}

	// 악세사리
	{
		UStaticMesh* staticMesh;
		CHelpers::GetAsset<UStaticMesh>(&staticMesh, "StaticMesh'/Game/FPS_Weapon_Bundle/Backpack/Backpack.Backpack'");
		Backpack->SetStaticMesh(staticMesh);
	}

	// FPS용 Mesh
	{
		USkeletalMesh* mesh;
		CHelpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Character/Mesh/SK_Mannequin.SK_Mannequin'");
		GetMesh()->SetSkeletalMesh(mesh);
		GetMesh()->SetRelativeLocation(FVector(0, 0, -90));      // 디자인시 0,0,0 : 절반을 내림
		GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));     // PitchYawRoll BP X(Roll) Y(Pitch) Z(Yaw)
	}

	// Arms
	{
		USkeletalMesh* mesh;
		CHelpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Character_Arms/Character/Mesh/SK_Mannequin_Arms.SK_Mannequin_Arms'");
		Arms->SetSkeletalMesh(mesh);
		Arms->SetVisibility(false);


		TSubclassOf<UCAnimInstance_Arms> armsAnimIstance;
		CHelpers::GetClass<UCAnimInstance_Arms>(&armsAnimIstance, "AnimBlueprint'/Game/ABP_Character_Arms.ABP_Character_Arms_C'");
		Arms->SetAnimClass(armsAnimIstance);

		// 카메라 위치
		Arms->SetRelativeLocation(FVector(-14.25f, -5.85f, -156.9f));
		Arms->SetRelativeRotation(FRotator(-0.5f,-11.85f, -1.2f));
	}
}

// Called when the game starts or when spawned
void ACPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//축매핑
	{
		PlayerInputComponent->BindAxis("MoveForward", this, &ACPlayer::OnMoveForward);
		PlayerInputComponent->BindAxis("MoveRight", this, &ACPlayer::OnMoveRight);
		PlayerInputComponent->BindAxis("HorizontalLook", this, &ACPlayer::OnHorizontalLook);
		PlayerInputComponent->BindAxis("VerticalLook", this, &ACPlayer::OnVerticalLook);
	}
	// Action매핑 :  마우스인경우
	{
		PlayerInputComponent->BindAction("Run", EInputEvent::IE_Pressed, this, &ACPlayer::OnRun);
		PlayerInputComponent->BindAction("Run", EInputEvent::IE_Released, this, &ACPlayer::OffRun);
	}
	// Action매핑 : 키보드 --> WeaponComponet에 다이렉트로 바인딩
	{
		PlayerInputComponent->BindAction("AR4",  EInputEvent::IE_Pressed, Weapon, &UCWeaponComponent::SetAR4Mode);
		PlayerInputComponent->BindAction("AK47", EInputEvent::IE_Pressed, Weapon, &UCWeaponComponent::SetAK47Mode);
		PlayerInputComponent->BindAction("Pistol", EInputEvent::IE_Pressed, Weapon, &UCWeaponComponent::SetPistolMode);
	}
	// Fire매핑 : 마우스 1번
	{
		PlayerInputComponent->BindAction("Fire", EInputEvent::IE_Pressed, Weapon, &UCWeaponComponent::Begin_Fire);
		PlayerInputComponent->BindAction("Fire", EInputEvent::IE_Released, Weapon, &UCWeaponComponent::End_Fire);
	}

	// Aiming : 마우스 2번
	{
		PlayerInputComponent->BindAction("Aiming", EInputEvent::IE_Pressed, Weapon, &UCWeaponComponent::Begin_Aim);
		PlayerInputComponent->BindAction("Aiming", EInputEvent::IE_Released, Weapon, &UCWeaponComponent::End_Aim);
	}
	// AutoFire
	{
		PlayerInputComponent->BindAction("AutoFire", EInputEvent::IE_Pressed, Weapon, &UCWeaponComponent::ToggleAutoFire);
	}
}

void ACPlayer::OnMoveForward(float InAxisValue)
{
	// 짐벌락현상을 방지하기 쿼터니엄을 이용하여 Rotation값을 가져온다
	FRotator rotator = FRotator(0, GetControlRotation().Yaw, 0);
	FVector  direction = FQuat(rotator).GetForwardVector().GetSafeNormal2D();
	AddMovementInput(direction, InAxisValue);
}

void ACPlayer::OnMoveRight(float InAxisValue)
{
	// 짐벌락현상을 방지하기 쿼터니엄을 이용하여 Rotation값을 가져온다
	FRotator rotator = FRotator(0, GetControlRotation().Yaw, 0);
	FVector  direction = FQuat(rotator).GetRightVector().GetSafeNormal2D();
	AddMovementInput(direction, InAxisValue);
}

void ACPlayer::OnHorizontalLook(float InAxisValue)
{
	AddControllerYawInput(InAxisValue);
}

void ACPlayer::OnVerticalLook(float InAxisValue)
{
	AddControllerPitchInput(InAxisValue);
}

void ACPlayer::OnRun()
{
	GetCharacterMovement()->MaxWalkSpeed = 600;
}

void ACPlayer::OffRun()
{
	GetCharacterMovement()->MaxWalkSpeed = 400;
}

