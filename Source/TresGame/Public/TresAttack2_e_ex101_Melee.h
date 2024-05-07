#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionMelee.h"
#include "TresAttack2_e_ex101_Melee.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack2_e_ex101_Melee : public UTresAttackDefinitionMelee {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TimeToMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoveTurnAngleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CloseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AttackTurnSpeed;
    
public:
    UTresAttack2_e_ex101_Melee();
};

