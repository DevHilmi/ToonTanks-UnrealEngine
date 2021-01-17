// Fill out your copyright notice in the Description page of Project Settings.

#include "TankGameModeBase.h"

void ATankGameModeBase::BeginPlay()
{
    // Get win/lose reference
}

void ATankGameModeBase::ActorDied(AActor *DeadActor)
{
    // Check if actor died
}

void ATankGameModeBase::HandleGameStart()
{
    // start game
}

void ATankGameModeBase::HandleGameOver(bool PlayerWon)
{
    // end game
    // call blueprint gameover
}
