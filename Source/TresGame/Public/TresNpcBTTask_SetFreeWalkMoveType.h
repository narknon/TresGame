#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresNpcBTTask_SetFreeWalkMoveType.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTTask_SetFreeWalkMoveType : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWalk;
    
    UTresNpcBTTask_SetFreeWalkMoveType();
};

