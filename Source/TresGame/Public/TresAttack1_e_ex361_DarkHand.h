#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "ETresEnemy_e_ex361_DarkHandComboType.h"
#include "TresAttack1_e_ex361_DarkHand.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex361_DarkHand : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresEnemy_e_ex361_DarkHandComboType> m_pro_DarkHandComboList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_ShockWaveRotYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_ShockWaveMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_ShockWaveMoveDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_SlashRootMotionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_ThrustRootMotionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_VerticalSwingRootMotionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_RootMoationNearDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_RootMotionNearScale;
    
public:
    UTresAttack1_e_ex361_DarkHand();
};

