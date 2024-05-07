#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EEX354_TargetMoveDir.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTDecorator_e_ex354_TargetMoveDirection.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_e_ex354_TargetMoveDirection : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EEX354_TargetMoveDir> m_TargetMoveDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAngleDiffRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinTargetVelocity;
    
    UTresBTDecorator_e_ex354_TargetMoveDirection();
};

