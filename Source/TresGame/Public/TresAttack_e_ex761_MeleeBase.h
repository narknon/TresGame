#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex761_Base.h"
#include "MeleeRootMotionScaleParam_e_ex761.h"
#include "TresAttack_e_ex761_MeleeBase.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack_e_ex761_MeleeBase : public UTresAttack_e_ex761_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableTargetDistance2D: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DefaultRootMotionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeleeRootMotionScaleParam_e_ex761 m_MinRootMotionScaleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeleeRootMotionScaleParam_e_ex761 m_MaxRootMotionScaleParam;
    
public:
    UTresAttack_e_ex761_MeleeBase();
};

