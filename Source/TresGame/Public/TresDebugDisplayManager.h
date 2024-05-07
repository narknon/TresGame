#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresDebugDisplayManager.generated.h"

class UTresTaskExecutor;

UCLASS(Blueprintable)
class UTresDebugDisplayManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresTaskExecutor* m_pTaskExecuter;
    
public:
    UTresDebugDisplayManager();
};

