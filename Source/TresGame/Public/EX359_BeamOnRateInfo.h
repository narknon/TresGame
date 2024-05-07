#pragma once
#include "CoreMinimal.h"
#include "EX359_BeamOnRateInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX359_BeamOnRateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNotify;
    
    TRESGAME_API FEX359_BeamOnRateInfo();
};

