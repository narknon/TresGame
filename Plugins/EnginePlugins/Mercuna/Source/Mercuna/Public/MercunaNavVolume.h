#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "MercunaNavVolume.generated.h"

class AMercunaNavOctree;

UCLASS(MinimalAPI, BlueprintType)
class AMercunaNavVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
    AMercunaNavOctree* NavOctree;
    
public:
    AMercunaNavVolume();
};

