// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Materials/MaterialInstance.h"
#include "DestructibleComponent.h"
#include "GameSphere.generated.h"

UCLASS()
class MYPROJECT_API AGameSphere : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameSphere();

	//decaying part of an object 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Components)
		UDestructibleComponent* Body;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Components)
		UMaterial* StatMaterial;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Components)
		UMaterialInstanceDynamic* DynMat;

	//parameter that is needed so that the object is not destroyed twice. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Components)
		bool isDestoyed;


	//For function call timer 
	FTimerHandle MessageKillTimerHandle;


protected:
	// Called when the game starts or when spawned
	UFUNCTION(BlueprintCallable)
	virtual void BeginPlay() override;

	//function to be called when colliding with objects 
	UFUNCTION(BlueprintCallable)
		void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
