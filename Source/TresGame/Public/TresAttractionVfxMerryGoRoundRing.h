#pragma once
#include "CoreMinimal.h"
#include "TresEffectActor.h"
#include "TresAttractionVfxMerryGoRoundRing.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class ATresAttractionVfxMerryGoRoundRing : public ATresEffectActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_VfxAssetRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_VfxAssetTiming;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_EffectRing;
    
public:
    ATresAttractionVfxMerryGoRoundRing(const FObjectInitializer& ObjectInitializer);
};

