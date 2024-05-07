#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_ex301_Move.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction3_e_ex301_Move : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoveSpeed;
    
public:
    UTresAction3_e_ex301_Move();
};

