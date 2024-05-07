#pragma once
#include "CoreMinimal.h"
#include "ETresMapSetObjType.h"
#include "TresMapSetObjData.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresMapSetObjData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresMapSetObjType::Type> Type;
    
    FTresMapSetObjData();
};

