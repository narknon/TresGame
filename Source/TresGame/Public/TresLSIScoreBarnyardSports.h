#pragma once
#include "CoreMinimal.h"
#include "TresLSIScoreBarnyardSports.generated.h"

USTRUCT(BlueprintType)
struct FTresLSIScoreBarnyardSports {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 the100m;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 hurdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 triplejump;
    
    TRESGAME_API FTresLSIScoreBarnyardSports();
};

