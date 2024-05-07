#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSequentialProjectileBase.h"
#include "TresGumiShipSpWeapon050Projectile.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipSpWeapon050Projectile : public ATresGumiShipSequentialProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwitchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    ATresGumiShipSpWeapon050Projectile(const FObjectInitializer& ObjectInitializer);
};

