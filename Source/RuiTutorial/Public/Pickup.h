// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

/**
 * 
 */
UCLASS()
class RUITUTORIAL_API APickup : public AActor
{
	GENERATED_UCLASS_BODY()

	/*True when is ready to be picked up, false when disabled*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pickup)
	bool bIsActive;

	/*Sphere component, invisible to use as a collider*/
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category= Pickup)
	TSubobjectPtr<USphereComponent> BaseCollisionComponent;


	/*StaticMeshComponent to represent the pickup in the level */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Pickup)
	TSubobjectPtr<UStaticMeshComponent> PickupMesh;

	UFUNCTION(BlueprintNativeEvent)
	void OnPickedUp();





	
	
};
