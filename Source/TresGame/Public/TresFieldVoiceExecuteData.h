#pragma once
#include "CoreMinimal.h"
#include "TresFieldVoiceExecuteData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTresFieldVoiceExecuteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pExecuter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    TRESGAME_API FTresFieldVoiceExecuteData();
};

