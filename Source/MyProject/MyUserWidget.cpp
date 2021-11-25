// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"

UMyUserWidget::UMyUserWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ScoreBlock = nullptr;
}

void UMyUserWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (ScoreBlock)
	{
		UpdateScoreInWidget(0);
	}

	if (WaveBlock)
	{
		UpdateWaveNumInWidget(1);
	}
}

void UMyUserWidget::NativeTick(const FGeometry& MyGeometry, float inDeltaTime)
{
	Super::NativeTick(MyGeometry, inDeltaTime);
}

void UMyUserWidget::UpdateScoreInWidget(int32 newScore)
{
	FString text;

	text = "Score: " + FString::FromInt(newScore);

	if (ScoreBlock)
	{
		ScoreBlock->SetText(FText::FromString(text));
		//align text to the left 
		ScoreBlock->SetJustification(ETextJustify::Left);
	}
}

void UMyUserWidget::UpdateWaveNumInWidget(int32 newWaveNum)
{
	FString text;

	text = "Wave: " + FString::FromInt(newWaveNum);

	if (WaveBlock)
	{
		WaveBlock->SetText(FText::FromString(text));
		WaveBlock->SetJustification(ETextJustify::Left);
	}
}
