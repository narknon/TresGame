#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBetweenSpeedEvent.h"
#include "TresGumiShipActorCompoBase.h"
#include "TresGumiShipTouchSpeedPointEvent.h"
#include "TresGumiShipDirectParam.h"
#include "TresGumiShipDirectSpeedCompo.generated.h"

class UTresGumiShipPlayerAccelerationBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipDirectSpeedCompo : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGumiShipTouchSpeedPointEvent> m_DirectParamsWhenPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGumiShipBetweenSpeedEvent> m_DirectParamsWhenBetween;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipDirectParam m_DirectParamWhenUseNitro;
    
public:
    UTresGumiShipDirectSpeedCompo();
protected:
    UFUNCTION(BlueprintCallable)
    void _OnUseNitro();
    
    UFUNCTION(BlueprintCallable)
    void _OnChangeAccelCompo(UTresGumiShipPlayerAccelerationBase* pCompo);
    
};

