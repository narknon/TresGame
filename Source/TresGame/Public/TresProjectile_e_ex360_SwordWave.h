#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex360_SwordWave.generated.h"

UCLASS(Blueprintable)
class ATresProjectile_e_ex360_SwordWave : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RollSpeed;
    
    ATresProjectile_e_ex360_SwordWave(const FObjectInitializer& ObjectInitializer);
};

