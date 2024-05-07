#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttackIntervalParam_e_ex082.h"
#include "TresMissionManagerParam_e_ex082.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTresMissionManagerParam_e_ex082 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float ModeChangeTimeList[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttackIntervalParam_e_ex082> AttackIntervalParamList;
    
    UTresMissionManagerParam_e_ex082();
};

