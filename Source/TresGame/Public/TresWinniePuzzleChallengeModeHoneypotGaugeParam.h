#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleChallengeModeHoneypotGaugeParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleChallengeModeHoneypotGaugeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeValueIncValueRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GaugeValueDecSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnInSameRow;
    
    TRESGAME_API FTresWinniePuzzleChallengeModeHoneypotGaugeParam();
};

