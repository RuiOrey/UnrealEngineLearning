// Fill out your copyright notice in the Description page of Project Settings.

#include "RuiTutorial.h"
#include "Pickup.h"


APickup::APickup(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{	
	//Pickup is active as created
	bIsActive=true;

	//Create the root SpehereComponent to handle collision
	BaseCollisionComponent = PCIP.CreateDefaultSubobject<USphereComponent>(this, TEXT("BaseSphereComponent"));

	//Set Spherhe as root component
	RootComponent = BaseCollisionComponent;

	//Create the static mesh and attach it
	PickupMesh = PCIP.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("PickupMesh"));

	//Turn physics on for the static mesh
	PickupMesh->SetSimulatePhysics(true);

	//Attach the StaticMesh to the root component
	PickupMesh->AttachTo(RootComponent);


		
}


void APickup::OnPickedUp_Implementation()
{
	//Backup Function for pickup default behaviour
}

