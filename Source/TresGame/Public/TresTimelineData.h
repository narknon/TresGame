#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresTimelineData.generated.h"

class UTresTimelineDataTrack;

UCLASS(Abstract, Blueprintable)
class TRESGAME_API UTresTimelineData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTresTimelineDataTrack*> m_Tracks;
    
    UTresTimelineData();
};

