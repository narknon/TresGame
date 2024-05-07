#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_ex028_Bite.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack4_e_ex028_Bite : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_YawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_PitchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_PitchLimit;
    
public:
    UTresAttack4_e_ex028_Bite();
};

