#pragma once
#include "CoreMinimal.h"
#include "TresAttack1_e_ex011_DashAttack.h"
#include "TresMotion_e_ex011_WheeliePress.h"
#include "TresAttack4_e_ex011_DashToWheelie.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack4_e_ex011_DashToWheelie : public UTresAttack1_e_ex011_DashAttack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresMotion_e_ex011_WheeliePress m_AnimDataList[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StayAirTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StayAirFollowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StayAirEndDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DerivationRate;
    
public:
    UTresAttack4_e_ex011_DashToWheelie();
};

