#include "TresEnemyPawn_e_ex017.h"

bool ATresEnemyPawn_e_ex017::IsMagicSquare() {
    return false;
}

void ATresEnemyPawn_e_ex017::Debug_ForcingCancelMagicSquare() {
}

ATresEnemyPawn_e_ex017::ATresEnemyPawn_e_ex017(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pMagicSquare = NULL;
    this->m_bMagicSquare = false;
    this->m_pro_EffDataAsset = NULL;
}

