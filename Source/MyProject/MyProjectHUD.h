// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyUserWidget.h"
#include "MyProjectHUD.generated.h"

UCLASS()
class AMyProjectHUD : public AHUD
{
	GENERATED_BODY()

public:
	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

	//At the beginning of the game, we need to initialize our Widget 
	void BeginPlay();

	//The function in which we pass new information to the Widget 
	UFUNCTION(BlueprintCallable)
		void UpdateScore(int score);

	UFUNCTION(BlueprintCallable)
		void UpdateWaveNum(int waveNum);

	//The parameter we set in the blueprint, here should be a Widget class whose parent class is == UUserWidget. 
	// And which we will use in the future to display information 
	UPROPERTY(EditDefaultsOnly, Category = "Widget")
		TSubclassOf<class UUserWidget> WidgetTamplate;
	//the widget we display 
	UPROPERTY(EditDefaultsOnly, Category = "Widget")
		UMyUserWidget* WidgetInstance;

};

