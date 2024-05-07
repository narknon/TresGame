#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBattleMisisonBonusWithConditionI.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipBattleMisisonBonusWithConditionI {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_udBonusPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_dConditionValue;
    
    TRESGAME_API FTresGumiShipBattleMisisonBonusWithConditionI();
};

