#pragma once
#include "CoreMinimal.h"
#include "TresComNpcActGreet.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcActGreet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Rate;
    
    TRESGAME_API FTresComNpcActGreet();
};

