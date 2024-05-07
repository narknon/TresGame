#pragma once
#include "CoreMinimal.h"
#include "TresComNpcRandomVoiceDatas.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTresComNpcRandomVoiceDatas {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_VoiceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_VoiceLists;
    
    TRESGAME_API FTresComNpcRandomVoiceDatas();
};

