#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex054_DinosaurUpper.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack2_e_ex054_DinosaurUpper : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_RushSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_RushDist;
    
public:
    UTresAttack2_e_ex054_DinosaurUpper();
};

