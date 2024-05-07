#pragma once
#include "CoreMinimal.h"
#include "TresAttack1_e_ex358_JinraiBase.h"
#include "JinraiRootMotionScaleParam_e_ex358.h"
#include "TresAttack1_e_ex358_JinraiFirst.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex358_JinraiFirst : public UTresAttack1_e_ex358_JinraiBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableAttackHitResetRootMotionScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJinraiRootMotionScaleParam_e_ex358 m_MinRootMotionScaleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJinraiRootMotionScaleParam_e_ex358 m_MaxRootMotionScaleParam;
    
public:
    UTresAttack1_e_ex358_JinraiFirst();
};

