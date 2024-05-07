#pragma once
#include "CoreMinimal.h"
#include "TresRemyCookingGameDataTableBase.h"
#include "RemySprinklePepperContentsType.h"
#include "RemySprinklePepperEquipmentType.h"
#include "TresRemySprinklePepperV2DataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresRemySprinklePepperV2DataTable : public FTresRemyCookingGameDataTableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RemySprinklePepperEquipmentType EquipmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RemySprinklePepperContentsType ContentsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValidInputValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickNeutralValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GreatSuccessInputBonusCorrectionCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputTimingSuccessPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputTimingGreatSuccessPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputTimingTooSlowPercent;
    
    TRESGAME_API FTresRemySprinklePepperV2DataTable();
};

