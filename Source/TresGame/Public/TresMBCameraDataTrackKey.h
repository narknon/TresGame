#pragma once
#include "CoreMinimal.h"
#include "TresMBCameraDataTrackKey.generated.h"

class UTresMBCameraData;

USTRUCT(BlueprintType)
struct FTresMBCameraDataTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresMBCameraData* m_CameraData;
    
    TRESGAME_API FTresMBCameraDataTrackKey();
};

