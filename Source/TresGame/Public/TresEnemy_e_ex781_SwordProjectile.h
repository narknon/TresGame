#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresEnemy_e_ex781_SwordProjectile.generated.h"

UCLASS(Blueprintable)
class ATresEnemy_e_ex781_SwordProjectile : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoveEndDist;
    
    ATresEnemy_e_ex781_SwordProjectile(const FObjectInitializer& ObjectInitializer);
};

