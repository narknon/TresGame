#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex306_Claymore_Base.h"
#include "TresProjectile_e_ex306_Claymore_Throw.generated.h"

class UTresLockonTargetComponent;
class AActor;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex306_Claymore_Throw : public ATresProjectile_e_ex306_Claymore_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinHomingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxHomingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxHomingRotateVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_LockonComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_TargetActor;
    
    ATresProjectile_e_ex306_Claymore_Throw(const FObjectInitializer& ObjectInitializer);
};

