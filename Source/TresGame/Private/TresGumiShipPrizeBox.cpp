#include "TresGumiShipPrizeBox.h"
#include "GameFramework/ProjectileMovementComponent.h"

ATresGumiShipPrizeBox::ATresGumiShipPrizeBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RollingDistance = 10000.00f;
    this->Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Movement"));
    this->RespawnTime = 1.00f;
    this->RespawnDistance = 10000.00f;
}

