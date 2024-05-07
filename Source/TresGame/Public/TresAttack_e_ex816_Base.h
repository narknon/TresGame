#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack_e_ex816_Base.generated.h"

UCLASS(Abstract, Blueprintable)
class UTresAttack_e_ex816_Base : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bOverridePhysicsBlendRate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OverridePhysicsBlendRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OverridePhysicsBlendInterpTime;
    
public:
    UTresAttack_e_ex816_Base();
};

