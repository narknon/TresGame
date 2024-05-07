#pragma once
#include "CoreMinimal.h"
#include "TresComNpcScaleData.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcScaleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWidthBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWidthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPriortyRangeScale;
    
    TRESGAME_API FTresComNpcScaleData();
};

