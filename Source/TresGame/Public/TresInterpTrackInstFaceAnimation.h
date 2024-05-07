#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstFaceAnimation.generated.h"

class UTresInterpTrackFaceAnimation;

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpTrackInstFaceAnimation : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastUpdatePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastKeyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsAnimPlaying;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<UTresInterpTrackFaceAnimation>> OtherFaceTracks;
    
    UTresInterpTrackInstFaceAnimation();
};

