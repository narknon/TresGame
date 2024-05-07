#pragma once
#include "CoreMinimal.h"
#include "TresRemyCookingGameDataTableBase.h"
#include "RemyFlambeFoodType.h"
#include "TresRemyFlambeV2DataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresRemyFlambeV2DataTable : public FTresRemyCookingGameDataTableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RemyFlambeFoodType FoodType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PourStickPourStartValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PourStickRotationJudgementAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PourStickRotationAnimationCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PourStickNoRotationJudgementTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlambeStickFlambeValue;
    
    TRESGAME_API FTresRemyFlambeV2DataTable();
};

