#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresDlcCheatCode.h"
#include "ETresUICheatCategory.h"
#include "TresCodeMenuCheatData.generated.h"

USTRUCT(BlueprintType)
struct FTresCodeMenuCheatData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresDlcCheatCode m_Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_NameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_DetailId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresUICheatCategory m_Category;
    
    TRESGAME_API FTresCodeMenuCheatData();
};

