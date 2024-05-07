#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack9_n_ex001_WaterSwing.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack9_n_ex001_WaterSwing : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMoveTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAttackStartDistance;
    
public:
    UTresAttack9_n_ex001_WaterSwing();
};

