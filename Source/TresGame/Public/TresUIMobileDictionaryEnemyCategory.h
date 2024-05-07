#pragma once
#include "CoreMinimal.h"
#include "ETresUIDictionaryEnemyCategory.h"
#include "TresUIMobileDictionaryEnemyCategory.generated.h"

USTRUCT(BlueprintType)
struct FTresUIMobileDictionaryEnemyCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresUIDictionaryEnemyCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextId;
    
    TRESGAME_API FTresUIMobileDictionaryEnemyCategory();
};

