#pragma once
#include "CoreMinimal.h"
#include "EX355_DashClaymoreMap.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FEX355_DashClaymoreMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileBase* m_pLastProj;
    
    TRESGAME_API FEX355_DashClaymoreMap();
};

