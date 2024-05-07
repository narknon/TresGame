#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyPartsBase.h"
#include "TresGumiShipParts703Pawn.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipParts703Pawn : public ATresGumiShipEnemyPartsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pChargeVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pChargeLongVFX;
    
public:
    ATresGumiShipParts703Pawn(const FObjectInitializer& ObjectInitializer);
};

