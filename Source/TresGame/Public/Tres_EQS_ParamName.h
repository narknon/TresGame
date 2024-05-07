#pragma once
#include "CoreMinimal.h"
#include "EQS_PARAM_VALUE_Enum.h"
#include "EQS_PARAM_NAME_Enum.h"
#include "Tres_EQS_ParamName.generated.h"

USTRUCT(BlueprintType)
struct FTres_EQS_ParamName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQS_PARAM_NAME_Enum m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RandomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQS_PARAM_VALUE_Enum m_EnumValue;
    
    TRESGAME_API FTres_EQS_ParamName();
};

