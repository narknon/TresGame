#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresGimmickCA_RunAwayShip_Projectile.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGimmickCA_RunAwayShip_Projectile : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CheckPlayerRange;
    
public:
    ATresGimmickCA_RunAwayShip_Projectile(const FObjectInitializer& ObjectInitializer);
};

