// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CBullet.generated.h"

// ȭ��,Bullet�� ������Ÿ�� �̿��Ͽ��� �Ѵ�


UCLASS()
class UC_RIFLE_API ACBullet : public AActor
{
	GENERATED_BODY()

// Component
private:  
	UPROPERTY(VisibleAnywhere)
		class UCapsuleComponent* Capsule;
	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* Mesh;
	UPROPERTY(VisibleAnywhere)
		class UProjectileMovementComponent* Projectile;

// ������
public:	
	ACBullet();
protected:
	virtual void BeginPlay() override;
public:	
	//virtual void Tick(float DeltaTime) override;
private: // Capsule���� Hit�Ȱ��� ���ε�
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);



// User���� �Լ�
public:
	void   Shoot(const FVector& InDirection);

};
