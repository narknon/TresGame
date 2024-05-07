#pragma once
#include "CoreMinimal.h"
#include "BX901_ComboInfo.generated.h"

USTRUCT(BlueprintType)
struct FBX901_ComboInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDesiredTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxTractionDistance;
    
    TRESGAME_API FBX901_ComboInfo();
};

