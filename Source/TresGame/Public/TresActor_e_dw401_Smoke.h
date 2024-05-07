#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresActor_e_dw401_Smoke.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Blueprintable, HideDropdown)
class ATresActor_e_dw401_Smoke : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_SmokeEff;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_SmokeEffData;
    
public:
    ATresActor_e_dw401_Smoke(const FObjectInitializer& ObjectInitializer);
};

