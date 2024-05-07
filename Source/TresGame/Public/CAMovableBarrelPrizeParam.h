#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CAMovableBarrelPrizeParam.generated.h"

USTRUCT(BlueprintType)
struct FCAMovableBarrelPrizeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_InitSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_InitSpeedRand;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FFloatInterval m_PitchRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AirResistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PrizeLivingTime;
    
    TRESGAME_API FCAMovableBarrelPrizeParam();
};

