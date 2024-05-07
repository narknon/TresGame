#pragma once
#include "CoreMinimal.h"
#include "TresFloat32_RangeDegree.generated.h"

USTRUCT(BlueprintType)
struct FTresFloat32_RangeDegree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxAngle;
    
    TRESGAME_API FTresFloat32_RangeDegree();
};

