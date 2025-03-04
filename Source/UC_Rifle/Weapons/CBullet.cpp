#include "Weapons/CBullet.h"
#include "Global.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Materials/MaterialInstanceConstant.h"

// Sets default values
ACBullet::ACBullet()
{
	CHelpers::CreateComponent<UCapsuleComponent>(this, &Capsule, "Capsule");
	CHelpers::CreateComponent<UStaticMeshComponent>(this, &Mesh, "Mesh", Capsule);
	CHelpers::CreateActorComponent<UProjectileMovementComponent>(this, &Projectile, "Projectile");

	// CDO --> BP : 코리젼생성자에 있는 경우는 reload 안됨
	{
		Capsule->SetRelativeRotation(FRotator(90, 0, 0));
		Capsule->SetCapsuleHalfHeight(50);
		Capsule->SetCapsuleRadius(2);
		Capsule->SetCollisionProfileName("BlockAllDynamic");
	}
	// 메쉬콤포넌트 : Asset을 assign
	{
		UStaticMesh* mesh;
		CHelpers::GetAsset<UStaticMesh>(&mesh, "StaticMesh'/Game/Meshes/Sphere.Sphere'");
		Mesh->SetStaticMesh(mesh);
		Mesh->SetRelativeScale3D(FVector(1, 0.025f, 0.025f));
		Mesh->SetRelativeRotation(FRotator(90, 0, 0));
	}
	// Material
	{
		UMaterialInstanceConstant* material;
		CHelpers::GetAsset<UMaterialInstanceConstant>(&material, "MaterialInstanceConstant'/Game/Materials/M_Bullet_Inst.M_Bullet_Inst'");
		Mesh->SetMaterial(0, material);
	}


	// Projectile
	// 1. lifespan결정전에 InitialSpeed,...
	// 2. Active를 false
	{
		Projectile->InitialSpeed = 2e+4f;  // 20000
		Projectile->MaxSpeed = 2e+4f;      // 20000
		Projectile->ProjectileGravityScale = 0; // 중력이 0이면 직선으로
	}


}

// Called when the game starts or when spawned
void ACBullet::BeginPlay()
{
	Super::BeginPlay();
	
	Projectile->SetActive(false);
	Capsule->OnComponentHit.AddDynamic(this, &ACBullet::OnHit);
}

void ACBullet::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	Destroy();
}

void ACBullet::Shoot(const FVector& InDirection)
{
	SetLifeSpan(3.0f);
	Projectile->Velocity = InDirection * Projectile->InitialSpeed;
	Projectile->SetActive(true);
}

