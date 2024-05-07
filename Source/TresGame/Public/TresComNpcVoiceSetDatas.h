#pragma once
#include "CoreMinimal.h"
#include "TresComNpcVoiceSetDatas.generated.h"

class UTresFieldVoice;

USTRUCT(BlueprintType)
struct FTresComNpcVoiceSetDatas {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_VoiceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresFieldVoice*> m_VoiceLists;
    
    TRESGAME_API FTresComNpcVoiceSetDatas();
};

