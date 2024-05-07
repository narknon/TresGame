#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex358_Interface.h"
#include "TresAttack_XIIILB_Base.h"
#include "TresEnemyNotifyInterface_e_ex358.h"
#include "TresAttack_e_ex358_Base.generated.h"

UCLASS(Abstract, Blueprintable)
class UTresAttack_e_ex358_Base : public UTresAttack_XIIILB_Base, public ITresEnemyNotifyInterface_e_ex358, public ITresAction_e_ex358_Interface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WarpAppearDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AnimStartTimePrevWarp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AnimStartTimePrevAttackAndAction;
    
public:
    UTresAttack_e_ex358_Base();
    
    // Fix for true pure virtual functions not being implemented
};

