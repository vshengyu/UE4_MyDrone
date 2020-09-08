// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

UCLASS()
class MYUAV_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();
	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* Mesh;
	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* Paddle1;
	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* Paddle2;
	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* Paddle3;
	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* Paddle4;
	UStaticMeshComponent* Mesh;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
