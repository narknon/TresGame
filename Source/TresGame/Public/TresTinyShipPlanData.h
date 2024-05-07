#pragma once
#include "CoreMinimal.h"
#include "TresGummiShipHeader.h"
#include "Engine/DataTable.h"
#include "TresGummiShipSticker.h"
#include "TresGummiShipPartsStruct.h"
#include "TresTinyShipPlanData.generated.h"

USTRUCT(BlueprintType)
struct FTresTinyShipPlanData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGummiShipHeader m_header;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresGummiShipSticker m_Sticker[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGummiShipPartsStruct> m_body;
    
    TRESGAME_API FTresTinyShipPlanData();
};

