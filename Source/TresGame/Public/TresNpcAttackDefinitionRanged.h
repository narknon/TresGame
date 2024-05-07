#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresNpcAttackDefinitionRanged.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresNpcAttackDefinitionRanged : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bPitch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PitchToleranceUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PitchToleranceDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShotPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShotPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShotYawMinMax;
    
public:
    UTresNpcAttackDefinitionRanged();
};

