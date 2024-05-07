#pragma once
#include "CoreMinimal.h"
#include "TresSplineGeneratorActorParam.h"
#include "TresSplineGeneratorActorRule.generated.h"

USTRUCT(BlueprintType)
struct FTresSplineGeneratorActorRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresSplineGeneratorActorParam> ParamArray;
    
    TRESGAME_API FTresSplineGeneratorActorRule();
};

