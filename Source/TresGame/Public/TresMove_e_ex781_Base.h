#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "ETresBodyCollReactionType.h"
#include "TresMove_e_ex781_Base.generated.h"

UCLASS(Blueprintable)
class UTresMove_e_ex781_Base : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableOverrideBodyCollReactionType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBodyCollReactionType m_OverrideBodyCollReactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_EndWarp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ForwardRunLoopTime;
    
public:
    UTresMove_e_ex781_Base();
};

