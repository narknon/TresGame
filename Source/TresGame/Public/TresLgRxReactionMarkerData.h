#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresLgRxReactionMarkerData.generated.h"

USTRUCT(BlueprintType)
struct FTresLgRxReactionMarkerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_Offset;
    
    TRESGAME_API FTresLgRxReactionMarkerData();
};

