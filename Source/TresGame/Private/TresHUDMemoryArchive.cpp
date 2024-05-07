#include "TresHUDMemoryArchive.h"

ATresHUDMemoryArchive::ATresHUDMemoryArchive(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_UIDataAssetMemoryArchive = NULL;
    this->m_UIManager = NULL;
}

