// Fill out your copyright notice in the Description page of Project Settings.


#include "DayNightCycleManager.h"
#include "Animation/AnimInstance.h"


// Sets default values
ADayNightCycleManager::ADayNightCycleManager()
{
    bIsMorning = true; // Assuming it starts as morning
}

void ADayNightCycleManager::LeftClick()
{
    if (bIsMorning)
    {
        // Play morning animation
        // You'll need to implement code here to trigger the morning animation
    }
    else
    {
        // Play night animation
        // You'll need to implement code here to trigger the night animation
    }
}

void ADayNightCycleManager::SetMorning(bool bMorning)
{
    bIsMorning = bMorning;
}

