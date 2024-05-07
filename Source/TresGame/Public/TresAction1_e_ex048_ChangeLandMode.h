#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex048_ChangeLandMode.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex048_ChangeLandMode : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DownGravityScale;
    
    UTresAction1_e_ex048_ChangeLandMode();
};

