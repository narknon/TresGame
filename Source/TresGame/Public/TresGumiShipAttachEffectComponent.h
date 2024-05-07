#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TresGumiShipAttachEffectComponent.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipAttachEffectComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoStart;
    
    UTresGumiShipAttachEffectComponent();
    UFUNCTION(BlueprintCallable)
    void EndEffect();
    
    UFUNCTION(BlueprintCallable)
    void CreateEffect();
    
};

