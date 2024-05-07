#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_bx901_DarkCubeMineJoint.generated.h"

class UParticleSystemComponent;
class AActor;
class UTresAtkCollPrimitive;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_bx901_DarkCubeMineJoint : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_JointParticleComp;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint16 m_BoolArray[10];
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<AActor> m_StartActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<AActor> m_EndActor;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UTresAtkCollPrimitive> m_AtkCollPrim;
    
public:
    ATresProjectile_e_bx901_DarkCubeMineJoint(const FObjectInitializer& ObjectInitializer);
};

