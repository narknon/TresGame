#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "ETresGimmick_e_ex711_PhysicsActorGimmickKind.h"
#include "ETresGimmick_e_ex711_PhysicsActorSizeKind.h"
#include "TresGimmick_e_ex711_PhysicsActor.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Blueprintable)
class ATresGimmick_e_ex711_PhysicsActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_DestinationEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresGimmick_e_ex711_PhysicsActorGimmickKind> m_pro_GimmickKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresGimmick_e_ex711_PhysicsActorSizeKind> m_pro_SizeKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_DestinationEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_DisableDestinationEffectDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_DestinationEffectScale;
    
public:
    ATresGimmick_e_ex711_PhysicsActor(const FObjectInitializer& ObjectInitializer);
};

