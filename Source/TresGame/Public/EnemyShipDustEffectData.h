#pragma once
#include "CoreMinimal.h"
#include "EnemyShipDustEffectData.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FEnemyShipDustEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_Particle;
    
    TRESGAME_API FEnemyShipDustEffectData();
};

