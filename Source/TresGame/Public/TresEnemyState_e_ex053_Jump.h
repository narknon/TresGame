#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Jump.h"
#include "TresEnemyState_e_ex053_Jump.generated.h"

UCLASS(Blueprintable)
class UTresEnemyState_e_ex053_Jump : public UTresCharState_Jump {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotateSpeedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotateSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotateAcceleration;
    
public:
    UTresEnemyState_e_ex053_Jump();
};

