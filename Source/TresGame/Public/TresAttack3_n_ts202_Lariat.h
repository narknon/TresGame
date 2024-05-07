#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionDash.h"
#include "TresAttack3_n_ts202_Lariat.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack3_n_ts202_Lariat : public UTresNpcAttackDefinitionDash {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TurnYawMinMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Interval;
    
    UTresAttack3_n_ts202_Lariat();
};

