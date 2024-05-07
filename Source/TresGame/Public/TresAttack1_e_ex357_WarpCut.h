#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex357_Base.h"
#include "RootMotionScaleParam_e_ex358.h"
#include "TresWarpCutMotionParam_e_ex358.h"
#include "TresAttack1_e_ex357_WarpCut.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex357_WarpCut : public UTresAttack_e_ex357_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LoopAbortNumFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresWarpCutMotionParam_e_ex358> m_MotionParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableAttackChanceTime: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AppearDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AppearMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AppearCorrectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FollowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRootMotionScaleParam_e_ex358 m_MinRootMotionScaleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRootMotionScaleParam_e_ex358 m_MaxRootMotionScaleParam;
    
public:
    UTresAttack1_e_ex357_WarpCut();
};

