#pragma once
#include "CoreMinimal.h"
#include "ETresDropItemID.h"
#include "MognetMedalPrizeWork.generated.h"

USTRUCT(BlueprintType)
struct FMognetMedalPrizeWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresDropItemID m_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NumDropMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NumDropMax;
    
    TRESGAME_API FMognetMedalPrizeWork();
};

