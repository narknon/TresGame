#pragma once
#include "CoreMinimal.h"
#include "TresDetectMarkerComponentBase.h"
#include "UObject/NoExportTypes.h"
#include "HiddenMickeyBoundingAreaCircles.h"
#include "TresHiddenMickeyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresHiddenMickeyComponent : public UTresDetectMarkerComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MarkID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bUseDefaultDetectMarkerBoundingAreaOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bUseAccurateBoundingArea: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_MickeyMarkSizeRectangle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FHiddenMickeyBoundingAreaCircles> m_MickeyMarkSizeCircles;
    
public:
    UTresHiddenMickeyComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLuckyMarkRecorded() const;
    
};

