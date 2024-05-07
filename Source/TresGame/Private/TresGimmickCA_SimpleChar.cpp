#include "TresGimmickCA_SimpleChar.h"

void ATresGimmickCA_SimpleChar::RequestSpawnPrize() {
}


ATresGimmickCA_SimpleChar::ATresGimmickCA_SimpleChar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_prizeKind = ETresDropItemID::ITEM_Crab;
    this->m_prizeSpawnUpDirectionOffset = 1.00f;
    this->m_DisableSpawnPrizeAuto = false;
}

