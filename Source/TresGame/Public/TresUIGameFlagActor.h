#pragma once
#include "CoreMinimal.h"
#include "TresUIActorSetting.h"
#include "TresUIGameFlagData.h"
#include "TresUIGameFlagActor.generated.h"

class ATresUIActor;

USTRUCT(BlueprintType)
struct FTresUIGameFlagActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetSubclassOf<ATresUIActor> ActorAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIActorSetting ActorSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIGameFlagData GameFlag;
    
    TRESGAME_API FTresUIGameFlagActor();
};

