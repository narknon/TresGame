#include "TresInfluenceMapVolume.h"

ATresInfluenceMapVolume::ATresInfluenceMapVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CellSize = 100.00f;
    this->m_bUseNavmesh = true;
}

