#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyPartsBase.h"
#include "TresGumiShipParts631Pawn.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipParts631Pawn : public ATresGumiShipEnemyPartsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pIcicleVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pOuterWallVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pWallSnowVFX;
    
public:
    ATresGumiShipParts631Pawn(const FObjectInitializer& ObjectInitializer);
};

