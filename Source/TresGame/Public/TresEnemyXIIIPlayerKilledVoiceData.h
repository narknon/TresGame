#pragma once
#include "CoreMinimal.h"
#include "ETresPlayerUniqueID.h"
#include "TresEnemyXIIIPlayerKilledVoiceData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTresEnemyXIIIPlayerKilledVoiceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresPlayerUniqueID PlayerUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* VOICE;
    
    TRESGAME_API FTresEnemyXIIIPlayerKilledVoiceData();
};

