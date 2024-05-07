#pragma once
#include "CoreMinimal.h"
#include "ETresLSIHowtoPlayGolfMode.h"
#include "TresLSIScoreEntryHowtoPlayGolf.generated.h"

USTRUCT(BlueprintType)
struct FTresLSIScoreEntryHowtoPlayGolf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresLSIHowtoPlayGolfMode mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    TRESGAME_API FTresLSIScoreEntryHowtoPlayGolf();
};

