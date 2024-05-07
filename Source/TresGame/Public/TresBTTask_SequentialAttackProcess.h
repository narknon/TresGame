#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBTTask_SequentialExecProcess.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_SequentialAttackProcess.generated.h"

class UEnvQuery;
class UTresActionDefinitionBase;

UCLASS(Abstract, Blueprintable)
class UTresBTTask_SequentialAttackProcess : public UTresBTTask_SequentialExecProcess {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_QueryInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_BlackboardTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_AttackQueryInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresActionDefinitionBase> m_ActionDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_BlackboardAttackDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTurnTo;
    
    UTresBTTask_SequentialAttackProcess();
};

