#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionBase.h"
#include "TresLocomotionDefinitionLand.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresLocomotionDefinitionLand : public UTresLocomotionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bQuickStopEnabled: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ClimbingPossibleEntryAngle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinJumpHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFallingCheck;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FallingThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bStopMovingByAvoidance;
    
public:
    UTresLocomotionDefinitionLand();
};

