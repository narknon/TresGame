#pragma once
#include "CoreMinimal.h"
#include "TresEnemyCardWallParam_e_ex356.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyCardWallParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationRadius;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float RotationStopTimeList[5];
    
    TRESGAME_API FTresEnemyCardWallParam_e_ex356();
};

