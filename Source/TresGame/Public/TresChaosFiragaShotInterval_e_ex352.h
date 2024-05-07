#pragma once
#include "CoreMinimal.h"
#include "TresChaosFiragaShotInterval_e_ex352.generated.h"

USTRUCT(BlueprintType)
struct FTresChaosFiragaShotInterval_e_ex352 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHomingEnabled;
    
    TRESGAME_API FTresChaosFiragaShotInterval_e_ex352();
};

