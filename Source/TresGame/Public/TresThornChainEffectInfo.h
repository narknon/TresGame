#pragma once
#include "CoreMinimal.h"
#include "TresThornChainEffectInfo.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresThornChainEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_EffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AttachName;
    
    TRESGAME_API FTresThornChainEffectInfo();
};

