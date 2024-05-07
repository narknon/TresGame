#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresFaceAnimationTrackKey.h"
#include "TresInterpTrackFaceAnimation.generated.h"

class UTresAnimSet;
class UTresInterpTrackInstFaceAnimation;

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackFaceAnimation : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FTresFaceAnimationTrackKey> Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresAnimSet* Animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresInterpTrackInstFaceAnimation* FaceTrackInst;
    
    UTresInterpTrackFaceAnimation();
};

