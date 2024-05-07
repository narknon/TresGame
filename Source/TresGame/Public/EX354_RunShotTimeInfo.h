#pragma once
#include "CoreMinimal.h"
#include "EX354_RunShotTimeInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX354_RunShotTimeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShotTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRight;
    
    TRESGAME_API FEX354_RunShotTimeInfo();
};

