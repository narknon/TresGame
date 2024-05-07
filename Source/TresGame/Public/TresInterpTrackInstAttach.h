#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstAttach.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpTrackInstAttach : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CurrentKey;
    
    UTresInterpTrackInstAttach();
};

