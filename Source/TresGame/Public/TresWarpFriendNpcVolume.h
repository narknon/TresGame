#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresFriendWarpPointData.h"
#include "TresWarpFriendNpcVolume.generated.h"

UCLASS(Blueprintable)
class ATresWarpFriendNpcVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bVolumeOutEnd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bUsedWarpPoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresFriendWarpPointData> m_WarpPointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_IntervalTime;
    
    ATresWarpFriendNpcVolume(const FObjectInitializer& ObjectInitializer);
};

