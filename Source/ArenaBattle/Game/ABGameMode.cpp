// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/ABGameMode.h"

AABGameMode::AABGameMode()
{
	// DefaultPawnClass
	static ConstructorHelpers::FClassFinder<APawn>
			DefaultPawnClassRef(TEXT("/Script/Engine.Blueprint'/Game/ArenaBattle/Blueprint/BP_ABCharacterPlayer.BP_ABCharacterPlayer_C'"));
	check(DefaultPawnClassRef.Class != nullptr);
	DefaultPawnClass = DefaultPawnClassRef.Class;

	// PlayerControllerClass
	static ConstructorHelpers::FClassFinder<APlayerController>
			PlayerControllerClassRef(TEXT("/Script/ArenaBattle.ABPlayerController"));
	check(PlayerControllerClassRef.Class != nullptr);
	PlayerControllerClass = PlayerControllerClassRef.Class;
}