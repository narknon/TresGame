#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipProjectileBase.h"
#include "TresGumiShipAppearanceProjectileBase.generated.h"

class UParticleSystemComponent;
class UTresStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipAppearanceProjectileBase : public ATresGumiShipProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pAttachedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* m_pStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDestroyWhenEffcetEnd;
    
public:
    ATresGumiShipAppearanceProjectileBase(const FObjectInitializer& ObjectInitializer);
};

