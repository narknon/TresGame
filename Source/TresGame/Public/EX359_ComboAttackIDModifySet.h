#pragma once
#include "CoreMinimal.h"
#include "EX359_ComboAttackIDModifySet.generated.h"

USTRUCT(BlueprintType)
struct FEX359_ComboAttackIDModifySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_OldAttackID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_NewAttackID;
    
    TRESGAME_API FEX359_ComboAttackIDModifySet();
};

