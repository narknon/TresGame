#pragma once
#include "CoreMinimal.h"
#include "TresTriggerCapsule.h"
#include "TresAttractionFlowDrawingInterface.h"
#include "TresAttractionFlowDrawingEntry.h"
#include "TresAttractionFlowDrawingTriggerCapsule.generated.h"

UCLASS(Blueprintable)
class ATresAttractionFlowDrawingTriggerCapsule : public ATresTriggerCapsule, public ITresAttractionFlowDrawingInterface {
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
    ATresAttractionFlowDrawingTriggerCapsule(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

