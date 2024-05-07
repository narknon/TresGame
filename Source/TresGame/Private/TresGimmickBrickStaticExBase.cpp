#include "TresGimmickBrickStaticExBase.h"
#include "TresStaticMeshComponent.h"

ATresGimmickBrickStaticExBase::ATresGimmickBrickStaticExBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyBreak = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresGimmickBreakMesh0"));
}

