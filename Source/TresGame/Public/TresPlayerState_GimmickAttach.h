#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresPlayerState_GimmickAttach.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable)
class UTresPlayerState_GimmickAttach : public UTresStateBase {
    GENERATED_BODY()
public:
    UTresPlayerState_GimmickAttach();
    UFUNCTION(BlueprintCallable)
    void OnAnimStarted(UAnimationAsset* InAnimAsset);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimEnded(UAnimationAsset* InAnimAsset, bool bInterrupted);
    
};

