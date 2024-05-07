#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresSplineGeneratorActorParam.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTresSplineGeneratorActorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Span;
    
    TRESGAME_API FTresSplineGeneratorActorParam();
};

