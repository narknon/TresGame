#pragma once
#include "CoreMinimal.h"
#include "TresTriggerBox.h"
#include "TresAttractionFlowDrawingInterface.h"
#include "TresAttractionFlowDrawingEntry.h"
#include "TresAttractionFlowDrawingTriggerBox.generated.h"

UCLASS(Blueprintable)
class ATresAttractionFlowDrawingTriggerBox : public ATresTriggerBox, public ITresAttractionFlowDrawingInterface {
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
    ATresAttractionFlowDrawingTriggerBox(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

