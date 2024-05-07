#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "EX354_ArtemaWarpShotSet.h"
#include "TresAttack14_e_ex354_SpawnArtemaWarpShot.generated.h"

class ATresProjectileBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack14_e_ex354_SpawnArtemaWarpShot : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX354_ArtemaWarpShotSet m_ShotSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileBase* m_Projectile;
    
    UTresAttack14_e_ex354_SpawnArtemaWarpShot();
};

