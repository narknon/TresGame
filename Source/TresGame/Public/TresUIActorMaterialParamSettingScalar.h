#pragma once
#include "CoreMinimal.h"
#include "TresUIActorMaterialParamSettingScalar.generated.h"

USTRUCT(BlueprintType)
struct FTresUIActorMaterialParamSettingScalar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    TRESGAME_API FTresUIActorMaterialParamSettingScalar();
};

