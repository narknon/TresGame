#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction4_e_ex351_RevengeStop.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction4_e_ex351_RevengeStop : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SlowRateStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SlowRate;
    
    UTresAction4_e_ex351_RevengeStop();
};

