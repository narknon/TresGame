#pragma once
#include "CoreMinimal.h"
#include "TresNpcLocomotionDefinitionLand.h"
#include "TresNpcLocomotionDefinitionLand_FollowPlayer.generated.h"

UCLASS(Blueprintable)
class UTresNpcLocomotionDefinitionLand_FollowPlayer : public UTresNpcLocomotionDefinitionLand {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_InViewportSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OutViewportSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WarpStartDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DecelerationTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RangeSamePlayerSpeed;
    
public:
    UTresNpcLocomotionDefinitionLand_FollowPlayer();
};

