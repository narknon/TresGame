#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx353ProjectileSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx353ProjectileSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnAngleYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnAnglePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    TRESGAME_API FTresEnemyEx353ProjectileSpawnInfo();
};

