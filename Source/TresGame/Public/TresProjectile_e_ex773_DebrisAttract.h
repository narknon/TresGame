#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresProjectile_e_ex773_DebrisAttract.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Blueprintable, HideDropdown)
class ATresProjectile_e_ex773_DebrisAttract : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_DebrisEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_DebrisEffData;
    
    ATresProjectile_e_ex773_DebrisAttract(const FObjectInitializer& ObjectInitializer);
};

