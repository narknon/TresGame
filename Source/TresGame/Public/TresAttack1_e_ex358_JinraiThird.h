#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack1_e_ex358_JinraiBase.h"
#include "TresAttack1_e_ex358_JinraiThird.generated.h"

class ATresProjectileBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex358_JinraiThird : public UTresAttack1_e_ex358_JinraiBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ShotSocketNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FFloatInterval m_ProjectileCenterHomingDistanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ProjectileCenterHomingMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ProjectileCenterAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ProjectileOffsetDistance;
    
public:
    UTresAttack1_e_ex358_JinraiThird();
};

