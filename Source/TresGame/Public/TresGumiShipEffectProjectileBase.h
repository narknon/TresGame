#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipProjectileBase.h"
#include "TresGumiShipEffectProjectileBase.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class ATresGumiShipEffectProjectileBase : public ATresGumiShipProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pAttachEffectType;
    
public:
    ATresGumiShipEffectProjectileBase(const FObjectInitializer& ObjectInitializer);
};

