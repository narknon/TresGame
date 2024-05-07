#pragma once
#include "CoreMinimal.h"
#include "TresWinnieAnimationData.h"
#include "WinniePlayerAnimationType.h"
#include "TresWinniePlayerAnimationData.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePlayerAnimationData : public FTresWinnieAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WinniePlayerAnimationType AnimationType;
    
    TRESGAME_API FTresWinniePlayerAnimationData();
};

