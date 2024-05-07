#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "AITestProjectile_BoneCrush.generated.h"

UCLASS(Abstract, Blueprintable)
class AAITestProjectile_BoneCrush : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bFollowsVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFollowsVelRate;
    
public:
    AAITestProjectile_BoneCrush(const FObjectInitializer& ObjectInitializer);
};

