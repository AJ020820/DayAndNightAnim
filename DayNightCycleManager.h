// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DayNightCycleManager.generated.h"

UCLASS()
class FINAL_MECH_API ADayNightCycleManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADayNightCycleManager();

	// Function to handle left-click events
    void LeftClick();

    // Boolean variable to represent time of day
    bool bIsMorning;

    // Function to set the time of day
    void SetMorning(bool bMorning);


};
