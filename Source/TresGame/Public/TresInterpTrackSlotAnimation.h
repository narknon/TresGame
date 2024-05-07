#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresSlotAnimationTrackKey.h"
#include "TresInterpTrackSlotAnimation.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackSlotAnimation : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AnimStopWhenTerminated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SkipAnimStopCheckSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FTresSlotAnimationTrackKey> Keys;
    
    UTresInterpTrackSlotAnimation();
};

