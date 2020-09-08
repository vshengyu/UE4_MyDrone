// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include"Components/staticMeshComponent.h"
// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = Mesh;

	Mesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Paddle1 = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("Paddle1"));
	Paddle2 = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("Paddle2"));
	Paddle3 = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("Paddle3"));
	Paddle4 = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("Paddle4"));

	Paddle1->SetupAttachment(Mesh, TEXT("Paddle1"));
	Paddle2->SetupAttachment(Mesh, TEXT("Paddle2"));
	Paddle3->SetupAttachment(Mesh, TEXT("Paddle3"));
	Paddle4->SetupAttachment(Mesh, TEXT("Paddle4"));
}	

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

