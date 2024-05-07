#include "TresTsDancingPlant.h"
#include "TresStaticMeshComponent.h"

ATresTsDancingPlant::ATresTsDancingPlant(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresGimmickMesh0"));
}

