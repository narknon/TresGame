#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntityControlVolume.h"
#include "UObject/NoExportTypes.h"
#include "TresAttractionFlowDrawingInterface.h"
#include "TresAttractionFlowDrawingEntry.h"
#include "TresBattleVolume.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API ATresBattleVolume : public ATresLevelEntityControlVolume, public ITresAttractionFlowDrawingInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid m_GUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_NotifyMovedOutOfBattleArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresAttractionFlowDrawingEntry> m_DrawingTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_EnableDrawing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_BattleStarted;
    
public:
    ATresBattleVolume(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

