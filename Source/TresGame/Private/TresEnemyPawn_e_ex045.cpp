#include "TresEnemyPawn_e_ex045.h"

bool ATresEnemyPawn_e_ex045::HasHorn() {
    return false;
}

ATresEnemyPawn_e_ex045::ATresEnemyPawn_e_ex045(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_EffectDataAsset = NULL;
    this->m_bHasHorn = true;
}

