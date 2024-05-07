#pragma once
#include "CoreMinimal.h"
#include "TresAttack_XIIILE_Base.h"
#include "UObject/NoExportTypes.h"
#include "TresChaosFiragaParams_e_ex352.h"
#include "UObject/NoExportTypes.h"
#include "TresVoice_e_ex352.h"
#include "TresAttack_e_ex352_ChaosFiragaBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UTresAttack_e_ex352_ChaosFiragaBase : public UTresAttack_XIIILE_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_MaxRotationSpeed;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresChaosFiragaParams_e_ex352 m_ChaosFiragaParams[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PlanetBlasterChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PlanetBlasterDarkMatterSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_RelativeLocationWhenTargetCaught;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_RelativeLocationFromTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresVoice_e_ex352> m_VoiceArray;
    
public:
    UTresAttack_e_ex352_ChaosFiragaBase();
};

