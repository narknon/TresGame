#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresMI_02GeneratorRuleParamArray.h"
#include "TresMI_02BossPartsGeneratorRule.generated.h"

UCLASS(Blueprintable)
class UTresMI_02BossPartsGeneratorRule : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresMI_02GeneratorRuleParamArray> DataArray;
    
    UTresMI_02BossPartsGeneratorRule();
};

