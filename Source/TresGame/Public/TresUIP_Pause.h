#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_Pause.generated.h"

class UGFxObject;
class UTresUIP_PauseButton;
class UTresUIP_GameOver;

UCLASS(Blueprintable)
class UTresUIP_Pause : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGFxObject* m_PauseRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGFxObject* m_PauseTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGFxObject* m_PauseHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGFxObject* m_PauseHintText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGFxObject* m_PauseButtonSet;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    UTresUIP_PauseButton* m_PauseButton[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGFxObject* m_PauseBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_GameOver* m_GameOver;
    
public:
    UTresUIP_Pause();
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 ID, int32 Param);
    
};

