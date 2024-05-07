#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "TresMove1_e_ex039_SpinAttack.generated.h"

class ATresProjectileBase;

UCLASS(Blueprintable, HideDropdown)
class UTresMove1_e_ex039_SpinAttack : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShotTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShotHeight;
    
public:
    UTresMove1_e_ex039_SpinAttack();
};

