#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex026_WeaponAttackBase.h"
#include "TresAttack3_e_ex026_MissileAttack.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack3_e_ex026_MissileAttack : public UTresAttack_e_ex026_WeaponAttackBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinForwardExplosionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxForwardExplosionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinBackExplosionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxBackExplosionDistance;
    
    UTresAttack3_e_ex026_MissileAttack();
};

