#pragma once
#include "CoreMinimal.h"
#include "TresGameCheatManager.h"
#include "TresSharedCheatManager.generated.h"

UCLASS(Abstract, Blueprintable)
class UTresSharedCheatManager : public UTresGameCheatManager {
    GENERATED_BODY()
public:
    UTresSharedCheatManager();
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDemoDebugInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugInfo();
    
};

