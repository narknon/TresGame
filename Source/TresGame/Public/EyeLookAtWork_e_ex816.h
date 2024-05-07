#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EyeLookAtWork_e_ex816.generated.h"

USTRUCT(BlueprintType)
struct FEyeLookAtWork_e_ex816 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BaseBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MinLimitRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MaxLimitRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
public:
    TRESGAME_API FEyeLookAtWork_e_ex816();
};

