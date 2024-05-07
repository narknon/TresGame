#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "BX901_DarkCubeMineGroupSpawnInfo.h"
#include "TresMove3_e_bx901_Dash.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, HideDropdown)
class UTresMove3_e_bx901_Dash : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBX901_DarkCubeMineGroupSpawnInfo m_GroupSpawnInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_ShotWaitTimeScaleOnTargetDistanceCurve;
    
    UTresMove3_e_bx901_Dash();
};

