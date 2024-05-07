#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "EX359_BeamOnTimeInfoSet.h"
#include "TresAttack9_e_ex359_FinalBrake_BeamRush.generated.h"

class ATresProjectile_e_ex359_BeamSpawner;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack9_e_ex359_FinalBrake_BeamRush : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_e_ex359_BeamSpawner> m_ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectile_e_ex359_BeamSpawner* m_Projectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX359_BeamOnTimeInfoSet m_BeamOnTimeInfoSet;
    
    UTresAttack9_e_ex359_FinalBrake_BeamRush();
};

