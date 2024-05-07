#pragma once
#include "CoreMinimal.h"
#include "TresBodyTakeDamageEffect.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresBodyTakeDamageEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_DamageEffect;
    
    TRESGAME_API FTresBodyTakeDamageEffect();
};

