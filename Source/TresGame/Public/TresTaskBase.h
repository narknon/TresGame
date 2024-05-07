#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresTaskBase.generated.h"

class AActor;
class UTresTaskExecutor;

UCLASS(Abstract, Blueprintable)
class UTresTaskBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresTaskExecutor*> m_TaskManArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* m_pParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_pParentActor;
    
public:
    UTresTaskBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnable();
    
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_PostLoadMap();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_NortifyDestroy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Tick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Setup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Enable();
    
};

