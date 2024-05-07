#pragma once
#include "CoreMinimal.h"
#include "TresEnemyBigDealCardSpawnParam_e_ex356.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyBigDealCardSpawnParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CardRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CardHeightDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OneStepCardNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StepNum;
    
    TRESGAME_API FTresEnemyBigDealCardSpawnParam_e_ex356();
};

