#pragma once
#include "CoreMinimal.h"
#include "TresEx353HitEffectManager.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FTresEx353HitEffectManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_LaserEffectCmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_SparkEffectCmp;
    
public:
    TRESGAME_API FTresEx353HitEffectManager();
};

