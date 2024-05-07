#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack4_n_mi202_Appeal.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack4_n_mi202_Appeal : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableCancel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Range2D;
    
public:
    UTresAttack4_n_mi202_Appeal();
};

