#pragma once
#include "CoreMinimal.h"
#include "EX359_BeamOnTimeInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX359_BeamOnTimeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNotifyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSetToTimeOnHit;
    
    TRESGAME_API FEX359_BeamOnTimeInfo();
};

