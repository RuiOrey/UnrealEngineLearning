// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Pickup.h"
#include "BatteryPickup.generated.h"

/**
 * 
 */
UCLASS()
class RUITUTORIAL_API ABatteryPickup : public APickup
{
	GENERATED_UCLASS_BODY()

	/*Sets the power the battery will give to player*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Power)
	float PowerLevel;

	/*this overrides the OnPickedUp*/
	void OnPickedUp_Implementation() override;
	
};
