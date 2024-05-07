#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex358_Tenrai.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex358_Tenrai : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_FinishAttackIDName;
    
public:
    ATresProjectile_e_ex358_Tenrai(const FObjectInitializer& ObjectInitializer);
};

