#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBattleMisisonBonusWithConditionF.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipBattleMisisonBonusWithConditionF {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBonusPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_dConditionValue;
    
    TRESGAME_API FTresGumiShipBattleMisisonBonusWithConditionF();
};

