#pragma once
#include "CoreMinimal.h"
#include "TresInt32_Range.generated.h"

USTRUCT(BlueprintType)
struct FTresInt32_Range {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nMaxValue;
    
    TRESGAME_API FTresInt32_Range();
};

