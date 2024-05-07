#pragma once
#include "CoreMinimal.h"
#include "ETresRandomDistributionType.h"
#include "TresControlledRandom.generated.h"

USTRUCT(BlueprintType)
struct FTresControlledRandom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresRandomDistributionType::Type> Distribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Period;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Weights;
    
    TRESGAME_API FTresControlledRandom();
};

