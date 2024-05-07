#include "TresGimmickBxStepBanAsset.h"
#include "TresStaticMeshComponent.h"

class AActor;

void ATresGimmickBxStepBanAsset::SetStepBanAssetOwnerActor(AActor* GimmickOwner) {
}


ATresGimmickBxStepBanAsset::ATresGimmickBxStepBanAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresGimmickMesh0"));
}

