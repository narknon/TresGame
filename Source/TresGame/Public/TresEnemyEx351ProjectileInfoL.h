#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyEx351ProjectileInfoL.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx351ProjectileInfoL {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SpawnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator FireAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireDelay;
    
    TRESGAME_API FTresEnemyEx351ProjectileInfoL();
};

