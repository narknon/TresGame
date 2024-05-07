#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionJump.h"
#include "TresAttack3_e_ex061_Scratch.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack3_e_ex061_Scratch : public UTresAttackDefinitionJump {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_RiseStartAnimData_Tsubo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGoalDistanceToTarget;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 m_BoolArray[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_RiseStartAnimData_Cash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_RiseStartAnimData_Tsubo_Cash;
    
    UTresAttack3_e_ex061_Scratch();
};

