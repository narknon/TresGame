#pragma once
#include "CoreMinimal.h"
#include "TresComNpcEntityVoiceData.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcEntityVoiceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EntityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVoiceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_VoiceLists;
    
    TRESGAME_API FTresComNpcEntityVoiceData();
};

