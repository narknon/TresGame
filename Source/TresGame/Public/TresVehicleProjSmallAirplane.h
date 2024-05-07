#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresVehicleProjSmallAirplane.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresVehicleProjSmallAirplane : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Param_WindFlag;
    
    ATresVehicleProjSmallAirplane(const FObjectInitializer& ObjectInitializer);
};

