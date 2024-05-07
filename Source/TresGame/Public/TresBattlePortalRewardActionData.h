#pragma once
#include "CoreMinimal.h"
#include "TresLoadAsset.h"
#include "TresSelfieCameraActionDef.h"
#include "TresBattlePortalRewardActionData.generated.h"

UCLASS(Blueprintable)
class UTresBattlePortalRewardActionData : public UTresLoadAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BattlePortalClearFlagCheckList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresSelfieCameraActionDef> SelfieActionList;
    
    UTresBattlePortalRewardActionData();
};

