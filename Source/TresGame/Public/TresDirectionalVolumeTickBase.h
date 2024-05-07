#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresDirectionalVolumeTickBase.generated.h"

class UTresDebugArrowComponent;

UCLASS(Abstract, Blueprintable)
class ATresDirectionalVolumeTickBase : public ATresVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PermitAngle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresDebugArrowComponent* DebugArrowComponent;
    
public:
    ATresDirectionalVolumeTickBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetEnableExecute(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableExecute();
    
};

