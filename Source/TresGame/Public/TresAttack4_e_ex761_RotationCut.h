#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex761_RushBase.h"
#include "TresAttack4_e_ex761_RotationCut.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack4_e_ex761_RotationCut : public UTresAttack_e_ex761_RushBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_JumpEndHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_JumpSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TurnStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TurnStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TurnAfterTime;
    
public:
    UTresAttack4_e_ex761_RotationCut();
};

