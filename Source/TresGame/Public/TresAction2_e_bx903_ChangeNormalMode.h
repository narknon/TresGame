#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_bx903_ChangeNormalMode.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_bx903_ChangeNormalMode : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DownSpeed;
    
public:
    UTresAction2_e_bx903_ChangeNormalMode();
};

