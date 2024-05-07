#pragma once
#include "CoreMinimal.h"
#include "TresTimeGaugeParam_e_ex356.generated.h"

USTRUCT(BlueprintType)
struct FTresTimeGaugeParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubValueIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubValue;
    
    TRESGAME_API FTresTimeGaugeParam_e_ex356();
};

