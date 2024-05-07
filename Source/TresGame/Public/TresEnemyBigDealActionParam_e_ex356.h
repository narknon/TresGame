#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyBigDealAction_e_ex356.h"
#include "TresEnemyBigDealActionParam_e_ex356.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTresEnemyBigDealActionParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyBigDealAction_e_ex356::Type> ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* VoiceData;
    
    TRESGAME_API FTresEnemyBigDealActionParam_e_ex356();
};

