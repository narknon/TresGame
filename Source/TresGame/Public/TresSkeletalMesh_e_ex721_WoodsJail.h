#pragma once
#include "CoreMinimal.h"
#include "TresSkeletalMesh_e_ex721_Base.h"
#include "TresSkeletalMesh_e_ex721_WoodsJail.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable, HideDropdown)
class ATresSkeletalMesh_e_ex721_WoodsJail : public ATresSkeletalMesh_e_ex721_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AttachDisappearEffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_DisappearEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_DisappearEffectCmp;
    
public:
    ATresSkeletalMesh_e_ex721_WoodsJail(const FObjectInitializer& ObjectInitializer);
};

