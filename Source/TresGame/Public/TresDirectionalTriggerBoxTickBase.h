#pragma once
#include "CoreMinimal.h"
#include "TresTriggerBox.h"
#include "TresDirectionalTriggerBoxTickBase.generated.h"

class UTresDebugArrowComponent;

UCLASS(Blueprintable)
class ATresDirectionalTriggerBoxTickBase : public ATresTriggerBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PermitAngle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresDebugArrowComponent* DebugArrowComponent;
    
public:
    ATresDirectionalTriggerBoxTickBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetEnableExecute(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableExecute();
    
};

