#pragma once
#include "CoreMinimal.h"
#include "ETresLSIMusicFarmerMode.h"
#include "TresLSIScoreEntryMusicalFarmer.generated.h"

USTRUCT(BlueprintType)
struct FTresLSIScoreEntryMusicalFarmer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresLSIMusicFarmerMode mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    TRESGAME_API FTresLSIScoreEntryMusicalFarmer();
};

