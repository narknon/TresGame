#pragma once
#include "CoreMinimal.h"
#include "TresRandomVoiceForTable.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTresRandomVoiceForTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_pVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_dRandomWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MouthMotionName;
    
    TRESGAME_API FTresRandomVoiceForTable();
};

