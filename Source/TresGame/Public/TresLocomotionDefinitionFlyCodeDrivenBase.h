#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFly.h"
#include "TresLocomotionDefinitionFlyCodeDrivenBase.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresLocomotionDefinitionFlyCodeDrivenBase : public UTresLocomotionDefinitionFly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bUseFalling: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bUseTakeoff: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bUseLanding: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPrioritizeFlightStartAnim;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bModifyFlightEndAnim;
    
public:
    UTresLocomotionDefinitionFlyCodeDrivenBase();
};

