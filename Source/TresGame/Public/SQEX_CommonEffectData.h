#pragma once
#include "CoreMinimal.h"
#include "SQEX_CommonEffectData.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FSQEX_CommonEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CommonKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* CommonEffect;
    
    TRESGAME_API FSQEX_CommonEffectData();
};

