#pragma once
#include "CoreMinimal.h"
#include "EffectSpawnParam_e_ex304a.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FEffectSpawnParam_e_ex304a {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStartSpawned: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnTimeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SpawnParticleSystem;
    
    TRESGAME_API FEffectSpawnParam_e_ex304a();
};

