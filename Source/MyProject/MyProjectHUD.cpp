// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProjectHUD.h"

void AMyProjectHUD::DrawHUD()
{
	Super::DrawHUD();
}

void AMyProjectHUD::BeginPlay()
{
	//Check if the Widget class was specified in the blueprint 
	if (WidgetTamplate)
	{
		//if yes => initialize Widget 
		WidgetInstance = CreateWidget<UMyUserWidget>(GetWorld(), WidgetTamplate);
		if (WidgetInstance)
		{
			WidgetInstance->AddToViewport();
			WidgetInstance->UpdateScoreInWidget(0);
		}
	}
}

void AMyProjectHUD::UpdateScore(int score)
{
	if (WidgetInstance)
	{
		WidgetInstance->UpdateScoreInWidget(score);
	}
}

void AMyProjectHUD::UpdateWaveNum(int waveNum)
{
	if (WidgetInstance)
	{
		WidgetInstance->UpdateWaveNumInWidget(waveNum);
	}
}
