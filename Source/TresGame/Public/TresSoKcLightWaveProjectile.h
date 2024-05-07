#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresSoKcLightWaveProjectile.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresSoKcLightWaveProjectile : public ATresProjectileBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLightWaveProjectileFinishSignature);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pLightWaveBeamEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLightWaveBeamLoopEndWaitTime;
    
public:
    ATresSoKcLightWaveProjectile(const FObjectInitializer& ObjectInitializer);
};

