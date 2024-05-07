#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresPawnBase.h"
#include "TresGimmick_e_ex307_Card.generated.h"

class USceneComponent;
class UTresSkeletalMeshComponent;
class ATresProjectileBase;
class UParticleSystem;

UCLASS(Blueprintable)
class ATresGimmick_e_ex307_Card : public ATresPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyTransformControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_DummySpawnProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_SmokeParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_HintParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HintEffectOffsetDistance;
    
public:
    ATresGimmick_e_ex307_Card(const FObjectInitializer& ObjectInitializer);
};

