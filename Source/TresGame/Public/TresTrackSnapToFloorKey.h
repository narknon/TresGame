#pragma once
#include "CoreMinimal.h"
#include "TresTrackSnapToFloorKey.generated.h"

USTRUCT(BlueprintType)
struct FTresTrackSnapToFloorKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_SnapToFloor;
    
    TRESGAME_API FTresTrackSnapToFloorKey();
};

