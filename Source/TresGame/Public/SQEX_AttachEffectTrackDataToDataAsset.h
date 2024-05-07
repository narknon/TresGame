#pragma once
#include "CoreMinimal.h"
#include "SQEX_AttachEffectTrackDataToDataAsset.generated.h"

class USQEX_ParticleAttachDataAsset;

USTRUCT(BlueprintType)
struct FSQEX_AttachEffectTrackDataToDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseCommonAttachData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USQEX_ParticleAttachDataAsset*> AttachDatas;
    
    TRESGAME_API FSQEX_AttachEffectTrackDataToDataAsset();
};

