#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_Message.generated.h"

class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_Message : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGFxObject* m_RootMain;
    
public:
    UTresUIP_Message();
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 ID, int32 Param);
    
};

