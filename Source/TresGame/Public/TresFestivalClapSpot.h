#pragma once
#include "CoreMinimal.h"
#include "TresFestivalClapSpot.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FTresFestivalClapSpot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pPSC;
    
    TRESGAME_API FTresFestivalClapSpot();
};

