#pragma once
#include "CoreMinimal.h"
#include "TresGameCheatManager.h"
#include "TresSoKcCheatManager.generated.h"

UCLASS(Blueprintable)
class UTresSoKcCheatManager : public UTresGameCheatManager {
    GENERATED_BODY()
public:
    UTresSoKcCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDrawSoKcKeyHoleDetectCollision(bool bVisibility);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDrawSoKcKeyHoleConnectingInternalCount(bool bVisibility);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDrawSoKcKeyBladeBeamRaycast(bool bVisibility);
    
};

