// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Paddle_Player_Controller.generated.h"

class ABall;

UCLASS()
class ARKANOID04_API APaddle_Player_Controller : public APlayerController
{
	GENERATED_BODY()
		APaddle_Player_Controller();

	UFUNCTION()
		virtual void SetupInputComponent() override;
protected:

	virtual void BeginPlay() override;

	//ball references

	void Launch();

	UPROPERTY(EditAnywhere)
		TSubclassOf<ABall> BallObj;
	TArray<AActor*> Instances;

	ABall* MyBall;
	FVector SpawnLocation = FVector(0.0f, 0.0f, 45.0f);
	FRotator SpawnRotator = FRotator(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters Spawn;

	void MoveHorizontal(float _AxisValue);

public:
	void SpawnNewBall();
	UPROPERTY()
		class APaddle* Instance;
};
