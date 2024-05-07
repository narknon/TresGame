#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresFullBodyAnimationTrackKey.h"
#include "TresInterpTrackFullBodyAnimation.generated.h"

class UTresAnimSet;

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackFullBodyAnimation : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FTresFullBodyAnimationTrackKey> Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresAnimSet* TresAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresAnimSet* Animations;
    
    UTresInterpTrackFullBodyAnimation();
};

