#include "TresGumiShipEnemy601Pawn.h"
#include "TresGumiShipAtkCollisionSetCompo.h"

ATresGumiShipEnemy601Pawn::ATresGumiShipEnemy601Pawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pRushAtkCollision = CreateDefaultSubobject<UTresGumiShipAtkCollisionSetCompo>(TEXT("RushAtkCollision"));
}

