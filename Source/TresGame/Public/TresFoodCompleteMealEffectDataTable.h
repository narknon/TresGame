#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresAbilityKind.h"
#include "TresFoodCompleteMealEffectDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresFoodCompleteMealEffectDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresAbilityKind m_AbilityPlus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Level;
    
    TRESGAME_API FTresFoodCompleteMealEffectDataTable();
};

