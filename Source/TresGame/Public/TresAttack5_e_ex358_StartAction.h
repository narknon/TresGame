#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex358_Base.h"
#include "TresAttack5_e_ex358_StartAction.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack5_e_ex358_StartAction : public UTresAction_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StartTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EndTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Coefficient;
    
public:
    UTresAttack5_e_ex358_StartAction();
};

