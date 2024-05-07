#pragma once
#include "CoreMinimal.h"
#include "TresInputStruct.generated.h"

USTRUCT(BlueprintType)
struct FTresInputStruct {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FirstRepeatTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RepeatTime;
    
public:
    TRESGAME_API FTresInputStruct();
};

