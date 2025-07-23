// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerController1.h"
#include "Blueprint/UserWidget.h"
#include "FirstGameInstance.h"
#include "FirstGameState.h"
#include "Kismet/GameplayStatics.h"
#include "Components/TextBlock.h"


APlayerController1::APlayerController1()
	:
	HUDWidgetClass(nullptr),
	HUDWidgetInstance(nullptr),
	MainMenuWidgetClass(nullptr),
	MainMenuWidgetInstance(nullptr)
{
}


void APlayerController1::BeginPlay()
{
	Super::BeginPlay();

	FString CurrentMapName = GetWorld()->GetMapName();
	if (CurrentMapName.Contains("MenuLevel"))
	{
		ShowMainMenu(false);
	}



}

UUserWidget* APlayerController1::GetHUDWidget() const
{
	return HUDWidgetInstance;
}

void APlayerController1::ShowMainMenu(bool bIsRestart)
{
	// HUD�� ���� �ִٸ� �ݱ�
	if (HUDWidgetInstance)
	{
		HUDWidgetInstance->RemoveFromParent();
		HUDWidgetInstance = nullptr;
	}

	// �̹� �޴��� �� ������ ����
	if (MainMenuWidgetInstance)
	{
		MainMenuWidgetInstance->RemoveFromParent();
		MainMenuWidgetInstance = nullptr;
	}

	// �޴� UI ����
	if (MainMenuWidgetClass)
	{
		MainMenuWidgetInstance = CreateWidget<UUserWidget>(this, MainMenuWidgetClass);
		if (MainMenuWidgetInstance)
		{
			MainMenuWidgetInstance->AddToViewport();

			bShowMouseCursor = true;
			SetInputMode(FInputModeUIOnly());
		}

		if (UTextBlock* ButtonText = Cast<UTextBlock>(MainMenuWidgetInstance->GetWidgetFromName(TEXT("StartButtonText"))))
		{
			if (bIsRestart)
			{
				ButtonText->SetText(FText::FromString(TEXT("Restart")));
			}
			else
			{
				ButtonText->SetText(FText::FromString(TEXT("Start")));
			}

			if (bIsRestart)
			{
				UFunction* PlayAnimFunc = MainMenuWidgetInstance->FindFunction(FName("PlayGameOverAnim"));
				if (PlayAnimFunc)
				{
					MainMenuWidgetInstance->ProcessEvent(PlayAnimFunc, nullptr);
				}

				if (UTextBlock* TotalScoreText = Cast<UTextBlock>(MainMenuWidgetInstance->GetWidgetFromName("TotalScoreText")))
				{
					if (UFirstGameInstance* PlayerGameInstance = Cast<UFirstGameInstance>(UGameplayStatics::GetGameInstance(this)))
					{
						TotalScoreText->SetText(FText::FromString(
							FString::Printf(TEXT("Total Score: %d"), PlayerGameInstance->TotalScore)
						));
					}
				}
			}
		}
	}
}

void APlayerController1::ShowGameHUD()
{
	if (HUDWidgetInstance)
	{
		// ���� HUD ����
		HUDWidgetInstance->RemoveFromParent();
		HUDWidgetInstance = nullptr;
	}

	// �޴� ����
	if (MainMenuWidgetInstance)
	{
		MainMenuWidgetInstance->RemoveFromParent();
		MainMenuWidgetInstance = nullptr;
	}

	if (HUDWidgetClass)
	{
		// �� HUD ����
		HUDWidgetInstance = CreateWidget<UUserWidget>(this, HUDWidgetClass);
		if (HUDWidgetInstance)
		{
			HUDWidgetInstance->AddToViewport();

			bShowMouseCursor = false;
			SetInputMode(FInputModeGameOnly());

			// ���⼭ HUD ������Ʈ ȣ�� X, GameState�� ȣ���ϵ��� ����
		}
	}
}


void APlayerController1::StartGame()
{
	if (UFirstGameInstance* PlayerGameInstance = Cast<UFirstGameInstance>(UGameplayStatics::GetGameInstance(this)))
	{
		PlayerGameInstance->CurrentLevelIndex;
		PlayerGameInstance->TotalScore;
	}

	UGameplayStatics::OpenLevel(GetWorld(), FName("HW08"));
	SetPause(false);
}
