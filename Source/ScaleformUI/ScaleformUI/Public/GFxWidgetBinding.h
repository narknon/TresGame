#pragma once
#include "CoreMinimal.h"
#include "GFxWidgetBinding.generated.h"

USTRUCT(BlueprintType)
struct FGFxWidgetBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName WidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* WidgetClass;
    
    SCALEFORMUI_API FGFxWidgetBinding();
};

