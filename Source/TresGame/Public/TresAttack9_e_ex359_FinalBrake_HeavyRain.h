#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "EX359_BeamOnTimeInfoSet.h"
#include "EX359_LaserWaveInfoSet.h"
#include "TresAttack9_e_ex359_FinalBrake_HeavyRain.generated.h"

class ATresProjectileBase;
class ATresProjectile_e_ex359_BeamSpawner;
class ATresProjectile_e_ex359_LaserSpawner;
class UCurveFloat;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack9_e_ex359_FinalBrake_HeavyRain : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_e_ex359_LaserSpawner> m_LaserProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX359_LaserWaveInfoSet m_LaserInfoSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_e_ex359_BeamSpawner> m_BeamProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX359_BeamOnTimeInfoSet m_BeamOnTimeInfoSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_AreaProjectileClasss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileBase* m_AreaProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AreaParticleSizeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCenterProjStartWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_CenterProjectileClasss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCenterParticleLifeTime;
    
    UTresAttack9_e_ex359_FinalBrake_HeavyRain();
};

