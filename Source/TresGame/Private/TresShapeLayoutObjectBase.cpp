#include "TresShapeLayoutObjectBase.h"
#include "TresSpawnActorManagerComponent.h"

ATresShapeLayoutObjectBase::ATresShapeLayoutObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnActorManager = CreateDefaultSubobject<UTresSpawnActorManagerComponent>(TEXT("SpawnActorManager"));
}

