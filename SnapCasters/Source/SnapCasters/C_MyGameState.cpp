// Fill out your copyright notice in the Description page of Project Settings.

#include "C_MyGameState.h"
#include "UnrealNetwork.h"

void AC_MyGameState::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const {

	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AC_MyGameState, pTurn);
	DOREPLIFETIME(AC_MyGameState, pArr);
	DOREPLIFETIME(AC_MyGameState, winningPlayerName);
} 
void AC_MyGameState::EndTurn() {
	if (pArr.Num() - 1 == pTurn)
		pTurn = 0;
	else {
		pTurn += 1;
	}
}


//void AC_MyGameState::setpArr(int value[]) {
//	for(int i=0; i<pArr.Num;i++)
//		pArr[i] = value[i];
//}
//int* AC_MyGameState::getpArr() {
//	return pArr;
//}