#include "TresCameraEmitterLensEffect.h"

ATresCameraEmitterLensEffect::ATresCameraEmitterLensEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_FieldOfView = 80.00f;
    this->m_bOnlyCameraSee = false;
}

