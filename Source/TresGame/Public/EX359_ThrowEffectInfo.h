#pragma once
#include "CoreMinimal.h"
#include "EX359_ThrowEffectInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX359_ThrowEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNotifyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSetToTimeOnHit;
    
    TRESGAME_API FEX359_ThrowEffectInfo();
};

