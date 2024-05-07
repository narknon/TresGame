#pragma once
#include "CoreMinimal.h"
#include "TresComNpcActRandomValue.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcActRandomValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Random;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fScale;
    
    TRESGAME_API FTresComNpcActRandomValue();
};

