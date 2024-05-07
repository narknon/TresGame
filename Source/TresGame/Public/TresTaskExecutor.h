#pragma once
#include "CoreMinimal.h"
#include "TresTaskExecuterBase.h"
#include "TresTaskExecutor.generated.h"

class UTresTaskBase;

UCLASS(Blueprintable)
class UTresTaskExecutor : public UTresTaskExecuterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresTaskBase*> m_TaskArrayGarbage;
    
public:
    UTresTaskExecutor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTresTaskBase*> GetTaskArray();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAll();
    
};

