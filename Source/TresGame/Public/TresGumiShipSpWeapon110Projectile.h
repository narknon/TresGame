#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActualProjectile.h"
#include "TresGumiShipSpWeapon110Projectile.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipSpWeapon110Projectile : public ATresGumiShipActualProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StraightLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalTime;
    
    ATresGumiShipSpWeapon110Projectile(const FObjectInitializer& ObjectInitializer);
};

