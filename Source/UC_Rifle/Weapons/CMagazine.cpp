// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/CMagazine.h"
#include "Global.h"
#include "Components/StaticMeshComponent.h"

ACMagazine::ACMagazine()
{
	CHelpers::CreateComponent<USceneComponent>(this, &Root, "Root");
	CHelpers::CreateComponent<UStaticMeshComponent>(this, &Mesh_Full, "Mesh_Full", Root);
	CHelpers::CreateComponent<UStaticMeshComponent>(this, &Mesh_Empty, "Mesh_Empty", Root);


	UStaticMesh* mesh;

	CHelpers::GetAsset<UStaticMesh>(&mesh, "StaticMesh'/Game/FPS_Weapon_Bundle/Weapons/Meshes/AR4/SM_AR4_Mag.SM_AR4_Mag'");
	Mesh_Full->SetStaticMesh(mesh);
	Mesh_Full->SetCollisionProfileName("Magazine");

	CHelpers::GetAsset<UStaticMesh>(&mesh, "StaticMesh'/Game/FPS_Weapon_Bundle/Weapons/Meshes/AR4/SM_AR4_Mag_Empty.SM_AR4_Mag_Empty'");
	Mesh_Empty->SetStaticMesh(mesh);
	Mesh_Empty->SetCollisionProfileName("Magazine");

	Mesh_Empty->SetSimulatePhysics(true);
	Mesh_Full->SetSimulatePhysics(true);

}

// Called when the game starts or when spawned
void ACMagazine::BeginPlay()
{
	Super::BeginPlay();
	// if (bEject == false)
	// {
	// 	Mesh_Full->SetVisibility(true);
	// }
		
	
}

void ACMagazine::SetEject()
{
	bEject = true;
	Mesh_Full->SetVisibility(false);
	Mesh_Empty->SetSimulatePhysics(true);
}


