#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActualProjectile.h"
#include "TresGumiShipEnemy625Bullet.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemy625Bullet : public ATresGumiShipActualProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxDeceleration;
    
public:
    ATresGumiShipEnemy625Bullet(const FObjectInitializer& ObjectInitializer);
};

