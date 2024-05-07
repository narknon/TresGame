#pragma once
#include "CoreMinimal.h"
#include "TresAnims_e_he001a.generated.h"

USTRUCT(BlueprintType)
struct FTresAnims_e_he001a {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReactionName;
    
    TRESGAME_API FTresAnims_e_he001a();
};

