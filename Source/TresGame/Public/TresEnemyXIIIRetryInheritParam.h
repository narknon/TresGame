#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresEnemyXIIIRetryInheritParam.generated.h"

UCLASS(Blueprintable)
class UTresEnemyXIIIRetryInheritParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_HitPoint;
    
    UTresEnemyXIIIRetryInheritParam();
};

