#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx353RootMotionScaleInfo.h"
#include "TresAttack_e_ex353_Base.h"
#include "ETresEnemyEx353ComboKind.h"
#include "TresEnemyEx353HomingParam.h"
#include "TresEnemyEx353RootMotionScaleParam.h"
#include "TresAttack1_e_ex353_AerialComboBase.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex353_AerialComboBase : public UTresAttack_e_ex353_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyEx353ComboKind m_ComboKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_AnimStartTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AimOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx353RootMotionScaleInfo> m_RootMotionScaleInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ApproachTargetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ApproachTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx353HomingParam> m_HomingParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HomingLimitPitch;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyEx353RootMotionScaleParam m_MinRootMotionZScaleParam;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyEx353RootMotionScaleParam m_MaxRootMotionZScaleParam;
    
public:
    UTresAttack1_e_ex353_AerialComboBase();
};

