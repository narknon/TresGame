#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProj_WandAvator.generated.h"

class UTresLockonTargetComponent;

UCLASS(Abstract, Blueprintable)
class ATresProj_WandAvator : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_AttackTargetComponent;
    
public:
    ATresProj_WandAvator(const FObjectInitializer& ObjectInitializer);
};

