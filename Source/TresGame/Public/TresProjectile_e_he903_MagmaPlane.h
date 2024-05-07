#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_he903_MagmaPlane.generated.h"

class USceneComponent;
class UCurveVector;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_he903_MagmaPlane : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_OffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_OffsetCurveScale;
    
    ATresProjectile_e_he903_MagmaPlane(const FObjectInitializer& ObjectInitializer);
};

