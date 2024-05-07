#include "TresCameraSpecialShipHiSpd.h"

ATresCameraSpecialShipHiSpd::ATresCameraSpecialShipHiSpd(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_LimitPitchMin = -70.00f;
    this->m_LimitPitchMax = 70.00f;
}

