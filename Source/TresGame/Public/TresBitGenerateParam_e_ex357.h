#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyBitGenerateLocation_e_ex357.h"
#include "UObject/NoExportTypes.h"
#include "TresBitGenerateParam_e_ex357.generated.h"

USTRUCT(BlueprintType)
struct FTresBitGenerateParam_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyBitGenerateLocation_e_ex357::Type> AppearLocationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AppearDistance;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FFloatInterval AppearHeightRange;
    
    TRESGAME_API FTresBitGenerateParam_e_ex357();
};

