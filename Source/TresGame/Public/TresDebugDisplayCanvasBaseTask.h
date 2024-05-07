#pragma once
#include "CoreMinimal.h"
#include "TresDebugDisplayTask.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresDebugDisplayCanvasBaseTask.generated.h"

class UCanvas;

UCLASS(Abstract, Blueprintable)
class UTresDebugDisplayCanvasBaseTask : public UTresDebugDisplayTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCanvas* Canvas;
    
public:
    UTresDebugDisplayCanvasBaseTask();
protected:
    UFUNCTION(BlueprintCallable)
    void SetCanvasDrawColor(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDraw();
    
    UFUNCTION(BlueprintCallable)
    void DrawFillBox(FVector2D pos, FVector2D Size, FLinearColor RenderColor);
    
};

