#include "TresWaterCurrentSplineActor.h"

ATresWaterCurrentSplineActor::ATresWaterCurrentSplineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fForce = 500.00f;
    this->m_fRange = 100.00f;
    this->m_fDampingRate = 1.00f;
}

