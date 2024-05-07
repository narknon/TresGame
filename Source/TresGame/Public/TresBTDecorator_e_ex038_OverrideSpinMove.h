#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex038_OverrideSpinMove.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_e_ex038_OverrideSpinMove : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OneRotationTime;
    
public:
    UTresBTDecorator_e_ex038_OverrideSpinMove();
};

