#pragma once
#include "CoreMinimal.h"
#include "TresProj_MagicBase.h"
#include "TresProj_MagicWater.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProj_MagicWater : public ATresProj_MagicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bSetFallingIfNoHoming: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bVikingShipSplash: 1;
    
public:
    ATresProj_MagicWater(const FObjectInitializer& ObjectInitializer);
};

