#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresActor_e_ex771_HvnEnvEffect.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Blueprintable)
class ATresActor_e_ex771_HvnEnvEffect : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_HvnEnvEff;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_HvnEnvEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_HvnEnvBt04EffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HvnEnvEffAlphaMin;
    
public:
    ATresActor_e_ex771_HvnEnvEffect(const FObjectInitializer& ObjectInitializer);
};

