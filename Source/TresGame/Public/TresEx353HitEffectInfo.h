#pragma once
#include "CoreMinimal.h"
#include "TresEx353HitEffectInfo.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresEx353HitEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_EffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_AtkGrpNames;
    
    TRESGAME_API FTresEx353HitEffectInfo();
};

