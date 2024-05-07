#pragma once
#include "CoreMinimal.h"
#include "EX354_ArtemaWarpShotProjInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotProjInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShotWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTargetPastDestroyDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCenterPastDestroyDistance;
    
    TRESGAME_API FEX354_ArtemaWarpShotProjInfo();
};

