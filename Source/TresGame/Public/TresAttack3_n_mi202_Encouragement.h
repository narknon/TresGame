#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack3_n_mi202_Encouragement.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack3_n_mi202_Encouragement : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EncouragementTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EfectStartTime;
    
public:
    UTresAttack3_n_mi202_Encouragement();
};

