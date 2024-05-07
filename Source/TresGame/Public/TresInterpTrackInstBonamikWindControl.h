#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstBonamikWindControl.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpTrackInstBonamikWindControl : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LastKeyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BackupWindScale;
    
    UTresInterpTrackInstBonamikWindControl();
};

