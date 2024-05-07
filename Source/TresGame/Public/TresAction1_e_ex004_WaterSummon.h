#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex004_WaterSummon.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex004_WaterSummon : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bNowNotWaterSummon: 1;
    
    UTresAction1_e_ex004_WaterSummon();
};

