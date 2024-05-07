#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kunai_Details.h"
#include "TresAttackDefinitionBase.h"
#include "Kunai_Setup.h"
#include "TresAttack1_e_ex114_Kunai.generated.h"

class ATresProjectile_e_ex114_Kunai;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex114_Kunai : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_e_ex114_Kunai> m_Projectile;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FKunai_Setup m_KunaiSetUp[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKunai_Details> m_KunaiDetailArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxShotAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinShotHeigt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxShotHeigt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresProjectile_e_ex114_Kunai*> m_ProjArray;
    
    UTresAttack1_e_ex114_Kunai();
};

