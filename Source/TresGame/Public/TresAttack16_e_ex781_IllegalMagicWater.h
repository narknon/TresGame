#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack16_e_ex781_IllegalMagicWater.generated.h"

class ATresProjectileBase;

UCLASS(Blueprintable)
class UTresAttack16_e_ex781_IllegalMagicWater : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fThrowAngle;
    
    UTresAttack16_e_ex781_IllegalMagicWater();
};

