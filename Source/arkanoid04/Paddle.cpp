// Fill out your copyright notice in the Description page of Project Settings.


#include "Paddle.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APaddle::APaddle()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Paddle(TEXT("StaticMesh'/Game/Meshes/SM_Paddle.SM_Paddle'"));
	//SM_Paddle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_Paddle"));
	SM_Paddle = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("SM Paddle"));
	SM_Paddle->SetStaticMesh(Paddle.Object);
	SM_Paddle->SetEnableGravity(false);
	SM_Paddle->SetConstraintMode(EDOFMode::XZPlane);
	SM_Paddle->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SM_Paddle->SetCollisionProfileName(TEXT("PhysiscActor"));

//	PaddleCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
//	PaddleCollision->SetupAttachment(RootComponent);

	FloatingMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Floating Pawn Movement"));
	FloatingMovement->MaxSpeed = 420.f;
	RootComponent = SM_Paddle;

}

// Called when the game starts or when spawned
void APaddle::BeginPlay()
{
	Super::BeginPlay();
	
}

//void APaddle::NotifyActorBeginOverlap(AActor* OtherActor)
//{	
//	/*ABasicCapsule* Capsule = Cast<ABasicCapsule>(OtherActor);
//	if (Capsule) {
//		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FString::Printf(TEXT("Se destruyo una capsula")));
//		Capsule->Destroy();
//	}*/
//}

// Called every frame
void APaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APaddle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APaddle::MoveHorizontal(float _AxisValue)
{
	AddMovementInput(FVector(_AxisValue, 0.0f, 0.0f), 1.0f, false);
}

