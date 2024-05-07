#pragma once
#include "CoreMinimal.h"
#include "TresE_EX781BreakSlashPatternWaveParam.generated.h"

USTRUCT(BlueprintType)
struct FTresE_EX781BreakSlashPatternWaveParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_IntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SwordWaveRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LookAheadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BulletID;
    
    TRESGAME_API FTresE_EX781BreakSlashPatternWaveParam();
};

