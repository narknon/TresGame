#include "TresBxCar2TyreActor.h"
#include "Components/InstancedStaticMeshComponent.h"

ATresBxCar2TyreActor::ATresBxCar2TyreActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InstancedStaticMeshEx = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstancedStaticMeshExComponent"));
}

