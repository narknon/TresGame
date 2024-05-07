#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex026_WeaponAttackBase.h"
#include "TresAttack2_e_ex026_MachineGunFire.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack2_e_ex026_MachineGunFire : public UTresAttack_e_ex026_WeaponAttackBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_IntervalTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_ShotMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_ModifyPitch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinShotAnglePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxShotAnglePitch;
    
    UTresAttack2_e_ex026_MachineGunFire();
};

