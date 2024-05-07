#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyChangeManualLockonPriority_e_ex358.h"
#include "ETresEnemyWildDanceAppearLocation_e_ex358.h"
#include "TresWildDanceAppearParam_e_ex358.generated.h"

USTRUCT(BlueprintType)
struct FTresWildDanceAppearParam_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyWildDanceAppearLocation_e_ex358::Type> LocationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCalcAppearLocationDelayAfter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyChangeManualLockonPriority_e_ex358::Type> ChangeManualLockonPriority;
    
    TRESGAME_API FTresWildDanceAppearParam_e_ex358();
};

