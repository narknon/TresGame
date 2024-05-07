#include "TresGumiShipEnemy612Pawn.h"

ATresGumiShipEnemy612Pawn::ATresGumiShipEnemy612Pawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Gravity = -9800.00f;
    this->ProjectileMaxSpeed = 4000.00f;
    this->PitchVelocity = 90.00f;
}

