#pragma once
#include "CoreMinimal.h"
#include "TresPhotoHologramEditEffectDef.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresPhotoHologramEditEffectDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetMaxRootSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* EditMarkerEffectData;
    
    TRESGAME_API FTresPhotoHologramEditEffectDef();
};

