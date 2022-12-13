// Copyright Epic Games, Inc. All Rights Reserved.


#include "arkanoid04GameModeBase.h"
#include "Paddle.h"
void Aarkanoid04GameModeBase::BeginPlay()
{
	//implementar el patrón singleton, logrando que no se pueda crear mas de dos paddle (paletas).
	FVector Spawn(100.0f, 0.0f, 90.0f);
	FVector SpawnS(-200.0f, 0.0f, 0.0f);

	for (int i = 1; i <= 2; i++)
	{
		APaddle* SpawnedPaddle = GetWorld() -> SpawnActor<APaddle>(APaddle::StaticClass(),Spawn,FRotator::ZeroRotator);
		if (SpawnedPaddle)
		{
			//If the Spawn succeeds, set the Spawned inventory to the local one	and log the success string
			Paddle = SpawnedPaddle;
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s has been created"), *Paddle->GetName()));
		}
		Spawn = Spawn + SpawnS;
	}
}
