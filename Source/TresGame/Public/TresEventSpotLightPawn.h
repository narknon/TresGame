#pragma once
#include "CoreMinimal.h"
#include "TresEventPawnBase.h"
#include "TresEventSpotLightPawn.generated.h"

class USpotLightComponent;

UCLASS(Abstract, Blueprintable)
class TRESGAME_API ATresEventSpotLightPawn : public ATresEventPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* MySpotLight;
    
    ATresEventSpotLightPawn(const FObjectInitializer& ObjectInitializer);
};

