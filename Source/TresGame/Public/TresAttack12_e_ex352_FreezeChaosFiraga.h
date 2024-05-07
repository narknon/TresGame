#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_e_ex352_ChaosFiragaBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack12_e_ex352_FreezeChaosFiraga.generated.h"

class UCurveVector;
class ATresProjectile_e_ex313_DarkBiteShadow;
class UParticleSystem;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack12_e_ex352_FreezeChaosFiraga : public UTresAttack_e_ex352_ChaosFiragaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DarkMatterMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_DarkMatterControlCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_CoefficientForCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_DarkBiteSpawnIntervals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_e_ex313_DarkBiteShadow> m_DarkBiteShadowClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DarkBiteHomingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DarkBiteStartBiteTime;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    UParticleSystem* m_DarkBiteEffect[2];
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresProjectile_e_ex313_DarkBiteShadow* m_DarkBiteShadow;
    
public:
    UTresAttack12_e_ex352_FreezeChaosFiraga();
};

