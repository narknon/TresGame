#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "EX105_JOINT_INFO.h"
#include "TresProjectile_e_ex105_ChaosShotCubeJoint.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex105_ChaosShotCubeJoint : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FEX105_JOINT_INFO m_JointInfo[3];
    
    ATresProjectile_e_ex105_ChaosShotCubeJoint(const FObjectInitializer& ObjectInitializer);
};

