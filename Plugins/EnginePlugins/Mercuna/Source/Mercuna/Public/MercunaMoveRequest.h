#pragma once
#include "CoreMinimal.h"
#include "MercunaMoveRequest.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct MERCUNA_API FMercunaMoveRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    AActor* GoalActor;
    
    FMercunaMoveRequest();
};

