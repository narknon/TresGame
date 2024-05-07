#pragma once
#include "CoreMinimal.h"
#include "TresEnemyBigDealContractionSpeedParam_e_ex356.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyBigDealContractionSpeedParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    TRESGAME_API FTresEnemyBigDealContractionSpeedParam_e_ex356();
};

