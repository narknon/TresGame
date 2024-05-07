#include "TresEncountDisableVolume.h"

ATresEncountDisableVolume::ATresEncountDisableVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ShapeType = ETresEncountDisableVolumeType::Type_Box;
}

