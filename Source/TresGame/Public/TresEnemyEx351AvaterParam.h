#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx351WarpDirection.h"
#include "TresEnemyEx351AvaterParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx351AvaterParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AppearAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvaterDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyEx351WarpDirection Direction;
    
    TRESGAME_API FTresEnemyEx351AvaterParam();
};

