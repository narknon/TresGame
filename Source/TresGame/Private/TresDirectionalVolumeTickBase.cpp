#include "TresDirectionalVolumeTickBase.h"
#include "TresDebugArrowComponent.h"

void ATresDirectionalVolumeTickBase::SetEnableExecute(bool Enable) {
}

bool ATresDirectionalVolumeTickBase::IsEnableExecute() {
    return false;
}

ATresDirectionalVolumeTickBase::ATresDirectionalVolumeTickBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_PermitAngle = 45.00f;
    this->DebugArrowComponent = CreateDefaultSubobject<UTresDebugArrowComponent>(TEXT("DebugArrow"));
}

