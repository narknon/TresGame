#include "TresUIActorBG.h"
#include "Components/StaticMeshComponent.h"

ATresUIActorBG::ATresUIActorBG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
}

