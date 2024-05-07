#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresAttractionFlowDrawingInterface.h"
#include "TresAttractionFlowDrawingEntry.h"
#include "TresAttractionFlowDrawingVolume.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class ATresAttractionFlowDrawingVolume : public ATresVolume, public ITresAttractionFlowDrawingInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresAttractionFlowDrawingEntry> m_DrawingTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_ForceDisplay;
    
public:
    ATresAttractionFlowDrawingVolume(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void InvokeEndOverlap(bool TestOverlap, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool ImmediateInvoke);
    
    UFUNCTION(BlueprintCallable)
    void InvokeBeginOverlap(bool TestOverlap, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool ImmediateInvoke);
    
    
    // Fix for true pure virtual functions not being implemented
};

