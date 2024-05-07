#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionJumpBase.h"
#include "TresAttack2_n_mi202_Hip.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack2_n_mi202_Hip : public UTresNpcAttackDefinitionJumpBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RootHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HomingSpeed;
    
public:
    UTresAttack2_n_mi202_Hip();
};

