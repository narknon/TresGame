#pragma once
#include "CoreMinimal.h"
#include "TresTaskBase.h"
#include "TresTsGameFlowTask.generated.h"

class UTresTaskExecuterBase;
class UTresTsAwardTask;

UCLASS(Abstract, Blueprintable)
class UTresTsGameFlowTask : public UTresTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresTaskExecuterBase* m_pTaskExecuter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresTsAwardTask* m_pAwardTask;
    
public:
    UTresTsGameFlowTask();
};

