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

	// CDO --> BP : �ڸ��������ڿ� �ִ� ���� reload �ȵ�
	{
		Capsule->SetRelativeRotation(FRotator(90, 0, 0));
		Capsule->SetCapsuleHalfHeight(50);
		Capsule->SetCapsuleRadius(2);
		Capsule->SetCollisionProfileName("BlockAllDynamic");
	}
	// �޽�������Ʈ : Asset�� assign
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
	// 1. lifespan�������� InitialSpeed,...
	// 2. Active�� false
	{
		Projectile->InitialSpeed = 2e+4f;  // 20000
		Projectile->MaxSpeed = 2e+4f;      // 20000
		Projectile->ProjectileGravityScale = 0; // �߷��� 0�̸� ��������
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

