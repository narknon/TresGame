#pragma once
#include "CoreMinimal.h"
#include "TresTriggerSphere.h"
#include "TresAttractionFlowDrawingInterface.h"
#include "TresAttractionFlowDrawingEntry.h"
#include "TresAttractionFlowDrawingTriggerSphere.generated.h"

UCLASS(Blueprintable)
class ATresAttractionFlowDrawingTriggerSphere : public ATresTriggerSphere, public ITresAttractionFlowDrawingInterface {
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
    ATresAttractionFlowDrawingTriggerSphere(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

