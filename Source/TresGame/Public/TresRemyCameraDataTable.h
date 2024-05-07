#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RemyCameraWorkTiming.h"
#include "TresRemyCameraDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresRemyCameraDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RemyCameraWorkTiming CameraWorkTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraWorkEventName;
    
    TRESGAME_API FTresRemyCameraDataTable();
};

