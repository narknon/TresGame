#include "TresRandomPlaceBase.h"
#include "TresSpawnActorManagerComponent.h"

void ATresRandomPlaceBase::spawn() {
}

void ATresRandomPlaceBase::DestroyAndSpawn() {
}


ATresRandomPlaceBase::ATresRandomPlaceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GeneratedRule = NULL;
    this->SpawnActorManager = CreateDefaultSubobject<UTresSpawnActorManagerComponent>(TEXT("SpawnActorManager"));
}

