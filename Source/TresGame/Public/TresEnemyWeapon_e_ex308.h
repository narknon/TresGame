#pragma once
#include "CoreMinimal.h"
#include "TresWeaponBase.h"
#include "TresEnemyWeapon_e_ex308.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class ATresEnemyWeapon_e_ex308 : public ATresWeaponBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_SickleRotationParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PhantomBlitzOffset;
    
public:
    ATresEnemyWeapon_e_ex308(const FObjectInitializer& ObjectInitializer);
};

