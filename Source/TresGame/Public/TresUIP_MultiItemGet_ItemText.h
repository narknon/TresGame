#pragma once
#include "CoreMinimal.h"
#include "TresUIP_MultiItemGet_ItemText.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresUIP_MultiItemGet_ItemText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* Max;
    
    TRESGAME_API FTresUIP_MultiItemGet_ItemText();
};

