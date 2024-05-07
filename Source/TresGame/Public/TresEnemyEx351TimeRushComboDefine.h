#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx351TimeRushComboDefine.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx351TimeRushComboDefine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNoInOrderData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JoinNum;
    
    TRESGAME_API FTresEnemyEx351TimeRushComboDefine();
};

