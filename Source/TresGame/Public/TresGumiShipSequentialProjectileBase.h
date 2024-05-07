#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActualProjectile.h"
#include "TresGumiShipProjectileSequenceData.h"
#include "TresGumiShipSequentialProjectileBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipSequentialProjectileBase : public ATresGumiShipActualProjectile {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGumiShipProjectileSequenceData> m_Sequences;
    
public:
    ATresGumiShipSequentialProjectileBase(const FObjectInitializer& ObjectInitializer);
};

