#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex358_Base.h"
#include "TresAttack5_e_ex358_SingleGestureAction.generated.h"

class USoundBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack5_e_ex358_SingleGestureAction : public UTresAction_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ActionEndTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_VoiceDataList;
    
public:
    UTresAttack5_e_ex358_SingleGestureAction();
};

