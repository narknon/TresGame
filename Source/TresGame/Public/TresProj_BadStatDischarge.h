#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProj_BadStatDischarge.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresProj_BadStatDischarge : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_HitTailEffect;
    
public:
    ATresProj_BadStatDischarge(const FObjectInitializer& ObjectInitializer);
};

