#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_fz903_InstallingArmor.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_fz903_InstallingArmor : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_EyeEmissiveCurveData;
    
    UTresAction1_e_fz903_InstallingArmor();
};

