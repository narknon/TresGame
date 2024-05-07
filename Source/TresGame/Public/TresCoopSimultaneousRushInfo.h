#pragma once
#include "CoreMinimal.h"
#include "ETresCoopColorSmokeKind.h"
#include "TresCoopSimultaneousRushInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresCoopSimultaneousRushInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresCoopColorSmokeKind m_ColorKind;
    
    TRESGAME_API FTresCoopSimultaneousRushInfo();
};

