#pragma once
#include "CoreMinimal.h"
#include "TresMapSetVolume.h"
#include "TresMapSetVolumeEx.generated.h"

class UTresMapSet;

UCLASS(Abstract, Blueprintable)
class TRESGAME_API ATresMapSetVolumeEx : public ATresMapSetVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresMapSet* EndOverlapMapset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndOverlapCommandName;
    
    ATresMapSetVolumeEx(const FObjectInitializer& ObjectInitializer);
};

