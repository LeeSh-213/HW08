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
	// HUD가 켜져 있다면 닫기
	if (HUDWidgetInstance)
	{
		HUDWidgetInstance->RemoveFromParent();
		HUDWidgetInstance = nullptr;
	}

	// 이미 메뉴가 떠 있으면 제거
	if (MainMenuWidgetInstance)
	{
		MainMenuWidgetInstance->RemoveFromParent();
		MainMenuWidgetInstance = nullptr;
	}

	// 메뉴 UI 생성
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
		}
	}
}

void APlayerController1::ShowGameHUD()
{
	if (HUDWidgetInstance)
	{
		// 기존 HUD 제거
		HUDWidgetInstance->RemoveFromParent();
		HUDWidgetInstance = nullptr;
	}

	// 메뉴 제거
	if (MainMenuWidgetInstance)
	{
		MainMenuWidgetInstance->RemoveFromParent();
		MainMenuWidgetInstance = nullptr;
	}

	if (HUDWidgetClass)
	{
		// 새 HUD 생성
		HUDWidgetInstance = CreateWidget<UUserWidget>(this, HUDWidgetClass);
		if (HUDWidgetInstance)
		{
			HUDWidgetInstance->AddToViewport();

			bShowMouseCursor = false;
			SetInputMode(FInputModeGameOnly());

			// 여기서 HUD 업데이트 호출 X, GameState가 호출하도록 위임
		}
	}
}


void APlayerController1::StartGame()
{
	if (UFirstGameInstance* PlayerGameInstance = Cast<UFirstGameInstance>(UGameplayStatics::GetGameInstance(this)))
	{
		PlayerGameInstance->CurrentLevelIndex = 0;
		PlayerGameInstance->TotalScore = 0;
	}

	UGameplayStatics::OpenLevel(GetWorld(), FName("HW08"));
}
