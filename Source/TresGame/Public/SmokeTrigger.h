#pragma once
#include "CoreMinimal.h"
#include "SmokeTrigger.generated.h"

USTRUCT(BlueprintType)
struct FSmokeTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_triggerHpPer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_attachSocketName;
    
    TRESGAME_API FSmokeTrigger();
};

