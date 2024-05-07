#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TresProjectile_e_ex721_CallBomb.generated.h"

UCLASS(Blueprintable, HideDropdown)
class ATresProjectile_e_ex721_CallBomb : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_AppearEffectOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StartEmissionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StartTransitionTime;
    
    ATresProjectile_e_ex721_CallBomb(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
};

