#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresAttractionProjAFSRPaint.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresAttractionProjAFSRPaint : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_AerialHitEff;
    
    ATresAttractionProjAFSRPaint(const FObjectInitializer& ObjectInitializer);
};

