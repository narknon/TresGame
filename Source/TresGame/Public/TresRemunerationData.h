#pragma once
#include "CoreMinimal.h"
#include "TresRemunerationData.generated.h"

USTRUCT(BlueprintType)
struct FTresRemunerationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 Crc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemKeyArray;
    
    TRESGAME_API FTresRemunerationData();
};

