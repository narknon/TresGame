#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_ShadowQuality -FallbackName=ESQEX_ShadowQuality
#include "TresInterpTrackShadowQualityControlKey.generated.h"

USTRUCT(BlueprintType)
struct FTresInterpTrackShadowQualityControlKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ESQEX_ShadowQuality> m_Quality;
    
    TRESGAME_API FTresInterpTrackShadowQualityControlKey();
};

