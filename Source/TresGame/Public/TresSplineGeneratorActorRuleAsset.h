#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresSplineGeneratorActorRule.h"
#include "TresSplineGeneratorActorRuleAsset.generated.h"

UCLASS(Blueprintable)
class UTresSplineGeneratorActorRuleAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresSplineGeneratorActorRule> DataArray;
    
    UTresSplineGeneratorActorRuleAsset();
};

