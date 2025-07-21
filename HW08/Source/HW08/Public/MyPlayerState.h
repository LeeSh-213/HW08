// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "MyPlayerState.generated.h"


UCLASS()
class HW08_API AMyPlayerState : public AGameStateBase
{
	GENERATED_BODY()
	

public:

	AMyPlayerState();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score")	
	int32 Score;

	UFUNCTION(BlueprintPure, Category = "Score")
	int32 GetScore() const;
	UFUNCTION(BlueprintCallable, Category = "Score")
	void AddScore(int32 Amount);

};
