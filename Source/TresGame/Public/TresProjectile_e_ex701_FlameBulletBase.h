#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex701_FlameBulletBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex701_FlameBulletBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableHitNormal: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableHitBird: 1;
    
public:
    ATresProjectile_e_ex701_FlameBulletBase(const FObjectInitializer& ObjectInitializer);
};

