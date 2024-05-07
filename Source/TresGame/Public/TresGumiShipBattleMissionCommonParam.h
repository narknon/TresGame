#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBattleMissionCommonParam.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipBattleMissionCommonParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_udNoDamageBonus;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_udBrokePartsBonus;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_udDefeatedGroupBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDamageScoreCoefficient;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_fScoreRates[8];
    
    TRESGAME_API FTresGumiShipBattleMissionCommonParam();
};

