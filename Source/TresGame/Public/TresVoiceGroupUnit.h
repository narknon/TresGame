#pragma once
#include "CoreMinimal.h"
#include "TresVoiceGroupUnit.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct TRESGAME_API FTresVoiceGroupUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_GroupNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_pVoice;
    
    FTresVoiceGroupUnit();
};

