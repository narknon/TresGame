#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx361ProjectileSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx361ProjectileSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShockWaveRotYaw;
    
    TRESGAME_API FTresEnemyEx361ProjectileSpawnInfo();
};

