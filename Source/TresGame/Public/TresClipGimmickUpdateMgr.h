#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGimmickUpdateMgr.h"
#include "TresClipGimmickUpdateMgr.generated.h"

class AActor;

UCLASS(Blueprintable)
class ATresClipGimmickUpdateMgr : public ATresGimmickUpdateMgr {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClipLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ClipClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClipActorPredictedSize;
    
    ATresClipGimmickUpdateMgr(const FObjectInitializer& ObjectInitializer);
};

