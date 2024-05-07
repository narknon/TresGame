#include "TresStaticEQSItemActor.h"

ATresStaticEQSItemActor::ATresStaticEQSItemActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VoxelSize = 0.00f;
    this->ItemOverlapSize = 0.00f;
    this->StaticEQSItemBitNum = 0;
    this->Version = 0;
}

