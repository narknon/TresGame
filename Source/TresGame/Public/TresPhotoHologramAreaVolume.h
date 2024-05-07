#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresPhotoHologramAreaVolume.generated.h"

UCLASS(Blueprintable)
class ATresPhotoHologramAreaVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEndOverlapTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWarningEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayerLocationResetEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHologramLocationResetEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHologramDestroyEvent;
    
    ATresPhotoHologramAreaVolume(const FObjectInitializer& ObjectInitializer);
};

