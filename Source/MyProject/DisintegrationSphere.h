// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "DisintegrationSphere.generated.h"

UCLASS()
class MYPROJECT_API ADisintegrationSphere : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADisintegrationSphere();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
		class UStaticMeshComponent* SphereMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Components)
		UMaterial* StatMaterial;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Components)
		UMaterialInstanceDynamic* DynMat;


	//parameter that is needed so that the object is not destroyed twice. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Components)
		bool isDestoyed;

	//during this time sphere will change the material
	UPROPERTY(EditAnywhere, Category = Time)
		float time_for_disin;

	//by what value the material will change in tick
	float for_changeMat;


	//For function call timer 
	FTimerHandle MessageKillTimerHandle;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//function to be called when colliding with objects 
	UFUNCTION(BlueprintCallable)
		void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION(BlueprintCallable)
		void ChangeMaterial();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
