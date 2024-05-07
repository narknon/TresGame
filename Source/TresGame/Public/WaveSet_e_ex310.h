#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WaveInfo_e_ex310.h"
#include "WaveSet_e_ex310.generated.h"

class ATresProjectile_e_ex310_Wave;
class ATresProjectile_e_ex310_Wave_OneCollision;

USTRUCT(BlueprintType)
struct FWaveSet_e_ex310 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_e_ex310_Wave> pWaveSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_e_ex310_Wave_OneCollision> pOneCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaveInfo_e_ex310> WaveInfoArray;
    
    TRESGAME_API FWaveSet_e_ex310();
};

