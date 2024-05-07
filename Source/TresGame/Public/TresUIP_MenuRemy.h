#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_MenuRemy.generated.h"

class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_MenuRemy : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_GrandMenuBtnHelp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_SpecialBtnHelp;
    
public:
    UTresUIP_MenuRemy();
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 ID, int32 Param);
    
};

