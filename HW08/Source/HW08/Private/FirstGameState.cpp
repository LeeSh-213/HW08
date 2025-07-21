// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstGameState.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerController1.h"
#include "FirstGameInstance.h"
#include "SpawnVolume.h"
#include "CoinItem.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"



AFirstGameState::AFirstGameState()
{
	Score = 0;
	SpawnedCoinCount = 0;
	CollectedCoinCount = 0;
	LevelDuration = 60.0f;
	CurrentLevelIndex = 0;
	MaxLevels = 3;

}	


void AFirstGameState::BeginPlay()
{
	Super::BeginPlay();

	UpdateHUD();
	StartLevel();

	GetWorldTimerManager().SetTimer(
		HUDUpdateTimerHandle,
		this,
		&AFirstGameState::UpdateHUD,
		0.1f,
		true
	);

}

int32 AFirstGameState::GetScore() const
{
	return Score;
}

void AFirstGameState::AddScore(int32 Amount)
{

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UFirstGameInstance* PlayerGameInstance = Cast<UFirstGameInstance>(GameInstance);
		if (PlayerGameInstance)
		{
			PlayerGameInstance->AddToScore(Amount);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("GameInstance exists but is NOT UFirstGameInstance!")); //디버깅용 문구
		}

	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("GameInstance is null in AddScore!")); //디버깅용 문구
	}
}

void AFirstGameState::StartLevel()
{

	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (APlayerController1* PlayerController1 = Cast<APlayerController1>(PlayerController))
		{
			PlayerController1->ShowGameHUD();
		}
	}

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UFirstGameInstance* PlayerGameInstance = Cast<UFirstGameInstance>(GameInstance);
		if (PlayerGameInstance)
		{
			CurrentLevelIndex = PlayerGameInstance->CurrentLevelIndex;
		}
	}


		
	// 레벨 시작 시, 코인 개수 초기화
	SpawnedCoinCount = 0;
	CollectedCoinCount = 0;

	// 현재 맵에 배치된 모든 SpawnVolume을 찾아 아이템 40개를 스폰
	TArray<AActor*> FoundVolumes;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnVolume::StaticClass(), FoundVolumes);

	const int32 ItemToSpawn = 40;

	for (int32 i = 0; i < ItemToSpawn; i++)
	{
		if (FoundVolumes.Num() > 0)
		{
			ASpawnVolume* SpawnVolume = Cast<ASpawnVolume>(FoundVolumes[0]);
			if (SpawnVolume)
			{
				AActor* SpawnedActor = SpawnVolume->SpawnRandomItem();
				// 만약 스폰된 액터가 코인 타입이라면 SpawnedCoinCount 증가
				if (SpawnedActor && SpawnedActor->IsA(ACoinItem::StaticClass()))
				{
					SpawnedCoinCount++;
				}
			}
		}
	}


	GetWorldTimerManager().ClearTimer(HUDUpdateTimerHandle);

	// 30초 후에 OnLevelTimeUp()가 호출되도록 타이머 설정
	GetWorldTimerManager().SetTimer(
		LevelTimerHandle,
		this,
		&AFirstGameState::OnLevelTimeUp,
		LevelDuration,
		false
	);

	UpdateHUD();


	UE_LOG(LogTemp, Warning, TEXT("Level %d Start!, Spawned %d coin"),
		CurrentLevelIndex + 1,
		SpawnedCoinCount);
}

void AFirstGameState::OnLevelTimeUp()
{
	EndLevel();

}

void AFirstGameState::OnCoinCollected()
{
	CollectedCoinCount++;

	UE_LOG(LogTemp, Warning, TEXT("Coin Collected: %d / %d"),
		CollectedCoinCount,
		SpawnedCoinCount)

		// 현재 레벨에서 스폰된 코인을 전부 주웠다면 즉시 레벨 종료
		if (SpawnedCoinCount > 0 && CollectedCoinCount >= SpawnedCoinCount)
		{
			EndLevel();
		}
}

void AFirstGameState::EndLevel()
{

	if (APlayerController1* PC1 = Cast<APlayerController1>(GetWorld()->GetFirstPlayerController())) // APlayerController1는 사용자 정의 플레이어 컨트롤러 클래스입니다.
	{
		if (PC1->HUDWidgetInstance) // HUD 위젯 인스턴스가 유효한지 확인
		{
			PC1->HUDWidgetInstance->RemoveFromParent(); // HUD 위젯을 제거합니다.
			PC1->HUDWidgetInstance = nullptr; // 위젯 인스턴스를 nullptr로 설정하여 더 이상 사용하지 않도록 합니다.
		}
	}

	GetWorldTimerManager().ClearTimer(LevelTimerHandle);

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UFirstGameInstance* PlayerGameInstance = Cast<UFirstGameInstance>(GameInstance);
		if (PlayerGameInstance)
		{
			CurrentLevelIndex++;
			PlayerGameInstance->CurrentLevelIndex = CurrentLevelIndex;

			if (CurrentLevelIndex >= MaxLevels)
			{
				OnGameOver();
				return;
			}

			if (LevelMapNames.IsValidIndex(CurrentLevelIndex))
			{
				UGameplayStatics::OpenLevel(GetWorld(), LevelMapNames[CurrentLevelIndex]);
			}
			else
			{
				OnGameOver();
			}
		}
	}
}

void AFirstGameState::OnGameOver()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (APlayerController1* PlayerController1 = Cast<APlayerController1>(PlayerController))
		{
			PlayerController1->ShowMainMenu(true);
		}
	}
}

void AFirstGameState::UpdateHUD()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		APlayerController1* PlayerController1 = Cast<APlayerController1>(PlayerController);
		{
			if (UUserWidget* HUDWidget = PlayerController1->GetHUDWidget())
			{
				if (UTextBlock* TimeText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Time"))))
				{
					float RemainingTime = GetWorldTimerManager().GetTimerRemaining(LevelTimerHandle);
					TimeText->SetText(FText::FromString(FString::Printf(TEXT("Time: %.1f"), RemainingTime)));
				}

				if (UTextBlock* ScoreText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Score"))))
				{
					if (UGameInstance* GameInstance = GetGameInstance())
					{
						UFirstGameInstance* PlayerGameInstance = Cast<UFirstGameInstance>(GameInstance);
						if (PlayerGameInstance)
						{
							ScoreText->SetText(FText::FromString(FString::Printf(TEXT("Score: %d"), PlayerGameInstance->TotalScore)));
						}
					}
				}
				if (UTextBlock* LevelIndexText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Level"))))
				{
					LevelIndexText->SetText(FText::FromString(FString::Printf(TEXT("Level: %d"), CurrentLevelIndex + 1)));
				}
			}
		}
	}
}