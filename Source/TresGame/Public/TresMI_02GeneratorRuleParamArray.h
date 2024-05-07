#pragma once
#include "CoreMinimal.h"
#include "TresMI_02GeneratorRuleParam.h"
#include "TresMI_02GeneratorRuleParamArray.generated.h"

USTRUCT(BlueprintType)
struct FTresMI_02GeneratorRuleParamArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresMI_02GeneratorRuleParam> Params;
    
    TRESGAME_API FTresMI_02GeneratorRuleParamArray();
};

