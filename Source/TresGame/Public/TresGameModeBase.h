#pragma once
#include "CoreMinimal.h"
#include "TresGameModeBaseLastCleanupTickFunction.h"
#include "SQEX_GameMode.h"
#include "TresGameModeBase.generated.h"

class AActor;
class UObject;
class UTresGameInstance;
class UTresFieldVoiceManager;
class UTresTaskExecutor;

UCLASS(Blueprintable, NonTransient)
class ATresGameModeBase : public ASQEX_GameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresGameInstance* m_pTresGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresTaskExecutor* m_pTaskExecuter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_pTempObjectArray;
    
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresFieldVoiceManager* m_pFieldVoiceManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGameModeBaseLastCleanupTickFunction m_LastCleanupTickFunction;
    
    ATresGameModeBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static void TresRequestDestroyActor(AActor* Actor);
    
};

