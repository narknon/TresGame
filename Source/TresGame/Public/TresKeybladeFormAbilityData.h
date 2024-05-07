#pragma once
#include "CoreMinimal.h"
#include "ETresTextAbilityKind.h"
#include "TresKeybladeFormAbilityData.generated.h"

USTRUCT(BlueprintType)
struct FTresKeybladeFormAbilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresTextAbilityKind> m_TextAbilitys;
    
    TRESGAME_API FTresKeybladeFormAbilityData();
};

