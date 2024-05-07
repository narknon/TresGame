#include "TresWinniePuzzleUnitBase.h"

ATresWinniePuzzleUnitBase::ATresWinniePuzzleUnitBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UnitTypeRef = WinniePuzzleUnitType::Carrot;
    this->m_pCollisionUnit = NULL;
}

