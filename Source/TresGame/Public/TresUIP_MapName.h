#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_MapName.generated.h"

class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_MapName : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_MapNameRoot;
    
public:
    UTresUIP_MapName();
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 ID, int32 Param);
    
};

