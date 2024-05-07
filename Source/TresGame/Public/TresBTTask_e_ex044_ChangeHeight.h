#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBTTask_Action.h"
#include "TresActionTaskParam.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_e_ex044_ChangeHeight.generated.h"

class UTresAction1_e_ex044_ChangeHeight;

UCLASS(Blueprintable)
class UTresBTTask_e_ex044_ChangeHeight : public UTresBTTask_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresAction1_e_ex044_ChangeHeight> m_ActionDefinition_e_ex044;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresActionTaskParam> ActionTaskParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_HeightValueKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBBKey;
    
    UTresBTTask_e_ex044_ChangeHeight();
};

