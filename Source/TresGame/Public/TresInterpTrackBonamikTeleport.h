#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresInterpTrackBonamikTeleportKey.h"
#include "TresInterpTrackBonamikTeleport.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackBonamikTeleport : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FTresInterpTrackBonamikTeleportKey> m_Keys;
    
    UTresInterpTrackBonamikTeleport();
};

