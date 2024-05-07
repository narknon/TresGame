#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSpecialWeaponBaseActor.h"
#include "TresGumiShipSpWeapon020Actor.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipSpWeapon020Actor : public ATresGumiShipSpecialWeaponBaseActor {
    GENERATED_BODY()
public:
    ATresGumiShipSpWeapon020Actor(const FObjectInitializer& ObjectInitializer);
};

