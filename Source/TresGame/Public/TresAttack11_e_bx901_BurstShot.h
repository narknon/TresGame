#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack11_e_bx901_BurstShot.generated.h"

class ATresProjectileBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack11_e_bx901_BurstShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_Projectile_Shot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ShotSpawnBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vShotSpawnLocationOffset;
    
    UTresAttack11_e_bx901_BurstShot();
};

