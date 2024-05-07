#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleAdditionalBonusParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleAdditionalBonusParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SingleInvocationScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalInvocationScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SingleInvocationAdditionalScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalInvocationAdditionalScore;
    
    TRESGAME_API FTresWinniePuzzleAdditionalBonusParam();
};

