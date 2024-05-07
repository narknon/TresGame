#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex358_Jinrai.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex358_Jinrai : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LastAttackStartNumHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LastAttackIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FirstHitAddSize;
    
public:
    ATresProjectile_e_ex358_Jinrai(const FObjectInitializer& ObjectInitializer);
};

