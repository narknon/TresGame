#include "TresGimmickStaticBase.h"
#include "TresRootComponent.h"
#include "TresStaticMeshComponent.h"
#include "TresEffectAttachComponent.h"

void ATresGimmickStaticBase::SetCanEverAffectNavigation(bool bRelevant) {
}

ATresGimmickStaticBase::ATresGimmickStaticBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyRoot = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
    this->MyMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresGimmickMesh0"));
    this->MyEffectAtt = CreateDefaultSubobject<UTresEffectAttachComponent>(TEXT("TresEffectAttach0"));
}

