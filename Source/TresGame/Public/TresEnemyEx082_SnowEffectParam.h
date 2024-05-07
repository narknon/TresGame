#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx082_SnowEffectParam.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresEnemyEx082_SnowEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    TRESGAME_API FTresEnemyEx082_SnowEffectParam();
};

