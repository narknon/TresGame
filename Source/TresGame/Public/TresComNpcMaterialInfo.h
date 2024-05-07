#pragma once
#include "CoreMinimal.h"
#include "TresComNpcMaterialInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcMaterialInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MaterialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fValue;
    
    TRESGAME_API FTresComNpcMaterialInfo();
};

