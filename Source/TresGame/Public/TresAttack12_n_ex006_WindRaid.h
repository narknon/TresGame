#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack12_n_ex006_WindRaid.generated.h"

class ATresProjectileBase;
class ATresCharPawnBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack12_n_ex006_WindRaid : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileBase* m_pProjBlade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pAttackHitPawn;
    
public:
    UTresAttack12_n_ex006_WindRaid();
};

