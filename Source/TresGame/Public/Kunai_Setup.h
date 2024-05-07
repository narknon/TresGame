#pragma once
#include "CoreMinimal.h"
#include "Kunai_Setup.generated.h"

USTRUCT(BlueprintType)
struct FKunai_Setup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_IgnoreAtkCollGroupName;
    
    TRESGAME_API FKunai_Setup();
};

