#pragma once
#include "CoreMinimal.h"
#include "EEX359_CutDownYawType.h"
#include "EX359_BeamInfoSet.h"
#include "EX359_LaserInfoSet.h"
#include "EX359_CutDownTractionInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX359_CutDownTractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxTractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EEX359_CutDownYawType> m_YawType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX359_BeamInfoSet m_BeamInfoSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX359_LaserInfoSet m_LaserInfoSet;
    
    TRESGAME_API FEX359_CutDownTractionInfo();
};

