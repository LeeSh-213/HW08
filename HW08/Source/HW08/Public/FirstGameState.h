// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "FirstGameState.generated.h"




UCLASS()
class HW08_API AFirstGameState : public AGameState
{
	GENERATED_BODY()
	
public:
	AFirstGameState();

	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadwrite, Category = "Score")
	int32 Score;

	UPROPERTY(VisibleAnywhere, BlueprintReadwrite, Category = "Coin")
	int32 SpawnedCoinCount;

	UPROPERTY(VisibleAnywhere, BlueprintReadwrite, Category = "Score")
	int32 CollectedCoinCount;

	UPROPERTY(VisibleAnywhere, BlueprintReadwrite, Category = "Level")
	float LevelDuration;

	UPROPERTY(VisibleAnywhere, BlueprintReadwrite, Category = "Level")
	int32 CurrentLevelIndex;

	UPROPERTY(VisibleAnywhere, BlueprintReadwrite, Category = "Level")
	int32 MaxLevels;

	UPROPERTY(VisibleAnywhere, BlueprintReadwrite, Category = "Level")
	TArray<FName> LevelMapNames;

	FTimerHandle LevelTimerHandle;

	FTimerHandle HUDUpdateTimerHandle;


	UFUNCTION(BlueprintPure, Category = "Score")
	int32 GetScore() const;
	UFUNCTION(BlueprintCallable, Category = "Score")
	void AddScore(int32 Amount);

	UFUNCTION(BlueprintCallable, Category = "Level")
	void OnGameOver();

	void StartLevel();

	void OnLevelTimeUp();

	void OnCoinCollected();

	void EndLevel();

	void UpdateHUD();

protected:	
	//void HandleWaveFlow();



};
