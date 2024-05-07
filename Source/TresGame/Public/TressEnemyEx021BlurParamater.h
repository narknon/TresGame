#pragma once
#include "CoreMinimal.h"
#include "TressEnemyEx021BlurParamater.generated.h"

USTRUCT(BlueprintType)
struct FTressEnemyEx021BlurParamater {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NormalParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AccelParam;
    
    TRESGAME_API FTressEnemyEx021BlurParamater();
};

