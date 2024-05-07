#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGimmickActor.h"
#include "TresGimmickUpdateMgr.generated.h"

UCLASS(Blueprintable, Config=Game)
class ATresGimmickUpdateMgr : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATresGimmickActor>> UpdateClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PredictedSize;
    
    ATresGimmickUpdateMgr(const FObjectInitializer& ObjectInitializer);
};

