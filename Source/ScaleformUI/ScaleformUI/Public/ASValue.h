#pragma once
#include "CoreMinimal.h"
#include "EASType.h"
#include "ASValue.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct SCALEFORMUI_API FASValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EASType::Type> ASType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ASBoolean;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ASInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ASNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ASString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UGFxObject* ASObject;
    
    FASValue();
};

