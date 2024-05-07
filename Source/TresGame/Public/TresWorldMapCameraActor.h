#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "TresWorldMapCameraActor.generated.h"

UCLASS(Blueprintable)
class ATresWorldMapCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    ATresWorldMapCameraActor(const FObjectInitializer& ObjectInitializer);
};

