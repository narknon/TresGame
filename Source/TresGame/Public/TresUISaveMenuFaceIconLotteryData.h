#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresWorldCode.h"
#include "TresUIGameFlagData.h"
#include "ETresChrUniqueID.h"
#include "ETresUIFaceUniqueID.h"
#include "ETresUIDataVersion.h"
#include "TresUISaveMenuFaceIconLotteryData.generated.h"

USTRUCT(BlueprintType)
struct FTresUISaveMenuFaceIconLotteryData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIGameFlagData GameFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresChrUniqueID> CharaIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresUIFaceUniqueID> FaceIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresUIDataVersion Version;
    
    TRESGAME_API FTresUISaveMenuFaceIconLotteryData();
};

