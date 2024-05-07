#pragma once
#include "CoreMinimal.h"
#include "TresAttack_XIIILE_Base.h"
#include "TresHomingDarkLaserSpawnParams_e_ex352.h"
#include "TresVoice_e_ex352.h"
#include "TresAttack1_e_ex352_HomingDarkLaser.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex352_HomingDarkLaser : public UTresAttack_XIIILE_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresHomingDarkLaserSpawnParams_e_ex352 m_HomingDarkLaserSpawnParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_InitSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AccelSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StartMovementCorrectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MovementSpeedCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxMovementCorrectionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinMovementCorrectionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresVoice_e_ex352> m_VoiceArray;
    
public:
    UTresAttack1_e_ex352_HomingDarkLaser();
};

