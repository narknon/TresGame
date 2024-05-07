#pragma once
#include "CoreMinimal.h"
#include "TresUIActorMaterialParamSettingCoefficient.generated.h"

USTRUCT(BlueprintType)
struct FTresUIActorMaterialParamSettingCoefficient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    TRESGAME_API FTresUIActorMaterialParamSettingCoefficient();
};

