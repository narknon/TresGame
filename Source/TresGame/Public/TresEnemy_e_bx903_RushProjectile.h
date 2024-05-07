#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresEnemy_e_bx903_RushProjectile.generated.h"

UCLASS(Blueprintable)
class ATresEnemy_e_bx903_RushProjectile : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ImpactedEndTime;
    
    ATresEnemy_e_bx903_RushProjectile(const FObjectInitializer& ObjectInitializer);
};

