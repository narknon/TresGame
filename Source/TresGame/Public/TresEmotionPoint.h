#pragma once
#include "CoreMinimal.h"
#include "TresEmotionPoint.generated.h"

USTRUCT(BlueprintType)
struct FTresEmotionPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Hope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Fear;
    
    TRESGAME_API FTresEmotionPoint();
};

