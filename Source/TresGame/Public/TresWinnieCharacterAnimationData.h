#pragma once
#include "CoreMinimal.h"
#include "TresWinnieAnimationData.h"
#include "WinnieCharacterAnimationType.h"
#include "TresWinnieCharacterAnimationData.generated.h"

USTRUCT(BlueprintType)
struct FTresWinnieCharacterAnimationData : public FTresWinnieAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WinnieCharacterAnimationType AnimationType;
    
    TRESGAME_API FTresWinnieCharacterAnimationData();
};

