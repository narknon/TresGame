#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresInterpTrackIndirectLightingCacheQualityControlKey.generated.h"

USTRUCT(BlueprintType)
struct FTresInterpTrackIndirectLightingCacheQualityControlKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EIndirectLightingCacheQuality> m_Quality;
    
    TRESGAME_API FTresInterpTrackIndirectLightingCacheQualityControlKey();
};

