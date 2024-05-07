#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack9_e_bx901_DarkCubeShot_Normal.generated.h"

class ATresProjectileBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack9_e_bx901_DarkCubeShot_Normal : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ProjectileSpawnBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vProjectileSpawnLocationOffset;
    
    UTresAttack9_e_bx901_DarkCubeShot_Normal();
};

