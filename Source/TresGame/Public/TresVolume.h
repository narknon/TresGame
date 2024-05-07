#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "TresNotifyInterface.h"
#include "TresVolume.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable)
class TRESGAME_API ATresVolume : public AVolume, public ITresNotifyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* UserData;
    
    ATresVolume(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

