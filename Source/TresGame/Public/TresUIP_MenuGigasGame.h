#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_MenuGigasGame.generated.h"

class UAudioComponent;
class UTresUIP_GigasGameScoreListItem;
class UGFxObject;
class UTresASProxyTresControlsScrollBar;
class UTresASProxyTresControlsButton;

UCLASS(Blueprintable)
class UTresUIP_MenuGigasGame : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Title;
    
    UPROPERTY(EditAnywhere, Transient)
    UTresASProxyTresControlsButton* m_TitleButtons[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_RedyStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ResultRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ClearTimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_TotalScoreText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_NewRecordAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ScoreList;
    
    UPROPERTY(EditAnywhere, Transient)
    UTresUIP_GigasGameScoreListItem* m_ScoreListItem[9];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsScrollBar* m_ScoreListScrollBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_ResultPointRollSEAudioComponent;
    
public:
    UTresUIP_MenuGigasGame();
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 ID, int32 Param);
    
};

