#pragma once
#include "CoreMinimal.h"
#include "DancePlayerAction.generated.h"

USTRUCT(BlueprintType)
struct FDancePlayerAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NormalMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GreatMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BadMotion;
    
    TRESGAME_API FDancePlayerAction();
};

