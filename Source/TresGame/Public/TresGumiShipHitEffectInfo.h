#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipHitEffectInfo.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresGumiShipHitEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsAttach;
    
    TRESGAME_API FTresGumiShipHitEffectInfo();
};

