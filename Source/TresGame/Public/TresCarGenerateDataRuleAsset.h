#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresCarGenerateData.h"
#include "TresCarGenerateDataRuleAsset.generated.h"

UCLASS(Blueprintable)
class UTresCarGenerateDataRuleAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresCarGenerateData> DataArray;
    
    UTresCarGenerateDataRuleAsset();
};

