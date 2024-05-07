#pragma once
#include "CoreMinimal.h"
#include "TresComNpcActionSetValue.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcActionSetValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ScriptName;
    
    TRESGAME_API FTresComNpcActionSetValue();
};

