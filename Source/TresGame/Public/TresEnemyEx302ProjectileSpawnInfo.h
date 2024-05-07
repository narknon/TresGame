#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx302ProjectileSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx302ProjectileSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnAngle;
    
    TRESGAME_API FTresEnemyEx302ProjectileSpawnInfo();
};

