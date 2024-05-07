#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack10_e_bx901_DarkCubeNeedle.generated.h"

class ATresProjectileBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack10_e_bx901_DarkCubeNeedle : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UTresAttack10_e_bx901_DarkCubeNeedle();
};

