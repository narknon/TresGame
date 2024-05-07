#pragma once
#include "CoreMinimal.h"
#include "ETresCoopColorSmokeKind.h"
#include "TresCoopColorSmokeInfo.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresCoopColorSmokeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresCoopColorSmokeKind m_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pSmokeEffect;
    
    TRESGAME_API FTresCoopColorSmokeInfo();
};

