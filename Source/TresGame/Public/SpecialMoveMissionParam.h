#pragma once
#include "CoreMinimal.h"
#include "EDancePerformType.h"
#include "EDanceActorType.h"
#include "SpecialMoveMissionParam.generated.h"

USTRUCT(BlueprintType)
struct FSpecialMoveMissionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDancePerformType perform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDanceActorType ActorType;
    
    TRESGAME_API FSpecialMoveMissionParam();
};

