// Fill out your copyright notice in the Description page of Project Settings.

#include "C_MyGameMode.h"
#include "Kismet/GameplayStatics.h"

#include "Engine/World.h"
#include "EngineUtils.h"

AC_MyGameMode::AC_MyGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("Blueprint'/Game/Blueprints/myPlayer'"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
		SpectatorClass= PlayerPawnBPClass.Class;
	}
	
	GameStateClass = AC_MyGameState::StaticClass();
	PlayerControllerClass = APlayerController::StaticClass();
	// etc.
}

int  AC_MyGameMode::IsitMyturn() {
	return playerArray[playerTurn];
}
//void AC_MyGameMode::IsGameOver() {
//	//AC_MyGameState *  mystate = Cast<AC_MyGameState>(UGameplayStatics::GetGameState(GetWorld()));
//	AC_MyGameState* const MyGameState = GetWorld() != NULL ? GetWorld()->GetGameState<AC_MyGameState>() : NULL;
//	TArray<AActor*> FoundActors;
//	 UGameplayStatics::GetAllActorsOfClass(GetWorld(), ClassToFind, FoundActors)  ;
//	if (FoundActors.Num() == 1) {
//		for (int i = 0; i < playerArray.Num(); i++) {
//			if (playerArray[i] == 1) {//that 1 needs to become theUnique ID
//				MyGameState->winningPlayerName = FString("Player "+ (i+1));
//				MyGameState->winningPlayerName.Append(" Wins");
//			}
//		}
//		
//	}
//
//}

 void AC_MyGameMode::PostLogin(APlayerController * NewPlayer) {

	 Super::PostLogin(NewPlayer);
	 APlayerController* pc = Cast<APlayerController>(NewPlayer);
	 NewPlayer->PlayerState->PlayerId 
	
	 playerArray.Add();
	 
	AC_MyGameState* const MyGameState = GetWorld() != NULL ? GetWorld()->GetGameState<AC_MyGameState>() : NULL;

	MyGameState->pArr = playerArray;
	MyGameState->pTurn = playerTurn;
}
