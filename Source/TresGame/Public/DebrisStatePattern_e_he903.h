#pragma once
#include "CoreMinimal.h"
#include "DebrisStatePattern_e_he903.generated.h"

USTRUCT(BlueprintType)
struct FDebrisStatePattern_e_he903 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fValidHpPer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> fStateChangeRateArray;
    
    TRESGAME_API FDebrisStatePattern_e_he903();
};

