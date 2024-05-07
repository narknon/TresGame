#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleVoice.h"
#include "Engine/DataTable.h"
#include "WinniePuzzleVoicePriority.h"
#include "TresWinnieVoiceDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresWinnieVoiceDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WinniePuzzleVoice VoiceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WinniePuzzleVoicePriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnablePlayCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayCounterRandomValueMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayCounterRandomValueMax;
    
    TRESGAME_API FTresWinnieVoiceDataTable();
};

