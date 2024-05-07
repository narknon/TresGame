#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSpecialWeaponBaseActor.h"
#include "TresGumiShipElementResistance.h"
#include "TresGumiShipSpWeapon160Actor.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipSpWeapon160Actor : public ATresGumiShipSpecialWeaponBaseActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipElementResistance ElementResistance;
    
public:
    ATresGumiShipSpWeapon160Actor(const FObjectInitializer& ObjectInitializer);
};

