#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorCompoBase.h"
#include "TresGMInputResult.h"
#include "TresGumiShipPlayerAccelerationBase.generated.h"

class ATresGumiShipPlayerControllerBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipPlayerAccelerationBase : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipUseNitro);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresGumiShipChangeSpeed, const float, fOldSeed, const float, fNewSpeed, const float, fRatio);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipUseNitro m_OnUseNitroDispather;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipChangeSpeed m_OnChangeSpeedDispather;
    
    UTresGumiShipPlayerAccelerationBase();
protected:
    UFUNCTION(BlueprintCallable)
    void _ReceiveInputR1L1ButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
};

