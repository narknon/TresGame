#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction6_e_ex353_ThornWildDanceStart.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, HideDropdown)
class UTresAction6_e_ex353_ThornWildDanceStart : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_FloatSpeedData;
    
    UTresAction6_e_ex353_ThornWildDanceStart();
};

