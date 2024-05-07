#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionRanged.h"
#include "TresAction1_e_ex007_Ranged.generated.h"

class ATresProjectile_e_ex007_Arrow;

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex007_Ranged : public UTresAttackDefinitionRanged {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectile_e_ex007_Arrow* m_Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StartMotionTime;
    
public:
    UTresAction1_e_ex007_Ranged();
};

