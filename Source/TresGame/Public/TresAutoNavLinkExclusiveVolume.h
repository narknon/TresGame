#pragma once
#include "CoreMinimal.h"
#include "TresAutoNavLinkExclusiveInterface.h"
#include "GameFramework/Volume.h"
#include "TresAutoNavLinkExclusiveVolumeInfo.h"
#include "TresAutoNavLinkExclusiveVolume.generated.h"

UCLASS(Blueprintable)
class ATresAutoNavLinkExclusiveVolume : public AVolume, public ITresAutoNavLinkExclusiveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresAutoNavLinkExclusiveVolumeInfo> ExclusiveInfo;
    
    ATresAutoNavLinkExclusiveVolume(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

