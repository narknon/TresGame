#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNpcAttackDefinitionRanged.h"
#include "TresAttack3_n_bx202_RocketPunch.generated.h"

class ATresProjectileBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack3_n_bx202_RocketPunch : public UTresNpcAttackDefinitionRanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxDistancePunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OffsetZ;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileBase* m_pProjPunch;
    
public:
    UTresAttack3_n_bx202_RocketPunch();
};

