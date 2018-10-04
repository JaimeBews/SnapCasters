// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameState.h"

#include "C_MyGameState.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class SNAPCASTERS_API AC_MyGameState : public AGameStateBase
{
	GENERATED_BODY()
		
public:
	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const;
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Replicated, Category = "C_MyGameState")
		int pTurn;
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Replicated,Category = "C_MyGameState")
	TArray<int32> pArr;
	UPROPERTY(BlueprintReadWrite,Replicated, Category = "C_MyGameState")
		FString  winningPlayerName;
private:


		//UFUNCTION(BlueprintCallable, Category = "C_MyGameState")
	//	int* getpArr();
		//UFUNCTION(BlueprintCallable, Category = "C_MyGameState")
	//	void setpArr(int value[]);
public:
	UFUNCTION(BlueprintCallable, Category = "EndTurn")
		void EndTurn() ;
	};
