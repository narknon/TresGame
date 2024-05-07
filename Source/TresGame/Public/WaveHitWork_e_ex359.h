#pragma once
#include "CoreMinimal.h"
#include "WaveHitWork_e_ex359.generated.h"

class ATresCharPawnBase;

USTRUCT(BlueprintType)
struct FWaveHitWork_e_ex359 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* pOwner;
    
    TRESGAME_API FWaveHitWork_e_ex359();
};

