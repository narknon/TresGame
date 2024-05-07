#pragma once
#include "CoreMinimal.h"
#include "TresPlayerControllerLowerBase.h"
#include "TresGMInputResult.h"
#include "TresGumiShipPlayerControllerBase.generated.h"

class ATresGumiShipPlayerControllerBase;
class UTresGumiShipPlayerInputWorker;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipPlayerControllerBase : public ATresPlayerControllerLowerBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPControllerInput, const FTresGMInputResult&, rResult, const ATresGumiShipPlayerControllerBase*, pController);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipPlayerInputWorker* m_pWorker;
    
public:
    ATresGumiShipPlayerControllerBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugSpeedInfoDraw();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugInputDraw();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugGMKeyConfigTest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugChannelInputDraw();
    
};

