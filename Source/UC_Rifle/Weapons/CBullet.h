// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CBullet.generated.h"

// 화살,Bullet은 프로켁타일 이용하여야 한다


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

// 생성자
public:	
	ACBullet();
protected:
	virtual void BeginPlay() override;
public:	
	//virtual void Tick(float DeltaTime) override;
private: // Capsule에서 Hit된것을 바인딩
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);



// User정의 함수
public:
	void   Shoot(const FVector& InDirection);

};
