#pragma once
#include "CoreMinimal.h"
#include "TresRaPuddingPosition.generated.h"

class ATresRaPuddingSplineActor;

USTRUCT(BlueprintType)
struct FTresRaPuddingPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<ATresRaPuddingSplineActor> TargetActor;
    
    TRESGAME_API FTresRaPuddingPosition();
};

