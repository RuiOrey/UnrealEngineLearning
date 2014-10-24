// Fill out your copyright notice in the Description page of Project Settings.

#include "RuiTutorial.h"
#include "BatteryPickup.h"


ABatteryPickup::ABatteryPickup(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	/*Base powerlevel of battery*/
	PowerLevel = 150.f;
}

void ABatteryPickup::OnPickedUp_Implementation()
{
	//Calls the parent class code for this member function
	Super::OnPickedUp_Implementation();
	// Destroy the battery
	Destroy();
}


