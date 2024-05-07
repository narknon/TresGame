#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TresSnowShaderController.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class ATresSnowShaderController : public AActor {
    GENERATED_BODY()
public:
    ATresSnowShaderController(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSnowRenderResolutionWidth(int32 inWidth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSnowRenderHeightRatio(float inHeightRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSnowRenderDepthLocation(FVector pos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSnowRenderCaptureOffset(float InOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveDepthRender(UPrimitiveComponent* inPrimitive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableSnowRenderDepthFollowPlayer(bool inbDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearSnowRenderDepth();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddDepthRender(UPrimitiveComponent* inPrimitive);
    
};

