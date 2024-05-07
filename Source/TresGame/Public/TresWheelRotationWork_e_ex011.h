#pragma once
#include "CoreMinimal.h"
#include "TresWheelRotationWork_e_ex011.generated.h"

USTRUCT(BlueprintType)
struct FTresWheelRotationWork_e_ex011 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
public:
    TRESGAME_API FTresWheelRotationWork_e_ex011();
};

