#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex354_FieldChangeTime.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_e_ex354_FieldChangeTime : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFieldChangePastTime;
    
    UTresBTDecorator_e_ex354_FieldChangeTime();
};

