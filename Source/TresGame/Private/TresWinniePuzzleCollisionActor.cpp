#include "TresWinniePuzzleCollisionActor.h"
#include "Components/SphereComponent.h"

ATresWinniePuzzleCollisionActor::ATresWinniePuzzleCollisionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("USphereComponent"));
}

