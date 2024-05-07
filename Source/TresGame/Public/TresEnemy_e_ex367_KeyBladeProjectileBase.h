#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresEnemy_e_ex367_KeyBladeProjectileBase.generated.h"

UCLASS(Blueprintable)
class ATresEnemy_e_ex367_KeyBladeProjectileBase : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ReflectedBulletSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ExplosionTime;
    
public:
    ATresEnemy_e_ex367_KeyBladeProjectileBase(const FObjectInitializer& ObjectInitializer);
};

