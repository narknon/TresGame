#pragma once
#include "CoreMinimal.h"
#include "ETresLSIHowtoPlayBaseballMode.h"
#include "TresLSIScoreEntryHowtoPlayBaseball.generated.h"

USTRUCT(BlueprintType)
struct FTresLSIScoreEntryHowtoPlayBaseball {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresLSIHowtoPlayBaseballMode mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    TRESGAME_API FTresLSIScoreEntryHowtoPlayBaseball();
};

