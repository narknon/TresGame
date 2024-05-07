#pragma once
#include "CoreMinimal.h"
#include "TresShopActor.h"
#include "TresShopActorMogli.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class ATresShopActorMogli : public ATresShopActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_BaseEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pBaseEffect;
    
public:
    ATresShopActorMogli(const FObjectInitializer& ObjectInitializer);
};

