#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AFWaterRide.h"
#include "TresPlayerState_AFWaterRide.generated.h"

class ATresAttractionPawnWaterRide;

UCLASS(Blueprintable)
class UTresPlayerState_AFWaterRide : public UTresCharState_AFWaterRide {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresAttractionPawnWaterRide* m_pObj;
    
public:
    UTresPlayerState_AFWaterRide();
};

