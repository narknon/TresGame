#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresUIHudCommandExKind.h"
#include "ETresCommandKind.h"
#include "ETresUIMainCommandTitleKind.h"
#include "TresCockpitStyleInfo.h"
#include "TresUIMainCommandData.generated.h"

class USwfMovie;

USTRUCT(BlueprintType)
struct FTresUIMainCommandData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresCommandKind> m_CommandKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresUIHudCommandExKind m_CommandExKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresUIMainCommandTitleKind m_TitleKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<USwfMovie> m_SwfAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresCockpitStyleInfo m_styleInfo;
    
    TRESGAME_API FTresUIMainCommandData();
};

