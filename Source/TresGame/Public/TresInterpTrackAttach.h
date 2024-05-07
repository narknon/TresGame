#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresTrackAttachKey.h"
#include "TresInterpTrackAttach.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackAttach : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FTresTrackAttachKey> m_Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDetachWhenTerminated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMaintainWorldPosition;
    
    UTresInterpTrackAttach();
};

