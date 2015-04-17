// Fill out your copyright notice in the Description page of Project Settings.

#include "MMtechdemo.h"
#include "Steering.h"


// Sets default values for this component's properties
USteering::USteering()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsInitializeComponent = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USteering::InitializeComponent()
{
	Super::InitializeComponent();

	// ...
	
}


// Called every frame
void USteering::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

