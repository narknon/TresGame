#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex106_Attack1.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex106_Attack1 : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
public:
    ATresProjectile_e_ex106_Attack1(const FObjectInitializer& ObjectInitializer);
};

