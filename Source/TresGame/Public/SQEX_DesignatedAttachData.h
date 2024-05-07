#pragma once
#include "CoreMinimal.h"
#include "SQEX_DesignatedAttachData.generated.h"

class USQEX_ParticleAttachDataAsset;

USTRUCT(BlueprintType)
struct FSQEX_DesignatedAttachData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* DesignatedAttachData;
    
    TRESGAME_API FSQEX_DesignatedAttachData();
};

