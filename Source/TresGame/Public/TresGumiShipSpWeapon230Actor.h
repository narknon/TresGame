#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSpecialWeaponBaseActor.h"
#include "TresGumiShipSpWeapon230Actor.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipSpWeapon230Actor : public ATresGumiShipSpecialWeaponBaseActor {
    GENERATED_BODY()
public:
    ATresGumiShipSpWeapon230Actor(const FObjectInitializer& ObjectInitializer);
};

