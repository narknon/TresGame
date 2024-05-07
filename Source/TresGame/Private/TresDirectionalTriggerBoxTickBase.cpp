#include "TresDirectionalTriggerBoxTickBase.h"
#include "TresDebugArrowComponent.h"

void ATresDirectionalTriggerBoxTickBase::SetEnableExecute(bool Enable) {
}

bool ATresDirectionalTriggerBoxTickBase::IsEnableExecute() {
    return false;
}

ATresDirectionalTriggerBoxTickBase::ATresDirectionalTriggerBoxTickBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_PermitAngle = 45.00f;
    this->DebugArrowComponent = CreateDefaultSubobject<UTresDebugArrowComponent>(TEXT("DebugArrow"));
}

