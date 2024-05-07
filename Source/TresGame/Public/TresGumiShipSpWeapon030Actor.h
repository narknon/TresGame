#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSpecialWeaponBaseActor.h"
#include "TresGumiShipSpWeapon030Actor.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipSpWeapon030Actor : public ATresGumiShipSpecialWeaponBaseActor {
    GENERATED_BODY()
public:
    ATresGumiShipSpWeapon030Actor(const FObjectInitializer& ObjectInitializer);
};

