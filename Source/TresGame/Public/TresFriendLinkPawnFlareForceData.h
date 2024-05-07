#pragma once
#include "CoreMinimal.h"
#include "TresFriendLinkPawnFlareForceData.generated.h"

USTRUCT(BlueprintType)
struct FTresFriendLinkPawnFlareForceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAppearYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAppearTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFireTimer;
    
    TRESGAME_API FTresFriendLinkPawnFlareForceData();
};

