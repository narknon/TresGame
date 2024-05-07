#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProj_MagicReaction.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FTresProj_MagicReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_ReactionSpawnProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_ReactionOnlySameTeam: 1;
    
    TRESGAME_API FTresProj_MagicReaction();
};

