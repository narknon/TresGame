#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex357_Base.h"
#include "RootMotionScaleParam_e_ex358.h"
#include "ETresEnemyContinuityCutAction_e_ex357.h"
#include "TresAttack4_e_ex357_ContinuityCut.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack4_e_ex357_ContinuityCut : public UTresAttack_e_ex357_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NumLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRootMotionScaleParam_e_ex358 m_StartMinRootMotionScaleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRootMotionScaleParam_e_ex358 m_StartMaxRootMotionScaleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRootMotionScaleParam_e_ex358 m_MinRootMotionScaleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRootMotionScaleParam_e_ex358 m_MaxRootMotionScaleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRootMotionScaleParam_e_ex358 m_FinishMinRootMotionScaleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRootMotionScaleParam_e_ex358 m_FinishMaxRootMotionScaleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LandHomingSpeedYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AirHomingSpeedYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AirHomingSpeedPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AirHomingLimitAnglePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EndHomingSpeed;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<ETresEnemyContinuityCutAction_e_ex357::Type> m_ActionType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsStartEndMotion: 1;
    
public:
    UTresAttack4_e_ex357_ContinuityCut();
};

