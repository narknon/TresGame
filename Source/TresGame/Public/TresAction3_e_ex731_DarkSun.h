#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_ex731_DarkSun.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction3_e_ex731_DarkSun : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCameraEffecetGroupNo;
    
    UTresAction3_e_ex731_DarkSun();
};

