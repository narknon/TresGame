#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstEffectAttach.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpTrackInstEffectAttach : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LastKeyIndex;
    
    UTresInterpTrackInstEffectAttach();
};

