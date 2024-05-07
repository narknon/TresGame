#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresWorldCode.h"
#include "TresUIGameFlagData.h"
#include "ETresUIDataVersion.h"
#include "TresNextTodoData.generated.h"

USTRUCT(BlueprintType)
struct FTresNextTodoData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIGameFlagData GameFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresUIDataVersion Version;
    
    TRESGAME_API FTresNextTodoData();
};

