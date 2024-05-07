#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionJumpBase.h"
#include "TresAttack4_n_ra203_Jump.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack4_n_ra203_Jump : public UTresNpcAttackDefinitionJumpBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RootHeight;
    
    UTresAttack4_n_ra203_Jump();
};

