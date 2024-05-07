#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_MultiItemGet_ItemText.h"
#include "TresUIP_MultiItemGet.generated.h"

class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_MultiItemGet : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_RootMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Window;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_TextArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Icon;
    
    UPROPERTY(EditAnywhere, Transient)
    FTresUIP_MultiItemGet_ItemText m_ItemTexts[5];
    
public:
    UTresUIP_MultiItemGet();
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 ID, int32 Param);
    
};

