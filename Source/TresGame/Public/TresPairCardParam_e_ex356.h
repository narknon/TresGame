#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyPressCardAttribute_e_ex356.h"
#include "TresPairCardParam_e_ex356.generated.h"

USTRUCT(BlueprintType)
struct FTresPairCardParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PressStartTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackStartDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyPressCardAttribute_e_ex356::Type> AttributeType;
    
    TRESGAME_API FTresPairCardParam_e_ex356();
};

