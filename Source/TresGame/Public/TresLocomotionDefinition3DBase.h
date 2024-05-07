#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionBase.h"
#include "TresLocomotionDefinition3DBase.generated.h"

UCLASS(Abstract, Blueprintable, HideDropdown)
class UTresLocomotionDefinition3DBase : public UTresLocomotionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUsePitchForPawnProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPitchLimiter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxPitch;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LockTimeAfterAvoid;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DeltaTimeToPredict;
    
public:
    UTresLocomotionDefinition3DBase();
};

