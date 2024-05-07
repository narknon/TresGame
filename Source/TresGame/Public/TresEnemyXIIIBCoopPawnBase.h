#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIBPawnBase.h"
#include "TresEnemyXIIIBCoopPawnBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresEnemyXIIIBCoopPawnBase : public ATresEnemyXIIIBPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BothVanishModeEndTime;
    
public:
    ATresEnemyXIIIBCoopPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, Exec)
    bool IsEndVanishMarluxiaAndLarxene() const;
    
};

