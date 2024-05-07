#pragma once
#include "CoreMinimal.h"
#include "TresUInt8_Range.generated.h"

USTRUCT(BlueprintType)
struct FTresUInt8_Range {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_uMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_uMaxValue;
    
    TRESGAME_API FTresUInt8_Range();
};

