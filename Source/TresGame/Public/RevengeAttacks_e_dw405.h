#pragma once
#include "CoreMinimal.h"
#include "RevengeAttacks.h"
#include "RevengeAttacks_e_dw405.generated.h"

USTRUCT(BlueprintType)
struct FRevengeAttacks_e_dw405 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRevengeAttacks RevengeAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComboIndex;
    
    TRESGAME_API FRevengeAttacks_e_dw405();
};

