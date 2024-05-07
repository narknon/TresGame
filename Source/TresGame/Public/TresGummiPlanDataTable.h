#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGummiPlanSetData.h"
#include "TresGummiPlanDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGummiPlanDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGummiPlanSetData> m_nGummiPlanSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGummiPlanSetData> m_nSpecialGummiPlanSet;
    
    TRESGAME_API FTresGummiPlanDataTable();
};

