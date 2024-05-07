#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPrizeBase.h"
#include "GUMI_SHIP_PRIZE_ITEM_KIND.h"
#include "TresGumiShipPrizeGimmick.generated.h"

UCLASS(Blueprintable)
class ATresGumiShipPrizeGimmick : public ATresGumiShipPrizeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    GUMI_SHIP_PRIZE_ITEM_KIND m_KindID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuctionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuctionSpeed;
    
public:
    ATresGumiShipPrizeGimmick(const FObjectInitializer& ObjectInitializer);
};

