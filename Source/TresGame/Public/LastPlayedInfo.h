#pragma once
#include "CoreMinimal.h"
#include "LastPlayedInfo.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FLastPlayedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_pAsset;
    
    TRESGAME_API FLastPlayedInfo();
};

