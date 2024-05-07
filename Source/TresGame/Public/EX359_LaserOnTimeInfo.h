#pragma once
#include "CoreMinimal.h"
#include "EX359_LaserOnTimeInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX359_LaserOnTimeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNotifyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fModifySpawnTFTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bModifySpawnTF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNotify;
    
    TRESGAME_API FEX359_LaserOnTimeInfo();
};

