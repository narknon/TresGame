#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_OverrideMoveSpeed.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_OverrideMoveSpeed : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpeedRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TimeLimit;
    
    UTresBTDecorator_OverrideMoveSpeed();
};

