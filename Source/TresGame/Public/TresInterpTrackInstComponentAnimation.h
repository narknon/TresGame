#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackInstSlotAnimation.h"
#include "TresInterpTrackInstComponentAnimation.generated.h"

class UTresSkeletalMeshComponent;

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpTrackInstComponentAnimation : public UTresInterpTrackInstSlotAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* m_SkelComp;
    
    UTresInterpTrackInstComponentAnimation();
};

