#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttackIntervalParam_e_ex082.generated.h"

USTRUCT(BlueprintType)
struct FAttackIntervalParam_e_ex082 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableAttack: 1;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FFloatInterval IntervalTimeRange;
    
    TRESGAME_API FAttackIntervalParam_e_ex082();
};

