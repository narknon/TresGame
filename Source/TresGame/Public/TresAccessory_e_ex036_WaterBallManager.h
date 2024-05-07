#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresAccessory_e_ex036_WaterBallManager.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, HideDropdown)
class ATresAccessory_e_ex036_WaterBallManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_WaterBallEffData;
    
    ATresAccessory_e_ex036_WaterBallManager(const FObjectInitializer& ObjectInitializer);
};

