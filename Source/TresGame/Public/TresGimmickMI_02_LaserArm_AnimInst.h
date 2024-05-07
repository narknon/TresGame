#pragma once
#include "CoreMinimal.h"
#include "TresAnimInstance.h"
#include "TresGimmickMI_02_LaserArm_AnimInst.generated.h"

class ATresGimmickMI_02_LaserArm;

UCLASS(Blueprintable, NonTransient)
class UTresGimmickMI_02_LaserArm_AnimInst : public UTresAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ArmUpdownValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ArmRotationValue;
    
    UTresGimmickMI_02_LaserArm_AnimInst();
    UFUNCTION(BlueprintCallable)
    ATresGimmickMI_02_LaserArm* GetLaserArm();
    
};

