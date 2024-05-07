#pragma once
#include "CoreMinimal.h"
#include "TresGummiShipAbility.h"
#include "TresGummiShipHeader.h"
#include "Engine/DataTable.h"
#include "TresGummiShipSticker.h"
#include "TresGummiShipPartsStruct.h"
#include "TresGummiShipPlanData.generated.h"

USTRUCT(BlueprintType)
struct FTresGummiShipPlanData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGummiShipHeader m_header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGummiShipAbility m_Ability;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresGummiShipSticker m_Sticker[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGummiShipPartsStruct> m_body;
    
    TRESGAME_API FTresGummiShipPlanData();
};

