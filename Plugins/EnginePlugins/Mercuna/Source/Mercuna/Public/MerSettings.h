#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MerSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class MERCUNA_API UMerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite)
    float DebugLengthScale;
    
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite)
    bool bAlwaysShowErrors;
    
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite)
    float CellSize;
    
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite)
    int32 MinPawnRadius;
    
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite)
    int32 MaxPawnRadius;
    
    UMerSettings();
};

