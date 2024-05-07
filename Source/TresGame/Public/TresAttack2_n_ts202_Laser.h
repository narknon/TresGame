#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNpcAttackDefinitionRanged.h"
#include "TresAttack2_n_ts202_Laser.generated.h"

class ATresProjectileBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack2_n_ts202_Laser : public UTresNpcAttackDefinitionRanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UTresAttack2_n_ts202_Laser();
};

