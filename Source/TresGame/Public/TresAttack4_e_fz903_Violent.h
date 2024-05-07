#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionDash.h"
#include "TresAttack4_e_fz903_Violent.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack4_e_fz903_Violent : public UTresAttackDefinitionDash {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_InitMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AccelMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NumberOfAttacks;
    
public:
    UTresAttack4_e_fz903_Violent();
};

