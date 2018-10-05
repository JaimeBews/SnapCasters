// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include"C_MyGameState.h"
#include "C_MyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SNAPCASTERS_API AC_MyGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	AC_MyGameMode();

		


public:
	
	int IsitMyturn();
	int counter=0;
	//void IsGameOver();
	void PostLogin(APlayerController *NewPlayer);
	int playerTurn;
	TArray<int32> playerArray;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ClassToFind;
private:

	
	
	
};
