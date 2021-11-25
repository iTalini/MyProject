// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "MyUserWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class MYPROJECT_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UMyUserWidget(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;
	
	virtual void NativeTick(const FGeometry& MyGeometry, float inDeltaTime);
	
	UFUNCTION(BlueprintCallable)
	void UpdateScoreInWidget(int32 newScore);

	UFUNCTION(BlueprintCallable)
		void UpdateWaveNumInWidget(int32 newWaveNum);

	FTimerHandle MesssageKillTimerHandle;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UTextBlock* ScoreBlock;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UTextBlock* WaveBlock;
};
