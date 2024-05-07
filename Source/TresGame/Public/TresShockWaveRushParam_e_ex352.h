#pragma once
#include "CoreMinimal.h"
#include "TresShockWaveRushParam_e_ex352.generated.h"

USTRUCT(BlueprintType)
struct FTresShockWaveRushParam_e_ex352 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RushSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NextTargetDistance;
    
    TRESGAME_API FTresShockWaveRushParam_e_ex352();
};

