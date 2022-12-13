// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "arkanoid04GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID04_API Aarkanoid04GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
private:
	//The Inventory of this Actor
	UPROPERTY()
		class APaddle* Paddle;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
