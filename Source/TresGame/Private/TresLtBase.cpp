#include "TresLtBase.h"
#include "Components/StaticMeshComponent.h"

ATresLtBase::ATresLtBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

