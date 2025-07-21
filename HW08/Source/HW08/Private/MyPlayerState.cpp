// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerState.h"


AMyPlayerState::AMyPlayerState()
{
	Score = 0;
}

int32 AMyPlayerState::GetScore() const
{
    return Score;
}

void AMyPlayerState::AddScore(int32 Amount)
{
    Score += Amount;
}

