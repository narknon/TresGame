#pragma once
#include "CoreMinimal.h"
#include "TresAccessory_e_ex036_WaterBall.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FTresAccessory_e_ex036_WaterBall {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_WaterBallEff;
    
    TRESGAME_API FTresAccessory_e_ex036_WaterBall();
};

