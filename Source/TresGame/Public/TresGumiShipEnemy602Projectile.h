#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActualProjectile.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemy602Projectile.generated.h"

UCLASS(Blueprintable)
class ATresGumiShipEnemy602Projectile : public ATresGumiShipActualProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FirstVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LimitRotation;
    
    ATresGumiShipEnemy602Projectile(const FObjectInitializer& ObjectInitializer);
};

