#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex003_FlameMode.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex003_FlameMode : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoveSpeed;
    
public:
    UTresAction1_e_ex003_FlameMode();
};

