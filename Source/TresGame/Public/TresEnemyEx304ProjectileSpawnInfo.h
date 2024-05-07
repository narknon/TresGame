#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx304ProjectileSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx304ProjectileSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnAngleYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnAnglePitch;
    
    TRESGAME_API FTresEnemyEx304ProjectileSpawnInfo();
};

