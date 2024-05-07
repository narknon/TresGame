#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresShotParam_e_ex701_DarkCloud.h"
#include "TresAttack1_e_ex701_DarkCloud.generated.h"

class UAnimSequenceBase;
class ATresProjectileBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex701_DarkCloud : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresShotParam_e_ex701_DarkCloud> m_ShotParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ProjectileSpawnRangeTime;
    
public:
    UTresAttack1_e_ex701_DarkCloud();
};

