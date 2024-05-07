#pragma once
#include "CoreMinimal.h"
#include "TresUIGigasGameAward.generated.h"

USTRUCT(BlueprintType)
struct FTresUIGigasGameAward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalizeKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    TRESGAME_API FTresUIGigasGameAward();
};

