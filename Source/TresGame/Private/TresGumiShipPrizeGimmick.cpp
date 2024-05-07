#include "TresGumiShipPrizeGimmick.h"

ATresGumiShipPrizeGimmick::ATresGumiShipPrizeGimmick(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_KindID = GUMI_SHIP_PRIZE_ITEM_KIND::GM_EX_PRIZE_MIN;
    this->m_fSuctionRange = 1500.00f;
    this->m_fSuctionSpeed = 600.00f;
}

