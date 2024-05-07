#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleSoundEffect.h"
#include "Engine/DataTable.h"
#include "TresWinnieSoundEffectDataTable.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTresWinnieSoundEffectDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WinniePuzzleSoundEffect SoundEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundEffect;
    
    TRESGAME_API FTresWinnieSoundEffectDataTable();
};

