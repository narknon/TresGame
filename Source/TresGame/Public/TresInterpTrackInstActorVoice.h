#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstActorVoice.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpTrackInstActorVoice : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LastKeyIndex;
    
    UTresInterpTrackInstActorVoice();
};

