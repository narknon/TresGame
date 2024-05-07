#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex011_Base.h"
#include "TresMotion_e_ex011_WheeliePress.h"
#include "TresAttack2_e_ex011_WheeliePress.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack2_e_ex011_WheeliePress : public UTresAttack_e_ex011_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresMotion_e_ex011_WheeliePress m_AnimDataList[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StartTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StayAirTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StayAirFollowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StayAirEndDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotationAdjustPower;
    
public:
    UTresAttack2_e_ex011_WheeliePress();
};

