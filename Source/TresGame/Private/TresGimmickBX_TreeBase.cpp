#include "TresGimmickBX_TreeBase.h"
#include "TresStaticMeshComponent.h"

ATresGimmickBX_TreeBase::ATresGimmickBX_TreeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresGimmickMesh0"));
}

