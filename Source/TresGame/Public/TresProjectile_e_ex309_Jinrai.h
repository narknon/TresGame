#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex309_Jinrai.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex309_Jinrai : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LastAttackStartNumHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LastAttackIDName;
    
public:
    ATresProjectile_e_ex309_Jinrai(const FObjectInitializer& ObjectInitializer);
};

