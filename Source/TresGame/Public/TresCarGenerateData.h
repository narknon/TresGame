#pragma once
#include "CoreMinimal.h"
#include "TresCarGenerateData.generated.h"

class UTresCarBodyWithColorDataAsset;
class UTresCarDriverDataAsset;

USTRUCT(BlueprintType)
struct FTresCarGenerateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresCarBodyWithColorDataAsset* CarBodyAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresCarDriverDataAsset*> CarDriverAsset;
    
    TRESGAME_API FTresCarGenerateData();
};

