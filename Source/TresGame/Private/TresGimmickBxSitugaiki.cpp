#include "TresGimmickBxSitugaiki.h"
#include "TresStaticMeshComponent.h"

void ATresGimmickBxSitugaiki::SetDisableLaunch(bool DisableLaunch) {
}

ATresGimmickBxSitugaiki::ATresGimmickBxSitugaiki(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_PropellerMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresSitugaikiPropellerMesh"));
}

