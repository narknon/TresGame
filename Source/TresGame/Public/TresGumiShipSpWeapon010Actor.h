#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSpecialWeaponBaseActor.h"
#include "TresGumiShipSpWeapon010Actor.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipSpWeapon010Actor : public ATresGumiShipSpecialWeaponBaseActor {
    GENERATED_BODY()
public:
    ATresGumiShipSpWeapon010Actor(const FObjectInitializer& ObjectInitializer);
};

