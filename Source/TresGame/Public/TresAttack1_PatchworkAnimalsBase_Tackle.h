#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_PatchworkAnimalsBase_Tackle.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_PatchworkAnimalsBase_Tackle : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LoopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HitWallEndAngle;
    
public:
    UTresAttack1_PatchworkAnimalsBase_Tackle();
};

