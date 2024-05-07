#pragma once
#include "CoreMinimal.h"
#include "TresEffectActor.h"
#include "TresEffectActor_e_ex721_ThornChain.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class ATresEffectActor_e_ex721_ThornChain : public ATresEffectActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ThornChainEffectAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_ThornChainEffectCmp;
    
public:
    ATresEffectActor_e_ex721_ThornChain(const FObjectInitializer& ObjectInitializer);
};

