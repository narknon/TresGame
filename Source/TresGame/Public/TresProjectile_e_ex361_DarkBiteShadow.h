#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresNotifyInterface.h"
#include "TresProjectile_e_ex361_DarkBiteShadow.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Blueprintable, HideDropdown)
class ATresProjectile_e_ex361_DarkBiteShadow : public AActor, public ITresNotifyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_ShadowEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_ShadowEffData;
    
    ATresProjectile_e_ex361_DarkBiteShadow(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

