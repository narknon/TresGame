#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPrizeBase.h"
#include "GUMI_SHIP_PRIZE_ITEM_KIND.h"
#include "TresGumiShipDropPrize.generated.h"

UCLASS(Blueprintable)
class ATresGumiShipDropPrize : public ATresGumiShipPrizeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    GUMI_SHIP_PRIZE_ITEM_KIND m_KindID;
    
public:
    ATresGumiShipDropPrize(const FObjectInitializer& ObjectInitializer);
};

