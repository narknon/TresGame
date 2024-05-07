#pragma once
#include "CoreMinimal.h"
#include "TresEnemyex351ProjectileSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyex351ProjectileSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnAngle;
    
    TRESGAME_API FTresEnemyex351ProjectileSpawnInfo();
};

