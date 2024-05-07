#include "TresGridSpawnEffectActor.h"

int32 ATresGridSpawnEffectActor::GetSpawnEffectIndex() {
    return 0;
}

ATresGridSpawnEffectActor::ATresGridSpawnEffectActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsRingMove = false;
    this->RingMoveRadius = 50.00f;
    this->RingMoveScale = 1.00f;
    this->SpawnEffectList.AddDefaulted(1);
    this->HeightNumber = 5;
    this->WidthNumber = 5;
    this->SpawnEffectIndex = 0;
}

