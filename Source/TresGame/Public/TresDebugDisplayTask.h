#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresTaskBase.h"
#include "TresDebugDisplayTask.generated.h"

class UTresInputTask;
class UTresTaskExecutor;
class UTresDebugTask;

UCLASS(Abstract, Blueprintable)
class UTresDebugDisplayTask : public UTresTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresInputTask* InputManaer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresTaskExecutor* m_pTaskExecuter;
    
public:
    UTresDebugDisplayTask();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresTaskExecutor* GetTresTaskExecutor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetArgs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAppScale();
    
    UFUNCTION(BlueprintCallable)
    void CreateDebugTask(TSubclassOf<UTresDebugTask> Class, UTresDebugTask*& Out);
    
};

