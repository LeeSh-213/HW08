// Fill out your copyright notice in the Description page of Project Settings.


#include "Gamemode08.h"
#include "PlayerCharacter.h"
#include "PlayerController1.h"
#include "FirstGameState.h"


AGamemode08::AGamemode08()

{
	DefaultPawnClass = APlayerCharacter::StaticClass();
	PlayerControllerClass = APlayerController::StaticClass();
	GameStateClass = AFirstGameState::StaticClass();
}