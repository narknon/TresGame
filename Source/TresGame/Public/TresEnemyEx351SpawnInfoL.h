#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyEx351ProjectileInfoL.h"
#include "TresEnemyEx351SpawnInfoL.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FTresEnemyEx351SpawnInfoL {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> FreezeShotProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsBaseTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx351ProjectileInfoL> ProjectileInfoL;
    
    TRESGAME_API FTresEnemyEx351SpawnInfoL();
};

