#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "ETresEnemy_e_ex313_DarkHandComboType.h"
#include "TresAttack1_e_ex313_DarkHand.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex313_DarkHand : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresEnemy_e_ex313_DarkHandComboType> m_pro_DarkHandComboList;
    
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
    
public:
    UTresAttack1_e_ex313_DarkHand();
};

