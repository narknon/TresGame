#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex003_Attack2.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex003_Attack2 : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HomingInitialSpeed;
    
    ATresProjectile_e_ex003_Attack2(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void OnTickMove(float InDeltaTime);
    
};

