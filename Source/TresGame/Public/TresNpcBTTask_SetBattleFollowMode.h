#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresNpcBTTask_SetBattleFollowMode.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTTask_SetBattleFollowMode : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFollowMode;
    
    UTresNpcBTTask_SetBattleFollowMode();
};

