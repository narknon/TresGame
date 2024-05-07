#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EX359_GuardBeamInfoSet.h"
#include "TresAttackDefinitionBase.h"
#include "EX359_LaserOnTimeInfoSet.h"
#include "TresAttack9_e_ex359_FinalBrake_LaserRainTriangle.generated.h"

class ATresProjectile_e_ex359_GuardBeamSpawner;
class ATresProjectileBase;
class ATresProjectile_e_ex359_LaserSpawner;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack9_e_ex359_FinalBrake_LaserRainTriangle : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_e_ex359_LaserSpawner> m_ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX359_LaserOnTimeInfoSet m_LaserOnTimeInfoSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_e_ex359_GuardBeamSpawner> m_GuardBeamProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX359_GuardBeamInfoSet m_GuardBeamInfoSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresProjectileBase*> m_GuardBeamArray;
    
public:
    UTresAttack9_e_ex359_FinalBrake_LaserRainTriangle();
};

