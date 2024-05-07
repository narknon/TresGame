#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx711_AthleticFlowParam.h"
#include "TresEnemyEx711_AthleticFlowLevelParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx711_AthleticFlowLevelParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx711_AthleticFlowParam> m_AthleticFlowParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx711_AthleticFlowParam> m_AthleticFlowReverseParamArray;
    
    TRESGAME_API FTresEnemyEx711_AthleticFlowLevelParam();
};

