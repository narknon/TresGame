#include "TresGimmickGeneratorBase.h"
#include "TresRootComponent.h"

class UStaticMeshComponent;

void ATresGimmickGeneratorBase::SetStaticMeshParameter(UStaticMeshComponent* MeshComponent) {
}

ATresGimmickGeneratorBase::ATresGimmickGeneratorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyRoot = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
}

