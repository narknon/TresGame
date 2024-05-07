#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUIParts.h"
#include "TresUIP_HudGummiShip.generated.h"

class UTresUIP_HudGummiParamSet;
class UTresUIP_HudGummiShipEnemyHP;
class UTresUIP_HudGummiShipItemGet;
class UTresUIP_HudGummiShipTech;
class UTresUIP_HudGummiShipSPWeapon;
class UTresUIP_HudGummiShipRank;
class UTresUIP_HudGummiShipSight;
class UTresUIP_HudGummiShipGuide;
class UTresUIP_HudGummiShipRader;
class UTresUIP_HudGummiShipEnemyMarkers;
class UTresUIP_HudGummiShipTargetMarkers;
class UTresUIP_HudGummiShipChain;
class UTresUIP_HudGummiShipScore;
class UTresUIP_HudGummiShipScoreRate;
class UTresUIP_HudGummiShipBonus;
class UTresUIP_HudGummiShipAutoLock;
class UTresUIP_HudGummiShipResult;
class UTresUIP_HudGummiShipAlert;
class UTresUIP_HudGummiShipAutoPilot;
class UTresUIP_HudGummiShipMessageWindow;
class UTresUIP_HudGummiShipInfomation;

UCLASS(Blueprintable)
class UTresUIP_HudGummiShip : public UTresGumiShipUIParts {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipHudResultRetry);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipHudResultRankConfirmed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipHudResultFinish);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipHudResultRankConfirmed OnResultHudRankConfirmedDispather;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipHudResultFinish OnResultHudFinishDispather;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipHudResultRetry OnResultHudRetryDispather;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipSPWeapon* m_pSpWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipRank* m_pRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipItemGet* m_pItemGet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiParamSet* m_pParamSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipSight* m_pSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipGuide* m_pGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipRader* m_pRader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipTech* m_pTech;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipEnemyMarkers* m_pMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipTargetMarkers* m_pTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipChain* m_pChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipScore* m_pScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipScoreRate* m_pScoreRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipBonus* m_pBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipAutoLock* m_pAutoLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipEnemyHP* m_pEnemyHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipResult* m_pResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipAlert* m_pAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipAutoPilot* m_pAutoPilot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipMessageWindow* m_pMessageWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGummiShipInfomation* m_pInfomation;
    
public:
    UTresUIP_HudGummiShip();
private:
    UFUNCTION(BlueprintCallable)
    void _OnResultRetry();
    
    UFUNCTION(BlueprintCallable)
    void _OnResultRankConfirmed();
    
    UFUNCTION(BlueprintCallable)
    void _OnResultFinish();
    
};

