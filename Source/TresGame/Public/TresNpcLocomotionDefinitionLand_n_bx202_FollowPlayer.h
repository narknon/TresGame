#pragma once
#include "CoreMinimal.h"
#include "TresNpcLocomotionDefinitionLand_FollowPlayer.h"
#include "TresNpcLocomotionDefinitionLand_n_bx202_FollowPlayer.generated.h"

UCLASS(Blueprintable)
class UTresNpcLocomotionDefinitionLand_n_bx202_FollowPlayer : public UTresNpcLocomotionDefinitionLand_FollowPlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpeedMinN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpeedMinB;
    
public:
    UTresNpcLocomotionDefinitionLand_n_bx202_FollowPlayer();
};

