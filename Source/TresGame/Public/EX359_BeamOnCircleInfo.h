#pragma once
#include "CoreMinimal.h"
#include "EX359_BeamOnCircleInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX359_BeamOnCircleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNotify;
    
    TRESGAME_API FEX359_BeamOnCircleInfo();
};

