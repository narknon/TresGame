#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex310_KeyBlade.generated.h"

class UTresProjectileMeshComponent_e_ex310;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex310_KeyBlade : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresProjectileMeshComponent_e_ex310* m_ProjSkeletalMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDisappearTime;
    
    ATresProjectile_e_ex310_KeyBlade(const FObjectInitializer& ObjectInitializer);
};

