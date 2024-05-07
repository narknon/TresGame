#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresForceFeedbackSet.generated.h"

class UForceFeedbackEffect;

UCLASS(Blueprintable)
class TRESGAME_API UTresForceFeedbackSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* m_AssetSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* m_AssetMiddle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* m_AssetLarge;
    
    UTresForceFeedbackSet();
};

