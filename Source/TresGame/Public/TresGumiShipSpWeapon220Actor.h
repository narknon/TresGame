#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSpecialWeaponBaseActor.h"
#include "TresGumiShipSpWeapon220Actor.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipSpWeapon220Actor : public ATresGumiShipSpecialWeaponBaseActor {
    GENERATED_BODY()
public:
    ATresGumiShipSpWeapon220Actor(const FObjectInitializer& ObjectInitializer);
};

