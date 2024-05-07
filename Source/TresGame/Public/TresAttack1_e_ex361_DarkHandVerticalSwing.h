#pragma once
#include "CoreMinimal.h"
#include "TresAttack1_e_ex361_DarkHand.h"
#include "TresAttack1_e_ex361_DarkHandVerticalSwing.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex361_DarkHandVerticalSwing : public UTresAttack1_e_ex361_DarkHand {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_HaloMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_HaloMoveDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_HaloMoveZRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_HaloLimitPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_HaloMoveXYRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_HaloLimitYaw;
    
public:
    UTresAttack1_e_ex361_DarkHandVerticalSwing();
};

