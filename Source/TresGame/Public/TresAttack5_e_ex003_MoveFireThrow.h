#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack5_e_ex003_MoveFireThrow.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack5_e_ex003_MoveFireThrow : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ShotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_shotInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShotAngle;
    
public:
    UTresAttack5_e_ex003_MoveFireThrow();
};

