#include "TresCameraRailSlideMI.h"

ATresCameraRailSlideMI::ATresCameraRailSlideMI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TargetRotationPitchRate = 0.00f;
    this->m_TargetRotationYawRate = 0.00f;
}

