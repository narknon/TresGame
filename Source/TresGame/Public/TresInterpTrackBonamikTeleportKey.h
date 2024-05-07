#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackBonamikTeleportKey.generated.h"

USTRUCT(BlueprintType)
struct FTresInterpTrackBonamikTeleportKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PreRoll;
    
    TRESGAME_API FTresInterpTrackBonamikTeleportKey();
};

